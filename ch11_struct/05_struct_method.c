#include <stdio.h>

struct vision{
    double left,right;

};
struct vision exchange(struct vision robot);
struct vision exchange(struct vision robot){
    double temp;
    temp=robot.left;
    robot.left=robot.right;
    robot.right=temp;
    return robot;
}

int main() {
    struct vision robot;
    printf("�÷�:");
    scanf("%lf %lf",&(robot.left),&(robot.right));

    robot=exchange(robot);
    printf("������ �÷�: %.1f %.1f",robot.left,robot.right);
}