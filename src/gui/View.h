/*
 * View.h
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#ifndef VIEW_H_
#define VIEW_H_

// include glut, GL, etc

// https://github.com/assimp/assimp/blob/master/samples/SimpleOpenGL/Sample_SimpleOpenGL.c
// assimp include files. These three are usually needed.
#include <assimp/cimport.h>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include <stdio.h>
#include <stdlib.h>

using namespace std;

class View {

private:
	/**
	 *
	 */
	struct aiLogStream stream;
	const struct aiScene* scene;

public:
	View();
	virtual ~View();

	/**
	 * load a blender model file and include it in the scene
	 */
	int loadAsset(const char* path);

	/**
	 * I'm sexy and I show it :)
	 */
	void show();

};

#endif /* VIEW_H_ */
