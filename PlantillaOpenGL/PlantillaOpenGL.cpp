#pragma region LIBRERÍAS
// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

// Se usan <> para librerías que ya trae el sistema.
// GLEW y GLFW dependen de estas dos librerías, por eso se ponen antes de llamar al GLEW_STATIC.
#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

// Se usan "" para librerías personalizadas.
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <iostream>

#include "Shader.h"
#include "Vertice.h"
#pragma endregion

using namespace std;
Shader *shader;
GLuint posicionID;
GLuint colorID;

vector<Vertice> triangulo;
GLuint vertexArrayTrianguloID;
GLuint bufferTrianguloID;

vector<Vertice> cuadrado;
GLuint vertexArrayCuadradoID;
GLuint bufferCuadradoID;

vector<Vertice> chichenItzaIZQ;
GLuint vertexArrayPiramideIZQID;
GLuint bufferPiramideIZQID;

vector<Vertice> chichenItzaDER;
GLuint vertexArrayPiramideDERID;
GLuint bufferPiramideDERID;

vector<Vertice> Escalera;
GLuint vertexArrayEscaleraID;
GLuint bufferEscaleraID;

vector<Vertice> Escalera2;
GLuint vertexArrayEscalera2ID;
GLuint bufferEscalera2ID;

vector<Vertice> Escalera3;
GLuint vertexArrayEscalera3ID;
GLuint bufferEscalera3ID;

vector<Vertice> Escalera4;
GLuint vertexArrayEscalera4ID;
GLuint bufferEscalera4ID;

vector<Vertice> Escalera5;
GLuint vertexArrayEscalera5ID;
GLuint bufferEscalera5ID;

vector<Vertice> Escalera6;
GLuint vertexArrayEscalera6ID;
GLuint bufferEscalera6ID;

vector<Vertice> Escalera7;
GLuint vertexArrayEscalera7ID;
GLuint bufferEscalera7ID;

vector<Vertice> Escalera8;
GLuint vertexArrayEscalera8ID;
GLuint bufferEscalera8ID;

vector<Vertice> Escalera9;
GLuint vertexArrayEscalera9ID;
GLuint bufferEscalera9ID;


vector<Vertice> Suelo;
GLuint vertexArraySueloID;
GLuint bufferSueloID;

void inicializarTriangulo()
{
	Vertice v1 =
	{
		vec3(0.0f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v2 =
	{
		vec3(-0.3f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v3 =
	{
		vec3(0.3f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	triangulo.push_back(v1);
	triangulo.push_back(v2);
	triangulo.push_back(v3);
}

void inicializarCuadrado()
{
	Vertice v1 =
	{
		vec3(-0.8f, 0.8f, 0.0f),
		vec4(0.4f, 0.7f, 0.1f, 1.0f)
	};

	Vertice v2 =
	{
		vec3(-0.4f, 0.8f, 0.0f),
		vec4(0.4f, 0.7f, 0.1f, 1.0f)
	};

	Vertice v3 =
	{
		vec3(-0.4f, 0.5f, 0.0f),
		vec4(0.4f, 0.7f, 0.1f, 1.0f)
	};

	Vertice v4 =
	{
		vec3(-0.8f, 0.5f, 0.0f),
		vec4(0.4f, 0.7f, 0.1f, 1.0f)
	};

	cuadrado.push_back(v1);
	cuadrado.push_back(v2);
	cuadrado.push_back(v3);
	cuadrado.push_back(v4);
}

void piramideChichenItza()
{
	// Lado izquierdo
	Vertice v1 =
	{
		vec3(0.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v2 =
	{
		vec3(-1.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v3 =
	{
		vec3(-1.0f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v4 =
	{
		vec3(-0.9f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v5 =
	{
		vec3(-0.9f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v6 =
	{
		vec3(-0.8f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v7 =
	{
		vec3(-0.8f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v8 =
	{
		vec3(-0.7f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v9 =
	{
		vec3(-0.7f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v10 =
	{
		vec3(-0.6f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v11 =
	{
		vec3(-0.6f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v12 =
	{
		vec3(-0.5f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v13 =
	{
		vec3(-0.5f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v14 =
	{
		vec3(-0.4f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v15 =
	{
		vec3(-0.4f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v16 =
	{
		vec3(-0.3f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v17 =
	{
		vec3(-0.3f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v18 =
	{
		vec3(-0.2f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v19 =
	{
		vec3(-0.2f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	// Parte de arriba
	Vertice v20 =
	{
		vec3(-0.15f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v21 =
	{
		vec3(-0.15f, 0.6f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice punto_der =
	{
		vec3(0.0f, 0.6f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice punto_izq =
	{
		vec3(0.0f, 0.6f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v22 =
	{
		vec3(0.15f, 0.6f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v23 =
	{
		vec3(0.15f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	// Lado derecho
	Vertice v24 =
	{
		vec3(0.2f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v25 =
	{
		vec3(0.2f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v26 =
	{
		vec3(0.3f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v27 =
	{
		vec3(0.3f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v28 =
	{
		vec3(0.4f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v29 =
	{
		vec3(0.4f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v30 =
	{
		vec3(0.5f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v31 =
	{
		vec3(0.5f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v32 =
	{
		vec3(0.6f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v33 =
	{
		vec3(0.6f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v34 =
	{
		vec3(0.7f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v35 =
	{
		vec3(0.7f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v36 =
	{
		vec3(0.8f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v37 =
	{
		vec3(0.8f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v38 =
	{
		vec3(0.9f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v39 =
	{
		vec3(0.9f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v40 =
	{
		vec3(1.0f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v41 =
	{
		vec3(1.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v42 =
	{
		vec3(0.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v43 =
	{
		vec3(1.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice v44 =
	{
		vec3(0.0f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//escaleras
	Vertice vescalera1 =
	{
		vec3(-0.15f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice vescalera2 =
	{
		vec3(0.15f, 0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice vescalera3 =
	{
		vec3(0.15f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	Vertice vescalera4 =
	{
		vec3(-0.15f, -0.5f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera2
	Vertice Escalera21 =
	{
		vec3(-0.2f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera22 =
	{
		vec3(0.2f, 0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera3
	Vertice Escalera31 =
	{
		vec3(-0.3f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera32 =
	{
		vec3(0.3f, 0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};


	//Escalera4
	Vertice Escalera41 =
	{
		vec3(-0.4f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera42 =
	{
		vec3(0.4f, 0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera5
	Vertice Escalera51 =
	{
		vec3(-0.5f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera52 =
	{
		vec3(0.5f, 0.0f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera6
	Vertice Escalera61 =
	{
		vec3(-0.6f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera62 =
	{
		vec3(0.6f, -0.1f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera7
	Vertice Escalera71 =
	{
		vec3(-0.7f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera72 =
	{
		vec3(0.7f, -0.2f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera8
	Vertice Escalera81 =
	{
		vec3(-0.8f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera82 =
	{
		vec3(0.8f, -0.3f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Escalera9
	Vertice Escalera91 =
	{
		vec3(-0.9f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)

	};

	Vertice Escalera92 =
	{
		vec3(0.9f, -0.4f, 0.0f),
		vec4(1.0f, 0.8f, 0.0f, 1.0f)
	};

	//Suelo

	Vertice Suelo =
	{
		vec3(-1.0f, -0.5f, 0.0f),
		vec4(0.0f, 1.0f, 0.0f, 1.0f)

	};

	Vertice Suelo =
	{
		vec3(1.0f, -0.5f, 0.0f),
		vec4(0.0f, 1.0f, 0.0f, 1.0f)
	};

	
	chichenItzaIZQ.push_back(v1);
	chichenItzaIZQ.push_back(v2);
	chichenItzaIZQ.push_back(v3);
	chichenItzaIZQ.push_back(v4);
	chichenItzaIZQ.push_back(v5);
	chichenItzaIZQ.push_back(v6);
	chichenItzaIZQ.push_back(v7);
	chichenItzaIZQ.push_back(v8);
	chichenItzaIZQ.push_back(v9);
	chichenItzaIZQ.push_back(v10);

	chichenItzaIZQ.push_back(v11);
	chichenItzaIZQ.push_back(v12);
	chichenItzaIZQ.push_back(v13);
	chichenItzaIZQ.push_back(v14);
	chichenItzaIZQ.push_back(v15);
	chichenItzaIZQ.push_back(v16);
	chichenItzaIZQ.push_back(v17);
	chichenItzaIZQ.push_back(v18);
	chichenItzaIZQ.push_back(v19);
	chichenItzaIZQ.push_back(v20);

	chichenItzaIZQ.push_back(v21);

	chichenItzaIZQ.push_back(punto_izq);
	chichenItzaDER.push_back(punto_der);

	chichenItzaDER.push_back(v22);
	chichenItzaDER.push_back(v23);
	chichenItzaDER.push_back(v24);
	chichenItzaDER.push_back(v25);
	chichenItzaDER.push_back(v26);
	chichenItzaDER.push_back(v27);
	chichenItzaDER.push_back(v28);
	chichenItzaDER.push_back(v29);
	chichenItzaDER.push_back(v30);

	chichenItzaDER.push_back(v31);
	chichenItzaDER.push_back(v32);
	chichenItzaDER.push_back(v33);
	chichenItzaDER.push_back(v34);
	chichenItzaDER.push_back(v35);
	chichenItzaDER.push_back(v36);
	chichenItzaDER.push_back(v37);
	chichenItzaDER.push_back(v38);
	chichenItzaDER.push_back(v39);
	chichenItzaDER.push_back(v40);

	chichenItzaDER.push_back(v41);
	chichenItzaDER.push_back(v42);
	Escalera.push_back(vescalera1);
	Escalera.push_back(vescalera2);
	Escalera.push_back(vescalera3);
	Escalera.push_back(vescalera4);

	Escalera2.push_back(Escalera21);
	Escalera2.push_back(Escalera22);

	Escalera3.push_back(Escalera31);
	Escalera3.push_back(Escalera32);

	Escalera4.push_back(Escalera41);
	Escalera4.push_back(Escalera42);

	Escalera5.push_back(Escalera51);
	Escalera5.push_back(Escalera52);


	Escalera6.push_back(Escalera61);
	Escalera6.push_back(Escalera62);

	Escalera7.push_back(Escalera71);
	Escalera7.push_back(Escalera72);

	Escalera8.push_back(Escalera81);
	Escalera8.push_back(Escalera82);

	Escalera9.push_back(Escalera91);
	Escalera9.push_back(Escalera92);

	
}


#pragma region FUNCIONES PARA RUTINA DE DIBUJO
void dibujar() {
	// Elegir el shader
	shader->enlazar();

	#pragma region Triangulo
		// Elegir un vertex array
		glBindVertexArray(vertexArrayTrianguloID);
		// Dibujar
		glDrawArrays(GL_TRIANGLES, 0, triangulo.size());
	#pragma endregion

	#pragma region Cuadrado
		glBindVertexArray(vertexArrayCuadradoID);
		glDrawArrays(GL_POLYGON, 0, cuadrado.size());
	#pragma endregion

	#pragma region Chichen Itza
		glBindVertexArray(vertexArrayPiramideIZQID);
		glDrawArrays(GL_LINE_LOOP, 0, chichenItzaIZQ.size());

		glBindVertexArray(vertexArrayPiramideDERID);
		glDrawArrays(GL_LINE_LOOP, 0, chichenItzaDER.size());

		glBindVertexArray(vertexArrayEscaleraID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera.size());

		glBindVertexArray(vertexArrayEscalera2ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera2.size());

		glBindVertexArray(vertexArrayEscalera3ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera3.size());

		glBindVertexArray(vertexArrayEscalera4ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera4.size());

		glBindVertexArray(vertexArrayEscalera5ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera5.size());

		glBindVertexArray(vertexArrayEscalera6ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera6.size());

		glBindVertexArray(vertexArrayEscalera7ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera7.size());

		glBindVertexArray(vertexArrayEscalera8ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera8.size());

		glBindVertexArray(vertexArrayEscalera9ID);
		glDrawArrays(GL_LINE_LOOP, 0, Escalera9.size());

		glBindVertexArray(vertexArraySueloID);
		glDrawArrays(GL_LINE_LOOP, 0, Suelo.size());
	#pragma endregion


	// Soltar el vertex array
	glBindVertexArray(0);
	// Soltar el shader
	shader->desenlazar();
}

void actualizar() {

}
#pragma endregion

int main()
{
#pragma region CREAR UN CONTEXTO
	// Un contexto es una ventana de un sistema operativo.
	// OpenGL no gestiona el uso de ventanas.

	// Declaramos apuntador de ventana.
	GLFWwindow * window;

	// Condicionamos en caso de no poder iniciar el GLFW.
	if (!glfwInit()) 
		exit(EXIT_FAILURE);

	// Si GLFW puede iniciar entonces inicia la ventana.
	window = glfwCreateWindow(1024, 768, "Ventana", NULL, NULL);

	// Si puede iniciar GLFW pero no la ventana terminamos la ejecución.
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	// Establecemos el contexto, donde se mandarán los pixeles generados.
	glfwMakeContextCurrent(window);

	// Una vez establecido el contexto activamos funciones modernas.
	glewExperimental = true;
	GLenum errorGlew = glewInit();

	if (errorGlew != GLEW_OK)
	{
		cout << glewGetErrorString(errorGlew);
	}
#pragma endregion

#pragma region SHADERS
	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//inicializarTriangulo();
	//inicializarCuadrado();
	piramideChichenItza();

	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos.
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader.
	shader->desenlazar();

	#pragma region TRIANGULO
		//Crea un vertex array.
		glGenVertexArrays(1, &vertexArrayTrianguloID);
		glBindVertexArray(vertexArrayTrianguloID);

		//Crear vertex buffer.
		glGenBuffers(1, &bufferTrianguloID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferTrianguloID);

		//Llenar el buffer.
		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*triangulo.size(), triangulo.data(), GL_STATIC_DRAW);

		//Habilitar tributos de shader.
		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		//Especificar a OpenGL como se va a comunicar.
		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));
	#pragma endregion

	#pragma region CUADRADO
		glGenVertexArrays(1, &vertexArrayCuadradoID);
		glBindVertexArray(vertexArrayCuadradoID);

		glGenBuffers(1, &bufferCuadradoID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferCuadradoID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*cuadrado.size(), cuadrado.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));
	#pragma endregion

#pragma region CHICHEN ITZA
		// Lado izquierdo
		glGenVertexArrays(1, &vertexArrayPiramideIZQID);
		glBindVertexArray(vertexArrayPiramideIZQID);

		glGenBuffers(1, &bufferPiramideIZQID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferPiramideIZQID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*chichenItzaIZQ.size(), chichenItzaIZQ.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		// Lado derecho
		glGenVertexArrays(1, &vertexArrayPiramideDERID);
		glBindVertexArray(vertexArrayPiramideDERID);

		glGenBuffers(1, &bufferPiramideDERID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferPiramideDERID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*chichenItzaDER.size(), chichenItzaDER.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera
		glGenVertexArrays(1, &vertexArrayEscaleraID);
		glBindVertexArray(vertexArrayEscaleraID);

		glGenBuffers(1, &bufferEscaleraID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscaleraID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera.size(), Escalera.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 2
		glGenVertexArrays(1, &vertexArrayEscalera2ID);
		glBindVertexArray(vertexArrayEscalera2ID);

		glGenBuffers(1, &bufferEscalera2ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera2ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera2.size(), Escalera2.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 3
		glGenVertexArrays(1, &vertexArrayEscalera3ID);
		glBindVertexArray(vertexArrayEscalera3ID);

		glGenBuffers(1, &bufferEscalera3ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera3ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera3.size(), Escalera3.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 4
		glGenVertexArrays(1, &vertexArrayEscalera4ID);
		glBindVertexArray(vertexArrayEscalera4ID);

		glGenBuffers(1, &bufferEscalera4ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera4ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera4.size(), Escalera4.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 5
		glGenVertexArrays(1, &vertexArrayEscalera5ID);
		glBindVertexArray(vertexArrayEscalera5ID);

		glGenBuffers(1, &bufferEscalera5ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera5ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera5.size(), Escalera5.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 6
		glGenVertexArrays(1, &vertexArrayEscalera6ID);
		glBindVertexArray(vertexArrayEscalera6ID);

		glGenBuffers(1, &bufferEscalera6ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera6ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera6.size(), Escalera6.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 7
		glGenVertexArrays(1, &vertexArrayEscalera7ID);
		glBindVertexArray(vertexArrayEscalera7ID);

		glGenBuffers(1, &bufferEscalera7ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera7ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera7.size(), Escalera7.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escaler 8
		glGenVertexArrays(1, &vertexArrayEscalera8ID);
		glBindVertexArray(vertexArrayEscalera8ID);

		glGenBuffers(1, &bufferEscalera8ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera8ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera8.size(), Escalera8.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Escalera 9
		glGenVertexArrays(1, &vertexArrayEscalera9ID);
		glBindVertexArray(vertexArrayEscalera9ID);

		glGenBuffers(1, &bufferEscalera9ID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferEscalera9ID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Escalera9.size(), Escalera9.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));

		//Suelo
		glGenVertexArrays(1, &vertexArraySueloID);
		glBindVertexArray(vertexArraySueloID);

		glGenBuffers(1, &bufferSueloID);
		glBindBuffer(GL_ARRAY_BUFFER, bufferSueloID);

		glBufferData(GL_ARRAY_BUFFER, sizeof(Vertice)*Suelo.size(), Suelo.data(), GL_STATIC_DRAW);

		glEnableVertexAttribArray(posicionID);
		glEnableVertexAttribArray(colorID);

		glVertexAttribPointer(posicionID, 3, GL_FLOAT, GL_FALSE, sizeof(Vertice), 0);
		glVertexAttribPointer(colorID, 4, GL_FLOAT, GL_FALSE, sizeof(Vertice), (void*)sizeof(vec3));


#pragma endregion

	//Soltar vertex array y buffer.
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
#pragma endregion

#pragma region CICLO DE DIBUJO (DRAW LOOP)
	//El while establece que mientras la ventana esté abierta realice lo de su interior.
	while (!glfwWindowShouldClose(window)){
		// Establecemos región de dibujo.
		glViewport(0, 0, 1024, 768);
		// Establecemos color de borrado.
		glClearColor(0, 0.5, 1, 1);
		// Borramos.
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		// Rutina de dibujo.
		dibujar();
		actualizar();

		// Cambiar los buffers.
		glfwSwapBuffers(window);
		// Reconocer si hay entradas.
		glfwPollEvents();
	}

	// Para destruir ventana y borrarlo/liberarlo de la memoria.
	glfwDestroyWindow(window);
	glfwTerminate();
#pragma endregion

    return 0;
}

