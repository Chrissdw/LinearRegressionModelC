#include <stdio.h>
#include <stdbool.h>

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
void min_max_scaling();
void z_score();
void robust_scaling();
float check_outliers();
bool has_bounds();

float check_outliers()
{
    float Q3;
    float Q1;

    float IQR = Q3 - Q1;

    float lower_quartile = Q1 - (1.5 * IQR);
    float higher_quartile = Q3 + (1.5 * IQR);

    for (int i = 0; i < 10; i++)
    {
        // Go through array, if value is less than lower_quartile or if value is greater than higher_quartile it is an outlier
    }

    return 0.0;
}

bool has_bounds()
{

    return false;
}

void min_max_scaling(float min, float max)
{
    // Loop for each value in the data set
    float range = max - min;
    float data_value = 0.1;
    float result = (data_value - min) / range;

    // return an array with updated values
}
void z_score()
{
}
void robust_scaling()
{
}
void normalize()
{
    // if a lot of outliers use Robust Scaling, else if it is bounded data use Min-Max Scaling, else just do Z-score
    float dataset_size = 0;
    float outliers_threshold = 0.05;

    if (dataset_size < 50)
    {
        outliers_threshold = 0.1;
    }

    if (check_outliers() >= outliers_threshold)
    {
        void robust_scaling();
    }
    else if (check_bounds())
    {
        void min_max_scaling();
    }
    else
    {
        void z_score();
    }
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

    linear_model *w = 11;
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

    // Let's use test data first, maybe age to salary

    train(x, y);
}