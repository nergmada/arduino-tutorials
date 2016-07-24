void setup() {

}

void loop() {
    
}

//a - add
//m - multiply
//s - subtract
//d - divide
int doMaths(int a, int b, char c) {
    if (c == 'a') {
        return a + b;
    } else if (c == 'm') {
        return a * b;
    } else if (c == 's') {
        return a - b;
    } else if (c == 'd') {
        return a / b;
    }
}