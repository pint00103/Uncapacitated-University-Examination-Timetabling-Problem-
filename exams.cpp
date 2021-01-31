/*
 * exams.cpp
 *
 *
 * Author: Βανάκα Χριστίνα
 */





// ανάγνωση δεδομένων από ένα αρχείο προβλήματος (με κατάληξη stu) που περιέχει
// πληροφορίες για τις εξετάσεις μαθημάτων στις οποίες είναι εγγεγραμμένος
// ο κάθε σπουδαστής

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <string>
#include <list>

using namespace std;

class Graph
{
private:
    int V;
    int *data;

public:
    Graph(int v) : V(v)
    {
        data = new int[v * v];
        for (int i = 0; i < v * v; i++)
        {
            data[i] = 0;
        }
    }
    ~Graph()
    {
        delete[] data;
    }

    int get_V()
    {
        return V;
    }

    void insert_edge(int i, int j, int value)
    {
        data[i * V + j] = value;
    }

    int get_edge_value(int i, int j)
    {
        return data[i * V + j];
    }


    set<int> get_neighbors(int v)
    {
        set<int> neighbors;
        for (int j = 0; j < V; j++)
        {
            if (get_edge_value(v, j) > 0)
                neighbors.insert(j);
        }
        return neighbors;
    }
};

bool check_coloring(Graph g, int *solution)
{
    bool proper_coloring = true;
    for (int v = 1; v <= g.get_V(); v++)
    {
        int color_v = solution[v];
        set<int> neighbors_of_v = g.get_neighbors(v);
        for (int v2 : neighbors_of_v)
        {
            int color_v2 = solution[v2];
            if (color_v == color_v2)
            {
                proper_coloring = false;
                goto jump;
            }
        }
    }
jump:
    return proper_coloring;
}


int count_common_elements(set<int> s1, set<int> s2)
{
    int c = 0;
    for (int x : s1) // range based for
    {
        for (int y : s2)
        {
            if (x == y)
            {
                c++;
                break;
            }
        }
    }
    return c;
}

void read_data(string fn, int students, int exams)
{
    // ανάγνωση δεδομένων
    vector<set<int>> exam_students(exams + 1);
    fstream fs(fn);
    if (!fs.is_open())
    {
        cerr << "Could not open file " << fn << std::endl;
        exit(-1);
    }
    int student_id = 0;
    string line;
    while (getline(fs, line))
    {
        if (line.empty())
            continue;
        student_id++;
        istringstream iss(line);
        int exam_id;
        while (iss >> exam_id)
        {
            exam_students[exam_id].insert(student_id);
            // cout << "Student " << student_id << " is enrolled in exam " << exam_id << endl;
        }
    }
    fs.close();

    cout << "#################################" << endl;

    for (int i = 1; i <= exams; i++)
    {
        cout << "Exam " << i << " Enrolled students: ";
        for (int student_id : exam_students[i]) // range based for
        {
             cout << student_id << " ";
        }
              cout << endl;
    }

    // δημιουργία πίνακα γειτνίασης
    // cout << "Adjacency Matrix" << endl;
    int *adj_matrix = new int[exams * exams];
    for (int i = 0; i < exams; i++)
    {
        for (int j = 0; j < exams; j++)
        {
            if (i == j)
            {
                adj_matrix[i * exams + j] = 0; // adj_matrix[i][j]
                continue;
            }
            int c = count_common_elements(exam_students[i + 1], exam_students[j + 1]);
            if (c > 0)
            {
                // cout << i + 1 << " " << j + 1 << " " << c << endl;
            }
            adj_matrix[i * exams + j] = c;
        }
    }

    // Υπολογισμός συντελεστή πυκνότητας
    int c = 0;
    for (int i = 0; i < exams; i++)
    {
        for (int j = 0; j < exams; j++)
        {
            if (adj_matrix[i * exams + j] > 0)
            {
                c++;
            }
        }
    }

    double cd = double(c) / double(exams * exams);
    cout << "Conflict Density: " << cd << endl;

    int max = 0;
    for (int i = 0; i < exams; i++)
    {
        int d = 0;
        for (int j = 0; j < exams; j++)
        {
            if (adj_matrix[i * exams + j] > 0)

            {
                d++;
            }
        }
        if (d > max)
        {
            max = d;
        }
    }

    cout << "Degree Max: " << max << endl;

    delete[] adj_matrix;
}



int main() {
	int problem = 0;
	bool selection = true;


	while (selection)  {




        cout <<"If you want to run the problem  <<car_f_92_stu>> " << " press : 1" <<endl;
        cout <<"If you want to run the problem  <<car_s_91.stu>> " << " press : 2" <<endl;
        cout <<"If you want to run the problem  <<ear_f_83.stu>> " << " press : 3" <<endl;
        cout <<"If you want to run the problem  <<hec_s_92.stu>> " << " press : 4" <<endl;
        cout <<"If you want to run the problem  <<kfu_s_93.stu>> " << " press : 5" <<endl;
        cout <<"If you want to run the problem  <<lse_f_91.stu>> " << " press : 6" <<endl;
        cout <<"If you want to run the problem  <<pur_s_93.stu>> " << " press : 7" <<endl;
        cout <<"If you want to run the problem  <<rye_s_93.stu>> " << " press : 8" <<endl;
        cout <<"If you want to run the problem  <<sta_f_83.stu>> " << " press : 9" <<endl;
        cout <<"If you want to run the problem  <<tre_s_92.stu>> " << " press : 10" <<endl;
        cout <<"If you want to run the problem  <<uta_s_92.stu>> " << " press : 11" <<endl;
        cout <<"If you want to run the problem  <<ute_s_92.stu>> " << " press : 12" <<endl;
        cout <<"If you want to run the problem  <<yor_f_83.stu>> " << " press : 13" <<endl;

        cin >> problem;


                 while ((problem < 1) || (problem  > 13)) {
        	    	cout <<"This problem doesn't exist." <<endl;
        	    	cout <<"Please choose another problem!" <<endl;
        	    	cin >> problem;
        	    	if ((problem > 0) && (problem <14))
        	    		break;
        	        }



	    if(problem == 1)
	        read_data("C:/datasets-main/car_f_92.stu", 18419, 543);
	    if(problem == 2)
	    	read_data("C:/datasets-main/car_s_91.stu", 16925, 682);
	    if(problem == 3)
	    	read_data("C:/datasets-main/ear_f_83.stu", 1125, 190);
	    if(problem == 4)
	    	read_data("C:/datasets-main/hec_s_92.stu", 2823, 81);
	    if(problem == 5)
	    	read_data("C:/datasets-main/kfu_s_93.stu", 5349, 461);
	    if(problem == 6)
	    	read_data("C:/datasets-main/lse_f_91.stu", 2726, 381);
	    if(problem == 7)
	    	read_data("C:/datasets-main/pur_s_93.stu", 30029, 2419);
	    if(problem == 8)
	    	read_data("C:/datasets-main/rye_s_93.stu", 11483, 486);
	    if(problem == 9)
	    	read_data("C:/datasets-main/sta_f_83.stu", 611, 139);
	    if(problem == 10)
	    	read_data("C:/datasets-main/tre_s_92.stu", 4360, 261);
	    if(problem == 11)
	    	read_data("C:/datasets-main/uta_s_92.stu", 21266, 622);
	    if(problem == 12)
	    	read_data("C:/datasets-main/ute_s_92.stu", 2749, 184);
	    if(problem == 13)
	    	read_data("C:/datasets-main/yor_f_83.stu", 941, 181);










        	       	cout << "More problems? (y/n) "<< endl;
        	       	   string reply;
        		       cin >> reply;
        		       if ( reply == "y") {
        		    	    cout << "Choose the problem you want to run!" << endl;
        		    	    continue; }
        		    	  if  ( reply == "n")
        		    	  {	    selection = false;
                                break; }









	   }

 }
