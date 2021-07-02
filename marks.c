#include <stdio.h>
int main()
{
    int physics, chem, bio, math, comp, n;
    printf("Enter marks of Physics \n");
    printf("Enter marks of chemistry \n");
    printf("Enter marks of Biology \n");
    printf("Enter marks of Mathematics\n");
    printf("Enter marks of Computer\n");
    scanf("%d%d%d%d%d", &physics, &chem, &bio, &math, &comp);
    switch (physics)
    {
    case 90:
        printf("The grade of Physics is A\n");
        break;
    case 80:
        printf("The grade of Physics is B\n");
        break;
    case 70:
        printf("The grade of Physics is C\n");
        break;
    case 60:
        printf("The grade of Physics is D\n");
        break;
    case 50:
        printf("The grade of Physics is E\n");
        break;
    case 40:
        printf("The grade of Physics is F\n");
        break;
    default:
        printf("lawra");
        break;
    }
    switch (chem)
    {
    case 90:
        printf("The grade of Chemistry is A\n");
        break;
    case 80:
        printf("The grade of Chemistry is B\n");
        break;
    case 70:
        printf("The grade of Chemistry is C\n");
        break;
    case 60:
        printf("The grade of Chemistry is D\n");
        break;
    case 50:
        printf("The grade of Chemistry is E\n");
        break;
    case 40:
        printf("The grade of Chemistry is F\n");
        break;
    default:
        printf("lawra");
    }
    switch (bio)
    {
    case 90:
        printf("The grade of Biology is A\n");
        break;
    case 80:
        printf("The grade of Bilogy is B\n");
        break;
    case 70:
        printf("The grade of Biology is C\n");
        break;
    case 60:
        printf("The grade of Biology is D\n");
        break;
    case 50:
        printf("The grade of Biology is E\n");
        break;
    case 40:
        printf("The grade of Biology is F\n");
        break;
    default:
        printf("lawra");
    }
    switch (math)
    {
    case 90:
        printf("The grade of Mathematics is A\n");
        break;
    case 80:
        printf("The grade of Mathematics is B\n");
        break;
    case 70:
        printf("The grade of Mathematics is C\n");
        break;
    case 60:
        printf("The grade of Mathematics is D\n");
        break;
    case 50:
        printf("The grade of Mathematics is E\n");
        break;
    case 40:
        printf("The grade of Mathematics is F\n");
        break;
    default:
        printf("lawra");
    }
    switch (comp)
    {
    case 90:
        printf("The grade of Computer is A\n");
        break;
    case 80:
        printf("The grade of Computer is B\n");
        break;
    case 70:
        printf("The grade of Computer is C\n");
        break;
    case 60:
        printf("The grade of Computer is D\n");
        break;
    case 50:
        printf("The grade of Computer is E\n");
        break;
    case 40:
        printf("The grade of Computer is F\n");
        break;
    default:
        printf("lawra");
    }
    return 0;
}