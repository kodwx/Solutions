// LeetCode - 1114. Print in Order

class Foo {
    promise<void> p, q;
public:
    Foo() {
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        p.set_value(); // Signalling that the first task is done
    }

    void second(function<void()> printSecond) {
        p.get_future().wait(); // Waiting for the first signal
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        q.set_value(); // Signalling that the second task is done
    }

    void third(function<void()> printThird) {
        q.get_future().wait(); // Waiting for the second signal
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};