#include "AudioManager.h"


/*static*/ AudioManager* AudioManager::m_pInstance = 0;

AudioManager::AudioManager()
{

}

/*virtual*/ AudioManager::~AudioManager()
{

}

/*static*/ AudioManager* AudioManager::GetInstance()
{
	if (m_pInstance == 0)
	{
		m_pInstance = new AudioManager();
	}

	return m_pInstance;
}


/*static*/ void AudioManager::Destroy()
{
	CloseAudioDevice();     // Close audio context

	if (m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = 0;
	}
}

void AudioManager::Init()
{
	InitAudioDevice();      // Initialize audio device

}

