#include "Header.h"
#include <chrono>
#include <thread>

int CHOIR_NUM_TETS = 64;

void pyfun_setparam_train_prefix(const char * prefix)
{
}

void pyfun_setparam_experiment_prefix(const char * prefix)
{
}

void pyfun_setparam_output_path(const char * output_path)
{
}

void pyfun_setparam_track_type(const int track_type)
{
}

void pyfun_setparam_num_tetrodes(const int num_tetrodes)
{
	CHOIR_NUM_TETS = num_tetrodes;
}

void pyfun_setparam_add_excluded_tetrode(const int tetrode)
{
}

int pyfun_prepToTrain()
{
	return 0;
}

int pyfun_startTrain()
{
	return 0;
}

int pyfun_pauseTrain()
{
	return 0;
}

int pyfun_resumeTrain()
{
	return 0;
}

int pyfun_finishTrain()
{
	return 0;
}

void dummy_analyze(void(*next_tet_callback)(int tet), int start_point)
{
	for (int i = start_point; i < CHOIR_NUM_TETS; i++)
	{
		next_tet_callback(i + 1);
		std::this_thread::sleep_for(std::chrono::milliseconds(150));
	}

	next_tet_callback(0);
	std::this_thread::sleep_for(std::chrono::milliseconds(1500));
	next_tet_callback(CHOIR_NUM_TETS + 1);
}

int pyfun_analyzeTrainingData(void(*next_tet_callback)(int tet))
{
	return pyfun_analyzeTrainingData_startat(next_tet_callback, 0);
}

int pyfun_analyzeTrainingData_startat(void(*next_tet_callback)(int tet), int start_point)
{
	std::thread th(dummy_analyze, next_tet_callback, start_point);
	th.detach();
	return 0;
}

int pyfun_prepToStim()
{
	return 0;
}

int pyfun_startStim()
{
	return 0;
}

int pyfun_pauseStim()
{
	return 0;
}

int pyfun_resumeStim()
{
	return 0;
}

int pyfun_finishStim()
{
	return 0;
}
