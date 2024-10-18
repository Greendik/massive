float _arr_sum(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

float _arr_min(int arr[], int sum, int th) {
    return th - sum;
}

float _arr_umn(int arr[], int size) {
    float umn = 1;
    for (int i = 0; i < size; i++) {
        umn *= arr[i];
    }
    return umn;
}

float _arr_del(int arr[], int size) {
    float kol = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) { kol++; }
    }
    return kol;
}

float _arr_maxim(int arr[], int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) { max = arr[i]; }
    }
    return max;
}

float _arr_minim(int arr[], int size) {
    float min = arr[0];
    for (int i = 0; i < size; i++) {
        if (min > arr[i]) { min = arr[i]; }
    }
    return min;
}
int _arr_chet(int arr[], int size) {
    int kol = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            kol++;
        }
    }
    return kol;
}

int _arr_nechet(int arr[], int size) {
    int kol = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            kol++;
        }
    }
    return kol;
}

void _sort_arr(int* arr, int size) {
    int kor = 0, temp = 0;
    for (int i = 0; i < size; i++) {
        kor = i;
        for (int j = 0; j < size; j++) {
            if (arr[kor] < arr[j]) {
                kor = j;
                temp = arr[i];
                arr[i] = arr[kor];
                arr[kor] = temp;
            }
        }
    }
}
