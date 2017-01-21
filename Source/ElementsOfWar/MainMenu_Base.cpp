// Fill out your copyright notice in the Description page of Project Settings.

#include "ElementsOfWar.h"
#include "MainMenu_Base.h"
//
//// Called when the game starts or when spawned
//void UMainMenu_Base::Init()
//{
//	curIndex = (int32)MenuIndex::Play;
//}
//
//// Called every frame
//void UMainMenu_Base::Update(float DeltaTime)
//{
//	InputCheck();
//	m_cMoveSound->bStopWhenOwnerDestroyed = false;
//	m_cAcceptSound->bStopWhenOwnerDestroyed = false;
//	m_cDeclineSound->bStopWhenOwnerDestroyed = false;
//}
//
void UMainMenu_Base::InputCheck()
{
	APlayerController * pCon = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (pCon == NULL)
		return;

	if (pCon->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Up) || pCon->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Up))
	{
		curIndex -= 1;
		if (curIndex <= 0)
			curIndex = maxIndex;
	}
	else if (pCon->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Down) || pCon->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Down))
	{
		curIndex += 1;
		if (curIndex >= maxIndex)
			curIndex = 0;
	}
	/*{		

		if ((UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Up) || UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Up))
			&& curIndex > 0)
		{
			curIndex -= 1;

			if (m_cMoveSound)
			{
				m_cMoveSound->Activate(true);
				m_cMoveSound->Play(0.0f);
			}
		}
		else if ((UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Up) || UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Up))
			&& curIndex == 0)
		{
			curIndex = maxIndex;

			if (m_cMoveSound)
			{
				m_cMoveSound->Activate(true);
				m_cMoveSound->Play(0.0f);
			}
		}
		else if ((UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Down) || UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Down))
			&& curIndex < maxIndex)
		{
			curIndex += 1;

			if (m_cMoveSound)
			{
				m_cMoveSound->Activate(true);
				m_cMoveSound->Play(0.0f);
			}
		}
		else if ((UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_LeftStick_Down) || UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_DPad_Down))
			&& curIndex == maxIndex)
		{
			curIndex = 0;

			if (m_cMoveSound)
			{
				m_cMoveSound->Activate(true);
				m_cMoveSound->Play(0.0f);
			}
		}
		else if (UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_FaceButton_Bottom))
		{
			if (m_cAcceptSound)
			{
				m_cAcceptSound->Activate(true);
				m_cAcceptSound->Play(0.0f);
			}


			Accepted = true;
		}
		else if (UGameplayStatics::GetPlayerController(GetWorld(), i)->WasInputKeyJustPressed(EKeys::Gamepad_FaceButton_Right))
		{
			if (m_cDeclineSound)
			{
				m_cDeclineSound->Activate(true);
				m_cDeclineSound->Play(0.0f);
			}

			Decline();
		}
	}

	if ((UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::W))
		&& curIndex > 0)
	{
		curIndex -= 1;

		if (m_cMoveSound)
		{
			m_cMoveSound->Activate(true);
			m_cMoveSound->Play(0.0f);
		}
	}
	else if ((UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::W))
		&& curIndex == 0)
	{
		curIndex = maxIndex;

		if (m_cMoveSound)
		{
			m_cMoveSound->Activate(true);
			m_cMoveSound->Play(0.0f);
		}
	}
	else if ((UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::S))
		&& curIndex < maxIndex)
	{
		curIndex += 1;

		if (m_cMoveSound)
		{
			m_cMoveSound->Activate(true);
			m_cMoveSound->Play(0.0f);
		}
	}
	else if ((UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::S))
		&& curIndex == maxIndex)
	{
		curIndex = 0;

		if (m_cMoveSound)
		{
			m_cMoveSound->Activate(true);
			m_cMoveSound->Play(0.0f);
		}
	}
	else if (UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::E))
	{
		if (m_cAcceptSound)
		{
			m_cAcceptSound->Activate(true);
			m_cAcceptSound->Play(0.0f);
		}

		Accepted = true;

	}
	else if (UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::Q))
	{
		if (m_cDeclineSound)
		{
			m_cDeclineSound->Activate(true);
			m_cDeclineSound->Play(0.0f);
		}

		Decline();
	}
	else if (UGameplayStatics::GetPlayerController(GetWorld(), 0)->WasInputKeyJustPressed(EKeys::Escape))
	{
		GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
	}*/

}
//
//void UMainMenu_Base::Accept()
//{
//
//
//
//	switch (curIndex)
//	{
//	case 0://play
//		Accepted = false;		
//		break;
//
//	case 1://instructions
//		break;
//
//	case 2://options
//		break;
//
//	case 3://credits
//		break;
//
//	case 4://exit
//		GetWorld()->GetFirstPlayerController()->ConsoleCommand("quit");
//		break;
//
//	default:
//		break;
//	}
//}
//
//void UMainMenu_Base::Decline()
//{
//	curIndex = (int32)MenuIndex::Exit;
//}


