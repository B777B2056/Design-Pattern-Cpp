# Design-Pattern-Cpp
Design pattern demo   

## Static Factory(静态工厂模式)
![](static_factory/static_factory.png)

## Stretegy(策略模式)    
### 目的   
使得算法（策略）的变化不会影响到该算法的用户    
### 与静态工厂的区别
1、静态工厂模式中，工厂无需持有具体产品的引用;   
而策略模式中，使用算法（策略）的上下文（Context）需要持有具体算法类的引用，以调用具体算法来实现目的。   
2、上述内容从UML类图上看，就是静态工厂方法中工厂与抽象产品间为依赖关系，而策略模式中上下文与抽象算法间为聚合关系。   
![](strategy/strategy.png)    
