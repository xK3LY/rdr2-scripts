void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_552 = 323324563;
	iLocal_555 = -300816757;
	iLocal_556 = -2078205736;
	iLocal_557 = -1765306495;
	sLocal_571 = "spatc_walk";
	func_1(&(Local_14.f_146));
	func_2(&Local_14);
	if (has_force_cleanup_occurred(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_144)
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				if (Local_14.f_505 && does_entity_exist(Local_14.f_3))
				{
					if (Local_14.f_143)
					{
						func_10(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_143)
				{
					func_10(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || func_15(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_527 == 0)
				{
					if (!func_16(&(Local_14.f_146), 8))
					{
						func_17(&(Local_14.f_146), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_146), 8))
				{
					func_18(&(Local_14.f_146), 8);
				}
				if ((func_16(&(Local_14.f_146), 2) || (Local_14.f_146.f_353 && func_16(&(Local_14.f_146), 1))) || Local_14.f_146.f_349 != 5)
				{
					if (func_19(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_529), 0, 1097859072, 0))
					{
						func_20(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					func_22(&Local_14);
					if (func_23(&Local_14, 1))
					{
						func_7(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					func_7(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		wait(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_357 = 2626;
	func_25(&(uParam0->f_181));
	func_25(&(uParam0->f_209));
	func_25(&(uParam0->f_237));
	func_25(&(uParam0->f_265));
	func_25(&(uParam0->f_293));
}

void func_2(var uParam0)
{
	func_26();
	func_27();
	uParam0->f_10 = 120;
	func_28(&(uParam0->f_506));
	func_29(&(Local_14.f_11), 1);
	func_30(&(Local_14.f_11), 1);
	func_31(&(Local_14.f_11), 1);
	func_32(&(Local_14.f_11), 0);
	func_33(&(Local_14.f_11), 1, 1, 1);
	func_34(&(Local_14.f_11), 0);
	func_35(&(Local_14.f_11), 0);
	func_36(&(Local_14.f_11), 0);
	func_37(&(Local_14.f_11), 1);
	func_38(&(Local_14.f_11), 1);
	func_39(&(Local_14.f_11), 1);
	func_40(&(Local_14.f_11), 1);
	func_41(&(Local_14.f_11), 1);
	func_42(&(Local_14.f_11), 1);
	func_43(&(Local_14.f_11), 0);
	func_44(&(Local_14.f_11), 1);
	func_45(&(Local_14.f_11), 1);
	func_46(&(Local_14.f_11), 0);
	func_47(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_146));
	destroy_itemset(iParam0->f_104);
	func_51(iParam0->f_102);
	func_51(iParam0->f_105);
	func_52(&(iParam0->f_506));
	func_53(*iParam0);
	terminate_this_thread();
}

void func_4(var uParam0)
{
	if (does_entity_exist(uParam0->f_3) && !is_entity_dead(uParam0->f_3))
	{
		if (is_waypoint_playback_going_on_for_ped(uParam0->f_3, 0))
		{
			waypoint_playback_override_speed(uParam0->f_3, 0.35f, 0, -1082130432, 0);
		}
		set_ped_can_play_gesture_anims(uParam0->f_3, 0, 1);
	}
	if (iVar577 != 1 && is_entity_in_volume(Global_35, uParam0->f_102, true, 0))
	{
		disable_control_action(0, -762150781, false);
	}
	if (func_54(&uLocal_708) && func_55(&uLocal_708, 2f))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, _0x0139637a3bff8b6d(Local_14.f_3, &uVar0));
	}
}

void func_5(int iParam0, var uParam1)
{
	if (func_56(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_57(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_58(*iParam0, iParam0->f_1, &(iParam0->f_506), iParam0->f_3))
	{
		iParam0->f_527 = 1;
	}
	if (func_59(iParam0))
	{
		if (!func_54(&(iParam0->f_7)))
		{
			func_60(&(iParam0->f_7), 0);
		}
		else if (func_61(&(iParam0->f_7)) > 10f)
		{
			func_62(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_54(&(iParam0->f_7)))
	{
		func_62(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_63(uParam0))
	{
		uParam0->f_104 = create_itemset(true);
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_144 = iParam1;
}

bool func_8(var uParam0)
{
	if (func_64(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_65(uParam0))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	if (!does_entity_exist(uParam0->f_3) || !does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if ((get_frame_count() % 40) == 0)
	{
		uParam0->f_142 = get_distance_between_coords(get_entity_coords(uParam0->f_3, true, false), get_entity_coords(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_66(iParam0) && does_entity_exist(Global_35)) && !Global_1935630->f_12) && ((_does_volume_exist(iParam0->f_102) && is_entity_in_volume(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0)))
	{
		if (func_68(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(iParam0->f_41[iParam0->f_101], 0);
				func_71(iParam0->f_41[iParam0->f_101], 0);
				if (iParam0->f_528)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
				if (!func_74(iParam0, 2))
				{
					func_75(&(iParam0->f_3));
					func_76(&(iParam0->f_41[iParam0->f_101]->f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_77(iParam0->f_41[iParam0->f_101], 0);
		func_75(&(iParam0->f_3));
		func_71(iParam0->f_41[iParam0->f_101], 0);
		func_76(&(iParam0->f_41[iParam0->f_101]->f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_66(iParam0))
	{
		if (func_78(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(iParam0->f_41[iParam0->f_101], 0);
				func_75(&(iParam0->f_3));
				func_71(iParam0->f_41[iParam0->f_101], 0);
				func_76(&(iParam0->f_41[iParam0->f_101]->f_21), 0, 0, 1, 0);
				if (iParam0->f_528)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
			}
		}
	}
	else
	{
		func_70(iParam0->f_41[iParam0->f_101], 0);
		if (does_entity_exist(iParam0->f_3) && !is_entity_dead(iParam0->f_3))
		{
			_0xe98d55c5983f2509(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	if (func_79(uParam0))
	{
		if (uParam0->f_531)
		{
			bVar0 = func_80(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_530), 1101004800);
		}
		else
		{
			bVar0 = func_81(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_82(uParam0))
			{
				func_17(&(uParam0->f_146), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	if (!func_83(Global_35, iVar563, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_84())
		{
			return 1;
		}
	}
	if (!is_ped_injured(iParam1))
	{
		if (vdist(Global_36, get_entity_coords(iParam1, true, false)) < 18f || is_scripted_speech_playing(iParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_85(0) == 7 || func_86())
		{
			return 1;
		}
	}
	if (func_87(&((*Global_1396257)[iParam0]->f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_88(uParam0->f_352, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_352 = 0;
		func_89(&(uParam0->f_352), iParam1);
	}
	else
	{
		func_89(&(uParam0->f_352), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_90(&(uParam0->f_352), iParam1);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (is_entity_dead(*uParam2) || Global_1935630->f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (is_scripted_speech_playing(*uParam2))
		{
			Global_40.f_11623[iParam0]->f_5++;
			Global_40.f_11623[iParam0]->f_2 = func_91();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_92(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_54(uParam3))
	{
		func_93(uParam3, 0f);
	}
	else if (func_61(uParam3) >= 2f)
	{
		if (!func_94(Global_40.f_11623[iParam0]->f_2))
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return true;
		}
		else
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return true;
		}
	}
	return false;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_96(iParam0) || func_97(iParam0->f_134, iParam0->f_136))
	{
		return;
	}
	if (iParam0->f_137 < 2)
	{
		if (func_98(&(iParam0->f_3), 249295937))
		{
			func_99(iParam0);
			func_100(&(iParam0->f_134), iParam0->f_136);
		}
	}
}

void func_22(int iParam0)
{
	if (func_101(iParam0))
	{
		func_102(&(iParam0->f_104), iParam0->f_105, &(iParam0->f_3), &(iParam0->f_106), &(iParam0->f_131), 5000);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return true;
		}
	}
	func_104(&(iParam0->f_146));
	return false;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 13725;
	uParam0->f_24 = 13734;
	uParam0->f_25 = 13743;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 2;
	Local_14.f_1 = func_108(2);
	Local_14.f_2 = func_110(Local_14, Local_14.f_1, 9, func_109(Local_14));
	uLocal_553 = uVar554;
	uLocal_554 = uVar555;
	iLocal_551 = func_110(Local_14, 0, 9, func_109(Local_14));
	if (func_111(iVar549))
	{
		iLocal_550 = func_112(iVar549);
	}
	vLocal_546 = { func_113(Local_14, Local_14.f_1, (*Global_1396257)[Local_14]->f_633) };
	func_114();
	func_115(&(Local_14.f_146), 0);
	Local_14.f_102 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "volTalkTrigger");
	Local_14.f_105 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 6.378f, 6.378f, 3.212f, "volLookIK");
	Local_14.f_135 = 2;
	Local_14.f_136 = 4;
	Local_14.f_146.f_357 = 18305;
	Local_14.f_528 = 0;
}

void func_27()
{
	iLocal_562 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "m_volTrigger");
	iLocal_564 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 11.794f, 11.794f, 13.097f, "m_volSpeechArea");
	iLocal_565 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 60.561f, 60.561f, 12.56f, "m_volCalloverArea");
	iLocal_563 = _create_volume_cylinder_with_custom_name(vLocal_546, 0f, 0f, 0f, 2.243f, 2.243f, 3.65f, "m_volStayAway");
	iLocal_561 = _create_volume_sphere_with_custom_name(vLocal_546, 0f, 0f, 0f, 50f, 50f, 50f, "m_volRandomEventBlock");
	iLocal_566 = _create_volume_cylinder_with_custom_name(-3667.189f, -2599.147f, -14.66374f, 0f, 0f, 0f, 108.3022f, 88.25834f, 15.55599f, "m_volGoIdleLimits");
	uLocal_567 = _0x0eb78c2b156635b1(665633627, vLocal_546, 0f, 0f, 0f, 1.85f, 1.85f, 10f);
	_0x5b23dff8e0948bb2(uVar565, 0);
	_0xbe551c2cc421185d(uVar565, 1);
}

void func_28(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16384);
	}
	else
	{
		func_118(&(uParam0->f_1), 16384);
	}
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2048);
	}
	else
	{
		func_118(&(uParam0->f_1), 2048);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 16);
	}
	else
	{
		func_117(uParam0, 67108864);
		func_117(uParam0, 16);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 524288);
	}
	else
	{
		func_117(uParam0, 524288);
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_118(uParam0, 268435456);
	}
	else
	{
		func_117(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_118(uParam0, 1073741824);
	}
	else
	{
		func_117(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_118(uParam0, 536870912);
	}
	else
	{
		func_117(uParam0, 536870912);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 131072);
	}
	else
	{
		func_118(&(uParam0->f_1), 131072);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 4);
	}
	else
	{
		func_117(uParam0, 4);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 2);
	}
	else
	{
		func_117(uParam0, 2);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2);
	}
	else
	{
		func_118(&(uParam0->f_1), 2);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 8);
	}
	else
	{
		func_118(&(uParam0->f_1), 8);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 128);
	}
	else
	{
		func_117(uParam0, 128);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 8);
	}
	else
	{
		func_117(uParam0, 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 32);
	}
	else
	{
		func_117(uParam0, 32);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 4);
	}
	else
	{
		func_118(&(uParam0->f_1), 4);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 1024);
	}
	else
	{
		func_118(&(uParam0->f_1), 1024);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 524288);
	}
	else
	{
		func_118(&(uParam0->f_1), 524288);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 1048576);
	}
	else
	{
		func_117(uParam0, 1048576);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 262144);
	}
	else
	{
		func_117(uParam0, 262144);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16);
	}
	else
	{
		func_118(&(uParam0->f_1), 16);
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_143 = iParam1;
}

int func_49(int iParam0)
{
	if (is_itemset_valid(iVar710))
	{
		destroy_itemset(iVar710);
	}
	if (is_itemset_valid(iVar708))
	{
		destroy_itemset(iVar708);
	}
	if (is_itemset_valid(iVar709))
	{
		destroy_itemset(iVar709);
	}
	func_119(0);
	func_120(&uLocal_690);
	func_121(&(Local_14.f_3), &uLocal_689, 161068336, 25f, 1);
	_0xc67a4910425f11f1(player_id(), "CrierBubble");
	_0xc67a4910425f11f1(player_id(), "CrierConvo");
	set_player_control(get_player_index(), true, 256, false);
	func_122();
	func_123(Local_14.f_3);
	func_124();
	stop_ped_speaking(Local_14.f_3, false);
	set_blocking_of_non_temporary_events(Local_14.f_3, false);
	if (_does_volume_exist(iVar558))
	{
		func_125(iVar558);
	}
	func_51(iVar559);
	func_51(iVar558);
	func_51(iVar562);
	func_51(iVar560);
	func_51(iVar561);
	func_51(iVar563);
	func_51(iVar564);
	if (does_entity_exist(Local_14.f_3))
	{
		set_ped_config_flag(Local_14.f_3, 153, false);
		if (!is_entity_dead(Local_14.f_3))
		{
			set_ped_as_no_longer_needed(&(Local_14.f_3));
		}
	}
	if (does_entity_exist(iVar555))
	{
		set_object_as_no_longer_needed(&uLocal_558);
	}
	if (does_entity_exist(iVar556))
	{
		set_object_as_no_longer_needed(&uLocal_559);
	}
	if (does_entity_exist(iVar557))
	{
		set_object_as_no_longer_needed(&uLocal_560);
	}
	remove_waypoint_recording(sVar568);
	return 1;
}

void func_50(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_does_anim_scene_exist(uParam0[iVar0]))
		{
			_delete_anim_scene(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_51(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_52(var uParam0)
{
	if (is_itemset_valid(uParam0->f_18))
	{
		destroy_itemset(uParam0->f_18);
	}
	if (is_itemset_valid(uParam0->f_19))
	{
		destroy_itemset(uParam0->f_19);
	}
	if (_does_volume_exist(uParam0->f_20))
	{
		_delete_volume(uParam0->f_20);
	}
	if (func_54(&(uParam0->f_13)))
	{
		func_62(&(uParam0->f_13));
	}
}

void func_53(int iParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 43, false);
	}
	if ((*Global_1396257)[iParam0]->f_631)
	{
		func_126(0, -1);
	}
	func_127();
	(*Global_1396257)[iParam0]->f_631 = 0;
	Global_1415398->f_2 = (Global_1415398->f_2 - 1);
	Global_1935183->f_28 = 0;
}

bool func_54(var uParam0)
{
	return func_128(*uParam0, 1);
}

bool func_55(var uParam0, float fParam1)
{
	if (func_129(uParam0, fParam1))
	{
		func_62(uParam0);
		return true;
	}
	return false;
}

bool func_56(var uParam0)
{
	return false;
}

bool func_57(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_88(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_58(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if ((get_frame_count() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_85(0) == 1 || func_85(0) == 2) || func_85(0) == 8) || func_130(&Global_1935630, 2048))
			{
				func_89(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_85(0) == 11)
			{
				func_89(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_85(0) == 6)
			{
				func_89(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141->f_1328)
			{
				func_89(iParam2, 16);
			}
		}
	}
	if ((get_frame_count() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_131((*(*Global_1396257)[iParam0])[iParam1]->f_19) == 0 && func_131((*(*Global_1396257)[iParam0])[iParam1]->f_20) == 23))
			{
				iVar0 = func_91();
				iVar1 = (*(*Global_1396257)[iParam0])[iParam1]->f_19;
				iVar2 = (*(*Global_1396257)[iParam0])[iParam1]->f_20;
				if (func_131(iVar2) > func_131(iVar1))
				{
					if (func_131(iVar0) > func_131(iVar2) + 1 || func_131(iVar0) < func_131(iVar1))
					{
						func_89(iParam2, 32);
					}
				}
				else if (func_131(iVar0) > func_131(iVar2) + 1 && func_131(iVar0) < func_131(iVar1))
				{
					func_89(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if ((*(*Global_1396257)[iParam0])[iParam1]->f_40 != 4)
			{
				if (&(*(*Global_1396257)[iParam0])[iParam1]->f_5[0] != -1 || &(*(*Global_1396257)[iParam0])[iParam1]->f_5[1] != -1)
				{
					if (((func_132(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0])) || func_132(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1]))) || func_133(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[0]))) || func_133(&((*(*Global_1396257)[iParam0])[iParam1]->f_5[1])))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_134((*(*Global_1396257)[iParam0])[iParam1]->f_40))
					{
						func_89(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (get_game_timer() > iParam2->f_17)
			{
				if (func_135(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_136(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_54(&(iParam2->f_13)))
					{
						func_93(&(iParam2->f_13), 0f);
					}
					else if (func_137(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_62(&(iParam2->f_13));
						func_89(iParam2, 512);
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
				else
				{
					if (func_54(&(iParam2->f_13)))
					{
						func_62(&(iParam2->f_13));
					}
					iParam2->f_17 = get_game_timer() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_138())
			{
				func_89(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_139())
			{
				func_89(iParam2, 2048);
			}
		}
		if (func_130(&Global_1935630, 16384) || Global_1430231->f_4)
		{
			func_89(iParam2, 128);
		}
		if (func_87(&((*Global_1396257)[iParam0]->f_626), 2048))
		{
			func_89(iParam2, 256);
		}
	}
	if ((((((((((func_88(*iParam2, 2) || func_88(*iParam2, 4)) || func_88(*iParam2, 8)) || func_88(*iParam2, 16)) || func_88(*iParam2, 32)) || func_88(*iParam2, 64)) || func_88(*iParam2, 128)) || func_88(*iParam2, 256)) || func_88(*iParam2, 512)) || func_88(*iParam2, 1024)) || func_88(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0)
{
	if ((func_140(iParam0) || (func_141(iParam0->f_40, 1) && !func_83(Global_35, (*(*Global_1396257)[*iParam0])[iParam0->f_1]->f_47, 0, 1))) || (func_142(iParam0->f_10) && !is_entity_in_volume(Global_35, func_143(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_54(uParam0))
	{
		func_144(uParam0);
	}
}

float func_61(var uParam0)
{
	if (!func_54(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_145(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_146() - uParam0->f_1);
}

void func_62(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_63(var uParam0)
{
	_text_database_request("SPAH");
	_text_database_request("SPDEF");
	_text_database_request("SPATCAU");
	request_model(iVar549, false);
	request_model(iVar550, false);
	request_model(iVar551, false);
	request_model(iVar552, false);
	request_waypoint_recording(sVar568);
	func_147(iVar558, "SP_ArmadilloTownCrier_Block", 1, 0, 0, 0, -1082130432);
	_0xb56d41a694e42e86(uVar560, 2500607, 0, 0, -1, -1, 10);
	_0xed9582b3da8f02b4(1);
	return true;
}

bool func_64(var uParam0)
{
	if (!_text_database_has_loaded("SPAH"))
	{
		return false;
	}
	if (!_text_database_has_loaded("SPDEF"))
	{
		return false;
	}
	if (!_text_database_has_loaded("SPATCAU"))
	{
		return false;
	}
	if (!has_model_loaded(iVar549))
	{
		return false;
	}
	if (!has_model_loaded(iVar550))
	{
		return false;
	}
	if (!has_model_loaded(iVar551))
	{
		return false;
	}
	if (!has_model_loaded(iVar552))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sVar568))
	{
		return false;
	}
	if (_0x5c16855277819bbf() != 1)
	{
		return false;
	}
	return true;
}

bool func_65(var uParam0)
{
	if ((func_148(&(Local_14.f_3), iVar549, &uVar0, vLocal_546, vLocal_546.f_3, 0, 0, 1) && func_149(&uLocal_560, iVar552, &uVar0, vLocal_546)) && func_149(&uLocal_558, iVar551, &uVar0, vLocal_546))
	{
		add_entity_to_audio_mix_group(Local_14.f_3, "special_ped_group", 0f);
		set_blocking_of_non_temporary_events(Local_14.f_3, true);
		stop_ped_speaking(Local_14.f_3, true);
		set_ped_max_move_blend_ratio(Local_14.f_3, 0.75f);
		set_ped_config_flag(Local_14.f_3, 153, true);
		func_150(Local_14.f_3, 2);
		_0x9851de7aec10b4e1(get_entity_coords(Local_14.f_3, true, false), 7f, 1, 0);
		vVar1 = { 0f, 0f, 0f };
		_0x7c00cfc48a782dc0(uVar559, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(uVar562, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(uVar561, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(uVar560, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(Local_14.f_102, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(Local_14.f_105, Local_14.f_3, vVar1, vVar1, 2, 1);
		_0x7c00cfc48a782dc0(uVar564, Local_14.f_3, vVar1, vVar1, 2, 1);
		func_151(&(Local_14.f_3), &uLocal_689, 161068336, 25f, -1082130432);
		func_152();
		if (Local_14.f_1 == 0)
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		else
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		func_155(&(Local_14.f_146), 1, 1);
		Local_14.f_504 = 1;
		func_156(&Local_14, 0);
		func_157(&Local_14, 0, 0, "SPD_UC_GRT", "", -163964935, 0, 0, 0);
		func_157(&Local_14, 0, 1, "SPD_UC_ANT", "", 648122183, 0, 0, 0);
		func_159(&Local_14, 0, func_158(3, 0, 0), 0);
		func_160(&Local_14, 0, 0);
		func_89(&(Local_14.f_134), 64);
		func_161(&uLocal_584, Local_14.f_3, "ARM_TOWN_CRIER", 0);
		_0x3946fc742ac305cd(player_id(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, 0, "CrierBubble");
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	if ((func_88(Local_14.f_134, 64) && !func_88(Local_14.f_134, 67108864)) && !func_88(Local_14.f_134, 32768))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (func_162(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

int func_68(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!is_string_null_or_empty(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	iVar0 = func_163(&(iParam0->f_3), iParam0->f_41[iParam1], 15f, &(iParam0->f_41[iParam1]->f_21), 0f, 2, iParam0->f_41[iParam1]->f_57, iVar1, iParam0->f_41[iParam1]->f_56, 0, 0, 2, -1082130432);
	if (func_164(iParam0))
	{
		func_77(iParam0->f_41[iParam1], 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1]->f_58 = iVar0;
		}
		return iParam0->f_41[iParam1]->f_58;
	}
	else
	{
		func_77(iParam0->f_41[iParam1], 0);
	}
	return iVar0;
}

bool func_69(int iParam0)
{
	if (!func_88(Local_14.f_134, 524288))
	{
		if (func_165(iParam0, 0, &iVar0))
		{
			func_166();
			func_89(&(Local_14.f_134), 524288);
			func_90(&(Local_14.f_134), 64);
			func_89(&(Local_14.f_134), 67108864);
			func_90(&(Local_14.f_134), 2097152);
			func_17(&(Local_14.f_146), 4, 0);
			func_167(iVar0);
		}
	}
	return true;
}

void func_70(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_169(uParam0->f_21[iVar0], 1, 0))
			{
				func_170(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_169(uParam0->f_21[iVar0], 1, 0))
			{
				func_170(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_71(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_62(&(iParam0->f_18));
}

void func_72(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!does_entity_exist(*uParam1))
	{
		return;
	}
	if (func_97(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0]->f_6++;
	if (Global_40.f_11623[iParam0]->f_6 == 1 && func_172(func_171(-1342635612)) < 5)
	{
		func_173(func_171(-1342635612), 1);
	}
	Global_40.f_11623[iParam0]->f_3 = func_91();
	func_100(uParam2, uParam3);
	(*Global_1396257)[iParam0]->f_631 = 1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 1)
	{
		return;
	}
	iParam0->f_41[iParam1]->f_58 = iParam2;
}

bool func_74(int iParam0, int iParam1)
{
	return func_88(iParam0->f_138, iParam1);
}

void func_75(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_76(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_174((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_175(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_77(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168(uParam0->f_21[iVar0]->f_5);
		if (!is_string_null_or_empty(sVar1))
		{
			if (bParam1 && !func_169(uParam0->f_21[iVar0], 1, 0))
			{
				func_170(uParam0->f_21[iVar0], bParam1, 0);
			}
			else if (!bParam1 && func_169(uParam0->f_21[iVar0], 1, 0))
			{
				func_170(uParam0->f_21[iVar0], bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_78(int iParam0, int iParam1)
{
	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!is_string_null_or_empty(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	if ((_does_volume_exist(iParam0->f_102) && is_entity_in_volume(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0))
	{
		func_70(iParam0->f_41[iParam1], 1);
		iVar0 = func_163(&(iParam0->f_3), iParam0->f_41[iParam1], 15f, &(iParam0->f_41[iParam1]->f_21), 0f, 3, iParam0->f_41[iParam1]->f_57, iVar1, 1, 0, 0, 2, -1082130432);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1]->f_58 = iVar0;
		}
		return iParam0->f_41[iParam1]->f_58;
	}
	else
	{
		func_70(iParam0->f_41[iParam1], 0);
	}
	return iVar0;
}

bool func_79(var uParam0)
{
	if (!func_88(Local_14.f_134, 32768))
	{
		return true;
	}
	return false;
}

int func_80(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!does_entity_exist(*uParam2))
	{
		return 0;
	}
	if (is_ped_dead_or_dying(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630->f_39 > 0 || _0x285d36c5c72b0569(Global_35) <= 1f)
	{
		if (func_81(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((has_entity_been_damaged_by_any_ped(*uParam2) || has_entity_been_damaged_by_any_object(*uParam2)) || has_entity_been_damaged_by_any_vehicle(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (_0x9c81338b2e62ce0a(player_id(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (is_shocking_event_in_sphere(217247011, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (is_shocking_event_in_sphere(956330317, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (is_shocking_event_in_sphere(-966930978, get_entity_coords(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_81(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_176(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_177(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_178(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_179(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_180(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_181(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_182(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_178(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_183(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_184(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_185(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_186(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_186(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_178(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_187(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_188(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_189(uParam2, 4000))
				{
					if ((func_190(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_191(uParam2, iParam0)) && func_192(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_190(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_191(uParam2, iParam0)) && func_192(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_193(iParam0, Global_1935630->f_41))
							{
								func_194();
								*uParam3 = 2;
								func_178(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_193(iParam0, Global_1935630->f_41))
						{
							func_194();
							*uParam3 = 2;
							func_178(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_195(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_196() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_194();
						*uParam3 = 2;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_197())
					{
						if (func_193(iParam0, Global_1935630->f_42))
						{
							func_194();
							*uParam3 = 2;
							func_178(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_198(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_178(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_199(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_200(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_201(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_202(uParam2, 4000))
				{
					if (func_203(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_178(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_204(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_178(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_205(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_178(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_82(var uParam0)
{
	switch (uParam0->f_39)
	{
		case 32:
		case 64:
		case 128:
		case 4096:
		case 8192:
		case 16384:
		case 524288:
			func_89(&(Local_14.f_134), 1073741824);
			bVar0 = true;
			break;
		case 2:
		case 4:
		case 8:
		case 512:
			bVar0 = true;
			break;
		case 16:
			bVar0 = true;
			break;
		default:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		if (func_206(Local_14.f_3, 1))
		{
			func_207(&Local_14);
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_83(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

bool func_84()
{
	if (func_208() == -1)
	{
		if (_get_global_block_can_be_accessed(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if ((*Global_1392915)[iVar0]->f_1 != -1)
				{
					if (func_209((*Global_1392915)[iVar0]->f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_85(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

bool func_86()
{
	return Global_1310750->f_16077 != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return func_141(*uParam0, iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_89(int iParam0, int iParam1)
{
	func_100(iParam0, iParam1);
}

void func_90(var uParam0, int iParam1)
{
	func_210(uParam0, iParam1);
}

int func_91()
{
	return &Global_1899515;
}

bool func_92(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_146() - fParam1);
	func_211(uParam0, 1);
	func_212(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(int iParam0)
{
	return iParam0 != -15;
}

void func_95(int iParam0)
{
	Global_40.f_11623[iParam0]->f_5++;
	Global_40.f_11623[iParam0]->f_2 = func_91();
}

bool func_96(int iParam0)
{
	return false;
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_98(var uParam0, int iParam1)
{
	if (is_scripted_speech_playing(*uParam0))
	{
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_99(int iParam0)
{
}

void func_100(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_101(int iParam0)
{
	if (func_83(Global_35, iVar559, 0, 1))
	{
		return true;
	}
	return false;
}

void func_102(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	if (is_entity_dead(*uParam2))
	{
		return;
	}
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_54(uParam4))
	{
		func_93(uParam4, 0f);
	}
	else if (func_137(uParam4) > 1000)
	{
		if (!is_entity_in_volume(Global_35, iParam1, true, 0))
		{
			if (func_213(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = &uVar0[0];
				func_93(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			func_93(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	_0x66f9eb44342bb4c5(*uParam2, uParam3);
}

bool func_103(int iParam0)
{
	func_214(Local_14.f_3, &(Local_14.f_134), 4096, 2, 0);
	if (func_16(&(Local_14.f_146), 2) || func_215(&Local_14) == 4)
	{
		func_89(&(Local_14.f_134), 1024);
	}
	func_216(Local_14.f_3, &(Local_14.f_134), 4194304, 8388608, 16777216, "SPECIAL_PED_LIGHTWEIGHT_1_1", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "CrierBubble", "CrierConvo");
	func_217(Local_14.f_134, 33554432, 1, 1);
	if (func_215(&Local_14) == 0)
	{
		if (func_88(Local_14.f_134, 1024) && !func_88(Local_14.f_134, 512))
		{
			func_89(&(Local_14.f_134), 512);
			func_218(1);
		}
		set_blocking_of_non_temporary_events(Local_14.f_3, false);
		stop_ped_speaking(Local_14.f_3, false);
		return true;
	}
	else if (!func_88(Local_14.f_134, 512))
	{
		if (!func_83(Global_35, Local_14.f_102, 0, 1))
		{
			if (func_219(&(Local_14.f_3), &uLocal_682, &uLocal_683, &uLocal_686, 4, 0, 7000, 0))
			{
			}
		}
		if (iVar577 == 1 && func_86())
		{
			func_218(0);
			set_blocking_of_non_temporary_events(Local_14.f_3, false);
			stop_ped_speaking(Local_14.f_3, false);
			return true;
		}
	}
	if (func_220(117) && !func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		func_89(&(Local_14.f_134), -2147483648);
		func_17(&(Local_14.f_146), 2, 1);
	}
	if (!does_entity_exist(Local_14.f_3) || is_entity_dead(Local_14.f_3))
	{
		return true;
	}
	if (Local_14.f_527 && func_221(&(Local_14.f_506)))
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	switch (uParam0->f_349)
	{
		case 1:
			if (func_222(uParam0, &(uParam0->f_181), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_181.f_6);
					Stack.Push(uParam0->f_181.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_181.f_10);
					Stack.Push(uParam0->f_181.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_265));
					Stack.Push(uParam0->f_181.f_8);
					Stack.Push(uParam0->f_181.f_8.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_222(uParam0, &(uParam0->f_237), uParam0->f_349))
			{
				if (!uParam0->f_353)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_237.f_6);
						Stack.Push(uParam0->f_237.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_321));
						Stack.Push(uParam0->f_237.f_10);
						Stack.Push(uParam0->f_237.f_10.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_265));
						Stack.Push(uParam0->f_237.f_8);
						Stack.Push(uParam0->f_237.f_8.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 3, 1);
					}
					else
					{
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_354)
				{
					if (uParam0->f_355)
					{
						func_155(uParam0, 6, 1);
					}
					else
					{
						func_155(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_223(uParam0->f_237.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_237.f_2);
						Stack.Push(uParam0->f_237.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_222(uParam0, &(uParam0->f_265), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_265.f_6);
					Stack.Push(uParam0->f_265.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_265.f_10);
					Stack.Push(uParam0->f_265.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else
				{
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_222(uParam0, &(uParam0->f_293), uParam0->f_349))
			{
				if (uParam0->f_355)
				{
					func_155(uParam0, 6, 1);
				}
				else
				{
					func_155(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_356)
			{
				if (func_222(uParam0, &(uParam0->f_321), uParam0->f_349))
				{
					uParam0->f_356 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_321.f_6);
						Stack.Push(uParam0->f_321.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 4, 0);
					}
					else if (uParam0->f_353 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_237));
						Stack.Push(uParam0->f_321.f_4);
						Stack.Push(uParam0->f_321.f_4.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_356 = 0;
						func_155(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_293));
				Stack.Push(uParam0->f_321.f_6);
				Stack.Push(uParam0->f_321.f_6.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 4, 0);
			}
			else if (uParam0->f_353 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_237));
				Stack.Push(uParam0->f_321.f_4);
				Stack.Push(uParam0->f_321.f_4.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_356 = 0;
				func_155(uParam0, 1, 0);
			}
			break;
		case 6:
			func_224(uParam0);
			func_155(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_105(var uParam0)
{
	return 1;
}

int func_106(var uParam0)
{
	return 1;
}

int func_107(var uParam0)
{
	return 1;
}

var func_108(int iParam0)
{
	return &(Global_40.f_11623[iParam0]);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return -862094048;
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_225())
	{
		iVar2 = func_225();
	}
	iVar5 = func_226(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_111(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_112(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_229(iParam0);
}

struct<4> func_113(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_230(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_231(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
					switch (func_230(11))
					{
						case 12:
							Var0 = { -2338.21f, -1271.362f, 147.062f };
							Var0.f_3 = 356.6931f;
							break;
						case 11:
							Var0 = { 1295.802f, -200.3015f, 99.0642f };
							Var0.f_3 = 1.8815f;
							break;
						case 10:
							Var0 = { 2428.864f, 1015.729f, 85.6131f };
							Var0.f_3 = 304.652f;
							break;
						case 15:
							Var0 = { -3157.477f, -2981.991f, 4.6224f };
							Var0.f_3 = 86.239f;
							break;
					}
					Jump @3114; //curOff = 1587
					switch (iParam1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							Var0 = { 1702.736f, 2168.096f, 318.9191f };
							Var0.f_3 = 180.6669f;
							break;
					}
					Jump @3114; //curOff = 1653
					switch (iParam1)
					{
						case 0:
							Var0 = { -312.9856f, 808.8508f, 117.9822f };
							Var0.f_3 = 197.2573f;
							break;
					}
					Jump @3114; //curOff = 1701
					Var0 = { 1320.745f, -1291.739f, 75.14026f };
					Var0.f_3 = 68.748f;
					Jump @3114; //curOff = 1732
					switch (func_230(15))
					{
						case 7:
						case 9:
							Var0 = { -727.395f, 686.1953f, 58.2244f };
							Var0.f_3 = 177.0399f;
							break;
						case 13:
							Var0 = { -6122.201f, -3803.751f, -35.2455f };
							Var0.f_3 = 181.815f;
							break;
						case 10:
							Var0 = { 2183.348f, 1502.819f, 83.6009f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
						default:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
					}
					Jump @3114; //curOff = 1928
					Var0 = { 2636.429f, -1229.537f, 52.3795f };
					Var0.f_3 = 358.7895f;
					Jump @3114; //curOff = 1959
					Var0 = { 2943.588f, 1336.999f, 43.22713f };
					Var0.f_3 = 76.2778f;
					Jump @3114; //curOff = 1990
					switch (iParam1)
					{
						case 0:
							Var0 = { -1812.186f, -367.3066f, 161.8834f };
							Var0.f_3 = 167.5016f;
							break;
						case 1:
							Var0 = { -1807.89f, -371.5062f, 161.8662f };
							Var0.f_3 = 167.5016f;
							break;
						case 2:
							Var0 = { -1800.857f, -357.3966f, 162.9631f };
							Var0.f_3 = 167.5016f;
							break;
					}
					Jump @3114; //curOff = 2112
					switch (iParam2)
					{
						case 0:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
						case 1:
							Var0 = { -192.9274f, 625.6254f, 113.5786f };
							Var0.f_3 = 145.05f;
							break;
						default:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
					}
					Jump @3114; //curOff = 2228
					Var0 = { -2725.277f, 709.9713f, 173.0266f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2259
					Var0 = { 2706.282f, 2369.827f, 170.2336f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2290
					switch (iParam1)
					{
						case 0:
							Var0 = { -5511.039f, -2929.552f, -3.278f };
							Var0.f_3 = -131.907f;
							break;
						case 1:
							Var0 = { -5497.666f, -2957.426f, -1.708f };
							Var0.f_3 = 12.912f;
							break;
						case 2:
							Var0 = { -5493.435f, -2940.703f, -1.471f };
							Var0.f_3 = 124.069f;
							break;
					}
					Jump @3114; //curOff = 2412
					switch (func_230(23))
					{
						case 0:
							Var0 = { 1784.089f, -946.648f, 40.7225f };
							Var0.f_3 = 254.7072f;
							break;
						case 2:
							Var0 = { 2445.841f, -463.2956f, 41.1018f };
							Var0.f_3 = 126.5562f;
							break;
					}
					Jump @3114; //curOff = 2501
					switch (iParam1)
					{
						case 0:
							Var0 = { -2233.602f, -2850.517f, 62.7628f };
							Var0.f_3 = 208.7791f;
							break;
						case 1:
							Var0 = { -3198.999f, -2538.554f, 66.5911f };
							Var0.f_3 = 292.1099f;
							break;
						case 2:
							Var0 = { -2927.12f, -2860.494f, 85.7312f };
							Var0.f_3 = 123.2795f;
							break;
						case 3:
							Var0 = { -3267.86f, -3416.677f, 39.5041f };
							Var0.f_3 = 332.5893f;
							break;
						case 4:
							Var0 = { -3572.794f, -3565.222f, 33.505f };
							Var0.f_3 = 260.2986f;
							break;
						case 5:
							Var0 = { -4399.393f, -3606.746f, 48.6452f };
							Var0.f_3 = 348.5519f;
							break;
						case 6:
							Var0 = { -4988.676f, -4060.992f, 1.0884f };
							Var0.f_3 = 163.9257f;
							break;
						case 7:
							Var0 = { -5333.317f, -3534.569f, 2.0586f };
							Var0.f_3 = 306.198f;
							break;
						case 8:
							Var0 = { -5374.994f, -4053.294f, -6.2292f };
							Var0.f_3 = 170.3096f;
							break;
						case 9:
							Var0 = { -5413.131f, -2606.156f, 2.5597f };
							Var0.f_3 = 255.0981f;
							break;
						case 10:
							Var0 = { -4956.249f, -3198.202f, 26.3575f };
							Var0.f_3 = 292.8281f;
							break;
						case 11:
							Var0 = { -4594.695f, -3045.041f, 6.5776f };
							Var0.f_3 = 4.7478f;
							break;
					}
					Jump @3114; //curOff = 2956
					Var0 = { 2368.588f, -859.9452f, 42.0223f };
					Var0.f_3 = 198.7042f;
					Jump @3114; //curOff = 2987
					Var0 = { -345.2797f, 794.6578f, 115.1777f };
					Var0.f_3 = 28.0552f;
					Jump @3114; //curOff = 3018
					Var0 = { 2644.443f, -1207.946f, 52.3368f };
					Var0.f_3 = 199.0776f;
					Jump @3114; //curOff = 3049
					Var0 = { 3025.557f, 1779.699f, 83.2056f };
					Var0.f_3 = 142.8609f;
					Jump @3114; //curOff = 3080
					Var0 = { 2778.292f, -1313.274f, 45.89664f };
					Var0.f_3 = 216.3798f;
					return Var0;
				}

void func_114()
{
	vVar0 = { 0f, 0f, vLocal_546.f_3 };
	func_232(Local_14.f_146[0], "script@specialped@pdatc_town_crier@ig@ig_1@pdatc_ig1_callout", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[1], "script@specialped@pdatc_town_crier@ig@ig_2@pdatc_ig2_cnv1", vLocal_546, vVar0, "pl_IG2_PDATC_CNV1_HeyPartner", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[2], "script@specialped@pdatc_town_crier@ig@ig_3@pdatc_ig3_cnv2", vLocal_546, vVar0, "pl_IG3_PDATC_CNV2_HeyFriend", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[3], "script@specialped@pdatc_town_crier@ig@ig_6@pdatc_ig6_linger", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(Local_14.f_146[4], "script@specialped@pdatc_town_crier@ig@ig_7@pdatc_ig7_aggro", vLocal_546, vVar0, "pl_IG7_PDATC_AGGRO_HeyImTrying", 0, 0, 0, 0, 0);
}

void func_115(var uParam0, int iParam1)
{
	uParam0->f_355 = iParam1;
}

int func_116(var uParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = func_233(iParam1);
	iVar1 = func_234(iParam2);
	func_25(uParam0);
	if (func_235(iVar1))
	{
		func_89(&(Local_14.f_134), 64);
	}
	else
	{
		func_90(&(Local_14.f_134), 64);
	}
	func_90(&(Local_14.f_134), 2097152);
	func_236(iVar1 == 4);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355);
					func_239(uParam0, 36949);
					break;
				case 1:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37247);
					break;
				case 2:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37284);
					break;
				case 3:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355);
					func_243(uParam0, 37321);
					break;
				case 4:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_243(uParam0, 37459);
					break;
				case 5:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 6:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					func_243(uParam0, 37592);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 7:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Plague", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Plague", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 8:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "pl_IG1_PDATC_CALLOUT_TownIsSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 9:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlagueInTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlagueInTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 10:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_StayAway", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_StayAway", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 11:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Cholera", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Cholera", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 12:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlaceUnwell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlaceUnwell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 13:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_TownIsSick02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 14:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetOuttaHere", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetOuttaHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 15:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_BeCareful", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_BeCareful", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 16:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetTheHell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetTheHell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 17:
					func_237(uParam0, "pl_IG1_PDATC_CLLOUT_ArmadilloSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CLLOUT_ArmadilloSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 18:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_SicknessTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_SicknessTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 19:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFever", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFever", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 20:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFev02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFev02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 21:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(22), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet01", "s_IG1_PDATC_CALLOUT_PamphletIdle", 2, 1064514355);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 22:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphletTakeInspect", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 23:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(24), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet02", "s_IG1_PDATC_CALLOUT_PamphIdle02", 2, 1064514355);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 24:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 25:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(26), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamplet03", "s_IG1_PDATC_CALLOUT_PamphIdle03", 2, 1064514355);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 26:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake03", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 27:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Refuse", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_Refuse", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_243(uParam0, 38410);
					func_239(uParam0, 38314);
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 28:
					func_237(uParam0, "pl_IG2_PDATC_CNV1_HeyPartner", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG2_PDATC_CNV1_HeyPartner", "s_IG2_PDATC_CNV1_HeyPartner", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 29:
					func_237(uParam0, "pl_IG3_PDATC_CNV2_HeyFriend", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG3_PDATC_CNV2_HeyFriend", "s_IG3_PDATC_CNV2_HeyFriend", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 30:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					break;
				case 31:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_AreYouHearing", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_AreYouHearing", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 32:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_DontStayHere", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_DontStayHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 33:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_LeaveGo", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_LeaveGo", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 34:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_PleaseSir", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_PleaseSir", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
				case 35:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_UShouldLeave", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_UShouldLeave", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355);
					func_241(uParam0, 37566);
					break;
			}
			break;
		case 4:
			if (func_88(Local_14.f_134, 262144))
			{
				switch (iVar1)
				{
					case 36:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_HeyImTrying", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_HeyImTrying", "s_IG7_PDATC_AGGRO_HeyImTrying", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 37:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_TheFeversTaken", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_TheFeversTaken", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 38:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_ThisIsTheThank", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_ThisIsTheThank", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
				}
			}
			else
			{
				func_237(uParam0, "", func_153(-1), func_154(-1), func_153(-1), func_154(-1), 0, "", 0, "b_breakout", 1, "", "", 3, 1064514355);
				func_241(uParam0, 38750);
			}
			break;
	}
	if ((func_223(iParam1) && func_260(iParam2)) && iVar1 < 36)
	{
		func_261(uParam0, func_153(0), func_154(5));
		if (func_262(iVar1))
		{
			if (!func_263())
			{
				if (Local_14.f_1 == 0)
				{
					func_264(uParam0, func_153(2), func_154(29));
				}
				else
				{
					func_264(uParam0, func_153(1), func_154(28));
				}
			}
			else if (!func_88(Local_14.f_134, 32) && !func_265())
			{
				func_266(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119(bool bParam0)
{
	iVar0 = func_267();
	if (does_entity_exist(iVar0))
	{
		if (bParam0)
		{
			_0x6dad6630ae4a74cb(iVar0, 1);
			set_entity_no_collision_entity(Global_35, iVar0, true);
			set_entity_no_collision_entity(iVar0, Global_35, true);
		}
		else
		{
			_0x6dad6630ae4a74cb(iVar0, 0);
		}
	}
}

void func_120(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_174(uParam0->f_5))
		{
			func_175(&(uParam0->f_5), 1, 1);
		}
		if (func_174(uParam0->f_6))
		{
			func_175(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_stop("MissionChoice");
		}
		uParam0->f_2 = 0;
		_0x9428447ded71fc7e("player_decision_moment_scenes");
		_uiprompt_clear_horizontal_orientation(uParam0->f_15);
	}
}

void func_121(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!does_entity_exist(*uParam0))
		{
			return;
		}
		if (!is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	remove_shocking_event(*uParam1);
}

void func_122()
{
	func_268(&(Local_14.f_3), Local_14.f_41[0], &(Local_14.f_41[0]->f_21), 1, 1);
}

void func_123(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	_0xa3db37edf9a74635(player_id(), iParam0, 7, 0, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 3, 2, 1);
	_0xa3db37edf9a74635(player_id(), iParam0, 4, 2, 1);
}

void func_124()
{
	if (is_radar_hidden())
	{
		display_radar(true);
	}
	if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

void func_125(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_269(vVar0, 0);
}

void func_126(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_270(&Global_0, 8);
	}
	if (!func_271() || func_208() != -1)
	{
		return;
	}
	func_270(&Global_0, 1);
}

void func_127()
{
	_0x9428447ded71fc7e("special_ped_scenes");
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_129(var uParam0, float fParam1)
{
	if (!func_54(uParam0))
	{
		return false;
	}
	if (func_61(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_131(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_132(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_209((*Global_1835011)[iParam0]->f_1);
}

int func_133(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_272((*Global_1835011)[iParam0]->f_1);
}

bool func_134(int iParam0)
{
	iVar0 = func_273();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case -173507739:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -1148613331:
				case -173507739:
				case 433385945:
				case 821931868:
				case 1632247697:
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case -1721991356:
				case -1148613331:
				case -702816767:
				case -173507739:
				case 433385945:
				case 603685163:
				case 821931868:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case -1721991356:
				case -1233681761:
				case -1148613331:
				case -702816767:
				case -416908843:
				case -273223690:
				case -173507739:
				case 212278652:
				case 433385945:
				case 821931868:
				case 1420204096:
				case 1500834021:
				case 1632247697:
				case 1679686673:
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case -702816767:
				case 1500834021:
					return true;
			}
			break;
	}
	return false;
}

bool func_135(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(*uParam0) };
	vVar3 = { get_entity_coords(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_274(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_136(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	if (!does_entity_exist(*uParam0))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	vVar2 = { get_entity_forward_vector(*uParam0) };
	vVar5 = { get_entity_coords(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_275(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (_does_volume_exist(*uParam1))
		{
			_0x74c2b3dc0b294102(*uParam1);
			_0xa1cfb35069d23c23(*uParam1);
			_delete_volume(*uParam1);
		}
		return false;
	}
	else
	{
		if (!_does_volume_exist(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = _create_volume_cylinder_with_custom_name(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			_0xb56d41a694e42e86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			_0x18262cafebb5fbe1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { get_entity_coords(*uParam0, true, false) };
		if (!func_206(iVar1, 0))
		{
			func_276(&iVar1, vVar8, 1083179008);
		}
		return true;
	}
	return false;
}

int func_137(var uParam0)
{
	if (!func_54(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_145(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_196() - round((uParam0->f_1 * 1000f)));
}

bool func_138()
{
	return Global_1392040->f_6;
}

bool func_139()
{
	if (Global_1914319->f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	return false;
}

bool func_141(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_142(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_143(int iParam0)
{
	if (!func_142(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

void func_144(var uParam0)
{
	func_93(uParam0, 0f);
}

bool func_145(var uParam0)
{
	return func_128(*uParam0, 2);
}

float func_146()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

int func_147(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_277(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_148(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return false;
	}
	if (does_entity_exist(*uParam0))
	{
		return true;
	}
	if (!bParam8)
	{
		*uParam0 = func_278(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = func_278(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (does_entity_exist(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

bool func_149(var uParam0, int iParam1, var uParam2, vector3 vParam3)
{
	if (*uParam2)
	{
		return false;
	}
	if (does_entity_exist(*uParam0))
	{
		return true;
	}
	*uParam0 = create_object(iParam1, vParam3, true, true, false, false, true);
	if (does_entity_exist(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

void func_150(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	decor_set_bool(iParam0, "bIsSpecialPed", true);
	decor_set_int(iParam0, "iSpecialPedID", iParam1);
	(*Global_1396257)[iParam1]->f_636 = iParam0;
}

void func_151(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (is_shocking_event_in_sphere(iParam2, get_entity_coords(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_152()
{
	func_279(Local_14.f_146[0], Local_14.f_3, "CS_TOWNCRIER", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, uVar556, "p_cs_stackScarlet01x", uVar558, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[1], Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, uVar556, "p_cs_stackScarlet01x", uVar558, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[2], Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, uVar556, "p_cs_stackScarlet01x", uVar558, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[3], Local_14.f_3, "TownCrier", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, uVar556, "p_cs_stackScarlet01x", uVar558, "p_bell05x", 0, 0);
	func_279(Local_14.f_146[4], Local_14.f_3, "IG_TownCrier", Global_35, "player_zero", "player_zero", 0, 0, 0, 0, 0, 0, uVar556, "p_cs_stackScarlet01x", uVar558, "p_bell05x", 0, 0);
}

int func_153(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_154(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_349 = iParam1;
	func_280(uParam0, 0, 1);
	if (bParam2)
	{
		func_281(uParam0);
	}
}

void func_156(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	iParam0->f_101 = iParam1;
}

void func_157(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_282(iParam1))
	{
		return;
	}
	if (!func_283(iParam2))
	{
		return;
	}
	func_284(iParam0->f_41[iParam1]->f_21[iParam2], sParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_285(iParam0->f_41[iParam1], iParam2, 1);
	}
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_286(iParam0, iParam1);
	}
	iParam0->f_41[iParam1]->f_56 = iParam2;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	if (!func_282(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1]->f_57 = iParam2;
}

void func_161(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_287(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

float func_162(int iParam0)
{
	return iParam0->f_142;
}

int func_163(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_288(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_289(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_144(&(iParam1->f_13));
		}
		if (func_290(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_291(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_163(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_75(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_292(*uParam0, 1, 1);
						}
					}
					else if (func_293(iParam1, 22))
					{
						func_292(*uParam0, 0, 1);
					}
				}
				if (func_294(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_295(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
					if (func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_298(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_299(iParam1, uParam3, fVar8);
					if (func_300(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_76(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_294(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_302(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_295(uParam0, func_294(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_76(uParam3, 0, 0, 1, 1);
					}
					func_303(iParam1, 1);
				}
				func_299(iParam1, uParam3, fVar8);
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_304(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_164(int iParam0)
{
	if ((((!(_does_volume_exist(iParam0->f_102) && is_entity_in_volume(Global_35, iParam0->f_102, true, 0)) || !is_ped_facing_ped(Local_14.f_3, Global_35, 120f)) || (func_263() && func_265())) || iVar577 == 1) || bVar685)
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != func_158(3, 0, 0))
			{
				func_159(&Local_14, 0, func_158(3, 0, 0), 1);
			}
		}
		return false;
	}
	if ((((((func_88(Local_14.f_134, 64) && func_88(Local_14.f_134, 2097152)) && !is_ped_in_any_vehicle(Global_35, true)) && !is_ped_on_mount(Global_35)) && !func_135(&(iParam0->f_3), &uLocal_712, 1071644672, 1074790400)) && !func_307(&(iParam0->f_3), &uLocal_711, 1071644672, 1074790400)) && !func_308())
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != 1)
			{
				func_159(&Local_14, 0, 1, 1);
			}
		}
		return true;
	}
	else if (func_305(&Local_14) == 0)
	{
		if (func_306(&Local_14, 0) != func_158(3, 0, 0))
		{
			func_159(&Local_14, 0, func_158(3, 0, 0), 1);
		}
	}
	return false;
}

bool func_165(int iParam0, int iParam1, int iParam2)
{
	if (!func_282(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1]->f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1]->f_58;
	if (!func_283(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

void func_166()
{
	if (!func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 33554432);
	}
	if (!func_88(Local_14.f_134, 8388608))
	{
		func_89(&(Local_14.f_134), 4194304);
		func_89(&(Local_14.f_134), 8388608);
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_309())
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_309())
		{
			if (Local_14.f_1 == 0)
			{
				func_310(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_310(Global_35, "INSULT_TIMID_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
		}
		else
		{
			func_310(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

char* func_168(var uParam0)
{
	return uParam0;
}

bool func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_174(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_311(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_170(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_312(iParam0, 13))
	{
		func_313(iParam0, 0);
	}
	else
	{
		func_314(iParam0, 0);
	}
	if (func_174(iParam0->f_6))
	{
		if (bParam2)
		{
			func_175(&(iParam0->f_6), 0, 1);
		}
	}
}

struct<2> func_171(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

int func_172(var uParam0, var uParam1)
{
	stat_id_get_int(&uParam0, &uVar0);
	return uVar0;
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_174(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_175(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_174(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

void func_176(var uParam0, bool bParam1, int iParam2)
{
	func_317(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_318(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_118(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_319(1))
						{
							func_118(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_319(1) || *uParam0 & 8192 != 0))
				{
					func_117(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_320(uParam0))
			{
				uParam0->f_15 = func_196();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_196() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_321(uParam0);
}

bool func_177(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_322(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_323(iParam0, iVar2) <= func_324(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_178(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_325(iParam2, 1, 1, 1, 0))
	{
		func_118(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_326(uParam1, 1);
	func_327();
}

bool func_179(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_328(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_329(uParam1);
			if (func_330(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_331(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_326(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_326(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_180(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_332(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_329(uParam2);
		if (func_330(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_331(uParam2)
				{
					func_326(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_181(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_322(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_331(uParam1)
		{
			fVar3 = func_329(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_182(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_333(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return 0;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return 0;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return 0;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_183(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_184(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_334(uParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_192(uParam2, iParam1))
			{
				func_326(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_185(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_335(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_192(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_326(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_186(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_336(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_337(iParam1, vVar0, vVar4))
					{
						func_326(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_337(iParam1, vVar0, vVar7))
					{
						func_326(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_187(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_322(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_338(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_339(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_340(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_341(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_342(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_188(int iParam0, var uParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_189(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_190(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_343(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_344(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_191(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_192(var uParam0, int iParam1)
{
	if (func_345(uParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_193(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_346(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_194()
{
}

bool func_195(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_347(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_196();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_348(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_196();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_196()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_197()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_196() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_198(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_324(uParam0);
	if (uParam0->f_12 > func_349(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_350(iParam1);
	iVar1 = func_351(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_199(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_352(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_200(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_353(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_354(uParam1, iParam0))
					{
						if (func_348(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_201(int iParam0, var uParam1)
{
	if (!func_355(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_202(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_204(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_196();
	}
	else if (func_196() - uParam1->f_4) > func_356(uParam1)
	{
		return func_357(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_205(var uParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

void func_207(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iParam0->f_146)
	{
		if (_does_anim_scene_exist(&(iParam0->f_146[iVar0])) && _is_anim_scene_loaded(&(iParam0->f_146[iVar0]), true, false))
		{
			if ((!is_string_null_or_empty(iParam0->f_146[iVar0]->f_14) && does_entity_exist(iParam0->f_146[iVar0]->f_13)) && _get_anim_scene_object(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_14, false) == iParam0->f_146[iVar0]->f_13)
			{
				remove_anim_scene_entity(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_14, iParam0->f_146[iVar0]->f_13);
				func_358(iParam0->f_146[iVar0]->f_13, 1, 1);
			}
			if ((!is_string_null_or_empty(iParam0->f_146[iVar0]->f_16) && does_entity_exist(iParam0->f_146[iVar0]->f_15)) && _get_anim_scene_object(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_16, false) == iParam0->f_146[iVar0]->f_15)
			{
				remove_anim_scene_entity(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_16, iParam0->f_146[iVar0]->f_15);
				func_358(iParam0->f_146[iVar0]->f_15, 1, 1);
			}
			if ((!is_string_null_or_empty(iParam0->f_146[iVar0]->f_18) && does_entity_exist(iParam0->f_146[iVar0]->f_17)) && _get_anim_scene_object(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_18, false) == iParam0->f_146[iVar0]->f_17)
			{
				remove_anim_scene_entity(&(iParam0->f_146[iVar0]), iParam0->f_146[iVar0]->f_18, iParam0->f_146[iVar0]->f_17);
				func_358(iParam0->f_146[iVar0]->f_17, 1, 1);
			}
		}
		iVar0++;
	}
}

int func_208()
{
	return Global_1572887->f_12;
}

bool func_209(int iParam0)
{
	iVar0 = func_359(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_213(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	*uParam0 = create_itemset(true);
	iVar5 = _0x886171a12f400b89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = get_indexed_item_in_itemset(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((does_entity_exist(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_360(iVar1, bParam5, bParam6, 1, 0, 0) && !decor_exist_on(iVar1, "bIgnoreThisPed"))
				{
					if (!func_361(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar1, get_ped_model_name_in_population_set(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	destroy_itemset(*uParam0);
	return iVar3;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (is_entity_dead(iParam0) || Global_1935630->f_12)
	{
		return;
	}
	sVar0 = func_362(iParam3);
	if (fParam4 == 0f)
	{
		if (func_92(iParam0, Global_35, 15f, 1))
		{
			if (!func_97(*iParam1, iParam2))
			{
				if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
				{
					func_100(iParam1, iParam2);
				}
			}
		}
		else if (func_97(*iParam1, iParam2))
		{
			_0x9428447ded71fc7e("special_ped_scenes");
			func_210(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_97(*iParam1, iParam2))
		{
			if (_0x6339c1ea3979b5f7(sVar0, "special_ped_scenes"))
			{
				func_100(iParam1, iParam2);
			}
		}
	}
	else if (func_97(*iParam1, iParam2))
	{
		_0x9428447ded71fc7e("special_ped_scenes");
		func_210(iParam1, iParam2);
	}
}

int func_215(int iParam0)
{
	return iParam0->f_146.f_349;
}

void func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_97(*iParam1, iParam2))
	{
		return;
	}
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		if (!is_string_null_or_empty(sParam7))
		{
			_0xc67a4910425f11f1(player_id(), sParam7);
		}
		if (!is_string_null_or_empty(sParam8))
		{
			_0xc67a4910425f11f1(player_id(), sParam8);
		}
		return;
	}
	if (func_97(*iParam1, iParam3))
	{
		if (!func_97(*iParam1, iParam4))
		{
			if (!is_string_null_or_empty(sParam7))
			{
				_0xc67a4910425f11f1(player_id(), sParam7);
			}
			if (!is_string_null_or_empty(sParam8))
			{
				_0x3946fc742ac305cd(player_id(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			func_100(iParam1, iParam4);
		}
	}
	else if (func_97(*iParam1, iParam4))
	{
		if (!is_string_null_or_empty(sParam8))
		{
			_0xc67a4910425f11f1(player_id(), sParam8);
		}
		if (!is_string_null_or_empty(sParam7))
		{
			_0x3946fc742ac305cd(player_id(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		func_210(iParam1, iParam4);
	}
}

void func_217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_97(uParam0, iParam1))
	{
		disable_all_control_actions(0);
		disable_all_control_actions(1);
		enable_control_action(0, -668070958, true);
		enable_control_action(0, 1250966545, true);
		if (bParam3)
		{
			enable_control_action(0, -124244224, true);
			enable_control_action(0, 648122183, true);
			enable_control_action(0, -163964935, true);
		}
		func_363();
		_0xc9caeaeec1256e54(724769646);
		if (!get_ped_config_flag(Global_35, 174, true))
		{
			set_ped_config_flag(Global_35, 174, true);
		}
		if (bParam2)
		{
			func_364();
		}
	}
	else if (get_ped_config_flag(Global_35, 174, true))
	{
		set_ped_config_flag(Global_35, 174, false);
	}
}

void func_218(bool bParam0)
{
	func_207(&Local_14);
	if (bParam0)
	{
		if (!func_88(Local_14.f_134, -2147483648))
		{
			func_365();
		}
	}
	set_blocking_of_non_temporary_events(Local_14.f_3, false);
	stop_ped_speaking(Local_14.f_3, false);
	set_ped_config_flag(Local_14.f_3, 153, false);
	if (!func_88(Local_14.f_134, -2147483648))
	{
		_task_smart_flee_style_ped(Local_14.f_3, Global_35, 3, 0, 6000f, -1, 0);
	}
	else
	{
		_task_smart_flee_style_ped(Local_14.f_3, 0, 3, 0, 6000f, -1, 0);
	}
	set_ped_keep_task(Local_14.f_3, true);
}

bool func_219(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_54(uParam2))
		{
			func_93(uParam2, 0f);
			return false;
		}
		else if (func_137(uParam2) > iParam6)
		{
			func_62(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (is_scripted_speech_playing(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!does_entity_exist(*uParam0) || !does_entity_exist(Global_35))
			{
				return false;
			}
			fParam7 = func_346(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = 2001176446;
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		force_sonar_blips_this_frame();
		allow_sonar_blips(true);
		_trigger_sonar_blip_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_220(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

bool func_221(var uParam0)
{
	if (((((func_88(*uParam0, 2) || func_88(*uParam0, 4)) || func_88(*uParam0, 16)) || func_88(*uParam0, 128)) || func_88(*uParam0, 1024)) || func_88(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_222(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_350)
	{
		case 0:
			func_280(uParam0, func_366(uParam0, uParam1), 1);
			break;
		case 1:
			func_280(uParam0, func_367(uParam0, uParam1), 1);
			break;
		case 2:
			func_280(uParam0, func_368(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_369(uParam0, uParam1))
			{
				func_280(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_370(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 2);
				}
			}
			else
			{
				func_280(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_370(uParam0, 4))
			{
				if (func_372(uParam0, uParam1, iParam2))
				{
					func_371(uParam0, 4);
				}
			}
			if (!func_370(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 8);
				}
			}
			if (func_370(uParam0, 4) && func_370(uParam0, 8))
			{
				func_280(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_370(uParam0, 16))
			{
				if (func_373(uParam0, uParam1))
				{
					func_371(uParam0, 16);
				}
			}
			if (!func_370(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 32);
				}
			}
			if (func_370(uParam0, 16) && func_370(uParam0, 32))
			{
				func_280(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_223(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

void func_224(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_does_anim_scene_exist(uParam0[iVar0]) && _is_anim_scene_started(uParam0[iVar0], false))
		{
			abort_anim_scene(uParam0[iVar0], false);
		}
		iVar0++;
	}
}

int func_225()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_227(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_374(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_225())
	{
		return -1;
	}
	iVar0 = func_226(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_375(iVar1, 0);
	func_376(iVar1, 0);
	func_377(iVar1, 0);
	func_378(iVar1, 0);
	func_379(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_380(iVar1, iParam4);
	}
	return iVar1;
}

int func_229(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_381())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_381())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_381())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_381())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_381())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_381())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_381())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_382())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_232(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (is_string_null_or_empty(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!is_string_null(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_233(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 39)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

bool func_235(int iParam0)
{
	if (func_383(iParam0))
	{
		return true;
	}
	return false;
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		iLocal_579 = 2;
	}
	else
	{
		iLocal_579 = (iVar576 - 1);
		if (iVar576 < 0)
		{
			iLocal_579 = 0;
		}
	}
}

void func_237(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (is_string_null_or_empty(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (is_string_null_or_empty(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_238(var uParam0)
{
	switch (iVar577)
	{
		case 1:
			return func_384(uParam0);
		default:
			return func_385(uParam0);
	}
	return 1;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

int func_240(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		func_386();
		if (!is_scripted_speech_playing(Global_35))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_242(var uParam0)
{
	if (is_waypoint_playback_going_on_for_ped(Local_14.f_3, 0) && !waypoint_playback_get_is_paused(Local_14.f_3))
	{
		waypoint_playback_pause(Local_14.f_3, 0, 0, 0);
	}
	if (!func_387(Local_14.f_3, Global_35, 0.8f))
	{
		if (!func_388(Local_14.f_3, -875674219))
		{
			task_turn_ped_to_face_entity(Local_14.f_3, Global_35, 0, -1082130432, -1082130432, -1082130432);
		}
	}
	if (func_386() && func_387(Local_14.f_3, Global_35, 0.8f))
	{
		func_89(&(Local_14.f_134), 134217728);
		return 1;
	}
	return 0;
}

void func_243(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_244(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_266(uParam0, 0);
		return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_389(uParam0);
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	if (is_waypoint_playback_going_on_for_ped(Local_14.f_3, 0) && waypoint_playback_get_is_paused(Local_14.f_3))
	{
		waypoint_playback_resume(Local_14.f_3, false, -1, 0);
	}
	else if (!is_waypoint_playback_going_on_for_ped(Local_14.f_3, 0))
	{
		task_follow_waypoint_recording(Local_14.f_3, uVar568, 0, 1058316, -1, 1, 0, -1);
		iLocal_580 = 1;
		if (_does_volume_exist(iVar558))
		{
			func_125(iVar558);
			_delete_volume(iVar558);
		}
		_0xc67a4910425f11f1(player_id(), "CrierBubble");
		set_ped_config_flag(Local_14.f_3, 153, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!func_88(Local_14.f_134, 536870912) && !is_scripted_speech_playing(Local_14.f_3))
	{
		func_390();
		func_89(&(Local_14.f_134), 536870912);
	}
	else if (func_88(Local_14.f_134, 536870912) && !is_scripted_speech_playing(Local_14.f_3))
	{
		func_90(&(Local_14.f_134), 536870912);
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (func_54(&uLocal_581))
	{
		func_62(&uLocal_581);
	}
	return 1;
}

int func_249(var uParam0)
{
	if (!func_54(&uLocal_581))
	{
		func_144(&uLocal_581);
	}
	if (func_391(&Local_14))
	{
		func_62(&uLocal_581);
		return 1;
	}
	if (func_55(&uLocal_581, 7f))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	if (!func_392(*uParam0, &iVar0))
	{
		return 1;
	}
	if (func_149(&uLocal_559, iVar550, &uVar1, vLocal_546 - Vector(20f, 0f, 0f)))
	{
		set_entity_visible(iVar556, false);
		func_393(Local_14.f_146[iVar0], 0, 0, 0, 0, iVar556, "p_cs_pamphlet02x", 1);
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	if ((!is_entity_visible(iVar556) && func_394(&Local_14)) && func_395(&Local_14) >= 0.05f)
	{
		set_entity_visible(iVar556, true);
	}
	if (func_370(&(Local_14.f_146), 4))
	{
		func_90(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_252(var uParam0)
{
	if (!func_88(Local_14.f_134, 8192))
	{
		func_396(&uLocal_690, "SPAH_TAKE", "SPAH_DECLINE", 0, 2, 25000, 0, -1, -1);
		if (func_397(&uLocal_690))
		{
			if (func_398(&uLocal_690))
			{
				if (func_399(&uLocal_690))
				{
					func_89(&(Local_14.f_134), 128);
					func_89(&(Local_14.f_134), 8192);
					func_310(Global_35, "ROB_AGAIN_ACCEPT_OFFER", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					iLocal_688 = 1;
					func_120(&uLocal_690);
				}
				else if (func_400(&uLocal_690))
				{
					func_90(&(Local_14.f_134), 64);
					func_90(&(Local_14.f_134), 2097152);
					func_89(&(Local_14.f_134), 8192);
					func_89(&(Local_14.f_134), 256);
					func_310(Global_35, "REJECT_PROSTITUTE_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					iLocal_688 = 1;
					func_120(&uLocal_690);
					func_401(uParam0, func_153(0), func_154(27));
					return 1;
				}
			}
		}
	}
	else if (func_88(Local_14.f_134, 128))
	{
		bVar1 = get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
		if (func_402())
		{
			if (!func_88(Local_14.f_134, 131072))
			{
				_hide_ped_weapons(Global_35, 2, false);
				func_89(&(Local_14.f_134), 131072);
			}
		}
		else if (iVar0 == -1569615261 && bVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0)
{
	if (!func_88(Local_14.f_134, 2048))
	{
		if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
		{
			func_404(-1857064858, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			func_89(&(Local_14.f_134), 2048);
			func_405(1);
			func_119(0);
			func_406();
			func_156(&Local_14, 0);
			func_90(&(Local_14.f_134), 67108864);
			func_89(&(Local_14.f_134), 64);
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0)
{
	if (!func_392(*uParam0, &iVar0))
	{
		return func_407(uParam0);
	}
	if (_does_anim_scene_exist(&(Local_14.f_146[iVar0])) && _is_anim_scene_loaded(&(Local_14.f_146[iVar0]), true, false))
	{
		remove_anim_scene_entity(&(Local_14.f_146[iVar0]), "p_cs_newspaper_03x", uVar556);
	}
	delete_object(&uLocal_559);
	return func_407(uParam0);
}

int func_255(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_256(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		if (func_386())
		{
			func_89(&(Local_14.f_134), 134217728);
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_257(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	if (!func_265() && !func_88(Local_14.f_134, 32))
	{
		func_266(uParam0, 0);
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_258(bool bParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_89(&iLocal_550, 4);
	}
	else
	{
		func_89(&iLocal_550, 8);
	}
	func_408(iVar548, iVar547);
	func_409(bParam0);
}

int func_259(var uParam0)
{
	if (is_waypoint_playback_going_on_for_ped(Local_14.f_3, 0) && !waypoint_playback_get_is_paused(Local_14.f_3))
	{
		waypoint_playback_pause(Local_14.f_3, 0, 0, 0);
	}
	return 1;
}

bool func_260(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return false;
	}
	return true;
}

void func_261(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

bool func_262(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 20)
	{
		return true;
	}
	return false;
}

bool func_263()
{
	if (Local_14.f_1 == 0 && func_88(iVar548, 4))
	{
		return true;
	}
	else if (Local_14.f_1 == 1 && func_88(iVar548, 8))
	{
		return true;
	}
	return false;
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_8.f_1 = iParam2;
}

bool func_265()
{
	if (func_88(iVar548, 32))
	{
		return true;
	}
	return false;
}

void func_266(var uParam0, bool bParam1)
{
	if (Local_14.f_1 == 0)
	{
		if (!bParam1)
		{
			func_401(uParam0, func_153(0), func_154(25));
		}
		else
		{
			func_264(uParam0, func_153(0), func_154(25));
		}
	}
	else if (!bParam1)
	{
		func_401(uParam0, func_153(0), func_154(25));
	}
	else
	{
		func_264(uParam0, func_153(0), func_154(25));
	}
}

int func_267()
{
	return Global_1900383->f_393;
}

void func_268(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_75(uParam0);
		func_304(iParam1, uParam2);
	}
	func_410(*uParam0, 1, bParam4);
}

void func_269(vector3 vParam0, int iParam3)
{
	if (func_411(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_412(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_271()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_272(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_413(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_273()
{
	_get_weather_type_transition(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_274(var uParam0, vector3 vParam1, int iParam4)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	if (_0x59b57c4b06531e1e(vParam1, iParam4, *uParam0, 2) > 0)
	{
		_0x20a4bf0e09bee146(*uParam0);
		return true;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

bool func_275(var uParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	if (!is_itemset_valid(*uParam0))
	{
		*uParam0 = create_itemset(true);
	}
	iVar2 = _0x59b57c4b06531e1e(vParam2, fParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = get_indexed_item_in_itemset(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (does_entity_exist(*iParam1))
		{
			if (!is_entity_dead(*iParam1))
			{
				if (_is_this_model_a_horse(get_entity_model(*iParam1)))
				{
					if (func_414(Global_35, *iParam1, 0))
					{
					}
					else
					{
						_0x20a4bf0e09bee146(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	_0x20a4bf0e09bee146(*uParam0);
	return false;
}

void func_276(int iParam0, vector3 vParam1, int iParam4)
{
	if (!func_388(*iParam0, 518218985))
	{
		clear_ped_tasks(*iParam0, 1, 0);
		_task_smart_flee_style_coord(*iParam0, vParam1, 6, 0, iParam4, -1, 0);
	}
}

int func_277(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_411(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_415(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_416(iVar0, bParam8);
	return iVar0;
}

int func_278(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_417(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_279(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, char* sParam13, var uParam14, char* sParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (does_entity_exist(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_309())
		{
			if (is_string_null_or_empty(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (is_string_null_or_empty(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = uParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = uParam14;
	uParam0->f_16 = sParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_280(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_350 = iParam1;
	if (bParam2)
	{
		func_418(uParam0);
	}
}

void func_281(var uParam0)
{
	uParam0->f_352 = 0;
}

bool func_282(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return false;
	}
	return true;
}

bool func_283(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_284(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_174(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_419(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_420(iParam0->f_6, iParam0->f_5, 0);
			}
			func_421(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_422(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_285(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_423(iParam0, 5);
		if (bParam2)
		{
			func_423(iParam0, 6);
		}
		else
		{
			func_303(iParam0, 6);
		}
	}
}

void func_286(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	func_71(iParam0->f_41[iParam1], 0);
}

bool func_287(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_288(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_289(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_290(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_424(iParam0, iParam1))
		{
			if (!func_141(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_76(uParam2, 0, 0, 1, 0);
				func_118(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_141(iParam1->f_10, 1))
		{
			func_425(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_117(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_291(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_141(iParam4, 32);
		func_426(iParam1, uParam2, 0);
		iVar5 = func_427(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_76(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_141(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_141(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_141(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_141(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_141(iParam4, 8388608) || func_141(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_141(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_141(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_293(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_293(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_141(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_428(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_141(iParam4, 268435456))
			{
				iVar8 = func_429(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_430(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_293(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_141(iParam4, 2) || func_141(iParam4, 16))
			{
				func_292(*uParam0, 1, 1);
			}
			else
			{
				func_292(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_293(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_294(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_431(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_295(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_432(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_141(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_296(int iParam0)
{
	if (func_141(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_141(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_141(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_297(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_433(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_434(Global_35)) || func_435(Global_35)) || func_436(Global_35));
	fVar12 = -1f;
	if (func_54(&(iParam1->f_13)))
	{
		fVar12 = func_61(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_174((*uParam4)[iVar0]->f_6);
		func_437(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_438(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_439(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_76(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_440(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_426(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_441(iParam1, fParam6, iParam1->f_9))
					{
						func_144(&(iParam1->f_18));
						if (bVar6)
						{
							func_440(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_442(iParam1, fParam2);
	}
	return bVar5;
}

void func_298(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_299(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_443((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_442(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_300(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_444(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_423(iParam1, 0);
				func_426(iParam1, uParam2, func_293(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_144(&(iParam1->f_18));
			return false;
		}
		else if (func_54(&(iParam1->f_18)))
		{
			func_62(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_54(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_55(&(iParam1->f_18), fParam2);
	return true;
}

void func_302(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_437(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_303(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_304(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_426(iParam0, uParam1, 1);
	func_76(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

int func_305(int iParam0)
{
	return iParam0->f_101;
}

int func_306(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1]->f_56;
}

bool func_307(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	vVar1 = { get_entity_forward_vector(*uParam0) };
	vVar4 = { get_entity_coords(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_275(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_308()
{
	if (_is_ped_carrying(Global_35) || func_445())
	{
		return true;
	}
	return false;
}

bool func_309()
{
	if (func_208() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_310(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_446(iParam0, &Var0);
}

bool func_311(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	return !func_447(iParam0, 4);
}

bool func_312(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_313(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_314(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_448(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

void func_317(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_449();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_450(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_318(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_319(bool bParam0)
{
	if (func_451(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_320(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_208() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_452(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_452(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_351(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_321(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_453(uParam0);
	}
}

bool func_322(int iParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_351(iParam2);
	}
	else
	{
		iVar1 = func_350(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_351(iParam0);
	}
	else
	{
		iVar0 = func_350(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_141(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_323(int iParam0, int iParam1)
{
	return func_346(iParam0, iParam1, 1, 1);
}

float func_324(var uParam0)
{
	return uParam0->f_26;
}

bool func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_326(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 134217728);
	}
	else
	{
		func_117(uParam0, 134217728);
	}
}

void func_327()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_328(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_346(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_454(iVar0, 0)))
		{
			if (func_455(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_329(var uParam0)
{
	return uParam0->f_17;
}

bool func_330(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_141(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_331(var uParam0)
{
	return uParam0->f_18;
}

bool func_332(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_454(iVar0, 0)))
		{
			if (func_456(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_333(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_334(var uParam0)
{
	return uParam0->f_23;
}

int func_335(var uParam0)
{
	return uParam0->f_21;
}

int func_336(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_337(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_457(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_338(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_458(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_339(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_340(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_459(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_341(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_459(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_342(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_459(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_343(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_344(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_460(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_345(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_346(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

bool func_347(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_348(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_348(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

float func_349(var uParam0)
{
	return uParam0->f_24;
}

int func_350(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_351(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_352(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_343(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_346(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_346(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_353(int iParam0, var uParam1, bool bParam2)
{
	func_451(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_354(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_354(uParam1, iVar1))
				{
					if (func_348(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_354(var uParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

bool func_355(int iParam0)
{
	if (func_309())
	{
		return false;
	}
	return func_461((*Global_1347702)[58]->f_15, 1);
}

int func_356(var uParam0)
{
	return uParam0->f_20;
}

int func_357(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_359(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_413(iParam0);
}

bool func_360(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!bParam5 && !is_ped_human(iParam0))
	{
		return false;
	}
	if (is_ped_a_player(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (is_entity_a_mission_entity(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_462(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (is_ped_on_mount(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_463(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_361(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_362(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

void func_363()
{
	Global_1905944->f_5695 = 1;
}

void func_364()
{
	_disable_first_person_cam_this_frame_2();
	_0x8370d34bd2e60b73();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689->f_1)
	{
		func_464(0);
	}
}

void func_365()
{
	iVar0 = get_random_int_in_range(0, 3);
	switch (iVar0)
	{
		case 0:
			func_466(&uLocal_584, func_465("SPATC_IG7_1"), 0, -1, 0, 0);
			break;
		case 1:
			func_466(&uLocal_584, func_465("SPATC_IG7_2"), 0, -1, 0, 0);
			break;
		case 2:
			func_466(&uLocal_584, func_465("SPATC_IG7_3"), 0, -1, 0, 0);
			break;
	}
}

int func_366(var uParam0, var uParam1)
{
	uParam1->f_27 = 0;
	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_does_anim_scene_exist(uParam0[iVar1]))
	{
		if (!is_string_null_or_empty(uParam1->f_12))
		{
			func_468((*uParam0)[iVar1], uParam1->f_12);
		}
		else
		{
			func_468((*uParam0)[iVar1], 0);
		}
		return 2;
	}
	return 1;
}

int func_367(var uParam0, var uParam1)
{
	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_is_anim_scene_started(uParam0[iVar1], false) || _is_anim_scene_finished(uParam0[iVar1], false))
	{
		if (!is_string_null_or_empty(uParam1->f_12))
		{
			reset_anim_scene(uParam0[iVar1], uParam1->f_12);
		}
		else
		{
			reset_anim_scene(uParam0[iVar1], (*uParam0)[iVar1]->f_2);
		}
	}
	return 2;
}

int func_368(var uParam0, var uParam1)
{
	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!_does_anim_scene_exist(uParam0[iVar1]))
	{
		return 0;
	}
	if (!_is_anim_scene_loaded(uParam0[iVar1], true, false))
	{
		func_469((*uParam0)[iVar1]);
		return 3;
	}
	return 4;
}

bool func_369(var uParam0, var uParam1)
{
	if (func_467(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return true;
	}
	if (_is_anim_scene_loaded(uParam0[iVar1], true, false) && !_is_anim_scene_loading(uParam0[iVar1], true))
	{
		func_470((*uParam0)[iVar1]);
		return true;
	}
	return false;
}

bool func_370(var uParam0, int iParam1)
{
	return func_88(uParam0->f_351, iParam1);
}

void func_371(var uParam0, int iParam1)
{
	func_89(&(uParam0->f_351), iParam1);
}

bool func_372(var uParam0, var uParam1, int iParam2)
{
	uVar0 = *uParam1;
	if (func_467(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_392(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_471(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_471(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_471(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!is_scripted_speech_playing((*uParam0)[iVar1]->f_3))
				{
					func_471(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((*uParam0)[iVar1]->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!_is_anim_scene_started(uParam0[iVar1], false))
				{
					start_anim_scene(uParam0[iVar1]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (func_472(Global_35, uParam0[iVar1], (*uParam0)[iVar1]->f_33, uParam1->f_12, &((*uParam0)[iVar1]->f_34), 1065353216, 1, 0, 1))
			{
				if (!_is_anim_scene_started(uParam0[iVar1], false))
				{
					start_anim_scene(uParam0[iVar1]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!_0x23e33cb9f4a3f547(uParam0[iVar1], uParam1->f_12) && !_0x0df57f86fe71dbe5(uParam0[iVar1], uParam1->f_12))
			{
				_0xdf7b5144e25cd3fe(uParam0[iVar1], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (_0x23e33cb9f4a3f547(uParam0[iVar1], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!_0x1f0e401031e20146(uParam0[iVar1], uParam1->f_12))
			{
				_set_anim_scene_playback_list_bool(uParam0[iVar1], uParam1->f_12, true);
				if (!is_string_null_or_empty(uParam1->f_14))
				{
					set_anim_scene_bool(uParam0[iVar1], uParam1->f_14, uParam1->f_13, false);
				}
				if (!is_string_null_or_empty(uParam1->f_16))
				{
					set_anim_scene_bool(uParam0[iVar1], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_471(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 1:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1))
						{
							return true;
						}
						break;
					case 3:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) || _0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1))
						{
							return true;
						}
						break;
					case 5:
						if ((_0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_19, 1) || _0x8d81e7824b7753f7(uParam0[iVar1], uParam1->f_18, 1)) && _get_anim_scene_progress(uParam0[iVar1]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (_is_anim_scene_finished(uParam0[iVar1], false) || _0x34a0671be613d3d0(uParam0[iVar1]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_373(var uParam0, var uParam1)
{
	func_473(uParam1, &(uParam0->f_209));
	return true;
}

bool func_374(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_375(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_474(iParam0);
	}
	else
	{
		func_475(iParam0, iParam1);
	}
	func_476();
}

void func_376(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_377(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_378(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_379(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_380(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_381()
{
	return Global_1897952->f_41;
}

int func_382()
{
	return Global_1894899->f_2;
}

bool func_383(int iParam0)
{
	if ((((func_262(iParam0) || (iParam0 >= 28 && iParam0 <= 35)) || iParam0 == 21) || iParam0 == 23) || iParam0 == 25)
	{
		return true;
	}
	return false;
}

int func_384(var uParam0)
{
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && get_entity_speed(Global_35) <= 1.5f) && !func_479(Global_35)) && !is_ped_in_any_vehicle(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (!is_waypoint_playback_going_on_for_ped(Local_14.f_3, 0))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_83(Global_35, iVar562, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_481(uParam0);
		}
		else
		{
			func_481(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(0));
	}
	return 1;
}

int func_385(var uParam0)
{
	if ((((func_88(Local_14.f_134, 32) || func_265()) && func_263()) && iVar574 >= 5) || (((Local_14.f_527 && func_482(&(Local_14.f_506))) && !func_221(&(Local_14.f_506))) && !func_16(&(Local_14.f_146), 4)))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && get_entity_speed(Global_35) <= 1.5f) && !func_479(Global_35)) && !is_ped_in_any_vehicle(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (func_83(Global_35, iVar562, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_483(uParam0);
		}
		else
		{
			func_483(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(6));
	}
	return 1;
}

int func_386()
{
	func_484(&(Local_14.f_102), &uLocal_713, &uLocal_714);
	func_119(1);
	return func_485(Local_14.f_3, &uLocal_687, 1.65f, 0.5f, 12000, 0, 1, 256, 0, 1);
}

bool func_387(int iParam0, int iParam1, float fParam2)
{
	return func_457(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_388(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_389(var uParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_401(uParam0, func_153(2), func_154(29));
	}
	else
	{
		func_401(uParam0, func_153(1), func_154(28));
	}
	return 1;
}

void func_390()
{
	iVar0 = func_486(1, 3, iVar576);
	iVar0 = func_487(iVar0, 1, 2);
	iLocal_578 = iVar0;
	func_310(Local_14.f_3, "PLAYER_LOITERING", -417894478, Global_35, 1, "ARM_TOWN_CRIER", iVar0, 1);
}

bool func_391(int iParam0)
{
	if (((func_16(&(iParam0->f_146), 2) || func_16(&(iParam0->f_146), 4)) || func_16(&(iParam0->f_146), 1)) || func_16(&(iParam0->f_146), 8))
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0, int iParam1)
{
	if (func_223(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

void func_393(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, bool bParam7)
{
	if (uParam0->f_35)
	{
		return;
	}
	bVar0 = _does_anim_scene_exist(*uParam0);
	bVar1 = _is_anim_scene_loaded(*uParam0, true, false);
	if (does_entity_exist(iParam1) && !is_string_null_or_empty(sParam2))
	{
		uParam0->f_13 = iParam1;
		uParam0->f_14 = sParam2;
		if ((bVar0 && bVar1) && bParam7)
		{
			set_anim_scene_entity(*uParam0, uParam0->f_14, uParam0->f_13, 0);
		}
	}
	if (does_entity_exist(iParam3) && !is_string_null_or_empty(sParam4))
	{
		uParam0->f_15 = iParam3;
		uParam0->f_16 = sParam4;
		if ((bVar0 && bVar1) && bParam7)
		{
			set_anim_scene_entity(*uParam0, uParam0->f_16, uParam0->f_15, 0);
		}
	}
	if (does_entity_exist(iParam5) && !is_string_null_or_empty(sParam6))
	{
		uParam0->f_17 = iParam5;
		uParam0->f_18 = sParam6;
		if ((bVar0 && bVar1) && bParam7)
		{
			set_anim_scene_entity(*uParam0, uParam0->f_18, uParam0->f_17, 0);
		}
	}
}

bool func_394(int iParam0)
{
	iVar0 = -1;
	if (func_488(iParam0, &iVar0, 1))
	{
		return _0x1f0e401031e20146(iVar0, func_489(iParam0));
	}
	return false;
}

float func_395(int iParam0)
{
	switch (iParam0->f_146.f_349)
	{
		case 1:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_181];
			break;
		case 2:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_237];
			break;
		case 3:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_265];
			break;
		case 4:
			iVar0 = &iParam0->f_146[iParam0->f_146.f_293];
			break;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return 0f;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		return 0f;
	}
	if (_is_anim_scene_started(iVar0, false))
	{
		return _get_anim_scene_progress(iVar0);
	}
	else if (_is_anim_scene_finished(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = _create_var_string(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_490(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_490(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_491(uParam0->f_5, 1);
		}
		func_492(uParam0->f_5, 17, 1, 1);
		func_492(uParam0->f_6, 17, 1, 1);
		func_493(uParam0->f_5, 6, 1);
		func_493(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = get_game_timer() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = get_game_timer();
			uParam0->f_9 = (get_game_timer() + round((to_float(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = _uiprompt_set_register_horizontal_orientation();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			animpostfx_play("MissionChoice");
		}
		_0x6339c1ea3979b5f7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_397(var uParam0)
{
	return uParam0->f_3;
}

bool func_398(var uParam0)
{
	if (*uParam0 == 0)
	{
		if (!func_174(uParam0->f_5) || !func_174(uParam0->f_6))
		{
			return false;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_5]->f_3) && func_494(uParam0->f_5, 1)) || func_495(uParam0->f_5, 1))
		{
			if (func_496(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((_uiprompt_has_hold_mode((*Global_1945938)[uParam0->f_6]->f_3) && func_494(uParam0->f_6, 1)) || func_495(uParam0->f_6, 1))
		{
			if (func_496(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = get_game_timer();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_5]->f_3))
				{
					fVar2 = func_497(uParam0->f_6, 1);
					fVar3 = func_497(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_175(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_490(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_490(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_175(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_490(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_491(uParam0->f_5, 1);
						}
						func_493(uParam0->f_5, 6, 1);
						func_493(uParam0->f_6, 6, 1);
						func_492(uParam0->f_5, 17, 1, 1);
						func_492(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!_uiprompt_has_hold_auto_fill_mode((*Global_1945938)[uParam0->f_6]->f_3))
			{
				fVar2 = func_497(uParam0->f_5, 1);
				fVar3 = func_497(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_175(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_490(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_490(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_175(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_490(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_491(uParam0->f_5, 1);
					}
					func_493(uParam0->f_5, 6, 1);
					func_493(uParam0->f_6, 6, 1);
					func_492(uParam0->f_5, 17, 1, 1);
					func_492(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_399(var uParam0)
{
	return *uParam0 == 1;
}

bool func_400(var uParam0)
{
	return *uParam0 == 2;
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

bool func_402()
{
	if (Global_1935630->f_44 != 0 && Global_1935630->f_44 != -1569615261)
	{
		return true;
	}
	return false;
}

float func_403(var uParam0)
{
	iVar0 = func_234(uParam0);
	switch (iVar0)
	{
		case 22:
			return 0.806f;
		case 24:
			return 0.697f;
		case 26:
			return 0.69f;
		case 27:
			return 0.331f;
		case 28:
			return 0.966f;
		case 29:
			return 0.902f;
		default:
			break;
	}
	return 1f;
}

int func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!func_499(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_500(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_501(iParam0, bParam2);
	iVar2 = 0;
	if (func_502(iParam0, 0, 0) == 0)
	{
		if (func_503(iParam0))
		{
			iVar5 = func_504(iParam0);
			iVar6 = func_505(iVar5);
			iVar7 = func_506(iVar6) + 1;
			func_507(iVar5);
			if (func_508(38))
			{
				func_509(483, 0);
			}
			else
			{
				func_509(482, 0);
			}
			if (iVar7 == func_510(iVar6))
			{
				func_404(func_511(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_271() && func_512(4))
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(2);
					}
					else
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(1);
					}
				}
			}
			else if (func_271() && func_512(4))
			{
				if (func_271() && (func_513(38) || func_508(38)))
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(2);
				}
				else
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(1);
				}
			}
			if (func_271() && func_512(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_517(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_517(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_518(iParam0) == -1037537535)
	{
		if ((!func_519(iParam0, 866047851) && !func_519(iParam0, -1979000645)) && !func_519(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_520(iParam0, 8388608) && !func_521(28))
	{
		func_522(28);
	}
	if (!bVar3)
	{
		if (func_519(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_523(iParam0) == -1447088266)
			{
				iVar1 = func_525(func_524(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_208() == -1)
					{
						func_526(iVar1);
					}
					if (func_527(0) && func_528(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_208() == -1)
					{
						func_526(iParam0);
					}
					if (func_527(0) && func_528(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_518(iParam0) == -427144552)
		{
			if (!func_530(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_518(iParam0) == 307971639 && func_531(iParam0))
		{
			if (!func_532(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_519(iParam0, 866047851))
		{
			func_533(iParam0);
		}
		else if (func_519(iParam0, 2000026003))
		{
			func_534(iParam0);
		}
		else if (func_519(iParam0, -103750053))
		{
			func_173(func_535(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_173(func_536(-717883113, 2091222383), iVar0);
		}
		else if (func_519(iParam0, -121341956) && !func_519(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_461((*Global_1835011)[4]->f_1, 1))
				{
					func_509(498, 0);
				}
			}
			if (func_519(iParam0, -2017733358) || func_519(iParam0, -1369131378))
			{
				func_537(iParam0);
			}
		}
		else if (func_519(iParam0, -136654233))
		{
			if (func_519(iParam0, -1021472396))
			{
			}
		}
		else if (func_519(iParam0, -1466706512) && func_519(iParam0, 1147021565))
		{
			func_509(484, 0);
		}
		else if (func_519(iParam0, 1147021565) && func_519(iParam0, -524514947))
		{
		}
		else if (func_519(iParam0, 554195525))
		{
		}
		else if (func_519(iParam0, 589988438))
		{
			if (func_538())
			{
				func_539(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_519(iParam0, 787083290) && func_519(iParam0, 949916894))
		{
			func_540(iParam0);
		}
		else if (func_519(iParam0, -1718133314))
		{
			func_541(iParam0);
		}
		else if (func_519(iParam0, -1738650224))
		{
			func_542(iParam0);
		}
		else if (func_519(iParam0, -1112814642) && func_519(iParam0, 949916894))
		{
			func_543(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_519(iParam0, 1841149704))
		{
			func_544();
		}
		else if (func_519(iParam0, 606799272))
		{
			func_545(iParam0, iParam1);
			func_546(iParam0);
		}
		else if (func_519(iParam0, -1112814642) && func_519(iParam0, -1697809989))
		{
			func_547(iParam0, 0, 0, 0);
		}
		else if (func_519(iParam0, -2017733358) || func_519(iParam0, -1369131378))
		{
			func_537(iParam0);
		}
		else if (func_519(iParam0, -1921346699))
		{
			if (func_208() != -1)
			{
				return 0;
			}
			func_548(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_519(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_549(215778062, 1, 0))
					{
						func_404(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_549(670273567, 1, 0))
					{
						func_404(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_549(-967317137, 1, 0))
					{
						func_404(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_549(526074061, 1, 0))
					{
						func_404(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_549(-1045488665, 1, 0))
					{
						func_404(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_549(471514780, 1, 0))
					{
						func_404(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_519(iParam0, -839724752) && func_520(iParam0, 4))
		{
			if (!func_508(42))
			{
				func_550(iParam0);
			}
		}
		else if (func_519(iParam0, 1399091007))
		{
			func_551(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_519(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_404(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_522(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_552(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_553(&iVar9, 0))
				{
					func_528(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_208() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_552(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_509(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_555();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_556();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_557();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_558();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_559(499813453, 854119837, 0);
				func_560(499813453, 0);
				func_561(1);
				break;
			case 2127812557:
				func_559(499813453, -1292544588, 0);
				func_560(499813453, 0);
				func_561(2);
				break;
			case 808991383:
				func_559(499813453, -1003325394, 0);
				func_560(499813453, 0);
				func_561(4);
				break;
			case 1134518629:
				func_559(666607663, -335460405, 0);
				func_560(666607663, 0);
				func_562(1);
				break;
			case 902940106:
				func_559(666607663, 903797617, 0);
				func_560(666607663, 0);
				func_562(2);
				break;
			case -418174898:
				func_559(666607663, 669728650, 0);
				func_560(666607663, 0);
				func_562(4);
				break;
			case -648114971:
				func_559(-220219788, 1214120047, 0);
				func_560(-220219788, 0);
				func_563(1);
				break;
			case 211153747:
				func_559(-220219788, 655769340, 0);
				func_560(-220219788, 0);
				func_563(2);
				break;
			case -32876996:
				func_559(-220219788, 885316185, 0);
				func_560(-220219788, 0);
				func_563(4);
				break;
			case 1191437462:
				func_559(218622660, -1491419385, 0);
				func_560(218622660, 0);
				func_564(1);
				break;
			case 1119149048:
				func_559(218622660, 1809565830, 0);
				func_560(218622660, 0);
				func_564(2);
				break;
			case 506073827:
				func_559(390004462, -628873767, 0);
				func_560(390004462, 0);
				func_565(1);
				break;
			case -1876986168:
				func_559(390004462, -405421956, 0);
				func_560(390004462, 0);
				func_565(2);
				break;
			case 2142623221:
				func_559(390004462, -1108972386, 0);
				func_560(390004462, 0);
				func_565(4);
				break;
			case 1508215381:
				func_559(6410548, 1053716392, 0);
				func_560(6410548, 0);
				func_566(1);
				break;
			case -888935280:
				func_559(6410548, 806507056, 0);
				func_560(6410548, 0);
				func_566(2);
				break;
			case -1252474566:
				func_559(6410548, 1571925350, 0);
				func_560(6410548, 0);
				func_566(4);
				break;
			case -1465702449:
				func_559(6410548, 1330352282, 0);
				func_560(6410548, 0);
				func_566(8);
				break;
			case -21093309:
				func_568(242, func_567(-21093309), 0);
				break;
			case 204375141:
				func_568(240, func_567(204375141), 0);
				break;
			case -417963070:
				func_568(241, func_567(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_569(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_509(488, 0);
				break;
			case 1613651027:
				func_509(491, 0);
				break;
			case -885810591:
				func_509(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_404(func_570(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_404(func_571(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_521(1))
				{
					func_509(487, 0);
				}
				break;
			case -898386032:
				func_509(486, 0);
				break;
			case -2035110427:
				if (func_208() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_509(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_572(&iVar10);
		if (!func_573(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_527(0))
		{
			return 1;
		}
		if (func_518(iParam0) == -1037537535)
		{
			func_574(iParam0);
		}
		if (func_519(iParam0, -1979000645))
		{
			func_575(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_527(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_404(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_576(iVar2, 0);
		}
	}
	Var35 = { func_577(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_578(iParam0);
	if (fParam6 > 0f)
	{
		if (func_519(iParam0, -839724752))
		{
			func_579(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_580(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_405(bool bParam0)
{
	func_89(&iLocal_550, 32);
	func_408(iVar548, iVar547);
	func_409(bParam0);
}

void func_406()
{
	if (func_88(Local_14.f_134, 8388608))
	{
		func_90(&(Local_14.f_134), 8388608);
		func_90(&(Local_14.f_134), 33554432);
	}
}

int func_407(var uParam0)
{
	if (!func_263())
	{
		if (Local_14.f_1 == 0)
		{
			func_401(uParam0, func_153(2), func_154(29));
		}
		else
		{
			func_401(uParam0, func_153(1), func_154(28));
		}
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_408(int iParam0, int iParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_377(iParam0, iParam1);
}

void func_409(bool bParam0)
{
	if (!func_88(Local_14.f_134, 65536))
	{
		switch (Local_14.f_1)
		{
			case 0:
				func_144(&uLocal_708);
				func_581(2, 1);
				break;
			case 1:
				func_581(2, 12);
				break;
		}
		func_89(&(Local_14.f_134), 65536);
	}
	if (bParam0)
	{
		func_582(2);
	}
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 178, bParam2);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 317, bParam1);
}

bool func_411(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_412(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

int func_413(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_414(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (bParam2)
			{
				return (_is_ped_getting_into_a_mount_seat(iParam0, true) && get_mount(iParam0) == iParam1);
			}
			else
			{
				return (is_ped_on_mount(iParam0) && get_mount(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_415(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_416(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_417(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_584(iParam1))
		{
			func_585(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_586(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_587(iParam0, 0);
			bVar0 = true;
		}
		func_588(iParam0, bParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_418(var uParam0)
{
	uParam0->f_351 = 0;
}

void func_419(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_420(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_589(iParam0, 4);
		func_590(iVar0, 1);
		func_591(iVar0, 1);
	}
	else
	{
		func_592(iParam0, 4);
		func_591(iVar0, 0);
	}
}

void func_422(int* iParam0, char* sParam1)
{
	if (func_174(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_420(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_314(iParam0, 1);
}

void func_423(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_424(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_593((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_425(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_443((*uParam0)[iVar0]))
		{
			func_313((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_426(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_175(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_71(iParam0, 0);
		}
	}
}

int func_427(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_594(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_174((*uParam2)[iVar0]->f_6))
		{
			func_313((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_428(var uParam0)
{
	iVar0 = func_595(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_429(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_430(int* iParam0, int* iParam1)
{
	if (!func_293(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_313(iParam1, 19);
			func_423(iParam0, 23);
			func_596(iParam1, 2);
		}
	}
}

bool func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_597(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_598(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_432(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_594(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_433(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_434(int iParam0)
{
	return (func_599(iParam0, 4) || func_599(iParam0, 5));
}

int func_435(int iParam0)
{
	return func_599(iParam0, 7);
}

int func_436(int iParam0)
{
	return func_599(iParam0, 6);
}

void func_437(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_443(iParam1))
		{
			clear_bit(iParam1, 14);
			func_594(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_438(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_600(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_311(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_421(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_421(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_601(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_439(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_494(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_602(iParam1, 1))
	{
		func_603(iParam1, 1);
		return true;
	}
	return false;
}

void func_440(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_170((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_441(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_442(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_443(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_445()
{
	if (func_604(Global_35) || func_605(Global_35))
	{
		return true;
	}
	return false;
}

bool func_446(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_447(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_448(int iParam0)
{
	return func_447(iParam0, 2);
}

bool func_449()
{
	if (func_606())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_450(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_451(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_452(var uParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_453(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_117(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_118(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_454(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_455(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_456(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_456(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_457(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_458(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_459(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_460(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_461(int iParam0, bool bParam1)
{
	switch (func_359(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_462(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_group_member(iParam0, func_607(), 1))
	{
		return true;
	}
	return false;
}

int func_463(int iParam0, bool bParam1)
{
	return func_608(iParam0, Global_1894899->f_2, bParam1);
}

void func_464(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_465(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_466(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_609(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_467(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_392(iVar0, &iVar1))
	{
		return true;
	}
	if ((*uParam0)[iVar1]->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (is_string_null_or_empty(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((_does_anim_scene_exist(uParam0[iVar1]) && !_is_anim_scene_loading(uParam0[iVar1], true)) && _is_anim_scene_loaded(uParam0[iVar1], true, false))
	{
		if (!_0xa9016536015de29d(uParam0[iVar1], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

int func_468(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(uParam0->f_1))
	{
		return 1;
	}
	if (_does_anim_scene_exist(*uParam0))
	{
		return 1;
	}
	if (!is_string_null_or_empty(sParam1))
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!is_string_null_or_empty(uParam0->f_2))
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = _create_anim_scene(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_469(var uParam0)
{
	bVar0 = _is_anim_scene_loaded(*uParam0, true, false);
	bVar1 = _is_anim_scene_started(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = _does_anim_scene_exist(*uParam0);
	bVar2 = _is_anim_scene_loading(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		load_anim_scene(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_470(var uParam0)
{
	if (!_does_anim_scene_exist(*uParam0))
	{
		return 1;
	}
	if (!_is_anim_scene_loaded(*uParam0, true, false))
	{
		return 0;
	}
	if (does_entity_exist(uParam0->f_5) && !is_string_null_or_empty(uParam0->f_6))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (does_entity_exist(uParam0->f_3) && !is_string_null_or_empty(uParam0->f_4))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (does_entity_exist(uParam0->f_7) && !is_string_null_or_empty(uParam0->f_8))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (does_entity_exist(uParam0->f_9) && !is_string_null_or_empty(uParam0->f_10))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (does_entity_exist(uParam0->f_11) && !is_string_null_or_empty(uParam0->f_12))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (does_entity_exist(uParam0->f_13) && !is_string_null_or_empty(uParam0->f_14))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (does_entity_exist(uParam0->f_15) && !is_string_null_or_empty(uParam0->f_16))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (does_entity_exist(uParam0->f_17) && !is_string_null_or_empty(uParam0->f_18))
	{
		set_anim_scene_entity(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!is_string_null_or_empty(uParam0->f_20))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!is_string_null_or_empty(uParam0->f_22))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!is_string_null_or_empty(uParam0->f_24))
	{
		set_anim_scene_bool(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_411(uParam0->f_25) || !func_411(uParam0->f_28))
	{
		set_anim_scene_origin(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_471(var uParam0, var uParam1)
{
	iVar0 = uParam0->f_209.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_209;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_610(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_611(uParam0);
	}
	return 1;
}

bool func_472(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar5 = 0;
	if (!is_entity_dead(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && is_ped_on_mount(iParam0))
				{
					vVar0 = { func_612(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_411(vVar0))
					{
						if (func_613(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					task_dismount_animal(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					if (_is_ped_carrying(iParam0))
					{
						iVar6 = _get_first_entity_ped_is_carrying(iParam0);
						task_place_carried_entity_at_coord(0, iVar6, get_entity_coords(iParam0, true, false), 2f, 8);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_614(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!is_ped_on_mount(iParam0))
				{
					iVar3 = _get_last_mount(iParam0);
					if (!is_entity_dead(iVar3))
					{
						_task_smart_flee_style_ped(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_614(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (_0x3ab6c7b0bb0df4b1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_388(iParam0, 242628503))
				{
					if (!bParam6 || get_sequence_progress(iParam0) > 0)
					{
						if (_0x23e33cb9f4a3f547(iParam1, sParam3))
						{
							if (!_0x3b393716c3fd8237(iParam0) && _0x337f1cc8ee895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_473(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_474(int iParam0)
{
	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_615(iVar0);
}

int func_475(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_616(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_476()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

bool func_477()
{
	if (iVar577 <= 0 && func_162(&Local_14) < 1.9f)
	{
		return true;
	}
	return false;
}

bool func_478(bool bParam0)
{
	if (does_entity_exist(Global_35))
	{
		if (bParam0)
		{
			if (func_162(&Local_14) > 5f)
			{
				return false;
			}
		}
		if (func_83(Global_35, iVar559, 0, 1) && is_ped_facing_ped(Local_14.f_3, Global_35, 120f))
		{
			return true;
		}
	}
	return false;
}

bool func_479(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_480(var uParam0)
{
	iVar0 = func_486(1, 6, iVar573);
	iLocal_576 = iVar0;
	switch (iVar0)
	{
		case 1:
			func_401(uParam0, func_153(3), func_154(31));
			break;
		case 2:
			func_401(uParam0, func_153(3), func_154(32));
			break;
		case 3:
			func_401(uParam0, func_153(3), func_154(33));
			break;
		case 4:
			func_401(uParam0, func_153(3), func_154(34));
			break;
		case 5:
			func_401(uParam0, func_153(3), func_154(35));
			break;
	}
}

void func_481(var uParam0)
{
	if (!func_309())
	{
		iVar0 = func_486(0, 4, iVar569);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
		}
	}
	else
	{
		iVar0 = func_486(0, 6, iVar569);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
			case 4:
				func_401(uParam0, func_153(0), func_154(14));
				break;
			case 5:
				func_401(uParam0, func_153(0), func_154(17));
				break;
		}
	}
}

int func_482(var uParam0)
{
	if ((((func_88(*uParam0, 32) || func_88(*uParam0, 64)) || func_88(*uParam0, 512)) || func_88(*uParam0, 256)) || func_88(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_483(var uParam0)
{
	iVar0 = func_486(0, 7, iVar571);
	iLocal_574 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_401(uParam0, func_153(0), func_154(7));
			break;
		case 1:
			func_401(uParam0, func_153(0), func_154(10));
			break;
		case 2:
			func_401(uParam0, func_153(0), func_154(11));
			break;
		case 3:
			func_401(uParam0, func_153(0), func_154(8));
			break;
		case 4:
			func_401(uParam0, func_153(0), func_154(9));
			break;
		case 5:
			func_401(uParam0, func_153(0), func_154(12));
			break;
		case 6:
			func_401(uParam0, func_153(0), func_154(13));
			break;
	}
	uLocal_577 = iVar574 + 1;
}

void func_484(var uParam0, var uParam1, var uParam2)
{
	if (!_does_volume_exist(*uParam0))
	{
		return;
	}
	if (!is_itemset_valid(*uParam1))
	{
		*uParam1 = create_itemset(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = create_itemset(true);
		iVar3 = _0x886171a12f400b89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
				iVar2 = _0x3ffb15534067dcd4(iVar1);
				if (is_entity_dead(iVar2))
				{
					add_to_itemset(iVar1, *uParam1);
				}
				iVar4++;
			}
		}
		destroy_itemset(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = get_itemset_size(*uParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = get_indexed_item_in_itemset(iVar8, *uParam1);
				iVar6 = _0x3ffb15534067dcd4(iVar5);
				set_entity_no_collision_entity(Global_35, iVar6, true);
				set_entity_no_collision_entity(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

int func_485(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	if (is_entity_dead(Global_35) || is_entity_dead(iParam0))
	{
		return 0;
	}
	if (bParam9)
	{
		if (func_618(func_617(Global_35, 0, 1, 0)) || func_618(func_617(Global_35, 1, 1, 0)))
		{
			_0x94a3c1b804d291ec(Global_35, 1, 0, 1, 0);
			return 0;
		}
	}
	if (!bParam8)
	{
		vVar0 = { get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0) * Vector(fParam2, fParam2, fParam2) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, true, false) + func_619(get_entity_coords(Global_35, true, false) - get_entity_coords(iParam0, true, false), fParam2) };
	}
	if (((!func_620(Global_35, vVar0, fParam3, 1, 1) && !func_387(Global_35, iParam0, 1f)) && !func_387(iParam0, Global_35, 1f)) || !*uParam1)
	{
		if (!func_388(Global_35, 242628503))
		{
			if (bParam5)
			{
				set_player_control(get_player_index(), false, iParam7, false);
			}
			open_sequence_task(&iVar3);
			task_follow_nav_mesh_to_coord(0, vVar0, 1f, iParam4, fParam3, 0, (get_entity_heading(iParam0) - 180f));
			task_turn_ped_to_face_entity(0, iParam0, 0, -1082130432, -1082130432, -1082130432);
			close_sequence_task(iVar3);
			task_perform_sequence(Global_35, iVar3);
			set_ped_keep_task(Global_35, true);
			clear_sequence_task(&iVar3);
			*uParam1 = 1;
		}
	}
	else if (!func_388(Global_35, 242628503))
	{
		if (bParam5 && bParam6)
		{
			set_player_control(get_player_index(), true, iParam7, false);
		}
		*uParam1 = 0;
		return 1;
	}
	return 0;
}

int func_486(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_random_int_in_range(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_621())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_622(func_621(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_487(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_488(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0->f_146.f_349)
	{
		case 1:
			*iParam1 = &iParam0->f_146[iParam0->f_146.f_181];
			break;
		case 2:
			*iParam1 = &iParam0->f_146[iParam0->f_146.f_237];
			break;
		case 3:
			*iParam1 = &iParam0->f_146[iParam0->f_146.f_265];
			break;
		case 4:
			*iParam1 = &iParam0->f_146[iParam0->f_146.f_293];
			break;
	}
	if (!_does_anim_scene_exist(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!_is_anim_scene_loaded(*iParam1, true, false) || !_is_anim_scene_started(*iParam1, false)) || _is_anim_scene_finished(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_489(int iParam0)
{
	switch (iParam0->f_146.f_349)
	{
		case 1:
			return iParam0->f_146.f_181.f_12;
		case 2:
			return iParam0->f_146.f_237.f_12;
		case 3:
			return iParam0->f_146.f_265.f_12;
		case 4:
			return iParam0->f_146.f_293.f_12;
	}
	return "";
}

int func_490(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_623(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_491(int iParam0, bool bParam1)
{
	if (!func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	_uiprompt_set_enabled((*Global_1945938)[iVar0]->f_3, !bParam1);
}

void func_492(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_493(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1945938)[iVar0]->f_3, iParam1);
}

bool func_494(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_495(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_496(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

float func_497(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return 0f;
	}
	iVar0 = func_315(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

bool func_498(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_499(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_208() == -1)
	{
		if (func_624(iParam0) && func_625(iParam0))
		{
			func_626(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_500(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_627(iParam0, iParam1);
	Var0 = { func_628(iParam0, 0, 1) };
	iVar5 = func_629(iParam0, &Var0, 0, 0);
	iVar6 = func_630(iParam0, 0);
	if ((iVar5 > 1 && !func_631()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_519(iParam0, -2051813666))
		{
			func_509(583, 1);
		}
		else
		{
			func_509(582, 0);
		}
	}
	if (func_632(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_501(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_633(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

int func_502(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_634(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_635(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_636(bParam2), iParam0, 0);
	return iVar2;
}

bool func_503(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_504(iParam0) != 0;
}

int func_504(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_638(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_505(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_506(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_505(iVar0))
		{
			if (func_549(func_638(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_507(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_639(48);
	func_126(0, -1);
}

bool func_508(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_461((*Global_1347702)[iParam0]->f_15, 1);
}

void func_509(int iParam0, bool bParam1)
{
	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_642(iVar0, iVar1);
}

int func_510(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_511(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_512(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_461((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_513(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	if (!func_643(iParam0))
	{
		return false;
	}
	return func_209((*Global_1347702)[iParam0]->f_15);
}

int func_514()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_549(func_644(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_515(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_271() && (func_513(38) || func_508(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_271() && (func_513(39) || func_508(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_645(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_271() && (func_513(41) || func_508(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_271() && (func_513(49) || func_508(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_645(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_646(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_647(iParam0, iVar13, iVar14))
	{
	}
	if (func_648(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_649(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_650(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_651(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_516(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_271() && (func_513(38) || func_508(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_271() && (func_513(39) || func_508(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_271() && (func_513(49) || func_508(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_271() && (func_513(38) || func_508(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_655(_create_var_string(2, sVar0), _create_var_string(2, func_654(func_511(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_271() && (func_513(39) || func_508(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_271() && (func_513(49) || func_508(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_518(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_519(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_520(int iParam0, int iParam1)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_521(int iParam0)
{
	if (!func_656(iParam0))
	{
		return false;
	}
	return func_657(iParam0);
}

void func_522(int iParam0)
{
	if (!func_656(iParam0))
	{
		return;
	}
	func_658(iParam0);
	func_659(iParam0);
}

int func_523(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_524(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_498(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_660(iVar0) || func_661(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_525(int iParam0, bool bParam1)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_526(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_618(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_527(bool bParam0)
{
	if (func_208() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_636(bParam0));
}

bool func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_628(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_662((386 + iVar28), 1);
			if (func_663(iParam0, &Var0, iVar5, 0))
			{
				if (func_664(iParam0, &Var6, iVar5))
				{
					Var29 = { func_665(iParam0, Var0, iVar5, 0) };
					func_666(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_527(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_529(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_667(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_529(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_531(iParam0))
	{
		return false;
	}
	if (!func_527(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_530(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_525(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_208() == -1)
		{
			func_526(iVar0);
			if (iParam1 == 1248274121)
			{
				func_668(iVar0);
			}
		}
		if (!func_632(iParam0, &uVar1, 1, 0, 0))
		{
			func_626(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_669(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_528(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_528(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_528(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_309())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_670(iVar0))
				{
					func_528(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_528(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_617(Global_35, 2, 0, 1);
				if ((((func_618(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_521(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_618(iVar7) && func_521(24))
				{
					if (!func_528(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_528(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_528(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_509(480, 1);
	}
	return true;
}

bool func_531(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_532(int iParam0, int iParam1, int iParam2)
{
	if (!func_531(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_618(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_549(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_568(func_671(iParam0), func_567(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_208() == -1)
		{
			if (func_461((*Global_1835011)[14]->f_1, 1))
			{
				func_509(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_527(0))
	{
		if (func_529(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_573(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_533(int iParam0)
{
	if ((iParam0 == -615217896 && !func_672()) || iParam0 != -615217896)
	{
		if (func_673(Global_35, iParam0, &uVar0))
		{
			func_552(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_558();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_558();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_558();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_554();
			break;
	}
}

void func_534(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_554();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_555();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_557();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_558();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_674();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_675();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_535(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_536(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_537(int iParam0)
{
	bVar0 = func_519(iParam0, -2017733358);
	if (func_676() < 3)
	{
		if (bVar0)
		{
			if (func_678(func_677(iParam0), iParam0))
			{
				func_568(79, func_567(func_677(iParam0)), 1);
			}
			else
			{
				func_568(78, func_567(func_677(iParam0)), 1);
			}
		}
		else
		{
			func_568(80, func_567(func_679(iParam0)), 1);
		}
	}
}

bool func_538()
{
	if (((((func_680(839908568, 400) || func_680(-1134030454, 400)) || func_680(623353496, 400)) || func_680(-344413337, 400)) || func_680(-1664948962, 400)) || func_680(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_539(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_681(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_682(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_683(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_540(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_515(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(8192);
			break;
		case 581047644:
			func_515(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(524288);
			break;
		case -644199619:
			func_515(39, 0, 0, 0, 0, 0, 1, 0);
			func_517(39, 0, 0, 0, 0, -1, 0);
			func_685(16);
			break;
		case 684296857:
			func_515(41, 0, 0, 0, 0, 0, 1, 0);
			func_517(41, 0, 0, 0, 0, -1, 0);
			func_686(8);
			break;
		case 466137807:
			func_515(49, 0, 0, 0, 0, 0, 1, 0);
			func_517(49, 0, 0, 0, 0, -1, 0);
			func_687(16);
			break;
		case -1087522507:
			func_515(43, 0, 0, -1791518714, func_688(1), 0, -1, 0);
			func_689(1);
			break;
		case -405829000:
			func_515(43, 0, 0, -2087881550, func_688(2), 0, -1, 0);
			func_689(2);
			break;
		case 378660860:
			func_515(43, 0, 0, 1908068621, func_688(4), 0, -1, 0);
			func_689(4);
			break;
		case 1566111097:
			func_515(43, 0, 0, 1611247019, func_688(8), 0, -1, 0);
			func_689(8);
			break;
		case 1276007140:
			func_515(43, 0, 0, 1319635688, func_688(16), 0, -1, 0);
			func_689(16);
			break;
	}
}

void func_541(int iParam0)
{
	if (func_690() == 1)
	{
		if (func_508(39))
		{
			func_509(342, 0);
		}
		else
		{
			func_509(343, 0);
			func_685(1);
		}
	}
	if (func_690() >= 30)
	{
		func_509(344, 0);
	}
	func_515(39, 0, 0, 0, 0, 0, -1, 0);
	func_517(39, 0, 0, func_690(), 30, 1, 0);
}

void func_542(int iParam0)
{
	if (func_691() == 1)
	{
		if (func_508(49))
		{
			func_509(409, 0);
		}
		else
		{
			func_509(410, 0);
			func_687(1);
		}
	}
	if (func_691() >= 10)
	{
		func_509(411, 0);
	}
	func_515(49, 0, 0, 0, 0, 0, -1, 0);
	func_517(49, 0, 0, func_691(), 10, 1, 0);
}

void func_543(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_509(437, 0);
			func_509(440, 0);
			func_692(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-949689219, 20), 1, 0);
			func_684(1);
			func_693(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_692(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-1248968496, 20), 1, 0);
			func_684(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_692(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(1706369307, 20), 1, 0);
			func_684(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_692(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(1520110311, 20), 1, 0);
			func_684(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_509(438, 0);
			func_692(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_515(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(-1992824800, 20), 1, 0);
			func_684(32768);
			break;
		default:
			func_509(439, 0);
			break;
	}
}

void func_544()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_545(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_208() == -1)
	{
		if (!func_508(43))
		{
			if (iParam0 == 281887510)
			{
				func_509(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_509(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_509(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_509(400, 0);
			}
		}
		else if (func_519(iParam0, 412399755))
		{
			func_694(-1791518714);
			if (func_695() == 0)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_508(44))
		{
			if (iParam0 == -222563712)
			{
				func_509(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_509(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_509(401, 0);
			}
		}
		else if (func_519(iParam0, 709057512))
		{
			func_694(-2087881550);
			if (func_695() == 1)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_508(45))
		{
			if (iParam0 == 2116770557)
			{
				func_509(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_509(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_509(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_509(398, 0);
			}
		}
		else if (func_519(iParam0, -1478961327))
		{
			func_694(1908068621);
			if (func_695() == 2)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_699(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_700(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_639(48);
					}
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_508(46))
		{
			if (iParam0 == 2085530337)
			{
				func_509(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_509(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_509(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_509(406, 0);
			}
		}
		else if (func_519(iParam0, -1238404098))
		{
			func_694(1611247019);
			if (func_695() == 3)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_508(47))
		{
			if (iParam0 == -1521783510)
			{
				func_509(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_509(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_509(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_509(403, 0);
			}
		}
		else if (func_519(iParam0, 1160548794))
		{
			func_694(1319635688);
			if (func_695() == 4)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_546(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_699(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_700(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_639(48);
		}
	}
}

void func_547(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_549(func_701(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_702(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_703(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_548(int iParam0, int iParam1, int iParam2)
{
	if (func_208() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_539(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_539(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_539(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_539(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_539(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_539(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_539(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_539(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_539(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_539(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_539(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_539(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_539(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_704())
			{
				func_539(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_539(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_539(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_539(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_539(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_539(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_539(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_539(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_539(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_539(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_539(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_539(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_539(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_705(iParam0, 1))
		{
			return false;
		}
	}
	return func_502(iParam0, 0, bParam2) >= iParam1;
}

void func_550(int iParam0)
{
	if (func_508(41))
	{
		func_509(363, 0);
	}
	else
	{
		func_509(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_706(-1865241121);
			func_707(-642026005);
			func_708(-642026005);
			func_126(0, 10);
			break;
		case -2108314374:
			func_706(2117142684);
			func_707(-940584364);
			func_708(-940584364);
			func_126(0, 10);
			break;
		case -1193798153:
			func_706(-1409326024);
			func_707(1972645282);
			func_708(1972645282);
			func_126(0, 10);
			break;
		case -787702678:
			func_706(-641744968);
			func_707(1667205433);
			func_708(1667205433);
			func_126(0, 10);
			break;
		case -804542901:
			func_706(-946988203);
			func_707(1362715885);
			func_708(1362715885);
			func_126(0, 10);
			break;
		case -1696275132:
			func_706(-646136018);
			func_707(1053540370);
			func_708(1053540370);
			func_126(0, 10);
			break;
		case -161595323:
			func_706(-955835837);
			func_707(-1100103852);
			func_708(-1100103852);
			func_126(0, 10);
			break;
		case -1114363619:
			func_706(-179276075);
			func_707(-1409869209);
			func_708(-1409869209);
			func_126(0, 10);
			break;
		case -368407134:
			func_706(-492711560);
			func_707(-1760235357);
			func_708(-1760235357);
			func_126(0, 10);
			break;
		case 1997759228:
			func_706(1764383959);
			func_707(-138366827);
			func_708(-138366827);
			func_126(0, 10);
			break;
		case 1265573293:
			func_706(317501533);
			func_707(-1261163843);
			func_708(-1261163843);
			func_126(0, 10);
			break;
		case -1030441283:
			func_706(817753087);
			func_707(-963523016);
			func_708(-963523016);
			func_126(0, 10);
			break;
		case -1490884871:
			func_706(576606016);
			func_707(560825326);
			func_708(560825326);
			func_126(0, 10);
			break;
		case -395458616:
			func_706(814934957);
			func_707(858269539);
			func_708(858269539);
			break;
	}
}

void func_551(int iParam0, int iParam1)
{
	func_709(iParam0, iParam1, &uVar0);
}

int func_552(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_628(iParam1, 1, 0) };
		iParam3 = func_710(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_712(iParam1, iParam2, func_711(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_713(1, (func_208() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_711(iParam3, 1)])
			{
				func_714(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_715(32768) && iParam1 != &Global_1946804->f_57[func_711(iParam3, 1)])
			{
				func_716();
				func_714(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_714(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_717(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_714(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_718(0);
			func_719(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_714(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_553(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_617(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_617(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_720("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_721(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_722(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_554()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_555()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_556()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_557()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_558()
{
	func_723();
	func_724();
	func_725();
}

void func_559(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_560(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_653(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_561(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_562(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_563(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_564(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_565(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_566(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_567(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_569(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_570()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_637())
	{
		return func_571();
	}
	iVar4 = (func_637() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_637())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_638(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_571()
{
	iVar0 = get_random_int_in_range(0, func_637());
	return func_638(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_572(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

int func_573(int iParam0, int iParam1, int iParam2)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_628(iParam0, 0, 1) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	return func_728(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_574(int iParam0)
{
	if (func_208() != -1)
	{
		return;
	}
	switch (func_523(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_729(81053684, 0) <= 0)
			{
				func_714(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_714(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_730(iParam0);
			if (func_731(iVar0))
			{
				func_732(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_714(30, iParam0, 0, 0, 0);
			}
			if (func_733() == -2125499975 || func_733() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_714(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_733() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_714(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_734(-525676072, 0))
			{
				if (func_735(-525676072, &iVar1))
				{
					func_714(33, iVar1, 0, 0, 0);
				}
			}
			func_714(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_736(99217379))
		{
			func_552(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_522(24);
		if (func_553(&iVar2, 0))
		{
			func_528(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_575(int iParam0)
{
	if (func_519(iParam0, 943695443))
	{
		func_737(0, iParam0);
	}
	else if (func_519(iParam0, -2096528786))
	{
		func_737(1, iParam0);
	}
	else if (func_519(iParam0, -1094167013))
	{
		func_737(2, iParam0);
	}
	else if (func_519(iParam0, 1936654645))
	{
		func_737(3, iParam0);
	}
	else if (func_519(iParam0, 1306489306))
	{
		func_737(4, iParam0);
	}
	else if (func_519(iParam0, 435762317))
	{
		func_737(5, iParam0);
	}
	else if (func_519(iParam0, 1259363210))
	{
		func_737(6, iParam0);
	}
	else if (func_519(iParam0, 881398259))
	{
		func_737(7, iParam0);
	}
	else if (func_519(iParam0, -541549214))
	{
		func_737(8, iParam0);
	}
	else if (func_519(iParam0, 130796156))
	{
		func_737(-1, iParam0);
	}
}

int func_576(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_738(&Var4, 1356624740);
	return func_739(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_577(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return Var0;
	}
	if (func_519(iParam0, -305066475))
	{
		if (func_208() == -1)
		{
			if (func_519(iParam0, -537818634))
			{
				return func_171(189951448);
			}
			else
			{
				return func_171(1176172851);
			}
		}
	}
	else if (func_519(iParam0, -537818634))
	{
		return func_171(-963660207);
	}
	if (func_519(iParam0, 2084895747))
	{
		return func_171(1694039471);
	}
	return Var2;
}

void func_578(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_208() == -1)
			{
				if (func_461((*Global_1835011)[4]->f_1, 1))
				{
					func_509(109, 1);
				}
			}
			break;
	}
}

void func_579(int iParam0, char* sParam1)
{
	sVar0 = func_741(func_740(0));
	func_743(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_742(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_498(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_744())
	{
		func_745(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_520(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_518(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_747(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_748(_create_var_string(10, &cVar2, _create_var_string(0, func_567(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_519(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_567(iParam0));
	}
	func_743(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_581(int iParam0, int iParam1)
{
	if (&Global_40.f_11623[iParam0] != iParam1)
	{
		Global_40.f_11623[iParam0] = iParam1;
	}
}

void func_582(int iParam0)
{
	(*Global_1396257)[iParam0]->f_631 = 1;
}

int func_583(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_584(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_585(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_749(iParam0, iParam1))
		{
			if (func_750(iParam0, iParam1))
			{
				if (func_751(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_752(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_586(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_587(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_588(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

void func_589(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_590(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_447(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_591(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_592(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_593(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_594(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_174(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_175(&(iParam1->f_6), 0, 1);
	}
	if (!func_174(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_443(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_753(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_174(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_601(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_492(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_754(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_419(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_492(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_421(iParam1->f_6, 0, 1);
				}
				else
				{
					func_421(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_595(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_596(int* iParam0, int iParam1)
{
	if (!func_312(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_313(iParam0, 14);
		}
	}
}

bool func_597(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_598(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_599(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_600(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_601(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_492(iParam0, 18, 0, 1);
	func_492(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_602(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_603(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

int func_604(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return 0;
	}
	_0x20a4bf0e09bee146(iVar0);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar1 = get_itemset_size(iVar0);
	if (iVar1 == 0)
	{
	}
	destroy_itemset(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_755(iVar9);
		if (!_0x608bc6a6aacd5036(&Var3, iParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else
			{
				if (is_entity_dead(iVar7))
				{
				}
				iVar8 = _get_entity_carry_config(iVar7);
				if (iVar8 == -1992418870 || iVar8 == 822715387)
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_605(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = func_267();
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(false);
	if (!is_itemset_valid(iVar1))
	{
		return 0;
	}
	_0x20a4bf0e09bee146(iVar1);
	find_all_attached_carriable_entities(iParam0, iVar1);
	bVar2 = false;
	iVar3 = get_itemset_size(iVar1);
	if (iVar3 > 0)
	{
		if (is_in_itemset(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	destroy_itemset(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

bool func_606()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_607()
{
	return get_player_group(get_player_index());
}

int func_608(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_756(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_757(iParam0, uVar0, iVar1, bParam2);
}

void func_609(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

int func_610(var uParam0, int iParam1, var uParam2)
{
	if (*uParam2)
	{
		return 1;
	}
	if (!func_392(iParam1, &iVar0))
	{
		return 0;
	}
	if ((*uParam0)[iVar0]->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (_does_anim_scene_exist(uParam0[iVar0]) && (_is_anim_scene_loading(uParam0[iVar0], true) || _is_anim_scene_loaded(uParam0[iVar0], true, false)))
	{
		if (!is_string_null_or_empty((*uParam0)[iVar0]->f_2))
		{
			reset_anim_scene(uParam0[iVar0], (*uParam0)[iVar0]->f_2);
			*uParam2 = 1;
		}
		else
		{
			reset_anim_scene(uParam0[iVar0], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_611(var uParam0)
{
	iVar0 = uParam0->f_209;
	if (uParam0->f_209.f_27)
	{
		return 1;
	}
	if (func_392(iVar0, &iVar1))
	{
		if (func_758((*uParam0)[iVar1], uParam0->f_209.f_12) || uParam0->f_209.f_26 == 1)
		{
			uParam0->f_209.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_612(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_613(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_614(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

int func_615(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_616(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_617(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_618(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

Vector3 func_619(vector3 vParam0, float fParam3)
{
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_620(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_759(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_621()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_622(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_623(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_590(iParam0, 1);
	func_591(iParam0, 1);
	func_592(iParam0, 128);
}

bool func_624(int iParam0)
{
	return func_518(iParam0) == -427144552;
}

bool func_625(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	if (func_520(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_632(iParam0, &uVar0, 1, 0, 0);
	}
	return func_549(iParam0, 1, 0);
}

void func_626(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_518(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_525(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_661(iVar0))
	{
		if (func_208() == -1)
		{
			func_526(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_502(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_580(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_627(int iParam0, int iParam1)
{
	if (func_519(iParam0, 58855631))
	{
		func_760(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> func_628(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_761(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_518(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_665(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_762(bParam1) };
			if (bParam2 && func_763(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_663(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_663(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_664(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_764(bParam1) };
			switch (func_523(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_765(iParam0, -1823706425))
			{
				Var0 = { func_665(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_765(iParam0, -1483207246))
			{
				Var0 = { func_665(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_766(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_629(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_636(bParam3), iParam0);
}

int func_630(int iParam0, bool bParam1)
{
	if (func_531(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_636(bParam1), iParam0, 0);
}

bool func_631()
{
	if (func_208() != -1)
	{
		return false;
	}
	if (!func_271())
	{
		return false;
	}
	if (!func_461((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_461((*Global_1835011)[2]->f_1, 1) && func_461((*Global_1347702)[120]->f_15, 1)) && !func_461((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_461((*Global_1835011)[37]->f_1, 1) && !func_461((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_461((*Global_1835011)[57]->f_1, 1) && !func_461((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_461((*Global_1835011)[26]->f_1, 1) && !func_461((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_461((*Global_1835011)[62]->f_1, 1) && func_461((*Global_1835011)[63]->f_1, 1)) && !func_461((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_461((*Global_1835011)[75]->f_1, 1) && !func_461((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_461((*Global_1835011)[76]->f_1, 1) && !func_461((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_461((*Global_1835011)[40]->f_1, 1) && func_461((*Global_1835011)[41]->f_1, 1)) && !func_461((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_461((*Global_1835011)[62]->f_1, 1) && func_461((*Global_1835011)[63]->f_1, 1)) && !func_461((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_461((*Global_1835011)[65]->f_1, 1) && func_461((*Global_1835011)[66]->f_1, 1)) && !func_461((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_632(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_767(&iParam0);
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (!func_527(0))
	{
		bParam3 = true;
	}
	if (func_624(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_762(0) };
			Var4.f_9 = -1591664384;
			if (!func_663(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_664(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_763(iParam0, 1))
			{
				if (!func_663(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_664(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_768(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_629(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_769(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_636(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_634(int iParam0, int iParam1)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_519(iParam0, 1399091007))
	{
		func_709(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_635(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_770(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_771(&Var0, func_762(0));
	}
	if (!func_772(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_722(iVar14);
	return uVar15;
}

int func_636(bool bParam0)
{
	if (func_208() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_637()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_638(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_639(int iParam0)
{
	if (func_208() != -1)
	{
		return;
	}
	iVar0 = func_773(iParam0);
	fVar1 = func_774(iParam0);
	if ((Global_1347477->f_117 || !func_521(31)) || !func_775(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_776(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_777(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_743(_create_var_string(6, func_778(iParam0), fVar1), "itemtype_textures", func_779(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_640(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_641(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_780(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_781(iParam0))
	{
		return false;
	}
	if (func_782(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_726(iParam0, 1)) || func_783(32768))
	{
		if (!func_726(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_784())
	{
		return false;
	}
	return true;
}

void func_642(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_643(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_645(int iParam0, int iParam1)
{
	if (!func_785(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_646(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_514() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_786(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_787(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_690() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_788(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_690(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_789(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_691() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_790(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_691(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_645(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_647(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_648(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_649(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_650(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_791(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_549(iVar2, 1, 0) || func_793(func_792(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_654(func_791(iVar0))), func_654(func_791(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_690() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_788() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_794(iVar0)), func_794(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_701(iParam3, func_795(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_697(iVar2) - iParam7) >= func_645(iParam3, func_796(iVar0));
				}
				else
				{
					bVar1 = func_697(iVar2) >= func_645(iParam3, func_796(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_697(iVar2) + iParam7) >= func_645(iParam3, func_796(iVar0));
			}
			else
			{
				bVar1 = func_697(iVar2) >= func_645(iParam3, func_796(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_797(iVar2)), func_797(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_798(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_799(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_799(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_691() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_790() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_800(iVar0)), func_800(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_701(iParam3, func_795(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_697(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_801(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_801(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_802(iVar2)), func_802(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_789() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_652(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_111(func_803(0)) && ((func_85(0) == 1 || func_85(0) == 8) || func_85(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_654(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_655(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

bool func_656(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_657(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_658(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_659(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_804(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_805(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_805(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_805(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_806(1);
			break;
		case 34:
			func_807(1);
			break;
		case 35:
			func_808(1);
			break;
		case 36:
			break;
		case 37:
			func_809(0);
			break;
		case 38:
			func_810(0);
			break;
		case 39:
			func_811(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_271()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_509(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_271()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_509(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_271()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_509(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_271()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_509(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_208() == -1)
			{
				if (!func_736(99217379) || func_812(99217379) == 2110595215)
				{
					if (func_309())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_549(iVar0, 1, 0))
					{
						func_573(iVar0, 1, 752097756);
					}
					func_552(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, 752097756);
				}
				if (!func_549(142640135, 1, 0))
				{
					func_573(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, 752097756);
				}
				if (!func_549(-518019409, 1, 0))
				{
					func_573(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_813();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_660(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

bool func_661(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

int func_662(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_663(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_769(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_664(int iParam0, var uParam1, int iParam2)
{
	if (func_814(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_665(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_498(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_636(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_666(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_815(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_766(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_527(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_636(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_667(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_816(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_668(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_91();
	func_817(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_669(int iParam0)
{
	if (func_818(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_670(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_671(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_521(50))
			{
				if (!func_521(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_521(51))
			{
				if (!func_521(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_672()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_673(int iParam0, int iParam1, var uParam2)
{
	if (!func_498(iParam1, 0))
	{
		return false;
	}
	if (func_518(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_208() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_523(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_819(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_519(iParam1, 866047851))
	{
		iVar5 = func_711(iVar4, 1);
		if (func_820(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_523(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_519(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_821(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_822(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_822(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_523(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_519(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_823(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_674()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_675()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_676()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_549(func_824(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_677(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_678(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_549(iVar0, 1, 0) && func_549(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_680(int iParam0, int iParam1)
{
	iVar0 = func_825(iParam0);
	if (iVar0 != -15)
	{
		func_817(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_826(iVar0, 1);
	}
	return false;
}

int func_681(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_549(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_498(iVar25, 0) && func_519(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_682(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_743(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_683(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_827())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_743(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_828(iVar0);
			func_829(iVar0, 0, 0);
		}
		func_743(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_173(func_171(1644987397), iVar1);
	}
}

void func_684(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_688(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_697(iVar9);
	iVar2 = func_697(iVar10);
	iVar3 = func_697(iVar11);
	iVar5 = func_698(iVar9);
	iVar6 = func_698(iVar10);
	iVar7 = func_698(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_697(iVar12);
		iVar8 = func_698(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_689(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_690()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_830(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_691()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_692(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_801(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(iVar0))
		{
			*sParam2++;
		}
		if (func_801(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_801(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(iVar0))
		{
			*sParam2++;
		}
		if (func_801(iVar1))
		{
			*sParam2++;
		}
		if (func_801(iVar0) && func_801(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_801(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(iVar0))
		{
			*sParam2++;
		}
		if (func_801(iVar1))
		{
			*sParam2++;
		}
		if (func_801(iVar2))
		{
			*sParam2++;
		}
		if ((func_801(iVar0) && func_801(iVar1)) && func_801(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_801(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_801(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_801(iVar0))
		{
			*sParam2++;
		}
		if (func_801(iVar1))
		{
			*sParam2++;
		}
		if (func_801(iVar2))
		{
			*sParam2++;
		}
		if (func_801(iVar3))
		{
			*sParam2++;
		}
		if (((func_801(iVar0) && func_801(iVar1)) && func_801(iVar2)) && func_801(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_693(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_831(1497516462);
			func_832(2016141805);
			func_832(1010885152);
			func_832(-502324015);
			break;
		case 2016141805:
			func_832(1497516462);
			func_831(2016141805);
			func_832(1010885152);
			func_832(-502324015);
			break;
		case 1010885152:
			func_832(1497516462);
			func_832(2016141805);
			func_831(1010885152);
			func_832(-502324015);
			break;
		case -502324015:
			func_832(1497516462);
			func_832(2016141805);
			func_832(1010885152);
			func_831(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_832(-538889627);
			func_832(-538880323);
			func_832(-1056767524);
			func_831(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_833();
			func_831(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_834();
			func_831(iParam0);
			break;
		case 2019386373:
			func_832(-664252410);
			func_832(2109952320);
			func_831(2019386373);
			break;
		case -664252410:
			func_832(2019386373);
			func_832(2109952320);
			func_831(-664252410);
			break;
		case 2109952320:
			func_832(2019386373);
			func_832(-664252410);
			func_831(2109952320);
			break;
		case -1674179981:
			func_832(-1835851517);
			func_832(-1838352012);
			func_831(-1674179981);
			break;
		case -1835851517:
			func_832(-1674179981);
			func_832(-1838352012);
			func_831(-1835851517);
			break;
		case -1838352012:
			func_832(-1674179981);
			func_832(-1835851517);
			func_831(-1838352012);
			break;
		case -1717960576:
			func_832(210001842);
			func_831(-1717960576);
			break;
		case 210001842:
			func_832(-1717960576);
			func_831(210001842);
			break;
		case -150493654:
			func_832(-1271608261);
			func_832(1846061697);
			func_832(-1145519186);
			func_831(-150493654);
			break;
		case -1271608261:
			func_832(-150493654);
			func_832(1846061697);
			func_832(-1145519186);
			func_831(-1271608261);
			break;
		case 1846061697:
			func_832(-150493654);
			func_832(-1271608261);
			func_832(-1145519186);
			func_831(1846061697);
			break;
		case -1145519186:
			func_832(-150493654);
			func_832(-1271608261);
			func_832(1846061697);
			func_831(-1145519186);
			break;
		case 1766284049:
			func_832(280705402);
			func_832(1926308480);
			func_831(1766284049);
			break;
		case 280705402:
			func_832(1766284049);
			func_832(1926308480);
			func_831(280705402);
			break;
		case 1926308480:
			func_832(1766284049);
			func_832(280705402);
			func_831(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_832(439465264);
				func_831(1609506757);
			}
			else
			{
				func_832(1609506757);
				func_832(439465264);
			}
			break;
		case 439465264:
			if (func_835(1609506757))
			{
				if (bParam1)
				{
					func_831(439465264);
				}
				else
				{
					func_832(439465264);
				}
			}
			break;
		case 1822001510:
			func_832(-1612662716);
			func_831(1822001510);
			break;
		case -1612662716:
			func_832(1822001510);
			func_831(-1612662716);
			break;
		case 1306158345:
			func_832(1952610440);
			func_832(-223469678);
			func_832(-404698347);
			func_832(1517904467);
			func_831(1306158345);
			break;
		case 1952610440:
			func_832(1306158345);
			func_832(-223469678);
			func_832(-404698347);
			func_832(1517904467);
			func_831(1952610440);
			break;
		case -223469678:
			func_832(1306158345);
			func_832(1952610440);
			func_832(-404698347);
			func_832(1517904467);
			func_831(-223469678);
			break;
		case -404698347:
			func_832(1306158345);
			func_832(1952610440);
			func_832(-223469678);
			func_832(1517904467);
			func_831(-404698347);
			break;
		case 1517904467:
			func_832(1306158345);
			func_832(1952610440);
			func_832(-223469678);
			func_832(-404698347);
			func_831(1517904467);
			break;
		case 1376646519:
			func_832(931649776);
			func_832(-434590080);
			func_832(1743048395);
			func_832(449774763);
			func_831(1376646519);
			break;
		case 931649776:
			func_832(1376646519);
			func_832(-434590080);
			func_832(1743048395);
			func_832(449774763);
			func_831(931649776);
			break;
		case -434590080:
			func_832(1376646519);
			func_832(931649776);
			func_832(1743048395);
			func_832(449774763);
			func_831(-434590080);
			break;
		case 1743048395:
			func_832(1376646519);
			func_832(931649776);
			func_832(-434590080);
			func_832(449774763);
			func_831(1743048395);
			break;
		case 449774763:
			func_832(1376646519);
			func_832(931649776);
			func_832(-434590080);
			func_832(1743048395);
			func_831(449774763);
			break;
		case -1414537028:
			func_832(38162571);
			func_832(1350391819);
			func_832(54073871);
			func_831(-1414537028);
			break;
		case 38162571:
			func_832(-1414537028);
			func_832(1350391819);
			func_832(54073871);
			func_831(38162571);
			break;
		case 1350391819:
			func_832(-1414537028);
			func_832(38162571);
			func_832(54073871);
			func_831(1350391819);
			break;
		case 54073871:
			func_832(-1414537028);
			func_832(38162571);
			func_832(1350391819);
			func_831(54073871);
			break;
		case 198200492:
			func_831(198200492);
			func_832(-1124061431);
			func_832(52706132);
			func_832(-259123672);
			break;
		case -1124061431:
			func_832(198200492);
			func_831(-1124061431);
			func_832(52706132);
			func_832(-259123672);
			break;
		case 52706132:
			func_832(198200492);
			func_832(-1124061431);
			func_831(52706132);
			func_832(-259123672);
			break;
		case -259123672:
			func_832(198200492);
			func_832(-1124061431);
			func_832(52706132);
			func_831(-259123672);
			break;
		case -919512195:
			func_831(-919512195);
			func_832(-1925798111);
			func_832(420709909);
			func_832(1703426636);
			break;
		case -1925798111:
			func_831(-1925798111);
			func_832(-919512195);
			func_832(420709909);
			func_832(1703426636);
			break;
		case 420709909:
			func_831(420709909);
			func_832(-919512195);
			func_832(-1925798111);
			func_832(1703426636);
			break;
		case 1703426636:
			func_831(1703426636);
			func_832(-919512195);
			func_832(-1925798111);
			func_832(420709909);
			break;
		case -1223121209:
			func_831(-1223121209);
			func_832(630808005);
			break;
		case 630808005:
			func_831(630808005);
			func_832(-1223121209);
			break;
		case 1453909576:
			func_831(1453909576);
			func_832(1643531967);
			break;
		case 1643531967:
			func_831(1643531967);
			func_832(1453909576);
			break;
		case 0:
			func_831(0);
			func_832(473295046);
			func_832(-1738165526);
			break;
		case 473295046:
			func_831(473295046);
			func_832(0);
			func_832(-1738165526);
			break;
		case -1738165526:
			func_831(-1738165526);
			func_832(0);
			func_832(473295046);
			break;
		case 932909855:
			func_831(932909855);
			func_832(2051822093);
			break;
		case 2051822093:
			func_831(2051822093);
			func_832(932909855);
			break;
		case 405586984:
			func_831(405586984);
			func_832(1509509592);
			func_832(-959357075);
			func_832(-1311865656);
			break;
		case 1509509592:
			func_831(1509509592);
			func_832(405586984);
			func_832(-959357075);
			func_832(-1311865656);
			break;
		case -959357075:
			func_831(-959357075);
			func_832(1509509592);
			func_832(405586984);
			func_832(-1311865656);
			break;
		case -1311865656:
			func_831(-1311865656);
			func_832(1509509592);
			func_832(-959357075);
			func_832(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_831(-524145696);
			}
			else
			{
				func_832(-524145696);
			}
			func_832(1626481264);
			func_832(282809459);
			break;
		case 282809459:
			func_831(282809459);
			func_832(1626481264);
			func_832(-524145696);
			break;
		case 1626481264:
			func_831(1626481264);
			func_832(-524145696);
			func_832(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_831(885203519);
			}
			else
			{
				func_832(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_831(-1080627546);
			}
			else
			{
				func_832(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_835(iParam0))
				{
					func_831(iParam0);
				}
			}
			else if (func_835(iParam0))
			{
				func_832(iParam0);
			}
			break;
	}
}

void func_694(int iParam0)
{
	if (!func_836(iParam0))
	{
		func_838(func_837(iParam0));
	}
}

int func_695()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_836(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_696(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_697(iVar9);
	iVar2 = func_697(iVar10);
	iVar3 = func_697(iVar11);
	iVar5 = func_698(iVar9);
	iVar6 = func_698(iVar10);
	iVar7 = func_698(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_697(iVar12);
		iVar8 = func_698(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_697(int iParam0)
{
	if (func_549(iParam0, 1, 0))
	{
		iVar0 = func_502(iParam0, 0, 0);
	}
	return iVar0;
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_699(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_700(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_701(int iParam0, int iParam1)
{
	if (!func_785(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_702(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_701(iParam1, 5) || iParam0 == func_701(iParam1, 6)) || iParam0 == func_701(iParam1, 7)) || iParam0 == func_701(iParam1, 8)) || iParam0 == func_701(iParam1, 9))
	{
		func_692(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_515(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_517(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_703(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_701(iParam1, 5) || iParam0 == func_701(iParam1, 6)) || iParam0 == func_701(iParam1, 7)) || iParam0 == func_701(iParam1, 8)) || iParam0 == func_701(iParam1, 9))
	{
		if (func_692(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_515(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_515(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_704()
{
	if (func_209((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

bool func_705(int iParam0, int iParam1)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_634(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_720("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_721(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_618(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_722(iVar1);
				return true;
			}
			iVar3++;
		}
		func_722(iVar1);
	}
	return false;
}

void func_706(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_707(int iParam0)
{
	if (!func_839(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_708(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_709(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

int func_710(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_840(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_711(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_712(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_841();
	if (iParam2 == 39)
	{
		Var0 = { func_628(iParam0, 1, 0) };
		iParam2 = func_711(func_710(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_519(iParam0, 866047851) && func_820(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_715(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_842(func_840(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_843(iParam2);
	func_844(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_845(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_845(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_846(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_847(iParam0, iParam2, iParam1, func_208() != -1);
	if (bParam4)
	{
		func_848(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_848(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_849(func_840(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_713(bool bParam0, bool bParam1, bool bParam2)
{
	func_850(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_714(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_851(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_852(Var0);
}

bool func_715(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_716()
{
	func_853(&(Global_1946804->f_2776));
	func_854(32768);
	func_849(1108822547, 8, 6);
}

int func_717(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_711(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_718(int iParam0)
{
	if (func_855(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_856(Var0);
}

void func_719(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_856(Var0);
}

bool func_720(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_636(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_721(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_722(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_723()
{
	if (func_857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_858(2);
	}
	if (Global_1347477->f_119)
	{
		return func_858(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_859();
	fVar2 = func_860();
	fVar3 = func_861();
	fVar4 = func_862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_863()));
	fVar7 = (func_858(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_864(3, round((to_float(iVar8) * fVar10)), 0);
	func_865(3, fVar9, fVar9 > 100f);
	return func_866(fVar7, -100f, 100f);
}

float func_724()
{
	if (func_857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_858(1);
	}
	if (Global_1347477->f_119)
	{
		return func_858(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_859();
	fVar2 = func_860();
	fVar3 = func_861();
	fVar4 = func_862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_863()));
	fVar7 = (func_858(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_864(2, round((to_float(iVar8) * fVar10)), 0);
	func_865(2, fVar9, fVar9 > 100f);
	return func_866(fVar7, -100f, 100f);
}

float func_725()
{
	if (func_857())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_858(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_867())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_868())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_858(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_859();
	fVar2 = func_860();
	fVar3 = func_861();
	fVar4 = func_862();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_863()));
	fVar7 = (func_858(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_864(1, round((to_float(iVar8) * fVar10)), 0);
	func_865(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_858(0);
	}
	return func_866(fVar7, -100f, 100f);
}

bool func_726(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_727(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_728(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_498(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return 0;
	}
	if (func_632(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_636(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_729(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_869();
			}
			break;
	}
	return 0;
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_731(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_732(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_731(iParam0))
	{
		return;
	}
	if (func_870(iParam0))
	{
		return;
	}
	if (!func_871(iParam0))
	{
		func_872(iParam0, 1, 0);
	}
	iVar0 = func_873(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_874(iParam0, 512))
		{
			func_714(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_875() && !bParam1) && !func_876(0, 0, 1))
	{
		func_877(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_878(iParam0, 6);
	if (bParam2)
	{
		if (!func_876(0, 0, 1))
		{
			func_126(1, 4);
		}
	}
}

int func_733()
{
	return Global_1946804->f_1;
}

bool func_734(int iParam0, bool bParam1)
{
	return func_729(iParam0, 0) < func_879(iParam0, bParam1);
}

bool func_735(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_523(iVar1) == iParam0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_736(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_711(iParam0, 1)] != &Global_1946804->f_57[func_711(iParam0, 1)];
}

void func_737(int iParam0, int iParam1)
{
	if (func_519(iParam1, 130796156))
	{
		func_880(iParam1, 0);
	}
	else if (func_519(iParam1, 930141731))
	{
		func_880(iParam1, 1);
		func_881(iParam0);
	}
}

void func_738(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_739(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_882(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_883(uParam2, iParam0, Var1);
	return 1;
}

int func_740(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_741(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_742(int iParam0)
{
	if (!func_884(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_743(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_885(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_744()
{
	return !&Global_1911774;
}

void func_745(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = iParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_746(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_747(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_748(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_749(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_750(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_751(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_749(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_752(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_753(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_623(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_754(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

bool func_756(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_208() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_757(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (is_entity_dead(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _0x32a1e3b83d501096(iParam0);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_886(iVar2) != 0 && _0x800df3fc913355f3(func_887(iVar2)))
		{
			if (func_887(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_758(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	if (!_does_anim_scene_exist(*uParam0))
	{
		return true;
	}
	if (!_0xa9016536015de29d(*uParam0, sParam1))
	{
		return true;
	}
	if (!_0x23e33cb9f4a3f547(*uParam0, sParam1))
	{
		return true;
	}
	if (_0x23e33cb9f4a3f547(*uParam0, sParam1) || _0x0df57f86fe71dbe5(*uParam0, sParam1))
	{
		_0xae6ada8fe7e84acc(*uParam0, sParam1);
	}
	return false;
}

float func_759(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

int func_760(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> func_761(bool bParam0)
{
	return func_665(1328661203, func_888(), -1591664384, bParam0);
}

struct<4> func_762(bool bParam0)
{
	iVar0 = func_636(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_665(923904168, func_761(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_665(923904168, func_761(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_665(923904168, func_761(bParam0), -740156546, 0);
}

bool func_763(int iParam0, bool bParam1)
{
	if (func_523(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_521(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_764(bool bParam0)
{
	iVar0 = func_636(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_665(271701509, func_761(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_665(271701509, func_761(bParam0), 12999093, 0);
}

bool func_765(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_523(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_766(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_636(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_767(int iParam0)
{
	if (!func_498(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_768(int iParam0, var uParam1, bool bParam2)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_628(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_662((386 + iVar29), 1);
		if (func_663(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_664(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_769(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_665(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_636(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_770(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_771(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_772(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_636(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_773(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_774(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_889(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_889(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_889(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_775(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_521(18);
		case 2:
			return func_521(20);
		case 1:
			return func_521(19);
		default:
			break;
	}
	return true;
}

int func_776(int iParam0)
{
	return func_890(&(Global_40.f_11095.f_11[iParam0]));
}

void func_777(int iParam0, float fParam1, bool bParam2)
{
	if (func_208() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_521(31))
	{
		return;
	}
	iVar0 = func_776(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_776(iParam0);
	if (func_891(iParam0) && func_892(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_893(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_894(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_509(func_895(iParam0), 0);
					}
					func_896(iParam0, iVar2, iVar3);
					func_897(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_778(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

bool func_780(int iParam0, int iParam1)
{
	if (func_208() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_781(int iParam0)
{
	if (func_208() != -1)
	{
		if (func_726(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_726(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_782(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_726(iParam0, 65536) && !func_726(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_726(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_726(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_783(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_784()
{
	return Global_1905944->f_5694;
}

bool func_785(int iParam0, var uParam1)
{
	if (!func_898(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_786()
{
	return func_899(Global_40.f_12019);
}

int func_787()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_644(iVar1);
		if (func_549(iVar2, 1, 0) || func_793(func_792(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_788()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_900(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_789()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_798(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_790()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_793(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_794(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_797(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_798(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_799(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_800(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_801(int iParam0)
{
	if (func_901(iParam0) && func_549(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_902(iParam0) && func_903(iParam0))
	{
		return true;
	}
	return false;
}

char* func_802(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_567(iParam0));
}

int func_803(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_804(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_805(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_806(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_807(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_808(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_809(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_810(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_811(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_812(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_711(iParam0, 1)]);
}

void func_813()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_904();
		_unlock_set_unlocked(-1526891582, true);
		func_526(-916314281);
		func_573(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_526(494733111);
		func_573(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_814(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_636(0);
	*uParam1 = { func_665(iParam0, func_762(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_815(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_816(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_905(*iParam0);
	iVar1 = func_906(*iParam0);
	iVar2 = func_907(*iParam0);
	iVar3 = func_131(*iParam0);
	iVar4 = func_908(*iParam0);
	iVar5 = func_909(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_910(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_910(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_911(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_818(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_819(int iParam0)
{
	Var0 = { func_628(iParam0, 1, 0) };
	return func_710(Var0.f_4);
}

int func_820(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_519(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_821(int iParam0, var uParam1)
{
	iVar1 = func_711(func_912(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_523(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_822(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_711(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_715(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_823(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	return func_913(iParam0, -1);
}

bool func_826(int iParam0, bool bParam1)
{
	return func_914(func_91(), iParam0, bParam1);
}

bool func_827()
{
	if (func_672())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_828(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_915((Global_40.f_4283.f_325 + iParam0));
}

void func_829(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_827())
	{
		func_743(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_743(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_830(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_831(int iParam0)
{
	iVar0 = func_916(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		set_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			set_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			set_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
		set_bit(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_832(int iParam0)
{
	iVar0 = func_916(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		clear_bit(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = network_player_id_to_int();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			clear_bit(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			clear_bit((*Global_1055058)[iVar3]->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_833()
{
	func_832(-939420910);
	func_832(-1187950766);
	func_832(356365161);
	func_832(753127042);
	func_832(-2038424081);
	func_832(1884271742);
	func_832(459290420);
}

void func_834()
{
	func_832(704802028);
	func_832(588987611);
	func_832(2008888900);
	func_832(1649996811);
	func_832(227918160);
	func_832(168171957);
	func_832(1193080109);
	func_832(-491981251);
	func_832(-639037538);
	func_832(-618620429);
}

bool func_835(int iParam0)
{
	iVar0 = func_916(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_836(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_837(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_838(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_839(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_840(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_841()
{
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		iVar0++;
	}
}

void func_842(int iParam0)
{
	func_849(iParam0, 8, 6);
}

void func_843(int iParam0)
{
	func_917(&(Global_1946804->f_2589), iParam0);
}

void func_844(int iParam0, int iParam1)
{
	func_918(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_845(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_846(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_523(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_919(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_844(iVar1, iVar3);
		}
	}
	if (func_736(-1586649372) && func_919(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_844(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
			}
			func_920(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_920(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_920(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_920(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_920(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_920(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_523(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_823(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_523(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_519(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_823(&(Global_1946804->f_1497.f_1[iVar1])) || func_519(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_844(iVar1, iVar3);
					}
				}
			}
			switch (func_523(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_523(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_523(&(uParam0->f_1[iVar1])) || func_519(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_844(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_847(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_921(0);
	if (iParam2 != 0 && func_922(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_923(iParam0, func_840(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_848(var uParam0, bool bParam1, int iParam2)
{
	bVar6 = func_208() != -1;
	iVar7 = func_921(0);
	if (func_715(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_840(iVar0, 1);
			if (func_924(iVar5, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
			{
			}
			else if (func_924(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
			{
			}
			else
			{
				iVar4 = func_822(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_925(uParam0);
				if (iVar3 > 0)
				{
					if (!func_715(524288))
					{
						func_851(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_840(iVar0, 1);
							if (func_924(iVar5, 8))
							{
							}
							else if (&Global_1946804->f_57[iVar0]->f_2[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
							{
							}
							else if (func_924(iVar5, 6) || &uParam0->f_1[iVar0] == &Global_1946804->f_57[iVar0])
							{
							}
							else
							{
								iVar4 = func_822(&(uParam0->f_1[iVar0]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0] = &Global_1946804->f_57[iVar0];
									uParam0->f_1[iVar0]->f_1 = 0;
									if (bParam1)
									{
										func_844(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_854(524288);
				}
			}
		}
	}
}

void func_849(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_711(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_711(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_711(iParam0, 1)])->f_10 && iParam1));
}

void func_850(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_926(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (func_208() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_927(2, Global_26796.f_776)) || Global_1946804->f_1497 != func_873(0))
		{
			if (Global_40.f_7157[Global_40.f_7729] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729] = (&Global_40.f_7157[Global_40.f_7729] - Global_40.f_7157[Global_40.f_7729] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729] |= 4096;
				Global_1946804->f_1497 = func_873(Global_40.f_7729);
				Global_1946804->f_1378 = func_873(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_928(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_929(0, 1);
	}
}

void func_851(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_852(struct<4> Param0)
{
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_930(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_931(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_851(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_930(Param0))
			{
				return;
			}
			func_931(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_851(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_719(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_853(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		_0x13e7320c762f0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_854(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

bool func_855(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_856(struct<4> Param0)
{
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_930(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1] == Param0 && Global_1946804->f_769[iVar1]->f_2 == Param0.f_2) && Global_1946804->f_769[iVar1]->f_3 == Param0.f_3) && Global_1946804->f_769[iVar1]->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1] == 34 && func_930(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_931(Param0);
	*Global_1946804->f_769[Global_1946804->f_854] = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_851(8);
}

bool func_857()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_858(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_859()
{
	fVar0 = func_932(13);
	iVar1 = func_933(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_860()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_861()
{
	if (func_672())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_862()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_863()
{
	return Global_1955565->f_3;
}

void func_864(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_934(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_865(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_934(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

float func_866(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_867()
{
	return func_932(12) <= -99f;
}

bool func_868()
{
	return func_932(12) >= 99f;
}

int func_869()
{
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_523(iVar1) == -999503751)
		{
			if (func_935() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_870(int iParam0)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	if (func_874(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	if (func_874(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_872(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_731(iParam0))
	{
		return;
	}
	if (!func_871(iParam0))
	{
		func_878(iParam0, 2);
		if (bParam2)
		{
			if (!func_876(0, 0, 1))
			{
				func_126(1, 4);
			}
		}
		if ((!func_875() && !bParam1) && !func_876(0, 0, 1))
		{
			func_877(_create_var_string(10, "OUT_JOURN_ADD", func_936(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_873(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

bool func_874(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0] && iParam1) != 0;
}

bool func_875()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_876(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_937())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_938(&(Global_1898164->f_1[0]));
		if (func_643(iVar0) && func_939((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_111(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

var func_877(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_878(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0] = (Global_40.f_7157[iParam0] || iParam1);
}

int func_879(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_880(int iParam0, bool bParam1)
{
	iVar0 = func_940(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_522(50);
			}
			else
			{
				func_522(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_522(51);
			}
			else
			{
				func_522(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_941(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
			}
			break;
		case 3:
			func_522(24);
			if (bParam1)
			{
				if (!func_941(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			break;
	}
}

void func_881(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_942(0))
			{
				iVar0++;
			}
			if (func_942(2))
			{
				iVar0++;
			}
			if (func_942(4))
			{
				iVar0++;
			}
			if (!func_943(16))
			{
				if (iVar0 == 1)
				{
					func_944();
					func_509(456, 1);
					func_945(16);
				}
			}
			if (!func_943(32))
			{
				if (iVar0 >= 3)
				{
					func_944();
					func_509(456, 1);
					func_945(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_942(1))
			{
				iVar0++;
			}
			if (func_942(3))
			{
				iVar0++;
			}
			if (func_942(7))
			{
				iVar0++;
			}
			if (!func_943(1))
			{
				if (iVar0 == 1)
				{
					func_946();
					func_509(457, 1);
					func_945(1);
				}
			}
			if (!func_943(2))
			{
				if (iVar0 >= 3)
				{
					func_946();
					func_509(457, 1);
					func_945(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_942(5))
			{
				iVar0++;
			}
			if (func_942(6))
			{
				iVar0++;
			}
			if (func_942(8))
			{
				iVar0++;
			}
			if (!func_943(4))
			{
				if (iVar0 == 1)
				{
					func_947();
					func_509(455, 1);
					func_945(4);
				}
			}
			if (!func_943(8))
			{
				if (iVar0 >= 3)
				{
					func_947();
					func_509(455, 1);
					func_945(8);
				}
			}
			break;
	}
}

void func_882(var uParam0)
{
	func_738(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_738(uParam0, 617531372);
	}
	else
	{
		func_738(uParam0, 291123060);
	}
}

void func_883(var uParam0, int iParam1, struct<14> Param2)
{
	if (!func_948(uParam0))
	{
		return;
	}
	if (&Global_1224866 < 20)
	{
		Global_1224866 = &Global_1224866 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1224866->f_1[iVar0] = { *(Global_1224866->f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224866->f_1[(&Global_1224866 - 1)]) = { Var1 };
}

bool func_884(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @230; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_885(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_886(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

int func_887(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

struct<4> func_888()
{
	return Var0;
}

float func_889(int iParam0)
{
	iVar4 = func_773(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_890(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_950(iVar6) - func_950(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_890(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_892(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_893(float fParam0, float fParam1)
{
	iVar0 = func_890(fParam0);
	fVar1 = to_float(func_950(iVar0));
	fVar2 = to_float(func_950(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = floor((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = floor((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_894(int iParam0)
{
	if (func_951(iParam0, &iVar0))
	{
		return func_950(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_952())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_952())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_952())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_896(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = _create_var_string(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_953(iParam0));
	sVar4 = func_955(func_954(iVar3, iParam2));
	sVar6 = func_956(iParam0);
	if (!is_string_null_or_empty(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = _create_var_string(10, sVar0, func_957(iParam0));
	iVar8 = func_958(iParam0);
	iVar9 = get_hash_key(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_959(iParam0);
		_uilog_post_notification(&Var10);
	}
	func_653(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_960(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_897(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0] = (get_game_timer() + iParam1);
}

bool func_898(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_899(int iParam0)
{
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_900(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_901(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return true;
		case -1969404854:
			return true;
		case 1761263432:
			return true;
		case -843795569:
			return true;
		case -832850511:
			return true;
		case -1464585113:
			return true;
		case -1290897778:
			return true;
		case -100913452:
			return true;
		case 313332607:
			return true;
		case -124539232:
			return true;
		case 59384454:
			return true;
		case 905173572:
			return true;
		case 1432949803:
			return true;
		case -983831788:
			return true;
		case -1882344824:
			return true;
		default:
			break;
	}
	return false;
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case -1866642239:
			return 1;
		case -935543049:
			return 1;
		case 102446365:
			return 1;
		case 924882045:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_903(int iParam0)
{
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_961(&iVar0, 0, iVar95, &Var1) && !func_961(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (is_model_a_ped(Var1))
		{
			func_962(iVar0, &Var1);
			if (func_498(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_904()
{
	if (!_0x7c7e4ab748ea3b07())
	{
		return;
	}
	uVar0 = 29;
	func_963(Global_35, &uVar0);
	Var30 = { func_761(0) };
	_0xe36d4a38d28d9cfb(0);
	_0xc04f47d488ef9eba(5, 1, &Var30, 0);
	_0x5d6182f3bce1333b(5, -142743235);
	func_964(0);
	func_965(7);
	func_966(-1623728698, 1, 1, 0);
	if (func_733() == 1160113249)
	{
		func_966(-763730846, 1, 1, 1);
		func_966(-361635024, 1, 1, 1);
	}
	func_967(Global_35, &uVar0);
}

int func_905(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_622(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_906(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_907(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_908(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_909(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_910(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_911(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_968(iParam0, iParam6);
	func_969(iParam0, iParam5);
	func_970(iParam0, iParam4);
	func_971(iParam0, iParam3);
	func_972(iParam0, iParam2);
	func_973(iParam0, iParam1);
}

int func_912(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_710(iVar0);
}

int func_913(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = func_636(0);
	}
	if (!_0x112bca290d2eb53c(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_968(&uVar6, iVar0);
	func_969(&uVar6, iVar1);
	func_970(&uVar6, iVar2);
	func_971(&uVar6, iVar3);
	func_972(&uVar6, iVar4);
	func_973(&uVar6, iVar5);
	return uVar6;
}

bool func_914(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_974(iParam1) || !func_974(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_915(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_171(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_916(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_917(var uParam0, int iParam1)
{
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_975(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_975(uParam0->f_2[iVar0], 1))
				{
					func_976(uParam0->f_2[iVar0], 2, 6);
				}
				*Var4[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Var4[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_918(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_977(uParam0, 1))
	{
		func_978(uParam0, 1);
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

bool func_919(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_920(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3]->f_1 == 1216705912 || uParam0->f_1[iVar3]->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
		{
			uParam0->f_1[iVar3]->f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3]->f_1 = -1539589426;
			uParam0->f_1[iVar1]->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_844(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_844(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2]->f_1 == -1333118809 || uParam0->f_1[iVar2]->f_1 == -1158926300)
	{
		uParam0->f_1[iVar2]->f_1 = 1155669136;
		if (bParam3)
		{
			func_844(iVar2, iVar0);
		}
	}
}

int func_921(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_922(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, bParam3))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_923(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

bool func_924(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_711(iParam0, 1)])->f_10 && iParam1) != 0;
}

int func_925(var uParam0)
{
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0] != &Global_1946804->f_57[iVar0])
	{
		iVar1++;
	}
	return iVar1;
}

void func_926(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1946804->f_1497.f_1[iParam0] = { *Global_1946804->f_1378.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_208() == -1)
	{
		func_979(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_26796.f_776);
	}
	else
	{
		func_980(Global_1946804->f_1497.f_1[iParam0], iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_927(int iParam0, int iParam1)
{
	if (func_208() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_928(int iParam0, bool bParam1, int iParam2)
{
	func_981(&(Global_1946804->f_1378), iParam0);
	func_982(2, iParam0, 6);
	if (bParam1)
	{
		func_929(0, 1);
	}
}

void func_929(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_983(0);
	}
	if (bParam0)
	{
		func_851(8);
		func_851(512);
	}
	else
	{
		func_851(8);
		func_851(16);
	}
}

bool func_930(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_931(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

float func_932(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_933(float fParam0)
{
	return round(((fParam0 / 100f) * to_float(10)));
}

char* func_934(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_746(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_746(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_935()
{
	return Global_1946804->f_1497;
}

char* func_936(int iParam0)
{
	iVar0 = func_873(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_802(iVar0);
}

bool func_937()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_938(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_984(func_227(iParam0));
}

bool func_939(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_940(int iParam0)
{
	if (func_985(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_986(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_987(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_988(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_941(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_549(func_989(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_942(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_549(func_990(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_943(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_944()
{
	if (func_208() != -1)
	{
		return;
	}
	func_573(1654063339, 1, 752097756);
	iVar0 = func_776(1);
	func_896(1, iVar0, 0);
}

void func_945(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_946()
{
	if (func_208() != -1)
	{
		return;
	}
	func_573(1623931083, 1, 752097756);
	iVar0 = func_776(2);
	func_896(2, iVar0, 0);
}

void func_947()
{
	if (func_208() != -1)
	{
		return;
	}
	func_573(-1845241476, 1, 752097756);
	iVar0 = func_776(0);
	func_896(0, iVar0, 0);
}

bool func_948(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_949(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_950(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_951(int iParam0, int iParam1)
{
	return false;
}

bool func_952()
{
	return false;
}

int func_953(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _0xe787f05dfc977bde(func_636(0), -1845241476, 0);
		case 1:
			return _0xe787f05dfc977bde(func_636(0), 1654063339, 0);
		case 2:
			return _0xe787f05dfc977bde(func_636(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_954(int iParam0, int iParam1)
{
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_955(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_956(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_957(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_958(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		case 0:
			return 1874233471;
		case 2:
			return -1285232277;
		default:
			break;
	}
	return 0;
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_960(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_961(int iParam0, int iParam1, int iParam2, var uParam3)
{
	if (func_991(iParam1) && !func_992(iParam1))
	{
		iVar0 = func_993(iParam1);
	}
	else
	{
		return false;
	}
	func_994(uParam3);
	iVar5 = func_995(iParam2);
	if (!_0x608bc6a6aacd5036(&Var1, iVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (is_entity_a_mission_entity(*iParam0) && !_0x88ad6cc10d8d35b2(*iParam0))
	{
		return false;
	}
	*uParam3 = get_entity_model(*iParam0);
	uParam3->f_2 = _0xd21c7418c590bb40(*iParam0);
	uParam3->f_3 = _get_entity_carry_config(*iParam0);
	return true;
}

void func_962(int iParam0, int iParam1)
{
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (does_entity_exist(iVar0))
	{
		func_996(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_997(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_963(int iParam0, int* iParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	uVar0 = 29;
	_copy_memory(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		get_current_ped_weapon(Global_35, &iVar31, false, iVar30, true);
		if (func_618(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_964(bool bParam0)
{
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_498(iVar1, 0))
		{
			func_998(iVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_965(int iParam0)
{
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_208() == -1)
	{
		func_999(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26796.f_20;
		Global_1946804->f_2657.f_21 = Global_26796.f_21;
		Global_1946804->f_2657.f_22 = Global_26796.f_22;
		Global_1946804->f_2657.f_23 = Global_26796.f_23;
		Global_1946804->f_2657.f_24 = Global_26796.f_24;
		Global_1946804->f_2657.f_25 = Global_26796.f_25;
		Global_1946804->f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar2 = &Global_1946804->f_2657[iVar0];
		if (func_523(iVar2) != -999503751)
		{
			func_1000(&(Global_1946804->f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1001(iVar2, 0))
		{
			func_1002(iVar2, &Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_966(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1003(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1004(iParam0, &(Global_1946804->f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1005(0))
	{
		func_1006(iParam0, 1);
		if (func_733() == 1160113249)
		{
			func_1006(func_1005(-2125499975), 0);
		}
		else
		{
			func_1006(func_1005(1160113249), 0);
		}
	}
	func_1007();
	if (func_1008(iVar0))
	{
		_0x766315a564594401(func_636(0), iParam0, 0);
	}
	func_1002(iParam0, bParam3);
	if (bParam2)
	{
		func_929(0, 0);
	}
}

void func_967(int iParam0, var uParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (uParam1[iVar0] != 0)
		{
			if (!has_ped_got_weapon(Global_35, uParam1[iVar0], 0, false))
			{
				if (func_661(uParam1[iVar0]))
				{
					_give_weapon_to_ped_2(iParam0, uParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			get_current_ped_weapon(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != uParam1[iVar0])
			{
				set_current_ped_weapon(Global_35, uParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

void func_968(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_969(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_970(int iParam0, int iParam1)
{
	iVar0 = func_906(*iParam0);
	iVar1 = func_905(*iParam0);
	if (iParam1 < 1 || iParam1 > func_910(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_971(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_972(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_973(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

bool func_974(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_909(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_908(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_131(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_905(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_906(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_907(iParam0);
	if (iVar5 < 1 || iVar5 > func_910(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_975(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_976(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_977(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_978(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_979(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_980(var uParam0, int iParam1, int iParam2)
{
	*Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_36638.f_45.f_350.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_981(var uParam0, int iParam1)
{
	if (func_208() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1]->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_979(uParam0->f_1[iVar0], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_980(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_982(int iParam0, int iParam1, int iParam2)
{
	if (func_208() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1] = (Global_26796.f_26[iParam1] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1] = (Global_36638.f_45.f_350.f_26[iParam1] || iParam0);
	}
}

void func_983(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_984(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_985(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_986(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_987(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_988(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_989(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1009(iParam0);
		case 1:
			return func_1010(iParam0);
		case 2:
			return func_1011(iParam0);
		case 3:
			return func_1012(iParam0);
	}
	return 0;
}

int func_990(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1013(iParam0);
		case 1:
			return func_1014(iParam0);
		case 2:
			return func_1015(iParam0);
		case 3:
			return func_1016(iParam0);
		case 4:
			return func_1017(iParam0);
		case 5:
			return func_1018(iParam0);
		case 6:
			return func_1019(iParam0);
		case 7:
			return func_1020(iParam0);
		case 8:
			return func_1021(iParam0);
	}
	return 0;
}

bool func_991(int iParam0)
{
	iParam0 = func_1022(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_992(int iParam0)
{
	iParam0 = func_1022(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_991(iParam0))
	{
		return false;
	}
	iVar0 = func_993(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

int func_993(int iParam0)
{
	iParam0 = func_1022(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

void func_994(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

void func_996(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = _get_ped_damage(iParam0);
	*uParam2 = _0xf8b48a361dc388ae(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = _get_ped_quality(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_997(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = _0x9e7738b291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

void func_998(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_523(iParam0))
	{
		case -2061583405:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1023(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1007();
	}
	if (bParam1)
	{
		func_929(0, 0);
	}
}

void func_999(int iParam0)
{
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_770(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_772(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_722(iVar0);
	}
}

void func_1000(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1024(iParam2, *uParam0);
	func_1025(uParam0->f_1[*uParam0], iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1001(int iParam0, int iParam1)
{
	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_769(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	_0x9a113c660aea3832(func_636(0), &Var5, iParam1);
	return true;
}

void func_1002(int iParam0, bool bParam1)
{
	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_769(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_636(0), &Var5, bParam1);
}

bool func_1003(int iParam0)
{
	if (func_208() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return false;
			}
		}
	}
	return true;
}

int func_1004(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar1 = iParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1026(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1001(iParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_523(iParam0) != -999503751)
	{
		func_1000(&(Global_1946804->f_2657.f_26.f_26), iParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1005(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

int func_1006(int iParam0, int iParam1)
{
	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_769(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	_0x0349404a22736740(iParam1, func_636(0), &Var5);
	return 1;
}

void func_1007()
{
	if (func_208() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_1008(int iParam0)
{
	return func_1028(func_1027(iParam0));
}

int func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return 1877538667;
		case 2:
			return -747118240;
		case 3:
			return 356885366;
		case 4:
			return -733784435;
		case 5:
			return -2010021430;
		case 6:
			return -1563051210;
		case 7:
			return 1532314048;
		case 8:
			return -1378972544;
		default:
			break;
	}
	return 0;
}

int func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		case 1:
			return 1289620458;
		case 2:
			return 351104126;
		case 3:
			return -991258198;
		case 4:
			return -446539844;
		case 5:
			return 2146082234;
		case 6:
			return 330185476;
		case 7:
			return -1208917184;
		case 8:
			return -12904227;
		default:
			break;
	}
	return 0;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		case 1:
			return 1398329674;
		case 2:
			return -35737408;
		case 3:
			return 651323163;
		case 4:
			return 343794650;
		case 5:
			return 2072880089;
		case 6:
			return -2120749726;
		case 7:
			return -1749072364;
		case 8:
			return -583780175;
		default:
			break;
	}
	return 0;
}

int func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		case 1:
			return -567070698;
		case 2:
			return 797308288;
		case 3:
			return -1669506545;
		case 4:
			return -1011624341;
		case 5:
			return 516134254;
		case 6:
			return -940514956;
		case 7:
			return 2030473481;
		case 8:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1013(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		case 1:
			return -77597297;
		case 2:
			return 624387589;
		case 3:
			return 1066104444;
		default:
			break;
	}
	return 0;
}

int func_1014(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		case 1:
			return 1289620458;
		case 2:
			return 1398329674;
		case 3:
			return -567070698;
		default:
			break;
	}
	return 0;
}

int func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		case 1:
			return 351104126;
		case 2:
			return -35737408;
		case 3:
			return 797308288;
		default:
			break;
	}
	return 0;
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		case 1:
			return -991258198;
		case 2:
			return 651323163;
		case 3:
			return -1669506545;
		default:
			break;
	}
	return 0;
}

int func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		case 1:
			return -446539844;
		case 2:
			return 343794650;
		case 3:
			return -1011624341;
		default:
			break;
	}
	return 0;
}

int func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		case 1:
			return 2146082234;
		case 2:
			return 2072880089;
		case 3:
			return 516134254;
		default:
			break;
	}
	return 0;
}

int func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		case 1:
			return 330185476;
		case 2:
			return -2120749726;
		case 3:
			return -940514956;
		default:
			break;
	}
	return 0;
}

int func_1020(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		case 1:
			return -1208917184;
		case 2:
			return -1749072364;
		case 3:
			return 2030473481;
		default:
			break;
	}
	return 0;
}

int func_1021(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		case 1:
			return -12904227;
		case 2:
			return -583780175;
		case 3:
			return 2084389834;
		default:
			break;
	}
	return 0;
}

int func_1022(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1023(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1026(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_523(iParam0) != -999503751)
		{
			func_1029(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_523(iParam0) != -999503751)
	{
		func_1029(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1001(iParam0, 1);
	return 1;
}

void func_1024(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1025(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (_0x93ffd92f05ec32fd(uParam0->f_3.f_1))
	{
		func_1030(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_711(func_819(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_1031(uParam0);
	}
}

bool func_1026(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

bool func_1028(int iParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1029(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1032(iParam1);
	func_1033(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1034(&(uParam0->f_26), iVar1);
		if (func_1035(uParam0->f_26, &iVar0))
		{
			func_1036(iVar0, iVar1);
		}
	}
}

void func_1030(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1037(&(uParam0->f_3));
}

void func_1031(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1038(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1032(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_1033(int iParam0, int iParam1)
{
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1034(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1030(uParam0->f_1[iParam1]);
	*uParam0->f_1[iParam1] = { *uParam0->f_1[*uParam0] };
}

bool func_1035(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1036(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1037(var uParam0)
{
	if (*uParam0 && _0x93ffd92f05ec32fd(uParam0->f_1))
	{
		_0x13e7320c762f0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1038(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_1039(func_733());
	if (*uParam0)
	{
		func_1037(uParam0);
	}
	uParam0->f_1 = _0xf6d9e1f3560cbf8e(iVar0, uParam1, 0, func_208() != -1, uParam2);
	*uParam0 = 1;
}

int func_1039(int iParam0)
{
	if (func_208() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		case 24043185:
			return 1;
		default:
			break;
	}
	return 0;
}

