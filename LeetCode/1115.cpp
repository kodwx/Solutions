// LeetCode - 1115. Print FooBar Alternately

// Pretty similar to 1114

class FooBar {
private:
    int n;
    promise<void> p, q;

public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            q = promise<void>();
        	// printFoo() outputs "foo". Do not change or remove this line.
        	printFoo();
            p.set_value();
            q.get_future().wait();
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
            p.get_future().wait();
        	// printBar() outputs "bar". Do not change or remove this line.
        	printBar();
            p = promise<void>();
            q.set_value();
        }
    }
};