#include <windows.h>    //키보드 입력
#pragma comment (lib, "winmm.lib")    //음악
#include <mmsystem.h>;                //음악
#include <Digitalv.h>;                //음악

MCI_OPEN_PARMS openBgm;
MCI_PLAY_PARMS playBgm;
MCI_OPEN_PARMS opencoinSound;
MCI_PLAY_PARMS playcoinSound;

int dwID;


class Sound {
public:
    void playingBgm(void) {
        openBgm.lpstrElementName = "mario.mp3";            //파일 오픈
        openBgm.lpstrDeviceType = "mpegvideo";    //mp3 형식
        mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&openBgm);
        dwID = openBgm.wDeviceID;
        mciSendCommand(dwID, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&openBgm);    //음악 반복 재생
    }
    void optionSelect(void) {
        opencoinSound.lpstrElementName = "Coin.mp3";    //파일 오픈
        opencoinSound.lpstrDeviceType = "mpegvideo";    //mp3 형식
        mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&opencoinSound);
        dwID = opencoinSound.wDeviceID;
        mciSendCommand(dwID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&opencoinSound);    //음악을 한 번 재생
        //Sleep(1000);    //효과음이 재생될 때까지 정지했다가
        mciSendCommand(dwID, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);    //음원 재생 위치를 처음으로 초기화
    }
};