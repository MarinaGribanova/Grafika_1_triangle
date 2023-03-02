// Grafika1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <GLFW/glfw3.h>
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>



void rand_color() {
    srand(time(NULL));
    float c[3];
    for (int i = 0; i < 3; i++)
    {
        c[i] = (float)rand() / (float)RAND_MAX;
    }
    glColor3f(c[0], c[1], c[2]);
}

int main()
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Grafika_1", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    //glortho(-5, 5, -5,5, -1, 1);
    //glenable(gl_depth_test);
    //glloadidentity();
    //glfrustum(-1, 1, -1, 1, 1, 5);
    //gltranslatef(0, 0, 1);
    //glortho(-5, 5, -5, 5, -1, 1);
    //glfrustum(-1,1, -1,1, 1,5);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */

        GLfloat angle = 0.7f; // Угол поворота
        glRotatef(angle, 0.0f, 0.0f, 1.0f); // Поворот вокруг оси Z
        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT); //очищение контекста экрана (фон)
     ///*   glVertexPointer(3, GL_FLOAT, 0, &coord);
     //   glEnableClientState(GL_VERTEX_ARRAY);
     //   glColor3f(0, 1, 0);
     //   glDrawArrays(GL_TRIANGLES, 0, 3);
     //   glDisableClientState(GL_VERTEX_ARRAY);*/
      //  glLoadIdentity();
      //  GLfloat x = 0.5f; // Координата X
      //  GLfloat y = 0.5f; // Координата Y
      //  glTranslatef(x, y, 0.0f); // Перемещение на заданные координаты

      //  GLfloat scale = 0.5f; // Масштаб
      ////glLoadIdentity();
      //  glScalef(scale, scale, 1.0f); // Увеличение на заданный масштаб


        glPushMatrix(); //Сохраняем текущую матрицу 
        glBegin(GL_TRIANGLES);
        rand_color(); glVertex2f(-1.0f, 0.0f);
        rand_color(); glVertex2f(0.0f, 1.0f);
        rand_color(); glVertex2f(1.0f, 0.0f);
       //glVertex2f(1.0f, 0.0f);
       // glVertex2f(0.0f, -1.0f);
       // glVertex2f(-1.0f, 0.0f);
        glEnd();

        //glPointSize(10);
        //glLineWidth(10);
        ////glBegin(GL_POINTS); //рисование точек
        //glBegin(GL_LINE_LOOP); //рисование линий
        //glColor3f(1.0f, 0.0f, 0.0f);
        //glVertex2f(-0.5f, 0.5f);
        //glVertex2f(0.0f, 0.75f);
        //glVertex2f(0.5f, 0.5f);
        //glVertex2f(0.5f, -0.5f);
        //glEnd();
        glPopMatrix();
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
