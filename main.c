/************************************************************************************************************************
                                                Name - Pratik Gupta
                                                Course - Computer Technology
                                                Project - Designing a Quiz
                                                Date started - 16th March 2020
*************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

/*
    3 main variable
    ans for recording answer from the user
    score for keeping track of the right answer
    correct to tell the code which is the correct answer in each question
*/
char ans;
int score = 0;
int correct = 0;

/*
    pass_key to prevent the player from accessing the correct answer before he attempt the Quiz
    check for checking if the user have enter valid answer and also for taking in the code for accessing the correct answer
*/
int pass_key = 125798546;
int check = 0;

//This function will print out the question
question(char text1[25], char text2[100], char text3[150])
{
    printf("%s %s %s", text1, text2, text3);
}

//making function for clearing the screen...
void clear_screen()
{
    printf("\e[1;1H\e[2J");
}
//answer checking code
void check_answer()
{
    switch (check)
	{
    case 25:
        printf("\nEnter a valid Answer\n");
    default:
        printf("\nEnter the answer as the option number - ");
        ans = getchar();
        printf("\n");
        switch (correct)
		{
        case 1:
            switch (ans)
			{
            case '1':
                printf("You have entered right answer \n\n");
                score = score + 1;
                getchar();
                check = 0;
                break;
            case '2':
            case '3':
            case '4':
                printf("you have entered wrong answer\n\n");
                getchar();
                check = 0;
                break;
            default:
                check = 25;
            }
            break;

        case 2:
            switch (ans)
			{
            case '2':
                printf("You have entered right answer \n\n");
                score = score + 1;
                getchar();
                check = 0;
                break;
            case '1':
            case '3':
            case '4':
                printf("you have entered wrong answer\n\n");
                getchar();
                check = 0;
                break;
            default:
                check = 25;
            }
            break;

        case 3:
            switch (ans)
			{
            case '3':
                printf("You have entered right answer \n\n");
                score = score + 1;
                getchar();
                check = 0;
                break;
            case '1':
            case '2':
            case '4':
                printf("you have entered wrong answer\n\n");
                getchar();
                check = 0;
                break;
            default:
                check = 25;
            }
            break;

        case 4:
            switch (ans)
			{
            case '4':
                printf("You have entered right answer \n\n");
                score = score + 1;
                getchar();
                check = 0;
                break;
            case '1':
            case '3':
            case '2':
                printf("you have entered wrong answer\n\n");
                getchar();
                check = 0;
                break;
            default:
                check = 25;
            }
            break;
        }
    }
}

//Quiz Question
void questions()
{
    //starting the game
    score = 0;
    printf("Let play the Game\n\n");
    //question 1
    try_again1:
        correct = 1;
    question("Question 1\n", "\nWhich is the closest planet to the sun ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again1;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }
    //question 2
    try_again2:
        correct = 3;
    question("Question 2\n", "\nWhich is the blue planet ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again2;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

	//question 3
    try_again3:
        correct = 2;
    question("Question 3\n", "\nWhich is the hottest Planet ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again3;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

	//question 4
    try_again4:
        correct = 4;
    question("Question 4\n", "\nWhich is classified as a dwarf planet ?\n", "\n1) Saturn \n2) Uranus \n3) Neptune \n4) Pluto \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again4;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

	//question 5
    try_again5:
        correct = 4;
    question("Question 5\n", "\nWhat is the name of our Galaxy ?\n", "\n1) Whirlpool Galaxy \n2) Andromeda Galaxy \n3) Sombrero Galaxy \n4) Milky Way  \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again5;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

	//question 6
    try_again6:
        correct = 1;
    question("Question 6\n", "\nWho is the first man to step on moon ?\n", "\n1) Neil Armstron \n2) Buzz Aldrin \n3) Charles Conrad \n4) Alan Bean\n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again6;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 7
    try_again7:
        correct = 3;
    question("Question 7\n", "\nwho is the first man in space ?\n", "\n1) Charles Conrad \n2) Alan LaVern Bean \n3) Yuri Alekseyevich Gagarin\n4) Alan Shepard \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again7;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 8
    try_again8:
        correct = 1;
    question("Question 8\n", "\nWhich is the first animal in space ?\n", "\n1) Dog \n2) Monkey \n3) Frogs \n4) Mice \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again8;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 9
    try_again9:
        correct = 2;
    question("Question 9\n", "\nWhich is first satellite in space ?\n", "\n1) Luna 2 \n2) Sputnik 1 \n3) Explorer 7 \n4) Explorer 5 \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again9;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 10
    try_again10:
        correct = 4;
    question("Question 10\n", "\nMost distant man made object ? \n", "\n1) Pioneer 10 \n2) Pioneer 11 \n3) Voyager 2 \n4) Voyager 1 \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again10;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 11
    try_again11:
        correct = 2;
    question("Question 11\n", "\nWhich is the brightest star ?\n", "\n1) Rigel \n2) Sirius A \n3) Deneb \n4) Betelgeuse \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again11;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 12
    try_again12:
        correct = 3;
    question("Question 12\n", "\nWho is know as Father of observational astronomy ?\n", "\n1) Nicolaus Copernicus \n2) William Herschel \n3) Galileo Galilei \n4) Johannes Kepler \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again12;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 13
    try_again13:
        correct = 1;
    question("Question 14\n", "\nWhich year was the first exoplanet discovered in?\n", "\n1) 1995 \n2) 1985 \n3) 2005 \n4) 2003 \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again13;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 14
    try_again14:
        correct = 2;
    question("Question 14\n", "\nWhich of these planets has no moons?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again14;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 15
    try_again15:
        correct = 2;
    question("Question 15\n", "\nWhich way does Earth spin?\n", "\n1) East to West \n2) West to East  \n3) North To South \n4) South To North \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again15;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 16
    try_again16:
        correct = 3;
    question("Question 16\n", "\nWhat type of galaxy is the most common in the universe?\n", "\n1) irregular galaxy \n2) barred spiral galaxy \n3) Elliptical galaxies \n4) spiral galaxy \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again16;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 17
    try_again17:
        correct = 4;
    question("Question 17\n", "\nWhat is the largest planet in our solar system?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Jupiter \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again17;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 18
    try_again18:
        correct = 1;
    question("Question 18 \n", "\nWhat is the smallest planet in our solar system?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again18;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 19
    try_again19:
        correct = 3;
    question("Question 19\n", "\nWhich NASA space flight was the last manned mission to the moon?\n", "\n1) Apollo 20 \n2) Apollo 15 \n3) Apollo 17 \n4) Apollo 18 \n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again19;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //question 20
    try_again20:
        correct = 4;
    question("Question 20\n", "\nHow many moons does Jupiter have\n", "\n1) 20 \n2) 200 \n3) 81 \n4) 181\n");
    check_answer();
    switch (check)
	{
    case 25:
        clear_screen();
        goto try_again20;
        break;
    default:
        printf("Press enter key to continue");
        getchar();
        clear_screen();
    }

    //ending the game

    printf("\n");
    printf("Congratulation You have complete the Quiz\n");

    //telling player about the score

    printf("\nYou have Score %d out of 20 in quiz\n", score);
    printf("You can check right answer in main menu... Enter 500 when it ask for the code \n");
    pass_key = 500;

    //going back to main menu

    printf("\nPress enter key to go back to main menu");
    getchar();
}
//correct answer
void correct_answer()
{
    //question 1
    getchar();
    question("Question 1\n", "\nWhich is the closest planet to the sun ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    printf("\nCorrect answer is - Mercury\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 2
    question("Question 2\n", "\nWhich is the blue planet ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    printf("\nCorrect answer is - Earth\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 3
    question("Question 3\n", "\nWhich is the hottest Planet ?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    printf("\nCorrect answer is - Venus\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 4
    question("Question 4\n", "\nWhich is classified as a dwarf planet ?\n", "\n1) Saturn \n2) Uranus \n3) Neptune \n4) Pluto \n");
    printf("\nCorrect answer is - Pluto\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 5
    question("Question 5\n", "\nWhat is the name of our Galaxy ?\n", "\n1) Whirlpool Galaxy \n2) Andromeda Galaxy \n3) Sombrero Galaxy \n4) Milky Way  \n");
    printf("\nCorrect answer is - Milky Way\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 6
    question("Question 6\n", "\nWho is the first man to step on moon ?\n", "\n1) Neil Armstron \n2) Buzz Aldrin \n3) Charles Conrad \n4) Alan Bean\n");
    printf("\nCorrect answer is - Neil Armstron\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 7
    question("Question 7\n", "\nwho is the first man in space ?\n", "\n1) Charles Conrad \n2) Alan LaVern Bean \n3) Yuri Alekseyevich Gagarin\n4) Alan Shepard \n");
    printf("\nCorrect answer is - Yuri Alekseyrvich Gagarian\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 8
    question("Question 8\n", "\nWhich is the first animal in space ?\n", "\n1) Dog \n2) Monkey \n3) Frogs \n4) Mice \n");
    printf("\nCorrect answer is - Dog\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 9
    question("Question 9\n", "\nWhich is first satellite in space ?\n", "\n1) Luna 2 \n2) Sputnik 1 \n3) Explorer 7 \n4) Explorer 5 \n");
    printf("\nCorrect answer is - Sputnik 1\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 10
    question("Question 10\n", "\nMost distant man made object ? \n", "\n1) Pioneer 10 \n2) Pioneer 11 \n3) Voyager 2 \n4) Voyager 1 \n");
    printf("\nCorrect answer is - Voyager 1\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 11
    question("Question 11\n", "\nWhich is the brightest star ?\n", "\n1) Rigel \n2) Sirius A \n3) Deneb \n4) Betelgeuse \n");
    printf("\nCorrect answer is - Sirius A\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 12
    question("Question 12\n", "\nWho is know as Father of observational astronomy ?\n", "\n1) Nicolaus Copernicus \n2) William Herschel \n3) Galileo Galilei \n4) Johannes Kepler \n");
    printf("\nCorrect answer is - Galileo Galilei\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 13
    question("Question 14\n", "\nWhich year was the first exoplanet discovered in?\n", "\n1) 1995 \n2) 1985 \n3) 2005 \n4) 2003 \n");
    printf("\nCorrect answer is - 1995\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 14
    question("Question 14\n", "\nWhich of these planets has no moons?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    printf("\nCorrect answer is - Venus\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 15
    question("Question 15\n", "\nWhich way does Earth spin?\n", "\n1) East to West \n2) West to East  \n3) North To South \n4) South To North \n");
    printf("\nCorrect answer is - West to East\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 16
    question("Question 16\n", "\nWhat type of galaxy is the most common in the universe?\n", "\n1) irregular galaxy \n2) barred spiral galaxy \n3) Elliptical galaxies \n4) spiral galaxy \n");
    printf("\nCorrect answer is - Elliptical Galaxy\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 17
    question("Question 17\n", "\nWhat is the largest planet in our solar system?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Jupiter \n");
    printf("\nCorrect answer is - Jupiter\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 18
    question("Question 18 \n", "\nWhat is the smallest planet in our solar system?\n", "\n1) Mercury \n2) Venus \n3) Earth \n4) Mars \n");
    printf("\nCorrect answer is - Mercury\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 19
    question("Question 19\n", "\nWhich NASA space flight was the last manned mission to the moon?\n", "\n1) Apollo 20 \n2) Apollo 15 \n3) Apollo 17 \n4) Apollo 18 \n");
    printf("\nCorrect answer is - Apollo 17\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();

	//question 20
    question("Question 20\n", "\nHow many moons does Jupiter have\n", "\n1) 20 \n2) 200 \n3) 81 \n4) 181\n");
    printf("\nCorrect answer is - 181 moon\n");
    printf("press enter key to continue ");
    getchar();
    clear_screen();
}
//sample Question
void sample_question()
{
    printf("\nWelcome, Here i will explain how to play this game\n");
    printf("Sample Question\n\n");
    printf("How many Planet are there in our solar system excluding sun ?\n");
    printf("1) 8 \n2) 10 \n3) 9 \n4) 7 \n");
    printf("Here You have to enter the answer as optional number, for example answer of above question is 8 hence enter number 1");
    getchar();
    printf("\n");
}
//Main menu
void main()
{
    //main menu
    main_menu: clear_screen();
    printf("\nWelcome To this game....\n");
    printf("1) Start the quiz \n2) How to Play? \n3) Correct Answer \n4) Exit the game");
    printf("\nEnter the answer as the option number - ");
    ans = getchar();
    printf("\n");
    switch (ans)
	{
    case '1': //Main Game - Quiz Question
        clear_screen();
        getchar();
        questions();
        goto main_menu;

    case '2': // How to play menu
        clear_screen();
        correct = 1;
        sample_question();
        check_answer();
		printf("Press enter key to continue");
		getchar();
		goto main_menu;

    case '3': //correct answer menu
        printf("\nEnter the code you got at end of the quiz - ");
        scanf("%d", & check);
        if (check == pass_key)
		{
            clear_screen();
            correct_answer();
            goto main_menu;
        }
		else
		{
            printf("\nFirst Attempt the quiz to see the answer\n");
            printf("Press enter key to continue");
            getchar();
            getchar();
            goto main_menu;
        }

    case '4': //for exiting the game
        clear_screen();
        printf("\n");
        printf("Thank you for trying game\nPress enter key");
        getchar();
        getchar();
        break;

    default:
        getchar();
        goto main_menu;
    }
}

