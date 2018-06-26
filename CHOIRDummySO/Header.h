#pragma once


extern "C" {
	__attribute__((visibility("default"))) void pyfun_setparam_prefix(const char* prefix);
	__attribute__((visibility("default"))) void pyfun_setparam_output_path(const char* output_path);
	__attribute__((visibility("default"))) void pyfun_setparam_track_type(const int track_type);
	__attribute__((visibility("default"))) void pyfun_setparam_num_tetrodes(const int num_tetrodes);
	__attribute__((visibility("default"))) void pyfun_setparam_add_excluded_tetrode(const int tetrode);

	__attribute__((visibility("default"))) int pyfun_prepToTrain();
	__attribute__((visibility("default"))) int pyfun_startTrain();
	__attribute__((visibility("default"))) int pyfun_pauseTrain();
	__attribute__((visibility("default"))) int pyfun_resumeTrain();
	__attribute__((visibility("default"))) int pyfun_finishTrain();

	__attribute__((visibility("default"))) int pyfun_analyzeTrainingData(void(*next_tet_callback)(int tet));
	__attribute__((visibility("default"))) int pyfun_analyzeTrainingData_startat(void(*next_tet_callback)(int tet), int start_point);

	__attribute__((visibility("default"))) int pyfun_prepToStim();
	__attribute__((visibility("default"))) int pyfun_startStim();
	__attribute__((visibility("default"))) int pyfun_pauseStim();
	__attribute__((visibility("default"))) int pyfun_resumeStim();
	__attribute__((visibility("default"))) int pyfun_finishStim();

}