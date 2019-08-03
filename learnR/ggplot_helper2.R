
install.packages('IRkernel')


IRkernel::installspec()  # to register the kernel in the current R installation




library(ggplot2)

dat = read.csv("/Users/steve/Downloads/test.csv", header = TRUE)

dat2 = read.csv("/Users/steve/Downloads/test2.csv", header = TRUE)

figure()

qplot( hournumber, uv, data=dat, colour=factor(ev) )






qplot( weeknumber, uv, data=dat, colour=factor(ev) )


(p <- ggplot( weeknumber, aes(variable, Name)) + geom_tile(aes(fill = rescale),
                                                     +     colour = "white") + scale_fill_gradient(low = "white",
                                                                                                   +     high = "steelblue"))



head(df_heatmap)

genes   patient expression_level
1 GEN_A PATIENT_1       -0.5312459
2 GEN_B PATIENT_1        3.4286519
3 GEN_C PATIENT_1       -3.4287675
4 GEN_D PATIENT_1        2.7277366
5 GEN_E PATIENT_1        4.4684617
6 GEN_F PATIENT_1        2.3539905
Once we have our dataframe (df_heatmap), we can visualize the values with the package ggplot2.

# Elaboration of heatmap (white - steelblue)

ggplot(dat, aes(weeknumber, hournumber )) +
  geom_tile(aes(fill = uv), color = "white") +
  scale_fill_gradient(low = "white", high = "red") +
  ylab("List of genes ") +
  xlab("List of patients") +
  theme(legend.title = element_text(size = 10),
        legend.text = element_text(size = 12),
        plot.title = element_text(size=16),
        axis.title=element_text(size=14,face="bold"),
        axis.text.x = element_text(angle = 90, hjust = 1)) + labs(fill = "uv")









ggplot(dat2, aes(dayn, hournumber ), facet_wrap=ev~.) +
  geom_tile(aes(fill = uv), color = "white") 
+  scale_fill_gradient(low = "white", high = "red") 
+  theme(legend.title = element_text(size = 10),
        legend.text = element_text(size = 12),
        plot.title = element_text(size=16),
        axis.title=element_text(size=14,face="bold"),
        axis.text.x = element_text(angle = 90, hjust = 1))  + labs(fill = "uv")





gg <- ggplot(dat2, aes(x=dayn, y=hournumber, fill=uv/10000)) +  scale_fill_gradient(low = "white", high = "red") 
gg <- gg + geom_tile(color="blue", size=0.01)
gg <- gg + scale_fill_viridis(name="# uv") 
gg <- gg + coord_equal()
gg <- gg + facet_wrap(~ev, ncol=2)
gg <- gg + labs(x=NULL, y=NULL, title="two ev Heatmap\n")
gg <- gg + theme_tufte(base_family="Helvetica")
gg <- gg + theme(axis.ticks=element_blank())
gg <- gg + theme(axis.text=element_text(size=5))
gg <- gg + theme(panel.border=element_blank())
gg <- gg + theme(plot.title=element_text(hjust=0))
gg <- gg + theme(strip.text=element_text(hjust=0))
gg <- gg + theme(panel.margin.x=unit(1, "cm"))
gg <- gg + theme(panel.margin.y=unit(1, "cm"))
gg <- gg + theme(legend.title=element_text(size=6))
gg <- gg + theme(legend.title.align=1)
gg <- gg + theme(legend.text=element_text(size=6))
gg <- gg + theme(legend.position="right")
gg <- gg + theme(legend.key.size=unit(0.2, "cm"))
gg <- gg + theme(legend.key.width=unit(1, "cm"))
gg