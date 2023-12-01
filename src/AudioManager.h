#pragma once
#ifndef J_AUDIOMANAGER_H
#define J_AUDIOMANAGER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "raylib.h"

#ifdef __cplusplus
}
#endif

class AudioManager
{
public:
	AudioManager();
	virtual ~AudioManager();

	static AudioManager* GetInstance();
	static void Destroy();

	void Init();

private:
	static AudioManager* m_pInstance;

};

#endif
