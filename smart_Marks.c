#include <stdio.h>
void func(int marks, const char *message)
{
    switch (marks)
    {
    case 90:
        printf("The grade of ");
        printf(message);
        printf(" is A\n");
        break;
    case 80:
        printf("The grade of ");
        printf(message);
        printf(" is B\n");
        break;
    case 70:
        printf("The grade of ");
        printf(message);
        printf(" is C\n");
        break;
    case 60:
        printf("The grade of ");
        printf(message);
        printf(" is D\n");
        break;
    case 50:
        printf("The grade of ");
        printf(message);
        printf(" is E\n");
        break;
    case 40:
        printf("The grade of ");
        printf(message);
        printf(" is F\n");
        break;
    default:
        printf("LAWRA\n");
    }
}
int main()
{
    //int physics, chem, bio, math, comp;
    int subject;
    printf("Enter marks of Physics \n");
    scanf("%d", &subject);
    func(subject, "Physics");
    printf("Enter marks of chemistry \n");
    scanf("%d", &subject);
    func(subject, "Chemistry");
    printf("Enter marks of Biology \n");
    scanf("%d", &subject);
    func(subject, "Biology");
    printf("Enter marks of Mathematics\n");
    scanf("%d", &subject);
    func(subject, "Mathematics");
    printf("Enter marks of Computer\n");
    scanf("%d", &subject);
    func(subject, "Computer");
    //scanf("%d%d%d%d%d", &physics, &chem, &bio, &math, &comp);
    return 0;
}