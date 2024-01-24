/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(tmp) {
    let init=tmp;
    let obj1=
    {
        increment : () => {init+=1; return init;},
        decrement : () => {init-=1; return init;},
        reset     : () => {init=tmp; return init;}
    };
    return obj1;
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */