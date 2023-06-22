#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size1 1000
#define size2 10000
#define size3 100000

void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void quickSort(int arr[], int low, int high);
void mergeSort(int arr[], int left, int right);
int isSorted(int arr[], int size);

int main() {
  FILE *arquivo, *arquivo2, *arquivo3;
  clock_t start_time;
  clock_t end_time, execution_time;
  double execution_time_in_seconds;
  int op = 0, i = 0, op_arquivo = 0;
  int Arq1[1000], Arq2[10000], Arq3[100000];
  arquivo = fopen("arquivo1.txt", "r");
  arquivo2 = fopen("arquivo2.txt", "r");
  arquivo3 = fopen("arquivo3.txt", "r");

  while (fscanf(arquivo, "%d", &Arq1[i]) != EOF && i < 1000) {
    i++;
  }
  i = 0;
  while (fscanf(arquivo2, "%d", &Arq2[i]) != EOF && i < 10000) {
    i++;
  }
  i = 0;
  while (fscanf(arquivo3, "%d", &Arq3[i]) != EOF && i < 100000) {
    i++;
  }

  fclose(arquivo);
  fclose(arquivo2);
  fclose(arquivo3);

  while (op_arquivo != 4) {
    printf("Escolha o arquivo:\n");
    printf("[1] Arquivo 1 (1000 elementos)\n");
    printf("[2] Arquivo 2 (10000 elementos)\n");
    printf("[3] Arquivo 3 (100000 elementos)\n");
    printf("[4] Sair\n");
    scanf("%d", &op_arquivo);

    switch (op_arquivo) {
    case 1:
      while (op != 6) {
        printf("Escolha o algoritmo de ordenação:\n");
        printf("\t[1] BubbleSort\n");
        printf("\t[2] SelectionSort\n");
        printf("\t[3] Insertion Sort\n");
        printf("\t[4] QuickSort\n");
        printf("\t[5] Merge Sort\n");
        printf("\t[6] Voltar\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
          start_time = clock();
          bubbleSort(Arq1, size1);
          if (isSorted(Arq1, size1)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n", execution_time_in_seconds);
          break;
        case 2:
          start_time = clock();
          selectionSort(Arq1, size1);
          if (isSorted(Arq1, size1)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n", execution_time_in_seconds);
          break;
        case 3:
          start_time = clock();
          insertionSort(Arq1, size1);
          if (isSorted(Arq1, size1)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n", execution_time_in_seconds);
          break;
        case 4:
          start_time = clock();
          quickSort(Arq1, 0, size1 - 1);
          if (isSorted(Arq1, size1)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 5:
          start_time = clock();
          mergeSort(Arq1, 0, size1 - 1);
          if (isSorted(Arq1, size1)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 6:
          printf("Voltando para seleção de arquivo.\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
          break;
        }
      }
      op = 0;
      break;
    case 2:
      while (op != 6) {
        printf("Escolha o algoritmo de ordenação:\n");
        printf("\t[1] BubbleSort\n");
        printf("\t[2] SelectionSort\n");
        printf("\t[3] Insertion Sort\n");
        printf("\t[4] QuickSort\n");
        printf("\t[5] Merge Sort\n");
        printf("\t[6] Voltar\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
          start_time = clock();
          bubbleSort(Arq2, size2);
          if (isSorted(Arq2, size2)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 2:
          start_time = clock();
          selectionSort(Arq2, size2);
          if (isSorted(Arq2, size2)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 3:
          start_time = clock();
          insertionSort(Arq2, size2);          
          if (isSorted(Arq2, size2)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 4:
          start_time = clock();
          quickSort(Arq2, 0, size2 - 1);          
          if (isSorted(Arq2, size2)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 5:
          start_time = clock();
          mergeSort(Arq2, 0, size2 - 1);          
          if (isSorted(Arq2, size2)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 6:
          printf("Voltando para seleção de arquivo.\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
          break;
        }
      }
      op = 0;
      break;
    case 3:
      while (op != 6) {
        printf("Escolha o algoritmo de ordenação:\n");
        printf("\t[1] BubbleSort\n");
        printf("\t[2] SelectionSort\n");
        printf("\t[3] Insertion Sort\n");
        printf("\t[4] QuickSort\n");
        printf("\t[5] Merge Sort\n");
        printf("\t[6] Voltar\n");
        scanf("%d", &op);

        switch (op) {
        case 1:
          start_time = clock();
          bubbleSort(Arq3, size3);          
          if (isSorted(Arq3, size3)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 2:
          start_time = clock();
          selectionSort(Arq3, size3);
          if (isSorted(Arq3, size3)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 3:
          start_time = clock();
          insertionSort(Arq3, size3);          
          if (isSorted(Arq3, size3)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 4:
          start_time = clock();
          quickSort(Arq3, 0, size3 - 1);          
          if (isSorted(Arq3, size3)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 5:
          start_time = clock();
          mergeSort(Arq3, 0, size3 - 1);          
          if (isSorted(Arq3, size3)) {
              printf("O array foi ordenado corretamente.\n");
          } else {
               printf("Ocorreu um erro na ordenação do array.\n");
          }
          end_time = clock();
          execution_time = end_time - start_time;
          execution_time_in_seconds = (double)execution_time / CLOCKS_PER_SEC;
          printf("Tempo de execução: %.4f segundos\n",
                 execution_time_in_seconds);
          break;
        case 6:
          printf("Voltando para seleção de arquivo.\n");
          break;
        default:
          printf("Opção inválida. Tente novamente.\n");
          break;
        }
      }
      break;
    case 4:
      printf("Programa encerrado.\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  }
  return 0;
}

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void selectionSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < size; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

void insertionSort(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i + 1], &arr[high]);
  return (i + 1);
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}
void merge(int arr[], int left, int middle, int right) {
  int i, j, k;
  int n1 = middle - left + 1;
  int n2 = right - middle;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (j = 0; j < n2; j++)
    R[j] = arr[middle + 1 + j];

  i = 0;
  j = 0;
  k = left;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int middle = left + (right - left) / 2;

    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    merge(arr, left, middle, right);
  }
}

int isSorted(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return 0;
    }
  }
  return 1; 
}
