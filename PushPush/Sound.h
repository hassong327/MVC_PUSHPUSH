#include <windows.h>    //Ű���� �Է�
#pragma comment (lib, "winmm.lib")    //����
#include <mmsystem.h>;                //����
#include <Digitalv.h>;                //����

MCI_OPEN_PARMS openBgm;
MCI_PLAY_PARMS playBgm;
MCI_OPEN_PARMS opencoinSound;
MCI_PLAY_PARMS playcoinSound;

int dwID;


class Sound {
public:
    void playingBgm(void) {
        openBgm.lpstrElementName = "mario.mp3";            //���� ����
        openBgm.lpstrDeviceType = "mpegvideo";    //mp3 ����
        mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&openBgm);
        dwID = openBgm.wDeviceID;
        mciSendCommand(dwID, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&openBgm);    //���� �ݺ� ���
    }
    void optionSelect(void) {
        opencoinSound.lpstrElementName = "Coin.mp3";    //���� ����
        opencoinSound.lpstrDeviceType = "mpegvideo";    //mp3 ����
        mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&opencoinSound);
        dwID = opencoinSound.wDeviceID;
        mciSendCommand(dwID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&opencoinSound);    //������ �� �� ���
        //Sleep(1000);    //ȿ������ ����� ������ �����ߴٰ�
        mciSendCommand(dwID, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);    //���� ��� ��ġ�� ó������ �ʱ�ȭ
    }
};