#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	int rollnumber[size]{};
	float midmarks[size]{};
	float finalmarks[size]{};
	int classes[size] {};
	char grades[size] = { '\0' };
	int totalstudents = 50;
	int choice = 0;
	int temproll = 0;
	float tempmid = 0;
	float tempfinal = 0;
	int tempclass = 0;
	char tempgrade = '\0';

	for (int i = 0; i < totalstudents; i++)
	{
		rollnumber[i] = i + 1;
		midmarks[i] = i % 51;
		finalmarks[i] =( i*2 )% 101;
		classes[i] = (i % 10) + 1;

		if (finalmarks[i] < 50)
		{
			grades[i] = 'F';

		}
		else if (finalmarks[i] <= 59 )
		{
			grades[i] = 'D';
		}
		else if (finalmarks[i] <= 72)
		{
			grades[i] = 'C';
		}
		else if (finalmarks[i] <= 85 )
		{
			grades[i] = 'B';
		}
		else
		{
			grades[i] = 'A';
		}
	}

		do
		{
			cout << "MENU" << endl;
			cout << "1. All the records roll number wise in ascending order." << endl;
			cout << "2. All the records roll number wise in descending order. " << endl;
			cout << "3. All records in ascending order based on marks in Midterm. " << endl;
			cout << "4. All records in descending order based on marks in Midterm. " << endl;
			cout << "5. All records in ascending order based on marks in finals. " << endl;
			cout << "6. All records in descending order based on marks in finals. " << endl;
			cout << "7. All records in ascending order based on grade. " << endl;
			cout << "8. All records in descending order based on grade. " << endl;
			cout << "9. Add a new entry of a student. " << endl;
			cout << "10. Delete a student record based on his roll number. " << endl;
			cout << "11. Record of all the students greater than X marks in final exam (in descending order with respect to marks obtained in final exam).  " << endl;
			cout << "12. Record of all the students greater than X marks in final exam (in ascending order with respect to marks obtained in final exam).  " << endl;
			cout << "13. Record of all the students less than or equal to X marks in final exam (in descending order with respect to marks obtained in final exam).  " << endl;
			cout << "14. Record of all the students less than or equal to X marks in final exam (in ascending order with respect to marks obtained in final exam).  " << endl;
			cout << "15. Record of all the students greater than X grade (in descending order with respect to grade). " << endl;
			cout << "16. Record of all the students greater than X grade (in ascending order with respect to grade). " << endl;
			cout << "17. Record of all the students less than or equal to X grade (in descending order with respect to grade). " << endl;
			cout << "18. Record of all the students less than or equal to X grade (in ascending order with respect to grade). " << endl;
			cout << "19. Enter e or E to EXIT." << endl;
			cin >> choice;

			if (choice >= 1 && choice <= 8)
			{
				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (choice == 1 && rollnumber[i] > rollnumber[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
							
						if (choice == 2 && rollnumber[i] < rollnumber[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 3 && midmarks[i] > midmarks[j])
						{

							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 4 && midmarks[i] < midmarks[j])
						{

							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 5 && finalmarks[i] > finalmarks[j])
						{

							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 6 && finalmarks[i] < finalmarks[j])
						{

							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 7 && grades[i] > grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
						if (choice == 8 && grades[i] < grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}


					}

				}
				for (int i = 0; i < totalstudents; i++)
				{
					cout << "ROLL NUMBER: " << rollnumber[i];
					cout << " MIDTERM MARKS: " << midmarks[i];
					cout << "  FINAL MARKS: " << finalmarks[i];
					cout << "  CLASS: " << classes[i];
					cout << "  GRADE: " << grades[i] << endl;
				}

			}

			if (choice == 9)
			{
				if (totalstudents < size)
				{
					cout << "Enter roll number: ";
					cin >> rollnumber[totalstudents];

					cout << "Enter midterm marks: ";
					cin >> midmarks[totalstudents];

					cout << "Enter final marks: ";
					cin >> finalmarks[totalstudents];

					cout << "Enter class: ";
					cin >> classes[totalstudents];

					if (finalmarks[totalstudents] < 50)
					{
						grades[totalstudents] = 'F';

					}
					else if (finalmarks[totalstudents] <= 59)
					{
						grades[totalstudents] = 'D';
					}
					else if (finalmarks[totalstudents] <= 72)
					{
						grades[totalstudents] = 'C';
					}
					else if (finalmarks[totalstudents] <= 85)
					{
						grades[totalstudents] = 'B';
					}
					else
					{
						grades[totalstudents] = 'A';
					}
					totalstudents++;

					cout << "Student added sucessfully. Updated records: " << endl;
					for (int i = 0; i < totalstudents; i++)
					{
						cout << "Roll number: " << rollnumber[i];
						cout << "  Midterm marks: " << midmarks[i];
						cout << "  Final marks: " << finalmarks[i];
						cout << "  Class: " << classes[i];
						cout << "  Grade: " << grades[i] << endl;
					}

				}
				else
				{
					cout << " cannot add more students, Maximum limit reached." << endl;
				}
			}

			if (choice == 10)
			{
				int delroll = 0;

				cout << " Enter the roll number of student you want to delete: ";
				cin >> delroll;

				bool found = false;

				for (int i = 0; i < totalstudents; i++)
				{
					if (rollnumber[i] == delroll)
					{
						for (int j = i; j < totalstudents - 1; j++)
						{
							rollnumber[j] = rollnumber[j + 1];
							midmarks[j] = midmarks[j + 1];
							finalmarks[j] = finalmarks[j + 1];
							classes[j] = classes[j + 1];
							grades[j] = grades[j + 1];
						}
						totalstudents--;
						bool found = true;
						cout << "Student deleted. Updated records: " << endl;

						for (int k = 0; k < totalstudents; k++)
						{
							cout << "Roll number: " << rollnumber[k];
							cout << "  Midterm marks: " << midmarks[k];
							cout << "  Final marks: " << finalmarks[k];
							cout << "  Class: " << classes[k];
							cout << "  Grade: " << grades[k] << endl;
						}
						break;
						
					}
					
				}
			}
			if (choice == 11)
			{
				float x = 0;
				cout << "Enter x: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (finalmarks[i] < finalmarks[j])
						{
						    temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

						    tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

						    tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

						    tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

						    tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with final marks greater than " << x << " in descending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (finalmarks[i] > x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}

			}
			if (choice == 12)
			{
				float x = 0;
				cout << "Enter x: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (finalmarks[i] > finalmarks[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with final marks greater than " << x << " in ascending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (finalmarks[i] > x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 13)
			{
				float x = 0;
				cout << "Enter x: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (finalmarks[i] < finalmarks[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with final marks less than and equal to " << x << " in descending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (finalmarks[i] <= x )
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 14)
			{
				float x = 0;
				cout << "Enter x: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (finalmarks[i] > finalmarks[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with final marks less than and equal to " << x << " in ascending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (finalmarks[i] <= x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 15)
			{
				char x = '\0';
				cout << "Enter grade: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (grades[i] < grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with grade greater than  " << x << " in descending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (grades[i] < x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 16)
			{
				char x = '\0';
				cout << "Enter grade: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (grades[i]> grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with grade greater than  " << x << " in ascending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (grades[i] < x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 17)
			{
				char x = '\0';
				cout << "Enter grade: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (grades[i] < grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with grade smaller than and equal to  " << x << " in descending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (grades[i] >= x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			if (choice == 18)
			{
				char x = '\0';
				cout << "Enter grade: ";
				cin >> x;

				for (int i = 0; i < totalstudents - 1; i++)
				{
					for (int j = i + 1; j < totalstudents; j++)
					{
						if (grades[i] > grades[j])
						{
							temproll = rollnumber[i];
							rollnumber[i] = rollnumber[j];
							rollnumber[j] = temproll;

							tempmid = midmarks[i];
							midmarks[i] = midmarks[j];
							midmarks[j] = tempmid;

							tempfinal = finalmarks[i];
							finalmarks[i] = finalmarks[j];
							finalmarks[j] = tempfinal;

							tempclass = classes[i];
							classes[i] = classes[j];
							classes[j] = tempclass;

							tempgrade = grades[i];
							grades[i] = grades[j];
							grades[j] = tempgrade;
						}
					}
				}
				cout << "Students with grade smaller than and equal to  " << x << " in ascending order: " << endl;
				for (int i = 0; i < totalstudents; i++)
				{
					if (grades[i] >= x)
					{
						cout << "ROLL NUMBER: " << rollnumber[i];
						cout << " MIDTERM MARKS: " << midmarks[i];
						cout << "  FINAL MARKS: " << finalmarks[i];
						cout << "  CLASS: " << classes[i];
						cout << "  GRADE: " << grades[i] << endl;
					}
				}
			}
			
			if (choice == 19)
			{
				char x = '\0';
				cout << "Enter e or E.";
				cin >> x;
				if (x == 'e' || x == 'E')
				{
					cout << "Exiting program." << endl;
					break;
				}
			}
				
		}
		while (choice != 19);

		return 0;


}