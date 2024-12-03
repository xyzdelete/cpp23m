module;

#include <fmt/format.h>
#include <typeinfo>

export module utilities; 

export void basic_operations(){
    //Basic operations
    int number1 {2};
    int number2 {7};

    //Addition
    int result = number1 + number2;
    fmt::println("addition: {}", result);

    //Subtraction
    result = number1 - number2;
    fmt::println("subtraction: {}", result);

    // Multiplication
    result = number1 * number2;
    fmt::println("subtraction - result : {}", result);

    // Division
    result = number2 / number1;
    fmt::println("division - result : {}", result);

    // Modulus
    result = number2 % number1; // 7 % 2
    fmt::println("modulus - result : {}", result); // 1

}


export void precedence_and_associativity(){
    //Precedence and assiciativity
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = (a + b) * c - d / e - f + g;
    fmt::println("result: {}", result);

    result = a / b * c + d - e + f;
    fmt::println("result: {}", result);
}


export void prefix_postfix_increment_decrement_operators(){
    //Prefix and postfix increment/decrement operators
    int value {5};

    //Increment by one
    value = value + 1;

    //Reset to 5
    value = 5;

    //Postfix increment/decrement operator
    fmt::println("The value is: {}", value++);
    fmt::println("The value is: {}", value--);
    fmt::println("The value is: {}", value);

    //Reset to 5
    value = 5;

    //Prefix increment/decrement operator
    fmt::println("The value is: {}", ++value);
    fmt::println("The value is: {}", --value);
}

export void compound_assignment_operators(){
    //Compound assignment operator
    int value {45};

    //value = value + 5; //Assigning the result to the original variable
    value += 5;
    fmt::println("The value is: {}", value);

    value -=5; // equivalent to value = value - 5
    fmt::println("The value is (after -=5) : {}", value); // 45

    value *=2;
    fmt::println("The value is (after *=2) : {}", value); // 90

    value /= 3;
    fmt::println("The value is (after /=3) : {}", value); // 30

    value %= 11;
    fmt::println("The value is (after %=11) : {}", value);// 8
}

export void relational_operators(){
    //Relational operators
    int number1 {10};
    int number2 {10};

    fmt::println("number1: {}", number1);
    fmt::println("number2: {}", number2);

    fmt::println("number1 < number2: {}", (number1 < number2));
    fmt::println("number1 > number2: {}", (number1 > number2));
    fmt::println("number1 <= number2: {}", (number1 <= number2));
    fmt::println("number1 >= number2: {}", (number1 >= number2));
    fmt::println("number1 != number2: {}", (number1 != number2));
    fmt::println("number1 == number2: {}", (number1 == number2));
}

export void logical_operators(){
    //Logical operators
    bool a {true};
    bool b {true};
    bool c {false};

    fmt::println("a: {}", a);
    fmt::println("b: {}", b);
    fmt::println("c: {}", c);

    // AND : Evaluates to true when all operands are true.
    //       A single false operand will drag
    //      the entire expression to evaluating false.

    fmt::println("a && b: {}", ( a && b ));
    fmt::println("a && c: {}", ( a && c ));
    fmt::println("a && b && c: {}", ( a && b && c ));

    // OR : Evaluates to true when at least one operand true.
    //       A single true operand will push
    //      the entire expression to evaluating true.

    fmt::println("a || b : {}", (a || b));
    fmt::println("a || c : {}", (a || c));
    fmt::println("a || b || c : {}", (a || b || c));

    // NOT : Negates whateve operand you put it with
    fmt::println("!a : {}", !a);
    fmt::println("!b : {}", !b);
    fmt::println("!c : {}", !c);
}

export void logical_relational_ops_combined(){
    //Logical and relational operators combined
    bool a {true};
    int d {45};
    int e {60};
    int f {61};

    fmt::println("(d > e) && (d > f): {}",((d > e) && (d > f))); // true
    fmt::println("(d == e) || (e <= f): {}", ((d == e) || (e <= f)));
    fmt::println("(d < e) || (d > f) : {}", ((d < e) || (d > f)));
    fmt::println("(f > e) || (d < f) : {}", ((f > e) || (d < f)));
    fmt::println("(d > f) && (f <= d) : {}", ((d > f) && (f <= d)));
    fmt::println("(d > e) && (d <= f) : {}", ((d > e) && (d <= f)));
    fmt::println("(! a) && (d == e) : {}", ((!a) && (d == e)));
    fmt::println("(! a) && (d == e) : {}", ((!a) && (d == e)));
}


export void math_functions(){
    //Math functions
    double weight {7.7};

    fmt::println("Weight rounded to floor is: {}", std::floor(weight));
    fmt::println("Weight rounded to ceil is: {}", std::ceil(weight));

    //std::abs
    double savings {-5000};
    fmt::println("Abs of weight is: {}", std::abs(weight));
    fmt::println("Abs of savings is: {}", std::abs(savings));

    //round. Halfway points are rounded away from 0. 2.5 is rounded to 3 for example
    fmt::println("3.654 rounded to : {}", std::round(3.654)); 
    fmt::println("2.5 is rounded to : {}", std::round(2.5)); 
    fmt::println("2.4 is rounded to : {}", std::round(2.4));
    fmt::println("-2.4 is rounded to : {}", std::round(-2.4));
    // round: type of result
    auto result = std::round(-2.4);
    fmt::println("Type of rounded -2.4: {}", typeid(result).name());

    double exponential = std::exp(10);
  	fmt::println("The exponential of 10 is : {}", exponential);

    // pow
  	fmt::println("3^4 is : {}", std::pow(3, 4));
  	fmt::println("9^3 is : {}", std::pow(9, 3));


    // log: reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking
  	//  to which exponent should we elevate 2 to get eight ? Log, by default computes the log
  	//  in base e. There also is another function which uses base 10 called log10

  	// Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e = ?
  	fmt::println("Log ; to get 54.59, you would elevate e to the power of : {}", std::log(54.59));

    // log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
  	fmt::println("To get 10000, you'd need to elevate 10 to the power of : {}", std::log10(10000));// 4
  	// sqrt
  	fmt::println("The square root of 81 is : {}", std::sqrt(81));

    // round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
  	fmt::println("3.654 rounded to : {}", std::round(3.654));
  	fmt::println("2.5 is rounded to : {}", std::round(2.5));
  	fmt::println("2.4 is rounded to : {}", std::round(2.4));
}


export void weird_integral_types(){
    //Weird integral types
    short int var1 {10};
    short int var2 {20};

    char var3 {40};
    char var4 {50};

    fmt::println("size of var1 : {}", sizeof(var1));
    fmt::print("size of var2 : {}\n", sizeof(var2));
    fmt::print("size of var3 : {}\n", sizeof(var3));
    fmt::print("size of var4 : {}\n", sizeof(var4));

    auto result1 = var1 + var2;
    auto result2 = var3 - var4;

    fmt::print("size of result1 : {}\n", sizeof(result1));// 4
    fmt::print("size of result2 : {}\n", sizeof(result2));// 4
}

export void conversions(){
    //Conversions: implicit or explicit(static_cast)
    //Data conversions
    // Implicit data conversions
    //		. The compiler applies implicit conversions
    //  			when types are different in
    //			an expression
    //		. Conversions are always done from the smallest
    //			to the largest type in this case int is
    //			transformed to double before the expression
    //			is evaluated.Unless we are doing an assignment
    double price { 45.6 };
    int units {10};

    // In C++, when an operation involves two different numeric types, the operand of the smaller type is implicitly converted to the larger type before the operation is performed. This is known as type promotion. Here, units (an int) is implicitly converted to double before the multiplication, so the result of the operation is also a double. Therefore, total_price is deduced to be of type double.
   
     auto total_price = price * units; // units will be implicitly converted to double

     fmt::println("Total price : {}", total_price);
     fmt::println("sizeof total_price : {}", sizeof(total_price));


    //Implicit conversions in assignments
    // The assignment operation is going to cause an implicit
    // narrowing conversion , y is converted to int before assignment
    int x;
    double y {45.44};
    x = y; // double to int
    fmt::println("The value of x is : {}", x);
    fmt::println("sizeof x : {}", sizeof(x));


    // Explicit data conversions
    // Implicit cast will add up the doubles,
    // then turn result into int for assignment
    double p {12.5};
    double m {34.6};

    int sum = p + m;
    fmt::println("The sum is: {}", sum);

    //Explicitly cast, then do the sum
    sum = static_cast<int>(p) + static_cast<int>(m);
    fmt::println("The sum is: {}", sum);
    
    //Explicit cast : sum up then cast, same thing as implicit cast
    sum =  static_cast<int> (p + m);
    fmt::println("Sum up then cast, result: {}", sum);
    

    //Old style C-cast
    double PI {3.14};

    //int int_pi = (int)(PI); // NOT RECOMMENDED IN MODERN C++
    int int_pi = static_cast<int>(PI);
    fmt::println("PI: {}", PI);
    fmt::println("int_pi: {}", int_pi);
}


export void overflow_underflow(){
    //Overflow and underflow
    unsigned char data {250};
    fmt::println("unsigned char min: {}, max: {} ", 
                            std::numeric_limits<unsigned char>::min(),
                            std::numeric_limits<unsigned char>::max());
    ++data;
    fmt::println("data: {}", static_cast<int>(data));   // 251
    ++data;
    fmt::println("data: {}", static_cast<int>(data));   // 252
    ++data;
    fmt::println("data: {}", static_cast<int>(data));   // 253
    ++data;
    fmt::println("data: {}", static_cast<int>(data));   // 254
    ++data;
    fmt::println("data: {}", static_cast<int>(data));   // 255
    ++data; // Overflow to 256 which can't fit in a unsigned char
    fmt::println("data: {}", static_cast<int>(data));   // 256 -> 0

    //Underflow
    data = 1;

    --data;
    fmt::println("data: {}", static_cast<int>(data));   //  0
    --data; // Underflow: -1 can't fit in a unsigned char
    fmt::println("data: {}", static_cast<int>(data));   //  0 -> 255
}
