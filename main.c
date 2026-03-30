#include <stdio.h>

typedef struct
{
    float independent_variables, dependent_variables[];

} data;

typedef struct
{
    float w, b;
} linear_model;

float model(linear_model *w, float iv, linear_model *b);
void train(float iv[], float dv[]);
void mean_squared_error(); // cost function to measure how wrong model is
void normalize();
void json_to_array();
void adjust_weight_gradient();
void adjust_bias_gradient();
void gradient_descent(); // minimizes error

void normalize()
{
}

void mean_squared_error()
{
}

void gradient_measure()
{
}

void json_to_array()
{
}

void adjust_weight_gradient()
{
}
void adjust_bias_gradient()
{
}

void gradient_descent()
{
    void adjust_weight_gradient();
    void adjust_bias_gradient();
}

float model(linear_model *w, float iv, linear_model *b)
{
}

void train(float iv[], float dv[])
{
    // We need to keep looping until Low cost/error output, Gradients are small, or Max number of iterations (you pick)

    linear_model *w = 1;
    linear_model *b = 1;
    float ive = 10.4;
    normalize();          // Normalize data
    model(w, ive, b);     // This will output the predicted dependent variable, after that just compare
    mean_squared_error(); // Cost function
    gradient_descent();   // Adjusting w and b
}

void main()
{
    // Maybe use scanner to get input json file, then call json to array.

    char json_file_x[] = "Will be scan input later";
    char json_file_y[] = "Will be scan input later";

    printf("Input Independent Variables:\n");
    fgets(json_file_x, 0, stdin);

    printf("Input Dependent Variables:\n");
    fgets(json_file_y, 0, stdin);

    float x[1];
    float y[1];

    json_to_array();
    train(x, y);
}