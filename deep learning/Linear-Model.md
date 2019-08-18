Linear Model
---

Note: Most of content is from scikit-doc.

In this context, we will talk about generalized linear models, including

* OLS
* Ridge Regression
* Lasso
* Elastic Net
* Multi-task Lasso
* Least Angle Regression
* LARS Lasso
* Orthogonal Matching
* Bayesian Regression
* Logistic Regression
* Stochastic Gradient
* Perceptron
* Passive Aggressive
* Robustness Regression
* Polynomial Regression


Wow... What A Long List! There are some terms that are first into my sight, so I will learn it like you fellows.

# Ordinary Least Squares, OLS

OLS is a problem of optimization, its function looks like:

Min:  (Linear(X)  -  y ) ** 2

In my memory, it's also known as SSE (Sum of Square Error).  You may have seen a few times about the following formula, a minimize of optimization problem.

![](http://ww4.sinaimg.cn/large/5810d07bjw1erkf4tifigj20k20icq3f.jpg)

I'd like to combine theory and scikit code， here I will expain the code in sklearn's doc. 


Use Dataset: diabetes

	diabetes.data[:, np.newaxis]
	training\testing   :-20

Modeler: linear_model.LinearRegression()

Fit:  regr.fit(x_train, y_train)

Outout: regr.coef_, regr.predict, regr.score

Plot: In the help of plt, we can plot the test data's regression line and raw data point above.

[code of ols example](https://github.com/staticor/scipy-route/blob/master/supervised-1-linearmodel/OLS-example.py)

## OLS complexity
O(n* p**2) 
n, p: size of input X (n observations, p features)

# Ridge Regression
		
Ridge Regression is a model considering model complexity and model's predicting effect.

So we will get a new formula from OLS:

![ridge formula](http://ww3.sinaimg.cn/large/5810d07bjw1erkwkjbkx7j20do02qweg.jpg)


Here, alpha >= 0 is a complexity parameter that controls the amount of shrinkage: larger alpha, greater amount of shrinkage and the coefficients become more robust to collinearity.

We can see the trend of curve as alpha changes:
![](http://scikit-learn.org/stable/_images/plot_ridge_path_001.png) 