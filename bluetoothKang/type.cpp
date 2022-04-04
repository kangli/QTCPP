class MyClass:public QObject
{
    Q_OBJECT
    Q_PROPERTY(Priority priority READ priority WRITE setPriority NOTIFY priorityChanged)
public:
    MyClass(QObject *parent = nullptr);
    ~MyClass();
    enum Priority {
        Low,
        Medium,
        High
    };
    Q_ENUM(Priority)

    void setPriority(Priority priority){
        if(m_priority != priority){
            m_priority = priority;
            emit priorityChanged(priority);
        }
        Priority priority() const{
            return m_priority;
        }
    };
signals:
    void priorityChanged(Priority priority);

private:
     Priority m_priority;
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

MyClass *myinstance = new MyClass();
QObject* object=myinstance;
myinstance->setPriority(MyClass::High);
object->setProperty("priority", MyClass::Medium);