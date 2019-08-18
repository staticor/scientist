## The curse of dimensionality 

### What is this?

Richard E. Bellman first come up with the **Curse of dimensionality** when considering DP problems.

Based my understanding, when our model built in lower-dimension  applied into higher-dimension space, something bad just happened.

Take KNN (simply using distance here) for example, we need the distance between points to find neighboring groups. And we will set a upper boundary to avoid outliers points. Set it to **d**.
So the modeling space can be splitted into severl cells which volumn related to **d**.


![](http://ww3.sinaimg.cn/bmiddle/5810d07bjw1erm6f2rlnwj213e06h3yq.jpg)

If the d is 0.01, and we will have 100(1/d) observations in every unit area, so the total average points is n * 1/d. 

If the number of feature is p, you now require n * 1 / d^p. As p gets large, the number of training points require for a good estimator grows exponentially.

I think this [article](http://www.visiondummy.com/2014/04/curse-dimensionality-affect-classification/#How_to_avoid_the_curse_of_dimensionality) clarify this more clearly. And address a picture from this.

![curse of dim cat](http://ww4.sinaimg.cn/bmiddle/5810d07bjw1erm6u193u3j20q509k0tv.jpg)

More info can be found in the [wiki](http://en.wikipedia.org/wiki/Curse_of_dimensionality)


### How to avoid?

There is no fixed rule that defines hom many features should be used in a estimator. In factor, this relates to the amount of training set, the type of estimator itself, and other factors.

A direct idea is to compress the space of dimension. This method called **Feature Extraction methods**, by constructuring a transform from raw data to a new spaces. We can use some algorithms which use the optimal linear or non-linear combination of orginal features to reduce the deminsinality.

Such as **PCA** 


这一部分的描述我自己还没有完全理会， 直到后来我又参考了[中文WIKI](http://zh.wikipedia.org/wiki/%E7%BB%B4%E6%95%B0%E7%81%BE%E9%9A%BE)以及[这篇文章](http://www.visiondummy.com/2014/04/curse-dimensionality-affect-classification/#How_to_avoid_the_curse_of_dimensionality) 我现在可能用更简单的语言讲出来.

.

* 维度灾难(curse of dimensions)

在采样\组合数学\机器学习等领域, 当面临的问题由低维空间向高维空间时, 由于原空间的体积变化是指数级的,而样本量的大小却很难同步变化, 导致样本量的分布由原始的相对密集状态很迅速就变为了稀疏状态.  而很多模型在处理数据的稀疏性上, 还存在一些问题. 这就给分析问题带来了很多障碍.

应对策略:
 - 降维: 既然维度空间过高造成了不好的影响, 那么寻找试图降低\压缩维数的方法, 如 PCA.
 - 