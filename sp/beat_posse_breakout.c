void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_976 = 950615196;
	iLocal_977 = 1996775727;
	iLocal_978 = -2118813809;
	sLocal_1000 = "";
	fLocal_1010 = 0f;
	sLocal_1117 = "PB";
	fLocal_1142 = 10f;
	fLocal_1144 = 5f;
	fLocal_1149 = 3f;
	if (has_force_cleanup_occurred(523))
	{
		iLocal_1126 = 1;
	}
	if (!bVar1124)
	{
		Local_85.f_3 = func_1(&vScriptParam_0);
		Local_85.f_161 = func_2(vScriptParam_0.z, 2);
		func_3(&Local_85, 1);
		func_4();
		func_5(&(Local_85.f_5), 1);
		func_6(&(Local_85.f_5), 1);
		func_7(&(Local_85.f_5), 0);
		func_8(&(Local_85.f_5), 1);
		iLocal_548 = 2;
		iLocal_547 = 3;
	}
	while (true)
	{
		func_10(bVar1124, 1401, 0);
		if (bVar1124)
		{
			wait(0);
		}
		else
		{
			switch (iVar1120)
			{
				case 0:
					if (func_11())
					{
						iLocal_1122 = 1;
					}
					break;
				case 1:
					if (func_12(&Local_85, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_85, &uLocal_1284, &uLocal_1283);
						func_14();
						if (func_15(vLocal_1001, 30f) || func_16(vLocal_1001, 1) < 200f)
						{
							func_9();
						}
						else
						{
							func_17(vLocal_1001, 15f, 1, 0, 0, 0, 0);
							func_18(vLocal_1001, 30f);
							stop_fire_in_range(vLocal_1001, 15f);
							iLocal_1122 = 3;
						}
					}
					else if (Local_85.f_160)
					{
						func_9();
					}
					break;
				case 3:
					if ((func_19(iLocal_1041[4], iLocal_1041[6]) && func_20(iLocal_1041[5], iLocal_1041[7])) && func_21())
					{
						if (func_22())
						{
							func_23();
							func_24();
							func_25();
							set_ped_relationship_group_hash(&(iLocal_1041[7]), iVar1220);
							func_26(&uLocal_1172, &(iLocal_1041[7]), vLocal_1014, uVar1015, vLocal_1011);
							vLocal_1153 = { vLocal_1001 + Vector(-0.35f, -1.06f, 3.42f) };
							vLocal_1150 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -3.51f, 0.06f, 0.25f) };
							iLocal_1176 = add_cover_point(vLocal_1150, (fVar1008 + 112.1678f), 1, 0, 0, false);
							func_27(&uLocal_1168, vLocal_1001, 0f, 0f, 0f, 15f, 15f, 15f, "m_volHerbRemove");
							func_28(iVar1166, 1);
							func_29();
							iLocal_1122 = 4;
						}
					}
					else
					{
						if (!func_30(&uLocal_1217))
						{
							func_31(&uLocal_1217);
						}
						else if (func_32(&uLocal_1217) > 15f)
						{
							func_9();
						}
						if (func_33(&Local_85, &iLocal_1041, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_9();
						}
					}
					break;
				case 4:
					if (!func_34(&Local_85, &iLocal_1041, 0, 0, 1, 0, 1, 0))
					{
						func_9();
					}
					func_35(&iLocal_536, iLocal_1050[5], 0);
					if (!Local_85.f_46)
					{
						if ((func_36() || func_37(iVar977, 32)) || iLocal_28 == 10)
						{
							_set_ped_crouch_movement(&(iLocal_1041[4]), false, 0, false);
							func_38(iVar1167);
							func_39();
							func_40(&(iLocal_1041[5]), 0);
							func_40(&(iLocal_1041[0]), 0);
							func_40(&(iLocal_1041[1]), 0);
							func_40(&(iLocal_1041[2]), 0);
							func_40(&(iLocal_1041[3]), 0);
							func_41();
							if (iVar580 <= 4)
							{
								func_42();
							}
							func_43(&uLocal_979, 32);
							func_44();
							Local_85.f_46 = 1;
							if (iVar544 != 0)
							{
							}
							else
							{
								iLocal_546 = 262144;
							}
							func_45(&(Local_85.f_5), &iLocal_546);
							func_5(&(Local_85.f_5), 0);
							func_46(&(Local_85.f_5), 0);
							func_47(&(Local_85.f_5), 0);
							func_8(&(Local_85.f_5), 0);
							iLocal_582 = 9;
						}
					}
					if (func_48())
					{
						Local_85.f_50 = 1;
						func_9();
					}
					if ((func_33(&Local_85, &iLocal_1041, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0) || func_37(iVar983, 33554432)) || func_49())
					{
						if (func_37(iVar983, 1))
						{
							trigger_music_event("REWPB_ABANDON");
						}
						if (func_37(iVar977, 16384))
						{
							if (!func_37(iVar977, 524288) && !func_37(iVar977, 262144))
							{
								func_50(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(iLocal_1041[4]), 0, 1065353216, 0);
							}
						}
						Local_85.f_50 = 1;
						func_9();
					}
					break;
			}
			wait(Local_85.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_51(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_52("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_4()
{
	func_53(&(Local_85.f_5), 30);
	func_54(&(Local_85.f_5), 15f);
}

void func_5(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(iParam0->f_1), 256);
	}
	else
	{
		func_56(&(iParam0->f_1), 256);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(uParam0->f_1), 16);
	}
	else
	{
		func_56(&(uParam0->f_1), 16);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(uParam0->f_1), 1024);
	}
	else
	{
		func_56(&(uParam0->f_1), 1024);
	}
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(uParam0->f_1), 131072);
	}
	else
	{
		func_56(&(uParam0->f_1), 131072);
	}
}

void func_9()
{
	if (!Local_1223.f_9)
	{
		Local_85.f_45 = 0;
		func_57(&Local_85);
	}
	func_58();
	if (func_37(iVar977, 128) || (func_37(iVar977, 16384) && !func_37(iVar977, 131072)))
	{
		func_59(-1405475146, 1017034651, 1120952528, -1, 1, 1, 0);
	}
	func_60();
	func_61(&uLocal_1277, 106);
	if (iVar580 > 0)
	{
		set_ped_config_flag(Global_35, 118, false);
		set_ped_config_flag(Global_35, 252, true);
	}
	if (bVar1124)
	{
		if (func_37(iVar983, 1))
		{
			trigger_music_event("REWPB_FAIL");
		}
	}
	if (iVar1120 >= 4 && !Local_85.f_46)
	{
		if (func_62(&(iLocal_1041[5]), 0, 1))
		{
			set_ped_relationship_group_hash(&(iLocal_1041[5]), -1247684992);
		}
		func_63();
	}
	if (iVar988 != 0)
	{
		_set_propset_as_no_longer_needed(iVar988);
	}
	task_clear_look_at(Global_35);
	if (func_62(&(iLocal_1041[4]), 0, 1))
	{
		task_clear_look_at(&(iLocal_1041[4]));
	}
	func_64();
	func_65(&iLocal_1165, &uLocal_1173);
	if (_does_volume_exist(iVar1164))
	{
		_0x74c2b3dc0b294102(iVar1164);
		_0xa1cfb35069d23c23(iVar1164);
		_delete_volume(iVar1164);
		func_66(iVar1164);
	}
	if (func_37(iVar977, 32768))
	{
		set_player_control(player_id(), true, 0, false);
	}
	func_67(1);
	func_68();
	func_69(0, 1);
	func_70(0, 1);
	func_71(&iLocal_1174);
	cancel_music_event("REWPB_START");
	cancel_music_event("REWPB_HELP");
	cancel_music_event("REWPB_ATTACKED");
	cancel_music_event("REWPB_COMPLETE");
	if (func_62(&(iLocal_1041[1]), 0, 1))
	{
		if (Local_85.f_46)
		{
			task_combat_ped(&(iLocal_1041[1]), Global_35, 0, 0);
			Local_85.f_50 = 1;
		}
	}
	if (!is_string_null_or_empty(sVar998))
	{
		remove_waypoint_recording(sVar998);
	}
	func_72(&Local_85, &iLocal_1041, &iLocal_1050, 0, uVar1282, uVar1281, 0, 1, 0, 1);
	terminate_this_thread();
}

void func_10(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_73(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_11()
{
	switch (iVar1119)
	{
		case 0:
			if (func_74(&Local_85))
			{
				func_75();
				func_76();
				func_77();
				func_78(&Local_549);
				func_79();
				func_80(&Local_279);
				func_81();
				func_82(&Local_1223);
				func_83();
				_request_propset(iVar974);
				func_84(iVar975, 15, 0, 0);
				func_84(iVar976, 15, 0, 0);
				iLocal_1121 = 1;
			}
			break;
		case 1:
			if (!func_85(&uLocal_1120, uVar1115))
			{
				return false;
			}
			if (!func_86(&Local_549))
			{
				return false;
			}
			if (!_has_propset_loaded(iVar974))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_START"))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_HELP"))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_ABANDON"))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_ATTACKED"))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_COMPLETE"))
			{
				return false;
			}
			if (!prepare_music_event("REWPB_FAIL"))
			{
				return false;
			}
			if (!func_87(iVar975))
			{
				return false;
			}
			if (!func_87(iVar976))
			{
				return false;
			}
			if (!func_88(&Local_279))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_89(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_90(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_91(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_92(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_93(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 4;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 3;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 4;
			break;
	}
}

void func_14()
{
	switch (Local_85.f_51.f_4)
	{
		case 0:
			vLocal_1001 = { -2026.883f, 421.3658f, 123.207f };
			fLocal_1010 = 305f;
			vLocal_1014 = { -2030.066f, 431.884f, 122.437f };
			fLocal_1017 = 120.251f;
			vLocal_1011 = { -2031.295f, 431.8302f, 123.9255f };
			vLocal_1024 = { -2016.294f, 401.0307f, 125.3554f };
			fLocal_1027 = 13.2481f;
			sLocal_1000 = "re_pbr_bgv_1";
			vLocal_1007 = { -2009.975f, 398.1393f, 125.3468f };
			break;
		case 1:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -887.7031f, 54.1848f, 42.8712f };
			fLocal_1027 = 97.0801f;
			sLocal_1000 = "re_pbr_bgv_4";
			vLocal_1007 = { -875.7646f, 51.21357f, 42.6883f };
			break;
		case 2:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -887.7031f, 54.1848f, 42.8712f };
			fLocal_1027 = 97.0801f;
			sLocal_1000 = "re_pbr_hrt_0";
			vLocal_1007 = { -883.4989f, 50.6088f, 42.5513f };
			break;
		case 3:
			vLocal_1001 = { 106.2219f, 980.2459f, 213.2643f };
			fLocal_1010 = 15f;
			vLocal_1014 = { 94.743f, 984.496f, 212.058f };
			fLocal_1017 = 145.335f;
			vLocal_1011 = { 94.17893f, 982.674f, 213.5475f };
			vLocal_1024 = { 130.8159f, 966.5485f, 209.2715f };
			fLocal_1027 = 50.4781f;
			sLocal_1000 = "re_pbr_hrt_1";
			vLocal_1007 = { 133.6904f, 960.6448f, 207.7791f };
			break;
		case 4:
			vLocal_1001 = { 566.9871f, 68.99439f, 150.4439f };
			fLocal_1010 = 0f;
			vLocal_1014 = { 562.325f, 80.9154f, 151.2135f };
			fLocal_1017 = 120.8762f;
			vLocal_1011 = { 560.7023f, 81.10706f, 151.133f };
			vLocal_1024 = { 613.8922f, 90.8058f, 158.7688f };
			fLocal_1027 = 130.1807f;
			sLocal_1000 = "re_pbr_hrt_2";
			vLocal_1007 = { 627.9386f, 87.83723f, 160.289f };
			iLocal_1039 = _create_volume_aggregate();
			_0x6e0d3c3f828da773(uVar1037, _create_volume_box(-3.205f, 668.788f, 111.637f, 0f, 0f, 160.791f, 182.516f, 23.423f, 29.546f));
			_0x6e0d3c3f828da773(uVar1037, _create_volume_box(60.347f, 642.281f, 111.637f, 0f, 0f, -27.767f, 182.516f, 23.423f, 29.546f));
			break;
		case 5:
			vLocal_1001 = { 716.867f, -644.9744f, 75.4281f };
			fLocal_1010 = -85f;
			vLocal_1014 = { 728.03f, -652.87f, 76.55f };
			fLocal_1017 = 24.44f;
			vLocal_1011 = { 726.788f, -650.1722f, 77.19786f };
			vLocal_1024 = { 738.6644f, -630.9717f, 74.78355f };
			fLocal_1027 = 122.1531f;
			sLocal_1000 = "re_pbr_hrt_3";
			vLocal_1007 = { 737.0294f, -624.0504f, 74.26634f };
			func_94(&iLocal_1039, 735.6431f, -561.735f, 76.09141f, 0f, 0f, 137.6948f, 46.59331f, 12.25233f, 19.54567f, "m_volTrainTracks");
			break;
		case 6:
			vLocal_1001 = { -919.809f, 45.468f, 45.024f };
			fLocal_1010 = -45f;
			vLocal_1014 = { -919.212f, 58.826f, 45.914f };
			fLocal_1017 = 75.935f;
			vLocal_1011 = { -920.3922f, 59.36298f, 47.19365f };
			vLocal_1024 = { -936.9882f, 36.9602f, 45.8897f };
			fLocal_1027 = 310.3037f;
			sLocal_1000 = "re_pbr_hrt_4";
			vLocal_1007 = { -961.9864f, 70.55093f, 53.12505f };
			break;
	}
}

bool func_15(vector3 vParam0, float fParam3)
{
	if (func_95(vParam0))
	{
		return false;
	}
	return _0x397769175a7dbb30(vParam0, fParam3, 0, 16384, 0);
}

float func_16(vector3 vParam0, int iParam3)
{
	return func_96(Global_35, vParam0, iParam3);
}

void func_17(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_18(vector3 vParam0, float fParam3)
{
	iVar0 = _create_volume_cylinder(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3);
	func_97(iVar0);
	_delete_volume(iVar0);
}

int func_19(var uParam0, var uParam1)
{
	if (!is_entity_dead(*uParam0) && !is_entity_dead(*uParam1))
	{
		return 1;
	}
	else
	{
		if (!func_62(*uParam0, 0, 1))
		{
			*uParam0 = func_98(iVar544, 1, 0, Local_85.f_51, Local_85.f_51.f_1, Local_85.f_51.f_2, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!func_62(*uParam1, 0, 1))
		{
			*uParam1 = func_99(iVar544, 1, 1, 0, 0, 1, 1, 1, 1, Local_85.f_51, Local_85.f_51.f_1, Local_85.f_51.f_2, 0, 1, 0, 0, 0);
		}
		return 0;
	}
	return 0;
}

int func_20(var uParam0, var uParam1)
{
	if (!is_entity_dead(*uParam0) && !is_entity_dead(*uParam1))
	{
		return 1;
	}
	else
	{
		if (!func_62(*uParam0, 0, 1))
		{
			*uParam0 = func_98(iVar543, 1, 0, uVar997, vLocal_1001.y, vLocal_1001.z, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!func_62(*uParam1, 0, 1))
		{
			*uParam1 = func_99(iVar543, 1, 1, 0, 0, 1, 1, 1, 1, uVar1010, vLocal_1014.y, vLocal_1014.z, iVar1013, 1, 0, 0, 0);
			if (*uParam1 != 0)
			{
				set_blocking_of_non_temporary_events(*uParam1, true);
			}
		}
		return 0;
	}
	return 0;
}

int func_21()
{
	if (!is_string_null_or_empty(sVar998))
	{
		if (!get_is_waypoint_recording_loaded(sVar998))
		{
			request_waypoint_recording(sVar998);
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_22()
{
	switch (iVar1265)
	{
		case 0:
			func_100(&uLocal_990, iVar974, vLocal_1001, 1, uVar1008, 1150681088, 0, 1);
			iLocal_1267 = 1;
			break;
		case 1:
			if (!func_101(0f, 0f, 0f, 0f, &Local_279, &iLocal_1041, 1, 0, 3, 1))
			{
				return false;
			}
			func_102(vLocal_1001, &Local_549, uVar1008, 0, 1, 1, 0);
			iLocal_1267 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

void func_23()
{
	add_relationship_group("bountyPosseGroup", &uLocal_1220);
	add_relationship_group("relCompanionIgnore", &uLocal_1222);
	_0xdc91f22f09bc6c2f(iVar1218, 0);
	add_relationship_group("relBountyHunterInCover", &uLocal_1221);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 4)
		{
			if (func_62(&(iLocal_1041[4]), 0, 1))
			{
				set_entity_coords(&(iLocal_1041[4]), Local_85.f_51, true, false, true, true);
				if (get_mount(&(iLocal_1041[4])) != &iLocal_1041[6])
				{
					_set_ped_on_mount(&(iLocal_1041[4]), &(iLocal_1041[6]), -1, true);
				}
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_1041[4]), false, 1862763509);
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_1041[6]), false, 1862763509);
				set_entity_invincible(&(iLocal_1041[4]), true);
				set_entity_proofs(&(iLocal_1041[4]), 2, false);
				set_blocking_of_non_temporary_events(&(iLocal_1041[4]), true);
				func_103(&(iLocal_1041[4]), &Local_85, 0);
				func_103(&(iLocal_1041[6]), &Local_85, 0);
				func_104(&(iLocal_1041[4]), &(Local_279[4]->f_23), 0);
			}
		}
		else if (iVar0 == 5)
		{
			if (func_62(&(iLocal_1041[5]), 0, 1))
			{
				remove_all_ped_weapons(&(iLocal_1041[5]), true, true);
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_1041[5]), false, 1030835986);
				func_105(&(iLocal_1041[5]), vLocal_1001 + Local_279[5]->f_6, Local_279[iVar0]->f_9, 2, 1073741824);
				set_blocking_of_non_temporary_events(&(iLocal_1041[5]), true);
				set_entity_is_target_priority(&(iLocal_1041[5]), false, 0f);
				set_ped_can_ragdoll(&(iLocal_1041[5]), false);
				_0xae6004120c18df97(&(iLocal_1041[5]), 0, 0);
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_1041[5]), false, 1862763509);
				set_entity_can_be_damaged_by_relationship_group(&(iLocal_1041[7]), false, 1862763509);
				set_entity_invincible(&(iLocal_1041[5]), true);
				set_entity_proofs(&(iLocal_1041[5]), 2, false);
				set_ped_relationship_group_hash(&(iLocal_1041[5]), iVar1220);
				set_ped_can_be_targetted(&(iLocal_1041[5]), false);
				set_ped_relationship_group_hash(&(iLocal_1041[7]), -1247684992);
			}
		}
		else if (func_62(&(iLocal_1041[iVar0]), 0, 1) && iVar0 != 6)
		{
			func_105(&(iLocal_1041[iVar0]), vLocal_1001 + Local_279[iVar0]->f_6, 0f, 2, 1073741824);
			if (iVar0 != 1)
			{
				set_ped_relationship_group_hash(&(iLocal_1041[iVar0]), iVar1218);
			}
			else
			{
				set_ped_relationship_group_hash(&(iLocal_1041[iVar0]), iVar1219);
			}
			func_106(&(iLocal_1041[iVar0]), 0);
			if (iVar0 == 1)
			{
				func_107(&(iLocal_1041[iVar0]));
			}
			else if (iVar0 == 3)
			{
				func_108(&(iLocal_1041[iVar0]), -594562071, -1, 1, 0, 1056964608, 1065353216, 0);
			}
			else
			{
				func_108(&(iLocal_1041[iVar0]), -594562071, -1, 0, 0, 1056964608, 1065353216, 0);
			}
		}
		if (!is_string_null_or_empty(&(Local_279[iVar0]->f_23)))
		{
			func_104(&(iLocal_1041[iVar0]), &(Local_279[iVar0]->f_23), 0);
		}
		iVar0++;
	}
	func_109(1);
	func_43(&uLocal_979, 16);
	uLocal_1028 = _0x92c8eaca29f6bed6(&(iLocal_1041[4]));
	_0x73b6f907b913c860(&(iLocal_1041[4]), 0.5f);
}

void func_24()
{
	Local_607 = { 0f, 0f, 0f };
	Local_607.f_3 = Global_35;
	Local_607.f_8 = 4;
	Local_607.f_4 = 21030;
	Local_607.f_21 = 4;
	Local_607.f_22 = 4;
	Local_607.f_19 = 4;
	Local_607.f_20 = 4;
	Local_607.f_17 = 4;
	Local_607.f_18 = 4;
	Local_607.f_7 = 1500;
}

void func_25()
{
	if (!has_collision_loaded_around_entity(&(iLocal_1041[5])))
	{
		if (does_entity_exist(&(iLocal_1041[5])))
		{
			set_entity_load_collision_flag(&(iLocal_1041[5]), 1);
		}
	}
}

void func_26(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6)
{
	*uParam0 = func_110(-493351432, vParam2, fParam5, 0, 0, 0);
	_0x06aade17334f7a40(iParam1, vParam6);
	_task_use_scenario_point(iParam1, *uParam0, 0, 0, false, true, 0, false, -1f, false);
}

void func_27(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_28(int iParam0, int iParam1)
{
	if (func_111(iParam0))
	{
		return;
	}
	if (func_112(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_29()
{
	func_27(&uLocal_1040, vLocal_1001, 0f, 0f, 0f, 70f, 70f, 70f, "m_volHerbRemove");
}

bool func_30(var uParam0)
{
	return func_113(*uParam0, 1);
}

void func_31(var uParam0)
{
	func_114(uParam0, 0f);
}

float func_32(var uParam0)
{
	if (!func_30(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_116() - uParam0->f_1);
}

bool func_33(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_117())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_118(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_91(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_91(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_91(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (does_entity_exist(iParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != iParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(iParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_119(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_119(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!is_entity_dead(iParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_34(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_121(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_122(&(uParam0->f_5));
			}
			func_56(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_123(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_126(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_127(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_91(uParam0->f_3, 128))
	{
		if ((does_entity_exist(iParam1[0]) && !is_ped_injured(iParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(iParam1[0])))
			{
				func_128(uParam0, iParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_35(int* iParam0, var uParam1, bool bParam2)
{
	if (!iParam0->f_2 && iParam0->f_7 != 0)
	{
		if ((!bParam2 && !func_129(0)) || (get_game_timer() - iParam0->f_7) > 3500)
		{
			if (does_blip_exist(*iParam0))
			{
				remove_blip(iParam0);
			}
			if (!func_95(iParam0->f_3))
			{
				*uParam1 = _blip_add_for_coord(iParam0->f_1, iParam0->f_3);
				iParam0->f_2 = 1;
			}
			else if (!is_entity_dead(iParam0->f_6))
			{
				*uParam1 = _blip_add_for_entity(iParam0->f_1, iParam0->f_6);
				iParam0->f_2 = 1;
			}
			if (iParam0->f_2)
			{
				if (!is_string_null_or_empty(iParam0->f_9))
				{
					set_blip_name_from_text_file(*uParam1, iParam0->f_9);
				}
			}
		}
	}
}

bool func_36()
{
	if (func_37(iVar955, 32))
	{
		if (!func_30(&uLocal_1202))
		{
			func_31(&uLocal_1202);
		}
		else if (func_32(&uLocal_1202) > 1.5f)
		{
			return true;
		}
	}
	if (func_130())
	{
		return true;
	}
	return false;
}

bool func_37(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_38(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_39()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_62(&(iLocal_1041[iVar0]), 0, 1))
		{
			iLocal_1050[iVar0] = _blip_add_for_entity(831283580, &(iLocal_1041[iVar0]));
		}
		iVar0++;
	}
}

void func_40(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

void func_41()
{
	if (func_62(&(iLocal_1041[0]), 0, 1))
	{
		func_131(&(iLocal_1041[0]), Global_35, "RE_PBR_UNI_V1_WARN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	else if (func_62(&(iLocal_1041[1]), 0, 1))
	{
		func_131(&(iLocal_1041[1]), Global_35, "RE_PBR_UNI_V1_WARN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_42()
{
	if (!func_37(iVar977, 16384))
	{
		func_43(&uLocal_979, 16384);
		func_132();
	}
}

void func_43(var uParam0, int iParam1)
{
	func_133(uParam0, iParam1);
}

void func_44()
{
	set_relationship_between_groups(2, iVar1220, 1862763509);
	set_relationship_between_groups(2, 1862763509, iVar1220);
	set_relationship_between_groups(6, iVar1218, 1030835986);
	set_relationship_between_groups(6, iVar1218, -1247684992);
	set_relationship_between_groups(6, iVar1218, 1862763509);
	set_relationship_between_groups(6, 1030835986, iVar1218);
	set_relationship_between_groups(6, 1862763509, iVar1218);
	set_relationship_between_groups(6, -1247684992, iVar1218);
	set_relationship_between_groups(6, iVar1219, 1862763509);
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_134();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_135(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 16);
	}
	else
	{
		func_55(iParam0, 67108864);
		func_55(iParam0, 16);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(uParam0->f_1), 4);
	}
	else
	{
		func_56(&(uParam0->f_1), 4);
	}
}

bool func_48()
{
	if (iVar580 < 13)
	{
		set_ped_reset_flag(&(iLocal_1041[5]), 25, true);
	}
	if (iVar580 > 4)
	{
		func_136(&uLocal_1277, vLocal_1001, 2, -1082130432);
	}
	func_137(&iLocal_1174, vLocal_1001);
	func_138();
	func_139();
	func_140();
	func_141();
	func_142();
	func_143();
	func_144();
	func_145(1071644672);
	func_146();
	func_147();
	func_148();
	func_149();
	if (iVar580 > 0)
	{
		func_150();
	}
	switch (iVar580)
	{
		case 0:
			if (func_151(iVar546))
			{
				set_entity_load_collision_flag(&(iLocal_1041[4]), 1);
				set_ped_config_flag(Global_35, 118, true);
				if (!is_ped_on_mount(&(iLocal_1041[4])))
				{
					func_152(iVar546, 0);
				}
				set_entity_heading(&(iLocal_1041[4]), func_153(get_entity_coords(&(iLocal_1041[4]), true, false), Global_36));
				task_play_anim(&(iLocal_1041[4]), &(Local_78[1]), Local_78[1]->f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				func_154();
				func_155(&(iLocal_1041[4]), iVar546, 0);
				func_128(&Local_85, &(iLocal_1041[4]));
				func_43(&uLocal_979, 2097152);
			}
			if (func_151(iVar545))
			{
				func_155(&(iLocal_1041[5]), iVar545, 0);
				func_156(iVar545, 1);
			}
			func_67(0);
			iLocal_1166 = _create_volume_sphere_with_custom_name(vLocal_1001, 0f, 0f, 0f, 40f, 40f, 40f, "RE_PBR_CAMP");
			_0xb56d41a694e42e86(iVar1164, 4320, 0, 0, -1, -1, 0);
			_0x18262cafebb5fbe1(iVar1164, 4320, 0, 0, -1, -1, 0);
			func_157(iVar1164, "RE_PBR_CAMP", 1, 0, 8, 0, -1082130432);
			_0x9851de7aec10b4e1(vLocal_1001, 10f, 1, 0);
			iLocal_582 = 1;
			break;
		case 1:
			if (func_158())
			{
				return true;
			}
			if (!func_159())
			{
				if (func_160(&Local_85, &uLocal_1123, 0.5f, 1114636288, 70f, 1000, 1f, 1f, 1, 0, 1, 12f, 1, 1, 0))
				{
					func_161();
					bLocal_44 = true;
					iLocal_582 = 2;
				}
			}
			break;
		case 2:
			if (func_158())
			{
				return true;
			}
			func_162(&(iLocal_1041[4]), &uLocal_1268, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 1075838976, 0, 1, 1084227584);
			func_163(Global_35, &(iLocal_1041[4]), 12f);
			if (!func_37(iVar977, 268435456))
			{
				if (func_164(Global_35, &(iLocal_1041[4]), 1, 1) < 40f)
				{
					func_60();
					Local_607.f_7 = 3000;
					func_43(&uLocal_979, 268435456);
				}
			}
			else
			{
				func_165(Global_35, &(iLocal_1041[4]));
				func_166(0);
				if (func_167(&(iLocal_1041[4]), Global_35, iLocal_1050[4], &uLocal_1266, &Local_1223, &Local_85, &uLocal_1127, &(Local_85.f_47), 4f, 14f, 0, 0))
				{
					func_166(1);
					func_168(&(iLocal_1041[4]), &(Local_85.f_121));
					if (get_mount(&(iLocal_1041[4])) != 0)
					{
						func_168(get_mount(&(iLocal_1041[4])), &(Local_85.f_121));
					}
					func_125(&(Local_85.f_121));
					request_ped_visibility_tracking(&(iLocal_1041[0]));
					request_ped_visibility_tracking(&(iLocal_1041[1]));
					func_103(&(iLocal_1041[0]), &Local_85, 0);
					func_103(&(iLocal_1041[1]), &Local_85, 0);
					iLocal_582 = 4;
				}
			}
			break;
		case 4:
			func_163(Global_35, &(iLocal_1041[4]), 12f);
			func_162(&(iLocal_1041[4]), &uLocal_1268, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 1075838976, 0, 1, 1084227584);
			func_165(Global_35, &(iLocal_1041[4]));
			if (func_37(iVar977, 4096) || func_37(iVar977, 134217728))
			{
				if (func_37(iVar977, 16384))
				{
					task_clear_look_at(Global_35);
					task_clear_look_at(&(iLocal_1041[4]));
					func_169();
					func_170(1);
					func_42();
					func_31(&uLocal_32);
					Local_85.f_44 = 1;
					iLocal_582 = 5;
				}
				else if ((func_37(iVar977, 128) || func_37(iVar983, 16384)) || func_37(iVar977, 134217728))
				{
					func_171(0);
					Local_85.f_44 = 1;
					iLocal_582 = 5;
				}
			}
			break;
		case 5:
			func_172(1);
			if ((func_37(iVar977, 16384) || func_37(iVar977, 256)) || func_37(iVar977, 134217728))
			{
				func_173(422991367, 0);
				iLocal_582 = 6;
			}
			break;
		case 6:
			func_174();
			if (func_175(&Local_85, 2f, 60f, 45f, 1, 0, 0, -1082130432, 1, 1125515264, 0, 0))
			{
				set_anim_scene_bool(iVar572, "bAdvanceToDialogue", true, false);
				func_176(&uLocal_957, 2);
				func_60();
				iLocal_582 = 7;
			}
			break;
		case 7:
			break;
		case 9:
			if (_0x23e33cb9f4a3f547(iVar572, &(sLocal_991[5])) && _0x23e33cb9f4a3f547(iVar572, &(sLocal_991[7])))
			{
				func_177(&(Local_85.f_162), 1, 1);
				func_177(&(Local_85.f_163), 1, 1);
				func_155(&(iLocal_1041[4]), iVar546, 1);
				func_71(iLocal_1050[4]);
				func_178(iVar546, 0);
				if (_0x8d81e7824b7753f7(iVar572, "dialogue", 1) || _0x8d81e7824b7753f7(iVar572, "idles", 1))
				{
					_set_anim_scene_playback_list_bool(iVar572, &(sLocal_991[7]), true);
				}
				else
				{
					_set_anim_scene_playback_list_bool(iVar572, &(sLocal_991[5]), true);
				}
				set_anim_scene_bool(iVar572, "bAdvanceToBreakout", true, false);
				func_179(get_entity_coords(&(iLocal_1041[5]), true, false), &iLocal_1175, 422991367, 0, 0, 0);
				_0x1740e3dee0ae4d27(&(iLocal_1041[4]), iVar1135);
				func_176(&uLocal_979, 2097152);
				register_hated_targets_around_ped(&(iLocal_1041[4]), 35f);
				task_combat_hated_targets_in_area(&(iLocal_1041[4]), vLocal_1001, 35f, 0, 16);
				task_clear_look_at(Global_35);
				task_clear_look_at(&(iLocal_1041[4]));
				func_180(&uLocal_1214);
				func_38(iVar1167);
				iLocal_582 = 10;
			}
			else
			{
				_0xdf7b5144e25cd3fe(iVar572, &(sLocal_991[5]));
				_0xdf7b5144e25cd3fe(iVar572, &(sLocal_991[7]));
			}
			break;
		case 10:
			if (_0x9fa00e2fc134a9d0(&(iLocal_1041[4])))
			{
				_0x01b928ca2e198b01(get_blip_from_entity(&(iLocal_1041[4])));
			}
			func_181();
			func_182();
			if (!func_37(iVar983, 8192))
			{
				if (func_183(-4f, 1, &(iLocal_1041[5]), 1))
				{
					if (!func_30(&uLocal_1214))
					{
						func_31(&uLocal_1214);
					}
					else if (func_32(&uLocal_1214) > 1.5f)
					{
						func_184();
					}
				}
			}
			else
			{
				func_185();
				func_186();
			}
			if (func_187())
			{
				if (func_188(0))
				{
					if (func_62(&(iLocal_1041[5]), 0, 1) && !func_37(iVar977, 524288))
					{
						func_189(0);
						iLocal_582 = 12;
					}
					else
					{
						return true;
					}
				}
			}
			else if (func_188(0))
			{
				if (func_190(1))
				{
					if (func_37(iVar977, 1048576))
					{
						if (_0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[6])))
						{
							set_current_ped_weapon(&(iLocal_1041[1]), -1569615261, false, 0, false, false);
							func_191(&(iLocal_1041[1]), 1);
							_set_anim_scene_playback_list_bool(Local_574.f_1, &(sLocal_991[6]), true);
							set_anim_scene_bool(Local_574.f_1, "bAdvanceToBreakout", true, false);
							func_43(&uLocal_979, 262144);
							func_189(0);
							iLocal_582 = 12;
						}
						else
						{
							_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[6]));
						}
					}
				}
				else
				{
					func_192();
					if ((!func_37(iVar977, 67108864) && iLocal_1128[1]) // PointerArith)
					{
						func_193();
					}
				}
			}
			break;
		case 12:
			if (!func_62(&(iLocal_1041[5]), 0, 1))
			{
				return true;
			}
			if (!func_37(iVar977, 4))
			{
				func_194(Global_35);
			}
			if (func_37(iVar977, 262144))
			{
				if (has_anim_event_fired(&(iLocal_1041[5]), -1243742777))
				{
					func_131(&(iLocal_1041[5]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_PUNCH_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (func_62(&(iLocal_1041[1]), 0, 1))
				{
					set_ped_reset_flag(&(iLocal_1041[1]), 36, true);
					set_ped_reset_flag(&(iLocal_1041[1]), 31, true);
				}
				if (((!func_62(&(iLocal_1041[1]), 0, 1) || func_37(iVar977, 67108864)) || ((_is_anim_scene_started(Local_574.f_1, false) && _0x1f0e401031e20146(Local_574.f_1, &(sLocal_991[0]))) && _0xb89fcff19dafff28(Local_574.f_1, "pedBountyB"))) || ((_is_anim_scene_started(Local_574.f_1, false) && _0x1f0e401031e20146(Local_574.f_1, &(sLocal_991[6]))) && _0xb89fcff19dafff28(Local_574.f_1, "pedBountyB")))
				{
					if (!func_37(iVar977, 524288))
					{
						if (_0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[0])))
						{
							set_anim_scene_bool(Local_574.f_1, "bAdvanceToBreakout", false, false);
							_set_anim_scene_playback_list_bool(Local_574.f_1, &(sLocal_991[0]), true);
							func_176(&uLocal_979, 262144);
							iLocal_582 = 10;
							Jump @3521; //curOff = 2397
						}
						else
						{
							_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[0]));
						}
					}
					else if (has_anim_event_fired(&(iLocal_1041[5]), -777194943))
					{
						func_43(&uLocal_979, 4194304);
					}
				}
				else if (!func_37(iVar977, 524288))
				{
					Local_607.f_7 = 0;
					_0x66f9eb44342bb4c5(&(iLocal_1041[1]), &Local_607);
				}
			}
			if (!func_37(iVar977, 131072))
			{
				if (func_37(iVar977, 32768))
				{
					if (has_anim_event_fired(Global_35, 1426724047))
					{
						set_ped_config_flag(Global_35, 252, true);
						set_player_control(player_id(), true, 0, false);
						func_176(&uLocal_979, 32768);
					}
				}
				if (func_37(iVar977, 524288))
				{
					if (func_37(iVar977, 4194304) || !_is_anim_scene_started(Local_574.f_1, false))
					{
						if (_is_anim_scene_started(Local_574.f_1, false))
						{
							remove_anim_scene_entity(Local_574.f_1, "pedKidnapped", &(iLocal_1041[5]));
						}
						func_43(&uLocal_979, 131072);
					}
				}
				else
				{
					func_195();
				}
			}
			else
			{
				if (func_37(iVar977, 32768))
				{
					func_50(12, 0, 0, 0, &(iLocal_1041[5]), 0, 1065353216, 0);
					set_ped_config_flag(Global_35, 252, true);
					set_player_control(player_id(), true, 0, false);
					func_176(&uLocal_979, 32768);
				}
				iLocal_582 = 13;
			}
			break;
		case 13:
			if (func_37(iVar977, 262144))
			{
				if (has_anim_event_fired(&(iLocal_1041[5]), -1243742777))
				{
					func_131(&(iLocal_1041[5]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_PUNCH_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if (func_37(iVar977, 4194304) || !_is_anim_scene_started(Local_574.f_1, false))
			{
				func_71(&iLocal_1175);
				if (get_number_of_fires_in_range(get_entity_coords(&(iLocal_1041[5]), true, false), 1f) > 0)
				{
					task_smart_flee_coord(&(iLocal_1041[5]), vLocal_1001, 4.5f, -1, 28928, 2f);
					func_43(&uLocal_979, 1073741824);
				}
				Local_85.f_44 = 1;
				set_ped_relationship_group_hash(&(iLocal_1041[5]), -1247684992);
				iLocal_582 = 14;
			}
			break;
		case 14:
			open_sequence_task(&iLocal_1177);
			if (get_number_of_fires_in_range(get_entity_coords(&(iLocal_1041[5]), true, false), 1f) > 0)
			{
				task_smart_flee_coord(0, get_entity_coords(&(iLocal_1041[5]), true, false), 3.5f, -1, 28928, 2f);
			}
			if (!func_37(iVar977, 4))
			{
				func_196(0, Global_35, 3000);
			}
			else
			{
				func_196(0, &(iLocal_1041[1]), 3000);
			}
			if (get_mount(&(iLocal_1041[5])) != &iLocal_1041[7] && func_62(&(iLocal_1041[7]), 0, 1))
			{
				task_mount_animal(0, &(iLocal_1041[7]), 20000, -1, 1f, 1, 0, 0);
			}
			func_197(&(iLocal_1041[5]), &iLocal_1177, 0, 0, 1, 1);
			func_198();
			iLocal_582 = 15;
			break;
		case 15:
			if (func_183(0, 1, &(iLocal_1041[5]), 1))
			{
				func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_CAMP_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_582 = 16;
			}
			break;
		case 16:
			if (func_183(0, 1, &(iLocal_1041[5]), 1))
			{
				if (!func_37(iVar983, 2048))
				{
					if (func_37(iVar977, 16384))
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LEAVE_BOTH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LEAVE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iLocal_582 = 17;
			}
			break;
		case 17:
			func_199();
			if (!func_62(&(iLocal_1041[6]), 0, 1) || func_200())
			{
				task_set_blocking_of_non_temporary_events(&(iLocal_1041[4]), false);
				task_set_blocking_of_non_temporary_events(&(iLocal_1041[5]), false);
				func_69(0, 1);
				func_70(0, 1);
				func_58();
				iLocal_582 = 18;
			}
			break;
		case 18:
			func_199();
			if ((((does_entity_exist(&(iLocal_1041[4])) && func_164(Global_35, &(iLocal_1041[4]), 1, 1) > 50f) && does_entity_exist(&(iLocal_1041[5]))) && func_164(Global_35, &(iLocal_1041[5]), 1, 1) > 50f) || (func_37(iVar955, 256) && func_37(iVar955, 64)))
			{
				iLocal_1041[4] = 0;
				iLocal_1041[5] = 0;
				return true;
			}
			break;
	}
	return false;
}

bool func_49()
{
	if (func_201(player_id(), 1, 0, 1))
	{
		if (!Local_85.f_46)
		{
			if (func_96(Global_35, vLocal_1001, 1) > 100f)
			{
				if (Local_1223.f_9)
				{
					func_40(&(iLocal_1041[4]), 0);
					func_131(&(iLocal_1041[4]), Global_35, "CHALLENGE_THREATEN_AGAIN", "", -1082130432, 3, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				return true;
			}
		}
		else if (func_37(iVar977, 524288))
		{
			if (func_202(vLocal_1001, 50f) && is_ped_in_combat(Global_35, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_50(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_203() != -1)
	{
		return;
	}
	if ((Global_36616 && func_204(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_205(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_206(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_207(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_206(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_51(int iParam0)
{
	func_208(iParam0, 0);
	func_209(iParam0, 0);
	func_5(iParam0, 1);
	func_46(iParam0, 1);
	func_210(iParam0, 0);
	func_211(iParam0, 1);
	func_212(iParam0, 1, 1, 1);
}

var func_52(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_213(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_214(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_213(sVar0, iParam1, 0, 0, 1, 1);
}

void func_53(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

void func_54(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_55(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_56(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_57(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_215(32);
		func_216(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

void func_58()
{
	if (func_37(iVar977, 64))
	{
		func_217(Global_1935630, 4);
		func_176(&uLocal_979, 64);
	}
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_218(iParam0);
	iVar3 = func_219(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_220();
				func_221(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_222(iParam0, 1);
			if (func_223(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_224(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_225(1, iParam0);
				}
				else
				{
					func_226(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_60()
{
	if (does_entity_exist(&(iLocal_1041[4])))
	{
		Local_607.f_7 = 0;
		_0x66f9eb44342bb4c5(&(iLocal_1041[4]), &Local_607);
	}
}

void func_61(var uParam0, int iParam1)
{
	if (does_particle_fx_looped_exist(*uParam0))
	{
		stop_particle_fx_looped(*uParam0, false);
		remove_named_ptfx_asset(-458373790);
		func_56(&(uParam0->f_1), 4);
	}
}

bool func_62(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_227(iParam0, iParam1);
}

void func_63()
{
	set_relationship_between_groups(3, iVar1218, 1030835986);
	set_relationship_between_groups(3, 1030835986, iVar1218);
	set_relationship_between_groups(3, iVar1218, 1862763509);
	set_relationship_between_groups(3, 1862763509, iVar1218);
	set_relationship_between_groups(3, iVar1218, iVar1220);
	set_relationship_between_groups(3, iVar1220, iVar1218);
	set_relationship_between_groups(3, iVar1219, 1030835986);
	set_relationship_between_groups(3, 1030835986, iVar1219);
}

void func_64()
{
	iVar0 = 0;
	while (iVar0 < 24)
	{
		func_228(uLocal_1092[iVar0], 1);
		iVar0++;
	}
}

void func_65(int iParam0, var uParam1)
{
	if (_does_volume_exist(*iParam0))
	{
		_0x74c2b3dc0b294102(*iParam0);
		_0xa1cfb35069d23c23(*iParam0);
		_delete_volume(*iParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

void func_66(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_229(vVar0, 0);
}

void func_67(bool bParam0)
{
	if (Local_85.f_51.f_4 == 0)
	{
		if (bParam0)
		{
			if (func_37(iVar976, 8))
			{
				func_230(880);
			}
		}
		else
		{
			func_231(880);
			func_43(&uLocal_979, 8);
		}
	}
}

void func_68()
{
	Local_14.f_12 = func_232(1);
	iVar0 = 0;
	while (iVar0 < Local_14.f_12)
	{
		if (func_62(&(Local_14.f_4[iVar0]), 0, 1))
		{
			if (!is_ped_in_group(&(Local_14.f_4[iVar0])))
			{
				func_233(&(Local_14.f_4[iVar0]), 0);
			}
		}
		iVar0++;
	}
}

void func_69(bool bParam0, bool bParam1)
{
	if (does_entity_exist(&(iLocal_1041[7])) && _get_rider_of_mount(&(iLocal_1041[7]), false) == 0)
	{
		set_blocking_of_non_temporary_events(&(iLocal_1041[7]), false);
	}
	if (func_62(&(iLocal_1041[5]), 0, 1))
	{
		func_156(iVar543, 0);
		set_blocking_of_non_temporary_events(&(iLocal_1041[5]), false);
		if (bParam1)
		{
			func_234(&(iLocal_1041[5]), 8);
		}
	}
	func_155(&(iLocal_1041[5]), iVar543, 1);
	func_235(Local_632[5], &Local_905);
	func_43(&uLocal_957, 64);
	if (func_236(iVar543))
	{
		func_237(iVar543);
	}
	func_238(iVar543, 0, bParam0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
}

void func_70(bool bParam0, bool bParam1)
{
	if (func_62(&(iLocal_1041[4]), 0, 1))
	{
		if (func_37(iVar975, 2097152))
		{
			_0x1740e3dee0ae4d27(&(iLocal_1041[4]), iVar1133);
		}
		set_blocking_of_non_temporary_events(&(iLocal_1041[4]), false);
		if (bParam1)
		{
			func_234(&(iLocal_1041[4]), 8);
		}
		if (func_37(iVar975, 16))
		{
			_0x73b6f907b913c860(&(iLocal_1041[4]), fVar1024);
		}
	}
	func_155(&(iLocal_1041[4]), iVar544, 1);
	func_235(Local_632[4], &Local_801);
	func_43(&uLocal_957, 256);
	if (func_236(iVar544))
	{
		func_237(iVar544);
	}
	func_238(iVar544, 0, bParam0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
}

void func_71(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_239(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_240(uParam0->f_3, 524288);
		}
	}
	if (func_62(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(iParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_62(iParam1[iVar0], 0, 0))
			{
				func_241(iParam1[iVar0], bVar3);
				if (func_242(uParam0, (*iParam1)[iVar0]))
				{
					func_243((*iParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_62(iParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(iParam1[iVar0]))
						{
							set_ped_stealth_movement(iParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(iParam1[iVar0]))
						{
							_set_ped_crouch_movement(iParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_245(iParam1[iVar0], 1073741824, func_244(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(iParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_246(uParam0);
	}
	func_247(uParam0);
	if (!uParam0->f_186)
	{
		func_120(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_248(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_249(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

bool func_73(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_250(iVar0))
	{
		return false;
	}
	if (func_251(iVar0, 1) || func_251(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_74(var uParam0)
{
	iVar0 = func_252(uParam0->f_3);
	iVar1 = func_232(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_75()
{
	Local_574.f_4 = "script@beat@wilderness@posseBreakout@intro";
	Local_574.f_5 = "script@beat@wilderness@posseBreakout@resolution";
}

void func_76()
{
	Local_279[5]->f_6 = { -1.84f, 0.26f, -0.2f };
	Local_279[0]->f_6 = { -0.81f, -1.58f, 1.39f };
	Local_279[1]->f_6 = { 0.61f, 1.57f, 0.23f };
	Local_279[2]->f_6 = { 0.57f, -2.53f, -0.1f };
	Local_279[2]->f_9 = 90f;
	Local_279[3]->f_6 = { 3.74f, -3.3f, -0.23f };
	Local_279[3]->f_9 = 90f;
	Local_279[4]->f_6 = { -5.17f, -3.58f, 0.11f };
}

void func_77()
{
	Local_549[0]->f_7 = 1324575728;
	*Local_549[0] = { 3.58f, 1.54f, -0.22f };
	Local_549[0]->f_3 = 305f;
	Local_549[0]->f_11 = 4;
	Local_549[0]->f_10 = 1;
	Local_549[1]->f_7 = -1970375879;
	*Local_549[1] = { -0.25f, 0f, 0f };
	Local_549[1]->f_3 = 0f;
	Local_549[1]->f_11 = 2;
	Local_549[1]->f_10 = 1;
}

void func_78(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

void func_79()
{
	StringCopy(&(Local_279[4]->f_23), "Javier", 64);
	StringCopy(&(Local_279[5]->f_23), "Bill", 64);
	Local_279[0]->f_1 = 427032133;
	Local_279[0] = 4;
	StringCopy(&(Local_279[0]->f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
	Local_279[0]->f_3 = 4613714;
	func_253(&(Local_279[0]->f_22));
	Local_279[1]->f_1 = 427032133;
	Local_279[1] = 4;
	StringCopy(&(Local_279[1]->f_23), "0745_G_M_M_BountyHunters_01_WHITE_07", 64);
	Local_279[1]->f_3 = -831552859;
	func_253(&(Local_279[1]->f_22));
	Local_279[2]->f_1 = 427032133;
	Local_279[2] = 4;
	Local_279[2]->f_3 = 967399703;
	func_253(&(Local_279[2]->f_22));
	Local_279[3]->f_1 = 427032133;
	Local_279[3] = 4;
	Local_279[3]->f_3 = 1208251853;
	func_253(&(Local_279[3]->f_22));
}

void func_80(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_254(&((*iParam0)[iVar0]->f_1));
		func_254(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_81()
{
	Local_78[0] = "script_re@posse_breakout";
	Local_78[1] = "VEH_HORSEBACK@SEAT_SADDLE@CHARACTER@ARTHUR@FIDGET@NORMAL@IDLE";
	Local_78[1]->f_1 = "look_around_04";
	func_255(&(Local_78[0]), &uLocal_53);
	func_255(&(Local_78[1]), &uLocal_53);
}

void func_82(var uParam0)
{
	StringCopy(&(uParam0->f_11), "RE_PBR_UNI_V1_SPOT", 64);
	uParam0->f_8 = 3f;
	uParam0->f_39 = 1;
	uParam0->f_36 = "script_re@posse_breakout";
	uParam0->f_37 = "line_01_jav";
	uParam0->f_30 = 1;
}

void func_83()
{
	sLocal_991[1] = "pblDialogue";
	sLocal_991[5] = "pblBreakout";
	sLocal_991[7] = "pblBreakoutEarly";
	sLocal_991[0] = "pblCutFreeIdle";
	sLocal_991[2] = "pblCutFreePlayerL02";
	sLocal_991[3] = "pblCutFreePlayerR";
	sLocal_991[4] = "pblCutFreePlayerF";
	sLocal_991[6] = "pblCutFreePunch";
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

bool func_85(var uParam0, var uParam1)
{
	return true;
}

bool func_86(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_87(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

bool func_88(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_256((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_89(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_257(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_258(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_123(iParam0, 128))
			{
				if (!func_259(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_260(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_261(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_95(*uParam1))
				{
					return func_262(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_263(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_258(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_264(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_265(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_266(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_123(iParam0, 128))
			{
				if (!func_267(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_262(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_260(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_264(uParam1))
					{
						return func_262(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_268(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_258(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_262(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_52("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_52("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_90(var uParam0, int iParam1)
{
	if (func_91(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_270(iParam1, func_269(uParam0), &(uParam0->f_172)))
		{
			if (func_62(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_91(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_92(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_272(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_91(uParam0->f_3, 1) && !func_91(uParam0->f_3, 32))
	{
		func_272(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_91(uParam0->f_3, 2) && !func_91(uParam0->f_3, 32))
	{
		func_272(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_28(uParam0->f_171, 1);
	}
	if (func_91(uParam0->f_3, 1))
	{
		func_272(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_273(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_93(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

void func_94(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

bool func_95(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_96(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_97(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237->f_11)
	{
		if (_0xf256a75210c5c0eb(iParam0, Global_1393237->f_11[iVar0]->f_3))
		{
			func_274(iVar0, 4096, 0);
			func_274(iVar0, 131072, 0);
			func_275(iVar0, 1);
		}
		iVar0++;
	}
}

int func_98(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_151(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_276(iParam0, 2, 1))
			{
				func_277(iParam0, 2, 1);
			}
			if (func_278(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_279(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_238(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_227(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_227(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_280(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_279(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_281(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_279(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_281(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_276(iParam0, 44, 0))
			{
				func_279(iParam0, 44, 0);
			}
			if (func_282(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_281(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_277(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_283(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_284(iParam0, 0, 0, 1);
			}
			func_277(iParam0, 33, 1);
			func_277(iParam0, 34, 1);
			func_277(iParam0, 29, 1);
			if (!func_95(vVar0) && bParam7)
			{
				func_281(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_281(iParam0, 4);
			}
			else
			{
				func_281(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_280(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_105(Global_1360165[iParam0], vVar0, iParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_281(iParam0, 4);
			}
			else
			{
				func_281(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_285(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_286(iParam0, iParam13, 0);
						func_287(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_276(iParam0, 25, 0))
						{
							func_277(iParam0, 25, 0);
						}
						func_279(iParam0, 66, 0);
						func_281(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_281(iParam0, 5);
				}
				func_279(iParam0, 28, 1);
			}
			else
			{
				func_281(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_281(iParam0, 6);
			}
			break;
		case 6:
			if (func_227(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_288(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_289(Global_1360165[iParam0], 1);
				}
			}
			func_281(iParam0, 7);
		case 7:
			func_283(iParam0, bParam9, bParam15, 0);
			func_290(iParam0, 4, bParam11);
			func_291(iParam0);
			if (bParam20)
			{
				if (func_292(Global_1360165[iParam0]))
				{
				}
			}
			func_293(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_281(iParam0, 0);
			func_294(iParam0, 16, 1);
			func_277(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

int func_99(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	iVar1 = func_296(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, uParam9, uParam10, uParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iVar1) && _0xa0bc8faed8cfeb3c(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

void func_100(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, float fParam7, bool bParam8, bool bParam9)
{
	iVar2 = create_itemset(true);
	*uParam0 = _create_propset(iParam1, vParam2, iParam5, fParam6, fParam7, bParam8, bParam9);
	iVar0 = _get_entities_from_propset(*uParam0, iVar2, 0, false, false);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		uVar3 = get_indexed_item_in_itemset(iVar1, iVar2);
		iVar4 = _0x18013392501ce5dc(uVar3);
		_0xa91e6cf94404e8c9(iVar4);
		iVar1++;
	}
	_0x20a4bf0e09bee146(iVar2);
	clean_itemset(iVar2);
	destroy_itemset(iVar2);
}

bool func_101(vector3 vParam0, float fParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*uParam4 != *uParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *uParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *uParam4)
	{
		iParam8 = (*uParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_297() || !func_298((*uParam4)[iVar0], (*uParam5)[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_102(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && does_entity_exist((*iParam3)[iVar0]->f_8))
		{
		}
		else if ((*iParam3)[iVar0]->f_7 != 0 && !func_37((*iParam3)[iVar0]->f_11, 16))
		{
			if (!has_model_loaded((*iParam3)[iVar0]->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((*iParam3)[iVar0]->f_9 != -1)
				{
					iVar8 = (*iParam3)[iVar0]->f_9;
					vVar5 = { get_offset_from_entity_in_world_coords((*iParam3)[iVar8]->f_8, *(*iParam3)[iVar0]) };
					if (func_37((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					attach_entity_to_entity((*iParam3)[iVar0]->f_8, (*iParam3)[iVar8]->f_8, 0, *(*iParam3)[iVar0], (*iParam3)[iVar0]->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_37((*iParam3)[iVar0]->f_11, 8))
					{
						vVar5 = { _get_object_offset_from_coords(vParam0, fParam4, *(*iParam3)[iVar0]) };
					}
					else
					{
						vVar5 = { *(*iParam3)[iVar0] };
					}
					if (!func_37((*iParam3)[iVar0]->f_11, 128))
					{
						func_299(&vVar5, (*iParam3)[iVar0]->f_10);
					}
					if (func_37((*iParam3)[iVar0]->f_11, 64))
					{
						(*iParam3)[iVar0]->f_8 = create_object_no_offset((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(*iParam3)[iVar0]->f_8 = create_object((*iParam3)[iVar0]->f_7, vVar5, true, true, false, false, true);
					}
					if (func_95((*iParam3)[iVar0]->f_4))
					{
						vVar1 = { 0f, 0f, (*iParam3)[iVar0]->f_3 };
					}
					else
					{
						vVar1 = { (*iParam3)[iVar0]->f_4 };
					}
					if (func_37((*iParam3)[iVar0]->f_11, 4))
					{
						vVar1.f_2 = func_300((vVar1.z + fParam4));
					}
					set_entity_rotation((*iParam3)[iVar0]->f_8, vVar1, 2, true);
					if (!func_37((*iParam3)[iVar0]->f_11, 128))
					{
						if ((*iParam3)[iVar0]->f_10)
						{
							_0x9587913b9e772d29((*iParam3)[iVar0]->f_8, 0);
						}
					}
				}
				if (func_37((*iParam3)[iVar0]->f_11, 2))
				{
					freeze_entity_position((*iParam3)[iVar0]->f_8, true);
				}
				if (func_37((*iParam3)[iVar0]->f_11, 32))
				{
					set_entity_visible((*iParam3)[iVar0]->f_8, false);
				}
				if (bParam5)
				{
					set_entity_load_collision_flag((*iParam3)[iVar0]->f_8, 1);
					activate_physics((*iParam3)[iVar0]->f_8);
				}
				_0xa91e6cf94404e8c9((*iParam3)[iVar0]->f_8);
				vVar9 = { get_entity_coords((*iParam3)[iVar0]->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_103(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_301(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_104(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_62(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

void func_105(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_302(Global_35) && is_player_teleport_active())
	{
	}
	if (func_303(iParam0))
	{
		if (func_304(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_37(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_105(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_105(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_37(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_37(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_37(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_37(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_37(iParam5, 129))
	{
		if (func_37(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_37(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_37(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_37(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_303(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_37(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_37(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_106(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_204(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_107(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_305(iParam3, 1);
	bVar1 = func_305(iParam3, 2);
	bVar2 = !func_305(iParam3, 4);
	bVar3 = func_305(iParam3, 8);
	bVar4 = !func_305(iParam3, 16);
	bVar5 = func_305(iParam3, 32);
	bVar6 = func_305(iParam3, 64);
	return func_306(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_109(bool bParam0)
{
	if (bParam0)
	{
		if (func_37(iVar982, 1))
		{
			return;
		}
	}
	else if (!func_37(iVar982, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		freeze_entity_position(&(iLocal_1041[iVar0]), bParam0);
		iVar0++;
	}
	if (func_62(&(iLocal_1041[5]), 0, 1))
	{
		freeze_entity_position(&(iLocal_1041[5]), bParam0);
	}
	if (bParam0)
	{
		if (!func_37(iVar976, 1))
		{
			func_43(&uLocal_979, 1);
		}
	}
	else if (func_37(iVar976, 1))
	{
		func_176(&uLocal_979, 1);
	}
}

var func_110(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, iParam4, iParam5, iParam6, iParam7);
}

bool func_111(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_112(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_114(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_116() - fParam1);
	func_307(uParam0, 1);
	func_308(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_115(var uParam0)
{
	return func_113(*uParam0, 2);
}

float func_116()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_117()
{
	if (!func_309(Global_1395482->f_1))
	{
		return false;
	}
	return func_310(Global_1395482->f_1, 32);
}

bool func_118(int iParam0)
{
	if (func_91(iParam0, 1))
	{
		return false;
	}
	return (1 == func_311(iParam0) || 2 == func_311(iParam0));
}

float func_119(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_120(var uParam0, int iParam1)
{
	vVar0 = { func_312(uParam0) };
	iVar3 = func_248(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_121(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(iParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(iParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_122(int iParam0)
{
	func_5(iParam0, 1);
	func_53(iParam0, 20);
}

bool func_123(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_124(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_271(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_313())
	{
		func_314(1);
	}
	func_315(iParam2, uParam0->f_43);
	func_316(iParam2, 0, 0, 0, 0);
	if (func_317(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_239(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_318(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_125(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_319())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_123(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_320(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_321(uParam0, bVar0);
		func_322(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_323(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_125(&(uParam0->f_121));
		}
	}
}

bool func_127(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_91(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_324())
			{
				fVar0 = 15f;
			}
		}
		if (func_325(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_201(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_325(uParam2, fVar1))
		{
			if (!func_326((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_327(uParam2->f_3, 2) && func_328(2))
		{
			return false;
		}
		if (func_91(iParam0, 4194304) || func_91(iParam0, 33554432))
		{
			if (func_329(1))
			{
				return false;
			}
		}
	}
	if (func_330(Global_35))
	{
		return false;
	}
	if (func_331(0, 1, 1) && !func_332(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_91(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_333(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_201(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_334())
		{
			return false;
		}
		iVar2 = func_336(func_335());
		if (func_337(iVar2))
		{
			if (func_338(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_339(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_340(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_128(var uParam0, int iParam1)
{
	if (func_341(uParam0->f_51))
	{
		func_229(uParam0->f_51, 0);
		fVar0 = func_342(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_343());
		bVar1 = func_244(!func_91(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_157(iVar2, func_344(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_129(float fParam0)
{
	return !func_183(fParam0, 1, 0, 0);
}

bool func_130()
{
	if (func_345(&iLocal_1041, &(Local_85.f_5), &iLocal_546, &uLocal_1135, 0, 3, 1))
	{
		return true;
	}
	if (func_346(&iLocal_1041, &(Local_85.f_5), &iLocal_546, &uLocal_1136, 0, 3, 1))
	{
		return true;
	}
	if (is_ped_in_combat(Global_35, 0) && func_37(iVar977, 16777216))
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_347(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_132()
{
	if (!func_37(iVar977, 64))
	{
		func_348(49);
		func_349(Global_1935630, 4);
		func_43(&uLocal_979, 64);
	}
}

void func_133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_134()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_135(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 134217728);
	}
	else
	{
		func_55(iParam0, 134217728);
	}
}

int func_136(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_2(uParam0->f_1, 1))
	{
		if (does_particle_fx_looped_exist(*uParam0))
		{
			if (func_2(uParam0->f_1, 16))
			{
				func_350(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				func_351(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	request_named_ptfx_asset(-458373790);
	if (has_named_ptfx_asset_loaded(-458373790))
	{
		if (!func_2(uParam0->f_1, 8))
		{
			if (!does_particle_fx_looped_exist(*uParam0))
			{
				use_particle_fx_asset("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_352(get_distance_between_coords(get_gameplay_cam_coord(), vParam1, true));
				uParam0->f_3 = func_354(func_353(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_355(iParam4);
				uParam0->f_5 = to_float(get_random_int_in_range(floor((uParam0->f_5 - 15f)), floor((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = start_particle_fx_looped_at_coord(sVar0, vParam1, 0f, 0f, 0f, func_356(iParam4), false, false, false, false);
				uParam0->f_4 = get_frame_count();
				if (func_357(vParam1, 1) > (get_gameplay_cam_fov() + 15f))
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
					set_particle_fx_looped_alpha(*uParam0, 1f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_56(&(uParam0->f_1), 16);
				}
				else
				{
					_0x9ddc222d85d5af2a(*uParam0, uParam0->f_2);
					set_particle_fx_looped_alpha(*uParam0, 0f);
					set_particle_fx_looped_colour(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_56(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_137(int* iParam0, vector3 vParam1)
{
	if (func_37(iVar973, 16777216))
	{
		if (!Local_85.f_46)
		{
			if (!does_blip_exist(*iParam0))
			{
				*iParam0 = _blip_add_for_coord(408396114, vParam1);
			}
		}
		else
		{
			func_71(iParam0);
		}
	}
}

void func_138()
{
	func_358();
	switch (iLocal_28)
	{
		case 0:
			if (iVar580 > 2)
			{
				iLocal_28 = 1;
			}
			break;
		case 1:
			if (func_183(-4f, 1, &(iLocal_1041[4]), 1))
			{
				task_play_upper_anim_facing_entity(&(iLocal_1041[4]), &(Local_78[0]), "line_01_jav", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_APPROACH_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_359(1891783641, &(iLocal_1041[4]), 1);
				func_31(&uLocal_1184);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (is_ped_in_combat(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (func_183(-4f, 1, &(iLocal_1041[4]), 1) && &Local_85.f_98[4] < 30f)
			{
				func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_NEWS_REACT_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (is_ped_in_combat(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (func_183(0, 1, Global_35, 1))
			{
				task_play_upper_anim_facing_entity(&(iLocal_1041[4]), &(Local_78[0]), "line_02_jav", Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_EXPLAIN_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_31(&uLocal_1184);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (is_ped_in_combat(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (func_183(0, 1, Global_35, 1) && func_183(0, 1, &(iLocal_1041[4]), 1))
			{
				func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_PLAYER_REACT_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 5;
			}
			break;
		case 5:
			if (is_ped_in_combat(Global_35, 0))
			{
				iLocal_28 = 6;
			}
			else if (func_183(0, 1, Global_35, 1))
			{
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_PLAYER_REACT_RESP", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_28 = 6;
			}
			break;
		case 6:
			if (func_360(&uLocal_1184, 0.5f) && !func_37(iVar977, 4096))
			{
				func_43(&uLocal_979, 4096);
			}
			if (func_37(iVar977, 16384))
			{
				func_31(&uLocal_1184);
				_0xac22aa6df4d1c1de(player_id(), &(iLocal_1041[4]), -1082130432, -1082130432, 3, 3, 0);
				iLocal_28 = 7;
			}
			else if (func_361())
			{
				iLocal_28 = 9;
			}
			if (!func_37(iVar977, 16384))
			{
				if (func_362())
				{
					func_43(&uLocal_979, 256);
				}
			}
			break;
		case 7:
			if (func_32(&uLocal_1184) > 1.5f || func_37(iVar983, 131072))
			{
				if (func_363(&uLocal_1119, &(iLocal_1041[4]), &(iLocal_1041[6]), Global_35, vLocal_1001, 20f, 30f, 2f, 65f, 1.75f, 55f, 1.5f, -1) || func_37(iVar977, 16777216))
				{
					clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
					_0x12e09e278c6c29b7(player_id());
					func_176(&uLocal_957, 2);
					func_364(&(iLocal_1041[4]));
					iLocal_28 = 8;
				}
				else if (func_361())
				{
					iLocal_28 = 9;
				}
			}
			break;
		case 8:
			if (!Local_85.f_46)
			{
				if (get_mount(&(iLocal_1041[4])) == 0)
				{
					if (!_does_volume_exist(iVar1167))
					{
						uLocal_1169 = _0x0eb78c2b156635b1(-432403087, get_entity_coords(&(iLocal_1041[4]), true, false), 0f, 0f, 0f, 1f, 1f, 1f);
						_0x7c00cfc48a782dc0(iVar1167, &(iLocal_1041[4]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
					}
				}
			}
			else if (!_does_volume_exist(iVar1167))
			{
				func_38(iVar1167);
			}
			if (func_187())
			{
				func_365(iVar546, 1, 0, 1, 1, 1);
				iLocal_28 = 12;
			}
			else if (!func_37(iVar977, 33554432) && Local_85.f_46)
			{
				iVar1 = _0xcd66fea29400a0b5(Global_35);
				if ((iVar1 != 0 && is_entity_a_ped(iVar1)) && is_ped_human(get_ped_index_from_entity_index(iVar1)))
				{
					set_ped_relationship_group_hash(get_ped_index_from_entity_index(iVar1), 1269650476);
				}
				task_combat_hated_targets_in_area(&(iLocal_1041[4]), Global_36, 50f, 0, 16);
				func_365(iVar546, 1, 0, 1, 1, 0);
				func_43(&uLocal_979, 33554432);
			}
			else if (!Local_85.f_46)
			{
				if (func_37(iVar977, 16384))
				{
					func_366(Global_35);
				}
				else
				{
					func_366(0);
				}
			}
			else if (func_190(0))
			{
				if (_0x7f9b9791d4cb71f6(&(iLocal_1041[4]), &(iLocal_1041[1]), false, 0) == 1)
				{
					if (func_164(&(iLocal_1041[4]), &(iLocal_1041[1]), 1, 1) < 6f)
					{
						if (get_script_task_status(&(iLocal_1041[4]), -1073489615, true) != 1 && get_script_task_status(&(iLocal_1041[4]), -1073489615, true) != 0)
						{
							func_365(iVar546, 0, 0, 1, 1, 0);
							clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
							task_aim_at_entity(&(iLocal_1041[4]), &(iLocal_1041[1]), -1, 0, 0);
						}
					}
					else if (get_script_task_status(&(iLocal_1041[4]), -1207174364, true) != 1 && get_script_task_status(&(iLocal_1041[4]), -1207174364, true) != 0)
					{
						func_365(iVar546, 0, 0, 1, 1, 0);
						clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
						task_go_to_entity_while_aiming_at_entity(&(iLocal_1041[4]), &(iLocal_1041[1]), &(iLocal_1041[1]), 1f, 0, 5f, 1082130432, 1, 0, -687903391, 0);
					}
				}
			}
			break;
		case 9:
			if (func_363(&uLocal_1119, &(iLocal_1041[4]), &(iLocal_1041[6]), 0, vLocal_1001, 20f, 30f, 2.001f, 65f, 1.501f, 55f, 1.5f, -1))
			{
				clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
				func_364(&(iLocal_1041[4]));
				iLocal_28 = 8;
			}
			else
			{
				func_366(0);
			}
			func_367();
			break;
		case 10:
			if (Local_85.f_46)
			{
				if (!func_187())
				{
					if (!func_37(iVar977, 262144))
					{
						if (get_script_task_status(&(iLocal_1041[4]), 1120685857, true) != 1)
						{
							register_hated_targets_around_ped(&(iLocal_1041[4]), 35f);
							task_combat_hated_targets_in_area(&(iLocal_1041[4]), vLocal_1001, 35f, 0, 16);
						}
					}
					else
					{
						func_368(&(iLocal_1041[4]), &(iLocal_1041[1]));
						iLocal_28 = 11;
					}
				}
				else
				{
					iLocal_28 = 12;
				}
			}
			break;
		case 11:
			if (!func_62(&(iLocal_1041[1]), 0, 1))
			{
				iLocal_28 = 13;
			}
			else if (_0x7f9b9791d4cb71f6(&(iLocal_1041[4]), &(iLocal_1041[1]), false, 0) == 1 && func_164(&(iLocal_1041[4]), &(iLocal_1041[1]), 1, 1) < 6f)
			{
				if (get_script_task_status(&(iLocal_1041[4]), -1073489615, true) != 1 && get_script_task_status(&(iLocal_1041[4]), -1073489615, true) != 0)
				{
					clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
					task_aim_at_entity(&(iLocal_1041[4]), &(iLocal_1041[1]), -1, 0, 0);
				}
			}
			break;
		case 12:
			if (func_187())
			{
				if (!func_37(iVar977, 32768) && !func_37(iVar977, 524288))
				{
					if (!func_30(&uLocal_1190))
					{
						func_31(&uLocal_1190);
					}
					else if (func_32(&uLocal_1190) > 15f || func_369())
					{
						if (!func_95(vLocal_1030))
						{
							if ((((func_96(Global_35, vLocal_1030, 1) > func_96(&(iLocal_1041[4]), vLocal_1030, 1) && func_183(0, 1, &(iLocal_1041[5]), 1)) && get_script_task_status(&(iLocal_1041[5]), -962766111, true) != 1) && get_script_task_status(&(iLocal_1041[5]), 1532415627, true) != 1) && func_96(&(iLocal_1041[4]), vLocal_1030, 1) < 15f)
							{
								func_365(iVar546, 0, 1, 1, 1, 0);
								func_370();
								func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_SAVE_POSSE", func_371(iVar546, 0), -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_28 = 13;
							}
							else
							{
								func_372();
							}
						}
					}
				}
				else
				{
					func_365(iVar546, 0, 1, 1, 1, 0);
					func_373();
					iLocal_28 = 15;
				}
			}
			break;
		case 13:
			if (!func_37(iVar977, 32768))
			{
				if (func_374(&Local_1059, 106))
				{
					func_375();
					func_43(&uLocal_979, 65536);
					if (func_183(0, 1, &(iLocal_1041[5]), 1))
					{
						if (!func_37(iVar977, 16384))
						{
							func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_SOLO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					iLocal_28 = 14;
				}
			}
			else
			{
				iLocal_28 = 12;
			}
			break;
		case 14:
			if (!func_37(iVar977, 524288) && !func_37(iVar977, 32768))
			{
				func_194(&(iLocal_1041[4]));
			}
			else
			{
				func_365(iVar546, 0, 1, 1, 1, 0);
				func_373();
				iLocal_28 = 15;
			}
			break;
		case 15:
			if ((func_62(&(iLocal_1041[4]), 0, 1) && !_0x3ab6c7b0bb0df4b1(Global_35, -1)) && (_0x005e6f28dd7ed58d(Local_574.f_1, "pedPlayer") || !_0x3ab6c7b0bb0df4b1(&(iLocal_1041[4]), -1)))
			{
				set_ped_config_flag(&(iLocal_1041[4]), 252, false);
				set_blocking_of_non_temporary_events(&(iLocal_1041[4]), true);
				open_sequence_task(&iVar0);
				task_set_crouch_movement(0, false, 0, false);
				if (func_62(&(iLocal_1041[6]), 0, 1))
				{
					task_go_to_entity(0, &(iLocal_1041[6]), 40000, 2f, 1.5f, 2f, 0);
					task_mount_animal(0, &(iLocal_1041[6]), 20000, -1, 1.5f, 1, 0, 0);
				}
				func_197(&(iLocal_1041[4]), &iVar0, 0, 0, 1, 1);
				_0x931b241409216c1f(&(iLocal_1041[4]), &(iLocal_1041[6]), 0);
				if (func_62(&(iLocal_1041[6]), 0, 1) && _get_rider_of_mount(&(iLocal_1041[6]), false) == 0)
				{
					func_189(0);
				}
				iLocal_28 = 16;
			}
			break;
		case 16:
			if ((func_62(&(iLocal_1041[6]), 0, 1) && get_mount(&(iLocal_1041[4])) == &iLocal_1041[6]) || !func_62(&(iLocal_1041[6]), 0, 1))
			{
				task_set_blocking_of_non_temporary_events(&(iLocal_1041[4]), false);
				func_70(0, 1);
				iLocal_28 = 17;
			}
			else if (func_62(&(iLocal_1041[6]), 0, 1))
			{
				if (func_164(&(iLocal_1041[4]), &(iLocal_1041[6]), 1, 1) < 15f)
				{
					if (get_script_task_status(&(iLocal_1041[6]), 1435919172, true) != 1)
					{
						clear_ped_tasks(&(iLocal_1041[6]), 1, 0);
					}
				}
			}
			break;
		case 17:
			break;
	}
}

void func_139()
{
	if (func_376())
	{
		func_377();
		func_378();
	}
}

void func_140()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_379(iVar0);
		iVar0++;
	}
	if (func_62(&(iLocal_1041[5]), 0, 1))
	{
		switch (iVar979)
		{
			case 0:
				if (has_anim_event_fired(&(iLocal_1041[5]), -1931551704))
				{
					func_131(&(iLocal_1041[5]), &(iLocal_1041[1]), "RE_PBR_UNI_V1_THREAT_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_380(1533346259, vLocal_1001, 1);
					uLocal_981 = iVar979 + 1;
				}
				break;
			case 1:
				if (has_anim_event_fired(&(iLocal_1041[5]), 1802032256))
				{
					func_131(&(iLocal_1041[5]), &(iLocal_1041[1]), "RE_PBR_UNI_V1_HELL_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_981 = iVar979 + 1;
				}
				break;
			case 2:
				if (has_anim_event_fired(&(iLocal_1041[5]), 1294506541))
				{
					func_131(&(iLocal_1041[5]), &(iLocal_1041[1]), "RE_PBR_UNI_V1_GRUNT_SMACK_B", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_981 = iVar979 + 1;
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
	if (func_62(&(iLocal_1041[1]), 0, 1))
	{
		switch (iVar981)
		{
			case 0:
				if (Local_85.f_46)
				{
					uLocal_983 = iVar981 + 1;
				}
				else
				{
					if (has_anim_event_fired(&(iLocal_1041[1]), 1352845595))
					{
						func_131(&(iLocal_1041[1]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_MOCK", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (has_anim_event_fired(&(iLocal_1041[1]), 682133694))
					{
						func_131(&(iLocal_1041[1]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_SHERIFF", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				break;
			case 1:
				if (has_anim_event_fired(&(iLocal_1041[1]), 1146587401))
				{
					func_131(&(iLocal_1041[1]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_SURRENDER_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					uLocal_983 = iVar981 + 1;
				}
				break;
			case 2:
				if (has_anim_event_fired(&(iLocal_1041[1]), 308167655))
				{
					func_131(&(iLocal_1041[1]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_CUTFREE_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					uLocal_983 = iVar981 + 1;
				}
				break;
			case 3:
				if (has_anim_event_fired(&(iLocal_1041[1]), -1216432852))
				{
					func_131(&(iLocal_1041[1]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_APOLOGIZE_PUNCH", "", (70f / 2f), 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					uLocal_983 = iVar981 + 1;
				}
				break;
			case 4:
				break;
		}
	}
	if (func_62(&(iLocal_1041[0]), 0, 1))
	{
		switch (iVar980)
		{
			case 0:
				if (has_anim_event_fired(&(iLocal_1041[0]), -1553433473))
				{
					func_131(&(iLocal_1041[0]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_LAUGH", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_982 = iVar980 + 1;
				}
				break;
			case 1:
				if (has_anim_event_fired(&(iLocal_1041[0]), 1352559923))
				{
					func_131(&(iLocal_1041[0]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_IMPATIENT", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_982 = iVar980 + 1;
				}
				break;
			case 2:
				if (has_anim_event_fired(&(iLocal_1041[0]), 682133694))
				{
					func_131(&(iLocal_1041[0]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_SHERIFF", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_982 = iVar980 + 1;
				}
				break;
			case 3:
				if (!Local_85.f_46)
				{
					if (has_anim_event_fired(&(iLocal_1041[0]), 682133694))
					{
						func_131(&(iLocal_1041[0]), &(iLocal_1041[5]), "RE_PBR_UNI_V1_LAUGHEND", "", 70f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_982 = iVar980 + 1;
					}
				}
				break;
			case 4:
				break;
		}
	}
}

void func_141()
{
	set_force_object_this_frame(vLocal_1001, 10f);
	if (!Local_85.f_46)
	{
		if (func_62(&(iLocal_1041[2]), 0, 1))
		{
			if (!_does_scenario_point_exist(iVar1169))
			{
				vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, Local_279[2]->f_6) };
				func_381(&vVar0, 2f);
				uLocal_1171 = func_110(iVar976, vVar0, (fVar1008 + Local_279[2]->f_9), 0, 0, 1);
				if (get_script_task_status(&(iLocal_1041[2]), -76381094, true) != 1)
				{
					_task_use_scenario_point(&(iLocal_1041[2]), iVar1169, 0, -1, false, true, 0, false, -1f, false);
				}
			}
		}
		if (!_does_scenario_point_exist(iVar1168))
		{
			vVar3 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, Local_279[3]->f_6) };
			func_381(&vVar3, 2f);
			uLocal_1170 = func_110(iVar975, vVar3, (fVar1008 + Local_279[3]->f_9), 0, 0, 1);
			if (func_62(&(iLocal_1041[3]), 0, 1))
			{
				_task_use_scenario_point(&(iLocal_1041[3]), iVar1168, 0, -1, false, true, 0, false, -1f, false);
			}
		}
	}
}

void func_142()
{
	if (!func_37(iVar977, 67108864))
	{
		if (func_37(iVar977, 262144))
		{
			if (has_anim_event_fired(&(iLocal_1041[1]), 1793185209))
			{
				iVar0 = get_current_ped_weapon_entity_index(&(iLocal_1041[1]), 0);
				detach_entity(iVar0, true, true);
			}
			if (func_62(&(iLocal_1041[1]), 0, 1) && _is_ped_lassoed(&(iLocal_1041[1])))
			{
				func_382();
			}
		}
	}
	else if (does_blip_exist(&(iLocal_1050[1])))
	{
		if (!func_62(&(iLocal_1041[1]), 0, 1))
		{
			func_71(iLocal_1050[1]);
		}
		else if (&Local_85.f_98[1] > 100f)
		{
			if (!func_383(&(iLocal_1041[1]), 100f, 0))
			{
				func_384(&(iLocal_1041[1]));
				func_385(&(iLocal_1041[1]), 0, 0);
			}
		}
	}
}

void func_143()
{
	if (func_62(&(iLocal_1041[1]), 0, 1))
	{
		if (has_anim_event_fired(&(iLocal_1041[1]), -474540600))
		{
			func_385(&(iLocal_1041[1]), 1, 0);
		}
	}
}

void func_144()
{
	if (iVar580 <= 0 || func_37(iVar955, 64))
	{
		return;
	}
	if (&iLocal_958[5] > 0)
	{
		iLocal_967[5] = func_387(iLocal_1041[5], Local_632[5], 20f, &Local_905, &(Local_85.f_192), 0, 1, 0, "", func_386(1, 0, 0), 0, 0, 2, 0, -1082130432, 0);
	}
	switch (&iLocal_958[5])
	{
		case 0:
			func_389(Local_905[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
			func_389(Local_905[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
			func_390(Local_905[0], 0, 0);
			func_390(Local_905[1], 0, 0);
			iLocal_958[5] = 1;
			break;
		case 1:
			if (func_37(iVar977, 131072) && iVar580 > 15)
			{
				func_389(Local_905[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
				func_389(Local_905[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
				func_390(Local_905[0], 0, 0);
				func_390(Local_905[1], 0, 0);
				iLocal_958[5] = 6;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 6:
			break;
		case 7:
			if (func_183(-2f, 1, Global_35, 1))
			{
				func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_ILO_BILL_END", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[5] = 8;
			}
			break;
		case 8:
			if (func_183(-2f, 1, &(iLocal_1041[5]), 0))
			{
				func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_ILO_BILL_END_LEAVE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[5] = 9;
			}
			break;
		case 9:
			if (func_183(-2f, 1, &(iLocal_1041[5]), 0))
			{
				if (!is_any_speech_playing(Global_35))
				{
					func_131(Global_35, &(iLocal_1041[5]), "RE_PBR_UNI_V1_ILO_BILL_END_LEAVE_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_958[5] = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_145(float fParam0)
{
	if (Local_85.f_46 && iVar579 < 17)
	{
		vVar0 = { get_entity_coords(&(iLocal_1041[5]), true, false) };
		if (get_number_of_fires_in_range(vVar0, fParam0) > 0)
		{
			stop_fire_in_range(vVar0, fParam0);
		}
	}
}

void func_146()
{
	if (func_62(&(iLocal_1041[5]), 0, 1))
	{
		if (!func_37(iVar977, 524288))
		{
			if (has_anim_event_fired(&(iLocal_1041[5]), -8421132))
			{
				if (func_62(&(iLocal_1041[1]), 0, 1))
				{
					task_clear_look_at(&(iLocal_1041[1]));
				}
				func_189(0);
				func_177(&(Local_85.f_162), 1, 1);
				func_43(&uLocal_979, 524288);
			}
		}
	}
}

void func_147()
{
	if (!func_37(iVar983, 1))
	{
		if (Local_1223.f_9 == 1)
		{
			trigger_music_event("REWPB_START");
			func_43(&uLocal_985, 1);
		}
	}
	if (!func_37(iVar983, 2))
	{
		if (func_37(iVar977, 16384))
		{
			trigger_music_event("REWPB_HELP");
			func_43(&uLocal_985, 2);
		}
	}
	if (!func_37(iVar983, 4))
	{
		if (func_37(iVar977, 128))
		{
			trigger_music_event("REWPB_ABANDON");
			func_43(&uLocal_985, 4);
		}
	}
	if (!func_37(iVar983, 8))
	{
		if (Local_85.f_46)
		{
			trigger_music_event("REWPB_ATTACKED");
			func_43(&uLocal_985, 8);
		}
	}
	if (!func_37(iVar983, 16))
	{
		if (func_187())
		{
			trigger_music_event("REWPB_COMPLETE");
			func_43(&uLocal_985, 16);
		}
	}
}

void func_148()
{
	if (func_37(iVar977, 1024))
	{
		return;
	}
	if (func_95(vLocal_1001))
	{
		return;
	}
	iVar0 = _find_closest_active_scenario_point_of_type(vLocal_1001, -1805387726, 10f, 0, false);
	if (_does_scenario_point_exist(iVar0))
	{
		vVar1 = { _get_scenario_point_coords(iVar0, true) };
		iLocal_1165 = _create_volume_sphere_with_custom_name(vVar1, 0f, 0f, 0f, 12f, 12f, 12f, "RE_PBR_HITCH");
		uLocal_1173 = _0x4c39c95ae5db1329(iVar1163, false, 15);
		func_391(iVar1163, 0, 0, 10208);
		func_43(&uLocal_979, 1024);
	}
}

void func_149()
{
	if (func_37(iVar977, 131072) || func_37(iVar977, 32768))
	{
		return;
	}
	if (func_95(vLocal_1156))
	{
		vLocal_1156 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -0.970239f, 0.348818f, 1f) };
		func_381(&vLocal_1156, 1088421888);
	}
	else if (func_95(vLocal_1159))
	{
		vLocal_1159 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -2.139175f, -0.437571f, 1f) };
		func_381(&vLocal_1159, 1088421888);
	}
	else if (func_95(vLocal_1162))
	{
		vLocal_1162 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -2.089894f, 1.097671f, 1f) };
		func_381(&vLocal_1162, 1088421888);
	}
	if ((!func_95(vLocal_1156) && !func_95(vLocal_1159)) && !func_95(vLocal_1162))
	{
		vLocal_1030 = { vLocal_1162 };
	}
}

void func_150()
{
	if (iVar985 >= 24)
	{
		return;
	}
	switch (iVar985)
	{
		case 0:
			func_392(uLocal_1092[0], vLocal_1001, 1.5f);
			uLocal_987 = iVar985 + 1;
			break;
		case 1:
			func_393(uLocal_1092[1], vLocal_1001, 2.3f);
			uLocal_987 = iVar985 + 1;
			break;
		case 2:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -1.7f, 2.92f, 0.14f) };
			func_394(uLocal_1092[2], vVar0, 1f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 3:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 0.53f, -4.35f, 0.15f) };
			func_394(uLocal_1092[3], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 4:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -2.26f, -4.12f, 0f) };
			func_394(uLocal_1092[4], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 5:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 4.09f, 0.23f, -0.01f) };
			func_394(uLocal_1092[5], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 6:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 5.64f, -3.85f, 0f) };
			func_394(uLocal_1092[6], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 7:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 5.08f, -6.02f, 0.09f) };
			func_394(uLocal_1092[7], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 8:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 6.13f, -0.23f, 0f) };
			func_394(uLocal_1092[8], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 9:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 1.93f, 3.81f, 0f) };
			func_394(uLocal_1092[9], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 10:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -4.37f, 0.46f, 0f) };
			func_394(uLocal_1092[10], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 11:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -0.04f, 4.48f, 0.04f) };
			func_394(uLocal_1092[11], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 12:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 3.52f, 3.58f, 0.11f) };
			func_394(uLocal_1092[12], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 13:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 2.12f, 2.46f, 0.08f) };
			func_394(uLocal_1092[13], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 14:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 3.34f, 1.41f, 0.04f) };
			func_394(uLocal_1092[14], vVar0, 1f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 15:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -1.59f, -2.2f, -0.05f) };
			func_394(uLocal_1092[15], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 16:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 4.39f, -7.61f, 0f) };
			func_394(uLocal_1092[16], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 17:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -0.1f, 1.04f, 0f) };
			func_394(uLocal_1092[17], vVar0, 1f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 18:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 0.52f, -2.89f, 0f) };
			func_394(uLocal_1092[18], vVar0, 1.06f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 19:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 1.55f, -4.03f, 0f) };
			func_394(uLocal_1092[19], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 20:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 0.88f, 5.58f, 0f) };
			func_394(uLocal_1092[20], vVar0, 1.5f, 0, 1);
			uLocal_987 = iVar985 + 1;
			break;
		case 21:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -0.36f, 2.4f, 0f) };
			func_394(uLocal_1092[21], vVar0, 1.5f, 0, 0);
			uLocal_987 = iVar985 + 1;
			break;
		case 22:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, 2.45f, -1.26f, 0f) };
			func_394(uLocal_1092[22], vVar0, 1.5f, 0, 0);
			uLocal_987 = iVar985 + 1;
			break;
		case 23:
			vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -0.44f, -4.1f, 0f) };
			func_394(uLocal_1092[23], vVar0, 1.5f, 0, 0);
			uLocal_987 = iVar985 + 1;
			break;
	}
}

bool func_151(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_152(int iParam0, bool bParam1)
{
	if (!func_151(iParam0))
	{
		return;
	}
	iVar0 = func_395(iParam0);
	if (does_entity_exist(Global_1360165[iParam0]) && does_entity_exist(iVar0))
	{
		if (!is_entity_dead(Global_1360165[iParam0]) && !is_entity_dead(iVar0))
		{
			if (bParam1)
			{
				if (func_396(Global_1360165[iParam0], 1116471296, -1082130432, -1082130432, -1082130432))
				{
					return;
				}
				else if (func_396(iVar0, 1116471296, -1082130432, -1082130432, -1082130432))
				{
					return;
				}
			}
			if (func_397(iParam0))
			{
				return;
			}
			func_280(iParam0, 0, "force companion onto horse");
			clear_ped_tasks_immediately(iVar0, false, true);
			set_entity_coords(iVar0, get_entity_coords(Global_1360165[iParam0], true, false), true, false, true, true);
			_set_ped_on_mount(Global_1360165[iParam0], iVar0, -1, true);
			freeze_entity_position(iVar0, false);
			clear_ped_tasks(iVar0, 1, 0);
		}
	}
}

float func_153(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return get_heading_from_vector_2d((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_154()
{
	func_27(&uLocal_1167, Local_85.f_51, 0f, 0f, 0f, 45f, 45f, 45f, "m_volPredator");
	_0xb56d41a694e42e86(iVar1165, 4096, 0, 0, -1, -1, 0);
	_0x7c00cfc48a782dc0(iVar1165, &(iLocal_1041[4]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
}

void func_155(int iParam0, int iParam1, bool bParam2)
{
	func_283(iParam1, bParam2, 1, 0);
	set_ped_config_flag(iParam0, 448, !bParam2);
	stop_ped_speaking(iParam0, !bParam2);
}

void func_156(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_398(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_290(iParam0, 16, 0);
		}
	}
	func_290(iParam0, 1, bParam1);
}

int func_157(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_399(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_158()
{
	if (((func_96(Global_35, vLocal_1001, 1) < 200f || func_96(&(iLocal_1041[4]), Local_85.f_51, 1) > 150f) || (!func_95(vLocal_1033) && func_96(Global_35, vLocal_1033, 1) > 100f)) || func_400())
	{
		if (!is_any_speech_playing(&(iLocal_1041[4])))
		{
			if (Local_1223.f_9)
			{
				func_401();
			}
			if (!would_entity_be_occluded(Local_279[0]->f_1, get_entity_coords(&(iLocal_1041[4]), true, false), true))
			{
				func_70(0, 1);
			}
			else
			{
				func_70(1, 1);
			}
			if (!would_entity_be_occluded(Local_279[0]->f_1, get_entity_coords(&(iLocal_1041[5]), true, false), true))
			{
				func_69(0, 1);
			}
			else
			{
				func_69(1, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_159()
{
	if (_does_volume_exist(iVar1037))
	{
		if (is_entity_in_volume(Global_35, iVar1037, true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_160(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	func_402(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_403(uParam1, iParam5))
	{
		if (_is_ped_getting_into_a_mount_seat(Global_35, true) || is_ped_in_any_vehicle(Global_35, false))
		{
			fVar0 = (get_entity_speed(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (get_entity_speed(Global_35) * fParam6);
		}
	}
	if (func_175(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_161()
{
	open_sequence_task(&iVar0);
	task_go_to_entity(0, Global_35, -1, 3f, 2f, 2f, 0);
	func_197(&(iLocal_1041[4]), &iVar0, 0, 0, 1, 1);
}

void func_162(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (func_404(&(uParam1->f_3), 1))
	{
		func_405(uParam1);
		if (func_406(iParam0, iParam7, iParam11, bParam12, bParam13, fParam14))
		{
			func_407();
		}
	}
	if (func_408(get_entity_coords(iParam0, true, false), uParam1, iParam7))
	{
		set_gameplay_ped_hint(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_409(uParam1, get_entity_coords(iParam0, true, false), iParam6, iParam9);
	}
}

void func_163(int iParam0, int iParam1, float fParam2)
{
	if (func_164(iParam0, iParam1, 1, 1) <= fParam2)
	{
		func_410(&iParam0, 0, iParam1, 1, 0, 0, 0, 1);
	}
}

float func_164(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_165(int iParam0, int iParam1)
{
	iVar0 = get_mount(iParam0);
	fVar1 = func_164(iParam0, iParam1, 1, 1);
	if (fVar1 < 30f)
	{
		if (fVar1 > 10f)
		{
			if (iVar0 == 0)
			{
				iVar3 = Global_35;
				fVar2 = 1.5f;
			}
			else
			{
				iVar3 = iVar0;
				fVar2 = 1.25f;
			}
		}
		else if (iVar0 == 0)
		{
			iVar3 = Global_35;
			fVar2 = 1f;
		}
		else
		{
			iVar3 = iVar0;
			fVar2 = 1f;
		}
		if (func_62(iVar3, 0, 1))
		{
			set_ped_max_move_blend_ratio(iVar3, fVar2);
		}
	}
}

void func_166(int iParam0)
{
	if (!func_37(iVar982, 64))
	{
		if (Local_1223.f_9 || iParam0)
		{
			vLocal_1033 = { Global_36 };
			func_359(1891783641, &(iLocal_1041[4]), 1);
			func_173(-89429847, -2071559757);
			func_43(&uLocal_985, 64);
		}
	}
}

bool func_167(int iParam0, int iParam1, int* iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, float fParam8, float fParam9, bool bParam10, float fParam11)
{
	if (!func_62(iParam0, 0, 1))
	{
		return true;
	}
	else if (!func_62(iParam1, 0, 1))
	{
		return true;
	}
	if (fParam8 > (fParam9 - 7f))
	{
	}
	if (func_411(iParam0, iParam1, uParam4, fParam11))
	{
		uParam4->f_9 = 1;
		func_131(iParam0, iParam1, &(uParam4->f_11), &(uParam4->f_20), -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		if (does_blip_exist(*iParam2))
		{
			func_71(iParam2);
		}
		if (bParam10)
		{
			if (uParam4->f_42)
			{
				func_412(uParam5, iParam0, 1515458263, 0, 1123024896, 0, -1, 1);
			}
			else
			{
				*iParam2 = _blip_add_for_entity(-89429847, iParam0);
			}
		}
		if (uParam4->f_39)
		{
			if (uParam4->f_40)
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			open_sequence_task(&iVar1);
			if (uParam4->f_40)
			{
				task_play_upper_anim_facing_entity(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, true, -1f, 0, 0, -1f);
			}
			else
			{
				task_play_upper_anim_facing_entity(0, uParam4->f_36, uParam4->f_37, Global_35, uParam4->f_41, 8f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
			}
			if (uParam4->f_7)
			{
				task_go_to_entity(iParam0, iParam1, -1, fParam8, uParam4->f_8, (fParam8 + 2f), 0);
			}
			else
			{
				task_follow_to_offset_of_entity(0, iParam1, 0f, fParam8, 0.5f, uParam4->f_8, -1, 1036831949, 1, 1, 0, 0, 1);
			}
			task_turn_ped_to_face_entity(0, Global_35, 0, -1f, -1f, -1082130432);
			close_sequence_task(iVar1);
			task_perform_sequence(iParam0, iVar1);
			clear_sequence_task(&iVar1);
		}
		if (!uParam5->f_48)
		{
			func_124(uParam5, &(uParam5->f_48), uParam5->f_3, &(uParam5->f_51.f_6));
		}
	}
	switch (*uParam3)
	{
		case 0:
			if (!uParam4->f_2 || func_164(iParam0, iParam1, 1, 1) < uParam4->f_3)
			{
				func_413(uParam3, 1);
			}
			break;
		case 1:
			uParam4->f_29 = func_164(iParam0, iParam1, 1, 1);
			_0x42cfd8fd8cc8dc69(iParam0, 1);
			_0xf1c03a5352243a30(iParam0);
			task_look_at_entity(iParam0, iParam1, 5000, 0, 51, 0);
			if (uParam4->f_28)
			{
				_0x89f5e7adecccb49c(iParam0, "INJURED_RIGHT_LEG");
			}
			else if (uParam4->f_38)
			{
				_0x89f5e7adecccb49c(iParam0, uParam4->f_35);
			}
			if (uParam4->f_30)
			{
				if (uParam4->f_33)
				{
					_task_move_in_traffic_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					task_go_to_entity(iParam0, iParam1, -1, fParam8, 3f, 2f, 0);
				}
				func_413(uParam3, 2);
			}
			else
			{
				task_go_to_entity(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				if (uParam4->f_31)
				{
					func_413(uParam3, 3);
				}
				else
				{
					func_413(uParam3, 5);
				}
			}
			break;
		case 2:
			if (func_396(iParam0, 1116471296, -1082130432, -1082130432, -1082130432) || func_164(iParam0, iParam1, 1, 1) < 60f)
			{
				if (uParam4->f_28)
				{
					_0x89f5e7adecccb49c(iParam0, "INJURED_RIGHT_LEG");
				}
				else if (uParam4->f_38)
				{
					_0x89f5e7adecccb49c(iParam0, uParam4->f_35);
				}
				if (uParam4->f_33)
				{
					_task_move_in_traffic_2(iParam0, Global_36, fParam8, 3f, 16, 0);
				}
				else
				{
					task_go_to_entity(iParam0, iParam1, -1, fParam8, uParam4->f_8, 2f, 0);
				}
				if (uParam4->f_31)
				{
					func_413(uParam3, 3);
				}
				else
				{
					func_413(uParam3, 5);
				}
			}
			break;
		case 3:
			if (uParam4->f_9)
			{
				if (uParam4->f_39)
				{
					func_413(uParam3, 4);
				}
				else if (func_396(iParam0, (fParam9 * 2f), -1082130432, -1082130432, -1082130432) || func_164(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					task_go_to_entity(iParam0, iParam1, -1, (fParam8 * 0.25f), uParam4->f_8, 2f, 0);
					func_413(uParam3, 5);
				}
			}
			break;
		case 4:
			if (!is_entity_playing_anim(iParam0, uParam4->f_36, uParam4->f_37, 1))
			{
				if (func_396(iParam0, (fParam9 * 2f), -1082130432, -1082130432, -1082130432) || func_164(iParam0, iParam1, 1, 1) < (fParam9 + 7f))
				{
					task_go_to_entity(iParam0, iParam1, -1, (fParam8 * 0.5f), uParam4->f_8, 2f, 0);
					func_413(uParam3, 5);
				}
			}
			break;
		case 5:
			if (is_ped_on_mount(iParam1))
			{
				fVar0 = (fParam9 + get_entity_speed(iParam1));
			}
			else
			{
				fVar0 = ((fParam9 - 7f) + get_entity_speed(iParam1));
			}
			if (uParam4->f_5)
			{
				if (func_164(iParam0, iParam1, 1, 1) < uParam4->f_10)
				{
					func_413(uParam3, 6);
					*uParam6 = 1;
					return true;
				}
			}
			else if (func_396(iParam0, (fVar0 + 1.5f), -1082130432, -1082130432, -1082130432) || func_414(iParam0, iParam1, 0, 4.5f, 0))
			{
				if (uParam4->f_4)
				{
					task_look_at_entity(iParam0, iParam1, 8000, 0, 51, 0);
					func_196(iParam0, iParam1, -1);
				}
				*uParam7 = 1;
				*uParam6 = 1;
				_0x42cfd8fd8cc8dc69(iParam0, 0);
				func_413(uParam3, 6);
				return true;
			}
			break;
		case 6:
			return true;
	}
	if (*uParam3 > 1 && *uParam3 < 6)
	{
		if (func_164(iParam0, iParam1, 1, 1) > (uParam4->f_29 + uParam4->f_1))
		{
			task_smart_flee_ped(iParam0, iParam1, 1000f, -1, 0, 1077936128, 0);
			_0x42cfd8fd8cc8dc69(iParam0, 0);
			return true;
		}
	}
	return false;
}

int func_168(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			if (iParam0 == (*uParam1)[iVar0]->f_6)
			{
				(*uParam1)[iVar0]->f_6 = 0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_169()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_170(bool bParam0)
{
	if (func_37(iVar976, 134217728))
	{
		return;
	}
	if (is_ped_facing_ped(Global_35, &(iLocal_1041[4]), 45f))
	{
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
		open_sequence_task(&iVar0);
		task_swap_weapon(0, 1, 0, 0, 0);
		if (get_mount(Global_35) == 0)
		{
			if (bParam0)
			{
				task_play_anim(0, &(Local_78[0]), "line_01_horse_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
			}
			else
			{
				task_play_anim(0, &(Local_78[0]), "line_02_horse_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
			}
		}
		else if (bParam0)
		{
			task_play_anim(0, &(Local_78[0]), "line_01_stand_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
		else
		{
			task_play_anim(0, &(Local_78[0]), "line_02_stand_plr", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
		func_197(Global_35, &iVar0, 0, 0, 1, 1);
	}
	if (bParam0)
	{
		func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_GREET_P_MOUNTED", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
	}
	else
	{
		func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_GREET_N", 0, -1082130432, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
	}
}

void func_171(bool bParam0)
{
	task_clear_look_at(Global_35);
	task_clear_look_at(&(iLocal_1041[4]));
	vLocal_1018 = { get_entity_coords(&(iLocal_1041[4]), true, false) };
	if (func_37(iVar976, 256))
	{
	}
	else
	{
		func_170(0);
	}
	func_169();
	func_43(&uLocal_979, 128);
	if (bParam0)
	{
		func_50(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", &(iLocal_1041[4]), 0, 1065353216, 0);
	}
	else
	{
		func_50(1, 0, 0, 0, &(iLocal_1041[4]), 0, 1065353216, 0);
	}
	func_31(&uLocal_32);
}

void func_172(bool bParam0)
{
	Local_14.f_12 = func_232(1);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_12)
		{
			if (func_62(&(Local_14.f_4[iVar0]), 0, 1))
			{
				if (!is_ped_in_group(&(Local_14.f_4[iVar0])))
				{
					func_415(&(Local_14[iVar0]), 0);
					func_233(&(Local_14.f_4[iVar0]), 1);
				}
			}
			iVar0++;
		}
	}
}

void func_173(int iParam0, int iParam1)
{
	if (does_blip_exist(&(iLocal_1050[4])))
	{
		func_71(iLocal_1050[4]);
	}
	func_416(&(iLocal_1041[4]), iLocal_1050[4], iParam0, 1679075994, iParam1, 0);
}

void func_174()
{
	if (does_entity_exist(Local_549[0]->f_8))
	{
		return;
	}
	if (func_16(vLocal_1001, 1) < 100f)
	{
		func_102(vLocal_1001, &Local_549, fVar1008, 0, 0, 0, 0);
		func_417(Local_549[0]->f_7, _get_object_offset_from_coords(vLocal_1001, fVar1008, *Local_549[0]), &(Local_549[0]->f_8), 0, 0, -180727039);
		func_418(Local_549[0]->f_7, _get_object_offset_from_coords(vLocal_1001, fVar1008, *Local_549[0]), &(Local_549[0]->f_8), 0, 0, 0);
	}
}

bool func_175(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_321(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_319())
	{
		bVar1 = true;
		fVar3 = func_244(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_322(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_322(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_323(&(uParam0->f_121), iParam4, fParam1))
		{
			func_125(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_248(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_124(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_125(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_248(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_176(int iParam0, int iParam1)
{
	func_419(iParam0, iParam1);
}

void func_177(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_420(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_421(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_422(iVar0);
	*uParam0 = 0;
}

int func_178(int iParam0, bool bParam1)
{
	if (!func_151(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (is_entity_dead(Global_1360165[iParam0]))
	{
		return 0;
	}
	if (func_423(iParam0, 0))
	{
		func_424(iParam0, 1);
		return 1;
	}
	if (!func_425())
	{
		return 0;
	}
	if (bParam1)
	{
		func_280(iParam0, 0, "Adding to Group");
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == -1)
		{
			(*Global_1359489)[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
	func_424(iParam0, 1);
	Global_1359489->f_15 = func_232(1);
	func_279(iParam0, 32, 1);
	set_ped_relationship_group_hash(Global_1360165[iParam0], -1247684992);
	set_ped_combat_attributes(Global_1360165[iParam0], 83, true);
	_0x9238a3d970bbb0a9(Global_1360165[iParam0], -1972074710);
	set_ped_config_flag(Global_1360165[iParam0], 152, true);
	if (_0xb7e0590c86e1711f(get_player_group(get_player_index())) != 234527101)
	{
		_0x0de02da3c0f66955(func_426(iParam0), _0xb7e0590c86e1711f(get_player_group(get_player_index())));
		_0x61bda07407754a5c(func_426(iParam0), Global_1391438->f_414.f_37);
	}
	_0x89e59dbd15e21177(func_427(), 0);
	func_428(iParam0);
	Var1 = get_player_ped(get_player_index());
	Var1.f_12 = 3;
	Var1.f_3 = Global_1360165[iParam0];
	Var1.f_7 = func_335();
	Var1.f_8 = 0;
	Var1.f_11 = 10;
	Var1.f_14 = Global_1360165[iParam0];
	_0x88bc5f4aef77fc4e(&Var1, 17);
	return 1;
}

void func_179(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	*iParam3 = _blip_add_for_coord(iParam4, vParam0);
	if (iParam7 != 0)
	{
		_blip_set_modifier(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		set_blip_sprite(*iParam3, iParam5, true);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		set_blip_name_from_text_file(*iParam3, sParam6);
	}
}

void func_180(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_181()
{
	if (!func_37(iVar977, 1048576))
	{
		if (!_is_anim_scene_started(iVar572, false) || _get_anim_scene_progress(iVar572) > 0.99f)
		{
			_delete_anim_scene(iVar572);
			func_429();
			func_43(&uLocal_979, 1048576);
		}
	}
}

void func_182()
{
	if ((((iLocal_1128[0] && iLocal_1128[1]) // PointerArith && iLocal_1128[2]) // PointerArith && iLocal_1128[3]) // PointerArith)
	{
		return;
	}
	if (!&iLocal_1128[0])
	{
		if (!get_is_task_active(&(iLocal_1041[0]), 3))
		{
			if (!_0x3ab6c7b0bb0df4b1(&(iLocal_1041[0]), iVar572))
			{
				set_ped_sphere_defensive_area(&(iLocal_1041[0]), vLocal_1153, 5f, 0, 0, 0);
				remove_anim_scene_entity(iVar572, "pedBountyA", &(iLocal_1041[0]));
				open_sequence_task(uVar0[0]);
				task_combat_hated_targets_in_area(0, vLocal_1001, 100f, 0, 16);
				func_197(&(iLocal_1041[0]), uVar0[0], 0, 0, 1, 1);
				iLocal_1128[0] = 1;
				set_ped_keep_task(&(iLocal_1041[0]), true);
			}
		}
	}
	if (!&iLocal_1128[1])
	{
		if (!get_is_task_active(&(iLocal_1041[1]), 3))
		{
			if (!_0x3ab6c7b0bb0df4b1(&(iLocal_1041[1]), iVar572))
			{
				set_ped_sphere_defensive_area(&(iLocal_1041[1]), vLocal_1150, 1.5f, 0, 0, 0);
				set_ped_combat_attributes(&(iLocal_1041[1]), 0, true);
				set_ped_combat_attributes(&(iLocal_1041[1]), 119, true);
				_0x8b1e8e35a6e814ea(&(iLocal_1041[1]), -698498204, -1082130432);
				remove_anim_scene_entity(iVar572, "pedBountyB", &(iLocal_1041[1]));
				open_sequence_task(uVar0[1]);
				task_put_ped_directly_into_cover(0, vLocal_1150, 3000, 0, 0f, 0, 0, uVar1174, 0, 0, 0);
				task_combat_hated_targets_in_area(0, vLocal_1001, 100f, 0, 16);
				func_197(&(iLocal_1041[1]), uVar0[1], 0, 0, 1, 1);
				set_ped_keep_task(&(iLocal_1041[1]), true);
				iLocal_1128[1] = 1;
			}
		}
	}
	if (!&iLocal_1128[2])
	{
		if (_0x802092b07e3b1eea(&(iLocal_1041[2]), Global_36, 3))
		{
			set_ped_sphere_defensive_area(&(iLocal_1041[2]), vLocal_1153, 6.5f, 0, 0, 0);
			_0x2208438012482a1a(&(iLocal_1041[2]), false, false);
			open_sequence_task(uVar0[2]);
			task_combat_hated_targets_in_area(0, vLocal_1001, 100f, 0, 16);
			func_197(&(iLocal_1041[2]), uVar0[2], 0f, 1f, 1, 1);
			set_ped_keep_task(&(iLocal_1041[2]), true);
			iLocal_1128[2] = 1;
		}
	}
	if (!&iLocal_1128[3])
	{
		if (_0x802092b07e3b1eea(&(iLocal_1041[3]), Global_36, 3))
		{
			set_ped_sphere_defensive_area(&(iLocal_1041[3]), vLocal_1153, 6.5f, 0, 0, 0);
			_0x2208438012482a1a(&(iLocal_1041[3]), false, false);
			open_sequence_task(uVar0[3]);
			task_combat_hated_targets_in_area(0, vLocal_1001, 100f, 0, 16);
			func_197(&(iLocal_1041[3]), uVar0[3], 0f, 1f, 1, 1);
			set_ped_keep_task(&(iLocal_1041[3]), true);
			iLocal_1128[3] = 1;
		}
	}
}

bool func_183(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_430(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_431(fParam0))
	{
		return false;
	}
	return true;
}

void func_184()
{
	if (!func_37(iVar983, 8192))
	{
		func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_AGGRO_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_43(&uLocal_985, 8192);
	}
}

void func_185()
{
	if (!func_30(&uLocal_1205))
	{
		func_31(&uLocal_1205);
	}
	else if (func_432(4, &uLocal_1141, fVar1140))
	{
	}
	else
	{
		func_432(5, &uLocal_1143, fVar1142);
	}
}

void func_186()
{
	if (func_187())
	{
		return;
	}
	if (!func_30(&uLocal_1208))
	{
		func_31(&uLocal_1208);
	}
	else if (func_32(&uLocal_1208) > fVar1147)
	{
		iVar0 = (timera() % 4);
		switch (iVar0)
		{
			case 0:
				func_433(0, &uLocal_1145);
				break;
			case 1:
				func_433(1, &uLocal_1146);
				break;
			case 2:
				func_433(2, &uLocal_1147);
				break;
			case 3:
				func_433(3, &uLocal_1148);
				break;
		}
	}
}

bool func_187()
{
	if (((func_62(&(iLocal_1041[0]), 0, 1) || (func_62(&(iLocal_1041[1]), 0, 1) && !func_37(iVar977, 67108864))) || func_62(&(iLocal_1041[2]), 0, 1)) || func_62(&(iLocal_1041[3]), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_188(bool bParam0)
{
	if (bParam0)
	{
		if (_is_anim_scene_loaded(iVar571, true, false) && _is_anim_scene_loaded(Local_574.f_1, true, false))
		{
			if (((_0x23e33cb9f4a3f547(iVar571, &(sLocal_991[1])) && _0x23e33cb9f4a3f547(iVar571, &(sLocal_991[5]))) && _0x23e33cb9f4a3f547(iVar571, &(sLocal_991[7]))) && _0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[0])))
			{
				return true;
			}
			else
			{
				func_434(bParam0);
			}
		}
	}
	else if (_is_anim_scene_loaded(Local_574.f_1, true, false))
	{
		if ((((_0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[0])) && _0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[2]))) && _0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[3]))) && _0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[4]))) && _0x23e33cb9f4a3f547(Local_574.f_1, &(sLocal_991[6])))
		{
			return true;
		}
		else
		{
			func_434(bParam0);
		}
	}
	return false;
}

void func_189(bool bParam0)
{
	if (!func_37(iVar976, 8388608))
	{
		if (func_62(&(iLocal_1041[6]), 0, 1))
		{
			if (bParam0)
			{
				task_go_to_entity(&(iLocal_1041[6]), &(iLocal_1041[4]), 20000, 12f, 1.75f, 20f, 0);
			}
			else
			{
				vVar0 = { _get_object_offset_from_coords(vLocal_1001, fVar1007, -7.39f, -3.07f, -0.22f) };
				func_381(&vVar0, 1f);
				task_follow_nav_mesh_to_coord(&(iLocal_1041[6]), vVar0, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			func_43(&uLocal_979, 8388608);
		}
	}
}

bool func_190(bool bParam0)
{
	if ((func_37(iVar976, 67108864) || !func_62(&(iLocal_1041[1]), 0, 1)) || !_is_anim_scene_started(Local_574.f_1, false))
	{
		return false;
	}
	else if ((!func_62(&(iLocal_1041[0]), 0, 1) && !func_62(&(iLocal_1041[2]), 0, 1)) && !func_62(&(iLocal_1041[3]), 0, 1))
	{
		if ((bParam0 && is_ped_in_cover(&(iLocal_1041[1]), 0, 0)) || !bParam0)
		{
			if (func_37(iVar976, 536870912))
			{
				func_176(&uLocal_979, 536870912);
			}
			return true;
		}
		else
		{
			if (!is_ped_in_cover(&(iLocal_1041[1]), 0, 0))
			{
			}
			func_43(&uLocal_979, 536870912);
		}
	}
	return false;
}

void func_191(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_192()
{
	if (!func_37(iVar977, 67108864))
	{
		if (is_ped_in_cover(&(iLocal_1041[1]), 0, 0) && func_435(&(iLocal_1041[1]), 0, &(Local_85.f_5), &iLocal_546, 0, 0))
		{
			func_382();
		}
		else if (func_37(iVar977, 536870912))
		{
			func_382();
		}
	}
}

void func_193()
{
	if (func_62(&(iLocal_1041[1]), 0, 1))
	{
		if ((get_script_task_status(&(iLocal_1041[1]), 1435919172, true) != 1 && iLocal_1128[1]) // PointerArith)
		{
			open_sequence_task(&iVar0);
			task_put_ped_directly_into_cover(0, vLocal_1150, 3000, 0, 0f, 0, 0, uVar1174, 0, 0, 0);
			task_combat_hated_targets_in_area(0, vLocal_1001, 100f, 0, 16);
			func_197(&(iLocal_1041[1]), &iVar0, 0, 0, 1, 1);
		}
	}
}

void func_194(int iParam0)
{
	if (!func_187())
	{
		return;
	}
	switch (iVar1115)
	{
		case 0:
			if (!_does_anim_scene_exist(Local_574.f_1))
			{
			}
			if (!_is_anim_scene_started(Local_574.f_1, false))
			{
			}
			if (_get_anim_scene_entity_matrix(Local_574.f_1, "pedKidnapped", &vLocal_595, true, "pblCutFreePlayerL02", 2))
			{
				iLocal_1118 = 1;
			}
			break;
		case 1:
			if (_does_anim_scene_exist(Local_574.f_1))
			{
				if (_is_anim_scene_started(Local_574.f_1, false))
				{
					if (iParam0 == Global_35)
					{
						if (!func_37(iVar976, 524288) && !func_37(iVar976, 65536))
						{
							if (func_436(&(Local_85.f_162), "RE_PBR_CUT_FREE", vLocal_595, 0, -758364604, 2.5f, 0, 1, 3, 0, 0, 0, 0, 0, 1, 1, 1704213876, 0))
							{
								func_437(iParam0);
								func_50(12, 0, 0, 0, &(iLocal_1041[5]), 0, 1065353216, 0);
								if (iParam0 == Global_35)
								{
									set_player_control(player_id(), false, 256, false);
									set_ped_config_flag(Global_35, 252, false);
									func_43(&uLocal_979, 32768);
								}
								else
								{
									clear_ped_tasks(iParam0, 1, 0);
								}
								if (_get_anim_scene_entity_matrix(Local_574.f_1, "pedPlayer", &Local_583, true, &cLocal_45, 2))
								{
									vLocal_1030 = { Local_583 };
									func_381(&vLocal_1030, 1f);
									fVar0 = Local_583.f_3.f_2;
								}
								else
								{
									fVar0 = func_438(vLocal_1030, get_entity_coords(&(iLocal_1041[5]), true, false));
								}
								set_current_ped_weapon(iParam0, -1569615261, false, 0, false, false);
								if (_get_first_entity_ped_is_carrying(Global_35) != 0)
								{
									_0xed00d72f81cf7278(_get_first_entity_ped_is_carrying(Global_35), 0, 0);
								}
								func_439(iParam0, vLocal_1030, fVar0);
								remove_anim_scene_entity(Local_574.f_1, "pedBountyB", &(iLocal_1041[1]));
								func_31(&uLocal_1187);
								iLocal_1118 = 2;
							}
						}
					}
					else if (!func_37(iVar976, 32768))
					{
						if (func_374(&Local_1059, 106))
						{
							func_177(&(Local_85.f_162), 1, 1);
							func_31(&uLocal_1187);
							iLocal_1118 = 2;
						}
						else if (get_script_task_status(iParam0, 713668775, true) != 1)
						{
							func_437(iParam0);
							set_ped_config_flag(iParam0, 252, false);
							remove_anim_scene_entity(Local_574.f_1, "pedBountyB", &(iLocal_1041[1]));
							task_follow_nav_mesh_to_coord(iParam0, vLocal_1030, 1f, -1, 0.25f, 0, 40000f);
							set_ped_keep_task(iParam0, true);
						}
					}
					else
					{
						clear_ped_tasks(iParam0, 1, 0);
					}
				}
				else if (!func_37(iVar976, 524288))
				{
					func_429();
				}
			}
			break;
		case 2:
			if (func_374(&Local_1059, 106) || (func_440(&uLocal_1187) > 10f && func_37(iVar976, 32768)))
			{
				if (!is_string_null_or_empty(&cLocal_45))
				{
					if (_0x23e33cb9f4a3f547(Local_574.f_1, &cLocal_45))
					{
						_set_anim_scene_playback_list_bool(Local_574.f_1, &cLocal_45, true);
						set_anim_scene_bool(Local_574.f_1, "bAdvanceToBreakout", true, false);
						func_189(0);
						iLocal_1118 = 3;
					}
					else
					{
						_0xdf7b5144e25cd3fe(Local_574.f_1, &cLocal_45);
					}
				}
				else
				{
					func_437(iParam0);
				}
			}
			break;
		case 3:
			func_441();
			break;
	}
}

int func_195()
{
	if (func_37(iVar977, 32768) || func_37(iVar977, 65536))
	{
		return 0;
	}
	if (func_187())
	{
		switch (iVar1131)
		{
			case 0:
				func_31(&uLocal_1181);
				uLocal_1133 = iVar1131 + 1;
				break;
			case 1:
				if (func_32(&uLocal_1181) > 2f && func_183(0, 1, &(iLocal_1041[5]), 0))
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_SAVE_OK_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 2:
				if (func_32(&uLocal_1181) > 4f)
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_SAVE_01_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 3:
				if (func_32(&uLocal_1181) > 9f && func_183(-3f, 1, 0, 0))
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_SAVE_02_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 4:
				if (func_32(&uLocal_1181) > 11f && func_183(to_float(iVar1131), 1, 0, 0))
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 5:
				if (func_32(&uLocal_1181) > 10f && func_183(to_float(iVar1131), 1, 0, 0))
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 6:
				if (func_32(&uLocal_1181) > 8f && func_183(to_float(iVar1131), 1, 0, 0))
				{
					func_131(&(iLocal_1041[5]), Global_35, "RE_PBR_UNI_V1_STRUGGLE_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_31(&uLocal_1181);
					uLocal_1133 = iVar1131 + 1;
				}
				break;
			case 7:
				return 1;
		}
	}
	return 0;
}

int func_196(int iParam0, int iParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

void func_197(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_198()
{
	if (!func_37(iVar983, 32768))
	{
		if (_0x3ab6c7b0bb0df4b1(&(iLocal_1041[4]), -1))
		{
			func_131(&(iLocal_1041[5]), &(iLocal_1041[4]), func_442(1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_131(&(iLocal_1041[5]), Global_35, func_442(0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_43(&uLocal_985, 32768);
	}
}

void func_199()
{
	if (!func_37(iVar983, 8388608))
	{
		if ((func_183(0, 1, Global_35, 1) && !func_430(&(iLocal_1041[4]), 1)) && !func_430(&(iLocal_1041[5]), 1))
		{
			if (((func_62(&(iLocal_1041[5]), 0, 1) && &Local_85.f_98[5] < 25f) || (func_62(&(iLocal_1041[4]), 0, 1) && &Local_85.f_98[4] < 25f)) || func_96(Global_35, vLocal_1001, 1) < 20f)
			{
				if (!func_30(&uLocal_35))
				{
					func_31(&uLocal_35);
				}
				else if (func_32(&uLocal_35) > 1.5f)
				{
					if (func_37(iVar977, 16384))
					{
						if (func_443())
						{
							func_131(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_HELP_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_131(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_HELP_LOW", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (func_443())
					{
						func_131(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_NOHELP_HIGH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_131(Global_35, 0, "RE_PBR_UNI_V1_PLYFINAL_NOHELP_LOW", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					func_43(&uLocal_985, 8388608);
				}
			}
			else
			{
				func_43(&uLocal_985, 8388608);
			}
		}
	}
}

bool func_200()
{
	if (func_62(&(iLocal_1041[7]), 0, 1))
	{
		if (get_mount(&(iLocal_1041[5])) == &iLocal_1041[7])
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_201(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_444(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_202(vector3 vParam0, float fParam3)
{
	bVar0 = false;
	if (func_201(player_id(), 0, 1, 1))
	{
		iVar1 = create_itemset(false);
		_0x0c392db374655176(vParam0, fParam3, iVar1);
		bVar0 = get_itemset_size(iVar1) > 0;
		_0x20a4bf0e09bee146(iVar1);
		clean_itemset(iVar1);
		destroy_itemset(iVar1);
	}
	return bVar0;
}

int func_203()
{
	return Global_1572887->f_12;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_206(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_445();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_446(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_447(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_448())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_449(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_445();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_450(iVar1);
		func_452(func_451(), 0, 4000);
		func_453(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_454(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_456(func_455(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_205(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_457(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_458(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_458(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_456(func_455(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_205(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_457(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_458(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_458(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_455(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_459(10, 1);
	}
}

void func_207(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_208(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(iParam0->f_1), 16384);
	}
	else
	{
		func_56(&(iParam0->f_1), 16384);
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(iParam0->f_1), 2048);
	}
	else
	{
		func_56(&(iParam0->f_1), 2048);
	}
}

void func_210(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_55(&(iParam0->f_1), 128);
	}
	else
	{
		func_56(&(iParam0->f_1), 128);
	}
}

void func_211(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0, 256);
	}
	else
	{
		func_55(iParam0, 256);
	}
}

void func_212(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_56(iParam0, 268435456);
	}
	else
	{
		func_55(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_56(iParam0, 1073741824);
	}
	else
	{
		func_55(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_56(iParam0, 536870912);
	}
	else
	{
		func_55(iParam0, 536870912);
	}
}

var func_213(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_214(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_460(sParam1));
}

void func_215(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

void func_216(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_311(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_203() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_218(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_461(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_462(iVar6);
	}
	return iVar5;
}

int func_219(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_463(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

int func_220()
{
	return &Global_1899515;
}

void func_221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_464(*iParam0);
	iVar1 = func_465(*iParam0);
	iVar2 = func_466(*iParam0);
	iVar3 = func_467(*iParam0);
	iVar4 = func_468(*iParam0);
	iVar5 = func_469(*iParam0);
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
	iVar6 = func_470(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_470(iVar1, iVar0);
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
	func_471(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_222(int iParam0, bool bParam1)
{
	func_472(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_224(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_222(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_225(2, *uParam0);
		}
		else
		{
			func_226(2, *uParam0);
		}
	}
	func_473(uParam0);
}

void func_225(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_226(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

bool func_227(int iParam0, int iParam1)
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
	if (func_37(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_37(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_37(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_37(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_228(var uParam0, int iParam1)
{
	if (func_474(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_229(vector3 vParam0, int iParam3)
{
	if (func_95(vParam0))
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
			if (func_475(vVar2, vParam0, 2f, 1))
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

int func_230(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	if (!func_478(func_477(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_479(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_479(iParam0));
	return 1;
}

int func_231(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	if (!func_478(func_477(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_479(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_479(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_479(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_479(iParam0));
	return 1;
}

int func_232(bool bParam0)
{
	if (bParam0)
	{
		return func_480(Global_1359489->f_4);
	}
	get_group_size(func_427(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_427(), iVar3);
		if (func_481(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_233(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 152, bParam1);
	set_ped_config_flag(iParam0, 53, bParam1);
	set_ped_combat_attributes(iParam0, 83, !bParam1);
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		Var0.f_14 = uParam0;
		Var0 = Global_35;
		Var0.f_7 = func_335();
		Var0.f_8 = 0;
		Var0.f_11 = 100;
		Var0.f_12 = iParam1;
		_0x88bc5f4aef77fc4e(&Var0, 17);
	}
	_0xe737d5f14304a2ec(uParam0, get_player_index(), 120000);
}

void func_235(int* iParam0, var uParam1)
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
	func_482(iParam0, uParam1, 1);
	func_483(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

bool func_236(int iParam0)
{
	return func_276(iParam0, 32, 1);
}

void func_237(int iParam0)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (!func_423(iParam0, 0))
	{
	}
	func_484(iParam0);
	Global_1359489->f_15 = func_232(1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1359489[iVar0] == iParam0)
		{
			(*Global_1359489)[iVar0] = -1;
		}
		iVar0++;
	}
	func_485();
	func_277(iParam0, 32, 1);
	if (func_227(Global_1360165[iParam0], 0))
	{
		set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		set_ped_combat_attributes(Global_1360165[iParam0], 83, false);
		set_ped_config_flag(Global_1360165[iParam0], 152, false);
		Var1 = get_player_ped(get_player_index());
		Var1.f_12 = 8;
		Var1.f_3 = Global_1360165[iParam0];
		Var1.f_7 = func_335();
		Var1.f_8 = 0;
		Var1.f_11 = 10;
		Var1.f_14 = Global_1360165[iParam0];
		_0x88bc5f4aef77fc4e(&Var1, 17);
	}
}

void func_238(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (func_486(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_279(iParam0, 56, 1);
		func_487(&(Global_1359489->f_40), 1);
	}
	func_488(iParam0, 0);
	func_290(iParam0, 4, 0);
	func_489(iParam0);
	func_291(iParam0);
	func_277(iParam0, 37, 1);
	bVar0 = func_227(Global_1360165[iParam0], 0);
	iVar1 = func_490(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_276(iParam0, 64, 1))
	{
		func_277(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_277(iParam0, 33, 1);
		func_277(iParam0, 34, 1);
		func_491(iParam0, 1056964608, -1, 1061158912);
		func_283(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_279(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_279(iParam0, 35, 1);
			if (bParam8)
			{
				func_279(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_492(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_277(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_279(iParam0, 33, 1);
		func_283(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_487(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_180(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_279(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_493(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_276(iParam0, 45, 1))
	{
		func_277(iParam0, 45, 1);
	}
	func_494(iParam0, 16, 1);
	func_277(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_227(func_395(iParam0), 0))
		{
			func_495(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

char* func_239(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_240(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_241(int iParam0, bool bParam1)
{
	if (func_62(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_496(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_242(var uParam0, var uParam1)
{
	if (func_91(uParam0->f_3, 16777216))
	{
		if (func_497(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_243(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_244(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_245(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_62(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_244(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_498(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_246(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_499(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_500(uParam0);
	func_501(uParam0);
	func_57(uParam0);
	if (!func_502(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_229(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_169();
	}
	if (!func_503(uParam0->f_3) && !func_91(uParam0->f_3, 256))
	{
		func_216(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_38(uParam0->f_173);
	func_38(uParam0->f_172);
}

void func_247(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
				Jump @3268; //curOff = 2591
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
				Jump @3268; //curOff = 2652
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
				Jump @3268; //curOff = 2699
				return -2018341642;
				Jump @3268; //curOff = 2710
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3268; //curOff = 2743
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3268; //curOff = 2776
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
				Jump @3268; //curOff = 2823
				return -1618254924;
				Jump @3268; //curOff = 2834
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
				Jump @3268; //curOff = 2881
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
				Jump @3268; //curOff = 2928
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3268; //curOff = 2961
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
				Jump @3268; //curOff = 3008
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
				Jump @3268; //curOff = 3055
				return -2137572125;
				Jump @3268; //curOff = 3066
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
				Jump @3268; //curOff = 3113
				return -774894224;
				Jump @3268; //curOff = 3124
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
				Jump @3268; //curOff = 3171
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
				Jump @3268; //curOff = 3232
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
			}
			else if (iParam0 >= 75 && iParam0 <= 118)
			{
				switch (iParam0)
				{
					case 75:
						return -346537584;
					case 76:
						switch (iParam1)
						{
							case 0:
								return -550739017;
							default:
								break;
						}
						return -1829585536;
					case 77:
						switch (iParam1)
						{
							case 0:
								return -609376390;
							case 1:
								return -311112952;
							case 2:
								return -682765316;
							case 3:
								return -2127446978;
							default:
								break;
						}
						return 1338777472;
					case 78:
						switch (iParam1)
						{
							case 0:
								return 581221752;
							case 1:
								return 20416722;
							default:
								break;
						}
						return 1293249792;
					case 79:
						switch (iParam1)
						{
							case 0:
								return -1786500412;
							default:
								break;
						}
						return 235904384;
					case 80:
						return -334565466;
					case 81:
						switch (iParam1)
						{
							case 0:
								return 31964051;
							case 1:
								return 245875704;
							default:
								break;
						}
						return 1046770304;
					case 82:
						switch (iParam1)
						{
							case 0:
								return 48921735;
							case 1:
								return 1062398415;
							default:
								break;
						}
						return -2047991552;
					case 83:
						return -1752276745;
					case 84:
						switch (iParam1)
						{
							case 0:
								return 418356694;
							case 1:
								return -1090928636;
							default:
								break;
						}
						return -1021157760;
					case 85:
						switch (iParam1)
						{
							case 0:
								return 278246928;
							case 1:
								return 1092461253;
							default:
								break;
						}
						return 900051136;
					case 86:
						return 1417655457;
					case 87:
						switch (iParam1)
						{
							case 0:
								return 188835226;
							case 1:
								return 220332139;
							default:
								break;
						}
						return 1359760512;
					case 88:
						switch (iParam1)
						{
							case 0:
								return -1638860831;
							case 1:
								return -812497188;
							default:
								break;
						}
						return 1616003072;
					case 89:
						return -69702063;
					case 90:
						switch (iParam1)
						{
							case 0:
								return -479871262;
							default:
								break;
						}
						return -1670654720;
					case 91:
						return -331264815;
					case 92:
						return -1217205534;
					case 93:
						switch (iParam1)
						{
							case 0:
								return -1662432355;
							case 1:
								return -368935814;
							default:
								break;
						}
						return -1021345856;
					case 94:
						switch (iParam1)
						{
							case 0:
								return -735413614;
							case 1:
								return -972169639;
							case 2:
								return -673250821;
							case 3:
								return 161473916;
							default:
								break;
						}
						return -1329933952;
					case 95:
						switch (iParam1)
						{
							case 0:
								return -1645068573;
							default:
								break;
						}
						return 1248360320;
					case 96:
						switch (iParam1)
						{
							case 0:
								return 884363685;
							case 1:
								return 368673822;
							case 2:
								return 578628915;
							case 3:
								return 689154642;
							case 4:
								return 471198511;
							case 5:
								return 967199063;
							case 6:
								return -38616787;
							case 7:
								return -1294637989;
							default:
								break;
						}
						return -84111088;
					case 97:
						switch (iParam1)
						{
							case 0:
								return -1639179308;
							case 1:
								return -436408638;
							default:
								break;
						}
						return 1995021696;
					case 98:
						switch (iParam1)
						{
							case 0:
								return 1464772696;
							case 1:
								return 6449957;
							default:
								break;
						}
						return -1853564800;
					case 99:
						switch (iParam1)
						{
							case 0:
								return 803309489;
							case 1:
								return -31873580;
							case 2:
								return -1922690045;
							case 3:
								return 515105064;
							default:
								break;
						}
						return -1759022208;
					case 100:
						return -307424281;
					case 101:
						switch (iParam1)
						{
							case 0:
								return 1006898715;
							case 1:
								return 1573993134;
							default:
								break;
						}
						return -1402545280;
					case 102:
						return -1979014350;
					case 103:
						return 2096137174;
					case 104:
						switch (iParam1)
						{
							case 0:
								return -861435303;
							case 1:
								return 2076430727;
							case 2:
								return -1266577036;
							default:
								break;
						}
						return 493009408;
					case 105:
						return 1152564685;
					case 106:
						switch (iParam1)
						{
							case 0:
								return 2036836823;
							case 1:
								return 2046057828;
							case 2:
								return -526712830;
							case 3:
								return -242317110;
							case 4:
								return 1729814355;
							case 5:
								return 1868875718;
							case 6:
								return -785635151;
							case 7:
								return 1586170447;
							case 8:
								return -291036947;
							default:
								break;
						}
						return -832026176;
					case 107:
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
					case 108:
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
					case 109:
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
					case 110:
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
					case 111:
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
					case 112:
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
					case 113:
						return 1487351956;
					case 114:
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
					case 115:
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
					case 116:
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
					case 117:
						return -689015496;
					case 118:
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}

void func_249(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_203() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_250(int iParam0)
{
	if (((func_251(iParam0, 1) && func_251(iParam0, 2)) && func_251(iParam0, 8)) && func_251(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_251(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_253(var uParam0)
{
	func_43(uParam0, 256);
}

void func_254(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

void func_255(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

bool func_256(var uParam0)
{
	if (!func_504(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_504(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_257(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_271(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_505(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_506(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_258(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_91(iParam0, 32))
	{
		if (func_507(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_508(Global_35, &(uParam1->f_12)) };
				if (!func_95(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_509(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_342(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_343());
		if (func_510(Global_1310750[iParam0], 33554432))
		{
			func_157(iVar0, func_344(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_157(iVar0, func_344(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_91(iParam0, 1))
		{
			func_399(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_511(iParam0);
}

bool func_259(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_512(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_123(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_513(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_513(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_260(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_514(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_91(iParam0, 1))
			{
				if (func_123(iParam0, 2))
				{
				}
			}
			func_515(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_516(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_516(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_118(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_261(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_505(iParam1))
	{
		if (!func_517(iParam1, iVar0))
		{
			vVar4 = { func_257(iParam1, iVar0) };
			if (!func_95(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_266(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_518(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_95(vVar4))
	{
	}
	return vVar1;
}

int func_262(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_52("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_263(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_505(iParam0))
	{
		vVar1 = { func_257(iParam0, iVar0) };
		if (func_475(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_264(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_265(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_402(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_403(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_95(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_519(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_262(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_266(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_260(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_91(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_267(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_268(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_520(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_521(iParam0, uParam2))
	{
		return false;
	}
	if (!func_522(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_523(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_269(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_270(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_271(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_272(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_273(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_55(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

void func_274(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

void func_275(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237->f_11[iParam0]->f_24 = iParam1;
	}
}

bool func_276(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_295(iParam0))
		{
			return false;
		}
	}
	func_524(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_277(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_295(iParam0))
		{
			return;
		}
	}
	func_524(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

bool func_278(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_295(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_279(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_295(iParam0))
		{
			return;
		}
	}
	func_524(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_280(int iParam0, bool bParam1, char* sParam2)
{
	iVar0 = func_426(iParam0);
	if (!func_151(iParam0) || is_entity_dead(iVar0))
	{
		return;
	}
	_0xf1c03a5352243a30(iVar0);
	if (bParam1)
	{
		clear_ped_tasks_immediately(iVar0, false, true);
	}
	else
	{
		clear_ped_tasks(iVar0, 1, 0);
	}
}

void func_281(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_11 = iParam1;
}

bool func_282(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_3)
	{
		case 0:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				request_script_with_name_hash(89040947);
			}
			(*Global_1360165)[iParam0]->f_3 = 1;
		case 1:
			if (!has_script_with_name_hash_loaded(89040947))
			{
				return false;
			}
			if (Global_1359489->f_9 != -1)
			{
				return false;
			}
			Global_1359489->f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_525(iParam0, iParam9, bParam7, 1);
				}
				else if (((*Global_1360165)[iParam0]->f_4.f_2 != 0 && (*Global_1360165)[iParam0]->f_4.f_2 == Global_40.f_4942[iParam0]->f_59) && (func_526((*Global_1360165)[iParam0]->f_4.f_2) || func_527((*Global_1360165)[iParam0]->f_4.f_2)))
				{
					iParam4 = (*Global_1360165)[iParam0]->f_4.f_1;
				}
				else
				{
					iParam4 = func_525(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if ((*Global_1360165)[iParam0]->f_63 != iParam4 && func_528((*Global_1360165)[iParam0]->f_63))
				{
					if (!func_529(iParam0, 0))
					{
						func_279(iParam0, 25, 0);
					}
				}
			}
			(*Global_1360165)[iParam0]->f_4 = { func_530(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0]->f_59, bParam11) };
			if (!bParam6)
			{
				func_277(iParam0, 44, 1);
			}
			(*Global_1360165)[iParam0]->f_3 = 2;
		case 2:
			if (!func_227(func_426(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_227(func_395(iParam0), 0))
				{
					return false;
				}
			}
			(*Global_1360165)[iParam0]->f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_283(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_277(iParam0, 50, 1);
		func_277(iParam0, 48, 1);
		func_277(iParam0, 49, 1);
		func_277(iParam0, 51, 1);
		func_277(iParam0, 52, 1);
		func_277(iParam0, 54, 1);
		func_277(iParam0, 55, 1);
	}
	else
	{
		func_279(iParam0, 50, 1);
		func_279(iParam0, 48, 1);
		func_279(iParam0, 49, 1);
		func_279(iParam0, 51, 1);
		if (bParam3)
		{
			func_279(iParam0, 54, 1);
		}
		else
		{
			func_277(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_279(iParam0, 52, 1);
			if (bParam3)
			{
				func_279(iParam0, 55, 1);
			}
		}
		else
		{
			func_277(iParam0, 52, 1);
			if (!bParam3)
			{
				func_277(iParam0, 55, 1);
			}
		}
	}
}

void func_284(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_531(iParam0, bParam3);
	}
	else
	{
		func_532(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_533(iParam0, bParam3);
	}
	else
	{
		func_534(iParam0, bParam3);
	}
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_151(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_535(iParam0, iParam1);
	return bVar0;
}

void func_286(int iParam0, int iParam1, bool bParam2)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (!func_285(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_279(iParam0, 25, 1);
	}
}

void func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_536(iParam2))
		{
			iVar0 = func_537(iParam2, -1);
			if (func_538(iParam1, iVar0))
			{
				if (func_539(iParam1, iVar0))
				{
					if (func_540(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_541(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_542(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_279(iParam0, 66, 0);
		}
	}
}

void func_288(int iParam0)
{
	func_543(iParam0);
	func_544(iParam0, 0);
}

void func_289(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		set_current_ped_weapon(iParam0, -1569615261, true, 0, false, false);
		set_current_ped_weapon(iParam0, -1569615261, true, 1, false, false);
		if (is_ped_a_player(iParam0) && iParam1 == 1)
		{
			if (is_player_playing(player_id()))
			{
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			}
		}
	}
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	if (!func_295(iParam0))
	{
		return;
	}
	func_545(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

void func_291(int iParam0)
{
	func_279(iParam0, 36, 1);
}

bool func_292(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		get_current_ped_weapon(iParam0, &iVar1, true, iVar0, true);
		if (!is_weapon_valid(iVar1))
		{
		}
		else if (!_is_weapon_two_handed(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			_0xe9bd19f8121ade3e(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_293(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0]->f_3 == -1341683964)
			{
				func_306(iParam1, 1240907314, 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_306(iParam1, -2088446466, 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_151(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_295(int iParam0)
{
	return iParam0 > -1;
}

int func_296(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	if (!func_295(iParam1))
	{
		return 0;
	}
	iVar0 = func_395(iParam1);
	if ((!does_entity_exist(iVar0) || !func_227(iVar0, 0)) || (bParam3 && !func_546(iParam1)))
	{
		if (bParam2)
		{
			if (func_547(iParam1, 1) != 0)
			{
				iVar0 = func_548(iParam1, bParam3, bParam8, uParam9, uParam10, uParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (does_entity_exist(iVar0) && func_227(iVar0, 0))
	{
		*uParam0 = 2;
		(*Global_1360165)[iParam1]->f_70.f_2 = 0;
		func_549(iParam1, iVar0);
		func_550(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

bool func_297()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_298(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_551(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_552(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_553(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_554(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_106(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_551(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_552(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_555(&(uParam0->f_22)));
					Var2 = { func_551(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_552(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_553(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_556(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_104(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

void func_299(var uParam0, bool bParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_557(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_300(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_301(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_302(var uParam0)
{
	return uParam0;
}

bool func_303(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_304(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_305(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_306(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_558(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_558(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_203() == -1 && !func_559(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_559(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_558(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_560(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_561(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_562(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_309(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_310(int iParam0, int iParam1)
{
	if (!func_309(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

int func_311(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

Vector3 func_312(var uParam0)
{
	return uParam0->f_51;
}

bool func_313()
{
	return &Global_1935436 == 2;
}

void func_314(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_315(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_91(iParam0, 2))
	{
		func_564(iParam0, func_563(iParam1));
	}
	else
	{
		func_566(iParam0, func_565());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_567(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_568(iParam0, 0);
	func_569(iParam0);
	func_570(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_91(iParam0, 16))
	{
		func_316(iParam0, 0, 0, 0, 0);
	}
}

void func_316(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_571() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_271(iVar1) && !func_91(iVar1, iParam2)) && (!bParam3 || !func_332(iVar1))) && (!bParam4 || !func_572(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_573(iVar0);
			}
		}
		iVar0++;
	}
}

int func_317(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_318(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_510(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_91(uParam0->f_3, 1073741824))
			{
				func_574(2, -1, 0, 0, 0);
			}
			else
			{
				func_574(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_574(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_575(1, uParam0->f_177))
				{
					func_576(16, uParam0->f_177);
					func_577(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_578(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_574(8, -1, 0, 0, 0);
	}
}

int func_319()
{
	if (func_558(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_579())
		{
			return 1;
		}
	}
	return 0;
}

bool func_320(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

float func_321(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_91(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_91(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_91(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_91(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_91(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_91(uParam0->f_3, 1))
		{
		}
		else if (func_91(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_322(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_580(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_581(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_116() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_323(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_125(uParam0);
	return true;
}

bool func_324()
{
	return (Global_1894899 & 1 != 0 && func_335() != -1);
}

bool func_325(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_326(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_467(func_220());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_327(int iParam0, int iParam1)
{
	return (func_317(iParam0) && iParam1) != 0;
}

bool func_328(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_582(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_583(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_584(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_585(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_586(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_587(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_588(iVar3))
	{
		return true;
	}
	return false;
}

bool func_329(bool bParam0)
{
	if (func_589(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_330(int iParam0)
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

bool func_331(int iParam0, bool bParam1, bool bParam2)
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
		if (func_590())
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
		iVar0 = func_591(&(Global_1898164->f_1[0]));
		if (func_592(iVar0) && func_593((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_594(&(Global_1898164->f_1[0])))
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

bool func_332(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	if (func_595(64) && func_596(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_333(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_597(iVar0) || func_598(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_334()
{
	return Global_1894899 & 4 != 0;
}

int func_335()
{
	return Global_1894899->f_2;
}

int func_336(int iParam0)
{
	if (!func_599(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_337(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_338(vector3 vParam0, int iParam3)
{
	if (!func_337(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_339(vector3 vParam0)
{
	if (func_95(vParam0))
	{
		return false;
	}
	fVar0 = func_244(func_324(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_340(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_31(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_31(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_30(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_600(uParam0, fParam2))
		{
			return true;
		}
		if (func_30(uParam0))
		{
			func_180(uParam0);
		}
	}
	return false;
}

bool func_341(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

float func_342(int iParam0)
{
	if (!func_271(iParam0))
	{
		return 0f;
	}
	if (!func_601(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_343()
{
	return "unnamed";
}

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

bool func_345(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_602(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_435(iParam0[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_346(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_602(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_603(iParam0[*uParam3], iParam1, iParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

int func_347(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_324())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_604(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_164(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_31(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_605(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_607(func_606(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_348(int iParam0)
{
	if (!func_271(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 1;
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_350(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fParam5 = func_608(vParam1, fParam5);
	fVar0 = func_609(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		_0x9ddc222d85d5af2a(*uParam0, uParam0->f_3);
		set_particle_fx_looped_alpha(*uParam0, fVar0);
	}
}

void func_351(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	fVar0 = (IntToFloat((get_frame_count() - uParam0->f_4)) / 150f);
	if (fVar0 >= 1f)
	{
		func_56(&(uParam0->f_1), 16);
		func_350(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_608(vParam1, fParam5);
		fVar1 = func_609(fParam5, iParam4);
		fVar3 = func_610(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_610(0f, fVar1, fVar0);
	}
	_0x9ddc222d85d5af2a(*uParam0, fVar3);
	set_particle_fx_looped_alpha(*uParam0, fVar2);
}

float func_352(float fParam0)
{
	fVar0 = func_611(fParam0);
	return fVar0;
}

float func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 300f;
		case 2:
			return 1000f;
		default:
			break;
	}
	return 300f;
}

float func_354(float fParam0)
{
	fVar0 = func_611(fParam0);
	return fVar0;
}

float func_355(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 25f;
		case 1:
			return 40f;
		case 3:
			return 200f;
		case 4:
			return 180f;
		case 2:
			return 150f;
		default:
			break;
	}
	return 128f;
}

float func_356(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 0.8f;
		case 4:
			return 0.5f;
		case 0:
			return 0.6f;
		case 2:
			return 0.9f;
		default:
			break;
	}
	return 1f;
}

float func_357(vector3 vParam0, bool bParam3)
{
	vVar0 = { func_612(0) };
	vVar3 = { func_613(vParam0 - get_gameplay_cam_coord()) };
	if (bParam3)
	{
		return absf(get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return get_angle_between_2d_vectors(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

void func_358()
{
	if (func_37(iVar955, 256))
	{
		return;
	}
	if (&iLocal_958[4] > 0)
	{
		if (func_37(iVar955, 512))
		{
			iLocal_967[4] = func_387(iLocal_1041[4], Local_632[4], 20f, &Local_801, &(Local_85.f_192), 0, 1, 0, "", func_386(2, 0, 0) | 16777216, 0, 0, 2, 0, -1082130432, 0);
		}
		else
		{
			iLocal_967[4] = func_387(iLocal_1041[4], Local_632[4], 20f, &Local_801, &(Local_85.f_192), 0, 1, 0, "", func_386(3, 0, 0) | 16777216, 0, 0, 2, 0, -1082130432, 0);
		}
	}
	switch (&iLocal_958[4])
	{
		case 0:
			func_235(Local_632[4], &Local_801);
			func_389(Local_801[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
			func_389(Local_801[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
			func_390(Local_801[0], 0, 0);
			func_390(Local_801[1], 0, 0);
			iLocal_958[4] = 1;
			break;
		case 1:
			if (func_37(iVar977, 4096))
			{
				func_614(Local_632[4], 0);
				func_389(Local_801[0], func_388(4), "", -163964935, 0, 0, 0, 1, 0);
				func_389(Local_801[1], func_388(1), "", 648122183, 0, 0, 0, 1, 0);
				func_390(Local_801[0], 1, 0);
				func_390(Local_801[1], 1, 0);
				func_43(&uLocal_957, 512);
				iLocal_958[4] = 2;
			}
			break;
		case 2:
			if (!func_37(iVar977, 256) && !func_37(iVar977, 134217728))
			{
				switch (&iLocal_967[4])
				{
					case 0:
						func_42();
						func_614(Local_632[4], 0);
						func_390(Local_801[0], 0, 0);
						func_390(Local_801[1], 0, 0);
						func_43(&uLocal_957, 2);
						func_176(&uLocal_957, 512);
						iLocal_958[4] = 3;
						break;
					case 1:
						func_43(&uLocal_979, 128);
						func_614(Local_632[4], 0);
						func_390(Local_801[0], 0, 0);
						func_390(Local_801[1], 0, 0);
						func_176(&uLocal_957, 512);
						iLocal_958[4] = 3;
						break;
				}
			}
			else
			{
				func_614(Local_632[4], 0);
				func_390(Local_801[0], 0, 0);
				func_390(Local_801[1], 0, 0);
				func_176(&uLocal_957, 512);
				iLocal_958[4] = 3;
			}
			break;
		case 3:
			if (!func_30(&uLocal_29))
			{
				func_31(&uLocal_29);
			}
			else if (func_32(&uLocal_29) > 3f)
			{
				if (!func_615(player_id(), iLocal_1041[4]))
				{
					func_235(Local_632[4], &Local_801);
					func_389(Local_801[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
					if (func_37(iVar977, 16384))
					{
						func_389(Local_801[1], func_388(1), "", 648122183, 0, 0, 0, 1, 0);
						func_390(Local_801[1], 1, 0);
					}
					else
					{
						func_389(Local_801[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
						func_390(Local_801[1], 0, 0);
					}
					func_390(Local_801[0], 0, 0);
					iLocal_958[4] = 4;
				}
			}
			break;
		case 4:
			if (func_37(iVar977, 131072) && iVar580 > 15)
			{
				func_390(Local_801[0], 0, 0);
				func_390(Local_801[1], 0, 0);
				iLocal_958[4] = 5;
			}
			else if (func_37(iVar955, 2))
			{
				if (is_any_speech_playing(Global_35))
				{
					if (func_616(Local_801[1], 1, 0))
					{
						func_390(Local_801[1], 0, 0);
					}
				}
				else if (!func_616(Local_801[1], 1, 0))
				{
					func_390(Local_801[1], 1, 0);
				}
				switch (&iLocal_967[4])
				{
					case 0:
						break;
					case 1:
						func_176(&uLocal_979, 16384);
						func_43(&uLocal_979, 128);
						func_43(&uLocal_957, 1024);
						func_171(1);
						func_390(Local_801[0], 0, 0);
						func_390(Local_801[1], 0, 0);
						func_176(&uLocal_957, 2);
						break;
				}
			}
			else
			{
				if (func_616(Local_801[1], 1, 0))
				{
					func_390(Local_801[1], 0, 0);
				}
				if (!func_37(iVar955, 2048))
				{
					if (!func_615(player_id(), iLocal_1041[4]))
					{
						func_235(Local_632[4], &Local_801);
						func_389(Local_801[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
						func_389(Local_801[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
						func_390(Local_801[0], 0, 0);
						func_390(Local_801[1], 0, 0);
						func_43(&uLocal_957, 2048);
					}
				}
			}
			break;
		case 5:
			if (!func_30(&uLocal_29))
			{
				func_31(&uLocal_29);
			}
			else if (!func_615(player_id(), iLocal_1041[4]))
			{
				if (func_32(&uLocal_29) > 3f)
				{
					func_235(Local_632[4], &Local_801);
					func_389(Local_801[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
					func_389(Local_801[1], func_388(10), "", 648122183, 0, 0, 0, 1, 0);
					func_390(Local_801[0], 0, 0);
					func_390(Local_801[1], 0, 0);
					iLocal_958[4] = 6;
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (func_183(-2f, 1, Global_35, 1))
			{
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_ILO_JAV_END", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_958[4] = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_359(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_360(var uParam0, float fParam1)
{
	if (func_600(uParam0, fParam1))
	{
		func_180(uParam0);
		return true;
	}
	return false;
}

bool func_361()
{
	if (func_37(iVar977, 16384))
	{
		return false;
	}
	if ((func_37(iVar977, 128) || func_37(iVar977, 256)) || is_ped_in_combat(Global_35, 0))
	{
		if (!func_30(&uLocal_32))
		{
			func_31(&uLocal_32);
			if (is_ped_in_combat(Global_35, 0))
			{
				func_617(&uLocal_32, 3f, 1);
				vLocal_1018 = { get_entity_coords(&(iLocal_1041[4]), true, false) };
				func_43(&uLocal_979, 134217728);
			}
		}
		else if ((func_32(&uLocal_32) > 3f && func_183(0, 1, Global_35, 1)) || (func_37(iVar977, 134217728) && func_32(&uLocal_32) > 1f))
		{
			func_618();
			func_25();
			return true;
		}
	}
	return false;
}

bool func_362()
{
	if (func_37(iVar977, 128))
	{
		return false;
	}
	switch (iVar1132)
	{
		case 0:
			if (func_30(&uLocal_1178))
			{
				if (func_32(&uLocal_1178) > 11f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_WAIT", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					task_play_anim(&(iLocal_1041[4]), &(Local_78[0]), "line_03_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
					func_31(&uLocal_1178);
					uLocal_1134 = iVar1132 + 1;
				}
			}
			else
			{
				func_31(&uLocal_1178);
			}
			break;
		case 1:
			if (func_32(&uLocal_1178) > 10f)
			{
				func_401();
				task_play_anim(&(iLocal_1041[4]), &(Local_78[0]), "line_04_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
				func_43(&uLocal_979, 256);
				func_43(&uLocal_985, 16384);
				func_31(&uLocal_1178);
				uLocal_1134 = iVar1132 + 1;
			}
			break;
		case 2:
			if (func_32(&uLocal_1178) > 4f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_363(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14)
{
	if (iParam3 != 0 && iParam1 != 0)
	{
		fVar0 = func_164(iParam1, iParam3, 1, 1);
		fVar1 = func_96(iParam3, vParam4, 0);
	}
	fVar2 = func_96(iParam1, vParam4, 0);
	if (is_ped_in_combat(Global_35, 0))
	{
		if (*uParam0 != 2)
		{
			*uParam0 = 2;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_619())
			{
				if (((iParam3 != 0 && fVar0 <= fParam7) || fVar1 < fVar2) || iParam3 == 0)
				{
					if (func_62(iParam2, 0, 1) && get_mount(iParam1) != iParam2)
					{
						if (get_script_task_status(iParam1, 1868526510, true) != 1)
						{
							task_mount_animal(iParam1, iParam2, 20000, -1, 1073741824, 1, 0, 0);
						}
					}
					else if (!is_string_null_or_empty(sVar983))
					{
						task_follow_waypoint_recording(iParam1, sVar983, 0, 1052, -1, 0, 0, -1);
						*uParam0 = 1;
					}
					else
					{
						task_follow_nav_mesh_to_coord(iParam1, vLocal_1001, fParam11, iParam14, 0.25f, 4, 40000f);
						*uParam0 = 1;
					}
					func_25();
				}
			}
			break;
		case 1:
			if (_does_volume_exist(iVar1022) && func_619())
			{
				clear_ped_tasks(iParam1, 1, 0);
				func_196(iParam1, iParam3, -1);
				func_131(iParam1, Global_35, "RE_PBR_UNI_V1_LOUD_WAIT_FOR_TRAIN", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				*uParam0 = 0;
			}
			else
			{
				func_620();
				if (func_62(iParam2, 0, 1) && get_mount(iParam1) != iParam2)
				{
					*uParam0 = 0;
				}
				else if (((fVar0 > (fParam7 + 10f) && fVar1 > fVar2) && func_37(iVar962, 16384)) && fVar2 > fParam8)
				{
					if (func_183(0, 1, &(iLocal_1041[4]), 1) && func_183(0, 1, Global_35, 1))
					{
						clear_ped_tasks(iParam1, 1, 0);
						func_196(iParam1, iParam3, -1);
						func_621();
						*uParam0 = 0;
					}
				}
				else if (fVar2 < fParam8 || (!func_95(vLocal_1007) && func_96(iParam1, vLocal_1007, 1) < 3f))
				{
					*uParam0 = 3;
				}
				else
				{
					if (func_37(iVar962, 16384))
					{
						func_622();
					}
					if (fVar2 <= fParam12 || (!is_ped_on_mount(Global_35) && !is_ped_in_any_vehicle(Global_35, false)))
					{
						fVar3 = fParam13;
					}
					else if (fVar1 > fParam10 && fVar0 < (fParam7 - 5f))
					{
						fVar3 = fParam9;
					}
					else
					{
						fVar3 = fParam11;
					}
					if (func_62(iParam1, 0, 1))
					{
						if (is_string_null_or_empty(sVar983))
						{
							if (get_ped_desired_move_blend_ratio(iParam1) != fVar3)
							{
								set_ped_desired_move_blend_ratio(iParam1, fVar3);
							}
						}
						else if (is_waypoint_playback_going_on_for_ped(iParam1, 0))
						{
							waypoint_playback_override_speed(iParam1, fVar3, 0, -1082130432, 0);
						}
					}
				}
			}
			break;
		case 2:
			if (is_ped_in_combat(Global_35, 0))
			{
				if (get_script_task_status(iParam1, -2117564886, true) != 1)
				{
					if (iParam1 != Global_35)
					{
						clear_ped_tasks(iParam1, 1, 0);
						register_hated_targets_around_ped(iParam1, 30f);
						task_combat_hated_targets(iParam1, -1f);
					}
				}
			}
			else
			{
				clear_ped_tasks(iParam1, 1, 0);
				*uParam0 = 0;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_364(int iParam0)
{
	set_current_ped_weapon(iParam0, get_best_ped_weapon(iParam0, false, false), false, 0, false, false);
	open_sequence_task(&iVar0);
	task_stand_still(0, 1000);
	task_dismount_animal(0, 0, 0, 0, 0, 0);
	task_swap_weapon(0, 1, 0, 0, 0);
	task_set_crouch_movement(0, true, 0, false);
	task_follow_nav_mesh_to_coord(0, vLocal_1024, 1f, -1, 0.25f, 0, fVar1024);
	task_aim_at_coord(0, vLocal_1001, -1, 1, 0);
	func_197(iParam0, &iVar0, 0, 0, 1, 1);
	set_ped_keep_task(iParam0, true);
}

void func_365(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_426(iParam0);
	sVar1 = func_371(iParam0, 0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (bParam1 && Global_1935630->f_12)
	{
		return;
	}
	if (bParam4 && !func_623(iParam0))
	{
		return;
	}
	if (!bParam1 && !func_276(iParam0, 37, 1))
	{
		return;
	}
	if (does_group_exist(get_player_group(player_id())) || (!bParam1 && Global_1935630->f_12))
	{
		if (!Global_1935630->f_12)
		{
			set_ped_config_flag(Global_35, 155, bParam1);
		}
		if (bParam1)
		{
			if (!func_423(iParam0, 0))
			{
				if (is_ped_in_group(iVar0))
				{
					remove_ped_from_group(iVar0);
				}
				func_178(iParam0, bParam5);
			}
		}
		else
		{
			func_237(iParam0);
		}
		if (bParam1)
		{
			_0x2917e634206b9e17(iVar0, iParam3);
		}
		if (bParam1)
		{
			func_279(iParam0, 37, 1);
		}
		else
		{
			func_277(iParam0, 37, 1);
		}
	}
}

void func_366(int iParam0)
{
	if (!func_37(iVar976, 2048))
	{
		if (func_37(iVar976, 16777216))
		{
			if (!is_any_speech_playing(&(iLocal_1041[4])))
			{
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_ON_FOOT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_43(&uLocal_979, 2048);
			}
		}
	}
	if (!func_37(iVar982, 4096))
	{
		if (func_62(&(iLocal_1041[4]), 0, 1))
		{
			if (get_script_task_status(&(iLocal_1041[4]), 242628503, true) == 1)
			{
				if (get_sequence_progress(&(iLocal_1041[4])) == 5)
				{
					func_624();
					if (func_62(iParam0, 0, 1))
					{
						if ((func_183(-1f, 1, &(iLocal_1041[4]), 0) && func_625(&(iLocal_1041[4]), iParam0) < 15f) || func_37(iVar982, 512))
						{
							func_43(&uLocal_985, 4096);
						}
					}
					else
					{
						func_43(&uLocal_985, 4096);
					}
				}
				else if (!func_37(iVar982, 1024) && func_37(iVar976, 16384))
				{
					if (!is_any_speech_playing(&(iLocal_1041[4])) && func_164(&(iLocal_1041[4]), &(iLocal_1041[6]), 1, 1) > 5f)
					{
						func_131(&(iLocal_1041[4]), iParam0, "RE_PBR_UNI_V1_STAKE", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_43(&uLocal_985, 1024);
					}
				}
			}
		}
	}
	else if (!func_30(&uLocal_1196))
	{
		func_31(&uLocal_1196);
	}
	else if (!func_37(iVar976, -2147483648))
	{
		if (func_32(&uLocal_1196) > 30f || iParam0 == 0)
		{
			if (get_script_task_status(&(iLocal_1041[4]), 167901368, true) != 1)
			{
				func_43(&uLocal_979, -2147483648);
				if (func_37(iVar982, 512))
				{
					task_go_to_entity_while_aiming_at_entity(&(iLocal_1041[4]), &(iLocal_1041[0]), &(iLocal_1041[0]), 2f, 1, 1056964608, 1082130432, 1, 0, -687903391, 0);
				}
				else
				{
					task_shoot_at_entity(&(iLocal_1041[4]), &(iLocal_1041[0]), -1, -957453492, 0);
				}
				func_31(&uLocal_1196);
			}
		}
		else
		{
			func_626(iParam0);
		}
	}
	else if (func_32(&uLocal_1196) > 1.5f)
	{
		iLocal_28 = 10;
	}
}

void func_367()
{
	if (!func_37(iVar983, 65536))
	{
		if (func_37(iVar955, 1024))
		{
			fVar0 = 45f;
		}
		else
		{
			fVar0 = 10f;
		}
		if (((func_164(Global_35, &(iLocal_1041[4]), 1, 1) < 15f && func_96(&(iLocal_1041[4]), vLocal_1018, 1) > fVar0) && !is_any_speech_playing(&(iLocal_1041[4]))) && !is_ped_in_combat(Global_35, 0))
		{
			if (!func_30(&uLocal_1199))
			{
				func_31(&uLocal_1199);
			}
			else if (func_32(&uLocal_1199) > 3f || func_96(&(iLocal_1041[4]), vLocal_1001, 1) < 40f)
			{
				func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_CHANGE_MIND", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_43(&uLocal_985, 65536);
				func_31(&uLocal_1199);
			}
		}
		else if (func_30(&uLocal_1199))
		{
			func_180(&uLocal_1199);
		}
	}
	else if (!func_37(iVar983, 131072))
	{
		if (func_32(&uLocal_1199) > 2.5f)
		{
			func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_CHANGE_HEART", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_31(&uLocal_1199);
			func_43(&uLocal_985, 131072);
		}
	}
	else if (func_360(&uLocal_1199, 1.75f))
	{
		func_42();
		func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_CHANGE_HEART_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_176(&uLocal_979, 128);
		func_176(&uLocal_979, 256);
		func_176(&uLocal_957, 1024);
		_0xac22aa6df4d1c1de(player_id(), &(iLocal_1041[4]), -1082130432, -1082130432, 3, 3, 0);
		iLocal_28 = 7;
	}
}

void func_368(int iParam0, int iParam1)
{
	open_sequence_task(&iVar0);
	if (is_ped_on_mount(iParam0))
	{
		task_dismount_animal(0, 0, 0, 0, 0, 0);
	}
	task_go_to_entity_while_aiming_at_entity(0, iParam1, iParam1, 1f, 0, 1f, 1082130432, 1, 0, -687903391, 0);
	func_627(0, iParam1, -1, 0, 0, 1);
	func_197(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_369()
{
	if (&Local_85.f_98[5] > 12f || ((&Local_85.f_98[5] > 8f && func_96(&(iLocal_1041[4]), vLocal_1030, 1) < 4f) && !is_entity_occluded(&(iLocal_1041[4]))))
	{
		return true;
	}
	return false;
}

void func_370()
{
	if (func_187())
	{
		if (!func_37(iVar977, 32768))
		{
			func_437(&(iLocal_1041[4]));
			if (_get_anim_scene_entity_matrix(Local_574.f_1, "pedPlayer", &Local_583, true, &cLocal_45, 2))
			{
				vLocal_1030 = { Local_583 };
				func_381(&vLocal_1030, 1f);
				fVar0 = Local_583.f_3.f_2;
			}
			else
			{
				fVar0 = func_438(vLocal_1030, get_entity_coords(&(iLocal_1041[5]), true, false));
			}
			func_439(&(iLocal_1041[4]), vLocal_1030, fVar0);
		}
	}
}

char* func_371(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_628((*Global_1835011)[59]->f_1, 1) || func_628((*Global_1347702)[1]->f_15, 1)) || func_527((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_629(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_372()
{
	if (!func_95(vLocal_1030))
	{
		if ((((func_96(&(iLocal_1041[4]), vLocal_1030, 1) > 3f && get_script_task_status(&(iLocal_1041[4]), 713668775, true) != 1) && func_96(Global_35, vLocal_1030, 1) > 1f) && get_script_task_status(&(iLocal_1041[4]), -962766111, true) != 1) && get_script_task_status(&(iLocal_1041[4]), 1532415627, true) != 1)
		{
			task_follow_nav_mesh_to_coord(&(iLocal_1041[4]), vLocal_1030, 1f, -1, 3f, 0, 40000f);
		}
	}
}

void func_373()
{
	if (!func_37(iVar977, 65536))
	{
		vVar1 = { _get_object_offset_from_coords(vLocal_1001, fVar1008, -2.54f, -2.64f, -0.02f) };
		func_381(&vVar1, 1f);
		open_sequence_task(&iVar0);
		task_set_crouch_movement(0, false, 0, false);
		task_follow_nav_mesh_to_coord(0, vVar1, 1f, 20000, 0.25f, 0, 40000f);
		task_turn_ped_to_face_entity(0, &(iLocal_1041[5]), -1, -1f, -1f, -1082130432);
		func_197(&(iLocal_1041[4]), &iVar0, 0, 0, 1, 1);
	}
}

bool func_374(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0->f_1) && !func_2(iParam0->f_23, 4))
	{
		set_ped_reset_flag(iParam0->f_1, 179, true);
	}
	switch (*iParam0)
	{
		case 0:
			if (!is_entity_dead(iParam0->f_1))
			{
				func_31(&(iParam0->f_5));
				if (is_ped_a_player(iParam0->f_1))
				{
					set_player_control(get_player_index(), false, iParam0->f_3, false);
					if (func_2(iParam0->f_23, 2048))
					{
						_display_hud_component(724769646);
					}
				}
				if (iParam0->f_24 == 0)
				{
					_set_ped_crouch_movement(Global_35, false, 0, false);
				}
				if (!func_2(iParam0->f_23, 4))
				{
					clear_ped_secondary_task(iParam0->f_1);
				}
				if (!func_2(iParam0->f_23, 2))
				{
					iParam0->f_2 = _get_last_mount(iParam0->f_1);
					if (!is_entity_dead(iParam0->f_2) && func_630(iParam0->f_1))
					{
						func_631(iParam0->f_1);
						iVar0 = func_632(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						task_dismount_animal(iParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (is_ped_in_any_vehicle(iParam0->f_1, true))
					{
						iVar2 = get_vehicle_ped_is_in(iParam0->f_1, true);
						bring_vehicle_to_halt(iVar2, 5f, -1, false);
						iVar3 = func_632(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						task_leave_any_vehicle(iParam0->f_1, 0, iVar4);
					}
					else
					{
						func_56(&(iParam0->f_23), 2);
					}
				}
				if (func_95(iParam0->f_14))
				{
					iParam0->f_14 = { iParam0->f_8 };
				}
				func_633(iParam0, 1, iParam1);
			}
			else
			{
				func_633(iParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_634(iParam0, iParam1))
			{
				func_31(&(iParam0->f_5));
				if (!func_635(iParam0, iParam1))
				{
					func_636();
				}
				func_633(iParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_635(iParam0, iParam1))
			{
				func_31(&(iParam0->f_5));
				if (!func_2(iParam0->f_23, 4))
				{
					set_current_ped_weapon(iParam0->f_1, -1569615261, false, 0, false, false);
					set_current_ped_weapon(iParam0->f_1, -1569615261, false, 1, false, false);
					task_swap_weapon(iParam0->f_1, 1, func_2(iParam0->f_23, 512), 0, 0);
				}
				func_633(iParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_637(iParam0, iParam1))
			{
				func_31(&(iParam0->f_5));
				if (!_is_ped_carrying(iParam0->f_1))
				{
					func_56(&(iParam0->f_23), 256);
				}
				if (func_2(iParam0->f_23, 4096) && !_is_ped_carrying(iParam0->f_1))
				{
					func_56(&(iParam0->f_23), 256);
					iVar6 = _get_last_mount(iParam0->f_1);
					if (func_164(iVar6, iParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_638(iVar6);
						task_pickup_carriable_entity(iParam0->f_1, iVar5);
					}
				}
				else if (!func_2(iParam0->f_23, 256))
				{
					iVar5 = _get_first_entity_ped_is_carrying(iParam0->f_1);
					task_place_carried_entity_at_coord(iParam0->f_1, iVar5, iParam0->f_14, iParam0->f_21, iParam0->f_4);
				}
				func_633(iParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_639(iParam0, iParam1))
			{
				func_31(&(iParam0->f_5));
				if (func_2(iParam0->f_23, 8192))
				{
					if (func_2(iParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					task_enter_anim_scene(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_95(iParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!func_2(iParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					open_sequence_task(&iVar9);
					if (!func_95(iParam0->f_11))
					{
						if (func_2(iParam0->f_23, 16))
						{
							task_go_straight_to_coord(0, iParam0->f_11, iParam0->f_21, func_607(!func_2(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
						}
						else
						{
							task_follow_nav_mesh_to_coord(0, iParam0->f_11, iParam0->f_21, func_607(!func_2(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
						}
					}
					if (func_2(iParam0->f_23, 16))
					{
						task_go_straight_to_coord(0, iParam0->f_8, iParam0->f_21, func_607(!func_2(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
					}
					else
					{
						task_follow_nav_mesh_to_coord(0, iParam0->f_8, iParam0->f_21, func_607(!func_2(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
					}
					if (func_2(iParam0->f_23, 1))
					{
						task_achieve_heading(0, iParam0->f_19, 0);
					}
					func_197(iParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_633(iParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_2(iParam0->f_23, 8192))
			{
				if (_0x337f1cc8ee895601(iParam0->f_25, &(iParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_2(iParam0->f_23, 1))
			{
				iParam0->f_19 = get_entity_heading(iParam0->f_1);
			}
			if (!func_2(iParam0->f_23, 128) && func_360(&(iParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_2(iParam0->f_23, 8192))
			{
				if (get_script_task_status(iParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((func_95(iParam0->f_11) || !func_640(iParam0->f_1, 242628503)) || get_sequence_progress(iParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_641(iParam0->f_1, iParam0->f_8, iParam0->f_19, iParam0->f_18, iParam0->f_20, func_2(iParam0->f_23, 8)) && (!func_2(iParam0->f_23, 64) || absf(func_642(iParam0->f_1, iParam0->f_8)) < iParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_2(iParam0->f_23, 32))
				{
					task_turn_ped_to_face_coord(iParam0->f_1, iParam0->f_8, 0);
				}
				func_180(&(iParam0->f_5));
				func_633(iParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_375()
{
	set_anim_scene_entity(Local_574.f_1, "pedPlayer", &(iLocal_1041[4]), 0);
}

bool func_376()
{
	if (func_37(iVar977, 2))
	{
		return true;
	}
	if (!func_95(vLocal_1001))
	{
		if (_0x6bfbdc46139c45ab(vLocal_1001))
		{
			func_43(&uLocal_979, 2);
			return true;
		}
	}
	return false;
}

int func_377()
{
	switch (iVar984)
	{
		case 0:
			Local_574 = _create_anim_scene(Local_574.f_4, 64, 0, false, true);
			Local_574.f_1 = _create_anim_scene(Local_574.f_5, 64, "pblCutFreePlayerL02", false, true);
			func_108(&(iLocal_1041[1]), -1101297303, -1, 1, 0, 1056964608, 1065353216, 0);
			set_anim_scene_origin(iVar572, vLocal_1001, 0f, 0f, uVar1008, 2);
			set_anim_scene_entity(iVar572, "pedBountyA", &(iLocal_1041[0]), 0);
			set_anim_scene_entity(iVar572, "pedBountyB", &(iLocal_1041[1]), 0);
			set_anim_scene_entity(iVar572, "pedKidnapped", &(iLocal_1041[5]), 0);
			if (does_entity_exist(Local_549[1]->f_8))
			{
				set_anim_scene_entity(iVar572, "rope", Local_549[1]->f_8, 0);
			}
			set_anim_scene_origin(Local_574.f_1, vLocal_1001, 0f, 0f, uVar1008, 2);
			set_anim_scene_entity(Local_574.f_1, "pedBountyB", &(iLocal_1041[1]), 0);
			set_anim_scene_entity(Local_574.f_1, "pedKidnapped", &(iLocal_1041[5]), 0);
			set_anim_scene_entity(Local_574.f_1, "pedPlayer", Global_35, 0);
			if (does_entity_exist(Local_549[1]->f_8))
			{
				set_anim_scene_entity(Local_574.f_1, "rope", Local_549[1]->f_8, 0);
			}
			load_anim_scene(iVar572);
			load_anim_scene(Local_574.f_1);
			uLocal_986 = iVar984 + 1;
			break;
		case 1:
			if (func_188(1))
			{
				func_643();
				uLocal_986 = iVar984 + 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_378()
{
	if (func_37(iVar977, 2))
	{
		func_109(0);
	}
}

void func_379(int iParam0)
{
	if (func_37(iVar954, 8))
	{
		return;
	}
	if (Local_85.f_46)
	{
		if (!func_37(iVar954, 8))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_235(Local_632[iVar0], &Local_853);
				iVar0++;
			}
			func_43(&uLocal_957, 8);
			return;
		}
		return;
	}
	if (&iLocal_958[iParam0] > 0)
	{
		iLocal_967[iParam0] = func_387(iLocal_1041[iParam0], Local_632[iParam0], 35f, &Local_853, &(Local_85.f_192), 0, 1, 0, 0, func_386(3, 0, 0), 0, 0, 2, 1, -1082130432, 0);
	}
	switch (&iLocal_958[iParam0])
	{
		case 0:
			if (!func_37(iVar954, 16))
			{
				func_389(Local_853[0], func_388(7), "", -163964935, 0, 0, 0, 1, 0);
				func_389(Local_853[1], func_388(26), "", 648122183, 0, 0, 0, 1, 0);
				func_390(Local_853[0], 0, 0);
				func_390(Local_853[1], 0, 0);
				func_43(&uLocal_957, 16);
			}
			iLocal_958[iParam0] = 1;
			break;
		case 1:
			if (&Local_85.f_98[5] < 50f)
			{
				if (!func_616(Local_853[1], 1, 0))
				{
					func_390(Local_853[1], 1, 0);
				}
				iLocal_958[iParam0] = 2;
			}
			break;
		case 2:
			if (!Local_85.f_46)
			{
				if (!func_37(iVar954, 32))
				{
					switch (&iLocal_967[iParam0])
					{
						case 0:
							break;
						case 1:
							func_131(Global_35, &(iLocal_1041[iParam0]), "RE_PBR_UNI_V1_ILO_BOUNTY", 0, -1082130432, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
							if (func_616(Local_853[1], 1, 0))
							{
								func_390(Local_853[1], 0, 0);
							}
							func_43(&uLocal_957, 32);
							iLocal_958[iParam0] = 10;
							break;
					}
				}
				else
				{
					if (func_616(Local_853[1], 1, 0))
					{
						func_390(Local_853[1], 0, 0);
					}
					iLocal_958[iParam0] = 10;
				}
			}
			else
			{
				func_235(Local_632[iParam0], &Local_853);
				iLocal_958[iParam0] = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_380(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	trigger_sonar_blip(iParam0, vParam1);
}

int func_381(var uParam0, float fParam1)
{
	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

void func_382()
{
	if (!func_37(iVar977, 67108864))
	{
		if (func_62(&(iLocal_1041[1]), 0, 1))
		{
			if (((!func_62(&(iLocal_1041[0]), 0, 1) && !func_62(&(iLocal_1041[2]), 0, 1)) && !func_62(&(iLocal_1041[3]), 0, 1)) && func_183(0, 1, &(iLocal_1041[1]), 1))
			{
				func_131(&(iLocal_1041[1]), Global_35, "RE_PBR_UNI_V1_BOUNTY_FLEE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				stop_ped_speaking(&(iLocal_1041[1]), true);
				_0x735662994e60a710(&(iLocal_1041[1]), 1);
			}
			remove_anim_scene_entity(Local_574.f_1, "pedBountyB", &(iLocal_1041[1]));
			clear_ped_tasks(&(iLocal_1041[1]), 1, 0);
			remove_cover_point(iVar1174);
			task_smart_flee_ped(&(iLocal_1041[1]), Global_35, 1000f, -1, 12288, 1077936128, 0);
			set_ped_keep_task(&(iLocal_1041[1]), true);
			set_ped_relationship_group_hash(&(iLocal_1041[1]), iVar1218);
		}
		func_43(&uLocal_979, 67108864);
	}
}

bool func_383(int iParam0, float fParam1, bool bParam2)
{
	if (is_entity_on_screen(iParam0) && func_414(Global_35, iParam0, 0, fParam1, bParam2))
	{
		return true;
	}
	return false;
}

void func_384(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_71(&iVar0);
}

void func_385(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

int func_386(int iParam0, int iParam1, int iParam2)
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

int func_387(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_644(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_645(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_646(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_647(558))
				{
					func_648(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char* func_388(int iParam0)
{
	if (func_649(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_389(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_420(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_650(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_651(iParam0->f_6, iParam0->f_5, 0);
			}
			func_652(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_653(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_390(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_654(iParam0, 13))
	{
		func_655(iParam0, 0);
	}
	else
	{
		func_656(iParam0, 0);
	}
	if (func_420(iParam0->f_6))
	{
		if (bParam2)
		{
			func_177(&(iParam0->f_6), 0, 1);
		}
	}
}

var func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_657(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_392(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_658(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_393(var uParam0, vector3 vParam1, float fParam4)
{
	iVar0 = 258;
	func_658(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_394(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_658(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

int func_395(int iParam0)
{
	if (!func_151(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_396(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_96(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (_0x5102307ce88798eb(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (_0x164cecc59e70df86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (is_tracked_ped_visible(iParam0))
			{
				return true;
			}
		}
		else if (!is_entity_occluded(iParam0))
		{
			if (is_entity_on_screen(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_397(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if (func_227(func_395(iParam0), 0))
	{
		iVar0 = _get_rider_of_mount(func_395(iParam0), false);
		if (iVar0 != 0 && iVar0 != Global_1360165[iParam0])
		{
			return true;
		}
	}
	return false;
}

bool func_398(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_399(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_95(vParam0))
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
		if (func_341(vParam0))
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
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_659(iVar0, bParam8);
	return iVar0;
}

bool func_400()
{
	if (bLocal_44)
	{
		if (!func_30(&uLocal_38))
		{
			func_31(&uLocal_38);
			fLocal_1029 = func_164(Global_35, &(iLocal_1041[4]), 1, 1);
		}
		else if (!Local_1223.f_9)
		{
			fVar0 = func_164(Global_35, &(iLocal_1041[4]), 1, 1);
			fVar1 = func_32(&uLocal_38);
			switch (iVar986)
			{
				case 0:
					if (fVar1 > 3f)
					{
						if (fVar0 > (fVar1027 * 0.9f))
						{
							return true;
						}
						else
						{
							uLocal_988 = iVar986 + 1;
						}
					}
					break;
				case 1:
					if (fVar1 > 6f)
					{
						if (fVar0 > (fVar1027 * 0.5f))
						{
							return true;
						}
						else
						{
							uLocal_988 = iVar986 + 1;
						}
					}
					break;
				case 2:
					if (fVar1 > 10f)
					{
						return true;
					}
					break;
			}
		}
	}
	return false;
}

void func_401()
{
	if (!func_37(iVar983, 16384))
	{
		if (func_37(iVar977, 256))
		{
			func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_NO_HELP", "", 35f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_NO_HELP", "", 35f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		vLocal_1018 = { get_entity_coords(&(iLocal_1041[4]), true, false) };
		func_43(&uLocal_985, 16384);
	}
}

void func_402(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_244(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_523(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_134();
			iParam4->f_2 = func_96(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_523(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_134();
		iParam4->f_2 = func_96(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_403(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_134() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_404(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_405(var uParam0)
{
	if (func_404(&(uParam0->f_3), 4))
	{
	}
	if (is_gameplay_hint_active())
	{
		if ((!func_660(uParam0) || func_404(&(uParam0->f_3), 4)) && !func_404(&(uParam0->f_3), 256))
		{
			disable_control_action(0, -1450761377, false);
			disable_control_action(0, -771458680, false);
			disable_control_action(0, -1722177808, false);
			disable_control_action(1, -1450761377, false);
			disable_control_action(1, -771458680, false);
			disable_control_action(1, -1722177808, false);
			disable_control_action(2, -1450761377, false);
			disable_control_action(2, -771458680, false);
			disable_control_action(2, -1722177808, false);
		}
		disable_control_action(2, 2139949496, false);
	}
	if (func_661(uParam0))
	{
		func_407();
	}
	if (!func_404(&(uParam0->f_3), 16))
	{
		if (func_30(uParam0))
		{
			if (func_662(uParam0) < uParam0->f_4)
			{
				set_ped_max_move_blend_ratio(player_ped_id(), 1f);
			}
		}
	}
}

bool func_406(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_ped_injured(iParam0))
	{
		return true;
	}
	if (func_663(iParam0, iParam1, iParam2, bParam3, bParam4, fParam5))
	{
		return true;
	}
	return false;
}

void func_407()
{
	_0x88544c0e3291dcae(1);
	func_169();
}

bool func_408(vector3 vParam0, var uParam3, float fParam4)
{
	if (!func_664(uParam3->f_7, uParam3->f_8))
	{
		return false;
	}
	if (func_404(&(uParam3->f_3), 1))
	{
		return false;
	}
	if (is_gameplay_hint_active())
	{
		return false;
	}
	fVar0 = func_96(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return false;
	}
	if (!func_665(vParam0, uParam3))
	{
		return false;
	}
	if (!func_404(&(uParam3->f_3), 2))
	{
		if (!is_sphere_visible(vParam0, 0.5f))
		{
			return false;
		}
		if (!func_666(vParam0, uParam3))
		{
			return false;
		}
	}
	return true;
}

void func_409(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (_0xa24c1d341c6e0d53(1, 0, 0))
	{
		return;
	}
	set_gameplay_hint_fov(fParam4);
	fVar0 = func_357(vParam1, 1);
	if (!func_404(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		_0x1f6ebd94680252ce(iVar1, -1082130432);
		_0xf48664e9c83825e3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_31(uParam0);
	func_667(&(uParam0->f_3), 1);
}

void func_410(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_43(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_176(&(Var0.f_5), 1);
	if (!is_entity_dead(*iParam0))
	{
		_0x66f9eb44342bb4c5(*iParam0, &Var0);
	}
}

bool func_411(int iParam0, int iParam1, var uParam2, float fParam3)
{
	if (uParam2->f_9)
	{
		return false;
	}
	if (is_string_null(&(uParam2->f_11)) || uParam2->f_10 == 0f)
	{
		uParam2->f_9 = 1;
		return false;
	}
	if (!func_183(fParam3, 1, iParam0, uParam2->f_32) || func_164(iParam0, iParam1, 1, 1) > uParam2->f_10)
	{
		return false;
	}
	if (uParam2->f_6)
	{
		if (_0x7f9b9791d4cb71f6(iParam0, iParam1, false, 0) != 1)
		{
			return false;
		}
	}
	return true;
}

void func_412(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, bool bParam7)
{
	if (!bParam7 || !is_entity_dead(iParam1))
	{
		fVar0 = func_668(Global_36, get_entity_coords(iParam1, true, false));
		if ((!func_2(iParam3, 4) && !uParam0->f_182) && fVar0 >= fParam4)
		{
			func_669(uParam0, iParam1, 1);
		}
		else if (func_2(iParam3, 4) || (!func_2(iParam3, 2) || uParam0->f_182))
		{
			if (iParam2 != 0 && fVar0 >= fParam5)
			{
				if (iParam6 <= -1 || uParam0->f_180 < iParam6)
				{
					func_359(iParam2, iParam1, 1);
					if (!func_2(iParam3, 4))
					{
						if (func_2(iParam3, 1))
						{
							if (!uParam0->f_182)
							{
								uParam0->f_182 = 1;
							}
						}
					}
					if (iParam6 <= -1)
					{
						uParam0->f_180++;
					}
				}
			}
		}
	}
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_414(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_670(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_671(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

void func_415(int iParam0, bool bParam1)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (!func_486(iParam0))
	{
		return;
	}
	iVar0 = func_672(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(iVar0, bParam1);
	func_178(iParam0, 0);
	func_673(iParam0, 1, 0, 0, 0);
}

void func_416(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

void func_417(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!does_entity_exist(*iParam4))
	{
		*iParam4 = func_674(iParam0, vParam1, iParam5, uParam6);
	}
	if (does_entity_exist(*iParam4))
	{
		decor_set_int(*iParam4, "lootable_interior", iParam7);
	}
}

void func_418(int iParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, int iParam7)
{
	if (!does_entity_exist(*iParam4))
	{
		*iParam4 = func_674(iParam0, vParam1, iParam5, uParam6);
	}
	if (does_entity_exist(*iParam4))
	{
		decor_set_bool(*iParam4, "loot_allow_random", true);
		if (!decor_exist_on(*iParam4, "lootable_interior"))
		{
			decor_set_int(*iParam4, "lootable_interior", iParam7);
		}
	}
}

void func_419(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_420(int iParam0)
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

int func_421(int iParam0)
{
	return iParam0;
}

void func_422(int iParam0)
{
	if (!func_675(iParam0))
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

bool func_423(int iParam0, bool bParam1)
{
	iVar0 = func_426(iParam0);
	if (bParam1)
	{
		if (!func_227(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_427(), 1);
}

void func_424(int iParam0, bool bParam1)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_151(iParam0))
	{
		return;
	}
	iVar1 = get_player_group(get_player_index());
	if (is_ped_group_member(iVar0, iVar1, 0))
	{
		return;
	}
	_0xcbd9ec60495c728c(func_427());
	set_ped_config_flag(iVar0, 279, true);
	set_ped_as_group_member(iVar0, iVar1);
	if (bParam1)
	{
		func_676(iParam0, 1, Global_35);
	}
}

bool func_425()
{
	return func_232(1) < 3;
}

int func_426(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

int func_427()
{
	return get_player_group(get_player_index());
}

void func_428(int iParam0)
{
	if (func_151(iParam0))
	{
		iVar0 = 0;
		iVar1 = 0;
		switch (iParam0)
		{
			case 2:
				func_677(&iVar0, 1);
				break;
			case 14:
				func_677(&iVar0, 8);
				func_677(&iVar1, 4);
				func_677(&iVar1, 5);
				func_677(&iVar1, 0);
				break;
			case 13:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
				func_677(&iVar0, 8);
				func_677(&iVar0, 5);
				func_677(&iVar1, 4);
				func_677(&iVar1, 0);
				break;
		}
		_0xdeb369f6ad168c58(func_426(iParam0), iVar0);
		_0x1740e3dee0ae4d27(func_426(iParam0), iVar1);
	}
}

void func_429()
{
	if (!func_37(iVar977, 1048576))
	{
		start_anim_scene(Local_574.f_1);
		_set_anim_scene_playback_list_bool(Local_574.f_1, &(sLocal_991[0]), true);
	}
}

bool func_430(int iParam0, bool bParam1)
{
	if (func_62(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_431(float fParam0)
{
	if (func_678(1))
	{
		return true;
	}
	if (func_30(&uLocal_0) && !func_360(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_432(int iParam0, var uParam1, float fParam2)
{
	if ((((iParam0 == 4 && *uParam1 >= 9) || (iParam0 == 5 && *uParam1 >= 6)) || &Local_85.f_98[iParam0] > 30f) || func_32(&uLocal_1205) < fParam2)
	{
		return false;
	}
	if (!is_any_speech_playing(&(iLocal_1041[iParam0])))
	{
		if (iParam0 == 4)
		{
			func_131(&(iLocal_1041[iParam0]), Global_35, func_679(iVar1136), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (iParam0 == 5)
		{
			func_131(&(iLocal_1041[iParam0]), Global_35, func_680(iVar1138), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		fLocal_1144 = get_random_float_in_range(3f, 5f);
		fLocal_1142 = get_random_float_in_range(3f, 5f);
		*uParam1++;
		func_31(&uLocal_1205);
		return true;
	}
	return false;
}

int func_433(int iParam0, var uParam1)
{
	if ((!func_62(&(iLocal_1041[iParam0]), 0, 1) || *uParam1 > 4) || &Local_85.f_98[iParam0] > 25f)
	{
		return 0;
	}
	switch (*uParam1)
	{
		case 0:
			sVar0 = "OPENS_FIRE";
			break;
		case 1:
			sVar0 = "GENERIC_INSULT_HIGH_MALE";
			break;
		case 2:
			sVar0 = "OPENS_FIRE";
			break;
		case 3:
			sVar0 = "GENERIC_INSULT_HIGH_NEUTRAL";
			break;
		case 4:
			sVar0 = "OPENS_FIRE";
			break;
		case 5:
			break;
	}
	func_131(&(iLocal_1041[iParam0]), Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
	fLocal_1149 = 4f;
	func_31(&uLocal_1208);
	*uParam1++;
	return 1;
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		_0xdf7b5144e25cd3fe(iVar571, &(sLocal_991[1]));
		_0xdf7b5144e25cd3fe(iVar571, &(sLocal_991[5]));
		_0xdf7b5144e25cd3fe(iVar571, &(sLocal_991[7]));
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[0]));
	}
	else
	{
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[0]));
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[2]));
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[4]));
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[3]));
		_0xdf7b5144e25cd3fe(Local_574.f_1, &(sLocal_991[6]));
	}
}

bool func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_681(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_682(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_683(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_684(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_685(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_686(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_201(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_683(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_687(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_688(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_689(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_690(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_690(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_683(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_691(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_692(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_693(iParam2, 4000))
				{
					if ((func_694(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_695(iParam2, iParam0)) && func_696(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_694(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_695(iParam2, iParam0)) && func_696(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_697(iParam0, Global_1935630->f_41))
							{
								func_698();
								*iParam3 = 2;
								func_683(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_697(iParam0, Global_1935630->f_41))
						{
							func_698();
							*iParam3 = 2;
							func_683(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_699(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_134() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_698();
						*iParam3 = 2;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_700())
					{
						if (func_697(iParam0, Global_1935630->f_42))
						{
							func_698();
							*iParam3 = 2;
							func_683(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_701(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_683(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_702(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_703(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_704(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_705(iParam2, 4000))
				{
					if (func_706(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_683(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_707(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_683(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_708(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_683(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_436(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	if (!func_420(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!is_entity_dead(iParam5))
		{
			*uParam0 = func_709(sParam1, iParam6, iParam5, iParam10, fParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_710(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_711(sParam1, iParam6, iParam13, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_95(vParam2))
			{
				return false;
			}
			*uParam0 = func_712(sParam1, iParam6, vParam2, fParam7, iParam10, fParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_650(*uParam0, sParam1, ceil(absf(fParam8)), 1);
			if (ceil(absf(fParam8)) > func_713(1))
			{
				func_652(*uParam0, 0, 1);
			}
		}
		if (!is_string_null_or_empty(sParam11))
		{
		}
		if (bParam19)
		{
			func_714(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_715(*uParam0, 0))
		{
			if (_is_ped_carrying(Global_35))
			{
				func_652(*uParam0, 0, 1);
			}
		}
		else if (!_is_ped_carrying(Global_35))
		{
			func_652(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (ceil(absf(fParam8)) > func_713(1))
		{
			func_652(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (does_entity_exist(iParam5) && is_entity_dead(iParam5))
		{
			if (func_420(*uParam0))
			{
				func_177(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_716(*uParam0, 1)) || (bParam17 && func_717(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_718(ceil(absf(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_719(ceil(absf(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_177(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_437(int iParam0)
{
	fVar0 = func_96(iParam0, vLocal_1156, 1);
	fVar1 = func_96(iParam0, vLocal_1159, 1);
	fVar2 = func_96(iParam0, vLocal_1162, 1);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerF", 64);
		vLocal_1030 = { vLocal_1156 };
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerR", 64);
		vLocal_1030 = { vLocal_1159 };
	}
	else
	{
		StringCopy(&cLocal_45, "pblCutFreePlayerL02", 64);
		vLocal_1030 = { vLocal_1162 };
	}
	if (!_0x23e33cb9f4a3f547(Local_574.f_1, &cLocal_45))
	{
		_0xdf7b5144e25cd3fe(Local_574.f_1, &cLocal_45);
	}
}

float func_438(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

void func_439(int iParam0, vector3 vParam1, float fParam4)
{
	Local_1059 = 0;
	Local_1059.f_8 = { vParam1 };
	Local_1059.f_19 = fParam4;
	Local_1059.f_1 = iParam0;
	Local_1059.f_14 = { get_entity_coords(iParam0, true, false) };
	Local_1059.f_23 = 1025;
	Local_1059.f_18 = 0f;
}

float func_440(var uParam0)
{
	if (!func_30(uParam0))
	{
		return 0f;
	}
	if (func_115(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_116() - uParam0->f_1);
}

void func_441()
{
	if (!func_37(iVar977, 131072))
	{
		func_720();
		if (has_anim_event_fired(Global_35, -1067191665))
		{
			if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
			{
				func_43(&uLocal_985, 2097152);
			}
			func_131(Global_35, &(iLocal_1041[5]), "RE_PBR_UNI_V1_WRAP_UP_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_43(&uLocal_985, 4194304);
		}
		if (_get_anim_scene_progress(Local_574.f_1) >= 0.99f)
		{
			if (func_37(iVar983, 2097152))
			{
				if (!func_37(iVar983, 4194304))
				{
					func_131(Global_35, &(iLocal_1041[5]), "RE_PBR_UNI_V1_WRAP_UP_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_43(&uLocal_985, 4194304);
				}
			}
			func_43(&uLocal_979, 131072);
		}
	}
}

char* func_442(bool bParam0)
{
	if (bParam0)
	{
		return "RE_PBR_UNI_V1_THANK_BOTH_B";
	}
	return "RE_PBR_UNI_V1_THANK_B";
}

bool func_443()
{
	return func_721() > 0;
}

int func_444(bool bParam0, bool bParam1, bool bParam2)
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

int func_445()
{
	iVar0 = func_721();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_446(int iParam0)
{
	if (func_203() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_244(absf(fVar1) < 1f, func_244(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_447(int iParam0)
{
	if (!func_722(iParam0))
	{
		return false;
	}
	return func_723(iParam0);
}

bool func_448()
{
	if (func_203() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_449(int iParam0, int iParam1, int iParam2)
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

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_451()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_452(int iParam0, bool bParam1, int iParam2)
{
	func_724((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_725(iParam0);
}

void func_453(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_726(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_454(bool bParam0)
{
	bVar3 = false;
	if (func_727(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_728(iVar5, &iVar2, &iVar0))
			{
				if (!func_729(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_730(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_731(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_445() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_445() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_732();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_455(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_456(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_457(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_458(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_733(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_459(int iParam0, int iParam1)
{
	if (!func_734(iParam0))
	{
		return 0;
	}
	if (!func_735())
	{
		return 0;
	}
	if (!func_736(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

char* func_460(char* sParam0)
{
	return sParam0;
}

bool func_461(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_463(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_464(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_607(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_465(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_466(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_467(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_468(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_469(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_470(int iParam0, int iParam1)
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

void func_471(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_737(iParam0, iParam6);
	func_738(iParam0, iParam5);
	func_739(iParam0, iParam4);
	func_740(iParam0, iParam3);
	func_741(iParam0, iParam2);
	func_742(iParam0, iParam1);
}

int func_472(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_743(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_473(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_474(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_475(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_476(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_477(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_478(int iParam0)
{
	return iParam0 != 0;
}

int func_479(int iParam0)
{
	if (!func_476(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_480(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_419(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_481(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_203() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_482(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_177(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_614(iParam0, 0);
		}
	}
}

void func_483(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_420((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_177(&((*uParam0)[iVar0]->f_6), 1, 1);
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

void func_484(int iParam0)
{
	iVar0 = Global_1360165[iParam0];
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return;
	}
	if (!func_151(iParam0))
	{
		return;
	}
	if (!is_ped_in_group(iVar0))
	{
		return;
	}
	if (get_ped_group_index(iVar0) != get_player_group(get_player_index()))
	{
		return;
	}
	if (_0x917760cfe7a0e0f1(iVar0))
	{
		_0xd747979c053efa7a(func_427());
	}
	set_ped_config_flag(iVar0, 279, false);
	remove_ped_from_group(iVar0);
	func_676(iParam0, 0, 0);
}

void func_485()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = func_744(iVar0);
		iVar2 = func_744(iVar0 + 1);
		if (!func_151(iVar1))
		{
			if (func_151(iVar2))
			{
				(*Global_1359489)[iVar0] = iVar2;
				(*Global_1359489)[iVar0 + 1] = -1;
			}
		}
		iVar0++;
	}
}

bool func_486(int iParam0)
{
	return func_278(iParam0, 16, 1);
}

void func_487(var uParam0, bool bParam1)
{
	if (bParam1 || !func_30(uParam0))
	{
		func_31(uParam0);
	}
}

void func_488(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_398(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_290(iParam0, 1, 0);
		}
	}
	func_290(iParam0, 16, bParam1);
}

void func_489(int iParam0)
{
	func_290(iParam0, 8, 0);
}

int func_490(int iParam0, bool bParam1)
{
	if (!func_151(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_745(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_491(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_151(iParam0))
	{
		iVar1 = func_426(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_746(iParam0);
		}
	}
	if (func_276(iParam0, 5, 1))
	{
		set_ped_config_flag(func_426(iParam0), 137, true);
	}
}

void func_492(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_426(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_426(iParam0), 204, false);
	}
}

void func_493(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (func_486(iParam0))
	{
		if (!func_623(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_276(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_490(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_426(iParam0);
	if (((does_entity_exist(iVar1) && func_747(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_279(iParam0, 2, 1);
	}
	else
	{
		func_748(iParam0);
		func_279(iParam0, 1, 1);
	}
}

void func_494(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_151(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

void func_495(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_295(iParam1))
	{
		return;
	}
	iVar0 = func_395(iParam1);
	if (func_749(iParam1))
	{
		if (!func_546(iParam1))
		{
			return;
		}
	}
	func_277(iParam1, 39, 1);
	func_750(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_750(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_750(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_279(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_751(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_496(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0)
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

void func_498(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_499(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_500(var uParam0)
{
	if (func_420(uParam0->f_162))
	{
		func_177(&(uParam0->f_162), 1, 1);
	}
	if (func_420(uParam0->f_163))
	{
		func_177(&(uParam0->f_163), 1, 1);
	}
	if (func_420(uParam0->f_164))
	{
		func_177(&(uParam0->f_164), 1, 1);
	}
	if (func_420(uParam0->f_165))
	{
		func_177(&(uParam0->f_165), 1, 1);
	}
}

void func_501(var uParam0)
{
	if (uParam0->f_170)
	{
		func_752();
	}
}

bool func_502(var uParam0)
{
	if (func_753(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_754(uParam0->f_3);
		func_318(uParam0, 0, 1);
		func_755(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_756(0, 0);
		return true;
	}
	return false;
}

bool func_503(int iParam0)
{
	if (!func_271(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

bool func_504(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_507(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_508(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_95(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_509(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_52("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_510(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_511(int iParam0)
{
	if (!func_271(iParam0))
	{
		return;
	}
	func_757(iParam0);
}

void func_512(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_513(int iParam0)
{
	if (func_123(iParam0, 2))
	{
		return 200;
	}
	if (func_123(iParam0, 4))
	{
		return 70;
	}
	if (func_123(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_514(int iParam0)
{
	if (func_91(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_565() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_91(iParam0, 2);
		bVar1 = func_91(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_324())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_515(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_123(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_516(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_123(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_123(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_517(int iParam0, int iParam1)
{
	iVar0 = (func_506(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_518(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_95(vParam1))
	{
		return false;
	}
	if (func_520(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_118(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

int func_519(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_95(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_520(int iParam0, vector3 vParam1)
{
	if (!func_91(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_758(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_91(iParam0, 33554432))
	{
		if (func_759(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_521(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_123(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_91(iParam0, 1) && !func_91(iParam0, 2))
	{
		if (func_91(iParam0, 4096) || func_91(iParam0, 2048))
		{
			if (func_760(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_761())
	{
		return false;
	}
	return true;
}

bool func_523(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_762(vVar0, vParam0) > func_762(vVar0, get_entity_coords(iParam3, true, false));
}

int func_524(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_525(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	iVar0 = get_clock_hours() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_628((*Global_1835011)[4]->f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_763(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_628((*Global_1347702)[63]->f_15, 1) || func_527((*Global_1347702)[63]->f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_763(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_628((*Global_1835011)[14]->f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_278(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_763(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_628((*Global_1347702)[134]->f_15, 1) || func_527((*Global_1347702)[134]->f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_628((*Global_1835011)[38]->f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_763(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_629(747937920, 1) && !func_628((*Global_1347702)[1]->f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && does_entity_exist(func_426(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (&iVar1[iVar10] == Global_40.f_4942[iParam0]->f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0]->f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = get_random_int_in_range(0, iVar7);
		}
		iVar8 = &iVar1[iVar11];
	}
	if (!func_285(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0]->f_3;
	}
	return iVar8;
}

bool func_526(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_764(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_527(int iParam0)
{
	iVar0 = func_765(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_528(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_529(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_486(iParam0) || func_276(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1) || !_0xa8120ebeaf290c7a((*Global_1360165)[iParam0]->f_1))
	{
		return false;
	}
	iVar0 = _0xec254c2c9b0f08f1((*Global_1360165)[iParam0]->f_1, (*Global_1360165)[iParam0]->f_47);
	return iVar0 == -285580801;
}

struct<7> func_530(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		set_bit(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		set_bit(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		set_bit(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		set_bit(&(Var0.f_6), 3);
	}
	return Var0;
}

void func_531(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	iVar0 = func_426(iParam0);
	func_766(iVar0);
	func_279(iParam0, 60, 1);
	if (bParam1)
	{
		func_767(iParam0);
	}
}

void func_532(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	iVar0 = func_426(iParam0);
	func_768(iVar0);
	func_277(iParam0, 60, 1);
	if (bParam1)
	{
		func_769(iParam0);
	}
}

void func_533(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	iVar0 = func_426(iParam0);
	func_770(iVar0);
	if (iParam0 == 14)
	{
		func_771(iVar0);
	}
	func_279(iParam0, 61, 1);
	if (bParam1)
	{
		func_772(iParam0);
	}
}

void func_534(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	iVar0 = func_426(iParam0);
	func_773(iVar0);
	func_277(iParam0, 61, 1);
	if (bParam1)
	{
		func_774(iParam0);
	}
}

bool func_535(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	func_775(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_65[iVar0]), iVar1);
}

bool func_536(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_537(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 178615350:
			return 331645018;
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return -663077666;
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return -328334844;
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return -1496612359;
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return 41788943;
				default:
					break;
			}
			return -99272505;
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_776(296923297, iParam1);
			return func_777(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_776(1237718549, iParam1);
			return func_777(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return 41788943;
	}
	return 41788943;
}

bool func_538(int iParam0, int iParam1)
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

bool func_539(int iParam0, int iParam1)
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

bool func_540(int iParam0, int iParam1)
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
	if (!func_538(iParam0, iVar0))
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

void func_541(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_542(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	if (_is_metaped_using_component(iParam1, 1933068772))
	{
		_set_ped_component_disabled(iParam1, 1933068772, 1);
	}
	if (_is_metaped_using_component(iParam1, 494009478))
	{
		_set_ped_component_disabled(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1 > 0 && func_538(iParam1, 860729266))
	{
		_set_ped_body_component(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4096 > 0 && func_538(iParam1, 879715242))
	{
		_set_ped_body_component(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 128 > 0 && func_538(iParam1, 1606325429))
	{
		_set_ped_body_component(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 256 > 0 && func_538(iParam1, 1743550585))
	{
		_set_ped_body_component(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 512 > 0 && func_538(iParam1, 1064646155))
	{
		_set_ped_body_component(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1024 > 0 && func_538(iParam1, -536694793))
	{
		_set_ped_body_component(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2048 > 0 && func_538(iParam1, -1304053509))
	{
		_set_ped_body_component(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0]->f_5 & -2147483648 > 0 && func_538(iParam1, 718939204))
	{
		_set_ped_body_component(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 65536 > 0 && func_538(iParam1, -972364774))
	{
		_set_ped_body_component(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16384 > 0 && func_538(iParam1, -1100875244))
	{
		if (_is_metaped_using_component(iParam1, -134124598))
		{
			_set_ped_component_disabled(iParam1, -134124598, 1);
		}
		if (_is_metaped_using_component(iParam1, 2071466316))
		{
			_set_ped_component_disabled(iParam1, 2071466316, 1);
		}
		_set_ped_body_component(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 262144 > 0 && func_538(iParam1, 1153596794))
	{
		_set_ped_body_component(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 524288 > 0 && func_538(iParam1, 1016389820))
	{
		_set_ped_body_component(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1048576 > 0 && func_538(iParam1, -726966617))
	{
		_set_ped_body_component(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 2097152 > 0 && func_538(iParam1, 1365901568))
	{
		_set_ped_body_component(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 32768 > 0 && func_538(iParam1, -1658942149))
	{
		_set_ped_body_component(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 131072 > 0 && func_538(iParam1, -1980913856))
	{
		_set_ped_body_component(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 4194304 > 0 && func_538(iParam1, 491764525))
	{
		_set_ped_body_component(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8388608 > 0 && func_538(iParam1, -76015264))
	{
		_set_ped_body_component(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 16777216 > 0 && func_538(iParam1, 622113465))
	{
		_set_ped_body_component(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 33554432 > 0 && func_538(iParam1, 781533162))
	{
		_set_ped_body_component(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 67108864 > 0 && func_538(iParam1, -271415321))
	{
		_set_ped_body_component(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 134217728 > 0 && func_538(iParam1, -1683207356))
	{
		_set_ped_body_component(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 268435456 > 0 && func_538(iParam1, -254794762))
	{
		_set_ped_body_component(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 536870912 > 0 && func_538(iParam1, 609066278))
	{
		_set_ped_body_component(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 1073741824 > 0 && func_538(iParam1, -1712783565))
	{
		_set_ped_body_component(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0]->f_5 & 8192 > 0 && func_538(iParam1, 1544915253))
	{
		_set_ped_body_component(iParam1, 1544915253);
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_57 = 1;
	}
}

void func_543(int iParam0)
{
	func_778(iParam0, 1);
	func_778(iParam0, 128);
	func_778(iParam0, 256);
	func_778(iParam0, 512);
	func_778(iParam0, 1024);
	func_778(iParam0, 2048);
	func_778(iParam0, 4096);
	func_778(iParam0, 65536);
	func_778(iParam0, 16384);
	func_778(iParam0, 262144);
	func_778(iParam0, 524288);
	func_778(iParam0, 1048576);
	func_778(iParam0, 2097152);
	func_778(iParam0, 32768);
	func_778(iParam0, 131072);
	func_778(iParam0, 134217728);
	func_778(iParam0, 1073741824);
}

void func_544(int iParam0, bool bParam1)
{
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
		{
			decor_remove(Global_1360165[iParam0], "wearing_bandana");
		}
	}
	else if (!decor_exist_on(Global_1360165[iParam0], "wearing_bandana"))
	{
		decor_set_bool(Global_1360165[iParam0], "wearing_bandana", true);
	}
}

void func_545(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

bool func_546(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

int func_547(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_779(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

int func_548(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	vVar0 = { uParam3, uParam4, uParam5 };
	iVar3 = func_780(iParam0, 1);
	switch ((*Global_1360165)[iParam0]->f_70.f_12)
	{
		case 0:
			(*Global_1360165)[iParam0]->f_124 = _0x31c70a716cae1fee(iVar3);
			(*Global_1360165)[iParam0]->f_125 = 0;
			if (func_227((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_781(iParam0, 3);
			}
			else
			{
				if (!func_782(iParam0) && func_783(iParam0, &uVar4))
				{
					_0x187d65f3aec5d679(func_547(iParam0, 1), &uVar4);
				}
				func_750(iParam0, 256, 0);
				func_781(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489->f_12)
			{
				if (!_0xa8120ebeaf290c7a(iVar3))
				{
					return func_784();
				}
				if (bParam2 && !func_95(vVar0))
				{
					_0x59c7ad6fea2ac449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					_0xd4b614179bcd0654(iVar3);
				}
				if (!func_785(iParam0, vVar0, iParam6, iParam10))
				{
					return func_784();
				}
				if (func_227((*Global_1360165)[iParam0]->f_124, 0))
				{
					if (_0x31c70a716cae1fee(iVar3) != (*Global_1360165)[iParam0]->f_124)
					{
					}
					if (!does_entity_belong_to_this_script((*Global_1360165)[iParam0]->f_124, true))
					{
						set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
					}
					freeze_entity_position((*Global_1360165)[iParam0]->f_124, true);
					set_entity_invincible((*Global_1360165)[iParam0]->f_124, true);
					func_781(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_227((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_781(iParam0, 1);
				return func_784();
			}
			if (!bParam9 || _0xa0bc8faed8cfeb3c((*Global_1360165)[iParam0]->f_124))
			{
				func_781(iParam0, 3);
			}
			break;
		case 3:
			if (!func_227((*Global_1360165)[iParam0]->f_124, 0))
			{
				func_781(iParam0, 1);
				return func_784();
			}
			if (bParam7)
			{
				if (!func_786(iParam0, (*Global_1360165)[iParam0]->f_124, 1))
				{
					return func_784();
				}
			}
			if ((bParam2 && !func_95(vVar0)) && !func_475(vVar0, get_entity_coords((*Global_1360165)[iParam0]->f_124, true, false), 1056964608, 1))
			{
				if (is_entity_attached((*Global_1360165)[iParam0]->f_124))
				{
					detach_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_105((*Global_1360165)[iParam0]->f_124, vVar0, iParam6, 2, 1073741824);
			}
			if (bParam1)
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					if (func_276(iParam0, 39, 1))
					{
					}
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_279(iParam0, 39, 1);
				func_750(iParam0, 8, 1);
				func_750(iParam0, 64, 0);
				(*Global_1360165)[iParam0]->f_70.f_11 = get_id_of_this_thread();
			}
			freeze_entity_position((*Global_1360165)[iParam0]->f_124, false);
			set_entity_invincible((*Global_1360165)[iParam0]->f_124, false);
			func_787((*Global_1360165)[iParam0]->f_124, iParam0);
			if (bParam8)
			{
				_0xf74e134f40192884((*Global_1360165)[iParam0]->f_124, 1);
			}
			sVar12 = func_788(iParam0, func_448());
			if (!is_string_null_or_empty(sVar12))
			{
				_0x63aa2b8eb087886a(func_547(iParam0, 1), get_hash_key(sVar12));
			}
			(*Global_1360165)[iParam0]->f_70 = (*Global_1360165)[iParam0]->f_124;
			(*Global_1360165)[iParam0]->f_124 = 0;
			func_277(iParam0, 40, 0);
			func_750(iParam0, 32, 0);
			func_781(iParam0, 0);
			return (*Global_1360165)[iParam0]->f_70;
	}
	return func_784();
}

void func_549(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.4f)), round((IntToFloat(iVar1) * 0.75f)));
			break;
		default:
			iVar1 = get_max_attribute_points(iParam1, 16);
			iVar0 = get_random_int_in_range(round((IntToFloat(iVar1) * 0.1f)), round((IntToFloat(iVar1) * 0.4f)));
			break;
	}
	set_attribute_points(iParam1, 16, iVar0);
}

void func_550(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (func_547(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_789(func_395(iParam0), 1f, 0);
	}
	if (bParam1)
	{
		func_767(iParam0);
	}
	else
	{
		func_769(iParam0);
	}
	if (bParam2)
	{
		func_772(iParam0);
	}
	else
	{
		func_774(iParam0);
	}
}

Vector3 func_551(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_552(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_300((fParam0 + fParam1));
}

int func_553(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_790(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_791(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_792(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_792(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_303(iVar0))
		{
			func_104(iVar0, &(uParam1->f_23), 0);
		}
		if (func_303(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_793(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_794(&(uParam1->f_22)));
			func_385(iVar0, func_795(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_796(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_797(&(uParam1->f_22)))
		{
			func_798(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_799(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_37(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_303(iVar0))
		{
			func_801(iVar0, !func_800(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_802(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_803(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_803(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_554(int iParam0, int iParam1)
{
	if (func_804(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_555(var uParam0)
{
	return func_37(*uParam0, 32);
}

int func_556(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

bool func_557(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_805(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

bool func_558(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_559(int iParam0)
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

int func_560(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_806(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_807((386 + iVar28), 1);
			if (func_808(iParam0, &Var0, iVar5, 0))
			{
				if (func_809(iParam0, &Var6, iVar5))
				{
					Var29 = { func_810(iParam0, Var0, iVar5, 0) };
					func_811(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_812(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_813(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_814(iParam0, iParam1);
					return 1;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_561(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_562(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_563(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_815(1);
	}
	else
	{
		iVar0 = func_816(iParam0);
	}
	return iVar0;
}

void func_564(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_817(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_818(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

int func_565()
{
	return Global_1897952->f_41;
}

void func_566(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_123(iParam0, 8192))
	{
		iVar0 = func_818(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_567(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_216(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_568(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_91(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_819(262144, iVar0, 0, 1);
		}
	}
	if (func_91(iParam0, 128))
	{
		func_819(128, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 524288))
	{
		func_819(524288, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 536870912))
	{
		func_819(536870912, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 4194304))
	{
		func_819(4194304, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 8388608))
	{
		func_819(8388608, iVar0, 0, 1);
	}
}

void func_569(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_570(bool bParam0)
{
	if (!bParam0 && func_820(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_571()
{
	return Global_1310750->f_16037;
}

bool func_572(int iParam0)
{
	if (!func_271(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_573(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_271(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_821(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_574(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_822(Global_1393447, 1);
	func_823();
	func_824();
	func_825((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_134() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_826();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_819(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_819(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_819(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_827(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_828(to_float(iVar0), 1, 0);
	}
	else
	{
		func_828((to_float(200) / 3f), 1, 0);
	}
}

bool func_575(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_576(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_577(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_579()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_580(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_581(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_580(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_116() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

bool func_582(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_583(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_584(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_585(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_586(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_587(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_588(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_589(bool bParam0, int iParam1, int iParam2)
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

bool func_590()
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

int func_591(int iParam0)
{
	if (!func_594(iParam0))
	{
		return -1;
	}
	return func_830(func_829(iParam0));
}

bool func_592(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_593(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_594(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_595(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_596(int iParam0)
{
	return func_91(iParam0, Global_1310750->f_16072 | 64);
}

int func_597(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_598(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_599(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_600(var uParam0, float fParam1)
{
	if (!func_30(uParam0))
	{
		return false;
	}
	if (func_32(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_601(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

int func_602(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_603(int iParam0, int iParam1, int iParam2, float fParam3)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam1->f_5)
	{
		func_681(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = vdist(Global_36, get_entity_coords(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_693(iParam1, 4000))
				{
					if ((func_694(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_695(iParam1, iParam0)) && func_696(iParam1, iParam0))
					{
						func_698();
						*iParam2 = 2;
						func_683(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_693(iParam1, 4000))
				{
					if ((func_694(iParam0, Global_1935630->f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_695(iParam1, iParam0)) && func_696(iParam1, iParam0))
					{
						func_698();
						*iParam2 = 2;
						func_683(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_697(iParam0, Global_1935630->f_41))
							{
								func_698();
								*iParam2 = 2;
								func_683(iParam0, iParam1, *iParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_697(iParam0, Global_1935630->f_41))
						{
							func_698();
							*iParam2 = 2;
							func_683(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_700())
					{
						if (func_697(iParam0, Global_1935630->f_42))
						{
							func_698();
							*iParam2 = 2;
							func_683(iParam0, iParam1, *iParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_687(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_688(Global_35, iParam0, iParam1))
					{
						func_698();
						*iParam2 = 4;
						func_683(iParam0, iParam1, *iParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_689(Global_35, iParam0, iParam1))
					{
						func_698();
						*iParam2 = 256;
						func_683(iParam0, iParam1, *iParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_831(iParam0, iParam1))
			{
				func_698();
				*iParam2 = 131072;
				func_683(iParam0, iParam1, *iParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_832(iParam0, iParam1))
			{
				func_698();
				*iParam2 = 262144;
				func_683(iParam0, iParam1, *iParam2);
				return true;
			}
		}
	}
	return false;
}

float func_604(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_164(Global_35, iParam0, bParam1, bParam2);
}

bool func_605(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_606(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_833(iParam0, &Var0);
}

int func_607(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_608(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return get_distance_between_coords(Global_36, vParam0, true);
}

float func_609(float fParam0, int iParam1)
{
	fVar0 = (2f * sin((180f * (fParam0 / func_353(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_610(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_611(float fParam0)
{
	if (fParam0 < 250f)
	{
		if (fParam0 < 50f)
		{
			fVar0 = 0.25f;
		}
		else if (fParam0 < 100f)
		{
			fVar0 = 0.5f;
		}
		else if (fParam0 < 150f)
		{
			fVar0 = 1f;
		}
		else if (fParam0 < 200f)
		{
			fVar0 = 1.5f;
		}
		else if (fParam0 < 250f)
		{
			fVar0 = 2f;
		}
	}
	else if (fParam0 < 500f)
	{
		if (fParam0 < 300f)
		{
			fVar0 = 2.5f;
		}
		else if (fParam0 < 350f)
		{
			fVar0 = 3f;
		}
		else if (fParam0 < 400f)
		{
			fVar0 = 3.5f;
		}
		else if (fParam0 < 450f)
		{
			fVar0 = 4f;
		}
		else if (fParam0 < 500f)
		{
			fVar0 = 4.5f;
		}
	}
	else if (fParam0 < 750f)
	{
		if (fParam0 < 550f)
		{
			fVar0 = 5f;
		}
		else if (fParam0 < 600f)
		{
			fVar0 = 5.5f;
		}
		else if (fParam0 < 650f)
		{
			fVar0 = 6f;
		}
		else if (fParam0 < 700f)
		{
			fVar0 = 6.5f;
		}
		else if (fParam0 < 750f)
		{
			fVar0 = 7f;
		}
	}
	else if (fParam0 < 1000f)
	{
		if (fParam0 < 800f)
		{
			fVar0 = 7.5f;
		}
		else if (fParam0 < 850f)
		{
			fVar0 = 8f;
		}
		else if (fParam0 < 900f)
		{
			fVar0 = 8.5f;
		}
		else if (fParam0 < 950f)
		{
			fVar0 = 9f;
		}
		else if (fParam0 < 1000f)
		{
			fVar0 = 9.5f;
		}
	}
	else
	{
		fVar0 = 10f;
	}
	return fVar0;
}

Vector3 func_612(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_613((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_613(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_614(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_180(&(iParam0->f_18));
}

bool func_615(int iParam0, var uParam1)
{
	uVar0 = *uParam1;
	if (_0x3ee1f7a8c32f24e1(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_616(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_420(uParam0->f_6))
	{
		if (is_bit_set(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_715(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_617(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_30(uParam0))
	{
		func_114(uParam0, fParam1);
	}
}

void func_618()
{
	func_401();
	open_sequence_task(&iVar0);
	if (!func_37(iVar977, 256))
	{
		if (func_37(iVar955, 1024))
		{
			clear_ped_tasks(&(iLocal_1041[4]), 1, 0);
			func_196(0, Global_35, 2000);
		}
		else if (!func_37(iVar977, 134217728))
		{
			task_play_anim(0, &(Local_78[0]), "line_04_jav", 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
		}
	}
	if (!is_string_null_or_empty(sVar998))
	{
		task_follow_waypoint_recording(0, sVar998, 0, 1052, -1, 0, 0, -1);
	}
	else
	{
		task_follow_nav_mesh_to_coord(0, vLocal_1001, 2f, -1, 0.25f, 4, 40000f);
	}
	func_197(&(iLocal_1041[4]), &iVar0, 0, 0, 1, 1);
}

bool func_619()
{
	if (!func_30(&uLocal_1193))
	{
		func_31(&uLocal_1193);
	}
	else if (func_32(&uLocal_1193) > 1f)
	{
		if (!func_95(vLocal_1036))
		{
			fVar0 = func_96(&(iLocal_1041[4]), vLocal_1036, 0);
			if (fVar0 < 20f)
			{
				if (_does_volume_exist(iVar1037))
				{
					if (is_entity_in_volume(&(iLocal_1041[4]), iVar1037, true, 0))
					{
						return false;
					}
				}
				iVar1 = create_itemset(true);
				if (_does_volume_exist(iVar1037))
				{
					if (_0x886171a12f400b89(iVar1037, iVar1, 2) > 0)
					{
						destroy_itemset(iVar1);
						return true;
					}
				}
				destroy_itemset(iVar1);
			}
		}
		func_31(&uLocal_1193);
	}
	return false;
}

void func_620()
{
	if (!func_37(iVar983, 16777216))
	{
		if (!does_blip_exist(iVar1172) && !func_37(iVar977, 16777216))
		{
			if (func_834(&uLocal_41))
			{
				if (func_96(Global_35, vLocal_1001, 1) < (300f - 20f))
				{
					func_71(&iLocal_1174);
					iLocal_1174 = _blip_add_for_coord(408396114, vLocal_1001);
					func_43(&uLocal_985, 16777216);
				}
				else
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_ESCAPE_C", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_43(&uLocal_985, 33554432);
				}
			}
		}
	}
}

void func_621()
{
	if (&Local_85.f_98[4] > 10f)
	{
		switch (iVar1138)
		{
			case 0:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE";
				break;
			case 1:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_REPEAT";
				break;
			case 2:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_AGAIN";
				break;
			case 3:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE_LAST";
				break;
			default:
				sVar0 = "RE_PBR_UNI_V1_LOUD_WAIT_RIDE";
				break;
		}
	}
	else
	{
		switch (iVar1138)
		{
			case 0:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE";
				break;
			case 1:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_REPEAT";
				break;
			case 2:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_AGAIN";
				break;
			case 3:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE_LAST";
				break;
			default:
				sVar0 = "RE_PBR_UNI_V1_WAIT_RIDE";
				break;
		}
	}
	func_131(&(iLocal_1041[4]), Global_35, sVar0, "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
	func_43(&uLocal_985, 262144);
	uLocal_1140 = iVar1138 + 1;
}

void func_622()
{
	if (Local_85.f_46)
	{
		return;
	}
	if (func_37(iVar977, 16384))
	{
		if (func_835() && !is_any_speech_playing(&(iLocal_1041[4])))
		{
			func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_SPOT_CAMP", 0, -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			func_43(&uLocal_985, 128);
			func_43(&uLocal_979, 16777216);
			return;
		}
	}
	switch (iVar1137)
	{
		case 0:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 2f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_INTRO", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_INTRO", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 1:
			func_836(1);
			if (func_837(1101004800))
			{
				func_180(&uLocal_1214);
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_A", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				else
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_A", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 2:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 2f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_B", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					func_180(&uLocal_1214);
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 3:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 1f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_B2", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_B2", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					func_180(&uLocal_1214);
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 4:
			func_836(0);
			if (func_837(1101004800))
			{
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_C", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_EXPLAIN_C", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 5:
			func_836(1);
			if (func_837(1101004800))
			{
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_D", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_D", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 6:
			func_836(0);
			if (func_837(1101004800))
			{
				func_180(&uLocal_1214);
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_E", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_EXPLAIN_E", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 7:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 3f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_F", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_F", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 8:
			func_836(0);
			if (func_837(1101004800))
			{
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_G", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_EXPLAIN_G", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				func_180(&uLocal_1214);
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 9:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 0.75f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_H", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_H", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					func_180(&uLocal_1214);
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 10:
			func_836(0);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 1f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_EXPLAIN_I", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_EXPLAIN_I", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 11:
			func_836(1);
			if (func_837(1101004800))
			{
				if (&Local_85.f_98[4] > 12f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_RIDE_EXPLAIN_J", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				else
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_RIDE_EXPLAIN_J", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
				}
				func_180(&uLocal_1214);
				uLocal_1139 = iVar1137 + 1;
			}
			break;
		case 12:
			func_836(1);
			if (func_837(1101004800))
			{
				if (!func_30(&uLocal_1214))
				{
					func_31(&uLocal_1214);
				}
				else if (func_32(&uLocal_1214) > 1f)
				{
					if (&Local_85.f_98[4] > 12f)
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_SHOUT_END", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					else
					{
						func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_RIDE_END", "", -1082130432, 0, 0, 0, 1, 1, 0, 1744022339, 1, 0, 0);
					}
					uLocal_1139 = iVar1137 + 1;
				}
			}
			break;
		case 13:
			if (func_183(-2f, 1, &(iLocal_1041[4]), 1) && func_183(0, 1, Global_35, 1))
			{
				if (&Local_85.f_98[4] < 15f && !func_396(&(iLocal_1041[5]), 1116471296, -1082130432, -1082130432, -1082130432))
				{
					if (Local_85.f_51.f_4 == 6)
					{
						if (Global_36.f_2 <= 55f)
						{
							if (func_96(Global_35, vLocal_1001, 1) > 50f && func_96(Global_35, vLocal_1001, 1) < 150f)
							{
								uLocal_1139 = iVar1137 + 1;
							}
						}
					}
					else if (func_96(Global_35, vLocal_1001, 1) > 50f && func_96(Global_35, vLocal_1001, 1) < 140f)
					{
						uLocal_1139 = iVar1137 + 1;
					}
				}
			}
			break;
		case 14:
			func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LISTEN", "", -1082130432, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
			uLocal_1139 = iVar1137 + 1;
			break;
		case 15:
			break;
	}
}

bool func_623(int iParam0)
{
	if (!func_151(iParam0))
	{
		return false;
	}
	if (!func_486(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_624()
{
	if (!func_37(iVar983, 512))
	{
		if (&Local_85.f_98[4] < 5f)
		{
			if (func_838(&(iLocal_1041[4]), Global_35, 1060437492) == 0)
			{
				func_43(&uLocal_985, 512);
			}
		}
	}
	else if (&Local_85.f_98[4] > 5f || func_838(&(iLocal_1041[4]), Global_35, 1060437492) == 0)
	{
		func_176(&uLocal_985, 512);
	}
}

float func_625(int iParam0, int iParam1)
{
	return func_164(iParam0, iParam1, 1, 1);
}

void func_626(int iParam0)
{
	func_624();
	if (!func_37(iVar982, 512))
	{
		if (iParam0 != 0)
		{
			if (get_script_task_status(&(iLocal_1041[4]), -1073489615, true) != 1)
			{
				task_aim_at_entity(&(iLocal_1041[4]), &(iLocal_1041[1]), -1, 0, 0);
			}
			switch (iVar977)
			{
				case 0:
					if (func_183(0, 1, &(iLocal_1041[4]), 1))
					{
						func_131(&(iLocal_1041[4]), iParam0, "RE_PBR_UNI_V1_AIM_JAV", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						uLocal_980 = iVar977 + 1;
					}
					break;
				case 1:
					if (func_32(&uLocal_1196) > 15f)
					{
						if (func_183(-1f, 1, 0, 0) && func_625(&(iLocal_1041[4]), iParam0) < 15f)
						{
							func_131(&(iLocal_1041[4]), iParam0, "RE_PBR_UNI_V1_AIM_JAV_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uLocal_980 = iVar977 + 1;
						}
					}
					break;
				case 2:
					if (func_32(&uLocal_1196) > 25f)
					{
						if (func_183(-1f, 1, 0, 0) && func_625(&(iLocal_1041[4]), iParam0) < 15f)
						{
							func_131(&(iLocal_1041[4]), iParam0, "RE_PBR_UNI_V1_ADVANCE_JAV", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							uLocal_980 = iVar977 + 1;
						}
					}
					break;
				case 3:
					break;
			}
		}
	}
	else
	{
		func_839(&(iLocal_1041[4]));
	}
}

void func_627(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (!is_entity_dead(iParam1))
		{
			iVar0 = 0;
			if (!get_current_ped_weapon(iParam0, &iVar0, true, 0, false))
			{
				set_current_ped_weapon(iParam0, get_best_ped_weapon(iParam0, false, false), true, 0, false, false);
			}
			if (_is_weapon_one_handed(func_840(iParam0, 0)) || _is_weapon_two_handed(func_840(iParam0, 0)))
			{
				if (bParam4)
				{
					task_aim_gun_at_entity(0, iParam1, iParam2, iParam3, iParam5);
				}
				else
				{
					task_aim_gun_at_entity(iParam0, iParam1, iParam2, iParam3, iParam5);
				}
			}
		}
	}
}

bool func_628(int iParam0, bool bParam1)
{
	switch (func_765(iParam0))
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

bool func_629(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_841(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_630(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_631(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!is_ped_on_mount(iParam0))
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return;
	}
	clear_ped_tasks(iVar0, 1, 0);
	task_stand_still(iVar0, -1);
}

int func_632(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_842(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_843(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_633(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam1;
}

bool func_634(int iParam0, int iParam1)
{
	if (func_360(&(iParam0->f_5), 5f))
	{
		return true;
	}
	if (func_2(iParam0->f_23, 2))
	{
		return true;
	}
	if (((!func_630(iParam0->f_1) && !func_640(iParam0->f_1, 501393341)) && !is_ped_in_any_vehicle(iParam0->f_1, true)) && !func_640(iParam0->f_1, -828834893))
	{
		return true;
	}
	return false;
}

bool func_635(int iParam0, int iParam1)
{
	if (func_360(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (!func_2(iParam0->f_23, 16384))
	{
		return true;
	}
	if (iParam0->f_1 != Global_35)
	{
		return true;
	}
	if (!func_844(&uVar0))
	{
		return true;
	}
	return false;
}

int func_636()
{
	if (!func_845())
	{
		return 0;
	}
	if (!func_846(&iVar0))
	{
		return 0;
	}
	if (!func_847(iVar0))
	{
		return 0;
	}
	return func_848(iVar0, 0);
}

bool func_637(int iParam0, int iParam1)
{
	if (func_360(&(iParam0->f_5), 4f))
	{
		return true;
	}
	if (func_2(iParam0->f_23, 4))
	{
		return true;
	}
	get_current_ped_weapon(iParam0->f_1, &iVar0, true, 0, false);
	get_current_ped_weapon(iParam0->f_1, &iVar1, true, 1, false);
	if (func_2(iParam0->f_23, 512) || (iVar0 == -1569615261 && iVar1 == -1569615261))
	{
		return true;
	}
	return false;
}

int func_638(int iParam0)
{
	iVar0 = func_849(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (_is_ped_hogtied(iVar0))
	{
		return iVar0;
	}
	return 0;
}

bool func_639(int iParam0, int iParam1)
{
	if (func_360(&(iParam0->f_5), 15f))
	{
		return true;
	}
	if (func_2(iParam0->f_23, 4096) && func_640(iParam0->f_1, 1245594896))
	{
		return false;
	}
	if (func_2(iParam0->f_23, 256))
	{
		return true;
	}
	if (get_script_task_status(iParam0->f_1, -208384378, true) == 8)
	{
		return true;
	}
	return false;
}

bool func_640(int iParam0, int iParam1)
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

bool func_641(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	fVar0 = func_300(get_entity_heading(iParam0));
	fParam4 = func_300(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, bParam5, bParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

float func_642(int iParam0, vector3 vParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

void func_643()
{
	if (!func_37(iVar977, 512))
	{
		if (_is_anim_scene_loaded(iVar572, true, false) && _is_anim_scene_loaded(Local_574.f_1, true, false))
		{
			if (_0x23e33cb9f4a3f547(iVar572, &(sLocal_991[1])))
			{
				freeze_entity_position(Local_549[1]->f_8, false);
				start_anim_scene(iVar572);
				_set_anim_scene_playback_list_bool(iVar572, &(sLocal_991[1]), true);
				func_43(&uLocal_979, 512);
			}
			else
			{
				_0xdf7b5144e25cd3fe(iVar572, &(sLocal_991[1]));
			}
		}
		else
		{
			if (!_is_anim_scene_loaded(iVar572, true, false))
			{
				load_anim_scene(iVar572);
			}
			if (!_is_anim_scene_loaded(Local_574.f_1, true, false))
			{
				load_anim_scene(Local_574.f_1);
			}
		}
	}
}

void func_644(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_645(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_644(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_244(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_31(&(iParam1->f_13));
		}
		if (func_850(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_851(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_645(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_852(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_853(*uParam0, 1, 1);
						}
					}
					else if (func_854(iParam1, 22))
					{
						func_853(*uParam0, 0, 1);
					}
				}
				if (func_855(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_856(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_857(iParam8);
					if (func_858(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_859(uParam3);
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
					func_860(iParam1, uParam3, fVar8);
					if (func_861(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_483(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_862(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_855(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_863(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_858(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_856(uParam0, func_855(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_857(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_483(uParam3, 0, 0, 1, 1);
					}
					func_864(iParam1, 1);
				}
				func_860(iParam1, uParam3, fVar8);
				if (func_862(uParam0, iParam1, fParam4, bVar6))
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
			func_235(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_646(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_865(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_131(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_647(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_203() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_648(int iParam0, bool bParam1)
{
	func_866(iParam0, &iVar0, &iVar1);
	if (!func_867(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_868(iVar0, iVar1);
}

bool func_649(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_650(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_651(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_652(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (bParam1)
	{
		func_869(iParam0, 4);
		func_870(iVar0, 1);
		func_871(iVar0, 1);
	}
	else
	{
		func_872(iParam0, 4);
		func_871(iVar0, 0);
	}
}

void func_653(int* iParam0, char* sParam1)
{
	if (func_420(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_651(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_656(iParam0, 1);
}

bool func_654(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_655(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_656(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_657(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_658(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_474(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_474(uParam0))
		{
		}
	}
}

int func_659(int iParam0, bool bParam1)
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

bool func_660(var uParam0)
{
	if (!func_873(*uParam0, uParam0->f_4))
	{
		return false;
	}
	return true;
}

bool func_661(var uParam0)
{
	if (!func_660(uParam0))
	{
		return false;
	}
	if (func_874(uParam0->f_7, uParam0->f_8, func_404(&(uParam0->f_3), 4)))
	{
		return true;
	}
	if (!func_404(&(uParam0->f_3), 4))
	{
		if (func_875())
		{
			return true;
		}
	}
	return false;
}

int func_662(var uParam0)
{
	if (!func_30(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_115(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_134() - round((uParam0->f_1 * 1000f)));
}

bool func_663(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (bParam4 && is_entity_dead(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (is_entity_occluded(iParam0))
		{
			return true;
		}
	}
	if (func_876(get_entity_coords(iParam0, true, false), iParam1, iParam2, 1, fParam5))
	{
		return true;
	}
	return false;
}

bool func_664(float fParam0, float fParam1)
{
	if (is_ped_on_mount(Global_35))
	{
		return get_entity_speed(Global_35) < fParam0;
	}
	return get_entity_speed(Global_35) < fParam1;
}

bool func_665(vector3 vParam0, var uParam3)
{
	if (!func_404(&(uParam3->f_3), 8))
	{
		return true;
	}
	if (func_877(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return true;
	}
	return false;
}

bool func_666(vector3 vParam0, var uParam3)
{
	fVar0 = func_357(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

void func_667(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_668(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

void func_669(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_182 || iParam2 == 1)
	{
		if (does_entity_exist(iParam1))
		{
			uParam0->f_183 = _blip_add_for_entity(1260140857, iParam1);
			uParam0->f_182 = 1;
		}
	}
}

bool func_670(int iParam0, int iParam1, float fParam2)
{
	return func_878(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_671(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_672(int iParam0)
{
	if (func_151(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_673(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	iVar0 = func_426(iParam0);
	if (does_blip_exist(func_879(iParam0)) && !is_entity_dead(iVar0))
	{
		iVar1 = func_879(iParam0);
		func_880(iParam0, &iVar1);
		return iVar1;
	}
	if (!is_entity_dead(iVar0))
	{
		if (does_blip_exist(get_blip_from_entity(iVar0)))
		{
		}
		iVar1 = _blip_add_for_entity(422991367, iVar0);
		(*Global_1360165)[iParam0]->f_2 = iVar1;
		func_880(iParam0, &iVar1);
	}
	return iVar1;
}

int func_674(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

bool func_675(int iParam0)
{
	return func_881(iParam0, 2);
}

void func_676(int iParam0, bool bParam1, int iParam2)
{
	if (!func_151(iParam0))
	{
		return;
	}
	if (!func_882(iParam0))
	{
		return;
	}
	if (bParam1 && !does_entity_exist(iParam2))
	{
		return;
	}
	if (bParam1 && is_entity_dead(iParam2))
	{
		return;
	}
	iVar0 = func_426(iParam0);
	if (bParam1)
	{
		set_ped_config_flag(iParam2, 155, true);
		set_blocking_of_non_temporary_events(iVar0, false);
	}
	else
	{
		set_blocking_of_non_temporary_events(iVar0, true);
	}
	set_ped_config_flag(iVar0, 152, bParam1);
	set_ped_config_flag(iVar0, 154, bParam1);
	set_ped_config_flag(iVar0, 156, bParam1);
	set_ped_config_flag(iVar0, 25, bParam1);
	set_ped_combat_attributes(iVar0, 87, bParam1);
	if (bParam1)
	{
		_0xd428c3f92fc3f6f8(iVar0, func_883(iParam0));
		_0x9238a3d970bbb0a9(iVar0, -1972074710);
		_0x9238a3d970bbb0a9(Global_35, -1972074710);
	}
	else
	{
		_0x9a4ac116cc1eee14(iVar0);
		if (!func_884())
		{
			_0x9a4ac116cc1eee14(Global_35);
		}
	}
}

void func_677(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	*iParam0 = (*iParam0 || shift_left(1, iVar0));
}

bool func_678(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

char* func_679(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 1:
			if (func_885())
			{
				if (func_886())
				{
					return "RE_PBR_UNI_V1_COMBAT_KILL_J";
				}
				else
				{
					return "ALLY_COMMENT_PLAYER_KILL";
				}
			}
			else if (func_887())
			{
				return "ALLY_COMMENT_PLAYER_WOUND_ENEMY";
			}
			else
			{
				return func_888();
			}
			break;
		case 2:
			return "RE_PBR_UNI_V1_AGGRO_J";
		case 3:
			iVar0 = func_889();
			if (iVar0 != 0)
			{
				if (func_96(iVar0, vLocal_1004, 1) < 5f)
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_J";
				}
				else
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_GEN_J";
				}
			}
			break;
		case 4:
			return func_888();
		case 5:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 6:
			return func_888();
		case 7:
			return "RE_PBR_UNI_V1_COMBAT_J";
		case 8:
			return func_888();
	}
	return "";
}

char* func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_885())
			{
				return "RE_PBR_UNI_V1_COMBAT_KILL_B";
			}
			else
			{
				return "RE_PBR_UNI_V1_COMBAT_B";
			}
			break;
		case 1:
			return func_890(&(iLocal_1041[5]));
		case 2:
			return "RE_PBR_UNI_V1_COMBAT_B";
		case 3:
			iVar0 = func_889();
			if (iVar0 != 0)
			{
				if (func_96(iVar0, vLocal_1004, 1) < 5f)
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_B";
				}
				else
				{
					return "RE_PBR_UNI_V1_COMBAT_COV_GEN_B";
				}
			}
			break;
		case 4:
			return "RE_PBR_UNI_V1_COMBAT_B";
		case 5:
			return func_890(&(iLocal_1041[5]));
	}
	return "";
}

void func_681(int iParam0, bool bParam1, int iParam2)
{
	func_891(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_892(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_56(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_329(1))
						{
							func_56(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_329(1) || *iParam0 & 8192 != 0))
				{
					func_55(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_893(iParam0))
			{
				iParam0->f_15 = func_134();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_134() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_894(iParam0);
}

bool func_682(int iParam0, int iParam1)
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
			if (!func_895(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_625(iParam0, iVar2) <= func_896(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_683(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_897(iParam2, 1, 1, 1, 0))
	{
		func_56(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_135(iParam1, 1);
	func_169();
}

bool func_684(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_898(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_899(iParam1);
			if (func_900(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_901(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_135(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_135(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_685(int iParam0, int iParam1, int iParam2)
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
	if (func_902(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_899(iParam2);
		if (func_900(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_901(iParam2)
				{
					func_135(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_686(int iParam0, int iParam1)
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
	if (func_895(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_901(iParam1)
		{
			fVar3 = func_899(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_687(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_134();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_688(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_903(iParam2);
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
			if (func_696(iParam2, iParam1))
			{
				func_135(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_689(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_904(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_696(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_135(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_690(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_905(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_135(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_135(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_906(iParam1, vVar0, vVar4))
					{
						func_135(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_135(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_906(iParam1, vVar0, vVar7))
					{
						func_135(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_691(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_895(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_907(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_908(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_909(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_910(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_911(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_692(int iParam0, int iParam1)
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

bool func_693(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_134();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_694(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_912(iVar0, &iVar2))
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
	if (func_913(iVar0, iParam0))
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

int func_695(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_696(int iParam0, int iParam1)
{
	if (func_914(iParam0))
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

bool func_697(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_164(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_698()
{
}

bool func_699(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_915(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_134();
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
						if (func_96(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_134();
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

bool func_700()
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
	if ((func_134() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_701(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_896(iParam0);
	if (iParam0->f_12 > func_916(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_917(iParam1);
	iVar1 = func_918(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_702(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_919(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_703(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_920(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
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
					if (!func_921(iParam1, iParam0))
					{
						if (func_96(iVar4, Global_36, 1) < 7f)
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

bool func_704(int iParam0, int iParam1)
{
	if (!func_922(0))
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

bool func_705(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_134();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_706(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_707(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_134();
	}
	else if (func_134() - iParam1->f_4) > func_923(iParam1)
	{
		return func_924(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_708(int iParam0, int iParam1)
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

int func_709(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_881(iVar0, 2))
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
				func_925(iVar1, iParam1, sParam0, 5, iParam3, fParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_710(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_420(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

int func_711(char* sParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!_does_volume_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_881(iVar0, 2))
		{
			if (iParam2 == (*Global_1945938)[iVar0]->f_10 && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_925(iVar1, iParam1, sParam0, 2, iParam3, fParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_712(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_95(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_881(iVar0, 2))
		{
			if (func_475(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_925(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_713(int iParam0)
{
	return _money_get_cash_balance();
}

void func_714(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	func_870(iVar0, bParam1);
}

bool func_715(int iParam0, bool bParam1)
{
	if (bParam1 && !func_420(iParam0))
	{
		return false;
	}
	return !func_881(iParam0, 4);
}

bool func_716(int iParam0, bool bParam1)
{
	if (bParam1 && !func_420(iParam0))
	{
		return false;
	}
	iVar0 = func_421(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_717(int iParam0, bool bParam1)
{
	if (bParam1 && !func_420(iParam0))
	{
		return false;
	}
	iVar0 = func_421(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

void func_718(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_926(iParam0);
	if (bParam3)
	{
		func_927(iParam0, sParam1, iParam2);
	}
}

void func_719(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_928(iParam0, sParam4, iParam5);
	}
	func_929(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_720()
{
	if (_0x3ab6c7b0bb0df4b1(&(iLocal_1041[4]), -1))
	{
		if (has_anim_event_fired(&(iLocal_1041[5]), -188106271))
		{
			func_131(&(iLocal_1041[5]), &(iLocal_1041[4]), func_442(1), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_43(&uLocal_985, 32768);
		}
	}
	else if (has_anim_event_fired(&(iLocal_1041[5]), 433301487))
	{
		func_131(&(iLocal_1041[5]), Global_35, func_442(0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_43(&uLocal_985, 32768);
	}
}

int func_721()
{
	return Global_40.f_11095.f_35;
}

bool func_722(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_723(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_724(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_930(bParam1);
	}
}

void func_725(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_726(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_727(int iParam0)
{
	if (!func_931(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_728(int iParam0, int iParam1, int iParam2)
{
	if (!func_931(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_729(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_730(int iParam0)
{
	return iParam0;
}

int func_731(int iParam0)
{
	if (!func_729(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_732()
{
	iVar0 = func_445();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_733(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_734(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_735()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_736(int iParam0, int iParam1, var uParam2)
{
	if (!func_734(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

void func_737(int iParam0, int iParam1)
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

void func_738(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_739(int iParam0, int iParam1)
{
	iVar0 = func_465(*iParam0);
	iVar1 = func_464(*iParam0);
	if (iParam1 < 1 || iParam1 > func_470(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_740(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_741(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_742(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_743(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_744(int iParam0)
{
	if (!func_295(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_232(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

void func_745(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_932(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_746(int iParam0)
{
	if (func_151(iParam0))
	{
		if (does_entity_exist(func_426(iParam0)))
		{
			func_294(iParam0, 67108864, 1);
			func_277(iParam0, 19, 1);
		}
	}
}

float func_747(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_748(int iParam0)
{
	iVar0 = func_426(iParam0);
	iVar1 = func_490(iParam0, 0);
	func_933(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

bool func_749(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

void func_750(int iParam0, int iParam1, bool bParam2)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

int func_751(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	iVar0 = func_395(iParam0);
	if (func_227(iVar0, 0))
	{
		if (func_227(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_749(iParam0)) || func_546(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_934(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_547(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_935(iParam0);
					_0x7b204f88f6c3d287(func_780(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_780(iParam0, 0));
					func_936(iParam0);
				}
			}
			else
			{
				if (func_278(iParam0, 32768, 1))
				{
					iVar2 = func_780(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_227((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_278(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_935(iParam0);
				_0x7b204f88f6c3d287(func_780(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_780(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_935(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_781(iParam0, 0);
	return 1;
}

void func_752()
{
	func_937(23);
}

int func_753(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_754(int iParam0)
{
	iVar0 = func_938(iParam0);
	if (iVar0 != 0)
	{
		func_939(-1, 24, 0, iVar0);
	}
}

void func_755(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_456(func_455(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_91(iParam0, 2))
	{
		func_940(iParam0, func_563(iParam3));
	}
	if (func_91(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_565();
		}
		func_941(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_123(iParam0, 65536))
	{
		func_942(iParam0, iParam1);
		func_943(iParam0, func_257(iParam0, iParam1));
		func_215(128);
	}
	func_567(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_568(iParam0, 1);
	if (!bParam2)
	{
		func_215(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_944(524288);
	}
	if (func_945(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_945(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_756(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_946(&Global_0, 8);
	}
	if (!func_735() || func_203() != -1)
	{
		return;
	}
	func_946(&Global_0, 1);
}

void func_757(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_758(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_95(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_759(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_95(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_760(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_95(*Global_1310750->f_16043[iVar0]))
		{
			if (func_119(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_761()
{
	iVar0 = func_947(func_335());
	if (iVar0 == 8)
	{
		iVar1 = func_336(func_335());
		if (func_338(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_948(func_815(0)))
	{
		return false;
	}
	if (func_949())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_762(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_763(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

int func_764(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_950(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_765(int iParam0)
{
	if (!func_594(iParam0))
	{
		return -1;
	}
	return func_764(iParam0);
}

void func_766(int iParam0)
{
	if (func_951(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, true);
	set_ped_config_flag(iParam0, 179, true);
	set_entity_proofs(iParam0, 127, false);
	if (is_entity_on_fire(iParam0))
	{
		stop_entity_fire(iParam0, 0);
		_set_entity_health(iParam0, get_entity_max_health(iParam0, false), 0);
	}
}

void func_767(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (func_547(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_395(iParam0);
	func_766(iVar0);
	func_750(iParam0, 8192, 1);
}

void func_768(int iParam0)
{
	if (func_951(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

void func_769(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (func_547(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_395(iParam0);
	func_768(iVar0);
	func_750(iParam0, 8192, 0);
}

void func_770(int iParam0)
{
	if (func_951(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 8229);
	set_ped_can_ragdoll_from_player_impact(iParam0, false);
}

void func_771(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (func_486(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!_does_volume_exist(&(Global_1357549->f_3[4])))
	{
		return;
	}
	if (!is_entity_in_volume(iParam0, &(Global_1357549->f_3[4]), true, 0))
	{
		return;
	}
	set_ragdoll_blocking_flags(iParam0, 909522);
}

void func_772(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (func_547(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_395(iParam0);
	func_770(iVar0);
	func_750(iParam0, 16384, 1);
}

void func_773(int iParam0)
{
	if (func_951(iParam0, 0))
	{
		return;
	}
	set_ped_can_ragdoll(iParam0, true);
	clear_ragdoll_blocking_flags(iParam0, 1048575);
	set_ragdoll_blocking_flags(iParam0, 1);
	set_ped_can_ragdoll_from_player_impact(iParam0, true);
}

void func_774(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (func_547(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_395(iParam0);
	func_773(iVar0);
	func_750(iParam0, 16384, 0);
}

int func_775(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_952(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = get_random_int_in_range(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_285(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_777(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return -1496612359;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return -99272505;
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return 41788943;
}

void func_778(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0]->f_5 = (Global_40.f_4942[iParam0]->f_5 - (Global_40.f_4942[iParam0]->f_5 && iParam1));
}

int func_779(int iParam0)
{
	iVar0 = 0;
	if (!func_295(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_295(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

int func_780(int iParam0, bool bParam1)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_953(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_781(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

bool func_782(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	switch ((*Global_1360165)[iParam0]->f_127)
	{
		case -784953535:
		case -543937540:
		case -233385727:
		case 893704044:
		case 1132950513:
			return true;
		default:
			break;
	}
	return false;
}

bool func_783(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
		case 8:
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
	}
	return false;
}

int func_784()
{
	return -1;
}

bool func_785(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489->f_12) || (bParam5 && Global_1359489->f_13 < 8))
	{
		if ((*Global_1360165)[iParam0]->f_125 <= 300)
		{
			if (_0xeb98b38ca60742d7((*Global_1360165)[iParam0]->f_126))
			{
				_0x49a8c2cd97815215((*Global_1360165)[iParam0]->f_126);
			}
			if (bParam5)
			{
				(*Global_1360165)[iParam0]->f_124 = _0x08fc896d2cb31fcc((*Global_1360165)[iParam0]->f_126, 0);
				Global_1359489->f_13++;
			}
			else
			{
				(*Global_1360165)[iParam0]->f_124 = _0x0cadc3a977997472((*Global_1360165)[iParam0]->f_126, 0);
			}
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_126);
			(*Global_1360165)[iParam0]->f_125++;
		}
		else
		{
			iVar0 = _0xa00df706c60173d1(func_547(iParam0, 1));
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				(*Global_1360165)[iParam0]->f_124 = func_792(iVar0, vParam1, bParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				set_model_as_no_longer_needed(iVar0);
				_0x7b204f88f6c3d287((*Global_1360165)[iParam0]->f_126);
			}
		}
		if (!func_227((*Global_1360165)[iParam0]->f_124, 0))
		{
			return false;
		}
		Global_1359489->f_12 = 1;
		func_750(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_786(int iParam0, int iParam1, bool bParam2)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if (func_954(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_227(iParam1, iVar0))
	{
		return false;
	}
	_set_ped_body_component(iParam1, func_955(iParam0));
	_update_ped_variation(iParam1, false, true, true, true, false);
	func_750(iParam0, 256, 1);
	return true;
}

void func_787(int iParam0, int iParam1)
{
	decor_set_bool(iParam0, "HorseCompanion", true);
	func_957(iParam0, func_956(iParam1));
	if (func_954(iParam1, 8))
	{
		_0xf74e134f40192884(iParam0, 2);
		set_ped_config_flag(iParam0, 412, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 412, false);
	}
	if (does_entity_exist(func_426(iParam1)))
	{
		_0x931b241409216c1f(func_426(iParam1), iParam0, 0);
		_0xed1c764997a86d5a(func_426(iParam1), iParam0);
		set_ped_config_flag(iParam0, 367, true);
	}
	else
	{
		func_279(iParam1, 38, 1);
	}
	set_ped_relationship_group_default_hash(iParam0, -1856989775);
	set_ped_relationship_group_hash(iParam0, -1856989775);
	if (Global_40.f_4283 == 0)
	{
		set_ped_config_flag(iParam0, 172, true);
	}
	set_ped_config_flag(iParam0, 324, true);
	set_ped_config_flag(iParam0, 330, true);
	set_ped_config_flag(iParam0, 331, true);
	set_ped_config_flag(iParam0, 471, true);
	set_ped_config_flag(iParam0, 442, true);
	if (func_954(iParam1, 4096))
	{
		set_ped_config_flag(iParam0, 1, false);
		set_ped_config_flag(iParam0, 54, false);
		set_ped_config_flag(iParam0, 121, false);
		set_ped_config_flag(iParam0, 302, false);
	}
	else
	{
		set_ped_config_flag(iParam0, 1, true);
		set_ped_config_flag(iParam0, 54, true);
		set_ped_config_flag(iParam0, 121, true);
		set_ped_config_flag(iParam0, 302, true);
	}
	_0xae6004120c18df97(iParam0, 2, 0);
	_0xae6004120c18df97(iParam0, 3, 0);
	func_550(iParam1, func_954(iParam1, 8192), func_954(iParam1, 16384), 1);
}

char* func_788(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_789(int iParam0, float fParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		fParam1 = func_958(fParam1, 0f, 1f);
		iVar0 = floor((fParam1 * IntToFloat(get_entity_max_health(iParam0, bParam2))));
		_set_entity_health(iParam0, iVar0, 0);
	}
}

int func_790(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_959(&uParam1))
	{
		return 1;
	}
	if (!func_557(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_791(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_792(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_960(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_793(var uParam0)
{
	return func_37(*uParam0, 4);
}

bool func_794(var uParam0)
{
	return func_37(*uParam0, 64);
}

bool func_795(var uParam0)
{
	return func_37(*uParam0, 8);
}

bool func_796(var uParam0)
{
	return func_37(*uParam0, 128);
}

bool func_797(var uParam0)
{
	return func_37(*uParam0, 2048);
}

void func_798(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_799(var uParam0)
{
	return func_37(*uParam0, 1024);
}

bool func_800(var uParam0)
{
	return func_37(*uParam0, 256);
}

void func_801(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_802(var uParam0)
{
	return func_37(*uParam0, 512);
}

bool func_803(var uParam0)
{
	return func_37(*uParam0, 4096);
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

bool func_805(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

struct<5> func_806(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_961(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_731(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_810(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_962(bParam1) };
			if (bParam2 && func_963(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_808(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_808(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_809(iParam0, &Var5, 1728382685))
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
			Var0 = { func_964(bParam1) };
			switch (func_965(iParam0))
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
			if (func_966(iParam0, -1823706425))
			{
				Var0 = { func_810(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_966(iParam0, -1483207246))
			{
				Var0 = { func_810(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_967(Var0, &Var27, bParam1, 0))
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

int func_807(int iParam0, int iParam1)
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

bool func_808(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_968(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_809(int iParam0, var uParam1, int iParam2)
{
	if (func_969(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_810(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_729(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_970(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_811(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_971(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_967(*uParam1, &Var0, bParam6, 0))
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
	if (!func_812(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_970(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_812(bool bParam0)
{
	if (func_203() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_970(bParam0));
}

int func_813(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_972(iParam0))
	{
		return 0;
	}
	if (!func_812(0))
	{
		return 0;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_814(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_602(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

int func_815(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_973(1, 0, 0);
	}
	else
	{
		iVar0 = func_335();
	}
	return func_816(iVar0);
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_817(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_818(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_819(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_510(Global_1310750[iVar0], iParam0))
		{
			if (!func_503(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_974(iVar0) < func_975(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_567(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_820(int iParam0)
{
	iVar0 = func_976(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_821(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_822(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_823()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_977(iVar0, 128))
		{
			func_978(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_824()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_977(iVar0, 128) && func_977(iVar0, 1))
		{
			func_978(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_825(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_826()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_91(iVar0, 16777216))
		{
			if (!func_979(iVar0))
			{
				func_980(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_827(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_216(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_216(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_216(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_216(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_216(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_216(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_216(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_828(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_116();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_829(int iParam0)
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

int func_830(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_831(int iParam0, int iParam1)
{
	fVar0 = func_981(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!_0x5102307ce88798eb(iParam0))
	{
		request_ped_visibility_tracking(iParam0);
	}
	if (iParam1->f_12 < fVar0 || is_tracked_ped_visible(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_982(_0x2ba9d7bf629f920c(iParam0), (fVar0 + 5f));
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
		{
			return true;
		}
		else if (is_weapon_valid(Global_1935630->f_44))
		{
			if (_is_weapon_lantern(Global_1935630->f_44) || _is_weapon_torch(Global_1935630->f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_983())
					{
						if (is_ped_facing_ped(Global_35, iParam0, 110f))
						{
							if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_832(int iParam0, int iParam1)
{
	if (func_330(iParam0))
	{
		set_player_noise_multiplier(player_id(), 0.25f);
	}
	if (((_get_ped_crouch_movement(Global_35) || is_ped_in_cover(Global_35, 0, 0)) || is_ped_going_into_cover(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (_0x0ea9eacba3b01601(Global_35, iParam0, iVar1) && get_player_current_stealth_noise(player_id()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (is_ped_in_cover(Global_35, 0, 0) || is_ped_going_into_cover(Global_35))
			{
				return false;
			}
			if (_get_ped_crouch_movement(Global_35) || ((_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (_0xa29fd00d45311eb7(Global_35, "stealth") == 1f && get_player_current_stealth_noise(player_id()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_833(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_834(var uParam0)
{
	if (!func_30(uParam0))
	{
		func_31(uParam0);
		vLocal_1021 = { get_entity_coords(&(iLocal_1041[4]), true, false) };
	}
	else
	{
		if (func_115(uParam0))
		{
			func_984(uParam0);
		}
		if (func_32(uParam0) > 1f)
		{
			vVar0 = { get_entity_coords(&(iLocal_1041[4]), true, false) };
			if (get_distance_between_coords(vVar0, vLocal_1021, true) > 5f)
			{
				vLocal_1021 = { vVar0 };
				iLocal_989 = 0;
			}
			else
			{
				iLocal_989 = iVar986 + 1;
			}
			func_31(uParam0);
		}
	}
	if (iVar986 > 60)
	{
		return true;
	}
	return false;
}

bool func_835()
{
	if (func_320(&(iLocal_1041[4]), iVar1038, 1, 0))
	{
		return true;
	}
	return false;
}

void func_836(bool bParam0)
{
	if (func_985())
	{
		if (func_183(0, 1, &(iLocal_1041[4]), 1) && func_183(0, 1, Global_35, 1))
		{
			if (!func_37(iVar982, 1048576))
			{
				if (&Local_85.f_98[4] > 10f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_LOUD_WAIT_OKAY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
				else
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_WAIT_OKAY", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
				func_43(&uLocal_985, 1048576);
			}
			else if (bParam0)
			{
				if (!func_37(iVar982, 524288))
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_SEGUE_TO_ME", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
					func_43(&uLocal_985, 524288);
				}
				else
				{
					func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_SEGUE_TO_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				}
			}
			else if (!func_37(iVar982, 524288))
			{
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_SEGUE_TO_YOU", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
				func_176(&uLocal_985, 524288);
			}
			else
			{
				func_131(Global_35, &(iLocal_1041[4]), "RE_PBR_UNI_V1_SEGUE_TO_ME", 0, -1082130432, 0, 0, 0, 1, 1, 0, 1808677283, 1, 0, 0);
			}
			uLocal_1138 = iVar1135 + 1;
			func_176(&uLocal_985, 262144);
		}
	}
}

bool func_837(float fParam0)
{
	if ((func_183(-2f, 1, &(iLocal_1041[4]), 1) && func_183(0, 1, Global_35, 1)) && &Local_85.f_98[4] < fParam0)
	{
		return true;
	}
	return false;
}

int func_838(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_632(iParam0, vVar0, iParam2);
}

void func_839(int iParam0)
{
	if (iParam0 != 0)
	{
		switch (iVar981)
		{
			case 0:
				func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_AIM_OBSTRUCTED", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_31(&uLocal_1211);
				uLocal_984 = iVar981 + 1;
				break;
			case 1:
				if (func_32(&uLocal_1211) > 8f)
				{
					func_131(&(iLocal_1041[4]), Global_35, "RE_PBR_UNI_V1_AIM_OBSTRUCTED_TWICE", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					uLocal_984 = iVar981 + 1;
				}
				break;
			case 2:
				break;
		}
	}
}

var func_840(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_841(int iParam0)
{
	func_472(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

float func_842(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_843(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_844(int iParam0)
{
	if (-1829635046 == func_986(81053684))
	{
		if (func_846(iParam0))
		{
			return true;
		}
	}
	else if (func_987(-525676072, iParam0))
	{
		if (func_846(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_845()
{
	return Global_1946804->f_2792;
}

bool func_846(int iParam0)
{
	if (func_987(81053684, iParam0))
	{
		return true;
	}
	if (func_987(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_847(int iParam0)
{
	if (func_988())
	{
		return false;
	}
	if (!func_729(iParam0, 0))
	{
		return false;
	}
	if (!func_989(iParam0, 1, 0))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

int func_848(int iParam0, int iParam1)
{
	bVar3 = func_990(iParam0);
	if (func_991(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_844(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_992();
			}
			else
			{
				iVar0 = func_993();
			}
		}
		else if (func_37(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_994();
		}
		else
		{
			iVar0 = func_995();
		}
	}
	else if (func_846(&iVar2))
	{
		if (func_991(iVar2, -1303648999))
		{
			iVar0 = func_992();
		}
		else
		{
			iVar0 = func_993();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_994();
	}
	else
	{
		iVar0 = func_995();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = get_game_timer();
		_task_item_interaction(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

int func_849(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = _get_first_entity_ped_is_carrying(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			return iVar1;
		}
	}
	return 0;
}

bool func_850(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_996(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_483(uParam2, 0, 0, 1, 0);
				func_56(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_997(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_55(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_851(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_2(iParam4, 32);
		func_482(iParam1, uParam2, 0);
		iVar5 = func_998(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_483(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_854(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_854(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
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
				iParam6 = func_999(uParam0);
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
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_1000(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1001(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_854(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_853(*uParam0, 1, 1);
			}
			else
			{
				func_853(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_852(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_853(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_854(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_855(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1002(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_856(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1003(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_857(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_858(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_713(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_1004(Global_35)) || func_1005(Global_35)) || func_1006(Global_35));
	fVar12 = -1f;
	if (func_30(&(iParam1->f_13)))
	{
		fVar12 = func_32(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_420((*uParam4)[iVar0]->f_6);
		func_1007(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1008(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1009(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_483(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1010(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_482(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1011(iParam1, fParam6, iParam1->f_9))
					{
						func_31(&(iParam1->f_18));
						if (bVar6)
						{
							func_1010(uParam4, 0, 0);
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
		func_1012(iParam1, fParam2);
	}
	return bVar5;
}

void func_859(var uParam0)
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

void func_860(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1013((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1012(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_861(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1014(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1015(iParam1, 0);
				func_482(iParam1, uParam2, func_854(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_862(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_31(&(iParam1->f_18));
			return false;
		}
		else if (func_30(&(iParam1->f_18)))
		{
			func_180(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_30(&(iParam1->f_18)))
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
	return func_360(&(iParam1->f_18), fParam2);
	return true;
}

void func_863(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1007(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_864(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_865(int* iParam0)
{
	if (func_854(iParam0, 0))
	{
		if (func_1016(iParam0))
		{
			func_864(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_866(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_867(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1017(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1018(iParam0))
	{
		return false;
	}
	if (func_1019(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1020(iParam0, 1)) || func_1021(32768))
	{
		if (!func_1020(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1022())
	{
		return false;
	}
	return true;
}

void func_868(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_869(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_870(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_881(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_871(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_872(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

bool func_873(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_30(&uParam0))
	{
		return false;
	}
	if (func_662(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

bool func_874(float fParam0, float fParam1, bool bParam2)
{
	func_1023(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return true;
		}
	}
	if (!func_664(fParam0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_875()
{
	if (((((((((((is_control_pressed(0, -1879280170) || is_control_pressed(0, 1537201378)) || is_control_pressed(0, -1175108432)) || is_control_pressed(0, 1520437207)) || is_control_pressed(0, -1292666904)) || is_control_pressed(0, -640622144)) || is_control_pressed(0, -455946723)) || is_control_pressed(0, -1242632265)) || is_control_pressed(0, -485697785)) || is_control_pressed(0, -822242784)) || is_control_pressed(0, 782960533)) || is_control_pressed(0, -874806616))
	{
		return true;
	}
	return false;
}

bool func_876(vector3 vParam0, float fParam3, float fParam4, bool bParam5, float fParam6)
{
	fVar0 = func_96(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && bParam5)
	{
		return true;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return true;
	}
	return false;
}

bool func_877(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_878(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_879(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		iVar0 = (*Global_1360165)[iParam0]->f_2;
	}
	return iVar0;
}

void func_880(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_398(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*iParam1))
		{
			func_1024(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_398(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_398(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_398(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_398(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1025(-1739349092);
	}
	if (!does_blip_exist(*iParam1))
	{
		*iParam1 = _blip_add_for_entity(422991367, func_426(iParam0));
	}
	if (does_blip_exist(*iParam1))
	{
		if (iVar0 != 0)
		{
			_blip_set_modifier(*iParam1, iVar0);
			if (iVar0 == -546708623)
			{
				_blip_set_modifier(*iParam1, 231194138);
			}
		}
		else
		{
			_set_blip_flash_style(*iParam1, iVar0);
		}
		if (bVar2 && !func_331(0, 0, 1))
		{
			_0xedd964b7984ac291(*iParam1, -1944754404);
			if (func_398(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*iParam1, -46775694);
			}
			if (func_398(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*iParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*iParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_398(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*iParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*iParam1, func_371(iParam0, 0));
		}
	}
}

bool func_881(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_882(int iParam0)
{
	if (func_151(iParam0))
	{
		if (func_227(Global_1360165[iParam0], 0))
		{
			return true;
		}
	}
	return false;
}

char* func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

bool func_884()
{
	if (func_203() != -1)
	{
		return false;
	}
	return func_232(1) > 0;
}

bool func_885()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!func_62(&(iLocal_1041[iVar0]), 0, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_886()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_887()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_62(&(iLocal_1041[iVar0]), 0, 1))
		{
			if (has_entity_been_damaged_by_entity(&(iLocal_1041[iVar0]), Global_35, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_888()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_62(&(iLocal_1041[iVar0]), 0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		sVar2 = "GUNFIGHT_MULTIPLE_ENEMIES_SHOUT";
	}
	else
	{
		sVar2 = "GUNFIGHT_SINGLE_ENEMY";
	}
	return sVar2;
}

int func_889()
{
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (is_ped_in_cover(&(iLocal_1041[iVar1]), 0, 0))
		{
			return uVar0;
		}
		iVar1++;
	}
	return uVar0;
}

char* func_890(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_62(&(iLocal_1041[iVar0]), 0, 1))
		{
			if (_0x7f9b9791d4cb71f6(iParam0, Global_35, false, 0) == 1)
			{
				if (_0x7f9b9791d4cb71f6(iParam0, &(iLocal_1041[iVar0]), false, 0) == 1 && &Local_85.f_98[iVar0] < 20f)
				{
					iVar1 = func_838(&(iLocal_1041[iVar0]), Global_35, 1060437492);
					if (iVar1 == 0)
					{
					}
					else
					{
						switch (iVar1)
						{
							case 1:
								sVar2 = "ENEMY_BEHIND_YOU";
								break;
							case 2:
								sVar2 = "ENEMY_SPOTTED_RIGHT";
								break;
							case 3:
								sVar2 = "ENEMY_SPOTTED_LEFT";
								break;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return sVar2;
}

void func_891(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1026();
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
			func_1027(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_892(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_893(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_203() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1028(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1028(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_918(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_894(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_1029(iParam0);
	}
}

bool func_895(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_918(iParam2);
	}
	else
	{
		iVar1 = func_917(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_918(iParam0);
	}
	else
	{
		iVar0 = func_917(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
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

float func_896(int iParam0)
{
	return iParam0->f_26;
}

bool func_897(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_898(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_164(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_840(iVar0, 0)))
		{
			if (func_1030(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_899(int iParam0)
{
	return iParam0->f_17;
}

bool func_900(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_901(int iParam0)
{
	return iParam0->f_18;
}

bool func_902(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_840(iVar0, 0)))
		{
			if (func_877(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_903(int iParam0)
{
	return iParam0->f_23;
}

int func_904(int iParam0)
{
	return iParam0->f_21;
}

int func_905(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_906(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_878(iParam0, vParam4, 0.5f))
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

int func_907(int iParam0)
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
	if (func_1031(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_908(int iParam0)
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

bool func_909(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_330(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_910(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_330(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_911(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_330(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
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

bool func_912(int iParam0, int iParam1)
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

bool func_913(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_1032(iParam0, 1, 0, 0) != 2055893578)
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

bool func_914(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_915(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_96(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_916(int iParam0)
{
	return iParam0->f_24;
}

int func_917(int iParam0)
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

int func_918(int iParam0)
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

int func_919(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_912(Global_35, &iVar1))
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
		fVar2 = func_164(iParam0, player_ped_id(), 0, 1);
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
		if (func_164(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_920(int iParam0, int iParam1, bool bParam2)
{
	func_589(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_921(iParam1, iVar0))
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
				if (!bParam2 || !func_921(iParam1, iVar1))
				{
					if (func_96(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_921(int iParam0, int iParam1)
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

bool func_922(int iParam0)
{
	if (func_448())
	{
		return false;
	}
	return func_628((*Global_1347702)[58]->f_15, 1);
}

int func_923(int iParam0)
{
	return iParam0->f_20;
}

int func_924(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
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

void func_925(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, float fParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = fParam5;
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
	_uiprompt_set_transport_mode(iVar0, fParam5);
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_870(iParam0, 1);
	func_871(iParam0, 1);
	func_872(iParam0, 128);
}

void func_926(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_713(1) < iParam0)
	{
		iParam0 = func_713(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_455(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_927(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_458(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_928(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_458(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_929(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1033())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_458(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1034(iVar0);
			func_1035(iVar0, 0, 0);
		}
		func_458(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_456(func_455(1644987397), iVar1);
	}
}

void func_930(bool bParam0)
{
	func_1036(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_931(int iParam0, var uParam1)
{
	if (!func_1037(iParam0))
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

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -177936449;
		case 0:
			return -1758735922;
		case 6:
			return -680519380;
		case 3:
			return 263744889;
		case 7:
			return 351057032;
		case 4:
			return 1172283326;
		case 2:
			return -1046310682;
		case 5:
			return 652984488;
		case 8:
			return 1389665576;
		case 9:
			return -1066280913;
		case 13:
			return 1975793632;
		case 14:
			return -1887627202;
		case 15:
			return 1851096281;
		case 16:
			return 47402526;
		case 17:
			return 1762683397;
		case 18:
			return -1154551809;
		case 19:
			return -333682158;
		case 20:
			return 1465089966;
		case 21:
			return 511213393;
		case 22:
			return -1214580355;
		case 23:
			return -1397900723;
		case 10:
			return 541398842;
		case 24:
			return -1960060437;
		case 25:
			return 1634371177;
		case 26:
			return -1308114737;
		case 11:
			return 683250525;
		case 12:
			return -814958461;
	}
	return 0;
}

void func_933(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		func_1038(iParam1);
	}
}

float func_934(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_119(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_935(int iParam0)
{
	iVar0 = func_395(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

void func_936(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_937(int iParam0)
{
	if (func_203() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_227(func_426(iVar0), 0))
		{
			if (is_ped_group_member(func_426(iVar0), func_427(), 1))
			{
				func_1039(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_938(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_939(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_1040() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_1040();
					}
					func_221(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_55(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_940(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_817(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_818(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_941(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_123(iParam0, 8192))
	{
		iVar0 = func_818(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_942(int iParam0, int iParam1)
{
	iVar0 = (func_506(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_943(int iParam0, vector3 vParam1)
{
	if (func_91(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_95(vParam1))
	{
		return;
	}
	if (!func_271(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_95(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_475(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_944(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_980(iVar0, iParam0);
		iVar0++;
	}
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_946(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_947(int iParam0)
{
	if (!func_599(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_948(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_949()
{
	return Global_1894899 & 2 != 0;
}

int func_950(int iParam0)
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

bool func_951(int iParam0, bool bParam1)
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

int func_952(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

int func_953(int iParam0)
{
	if (!func_295(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126))
	{
		iVar0 = func_547(iParam0, 1);
		iVar1 = _0xa00df706c60173d1(iVar0);
		if (Global_40.f_4942[iParam0]->f_7 != 0 && iVar1 != Global_40.f_4942[iParam0]->f_7)
		{
			_0x8bc555034a5a5e8c(iVar0, Global_40.f_4942[iParam0]->f_7);
		}
		(*Global_1360165)[iParam0]->f_126 = _create_persistent_character(iVar0);
		_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_126);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

bool func_954(int iParam0, int iParam1)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	return ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1) != 0;
}

int func_955(int iParam0)
{
	return 1268180497;
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_447(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_447(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_957(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

float func_958(float fParam0, float fParam1, float fParam2)
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

bool func_959(var uParam0)
{
	return func_37(*uParam0, 1);
}

void func_960(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1041(iParam1))
		{
			func_1042(iParam0, 41788943);
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
			func_1043(iParam0, 0, 1);
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
			func_1044(iParam0, 0);
			bVar0 = true;
		}
		func_957(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

struct<4> func_961(bool bParam0)
{
	return func_810(1328661203, func_1045(), -1591664384, bParam0);
}

struct<4> func_962(bool bParam0)
{
	iVar0 = func_970(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_810(923904168, func_961(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_810(923904168, func_961(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_810(923904168, func_961(bParam0), -740156546, 0);
}

bool func_963(int iParam0, bool bParam1)
{
	if (func_965(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_447(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_964(bool bParam0)
{
	iVar0 = func_970(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_810(271701509, func_961(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_810(271701509, func_961(bParam0), 12999093, 0);
}

int func_965(int iParam0)
{
	if (!func_729(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_966(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_965(iParam0);
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

bool func_967(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_970(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_968(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_729(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_810(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_970(bParam6), &Var0, 0);
	return uVar4;
}

bool func_969(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_970(0);
	*uParam1 = { func_810(iParam0, func_962(0), iParam3, 0) };
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

int func_970(bool bParam0)
{
	if (func_203() == -1)
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

bool func_971(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_972(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

int func_973(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_1046(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_974(int iParam0)
{
	if (func_271(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_975(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_976(int iParam0, int iParam1)
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

bool func_977(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_978(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_979(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_980(int iParam0, int iParam1)
{
	if (!func_271(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

float func_981(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_916(iParam0);
	}
	if (_0x25ca89b2a39dcc69() > 0.833f)
	{
		return func_1047(iParam0);
	}
	return func_916(iParam0);
}

float func_982(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_983()
{
	iVar0 = func_467(func_220());
	iVar1 = func_468(func_220());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

void func_984(var uParam0)
{
	if (!func_30(uParam0))
	{
	}
	if (func_115(uParam0))
	{
		uParam0->f_1 = (func_116() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_308(uParam0, 2);
	}
}

bool func_985()
{
	if ((func_37(iVar983, 262144) && iVar1136 < 5) && func_96(Global_35, vLocal_1001, 1) > 100f)
	{
		return true;
	}
	return false;
}

int func_986(int iParam0)
{
	iVar0 = func_1049(func_1048(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_987(int iParam0, int iParam1)
{
	iVar1 = func_1049(func_1048(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_965(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_988()
{
	if (Global_1946804->f_2793)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1946804->f_2791)) < 1250)
	{
		return true;
	}
	if (func_1050())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_35))
	{
		return true;
	}
	return false;
}

bool func_989(int iParam0, int iParam1, bool bParam2)
{
	if (!func_729(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_731(iParam0);
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
		if (!func_1051(iParam0, 1))
		{
			return false;
		}
	}
	return func_1052(iParam0, 0, bParam2) >= iParam1;
}

int func_990(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_846(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_991(int iParam0, int iParam1)
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

int func_992()
{
	iVar0 = 1549701178;
	switch (func_1053())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_993()
{
	iVar0 = 614608656;
	switch (func_1053())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_994()
{
	iVar0 = -1832677570;
	switch (func_1053())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_995()
{
	iVar0 = 1623252156;
	switch (func_1053())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_996(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1054((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_997(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1013((*uParam0)[iVar0]))
		{
			func_655((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_998(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1055(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_420((*uParam2)[iVar0]->f_6))
		{
			func_655((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_999(var uParam0)
{
	iVar0 = func_497(*uParam0);
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

int func_1000(var uParam0, int iParam1)
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

void func_1001(int* iParam0, int* iParam1)
{
	if (!func_854(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_655(iParam1, 19);
			func_1015(iParam0, 23);
			func_1056(iParam1, 2);
		}
	}
}

bool func_1002(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_1057(16))
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
					func_1058(16);
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

void func_1003(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1055(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_1004(int iParam0)
{
	return (func_1059(iParam0, 4) || func_1059(iParam0, 5));
}

int func_1005(int iParam0)
{
	return func_1059(iParam0, 7);
}

int func_1006(int iParam0)
{
	return func_1059(iParam0, 6);
}

void func_1007(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1013(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1055(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1008(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1060(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_715(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_652(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_652(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1061(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1009(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_717(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1062(iParam1, 1))
	{
		func_1063(iParam1, 1);
		return true;
	}
	return false;
}

void func_1010(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_390((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1011(int* iParam0, float fParam1, bool bParam2)
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

void func_1012(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1013(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1014(int iParam0)
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

void func_1015(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1016(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_1017(int iParam0, int iParam1)
{
	if (func_203() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1018(int iParam0)
{
	if (func_203() != -1)
	{
		if (func_1020(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1020(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1019(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1020(iParam0, 65536) && !func_1020(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1020(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1020(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1020(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1021(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_1022()
{
	return Global_1905944->f_5694;
}

void func_1023(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_normal(iParam8, iParam7) * 127f));
}

void func_1024(int iParam0)
{
	if (!func_295(iParam0))
	{
		return;
	}
	if (func_1064(iParam0))
	{
		iVar0 = func_879(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
	}
}

int func_1025(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return 500148876;
		case 654481153:
			return -1575595762;
		case -2036347356:
			return 1243830185;
		case -1341684320:
			return 1243830185;
		case -1567081107:
			return -1650465405;
		case -919476462:
			return -729441538;
		case -1670940721:
			return 623155783;
		case 754620122:
			return 423351566;
		case -1739349092:
			return -1606321000;
		case -1511391406:
			return 1974815632;
		case 565221344:
			return 444204045;
		default:
			break;
	}
	return 0;
}

bool func_1026()
{
	if (func_1065())
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

void func_1027(var uParam0, var uParam1)
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

int func_1028(int iParam0)
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
	if (iParam0->f_6 == 3)
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

void func_1029(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_55(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_56(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1030(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_877(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1031(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1032(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1033()
{
	if (func_1066())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1034(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1067((Global_40.f_4283.f_325 + iParam0));
}

void func_1035(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1033())
	{
		func_458(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_458(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

void func_1036(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1037(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1038(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_1039(int iParam0, int iParam1)
{
	if (!func_151(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_1040()
{
	return &Global_1899515;
}

bool func_1041(int iParam0)
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

void func_1042(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_538(iParam0, iParam1))
		{
			if (func_539(iParam0, iParam1))
			{
				if (func_540(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_541(iParam0);
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

void func_1043(int iParam0, int iParam1, bool bParam2)
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

void func_1044(int iParam0, bool bParam1)
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

struct<4> func_1045()
{
	return Var0;
}

bool func_1046(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

var func_1047(int iParam0)
{
	return iParam0->f_25;
}

int func_1048(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1068(iVar0);
}

int func_1049(int iParam0, int iParam1)
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

bool func_1050()
{
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

bool func_1051(int iParam0, int iParam1)
{
	if (!func_729(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1069(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1070("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1071(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_558(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1072(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1072(iVar1);
	}
	return false;
}

int func_1052(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_729(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_731(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1069(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1073(iParam0, 0);
	}
	uVar2 = _0xe787f05dfc977bde(func_970(bParam2), iParam0, 0);
	return uVar2;
}

int func_1053()
{
	if (_is_ped_carrying(Global_35))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_1074(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_35, true)) && !(is_ped_in_any_vehicle(Global_35, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_1074(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_1054(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1055(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_420(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_177(&(iParam1->f_6), 0, 1);
	}
	if (!func_420(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1013(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_709(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_420(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1061(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1075(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1076(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_650(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1075(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_652(iParam1->f_6, 0, 1);
				}
				else
				{
					func_652(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1056(int* iParam0, int iParam1)
{
	if (!func_654(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_655(iParam0, 14);
		}
	}
}

bool func_1057(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1058(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_1059(int iParam0, int iParam1)
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

bool func_1060(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_1061(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_420(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	func_1075(iParam0, 18, 0, 1);
	func_1075(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1062(int iParam0, bool bParam1)
{
	if (bParam1 && !func_420(iParam0))
	{
		return false;
	}
	iVar0 = func_421(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1063(int iParam0, bool bParam1)
{
	if (bParam1 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_1064(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

bool func_1065()
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

bool func_1066()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1067(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_455(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

int func_1068(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1077(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1069(int iParam0, int iParam1)
{
	if (!func_729(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_731(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_991(iParam0, 1399091007))
	{
		func_1078(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_1070(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_970(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1071(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1072(int iParam0)
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

int func_1073(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1079(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1080(&Var0, func_962(0));
	}
	if (!func_1081(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1072(iVar14);
	return uVar15;
}

bool func_1074(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_1075(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_1076(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_420(iParam0))
	{
		return;
	}
	iVar0 = func_421(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

int func_1077(int iParam0, int iParam1)
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

void func_1078(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_1079(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1080(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1081(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_970(bParam3), uParam0, uParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

