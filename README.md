# Design-Pattern-Cpp
Design pattern demo   

## UML类图易混淆知识点
### 类间关系——依赖与关联
依赖关系表现为：某类是其他类内部成员的参数或局部变量或返回值;   
关联关系表现为：某类是其他类的属性。

## 创建型设计模式
### Static Factory(静态工厂模式)
#### 特点  
由静态工厂对子类进行实例化;   
并且判断对哪个子类进行实例化也是静态工厂的职责（该特点会破坏“开放-封闭”原则，因为若想新增子类，将不得不修改静态工厂类的代码）。
#### UML类图
![](static_factory/static_factory.png)
### Factory Method(工厂方法模式)
#### 特点
由工厂类对子类进行实例化;但判断对哪个子类进行实例化是用户的责任，工厂类只负责生产具体的子类实例，符合“开放-封闭”原则。   
（具体来说，若想新增子类，只需让新增该子类的具体工厂类，即新增一个继承自工厂类、与新增子类匹配的具体工厂类，无需修改工厂类代码，符合“开放-封闭”原则。）  
#### UML类图
![](factory/factory.png)
### Prototype(原型模式)
#### 特点
产生对象的拷贝（浅拷贝或深拷贝）。
#### 与拷贝构造函数/移动构造函数的区别
对于某类来说，它的拷贝构造函数/移动构造函数只能对与当前类严格同类型的对象进行操作；  
而原型模式中，拷贝方法继承自抽象原型，可以利用多态，允许通过当前子类对父类其他子类实例进行操作。   
#### UML类图
![](prototype/prototype.png)

## 结构型设计模式
### Decorate(装饰模式)    
#### 目的   
使某一对象在运行时可被动态的添加职责。   
#### 与继承的区别
继承也是为对象添加职责，但继承是在编译器完成这一任务的;而装饰模式可将其推迟到运行时。   
#### UML类图
![](decorate/decorate.png)   
### Proxy(代理模式)    
#### 目的   
为其他对象提供一种代理，以代理来控制对该对象的访问。   
#### 最典型的应用——引用计数
例如C++11标准引入的std::shared_ptr。    
#### UML类图
![](proxy/proxy.png)
### Facade（外观模式）
#### 目的
为系统中的一组类提供一个一致的接口，简化系统的使用。
#### UML类图
![](facade/facade.png)

## 行为型设计模式
### Stretegy(策略模式)    
#### 目的   
使得算法（策略）的变化不会影响到该算法的用户。    
#### 与静态工厂的区别
1、静态工厂模式中，工厂无需持有具体产品的引用;   
而策略模式中，使用算法（策略）的上下文（Context）需要持有具体算法类的引用，以调用具体算法来实现目的。   
2、上述内容从UML类图上看，就是静态工厂方法中工厂与抽象产品间为依赖关系，而策略模式中上下文与抽象算法间为聚合关系。 
#### UML类图
![](strategy/strategy.png)    
### Template Method（模板方法模式）
#### 目的
以相同的框架调用不同的子系统，不改变算法结构即可重定义其中的某些步骤。
#### 与C++中的模板的区别
很明显完全不同好么.....
#### UML类图
![](template_method/template_method.png)   
