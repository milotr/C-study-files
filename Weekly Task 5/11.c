// 11. Returns the BMI.
float BMI(float m, float h);

int main(){
    float x = BMI(60, 1.7);
    printf("Your BMI is: %f \n", x);
    return 0;
}

float BMI(float m, float h){
    float result = m / pow(h,2);
    return result;
}