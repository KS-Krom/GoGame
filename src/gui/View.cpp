/*
 * View.cpp
 *
 *  Created on: Feb 12, 2014
 *      Author: samuel
 */

#include "View.h"

View::View() {

	// get a handle to the predefined STDOUT log stream and attach
	// it to the logging system. It remains active for all further
	// calls to aiImportFile(Ex) and aiApplyPostProcessing.
	//stream = aiGetPredefinedLogStream(aiDefaultLogStream_STDOUT,NULL);
	//aiAttachLogStream(&stream);

	// ... same procedure, but this stream now writes the
	// log messages to assimp_log.txt
	//stream = aiGetPredefinedLogStream(aiDefaultLogStream_FILE,"assimp_log.txt");
	//aiAttachLogStream(&stream);

	//init scene
	this->scene = NULL;
}

View::~View() {

}

void View::show(){

	// cleanup - calling 'aiReleaseImport' is important, as the library
	// keeps internal resources until the scene is freed again. Not
	// doing so can cause severe resource leaking.
	//aiReleaseImport(scene);


}


int View::loadAsset(const char* path) {
	// we are taking one of the postprocessing presets to avoid
	// spelling out 20+ single postprocessing flags here.
	//this->scene = aiImportFile(path, aiProcessPreset_TargetRealtime_MaxQuality);

	if (this->scene) {
		//TODO :)
		return 0;
	} else {
		printf("[VIEW] Model import fail !\t GOD WHY ?!\n");
		printf("[VIEW] path: %s\n", path);
	}
	return 1;
}
