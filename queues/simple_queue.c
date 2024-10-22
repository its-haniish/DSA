    #include<stdio.h>
    #include<stdlib.h>

    struct Queue {
        int size;
        int r;
        int f;
        int* arr;
    };

    int isEmpty(struct Queue* q){
        if(q->f == q->r){
            return 1;
        }else{
            return 0;
        }
    }

    int isFull(struct Queue* q){
        if(q->r == q->size-1){
            return 1;
        }else{
            return 0;
        }
    }

    void enqueue(struct Queue* q, int val){
        if(isFull(q)){
            printf("Queue is full. \n");
        }else{
            q->r ++;
            q->arr[q->r] = val;
            printf("%d is inserted. \n", val);
        }
    }

    void dequeue(struct Queue* q){
        if(isEmpty(q)){
            printf("Queue is empty. \n");
        }else{
            q->f++;
        }
    }


    int main(){
        struct Queue q;
        q.size = 5;
        q.r = q.f = 1-1;
        q.arr = (int *) malloc(q.size * sizeof(int));

        enqueue(&q, 10);
        enqueue(&q, 20);
        enqueue(&q, 30);
        enqueue(&q, 40);
        enqueue(&q, 50);

        return 0;

    };