    #include<stdio.h>
    #include<stdlib.h>

    struct circular_queue {
        int size;
        int r;
        int f;
        int* arr;
    };

    int isFull(struct circular_queue* q){
        if ((q->r+1)% q->size == q->f)     
        {
            return 1;
        }else{
            return 0;
        }
    }

    int isEmpty(struct circular_queue* q){
        if (q->r == q->f)     
        {
            return 1;
        }else{
            return 0;
        }
    }

    void enqueue(struct circular_queue* q, int val){
        if(isFull(q)){
            printf("Queue is full. \n");
        }else{
            q->r = (q->r+1) % q->size;
            q->arr[q->r] = val;
            printf("%d is inserted. \n", val);
        }
    }

  int dequeue(struct circular_queue* q){
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;  // Return a sentinel value to indicate the queue is empty
    } else {
        q->f = (q->f + 1) % q->size;  // Move the front pointer first
        int val = q->arr[q->f];  // Fetch the dequeued value
        printf("%d is dequeued.\n", val);
        return val;  // Return the dequeued value
    }
}

    void traverse(struct circular_queue* q){
        if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    int i = (q->f +1) % q->size;
     printf("Queue elements: ");

     while (i != (q->r + 1) % q->size) {  // Loop until you reach the rear + 1 position
        printf("%d ", q->arr[i]);
        i = (i + 1) % q->size;  // Move to the next position, wrapping around if necessary
    }
    
    printf("\n");
     
    }

    int main(){
        struct circular_queue q;
        q.size = 5;
        q.r = q.f = 0;
        q.arr = (int *) malloc(q.size * sizeof(int));

        enqueue(&q, 10);
        enqueue(&q, 20);
        enqueue(&q, 30);
        enqueue(&q, 40);
        dequeue(&q);
        enqueue(&q, 50);

        traverse(&q);


        return 0;
    }