void __EntryFunction__()
{
	fLocal_13 = 1f;
	fLocal_14 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1(&ScriptParam_0);
	Global_1132288->f_2042 = (1 + Global_1132288->f_2042);
	while (!func_2(0, 0) && func_3(&uLocal_21, &Local_359, &uLocal_1576, &ScriptParam_0))
	{
		wait(0);
	}
	iVar0 = player_id();
	if (((iVar0 >= 0 && iVar0 < 32) && network_is_game_in_progress()) && network_is_in_session())
	{
		bVar1 = false;
		if (network_is_host_of_this_script() && network_get_num_script_participants("net_camp", ScriptParam_0.f_3, 0) <= 1)
		{
			bVar1 = true;
		}
		bVar2 = false;
		if (bVar1 && func_4(&uLocal_1576, 128))
		{
			bVar2 = true;
		}
		bVar3 = false;
		if (!bVar2 && (bVar1 || func_4(&uLocal_1576, 8)))
		{
			bVar3 = true;
		}
		func_5(&uLocal_21, &Local_359, &uLocal_1576, bVar3, bVar2);
		if (bVar1)
		{
			func_6(&uLocal_21, &Local_359, bVar2);
		}
	}
	func_7(&uLocal_21, &uLocal_1576, &Local_359);
	func_8();
}

void func_1(var uParam0)
{
	func_9(32, uParam0->f_3);
	func_10();
	network_register_host_broadcast_variables(&uLocal_21, 338, 48);
	func_11(_0xba24095ea96dfe17(&uLocal_21), 338, "m_NC_HostData");
	network_register_player_broadcast_variables(&Local_359, 1217, 49);
	func_12(_0x690806bc83bc8ca2(Local_359[0]), 1217, "m_NC_PlayerData");
	reserve_network_mission_peds(1);
	iVar0 = 2;
	reserve_network_mission_objects(iVar0);
	func_13(0);
	set_this_script_can_be_paused(false);
}

bool func_2(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_3(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (network_is_host_of_this_script())
	{
		func_14(uParam0, uParam1, uParam2);
	}
	if (func_15(uParam0, uParam2, uParam3))
	{
		if (!func_16(uParam1, 8, uParam2->f_1))
		{
			func_17(uParam1, 8, uParam2->f_1);
		}
		if (uParam0->f_335 == player_id())
		{
			return false;
		}
	}
	func_18(uParam0, uParam1, uParam2, uParam3);
	if (network_is_host_of_this_script())
	{
		func_19(uParam0, uParam1, uParam2, uParam3);
	}
	return true;
}

bool func_4(var uParam0, int iParam1)
{
	return func_20(uParam0->f_7, iParam1);
}

void func_5(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	func_21(uParam0, uParam1, uParam2, bParam3, bParam4);
	func_22(uParam0, uParam1, uParam2, bParam4);
}

void func_6(var uParam0, var uParam1, bool bParam2)
{
	func_23(uParam0, uParam1, 1, bParam2);
}

void func_7(var uParam0, var uParam1, var uParam2)
{
	if (_does_volume_exist(uParam1->f_10))
	{
		func_24(uParam1->f_10);
		func_25(uParam1->f_9);
		clear_timecycle_modifier();
		_delete_volume(uParam1->f_10);
	}
	if (_does_volume_exist(uParam1->f_11))
	{
		_delete_volume(uParam1->f_11);
	}
	if (_does_volume_exist(uParam1->f_12))
	{
		_delete_volume(uParam1->f_12);
	}
	if (_does_volume_exist(uParam1->f_13))
	{
		_0x74c2b3dc0b294102(uParam1->f_13);
		_0xa1cfb35069d23c23(uParam1->f_13);
		_delete_volume(uParam1->f_13);
	}
	if (func_4(uParam1, 8388608))
	{
		Global_1913397 = 0;
	}
	func_26(uParam1);
	func_27(uParam1);
	if (does_blip_exist(uParam1->f_17))
	{
		remove_blip(&(uParam1->f_17));
	}
	remove_anim_dict(func_28());
	func_29(uParam1);
	func_30(uParam1);
	func_31(uParam1);
	func_32();
	func_33(uParam1);
	func_34();
	func_35(uParam1);
	func_36();
	func_37(uParam1);
	func_38(uParam0, uParam1, uParam2);
	if (func_4(uParam1, 4))
	{
		func_39(-161625840, 1);
	}
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 459, false);
	}
	func_40(*uParam1, 16);
	func_40(*uParam1, 1);
	Global_1132288->f_2042 = (Global_1132288->f_2042 - 1);
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_10()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_8();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_8();
		}
		if (!network_is_game_in_progress())
		{
			func_8();
		}
		if (!network_is_signed_online())
		{
			func_8();
		}
		if (func_41() == 0)
		{
			if (func_42())
			{
				func_8();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_12(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_13(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_8();
					break;
				case 2:
					func_8();
					break;
				case 4:
					func_8();
					break;
				case 3:
					func_8();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_8();
			return;
		}
		wait(0);
	}
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_335 == 255)
	{
		if (uParam2->f_3742 < 10)
		{
			uParam2->f_3742++;
			return;
		}
		else
		{
			uParam2->f_3742 = 0;
		}
		iVar0 = 255;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (func_16(uParam1, 8, iVar1))
			{
				iVar0 = int_to_participantindex(iVar1);
				if (network_is_participant_active(iVar0))
				{
					uParam0->f_335 = network_get_player_index(iVar0);
					return;
				}
			}
			iVar1++;
		}
	}
	else if (!network_is_player_active(uParam0->f_335) || !network_is_player_a_participant(uParam0->f_335))
	{
		uParam0->f_335 = 255;
	}
}

bool func_15(var uParam0, var uParam1, var uParam2)
{
	if (func_4(uParam1, 8))
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		return true;
	}
	if (func_4(uParam1, 128))
	{
		return true;
	}
	else if (!func_43(uParam0->f_6) && vdist(Global_35, uParam0->f_6) >= Global_1901947->f_584.f_1)
	{
		func_44(uParam1, 128);
		return true;
	}
	*uParam1 = func_45(*uParam2);
	if ((!func_46(*uParam1) || Global_1131196[*uParam1] < 1) || Global_1131196[*uParam1] > 2)
	{
		func_44(uParam1, 8);
		return true;
	}
	if ((func_47(16) || func_48()) || func_49())
	{
		return true;
	}
	if (uParam0->f_335 == player_id())
	{
		return true;
	}
	return false;
}

bool func_16(var uParam0, int iParam1, int iParam2)
{
	return func_20((*uParam0)[iParam2]->f_1, iParam1);
}

void func_17(var uParam0, int iParam1, int iParam2)
{
	func_50(&((*uParam0)[iParam2]->f_1), iParam1);
}

void func_18(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam2->f_1 = participant_id_to_int();
	if (!func_4(uParam2, 8))
	{
		iVar0 = func_51(*uParam2, 0);
		if (uParam2->f_2 != iVar0)
		{
			uParam2->f_2 = iVar0;
			func_52(uParam1, uParam2, 14);
		}
		uParam2->f_3 = func_53(*uParam2, 0);
		uParam2->f_403 = func_54(uParam2, player_id());
	}
	func_55(uParam0, uParam2);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (func_56(uParam0, uParam1, uParam2, uParam3))
			{
				func_57(uParam1, 1, uParam2->f_1);
			}
			break;
		case 1:
			if (func_58(uParam0, uParam2))
			{
				func_57(uParam1, 2, uParam2->f_1);
			}
			break;
		case 2:
			func_59(uParam0, uParam1, uParam2);
			break;
	}
}

void func_19(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_60(uParam0, uParam2);
	switch (uParam0->f_3)
	{
		case 0:
			if (func_61(uParam0, uParam2, uParam3))
			{
				func_62(uParam0, 1);
			}
			break;
		case 1:
			if (func_63(uParam0, uParam2))
			{
				func_62(uParam0, 2);
			}
			break;
		case 2:
			func_64(uParam0, uParam1, uParam2);
			break;
	}
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_21(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_65(uParam0, uParam1, uParam2, iVar0, bParam3, bParam4);
		iVar0++;
	}
}

void func_22(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		func_66(uParam0, uParam1, uParam2, iVar0, !bParam3, bParam3, 1);
		iVar0++;
	}
}

void func_23(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		func_67(uParam0, uParam1, iVar0, iParam2, bParam3);
		iVar0++;
	}
	func_68(uParam0);
}

void func_24(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			Global_17353[iVar0]->f_1 = 5;
		}
		iVar0++;
	}
}

int func_25(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return 0;
	}
	if (_does_volume_exist(Global_1940122[iParam0]))
	{
		(*Global_1940122)[iParam0] = 0;
		(*Global_1940122)[iParam0]->f_1 = 0;
		return 1;
	}
	return 0;
}

void func_26(var uParam0)
{
	if (func_4(uParam0, 131072) && does_entity_exist(uParam0->f_66[18]->f_3))
	{
		_0xa22712e8471aa08e(uParam0->f_66[18]->f_3, 0, 0);
		_0xe98d55c5983f2509(uParam0->f_66[18]->f_3);
		func_69(uParam0, 131072);
	}
	if (func_4(uParam0, 65536))
	{
		func_70(uParam0->f_406);
		func_70(uParam0->f_406.f_1);
		func_71(28, 0);
		func_69(uParam0, 65536);
	}
}

void func_27(var uParam0)
{
	if (func_4(uParam0, 33554432) && does_entity_exist(uParam0->f_66[19]->f_3))
	{
		_0xa22712e8471aa08e(uParam0->f_66[19]->f_3, 0, 0);
		_0xe98d55c5983f2509(uParam0->f_66[19]->f_3);
		func_69(uParam0, 16777216);
	}
	if (func_4(uParam0, 33554432))
	{
		if (func_72(&Global_1296859, 8192))
		{
			_display_hud_component(-782493871);
			func_73(8192);
		}
		func_70(uParam0->f_408);
		func_70(uParam0->f_408.f_1);
		func_71(29, 0);
		func_69(uParam0, 33554432);
	}
}

char* func_28()
{
	return "script_mp@naturalist@spirit_animal_herbs";
}

void func_29(var uParam0)
{
	remove_named_ptfx_asset(func_74());
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_75(uParam0, iVar0);
		if (does_entity_exist(uParam0->f_3563.f_2[iVar0]->f_3))
		{
			delete_ped(&(uParam0->f_3563.f_2[iVar0]->f_3));
		}
		uParam0->f_3563.f_2[iVar0] = -1;
		uParam0->f_3563.f_2[iVar0]->f_14 = 0;
		uParam0->f_3563.f_2[iVar0]->f_11 = 0;
		uParam0->f_3563.f_2[iVar0]->f_12 = 0;
		uParam0->f_3563.f_2[iVar0]->f_13 = 0;
		uParam0->f_3563.f_2[iVar0]->f_15 = 0;
		uParam0->f_3563.f_2[iVar0]->f_16 = 0;
		if (_is_metaped_outfit_request_valid(uParam0->f_3563.f_2[iVar0]->f_4))
		{
			_release_metaped_outfit_request(uParam0->f_3563.f_2[iVar0]->f_4);
			uParam0->f_3563.f_2[iVar0]->f_4 = 0;
		}
		if (_does_scenario_point_exist(uParam0->f_3563.f_2[iVar0]->f_5))
		{
			_delete_scenario_point(uParam0->f_3563.f_2[iVar0]->f_5);
		}
		if (_does_scenario_point_exist(uParam0->f_3563.f_2[iVar0]->f_6))
		{
			_delete_scenario_point(uParam0->f_3563.f_2[iVar0]->f_6);
		}
		if (&uParam0->f_3563.f_2[iVar0] != -1)
		{
			_0x4eddd9e9ca5af985(uParam0->f_3563.f_2[iVar0]->f_7);
			_0x4eddd9e9ca5af985(uParam0->f_3563.f_2[iVar0]->f_8);
		}
		func_76(&(uParam0->f_3563.f_2[iVar0]->f_1), 0);
		func_77(uParam0, iVar0, 0);
		iVar0++;
	}
	func_78(uParam0);
	if (func_79(uParam0, 2))
	{
		bVar1 = func_79(uParam0, 4);
		_0xc5cb91d65852ed7e(func_80(bVar1));
		play_sound_frontend(func_81(), func_82(), true, 0);
		if (bVar1)
		{
			func_83(uParam0, 4);
			func_84(32);
		}
		else
		{
			func_84(64);
		}
		func_83(uParam0, 2);
	}
	if (func_79(uParam0, 32))
	{
		trigger_music_event(func_85(0));
		_0x0f2a2175734926d8(func_86(), func_82());
		_0x9428447ded71fc7e(func_87());
		set_audio_flag("OpenWorldMusicDisabled", false);
		func_83(uParam0, 32);
	}
	_0xa63fcad3a6fec6d2(player_id(), 1);
	_0x5c9978a2a3dc3d0d();
	func_88(uParam0, 0);
	uParam0->f_3563.f_112 = 0;
	uParam0->f_3563.f_113 = 0;
	uParam0->f_3563.f_116 = 0;
	uParam0->f_3563.f_109 = 0;
	uParam0->f_3563.f_110 = 0;
	uParam0->f_3563.f_119 = 0;
	uParam0->f_3563.f_120 = 0;
	uParam0->f_3563.f_118 = 0;
	uParam0->f_3563.f_115 = 0;
	uParam0->f_3563.f_111 = 0;
	uParam0->f_3563.f_114 = 0;
}

void func_30(var uParam0)
{
	func_89(uParam0, 0);
	uParam0->f_442.f_127 = 0;
	func_90(&(uParam0->f_704));
	if (_does_volume_exist(uParam0->f_605))
	{
		_delete_volume(uParam0->f_605);
	}
}

void func_31(var uParam0)
{
	func_91(uParam0);
	if (func_4(uParam0, 4096))
	{
		func_69(uParam0, 4096);
	}
	if (func_4(uParam0, 2048))
	{
		func_70(uParam0->f_440);
		func_70(uParam0->f_440.f_1);
		func_71(27, 0);
		func_69(uParam0, 2048);
	}
}

void func_32()
{
	if (_text_database_has_loaded(func_92()))
	{
		_text_database_delete(func_92());
	}
	_0x531a78d6bf27014b(func_93());
	_0x531a78d6bf27014b(func_82());
}

void func_33(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (_does_volume_exist(&(uParam0->f_14[iVar0])))
		{
			_delete_volume(&(uParam0->f_14[iVar0]));
		}
		iVar0++;
	}
}

void func_34()
{
	func_94(605);
	func_95(605);
	func_94(616);
	func_95(616);
	func_94(617);
	func_95(617);
	func_94(614);
	func_95(614);
	func_94(610);
	func_95(610);
	func_94(611);
	func_95(611);
	func_94(608);
	func_95(608);
	func_94(609);
	func_95(609);
	func_94(613);
	func_95(613);
	func_94(612);
	func_95(612);
}

void func_35(var uParam0)
{
	if (does_entity_exist(Global_34))
	{
		set_entity_proofs(Global_34, 0, false);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_96(uParam0, int_to_playerindex(iVar0), iVar0);
		iVar0++;
	}
}

void func_36()
{
	if ((does_entity_exist(Global_34) && !is_entity_dead(Global_34)) && is_ped_in_any_vehicle(Global_34, false))
	{
		iVar0 = get_vehicle_ped_is_in(Global_34, false);
		if ((((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && network_has_control_of_entity(iVar0)) && is_vehicle_driveable(iVar0, false, false)) && get_ped_in_vehicle_seat(iVar0, -1) == Global_34)
		{
			func_97(iVar0);
		}
	}
}

void func_37(var uParam0)
{
	if (is_bit_set(uParam0->f_740.f_2506.f_17, 0))
	{
		clear_bit(&(uParam0->f_740.f_2506.f_17), 0);
		func_98(&(uParam0->f_740), 0);
	}
}

void func_38(var uParam0, var uParam1, var uParam2)
{
	func_99(uParam0, uParam1);
	func_100(uParam1, uParam2);
	set_model_as_no_longer_needed(2042565497);
	if (does_cam_exist(uParam1->f_410.f_17))
	{
		destroy_cam(uParam1->f_410.f_17, false);
	}
}

int func_39(int iParam0, bool bParam1)
{
	if (!func_101(iParam0))
	{
		return 0;
	}
	if (!func_102(iParam0))
	{
		return 0;
	}
	iVar0 = get_id_of_this_thread();
	if (!func_103(iParam0, iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		func_104(iParam0);
	}
	func_105(iParam0);
	return 1;
}

void func_40(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (func_20(Global_1132288->f_1[iParam0]->f_61, iParam1))
	{
		func_106(&(Global_1132288->f_1[iParam0]->f_61), iParam1);
	}
}

int func_41()
{
	return Global_1572887->f_13;
}

bool func_42()
{
	return Global_1051252->f_8;
}

bool func_43(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_44(var uParam0, int iParam1)
{
	func_50(&(uParam0->f_7), iParam1);
}

int func_45(vector3 vParam0)
{
	if (vParam0.z == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (vParam0.z == (*Global_1131196)[iVar0]->f_1.f_2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_46(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_47(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_48()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_49()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_107(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_50(int iParam0, int iParam1)
{
	func_108(iParam0, iParam1);
}

int func_51(int iParam0, bool bParam1)
{
	if (!func_46(iParam0))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	if (!network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		if (!bParam1)
		{
		}
		return 0;
	}
	return _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
}

void func_52(var uParam0, var uParam1, int iParam2)
{
	if (does_entity_exist(uParam1->f_66[iParam2]->f_3))
	{
		if (_does_thread_exist(uParam1->f_3740))
		{
			func_109();
		}
	}
	if (func_110(uParam0, uParam1->f_1, iParam2, 8))
	{
		func_111(uParam0, uParam1->f_1, iParam2, 8);
	}
}

int func_53(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		if (iParam1 == 0)
		{
		}
		return 255;
	}
	return (*Global_1131196)[iParam0]->f_9;
}

int func_54(var uParam0, int iParam1)
{
	if (*uParam0 == -1)
	{
		return -1;
	}
	iVar1 = 1;
	while (iVar1 <= 7)
	{
		iVar0 = func_112(iVar1);
		if (iVar0 < 0 || iVar0 >= 7)
		{
			return -1;
		}
		if (&(*Global_1131196)[*uParam0]->f_10[func_112(iVar1)] == iParam1)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_55(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == -1315570756)
		{
			func_113(uParam0, uParam1, iVar0);
		}
		else if (iVar1 == -507840394)
		{
			get_event_data(1, iVar0, &iVar2, 4);
			if (iVar2 == 10)
			{
				func_114(uParam0, uParam1, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_56(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (uParam0->f_3 == 0)
	{
		return false;
	}
	func_115(uParam0, uParam1, uParam2, uParam3);
	return true;
}

void func_57(var uParam0, int iParam1, int iParam2)
{
	(*uParam0)[iParam2] = iParam1;
}

bool func_58(var uParam0, var uParam1)
{
	if (uParam0->f_3 < 1)
	{
		return false;
	}
	if (!func_4(uParam1, 1))
	{
		if (func_116(uParam0))
		{
			func_44(uParam1, 1);
		}
	}
	else if (uParam0->f_3 > 1)
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, var uParam1, var uParam2)
{
	if (func_4(uParam2, 8))
	{
		return;
	}
	uParam2->f_3735++;
	if (uParam2->f_3735 >= 32)
	{
		uParam2->f_3735 = 0;
	}
	uParam2->f_8 = _0x1bb50cd340a996e6();
	func_117(uParam0, uParam2);
	func_118(uParam1, uParam2);
	func_119(uParam2);
	func_120(uParam0, uParam1, uParam2);
	func_121(uParam0, uParam2);
	func_122(uParam1, uParam2);
	func_123(uParam2);
	func_124(uParam1, uParam2, uParam2->f_3735);
	func_125(uParam0, uParam1, uParam2, uParam2->f_3735);
	func_126(uParam0, uParam2);
	func_127(uParam0, uParam1, uParam2);
	func_128(uParam0, uParam1, uParam2);
	func_129(uParam0, uParam2);
	func_130(uParam0, uParam2);
	func_131(uParam0, uParam2);
	func_132(uParam2);
	func_133(uParam0, uParam2);
	func_134(uParam0, uParam2);
	func_135(uParam1, uParam2);
	func_136(uParam1, uParam2);
	func_137(uParam2);
	func_138(uParam0, uParam2);
	func_139(uParam0, uParam1, uParam2);
	func_140(uParam0, uParam1, uParam2);
	func_141(uParam0, uParam2);
	func_142(uParam0, uParam2);
	func_143(uParam0, uParam2);
	func_144(uParam2);
	func_145(uParam0, uParam1, uParam2);
	func_146(uParam0, uParam2);
	func_147(uParam0, uParam2);
}

void func_60(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		if (iVar1 == -507840394)
		{
			get_event_data(1, iVar0, &iVar2, 4);
			if (iVar2 == 10)
			{
				func_148(uParam0, uParam1, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_61(var uParam0, var uParam1, var uParam2)
{
	func_149(uParam0, uParam1, uParam2);
	return true;
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

bool func_63(var uParam0, var uParam1)
{
	if (!func_4(uParam1, 1))
	{
		return false;
	}
	func_150(uParam0->f_6, 15f, 1);
	return true;
}

void func_64(var uParam0, var uParam1, var uParam2)
{
	if (func_4(uParam2, 8))
	{
		return;
	}
	func_151(uParam0, uParam1);
	func_152(uParam0, uParam1, uParam2);
	func_153(uParam0, uParam1, uParam2);
	func_154(uParam0, uParam1, uParam2);
	func_155(uParam0, uParam2);
	func_156(uParam0, uParam1, uParam2);
	func_157(uParam0, uParam2);
}

void func_65(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (does_blip_exist(&(uParam2->f_25[iParam3])))
	{
		remove_blip(uParam2->f_25[iParam3]);
	}
	if (network_does_network_id_exist(&(uParam0->f_9[iParam3])))
	{
		iVar0 = net_to_ped(&(uParam0->f_9[iParam3]));
		if (network_has_control_of_entity(iVar0))
		{
			func_158(iVar0);
			if (iParam3 == 0)
			{
				func_159(&(uParam2->f_606), iVar0);
			}
			if (bParam5)
			{
				delete_ped(&iVar0);
			}
			else if (bParam4)
			{
				if (iParam3 == 0 && !is_entity_dead(iVar0))
				{
					if (func_160(iVar0, -76381094))
					{
						clear_ped_tasks(iVar0, 1, 0);
					}
					func_161(iVar0, 0);
					set_ped_can_ragdoll(iVar0, true);
					set_blocking_of_non_temporary_events(iVar0, false);
					set_ped_combat_attributes(iVar0, 58, false);
					set_ped_flee_attributes(iVar0, 32768, false);
					set_ped_config_flag(iVar0, 113, false);
					task_smart_flee_coord(iVar0, uParam0->f_6, -1f, -1, false, 1f);
					set_ped_keep_task(iVar0, true);
				}
				_0x39a2fc5af55a52b1(iVar0, -1);
				set_ped_as_no_longer_needed(&iVar0);
			}
		}
	}
	else
	{
		if (iParam3 == 0)
		{
			uParam2->f_3694 = 0;
		}
		(*uParam1)[uParam2->f_1]->f_2[iParam3] = uVar1;
		Var2.f_11 = 25000;
		Var2.f_12 = 35000;
		*uParam2->f_25[iParam3] = { Var2 };
	}
}

void func_66(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (uParam0->f_38[iParam3]->f_3)
	{
		case 5:
			func_52(uParam1, uParam2, iParam3);
			break;
		case 6:
			if (bParam6)
			{
				func_162(uParam2, bParam4, bParam5);
			}
			break;
		case 13:
			func_163(uParam2);
			break;
		case 1:
			func_30(uParam2);
			break;
	}
	(*uParam1)[uParam2->f_1]->f_4[iParam3] = 0;
	bVar0 = bParam5;
	bVar1 = bParam4;
	if (bVar0)
	{
		if ((does_entity_exist(Global_34) && !is_entity_dead(Global_34)) && func_164(Global_34))
		{
			iVar3 = _get_scenario_point_ped_is_using(Global_34, false);
			if (_does_scenario_point_exist(iVar3))
			{
				iVar2 = _get_entity_scenario_point_is_attached_to(iVar3);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (uParam2->f_66[iParam3]->f_5[iVar4]->f_1 != 0 && _does_propset_exist(&(uParam2->f_66[iParam3]->f_5[iVar4])))
		{
			if (uParam0->f_38[iParam3]->f_3 == 6)
			{
				if (!bParam6)
				{
					bVar0 = false;
					bVar1 = false;
				}
			}
			if (bVar0)
			{
				if (does_entity_exist(iVar2) && func_165(&(uParam2->f_66[iParam3]->f_5[iVar4]), iVar2))
				{
					clear_ped_tasks_immediately(Global_34, false, true);
					_0xfdecca06e8b81346(Global_34);
					iVar2 = 0;
				}
				_delete_propset(&(uParam2->f_66[iParam3]->f_5[iVar4]), true, true);
			}
			else if (bVar1)
			{
				_set_propset_as_no_longer_needed(&(uParam2->f_66[iParam3]->f_5[iVar4]));
			}
			if (bVar0 || bVar1)
			{
				uParam2->f_66[iParam3]->f_5[iVar4]->f_1 = 0;
				uParam2->f_66[iParam3]->f_5[iVar4] = 0;
			}
		}
	else
	{
		}
		else
		{
			iVar4++;
		}
	}
	if (network_does_network_id_exist(uParam0->f_38[iParam3]->f_8))
	{
		iVar5 = net_to_ent(uParam0->f_38[iParam3]->f_8);
		if (does_entity_exist(iVar5) && network_has_control_of_entity(iVar5))
		{
			if (bParam5)
			{
				delete_entity(&iVar5);
				func_166(&(uParam2->f_66[iParam3]->f_2), 0);
			}
			else if (bParam4)
			{
				if (is_model_a_vehicle(get_entity_model(iVar5)))
				{
					func_167(uParam0->f_38[iParam3]->f_8, 1);
				}
				set_entity_as_no_longer_needed(&iVar5);
				func_166(&(uParam2->f_66[iParam3]->f_2), 1);
			}
		}
	}
	if (does_entity_exist(uParam2->f_66[iParam3]->f_3))
	{
		if (bParam5)
		{
			delete_object(&(uParam2->f_66[iParam3]->f_3));
			func_166(&(uParam2->f_66[iParam3]->f_2), 0);
		}
		else if (bParam4)
		{
			if (uParam0->f_38[iParam3]->f_3 == 1)
			{
				_0xcaaf2bccfef37f77(uParam2->f_66[iParam3]->f_3, 80);
			}
			set_object_as_no_longer_needed(&(uParam2->f_66[iParam3]->f_3));
			func_166(&(uParam2->f_66[iParam3]->f_2), 1);
		}
		uParam2->f_66[iParam3]->f_3 = 0;
	}
	if (uParam2->f_66[iParam3]->f_2 != 0)
	{
		uParam2->f_66[iParam3]->f_2 = 0;
	}
	func_111(uParam1, uParam2->f_1, iParam3, 1);
}

bool func_67(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_168(uParam1, iParam2, 1))
	{
		return false;
	}
	uParam0->f_38[iParam2]->f_8 = 0;
	return true;
}

int func_68(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (network_does_network_id_exist(uParam0->f_16[iVar0]->f_2))
		{
			iVar1 = net_to_obj(uParam0->f_16[iVar0]->f_2);
			if (does_entity_exist(iVar1))
			{
				if (!network_has_control_of_entity(iVar1))
				{
					network_request_control_of_network_id(uParam0->f_16[iVar0]->f_2);
				}
				delete_object(&iVar1);
				uParam0->f_16[iVar0]->f_2 = 0;
				uParam0->f_16[iVar0]->f_1 = 0;
			}
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(2042565497);
	return 1;
}

void func_69(var uParam0, int iParam1)
{
	func_106(&(uParam0->f_7), iParam1);
}

void func_70(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_71(int iParam0, bool bParam1)
{
	bVar0 = (func_169(iParam0) && !bParam1);
	if (!bVar0 && !func_170(iParam0, 65536))
	{
		if (does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
		{
			if (!_0x88ad6cc10d8d35b2(Global_1051439->f_72[iParam0]->f_21))
			{
				set_entity_as_mission_entity(Global_1051439->f_72[iParam0]->f_21, true, true);
			}
			delete_entity(&(Global_1051439->f_72[iParam0]->f_21));
			Global_1051439->f_72[iParam0]->f_21 = 0;
		}
		if (is_model_valid(Global_1051439->f_72[iParam0]->f_19))
		{
			set_model_as_no_longer_needed(Global_1051439->f_72[iParam0]->f_19);
		}
		Global_1051439->f_72[iParam0]->f_19 = 0;
	}
	else if (func_171(iParam0, 67108864) && does_entity_exist(Global_1051439->f_72[iParam0]->f_21))
	{
		_0xe98d55c5983f2509(Global_1051439->f_72[iParam0]->f_21);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24))
	{
		_0xa35e7bf20fa269e0(Global_1051439->f_72[iParam0]->f_24);
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_24);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_24);
		if (func_170(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_24);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
	{
		_0xa1cfb35069d23c23(Global_1051439->f_72[iParam0]->f_25);
		_0x74c2b3dc0b294102(Global_1051439->f_72[iParam0]->f_25);
		if (func_170(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_25);
		}
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_27))
	{
		if (func_170(iParam0, 524288))
		{
			_delete_volume(Global_1051439->f_72[iParam0]->f_27);
		}
	}
	if (func_171(iParam0, 16384) && !bVar0)
	{
		if (_does_scenario_point_exist(Global_1051439->f_72[iParam0]->f_6))
		{
			iVar1 = _get_scenario_point_entity(Global_1051439->f_72[iParam0]->f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (does_entity_exist(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
			_delete_scenario_point(Global_1051439->f_72[iParam0]->f_6);
		}
		Global_1051439->f_72[iParam0]->f_6 = 0;
		func_172(iParam0, 16384);
	}
	Global_1051439->f_72[iParam0] = -1;
	Global_1051439->f_72[iParam0]->f_3 = { 0f, 0f, 0f };
	Global_1051439->f_72[iParam0]->f_48 = 0;
	Global_1051439->f_72[iParam0]->f_73 = 1;
	Global_1915715->f_3[iParam0]->f_16 = 0;
	iVar3 = func_173(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915715->f_3[iParam0]->f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_174(&(Global_1051439->f_72[iParam0]->f_31[iVar2]));
			Global_1051439->f_72[iParam0]->f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051439->f_72[iParam0]->f_47 = 0;
	}
	func_175(iParam0);
	if (func_170(iParam0, 262144))
	{
		Global_1051439->f_72[iParam0]->f_49 = 262144;
	}
	else
	{
		func_176(iParam0);
	}
	if (_does_volume_exist(Global_1051439->f_72[iParam0]->f_24) && func_177(iParam0, 2))
	{
		_0xfd010a2154b40676(Global_1051439->f_72[iParam0]->f_24, 623901053);
		_0x2c87c3e1c7b96ee2(Global_1051439->f_72[iParam0]->f_24);
	}
	func_178(iParam0);
	Global_1051439->f_72[iParam0]->f_1 &= 2113536;
	func_179(iParam0);
	Global_1051439->f_72[iParam0]->f_18 = -1;
	Global_1051439->f_72[iParam0]->f_2 = -1;
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_20((*Global_1134390)[iParam0]->f_74, iParam1);
}

void func_73(int iParam0)
{
	if (func_20((*Global_1134390)[&Global_1296859]->f_74, iParam0))
	{
		func_106(&((*Global_1134390)[&Global_1296859]->f_74), iParam0);
		Global_1134349->f_32 = (*Global_1134390)[&Global_1296859]->f_74;
	}
}

int func_74()
{
	sVar0 = func_180();
	return get_hash_key(sVar0);
}

void func_75(var uParam0, int iParam1)
{
	switch (&uParam0->f_3563.f_2[iParam1])
	{
		case 0:
			if (does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				stop_particle_fx_looped(uParam0->f_3563.f_2[iParam1]->f_9, false);
				uParam0->f_3563.f_2[iParam1]->f_9 = 0;
			}
			if (does_particle_fx_looped_exist(uParam0->f_3563.f_122))
			{
				stop_particle_fx_looped(uParam0->f_3563.f_122, false);
				uParam0->f_3563.f_122 = 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (does_particle_fx_looped_exist(&(uParam0->f_3563.f_123[iVar0])))
				{
					stop_particle_fx_looped(&(uParam0->f_3563.f_123[iVar0]), false);
					uParam0->f_3563.f_123[iVar0] = 0;
				}
				iVar0++;
			}
			break;
		case 3:
			if (does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				stop_particle_fx_looped(uParam0->f_3563.f_2[iParam1]->f_9, false);
				uParam0->f_3563.f_2[iParam1]->f_9 = 0;
			}
			break;
		case 2:
			if (does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				stop_particle_fx_looped(uParam0->f_3563.f_2[iParam1]->f_9, false);
				uParam0->f_3563.f_2[iParam1]->f_9 = 0;
			}
			break;
		case 1:
			if (does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				stop_particle_fx_looped(uParam0->f_3563.f_2[iParam1]->f_9, false);
				uParam0->f_3563.f_2[iParam1]->f_9 = 0;
			}
			break;
	}
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_77(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	uParam0->f_3563.f_2[iParam1]->f_2 = iParam2;
}

void func_78(var uParam0)
{
	if (func_181(uParam0->f_3563.f_121))
	{
		func_182(&(uParam0->f_3563.f_121), 1, 1);
	}
}

bool func_79(var uParam0, int iParam1)
{
	return func_20(uParam0->f_3563.f_116, iParam1);
}

char* func_80(bool bParam0)
{
	return "MP_CampSpiritAnimal";
}

char* func_81()
{
	return "Spirit_Animal_Camp_Exit";
}

char* func_82()
{
	return "Spirit_Animal_Camp_Sounds";
}

void func_83(var uParam0, int iParam1)
{
	func_106(&(uParam0->f_3563.f_116), iParam1);
}

void func_84(int iParam0)
{
	if (func_183(&Global_1903131, iParam0))
	{
		func_184(Global_1903131, iParam0);
	}
}

char* func_85(bool bParam0)
{
	if (bParam0)
	{
		return "MP_SPIRIT_ANIMAL_START";
	}
	return "MP_SPIRIT_ANIMAL_STOP";
}

char* func_86()
{
	return "Spirit_Animal_Camp_Loop";
}

char* func_87()
{
	return "RDRO_Camp_Spirit_Animals_Sceneset";
}

void func_88(var uParam0, int iParam1)
{
	uParam0->f_3563.f_1 = iParam1;
}

void func_89(var uParam0, int iParam1)
{
	if ((_is_app_active(-1624772174) || func_185(1)) || func_4(uParam0, 32768))
	{
		clear_ped_tasks(Global_34, 1, 0);
		_0xfdecca06e8b81346(Global_34);
		_display_hud_component(2011163970);
		func_69(uParam0, 32768);
	}
	if (iParam1 == 0)
	{
		func_186(&(uParam0->f_442), 1);
		uParam0->f_442.f_125 = 15933;
		func_184(&(uParam0->f_442.f_125), 1);
		func_184(&(uParam0->f_442.f_125), 8);
	}
}

void func_90(var uParam0)
{
	uParam0->f_30 = 1;
}

void func_91(var uParam0)
{
	if (func_4(uParam0, 8192))
	{
		if (func_4(uParam0, 268435456) && !func_187(619))
		{
			uVar0 = _0x3e593df9c2962ec6(776060936);
			func_188(619, uVar0, 0);
		}
		if (!func_189())
		{
			if (!_0xd6f6acf4392187fb(uParam0->f_2))
			{
				func_190("NET_CAMP_HELP_POSSE_DISBANDED", 10000, 0, 0, 0, 1);
			}
			else if (!_0x9be7dcb22d32ccbe(uParam0->f_2, player_id()))
			{
				func_190("NET_CAMP_HELP_NO_LONGER_POSSE_MEMBER", 10000, 0, 0, 0, 1);
			}
			else if (func_4(uParam0, 8))
			{
				func_190("NET_CAMP_HELP_NEW_LOCATION", 10000, 0, 0, 0, 1);
			}
		}
	}
}

char* func_92()
{
	return "GCMP";
}

char* func_93()
{
	return "RDRO_Camp_Flag_Soundset";
}

void func_94(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	func_192(1);
}

void func_95(int iParam0)
{
	func_193(iParam0, &iVar0, &iVar1);
	func_194(iVar0, iVar1);
}

void func_96(var uParam0, int iParam1, int iParam2)
{
	if (_0x72b2e00c9bac6789(&(uParam0->f_3695), iParam2))
	{
		if ((iParam1 == 255 || !network_is_player_active(iParam1)) || !func_195(iParam1))
		{
			func_196(iParam1);
			func_197(iParam1);
		}
		_0xd426e2e3288469d6(&(uParam0->f_3695), iParam2);
	}
}

void func_97(int iParam0)
{
	if (decor_exist_on(iParam0, "fCampVehicleMaxSpeed"))
	{
		fVar0 = decor_get_float(iParam0, "fCampVehicleMaxSpeed");
		decor_remove(iParam0, "fCampVehicleMaxSpeed");
		_0x0c3f0f7f92ca847c(iParam0, fVar0);
	}
}

void func_98(var uParam0, bool bParam1)
{
	func_198(&(uParam0->f_2506));
	if (is_bit_set(uParam0->f_2506.f_17, 10))
	{
		clear_bit(&(uParam0->f_2506.f_17), 10);
		if (func_199(uParam0))
		{
			func_200(uParam0);
		}
		Global_1956123->f_1 = 0;
		if (!_0xa24c1d341c6e0d53(1, 0, 0) && !is_bit_set(uParam0->f_2506.f_17, 11))
		{
			animpostfx_play("CamTransition01");
		}
		if (_does_volume_exist(uParam0->f_2506.f_1))
		{
			_0x74c2b3dc0b294102(uParam0->f_2506.f_1);
			_0x2c87c3e1c7b96ee2(uParam0->f_2506.f_1);
			remove_scenario_blocking_area(uParam0->f_2506.f_3, false);
			_delete_volume(uParam0->f_2506.f_1);
		}
		func_201(&(uParam0->f_2506));
		func_202(uParam0->f_2506, 1);
		func_203(&(Global_1952637->f_1675));
		if (func_204(1048576))
		{
			func_205(27, 0, 0, 0, 0);
			func_205(34, 0, 0, 0, 0);
			func_206(0, 1);
			func_207();
			func_208(1048576);
		}
		func_209();
		clear_ped_tasks_immediately(uParam0->f_2506, false, true);
		set_entity_coords(uParam0->f_2506, uParam0->f_2506.f_24, true, false, true, true);
		set_entity_heading(uParam0->f_2506, uParam0->f_2506.f_22);
		if (!func_210(&(uParam0->f_2506), 1))
		{
			_0x9587913b9e772d29(uParam0->f_2506, 0);
		}
		func_211(1, uParam0->f_2506);
		set_gameplay_cam_relative_heading(uParam0->f_2506.f_23, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		_0x2208438012482a1a(uParam0->f_2506, false, false);
		set_player_control(player_id(), true, 0, false);
		_0xae6004120c18df97(uParam0->f_2506, 0, 1);
		func_212(uParam0);
		if (!bParam1)
		{
			func_213(&(uParam0->f_2506.f_2));
		}
	}
	func_214(&(uParam0->f_2506));
	if (func_204(134217728))
	{
		func_208(134217728);
	}
	uParam0->f_2506.f_10 = 1256619963;
	uParam0->f_2506.f_11 = 1256619963;
	uParam0->f_2506.f_17 = 0;
	uParam0->f_2506.f_8 = 0;
}

void func_99(var uParam0, var uParam1)
{
	if (is_thread_active(uParam1->f_410.f_24, false))
	{
		_0x7de4643157ad646c(uParam1->f_410.f_24);
	}
	if (uParam1->f_410.f_29 != 0)
	{
		func_69(uParam1, 134217728);
		func_69(uParam1, 536870912);
		if (!_0xa24c1d341c6e0d53(1, 0, 0))
		{
			animpostfx_play("CamTransition01");
		}
		clear_ped_tasks_immediately(Global_34, false, true);
		clear_ped_secondary_task(Global_34);
		task_clear_look_at(Global_34);
		set_entity_coords(Global_34, uParam1->f_410.f_11, true, false, true, true);
		set_entity_heading(Global_34, uParam1->f_410.f_14);
		set_player_control(player_id(), true, 0, false);
		if (does_cam_exist(uParam1->f_410.f_17))
		{
			set_cam_active(uParam1->f_410.f_17, false);
			render_script_cams(false, false, 3000, true, false, 0);
			destroy_cam(uParam1->f_410.f_17, false);
			set_gameplay_cam_relative_heading(180f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
		func_215(uParam0, uParam1, 0, 1, 1);
		uParam1->f_410.f_29 = 0;
	}
	uParam1->f_410.f_28 = 0;
	if (func_181(uParam1->f_410.f_16))
	{
		func_182(&(uParam1->f_410.f_16), 1, 1);
	}
}

void func_100(var uParam0, var uParam1)
{
	(*uParam1)[uParam0->f_1]->f_33 = 0;
	(*uParam1)[uParam0->f_1]->f_34 = { func_216() };
	uParam0->f_410.f_28 = 0;
	if (func_4(uParam0, 268435456))
	{
		func_69(uParam0, 268435456);
	}
}

bool func_101(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_102(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_103(int iParam0, int iParam1)
{
	iVar0 = func_218(iParam0);
	if (Global_1146212->f_47689.f_44[iVar0]->f_1 == 0)
	{
		return true;
	}
	else if (Global_1146212->f_47689.f_44[iVar0]->f_1 == iParam1)
	{
		return true;
	}
	return false;
}

void func_104(int iParam0)
{
	Global_1146212->f_47689.f_44[func_218(iParam0)]->f_1 = 0;
}

int func_105(int iParam0)
{
	if (!func_101(iParam0))
	{
		return 0;
	}
	iVar0 = func_217(iParam0, 1);
	if (!func_219(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_220(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_221(iParam0, iVar1))
		{
			case 0:
				func_222(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1146212->f_35859.f_11700)
				{
					if (&Global_1146212->f_35859.f_9503[iVar5] != iVar1 || Global_1146212->f_35859.f_9503[iVar5]->f_1 != iParam0)
					{
					}
					else
					{
						func_222(iVar1, iParam0, iVar4);
						func_223(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_223(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_224(iVar1, 1);
				func_225(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_226(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1146212->f_35859.f_9502)
					{
						if (&Global_1146212->f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1146212->f_35859.f_9302[iVar6] = -1;
							Global_1146212->f_35859.f_9502 = (Global_1146212->f_35859.f_9502 - 1);
							Global_1146212->f_35859.f_9302[iVar6] = &Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502];
							Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1146212->f_35859.f_919[iVar0] = -1;
			func_227(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

void func_106(int iParam0, int iParam1)
{
	func_228(iParam0, iParam1);
}

bool func_107(struct<2> Param0)
{
	if (!func_229(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_230(Param0))
	{
		return false;
	}
	return true;
}

void func_108(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_109()
{
	Global_1071686->f_23887.f_2 = 1;
}

bool func_110(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_20(&((*uParam0)[iParam1]->f_4[iParam2]), iParam3);
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_110(uParam0, iParam1, iParam2, iParam3))
	{
		func_106((*uParam0)[iParam1]->f_4[iParam2], iParam3);
	}
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		case 11:
			return 0;
		case 12:
			return 1;
		case 13:
			return 2;
		case 9:
			return 0;
		case 10:
			return 1;
		case 8:
			return 0;
		case 14:
			return 0;
		case 17:
			return 0;
		case 0:
			return 0;
		case 15:
			return 0;
		case 19:
			return 0;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
		case 24:
			return 0;
		case 25:
			return 1;
		case 26:
			return 2;
		case 27:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_113(var uParam0, var uParam1, int iParam2)
{
	if (!get_event_data(1, iParam2, &iVar0, 32))
	{
		return;
	}
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	func_231(uParam0, &iVar0);
}

void func_114(var uParam0, var uParam1, int iParam2)
{
	if (get_event_data(1, iParam2, &Var0, 14))
	{
		if (*uParam1 == Var0.f_8)
		{
			if (Var0.f_4 == 17)
			{
				if (uParam0->f_9[0]->f_3 == 1)
				{
					return;
				}
				if (is_any_speech_playing(net_to_ped(&(uParam0->f_9[0]))))
				{
					return;
				}
				if (func_232(0))
				{
					return;
				}
				iVar17 = func_233(Var0.f_12);
				if (iVar17 >= 6)
				{
					StringCopy(&cVar14, "TRAD_BS_POTHIGH", 24);
				}
				else if (iVar17 >= 4)
				{
					StringCopy(&cVar14, "TRAD_BS_POTMED", 24);
				}
				else
				{
					StringCopy(&cVar14, "TRAD_BS_POTLOW", 24);
				}
				func_234(&(uParam1->f_606), cVar14, 0, -1, 0, 0);
			}
		}
	}
}

void func_115(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_235(uParam2, uParam3->f_3);
	func_236(&(uParam2->f_3696), 0);
	func_237(&(uParam2->f_3696), 0);
	func_238(&(uParam2->f_3696), 0);
	func_239(&(uParam2->f_3696), 1);
	func_240(&(uParam2->f_3696), 0);
	func_241(&(uParam2->f_3696), 1);
	func_242(&(uParam2->f_3696), 0);
	func_243(&(uParam2->f_3696), 1, 1, 1);
	uParam2->f_4 = { uParam0->f_6 };
	uParam2->f_3738 = 0;
	func_89(uParam2, 0);
	func_244(&(uParam2->f_606), Global_34, "ARTHUR", 1);
	if (func_245(4))
	{
		func_17(uParam1, 1024, uParam2->f_1);
	}
	if (func_246(1397875340, 0, 0, 0) > 0 && !_0xfbe782b3165ac8ec(518311877))
	{
		func_17(uParam1, 2048, uParam2->f_1);
	}
	if (func_247(15) > 0 && func_248(6))
	{
		func_17(uParam1, 4096, uParam2->f_1);
	}
	if (func_53(*uParam2, 0) == player_id() && _unlock_is_unlocked(451736625))
	{
		func_17(uParam1, 8192, uParam2->f_1);
	}
	iVar0 = 2097152;
	clear_area(uParam0->f_6, 60f, iVar0);
}

bool func_116(var uParam0)
{
	iVar0 = 1;
	_text_database_request(func_92());
	if (!_text_database_has_loaded(func_92()))
	{
		iVar0 = 0;
	}
	_text_database_request(func_249());
	if (!_text_database_has_loaded(func_249()))
	{
		iVar0 = 0;
	}
	_text_database_request(func_250());
	if (!_text_database_has_loaded(func_250()))
	{
		iVar0 = 0;
	}
	_text_database_request(func_251());
	if (!_text_database_has_loaded(func_251()))
	{
		iVar0 = 0;
	}
	if (func_43(uParam0->f_6))
	{
		iVar0 = 0;
	}
	if (!_0xd9130842d7226045(func_93(), 0))
	{
		iVar0 = 0;
	}
	if (!_0xd9130842d7226045(func_82(), 0))
	{
		iVar0 = 0;
	}
	sVar1 = func_28();
	request_anim_dict(sVar1);
	if (!has_anim_dict_loaded(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_117(var uParam0, var uParam1)
{
	if (func_4(uParam1, 524288))
	{
		return;
	}
	if (!func_252(uParam0, 2))
	{
		return;
	}
	uParam1->f_10 = _create_volume_aggregate();
	fVar0 = func_253(*uParam0);
	iVar1 = _create_volume_sphere(uParam0->f_6, 0f, 0f, 0f, fVar0, fVar0, fVar0);
	_0x6e0d3c3f828da773(uParam1->f_10, iVar1);
	fVar2 = 10f;
	iVar3 = 0;
	while (iVar3 <= 27)
	{
		if (!func_43(uParam0->f_38[iVar3]->f_4))
		{
			iVar1 = _create_volume_sphere(uParam0->f_38[iVar3]->f_4, 0f, 0f, 0f, fVar2, fVar2, fVar2);
			iVar4 = func_254(iVar3);
			if ((iVar4 == 1 || iVar4 == 10) || iVar4 == 4)
			{
				_0xb56d41a694e42e86(iVar1, 264192, 0, 0, -1, -1, 0);
			}
			_0x6e0d3c3f828da773(uParam1->f_10, iVar1);
		}
		iVar3++;
	}
	fVar2 = (fVar0 * 3f);
	uParam1->f_11 = _create_volume_sphere(uParam1->f_4, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	fVar2 = (fVar0 * 5f);
	uParam1->f_12 = _create_volume_sphere(uParam1->f_4, 0f, 0f, 0f, fVar2, fVar2, fVar2);
	func_255(uParam1->f_10, 1);
	uParam1->f_9 = func_256(uParam1->f_10, 8);
	sVar5 = _create_var_string(2, "NET_CAMP_BLOCKING_VOL_", *uParam1);
	fVar2 = Global_1901947->f_584.f_6;
	vVar6 = { fVar2, fVar2, fVar2 };
	if (!func_43(vVar6))
	{
		uParam1->f_13 = _create_volume_sphere_with_custom_name(uParam0->f_6, 0f, 0f, 0f, vVar6, sVar5);
		func_257(uParam1->f_13, 2092027263);
	}
	fVar2 = (fVar0 * 1.5f);
	func_258(uParam1, 0, uParam0->f_6, 0f, 0f, 0f, fVar2, fVar2, 15f);
	sVar5 = _create_var_string(2, "NET_CAMP_COACH_VOL_", *uParam1);
	fVar2 = (fVar0 * 1.5f);
	vVar6 = { fVar2, fVar2, 15f };
	uParam1->f_14[1] = _create_volume_sphere_with_custom_name(uParam0->f_6, 0f, 0f, 0f, vVar6, sVar5);
	func_44(uParam1, 524288);
}

void func_118(var uParam0, var uParam1)
{
	if (func_259())
	{
		_0x236905c700fdb54d();
		return;
	}
	if (func_16(uParam0, 16, uParam1->f_1))
	{
		if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
		{
			bVar0 = false;
			if (_is_ped_hogtied(Global_34))
			{
				if (_0x61914209c36efddb(Global_34) == 5)
				{
					iVar1 = _get_carrier_as_human(Global_34);
					if ((does_entity_exist(iVar1) && !is_entity_dead(iVar1)) && is_ped_a_player(iVar1))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				if (_0x149a2751ab66ac02(uParam1->f_2) == 1)
				{
					_0x236905c700fdb54d();
				}
				else if (!func_260(uParam1->f_2))
				{
					_0x236905c700fdb54d();
				}
			}
		}
	}
}

void func_119(var uParam0)
{
	iVar0 = func_261();
	iVar1 = func_262(iVar0);
	iVar2 = func_263(iVar0);
	if (((iVar1 >= 21 || (iVar1 == 20 && iVar2 >= 30)) || iVar1 < 5) || (iVar1 == 5 && iVar2 < 30))
	{
		if (!func_79(uParam0, 64))
		{
			func_264(uParam0, 64);
		}
	}
	else if (func_79(uParam0, 64))
	{
		func_83(uParam0, 64);
	}
	if (iVar1 >= 0 && iVar1 < 4)
	{
		func_265(uParam0, 6);
	}
	else if (iVar1 < 8)
	{
		func_265(uParam0, 1);
	}
	else if (iVar1 < 12)
	{
		func_265(uParam0, 2);
	}
	else if (iVar1 < 16)
	{
		func_265(uParam0, 3);
	}
	else if (iVar1 < 20)
	{
		func_265(uParam0, 4);
	}
	else
	{
		func_265(uParam0, 5);
	}
}

void func_120(var uParam0, var uParam1, var uParam2)
{
	if (!func_252(uParam0, 1))
	{
		func_40(*uParam2, 1);
		return;
	}
	if (_does_volume_exist(uParam2->f_10))
	{
		if (is_entity_in_volume(Global_34, uParam2->f_10, false, 0))
		{
			if (!func_266(*uParam2, 1))
			{
				Var0 = { func_268(func_267(255)) };
				_0x1096603b519c905f(&Var0);
				func_269(0);
				set_transition_timecycle_modifier("MP_force_water_rendering", 2f);
				if (does_entity_exist(Global_34))
				{
					set_ped_config_flag(Global_34, 459, true);
				}
				if (uParam2->f_2 == _0x901e0dc25080c8b9(player_id()) && !func_16(uParam1, 64, uParam2->f_1))
				{
					func_17(uParam1, 64, uParam2->f_1);
				}
				func_270(*uParam2, 1);
			}
		}
		else if (func_266(*uParam2, 1))
		{
			_0x1096603b519c905f("");
			func_271(0);
			if (does_entity_exist(Global_34))
			{
				set_ped_config_flag(Global_34, 459, false);
			}
			if (uParam2->f_2 == _0x901e0dc25080c8b9(player_id()) && !func_16(uParam1, 128, uParam2->f_1))
			{
				func_17(uParam1, 128, uParam2->f_1);
			}
			clear_timecycle_modifier();
			func_40(*uParam2, 1);
		}
	}
}

void func_121(var uParam0, var uParam1)
{
	if (!func_43(Global_35) && vdist(Global_35, uParam1->f_4) < (func_253(*uParam0) * 1.5f))
	{
		if (!func_4(uParam1, 8388608))
		{
			Global_1913397 = -789269373;
			func_44(uParam1, 8388608);
		}
	}
	else if (func_4(uParam1, 8388608))
	{
		Global_1913397 = 0;
		func_69(uParam1, 8388608);
	}
}

void func_122(var uParam0, var uParam1)
{
	if (func_4(uParam1, 8))
	{
		return;
	}
	bVar0 = false;
	iVar2 = uParam1->f_39.f_2;
	if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
	{
		bVar0 = true;
		fVar1 = func_272(Global_35, get_entity_coords(iVar2, true, false));
	}
	if (func_273(*uParam1))
	{
		func_94(610);
		func_94(611);
		func_94(612);
		bVar3 = _0x9be7dcb22d32ccbe(uParam1->f_2, player_id());
		bVar4 = func_107(func_274(0));
		bVar5 = func_266(*uParam1, 1);
		if ((bVar3 && bVar5) && !bVar4)
		{
			if (!func_16(uParam0, 16, uParam1->f_1))
			{
				if (does_entity_exist(Global_34))
				{
					set_entity_proofs(Global_34, 4, false);
				}
				func_17(uParam0, 16, uParam1->f_1);
			}
			if ((((!func_4(uParam1, 16) && func_275()) && bVar0) && fVar1 < 4f) && !func_189())
			{
				if (_0x424b17a7dc5c90bc(player_id()))
				{
					func_276(609, 1);
				}
				else
				{
					func_276(608, 1);
				}
				func_94(613);
				func_44(uParam1, 16);
			}
		}
		else
		{
			if (func_16(uParam0, 16, uParam1->f_1))
			{
				func_35(uParam1);
				func_277(uParam0, 16, uParam1->f_1);
			}
			if ((bVar3 && bVar5) && func_275())
			{
				if (bVar4)
				{
					if (!func_4(uParam1, 32))
					{
						func_94(608);
						func_94(609);
						if (!func_189())
						{
							func_276(614, 1);
							func_44(uParam1, 32);
						}
					}
				}
				else if (func_4(uParam1, 32))
				{
					func_69(uParam1, 32);
				}
			}
		}
	}
	else
	{
		func_94(614);
		func_94(608);
		func_94(609);
		func_94(613);
		if (func_16(uParam0, 16, uParam1->f_1))
		{
			func_35(uParam1);
			func_277(uParam0, 16, uParam1->f_1);
		}
		if ((func_4(uParam1, 16) && func_275()) && !func_189())
		{
			if (_0x424b17a7dc5c90bc(player_id()))
			{
				func_276(611, 1);
			}
			else
			{
				func_276(610, 1);
			}
			func_94(612);
			func_69(uParam1, 16);
		}
		if (func_4(uParam1, 32))
		{
			func_69(uParam1, 32);
		}
	}
	if (bVar0)
	{
		if ((((((((((func_266(*uParam1, 1) && func_275()) && _unlock_is_unlocked(-212568391)) && _0x424b17a7dc5c90bc(player_id())) && _0x9be7dcb22d32ccbe(uParam1->f_2, player_id())) && does_entity_exist(Global_34)) && !func_278()) && !is_entity_dead(Global_34)) && !is_ped_using_any_scenario(Global_34)) && !func_279()) && fVar1 < 4f)
		{
			if (!func_110(uParam0, uParam1->f_1, 17, 4))
			{
				_0xa22712e8471aa08e(iVar2, 1, 0);
				_0x870708a6e147a9ad(iVar2, "NET_CAMP_ILO_WHITE_FLAG", 5f, 5f, 0, 0, 0, 0, 0, -1);
				func_280(iVar2, "NET_CAMP_ILO_WHITE_FLAG", 1);
				func_281(uParam0, uParam1->f_1, 17, 4);
			}
			else if (is_player_targetting_entity(player_id(), iVar2, false))
			{
				if (func_273(*uParam1))
				{
					bVar6 = func_282(*uParam1);
					if (!bVar6)
					{
						if (((!func_4(uParam1, 64) && !func_189()) && !(func_191(608) || func_191(609))) && func_283())
						{
							func_276(613, 1);
							func_44(uParam1, 64);
						}
					}
					else
					{
						func_94(613);
					}
					func_182(&(uParam1->f_39), 1, 1);
					if (func_284(iVar2, &(uParam1->f_39.f_1), "NET_CAMP_ILO_WHITE_FLAG_LOWER", bVar6))
					{
						func_285(*uParam1);
					}
				}
				else
				{
					bVar6 = func_286(*uParam1);
					if (!bVar6)
					{
						if (((!func_4(uParam1, 64) && !func_189()) && !(func_191(610) || func_191(611))) && func_283())
						{
							func_276(612, 1);
							func_44(uParam1, 64);
						}
					}
					else
					{
						func_94(612);
					}
					func_182(&(uParam1->f_39.f_1), 1, 1);
					if (func_284(iVar2, &(uParam1->f_39), "NET_CAMP_ILO_WHITE_FLAG_RAISE", bVar6))
					{
						func_287(*uParam1);
					}
				}
			}
			else
			{
				func_182(&(uParam1->f_39.f_1), 1, 1);
				func_182(&(uParam1->f_39), 1, 1);
			}
		}
		else if (func_110(uParam0, uParam1->f_1, 17, 4))
		{
			_0xa22712e8471aa08e(iVar2, 0, 0);
			_0xe98d55c5983f2509(iVar2);
			func_182(&(uParam1->f_39), 1, 1);
			func_182(&(uParam1->f_39.f_1), 1, 1);
			func_111(uParam0, uParam1->f_1, 17, 4);
			if (func_4(uParam1, 64))
			{
				func_69(uParam1, 64);
			}
		}
		if (does_entity_exist(uParam1->f_39.f_3) && !is_entity_dead(uParam1->f_39.f_3))
		{
			if (func_273(*uParam1))
			{
				if (func_4(uParam1, 2097152))
				{
					_0x0f2a2175734926d8("Camp_Flag_Lower", func_93());
					func_69(uParam1, 2097152);
				}
				if (!func_43(uParam1->f_39.f_4))
				{
					vVar7 = { get_entity_coords(uParam1->f_39.f_3, true, false) };
					if (vVar7.z < uParam1->f_39.f_4.f_2)
					{
						if (!func_4(uParam1, 1048576))
						{
							_play_sound_from_entity("Camp_Flag_Raise", uParam1->f_39.f_3, func_93(), false, 0, 0);
							func_44(uParam1, 1048576);
						}
						vVar7.f_2 = (vVar7.z + 0.04f);
						set_entity_coords(uParam1->f_39.f_3, vVar7, false, false, true, true);
					}
					else if (func_4(uParam1, 1048576))
					{
						_0x0f2a2175734926d8("Camp_Flag_Raise", func_93());
						func_69(uParam1, 1048576);
					}
				}
			}
			else
			{
				if (func_4(uParam1, 1048576))
				{
					_0x0f2a2175734926d8("Camp_Flag_Raise", func_93());
					func_69(uParam1, 1048576);
				}
				if (!func_43(uParam1->f_39.f_7))
				{
					vVar10 = { get_entity_coords(uParam1->f_39.f_3, true, false) };
					if (vVar10.z > uParam1->f_39.f_7.f_2)
					{
						if (!func_4(uParam1, 2097152))
						{
							_play_sound_from_entity("Camp_Flag_Lower", uParam1->f_39.f_3, func_93(), false, 0, 0);
							func_44(uParam1, 2097152);
						}
						vVar10.f_2 = (vVar10.z - 0.04f);
						set_entity_coords(uParam1->f_39.f_3, vVar10, false, false, true, true);
					}
					else if (func_4(uParam1, 2097152))
					{
						_0x0f2a2175734926d8("Camp_Flag_Lower", func_93());
						func_69(uParam1, 2097152);
					}
				}
			}
		}
		if (does_entity_exist(uParam1->f_66[17]->f_3) && !is_entity_dead(uParam1->f_66[17]->f_3))
		{
			if (func_273(*uParam1))
			{
				if (!func_43(uParam1->f_39.f_13))
				{
					vVar13 = { get_entity_coords(uParam1->f_66[17]->f_3, true, false) };
					if (vVar13.z > uParam1->f_39.f_13.f_2)
					{
						vVar13.f_2 = (vVar13.z - 0.04f);
						if (vVar13.z < uParam1->f_39.f_13.f_2)
						{
							vVar13.f_2 = uParam1->f_39.f_13.f_2;
						}
						set_entity_coords(uParam1->f_66[17]->f_3, vVar13, false, false, true, true);
					}
				}
			}
			else if (!func_43(uParam1->f_39.f_10))
			{
				vVar16 = { get_entity_coords(uParam1->f_66[17]->f_3, true, false) };
				if (vVar16.z < uParam1->f_39.f_10.f_2)
				{
					vVar16.f_2 = (vVar16.z + 0.04f);
					if (vVar16.z > uParam1->f_39.f_10.f_2)
					{
						vVar16.f_2 = uParam1->f_39.f_10.f_2;
					}
					set_entity_coords(uParam1->f_66[17]->f_3, vVar16, false, false, true, true);
				}
			}
		}
	}
}

void func_123(var uParam0)
{
	func_288(uParam0);
	func_289(uParam0);
	func_290(uParam0);
}

void func_124(var uParam0, var uParam1, int iParam2)
{
	iVar0 = int_to_playerindex(iParam2);
	if (!network_is_player_active(iVar0))
	{
		func_96(uParam1, iVar0, iParam2);
		return;
	}
	if (iVar0 == player_id())
	{
		func_96(uParam1, iVar0, iParam2);
		return;
	}
	if ((func_273(*uParam1) && !_0x81fb74c83c2ed69f(iVar0)) && (func_16(uParam0, 16, uParam1->f_1) || (network_is_player_a_participant(iVar0) && func_16(uParam0, 16, network_get_participant_index(iVar0)))))
	{
		func_291(uParam1, iVar0, iParam2);
	}
	else
	{
		func_96(uParam1, iVar0, iParam2);
	}
}

void func_125(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = int_to_participantindex(iParam3);
	if (network_is_participant_active(iVar0))
	{
		iVar1 = network_get_player_index(iVar0);
		if (network_is_player_active(iVar1))
		{
			iVar2 = get_player_ped(iVar1);
			if (_0x9be7dcb22d32ccbe(uParam2->f_2, iVar1) || func_273(*uParam2))
			{
				func_292(2, get_ped_relationship_group_hash(iVar2), Global_1132288->f_2060);
			}
			else if (func_16(uParam1, 1, iParam3))
			{
				func_292(6, get_ped_relationship_group_hash(iVar2), Global_1132288->f_2060);
			}
			else
			{
				func_292(3, get_ped_relationship_group_hash(iVar2), Global_1132288->f_2060);
			}
		}
	}
	if (func_252(uParam0, 16))
	{
		func_292(4, 707888648, Global_1132288->f_2060);
	}
	else
	{
		func_292(2, 707888648, Global_1132288->f_2060);
	}
}

void func_126(var uParam0, var uParam1)
{
	func_293(uParam1);
	if (func_294())
	{
		return;
	}
	if (func_4(uParam1, 512))
	{
		if (!func_295(255))
		{
			uParam1->f_3741 = 0;
			uParam1->f_3739 = 0;
			func_69(uParam1, 256);
			func_69(uParam1, 512);
		}
	}
	else if (!func_4(uParam1, 256))
	{
		if (((func_296(5, 255) || func_296(13, 255)) && func_295(255)) && !func_297())
		{
			Var0 = { func_298(0, 1, 0, -1) };
			if (_0xb881ca836cc4b6d4(&Var0))
			{
				iVar4 = func_299(uParam0, uParam1);
				if (iVar4 != 0 && _does_scenario_point_exist(iVar4))
				{
					uParam1->f_3739 = iVar4;
					func_44(uParam1, 256);
				}
				else
				{
					uParam1->f_3741++;
					if (uParam1->f_3741 > 100)
					{
						func_300(1, 0);
						func_44(uParam1, 512);
					}
				}
			}
		}
	}
	else
	{
		iVar5 = func_301(_get_scenario_point_coords(uParam1->f_3739, true), _get_scenario_point_heading(uParam1->f_3739, true), 0, 0, 1, 100, 0, 1);
		if (does_entity_exist(iVar5))
		{
			_task_use_scenario_point(iVar5, uParam1->f_3739, 0, 0, false, true, 0, false, -1f, false);
			func_69(uParam1, 256);
			func_44(uParam1, 512);
		}
		else if (func_297())
		{
			func_302(0);
			func_69(uParam1, 256);
		}
	}
}

void func_127(var uParam0, var uParam1, var uParam2)
{
	func_303(uParam0, uParam1, uParam2);
	if (!func_16(uParam1, 2, uParam2->f_1))
	{
		if (func_304(uParam0, uParam2, uParam2->f_11))
		{
			func_17(uParam1, 2, uParam2->f_1);
		}
	}
	else if (!func_304(uParam0, uParam2, uParam2->f_12))
	{
		func_277(uParam1, 2, uParam2->f_1);
	}
}

void func_128(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_3729 >= 1)
	{
		uParam2->f_3729 = 0;
	}
	func_305(uParam0, uParam1, uParam2, uParam2->f_3729);
	uParam2->f_3729++;
}

void func_129(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_306(uParam0, uParam1, iVar0);
		iVar0++;
	}
}

void func_130(var uParam0, var uParam1)
{
	if ((!func_252(uParam0, 4) || !func_307(1)) || uParam1->f_3 != player_id())
	{
		if (func_181(uParam1->f_3693))
		{
			func_182(&(uParam1->f_3693), 0, 1);
		}
		return;
	}
	if (!func_181(uParam1->f_3693))
	{
		sVar0 = _create_var_string(2, "GC_F_SKIP", func_308());
		uParam1->f_3693 = func_309(sVar0, 992265328, uParam0->f_38[0]->f_4, 5f, 1, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
	}
	else if (!func_310(-1824478493, 1, 59806960))
	{
		if (func_311(uParam1->f_3693, 0))
		{
			func_312(uParam1->f_3693, 0, 1, 1);
		}
	}
	else if (func_313(uParam1->f_3693, 1))
	{
		func_314(*uParam1);
		func_315(1);
		func_182(&(uParam1->f_3693), 1, 1);
		func_316(-1824478493, "GC_F_SKIP_B", 1, 1, 0, 59806960);
	}
	else if (!func_311(uParam1->f_3693, 0))
	{
		func_312(uParam1->f_3693, 1, 1, 1);
	}
}

void func_131(var uParam0, var uParam1)
{
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (uParam1->f_2 == iVar1)
	{
		if (!func_4(uParam1, 16384))
		{
			iVar2 = func_54(uParam1, player_id());
			if (iVar2 != -1 && !func_43(uParam0->f_38[iVar2]->f_4))
			{
				iVar0 = func_317(*uParam1);
				if (!does_blip_exist(iVar0))
				{
					return;
				}
				set_blip_coords(iVar0, uParam0->f_38[iVar2]->f_4);
				func_44(uParam1, 16384);
			}
		}
	}
	else if (func_4(uParam1, 16384))
	{
		iVar0 = func_317(*uParam1);
		if (does_blip_exist(iVar0))
		{
			set_blip_coords(iVar0, uParam0->f_6);
		}
		func_69(uParam1, 16384);
	}
}

void func_132(var uParam0)
{
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15) || Global_1296859->f_15 != uParam0->f_2)
	{
		if (func_4(uParam0, 4))
		{
			func_39(-161625840, 1);
			func_69(uParam0, 4);
		}
		return;
	}
	iVar0 = func_318(player_id());
	if (func_266(*uParam0, 1))
	{
		if (!func_4(uParam0, 4))
		{
			iVar1 = func_319(iVar0);
			func_320(-161625840, iVar1);
			uParam0->f_404 = iVar0;
			func_44(uParam0, 4);
		}
		else
		{
			if (uParam0->f_404 != iVar0)
			{
				iVar2 = func_319(iVar0);
				func_320(-161625840, iVar2);
				uParam0->f_404 = iVar0;
			}
			if ((((uParam0->f_404.f_1 == 0 && !func_189()) && !is_entity_dead(Global_34)) && is_ped_using_any_scenario(Global_34)) && func_275())
			{
				uParam0->f_404.f_1 = func_190("NET_CAMP_RPG_HLP", 13000, 0, 0, 0, 1);
			}
		}
	}
	else if (func_4(uParam0, 4))
	{
		func_39(-161625840, 1);
		func_69(uParam0, 4);
	}
}

void func_133(var uParam0, var uParam1)
{
	if (!func_273(*uParam1))
	{
		return;
	}
	iVar0 = uParam1->f_3738;
	if (uParam0->f_38[iVar0]->f_3 != 1)
	{
		fVar1 = (func_321(uParam0->f_38[iVar0]->f_3, uParam0->f_38[iVar0]->f_1, uParam0->f_1) * 2.2f);
		if (get_closest_fire_pos(&vVar2, uParam0->f_38[iVar0]->f_4))
		{
			if (vdist2(uParam0->f_38[iVar0]->f_4, vVar2) <= fVar1)
			{
				stop_fire_in_range(vVar2, fVar1);
			}
		}
	}
	uParam1->f_3738++;
	if (uParam1->f_3738 > 27)
	{
		uParam1->f_3738 = 0;
	}
}

void func_134(var uParam0, var uParam1)
{
	if (Global_1137047->f_358.f_2 && Global_1137047->f_358.f_1 == *uParam1)
	{
		if (!func_232(0))
		{
			if (network_does_network_id_exist(&(uParam0->f_9[0])))
			{
				iVar0 = net_to_ped(&(uParam0->f_9[0]));
				if (!is_entity_dead(iVar0))
				{
					iVar1 = Global_1137047->f_358;
					if ((iVar1 == 29 && uParam1->f_3 == player_id()) && func_322(131072))
					{
						func_323(131072);
					}
					if ((iVar1 == 32 && uParam1->f_3 == player_id()) && func_322(262144))
					{
						func_323(262144);
					}
					if ((iVar1 == 17 && uParam1->f_3 == player_id()) && func_322(1048576))
					{
						func_323(1048576);
					}
					if (network_is_player_in_mp_cutscene(player_id()))
					{
						Global_1137047->f_358.f_2 = 0;
					}
					else if (func_324(uParam1))
					{
						Global_1137047->f_358.f_2 = 0;
					}
					else if (func_325())
					{
						Global_1137047->f_358.f_2 = 0;
					}
					else
					{
						func_234(&(uParam1->f_606), func_327(func_326(iVar1)), 0, -1, 0, 0);
						Global_1137047->f_358.f_2 = 0;
					}
				}
			}
		}
	}
}

void func_135(var uParam0, var uParam1)
{
	if (func_266(*uParam1, 16))
	{
		if (!func_16(uParam0, 256, uParam1->f_1))
		{
			func_17(uParam0, 256, uParam1->f_1);
		}
		func_40(*uParam1, 16);
	}
}

void func_136(var uParam0, var uParam1)
{
	if (uParam1->f_3745 > 300)
	{
		uParam1->f_3745 = 0;
		return;
	}
	else if (uParam1->f_3745 > 0)
	{
		uParam1->f_3745++;
		return;
	}
	if (!func_16(uParam0, 512, uParam1->f_1))
	{
		if (func_307(128))
		{
			func_17(uParam0, 512, uParam1->f_1);
		}
	}
	else if (!func_307(128))
	{
		func_277(uParam0, 512, uParam1->f_1);
	}
	uParam1->f_3745++;
}

void func_137(var uParam0)
{
	if (func_328() || func_329())
	{
		return;
	}
	if (!func_330())
	{
		return;
	}
	if (func_4(uParam0, -2147483648))
	{
		return;
	}
	if (!_0xfbe782b3165ac8ec(-466995375))
	{
		return;
	}
	if (func_331(-428390721, 0) && func_332(-428390721, 1))
	{
		return;
	}
	if (func_190(_create_var_string(2, "CAMP_HELP_HAS_ROLE_ITEM_TRADER"), 10000, 0, 0, 0, 1) != 0)
	{
		func_44(uParam0, -2147483648);
	}
}

void func_138(var uParam0, var uParam1)
{
	switch (uParam1->f_3563)
	{
		case 0:
			func_333(uParam1);
			func_334(uParam1, 1);
			break;
		case 1:
			if (func_335(uParam1))
			{
				request_named_ptfx_asset(func_74());
				func_334(uParam1, 2);
			}
			break;
		case 2:
			if (!func_335(uParam1))
			{
				func_78(uParam1);
			}
			else if (func_336(uParam1))
			{
				uParam1->f_3563.f_112 = _get_system_time();
				uParam1->f_3563.f_113 = 45000;
				if (func_337(uParam1))
				{
					_0xfaad23de7a54fc14();
					func_338(uParam1, 0);
					func_77(uParam1, 0, 1);
					func_88(uParam1, 1);
					func_339(uParam1);
					uParam1->f_3563.f_119++;
					func_78(uParam1);
					set_audio_flag("OpenWorldMusicDisabled", true);
					func_334(uParam1, 3);
				}
			}
			break;
		case 3:
			func_340(uParam0, uParam1);
			if (func_341(uParam1))
			{
				func_334(uParam1, 4);
			}
			break;
		case 4:
			func_340(uParam0, uParam1);
			if (func_342(uParam1) && func_343(uParam1))
			{
				func_344(uParam1);
				func_334(uParam1, 5);
			}
			break;
		case 5:
			func_345(uParam1);
			func_346(uParam1);
			func_340(uParam0, uParam1);
			if (func_347(uParam1))
			{
				func_78(uParam1);
				func_334(uParam1, 6);
			}
			break;
		case 6:
			if (func_348(uParam1))
			{
				func_334(uParam1, 7);
			}
			break;
		case 7:
			func_29(uParam1);
			func_334(uParam1, 8);
			break;
		case 8:
			break;
	}
}

void func_139(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_24 != uParam0->f_4)
	{
		if (uParam2->f_24 == -1)
		{
			uParam2->f_24 = uParam0->f_4;
		}
		else
		{
			uParam2->f_24 = uParam0->f_4;
			func_349(uParam0, uParam2);
		}
	}
	if (network_is_host_of_this_script())
	{
		iVar0 = uParam0->f_38[20]->f_1;
		iVar1 = uParam0->f_38[19]->f_1;
		iVar2 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()));
		if (func_350(iVar2, iVar0))
		{
			if (func_351(uParam0, uParam1, uParam2, 20) == 0)
			{
				func_352(uParam0, uParam2, 20);
			}
		}
		if (func_353(iVar2, iVar1))
		{
			if (func_351(uParam0, uParam1, uParam2, 19) == 0)
			{
				func_352(uParam0, uParam2, 19);
			}
		}
	}
}

void func_140(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_354(uParam0, uParam1, uParam2, iVar0);
		iVar0++;
	}
	uParam2->f_3733 = 0;
}

void func_141(var uParam0, var uParam1)
{
	if ((((((!func_4(uParam1, 8) && network_is_player_active(player_id())) && _0xd6f6acf4392187fb(uParam1->f_2)) && _0x9be7dcb22d32ccbe(uParam1->f_2, player_id())) && does_entity_exist(Global_34)) && &uParam0->f_38[18] == 3) && does_entity_exist(uParam1->f_66[18]->f_3))
	{
		func_355(uParam1);
	}
	else
	{
		func_26(uParam1);
	}
}

void func_142(var uParam0, var uParam1)
{
	if ((((((does_entity_exist(uParam1->f_66[19]->f_3) && !func_4(uParam1, 8)) && network_is_player_active(player_id())) && _0xd6f6acf4392187fb(uParam1->f_2)) && _0x9be7dcb22d32ccbe(uParam1->f_2, player_id())) && &uParam0->f_38[19] == 3) && does_entity_exist(Global_34))
	{
		func_356(uParam1);
	}
	else
	{
		func_27(uParam1);
	}
	if (_does_volume_exist(uParam1->f_408.f_1) && func_357(Global_34, uParam1->f_408.f_1, 1, 0))
	{
		if (!func_72(&Global_1296859, 8192))
		{
			func_358(8192);
		}
	}
	else if (func_72(&Global_1296859, 8192))
	{
		func_73(8192);
	}
}

void func_143(var uParam0, var uParam1)
{
	func_359(uParam0, uParam1, 16);
}

void func_144(var uParam0)
{
	if (!func_360(uParam0))
	{
		func_182(&(uParam0->f_55), 1, 1);
		func_182(&(uParam0->f_55.f_1), 1, 1);
		_display_hud_component(-364582530);
		uParam0->f_55.f_6 = 1;
		return;
	}
	if (!does_blip_exist(uParam0->f_55.f_3))
	{
		uParam0->f_55.f_3 = _blip_add_for_entity(168093330, uParam0->f_55.f_2);
		set_blip_sprite(uParam0->f_55.f_3, 935247438, true);
		set_blip_name_from_text_file(uParam0->f_55.f_3, "STEW_POT");
		set_blip_flash_timer(uParam0->f_55.f_3, 98, -1336134440);
		_blip_set_modifier(uParam0->f_55.f_3, -1025871137);
	}
	switch (uParam0->f_55.f_5)
	{
		case 0:
			if (func_361(Global_34, uParam0->f_55.f_2, 0) <= 6.25f)
			{
				uParam0->f_55.f_5 = 1;
				func_362(&(Global_1137047->f_339.f_18), 1);
				uParam0->f_55.f_6 = 1;
			}
			break;
		case 1:
			if (func_361(Global_34, uParam0->f_55.f_2, 0) > 9f)
			{
				uParam0->f_55.f_5 = 0;
				_display_hud_component(-364582530);
				return;
			}
			if (uParam0->f_55.f_6)
			{
				uParam0->f_55.f_6 = 0;
				_hide_hud_component(-364582530);
			}
			func_362(&(Global_1137047->f_339.f_18), 1);
			if (uParam0->f_55.f_4 != func_363(uParam0->f_3))
			{
				uParam0->f_55.f_4 = func_363(uParam0->f_3);
				func_182(&(uParam0->f_55), 1, 1);
			}
			_uiprompt_set_ambient_group_this_frame(uParam0->f_55.f_2, 2f, 1, 1, 0, "STEW_POT", 2);
			if (!func_181(uParam0->f_55))
			{
				uParam0->f_55 = func_364("INPUT_TAKE_SUBSTRING", -473983589, uParam0->f_55.f_2, 1, 1, 1, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_365(uParam0->f_55, "INPUT_TAKE_SUBSTRING", _create_var_string(0, func_363(uParam0->f_3)), 1);
				func_366(uParam0->f_55, _uiprompt_get_group_id_for_target_entity(uParam0->f_55.f_2), 0, 1);
			}
			else if (func_313(uParam0->f_55, 1))
			{
				_hide_ped_weapons(Global_34, 2, true);
				_task_item_interaction(player_ped_id(), func_363(uParam0->f_3), 1315491516, 1, 0, -1082130432);
				func_182(&(uParam0->f_55), 1, 1);
				func_182(&(uParam0->f_55.f_1), 1, 1);
				uParam0->f_55.f_6 = 1;
			}
			if (!func_181(uParam0->f_55.f_1))
			{
				uParam0->f_55.f_1 = func_364("RECIPES", -719620017, uParam0->f_55.f_2, 1, 1, 1, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
				func_366(uParam0->f_55.f_1, _uiprompt_get_group_id_for_target_entity(uParam0->f_55.f_2), 0, 1);
			}
			else if (func_313(uParam0->f_55.f_1, 1))
			{
				func_182(&(uParam0->f_55), 1, 1);
				func_182(&(uParam0->f_55.f_1), 1, 1);
				uParam0->f_55.f_5 = 2;
			}
			break;
		case 2:
			func_362(&(Global_1137047->f_339.f_18), 1);
			Var0.f_4 = 1;
			if (!_does_thread_exist(uParam0->f_55.f_7) || !is_thread_active(uParam0->f_55.f_7, false))
			{
				if (get_number_of_free_stacks_of_this_size(1024) <= 0)
				{
					return;
				}
				sVar10 = "simple_crafting";
				request_script(sVar10);
				if (!has_script_loaded(sVar10))
				{
					return;
				}
				uParam0->f_55.f_7 = start_new_script_with_args(sVar10, &Var0, 10, 1024);
				set_script_as_no_longer_needed(sVar10);
			}
			func_367(uParam0);
			uParam0->f_55.f_5 = 3;
			break;
		case 3:
			func_362(&(Global_1137047->f_339.f_18), 1);
			if (!func_368(-608558181) && _get_number_of_references_of_script_with_name_hash(-608558181) <= 0)
			{
				clear_ped_tasks(Global_34, 1, 0);
				uParam0->f_55.f_6 = 1;
				uParam0->f_55.f_5 = 1;
			}
			else
			{
				vVar11.f_4 = -1;
				vVar11.f_8 = 2;
				vVar11.f_9 = 1;
				vVar11.f_10 = 1;
				vVar11.f_11 = 1;
				vVar11.f_13 = 1;
				vVar11.f_14 = 2;
				vVar11.f_15 = 2;
				vVar11.f_16 = 3;
				vVar11.f_19 = 3;
				vVar11.f_20 = 1;
				vVar11.f_21 = 3;
				vVar11.f_22 = 3;
				vVar11.f_8 = 2;
				vVar11.f_14 = 0;
				vVar11.f_3 = uParam0->f_55.f_2;
				vVar11 = { 0f, 0f, 1f };
				_0x66f9eb44342bb4c5(Global_34, &vVar11);
			}
			break;
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	if (!func_369(uParam2))
	{
		uParam2->f_410.f_27 = 5;
	}
	else
	{
		iVar0 = uParam2->f_403;
		func_370(uParam0, uParam1, uParam2);
	}
	switch (uParam2->f_410.f_27)
	{
		case 0:
			func_371(uParam0, uParam1, uParam2);
			if (vdist(uParam0->f_38[iVar0]->f_4, Global_35) < 5f && func_372())
			{
				func_69(uParam2, 1073741824);
				uParam2->f_410.f_27 = 1;
			}
			break;
		case 1:
			func_373(uParam0, uParam2);
			if (!func_4(uParam2, 1073741824))
			{
				iVar1 = _0xf49f14462f0ae27c(player_id());
				if (does_entity_exist(iVar1))
				{
					if (func_374(iVar1))
					{
						func_44(uParam2, 1073741824);
					}
					else
					{
						vVar2 = { get_entity_coords(iVar1, true, false) };
						if (vdist(uParam0->f_38[iVar0]->f_4, vVar2) < 6f)
						{
							func_44(uParam2, 1073741824);
						}
					}
				}
			}
			uParam2->f_410.f_27 = 2;
			break;
		case 2:
			func_375(uParam0, uParam1, uParam2);
			if (func_371(uParam0, uParam1, uParam2))
			{
				func_376(uParam0, uParam2);
			}
			if (vdist(func_377(uParam0, uParam2), Global_35) <= 1.6f && !func_378(0))
			{
				_uiprompt_set_ambient_group_this_frame(Global_34, 1f, 1, 1, 1532743427, "USE_TENT", 2);
			}
			if (vdist(uParam0->f_38[iVar0]->f_4, Global_35) > 5f || !func_372())
			{
				uParam2->f_410.f_27 = 5;
			}
			if (func_259() || is_bit_set(uParam2->f_740.f_2506.f_17, 6))
			{
				func_99(uParam0, uParam2);
				func_215(uParam0, uParam2, 1, 1, 1);
				uParam2->f_410.f_27 = 4;
			}
			if (func_379(uParam2))
			{
				func_37(uParam2);
				uParam2->f_410.f_27 = 3;
			}
			break;
		case 3:
			func_376(uParam0, uParam2);
			if (!func_379(uParam2))
			{
				uParam2->f_410.f_27 = 5;
			}
			break;
		case 4:
			func_375(uParam0, uParam1, uParam2);
			if (!func_259() && !is_bit_set(uParam2->f_740.f_2506.f_17, 6))
			{
				func_215(uParam0, uParam2, 0, 1, 1);
				uParam2->f_410.f_27 = 5;
			}
			break;
		case 5:
			func_99(uParam0, uParam2);
			func_37(uParam2);
			func_69(uParam2, 1073741824);
			uParam2->f_410.f_27 = 0;
			break;
	}
}

void func_146(var uParam0, var uParam1)
{
	if (!func_4(uParam1, 1073741824))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_380(iVar0, -76381094))
	{
		func_69(uParam1, 1073741824);
		return;
	}
	iVar1 = func_299(uParam0, uParam1);
	if (iVar1 == 0 || !_does_scenario_point_exist(iVar1))
	{
		return;
	}
	_task_use_scenario_point(iVar0, iVar1, 0, -1, true, false, 0, false, -1f, false);
	func_69(uParam1, 1073741824);
}

void func_147(var uParam0, var uParam1)
{
	if (func_266(*uParam1, 2))
	{
		if (!func_4(uParam1, 8192))
		{
			func_44(uParam1, 8192);
		}
	}
	else if (func_4(uParam1, 8192))
	{
		func_91(uParam1);
		func_349(uParam0, uParam1);
		func_69(uParam1, 8192);
		func_69(uParam1, 262144);
	}
	if (((((!func_4(uParam1, 8) && network_is_player_active(player_id())) && _0xd6f6acf4392187fb(uParam1->f_2)) && _0x9be7dcb22d32ccbe(uParam1->f_2, player_id())) && does_entity_exist(Global_34)) && !is_entity_dead(Global_34))
	{
		if (!func_381(*uParam1, 128) && !func_382())
		{
			if (func_383(27) != func_384())
			{
				func_385(27, func_384());
			}
			if (!func_4(uParam1, 262144))
			{
				if ((!func_189() && func_283()) && func_266(*uParam1, 1))
				{
					iVar0 = _0x4be6c13a45cca8ec(uParam1->f_2);
					if (iVar0 != player_id() && uParam1->f_403 != -1)
					{
						iVar1 = func_386(network_player_id_to_int());
						iVar2 = func_387(iVar0);
						if ((iVar1 != 0 && iVar2 != 0) && iVar2 != iVar1)
						{
							if (&uParam0->f_38[uParam1->f_403] < 3)
							{
								func_190(_create_var_string(10, "NET_CAMP_HELP_POSSE_LEADER_THEME", func_389(get_player_name(iVar0), func_388(iVar0, 1, -1, 0))), 10000, 0, 0, 0, 1);
								func_44(uParam1, 262144);
							}
							else if (&uParam0->f_38[uParam1->f_403] == 3 && uParam0->f_38[uParam1->f_403]->f_1 == func_391(0, func_390(network_player_id_to_int()), iVar2, -1))
							{
								func_190(_create_var_string(10, "NET_CAMP_HELP_POSSE_LEADER_THEME", func_389(get_player_name(iVar0), func_388(iVar0, 1, -1, 0))), 10000, 0, 0, 0, 1);
								func_44(uParam1, 262144);
							}
						}
					}
				}
			}
			else if (_0x424b17a7dc5c90bc(player_id()) || func_387(_0x4be6c13a45cca8ec(uParam1->f_2)) == 0)
			{
				func_69(uParam1, 262144);
			}
			if (!func_4(uParam1, 2048))
			{
				if (does_entity_exist(uParam1->f_63.f_1))
				{
					func_392(uParam1);
				}
			}
			else if (!does_entity_exist(uParam1->f_63.f_1) || func_252(uParam0, 16))
			{
				if (!func_393(133, 16384))
				{
					func_394(133, 16384);
				}
				if (!func_4(uParam1, 4096))
				{
					func_91(uParam1);
					func_44(uParam1, 4096);
				}
			}
			else
			{
				if (func_393(133, 16384))
				{
					func_395(133, 16384);
				}
				if (func_4(uParam1, 4096))
				{
					func_69(uParam1, 4096);
				}
			}
		}
		else
		{
			if (!func_4(uParam1, 2))
			{
				if (does_entity_exist(uParam1->f_63.f_1))
				{
					func_392(uParam1);
				}
				return;
			}
			if (!func_393(133, 16384))
			{
				func_394(133, 16384);
			}
			if (((uParam1->f_3728 == 0 && !network_is_player_in_mp_cutscene(player_id())) && !func_329()) && vdist(Global_35, uParam0->f_38[0]->f_4) < 5f)
			{
				uParam1->f_3728 = func_190("NET_CAMP_SHOP_QUIT_HLP", 10000, 0, 0, 0, 1);
			}
			if (!func_4(uParam1, 4096))
			{
				func_44(uParam1, 4096);
			}
		}
	}
	else
	{
		func_31(uParam1);
	}
}

void func_148(var uParam0, var uParam1, int iParam2)
{
	if (get_event_data(1, iParam2, &Var0, 14))
	{
		if (*uParam1 == Var0.f_8)
		{
			switch (Var0.f_4)
			{
				case 7:
					func_349(uParam0, uParam1);
					break;
				case 8:
					func_396(uParam0, Var0.f_12, Var0.f_9, Var0.f_10);
					break;
			}
		}
	}
}

void func_149(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = { func_397(*uParam1) };
	*uParam0 = { *uParam2 };
	if (func_381(*uParam1, 512))
	{
		func_398(uParam0, 4);
	}
	func_399(uParam0->f_6, 60f, 0, 0, 0, 1, 0);
	func_400(uParam0, uParam1);
}

void func_150(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_151(var uParam0, var uParam1)
{
	if (!func_252(uParam0, 16))
	{
		if (func_401(uParam1))
		{
			func_398(uParam0, 16);
		}
	}
	else if (!func_401(uParam1))
	{
		func_402(uParam0, 16);
	}
}

void func_152(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_3730 >= 1)
	{
		uParam2->f_3730 = 0;
	}
	func_403(uParam0, uParam1, uParam2, uParam2->f_3730);
	uParam2->f_3730++;
}

void func_153(var uParam0, var uParam1, var uParam2)
{
	bVar2 = func_404();
	bVar3 = network_is_player_active(uParam2->f_3);
	if (uParam0->f_291 > 1 && !func_405(1))
	{
		return;
	}
	switch (uParam0->f_291)
	{
		case 0:
			if (network_does_network_id_exist(&(uParam0->f_9[0])))
			{
				if (!func_252(uParam0, 131072))
				{
					if (bVar3 && network_is_player_a_participant(uParam2->f_3))
					{
						iVar4 = network_get_participant_index(uParam2->f_3);
						if ((iVar4 >= 0 && iVar4 < 32) && func_16(uParam1, 4096, iVar4))
						{
							func_398(uParam0, 131072);
						}
					}
				}
				uParam0->f_291.f_6[0] = 5;
				uParam0->f_291.f_6[1] = 6;
				uParam0->f_291.f_6[2] = 7;
				uParam0->f_291.f_6[3] = 11;
				uParam0->f_291.f_5 = 4;
				if (bVar2)
				{
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 9;
					uParam0->f_291.f_5++;
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 10;
					uParam0->f_291.f_5++;
				}
				if (func_252(uParam0, 131072))
				{
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 34;
					uParam0->f_291.f_5++;
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 12;
					uParam0->f_291.f_5++;
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 35;
					uParam0->f_291.f_5++;
				}
				if (!bVar2)
				{
					if ((bVar3 && func_406(uParam2->f_3)) && !func_407(uParam2->f_3))
					{
						uParam0->f_291.f_6[uParam0->f_291.f_5] = 8;
						uParam0->f_291.f_5++;
						func_398(uParam0, 32);
					}
				}
				uParam0->f_291.f_6[uParam0->f_291.f_5] = 13;
				uParam0->f_291.f_5++;
				if (func_408(uParam2->f_3) > Global_1901947->f_166.f_48)
				{
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 14;
					uParam0->f_291.f_5++;
					if (!func_406(uParam2->f_3))
					{
						uParam0->f_291.f_6[uParam0->f_291.f_5] = 15;
						uParam0->f_291.f_5++;
					}
					else if (!func_407(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
					{
						iVar5 = network_get_participant_index(uParam2->f_3);
						if ((iVar5 >= 0 && iVar5 < 32) && !func_16(uParam1, 8192, iVar5))
						{
							uParam0->f_291.f_6[uParam0->f_291.f_5] = 16;
							uParam0->f_291.f_5++;
						}
					}
				}
				func_409(uParam0, 1);
			}
			break;
		case 1:
			func_410(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_411(*uParam2, 8, 0);
			func_412(uParam0, 8);
			func_409(uParam0, 28);
			break;
		case 3:
			func_411(*uParam2, 13, 0);
			func_412(uParam0, 13);
			func_409(uParam0, 28);
			break;
		case 4:
			if (network_does_network_id_exist(&(uParam0->f_9[0])) && !is_entity_dead(net_to_ped(&(uParam0->f_9[0]))))
			{
				iVar6 = 30;
				if (bVar3)
				{
					if (func_413(1048576, uParam2->f_3))
					{
						if (vdist(func_414(uParam2->f_3), get_entity_coords(net_to_ent(&(uParam0->f_9[0])), true, false)) > 22f)
						{
							return;
						}
						iVar6 = 17;
					}
					else if (func_415(uParam2->f_3))
					{
						fVar1 = get_random_float_in_range(0f, 1f);
						if (fVar1 < 0.25f)
						{
							iVar6 = 31;
						}
					}
				}
				func_411(*uParam2, iVar6, 0);
				func_409(uParam0, 28);
				func_398(uParam0, 64);
			}
			else
			{
				func_409(uParam0, 1);
			}
			break;
		case 5:
			if (network_does_network_id_exist(&(uParam0->f_9[0])) && !is_entity_dead(net_to_ped(&(uParam0->f_9[0]))))
			{
				iVar7 = 1;
				fVar1 = get_random_float_in_range(0f, 1f);
				if (fVar1 > 0.5f)
				{
					iVar7 = 2;
				}
				func_411(*uParam2, iVar7, 0);
				func_409(uParam0, 28);
				func_398(uParam0, 128);
			}
			else
			{
				func_409(uParam0, 1);
			}
			break;
		case 6:
			fVar1 = get_random_float_in_range(0f, 1f);
			if (fVar1 > 0.4f)
			{
				func_398(uParam0, 256);
				func_409(uParam0, 1);
				return;
			}
			iVar8 = 3;
			if (network_does_network_id_exist(&(uParam0->f_9[0])) && !is_entity_dead(net_to_ped(&(uParam0->f_9[0]))))
			{
				if (bVar2)
				{
					iVar8 = 4;
				}
				func_411(*uParam2, iVar8, 0);
				func_409(uParam0, 28);
				func_398(uParam0, 256);
			}
			else
			{
				func_409(uParam0, 1);
			}
			break;
		case 7:
			func_411(*uParam2, 5, 0);
			func_412(uParam0, 5);
			func_409(uParam0, 28);
			break;
		case 8:
			func_411(*uParam2, 6, 0);
			func_412(uParam0, 6);
			func_409(uParam0, 28);
			break;
		case 9:
			func_411(*uParam2, 7, 0);
			func_412(uParam0, 7);
			func_409(uParam0, 28);
			break;
		case 12:
			func_411(*uParam2, 11, 0);
			func_412(uParam0, 11);
			func_409(uParam0, 28);
			break;
		case 14:
			func_411(*uParam2, 34, 0);
			func_412(uParam0, 34);
			func_409(uParam0, 28);
			break;
		case 13:
			func_411(*uParam2, 12, 0);
			func_412(uParam0, 12);
			func_409(uParam0, 28);
			break;
		case 15:
			func_411(*uParam2, 35, 0);
			func_412(uParam0, 35);
			func_409(uParam0, 28);
			break;
		case 10:
			func_411(*uParam2, 9, 0);
			func_412(uParam0, 9);
			func_409(uParam0, 28);
			break;
		case 11:
			func_411(*uParam2, 10, 0);
			func_412(uParam0, 10);
			func_409(uParam0, 28);
			break;
		case 21:
			func_411(*uParam2, 26, 0);
			func_398(uParam0, 4096);
			func_409(uParam0, 28);
			break;
		case 22:
			func_411(*uParam2, 27, 0);
			func_398(uParam0, 8192);
			func_409(uParam0, 28);
			break;
		case 23:
			if ((!network_does_network_id_exist(&(uParam0->f_9[0])) || !does_entity_exist(net_to_ent(&(uParam0->f_9[0])))) || vdist(func_414(uParam2->f_3), get_entity_coords(net_to_ent(&(uParam0->f_9[0])), true, false)) > 20f)
			{
				return;
			}
			func_411(*uParam2, 28, 0);
			func_398(uParam0, 16384);
			func_409(uParam0, 28);
			break;
		case 24:
			if (!func_416(&(uParam0->f_291.f_1)))
			{
				if (bVar3 && !network_is_player_in_mp_cutscene(uParam2->f_3))
				{
					func_417(&(uParam0->f_291.f_1));
				}
				return;
			}
			else if (func_418(&(uParam0->f_291.f_1)) < uParam0->f_291.f_4)
			{
				return;
			}
			func_411(*uParam2, 29, 0);
			func_398(uParam0, 32768);
			func_409(uParam0, 28);
			break;
		case 25:
			if ((!network_does_network_id_exist(&(uParam0->f_9[0])) || !does_entity_exist(net_to_ent(&(uParam0->f_9[0])))) || vdist(func_414(uParam2->f_3), get_entity_coords(net_to_ent(&(uParam0->f_9[0])), true, false)) > 20f)
			{
				return;
			}
			func_411(*uParam2, 33, 0);
			func_398(uParam0, 65536);
			func_409(uParam0, 28);
			break;
		case 26:
			func_411(*uParam2, 32, 0);
			func_412(uParam0, 32);
			func_409(uParam0, 28);
			break;
		case 27:
			func_411(*uParam2, 36, 0);
			func_398(uParam0, 524288);
			func_409(uParam0, 28);
			break;
		case 16:
			func_411(*uParam2, 14, 0);
			func_412(uParam0, 14);
			func_409(uParam0, 28);
			break;
		case 17:
			func_411(*uParam2, 15, 0);
			func_412(uParam0, 15);
			func_409(uParam0, 28);
			break;
		case 18:
			func_411(*uParam2, 16, 0);
			func_412(uParam0, 16);
			func_409(uParam0, 28);
			break;
		case 19:
			if (!func_419(uParam0, uParam2))
			{
				return;
			}
			if (func_420(2132950130) == 2)
			{
				func_411(*uParam2, 21, 1);
			}
			else
			{
				iVar0 = get_player_ped(uParam2->f_3);
				iVar9 = func_421(2132950130);
				if (iVar9 >= 3 && does_entity_exist(iVar0))
				{
					if (is_ped_male(iVar0))
					{
						func_411(*uParam2, 18, 1);
					}
					else
					{
						func_411(*uParam2, 19, 1);
					}
				}
				else
				{
					func_411(*uParam2, 20, 1);
				}
			}
			func_398(uParam0, 2048);
			func_409(uParam0, 28);
			break;
		case 20:
			if (!func_419(uParam0, uParam2))
			{
				return;
			}
			iVar10 = func_420(2132950130);
			if (iVar10 == 2)
			{
				func_411(*uParam2, 25, 1);
			}
			else if (iVar10 == 1)
			{
				func_411(*uParam2, 24, 1);
			}
			else
			{
				iVar11 = func_421(2132950130);
				if (iVar11 >= 3)
				{
					func_411(*uParam2, 22, 1);
				}
				else
				{
					func_411(*uParam2, 23, 1);
				}
			}
			func_398(uParam0, 2048);
			func_409(uParam0, 28);
			break;
		case 28:
			func_422(&(uParam0->f_291.f_1));
			func_409(uParam0, 1);
			break;
	}
}

void func_154(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_3745 != 0)
	{
		return;
	}
	if (!func_252(uParam0, 512))
	{
		if (network_is_player_active(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
		{
			iVar0 = network_get_participant_index(uParam2->f_3);
			if (func_16(uParam1, 512, iVar0))
			{
				func_398(uParam0, 512);
			}
		}
	}
}

void func_155(var uParam0, var uParam1)
{
	if (uParam1->f_3743 < 10)
	{
		uParam1->f_3743++;
		return;
	}
	else
	{
		uParam1->f_3743 = 0;
	}
	func_400(uParam0, uParam1);
}

void func_156(var uParam0, var uParam1, var uParam2)
{
	bVar0 = false;
	iVar2 = 0;
	while (iVar2 < 28)
	{
		if (uParam2->f_3732 >= 28)
		{
			if (!func_252(uParam0, 2))
			{
				func_398(uParam0, 2);
			}
			uParam2->f_3732 = 0;
		}
		iVar1 = uParam2->f_3732;
		bVar0 = func_423(uParam0, uParam1, uParam2, iVar1);
		uParam2->f_3732++;
		iVar2++;
		if (bVar0)
		{
		}
	else
	{
		}
	}
}

void func_157(var uParam0, var uParam1)
{
	if (func_252(uParam0, 1))
	{
		return;
	}
	if (!func_252(uParam0, 2))
	{
		return;
	}
	if ((!func_381(*uParam1, 128) && !func_381(*uParam1, 512)) && uParam0->f_9[0]->f_1 < 6)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		if (uParam1->f_66[iVar0]->f_5[0]->f_1 != 0 && &uParam0->f_38[iVar0] != 3)
		{
			return;
		}
		iVar0++;
	}
	func_424(*uParam1);
	func_398(uParam0, 1);
}

void func_158(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

int func_159(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_97)
	{
		if (uParam0[iVar0] == iParam1)
		{
			(*uParam0)[iVar0] = 0;
			StringCopy(&((*uParam0)[iVar0]->f_1), "", 24);
			if (iVar0 != (uParam0->f_97 - 1))
			{
				(*uParam0)[iVar0] = uParam0[(uParam0->f_97 - 1)];
				(*uParam0)[iVar0]->f_1 = { ((*uParam0)[(uParam0->f_97 - 1)])->f_1 };
				(*uParam0)[(uParam0->f_97 - 1)] = 0;
				StringCopy(&(((*uParam0)[(uParam0->f_97 - 1)])->f_1), "", 24);
			}
			uParam0->f_97 = (uParam0->f_97 - 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_160(int iParam0, int iParam1)
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

void func_161(int iParam0, bool bParam1)
{
	if ((does_entity_exist(iParam0) && !is_entity_dead(iParam0)) && network_has_control_of_entity(iParam0))
	{
		if (bParam1)
		{
			set_entity_invincible(iParam0, true);
			set_entity_proofs(iParam0, 7, false);
		}
		else
		{
			set_entity_invincible(iParam0, false);
			set_entity_proofs(iParam0, 0, false);
		}
	}
}

void func_162(var uParam0, bool bParam1, bool bParam2)
{
	if (does_entity_exist(uParam0->f_39.f_3))
	{
		if (bParam2)
		{
			delete_object(&(uParam0->f_39.f_3));
		}
		else if (bParam1)
		{
			set_object_as_no_longer_needed(&(uParam0->f_39.f_3));
		}
	}
	if (does_entity_exist(uParam0->f_39.f_2))
	{
		delete_object(&(uParam0->f_39.f_2));
	}
	func_182(&(uParam0->f_39.f_1), 1, 1);
	func_182(&(uParam0->f_39), 1, 1);
}

void func_163(var uParam0)
{
	func_182(&(uParam0->f_55), 1, 1);
	func_182(&(uParam0->f_55.f_1), 1, 1);
	if (uParam0->f_55.f_5 > 0)
	{
		_display_hud_component(-364582530);
	}
	if (uParam0->f_55.f_5 == 3)
	{
		if (!is_entity_dead(Global_34) && func_160(Global_34, -1098463898))
		{
			clear_ped_tasks(Global_34, 1, 0);
		}
	}
	if (does_blip_exist(uParam0->f_55.f_3))
	{
		remove_blip(&(uParam0->f_55.f_3));
	}
	if (_does_thread_exist(uParam0->f_55.f_7) && is_thread_active(uParam0->f_55.f_7, false))
	{
		_0x7de4643157ad646c(uParam0->f_55.f_7);
	}
}

bool func_164(int iParam0)
{
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	iVar1 = iVar0;
	if (((((((((((iVar1 == -1241981548 || iVar1 == 1020517461) || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052) || iVar1 == -2016812721) || iVar1 == -1054012177) || iVar1 == -447259824) || iVar1 == -229964281) || iVar1 == 889554021) || iVar1 == -1177373461) || get_ped_config_flag(iParam0, 464, true))
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam1);
	if (!is_model_valid(iVar0))
	{
		return false;
	}
	iVar1 = create_itemset(false);
	iVar2 = _get_entities_from_propset(iParam0, iVar1, iVar0, false, false);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar1));
		if (does_entity_exist(iVar3) && iVar3 == iParam1)
		{
			destroy_itemset(iVar1);
			return true;
		}
		iVar4++;
	}
	destroy_itemset(iVar1);
	return false;
}

void func_166(var uParam0, int iParam1)
{
	if (func_425(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_167(int iParam0, bool bParam1)
{
	if (network_does_network_id_exist(iParam0))
	{
		iVar0 = net_to_veh(iParam0);
		if (!is_entity_dead(iVar0))
		{
			if (((bParam1 && does_entity_exist(Global_34)) && !is_entity_dead(Global_34)) && func_426(Global_34, iVar0, 1))
			{
				task_leave_vehicle(Global_34, iVar0, 0, 0);
			}
			set_vehicle_is_considered_by_player(iVar0, !bParam1);
		}
	}
}

bool func_168(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && func_20(&((*uParam0)[iVar0]->f_4[iParam1]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_169(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_170(iParam0, 65536))
	{
		return true;
	}
	return false;
}

bool func_170(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_49 && iParam1) != 0;
}

bool func_171(int iParam0, int iParam1)
{
	return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
}

void func_172(int iParam0, int iParam1)
{
	if (func_171(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
}

int func_173(int iParam0)
{
	return Global_1051439->f_72[iParam0]->f_47;
}

void func_174(int iParam0)
{
	if (func_427(iParam0) && func_428())
	{
		remove_door_from_system(iParam0);
	}
}

void func_175(int iParam0)
{
}

void func_176(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_49 = 0;
}

bool func_177(int iParam0, int iParam1)
{
	return func_183(Global_1051439->f_72[iParam0]->f_50, iParam1);
}

void func_178(int iParam0)
{
	Global_1051439->f_72[iParam0]->f_50 = 0;
}

void func_179(int iParam0)
{
	if (Global_1051439->f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051439->f_41)
	{
		if (iParam0 == Global_1051439[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051439->f_41 = (Global_1051439->f_41 - 1);
	if (Global_1051439->f_41 < 0)
	{
		Global_1051439->f_41 = 0;
	}
	(*Global_1051439)[iVar1] = Global_1051439[Global_1051439->f_41];
}

char* func_180()
{
	return "scr_net_camp";
}

bool func_181(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if ((*Global_1951255)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1951255)[iParam0]->f_3);
}

void func_182(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_181(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_429(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_430(iVar0);
	*uParam0 = 0;
}

bool func_183(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_184(bool bParam0, int iParam1)
{
	*bParam0 = (*bParam0 - (*bParam0 && iParam1));
}

bool func_185(bool bParam0)
{
	if (!is_entity_dead(Global_34))
	{
		if (ped_has_use_scenario_task(Global_34) && !_0x0c3cb2e600c8977d(Global_34, 1))
		{
			if (((_0x02ebbb3989b7e695(Global_34) || (bParam0 && is_ped_active_in_scenario(Global_34, 0))) || (is_task_move_network_active(Global_34) && get_task_move_network_event(Global_34, "SCENARIO_POINT_TRANS_COMPLETE"))) || (func_431(16) && has_anim_event_fired(Global_34, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_186(var uParam0, bool bParam1)
{
	func_432(uParam0);
	func_433(uParam0);
	func_434(uParam0);
	func_435(uParam0);
	if (_0x927b810e43e99932(&(uParam0->f_18)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_436(uParam0);
	}
	uParam0->f_150 = -1;
	func_184(&(uParam0->f_126), 32768);
	func_437(&(uParam0->f_49), 0, 1);
}

bool func_187(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17411.f_2565[iVar1]), iVar2);
}

void func_188(int iParam0, var uParam1, bool bParam2)
{
	func_193(iParam0, &iVar0, &iVar1);
	if (!func_438(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_439(iParam0, 1024))
	{
		return;
	}
	func_440(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = uParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 3;
}

bool func_189()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_190(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_191(int iParam0)
{
	iVar0 = _0xc17f69e1418cd11f(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904651->f_33[iParam0]->f_1;
	}
	return false;
}

void func_192(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_194(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_195(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return Global_1108365->f_34[iVar0]->f_6;
}

void func_196(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_441(iParam0))
		{
			func_442(iParam0);
		}
	}
}

void func_197(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_198(var uParam0)
{
	if (func_181(uParam0->f_4))
	{
		func_182(&(uParam0->f_4), 1, 1);
	}
	clear_bit(&(uParam0->f_17), 8);
}

bool func_199(var uParam0)
{
	return uParam0->f_2207.f_47;
}

void func_200(var uParam0)
{
	if (uParam0->f_2207.f_47)
	{
		func_443(uParam0, &(uParam0->f_2207.f_58));
		if (!uParam0->f_2207.f_84)
		{
			func_444(uParam0, 1, 0);
		}
		func_445(uParam0);
		uParam0->f_2207.f_46 = 0;
		uParam0->f_2207.f_47 = 0;
		_close_app_by_hash(1289756680);
		_databinding_remove_data_entry(uParam0->f_2207.f_50);
		func_446(uParam0);
		func_447(uParam0);
		func_448(uParam0);
		func_449(0);
		func_450();
		if (_has_streamed_txd_loaded(1912964614))
		{
			_set_streamed_txd_as_no_longer_needed(1912964614);
		}
		func_451(1);
	}
}

void func_201(var uParam0)
{
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
		_0xf3354d6ca46f419d(*uParam0, 1);
	}
	func_452();
	if (_is_anim_scene_started(uParam0->f_14, false))
	{
		abort_anim_scene(uParam0->f_14, false);
	}
	func_166(&(uParam0->f_9), 0);
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), &Global_1296859);
	Var0.f_3 = 1;
	func_453(&Var0);
}

void func_202(int iParam0, bool bParam1)
{
	_0xfea6126c34df2532(iParam0, bParam1);
	_0xa2116c1e4ed85c24(iParam0, !bParam1);
	_0xd8544f6260f5f01e(iParam0, 10);
}

void func_203(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

bool func_204(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_205(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_454(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_455(Var0);
}

void func_206(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_456();
	}
	if (bParam0)
	{
		func_454(8);
		func_454(512);
	}
	else
	{
		func_454(8);
		func_454(16);
	}
}

void func_207()
{
	iVar1 = func_457();
	switch (iVar1)
	{
		case 3:
			return;
		case 2:
			bVar2 = true;
			break;
		case 0:
			bVar3 = true;
			break;
	}
	iVar4 = 0;
	while (iVar4 < 25)
	{
		iVar0 = func_458(iVar4);
		if (func_331(iVar0, 0))
		{
			if (func_459(iVar0) != -999503751)
			{
			}
			else
			{
				iVar1 = func_460(iVar0);
				switch (iVar1)
				{
					case 3:
						return;
					case 2:
						bVar2 = true;
						break;
					case 0:
						bVar3 = true;
						break;
				}
				if (bVar2 && bVar3)
				{
				}
				else
				{
					iVar4++;
				}
				if (!bVar2)
				{
					if (!bVar3)
					{
						func_461(1);
						func_276(90, 1);
					}
					else
					{
						func_461(1);
						func_276(88, 1);
					}
				}
				else if (!bVar3)
				{
					func_461(1);
					func_276(89, 1);
				}
			}
		}
	}
}

void func_208(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_209()
{
	Global_1915715->f_23051.f_1 = 0;
	Global_1915715->f_23051.f_22 = 0;
	Global_1915715->f_23051.f_221 = 0;
	if (_uiprompt_is_valid(Global_1915715->f_23051.f_222))
	{
		_uiprompt_delete(Global_1915715->f_23051.f_222);
	}
}

bool func_210(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_211(int iParam0, var uParam1)
{
	_0x67e21acc5c0c970c(uParam1, 16, iParam0);
	_0x67e21acc5c0c970c(uParam1, 15, iParam0);
	_0x67e21acc5c0c970c(uParam1, 7, iParam0);
	_0x67e21acc5c0c970c(uParam1, 8, iParam0);
	_0x67e21acc5c0c970c(uParam1, 17, iParam0);
	_0x67e21acc5c0c970c(uParam1, 5, iParam0);
	_0x67e21acc5c0c970c(uParam1, 21, iParam0);
	_0x67e21acc5c0c970c(uParam1, 25, iParam0);
	_0x67e21acc5c0c970c(uParam1, 23, iParam0);
	_0x67e21acc5c0c970c(uParam1, 19, iParam0);
	_0x67e21acc5c0c970c(uParam1, 9, iParam0);
	_0x67e21acc5c0c970c(uParam1, 10, iParam0);
	_0x67e21acc5c0c970c(uParam1, 22, iParam0);
	_0x67e21acc5c0c970c(uParam1, 20, iParam0);
	_0x67e21acc5c0c970c(uParam1, 18, iParam0);
	_0x67e21acc5c0c970c(uParam1, 6, iParam0);
	_0x67e21acc5c0c970c(uParam1, 0, iParam0);
	_0x67e21acc5c0c970c(uParam1, 1, iParam0);
	_0x67e21acc5c0c970c(uParam1, 3, iParam0);
	_0x67e21acc5c0c970c(uParam1, 2, iParam0);
	_0x67e21acc5c0c970c(uParam1, 4, iParam0);
}

void func_212(var uParam0)
{
}

void func_213(var uParam0)
{
	if (is_cam_rendering(*uParam0))
	{
		render_script_cams(false, false, 3000, true, false, 0);
	}
	if (is_cam_active(*uParam0))
	{
		set_cam_active(*uParam0, false);
	}
	if (does_cam_exist(*uParam0))
	{
		destroy_cam(*uParam0, false);
	}
	clear_timecycle_modifier();
}

void func_214(var uParam0)
{
	_text_database_delete("WARD");
	_0x37d7bdba89f13959("CamTransition01");
	_0x37d7bdba89f13959("CamTransitionBlink");
	switch (func_41())
	{
		case 0:
			func_462(uParam0);
			break;
	}
}

void func_215(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_41() != 0)
	{
		return;
	}
	iVar0 = player_id();
	if (bParam2)
	{
		if (!network_is_player_in_mp_cutscene(iVar0))
		{
			set_local_player_visible_in_cutscene(iParam3, iParam4, 256);
			uParam1->f_410.f_25 = get_unique_int_for_player(iVar0);
			if (func_463(uParam0, &iVar1))
			{
				if (network_does_network_id_exist(uParam0->f_16[iVar1]->f_2))
				{
					iVar2 = net_to_obj(uParam0->f_16[iVar1]->f_2);
					if (does_entity_exist(iVar2))
					{
						set_network_id_visible_in_cutscene(uParam0->f_16[iVar1]->f_2, 1, 1, 256);
					}
				}
			}
			network_set_in_mp_cutscene(true, true, uParam1->f_410.f_25, false);
		}
	}
	else if (network_is_player_in_mp_cutscene(iVar0))
	{
		network_set_in_mp_cutscene(false, false, uParam1->f_410.f_25, false);
	}
}

Vector3 func_216()
{
	return 0f, 0f, 0f;
}

int func_217(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_218(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (func_464(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_465(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_466(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_467(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_102(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_468(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_469(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_219(int iParam0)
{
	iVar0 = func_220(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_220(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 136;
		case -2130179962:
			return 63;
		case -2082434331:
			return 152;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -2038430863:
			return 151;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 139;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 148;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 137;
		case -1246069683:
			return 124;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 131;
		case -1140308479:
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -980934770:
			return 125;
		case -974857798:
			return 140;
		case -914097888:
			return 132;
		case -900341092:
			return 142;
		case -859661758:
			return 60;
		case -821191074:
			return 115;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 121;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 128;
		case -336340230:
			return 119;
		case -309456186:
			return 10;
		case -300915357:
			return 146;
		case -252777454:
			return 135;
		case -193167881:
			return 127;
		case -190717545:
			return 30;
		case -179898515:
			return 122;
		case -179343615:
			return 150;
		case -132268497:
			return 141;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 130533095:
			return 126;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 158579484:
			return 117;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 133;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 134;
		case 548902645:
			return 109;
		case 549687162:
			return 145;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 149;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 144;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 808176588:
			return 116;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1130659268:
			return 123;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 129;
		case 1493749872:
			return 112;
		case 1500545235:
			return 138;
		case 1507470319:
			return 83;
		case 1543468593:
			return 147;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 130;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 120;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
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

int func_221(int iParam0, int iParam1)
{
	iVar0 = func_470(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_224(iParam1, 1);
	switch (Global_1146212->f_35859.f_3116[iVar2]->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -619998507:
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	if (!func_101(iParam1))
	{
		return 0;
	}
	if (!func_471(iParam0))
	{
		return 0;
	}
	iVar0 = func_224(iParam0, 1);
	func_472(iParam0, iParam1, iParam2);
	if (func_473(*Global_1146212->f_35859.f_3116[iVar0]) && func_474(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_475(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_476(vVar1))
		{
			if (func_477(vVar1.x, vVar1.y, vVar1.z))
			{
				func_478(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_479(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_479(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_223(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_224(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2019073637:
			return 198;
		case -2008161946:
			return 26;
		case -2006179687:
			return 180;
		case -1961023994:
			return 92;
		case -1958950493:
			return 194;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 188;
		case -1498884346:
			return 156;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 182;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 173;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 184;
		case -749371485:
			return 164;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 193;
		case -562496675:
			return 57;
		case -562150430:
			return 181;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 185;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 160;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 172;
		case -269291543:
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case -91604267:
			return 169;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 177;
		case 200623432:
			return 64;
		case 221495846:
			return 175;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 275909046:
			return 151;
		case 279713143:
			return 171;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 558636891:
			return 187;
		case 570385280:
			return 196;
		case 593083875:
			return 80;
		case 634217179:
			return 150;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 195;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 178;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 170;
		case 794883372:
			return 186;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 192;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 183;
		case 997052462:
			return 157;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 176;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1256374770:
			return 165;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 190;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1305406380:
			return 162;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 168;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1462245043:
			return 154;
		case 1480202237:
			return 189;
		case 1482822775:
			return 146;
		case 1514854451:
			return 191;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 158;
		case 1687654048:
			return 71;
		case 1704907062:
			return 179;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 167;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 161;
		case 2028487040:
			return 52;
		case 2051020894:
			return 174;
		case 2081856931:
			return 120;
		case 2113464199:
			return 159;
		case 2126590447:
			return 14;
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

void func_225(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_226(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_227(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

void func_228(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_229(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

void func_231(var uParam0, int iParam1)
{
	iVar0 = player_ped_id();
	if (iParam1->f_1 != iVar0)
	{
		return;
	}
	if (!network_does_network_id_exist(&(uParam0->f_9[0])))
	{
		return;
	}
	iVar1 = net_to_ent(&(uParam0->f_9[0]));
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (*iParam1 != iVar1)
	{
		return;
	}
	if (!iParam1->f_3)
	{
		return;
	}
	func_480(1257949393, 0, 0);
}

bool func_232(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_233(int iParam0)
{
	if (!func_331(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 1046181202:
			return 2;
		case 1856073229:
			return 3;
		case -1612693182:
			return 4;
		case 1689071181:
			return 5;
		case -1171462349:
			return 6;
		default:
			break;
	}
	if (func_481(iParam0, -2011345500))
	{
		return 7;
	}
	return 2;
}

bool func_234(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&cParam1))
	{
		bVar0 = create_new_scripted_conversation(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_482(cParam1, cParam0);
		if (bParam6)
		{
			preload_script_conversation(&cParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_235(var uParam0, int iParam1)
{
	StringCopy(&cVar0, "relAllyToPosse", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	add_relationship_group(&cVar0, &(Global_1132288->f_2060));
	func_292(2, Global_1132288->f_2060, 707888648);
	func_292(6, Global_1132288->f_2060, 106566339);
	func_292(6, Global_1132288->f_2060, -50399569);
	func_292(6, Global_1132288->f_2060, 1222652248);
	func_292(6, Global_1132288->f_2060, -350226955);
	func_292(6, Global_1132288->f_2060, -1535431934);
	func_292(6, Global_1132288->f_2060, -1448293989);
	func_292(6, Global_1132288->f_2060, 266218800);
	func_292(6, Global_1132288->f_2060, 555364152);
	func_292(6, Global_1132288->f_2060, -1663301869);
	func_292(6, Global_1132288->f_2060, -1996978098);
	func_292(6, Global_1132288->f_2060, 1078461828);
	func_292(6, Global_1132288->f_2060, 747813878);
	func_292(6, Global_1132288->f_2060, -40378879);
	if (Global_1137451->f_5 != 0)
	{
		func_292(2, Global_1132288->f_2060, Global_1137451->f_5);
	}
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 16384);
	}
	else
	{
		func_362(&(uParam0->f_2), 16384);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 2048);
	}
	else
	{
		func_362(&(uParam0->f_2), 2048);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 256);
	}
	else
	{
		func_362(&(uParam0->f_2), 256);
	}
}

void func_239(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(iParam0, 16);
	}
	else
	{
		func_184(iParam0, 67108864);
		func_184(iParam0, 16);
	}
}

void func_240(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 128);
	}
	else
	{
		func_362(&(uParam0->f_2), 128);
	}
}

void func_241(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_362(iParam0, 256);
	}
	else
	{
		func_184(iParam0, 256);
	}
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(&(uParam0->f_2), 16);
	}
	else
	{
		func_362(&(uParam0->f_2), 16);
	}
}

void func_243(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_362(iParam0, 268435456);
	}
	else
	{
		func_184(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_362(iParam0, 1073741824);
	}
	else
	{
		func_184(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_362(iParam0, 536870912);
	}
	else
	{
		func_184(iParam0, 536870912);
	}
}

void func_244(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_483(uParam0, iParam1, sParam2))
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

bool func_245(int iParam0)
{
	if (!func_484(iParam0))
	{
		return false;
	}
	return Global_1293165->f_120[iParam0]->f_4;
}

int func_246(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_485(bParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		bVar2 = func_486(bParam0, 1);
		if (bVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, bVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_487(bParam0, 0);
	}
	if (func_488(bParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_489(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_490(bParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_489(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_247(int iParam0)
{
	if (!func_491(iParam0))
	{
		return 0;
	}
	iVar0 = func_492(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_493(iParam0, 1);
	}
	return 0;
}

bool func_248(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_494(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_495(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

char* func_249()
{
	return "CAMP";
}

char* func_250()
{
	return "TRADAUD";
}

char* func_251()
{
	return "crp06au";
}

bool func_252(var uParam0, int iParam1)
{
	return func_20(uParam0->f_5, iParam1);
}

float func_253(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 32f;
		case 4:
			return 24f;
		default:
			break;
	}
	return 24f;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 1;
		case 11:
		case 12:
		case 13:
			return 2;
		case 9:
		case 10:
			return 3;
		case 8:
			return 4;
		case 14:
			return 5;
		case 17:
			return 6;
		case 0:
			return 7;
		case 15:
			return 8;
		case 18:
			return 9;
		case 19:
			return 11;
		case 20:
			return 12;
		case 21:
			return 13;
		case 22:
			return 14;
		case 23:
			return 15;
		case 24:
		case 25:
		case 26:
			return 17;
		case 27:
			return 16;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 10;
		default:
			break;
	}
	return 0;
}

void func_255(int iParam0, int iParam1)
{
	if (func_496(iParam0))
	{
		return;
	}
	if (func_497(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17374 >= 10)
	{
		Global_17374 = 0;
	}
	Global_17353[Global_17374]->f_1 = iParam1;
	Global_17353[Global_17374] = iParam0;
	Global_17374++;
}

int func_256(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (_does_volume_exist(Global_1940122[iVar0]) && Global_1940122[iVar0] == iParam0)
		{
			(*Global_1940122)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_does_volume_exist(Global_1940122[iVar0]))
		{
			(*Global_1940122)[iVar0] = iParam0;
			(*Global_1940122)[iVar0]->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_257(int iParam0, int iParam1)
{
	_0xb56d41a694e42e86(iParam0, 2228255, 0, 0, -1, iParam1, 2);
	_0x18262cafebb5fbe1(iParam0, 2228255, 0, 0, -1, iParam1, 2);
}

int func_258(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8)
{
	if (_does_volume_exist(&(uParam0->f_14[iParam1])))
	{
		return 1;
	}
	uParam0->f_14[iParam1] = _create_volume_sphere(vParam2, vParam5, vParam8);
	if (!_does_volume_exist(&(uParam0->f_14[iParam1])))
	{
		return 0;
	}
	return 1;
}

bool func_259()
{
	return Global_1956123->f_1;
}

bool func_260(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	if (func_498(iVar0, 0, 1))
	{
		return false;
	}
	if (func_499(iVar0, 32))
	{
		return true;
	}
	return false;
}

int func_261()
{
	return &Global_1902818;
}

int func_262(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_263(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

void func_264(var uParam0, int iParam1)
{
	func_50(&(uParam0->f_3563.f_116), iParam1);
}

void func_265(var uParam0, int iParam1)
{
	if (uParam0->f_18 != iParam1)
	{
		uParam0->f_18 = iParam1;
	}
}

bool func_266(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return func_20(Global_1132288->f_1[iParam0]->f_61, iParam1);
}

Vector3 func_267(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_500()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

struct<8> func_268(vector3 vParam0)
{
	if (!func_501(&Var8, vParam0))
	{
		return Var0;
	}
	Var8.f_2 = 1462115960;
	Var8.f_3 = vParam0.z;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 759645552;
		_datafile_get_string(&Var0, &Var8);
	}
	return Var0;
}

void func_269(int iParam0)
{
	if (((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3) || Global_1900688->f_1 == 1)
	{
		return;
	}
	iVar0 = 0;
	if (func_41() != -1)
	{
		iVar0 = 1;
	}
	Global_1900688->f_2 = Global_1900688->f_1;
	Global_1900688->f_13 = Global_1900688->f_12;
	Global_1900688->f_1 = 4;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_12 = iParam0;
	func_502(Global_1900688->f_7, Global_1900688->f_12);
}

void func_270(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (!func_20(Global_1132288->f_1[iParam0]->f_61, iParam1))
	{
		func_50(&(Global_1132288->f_1[iParam0]->f_61), iParam1);
	}
}

void func_271(bool bParam0)
{
	if (Global_1900688->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_41() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900688->f_2 == 4 && Global_1900688->f_12 != Global_1900688->f_13) && !bParam0)
	{
		Global_1900688->f_1 = Global_1900688->f_2;
		Global_1900688->f_12 = Global_1900688->f_13;
		func_502(iVar0, Global_1900688->f_12);
	}
	else
	{
		Global_1900688->f_1 = 0;
		Global_1900688->f_7 = iVar0;
		Global_1900688->f_8 = func_503();
		Global_1900688->f_9 = func_504(Global_1893587->f_2);
		Global_1900688->f_11 = func_505(Global_1896622->f_41);
		if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
		{
			func_506(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
		else if (Global_1900688->f_11 != -1)
		{
			func_506(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
		}
		else
		{
			func_506(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
		}
	}
	Global_1900688->f_2 = 0;
}

float func_272(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_273(int iParam0)
{
	return (func_381(iParam0, 16) && !func_381(iParam0, 32));
}

struct<2> func_274(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_275()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_276(int iParam0, bool bParam1)
{
	func_193(iParam0, &iVar0, &iVar1);
	if (!func_438(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_440(iVar0, iVar1);
}

void func_277(var uParam0, int iParam1, int iParam2)
{
	func_106(&((*uParam0)[iParam2]->f_1), iParam1);
}

bool func_278()
{
	if (_is_ped_carrying(Global_34) || func_507(Global_34))
	{
		return true;
	}
	return false;
}

bool func_279()
{
	return Global_1896738->f_382;
}

void func_280(int iParam0, char* sParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (bParam2)
			{
				_0xfca8fb9e15fa80d3(get_ped_index_from_entity_index(iParam0), get_hash_key(sParam1));
			}
			else
			{
				_set_ped_prompt_name(get_ped_index_from_entity_index(iParam0), sParam1);
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			if (bParam2)
			{
				_0xd503d6f0986d58bc(get_object_index_from_entity_index(iParam0), get_hash_key(sParam1));
			}
			else
			{
				_0xaee6c800e124cfe1(get_object_index_from_entity_index(iParam0), sParam1);
			}
		}
	}
}

void func_281(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_110(uParam0, iParam1, iParam2, iParam3))
	{
		func_50((*uParam0)[iParam1]->f_4[iParam2], iParam3);
	}
}

int func_282(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	else if (!func_381(iParam0, 16))
	{
		return 0;
	}
	else if (func_416(&((*Global_1131196)[iParam0]->f_4)) && func_418(&((*Global_1131196)[iParam0]->f_4)) < func_508())
	{
		return 0;
	}
	return 1;
}

bool func_283()
{
	if (!func_509() && func_510(1))
	{
		return true;
	}
	return false;
}

bool func_284(int iParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (!func_181(*uParam1))
	{
		*uParam1 = func_364(sParam2, 648122183, iParam0, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		if (func_181(*uParam1))
		{
			func_366(*uParam1, _uiprompt_get_group_id_for_target_entity(iParam0), 0, 1);
			func_511(*uParam1, 5f, 1);
			func_312(*uParam1, bParam3, 1, 1);
		}
	}
	else
	{
		func_312(*uParam1, bParam3, 1, 1);
		if (func_512(*uParam1, 1))
		{
			func_182(uParam1, 1, 1);
			return true;
		}
	}
	return false;
}

void func_285(var uParam0)
{
	func_315(4);
	func_513(8);
	Var0.f_8 = uParam0;
	func_515(4, Var0, func_514(0, 8));
}

int func_286(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	else if (func_273(iParam0))
	{
		return 0;
	}
	else if (func_381(iParam0, 32))
	{
		return 0;
	}
	else if (func_416(&((*Global_1131196)[iParam0]->f_4)) && func_418(&((*Global_1131196)[iParam0]->f_4)) < func_508())
	{
		return 0;
	}
	return 1;
}

void func_287(var uParam0)
{
	func_315(8);
	func_513(4);
	Var0.f_8 = uParam0;
	func_515(3, Var0, func_514(0, 8));
}

void func_288(var uParam0)
{
	if (func_266(*uParam0, 1))
	{
		set_ped_reset_flag(Global_34, 288, true);
	}
}

void func_289(var uParam0)
{
	if ((!does_entity_exist(Global_34) || is_entity_dead(Global_34)) || !is_ped_in_any_vehicle(Global_34, false))
	{
		return;
	}
	iVar0 = get_vehicle_ped_is_in(Global_34, false);
	if ((((!does_entity_exist(iVar0) || is_entity_dead(iVar0)) || !network_has_control_of_entity(iVar0)) || !is_vehicle_driveable(iVar0, false, false)) || get_ped_in_vehicle_seat(iVar0, -1) != Global_34)
	{
		return;
	}
	if (!_does_volume_exist(&(uParam0->f_14[1])) || !is_entity_in_volume(iVar0, &(uParam0->f_14[1]), true, 0))
	{
		func_97(iVar0);
		return;
	}
	vVar1 = { get_entity_coords(iVar0, false, false) };
	if (get_closest_vehicle_node(vVar1, &vVar4, 1, 3f, 0f) && vdist(vVar1, vVar4) < 5f)
	{
		func_97(iVar0);
		return;
	}
	if (!decor_exist_on(iVar0, "fCampVehicleMaxSpeed"))
	{
		fVar7 = _0xc6d7ddc843176701(iVar0);
		decor_set_float(iVar0, "fCampVehicleMaxSpeed", fVar7);
	}
	_0x0c3f0f7f92ca847c(iVar0, 3.5f);
}

int func_290(var uParam0)
{
	if (!does_entity_exist(Global_34) || is_entity_dead(Global_34))
	{
		return 0;
	}
	iVar0 = get_mount(Global_34);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return 0;
	}
	if (!_does_volume_exist(&(uParam0->f_14[0])) || !func_357(iVar0, &(uParam0->f_14[0]), 1, 0))
	{
		return 0;
	}
	vVar1 = { get_entity_coords(iVar0, false, false) };
	if (get_closest_vehicle_node(vVar1, &vVar4, 1, 3f, 0f) && vdist(vVar1, vVar4) < 5f)
	{
		return 0;
	}
	set_ped_max_move_blend_ratio(iVar0, 1.75f);
	return 1;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	if (!_0x72b2e00c9bac6789(&(uParam0->f_3695), iParam2))
	{
		if (network_is_player_active(iParam1))
		{
			func_516(iParam1);
			func_517(iParam1);
			_0x31010318ba9897ac(&(uParam0->f_3695), iParam2);
		}
	}
}

void func_292(int iParam0, int iParam1, int iParam2)
{
	set_relationship_between_groups(iParam0, iParam1, iParam2);
	set_relationship_between_groups(iParam0, iParam2, iParam1);
}

void func_293(var uParam0)
{
	if (_0x901e0dc25080c8b9(player_id()) != uParam0->f_2)
	{
		return;
	}
	if (func_4(uParam0, 1024))
	{
		if (!func_295(255))
		{
			if (!is_entity_dead(Global_34) && is_ped_using_any_scenario(Global_34))
			{
				clear_ped_tasks(Global_34, 1, 0);
				_0xfdecca06e8b81346(Global_34);
			}
			func_69(uParam0, 1024);
		}
	}
	else if (func_296(5, 255) && func_295(255))
	{
		func_44(uParam0, 1024);
	}
}

bool func_294()
{
	if (((((((((func_296(70, 255) || func_296(71, 255)) || func_296(73, 255)) || func_296(74, 255)) || func_296(77, 255)) || func_296(78, 255)) || func_296(79, 255)) || func_296(80, 255)) || func_296(81, 255)) || func_296(82, 255))
	{
		return true;
	}
	return false;
}

bool func_295(int iParam0)
{
	return func_296(1, iParam0);
}

bool func_296(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_518(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_500())
	{
		return func_518(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_518(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_297()
{
	if (!func_519(70))
	{
		return false;
	}
	return Global_1291734->f_11.f_70 != get_id_of_this_thread();
}

struct<4> func_298(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_520(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_521() };
		if (func_522() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_523(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_524(player_id());
	}
	bVar33 = func_525(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_526(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_527();
		}
		if (!func_528(&Var0, 0))
		{
			Var35 = { func_529(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

int func_299(var uParam0, var uParam1)
{
	if (&uParam0->f_38[15] == 3)
	{
		iVar1 = -1805387726;
		iVar2 = 32789213;
		if (func_530())
		{
			iVar3 = iVar1;
			iVar1 = iVar2;
			iVar2 = iVar3;
		}
		vVar4 = { uParam0->f_38[15]->f_4 };
		fVar7 = 8f;
		if (_0x6eead6af637da752(vVar4, iVar1, fVar7, 1))
		{
			iVar0 = _find_closest_active_scenario_point_of_type(vVar4, iVar1, fVar7, 1, false);
		}
		else if (_0x6eead6af637da752(vVar4, iVar2, fVar7, 1))
		{
			iVar0 = _find_closest_active_scenario_point_of_type(vVar4, iVar2, fVar7, 1, false);
		}
	}
	if (iVar0 == 0 || !_does_scenario_point_exist(iVar0))
	{
		if (uParam1->f_403 != -1 && &uParam0->f_38[uParam1->f_403] == 3)
		{
			vVar8 = { uParam0->f_38[uParam1->f_403]->f_4 };
			fVar11 = 5f;
			if (_0x6eead6af637da752(vVar8, -1805387726, fVar11, 1))
			{
				iVar0 = _find_closest_active_scenario_point_of_type(vVar8, -1805387726, fVar11, 1, false);
			}
		}
	}
	return iVar0;
}

void func_300(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_531(49);
	}
	if (bParam1)
	{
		func_531(51);
	}
	func_532(48);
	func_531(52);
	func_531(3);
}

int func_301(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = get_id_of_this_thread();
	if (func_519(72))
	{
		func_533(&(Global_1291734->f_11.f_119));
		return 0;
	}
	iVar1 = player_id();
	if (Global_1291734->f_581 != 0)
	{
		if (_network_is_player_index_valid(iVar1))
		{
			iVar2 = _0xb9050a97594c8832(iVar1);
			if (Global_1291734->f_581 == 1)
			{
				if (does_entity_exist(iVar2))
				{
					if (iParam8 == 0)
					{
						return 0;
					}
					else if (bParam9)
					{
						if (!func_534(1))
						{
							return 0;
						}
					}
					else if (!func_535(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_536(1);
				return 0;
			}
		}
	}
	if (func_519(70))
	{
		if (!func_537(&(Global_1291734->f_11.f_119)))
		{
			func_538(&(Global_1291734->f_11.f_119), 0);
		}
		fVar3 = func_539(&(Global_1291734->f_11.f_119));
		if (fVar3 > 10f)
		{
			func_302(1);
			Global_1291734->f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1291734->f_11.f_70 != 0)
		{
			if (!is_thread_active(Global_1291734->f_11.f_70, false))
			{
				func_302(1);
				return 0;
			}
			if (Global_1291734->f_11.f_70 != iVar0)
			{
				Global_1291734->f_11.f_104 = 0;
				func_533(&(Global_1291734->f_11.f_119));
				return 0;
			}
		}
		if (Global_1291734->f_11 != 11)
		{
			return 0;
		}
		iVar4 = _0xf49f14462f0ae27c(iVar1);
		if (!does_entity_exist(iVar4))
		{
			return 0;
		}
		Global_1291734->f_11.f_104 = 0;
		func_533(&(Global_1291734->f_11.f_119));
		func_531(71);
		return iVar4;
	}
	if (Global_1291734->f_11 != 1)
	{
		return 0;
	}
	if (is_thread_active(Global_1291734->f_11.f_71, false) && Global_1291734->f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_540(255) && func_541(2, 255))
	{
		return 0;
	}
	Global_1291734->f_11.f_70 = iVar0;
	Global_1291734->f_11.f_73 = { vParam0 };
	Global_1291734->f_11.f_77 = iParam3;
	Global_1291734->f_11.f_72 = iParam5;
	Global_1291734->f_11.f_76 = iParam7;
	if (bParam4)
	{
		func_531(73);
	}
	else
	{
		func_532(73);
	}
	if (bParam6)
	{
		func_531(76);
	}
	else
	{
		func_532(76);
	}
	func_531(70);
	func_542(&(Global_1291734->f_11.f_119));
	return 0;
}

void func_302(bool bParam0)
{
	if (!func_519(70))
	{
		return;
	}
	if (func_519(72))
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	if (Global_1291734->f_11.f_70 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_531(72);
}

void func_303(var uParam0, var uParam1, var uParam2)
{
	if (!func_16(uParam1, 1, uParam2->f_1))
	{
		if (func_543(uParam0, uParam1, uParam2))
		{
			func_17(uParam1, 1, uParam2->f_1);
			func_544(*uParam2, 2);
		}
	}
	else if (func_545(uParam2))
	{
		func_277(uParam1, 1, uParam2->f_1);
		func_546(*uParam2, 2);
	}
}

bool func_304(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (!_0x9be7dcb22d32ccbe(uParam1->f_2, player_id()))
	{
		return false;
	}
	if (!_does_volume_exist(iParam2))
	{
		return false;
	}
	iVar0 = create_itemset(false);
	iVar1 = _0x84ccf9a12942c83d(iParam2, iVar0, 1, 1, 0, 0);
	if (iVar1 > 0)
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= (iVar1 - 1))
		{
			iVar2 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar4, iVar0));
			if (func_547(uParam0, iVar2))
			{
				iVar3 = get_relationship_between_peds(iVar2, Global_34);
				if ((iVar3 == 6 || iVar3 == 4) || iVar3 == 5)
				{
					func_292(6, Global_1132288->f_2060, get_ped_relationship_group_hash(iVar2));
					destroy_itemset(iVar0);
					return true;
				}
			}
			iVar4++;
		}
	}
	destroy_itemset(iVar0);
	return false;
}

void func_305(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam0->f_9[iParam3]->f_1 == 7)
	{
		func_548(uParam2, iParam3, 7);
	}
	switch (uParam2->f_25[iParam3]->f_1)
	{
		case 0:
			func_549(uParam0, uParam2, iParam3);
			break;
		case 3:
			func_550(uParam0, uParam1, uParam2, iParam3);
			break;
		case 4:
			func_551(uParam0, uParam1, uParam2, iParam3);
			break;
		case 5:
			func_552(uParam0, uParam2, iParam3);
			break;
		case 6:
			func_553(uParam0, uParam1, uParam2, iParam3);
			break;
		case 7:
			func_554(uParam0, uParam1, uParam2, iParam3);
			break;
		case 8:
			func_555(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

void func_306(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_25[iParam2]->f_1 != 6)
	{
		return;
	}
	if (!network_does_network_id_exist(&(uParam0->f_9[iParam2])))
	{
		return;
	}
	iVar0 = net_to_ped(&(uParam0->f_9[iParam2]));
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		if (!func_556(uParam0, iParam2, 32))
		{
			set_ped_reset_flag(iVar0, 48, true);
			set_ped_reset_flag(iVar0, 49, true);
			set_ped_reset_flag(iVar0, 53, true);
		}
	}
}

bool func_307(int iParam0)
{
	return func_20(Global_1137047->f_8, iParam0);
}

int func_308()
{
	return func_557(-1824478493, 0, 59806960);
}

int func_309(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_43(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_558(iVar0, 2))
		{
			if (func_559(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
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
		func_560(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_310(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = (func_557(bParam0, 0, bParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_561(iVar0);
	}
	return bVar1;
}

bool func_311(int iParam0, bool bParam1)
{
	if (bParam1 && !func_181(iParam0))
	{
		return false;
	}
	return !func_558(iParam0, 4);
}

void func_312(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (bParam1)
	{
		func_562(iParam0, 4);
		if (bParam3)
		{
			func_563(iVar0, 1);
		}
		func_564(iVar0, 1);
	}
	else
	{
		func_565(iParam0, 4);
		func_564(iVar0, 0);
	}
}

bool func_313(int iParam0, bool bParam1)
{
	if (bParam1 && !func_181(iParam0))
	{
		return false;
	}
	iVar0 = func_429(iParam0);
	if (_uiprompt_has_hold_auto_fill_mode((*Global_1951255)[iVar0]->f_3))
	{
		if ((*Global_1951255)[iVar0]->f_20)
		{
			iVar1 = get_game_timer();
		}
		else
		{
			iVar1 = _get_system_time();
		}
		uVar2 = _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
		if (!_uiprompt_is_active((*Global_1951255)[iVar0]->f_3))
		{
			iVar3 = (iVar1 - (*Global_1951255)[iVar0]->f_21);
			iVar4 = floor((IntToFloat((*Global_1951255)[iVar0]->f_18) * (1f - (*Global_1951255)[iVar0]->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			(*Global_1951255)[iVar0]->f_21 = iVar1;
			(*Global_1951255)[iVar0]->f_22 = uVar2;
		}
	}
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1951255)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1951255)[iVar0]->f_3);
}

void func_314(var uParam0)
{
	Var0.f_8 = uParam0;
	func_515(10, Var0, func_514(0, 8));
}

void func_315(int iParam0)
{
	func_106(&(Global_1137047->f_8), iParam0);
}

int func_316(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_331(bParam0, 0))
	{
		return -1;
	}
	if (func_485(bParam0) != 26423971)
	{
		return -1;
	}
	if (func_566())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		iVar0 = (func_567(bParam0, bParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_567(bParam0, bParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_568(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_246(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_569(0))
	{
		if (iVar0 > 0)
		{
			func_570(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_570(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_571(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_570(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_572(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_573(iVar52, Var53);
	}
	return iVar52;
}

int func_317(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return func_574(Global_1132288->f_1[iParam0]->f_5);
}

int func_318(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = func_390(iVar0);
	if (!func_331(iVar1, 0))
	{
		return 0;
	}
	return func_575(iVar1);
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = -357713093;
			break;
		case 2:
			iVar0 = 1486559056;
			break;
		case 3:
			iVar0 = 1695199279;
			break;
		case 4:
			iVar0 = -1143906885;
			break;
		case 5:
			iVar0 = -914097888;
			break;
		case 6:
			iVar0 = 225804550;
			break;
		case 7:
			iVar0 = 508502713;
			break;
		default:
			iVar0 = -357713093;
			break;
	}
	return iVar0;
}

int func_320(int iParam0, int iParam1)
{
	if (!func_576(iParam1))
	{
		return 0;
	}
	if (!func_219(iParam1))
	{
		return 0;
	}
	if (!func_102(iParam0))
	{
		return 0;
	}
	if (!func_101(iParam0))
	{
		return 0;
	}
	if (!func_577(iParam0))
	{
		func_105(iParam0);
	}
	iVar0 = get_id_of_this_thread();
	if (!func_103(iParam0, iVar0))
	{
		return 0;
	}
	if (func_578(iParam0, iParam1))
	{
		func_579(iParam0, iVar0);
		return 1;
	}
	return 0;
}

float func_321(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 2)
			{
				return 4f;
			}
			else if (iParam2 == 1581179681 || iParam2 == -1884014371)
			{
				return 4f;
			}
			else
			{
				return 3.25f;
			}
			break;
		case 2:
			if (iParam2 == 1581179681 || iParam2 == -1884014371)
			{
				return 3f;
			}
			else
			{
				return 2.25f;
			}
			break;
		case 3:
			if (iParam2 == 1581179681 || iParam2 == -1884014371)
			{
				return 3.25f;
			}
			else
			{
				return 2.5f;
			}
			break;
		case 9:
			if (iParam2 == 1581179681 || iParam2 == -1884014371)
			{
				return 3f;
			}
			else
			{
				return 2.25f;
			}
			break;
		case 4:
			if (iParam1 == 49)
			{
				return 5f;
			}
			else
			{
				return 3.25f;
			}
			break;
		case 5:
			return 1.25f;
		case 6:
			return 1.25f;
		case 7:
			return 3.25f;
		case 11:
			return 4f;
		case 12:
			return 3.25f;
		case 13:
			return 1.75f;
		case 14:
			return 2.5f;
		case 15:
			return 2.5f;
		case 10:
			return func_580(iParam1);
	}
	return 0f;
}

bool func_322(int iParam0)
{
	return func_20((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_323(int iParam0)
{
	if (func_322(iParam0))
	{
		func_106(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

bool func_324(var uParam0)
{
	return (uParam0->f_3563 > 2 && uParam0->f_3563 < 7);
}

bool func_325()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

char[] func_326(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			return "CRP06_GF_FAMILR";
		case 31:
			return "CRP06_GF_TRADER";
		case 32:
			return "CRP06_GF_UPGRDE";
		case 1:
			return "TRAD_GF_BYE";
		case 2:
			return "CRP06_GF_BYE";
		case 3:
			return "TRAD_CA_DOG";
		case 4:
			return "CRP06_PA_DOG";
		case 5:
			return "TRAD_AM_CHAT1";
		case 6:
			return "TRAD_AM_CHAT2";
		case 7:
			return "TRAD_AM_CHAT3";
		case 8:
			return "TRAD_AM_DOG";
		case 9:
			return "CRP06_AM_XMAS";
		case 10:
			return "CRP06_AM_XMASTR";
		case 11:
			return "CRP06_AM_MP005";
		case 12:
			return "CRP06_AM_RAMBLE";
		case 13:
			return "TRAD_AM_LOC";
		case 14:
			return "TRAD_CR_AVAIL";
		case 15:
			return "TRAD_CR_DOG";
		case 16:
			return "TRAD_CR_TRAIN";
		case 17:
			return "TRAD_CR_NORET";
		case 19:
			return "TRAD_GN_RESTRKF";
		case 18:
			return "TRAD_GN_RESTRKM";
		case 20:
			return "TRAD_GN_REPLM";
		case 21:
			return "TRAD_GN_REFLM";
		case 22:
			return "TRAD_GN_SLSTRK";
		case 23:
			return "TRAD_GN_SLPLM";
		case 24:
			return "TRAD_GN_SLPPLM";
		case 25:
			return "TRAD_GN_SLFLM";
		case 26:
			return "TRAD_GN_REWANT";
		case 27:
			return "TRAD_GN_REBNTY";
		case 28:
			return "TRAD_MS_INTNP";
		case 29:
			return "TRAD_MS_INTNPC";
		case 33:
			return "CRP06_AM_NMOON";
		case 34:
			return "CRP06_AM_YMOON";
		case 35:
			return "CRP06_AM_REMIND";
		case 36:
			return "CRP07_PA_LEGEND";
		default:
			break;
	}
	return "";
}

Vector3 func_327(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_328()
{
	return func_296(1, 255);
}

bool func_329()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) <= 4);
}

bool func_330()
{
	return func_582(func_581(player_id()));
}

bool func_331(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(bParam0, iParam1);
}

bool func_332(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_485(bParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_583(bParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_584(bParam0))
			{
				return true;
			}
			break;
	}
	return func_246(bParam0, 0, 0, 0) >= iParam1;
}

void func_333(var uParam0)
{
	vVar0 = { uParam0->f_4 };
	fVar3 = 2.25f;
	fVar4 = 3.25f;
	*uParam0->f_3563.f_71[0] = { vVar0 };
	uParam0->f_3563.f_71[0] = (&uParam0->f_3563.f_71[0] + fVar3);
	uParam0->f_3563.f_71[0]->f_1 = (uParam0->f_3563.f_71[0]->f_1 + fVar4);
	func_585(uParam0->f_3563.f_71[0], 1088421888);
	fVar3 = 3.25f;
	fVar4 = 2.25f;
	*uParam0->f_3563.f_71[1] = { vVar0 };
	uParam0->f_3563.f_71[1] = (&uParam0->f_3563.f_71[1] + fVar3);
	uParam0->f_3563.f_71[1]->f_1 = (uParam0->f_3563.f_71[1]->f_1 + fVar4);
	func_585(uParam0->f_3563.f_71[1], 1088421888);
	fVar3 = 2.25f;
	fVar4 = 3.25f;
	*uParam0->f_3563.f_71[2] = { vVar0 };
	uParam0->f_3563.f_71[2] = (&uParam0->f_3563.f_71[2] + fVar3);
	uParam0->f_3563.f_71[2]->f_1 = (uParam0->f_3563.f_71[2]->f_1 + -fVar4);
	func_585(uParam0->f_3563.f_71[2], 1088421888);
	fVar3 = 3.25f;
	fVar4 = 2.25f;
	*uParam0->f_3563.f_71[3] = { vVar0 };
	uParam0->f_3563.f_71[3] = (&uParam0->f_3563.f_71[3] + fVar3);
	uParam0->f_3563.f_71[3]->f_1 = (uParam0->f_3563.f_71[3]->f_1 + -fVar4);
	func_585(uParam0->f_3563.f_71[3], 1088421888);
	fVar3 = 2.25f;
	fVar4 = 3.25f;
	*uParam0->f_3563.f_71[4] = { vVar0 };
	uParam0->f_3563.f_71[4] = (&uParam0->f_3563.f_71[4] + -fVar3);
	uParam0->f_3563.f_71[4]->f_1 = (uParam0->f_3563.f_71[4]->f_1 + -fVar4);
	func_585(uParam0->f_3563.f_71[4], 1088421888);
	fVar3 = 3.25f;
	fVar4 = 2.25f;
	*uParam0->f_3563.f_71[5] = { vVar0 };
	uParam0->f_3563.f_71[5] = (&uParam0->f_3563.f_71[5] + -fVar3);
	uParam0->f_3563.f_71[5]->f_1 = (uParam0->f_3563.f_71[5]->f_1 + -fVar4);
	func_585(uParam0->f_3563.f_71[5], 1088421888);
	fVar3 = 2.25f;
	fVar4 = 3.25f;
	*uParam0->f_3563.f_71[6] = { vVar0 };
	uParam0->f_3563.f_71[6] = (&uParam0->f_3563.f_71[6] + -fVar3);
	uParam0->f_3563.f_71[6]->f_1 = (uParam0->f_3563.f_71[6]->f_1 + fVar4);
	func_585(uParam0->f_3563.f_71[6], 1088421888);
	fVar3 = 3.25f;
	fVar4 = 2.25f;
	*uParam0->f_3563.f_71[7] = { vVar0 };
	uParam0->f_3563.f_71[7] = (&uParam0->f_3563.f_71[7] + -fVar3);
	uParam0->f_3563.f_71[7]->f_1 = (uParam0->f_3563.f_71[7]->f_1 + fVar4);
	func_585(uParam0->f_3563.f_71[7], 1088421888);
	fVar5 = 1.25f;
	*uParam0->f_3563.f_96[0] = { vVar0 };
	uParam0->f_3563.f_96[0] = (&uParam0->f_3563.f_96[0] + fVar5);
	uParam0->f_3563.f_96[0]->f_1 = (uParam0->f_3563.f_96[0]->f_1 + fVar5);
	func_585(uParam0->f_3563.f_96[0], 1088421888);
	*uParam0->f_3563.f_96[1] = { vVar0 };
	uParam0->f_3563.f_96[1] = (&uParam0->f_3563.f_96[1] + fVar5);
	uParam0->f_3563.f_96[1]->f_1 = (uParam0->f_3563.f_96[1]->f_1 + -fVar5);
	func_585(uParam0->f_3563.f_96[1], 1088421888);
	*uParam0->f_3563.f_96[2] = { vVar0 };
	uParam0->f_3563.f_96[2] = (&uParam0->f_3563.f_96[2] + -fVar5);
	uParam0->f_3563.f_96[2]->f_1 = (uParam0->f_3563.f_96[2]->f_1 + -fVar5);
	func_585(uParam0->f_3563.f_96[2], 1088421888);
	*uParam0->f_3563.f_96[3] = { vVar0 };
	uParam0->f_3563.f_96[3] = (&uParam0->f_3563.f_96[3] + -fVar5);
	uParam0->f_3563.f_96[3]->f_1 = (uParam0->f_3563.f_96[3]->f_1 + fVar5);
	func_585(uParam0->f_3563.f_96[3], 1088421888);
	iVar6 = func_586();
	if (iVar6 != 0)
	{
		uParam0->f_3563.f_2[0] = func_587(iVar6);
		uParam0->f_3563.f_120 = 1;
	}
	if (uParam0->f_3563.f_120 > 0)
	{
		Var9 = 4;
		Var9.f_1.f_1 = -1;
		Var9.f_1.f_2.f_1 = -1;
		Var9.f_1.f_2.f_2.f_1 = -1;
		Var9.f_1.f_2.f_2.f_2.f_1 = -1;
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			iVar8 = func_588(iVar7);
			if (iVar8 == iVar6)
			{
				Jump @1334; //curOff = 1290
			}
			else
			{
				iVar18 = func_589(iVar8);
				if (iVar18 > 0)
				{
					Var9[iVar19]->f_1 = iVar7;
					Var9[iVar19] = iVar18;
					iVar19++;
				}
			}
			iVar7++;
		}
		_0x7e300b5b86ab1d1a(&Var9, Var9, 2, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar20 = 1;
		while (iVar20 <= iVar19)
		{
			uParam0->f_3563.f_2[iVar20] = (Var9[(iVar20 - 1)])->f_1;
			uParam0->f_3563.f_120++;
			if (uParam0->f_3563.f_120 >= 4)
			{
			}
			else
			{
				iVar20++;
			}
		}
	}
}

void func_334(var uParam0, int iParam1)
{
	uParam0->f_3563 = iParam1;
}

bool func_335(var uParam0)
{
	if (uParam0->f_3563.f_119 >= 4)
	{
		return false;
	}
	if (uParam0->f_3563.f_119 >= uParam0->f_3563.f_120)
	{
		return false;
	}
	if (uParam0->f_3563.f_120 <= 0)
	{
		return false;
	}
	if (!func_79(uParam0, 64))
	{
		return false;
	}
	if (uParam0->f_3563.f_117 != 0 && (_get_system_time() - uParam0->f_3563.f_117) < 7000)
	{
		return false;
	}
	if (func_107(func_274(0)))
	{
		return false;
	}
	if (func_590(uParam0))
	{
		return true;
	}
	return false;
}

bool func_336(var uParam0)
{
	if (!func_181(uParam0->f_3563.f_121))
	{
		uParam0->f_3563.f_121 = func_309(func_591(-241666815), func_592(), uParam0->f_4, 3f, 3, 0, 0, 5, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
		func_593(uParam0->f_3563.f_121, 17, 1, 1);
		if (func_594(-1283929968, 600942249, 0, 0) < 1)
		{
			func_312(uParam0->f_3563.f_121, 0, 1, 1);
		}
	}
	else if (!func_311(uParam0->f_3563.f_121, 0))
	{
		if (func_594(-1283929968, 600942249, 0, 0) >= 1)
		{
			func_312(uParam0->f_3563.f_121, 1, 1, 1);
		}
	}
	else if (func_313(uParam0->f_3563.f_121, 0))
	{
		uParam0->f_3563.f_117 = _get_system_time();
		return true;
	}
	else if (func_594(-1283929968, 600942249, 0, 0) < 1)
	{
		func_312(uParam0->f_3563.f_121, 0, 1, 1);
	}
	return false;
}

bool func_337(var uParam0)
{
	if (func_595(-1283929968, 600942249, 1, 0) == -1)
	{
		return false;
	}
	uParam0->f_3563.f_118 = _get_system_time();
	func_596(uParam0);
	return true;
}

bool func_338(var uParam0, int iParam1)
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	bVar0 = true;
	if (&uParam0->f_3563.f_2[iParam1] == -1)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	vVar16 = { get_entity_coords(Global_34, true, false) };
	bVar19 = func_597(&(uParam0->f_3563.f_2[iParam1]));
	if (bVar19)
	{
		iVar15 = 4;
	}
	else
	{
		iVar15 = 8;
	}
	iVar12 = 0;
	while (iVar12 <= (iVar15 - 1))
	{
		if (bVar19)
		{
			if (!func_598(uParam0, iVar12))
			{
				iVar1[iVar13] = iVar12;
				fVar10 = vdist(vVar16, *uParam0->f_3563.f_96[&iVar1[iVar13]]);
				if (fVar10 > fVar11)
				{
					fVar11 = fVar10;
					uVar14 = &iVar1[iVar13];
				}
				iVar13++;
			}
		}
		else if (!func_599(uParam0, iVar12))
		{
			iVar1[iVar13] = iVar12;
			fVar10 = vdist(vVar16, *uParam0->f_3563.f_71[&iVar1[iVar13]]);
			if (fVar10 > fVar11)
			{
				fVar11 = fVar10;
				uVar14 = &iVar1[iVar13];
			}
			iVar13++;
		}
		iVar12++;
	}
	uParam0->f_3563.f_2[iParam1]->f_10 = uVar14;
	if (bVar19)
	{
		func_600(uParam0, uParam0->f_3563.f_2[iParam1]->f_10);
	}
	else
	{
		func_601(uParam0, uParam0->f_3563.f_2[iParam1]->f_10);
	}
	iVar13 = 0;
	fVar21 = 99999f;
	iVar12 = 0;
	while (iVar12 <= (iVar15 - 1))
	{
		if (bVar19)
		{
			if (!func_598(uParam0, iVar12))
			{
				iVar1[iVar13] = iVar12;
				fVar22 = vdist(*uParam0->f_3563.f_96[uParam0->f_3563.f_2[iParam1]->f_10], *uParam0->f_3563.f_96[&iVar1[iVar13]]);
				if (fVar22 < fVar21)
				{
					fVar21 = fVar10;
					uVar20 = &iVar1[iVar13];
				}
				iVar13++;
			}
		}
		else if (!func_599(uParam0, iVar12))
		{
			iVar1[iVar13] = iVar12;
			fVar22 = vdist(*uParam0->f_3563.f_71[uParam0->f_3563.f_2[iParam1]->f_10], *uParam0->f_3563.f_71[&iVar1[iVar13]]);
			if (fVar22 < fVar21)
			{
				fVar21 = fVar10;
				uVar20 = &iVar1[iVar13];
			}
			iVar13++;
		}
		iVar12++;
	}
	uParam0->f_3563.f_2[iParam1]->f_11 = uVar20;
	if (bVar19)
	{
		func_600(uParam0, uParam0->f_3563.f_2[iParam1]->f_11);
	}
	else
	{
		func_601(uParam0, uParam0->f_3563.f_2[iParam1]->f_11);
	}
	uParam0->f_3563.f_2[iParam1]->f_7 = func_602(&(uParam0->f_3563.f_2[iParam1]));
	uParam0->f_3563.f_2[iParam1]->f_8 = func_602(&(uParam0->f_3563.f_2[iParam1]));
	return true;
}

void func_339(var uParam0)
{
	_0xa63fcad3a6fec6d2(player_id(), 0);
}

void func_340(var uParam0, var uParam1)
{
	switch (uParam1->f_3563.f_1)
	{
		case 0:
			break;
		case 1:
			func_603();
			func_88(uParam1, 2);
			break;
		case 2:
			if (has_anim_event_fired(Global_34, 956220901))
			{
				uParam1->f_3563.f_114 = _get_system_time();
				func_604(uParam0);
				func_88(uParam1, 3);
			}
			break;
		case 3:
			if (uParam1->f_3563.f_114 == 0)
			{
				uParam1->f_3563.f_114 = _get_system_time();
				return;
			}
			else if ((_get_system_time() - uParam1->f_3563.f_114) < 2500)
			{
				return;
			}
			else
			{
				uParam1->f_3563.f_114 = 0;
			}
			func_605(uParam1, 1);
			func_88(uParam1, 0);
			break;
	}
}

bool func_341(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 <= (uParam0->f_3563.f_119 - 1))
	{
		bVar0 = (func_606(uParam0, &(uParam0->f_3563.f_2[iVar1]), iVar1) && bVar0);
		iVar1++;
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_342(var uParam0)
{
	if (func_79(uParam0, 8))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= (uParam0->f_3563.f_119 - 1))
	{
		bVar0 = (func_607(uParam0, iVar1) || bVar0);
		iVar1++;
	}
	if (bVar0)
	{
		func_264(uParam0, 8);
		return 1;
	}
	return 0;
}

int func_343(var uParam0)
{
	if (!func_79(uParam0, 8))
	{
		func_264(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_3563.f_119 - 1))
	{
		switch (uParam0->f_3563.f_2[iVar0]->f_2)
		{
			case 0:
				if (func_338(uParam0, iVar0))
				{
					func_77(uParam0, iVar0, 1);
				}
				return 0;
			case 1:
				if (func_606(uParam0, &(uParam0->f_3563.f_2[iVar0]), iVar0))
				{
					func_77(uParam0, iVar0, 2);
				}
				return 0;
			case 2:
				if (!func_607(uParam0, iVar0))
				{
					return 0;
				}
				if (!func_608(uParam0, &(uParam0->f_3563.f_2[iVar0]), iVar0))
				{
					return 0;
				}
				if (func_609(uParam0, iVar0))
				{
					func_610(uParam0->f_3563.f_2[iVar0]->f_3);
					func_77(uParam0, iVar0, 3);
				}
				return 0;
			case 3:
				break;
		}
		iVar0++;
	}
	return 1;
}

void func_344(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_3563.f_119 - 1))
	{
		func_610(uParam0->f_3563.f_2[iVar0]->f_3);
		iVar0++;
	}
}

void func_345(var uParam0)
{
	if (!func_79(uParam0, 2))
	{
		return;
	}
	if (uParam0->f_3563.f_111 == 0 || (_get_system_time() - uParam0->f_3563.f_111) >= 100)
	{
		uParam0->f_3563.f_111 = _get_system_time();
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 <= (uParam0->f_3563.f_119 - 1))
	{
		func_611(uParam0, iVar1, 1, bVar0);
		iVar1++;
	}
}

void func_346(var uParam0)
{
	iVar0 = (uParam0->f_3563.f_119 - 1);
	if (uParam0->f_3563.f_119 >= 4)
	{
		if (func_181(uParam0->f_3563.f_121))
		{
			func_78(uParam0);
		}
		if (uParam0->f_3563.f_2[iVar0]->f_2 == 3)
		{
			return;
		}
	}
	if (uParam0->f_3563.f_2[iVar0]->f_2 != 3)
	{
		switch (uParam0->f_3563.f_2[iVar0]->f_2)
		{
			case 0:
				if (func_338(uParam0, iVar0))
				{
					func_77(uParam0, iVar0, 1);
				}
				break;
			case 1:
				if (func_606(uParam0, &(uParam0->f_3563.f_2[iVar0]), iVar0))
				{
					func_77(uParam0, iVar0, 2);
				}
				break;
			case 2:
				if (!func_607(uParam0, iVar0))
				{
					return;
				}
				if (!func_608(uParam0, &(uParam0->f_3563.f_2[iVar0]), iVar0))
				{
					return;
				}
				if (func_609(uParam0, iVar0))
				{
					func_610(uParam0->f_3563.f_2[iVar0]->f_3);
					func_77(uParam0, iVar0, 3);
				}
				break;
			case 3:
				break;
		}
		return;
	}
	if (!func_335(uParam0))
	{
		func_78(uParam0);
		return;
	}
	if (func_336(uParam0))
	{
		if (func_337(uParam0))
		{
			uParam0->f_3563.f_119++;
			func_88(uParam0, 1);
			func_78(uParam0);
		}
	}
}

bool func_347(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_612(uParam0, iVar0);
		iVar0++;
	}
	if (uParam0->f_3563.f_112 == 0)
	{
		uParam0->f_3563.f_112 = _get_system_time();
		uParam0->f_3563.f_113 = 45000;
	}
	else if ((_get_system_time() - uParam0->f_3563.f_112) > uParam0->f_3563.f_113)
	{
		return true;
	}
	if (func_79(uParam0, 16))
	{
		return true;
	}
	if (!func_590(uParam0))
	{
		return true;
	}
	return false;
}

bool func_348(var uParam0)
{
	if (!func_79(uParam0, 16))
	{
		if (uParam0->f_3563.f_115 == 0)
		{
			uParam0->f_3563.f_115 = _get_system_time();
		}
		else if ((_get_system_time() - uParam0->f_3563.f_115) > 600)
		{
			func_605(uParam0, 0);
		}
	}
	if (uParam0->f_3563.f_111 == 0 || (_get_system_time() - uParam0->f_3563.f_111) >= 100)
	{
		uParam0->f_3563.f_111 = _get_system_time();
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	bVar1 = true;
	iVar2 = 0;
	while (iVar2 <= (uParam0->f_3563.f_119 - 1))
	{
		bVar1 = (!func_613(uParam0, iVar2, bVar0) && bVar1);
		iVar2++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

void func_349(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		func_352(uParam0, uParam1, iVar0);
		iVar0++;
	}
}

bool func_350(int iParam0, int iParam1)
{
	if (network_is_player_active(iParam0) && iParam1 == 0)
	{
		return true;
	}
	return false;
}

bool func_351(var uParam0, var uParam1, var uParam2, int iParam3)
{
	fVar0 = func_614(uParam0->f_38[iParam3]->f_3, uParam2->f_66[iParam3]->f_1);
	if (fVar0 == 0f)
	{
		return false;
	}
	if (uParam0->f_38[iParam3]->f_3 == 10 && &uParam0->f_38[iParam3] >= 3)
	{
		iVar1 = &(*Global_1131196)[*uParam2]->f_10[func_112(iParam3)];
		if ((iVar1 != 255 && network_is_player_active(iVar1)) && network_is_player_a_participant(iVar1))
		{
			iVar2 = network_get_participant_index(iVar1);
			if (network_is_participant_active(iVar2) && func_16(uParam1, 32, iVar2))
			{
				return true;
			}
		}
	}
	vVar3 = { uParam0->f_38[iParam3]->f_4 };
	iVar6 = _create_volume_sphere(vVar3, 0f, 0f, 0f, fVar0, fVar0, (fVar0 * 1.5f));
	iVar7 = create_itemset(false);
	iVar9 = _0x84ccf9a12942c83d(iVar6, iVar7, 1, 1, 0, 0);
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= (iVar9 - 1))
	{
		iVar8 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar10, iVar7));
		if ((does_entity_exist(iVar8) && !is_entity_dead(iVar8)) && (is_ped_a_player(iVar8) || func_615(iVar8)))
		{
			_delete_volume(iVar6);
			destroy_itemset(iVar7);
			return true;
		}
		iVar10++;
	}
	_delete_volume(iVar6);
	destroy_itemset(iVar7);
	return false;
}

void func_352(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 >= 1 && iParam2 <= 7)
	{
		iVar2 = func_112(iParam2);
		iVar0 = func_616(&((*Global_1131196)[*uParam1]->f_10[iVar2]), iParam2, *uParam0, &iVar1, -1);
	}
	else
	{
		iVar0 = func_616(_0x4be6c13a45cca8ec(uParam1->f_2), iParam2, *uParam0, &iVar1, uParam0->f_4);
		if (iParam2 == 19)
		{
			if (uParam0->f_336 != 0)
			{
				iVar0 = uParam0->f_336;
			}
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_337 != 0)
			{
				iVar0 = uParam0->f_337;
			}
		}
	}
	if (iParam2 != -1 && (uParam0->f_38[iParam2]->f_1 != iVar0 || uParam0->f_38[iParam2]->f_2 != iVar1))
	{
		if (network_is_host_of_this_script())
		{
			func_396(uParam0, iParam2, iVar0, iVar1);
		}
		else
		{
			Var3.f_8 = *uParam1;
			Var3.f_12 = iParam2;
			Var3.f_9 = iVar0;
			Var3.f_10 = iVar1;
			func_515(8, Var3, func_514(0, 8));
		}
	}
}

bool func_353(int iParam0, int iParam1)
{
	if (network_is_player_active(iParam0) && iParam1 == 0)
	{
		return true;
	}
	return false;
}

void func_354(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&uParam0->f_38[iParam3] == 6)
	{
		func_617(uParam2, iParam3, 6);
		uParam2->f_66[iParam3]->f_4 = 0;
	}
	iVar0 = uParam2->f_66[iParam3]->f_4;
	iVar1 = uParam2->f_3731;
	switch (&uParam2->f_66[iParam3])
	{
		case 0:
			func_618(uParam0, uParam2, iParam3);
			break;
		case 1:
			func_619(uParam0, uParam1, uParam2, iParam3);
			break;
		case 2:
			func_620(uParam0, uParam1, uParam2, iParam3, iVar0);
			break;
		case 3:
			func_621(uParam0, uParam1, uParam2, iVar1);
			break;
		case 4:
			func_622(uParam0, uParam2, iParam3);
			break;
		case 6:
			func_623(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

void func_355(var uParam0)
{
	iVar0 = func_574(&(Global_1915715->f_18260[153]));
	if (does_blip_exist(iVar0))
	{
		set_blip_name_from_text_file(iVar0, "GC_LOCK_TITLE");
	}
	vVar1 = { get_entity_coords(uParam0->f_66[18]->f_3, true, false) };
	if (func_43(vVar1))
	{
		return;
	}
	fVar4 = 3f;
	if (vdist(vVar1, Global_35) <= fVar4)
	{
		if (!func_4(uParam0, 131072))
		{
			_0xa22712e8471aa08e(uParam0->f_66[18]->f_3, 1, 0);
			_0x870708a6e147a9ad(uParam0->f_66[18]->f_3, "GC_LOCK_TITLE", 2.5f, 2.5f, 132, 0, 0, 0, 0, -1);
			func_280(uParam0->f_66[18]->f_3, "GC_LOCK_TITLE", 1);
			func_44(uParam0, 131072);
		}
	}
	else if (func_4(uParam0, 131072))
	{
		_0xa22712e8471aa08e(uParam0->f_66[18]->f_3, 0, 0);
		_0xe98d55c5983f2509(uParam0->f_66[18]->f_3);
		func_69(uParam0, 131072);
	}
	if (!func_4(uParam0, 65536))
	{
		if (!_does_volume_exist(uParam0->f_406))
		{
			uParam0->f_406 = _create_volume_sphere(vVar1, 0f, 0f, 0f, 3.5f, 3.5f, 3.5f);
		}
		if (!_does_volume_exist(uParam0->f_406.f_1))
		{
			uParam0->f_406.f_1 = _create_volume_sphere(vVar1, 0f, 0f, 0f, fVar4, fVar4, fVar4);
		}
		if (_does_volume_exist(uParam0->f_406) && _does_volume_exist(uParam0->f_406.f_1))
		{
			func_625(28, uParam0->f_406, func_624(255), uParam0->f_406.f_1, 0, 1146880, 0, 0, -1082130432, 0);
			Global_1051439->f_72[28]->f_21 = uParam0->f_66[18]->f_3;
			func_626(28, 65536);
			func_626(28, 32768);
			func_626(28, 8192);
			func_44(uParam0, 65536);
		}
	}
}

void func_356(var uParam0)
{
	iVar0 = func_574(&(Global_1915715->f_18260[154]));
	if (does_blip_exist(iVar0))
	{
		set_blip_name_from_text_file(iVar0, "NET_CAMP_BUTCHER");
	}
	vVar1 = { get_entity_coords(uParam0->f_66[19]->f_3, true, false) };
	if (func_43(vVar1))
	{
		return;
	}
	fVar4 = 2.8f;
	bVar5 = false;
	iVar6 = func_628(-735397297, func_627(1), 1784584921, 1, 0, 0);
	if (_does_volume_exist(uParam0->f_408))
	{
		if (func_629(29))
		{
			if (func_4(uParam0, 67108864) == 0)
			{
				func_44(uParam0, 67108864);
				if (func_630())
				{
					func_276(606, 1);
				}
			}
			if (func_631() == -1490861779)
			{
				bVar5 = false;
			}
			else if (func_631() == 1476279059)
			{
				if (iVar6 > 50)
				{
					bVar5 = true;
				}
			}
			else if (iVar6 > 25)
			{
				bVar5 = true;
			}
			if (bVar5)
			{
				if (!func_187(607))
				{
					func_276(607, 1);
				}
			}
		}
		else if (func_4(uParam0, 67108864))
		{
			func_69(uParam0, 67108864);
		}
	}
	if (!func_4(uParam0, 33554432))
	{
		if (!_does_volume_exist(uParam0->f_408))
		{
			uParam0->f_408 = _create_volume_sphere(vVar1, 0f, 0f, 0f, fVar4, fVar4, fVar4);
		}
		if (!_does_volume_exist(uParam0->f_408.f_1))
		{
			uParam0->f_408.f_1 = _create_volume_sphere(vVar1, 0f, 0f, 0f, fVar4, fVar4, fVar4);
		}
		if (_does_volume_exist(uParam0->f_408) && _does_volume_exist(uParam0->f_408.f_1))
		{
			iVar7 = 29;
			func_625(iVar7, uParam0->f_408, func_624(255), uParam0->f_408.f_1, 0, 2, 0, 0, -1082130432, 0);
			Global_1051439->f_72[iVar7]->f_21 = uParam0->f_66[19]->f_3;
			func_626(iVar7, 65536);
			func_626(iVar7, 32768);
			func_626(iVar7, 8192);
			func_626(iVar7, 536870912);
			func_44(uParam0, 33554432);
		}
	}
}

bool func_357(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_358(int iParam0)
{
	if (!func_20((*Global_1134390)[&Global_1296859]->f_74, iParam0))
	{
		func_50(&((*Global_1134390)[&Global_1296859]->f_74), iParam0);
		Global_1134349->f_32 = (*Global_1134390)[&Global_1296859]->f_74;
	}
}

void func_359(var uParam0, var uParam1, int iParam2)
{
	if (!_does_propset_exist(&(uParam1->f_66[iParam2]->f_5[0])) || !does_entity_exist(uParam1->f_66[iParam2]->f_3))
	{
		return;
	}
	if (!_does_volume_exist(uParam1->f_605))
	{
		uParam1->f_605 = _0x0eb78c2b156635b1(665633627, uParam0->f_38[iParam2]->f_4, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
	}
	func_632(&(uParam1->f_704), &(uParam1->f_66[iParam2]->f_3));
	if (func_322(64))
	{
		iVar0 = _0x901e0dc25080c8b9(player_id());
		if (!does_blip_exist(uParam1->f_17))
		{
			if (iVar0 == uParam1->f_2)
			{
				uParam1->f_17 = _blip_add_for_coord(-336063235, uParam0->f_38[iParam2]->f_4);
				set_blip_name_from_text_file(uParam1->f_17, "NET_CAMP_BLIP_CAMPFIRE");
				_blip_set_modifier(uParam1->f_17, -211388321);
				_blip_set_modifier(uParam1->f_17, -1025871137);
			}
		}
		else if (iVar0 != uParam1->f_2)
		{
			remove_blip(&(uParam1->f_17));
		}
		func_633(uParam0, uParam1, iParam2);
	}
}

bool func_360(var uParam0)
{
	if (_0x901e0dc25080c8b9(player_id()) != uParam0->f_2)
	{
		if (does_blip_exist(uParam0->f_55.f_3))
		{
			remove_blip(&(uParam0->f_55.f_3));
		}
		return false;
	}
	if (func_363(uParam0->f_3) == 0)
	{
		if (does_blip_exist(uParam0->f_55.f_3))
		{
			remove_blip(&(uParam0->f_55.f_3));
		}
		return false;
	}
	if (!does_entity_exist(uParam0->f_55.f_2))
	{
		if (does_blip_exist(uParam0->f_55.f_3))
		{
			remove_blip(&(uParam0->f_55.f_3));
		}
		return false;
	}
	if (func_634(0, 0, 1) && !func_635())
	{
		if (does_blip_exist(uParam0->f_55.f_3))
		{
			remove_blip(&(uParam0->f_55.f_3));
		}
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		if (uParam0->f_55.f_5 >= 2 && _get_scenario_point_type_ped_is_using(Global_34) == 1049986774)
		{
			return true;
		}
		return false;
	}
	if (_is_ped_carrying(Global_34))
	{
		return false;
	}
	if (func_636(Global_34))
	{
		return false;
	}
	if (_is_ped_lassoed(Global_34))
	{
		return false;
	}
	if (is_ped_ragdoll(Global_34))
	{
		return false;
	}
	if (!_0x2d19bc4df626cbe7(Global_34, 599184882, 1315491516, 1))
	{
		return false;
	}
	return true;
}

float func_361(int iParam0, int iParam1, bool bParam2)
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
	return func_637(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_362(bool bParam0, bool bParam1)
{
	*bParam0 = (*bParam0 || bParam1);
}

int func_363(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_28.f_1;
}

int func_364(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
	while (iVar0 < 60)
	{
		if (func_558(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1951255)[iVar0]->f_11 && iParam1 == (*Global_1951255)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1951255[iVar0])
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
				func_560(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_365(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2));
}

void func_366(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

void func_367(var uParam0)
{
	bVar0 = false;
	if (_does_propset_exist(&(uParam0->f_66[21]->f_5[0])))
	{
		iVar2 = &uParam0->f_66[21]->f_5[0];
		iVar3 = create_itemset(true);
		iVar4 = create_itemset(true);
		_0x0d322aef8878b8fe(iVar2, iVar3);
		iVar6 = 0;
		while (iVar6 < get_itemset_size(iVar3))
		{
			iVar7 = get_indexed_scenario_point_index_in_itemset(iVar6, iVar3);
			if (_does_scenario_point_exist(iVar7))
			{
				if (_get_scenario_point_type(iVar7) != 1049986774)
				{
				}
				else if (_get_ped_using_scenario_point(iVar7) != 0)
				{
				}
				else
				{
					_0x20a4bf0e09bee146(iVar4);
					if (func_638(&iVar4, _get_scenario_point_coords(iVar7, true), 1065353216))
					{
					}
					else
					{
						fVar8 = func_637(Global_35, _get_scenario_point_coords(iVar7, true));
						if ((fVar8 < fVar5 || !_does_scenario_point_exist(iVar1)) && fVar8 < 1f)
						{
							iVar1 = iVar7;
							fVar5 = fVar8;
						}
					}
				}
			}
			iVar6++;
		}
		if (_does_scenario_point_exist(iVar1))
		{
			bVar0 = true;
		}
		destroy_itemset(iVar3);
		destroy_itemset(iVar4);
	}
	if (bVar0)
	{
		_task_use_scenario_point(Global_34, iVar1, 0, 0, true, false, 0, false, -1f, false);
	}
	else
	{
		task_start_scenario_at_position(Global_34, 1049986774, Global_35, func_639(Global_34, uParam0->f_55.f_2, 1), 0, true, false, 0, -1f, false);
	}
}

bool func_368(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1939493)[iVar0]->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_369(var uParam0)
{
	iVar0 = uParam0->f_403;
	if (iVar0 == -1 || uParam0->f_66[iVar0]->f_1 == 0)
	{
		return false;
	}
	return true;
}

int func_370(var uParam0, var uParam1, var uParam2)
{
	if (func_640(uParam2) || func_322(16384))
	{
		func_323(16384);
		func_100(uParam2, uParam1);
		return 0;
	}
	if (func_4(uParam2, 268435456))
	{
		return 1;
	}
	if (!func_332(2073294138, 1))
	{
		return 0;
	}
	(*uParam1)[uParam2->f_1]->f_33 = 2073294138;
	func_44(uParam2, 268435456);
	return 1;
}

bool func_371(var uParam0, var uParam1, var uParam2)
{
	if (uParam2->f_410.f_28)
	{
		return true;
	}
	if (!func_4(uParam2, 268435456))
	{
		return false;
	}
	if (!func_463(uParam0, &uVar0))
	{
		return false;
	}
	if (func_43((*uParam1)[uParam2->f_1]->f_34))
	{
		func_641(uParam2, uParam1);
		return false;
	}
	uParam2->f_410.f_7 = { (*uParam1)[uParam2->f_1]->f_34 };
	uParam2->f_410.f_10 = (*uParam1)[uParam2->f_1]->f_34.f_3;
	vVar1 = { func_377(uParam0, uParam2) };
	vVar4 = { func_642() };
	vVar7 = { _get_object_offset_from_coords(uParam2->f_410.f_7, uParam2->f_410.f_10, vVar4) };
	uParam2->f_410 = { vVar1 };
	uParam2->f_410.f_3 = { vVar7 };
	uParam2->f_410.f_6 = (uParam2->f_410.f_10 - 180f);
	uParam2->f_410.f_11 = { vVar1 };
	uParam2->f_410.f_14 = (uParam0->f_38[uParam2->f_403]->f_7 - 180f);
	uParam2->f_410.f_28 = 1;
	return true;
}

bool func_372()
{
	return (((!func_643(Global_34) && !_is_ped_carrying(Global_34)) && !func_164(Global_34)) && !func_279());
}

void func_373(var uParam0, var uParam1)
{
	if (!is_bit_set(uParam1->f_740.f_2506.f_17, 0))
	{
		vVar0 = { uParam0->f_38[uParam1->f_403]->f_4 };
		fVar3 = uParam0->f_38[uParam1->f_403]->f_7;
		vVar4 = { func_377(uParam0, uParam1) };
		vVar7 = { func_644(uParam1, uParam1->f_66[uParam1->f_403]->f_1) };
		vVar10 = { _get_object_offset_from_coords(vVar0, fVar3, vVar7) };
		func_585(&vVar10, 0.5f);
		Var13 = Global_34;
		Var13.f_1 = -1151073879;
		Var13.f_15 = 1;
		Var13.f_2 = { vVar4 };
		Var13.f_5 = 1.6f;
		Var13.f_6 = { vVar10 };
		Var13.f_9 = (fVar3 + 180f);
		Var13.f_10 = { vVar10 };
		Var13.f_13 = (fVar3 + 180f);
		Var13.f_14 = 180f;
		func_645(&Var13, &(uParam1->f_740.f_2506), 1);
		set_bit(&(uParam1->f_740.f_2506.f_17), 0);
	}
}

bool func_374(int iParam0)
{
	if ((((func_646(iParam0) || func_647(iParam0)) || func_648(iParam0)) || func_649(iParam0)) || func_650(iParam0))
	{
		return true;
	}
	return false;
}

void func_375(var uParam0, var uParam1, var uParam2)
{
	if (!func_651(uParam0, uParam2) || func_643(Global_34))
	{
		if (func_16(uParam1, 32, uParam2->f_1))
		{
			func_277(uParam1, 32, uParam2->f_1);
		}
		func_37(uParam2);
		return;
	}
	if (!is_bit_set(uParam2->f_740.f_2506.f_17, 0))
	{
		func_373(uParam0, uParam2);
	}
	else
	{
		if (!is_bit_set(uParam2->f_740.f_2506.f_17, 5))
		{
			uParam2->f_740.f_2506.f_24 = { Global_35 - Vector(1f, 0f, 0f) };
		}
		func_652(&(uParam2->f_740), 0);
		if (func_181(uParam2->f_740.f_2506.f_4))
		{
			func_366(uParam2->f_740.f_2506.f_4, 1532743427, 0, 1);
		}
	}
	if (func_259())
	{
		if (!func_16(uParam1, 32, uParam2->f_1))
		{
			func_17(uParam1, 32, uParam2->f_1);
		}
	}
	else if (func_16(uParam1, 32, uParam2->f_1))
	{
		func_277(uParam1, 32, uParam2->f_1);
	}
}

void func_376(var uParam0, var uParam1)
{
	if (((((network_is_player_active(player_id()) && _0x9be7dcb22d32ccbe(uParam1->f_2, player_id())) && func_4(uParam1, 268435456)) && !func_259()) && !is_ped_active_in_scenario(Global_34, 1)) && uParam1->f_403 != -1)
	{
		func_653(uParam0, uParam1);
	}
	else
	{
		func_99(uParam0, uParam1);
	}
}

Vector3 func_377(var uParam0, var uParam1)
{
	vVar0 = { func_644(uParam1, uParam1->f_66[uParam1->f_403]->f_1) };
	vVar3 = { _get_object_offset_from_coords(uParam0->f_38[uParam1->f_403]->f_4, uParam0->f_38[uParam1->f_403]->f_7, vVar0) };
	func_585(&vVar3, 0.5f);
	return vVar3;
}

bool func_378(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_379(var uParam0)
{
	return func_4(uParam0, 536870912);
}

bool func_380(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_381(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return func_20((*Global_1131196)[iParam0]->f_7, iParam1);
}

bool func_382()
{
	iVar0 = func_581(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_20((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_383(int iParam0)
{
	return func_654(iParam0, 33554432);
}

bool func_384()
{
	bVar0 = (((Global_1132288->f_2019 == 2 || (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 11)) || Global_1132288->f_2019 == 12) || (Global_1132288->f_2019 >= 13 && Global_1132288->f_2019 <= 19));
	return bVar0;
}

void func_385(int iParam0, bool bParam1)
{
	if (!func_655(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0x9b4e793b1cb6550a();
		func_656(iParam0, 33554432);
	}
	else
	{
		_0x9b4e793b1cb6550a();
		func_657(iParam0, 33554432);
	}
	func_658(iParam0);
}

int func_386(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_8;
}

int func_387(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_9;
}

int func_388(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_659(func_274(0)) && func_660(func_274(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_661(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_662(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_20(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_663(iParam0, 1);
	if (!bVar0)
	{
		if (func_664(iParam0, bParam1))
		{
			return func_662(iParam0);
		}
		else if (func_665(iParam0, bParam1))
		{
			if (func_666(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_661(iParam0);
	}
	else if (func_664(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_668(func_667(func_274(0)), 1) == 395262693)
		{
			return func_662(iParam0);
		}
		else
		{
			return func_662(iParam0);
		}
	}
	else if (func_665(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_389(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_669(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_390(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_7;
}

int func_391(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612:
			switch (bParam1)
			{
				case -811830793:
					return 159;
				case 1421598733:
					return 175;
				case -1281008453:
					return 183;
				case 1081855422:
					return 167;
				case -805084272:
					return 191;
				case 1429053594:
					return 199;
				case 1802123763:
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			break;
		case 226275223:
			switch (bParam1)
			{
				case -811830793:
					return 160;
				case 1421598733:
					return 176;
				case -1281008453:
					return 184;
				case 1081855422:
					return 168;
				case -805084272:
					return 192;
				case 1429053594:
					return 200;
				case 1802123763:
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			break;
		case -2146415538:
			switch (bParam1)
			{
				case -811830793:
					return 161;
				case 1421598733:
					return 177;
				case -1281008453:
					return 185;
				case 1081855422:
					return 169;
				case -805084272:
					return 193;
				case 1429053594:
					return 201;
				case 1802123763:
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			break;
		case -892962381:
			switch (bParam1)
			{
				case -811830793:
					return 162;
				case 1421598733:
					return 178;
				case -1281008453:
					return 186;
				case 1081855422:
					return 170;
				case -805084272:
					return 194;
				case 1429053594:
					return 202;
				case 1802123763:
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			break;
		case -1740150840:
			switch (bParam1)
			{
				case -811830793:
					return 163;
				case 1421598733:
					return 179;
				case -1281008453:
					return 187;
				case 1081855422:
					return 171;
				case -805084272:
					return 195;
				case 1429053594:
					return 203;
				case 1802123763:
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			break;
		case -332466661:
			switch (bParam1)
			{
				case -811830793:
					return 164;
				case 1421598733:
					return 180;
				case -1281008453:
					return 188;
				case 1081855422:
					return 172;
				case -805084272:
					return 196;
				case 1429053594:
					return 204;
				case 1802123763:
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			break;
		case -847503328:
			switch (bParam1)
			{
				case -811830793:
					return 165;
				case 1421598733:
					return 181;
				case -1281008453:
					return 189;
				case 1081855422:
					return 173;
				case -805084272:
					return 197;
				case 1429053594:
					return 205;
				case 1802123763:
					return 157;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			break;
	}
	switch (iParam3)
	{
		case 11:
			return 21;
		case 12:
			return 3;
		case 10:
			return 31;
		case 9:
			return 40;
		case 8:
			return 56;
		default:
			break;
	}
	switch (bParam1)
	{
		case -1411330704:
			return 60;
		case -428390721:
			return 61;
		case 2073294138:
			return 66;
		case -1490861779:
			return 62;
		case 1476279059:
			return 63;
		case 913131737:
			return 64;
		case 1642014154:
			return 65;
		case -1396511102:
			return 2;
		case -1991362080:
		case -1535250369:
		case 914789466:
			return 67;
		case 55994234:
		case 262209551:
		case 769866899:
			return 68;
		case -429885089:
		case -289273358:
		case 536669287:
			return 69;
		case 2139966690:
			return 70;
		case 952368108:
			return 71;
		case 1671341100:
			return 72;
		case -1336962048:
			return 73;
		case 1262519305:
			return 74;
		case -510449329:
			return 75;
		case -474096794:
			return 76;
		case 2022645972:
			return 77;
		case -1867469444:
			return 78;
		case 81790578:
			return 79;
		case 42875037:
			return 80;
		case 1321477211:
			return 81;
		case -1970354802:
			return 82;
		case 1915847437:
			return 83;
		case -418668047:
			return 84;
		case -1490747347:
			return 85;
		case 1853960588:
			return 86;
		case -669648504:
			return 87;
		case 2121739823:
			return 88;
		case -801482238:
			return 89;
		case -1535222926:
			return 90;
		case 1101681612:
			return 91;
		case 1687066518:
			return 92;
		case 846374071:
			return 93;
		case 1173221821:
			return 94;
		case -872063735:
			return 95;
		case 1659150076:
			return 96;
		case 495709860:
			return 97;
		case -1981287626:
			return 98;
		case -373605683:
			return 99;
		case -1030438211:
			return 100;
		case -1413081099:
			return 101;
		case -1291835985:
			return 102;
		case 1051756150:
			return 103;
		case -1568446057:
			return 104;
		case 271439292:
			return 105;
		case -132276375:
			return 106;
		case -908539768:
			return 107;
		case 1092029674:
			return 108;
		case -1958953278:
			return 109;
		case 733303292:
			return 110;
		case -144166169:
			return 111;
		case -492687949:
			return 112;
		case -874512337:
			return 113;
		case -415385882:
			return 114;
		case -797537960:
			return 115;
		case -941076000:
			return 120;
		case -1567174399:
			return 121;
		case -763924656:
			return 122;
		case 1928558912:
			return 123;
		case 524939438:
			return 124;
		case -1949362405:
			return 125;
		case 908640876:
			return 126;
		case 501275986:
			return 127;
		case 1257532163:
			return 128;
		case 1160088249:
			return 129;
		case -267422042:
			return 130;
		case 800085008:
			return 131;
		case 738479284:
			return 132;
		case 900620296:
			return 133;
		case 1054660175:
			return 116;
		case -2043878162:
			return 117;
		case 594616184:
			return 118;
		case -92189287:
			return 119;
		case -811830793:
			return 158;
		case 1421598733:
			return 174;
		case -1281008453:
			return 182;
		case 1081855422:
			return 166;
		case -805084272:
			return 190;
		case 1429053594:
			return 198;
		case 1802123763:
			return 150;
		default:
			break;
	}
	return 0;
}

void func_392(var uParam0)
{
	if (!func_4(uParam0, 2048))
	{
		vVar0 = { _get_scenario_point_coords(uParam0->f_63, true) };
		if (!func_43(vVar0))
		{
			if (!_does_volume_exist(uParam0->f_440))
			{
				uParam0->f_440 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 2.2f, 2.2f, 2.2f);
			}
			if (!_does_volume_exist(uParam0->f_440.f_1))
			{
				uParam0->f_440.f_1 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 2f, 2f, 2f);
			}
			if (_does_volume_exist(uParam0->f_440) && _does_volume_exist(uParam0->f_440.f_1))
			{
				func_625(27, uParam0->f_440, func_624(255), uParam0->f_440.f_1, 0, 8210, 0, 0, -1082130432, 0);
				func_626(27, 16384);
				func_626(27, 32768);
				func_626(27, 8192);
				func_44(uParam0, 2048);
				func_44(uParam0, 2);
			}
		}
	}
}

bool func_393(int iParam0, int iParam1)
{
	if (!func_670(iParam0))
	{
		return false;
	}
	return (Global_1051439->f_3073[iParam0] && iParam1) != 0;
}

void func_394(int iParam0, int iParam1)
{
	if (!func_670(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (Global_1051439->f_3073[iParam0] || iParam1);
}

void func_395(int iParam0, int iParam1)
{
	if (!func_670(iParam0))
	{
		return;
	}
	Global_1051439->f_3073[iParam0] = (&Global_1051439->f_3073[iParam0] - (Global_1051439->f_3073[iParam0] && iParam1));
}

void func_396(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 != -1 && (uParam0->f_38[iParam1]->f_1 != iParam2 || uParam0->f_38[iParam1]->f_2 != iParam3))
	{
		uParam0->f_38[iParam1]->f_2 = iParam3;
		if (iParam1 == 19)
		{
			if (uParam0->f_336 != iParam2)
			{
				uParam0->f_336 = iParam2;
			}
		}
		else if (iParam1 == 20)
		{
			if (uParam0->f_337 != iParam2)
			{
				uParam0->f_337 = iParam2;
			}
		}
		if (uParam0->f_38[iParam1]->f_1 == 0)
		{
			uParam0->f_38[iParam1]->f_1 = iParam2;
			if (&uParam0->f_38[iParam1] != 0)
			{
				func_671(uParam0, iParam1, 1);
			}
		}
		else
		{
			uParam0->f_38[iParam1]->f_1 = iParam2;
			func_671(uParam0, iParam1, 5);
		}
	}
}

Vector3 func_397(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return (*Global_1131196)[iParam0]->f_20;
}

void func_398(var uParam0, int iParam1)
{
	func_50(&(uParam0->f_5), iParam1);
}

void func_399(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_400(var uParam0, var uParam1)
{
	if (!func_46(*uParam1))
	{
		return;
	}
	iVar0 = func_672(*uParam1);
	if (iVar0 != uParam0->f_4)
	{
		if (_0xd6f6acf4392187fb(uParam1->f_2) && _0x0f99f6436528a089(uParam1->f_2))
		{
			iVar1 = _0x149a2751ab66ac02(uParam1->f_2);
			iVar3 = 0;
			while (iVar3 <= 6)
			{
				if (&(*Global_1131196)[*uParam1]->f_10[iVar3] != 255 && network_is_player_active(&((*Global_1131196)[*uParam1]->f_10[iVar3])))
				{
					iVar2++;
				}
				iVar3++;
			}
		}
		if (iVar2 == iVar1 && iVar1 > 0)
		{
			uParam0->f_4 = iVar0;
		}
	}
}

bool func_401(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)) && (func_16(uParam0, 1, iVar0) || func_16(uParam0, 2, iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_402(var uParam0, int iParam1)
{
	func_106(&(uParam0->f_5), iParam1);
}

void func_403(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_673(uParam0, uParam1, iParam3);
	switch (uParam0->f_9[iParam3]->f_1)
	{
		case 0:
			func_674(uParam0, uParam1, uParam2, iParam3);
			break;
		case 1:
			func_675(uParam0, uParam2, iParam3);
			break;
		case 2:
			func_676(uParam0, uParam2, iParam3);
			break;
		case 3:
			func_677(uParam0, iParam3);
			break;
		case 4:
			func_678(uParam0, uParam2, iParam3);
			break;
		case 5:
			func_679(uParam0, uParam2, iParam3);
			break;
		case 6:
			func_680(uParam0, uParam2, iParam3);
			break;
		case 7:
			func_681(uParam0, iParam3);
			break;
		case 8:
			func_681(uParam0, iParam3);
			break;
	}
}

bool func_404()
{
	if (!func_682())
	{
		return false;
	}
	return func_20(Global_1901947->f_44.f_5, 128);
}

bool func_405(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

bool func_406(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = func_683((*Global_1137457)[iParam0], 0);
	return iVar0;
}

bool func_407(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = func_683((*Global_1137457)[iParam0], 1);
	return iVar0;
}

int func_408(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_3;
}

void func_409(var uParam0, int iParam1)
{
	uParam0->f_291 = iParam1;
}

void func_410(var uParam0, var uParam1, var uParam2)
{
	if (func_252(uParam0, 4) || func_252(uParam0, 16))
	{
		return;
	}
	if (!func_252(uParam0, 16384) && !func_415(uParam2->f_3))
	{
		if (network_is_player_active(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
		{
			iVar0 = network_get_participant_index(uParam2->f_3);
			if ((iVar0 >= 0 && iVar0 < 32) && func_16(uParam1, 1024, iVar0))
			{
				func_409(uParam0, 23);
				return;
			}
		}
	}
	if (!func_252(uParam0, 32768))
	{
		if (network_is_player_active(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
		{
			iVar0 = network_get_participant_index(uParam2->f_3);
			if ((iVar0 >= 0 && iVar0 < 32) && func_413(131072, iVar0))
			{
				func_409(uParam0, 24);
				if (func_416(&(uParam0->f_291.f_1)))
				{
					func_422(&(uParam0->f_291.f_1));
				}
				uParam0->f_291.f_4 = 12000;
				return;
			}
		}
	}
	if (!func_252(uParam0, 65536) && !func_252(uParam0, 131072))
	{
		if (network_is_player_active(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
		{
			iVar0 = network_get_participant_index(uParam2->f_3);
			if (((iVar0 >= 0 && iVar0 < 32) && func_16(uParam1, 2048, iVar0)) && func_16(uParam1, 64, iVar0))
			{
				func_409(uParam0, 25);
				func_398(uParam0, 64);
				return;
			}
		}
	}
	if (!func_684(*uParam2))
	{
		if (func_413(32768, uParam2->f_3) || func_413(65536, uParam2->f_3))
		{
			if (!func_252(uParam0, 2048))
			{
				iVar1 = func_685(2132950130);
				if (iVar1 != -1)
				{
					iVar2 = func_686(iVar1);
					iVar3 = func_687(iVar2);
					if (iVar3 == -1562099170)
					{
						uParam0->f_291.f_4 = get_random_int_in_range(40000, 60000);
						func_422(&(uParam0->f_291.f_1));
						func_409(uParam0, 19);
						return;
					}
					else if (iVar3 == -1318406457)
					{
						uParam0->f_291.f_4 = get_random_int_in_range(40000, 60000);
						func_422(&(uParam0->f_291.f_1));
						func_409(uParam0, 20);
						return;
					}
				}
			}
		}
		else if (func_252(uParam0, 2048))
		{
			func_402(uParam0, 2048);
		}
	}
	if (!func_416(&(uParam0->f_291.f_1)))
	{
		uParam0->f_291.f_4 = get_random_int_in_range(60000, 600000);
		func_688(&(uParam0->f_291.f_1), 0);
	}
	else if (func_418(&(uParam0->f_291.f_1)) > uParam0->f_291.f_4)
	{
		if (!func_404())
		{
			if (!func_252(uParam0, 32) && uParam0->f_291.f_5 >= 0)
			{
				if ((network_is_player_active(uParam2->f_3) && func_406(uParam2->f_3)) && !func_407(uParam2->f_3))
				{
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 8;
					uParam0->f_291.f_5++;
					func_398(uParam0, 32);
				}
			}
		}
		if (!func_252(uParam0, 262144) && uParam0->f_291.f_5 >= 0)
		{
			if (network_is_player_active(uParam2->f_3) && network_is_player_a_participant(uParam2->f_3))
			{
				iVar0 = network_get_participant_index(uParam2->f_3);
				if ((iVar0 >= 0 && iVar0 < 32) && func_413(262144, iVar0))
				{
					uParam0->f_291.f_6[uParam0->f_291.f_5] = 32;
					uParam0->f_291.f_5++;
					func_398(uParam0, 262144);
				}
			}
		}
		if (uParam0->f_291.f_5 <= 0)
		{
			func_422(&(uParam0->f_291.f_1));
			return;
		}
		iVar4 = get_random_int_in_range(0, uParam0->f_291.f_5);
		if (network_does_network_id_exist(&(uParam0->f_9[0])) && !is_entity_dead(net_to_ped(&(uParam0->f_9[0]))))
		{
			func_409(uParam0, func_689(&(uParam0->f_291.f_6[iVar4])));
		}
	}
	else
	{
		if (uParam2->f_3744 < 30)
		{
			uParam2->f_3744++;
			return;
		}
		else
		{
			uParam2->f_3744 = 0;
		}
		if (!func_252(uParam0, 4096))
		{
			if ((network_is_player_active(uParam2->f_3) && func_690(uParam2->f_3, 1, 0, 1)) && func_691(uParam2->f_3) > 1)
			{
				if (vdist(func_414(uParam2->f_3), uParam0->f_6) < 35f)
				{
					func_409(uParam0, 21);
					return;
				}
			}
		}
		if (!func_252(uParam0, 64))
		{
			if (func_692(uParam1, 64, &uVar5))
			{
				func_409(uParam0, func_689(30));
				return;
			}
		}
		if (!func_252(uParam0, 128))
		{
			if (func_692(uParam1, 128, &uVar5))
			{
				func_409(uParam0, func_689(1));
				return;
			}
		}
		if (!func_252(uParam0, 256))
		{
			if (func_692(uParam1, 256, &uVar5))
			{
				func_409(uParam0, func_689(3));
				return;
			}
		}
		if (!func_252(uParam0, 524288))
		{
			if (func_692(uParam1, 64, &uVar5) && func_693())
			{
				func_409(uParam0, func_689(36));
				return;
			}
		}
	}
}

void func_411(var uParam0, int iParam1, bool bParam2)
{
	Var0.f_8 = uParam0;
	Var0.f_9 = iParam1;
	if (bParam2)
	{
		Var0.f_10 = 1;
	}
	func_515(18, Var0, func_514(0, 8));
}

void func_412(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_291.f_5 - 1))
	{
		if (&uParam0->f_291.f_6[iVar0] == iParam1)
		{
			iVar1 = iVar0;
			while (iVar1 <= (uParam0->f_291.f_5 - 1))
			{
				uParam0->f_291.f_6[iVar1] = &uParam0->f_291.f_6[iVar1 + 1];
				iVar1++;
			}
		}
		iVar0++;
	}
	uParam0->f_291.f_5 = (uParam0->f_291.f_5 - 1);
}

bool func_413(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return func_20((*Global_1134390)[iParam1]->f_73, iParam0);
}

Vector3 func_414(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_415(int iParam0)
{
	return (network_is_player_active(iParam0) && func_72(iParam0, 1));
}

bool func_416(var uParam0)
{
	return func_694(*uParam0, 1);
}

void func_417(var uParam0)
{
	func_695(uParam0, 0);
}

int func_418(var uParam0)
{
	if (!func_416(uParam0))
	{
		return 0;
	}
	if (func_696(uParam0))
	{
		return uParam0->f_2;
	}
	return func_697(uParam0->f_1);
}

bool func_419(var uParam0, var uParam1)
{
	if (func_684(*uParam1))
	{
		return false;
	}
	if (network_is_player_active(uParam1->f_3))
	{
		iVar0 = get_player_ped(uParam1->f_3);
		if (!does_entity_exist(iVar0) || vdist(get_entity_coords(iVar0, true, false), uParam0->f_6) > 40f)
		{
			return false;
		}
	}
	if (!func_416(&(uParam0->f_291.f_1)))
	{
		func_688(&(uParam0->f_291.f_1), 0);
		return false;
	}
	else if (func_418(&(uParam0->f_291.f_1)) < uParam0->f_291.f_4)
	{
		return false;
	}
	return true;
}

int func_420(int iParam0)
{
	Var0 = { func_699(829565093, func_698(iParam0)) };
	return func_700(Var0);
}

var func_421(int iParam0)
{
	Var0 = { func_699(741274143, func_698(iParam0)) };
	return func_701(Var0, -1);
}

void func_422(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_423(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	switch (&uParam0->f_38[iParam3])
	{
		case 0:
			func_702(uParam0, uParam2, iParam3);
			break;
		case 1:
			func_703(uParam0, iParam3);
			break;
		case 2:
			if (func_704(uParam0, uParam2, iParam3))
			{
				iVar0 = 1;
			}
			break;
		case 3:
			func_705(uParam0, uParam1, uParam2, iParam3);
			break;
		case 5:
			func_706(uParam0, uParam1, uParam2, iParam3);
			break;
		case 6:
			func_707(uParam0, uParam1, iParam3);
			break;
	}
	func_708(uParam0, uParam1, uParam2);
	return iVar0;
}

void func_424(var uParam0)
{
	Var0.f_8 = uParam0;
	func_515(0, Var0, func_514(0, 8));
}

bool func_425(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_426(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		if (does_entity_exist(iParam1) && !is_entity_dead(iParam1))
		{
			if (is_ped_in_vehicle(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_427(int iParam0)
{
	if (func_709(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_428()
{
	return true;
}

int func_429(int iParam0)
{
	return iParam0;
}

void func_430(int iParam0)
{
	if (!func_710(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1951255)[iParam0]->f_3);
	}
	(*Global_1951255)[iParam0]->f_4 = 0;
	(*Global_1951255)[iParam0] = 1;
	(*Global_1951255)[iParam0]->f_16 = 0;
	(*Global_1951255)[iParam0]->f_1 = 0;
	(*Global_1951255)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_9 = 0f;
	(*Global_1951255)[iParam0]->f_10 = 0;
	(*Global_1951255)[iParam0]->f_11 = 0;
	(*Global_1951255)[iParam0]->f_2 = 1;
	(*Global_1951255)[iParam0]->f_15 = -1f;
}

bool func_431(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

void func_432(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_181(&(uParam0->f_135[iVar0])))
		{
			func_182(uParam0->f_135[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_433(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]))
		{
			_delete_scenario_point(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_434(var uParam0)
{
}

void func_435(var uParam0)
{
	func_182(&(uParam0->f_146), 1, 1);
	func_182(&(uParam0->f_145), 1, 1);
}

void func_436(var uParam0)
{
	uParam0->f_128 = 0;
	uParam0->f_129 = -1;
	uParam0->f_130 = 0;
	uParam0->f_131 = -1;
	uParam0->f_132 = 0;
	uParam0->f_127 = 0;
}

void func_437(bool bParam0, bool bParam1, bool bParam2)
{
	func_711(bParam0);
	if (bParam2)
	{
		func_712(bParam0, 0);
		_databinding_remove_data_entry(bParam0->f_28);
	}
	if (func_713())
	{
		func_714(0);
	}
	if (bParam1)
	{
		func_715(bParam0);
		return;
	}
	if (_does_text_database_exist(&(bParam0->f_20)))
	{
		_text_database_delete(&(bParam0->f_20));
	}
	if (_does_anim_scene_exist(bParam0->f_48))
	{
		_delete_anim_scene(bParam0->f_48);
	}
	if (_does_anim_scene_exist(bParam0->f_49))
	{
		_delete_anim_scene(bParam0->f_49);
	}
	if (_does_anim_scene_exist(bParam0->f_50))
	{
		_delete_anim_scene(bParam0->f_50);
	}
	if (_does_anim_scene_exist(bParam0->f_51))
	{
		_delete_anim_scene(bParam0->f_51);
	}
	if (_does_anim_scene_exist(bParam0->f_52))
	{
		_delete_anim_scene(bParam0->f_52);
	}
	if (_does_anim_scene_exist(bParam0->f_53))
	{
		_delete_anim_scene(bParam0->f_53);
	}
	if (_does_anim_scene_exist(bParam0->f_54))
	{
		_delete_anim_scene(bParam0->f_54);
	}
	if (_does_anim_scene_exist(bParam0->f_55))
	{
		_delete_anim_scene(bParam0->f_55);
	}
	if (_does_anim_scene_exist(bParam0->f_56))
	{
		_delete_anim_scene(bParam0->f_56);
	}
	func_716(&(bParam0->f_63), &(bParam0->f_64));
	func_716(&(bParam0->f_65), &(bParam0->f_66));
	func_716(&(bParam0->f_67), &(bParam0->f_68));
	set_streamed_texture_dict_as_no_longer_needed("satchel_textures");
	Global_1913694->f_1576 = 0;
	if (func_717(bParam0, 2))
	{
		clear_ped_tasks(Global_34, 1, 0);
	}
	if (func_41() == -1)
	{
		func_718(bParam0, 18);
	}
	else
	{
		if (bParam0->f_10 == 11)
		{
			if (bParam0->f_23 == -1)
			{
				func_595(bParam0->f_61, bParam0->f_62, 1, bParam0->f_11);
				func_719(bParam0->f_61, bParam0->f_22);
			}
		}
		if (!func_569(0) || func_566())
		{
			if (bParam0->f_27 > 0 && func_331(bParam0->f_61, 0))
			{
				bParam0->f_23 = func_595(bParam0->f_61, bParam0->f_62, bParam0->f_27, bParam0->f_11);
				if (bParam0->f_11 == 2133510819)
				{
					func_720(func_699(-1108808256, -444296448), bParam0->f_27);
				}
				bParam0->f_27 = 0;
			}
		}
		bParam0->f_23 = -1;
		func_718(bParam0, 0);
	}
}

bool func_438(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_721(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_722(iParam0))
	{
		return false;
	}
	if (func_723(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_439(iParam0, 1)) || func_724(32768))
	{
		if (!func_439(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_725())
	{
		return false;
	}
	return true;
}

bool func_439(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

void func_440(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_441(int iParam0)
{
	if (func_726(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_727(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_442(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 0)
	{
		return;
	}
	func_728(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

int func_443(var uParam0, var uParam1)
{
	if (uParam0->f_2207.f_80)
	{
		if (!_databinding_is_data_id_valid(*uParam1))
		{
			return 0;
		}
		iVar0 = _databinding_get_array_count(*uParam1);
		bVar1 = false;
		iVar2 = -1;
		bVar1 = false;
		while (bVar1 < iVar0)
		{
			iVar3 = _databinding_get_item_context_by_index(*uParam1, bVar1);
			if (_databinding_is_data_id_valid(iVar3))
			{
				bVar4 = _databinding_read_data_bool_from_parent(iVar3, func_729());
				if (bVar4)
				{
					iVar2 = _databinding_read_data_int_from_parent(iVar3, func_730());
					iVar5 = iVar2;
					if (_0x93ffd92f05ec32fd(iVar5))
					{
						_0x13e7320c762f0477(iVar5);
						_databinding_write_data_int_from_parent(iVar3, func_730(), -1);
					}
				}
			}
			bVar1++;
		}
		uParam0->f_2207.f_80 = 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_444(var uParam0, bool bParam1, int iParam2)
{
	iVar0 = func_731(uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return 0;
	}
	if (!func_732(0))
	{
		return 0;
	}
	func_202(iVar0, 1);
	func_733(iVar0, 1, bParam1, iParam2);
	return 1;
}

void func_445(var uParam0)
{
	uParam0->f_2207.f_49 = 0;
	_0xdad7fb8402651654();
}

int func_446(var uParam0)
{
	uParam0->f_2755 = 0;
	uParam0->f_2755.f_1 = 0;
	func_734(uParam0, 128);
	func_182(&(uParam0->f_2755.f_3), 1, 1);
	func_182(&(uParam0->f_2755.f_4), 1, 1);
	func_182(&(uParam0->f_2755.f_5), 1, 1);
	if (uParam0->f_3 != 3 && uParam0->f_3 != 7)
	{
		return 1;
	}
	iVar0 = uParam0->f_2207.f_107;
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return 0;
	}
	if (!uParam0->f_2207.f_46)
	{
		func_735(iVar0, uParam0->f_176.f_1857, uParam0->f_176.f_1860, 2, 1073741824);
	}
	return 1;
}

void func_447(var uParam0)
{
	if (func_181(uParam0->f_2207.f_101))
	{
		func_182(&(uParam0->f_2207.f_101), 1, 1);
	}
	func_736(0);
}

void func_448(var uParam0)
{
	if (func_181(uParam0->f_2207.f_102))
	{
		func_182(&(uParam0->f_2207.f_102), 1, 1);
	}
}

void func_449(bool bParam0)
{
	if (!_uiprompt_is_valid(Global_1915715->f_23051.f_222) && bParam0)
	{
		Global_1915715->f_23051.f_222 = _uiprompt_register_begin();
		_0xf4a5c4509bf923b1(Global_1915715->f_23051.f_222, 0);
		_uiprompt_set_text(Global_1915715->f_23051.f_222, "WARDROBE_INSPECT_PROMPT");
		_uiprompt_set_control_action(Global_1915715->f_23051.f_222, 1395223413);
		_uiprompt_set_hold_indefinitely_mode(Global_1915715->f_23051.f_222);
		_uiprompt_set_attribute(Global_1915715->f_23051.f_222, 14, 1);
		_uiprompt_register_end(Global_1915715->f_23051.f_222);
	}
	if (_uiprompt_is_valid(Global_1915715->f_23051.f_222))
	{
		if (!func_737(Global_1915715->f_23051.f_1))
		{
			_uiprompt_set_enabled(Global_1915715->f_23051.f_222, false);
			_uiprompt_set_visible(Global_1915715->f_23051.f_222, false);
		}
		else
		{
			_uiprompt_set_enabled(Global_1915715->f_23051.f_222, bParam0);
			_uiprompt_set_visible(Global_1915715->f_23051.f_222, bParam0);
		}
	}
}

void func_450()
{
	Global_1915715->f_21859 = 0;
}

void func_451(int iParam0)
{
	if (Global_1071686->f_8 == iParam0)
	{
		return;
	}
	Global_1071686->f_8 = iParam0;
}

void func_452()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

void func_453(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_738(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_738(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_739(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_738(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_739(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

void func_454(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_455(struct<4> Param0)
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
		case 23:
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_740(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_741(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_454(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_740(Param0))
			{
				return;
			}
			func_741(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_454(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_740(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_741(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_454(8);
			break;
			break;
	}
}

void func_456()
{
	Global_1952637->f_1057 = 0;
}

int func_457()
{
	return func_742(&(Global_1952637->f_1675));
}

int func_458(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 >= Global_1952637->f_3334.f_26)
	{
		return 0;
	}
	iVar0 = &Global_1952637->f_3334[iParam0];
	if (!func_331(iVar0, 0))
	{
		return 0;
	}
	return iVar0;
}

int func_459(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_460(bool bParam0)
{
	Var0.f_1 = 39;
	func_743(&Var0, 0, 1, 1, 0);
	iVar120 = func_744(bParam0);
	if (!func_745(&Var0, &uVar119, bParam0, iVar120, 1, 0, 0, 0, 8))
	{
		return -1;
	}
	return func_742(&Var0);
}

void func_461(int iParam0)
{
	Global_1904651->f_8684 = iParam0;
}

void func_462(var uParam0)
{
	if (_does_anim_scene_exist(uParam0->f_14))
	{
		if (_0x23e33cb9f4a3f547(uParam0->f_14, "PB_IDLE"))
		{
			_0xae6ada8fe7e84acc(uParam0->f_14, "PB_IDLE");
		}
		_delete_anim_scene(uParam0->f_14);
	}
	if (_does_anim_scene_exist(uParam0->f_15))
	{
		_delete_anim_scene(uParam0->f_15);
	}
}

bool func_463(var uParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 <= 6)
	{
		if (&uParam0->f_16[*iParam1] == player_id())
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = 0;
	return false;
}

bool func_464(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_465(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_466(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_467(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_468(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_469(int iParam0)
{
	iVar0 = func_217(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

int func_470(int iParam0)
{
	if (func_464(iParam0))
	{
		return (func_218(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_471(int iParam0)
{
	iVar0 = func_224(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_472(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_217(iParam1, 1);
	iVar1 = func_224(iParam0, 1);
	iVar2 = func_220(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	if (!&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_746(iVar3, 1);
		if (!func_747(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_748(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_749(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_750(iVar6))
		{
		}
		else
		{
			iVar8 = func_751(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_752(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_473(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_474(int iParam0, int iParam1)
{
	if (!func_471(iParam0))
	{
		return false;
	}
	if (!func_753(iParam1))
	{
		return false;
	}
	iVar0 = func_754(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_475(int iParam0)
{
	iVar0 = func_755(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_476(vector3 vParam0)
{
	if (!func_471(vParam0.x))
	{
		return false;
	}
	if (!func_101(vParam0.y))
	{
		return false;
	}
	if (!func_756(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_477(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_217(iParam1, 1);
	iVar1 = func_224(iParam0, 1);
	iVar2 = func_220(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	if (Global_1146212->f_35859[iVar2][iParam2] != iParam0)
	{
		return false;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2]->f_1 = Global_1296859->f_21;
	if (&Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2])
	{
		return true;
	}
	Global_1146212->f_35859.f_919[iVar0]->f_1[iParam2] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859.f_3116[iVar1]->f_16)
	{
		iVar3 = &Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4];
		iVar5 = func_746(iVar3, 1);
		if (!func_747(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_748(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_757(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_750(iVar6))
		{
		}
		else if (!func_758(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_751(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_759(iVar6);
			}
		}
		iVar7++;
	}
	func_760(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_753(iParam0))
	{
		return;
	}
	iVar0 = func_754(iParam0, 1);
	if (!func_471(iParam1))
	{
		return;
	}
	if (!func_101(iParam2))
	{
		return;
	}
	if (!func_756(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_479(int iParam0)
{
	if (!func_753(iParam0))
	{
		return;
	}
	iVar0 = func_754(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

void func_480(int iParam0, bool bParam1, bool bParam2)
{
	if (func_41() != 0)
	{
		return;
	}
	if (func_761())
	{
		return;
	}
	if (_0x0e2f43516f998269(player_ped_id()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1139381->f_3876.f_2[func_762(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_762(iParam0, 1)])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1296859->f_16 != &Global_1296859)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!network_is_player_active(&(Global_1296859->f_154[iVar8])))
		{
		}
		else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, &(Global_1296859->f_154[iVar8])))
		{
		}
		else if (&Global_1296859->f_154[iVar8] == Global_1296859->f_10)
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar7, &(Global_1296859->f_154[iVar8]));
		}
		iVar8++;
	}
	func_763(&Var0, uVar7);
}

bool func_481(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return func_765(func_764(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_482(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				if (!is_ped_in_current_conversation(&cParam0, cParam3[iVar0], 0))
				{
					add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
				}
			}
		}
		iVar0++;
	}
}

bool func_483(var uParam0, int iParam1, char* sParam2)
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

bool func_484(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

int func_485(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_486(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_485(bParam0);
	if (iVar0 == -427144552 && is_weapon_valid(bParam0))
	{
		return _get_ammo_type_for_weapon(bParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(bParam0))
	{
		return bParam0;
	}
	if (func_481(bParam0, 1399091007))
	{
		func_766(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_487(bool bParam0, bool bParam1)
{
	if (!is_weapon_valid(bParam0))
	{
		return 0;
	}
	Var0 = { func_767(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_769(&Var0, func_768(0));
	}
	if (!func_770(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_771(iVar14);
	return uVar15;
}

int func_488(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(bParam0, iParam1);
}

int func_489(bool bParam0)
{
	if (func_41() == -1)
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

struct<4> func_490(bool bParam0, bool bParam1)
{
	Var0 = { func_772(bParam0, bParam1, 0) };
	return func_773(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_491(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 22)
	{
		return false;
	}
	return true;
}

int func_492(int iParam0)
{
	if (!func_491(iParam0))
	{
		return 0;
	}
	return &(Global_1293346->f_3009[iParam0]);
}

int func_493(int iParam0, bool bParam1)
{
	if (!func_491(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_774(iParam0);
		if (func_331(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_775(255);
			}
			else
			{
				iVar1 = func_628(bVar0, func_627(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_3009[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		bVar0 = func_776(iParam0);
		if (func_331(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = _0xdb438cc9bc6f4022();
			}
			else
			{
				iVar1 = func_628(bVar0, func_627(1), -1990194462, 1, 0, 0);
			}
			Global_1293346->f_2985[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_494(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_495(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_496(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_497(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_17353[iVar0] == iParam0)
		{
			return Global_17353[Global_17374]->f_1;
		}
		iVar0++;
	}
	return 5;
}

bool func_498(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

bool func_499(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_20(Global_1071686->f_21416.f_1[iParam0]->f_7, iParam1);
}

int func_500()
{
	return Global_1102219->f_3672;
}

bool func_501(var uParam0, struct<2> Param1, var uParam3)
{
	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_777(Param1.f_1);
	if (!_0x7907969497ea92f5(uVar0) || !_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

void func_502(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_503()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_506(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_507(int iParam0)
{
	return (func_778(iParam0, 4) || func_778(iParam0, 5));
}

int func_508()
{
	return 30000;
}

bool func_509()
{
	if (func_779())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904651[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_510(bool bParam0)
{
	if (func_329())
	{
		return false;
	}
	if ((!is_screen_faded_in() || is_screen_fading_in()) || is_screen_fading_out())
	{
		return false;
	}
	if (func_518(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_509())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) // PointerArith || func_780())
	{
		return false;
	}
	if (!func_725())
	{
		return false;
	}
	if (func_279())
	{
		return false;
	}
	if (_0xf236c84c6adfcb2f())
	{
		return false;
	}
	if (is_pause_menu_active())
	{
		return false;
	}
	if ((Global_1915715->f_20638 && Global_1915715->f_20241.f_43 == 2) && Global_1940311->f_1)
	{
		return false;
	}
	if (func_781())
	{
		return false;
	}
	return true;
}

void func_511(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_181(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1951255)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1951255)[iVar0]->f_3, fParam1);
}

bool func_512(int iParam0, bool bParam1)
{
	if (bParam1 && !func_181(iParam0))
	{
		return false;
	}
	iVar0 = func_429(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

void func_513(int iParam0)
{
	func_50(&(Global_1137047->f_8), iParam0);
}

var func_514(int iParam0, int iParam1)
{
	return func_782(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_515(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!_0x179a6f0ee2e79026(&uParam15))
	{
		return;
	}
	if (!func_405(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 13, &uParam15);
}

void func_516(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_441(iParam0))
	{
		func_727(iParam0);
	}
}

void func_517(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28349), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28348), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28350), iParam0);
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_519(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

bool func_520(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_767(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_770(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_783(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_784(&Var45, &Var0, 0))
				{
					if (func_785(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_771(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_771(iVar43);
	}
	return false;
}

struct<4> func_521()
{
	return Global_1291734->f_11.f_310;
}

bool func_522()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_523(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_524(int iParam0)
{
	iVar0 = func_786(iParam0);
	bVar1 = func_788(func_787(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_525(int iParam0)
{
	return func_789(&(Global_3145858->f_6), iParam0);
}

int func_526(int iParam0, int iParam1)
{
	if (iParam1 == 0)
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
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_527()
{
	return Var0;
}

bool func_528(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_767(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_770(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_783(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_784(&Var45, &Var0, 0))
				{
					if (func_785(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_771(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_771(iVar43);
	}
	return false;
}

struct<4> func_529(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_790("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_783(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_771(iVar0);
	return Var2;
}

bool func_530()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_531(int iParam0)
{
	if (!func_791(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_532(int iParam0)
{
	if (!func_791(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_533(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_534(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_792(iVar0))
		{
			return false;
		}
	}
	func_793();
	return true;
}

bool func_535(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_792(iVar0))
		{
			return false;
		}
	}
	func_794();
	return true;
}

void func_536(bool bParam0)
{
	if (!func_519(101))
	{
		return;
	}
	if (func_519(102))
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	if (Global_1291734->f_581.f_63 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_531(102);
}

bool func_537(var uParam0)
{
	return func_694(*uParam0, 1);
}

void func_538(var uParam0, bool bParam1)
{
	if (bParam1 || !func_537(uParam0))
	{
		func_542(uParam0);
	}
}

float func_539(var uParam0)
{
	if (!func_537(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_795(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_796() - uParam0->f_1);
}

bool func_540(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = player_id();
	}
	iVar0 = _0xf49f14462f0ae27c(iParam0);
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

bool func_541(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

void func_542(var uParam0)
{
	func_797(uParam0, 0f);
}

bool func_543(var uParam0, var uParam1, var uParam2)
{
	if (!func_798(uParam2))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (network_does_network_id_exist(&(uParam0->f_9[iVar0])) && func_799(uParam1, iVar0, 4, uParam2->f_1))
		{
			return true;
		}
		iVar0++;
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar1 = int_to_participantindex(iVar4);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			if (iVar2 != player_id() && _0x9be7dcb22d32ccbe(uParam2->f_2, iVar2))
			{
				iVar3 = get_player_ped(iVar2);
				if ((does_entity_exist(iVar3) && vdist(get_entity_coords(iVar3, false, false), uParam0->f_6) < 75f) && ((has_entity_been_damaged_by_entity(iVar3, Global_34, 1, 1) || func_800(iVar3, Global_34)) || get_melee_target_for_ped(Global_34) == iVar3))
				{
					return true;
				}
			}
		}
		iVar4++;
	}
	return false;
}

void func_544(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (!func_801(iParam0, iParam1))
	{
		func_50((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

bool func_545(var uParam0)
{
	if (!func_798(uParam0))
	{
		return true;
	}
	return false;
}

void func_546(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return;
	}
	if (func_801(iParam0, iParam1))
	{
		func_106((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

bool func_547(var uParam0, int iParam1)
{
	if ((!does_entity_exist(iParam1) || is_entity_dead(iParam1)) || is_ped_a_player(iParam1))
	{
		return false;
	}
	if (is_ped_in_combat(iParam1, Global_34))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		if (network_does_network_id_exist(&(uParam0->f_9[iVar1])))
		{
			iVar0 = net_to_ped(&(uParam0->f_9[iVar1]));
			if (!is_entity_dead(iVar0) && is_ped_in_combat(iParam1, iVar0))
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_25[iParam1]->f_1 != iParam2)
	{
		uParam0->f_25[iParam1]->f_1 = iParam2;
	}
}

void func_549(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_9[iParam2]->f_1 >= 3 && uParam0->f_9[iParam2]->f_1 != 8)
	{
		func_548(uParam1, iParam2, 3);
	}
}

void func_550(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_802(uParam1, iParam3, 1, uParam2->f_1);
	if (func_799(uParam1, iParam3, 2, uParam2->f_1))
	{
		func_803(uParam1, iParam3, 2, uParam2->f_1);
	}
	if (uParam0->f_9[iParam3]->f_1 > 3)
	{
		func_548(uParam2, iParam3, 4);
	}
}

void func_551(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_799(uParam1, iParam3, 2, uParam2->f_1))
	{
		request_model(uParam0->f_9[iParam3]->f_4, false);
		if (!has_model_loaded(uParam0->f_9[iParam3]->f_4))
		{
			return;
		}
		func_802(uParam1, iParam3, 2, uParam2->f_1);
	}
	if (uParam0->f_9[iParam3]->f_1 > 4)
	{
		func_548(uParam2, iParam3, 5);
	}
}

void func_552(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_9[iParam2]->f_1 > 5)
	{
		func_548(uParam1, iParam2, uParam0->f_9[iParam2]->f_1);
	}
}

void func_553(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam0->f_9[iParam3]->f_1 > 6)
	{
		func_548(uParam2, iParam3, uParam0->f_9[iParam3]->f_1);
		return;
	}
	if (!network_does_network_id_exist(&(uParam0->f_9[iParam3])))
	{
		return;
	}
	if (iParam3 == 0)
	{
		func_804(uParam2, net_to_ped(&(uParam0->f_9[iParam3])));
		if (((((!func_799(uParam1, iParam3, 16, uParam2->f_1) && func_252(uParam0, 4)) && _0x4be6c13a45cca8ec(uParam2->f_2) == player_id()) && func_266(*uParam2, 1)) && !func_189()) && func_283())
		{
			func_276(616, 1);
			func_802(uParam1, iParam3, 16, uParam2->f_1);
		}
	}
	func_805(uParam0, uParam1, uParam2, iParam3);
	func_806(uParam0, uParam1, uParam2, iParam3);
	func_807(uParam0, uParam1, uParam2, iParam3);
}

void func_554(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_65(uParam0, uParam1, uParam2, iParam3, 0, 1);
}

void func_555(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_65(uParam0, uParam1, uParam2, iParam3, 1, 0);
}

bool func_556(var uParam0, int iParam1, int iParam2)
{
	return func_20(uParam0->f_9[iParam1]->f_5, iParam2);
}

int func_557(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	return func_567(bParam0, bParam2, 1, bParam1, 1, 0);
}

bool func_558(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_559(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_560(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
{
	(*Global_1951255)[iParam0]->f_4 = iParam1;
	(*Global_1951255)[iParam0] = iParam4;
	(*Global_1951255)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1951255)[iParam0]->f_2 = iParam5;
	(*Global_1951255)[iParam0]->f_6 = { vParam6 };
	(*Global_1951255)[iParam0]->f_9 = fParam9;
	(*Global_1951255)[iParam0]->f_10 = iParam10;
	(*Global_1951255)[iParam0]->f_11 = iParam11;
	(*Global_1951255)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1951255)[iParam0]->f_5 = iParam12;
	(*Global_1951255)[iParam0]->f_1 = 2;
	(*Global_1951255)[iParam0]->f_17 = -1;
	(*Global_1951255)[iParam0]->f_18 = iParam16;
	(*Global_1951255)[iParam0]->f_19 = iParam15;
	(*Global_1951255)[iParam0]->f_20 = bParam25;
	(*Global_1951255)[iParam0]->f_22 = 0f;
	if (bParam25)
	{
		(*Global_1951255)[iParam0]->f_21 = get_game_timer();
	}
	else
	{
		(*Global_1951255)[iParam0]->f_21 = _get_system_time();
	}
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
			_0xa3f2149aa24f3d8e(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 8:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 9:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 14:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 16:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
			break;
		case 11:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1951255)[iParam0]->f_3 = iVar0;
	func_563(iParam0, 1);
	func_564(iParam0, 1);
	func_565(iParam0, 128);
}

bool func_561(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_41() == 0)
	{
		return func_808(iParam0);
	}
	return iParam0 <= func_809();
}

void func_562(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_563(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_558(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

void func_564(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_565(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

bool func_566()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_567(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && bParam1 == -915411861) && func_810(bParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_811(bParam0))
	{
		return func_813(func_812(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_568(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

bool func_568(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(bParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(bParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_814(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_569(bool bParam0)
{
	if (func_41() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_489(bParam0));
}

bool func_570(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_488(bParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_815(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_772(bParam0, bParam4, 0) };
	Var6 = { func_773(bParam0, Var1, Var1.f_4, bParam4) };
	return func_816(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_571(bool bParam0)
{
	switch (bParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_572(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_817(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_819(func_818(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_820(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_573(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_574(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_17081)
	{
		return &(Global_17081[iParam0]);
	}
	return 0;
}

int func_575(int iParam0)
{
	switch (iParam0)
	{
		case -811830793:
			iVar0 = 1;
			break;
		case -1281008453:
			iVar0 = 2;
			break;
		case 1802123763:
			iVar0 = 3;
			break;
		case 1429053594:
			iVar0 = 4;
			break;
		case -805084272:
			iVar0 = 5;
			break;
		case 1081855422:
			iVar0 = 6;
			break;
		case 1421598733:
			iVar0 = 7;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_576(int iParam0)
{
	iVar0 = func_220(iParam0, 1);
	if (iVar0 >= 128 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_577(int iParam0)
{
	if (!func_101(iParam0))
	{
		return false;
	}
	return &Global_1146212->f_35859.f_919[func_217(iParam0, 1)] == -1;
}

bool func_578(int iParam0, int iParam1)
{
	if (!func_101(iParam0))
	{
		return false;
	}
	iVar0 = func_217(iParam0, 1);
	if (!func_219(iParam1))
	{
		return false;
	}
	iVar1 = func_220(iParam1, 1);
	if (&Global_1146212->f_35859.f_919[iVar0] == iParam1)
	{
		return true;
	}
	if (func_219(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		func_105(iParam0);
	}
	Global_1146212->f_35859.f_919[iVar0] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar1]->f_5)
	{
		iVar2 = Global_1146212->f_35859[iVar1][iVar4];
		iVar3 = func_224(iVar2, 1);
		switch (func_821(iParam0, iVar2))
		{
			case 0:
				func_822(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] = iVar2;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_1 = iParam0;
				Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]->f_2 = iVar4;
				Global_1146212->f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1146212->f_35859.f_3116[iVar3]->f_29 <= 0)
				{
					Global_1146212->f_35859.f_9302[Global_1146212->f_35859.f_9502] = iVar2;
					Global_1146212->f_35859.f_9502++;
				}
				func_225(iVar3, 1);
				iVar4++;
			}
			return true;
		}

void func_579(int iParam0, int iParam1)
{
	iVar0 = func_218(iParam0);
	Global_1146212->f_47689.f_44[iVar0]->f_1 = iParam1;
	Global_1146212->f_47689.f_44[iVar0] = iParam0;
}

float func_580(int iParam0)
{
	switch (iParam0)
	{
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 204:
			return 4.75f;
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
			return 5f;
		default:
			break;
	}
	return 3.5f;
}

int func_581(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_582(int iParam0)
{
	return func_266(iParam0, 1);
}

bool func_583(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	bVar0 = func_486(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_790("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_783(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_823(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == bVar0)
			{
				func_771(iVar1);
				return true;
			}
			iVar3++;
		}
		func_771(iVar1);
	}
	return false;
}

bool func_584(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_459(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_824(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_825(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_826(bParam0);
	iVar2 = func_825(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_585(var uParam0, float fParam1)
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

var func_586()
{
	if (!func_827(-728035156, &uVar0))
	{
		return 0;
	}
	if (!_stat_id_is_valid(&uVar0))
	{
		return 0;
	}
	stat_id_get_int(&uVar0, &iVar2);
	iVar3 = iVar2;
	if (iVar3 == 0)
	{
		return 0;
	}
	iVar4 = func_828(0, iVar3);
	if (iVar4 == -1)
	{
		return 0;
	}
	return func_829(iVar4);
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case -1963605336:
		case -1754211037:
			return 0;
		case -541762431:
		case -185975991:
			return 2;
		case -1414989025:
		case -556870915:
			return 3;
		case -389300196:
		case 2028722809:
			return 1;
	}
	return -1;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1963605336;
		case 2:
			return -541762431;
		case 3:
			return -1414989025;
		case 1:
			return 2028722809;
	}
	return 0;
}

int func_589(int iParam0)
{
	iVar3 = func_830(iParam0);
	if (!func_831(iVar3, 974042365, &uVar0))
	{
		return 0;
	}
	if (!_stat_id_is_valid(&uVar0))
	{
		return 0;
	}
	if (stat_id_get_int(&uVar0, &uVar2))
	{
		return uVar2;
	}
	return 0;
}

bool func_590(var uParam0)
{
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		if ((((is_ped_still(Global_34) && (((_0x84d0bf2b21862059(Global_34) || get_ped_config_flag(Global_34, 464, true)) || get_ped_config_flag(Global_34, 463, true)) || func_185(1))) && is_ped_active_in_scenario(Global_34, 0)) && !_is_app_active(-1624772174)) && vdist(uParam0->f_4, Global_35) < 5f)
		{
			return true;
		}
	}
	return false;
}

char* func_591(int iParam0)
{
	if (!func_331(iParam0, 0))
	{
		return "ITEM INVALID";
	}
	StringCopy(&cVar0, func_832(iParam0), 32);
	return _create_var_string(10, "SPIRIT_PROMPT_FIRST", func_833(&cVar0, 109029619));
}

int func_592()
{
	return -719620017;
}

void func_593(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, iParam1, iParam2);
}

int func_594(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_568(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_569(0)) && !func_566());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915715->f_20638)
	{
		iVar35 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_834(iVar35, &(Var0[iVar32]));
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_835(&(Var0[iVar32]), iVar36);
			}
			else
			{
				iVar37 = func_246(&(Var0[iVar32]), 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_836(&(Var0[iVar32])) || func_837(&(Var0[iVar32])))
				{
					iVar37 = (iVar37 + func_838(&(Var0[iVar32]), 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_839(7, &(Var0[iVar32]), &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_840(7, &(Var0[iVar32])) + func_841(&(Var0[iVar32]))));
				}
			}
			if (iVar37 < Var0[iVar32]->f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32]->f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_595(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_331(bParam0, 0))
	{
		return -1;
	}
	if (func_842(bParam0))
	{
		if (!func_844(func_843(bParam0), bParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_594(bParam0, bParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_772(bParam0, 1, 0) };
	if (func_845(bParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_459(bParam0);
	if (iVar8 == 1388422710)
	{
		iVar7 = func_316(bParam0, "SPEND STEW FEE", 1, 1, 0, bParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_842(bParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -1591664384;
			if (!func_846(&Var9, func_843(bParam0), &Var19, 1, bParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var36.f_9 = 1;
			Var36.f_11 = -1591664384;
			if (!func_847(&Var9, bParam0, Var2, Var2.f_4, iParam2, &Var36, 1, bParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var52.f_7 = -142743235;
	Var52.f_16 = -1;
	Var52.f_1 = 1;
	if (bParam0 == -1283929968)
	{
		Var52.f_1 = 0;
	}
	if (func_842(bParam0))
	{
		if (func_848(func_843(bParam0), bParam1) == 1400824947)
		{
			Var52.f_1 = 0;
		}
	}
	else if (func_849(bParam0, bParam1) == 1400824947)
	{
		Var52.f_1 = 0;
	}
	func_573(iVar7, Var52);
	_0x78c2e029db205a3a(bParam0, bParam1, iParam3);
	return iVar7;
}

void func_596(var uParam0)
{
	if (_get_system_time() - uParam0->f_3563.f_112) > (uParam0->f_3563.f_113 - 20000)
	{
		uParam0->f_3563.f_113 += 15000;
	}
}

bool func_597(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_598(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_3563.f_110, iParam1);
}

bool func_599(var uParam0, int iParam1)
{
	return is_bit_set(uParam0->f_3563.f_109, iParam1);
}

void func_600(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3563.f_110), iParam1);
}

void func_601(var uParam0, int iParam1)
{
	set_bit(&(uParam0->f_3563.f_109), iParam1);
}

int func_602(int iParam0)
{
	iVar0 = get_random_int_in_range(0, 4);
	switch (iParam0)
	{
		case 0:
			return -1181541851;
		case 2:
			return -1374871530;
		case 3:
			return -1823160006;
		case 1:
			switch (iVar0)
			{
				case 0:
					return 1189123422;
				case 1:
					return 1944458019;
				case 2:
					return -1181393718;
				case 3:
					return -1896200711;
			}
			break;
			break;
	}
	return -884758938;
}

void func_603()
{
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		iVar0 = -1556218087;
		if (!_0x68821369a2ceadd5(Global_34, iVar0))
		{
			_0xd65fdc686a031c83(Global_34, iVar0, 1f);
			_0x6d07b371e9439019(Global_34);
		}
	}
}

void func_604(var uParam0)
{
	vVar0 = { uParam0->f_38[16]->f_4 };
	fVar3 = uParam0->f_38[16]->f_7;
	use_particle_fx_asset(func_180());
	start_particle_fx_non_looped_at_coord(func_850(), vVar0, func_851(fVar3), 1f, false, false, false);
}

void func_605(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(uParam0, 2))
		{
			bVar0 = func_852(255);
			if (bVar0)
			{
				func_264(uParam0, 4);
				func_853(32);
			}
			else
			{
				func_853(64);
			}
			animpostfx_play(func_80(bVar0));
			func_264(uParam0, 128);
			_0x6339c1ea3979b5f7(func_854(), func_87());
			play_sound_frontend(func_855(), func_82(), true, 0);
			play_sound_frontend(func_86(), func_82(), true, 0);
			trigger_music_event(func_85(1));
			func_264(uParam0, 32);
			func_264(uParam0, 2);
		}
	}
	else if (func_79(uParam0, 2))
	{
		_0xc5cb91d65852ed7e(func_80(func_79(uParam0, 4)));
		func_83(uParam0, 128);
		play_sound_frontend(func_81(), func_82(), true, 0);
		_0x0f2a2175734926d8(func_86(), func_82());
		_0x9428447ded71fc7e(func_87());
		func_83(uParam0, 2);
		if (func_79(uParam0, 4))
		{
			func_83(uParam0, 4);
			func_84(32);
		}
		else
		{
			func_84(64);
		}
		_0xa63fcad3a6fec6d2(player_id(), 1);
		func_264(uParam0, 16);
	}
}

bool func_606(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_856(iParam1);
	if (iVar0 == 0)
	{
		func_334(uParam0, 7);
		return false;
	}
	request_model(iVar0, false);
	bVar1 = has_model_loaded(iVar0);
	if (!bVar1)
	{
		return false;
	}
	iVar2 = func_857(iParam1);
	if (!_is_metaped_outfit_request_valid(uParam0->f_3563.f_2[iParam2]->f_4))
	{
		uParam0->f_3563.f_2[iParam2]->f_4 = _request_metaped_outfit(iVar0, iVar2);
		bVar3 = false;
	}
	else
	{
		bVar3 = _0x610438375e5d1801(uParam0->f_3563.f_2[iParam2]->f_4);
	}
	_request_scenario_type(uParam0->f_3563.f_2[iParam2]->f_7, 1, 0, 0);
	_request_scenario_type(uParam0->f_3563.f_2[iParam2]->f_8, 1, 0, 0);
	bVar4 = (_has_scenario_type_loaded(uParam0->f_3563.f_2[iParam2]->f_7, false) && _has_scenario_type_loaded(uParam0->f_3563.f_2[iParam2]->f_8, false));
	return ((bVar1 && bVar3) && bVar4);
}

bool func_607(var uParam0, int iParam1)
{
	iVar0 = 1;
	bVar1 = func_597(&(uParam0->f_3563.f_2[iParam1]));
	if (!_does_scenario_point_exist(uParam0->f_3563.f_2[iParam1]->f_5))
	{
		if (bVar1)
		{
			vVar2 = { *uParam0->f_3563.f_96[uParam0->f_3563.f_2[iParam1]->f_10] };
		}
		else
		{
			vVar2 = { *uParam0->f_3563.f_71[uParam0->f_3563.f_2[iParam1]->f_10] };
		}
		fVar5 = func_858(vVar2, uParam0->f_4, 1);
		fVar5 = (fVar5 + get_random_float_in_range(-40f, 40f));
		uParam0->f_3563.f_2[iParam1]->f_5 = create_scenario_point(uParam0->f_3563.f_2[iParam1]->f_7, vVar2, fVar5, 0, 0, 0);
		iVar0 = 0;
	}
	if (!_does_scenario_point_exist(uParam0->f_3563.f_2[iParam1]->f_6))
	{
		if (bVar1)
		{
			vVar2 = { *uParam0->f_3563.f_96[uParam0->f_3563.f_2[iParam1]->f_11] };
		}
		else
		{
			vVar2 = { *uParam0->f_3563.f_71[uParam0->f_3563.f_2[iParam1]->f_11] };
		}
		fVar6 = func_858(vVar2, uParam0->f_4, 1);
		fVar6 = (fVar6 + get_random_float_in_range(-40f, 40f));
		uParam0->f_3563.f_2[iParam1]->f_6 = create_scenario_point(uParam0->f_3563.f_2[iParam1]->f_8, vVar2, fVar6, 0, 0, 0);
		iVar0 = 0;
	}
	return iVar0;
}

bool func_608(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_3563.f_118 != 0)
	{
		if ((_get_system_time() - uParam0->f_3563.f_118) > 3500)
		{
			uParam0->f_3563.f_118 = 0;
		}
		else
		{
			return false;
		}
	}
	iVar0 = func_856(iParam1);
	if (func_597(iParam1))
	{
		vVar1 = { *uParam0->f_3563.f_96[iParam2] };
	}
	else
	{
		vVar1 = { *uParam0->f_3563.f_71[iParam2] };
	}
	if (!does_entity_exist(uParam0->f_3563.f_2[iParam2]->f_3) || is_entity_dead(uParam0->f_3563.f_2[iParam2]->f_3))
	{
		uParam0->f_3563.f_2[iParam2]->f_3 = create_ped(iVar0, vVar1, 0f, false, true, false, false);
		return false;
	}
	return true;
}

bool func_609(var uParam0, int iParam1)
{
	if (_0x30569f348d126a5a(uParam0->f_3563.f_2[iParam1]->f_3) == 0)
	{
		_set_ped_body_component(uParam0->f_3563.f_2[iParam1]->f_3, func_857(&(uParam0->f_3563.f_2[iParam1])));
		_update_ped_variation(uParam0->f_3563.f_2[iParam1]->f_3, false, true, true, true, false);
		set_entity_alpha(uParam0->f_3563.f_2[iParam1]->f_3, 0, false);
		return true;
	}
	return false;
}

void func_610(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		set_blocking_of_non_temporary_events(iParam0, true);
		set_entity_proofs(iParam0, 31, false);
		set_ped_config_flag(iParam0, 113, true);
		set_ped_can_ragdoll(iParam0, false);
		_0xae6004120c18df97(iParam0, 0, 0);
		set_ped_can_be_targetted(iParam0, false);
		set_entity_visible(iParam0, false);
		set_ped_reset_flag(iParam0, 180, true);
		set_ped_relationship_group_hash(iParam0, Global_1132288->f_2060);
		_0xc6f81fcd15350323(iParam0, 2);
		add_entity_to_audio_mix_group(iParam0, "RDRO_Camp_Spirit_Animals_mixgroup", 0f);
	}
}

void func_611(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = uParam0->f_3563.f_2[iParam1]->f_3;
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (bParam2)
	{
		if (!is_entity_visible(iVar0))
		{
			set_entity_visible(iVar0, true);
			func_859(uParam0, iParam1);
		}
	}
	if (bParam3)
	{
		if (bParam2)
		{
			if (uParam0->f_3563.f_2[iParam1]->f_14 < 255)
			{
				uParam0->f_3563.f_2[iParam1]->f_14 += 12;
				if (uParam0->f_3563.f_2[iParam1]->f_14 > 255)
				{
					uParam0->f_3563.f_2[iParam1]->f_14 = 255;
				}
				set_entity_alpha(iVar0, uParam0->f_3563.f_2[iParam1]->f_14, false);
			}
		}
		else if (uParam0->f_3563.f_2[iParam1]->f_14 > 0)
		{
			uParam0->f_3563.f_2[iParam1]->f_14 = (uParam0->f_3563.f_2[iParam1]->f_14 - 26);
			if (uParam0->f_3563.f_2[iParam1]->f_14 < 0)
			{
				uParam0->f_3563.f_2[iParam1]->f_14 = 0;
				func_75(uParam0, iParam1);
			}
			set_entity_alpha(iVar0, uParam0->f_3563.f_2[iParam1]->f_14, false);
		}
	}
	set_ped_reset_flag(iVar0, 180, true);
	_0xc06f2f45a73eabcd(iVar0);
}

int func_612(var uParam0, int iParam1)
{
	if (&uParam0->f_3563.f_2[iParam1] == -1)
	{
		return 0;
	}
	if (!uParam0->f_3563.f_2[iParam1]->f_16)
	{
		if (uParam0->f_3563.f_2[iParam1]->f_15 == 0)
		{
			uParam0->f_3563.f_2[iParam1]->f_15 = _get_system_time();
		}
		else if (((_get_system_time() - uParam0->f_3563.f_2[iParam1]->f_15) > 1500 && does_entity_exist(uParam0->f_3563.f_2[iParam1]->f_3)) && is_entity_visible(uParam0->f_3563.f_2[iParam1]->f_3))
		{
			_0x0e53530d9b2db01d(uParam0->f_3563.f_2[iParam1]->f_3, -620340268, 0);
			uParam0->f_3563.f_2[iParam1]->f_16 = 1;
		}
	}
	switch (uParam0->f_3563.f_2[iParam1]->f_1)
	{
		case 0:
			if (does_entity_exist(uParam0->f_3563.f_2[iParam1]->f_3) && !is_entity_dead(uParam0->f_3563.f_2[iParam1]->f_3))
			{
				if (!func_160(uParam0->f_3563.f_2[iParam1]->f_3, -76381094))
				{
					_task_use_scenario_point(uParam0->f_3563.f_2[iParam1]->f_3, uParam0->f_3563.f_2[iParam1]->f_5, 0, -1, false, true, 0, false, -1f, false);
				}
				else if (uParam0->f_3563.f_2[iParam1]->f_12 == 0)
				{
					uParam0->f_3563.f_2[iParam1]->f_12 = _get_system_time();
					uParam0->f_3563.f_2[iParam1]->f_13 = get_random_int_in_range(10000, 30000);
				}
				else if ((_get_system_time() - uParam0->f_3563.f_2[iParam1]->f_12) > uParam0->f_3563.f_2[iParam1]->f_13)
				{
					clear_ped_tasks(uParam0->f_3563.f_2[iParam1]->f_3, 1, 0);
					func_76(&(uParam0->f_3563.f_2[iParam1]->f_1), 1);
				}
			}
			break;
		case 1:
			if (func_860(uParam0, iParam1))
			{
				func_76(&(uParam0->f_3563.f_2[iParam1]->f_1), 2);
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

bool func_613(var uParam0, int iParam1, bool bParam2)
{
	iVar1 = uParam0->f_3563.f_2[iParam1]->f_3;
	if (bParam2)
	{
		uParam0->f_3563.f_2[iParam1]->f_14 = (uParam0->f_3563.f_2[iParam1]->f_14 - 26);
		if (uParam0->f_3563.f_2[iParam1]->f_14 <= 0)
		{
			iVar0 = 1;
			uParam0->f_3563.f_2[iParam1]->f_14 = 0;
			func_75(uParam0, iParam1);
		}
		set_entity_alpha(iVar1, uParam0->f_3563.f_2[iParam1]->f_14, false);
	}
	set_ped_reset_flag(iVar1, 180, true);
	_0xc06f2f45a73eabcd(iVar1);
	return iVar0;
}

float func_614(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			return 3f;
		case 158:
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
			return 2.5f;
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
			return 3.5f;
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
			return 3.5f;
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
			return 2.5f;
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
			return 3f;
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
			return 3f;
		default:
			break;
	}
	switch (iParam0)
	{
		case 2:
			return 1.25f;
		case 3:
			return 2.5f;
		case 4:
			return 3.25f;
		case 10:
			return 3.25f;
		default:
			break;
	}
	return 0f;
}

bool func_615(int iParam0)
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

int func_616(int iParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		return iVar0;
	}
	iVar1 = func_254(iParam1);
	if (iVar1 == 0)
	{
		return iVar0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
	}
	if (iParam6 > -1 && func_861(iParam1) > iParam6)
	{
		iVar0 = 0;
		return iVar0;
	}
	if (func_862(iParam0))
	{
		iVar3 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(int_to_playerindex(iParam0)));
	}
	iVar2 = func_387(iVar3);
	if (iVar2 == 0)
	{
		iVar2 = func_386(iParam0);
	}
	iVar0 = func_863(iParam1);
	*uParam5 = 0;
	switch (iVar1)
	{
		case 1:
			switch (iParam1)
			{
				case 16:
					*uParam5 = func_864(iParam0);
					if (*uParam5 != 0)
					{
						iVar0 = func_391(vParam2.z, *uParam5, iVar2, iParam1);
					}
					else
					{
						iVar0 = 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
		case 4:
			if (iVar2 != 0)
			{
				iVar0 = func_391(vParam2.z, 0, iVar2, iParam1);
			}
			break;
		case 5:
			*uParam5 = func_865(iParam0);
			if (*uParam5 != 0)
			{
				iVar0 = func_391(vParam2.z, *uParam5, iVar2, iParam1);
			}
			break;
		case 6:
			*uParam5 = func_866(iParam0);
			if (*uParam5 != 0)
			{
				iVar0 = func_391(vParam2.z, *uParam5, iVar2, iParam1);
			}
			break;
		case 8:
			if (vParam2.x == 7)
			{
				iVar0 = 136;
			}
			else if (vParam2.x == 4)
			{
				iVar0 = 135;
			}
			break;
		case 9:
			if (func_867())
			{
				iVar0 = 146;
			}
			break;
		case 11:
			if (func_415(iVar3))
			{
				iVar0 = func_869(func_868(iVar3));
			}
			break;
		case 12:
			if (func_415(iVar3))
			{
				iVar0 = func_870(func_408(iVar3));
			}
			break;
		case 13:
			*uParam5 = func_871(iParam0);
			if (*uParam5 != 0)
			{
				iVar0 = func_391(vParam2.z, *uParam5, iVar2, iParam1);
			}
			break;
		case 14:
			iVar0 = 148;
			break;
		case 15:
			iVar0 = 149;
			break;
		case 17:
			iVar0 = 0;
			break;
		case 16:
			iVar0 = 0;
			break;
		case 10:
			if ((iParam0 >= 0 && iParam0 < 32) && network_is_player_active(int_to_playerindex(iParam0)))
			{
				*uParam5 = func_390(iParam0);
				if (*uParam5 != 0)
				{
					iVar0 = func_391(vParam2.z, *uParam5, iVar2, iParam1);
				}
			}
			break;
	}
	return iVar0;
}

void func_617(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_66[iParam1] = iParam2;
}

void func_618(var uParam0, var uParam1, int iParam2)
{
	if (&uParam0->f_38[iParam2] == -1)
	{
		func_617(uParam1, iParam2, -1);
	}
	else if (&uParam0->f_38[iParam2] > 0)
	{
		func_617(uParam1, iParam2, 1);
	}
}

void func_619(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (&uParam0->f_38[iParam3] > 1 && uParam0->f_38[iParam3]->f_1 != 0)
	{
		uParam2->f_66[iParam3]->f_1 = uParam0->f_38[iParam3]->f_1;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam2->f_66[iParam3]->f_5[iVar0]->f_1 = func_872(uParam0->f_38[iParam3]->f_1, iVar0);
			if (iVar0 == 2)
			{
				func_281(uParam1, uParam2->f_1, iParam3, 1);
				func_617(uParam2, iParam3, 2);
			}
			iVar0++;
		}
	}
}

void func_620(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (uParam2->f_66[iParam3]->f_5[iParam4]->f_1 != 0)
	{
		if (uParam2->f_8)
		{
			return;
		}
		if (!_does_propset_exist(&(uParam2->f_66[iParam3]->f_5[iParam4])))
		{
			_request_propset(uParam2->f_66[iParam3]->f_5[iParam4]->f_1);
			if (!_has_propset_loaded(uParam2->f_66[iParam3]->f_5[iParam4]->f_1))
			{
				return;
			}
			if (func_351(uParam0, uParam1, uParam2, iParam3))
			{
				return;
			}
			fVar0 = uParam0->f_38[iParam3]->f_7;
			fVar0 = (fVar0 + func_873(uParam2->f_66[iParam3]->f_1));
			uParam2->f_66[iParam3]->f_5[iParam4] = _create_propset(uParam2->f_66[iParam3]->f_5[iParam4]->f_1, uParam0->f_38[iParam3]->f_4, func_874(uParam2->f_66[iParam3]->f_1), fVar0, 1f, false, false);
			if (iParam4 == 0)
			{
				if (iParam3 == 0)
				{
					func_875(&(uParam2->f_66[iParam3]->f_5[iParam4]), uParam0->f_38[iParam3]->f_4);
				}
			}
		}
	}
	iVar1 = func_876(uParam2->f_66[iParam3]->f_1);
	if (iVar1 != 0)
	{
		if (!is_model_a_vehicle(iVar1))
		{
			if (!does_entity_exist(uParam2->f_66[iParam3]->f_3))
			{
				request_model(iVar1, false);
				if (!has_model_loaded(iVar1))
				{
					return;
				}
				fVar2 = uParam0->f_38[iParam3]->f_7;
				vVar3 = { func_877(uParam2->f_66[iParam3]->f_1) };
				vVar6 = { _get_object_offset_from_coords(uParam0->f_38[iParam3]->f_4, fVar2, vVar3) };
				fVar2 = (fVar2 + func_878(uParam2->f_66[iParam3]->f_1));
				if (iParam3 == 17)
				{
					uParam2->f_39.f_10 = { vVar6 };
					uParam2->f_39.f_13 = { vVar6 };
				}
				uParam2->f_66[iParam3]->f_3 = create_object_no_offset(iVar1, vVar6, false, false, false, true);
				if (does_entity_exist(uParam2->f_66[iParam3]->f_3) && !is_entity_dead(uParam2->f_66[iParam3]->f_3))
				{
					set_entity_invincible(uParam2->f_66[iParam3]->f_3, true);
					_0xa91e6cf94404e8c9(uParam2->f_66[iParam3]->f_3);
					set_entity_heading(uParam2->f_66[iParam3]->f_3, fVar2);
					freeze_entity_position(uParam2->f_66[iParam3]->f_3, true);
					iVar10 = func_879(uParam2->f_66[iParam3]->f_1, &iVar9);
					if (iVar10 != 0 && iVar10 == iVar1)
					{
						_set_object_texture_variation(uParam2->f_66[iParam3]->f_3, iVar9);
					}
					func_880(uParam2, uParam2->f_66[iParam3]->f_1, uParam2->f_66[iParam3]->f_3);
				}
			}
		}
	}
	if (iParam4 == 2)
	{
		func_881(uParam0, uParam2, iParam3);
		func_617(uParam2, iParam3, 3);
		uParam2->f_66[iParam3]->f_4 = 0;
	}
	else
	{
		uVar11 = uParam2->f_66[iParam3]->f_4 + 1;
		uParam2->f_66[iParam3]->f_4 = uVar11;
		if (uParam2->f_66[iParam3]->f_5[iParam4]->f_1 == 0)
		{
			func_881(uParam0, uParam2, iParam3);
			func_617(uParam2, iParam3, 3);
			uParam2->f_66[iParam3]->f_4 = 0;
		}
	}
}

void func_621(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_882(uParam2) && func_883(uParam0, iParam3))
	{
		func_617(uParam2, iParam3, 6);
		uParam2->f_3731++;
		if (uParam2->f_3731 >= 28)
		{
			uParam2->f_3731 = 0;
		}
		return;
	}
	if (uParam2->f_3733 >= 4)
	{
		return;
	}
	uParam2->f_3733++;
	if (uParam2->f_66[iParam3]->f_5[0]->f_1 != 0 && !_does_propset_exist(&(uParam2->f_66[iParam3]->f_5[0])))
	{
		func_617(uParam2, iParam3, 6);
	}
	switch (uParam0->f_38[iParam3]->f_3)
	{
		case 1:
			func_884(uParam0, iParam3);
			break;
		case 5:
			func_885(uParam0, uParam1, uParam2, iParam3);
			break;
		case 6:
			func_886(uParam0, uParam2, iParam3);
			break;
		case 7:
			func_887(uParam2, iParam3);
			break;
		case 9:
			func_888(uParam2, iParam3);
			break;
		case 11:
			func_889(uParam2, iParam3);
			break;
		case 13:
			func_890(uParam0, uParam2, iParam3);
			break;
	}
	uParam2->f_3731++;
	if (uParam2->f_3731 >= 28)
	{
		uParam2->f_3731 = 0;
	}
}

void func_622(var uParam0, var uParam1, int iParam2)
{
	if (func_882(uParam1))
	{
		return;
	}
	func_617(uParam1, iParam2, 1);
}

void func_623(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_66(uParam0, uParam1, uParam2, iParam3, 0, 1, 0);
	if (func_882(uParam2))
	{
		func_617(uParam2, iParam3, 4);
	}
	else
	{
		func_617(uParam2, iParam3, 1);
	}
}

int func_624(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_500()]->f_38.f_11;
	}
	return (*Global_1134390)[iParam0]->f_38.f_11;
}

void func_625(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_275() && func_891()))
	{
		if (func_892(255))
		{
			if (_0xf256a75210c5c0eb(iParam1, get_entity_coords(get_player_ped(player_id()), false, false)))
			{
				func_893(1, 1);
			}
		}
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_71(iParam0, 1);
	Global_1051439->f_72[iParam0] = 0;
	Global_1051439->f_72[iParam0]->f_18 = func_894(iParam2, iParam0);
	Global_1051439->f_72[iParam0]->f_24 = iParam1;
	Global_1051439->f_72[iParam0]->f_3 = { _0xf70f00013a62f866(iParam1) };
	Global_1051439->f_72[iParam0]->f_25 = uParam3;
	Global_1051439->f_72[iParam0]->f_27 = iParam4;
	Global_1051439->f_72[iParam0]->f_2 = iParam2;
	Global_1051439->f_72[iParam0]->f_63 = func_895(Global_1051439->f_72[iParam0]->f_18);
	Global_1051439->f_72[iParam0]->f_72 = iParam9;
	Global_1051439->f_72[iParam0]->f_73 = 0;
	Global_1051439->f_72[iParam0]->f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_896(iParam0);
	}
	Global_1051439->f_72[iParam0]->f_10 = fParam8;
	Global_1051439->f_72[iParam0]->f_14 = iParam5;
	if (bParam6)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		_0x18262cafebb5fbe1(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(Global_1051439->f_72[iParam0]->f_25, 0, 0, 0, -1, -1, 0);
	}
	_0xeeb7818b1d307212(Global_1051439->f_72[iParam0]->f_24);
	func_897(iParam0, 4);
	func_898(iParam0);
}

void func_626(int iParam0, int iParam1)
{
	func_362(&(Global_1051439->f_72[iParam0]->f_49), iParam1);
}

struct<4> func_627(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_489(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_773(1328661203, func_527(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_773(1328661203, func_527(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_773(1328661203, func_527(), -1591664384, bParam0);
}

int func_628(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_488(bParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_773(bParam0, Param1, bParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_489(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_489(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_629(int iParam0)
{
	if (func_41() == -1)
	{
		if (!_does_volume_exist(Global_1915715->f_3[iParam0]->f_26))
		{
			return false;
		}
		if (_0xf256a75210c5c0eb(Global_1915715->f_3[iParam0]->f_26, Global_35))
		{
			return true;
		}
		if (_does_volume_exist(Global_1915715->f_3[iParam0]->f_27))
		{
			if (_0xf256a75210c5c0eb(Global_1915715->f_3[iParam0]->f_27, Global_35))
			{
				return true;
			}
		}
	}
	else
	{
		if (!_does_volume_exist(Global_1051439->f_72[iParam0]->f_25))
		{
			return false;
		}
		if (_0xf256a75210c5c0eb(Global_1051439->f_72[iParam0]->f_25, Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_630()
{
	if (_is_ped_carrying(Global_34))
	{
		func_899(Global_34, &uVar0, 1);
		if (_0x8de41e9902e85756(&(uVar0[0])))
		{
			return true;
		}
	}
	return false;
}

int func_631()
{
	iVar0 = 0;
	if (func_332(-1490861779, 1))
	{
		iVar0 = -1490861779;
	}
	else if (func_332(1476279059, 1))
	{
		iVar0 = 1476279059;
	}
	else if (func_332(913131737, 1))
	{
		iVar0 = 913131737;
	}
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (_0xd6f6acf4392187fb(iVar1))
	{
		if (_0x0f99f6436528a089(iVar1))
		{
			iVar2 = _0x4be6c13a45cca8ec(iVar1);
			if (network_is_player_active(iVar2))
			{
				iVar3 = iVar2;
				iVar0 = (*Global_1134390)[iVar3]->f_38.f_12.f_2;
			}
		}
	}
	return iVar0;
}

void func_632(var uParam0, var uParam1)
{
	fVar0 = 0.019f;
	func_900(uParam0);
	if (does_entity_exist(*uParam0))
	{
		fVar1 = get_rain_level();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_901(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_901(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_901(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_901(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_901(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_901(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_901(uParam0, 8);
		}
		else if (func_903(&(uParam0->f_31), func_902()))
		{
			func_904(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (does_entity_exist(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_901(uParam0, 0);
				request_anim_dict(sLocal_19);
				_0x2b6529c54d29037a(sLocal_20);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_901(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_901(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_901(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_901(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_901(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_901(uParam0, 8);
				}
				else
				{
					func_901(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			_set_lights_type_for_entity(*uParam0, 20);
			_set_lights_color_for_entity(*uParam0, 255, 50, 9);
			uParam0->f_29 = start_particle_fx_looped_on_entity("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (does_particle_fx_looped_exist(uParam0->f_29))
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_27, true);
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (has_anim_dict_loaded(sLocal_19) && _0x2c04d89a0fb4e244(sLocal_20))
			{
				task_move_network_by_name(*uParam0, sLocal_20, 0f, false, sLocal_19, 128);
				uParam0->f_30 = 5;
			}
			func_542(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
				set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			set_task_move_network_signal_float(*uParam0, "LogCount", uParam0->f_9);
			set_task_move_network_signal_float(*uParam0, "LogSet", uParam0->f_10);
			if (is_task_move_network_ready_for_transition(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && get_rain_level() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (_0x844ceee428ea35b0(*uParam0, "BurnPhase") <= 0f || _0x844ceee428ea35b0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (is_task_move_network_active(*uParam0))
			{
				if (get_task_move_network_event(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (is_task_move_network_active(*uParam0))
			{
				if (is_task_move_network_ready_for_transition(*uParam0))
				{
					request_task_move_network_state_transition(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (is_task_move_network_active(*uParam0))
			{
				set_task_move_network_signal_float(*uParam0, "LogBurnRate", fVar0);
				if (get_task_move_network_event(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			set_task_move_network_signal_float(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

void func_633(var uParam0, var uParam1, int iParam2)
{
	if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
	{
		if (!does_entity_exist(uParam1->f_442.f_127))
		{
			uParam1->f_442.f_127 = uParam1->f_66[iParam2]->f_3;
		}
		else if (_0x9be7dcb22d32ccbe(uParam1->f_2, player_id()) && !func_905(uParam0))
		{
			if (uParam1->f_66[iParam2]->f_1 == 2)
			{
				func_362(&(uParam1->f_442.f_125), 16384);
			}
			else
			{
				func_184(&(uParam1->f_442.f_125), 16384);
			}
			uParam1->f_442.f_49.f_11 = -1330552208;
			func_906(&(uParam1->f_442), 0);
			if (!func_4(uParam1, 4194304))
			{
				func_44(uParam1, 4194304);
			}
			if (!func_4(uParam1, 32768))
			{
				if (func_185(1) && func_907())
				{
					func_44(uParam1, 32768);
				}
			}
			else if (!func_185(1) || !func_907())
			{
				func_69(uParam1, 32768);
			}
		}
		else
		{
			if (((func_4(uParam1, 4194304) && vdist(Global_35, uParam0->f_38[16]->f_4) < 2f) && func_185(1)) && func_907())
			{
				func_89(uParam1, 1);
				func_69(uParam1, 4194304);
			}
			func_906(&(uParam1->f_442), 1);
		}
	}
	else
	{
		func_89(uParam1, 0);
	}
}

bool func_634(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_49())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_107(func_274(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_660(func_274(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

bool func_635()
{
	return Global_1913694->f_1578;
}

bool func_636(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

float func_637(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

bool func_638(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = _create_volume_cylinder(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_908(&vParam1, 1073741824))
	{
		func_70(iVar0);
		return true;
	}
	iVar1 = _0x84ccf9a12942c83d(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_indexed_item_in_itemset(iVar2, *iParam0);
		iVar4 = _get_entity_from_item(iVar3);
		if (is_entity_a_ped(iVar4))
		{
			iVar5 = get_ped_index_from_entity_index(iVar4);
			if (iVar5 != Global_34)
			{
				if (_get_carrier_as_ped(iVar5) != Global_34)
				{
					func_70(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	func_70(iVar0);
	return false;
}

float func_639(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_858(vVar0, vVar3, iParam2);
}

bool func_640(var uParam0)
{
	if (!func_369(uParam0))
	{
		return true;
	}
	iVar0 = uParam0->f_403;
	if (uParam0->f_66[iVar0]->f_1 != uParam0->f_410.f_15)
	{
		uParam0->f_410.f_15 = uParam0->f_66[iVar0]->f_1;
		return true;
	}
	return false;
}

int func_641(var uParam0, var uParam1)
{
	iVar4 = func_54(uParam0, player_id());
	if (iVar4 != -1 && _does_propset_exist(&(uParam0->f_66[iVar4]->f_5[0])))
	{
		iVar3 = &uParam0->f_66[iVar4]->f_5[0];
	}
	else
	{
		(*uParam1)[uParam0->f_1]->f_34 = { func_216() };
		(*uParam1)[uParam0->f_1]->f_34.f_3 = 0f;
		return 0;
	}
	iVar5 = create_itemset(false);
	if (!is_itemset_valid(iVar5))
	{
		return 0;
	}
	_0x0d322aef8878b8fe(iVar3, iVar5);
	iVar1 = get_itemset_size(iVar5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = get_indexed_scenario_point_index_in_itemset(iVar0, iVar5);
		if (_does_scenario_point_exist(iVar6))
		{
			iVar2 = _get_scenario_point_type(iVar6);
			if (iVar2 == 1551127842)
			{
				(*uParam1)[uParam0->f_1]->f_34 = { _get_scenario_point_coords(iVar6, true) };
				(*uParam1)[uParam0->f_1]->f_34.f_3 = _get_scenario_point_heading(iVar6, true);
				request_model(2042565497, false);
				destroy_itemset(iVar5);
				return 1;
			}
		}
		iVar0++;
	}
	destroy_itemset(iVar5);
	return 0;
}

Vector3 func_642()
{
	return 0f, 0.7f, 0f;
}

bool func_643(int iParam0)
{
	if (!func_909())
	{
		return true;
	}
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	if (is_ped_in_any_vehicle(iParam0, true))
	{
		return true;
	}
	if (is_ped_on_mount(iParam0))
	{
		return true;
	}
	if (func_41() == -1)
	{
		return false;
	}
	if (func_910())
	{
		return true;
	}
	if (func_296(1, 255))
	{
		return true;
	}
	if (func_911())
	{
		return true;
	}
	if (func_912())
	{
		return true;
	}
	return false;
}

Vector3 func_644(var uParam0, int iParam1)
{
	if (func_4(uParam0, 268435456))
	{
		switch (iParam1)
		{
			case 158:
				return -1f, -2.5f, 0f;
			case 159:
				return 1f, -2f, 0f;
			case 160:
				return -1.5f, -2.25f, 0f;
			case 161:
				return -1f, -2f, 0f;
			case 162:
				return -0.5f, -1.5f, 0f;
			case 163:
				return 1f, -1.25f, 0f;
			case 164:
				return -1f, -1.25f, 0f;
			case 165:
				return -1f, -2.25f, 0f;
			case 182:
				return 1.5f, -1.75f, 0f;
			case 183:
				return 1.5f, -1.5f, 0f;
			case 184:
				return -2f, -2.25f, 0f;
			case 185:
				return 2f, -1.75f, 0f;
			case 186:
				return 2f, -1.75f, 0f;
			case 187:
				return 1.5f, -2f, 0f;
			case 188:
				return 1f, -2f, 0f;
			case 189:
				return 1f, -1.75f, 0f;
			case 150:
				return 1f, -2.25f, 0f;
			case 151:
				return -1f, -2.25f, 0f;
			case 152:
				return -0.5f, -3f, 0f;
			case 153:
				return -2.5f, -1f, 0f;
			case 154:
				return -1f, -2.25f, 0f;
			case 155:
				return 1.5f, -2.5f, 0f;
			case 156:
				return -1f, -2.25f, 0f;
			case 157:
				return -1f, -2.25f, 0f;
			case 198:
				return 3f, -2f, 0f;
			case 199:
				return 3f, -1.75f, 0f;
			case 200:
				return 1f, -1.75f, 0f;
			case 201:
				return 1f, -1.75f, 0f;
			case 202:
				return 3f, -1.75f, 0f;
			case 203:
				return -1f, -3f, 0f;
			case 204:
				return 0.5f, -3f, 0f;
			case 205:
				return -1f, -3f, 0f;
			case 190:
				return 0.5f, -2f, 0f;
			case 191:
				return 3f, -1.25f, 0f;
			case 192:
				return 1.5f, -1.5f, 0f;
			case 193:
				return -1f, -0.5f, 0f;
			case 194:
				return 0.5f, -2.25f, 0f;
			case 195:
				return -1f, -2f, 0f;
			case 196:
				return 1f, -2.5f, 0f;
			case 197:
				return -2f, -2.5f, 0f;
			case 166:
				return -1f, -1.5f, 0f;
			case 167:
				return -1f, -2.25f, 0f;
			case 168:
				return 1.25f, -1.5f, 0f;
			case 169:
				return 1f, -1.75f, 0f;
			case 170:
				return 1.5f, -2f, 0f;
			case 171:
				return 1f, -3f, 0f;
			case 172:
				return -1f, -3.5f, 0f;
			case 173:
				return -1f, -3.25f, 0f;
			case 174:
				return 0.5f, -3f, 0f;
			case 175:
				return 1.5f, -2.5f, 0f;
			case 176:
				return 1.25f, -1.5f, 0f;
			case 177:
				return 1f, -3f, 0f;
			case 178:
				return 0f, -3.25f, 0f;
			case 179:
				return -0.5f, -4f, 0f;
			case 180:
				return -1f, -4f, 0f;
			case 181:
				return -1.25f, -4f, 0f;
			default:
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 158:
				return 0f, -2.5f, 0f;
			case 159:
				return 0f, -2.25f, 0f;
			case 160:
				return 0f, -2.25f, 0f;
			case 161:
				return 0f, -1.5f, 0f;
			case 162:
				return 0f, -1.5f, 0f;
			case 163:
				return 0f, -1.5f, 0f;
			case 164:
				return 0f, -1.25f, 0f;
			case 165:
				return 0f, -2f, 0f;
			case 182:
				return 0f, -1.75f, 0f;
			case 183:
				return 0f, -1.75f, 0f;
			case 184:
				return 0f, -1.75f, 0f;
			case 185:
				return 0f, -1.75f, 0f;
			case 186:
				return 0f, -1.75f, 0f;
			case 187:
				return 1f, -2f, 0f;
			case 188:
				return 0f, -2f, 0f;
			case 189:
				return 0f, -1.75f, 0f;
			case 150:
				return 0f, -2.25f, 0f;
			case 151:
				return 0f, -2.25f, 0f;
			case 152:
				return 0f, -3f, 0f;
			case 153:
				return 0f, -2f, 0f;
			case 154:
				return 0f, -2.25f, 0f;
			case 155:
				return 1f, -2.25f, 0f;
			case 156:
				return -0.5f, -2.25f, 0f;
			case 157:
				return 0f, -2.25f, 0f;
			case 198:
				return 0f, -2f, 0f;
			case 199:
				return 0f, -1.75f, 0f;
			case 200:
				return 0f, -1.75f, 0f;
			case 201:
				return 0f, -1.75f, 0f;
			case 202:
				return 0f, -1.75f, 0f;
			case 203:
				return 0f, -3f, 0f;
			case 204:
				return 0f, -3f, 0f;
			case 205:
				return 0f, -3f, 0f;
			case 190:
				return 0f, -2f, 0f;
			case 191:
				return 0f, -3f, 0f;
			case 192:
				return 0f, -1.5f, 0f;
			case 193:
				return 0f, -1f, 0f;
			case 194:
				return 0f, -1f, 0f;
			case 195:
				return 0f, -2.5f, 0f;
			case 196:
				return 1f, -2f, 0f;
			case 197:
				return 1.5f, -2f, 0f;
			case 166:
				return 0f, -3f, 0f;
			case 167:
				return 0f, -3f, 0f;
			case 168:
				return 0f, -3f, 0f;
			case 169:
				return 0f, -3f, 0f;
			case 170:
				return 0f, -3f, 0f;
			case 171:
				return 1f, -3f, 0f;
			case 172:
				return -1.5f, -3f, 0f;
			case 173:
				return 0f, -3f, 0f;
			case 174:
				return 0f, -3f, 0f;
			case 175:
				return 0f, -3f, 0f;
			case 176:
				return 0f, -3f, 0f;
			case 177:
				return 0f, -3.1f, 0f;
			case 178:
				return 0f, -3f, 0f;
			case 179:
				return 0f, -3.1f, 0f;
			case 180:
				return 0f, -3.5f, 0f;
			case 181:
				return -0.1f, -3.2f, 0f;
			default:
				break;
		}
	}
	return 0f, -2f, 0f;
}

void func_645(var uParam0, var uParam1, int iParam2)
{
	if (func_643(*uParam0))
	{
		return;
	}
	uParam1->f_8 = 0;
	func_913(uParam1, iParam2);
	*uParam1 = *uParam0;
	uParam1->f_13 = uParam0->f_1;
	uParam1->f_27 = { uParam0->f_6 };
	uParam1->f_20 = uParam0->f_9;
	uParam1->f_21 = uParam0->f_9;
	uParam1->f_24 = { uParam0->f_10 };
	uParam1->f_22 = uParam0->f_13;
	uParam1->f_23 = uParam0->f_14;
	uParam1->f_30 = { uParam0->f_2 };
	uParam1->f_19 = uParam0->f_5;
	if (uParam1->f_19 == 0f)
	{
		uParam1->f_19 = 1.25f;
	}
	if (uParam0->f_17 != 0)
	{
		uParam1->f_5 = uParam0->f_17;
	}
	if (uParam0->f_15)
	{
		set_bit(&(uParam1->f_17), 7);
	}
	else
	{
		set_bit(&(uParam1->f_17), 6);
	}
	if (uParam0->f_16)
	{
		set_bit(&(uParam1->f_17), 12);
	}
	set_bit(&(uParam1->f_17), 0);
}

int func_646(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_is_ped_using_scenario_hash(iParam0, 502001704))
	{
		return 1;
	}
	return 0;
}

bool func_647(int iParam0)
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

int func_648(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_is_ped_using_scenario_hash(iParam0, -493351432))
	{
		return 1;
	}
	return 0;
}

int func_649(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1452925867))
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (_is_ped_using_scenario_hash(iParam0, 751811579))
	{
		return 1;
	}
	return 0;
}

bool func_651(var uParam0, var uParam1)
{
	return ((((((uParam1->f_403 != -1 && &uParam1->f_66[uParam1->f_403] == 3) && _does_propset_exist(&(uParam1->f_66[uParam1->f_403]->f_5[0]))) && !func_322(128)) && !func_279()) && !func_4(uParam1, 8)) && !func_107(func_274(0)));
}

int func_652(var uParam0, bool bParam1)
{
	if (func_643(uParam0->f_2506))
	{
		func_98(uParam0, bParam1);
		return 0;
	}
	uVar0 = uParam0->f_4;
	uVar1 = uParam0->f_3;
	uParam0->f_4 = 179;
	uParam0->f_3 = 20;
	if (!is_bit_set(uParam0->f_2506.f_17, 6))
	{
		if (is_bit_set(uParam0->f_2506.f_17, 7))
		{
			if (func_914(&(uParam0->f_2506)))
			{
				if (!is_bit_set(uParam0->f_2506.f_17, 8))
				{
					func_915(&(uParam0->f_2506));
				}
			}
			else if (is_bit_set(uParam0->f_2506.f_17, 8))
			{
				func_198(&(uParam0->f_2506));
			}
			if (is_bit_set(uParam0->f_2506.f_17, 8))
			{
				if (func_916(uParam0->f_2506.f_4, 1))
				{
					disable_control_action(0, -2131587435, false);
					func_917(uParam0->f_2506);
				}
				if (func_313(uParam0->f_2506.f_4, 1))
				{
					set_bit(&(uParam0->f_2506.f_17), 6);
					if (uParam0->f_2506.f_5 != 0)
					{
						_0xc9caeaeec1256e54(uParam0->f_2506.f_5);
					}
					clear_ped_tasks(uParam0->f_2506, 1, 0);
					func_917(uParam0->f_2506);
					func_198(&(uParam0->f_2506));
				}
			}
		}
	}
	else if (!is_bit_set(uParam0->f_2506.f_17, 5))
	{
		if (uParam0->f_2506.f_5 != 0)
		{
			_0xc9caeaeec1256e54(uParam0->f_2506.f_5);
		}
		func_917(get_player_ped(player_id()));
		if (!is_bit_set(uParam0->f_2506.f_17, 3))
		{
			func_918(&(uParam0->f_2506));
			set_bit(&(uParam0->f_2506.f_17), 3);
		}
		if (!is_bit_set(uParam0->f_2506.f_17, 2))
		{
			func_919(uParam0);
		}
		if (!is_bit_set(uParam0->f_2506.f_17, 4))
		{
			if (func_920(&(uParam0->f_2506)))
			{
				set_bit(&(uParam0->f_2506.f_17), 4);
			}
		}
		if (is_bit_set(uParam0->f_2506.f_17, 2) && is_bit_set(uParam0->f_2506.f_17, 4))
		{
			func_921(&(uParam0->f_2506));
			if (func_922(&iVar2))
			{
				func_923(iVar2, 0);
			}
			set_bit(&(uParam0->f_2506.f_17), 5);
		}
	}
	else
	{
		if (uParam0->f_2506.f_5 != 0)
		{
			_0xc9caeaeec1256e54(uParam0->f_2506.f_5);
		}
		if (!func_924(uParam0))
		{
			func_98(uParam0, bParam1);
			uParam0->f_4 = uVar0;
			uParam0->f_3 = uVar1;
			return 0;
		}
		set_ped_reset_flag(uParam0->f_2506, 258, true);
		func_925(uParam0);
	}
	uParam0->f_4 = uVar0;
	uParam0->f_3 = uVar1;
	return 1;
}

void func_653(var uParam0, var uParam1)
{
	switch (uParam1->f_410.f_29)
	{
		case 0:
			if (func_926(uParam1, &(uParam1->f_410.f_16), "GC_WLOCKER_TITLE", uParam1->f_410, -719620017, 1.6f, 1))
			{
				func_182(&(uParam1->f_410.f_16), 1, 1);
				request_script("weapon_locker");
				if (is_ped_male(Global_34))
				{
					request_anim_dict("MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MALE_A@base");
				}
				else
				{
					request_anim_dict("MP_AMB_PLAYER@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MP_FEMALE_A@base");
				}
				func_44(uParam1, 536870912);
				uParam1->f_410.f_29 = 1;
			}
			if (func_181(uParam1->f_410.f_16))
			{
				func_366(uParam1->f_410.f_16, 1532743427, 0, 1);
			}
			break;
		case 1:
			if ((uParam1->f_66[uParam1->f_403]->f_1 != 0 && has_script_loaded("weapon_locker")) && ((is_ped_male(Global_34) && has_anim_dict_loaded("MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MALE_A@base")) || (is_ped_male(Global_34) == 0 && has_anim_dict_loaded("MP_AMB_PLAYER@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MP_FEMALE_A@base"))))
			{
				func_215(uParam0, uParam1, 1, 1, 1);
				set_player_control(player_id(), false, 0, false);
				_hide_ped_weapons(Global_34, 2, true);
				_set_entity_coords_and_heading(Global_34, uParam1->f_410.f_3, uParam1->f_410.f_6, true, false, true);
				open_sequence_task(&iVar0);
				if (is_ped_male(Global_34))
				{
					task_play_anim(0, "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MALE_A@base", "base", 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
				}
				else
				{
					task_play_anim(0, "MP_AMB_PLAYER@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MP_FEMALE_A@base", "base", 1000f, -1000f, -1, 1, 0f, false, 0, false, 0, false);
				}
				close_sequence_task(iVar0);
				task_perform_sequence(Global_34, iVar0);
				clear_sequence_task(&iVar0);
				task_look_at_coord(Global_34, uParam1->f_410.f_7, -1, 0, 51, 0);
				func_927(uParam1);
				uParam1->f_410.f_29 = 2;
			}
			break;
		case 2:
			uParam1->f_410.f_24 = start_new_script("weapon_locker", 1024);
			uParam1->f_410.f_29 = 3;
			break;
		case 3:
			if (!is_thread_active(uParam1->f_410.f_24, false))
			{
				func_69(uParam1, 134217728);
				func_69(uParam1, 536870912);
				if (!_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
				clear_ped_tasks_immediately(Global_34, false, true);
				clear_ped_secondary_task(Global_34);
				task_clear_look_at(Global_34);
				set_entity_coords(Global_34, uParam1->f_410.f_11, true, false, true, true);
				set_entity_heading(Global_34, uParam1->f_410.f_14);
				set_player_control(player_id(), true, 0, false);
				if (does_cam_exist(uParam1->f_410.f_17))
				{
					set_cam_active(uParam1->f_410.f_17, false);
					render_script_cams(false, false, 3000, true, false, 0);
					destroy_cam(uParam1->f_410.f_17, false);
					set_gameplay_cam_relative_heading(180f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				func_215(uParam0, uParam1, 0, 1, 1);
				uParam1->f_410.f_29 = 0;
			}
			break;
	}
}

bool func_654(int iParam0, int iParam1)
{
	if (!func_655(iParam0))
	{
		return false;
	}
	if (func_41() == -1)
	{
		return (Global_1915715->f_3[iParam0]->f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051439->f_72[iParam0]->f_1 && iParam1) != 0;
	}
	return false;
}

bool func_655(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

void func_656(int iParam0, int iParam1)
{
	if (!func_655(iParam0))
	{
		return;
	}
	if (func_41() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 || iParam1);
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
	}
}

void func_657(int iParam0, int iParam1)
{
	if (!func_655(iParam0))
	{
		return;
	}
	if (func_41() == -1)
	{
		Global_1915715->f_3[iParam0]->f_6 = (Global_1915715->f_3[iParam0]->f_6 - (Global_1915715->f_3[iParam0]->f_6 && iParam1));
	}
	else
	{
		Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 - (Global_1051439->f_72[iParam0]->f_1 && iParam1));
	}
}

void func_658(int iParam0)
{
	Global_1915715->f_18247 = iParam0;
}

bool func_659(struct<2> Param0)
{
	iVar0 = func_928(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_660(var uParam0, var uParam1)
{
	return uParam0;
}

int func_661(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_662(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_49())
	{
		return 636925055;
	}
	return -963477619;
}

int func_663(int iParam0, bool bParam1)
{
	iVar0 = floor(func_929(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_664(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_665(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_930(iParam0))
	{
		return true;
	}
	return !func_664(iParam0, 0);
}

bool func_666(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_726(iParam0))
	{
		return false;
	}
	if (func_930(iParam0))
	{
		return false;
	}
	if (func_931(iParam0))
	{
		return true;
	}
	return func_932(iParam0);
}

int func_667(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_933(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_668(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

char* func_669(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_670(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

void func_671(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

int func_672(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	if (network_is_player_active((*Global_1131196)[iParam0]->f_9))
	{
		iVar1 = _0x901e0dc25080c8b9((*Global_1131196)[iParam0]->f_9);
		if (_0xd6f6acf4392187fb(iVar1) && _0x0f99f6436528a089(iVar1))
		{
			iVar0 = _0x149a2751ab66ac02(iVar1);
		}
	}
	return func_934(iVar0);
}

void func_673(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (network_is_participant_active(int_to_participantindex(iVar1)))
		{
			iVar0 = (iVar0 || (*uParam1)[iVar1]->f_2[iParam2]) // PointerArith;
		}
		iVar1++;
	}
	if (uParam0->f_9[iParam2]->f_5 != iVar0)
	{
		uParam0->f_9[iParam2]->f_5 = iVar0;
	}
}

void func_674(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_935(uParam0, iParam3))
	{
		if (iParam3 == 0 && (func_381(*uParam2, 128) || func_266(*uParam2, 32)))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			func_936(uParam0, iParam3, 3);
			return;
		}
	}
	if (iParam3 == 0)
	{
		if (func_381(*uParam2, 128))
		{
			func_936(uParam0, iParam3, 1);
			return;
		}
		if (func_381(*uParam2, 256) || func_266(*uParam2, 32))
		{
			return;
		}
		if (func_252(uParam0, 4))
		{
			if (func_381(*uParam2, 512))
			{
				return;
			}
			func_802(uParam1, iParam3, 8, uParam2->f_1);
			func_402(uParam0, 4);
			func_402(uParam0, 8);
		}
		iVar1 = _0x4be6c13a45cca8ec(uParam2->f_2);
		iVar2 = func_937(iVar1);
		iVar3 = func_391(0, iVar2, 0, -1);
		iVar4 = func_876(iVar3);
		func_938(uParam0, iParam3, iVar4);
	}
}

void func_675(var uParam0, var uParam1, int iParam2)
{
	if (!func_381(*uParam1, 128))
	{
		if (!func_939(*uParam1, &iVar0, 0))
		{
			return;
		}
		uParam0->f_9[iParam2] = iVar0;
		func_940(uParam0, iParam2, get_entity_model(net_to_ent(iVar0)));
		func_936(uParam0, iParam2, 3);
		func_941(uParam0, uParam1, iParam2);
	}
}

void func_676(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3746 == 0)
	{
		uParam1->f_3746 = _get_system_time();
		return;
	}
	else if ((_get_system_time() - uParam1->f_3746) < 5000)
	{
		return;
	}
	else
	{
		uParam1->f_3746 = _get_system_time();
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_801(*uParam1, 256))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_936(uParam0, iParam2, 3);
	}
}

void func_677(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		func_942(uParam0, iParam1, -342750710);
		if (network_does_network_id_exist(&(uParam0->f_9[iParam1])))
		{
			func_936(uParam0, iParam1, 5);
		}
		else
		{
			func_936(uParam0, iParam1, 4);
		}
	}
}

void func_678(var uParam0, var uParam1, int iParam2)
{
	if (func_556(uParam0, iParam2, 2) && &uParam0->f_38[0] == 3)
	{
		if (iParam2 == 0 && !_does_scenario_point_exist(uParam1->f_63))
		{
			return;
		}
		func_936(uParam0, iParam2, 5);
	}
}

void func_679(var uParam0, var uParam1, int iParam2)
{
	if (!network_does_network_id_exist(&(uParam0->f_9[iParam2])))
	{
		if (uParam1->f_25[iParam2]->f_4 > 100)
		{
			func_936(uParam0, iParam2, 8);
			return;
		}
		vVar0 = { uParam0->f_6 };
		if (func_381(*uParam1, 128))
		{
			uParam0->f_9[iParam2] = 0;
			func_936(uParam0, iParam2, 1);
			return;
		}
		else if (func_943(uParam1, iParam2))
		{
			uParam0->f_9[iParam2] = 0;
			func_936(uParam0, iParam2, 2);
			return;
		}
		else if (func_556(uParam0, iParam2, 8))
		{
			fVar5 = ((func_253(*uParam0) * 2f) + (1f * IntToFloat(uParam1->f_25[iParam2]->f_4)));
			vVar0 = { func_944(vVar0, fVar5, 0f) };
			if (!func_945(&vVar0, 1, 3, 0, 0))
			{
				uParam1->f_25[iParam2]->f_4++;
				return;
			}
			if (absf((uParam0->f_6.f_2 - vVar0.z)) > 3f)
			{
				uParam1->f_25[iParam2]->f_4++;
				return;
			}
			fVar5 = 1f;
			fVar6 = 100f;
			if (is_sphere_visible_to_player(player_id(), vVar0, fVar5, fVar6))
			{
				uParam1->f_25[iParam2]->f_4++;
				return;
			}
			if (is_sphere_visible_to_another_machine(vVar0, fVar5, fVar6))
			{
				uParam1->f_25[iParam2]->f_4++;
				return;
			}
			vVar7 = { uParam0->f_6 };
			if (_does_scenario_point_exist(uParam1->f_63))
			{
				vVar7 = { _get_scenario_point_coords(uParam1->f_63, true) };
			}
			fVar3 = func_858(vVar0, vVar7, 1);
		}
		else if (_does_scenario_point_exist(uParam1->f_63))
		{
			iVar4 = uParam1->f_63;
			vVar0 = { _get_scenario_point_coords(iVar4, true) };
			fVar3 = _get_scenario_point_heading(iVar4, true);
		}
		else
		{
			func_936(uParam0, iParam2, 8);
			return;
		}
		if (func_43(vVar0))
		{
			func_936(uParam0, iParam2, 8);
			return;
		}
		if (!func_946(uParam0->f_9[iParam2], uParam0->f_9[iParam2]->f_4, vVar0, fVar3, 1, 0, 0, 1, 1))
		{
			func_936(uParam0, iParam2, 8);
			return;
		}
		if (network_does_network_id_exist(&(uParam0->f_9[iParam2])))
		{
			iVar10 = net_to_ped(&(uParam0->f_9[iParam2]));
			if (does_entity_exist(iVar10) && !is_entity_dead(iVar10))
			{
				if (!_0xb07d3185e11657a5(iVar10))
				{
					set_entity_as_mission_entity(iVar10, true, false);
				}
				remove_all_ped_weapons(iVar10, true, true);
				func_941(uParam0, uParam1, iParam2);
				if (iParam2 == 0)
				{
					decor_set_int(iVar10, "iCampFollowerCamp", *uParam1);
					func_804(uParam1, iVar10);
					func_947(iVar10, 379542007, 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_947(iVar10, -183018591, 0, 1, 0, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					func_948(&(uParam0->f_9[iParam2]));
				}
				if (_does_scenario_point_exist(iVar4))
				{
					iVar11 = func_950(func_949(uParam1->f_3));
					if (iVar11 != 0 && uParam1->f_18 == 5)
					{
						_task_use_scenario_point(iVar10, iVar4, 0, 0, false, true, -458796310, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(iVar10, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					set_ped_keep_task(iVar10, true);
					set_ped_can_ragdoll(iVar10, false);
				}
			}
		}
	}
	func_936(uParam0, iParam2, 6);
}

void func_680(var uParam0, var uParam1, int iParam2)
{
	if (!network_does_network_id_exist(&(uParam0->f_9[iParam2])))
	{
		if (iParam2 == 0)
		{
			if (func_381(*uParam1, 256))
			{
				func_936(uParam0, iParam2, 2);
			}
			else if (func_381(*uParam1, 128))
			{
				func_936(uParam0, iParam2, 1);
			}
			else
			{
				func_936(uParam0, iParam2, 8);
			}
		}
		else
		{
			func_936(uParam0, iParam2, 8);
		}
		return;
	}
	if (iParam2 == 0)
	{
		iVar0 = net_to_ped(&(uParam0->f_9[iParam2]));
		if (does_entity_exist(iVar0))
		{
			if (vdist(get_entity_coords(iVar0, true, false), uParam0->f_6) >= (Global_1901947->f_584.f_1 - 20f))
			{
				func_936(uParam0, iParam2, 8);
			}
			else if (is_entity_dead(iVar0))
			{
				if (!func_252(uParam0, 4))
				{
					func_398(uParam0, 4);
					func_951(*uParam1);
				}
				else if (!func_252(uParam0, 8))
				{
					if (func_381(*uParam1, 512))
					{
						func_398(uParam0, 8);
					}
				}
				else if (!func_381(*uParam1, 512))
				{
					func_936(uParam0, iParam2, 7);
				}
			}
		}
	}
	func_952(uParam0, uParam1, iParam2);
}

void func_681(var uParam0, int iParam1)
{
	if (network_does_network_id_exist(&(uParam0->f_9[iParam1])))
	{
		return;
	}
	if (func_556(uParam0, iParam1, 1))
	{
		return;
	}
	func_953(uParam0, iParam1);
}

bool func_682()
{
	if (Global_1901947->f_44.f_2 == 1788394582)
	{
		iVar0 = Global_1296859->f_21;
		if (iVar0 > Global_1901947->f_44.f_3 && iVar0 < Global_1901947->f_44.f_4)
		{
			return true;
		}
	}
	return false;
}

int func_683(var uParam0, int iParam1)
{
	if (func_954(uParam0->f_10, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_684(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return (func_955(iParam0) && (*Global_1131196)[iParam0]->f_18.f_1 != 0);
}

var func_685(int iParam0)
{
	Var0 = { func_699(-746839750, func_698(iParam0)) };
	return func_956(Var0);
}

int func_686(int iParam0)
{
	return &(Global_1109804->f_5737[iParam0]);
}

var func_687(int iParam0)
{
	return (*Global_1297717)[iParam0]->f_1;
}

void func_688(var uParam0, bool bParam1)
{
	if (bParam1 || !func_416(uParam0))
	{
		func_417(uParam0);
	}
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 30:
			return 4;
		case 1:
			return 5;
		case 3:
			return 6;
		case 5:
			return 7;
		case 6:
			return 8;
		case 7:
			return 9;
		case 11:
			return 12;
		case 9:
			return 10;
		case 10:
			return 11;
		case 8:
			return 2;
		case 12:
			return 13;
		case 35:
			return 15;
		case 34:
			return 14;
		case 13:
			return 3;
		case 14:
			return 16;
		case 15:
			return 17;
		case 16:
			return 18;
		case 26:
			return 21;
		case 27:
			return 22;
		case 28:
			return 23;
		case 29:
			return 24;
		case 33:
			return 25;
		case 32:
			return 26;
		case 36:
			return 27;
		case 18:
		case 19:
		case 20:
		case 21:
			return 19;
		case 22:
		case 23:
		case 24:
		case 25:
			return 20;
		default:
			break;
	}
	return 0;
}

bool func_690(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_957(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

int func_691(int iParam0)
{
	iVar0 = -1;
	if (!network_is_player_active(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return (*Global_1134390)[iVar1]->f_74.f_1;
}

bool func_692(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			if (func_16(uParam0, iParam1, iVar0))
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	*uParam2 = -1;
	return false;
}

bool func_693()
{
	return func_958(1584357097);
}

bool func_694(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_695(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_959(uParam0, 1);
	func_960(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_696(var uParam0)
{
	return func_694(*uParam0, 2);
}

int func_697(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case 130824026:
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case -1239926065:
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		case -465704507:
			return -1719093715;
		default:
			break;
	}
	return 0;
}

struct<2> func_699(int iParam0, bool bParam1)
{
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	return Var0;
}

var func_700(struct<2> Param0)
{
	uVar0 = func_701(Param0, -1);
	return uVar0;
}

int func_701(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return iParam2;
	}
	if (!stat_id_get_int(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

void func_702(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_254(iParam2);
	iVar1 = func_961(iVar0);
	iVar2 = func_112(iParam2);
	if (func_962(iVar0))
	{
		if (func_963(*uParam0, iVar2, iVar1, &uVar3))
		{
			uParam0->f_38[iParam2]->f_3 = iVar0;
			if (!func_964(iVar0, *uParam1, &(uParam0->f_38[iParam2]->f_4), &(uParam0->f_38[iParam2]->f_7), iVar2))
			{
				func_671(uParam0, iParam2, -1);
				return;
			}
			func_585(&(uParam0->f_38[iParam2]->f_4), 3f);
			if (iVar0 == 10)
			{
				func_965(uParam0, uParam1, func_112(iParam2));
			}
			func_352(uParam0, uParam1, iParam2);
			func_671(uParam0, iParam2, 1);
		}
		else
		{
			func_671(uParam0, iParam2, -1);
		}
	}
	else if (func_966(*uParam0, iVar2, iVar1, &vVar4, &uVar7, &uVar3))
	{
		uParam0->f_38[iParam2]->f_3 = iVar0;
		uParam0->f_38[iParam2]->f_4 = { vVar4 };
		func_585(&(uParam0->f_38[iParam2]->f_4), 3f);
		uParam0->f_38[iParam2]->f_7 = uVar7;
		if (iVar0 == 10)
		{
			func_965(uParam0, uParam1, func_112(iParam2));
		}
		func_352(uParam0, uParam1, iParam2);
		func_671(uParam0, iParam2, 1);
	}
	else
	{
		func_671(uParam0, iParam2, -1);
	}
}

void func_703(var uParam0, int iParam1)
{
	if (uParam0->f_38[iParam1]->f_1 != 0)
	{
		func_671(uParam0, iParam1, 2);
	}
}

bool func_704(var uParam0, var uParam1, int iParam2)
{
	bVar0 = true;
	iVar1 = 0;
	if (uParam1->f_66[iParam2]->f_5[0]->f_1 != 0 && &uParam1->f_66[iParam2] <= 2)
	{
		bVar0 = false;
	}
	iVar2 = func_876(uParam0->f_38[iParam2]->f_1);
	if (iVar2 != 0)
	{
		request_model(iVar2, false);
		if (!has_model_loaded(iVar2))
		{
			return false;
		}
		if (is_model_a_vehicle(iVar2))
		{
			vVar3 = { func_877(uParam0->f_38[iParam2]->f_1) };
			vVar6 = { _get_object_offset_from_coords(uParam0->f_38[iParam2]->f_4, uParam0->f_38[iParam2]->f_7, vVar3) };
			if (func_967(&(uParam0->f_38[iParam2]->f_8), iVar2, vVar6, uParam0->f_38[iParam2]->f_7, 1, 1, 0, 1))
			{
				iVar1 = 1;
				iVar9 = net_to_veh(uParam0->f_38[iParam2]->f_8);
				if (!is_entity_dead(iVar9))
				{
					set_entity_visible_in_cutscene(iVar9, 1, 0, 256);
					if (uParam0->f_38[iParam2]->f_1 == 59)
					{
						_0x445d7d8ea66e373e(iVar9, 0, get_entity_coords(iVar9, true, false), 0f, 0f, 0f, -1f, 0, 0, 0, 0, 0, 0, 0);
					}
				}
			}
		}
		else if (!does_entity_exist(uParam1->f_66[iParam2]->f_3))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		func_671(uParam0, iParam2, 3);
	}
	return iVar1;
}

void func_705(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (uParam0->f_38[iParam3]->f_3)
	{
		case 10:
			func_968(uParam0, uParam2, iParam3);
			break;
	}
}

void func_706(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_351(uParam0, uParam1, uParam2, iParam3))
	{
		return;
	}
	func_671(uParam0, iParam3, 6);
}

void func_707(var uParam0, var uParam1, int iParam2)
{
	if (func_67(uParam0, uParam1, iParam2, 0, 1))
	{
		func_671(uParam0, iParam2, 1);
	}
}

void func_708(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!network_is_player_active(&(uParam0->f_16[iVar0])))
		{
		}
		else if (!network_is_player_a_participant(&(uParam0->f_16[iVar0])))
		{
			uParam0->f_16[iVar0]->f_1 = 0;
		}
		else
		{
			iVar2 = &uParam0->f_16[iVar0];
			if (network_does_network_id_exist(uParam0->f_16[iVar0]->f_2))
			{
				iVar3 = net_to_ent(uParam0->f_16[iVar0]->f_2);
			}
			iVar4 = network_get_participant_index(&(uParam0->f_16[iVar0]));
			iVar5 = iVar4;
			switch (uParam0->f_16[iVar0]->f_1)
			{
				case 0:
					if ((*uParam1)[iVar5]->f_33 != 0)
					{
						if (!has_model_loaded(2042565497))
						{
							request_model(2042565497, false);
							Jump @597; //curOff = 202
						}
						else
						{
							uParam0->f_16[iVar0]->f_1 = 1;
						}
					}
					break;
				case 1:
					iVar1 = func_54(uParam2, &(uParam0->f_16[iVar0]));
					if (iVar1 == -1)
					{
					}
					else if (&uParam0->f_38[iVar1] != 3)
					{
					}
					else if (!func_969(uParam1, iVar5))
					{
					}
					else
					{
						if (!does_entity_exist(iVar3))
						{
							func_970(&(uParam0->f_16[iVar0]->f_2), 2042565497, (*uParam1)[iVar5]->f_34, 1, 0);
							set_entity_heading(net_to_obj(uParam0->f_16[iVar0]->f_2), (*uParam1)[iVar5]->f_34.f_3);
							freeze_entity_position(net_to_obj(uParam0->f_16[iVar0]->f_2), true);
							func_323(16384);
							uParam0->f_16[iVar0]->f_1 = 2;
						}
						else
						{
							uParam0->f_16[iVar0]->f_1 = 3;
						}
						Jump @597; //curOff = 398
						iVar1 = func_54(uParam2, &(uParam0->f_16[iVar0]));
						if (((func_413(16384, iVar2) || func_43((*uParam1)[iVar5]->f_34)) || iVar1 == -1) || &uParam0->f_38[iVar1] > 3)
						{
							uParam0->f_16[iVar0]->f_1 = 3;
						}
						if (!does_entity_exist(iVar3))
						{
							uParam0->f_16[iVar0]->f_1 = 0;
						}
						Jump @597; //curOff = 507
						if (does_entity_exist(iVar3))
						{
							if (network_does_network_id_exist(uParam0->f_16[iVar0]->f_2) && !network_has_control_of_entity(iVar3))
							{
								network_request_control_of_network_id(uParam0->f_16[iVar0]->f_2);
							}
							else
							{
								uParam0->f_16[iVar0]->f_2 = 0;
								delete_entity(&iVar3);
								uParam0->f_16[iVar0]->f_1 = 0;
							}
							iVar0++;
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_709(int iParam0)
{
	return iParam0 != 0;
}

bool func_710(int iParam0)
{
	return func_558(iParam0, 2);
}

void func_711(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < bParam0->f_1)
	{
		func_182(bParam0->f_1[iVar0], 1, 1);
		iVar0++;
	}
}

void func_712(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (_uistatemachine_request_transition(-1624772174, 1383188602))
		{
		}
		else
		{
			_close_app_by_hash(-1624772174);
		}
	}
	else
	{
		_close_app_by_hash(-1624772174);
	}
	func_971(bParam0, 256);
	_0xd962f8579d702db5();
}

bool func_713()
{
	if (decor_exist_on(player_ped_id(), "player_crafting_active"))
	{
		return decor_get_bool(player_ped_id(), "player_crafting_active");
	}
	return false;
}

void func_714(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913694->f_1582 = bParam0;
	decor_set_bool(Global_34, "player_crafting_active", bParam0);
}

void func_715(bool bParam0)
{
	if (_does_anim_scene_exist(bParam0->f_48))
	{
		reset_anim_scene(bParam0->f_48, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_49))
	{
		reset_anim_scene(bParam0->f_49, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_50))
	{
		reset_anim_scene(bParam0->f_50, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_51))
	{
		reset_anim_scene(bParam0->f_51, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_52))
	{
		reset_anim_scene(bParam0->f_52, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_53))
	{
		reset_anim_scene(bParam0->f_53, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_54))
	{
		reset_anim_scene(bParam0->f_54, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_55))
	{
		reset_anim_scene(bParam0->f_55, 0);
	}
	if (_does_anim_scene_exist(bParam0->f_56))
	{
		reset_anim_scene(bParam0->f_56, 0);
	}
	func_716(&(bParam0->f_63), &(bParam0->f_64));
	func_716(&(bParam0->f_65), &(bParam0->f_66));
	func_716(&(bParam0->f_67), &(bParam0->f_68));
}

bool func_716(int* iParam0, var uParam1)
{
	if (!does_entity_exist(*iParam0))
	{
		return true;
	}
	if (network_has_control_of_entity(*iParam0))
	{
		delete_object(iParam0);
		return true;
	}
	*uParam1 = 1;
	network_request_control_of_entity(*iParam0);
	return false;
}

bool func_717(bool bParam0, bool bParam1)
{
	return func_183(*bParam0, bParam1);
}

void func_718(bool bParam0, int iParam1)
{
	if (bParam0->f_10 != iParam1)
	{
		bParam0->f_10 = iParam1;
		func_972(bParam0);
	}
}

void func_719(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_973(11, 1, 0);
		iVar0++;
	}
	if (func_974(bParam0, 0))
	{
		func_975(40);
	}
	else
	{
		func_975(39);
	}
}

void func_720(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_721(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_722(int iParam0)
{
	if (func_439(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_723(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_724(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_725()
{
	if (!func_275())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_726(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_727(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_442(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_728(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_728(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

char* func_729()
{
	return "uiItemMetapedPreloadRequestMade";
}

char* func_730()
{
	return "uiItemMetapedPreloadRequest";
}

int func_731(var uParam0)
{
	if (!does_entity_exist(uParam0->f_2207.f_107))
	{
		return Global_34;
	}
	return uParam0->f_2207.f_107;
}

bool func_732(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952637->f_1057 == iParam0;
	}
	return Global_1952637->f_1057 != 0;
}

void func_733(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_976(Global_1952637->f_2843);
		func_977(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_978(iParam3))
	{
		func_979(0);
	}
	if (func_204(32768))
	{
		func_980(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_981(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_981(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_205(2, 0, iVar0, 0, 0);
		func_205(4, 0, 0, 0, 0);
		func_205(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_205(2, 0, iVar0, iParam0, 0);
	}
	func_456();
}

void func_734(var uParam0, int iParam1)
{
	func_184(&(uParam0->f_2182), iParam1);
}

void func_735(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_982(Global_34) && is_player_teleport_active())
	{
	}
	if (func_983(iParam0))
	{
		if (func_647(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_20(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_735(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_735(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_20(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_20(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_20(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_20(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_20(iParam5, 129))
	{
		if (func_20(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_20(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_20(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_20(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_983(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_20(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_20(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_736(int iParam0)
{
	Global_1915715->f_22477 = iParam0;
}

bool func_737(int iParam0)
{
	if ((((((func_984(iParam0) && iParam0 != -999503751) && iParam0 != 502936876) && iParam0 != -1740828670) && iParam0 != -1044137471) && iParam0 != 344283346) && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_738(vector3 vParam0)
{
	if (Global_1139381->f_5079.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*Global_1139381->f_5079.f_326[Global_1139381->f_5079.f_324] = { vParam0 };
	Global_1139381->f_5079.f_324 = (Global_1139381->f_5079.f_324 + 1 % 50);
	Global_1139381->f_5079.f_325++;
}

void func_739(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 8, 3, &uParam1);
}

bool func_740(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_741(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_742(var uParam0)
{
	bVar0 = *uParam0;
	if (!func_331(bVar0, 0))
	{
		return -1;
	}
	if (bVar0 == 2131771850)
	{
		return 3;
	}
	if (func_459(bVar0) != -999503751)
	{
		return -1;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		bVar3 = &uParam0->f_1[iVar2];
		if (!func_331(bVar3, 0))
		{
		}
		else if (!func_985(func_459(bVar3)))
		{
		}
		else
		{
			iVar4 = func_986(bVar3);
			if (iVar4 != -1)
			{
				iVar1 = (iVar1 + iVar4);
			}
		}
		iVar2++;
	}
	if (iVar1 >= 4)
	{
		return 2;
	}
	if (iVar1 <= 2)
	{
		return 0;
	}
	return 1;
}

void func_743(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_987(uParam0->f_1[iVar0], 2))
		{
			if (func_988(iVar0, iParam1))
			{
				vVar4 = { func_989(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_990(iVar0, 4))
				{
					func_991(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_992(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1952637->f_83[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

int func_744(bool bParam0)
{
	switch (bParam0)
	{
		case 491602716:
			return 0;
		case 217155793:
			return 1;
		case 97391779:
			return 2;
		case -808817534:
			return 3;
		case 1270922359:
			return 4;
		case -2011879201:
			return 5;
		case -1063340820:
			return 6;
		case 2127262701:
			return 7;
		case -1323870201:
			return 8;
		case 1632140501:
			return 9;
		case 967218463:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_745(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam2 == 1378879298)
	{
		if (!func_993(uParam0, bParam2))
		{
			return false;
		}
	}
	else if (!func_994(uParam0, iParam3, bParam2) && !func_995(uParam0, bParam2, bParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_204(32768) && iParam6 == 0)
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]))
		{
			func_996(1108822547);
		}
		else
		{
			func_980(1108822547);
		}
	}
	if (bParam5)
	{
		func_997(2);
	}
	return true;
}

int func_746(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 64;
		case -1589052195:
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case -1514969696:
			return 78;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 67;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 66;
		case -484540420:
			return 36;
		case -483049716:
			return 75;
		case -400566333:
			return 14;
		case -391623459:
			return 73;
		case -377364039:
			return 60;
		case -374018223:
			return 62;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 65;
		case -77989269:
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case 146438590:
			return 90;
		case 194431787:
			return 61;
		case 198507096:
			return 72;
		case 222365748:
			return 85;
		case 295732030:
			return 40;
		case 340029732:
			return 70;
		case 374652900:
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 63;
		case 641300611:
			return 88;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 86;
		case 857703729:
			return 48;
		case 874892169:
			return 95;
		case 886907851:
			return 16;
		case 920214733:
			return 91;
		case 995847993:
			return 68;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 76;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1356998909:
			return 80;
		case 1447875596:
			return 82;
		case 1495919075:
			return 74;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1727267699:
			return 69;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 77;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 84;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
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

bool func_747(int iParam0)
{
	iVar0 = func_746(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_748(var uParam0)
{
	if (uParam0->f_2 != 0)
	{
		fVar0 = func_998(794259616, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_749(int iParam0)
{
	if (!func_747(iParam0))
	{
		return;
	}
	iVar0 = func_746(iParam0, 1);
	if (!func_999(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] - 1);
	if ((*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = 0;
	Global_1146212->f_2169[iVar0]->f_204 = 0;
	if (!func_1000(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1001(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] - 1);
	if (&(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] != &Global_1146212->f_2169[iVar0])
		{
		}
		else
		{
			(*Global_1146212->f_47561[iVar1])[iVar2] = -1;
			Global_1146212->f_47561[iVar1]->f_23 = (Global_1146212->f_47561[iVar1]->f_23 - 1);
			(*Global_1146212->f_47561[iVar1])[iVar2] = Global_1146212->f_47561[iVar1][Global_1146212->f_47561[iVar1]->f_23];
			(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_750(int iParam0)
{
	iVar0 = func_751(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_751(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2116044775:
			return 52;
		case -2103256604:
			return 12;
		case -2073453362:
			return 11;
		case -2041025962:
			return 64;
		case -1930487908:
			return 2;
		case -1913155192:
			return 41;
		case -1771755729:
			return 28;
		case -1751121159:
			return 53;
		case -1730553768:
			return 3;
		case -1655894020:
			return 25;
		case -1651690657:
			return 65;
		case -1604680733:
			return 10;
		case -1583192324:
			return 66;
		case -1511575465:
			return 34;
		case -1486292178:
			return 67;
		case -1328991329:
			return 5;
		case -1136429013:
			return 45;
		case -1115905480:
			return 31;
		case -1026481003:
			return 6;
		case -966751997:
			return 13;
		case -824728332:
			return 33;
		case -718742742:
			return 59;
		case -698163919:
			return 32;
		case -662966589:
			return 1;
		case -549693655:
			return 14;
		case -488644714:
			return 4;
		case -430422799:
			return 36;
		case -350459285:
			return 68;
		case -268774736:
			return 40;
		case -220644763:
			return 26;
		case -199042163:
			return 60;
		case -191252842:
			return 22;
		case -166765081:
			return 55;
		case -106166013:
			return 19;
		case -1:
			return 0;
		case 50982971:
			return 17;
		case 125946764:
			return 20;
		case 367160929:
			return 61;
		case 482459685:
			return 24;
		case 492808644:
			return 18;
		case 539654946:
			return 23;
		case 656937467:
			return 39;
		case 692490127:
			return 15;
		case 718630298:
			return 56;
		case 785261183:
			return 48;
		case 793826854:
			return 21;
		case 892655276:
			return 46;
		case 907911269:
			return 27;
		case 955977457:
			return 43;
		case 966561884:
			return 7;
		case 988751276:
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case 1204983685:
			return 37;
		case 1242495215:
			return 9;
		case 1254069395:
			return 63;
		case 1341326366:
			return 58;
		case 1348456703:
			return 35;
		case 1398483650:
			return 50;
		case 1442295985:
			return 38;
		case 1527078018:
			return 42;
		case 1565429580:
			return 57;
		case 1696309427:
			return 44;
		case 1870637439:
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case 2093700568:
			return 47;
		case 2113555978:
			return 29;
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

void func_752(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1002();
			break;
		case -2103256604:
			func_1003();
			break;
		case 692490127:
			_remove_ped_wound_effect(iVar0, 0f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 0, 0);
			_0xc5cb91d65852ed7e(func_1004(iParam0));
			break;
		case 1870637439:
			_0xc5cb91d65852ed7e(func_1004(iParam0));
			break;
		case 492808644:
			_0xc5cb91d65852ed7e(func_1004(iParam0));
			break;
		case 125946764:
			_0x3fc4c027fd0936f4(5);
			func_276(105, 1);
			break;
		case -106166013:
			_0xc5cb91d65852ed7e(func_1004(iParam0));
			break;
		case 1204983685:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			disable_attribute_overpower(iVar0, 1);
			disable_attribute_overpower(iVar0, 18);
			break;
		case 1442295985:
			_0x442b4347b6ec36e8(iVar0, 0, true);
			break;
		case 656937467:
			_0x3fc4c027fd0936f4(15);
			break;
		case -430422799:
			disable_attribute_overpower(iVar0, 0);
			disable_attribute_overpower(iVar0, 19);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "");
			break;
		case -1655894020:
		case 482459685:
		case 907911269:
			func_1006(func_1005(iParam0));
			break;
		case -1771755729:
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 2113555978:
			_0xaf4d239b8903fcbe();
			_0x768e81ae285a4b67(iVar1, 0);
			_0xe910932f4b30be23(iVar1);
			_0x0e9057a9da78d0f8(iVar1, 8);
			_0x263d69767f76059c(iVar1, 0);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 1);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 0);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 1f);
			_0x6fa957d1b55941c1(iVar1, -1f);
			break;
		case 793826854:
			func_1007();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_999(17);
			break;
		case -824728332:
			func_999(16);
			break;
	}
}

bool func_753(int iParam0)
{
	iVar0 = func_754(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_754(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1290685708:
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case -290151400:
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_755(int iParam0)
{
	iVar0 = func_1008(iParam0);
	Var1.f_3 = 1065353216;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1065353216;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1146212->f_35859.f_11700)
	{
		iVar64 = func_224(&(Global_1146212->f_35859.f_9503[iVar65]), 1);
		if (Global_1146212->f_35859.f_3116[iVar64]->f_4 != iParam0)
		{
		}
		else if (&Global_1146212->f_35859.f_9503[iVar65] == iVar0)
		{
		}
		else if (!func_1009(&(Global_1146212->f_35859.f_9503[iVar65]), Global_1146212->f_35859.f_9503[iVar65]->f_1))
		{
		}
		else
		{
			Var1 = { func_1010(&(Global_1146212->f_35859.f_9503[iVar65])) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_756(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_757(int iParam0)
{
	if (!func_747(iParam0))
	{
		return;
	}
	iVar0 = func_746(iParam0, 1);
	if (!func_999(&(Global_1146212->f_2169[iVar0])))
	{
		return;
	}
	(*(*Global_1146212)[&Global_1146212->f_2169[iVar0]])[iVar0] = (*Global_1146212)[&Global_1146212->f_2169[iVar0]][iVar0] + 1;
	Global_1146212->f_2169[iVar0]->f_204 = 1;
	if (!func_1000(Global_1146212->f_2169[iVar0]->f_203))
	{
		return;
	}
	iVar1 = func_1001(Global_1146212->f_2169[iVar0]->f_203, 1);
	(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] = &(*Global_1146212)[&Global_1146212->f_2169[iVar0]]->f_96[iVar1] + 1;
	iVar2 = 0;
	while (iVar2 < Global_1146212->f_47561[iVar1]->f_23)
	{
		if (Global_1146212->f_47561[iVar1][iVar2] == &Global_1146212->f_2169[iVar0])
		{
			return;
		}
		iVar2++;
	}
	(*Global_1146212->f_47561[iVar1])[Global_1146212->f_47561[iVar1]->f_23] = &Global_1146212->f_2169[iVar0];
	Global_1146212->f_47561[iVar1]->f_23++;
}

bool func_758(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1011(794259616, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_759(int iParam0)
{
	iVar0 = player_ped_id();
	iVar1 = player_id();
	switch (iParam0)
	{
		case -1730553768:
		case -488644714:
			func_1002();
			break;
		case -2103256604:
			func_1003();
			break;
		case 692490127:
			_set_ped_wound_effect(iVar0, 2, 2.019411E-41f, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case 50982971:
			_0xa5950e16b8f31052(iVar0, 1, 0);
			animpostfx_play(func_1004(iParam0));
			break;
		case 1870637439:
			animpostfx_play(func_1004(iParam0));
			break;
		case 492808644:
			animpostfx_play(func_1004(iParam0));
			break;
		case 125946764:
			_0xfb6e111908502871(5);
			func_276(104, 1);
			break;
		case -106166013:
			animpostfx_play(func_1004(iParam0));
			break;
		case 1204983685:
			break;
		case 656937467:
			_0xfb6e111908502871(15);
			break;
		case 539654946:
			_0x5f8e0303c229c84b(iVar1, "focusfire");
			break;
		case 482459685:
			iVar2 = func_1005(iParam0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1012(iParam0, 0));
			func_1013(iVar2, 0, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1012(iParam0, 1));
			func_1013(iVar2, 1, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1012(iParam0, 2));
			func_1013(iVar2, 2, 1, iVar3, 0);
			iVar3 = get_entity_bone_index_by_name(iVar0, func_1012(iParam0, 3));
			func_1013(iVar2, 2, 1, iVar3, 0);
			break;
		case -1655894020:
			iVar2 = func_1005(iParam0);
			func_1013(iVar2, 3, 1, -1, 1);
			break;
		case 907911269:
			iVar2 = func_1005(iParam0);
			func_1013(iVar2, 4, 1, -1, 0);
			break;
		case -220644763:
			_0x768e81ae285a4b67(iVar1, 1014693585);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case -1771755729:
			_0x768e81ae285a4b67(iVar1, 1936842089);
			_0x2b12b6fc8b8772ab(iVar1, 8);
			_0x131e294ef60160df(iVar1, 0f, 0f, 0f, 1f, 8);
			_0x263d69767f76059c(iVar1, 1);
			break;
		case 2113555978:
			_0x249cd6b7285536f2(0f, 2f, 2f);
			_0x768e81ae285a4b67(iVar1, 1979474018);
			_0x2b12b6fc8b8772ab(iVar1, 25);
			_0x263d69767f76059c(iVar1, 2);
			break;
		case 785261183:
			_0xce285a4413b00b7f(iVar1, 0);
			break;
		case 1898374676:
			_0x39363dfd04e91496(iVar1, 1);
			break;
		case 1398483650:
			_0xdfc85c5199045026(iVar1, 0.5f);
			_0x6fa957d1b55941c1(iVar1, 2f);
			break;
		case 793826854:
			func_1014();
			break;
		case -166765081:
		case 718630298:
		case 1341326366:
		case 1565429580:
			func_999(17);
			break;
		case -824728332:
			func_999(16);
			break;
	}
}

void func_760(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1015(iParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	sVar1 = func_1016(iParam0);
	if (is_string_null_or_empty(sVar1))
	{
		return;
	}
	_play_sound_from_entity(sVar0, Global_1296859->f_8, sVar1, false, 0, 0);
}

bool func_761()
{
	if (func_41() != 0)
	{
		return true;
	}
	if (!_unlock_is_unlocked(-1461907237))
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1139381->f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!has_network_time_started())
	{
		return true;
	}
	return false;
}

int func_762(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case -2076515520:
			return 98;
		case -2062348046:
			return 101;
		case -1983943039:
			return 62;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 68;
		case -1924130593:
			return 102;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 92;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 67;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 59;
		case -1376314322:
			return 49;
		case -1330378740:
			return 95;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 93;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 74;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 82;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 105;
		case -469672732:
			return 70;
		case -379874384:
			return 79;
		case -355092128:
			return 75;
		case -326224139:
			return 100;
		case -210274020:
			return 35;
		case -162385832:
			return 73;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 77;
		case -71551190:
			return 96;
		case -32613857:
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case 5611246:
			return 87;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 61;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 69;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 89;
		case 633501950:
			return 36;
		case 640330073:
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case 905156700:
			return 60;
		case 941437279:
			return 72;
		case 946732137:
			return 76;
		case 1232224440:
			return 83;
		case 1248971179:
			return 97;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 78;
		case 1398164246:
			return 90;
		case 1427070667:
			return 81;
		case 1571096148:
			return 54;
		case 1623086000:
			return 65;
		case 1717813521:
			return 71;
		case 1723535349:
			return 58;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 99;
		case 1889309476:
			return 84;
		case 1898201469:
			return 40;
		case 1918774327:
			return 85;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 91;
		case 2018657739:
			return 80;
		case 2021695109:
			return 63;
		case 2078792148:
			return 88;
		case 2108116481:
			return 19;
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

void func_763(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 185;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 7, 7, &uParam1);
}

bool func_764(bool bParam0)
{
	return bParam0;
}

bool func_765(bool bParam0, int iParam1)
{
	if (!func_1017(bParam0, 2))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_0x99c6ea66dfe73757(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_766(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

struct<14> func_767(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (bParam1 != 0 && bParam1 != -1591664384)
	{
		Var0.f_1 = bParam1;
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
	if (bParam5 != 0)
	{
		Var0.f_5 = bParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_768(bool bParam0)
{
	iVar0 = func_489(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_773(923904168, func_627(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_773(923904168, func_627(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_773(923904168, func_627(bParam0), -740156546, 0);
}

void func_769(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_770(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_489(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_771(int iParam0)
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

struct<5> func_772(bool bParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_627(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_485(bParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_773(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(bParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_768(bParam1) };
			if (bParam2 && func_1018(bParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1019(bParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1019(bParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1020(bParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_1021(bParam1) };
			switch (func_459(bParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_1022(bParam0, -1823706425))
			{
				Var0 = { func_773(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(bParam0, -1838434463);
			}
			else if (func_1022(bParam0, -1483207246))
			{
				Var0 = { func_773(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(bParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(bParam0, -1911121386))
			{
				Var0 = { func_773(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1022(bParam0, -1653629781))
			{
				Var0 = { func_773(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(bParam0, 1384535894);
			}
			break;
		default:
			if (_inventory_fits_slot_id(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(bParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_1023(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(bParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_1022(bParam0, -1653629781))
			{
				Var0 = { func_773(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(bParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(bParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_773(bool bParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!func_331(bParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_489(bParam6), &uParam1, bParam0, bParam5, &Var0);
	return Var0;
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -697100746;
		case 7:
			return -999519443;
		case 12:
			return 128291088;
		case 11:
			return -1399517481;
		case 13:
			return 705255263;
		case 14:
			return -471215553;
		case 15:
			return 1371028520;
		case 16:
			return 1479488426;
		case 17:
			return -170363364;
		case 18:
			return -296143963;
		case 19:
			return -575193412;
		case 20:
			return 1364208910;
		case 21:
			return 1936286816;
		case 22:
			return -361115047;
		default:
			break;
	}
	return 0;
}

int func_775(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1152215114;
		case 7:
			return -390042476;
		case 12:
			return -1108993414;
		case 11:
			return -657484822;
		case 13:
			return -138573168;
		case 14:
			return -1834731109;
		case 15:
			return -2024553896;
		case 16:
			return 712011765;
		case 17:
			return -494315136;
		case 18:
			return -399749454;
		case 19:
			return 1428145499;
		case 20:
			return -1318783204;
		case 21:
			return 893948884;
		case 22:
			return -187008013;
		default:
			break;
	}
	return 0;
}

var func_777(int iParam0)
{
	switch (iParam0)
	{
		case -1992167326:
		case -1884014371:
		case -1871413878:
		case -1554232707:
		case -987049424:
		case -724534761:
		case -215258135:
		case -682748:
		case 892234183:
		case 1357161730:
		case 1483778247:
		case 1538293636:
		case 1581179681:
			iVar0 = func_1024(iParam0, 1);
			return &(Global_1137047->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

int func_778(int iParam0, int iParam1)
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

bool func_779()
{
	return Global_1904651->f_8683 != -1;
}

bool func_780()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_781()
{
	if (!func_275())
	{
		return false;
	}
	uVar0 = Global_1904651->f_8685;
	Global_1904651->f_8685 = 0;
	return uVar0;
}

var func_782(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1025() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1026());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1026());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1026());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1027(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_1028(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_1029(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_441(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

bool func_783(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_784(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_489(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_785(int iParam0, int iParam1)
{
	return func_20(*iParam0, iParam1);
}

int func_786(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_1030(iVar0);
	iVar2 = func_1031(iVar0, iVar1);
	return iVar2;
}

struct<2> func_787()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_788(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return 1;
	}
	if (func_107(*Global_1051213) && !func_1032(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_47(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_1033(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return 1;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return 1;
	}
	if (func_49())
	{
		Global_1071686->f_28351 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_107(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return 1;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return 1;
	}
	Global_1071686->f_28351 = 0;
	return 0;
}

bool func_789(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_790(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_489(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_791(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_792(int iParam0)
{
	if (!is_entity_visible(iParam0))
	{
		return true;
	}
	vVar10 = { get_entity_coords(iParam0, true, false) };
	get_model_dimensions(get_entity_model(iParam0), &vVar0, &vVar3);
	vVar6 = { absf(((vVar3.x - vVar0.x) / 2f)), absf(((vVar3.y - vVar0.y) / 2f)), absf(((vVar3.z - vVar0.z) / 2f)) };
	fVar9 = vVar6.x;
	if (fVar9 < vVar6.y)
	{
		fVar9 = vVar6.y;
	}
	if (fVar9 < vVar6.z)
	{
		fVar9 = vVar6.z;
	}
	if (is_sphere_visible(vVar10, fVar9) || is_sphere_visible_to_another_machine(get_entity_coords(iParam0, true, false), fVar9, 1120403456))
	{
		return false;
	}
	return true;
}

void func_793()
{
	if (func_1034(8, 255))
	{
		return;
	}
	func_1035(3);
}

void func_794()
{
	if (func_1034(8, 255))
	{
		return;
	}
	func_1036(3);
}

bool func_795(var uParam0)
{
	return func_694(*uParam0, 2);
}

float func_796()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_797(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_796() - fParam1);
	func_959(uParam0, 1);
	func_960(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_798(var uParam0)
{
	if (((_0x9be7dcb22d32ccbe(uParam0->f_2, player_id()) || is_entity_dead(Global_34)) || _0xb655db7582aec805(Global_34)) || func_273(*uParam0))
	{
		return false;
	}
	if (_is_ped_hogtied(Global_34))
	{
		iVar0 = _0x61914209c36efddb(Global_34);
		if (iVar0 == 5 || iVar0 == 7)
		{
			return false;
		}
	}
	return true;
}

bool func_799(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_20(&((*uParam0)[iParam3]->f_2[iParam1]), iParam2);
}

bool func_800(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			if (is_entity_dead(iParam0))
			{
				if (get_ped_source_of_death(get_ped_index_from_entity_index(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_801(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return func_20((*Global_1134390)[network_player_id_to_int()][iParam0], iParam1);
}

void func_802(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_50((*uParam0)[iParam3]->f_2[iParam1], iParam2);
}

void func_803(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_106((*uParam0)[iParam3]->f_2[iParam1], iParam2);
}

void func_804(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (!network_has_control_of_entity(iParam1))
	{
		return;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam1))
	{
		return;
	}
	iVar0 = _0x4be6c13a45cca8ec(uParam0->f_2);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	iVar1 = func_937(iVar0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar2 = func_391(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return;
	}
	iVar3 = func_1037(iVar2);
	if (iVar3 == 0)
	{
		return;
	}
	if (!_does_metaped_outfit_exist_for_ped_model(iVar3, get_entity_model(iParam1)))
	{
		return;
	}
	if (iVar3 == uParam0->f_3694)
	{
		return;
	}
	_0x0bfa1bd465cdfefd(iParam1);
	_set_ped_body_component(iParam1, iVar3);
	_update_ped_variation(iParam1, false, true, true, true, false);
	uParam0->f_3694 = iVar3;
}

void func_805(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = net_to_ped(&(uParam0->f_9[iParam3]));
	if (!is_entity_dead(iVar0))
	{
		if (network_has_control_of_entity(iVar0))
		{
			if (func_1038(uParam0, iParam3))
			{
				if (!func_799(uParam1, iParam3, 32, uParam2->f_1))
				{
					func_802(uParam1, iParam3, 32, uParam2->f_1);
					if (_0x268b3aebf032a88d(iVar0))
					{
						set_blocking_of_non_temporary_events(iVar0, false);
					}
				}
			}
			else if (func_799(uParam1, iParam3, 32, uParam2->f_1))
			{
				func_803(uParam1, iParam3, 32, uParam2->f_1);
				if (!_0x268b3aebf032a88d(iVar0))
				{
					set_blocking_of_non_temporary_events(iVar0, true);
				}
			}
			if (iParam3 == 0 && _0xd7ad3c7ebaf88c92(iVar0) != 2132950130)
			{
				_0x24c82ef607105faa(iVar0, 2132950130);
			}
		}
	}
}

void func_806(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_798(uParam2))
	{
		if (func_799(uParam1, iParam3, 4, uParam2->f_1))
		{
			func_803(uParam1, iParam3, 4, uParam2->f_1);
		}
		return;
	}
	if (!func_799(uParam1, iParam3, 4, uParam2->f_1))
	{
		if (does_entity_exist(Global_34) && !is_entity_dead(Global_34))
		{
			iVar0 = net_to_ped(&(uParam0->f_9[iParam3]));
			if (((has_entity_been_damaged_by_entity(iVar0, Global_34, 1, 1) || func_800(iVar0, Global_34)) || get_melee_target_for_ped(Global_34) == iVar0) || func_1039(iVar0, 0, &(uParam2->f_3696), &(uParam2->f_25[iParam3]->f_3), 0, 0))
			{
				func_802(uParam1, iParam3, 4, uParam2->f_1);
			}
		}
	}
}

void func_807(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_1040(uParam0, uParam1, uParam2, iParam3);
	switch (uParam2->f_25[iParam3]->f_2)
	{
		case 0:
			func_1041(uParam0, uParam2, iParam3);
			break;
		case 1:
			func_1042(uParam0, uParam2, iParam3);
			break;
		case 2:
			func_1043(uParam0, uParam2, iParam3);
			break;
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
			func_1044(uParam0, uParam2, iParam3);
			break;
	}
}

bool func_808(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_809()
{
	if (func_41() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

bool func_810(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (func_811(bParam0))
	{
		return func_1045(func_812(bParam0, 0), bParam1, 0);
	}
	return _0xdee7b3c76ed664be(bParam0, bParam1) > 0;
}

bool func_811(bool bParam0)
{
	if (func_481(bParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_812(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
		return func_1046(func_764(bParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_813(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1047(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

void func_814(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_459(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_815(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1048(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_488(bParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_569(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1049(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1050(bParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_572(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_573(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_489(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_816(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1048(bParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1023(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_569(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_41() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = bParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_572(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_573(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_489(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_817(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_1051(uParam1->f_8, iParam0, iVar0, 2048) || func_1051(uParam1->f_8, iParam0, iVar0, 32768)) || func_1051(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1051(uParam1->f_8, iParam0, iVar0, 4) || func_1051(uParam1->f_8, iParam0, iVar0, 256)) || func_1051(uParam1->f_8, iParam0, iVar0, 65536)) || func_1051(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_1051(uParam1->f_8, iParam0, iVar0, 1) || func_1051(uParam1->f_8, iParam0, iVar0, 8)) || func_1051(uParam1->f_8, iParam0, iVar0, 65536)) || func_1051(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_1051(uParam1->f_8, iParam0, iVar0, 1) || func_1051(uParam1->f_8, iParam0, iVar0, 16)) || func_1051(uParam1->f_8, iParam0, iVar0, 2)) || func_1051(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1051(uParam1->f_8, iParam0, iVar0, 8) || func_1051(uParam1->f_8, iParam0, iVar0, 4096)) || func_1051(uParam1->f_8, iParam0, iVar0, 256)) || func_1051(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_818(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_819(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_1052(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_1052(iParam1, 2, 0, 0);
	return -1;
}

int func_820(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1052(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_821(int iParam0, int iParam1)
{
	iVar0 = func_470(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_224(iParam1, 1);
	switch (&Global_1146212->f_35859.f_3116[iVar2])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_822(int iParam0, int iParam1, int iParam2)
{
	if (!func_101(iParam1))
	{
		return 0;
	}
	if (!func_471(iParam0))
	{
		return 0;
	}
	iVar0 = func_224(iParam0, 1);
	if (!func_756(iParam2))
	{
		return 0;
	}
	bVar1 = func_473(*Global_1146212->f_35859.f_3116[iVar0]);
	if (bVar1 && func_1053(Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar2 = { func_1054(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (!func_472(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_477(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_478(Global_1146212->f_35859.f_3116[iVar0]->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_823(bool bParam0)
{
	return (is_weapon_valid(bParam0) && bParam0 != -1569615261);
}

int func_824(bool bParam0)
{
	switch (bParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_825(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_826(bool bParam0)
{
	iVar0 = func_459(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

bool func_827(int iParam0, var uParam1)
{
	_copy_memory(uParam1, &uVar5, 2);
	if (!func_1055(&Var0))
	{
		return false;
	}
	if (!func_1056(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 43, 0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 44, iParam0, 0, 1))
	{
		return false;
	}
	uParam1->f_1 = func_1057(Var0, 0);
	*uParam1 = func_1058(Var0, 0);
	return true;
}

var func_828(int iParam0, int iParam1)
{
	iVar0 = func_1059(iParam0, 0, Global_1301323->f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1060(iParam0, iVar0);
}

var func_829(int iParam0)
{
	return Global_1301323->f_52[iParam0]->f_1;
}

int func_830(int iParam0)
{
	iVar0 = func_828(1, iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return &(Global_1301323->f_52[iVar0]);
}

bool func_831(int iParam0, int iParam1, var uParam2)
{
	if (!func_1055(&Var0))
	{
		return false;
	}
	if (!func_1056(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 37, 0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 38, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 43, 0, 0, 1))
	{
		return false;
	}
	if (!func_1056(&Var0, 44, iParam1, 0, 1))
	{
		return false;
	}
	iVar5 = func_1061(Var0);
	return func_827(iVar5, uParam2);
}

char* func_832(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_1062(bParam0);
	if (bVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(bVar0);
}

char* func_833(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_669(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_834(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_481(bParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_835(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_627(0) };
	Var0.f_4 = func_1063(iParam1);
	Var5 = { func_773(bParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_489(0), &Var5, false);
	return iVar9;
}

bool func_836(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (func_481(bParam0, -887064662))
	{
		return true;
	}
	return func_837(bParam0);
}

bool func_837(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (func_481(bParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_838(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	if (!func_836(bParam0) && !func_837(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_1064(bParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_1065(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_1066(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_1067(iVar15, iVar1);
			if (func_331(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_1068(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_835(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_1070(iVar16, func_1069(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_1071(iVar1);
	}
	return iVar0;
}

int func_839(bool bParam0, bool bParam1, int iParam2)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 == -1)
	{
		return 0;
	}
	if (bParam0 >= 7)
	{
		return 0;
	}
	if (!func_331(bParam1, 0))
	{
		return 0;
	}
	if (!func_1073(bParam0))
	{
		return 0;
	}
	iVar0 = func_1074(bParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_1075(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_840(bool bParam0, bool bParam1)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 == -1)
	{
		return 0;
	}
	if (bParam0 >= 7)
	{
		return 0;
	}
	if (!func_331(bParam1, 0))
	{
		return 0;
	}
	if (!func_1073(bParam0))
	{
		return 0;
	}
	iVar0 = func_1074(bParam0);
	bVar1 = bParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_841(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (bParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_842(bool bParam0)
{
	return (func_1076(bParam0) && func_481(bParam0, 1584357097));
}

int func_843(bool bParam0)
{
	if (!func_842(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_844(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_1047(iParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_561(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_1077(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_834(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_835(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_246(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*iParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_845(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_1078(&bParam0);
	if (!func_331(bParam0, 0) && !func_1017(func_764(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_488(bParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_1079(bParam0) && _0x705be297eebdb95d(bParam0))
	{
		Var0 = { func_768(0) };
		Var4.f_9 = -1591664384;
		if (!func_1019(bParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_1020(bParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_1018(bParam0, 1))
		{
			if (!func_1019(bParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_1020(bParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1080(bParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_628(bParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_846(int* iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!func_1081(iParam0, 0))
	{
		return false;
	}
	if (bParam4 == 0)
	{
		bParam4 = func_1082(iParam1, 0, 1, bParam5, bParam6);
	}
	if (!func_1083(iParam1, bParam4, bParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = bParam4;
	uParam2->f_12 = 1248274121;
	iVar0 = 541670136;
	if (bParam7)
	{
		iVar0 = -1883671814;
	}
	if (!func_1084(iParam0, uParam2, iVar0, bParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_847(int* iParam0, bool bParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (!func_1081(iParam0, 0))
	{
		return false;
	}
	if (!func_1085(iParam0, bParam1, Param2, bParam6, bParam10, bParam7, bParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_1086(bParam1, Param2, bParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*bParam8 = { Var0 };
	if (!func_1087(iParam0, &Var0, 2113164098, bParam9, bParam11))
	{
		return false;
	}
	return true;
}

int func_848(int iParam0, bool bParam1)
{
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = _0x12df9c58201dd19a(iParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (_0x1fc25aeb5f76b38d(iParam0, iVar48, &Var0) && Var0 == bParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_849(bool bParam0, bool bParam1)
{
	if (func_811(bParam0))
	{
		return func_848(func_812(bParam0, 1), bParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

char* func_850()
{
	return "scr_net_spirit_animal_fire_react";
}

Vector3 func_851(float fParam0)
{
	return -sin(fParam0), cos(fParam0), 0f;
}

bool func_852(int iParam0)
{
	iVar0 = func_1088(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_1089(Global_1139381->f_11.f_3222.f_320[iVar0], 1);
}

void func_853(int iParam0)
{
	if (!func_183(&Global_1903131, iParam0))
	{
		func_362(Global_1903131, iParam0);
	}
}

char* func_854()
{
	return "Camp_Spirit_Realm";
}

char* func_855()
{
	return "Spirit_Animal_Camp_Enter";
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1754211037;
		case 2:
			return -185975991;
		case 3:
			return -556870915;
		case 1:
			return -389300196;
	}
	return 0;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1388122081;
		case 2:
			return 293796590;
		case 3:
			return -1997971106;
		case 1:
			return 779310599;
	}
	return 41788943;
}

float func_858(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_859(var uParam0, int iParam1)
{
	switch (&uParam0->f_3563.f_2[iParam1])
	{
		case 0:
			if (!does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				use_particle_fx_asset(func_180());
				uParam0->f_3563.f_2[iParam1]->f_9 = start_particle_fx_looped_on_ped_bone(func_1090(&(uParam0->f_3563.f_2[iParam1])), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 14411, func_1091(&(uParam0->f_3563.f_2[iParam1])), false, false, false);
			}
			if (!does_particle_fx_looped_exist(uParam0->f_3563.f_122))
			{
				use_particle_fx_asset(func_180());
				uParam0->f_3563.f_122 = start_particle_fx_looped_on_ped_bone(func_1092(), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 14285, 1f, false, false, false);
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				if (!does_particle_fx_looped_exist(&(uParam0->f_3563.f_123[iVar0])))
				{
					use_particle_fx_asset(func_180());
					uParam0->f_3563.f_123[iVar0] = start_particle_fx_looped_on_ped_bone(func_1093(), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, func_1094(iVar0), 1f, false, false, false);
				}
				iVar0++;
			}
			break;
		case 3:
			if (!does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				use_particle_fx_asset(func_180());
				uParam0->f_3563.f_2[iParam1]->f_9 = start_particle_fx_looped_on_ped_bone(func_1090(&(uParam0->f_3563.f_2[iParam1])), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 14411, func_1091(&(uParam0->f_3563.f_2[iParam1])), false, false, false);
			}
			break;
		case 2:
			if (!does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				use_particle_fx_asset(func_180());
				uParam0->f_3563.f_2[iParam1]->f_9 = start_particle_fx_looped_on_ped_bone(func_1090(&(uParam0->f_3563.f_2[iParam1])), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 14411, func_1091(&(uParam0->f_3563.f_2[iParam1])), false, false, false);
			}
			break;
		case 1:
			if (!does_particle_fx_looped_exist(uParam0->f_3563.f_2[iParam1]->f_9))
			{
				use_particle_fx_asset(func_180());
				uParam0->f_3563.f_2[iParam1]->f_9 = start_particle_fx_looped_on_ped_bone(func_1090(&(uParam0->f_3563.f_2[iParam1])), uParam0->f_3563.f_2[iParam1]->f_3, 0f, 0f, 0f, 0f, 0f, 0f, 14411, func_1091(&(uParam0->f_3563.f_2[iParam1])), false, false, false);
			}
			break;
	}
}

bool func_860(var uParam0, int iParam1)
{
	if (does_entity_exist(uParam0->f_3563.f_2[iParam1]->f_3) && !is_entity_dead(uParam0->f_3563.f_2[iParam1]->f_3))
	{
		if (func_160(uParam0->f_3563.f_2[iParam1]->f_3, 242628503))
		{
			return true;
		}
		else if (!func_160(uParam0->f_3563.f_2[iParam1]->f_3, -76381094))
		{
			if (_does_scenario_point_exist(uParam0->f_3563.f_2[iParam1]->f_6))
			{
				vVar0 = { _get_scenario_point_coords(uParam0->f_3563.f_2[iParam1]->f_6, true) };
			}
			else
			{
				return true;
			}
			open_sequence_task(&iVar3);
			task_go_straight_to_coord(0, vVar0, 1f, -1, 1193033728, 1056964608, 0);
			_task_use_scenario_point(0, uParam0->f_3563.f_2[iParam1]->f_6, 0, -1, true, false, 0, false, -1f, false);
			close_sequence_task(iVar3);
			task_perform_sequence(uParam0->f_3563.f_2[iParam1]->f_3, iVar3);
			clear_sequence_task(&iVar3);
		}
	}
	return false;
}

int func_861(int iParam0)
{
	iVar0 = func_254(iParam0);
	if (func_1095(iVar0))
	{
		return 0;
	}
	iVar1 = func_112(iParam0);
	switch (iVar0)
	{
		case 2:
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				case 2:
					return 5;
				default:
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 0:
					return 6;
				default:
					break;
			}
			break;
		case 10:
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 2;
				case 3:
					return 3;
				case 4:
					return 4;
				case 5:
					return 5;
				case 6:
					return 6;
				default:
					break;
			}
			break;
		case 17:
			switch (iVar1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				case 2:
					return 0;
				default:
					break;
			}
			break;
		case 16:
			switch (iVar1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_862(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_863(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 1;
		case 0:
			return 134;
		case 17:
			return 80;
		case 18:
			return 145;
		default:
			break;
	}
	return 0;
}

int func_864(int iParam0)
{
	if (!func_862(iParam0))
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_6;
}

int func_865(int iParam0)
{
	if (!func_862(iParam0))
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_3;
}

int func_866(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_4;
}

bool func_867()
{
	if (!func_682())
	{
		return false;
	}
	return func_20(Global_1901947->f_44.f_5, 1);
}

int func_868(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	return (*Global_1134390)[iVar0]->f_74.f_2;
}

int func_869(int iParam0)
{
	fVar0 = (to_float(iParam0) / to_float(Global_1901947->f_584.f_9));
	if (fVar0 > 0.8f)
	{
		return 140;
	}
	if (fVar0 > 0.6f)
	{
		return 139;
	}
	if (fVar0 > 0.35f)
	{
		return 138;
	}
	return 137;
}

int func_870(int iParam0)
{
	fVar0 = (to_float(iParam0) / to_float(Global_1901947->f_584.f_10));
	if (fVar0 > 0.8f)
	{
		return 144;
	}
	if (fVar0 > 0.6f)
	{
		return 143;
	}
	if (fVar0 > 0.35f)
	{
		return 142;
	}
	return 141;
}

int func_871(int iParam0)
{
	if (!func_862(iParam0))
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_1;
}

int func_872(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1567200326;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1808268995;
				case 1:
					return 1567200326;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 517318299;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 787438175;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1503532316;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1609769115;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 458608935;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 722590500;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2059818924;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 674439057;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1781147485;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1776480525;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 8311289;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -1894046616;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -1785590141;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -5241759;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -1411860712;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 1122096366;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2031246664;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 810899946;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					return 344037868;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					return -809960218;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					return -1572522011;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					return -1713661850;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					return -432259982;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					return -640173903;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					return -1707142171;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					return 891861372;
				default:
					break;
			}
			break;
		case 33:
			switch (iParam1)
			{
				case 0:
					return 1961414816;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					return -1976297921;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					return -2043897816;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					return -1545220602;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					return 1458436096;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 0:
					return -96420473;
				default:
					break;
			}
			break;
		case 35:
			switch (iParam1)
			{
				case 0:
					return 1420052545;
				default:
					break;
			}
			break;
		case 36:
			switch (iParam1)
			{
				case 0:
					return 1573928024;
				default:
					break;
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					return -159615874;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return -1537893324;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					return 495392888;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return -14621142;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return 643338332;
				default:
					break;
			}
			break;
		case 42:
			switch (iParam1)
			{
				case 0:
					return -1423069557;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 0:
					return 109723457;
				default:
					break;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					return 377217378;
				default:
					break;
			}
			break;
		case 45:
			switch (iParam1)
			{
				case 0:
					return 1409469276;
				default:
					break;
			}
			break;
		case 46:
			switch (iParam1)
			{
				case 0:
					return -2138995135;
				default:
					break;
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					return 1029500991;
				default:
					break;
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					return -1718499745;
				case 1:
					return 1932599535;
				case 2:
					return -955201363;
				default:
					break;
			}
			break;
		case 49:
			switch (iParam1)
			{
				case 0:
					return 1279798793;
				case 1:
					return 1398921015;
				case 2:
					return -398982891;
				default:
					break;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 0:
					return -630728910;
				case 1:
					return -365006557;
				case 2:
					return 1297463116;
				default:
					break;
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					return -255887423;
				case 1:
					return -1411571310;
				case 2:
					return 18336774;
				default:
					break;
			}
			break;
		case 52:
			switch (iParam1)
			{
				case 0:
					return 1738040201;
				case 1:
					return 1271410337;
				case 2:
					return -1368394765;
				default:
					break;
			}
			break;
		case 53:
			switch (iParam1)
			{
				case 0:
					return 324080961;
				default:
					break;
			}
			break;
		case 54:
			switch (iParam1)
			{
				case 0:
					return 1821261239;
				default:
					break;
			}
			break;
		case 55:
			switch (iParam1)
			{
				case 0:
					return -709447814;
				default:
					break;
			}
			break;
		case 56:
			switch (iParam1)
			{
				case 0:
					return 1845919109;
				case 1:
					return -1789922065;
				case 2:
					return 1594656873;
				default:
					break;
			}
			break;
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
			switch (iParam1)
			{
				case 0:
					return -866564271;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 0:
					return 1451245639;
				case 1:
					return 807165489;
				case 2:
					return 1055587278;
				default:
					break;
			}
			break;
		case 135:
			switch (iParam1)
			{
				case 0:
					return -638117582;
				case 1:
					return -1556295175;
				case 2:
					return -1260161722;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 0:
					return 2086409315;
				case 1:
					return -488374858;
				case 2:
					return -455081566;
				default:
					break;
			}
			break;
		case 145:
			switch (iParam1)
			{
				case 0:
					return 1340847941;
				default:
					break;
			}
			break;
		case 146:
			switch (iParam1)
			{
				case 0:
					return 905217820;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 0:
					return 2087080073;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 0:
					return 2087080073;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 0:
					return 817121222;
				default:
					break;
			}
			break;
		case 139:
			switch (iParam1)
			{
				case 0:
					return 1128721995;
				default:
					break;
			}
			break;
		case 140:
			switch (iParam1)
			{
				case 0:
					return -8199388;
				default:
					break;
			}
			break;
		case 66:
			switch (iParam1)
			{
				case 0:
					return 1638339626;
				default:
					break;
			}
			break;
		case 147:
			switch (iParam1)
			{
				case 0:
					return -1206391586;
				default:
					break;
			}
			break;
		case 141:
			switch (iParam1)
			{
				case 0:
					return -1206391586;
				default:
					break;
			}
			break;
		case 142:
			switch (iParam1)
			{
				case 0:
					return 2007329510;
				default:
					break;
			}
			break;
		case 143:
			switch (iParam1)
			{
				case 0:
					return 66650727;
				default:
					break;
			}
			break;
		case 144:
			switch (iParam1)
			{
				case 0:
					return -1516714880;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 0:
					return -833277401;
				default:
					break;
			}
			break;
		case 150:
			switch (iParam1)
			{
				case 0:
					return -1665061821;
				case 1:
					return -2127574953;
				case 2:
					return 884322100;
				default:
					break;
			}
			break;
		case 151:
			switch (iParam1)
			{
				case 0:
					return 391918429;
				case 1:
					return 316396656;
				case 2:
					return -312243840;
				default:
					break;
			}
			break;
		case 152:
			switch (iParam1)
			{
				case 0:
					return -1677462667;
				case 1:
					return -1725687050;
				case 2:
					return -59973242;
				default:
					break;
			}
			break;
		case 153:
			switch (iParam1)
			{
				case 0:
					return -318874414;
				case 1:
					return -1567046505;
				case 2:
					return -1107690663;
				default:
					break;
			}
			break;
		case 154:
			switch (iParam1)
			{
				case 0:
					return -1732383534;
				case 1:
					return 1806293626;
				case 2:
					return 2070444535;
				default:
					break;
			}
			break;
		case 155:
			switch (iParam1)
			{
				case 0:
					return 385480388;
				case 1:
					return 43647758;
				case 2:
					return -2079554059;
				default:
					break;
			}
			break;
		case 156:
			switch (iParam1)
			{
				case 0:
					return 2059274296;
				case 1:
					return 1738250988;
				case 2:
					return -1837502296;
				default:
					break;
			}
			break;
		case 157:
			switch (iParam1)
			{
				case 0:
					return -360281516;
				case 1:
					return 1971887092;
				case 2:
					return 967976008;
				default:
					break;
			}
			break;
		case 158:
			switch (iParam1)
			{
				case 0:
					return 989774025;
				case 1:
					return 33638723;
				case 2:
					return -1271779930;
				default:
					break;
			}
			break;
		case 159:
			switch (iParam1)
			{
				case 0:
					return -2071207172;
				case 1:
					return 617665820;
				case 2:
					return -136086718;
				default:
					break;
			}
			break;
		case 160:
			switch (iParam1)
			{
				case 0:
					return 1910685448;
				case 1:
					return -1547518466;
				case 2:
					return -1335830726;
				default:
					break;
			}
			break;
		case 161:
			switch (iParam1)
			{
				case 0:
					return 73249336;
				case 1:
					return -1252901452;
				case 2:
					return 1592627432;
				default:
					break;
			}
			break;
		case 162:
			switch (iParam1)
			{
				case 0:
					return 1055390078;
				case 1:
					return -306896422;
				case 2:
					return 1112460044;
				default:
					break;
			}
			break;
		case 163:
			switch (iParam1)
			{
				case 0:
					return 1677234932;
				case 1:
					return 799197269;
				default:
					break;
			}
			break;
		case 164:
			switch (iParam1)
			{
				case 0:
					return -1314719695;
				case 1:
					return -274186981;
				default:
					break;
			}
			break;
		case 165:
			switch (iParam1)
			{
				case 0:
					return -1475148910;
				case 1:
					return -2106339097;
				case 2:
					return 1888169262;
				default:
					break;
			}
			break;
		case 166:
			switch (iParam1)
			{
				case 0:
					return 1134950394;
				case 1:
					return -503999573;
				default:
					break;
			}
			break;
		case 167:
			switch (iParam1)
			{
				case 0:
					return -1246604785;
				case 1:
					return 972469141;
				default:
					break;
			}
			break;
		case 168:
			switch (iParam1)
			{
				case 0:
					return 971028470;
				case 1:
					return -968274015;
				default:
					break;
			}
			break;
		case 169:
			switch (iParam1)
			{
				case 0:
					return 530952697;
				case 1:
					return -1828576459;
				default:
					break;
			}
			break;
		case 170:
			switch (iParam1)
			{
				case 0:
					return -1971966565;
				case 1:
					return 1816066415;
				default:
					break;
			}
			break;
		case 171:
			switch (iParam1)
			{
				case 0:
					return 1249050801;
				case 1:
					return 605748345;
				default:
					break;
			}
			break;
		case 172:
			switch (iParam1)
			{
				case 0:
					return 864745687;
				case 1:
					return 1298378845;
				default:
					break;
			}
			break;
		case 173:
			switch (iParam1)
			{
				case 0:
					return 882319324;
				case 1:
					return -1316683930;
				case 2:
					return -2144133949;
				default:
					break;
			}
			break;
		case 174:
			switch (iParam1)
			{
				case 0:
					return -955972886;
				case 1:
					return -1314445006;
				default:
					break;
			}
			break;
		case 175:
			switch (iParam1)
			{
				case 0:
					return -935053193;
				case 1:
					return 1487706098;
				default:
					break;
			}
			break;
		case 176:
			switch (iParam1)
			{
				case 0:
					return 8923007;
				case 1:
					return 982279746;
				default:
					break;
			}
			break;
		case 177:
			switch (iParam1)
			{
				case 0:
					return -1424924456;
				case 1:
					return -1021506779;
				default:
					break;
			}
			break;
		case 178:
			switch (iParam1)
			{
				case 0:
					return 1582754317;
				case 1:
					return 632699679;
				default:
					break;
			}
			break;
		case 179:
			switch (iParam1)
			{
				case 0:
					return 2131973153;
				case 1:
					return 1429690130;
				case 2:
					return -1492190528;
				default:
					break;
			}
			break;
		case 180:
			switch (iParam1)
			{
				case 0:
					return 1886000480;
				case 1:
					return -1670639412;
				default:
					break;
			}
			break;
		case 181:
			switch (iParam1)
			{
				case 0:
					return 873982998;
				case 1:
					return -2023715487;
				case 2:
					return -1792726806;
				default:
					break;
			}
			break;
		case 182:
			switch (iParam1)
			{
				case 0:
					return -895842627;
				case 1:
					return 1937572282;
				case 2:
					return 416959594;
				default:
					break;
			}
			break;
		case 183:
			switch (iParam1)
			{
				case 0:
					return -322237995;
				case 1:
					return -1586711149;
				case 2:
					return 1871696342;
				default:
					break;
			}
			break;
		case 184:
			switch (iParam1)
			{
				case 0:
					return 729024430;
				case 1:
					return 286045778;
				case 2:
					return 1674927078;
				default:
					break;
			}
			break;
		case 185:
			switch (iParam1)
			{
				case 0:
					return 462515524;
				case 1:
					return 907094344;
				case 2:
					return -52054286;
				default:
					break;
			}
			break;
		case 186:
			switch (iParam1)
			{
				case 0:
					return -918030852;
				case 1:
					return -198743828;
				case 2:
					return 99552379;
				default:
					break;
			}
			break;
		case 187:
			switch (iParam1)
			{
				case 0:
					return 1777999895;
				case 1:
					return -103611011;
				default:
					break;
			}
			break;
		case 188:
			switch (iParam1)
			{
				case 0:
					return -1669050608;
				case 1:
					return -311221031;
				default:
					break;
			}
			break;
		case 189:
			switch (iParam1)
			{
				case 0:
					return -1478360676;
				case 1:
					return 1476409321;
				case 2:
					return 1765431901;
				default:
					break;
			}
			break;
		case 190:
			switch (iParam1)
			{
				case 0:
					return 128582427;
				case 1:
					return 735165138;
				default:
					break;
			}
			break;
		case 191:
			switch (iParam1)
			{
				case 0:
					return 790654615;
				case 1:
					return -456605112;
				case 2:
					return -610029570;
				default:
					break;
			}
			break;
		case 192:
			switch (iParam1)
			{
				case 0:
					return -1573560838;
				case 1:
					return -1168327431;
				case 2:
					return 50253372;
				default:
					break;
			}
			break;
		case 193:
			switch (iParam1)
			{
				case 0:
					return 1733930198;
				case 1:
					return -1436871283;
				default:
					break;
			}
			break;
		case 194:
			switch (iParam1)
			{
				case 0:
					return 500439684;
				default:
					break;
			}
			break;
		case 195:
			switch (iParam1)
			{
				case 0:
					return -1239525662;
				case 1:
					return 1147933547;
				default:
					break;
			}
			break;
		case 196:
			switch (iParam1)
			{
				case 0:
					return -821842250;
				case 1:
					return -1168753556;
				default:
					break;
			}
			break;
		case 197:
			switch (iParam1)
			{
				case 0:
					return -1725287507;
				case 1:
					return 1119015356;
				case 2:
					return 1459419728;
				default:
					break;
			}
			break;
		case 198:
			switch (iParam1)
			{
				case 0:
					return -2129397328;
				case 1:
					return -2075415593;
				default:
					break;
			}
			break;
		case 199:
			switch (iParam1)
			{
				case 0:
					return 310117163;
				case 1:
					return 1464005163;
				default:
					break;
			}
			break;
		case 200:
			switch (iParam1)
			{
				case 0:
					return -44082786;
				case 1:
					return -879126926;
				default:
					break;
			}
			break;
		case 201:
			switch (iParam1)
			{
				case 0:
					return -191291516;
				case 1:
					return 1261058737;
				default:
					break;
			}
			break;
		case 202:
			switch (iParam1)
			{
				case 0:
					return -1581942421;
				case 1:
					return 1060114223;
				default:
					break;
			}
			break;
		case 203:
			switch (iParam1)
			{
				case 0:
					return 2130495472;
				case 1:
					return -92122221;
				default:
					break;
			}
			break;
		case 204:
			switch (iParam1)
			{
				case 0:
					return 717416799;
				case 1:
					return 1696375712;
				default:
					break;
			}
			break;
		case 205:
			switch (iParam1)
			{
				case 0:
					return -1948103631;
				case 1:
					return -1345114872;
				case 2:
					return -954213471;
				default:
					break;
			}
			break;
	}
	return 0;
}

float func_873(int iParam0)
{
	if (iParam0 >= 72 && iParam0 <= 110)
	{
		return 180f;
	}
	return 0f;
}

int func_874(int iParam0)
{
	if (iParam0 >= 72 && iParam0 <= 110)
	{
		return 0;
	}
	return 7;
}

void func_875(int iParam0, vector3 vParam1)
{
	if (!_does_propset_exist(iParam0))
	{
		return;
	}
	if (func_43(vParam1))
	{
		return;
	}
	if (Global_1132288->f_2027 != iParam0)
	{
		Global_1132288->f_2027 = iParam0;
		Global_1132288->f_2027.f_1 = { vParam1 };
	}
}

int func_876(int iParam0)
{
	if (iParam0 >= 111 && iParam0 <= 133)
	{
		return 500320009;
	}
	switch (iParam0)
	{
		case 1:
			return 1085378666;
		case 2:
			return 1085378666;
		case 57:
			return 518773733;
		case 58:
			return 742064790;
		case 59:
			return 749266870;
		case 60:
			return 148678632;
		case 62:
			return 87577242;
		case 63:
			return 219205323;
		case 64:
			return -377157708;
		case 67:
			return 1088428104;
		case 68:
			return -389790005;
		case 69:
			return -1384669516;
		case 70:
			return -1368644756;
		case 71:
			return 1660404147;
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return -1550362321;
		case 81:
			return -107781567;
		case 82:
			return -1736138766;
		case 83:
			return 2056566461;
		case 84:
			return -683555258;
		case 85:
			return 809618066;
		case 86:
			return 964212894;
		case 87:
			return -1793886199;
		case 88:
			return -1471143067;
		case 89:
			return -1822168063;
		case 90:
			return 871233640;
		case 91:
			return 1433097698;
		case 92:
			return -947637451;
		case 93:
			return 109190387;
		case 94:
			return 1637504492;
		case 95:
			return -1610185560;
		case 96:
			return -1954428789;
		case 97:
			return -909802429;
		case 98:
			return 1963108364;
		case 99:
			return -1272260333;
		case 100:
			return -814374666;
		case 101:
			return 496680872;
		case 102:
			return 1879648387;
		case 103:
			return 1380049310;
		case 104:
			return 1970794906;
		case 105:
			return 936743075;
		case 106:
			return 2084351666;
		case 107:
			return -256864123;
		case 108:
			return 149420073;
		case 109:
			return 285767308;
		case 110:
			return 2120571158;
		default:
			break;
	}
	return 0;
}

Vector3 func_877(int iParam0)
{
	if ((iParam0 >= 72 && iParam0 <= 110) && iParam0 != 80)
	{
		return -0.029f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

float func_878(int iParam0)
{
	switch (iParam0)
	{
		case 80:
			return 260f;
		case 60:
			return 180f;
		case 62:
			return 180f;
		case 63:
			return 180f;
		case 64:
			return 180f;
		case 67:
			return 180f;
		case 68:
			return 180f;
		case 69:
			return 180f;
		case 70:
			return 180f;
		case 71:
			return 180f;
		case 2:
			return 110f;
		default:
			break;
	}
	if (iParam0 >= 111 && iParam0 <= 133)
	{
		return 180f;
	}
	else if (iParam0 >= 72 && iParam0 <= 110)
	{
		return 80f;
	}
	return 0f;
}

int func_879(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 72:
			*uParam1 = 2;
			return -1550362321;
		case 73:
			*uParam1 = 7;
			return -1550362321;
		case 74:
			*uParam1 = 6;
			return -1550362321;
		case 75:
			*uParam1 = 4;
			return -1550362321;
		case 76:
			*uParam1 = 5;
			return -1550362321;
		case 77:
			*uParam1 = 3;
			return -1550362321;
		case 78:
			*uParam1 = 0;
			return -1550362321;
		case 79:
			*uParam1 = 1;
			return -1550362321;
		case 80:
			*uParam1 = 8;
			return -1550362321;
		default:
			break;
	}
	return 0;
}

void func_880(var uParam0, var uParam1, int iParam2)
{
	if (func_1096(uParam1))
	{
		if (func_1097(uParam0->f_2))
		{
			iVar0 = func_1098(uParam0->f_2);
		}
	}
	else
	{
		iVar0 = func_1099(uParam1);
	}
	if ((iVar0 != 0 && _does_streamed_txd_exist(iVar0)) && does_entity_exist(iParam2))
	{
		_set_apply_object_txd(iParam2, iVar0, 0, 0);
	}
}

void func_881(var uParam0, var uParam1, int iParam2)
{
	vVar0 = { uParam0->f_38[iParam2]->f_4 };
	if (func_43(vVar0))
	{
		return;
	}
	fVar3 = func_321(uParam0->f_38[iParam2]->f_3, uParam1->f_66[iParam2]->f_1, uParam0->f_1);
	if (fVar3 > 0f)
	{
		if (!func_425(&(uParam1->f_66[iParam2]->f_2)))
		{
			if (_does_propset_exist(&(uParam1->f_66[iParam2]->f_5[0])))
			{
				iVar4 = &uParam1->f_66[iParam2]->f_5[0];
			}
			func_1100(&(uParam1->f_66[iParam2]->f_2), vVar0, fVar3, 1, -1, iVar4);
		}
	}
}

bool func_882(var uParam0)
{
	return (func_4(uParam0, 8192) && network_is_player_in_mp_cutscene(player_id()));
}

bool func_883(var uParam0, int iParam1)
{
	iVar0 = func_1101();
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 <= 27)
	{
		if (func_254(iVar2) == iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar2++;
		}
	}
	if (((iVar1 != -1 && !func_43(uParam0->f_38[iParam1]->f_4)) && !func_43(uParam0->f_38[iVar1]->f_4)) && vdist(uParam0->f_38[iParam1]->f_4, uParam0->f_38[iVar1]->f_4) < Global_1901947->f_584.f_7)
	{
		return true;
	}
	return false;
}

void func_884(var uParam0, int iParam1)
{
	if ((func_330() && func_275()) && func_322(2048))
	{
		vVar0 = { uParam0->f_38[iParam1]->f_4 };
		if (!func_43(vVar0) && vdist(vVar0, Global_35) < 3f)
		{
			func_276(605, 0);
		}
	}
}

void func_885(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (uParam0->f_38[iParam3]->f_2 != -1411330704)
	{
		return;
	}
	if (does_entity_exist(uParam2->f_66[iParam3]->f_3))
	{
		if (!func_110(uParam1, uParam2->f_1, iParam3, 8))
		{
			if (_does_thread_exist(uParam2->f_3740))
			{
				func_109();
				return;
			}
			if (func_1102(uParam2->f_66[iParam3]->f_3, *uParam2, &(uParam2->f_3740)))
			{
				func_281(uParam1, uParam2->f_1, iParam3, 8);
			}
		}
		else if ((network_is_player_active(player_id()) && _0x9be7dcb22d32ccbe(uParam2->f_2, player_id())) && !func_1103())
		{
			if (!does_blip_exist(Global_1071686->f_23887.f_366.f_4086))
			{
				Global_1071686->f_23887.f_366.f_4086 = _blip_add_for_entity(168093330, uParam2->f_66[iParam3]->f_3);
				set_blip_sprite(Global_1071686->f_23887.f_366.f_4086, 784218150, true);
				set_blip_name_from_text_file(Global_1071686->f_23887.f_366.f_4086, "NFT_BLIP");
				_blip_set_modifier(Global_1071686->f_23887.f_366.f_4086, -1025871137);
			}
		}
		else if (does_blip_exist(Global_1071686->f_23887.f_366.f_4086))
		{
			remove_blip(&(Global_1071686->f_23887.f_366.f_4086));
		}
	}
}

void func_886(var uParam0, var uParam1, int iParam2)
{
	if (does_entity_exist(uParam1->f_66[iParam2]->f_3))
	{
		if (!does_entity_exist(uParam1->f_39.f_3))
		{
			iVar0 = func_876(80);
			request_model(iVar0, false);
			if (has_model_loaded(iVar0))
			{
				fVar1 = uParam0->f_38[iParam2]->f_7;
				vVar2 = { func_877(80) };
				vVar5 = { _get_object_offset_from_coords(uParam0->f_38[iParam2]->f_4, fVar1, vVar2) };
				fVar1 = (fVar1 + func_878(80));
				uParam1->f_39.f_4 = { vVar5 };
				uParam1->f_39.f_7 = { vVar5 - Vector(2.2f, 0f, 0f) };
				if (!func_273(*uParam1))
				{
					vVar5 = { uParam1->f_39.f_7 };
				}
				uParam1->f_39.f_3 = create_object_no_offset(iVar0, vVar5, false, false, false, true);
				if (does_entity_exist(uParam1->f_39.f_3))
				{
					set_entity_heading(uParam1->f_39.f_3, fVar1);
					freeze_entity_position(uParam1->f_39.f_3, true);
					set_entity_invincible(uParam1->f_39.f_3, true);
					_0xa91e6cf94404e8c9(uParam1->f_39.f_3);
					iVar9 = func_879(80, &iVar8);
					if (iVar9 != 0 && iVar9 == iVar0)
					{
						_set_object_texture_variation(uParam1->f_39.f_3, iVar8);
					}
				}
			}
		}
		else if (!does_entity_exist(uParam1->f_39.f_2))
		{
			request_model(-1646753329, false);
			if (has_model_loaded(-1646753329))
			{
				vVar10 = { 0f, 0f, 3.19f };
				vVar13 = { get_entity_coords(uParam1->f_39.f_3, true, false) + vVar10 };
				uParam1->f_39.f_2 = create_object_no_offset(-1646753329, vVar13, false, false, false, true);
				if (does_entity_exist(uParam1->f_39.f_2))
				{
					set_entity_invincible(uParam1->f_39.f_2, true);
					set_entity_collision(uParam1->f_39.f_2, false, false);
					set_entity_visible(uParam1->f_39.f_2, false);
					set_entity_can_be_targeted_without_los(uParam1->f_39.f_2, true);
					freeze_entity_position(uParam1->f_39.f_2, true);
					attach_entity_to_entity(uParam1->f_39.f_2, uParam1->f_39.f_3, 0, vVar10, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				}
			}
		}
	}
}

void func_887(var uParam0, int iParam1)
{
	if (!_does_scenario_point_exist(uParam0->f_63))
	{
		if (_does_propset_exist(&(uParam0->f_66[iParam1]->f_5[2])))
		{
			iVar0 = create_itemset(false);
			iVar1 = _get_entities_from_propset(&(uParam0->f_66[iParam1]->f_5[2]), iVar0, 1600083684, false, false);
			iVar7 = 0;
			while (iVar7 <= (iVar1 - 1))
			{
				iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar7, iVar0));
				if (does_entity_exist(iVar2))
				{
					vVar4 = { get_entity_coords(iVar2, true, false) };
					if (!func_43(vVar4))
					{
						iVar3 = _find_closest_active_scenario_point_of_type(vVar4, 315567675, 1f, 0, false);
						if (_does_scenario_point_exist(iVar3))
						{
							vVar4 = { _get_scenario_point_coords(iVar3, true) };
							if (!func_559(vVar4, 0f, 0f, 0f, 5f, 1))
							{
								uParam0->f_63 = iVar3;
								uParam0->f_63.f_1 = iVar2;
								set_entity_invincible(iVar2, true);
								freeze_entity_position(iVar2, true);
							}
							else
							{
								iVar7++;
							}
							destroy_itemset(iVar0);
							if (func_322(2048))
							{
								if (func_1104(618))
								{
									return;
								}
								if (func_187(618))
								{
									func_323(2048);
									return;
								}
								if (func_330() && func_275())
								{
									func_276(618, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_888(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_66[iParam1]->f_3))
	{
		if (_does_propset_exist(&(uParam0->f_66[iParam1]->f_5[0])))
		{
			if (!_0xf42db680a8b2a4d9(&(uParam0->f_66[iParam1]->f_5[0])))
			{
				return;
			}
			iVar0 = 0;
			if (uParam0->f_66[iParam1]->f_1 == 145)
			{
				iVar0 = 1927025271;
			}
			else if (uParam0->f_66[iParam1]->f_1 == 146)
			{
				iVar0 = -280509335;
			}
			if (is_model_valid(iVar0))
			{
				iVar1 = create_itemset(false);
				iVar2 = _get_entities_from_propset(&(uParam0->f_66[iParam1]->f_5[0]), iVar1, iVar0, false, false);
				iVar4 = 0;
				while (iVar4 <= (iVar2 - 1))
				{
					iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar1));
					if (does_entity_exist(iVar3) && is_entity_an_object(iVar3))
					{
						uParam0->f_66[iParam1]->f_3 = get_object_index_from_entity_index(iVar3);
					}
					else
					{
						iVar4++;
					}
				}
				destroy_itemset(iVar1);
			}
		}
	}
}

void func_889(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_66[iParam1]->f_3))
	{
		if (_does_propset_exist(&(uParam0->f_66[iParam1]->f_5[0])))
		{
			if (!_0xf42db680a8b2a4d9(&(uParam0->f_66[iParam1]->f_5[0])))
			{
				return;
			}
			iVar0 = 0;
			if (uParam0->f_66[iParam1]->f_1 == 61 || uParam0->f_66[iParam1]->f_1 == 137)
			{
				iVar0 = 917489389;
			}
			else if (uParam0->f_66[iParam1]->f_1 == 138)
			{
				iVar0 = 1537284391;
			}
			else if (uParam0->f_66[iParam1]->f_1 == 139)
			{
				iVar0 = 322996031;
			}
			else if (uParam0->f_66[iParam1]->f_1 == 140)
			{
				iVar0 = -1069981674;
			}
			if (is_model_valid(iVar0))
			{
				iVar1 = create_itemset(false);
				iVar2 = _get_entities_from_propset(&(uParam0->f_66[iParam1]->f_5[0]), iVar1, iVar0, false, false);
				iVar4 = 0;
				while (iVar4 <= (iVar2 - 1))
				{
					iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar4, iVar1));
					if (does_entity_exist(iVar3) && is_entity_an_object(iVar3))
					{
						uParam0->f_66[iParam1]->f_3 = get_object_index_from_entity_index(iVar3);
					}
					else
					{
						iVar4++;
					}
				}
				destroy_itemset(iVar1);
			}
		}
	}
}

void func_890(var uParam0, var uParam1, int iParam2)
{
	if (!does_entity_exist(uParam1->f_55.f_2))
	{
		if (_does_propset_exist(&(uParam1->f_66[iParam2]->f_5[0])))
		{
			if (!_0xf42db680a8b2a4d9(&(uParam1->f_66[iParam2]->f_5[0])))
			{
				return;
			}
			iVar0 = create_itemset(false);
			iVar1 = _get_entities_from_propset(&(uParam1->f_66[iParam2]->f_5[0]), iVar0, func_1105(uParam1->f_66[iParam2]->f_5[0]->f_1), false, false);
			iVar6 = 0;
			while (iVar6 <= (iVar1 - 1))
			{
				iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar6, iVar0));
				if (does_entity_exist(iVar2))
				{
					vVar3 = { get_entity_coords(iVar2, true, false) };
					if (!func_43(vVar3))
					{
						uParam1->f_55.f_2 = get_object_index_from_entity_index(iVar2);
					}
					else
					{
						iVar6++;
					}
					destroy_itemset(iVar0);
				}
			}
		}
	}
}

bool func_891()
{
	return func_1106(func_274(0));
}

bool func_892(int iParam0)
{
	return !func_295(iParam0);
}

void func_893(bool bParam0, bool bParam1)
{
	if (func_1029(255) == 4)
	{
		return;
	}
	if (func_43(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_1107(0);
	}
	else
	{
		if (bParam1)
		{
			func_1108(0, 0, 0, 1);
		}
		func_1109(0);
		func_1110(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_1111(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_1112(Global_1102219->f_3849, 36);
	func_1113(Global_1102219->f_3888, 36);
}

int func_894(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			Jump @2374; //curOff = 561
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			Jump @2374; //curOff = 627
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			Jump @2374; //curOff = 704
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			Jump @2374; //curOff = 781
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			Jump @2374; //curOff = 836
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			Jump @2374; //curOff = 869
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			Jump @2374; //curOff = 1078
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			Jump @2374; //curOff = 1199
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			Jump @2374; //curOff = 1221
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			Jump @2374; //curOff = 1242
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			Jump @2374; //curOff = 1275
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			Jump @2374; //curOff = 1341
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			Jump @2374; //curOff = 1429
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			Jump @2374; //curOff = 1450
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			Jump @2374; //curOff = 1626
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			Jump @2374; //curOff = 1703
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			Jump @2374; //curOff = 1755
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			Jump @2374; //curOff = 1777
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			Jump @2374; //curOff = 1821
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			Jump @2374; //curOff = 1887
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			Jump @2374; //curOff = 1942
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			Jump @2374; //curOff = 1964
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			Jump @2374; //curOff = 1997
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			Jump @2374; //curOff = 2019
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			Jump @2374; //curOff = 2041
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			Jump @2374; //curOff = 2063
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			Jump @2374; //curOff = 2085
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			Jump @2374; //curOff = 2107
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			Jump @2374; //curOff = 2129
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			Jump @2374; //curOff = 2151
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			Jump @2374; //curOff = 2173
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			Jump @2374; //curOff = 2195
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			Jump @2374; //curOff = 2217
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			Jump @2374; //curOff = 2239
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			Jump @2374; //curOff = 2261
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			Jump @2374; //curOff = 2283
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			Jump @2374; //curOff = 2305
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			Jump @2374; //curOff = 2327
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			Jump @2374; //curOff = 2349
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			if (iParam1 == 38)
			{
				return 147;
			}
			if (iParam1 == 33)
			{
				return 20;
			}
			if (iParam1 == 37)
			{
				return 134;
			}
			return -1;
		}

int func_895(int iParam0)
{
	if (!func_670(iParam0))
	{
		return 0;
	}
	if (&Global_1051439->f_4472[iParam0] == 0)
	{
		Global_1051439->f_4472[iParam0] = func_1114(iParam0);
	}
	return &(Global_1051439->f_4472[iParam0]);
}

float func_896(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 50f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 29:
			return 25f;
		case 38:
			return 70f;
		case 37:
			return 30f;
		case 15:
			return 25f;
		case 39:
			return 100f;
	}
	return 12.5f;
}

void func_897(int iParam0, int iParam1)
{
	if (!func_171(iParam0, iParam1))
	{
	}
	Global_1051439->f_72[iParam0]->f_1 = (Global_1051439->f_72[iParam0]->f_1 || iParam1);
}

void func_898(int iParam0)
{
	(*Global_1051439)[Global_1051439->f_41] = iParam0;
	Global_1051439->f_41++;
	if (Global_1051439->f_41 >= 40)
	{
		Global_1051439->f_41 = (40 - 1);
	}
}

int func_899(int iParam0, var uParam1, int iParam2)
{
	if (!_is_ped_carrying(iParam0))
	{
		return iVar4;
	}
	iVar0 = create_itemset(true);
	find_all_attached_carriable_entities(iParam0, iVar0);
	iVar3 = get_itemset_size(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar0));
		if (!does_entity_exist(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			destroy_itemset(iVar0);
			return iVar4;
		}
	}
}

void func_900(var uParam0)
{
	bVar0 = does_particle_fx_looped_exist(uParam0->f_29);
	if (does_entity_exist(*uParam0))
	{
		_0x646564a3b7df68f8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (absf((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			_0xc8e21c1677dc5e6f(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (absf((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			_0x7d7285efeab5af15(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (absf((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			_0xf49574e2332a8f06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (absf((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			_set_object_burn_level(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), true);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (absf((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			set_particle_fx_looped_evolution(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (absf((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (absf((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (absf((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				set_particle_fx_looped_evolution(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_901(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_902()
{
	if (func_1115(&Global_1940258, 4194304) || func_1116() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

bool func_903(var uParam0, float fParam1)
{
	if (!func_537(uParam0))
	{
		return false;
	}
	if (func_539(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_904(var uParam0)
{
	if (!uParam0->f_1)
	{
		iVar0 = get_clock_hours();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_901(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_901(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_901(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_901(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_901(uParam0, 1);
		}
		else
		{
			func_901(uParam0, 0);
		}
		func_542(&(uParam0->f_31));
	}
}

bool func_905(var uParam0)
{
	if (func_43(uParam0->f_38[16]->f_4))
	{
		return false;
	}
	return is_any_vehicle_near_point(uParam0->f_38[16]->f_4, 2.5f);
}

int func_906(var uParam0, bool bParam1)
{
	func_1117(&(uParam0->f_49));
	if (!func_1118(Global_34, 0))
	{
		return 0;
	}
	func_1119(uParam0);
	if (uParam0->f_128 > 4 && uParam0->f_128 < 9)
	{
		func_1120(0);
	}
	if (uParam0->f_128 > 3)
	{
		if (uParam0->f_128 != 9 && uParam0->f_128 != 4)
		{
			_0x18c3dfac458783bb();
			func_1121(uParam0);
		}
	}
	else if (uParam0->f_128 == 3)
	{
		if (is_ped_active_in_scenario(Global_34, 1))
		{
			iVar0 = func_1122(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_1121(uParam0);
			}
		}
		else if (_0x927b810e43e99932(&(uParam0->f_18)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_18));
		}
	}
	if (func_183(uParam0->f_126, 65536))
	{
		if (func_1123(Global_34, 1, 0, 0) != -1569615261)
		{
			if (has_anim_event_fired(Global_34, 320193935))
			{
				set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
				func_184(&(uParam0->f_126), 65536);
			}
		}
	}
	switch (uParam0->f_128)
	{
		case 0:
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			func_1126(uParam0);
			func_1127(&(uParam0->f_49), 4);
			func_1128(uParam0, 1);
			break;
		case 1:
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			if (func_1129(uParam0))
			{
				func_1128(uParam0, 2);
			}
			break;
		case 2:
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			if (func_1130(uParam0))
			{
				func_1128(uParam0, 3);
			}
			break;
		case 3:
			if (func_1124(uParam0))
			{
				_0x9428447ded71fc7e("Player_Campfire_Scenes");
				func_437(&(uParam0->f_49), 1, _get_scenario_point_type_ped_is_using(Global_34) != 1049986774);
				func_718(&(uParam0->f_49), 2);
				func_184(&(uParam0->f_126), 32768);
				func_1125(uParam0);
			}
			func_1131(uParam0);
			if (bParam1)
			{
				return 1;
			}
			func_1132(8);
			if ((get_game_timer() - uParam0->f_148) >= 500)
			{
				if (func_1133(uParam0))
				{
					func_362(&(uParam0->f_126), 131072);
				}
				else
				{
					func_184(&(uParam0->f_126), 131072);
				}
				uParam0->f_148 = get_game_timer();
			}
			if (func_361(Global_34, uParam0->f_127, 1) > 36f)
			{
				func_432(uParam0);
				func_435(uParam0);
				func_1134(8);
				func_1128(uParam0, 4);
				if (_0x927b810e43e99932(&(uParam0->f_18)))
				{
					_0x0a5a4f1979abb40e(&(uParam0->f_18));
				}
				return 0;
			}
			if (func_183(uParam0->f_125, 64))
			{
				if (func_183(uParam0->f_125, 8192))
				{
					func_1135(uParam0, 0);
					func_184(&(uParam0->f_125), 8192);
				}
				func_184(&(uParam0->f_125), 64);
			}
			else if (func_183(uParam0->f_125, 128))
			{
				if (!func_183(uParam0->f_125, 8192))
				{
					func_1135(uParam0, 1);
					func_362(&(uParam0->f_125), 8192);
				}
				func_184(&(uParam0->f_125), 128);
			}
			uParam0->f_129 = func_1122(uParam0);
			if (uParam0->f_129 != -1)
			{
				func_1136();
				disable_control_action(0, 1287709438, false);
				disable_control_action(0, -2131587435, false);
				disable_control_action(0, -399233038, false);
				iVar1 = create_itemset(true);
				if (func_638(&iVar1, *uParam0->f_5[uParam0->f_129], 0.75f) && !is_ped_active_in_scenario(Global_34, 1))
				{
					clear_ped_tasks(Global_34, 1, 0);
				}
				destroy_itemset(iVar1);
			}
			if ((func_185(0) && uParam0->f_129 != -1) || ((func_183(uParam0->f_126, 8192) && func_431(64)) && func_431(16)))
			{
				uParam0->f_130 = func_1137();
				func_1128(uParam0, 5);
				if (func_431(16) || func_183(uParam0->f_126, 32768))
				{
					if (func_431(64))
					{
						func_1134(16);
						func_718(&(uParam0->f_49), 2);
						func_1138(uParam0, 0);
						func_1128(uParam0, 7);
					}
				}
				func_435(uParam0);
			}
			else
			{
				func_1139(uParam0);
				func_1140(uParam0);
				if (!func_431(128) && func_183(uParam0->f_125, 8192))
				{
					if (func_183(uParam0->f_126, 131072) && func_361(Global_34, uParam0->f_127, 1) <= 9f)
					{
						uParam0->f_147 = func_1141(_uiprompt_get_group_active_page(1754796591));
						_uiprompt_set_ambient_group_this_frame(uParam0->f_127, func_1142(func_183(uParam0->f_125, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_147, 2);
					}
				}
				if ((func_431(16) && func_183(uParam0->f_126, 8192)) || func_183(uParam0->f_126, 32768))
				{
					if (!ped_has_use_scenario_task(Global_34))
					{
						if (uParam0->f_150 != -1 && (get_game_timer() - uParam0->f_150) > 1000)
						{
							func_1134(16);
							func_184(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							clear_ped_tasks(Global_34, 1, 0);
							uParam0->f_132 = 0;
						}
						else
						{
							uParam0->f_132 = 2;
							func_1143(uParam0);
							uParam0->f_150 = get_game_timer();
							if (func_431(64))
							{
								func_1134(16);
								func_184(&(uParam0->f_126), 32768);
								func_718(&(uParam0->f_49), 2);
								func_1138(uParam0, 0);
								func_1128(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_132 == 2)
					{
						if ((get_game_timer() - uParam0->f_150) > 10000)
						{
							clear_ped_tasks(Global_34, 1, 0);
							func_1134(16);
							func_184(&(uParam0->f_126), 32768);
							uParam0->f_150 = -1;
							uParam0->f_132 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			if (func_361(Global_34, uParam0->f_127, 1) <= 36f)
			{
				func_1128(uParam0, 3);
			}
			break;
		case 5:
			if (func_1124(uParam0))
			{
				_0x6339c1ea3979b5f7("idle", "Player_Campfire_Scenes");
				func_1125(uParam0);
			}
			_0xc9caeaeec1256e54(2011163970);
			disable_control_action(0, 255439828, false);
			func_1144();
			if (!func_185(1))
			{
				func_1120(0);
				uParam0->f_131 = -1;
				func_1145(uParam0, 0);
				_0xfdecca06e8b81346(Global_34);
				func_1128(uParam0, 3);
			}
			else
			{
				if (uParam0->f_129 != -1)
				{
					func_1136();
				}
				if (has_anim_event_fired(Global_34, -996707397))
				{
					func_1145(uParam0, 0);
				}
				else
				{
					func_1145(uParam0, 1);
				}
				func_1146(uParam0);
				if (func_1147(uParam0, 0, 0, -1))
				{
					func_1145(uParam0, 0);
					if (uParam0->f_132 == 2)
					{
						func_718(&(uParam0->f_49), 2);
						func_1138(uParam0, 0);
						func_1128(uParam0, 7);
					}
					else if (uParam0->f_132 == 0)
					{
						func_1128(uParam0, 9);
					}
					else if (uParam0->f_132 == 11 || uParam0->f_132 == 10)
					{
						func_1128(uParam0, 8);
					}
					else
					{
						func_1128(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			_0xc9caeaeec1256e54(2011163970);
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			if (uParam0->f_129 != -1)
			{
				func_1136();
				disable_control_action(0, 1287709438, false);
			}
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			if (((has_anim_event_fired(Global_34, 1070143458) && (get_game_timer() - uParam0->f_149) > 2000) && !func_183(uParam0->f_126, 4)) && uParam0->f_132 != 1)
			{
				if (func_1147(uParam0, 1, uParam0->f_132, uParam0->f_131))
				{
					if (uParam0->f_132 == 0)
					{
						func_1128(uParam0, 9);
						func_432(uParam0);
						return 0;
					}
					else
					{
						func_1145(uParam0, 0);
						uParam0->f_149 = get_game_timer();
					}
				}
			}
			if (func_1148(uParam0) || !ped_has_use_scenario_task(Global_34))
			{
				if ((uParam0->f_129 == uParam0->f_131 || uParam0->f_131 == -1) || uParam0->f_132 == 1)
				{
					if (uParam0->f_132 != 0)
					{
						uParam0->f_130 = uParam0->f_132;
					}
					if (uParam0->f_131 != -1)
					{
						uParam0->f_129 = uParam0->f_131;
					}
					else
					{
						uParam0->f_129 = func_1122(uParam0);
					}
					uParam0->f_131 = -1;
					func_1128(uParam0, 5);
				}
			}
			break;
		case 8:
			_0xc9caeaeec1256e54(2011163970);
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			iVar2 = _0xc22aa08a8adb87d4(Global_34);
			if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (((iVar2 == 1135271674 || iVar2 == 1844142525) || iVar2 == -571916863) || iVar2 == 825619760)
				{
					if (uParam0->f_132 == 11)
					{
						if (_0x3d10d7179d7034af(func_489(0), -569063887, 0))
						{
							_0x6a564540fac12211(func_489(0), -569063887);
						}
						func_1150(-569063887, 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = get_game_timer();
						uParam0->f_132 = 0;
					}
					else if (uParam0->f_132 == 10)
					{
						func_1150(1259508039, 0, 0, 0, 1, 0, 0);
						uParam0->f_149 = get_game_timer();
						uParam0->f_132 = 0;
					}
					else
					{
						uParam0->f_132 = 0;
						_0xd962f8579d702db5();
						func_542(&(uParam0->f_157));
						func_1128(uParam0, 5);
					}
				}
				else if (iVar2 == -597629206 || iVar2 == 1316803372)
				{
					func_1151(36116464, 0.5f);
					uParam0->f_149 = get_game_timer();
				}
				else if (iVar2 == -518407211 || iVar2 == 1662215698)
				{
					func_1151(653141085, 2f);
					uParam0->f_149 = get_game_timer();
				}
				else if (iVar2 == -1433449364 || iVar2 == 2058555960)
				{
					func_1151(1335077954, 2f);
					uParam0->f_149 = get_game_timer();
				}
			}
			if (!ped_has_use_scenario_task(Global_34))
			{
				_0xd962f8579d702db5();
				uParam0->f_132 = 0;
				func_1128(uParam0, 5);
			}
			break;
		case 7:
			_0xc9caeaeec1256e54(2011163970);
			if (func_1124(uParam0))
			{
				func_1152(-1199896558, 1, 1, -142743235);
				func_1125(uParam0);
			}
			_disable_first_person_cam_this_frame();
			func_1136();
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -399233038, false);
			disable_control_action(0, -1046962283, false);
			disable_control_action(0, -1404316431, false);
			if ((((func_1153(uParam0, uParam0->f_130) || !ped_has_use_scenario_task(Global_34)) || _0x916b8e075abc8b4e(Global_34, 1)) || is_entity_on_fire(Global_34)) || _0x0c3cb2e600c8977d(Global_34, 0))
			{
				_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_1152(-1199896558, 1, 1, -142743235);
				func_437(&(uParam0->f_49), 1, 1);
				_0xd962f8579d702db5();
				if (((!ped_has_use_scenario_task(Global_34) || _0x916b8e075abc8b4e(Global_34, 1)) || is_entity_on_fire(Global_34)) || _0x0c3cb2e600c8977d(Global_34, 0))
				{
					if (is_screen_faded_out())
					{
						do_screen_fade_in(500);
					}
					if (does_entity_exist(uParam0->f_133))
					{
						delete_object(&(uParam0->f_133));
					}
					if (((func_569(0) && !func_566()) && !func_183(uParam0->f_126, 256)) && uParam0->f_49.f_61 != -1199896558)
					{
						if (((((((uParam0->f_124 == 3 || uParam0->f_124 == 4) || uParam0->f_124 == 11) || uParam0->f_124 == 16) || uParam0->f_124 == 7) || uParam0->f_124 == 6) || uParam0->f_124 == 14) || uParam0->f_124 == 15)
						{
							func_1154(uParam0->f_49.f_61, 1, 1, 1, 0);
							func_362(&(uParam0->f_126), 256);
						}
					}
					if (is_entity_on_fire(Global_34))
					{
						clear_ped_tasks(Global_34, 1, 0);
					}
				}
				uParam0->f_130 = 6;
				uParam0->f_132 = 6;
				func_542(&(uParam0->f_157));
				func_1128(uParam0, 5);
			}
			break;
		case 9:
			if (func_1124(uParam0))
			{
				func_1125(uParam0);
			}
			if (!ped_has_use_scenario_task(Global_34))
			{
				_0xd962f8579d702db5();
				func_437(&(uParam0->f_49), 1, 1);
				func_1128(uParam0, 3);
			}
			else if (!_0x0c3cb2e600c8977d(Global_34, 1))
			{
				func_1155(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

bool func_907()
{
	iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
	iVar1 = iVar0;
	if (((iVar1 == 1020517461 || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052)
	{
		return true;
	}
	return false;
}

bool func_908(var uParam0, float fParam1)
{
	iVar0 = _create_volume_cylinder(*uParam0, 0f, 0f, 0f, fParam1, fParam1, 1f);
	if (_0xa1fbac56d38563e2(iVar0))
	{
		func_70(iVar0);
		return true;
	}
	if (func_1156(&iVar0))
	{
		func_70(iVar0);
		return true;
	}
	func_70(iVar0);
	return false;
}

bool func_909()
{
	return &Global_1956123;
}

bool func_910()
{
	return Global_1102219->f_3664;
}

bool func_911()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return &Global_1071686;
}

bool func_912()
{
	return Global_1940311->f_1;
}

void func_913(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

bool func_914(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (!func_909())
	{
		return false;
	}
	if (Global_1296859->f_12)
	{
		return false;
	}
	if (func_296(1, 255))
	{
		return false;
	}
	if (func_1157())
	{
		return false;
	}
	if (vdist(get_entity_coords(*uParam0, true, false), uParam0->f_30) > 3.5f)
	{
		return false;
	}
	if (is_ped_in_melee_combat(*uParam0))
	{
		return false;
	}
	if (is_ped_in_combat(*uParam0, 0))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(*uParam0, true))
	{
		return false;
	}
	if (is_ped_on_mount(*uParam0))
	{
		return false;
	}
	if (_is_ped_hogtied(*uParam0))
	{
		return false;
	}
	if (_is_ped_lassoed(*uParam0))
	{
		return false;
	}
	if (_0x0e99e3bf11bb6367(*uParam0))
	{
		return false;
	}
	if (_0x3bdfcf25b58b0415(*uParam0))
	{
		return false;
	}
	if (is_ped_using_any_scenario(*uParam0))
	{
		return false;
	}
	if (func_690(get_player_index(), 0, 0, 1))
	{
		return false;
	}
	if (_is_ped_carrying(*uParam0) || func_507(*uParam0))
	{
		return false;
	}
	return true;
}

void func_915(var uParam0)
{
	if (func_181(uParam0->f_4))
	{
		func_182(&(uParam0->f_4), 1, 1);
	}
	if (func_41() == 0)
	{
		iVar0 = -473983589;
	}
	else
	{
		iVar0 = -719620017;
	}
	uParam0->f_4 = func_309("PLAYER_WARDROBE_MAIN_MENU", iVar0, uParam0->f_30, uParam0->f_19, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
	set_bit(&(uParam0->f_17), 8);
}

bool func_916(int iParam0, bool bParam1)
{
	if (bParam1 && !func_181(iParam0))
	{
		return false;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_917(int iParam0)
{
	set_ped_reset_flag(iParam0, 131, true);
	set_ped_reset_flag(iParam0, 295, true);
	func_1158(4);
}

void func_918(var uParam0)
{
	_text_database_request("WARD");
	_0x5199405eabfbd7f0("CamTransition01");
	_0x5199405eabfbd7f0("CamTransitionBlink");
	switch (func_41())
	{
		case 0:
			func_1159(uParam0);
			break;
	}
}

void func_919(var uParam0)
{
	if (!is_bit_set(uParam0->f_2506.f_17, 1))
	{
		iVar0 = 614617847;
		if (func_1160() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1161(uParam0, iVar0, -1064259667, 1))
		{
			func_1163(uParam0, 174402);
			func_1165(uParam0, 175133);
			func_1167(uParam0, 175779);
			func_1169(uParam0, 176094);
			func_1171(uParam0, 176361);
			func_1172(uParam0, uParam0->f_2506.f_13);
			func_1174(uParam0, func_1173(&(uParam0->f_176.f_1878)));
			set_bit(&(uParam0->f_2506.f_17), 1);
		}
	}
	if (is_bit_set(uParam0->f_2506.f_17, 1))
	{
		if (!is_bit_set(uParam0->f_2506.f_17, 2))
		{
			if (func_1175(uParam0))
			{
				set_bit(&(uParam0->f_2506.f_17), 2);
			}
		}
	}
}

int func_920(var uParam0)
{
	if (!_text_database_has_loaded("WARD"))
	{
		return 0;
	}
	if (_0xbf2dd155b2adcd0a("CamTransition01"))
	{
		return 0;
	}
	if (_0xbf2dd155b2adcd0a("CamTransitionBlink"))
	{
		return 0;
	}
	switch (func_41())
	{
		case 0:
			return func_1176(uParam0);
		default:
			break;
	}
	return 0;
}

void func_921(var uParam0)
{
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		animpostfx_play("CamTransition01");
	}
	if (_does_volume_exist(uParam0->f_1))
	{
		_delete_volume(uParam0->f_1);
	}
	uParam0->f_1 = _create_volume_cylinder(uParam0->f_27, 0f, 0f, 0f, 5f, 5f, 10f);
	_0xb56d41a694e42e86(uParam0->f_1, 10208, 8192, 0, -1, -1, 0);
	_0x19c7567d2f2287d6(uParam0->f_1, 7);
	uParam0->f_3 = _0x4c39c95ae5db1329(uParam0->f_1, 0, 7);
	_0x94a3c1b804d291ec(*uParam0, 0, 0, 1, 1);
	set_player_control(player_id(), false, 0, false);
	clear_ped_tasks_immediately(*uParam0, false, true);
	_0x0eabf182fbb63d72(*uParam0, 1, 1);
	_set_entity_coords_and_heading(*uParam0, uParam0->f_27, uParam0->f_20, true, false, true);
	_0x9587913b9e772d29(*uParam0, 0);
	func_211(0, *uParam0);
	switch (func_41())
	{
		case 0:
			func_1177(uParam0);
			break;
	}
	func_1178(uParam0);
	func_1179(*uParam0, &(uParam0->f_2));
	iVar0 = 1;
	if (&Global_1952637->f_1675.f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_12 = func_1180(&(Global_1952637->f_1675.f_1[iVar0]));
	}
	set_bit(&(uParam0->f_17), 10);
	Global_1956123->f_1 = 1;
}

bool func_922(bool bParam0)
{
	if (-1829635046 == func_1181(81053684))
	{
		if (func_1182(bParam0))
		{
			return true;
		}
	}
	else if (func_1183(-525676072, bParam0) || func_481(func_1184(1742327865), -1303648999))
	{
		if (func_1182(bParam0))
		{
			return true;
		}
	}
	return false;
}

int func_923(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1185(iParam0))
	{
		return 0;
	}
	if (func_1186(iParam0))
	{
		if (func_922(&uVar0))
		{
			if (bParam1)
			{
				return 0;
			}
		}
		else if (!bParam1)
		{
			return 0;
		}
	}
	_0x2208438012482a1a(Global_34, false, false);
	iVar1 = 0;
	if (bParam1)
	{
		iVar1 = 1;
		_0xc494c76a34266e82(Global_34, 0);
		if (add_shocking_event_for_entity(1925708505, Global_34, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
		{
		}
	}
	else
	{
		iVar1 = 2;
		_0xc494c76a34266e82(Global_34, 13);
	}
	func_1187(iParam0, iVar1);
	func_205(23, 0, 0, 0, 0);
	return 1;
}

bool func_924(var uParam0)
{
	iVar0 = 1;
	if (uParam0->f_2207.f_139)
	{
		Stack.Push(uParam0);
		Stack.Push(func_1188(uParam0));
		Stack.Push(func_1189(uParam0));
		Call_Loc(uParam0->f_2207.f_140);
	}
	if (uParam0->f_2207.f_162)
	{
		iVar1 = func_1190(uParam0);
		iVar2 = func_1191(uParam0);
		if (does_entity_exist(iVar1))
		{
			func_1192(uParam0, iVar1);
			uParam0->f_2207.f_162 = 0;
		}
		else if (does_entity_exist(iVar2))
		{
			func_1193(uParam0, iVar2);
			uParam0->f_2207.f_162 = 0;
		}
	}
	if (func_1194())
	{
		Global_1051439->f_43 = 0;
		return false;
	}
	func_1195(&(uParam0->f_2160));
	func_1196(&(uParam0->f_176));
	set_ped_reset_flag(func_731(uParam0), 258, true);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	disable_control_action(0, -2131587435, false);
	if (uParam0->f_2207.f_81)
	{
		func_1197(uParam0, func_1189(uParam0), 1);
		uParam0->f_2207.f_81 = 0;
	}
	if (func_1198())
	{
		if (func_1199(128))
		{
			if (Global_1915715->f_20241.f_3.f_2)
			{
				iVar3 = func_1189(uParam0);
				if (!func_1200(iVar3))
				{
				}
				Global_1915715->f_20241.f_3.f_2 = 0;
			}
			else
			{
				iVar4 = func_1188(uParam0);
				uParam0->f_2207.f_70 = iVar4;
				if (!uParam0->f_2207.f_118)
				{
					if (!func_1201(uParam0->f_2207.f_79, &(uParam0->f_2207)))
					{
					}
				}
				else
				{
					uParam0->f_2207.f_118 = 0;
				}
				uParam0->f_2207.f_79 = 0;
				if (uParam0->f_2207.f_119 <= -1)
				{
					uParam0->f_2207.f_119 = 0;
				}
				if (!func_1202(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2207.f_145)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar4);
						Stack.Push(func_1188(uParam0));
						Call_Loc(uParam0->f_2207.f_146);
					}
					uParam0->f_2207.f_70 = iVar4;
				}
			}
			func_1203(128);
		}
		else if (func_1199(256))
		{
			iVar5 = func_1188(uParam0);
			uVar6 = func_1204(&(uParam0->f_2207));
			if (uParam0->f_2207.f_119 <= -1)
			{
				uParam0->f_2207.f_119 = uVar6;
			}
			uParam0->f_2207.f_70 = iVar5;
			if ((!uParam0->f_2207.f_118 && uParam0->f_2207.f_121) && uParam0->f_2207.f_121.f_7 == iVar5)
			{
				if (!func_1205(uParam0))
				{
				}
			}
			else if (!uParam0->f_2207.f_118 && func_1206(uParam0))
			{
				if (uParam0->f_4 == 179 && is_bit_set(uParam0->f_2506.f_17, 12))
				{
					func_1207(uParam0, 128);
				}
				else
				{
					func_1208(uParam0, 7);
					iVar0 = 0;
				}
			}
			else
			{
				if (!uParam0->f_2207.f_118)
				{
					if (!func_1209(&(uParam0->f_2207)))
					{
					}
				}
				else
				{
					uParam0->f_2207.f_118 = 0;
				}
				if (!func_1202(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2207.f_145)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar5);
						Stack.Push(func_1188(uParam0));
						Call_Loc(uParam0->f_2207.f_146);
					}
					uParam0->f_2559.f_9 = func_1188(uParam0);
					uParam0->f_2559.f_10 = func_1210(uParam0);
				}
			}
			bVar7 = func_1211();
			if (func_331(bVar7, 0) || func_1017(func_764(bVar7), 2))
			{
				func_1212(bVar7);
			}
			func_1203(256);
		}
		if (func_1199(32) || func_1199(64))
		{
			if (!func_1213(uParam0))
			{
			}
			func_1203(64);
			func_1203(32);
		}
		if (func_1199(8))
		{
			if (!func_1214(uParam0))
			{
			}
			if (!func_1199(512) && !uParam0->f_2207.f_82)
			{
				func_1215(uParam0);
			}
			else if (uParam0->f_2207.f_82)
			{
				uParam0->f_2207.f_82 = 0;
			}
			if (func_1189(uParam0) == 2144984909)
			{
				func_1216(uParam0);
			}
			func_1203(512);
			func_1203(8);
		}
		if (func_1199(32768))
		{
			func_1217(uParam0);
			func_1203(32768);
		}
		if (func_1199(2))
		{
			if (func_1199(4))
			{
				func_1218(uParam0);
				func_1203(4);
			}
			func_1215(uParam0);
			if (func_1189(uParam0) == 2144984909)
			{
				func_1216(uParam0);
			}
			func_1203(2);
		}
		if (func_1199(16384))
		{
			if (func_1219() == 732138465)
			{
				func_1220(uParam0);
				func_1216(uParam0);
			}
			else if (!func_1221(uParam0))
			{
			}
			func_1203(16384);
		}
		if (func_1199(4096))
		{
			if (_virtual_collection_exists(func_1222()))
			{
				iVar8 = func_1223(uParam0);
				if (iVar8 <= 0)
				{
				}
				else
				{
					if (func_1189(uParam0) == 1036144478)
					{
						iVar11 = iVar8;
						bVar12 = false;
						iVar9 = 0;
						while (iVar9 < iVar11)
						{
							bVar10 = func_1225(func_1224(uParam0), func_1188(uParam0), iVar9);
							if (func_1226(func_1224(uParam0), bVar10, 16384))
							{
								bVar12 = !_unlock_is_unlocked(1582250596);
							}
							else if (func_1226(func_1224(uParam0), bVar10, 32768))
							{
								bVar12 = (!_unlock_is_unlocked(2139782524) && func_1227(uParam0, func_1224(uParam0), bVar10));
							}
							if (bVar12)
							{
								iVar8 = (iVar8 - 1);
								if (uParam0->f_2207.f_119 > iVar9)
								{
									uParam0->f_2207.f_119 = (uParam0->f_2207.f_119 - 1);
								}
							}
							iVar9++;
						}
					}
					_virtual_collection_set_size(func_1222(), iVar8);
					if (uParam0->f_2207.f_155)
					{
						Stack.Push(uParam0);
						Stack.Push(func_1188(uParam0));
						Stack.Push(&uVar13);
						Call_Loc(uParam0->f_2207.f_156);
						if (StackVal)
						{
							uParam0->f_2207.f_119 = uVar13;
						}
					}
					func_1228(uParam0, uParam0->f_2207.f_119);
					uParam0->f_2207.f_120 = uParam0->f_2207.f_119;
					uParam0->f_2207.f_119 = -1;
				}
			}
			func_1203(4096);
		}
		if (func_1199(8192))
		{
			func_1229(uParam0);
			iVar14 = func_1230();
			iVar15 = func_1231();
			if (!func_1232(uParam0, iVar15, iVar14))
			{
			}
			func_1203(8192);
		}
		if (!func_1199(256))
		{
			func_1233();
		}
	}
	func_1234(uParam0);
	if (func_1235(uParam0))
	{
		iVar16 = func_1211();
		if (func_1236() == 193788635 || func_1236() == -1198174119)
		{
			iVar16 = func_1237();
		}
		func_1238(uParam0, iVar16, 0);
		if (func_1239(uParam0))
		{
			StringCopy(&cVar17, func_1240(uParam0->f_3), 32);
			StringConCat(&cVar17, "_COUPONS", 32);
			iVar21 = get_hash_key(&cVar17);
			iVar22 = -1979958621;
			Global_1051439->f_3258 = iVar16;
			uParam0->f_2767.f_9 = { uParam0->f_2207 };
			uParam0->f_2767.f_53 = uParam0->f_2207.f_74;
			uParam0->f_2767.f_54 = 0;
			if (func_1241(Global_1051439->f_3258))
			{
				uParam0->f_2207.f_116 = _databinding_read_data_int_from_parent_by_hash(func_1242(), func_1243());
			}
			func_447(uParam0);
			func_448(uParam0);
			func_1244(uParam0, iVar21, iVar22, -1, 1, 1);
		}
	}
	if (Global_1915715->f_20241.f_3.f_4)
	{
		func_1245(uParam0);
		func_1246(uParam0);
		func_1215(uParam0);
		iVar23 = 0;
		if (func_1247(uParam0, &iVar23))
		{
			if (iVar23 != func_1223(uParam0))
			{
				iVar24 = func_1248();
				if (iVar24 >= iVar23)
				{
					iVar24 = (iVar23 - 1);
				}
				func_1249(uParam0, iVar24, 1);
			}
		}
		Global_1915715->f_20241.f_3.f_4 = 0;
		Global_1915715->f_20241.f_3.f_5 = 0;
	}
	if (_databinding_is_data_id_valid(Global_1915715->f_20241.f_3.f_5))
	{
		func_1250(uParam0, Global_1915715->f_20241.f_3.f_5, &bVar25);
		func_1251(uParam0, bVar25);
		func_1215(uParam0);
		Global_1915715->f_20241.f_3.f_5 = 0;
	}
	if (Global_1915715->f_20241.f_3.f_6)
	{
		func_447(uParam0);
		func_1252(0);
	}
	iVar26 = func_1189(uParam0);
	if ((((iVar26 == 94016929 || iVar26 == 178644271) || iVar26 == 1860655620) || iVar26 == -996064024) || iVar26 == -1548684311)
	{
		iVar27 = func_1190(uParam0);
		if (does_entity_exist(iVar27))
		{
			_0x3fe4fb41ef7d2196(iVar27);
			if ((get_frame_count() % 60) == 0)
			{
			}
		}
	}
	if (func_1081(&(uParam0->f_2160), 0))
	{
		if (Global_1915715->f_23293)
		{
			func_1253();
		}
		Global_1915715->f_23293 = 0;
	}
	else
	{
		Global_1915715->f_23293 = 1;
	}
	if (func_1254(uParam0, 128))
	{
		func_1255(uParam0);
	}
	if (func_1256(uParam0))
	{
		disable_control_action(2, -1860390754, false);
		disable_control_action(2, 1141111167, false);
		disable_control_action(2, -1384133541, false);
		disable_control_action(2, 1710877787, false);
		disable_control_action(2, -875187602, false);
		disable_control_action(2, 652860416, false);
		disable_control_action(2, 285921746, false);
		disable_control_action(2, -1932931774, false);
		func_1257(uParam0, 5, 0);
		uParam0->f_2207.f_83 = 0;
	}
	if (uParam0->f_4 != 179)
	{
		func_1258(uParam0);
	}
	if (func_1199(131072))
	{
		Var28 = { Global_1915715->f_20241.f_3.f_20 };
		iVar42 = Global_1915715->f_20241.f_3.f_34;
		switch (iVar42)
		{
			case -1318406457:
				if (func_1259(Var28.f_8))
				{
					func_1260(uParam0);
				}
				break;
			case -1883671814:
			case 541670136:
			case 2113164098:
				if (func_1241(Var28.f_8))
				{
					switch (uParam0->f_2207.f_116)
					{
						case 0:
							Var43 = { func_773(-388128145, Var28, -653439684, 0) };
							break;
						case 1:
							Var43 = { func_773(515427499, Var28, -653439684, 0) };
							break;
					}
					if (func_1261(Var43, 1, 0))
					{
					}
				}
				if (func_1262(Global_1915715->f_20241.f_3.f_35))
				{
					func_1263(uParam0->f_2160.f_1, Var28.f_8);
				}
				break;
		}
		if (uParam0->f_2207.f_153)
		{
			Stack.Push(uParam0);
			Stack.Push(Var28);
			Stack.Push(iVar42);
			Call_Loc(uParam0->f_2207.f_154);
		}
		func_1203(131072);
		func_1264();
	}
	iVar47 = func_1211();
	iVar48 = func_1236();
	if (iVar48 != -841939068)
	{
		if (iVar48 == 193788635 || iVar48 == -1198174119)
		{
			iVar47 = func_1237();
		}
		else if (iVar48 == 317179309)
		{
			iVar47 = 692350163;
		}
		else if (iVar48 == -1594421938)
		{
			iVar47 = 675142260;
		}
		else if (iVar48 == -1352600334)
		{
			iVar47 = -1724045811;
		}
		iVar49 = -1;
		if (func_1189(uParam0) == 310306577)
		{
			iVar49 = func_1265(uParam0, &uVar50, 1, 1);
		}
		func_1266(iVar47, 0, iVar49);
	}
	if (func_1254(uParam0, 128))
	{
		if (func_1267(&(uParam0->f_2207.f_117), &bVar51))
		{
			func_1268(uParam0, 128);
			if (bVar51)
			{
				func_1208(uParam0, 7);
				iVar0 = 0;
			}
			else
			{
				func_1209(&(uParam0->f_2207));
				uParam0->f_2207.f_79 = 0;
				func_1269();
			}
		}
	}
	Global_1915715->f_20241.f_47 = func_1224(uParam0);
	Global_1915715->f_20241.f_45 = func_1188(uParam0);
	Global_1915715->f_20241.f_46 = func_1270(&(uParam0->f_2207));
	Global_1915715->f_20241.f_48 = iVar0;
	return iVar0;
}

void func_925(var uParam0)
{
	func_917(uParam0->f_2506);
	func_1271(uParam0);
	func_1272(uParam0);
}

bool func_926(var uParam0, var uParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, bool bParam8)
{
	if (!func_181(*uParam1))
	{
		iVar0 = 4;
		if (!bParam8)
		{
			iVar0 = 0;
		}
		*uParam1 = func_309(sParam2, iParam6, vParam3, fParam7, 1, 0, 0, iVar0, 570, 4000, 10, 1073741824, 0, -820096546, 0);
		if (func_181(*uParam1))
		{
			func_511(*uParam1, fParam7, 1);
			func_312(*uParam1, 1, 1, 1);
			func_44(uParam0, 134217728);
		}
	}
	else
	{
		bVar1 = false;
		if (bParam8 && func_313(*uParam1, 1))
		{
			bVar1 = true;
		}
		else if (func_512(*uParam1, 1))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			func_69(uParam0, 134217728);
			func_182(uParam1, 1, 1);
			return true;
		}
	}
	return false;
}

void func_927(var uParam0)
{
	uParam0->f_410.f_18 = { get_offset_from_entity_in_world_coords(Global_34, 1.2102f, -0.9588f, 1.2804f) };
	uParam0->f_410.f_21 = { 0f, 0f, 0f };
	fVar0 = 39.9f;
	if (!_0xa24c1d341c6e0d53(1, 0, 0))
	{
		animpostfx_play("CamTransition01");
	}
	if (!does_cam_exist(uParam0->f_410.f_17))
	{
		uParam0->f_410.f_17 = create_cam_with_params("default_scripted_camera", uParam0->f_410.f_18, uParam0->f_410.f_21, fVar0, false, 2);
	}
	else
	{
		set_cam_params(uParam0->f_410.f_17, uParam0->f_410.f_18, uParam0->f_410.f_21, fVar0, 0, 1, 1, 2, 1, 0);
	}
	if (!is_cam_active(uParam0->f_410.f_17))
	{
		set_cam_active(uParam0->f_410.f_17, true);
	}
	if (!is_cam_rendering(uParam0->f_410.f_17))
	{
		point_cam_at_entity(uParam0->f_410.f_17, Global_34, 0f, -0.1f, -0.15f, true);
		render_script_cams(true, false, 3000, true, false, 0);
	}
}

int func_928(struct<2> Param0)
{
	if (!func_107(Param0))
	{
		return -1;
	}
	iVar0 = func_1273(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

float func_929(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_930(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_931(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_932(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_442(iParam0);
		return false;
	}
	if (func_931(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1274(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_933(struct<2> Param0, var uParam2)
{
	if (!func_107(Param0))
	{
		return false;
	}
	func_1275(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

int func_934(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 5:
			iVar0 = 4;
			break;
		case 6:
			iVar0 = 5;
			break;
		case 7:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

bool func_935(var uParam0, int iParam1)
{
	return uParam0->f_9[iParam1]->f_4 != 0;
}

void func_936(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_9[iParam1]->f_1 != iParam2)
	{
		uParam0->f_9[iParam1]->f_1 = iParam2;
	}
}

int func_937(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return (*Global_1134390)[iParam0]->f_38.f_12.f_5;
}

int func_938(var uParam0, int iParam1, int iParam2)
{
	if (!func_1276(uParam0, iParam1))
	{
		return 0;
	}
	func_940(uParam0, iParam1, iParam2);
	return 1;
}

bool func_939(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_405(1))
	{
		return false;
	}
	if (!func_46(iParam0))
	{
		return false;
	}
	if (!func_1277(iParam0, &iVar0))
	{
		return false;
	}
	if (func_381(iParam0, 128))
	{
		return false;
	}
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (!_0xb07d3185e11657a5(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = _0xf260af6f43953316(iVar0);
	if (network_does_network_id_exist(iVar1))
	{
		*uParam1 = iVar1;
	}
	else
	{
		return false;
	}
	if (bParam2)
	{
		func_1278(iParam0);
	}
	return true;
}

void func_940(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_9[iParam1]->f_4 = iParam2;
}

void func_941(var uParam0, var uParam1, int iParam2)
{
	iVar0 = net_to_ped(&(uParam0->f_9[iParam2]));
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0xf3354d6ca46f419d(iVar0, 0);
	set_ped_relationship_group_hash(iVar0, Global_1132288->f_2060);
	_0x6569f31a01b4c097(iVar0, 1, 0);
	_0x6569f31a01b4c097(iVar0, 0, 0);
	if (iParam2 == 0)
	{
		set_ped_config_flag(iVar0, 146, true);
		set_ped_config_flag(iVar0, 113, true);
		set_ped_config_flag(iVar0, 298, true);
		set_ped_config_flag(iVar0, 307, true);
		_0xae6004120c18df97(iVar0, 0, 0);
		_0xfc3db99c8144cd81(iVar0, uParam1->f_10, 0, 0, 0);
		set_blocking_of_non_temporary_events(iVar0, true);
		func_161(iVar0, 1);
		func_244(&(uParam1->f_606), iVar0, func_1279(), 1);
	}
}

void func_942(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_9[iParam1]->f_2 = iParam2;
}

bool func_943(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_801(*uParam0, 256))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_944(vector3 vParam0, float fParam3, float fParam4)
{
	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { get_random_float_in_range(-fParam3, fParam3), get_random_float_in_range(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = get_random_float_in_range(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_1280(vParam0, fParam3, fParam4);
}

bool func_945(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1281(*uParam0, 0f, 0f, 0f))
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
	if (bParam4)
	{
		vVar4 = { *uParam0 };
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

bool func_946(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1282(iParam1))
	{
		return false;
	}
	iVar0 = func_1283(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

int func_947(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
				if (!Global_26640 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_823(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
						if (!Global_26640)
						{
							if (func_823(iVar4) && iVar4 != iVar0)
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
	if (func_41() == -1 && !func_1284(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_34)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_26640) && iParam0 != Global_34) && get_ped_relationship_group_hash(iParam0) == 1030835986)
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
				if (func_1284(-183018591))
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
	else if (iVar0 == -164645981 && iParam0 == Global_34)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_34 && func_823(iVar0))
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
	if (iParam0 == Global_34)
	{
		func_1285(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1286(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_1287(iVar0))
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

void func_948(int iParam0)
{
	if (network_does_network_id_exist(iParam0) && network_has_control_of_network_id(iParam0))
	{
		iVar0 = net_to_ped(iParam0);
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_entity_max_health(iVar0, 240);
			_set_entity_health(iVar0, 240, 0);
			_0x2ba918c823b8ba56(iVar0, 0.1f);
			_0xd77ae48611b7b10a(iVar0, 2.5f);
			set_ped_combat_movement(iVar0, 1);
			_0x815c0074a1bc0d93(iVar0, 2);
			set_ped_combat_range(iVar0, 0);
			set_ped_combat_attributes(iVar0, 5, true);
			set_ped_combat_attributes(iVar0, 50, true);
			set_ped_combat_attributes(iVar0, 28, true);
			set_ped_combat_attributes(iVar0, 113, true);
			set_ped_combat_attributes(iVar0, 58, true);
			set_ped_combat_attributes(iVar0, 27, true);
			set_ped_combat_attributes(iVar0, 1, false);
			set_ped_combat_attributes(iVar0, 71, false);
			set_ped_combat_attributes(iVar0, 21, false);
			set_ped_flee_attributes(iVar0, 32768, true);
			set_ped_flee_attributes(iVar0, 16, false);
		}
	}
}

int func_949(int iParam0)
{
	iVar0 = 0;
	if (!network_is_player_active(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return (*Global_1134390)[iVar1]->f_38.f_26;
}

int func_950(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1474610726;
		case 2:
			return 1218684836;
		case 3:
			return 843437918;
		case 4:
			return 1718998864;
		case 5:
			return 912655145;
		case 6:
			return -1836458005;
		case 7:
			return 412579996;
		case 8:
			return -1437078769;
		case 9:
			return -1614060997;
		case 10:
			return 1512424315;
		case 11:
			return -1609509247;
		default:
			break;
	}
	return 0;
}

void func_951(var uParam0)
{
	Var0.f_8 = uParam0;
	func_515(9, Var0, func_514(0, 8));
}

void func_952(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_9[iParam2]->f_3)
	{
		case 0:
			func_1288(uParam0, uParam1, iParam2);
			break;
		case 1:
			func_1289(uParam0, uParam1, iParam2);
			break;
		case 2:
			func_1290(uParam0, uParam1, iParam2);
			break;
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
			func_1291(uParam0, uParam1, iParam2);
			break;
	}
}

void func_953(var uParam0, int iParam1)
{
	*uParam0->f_9[iParam1] = { Var0 };
}

bool func_954(int iParam0, bool bParam1)
{
	return is_bit_set(iParam0, bParam1);
}

bool func_955(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	iVar0 = func_1292(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

var func_956(struct<2> Param0)
{
	iVar0 = func_701(Param0, -1);
	return func_1293(iVar0);
}

int func_957(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_958(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1952637->f_1675.f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
		}
		else if (func_481(&(Global_1952637->f_1675.f_1[iVar0]), iParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_959(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_960(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_961(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1886596441;
		case 2:
			return -1283608591;
		case 3:
			return 1211464014;
		case 4:
			return 541839577;
		case 5:
			return 1159278686;
		case 6:
			return 1575725051;
		case 7:
			return -466985247;
		case 8:
			return -1486813850;
		case 9:
			return -1629816098;
		case 10:
			return -1763127828;
		case 11:
			return 1078091189;
		case 12:
			return 1102102921;
		case 13:
			return 952598509;
		case 14:
			return -238050295;
		case 15:
			return -402732872;
		case 16:
			return -876131035;
		case 17:
			return 823689107;
		default:
			break;
	}
	return 1886596441;
}

bool func_962(int iParam0)
{
	return ((((((iParam0 == 9 || iParam0 == 10) || iParam0 == 7) || iParam0 == 13) || iParam0 == 14) || iParam0 == 15) || iParam0 == 11);
}

bool func_963(vector3 vParam0, int iParam3, int iParam4, var uParam5)
{
	if (!func_501(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = iParam4;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -367724427;
		_datafile_get_hash(uParam5, &Var0);
		return true;
	}
	return false;
}

bool func_964(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	if (!func_46(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			*uParam2 = { (*Global_1131196)[iParam1]->f_20 };
			*uParam3 = 0f;
			break;
		case 9:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_41 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_59;
			break;
		case 10:
			if (iParam4 < 0 || iParam4 >= 7)
			{
				return false;
			}
			*uParam2 = { *Global_1132288->f_1[iParam1]->f_13[iParam4] };
			*uParam3 = &Global_1132288->f_1[iParam1]->f_49[iParam4];
			break;
		case 7:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_38 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_58;
			break;
		case 13:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_35 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_57;
			break;
		case 14:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_7 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_47;
			break;
		case 15:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_10 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_47;
			break;
		case 11:
			*uParam2 = { Global_1132288->f_1[iParam1]->f_44 };
			*uParam3 = Global_1132288->f_1[iParam1]->f_60;
			break;
		default:
			return false;
	}
	return true;
}

bool func_965(var uParam0, var uParam1, int iParam2)
{
	if (&uParam0->f_16[iParam2] != &(*Global_1131196)[*uParam1]->f_10[iParam2])
	{
		uParam0->f_16[iParam2] = &(*Global_1131196)[*uParam1]->f_10[iParam2];
		return true;
	}
	return false;
}

bool func_966(vector3 vParam0, int iParam3, int iParam4, var uParam5, float fParam6, var uParam7)
{
	if (!func_501(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = iParam4;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -367724427;
		_datafile_get_hash(uParam7, &Var0);
		Var0.f_2 = -1420258246;
		_datafile_get_vector(uParam5, &Var0);
		Var0.f_2 = 1073571568;
		_datafile_get_float(fParam6, &Var0);
		return true;
	}
	return false;
}

bool func_967(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_1282(iParam1))
	{
		return false;
	}
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (func_1294(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_1295(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && _0xb9d5bdda88e1bb66(iParam1))
	{
		*uParam0 = veh_to_net(_create_draft_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = veh_to_net(create_vehicle(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_968(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_112(iParam2);
	if (func_965(uParam0, uParam1, iVar0))
	{
		func_352(uParam0, uParam1, iParam2);
	}
}

bool func_969(var uParam0, int iParam1)
{
	return !func_43((*uParam0)[iParam1]->f_34);
}

int func_970(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return 0;
	}
	if (!func_1282(iParam1))
	{
		return 0;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_971(bool bParam0, int iParam1)
{
	func_184(bParam0, iParam1);
}

void func_972(bool bParam0)
{
	func_1127(bParam0, 1);
}

int func_973(int iParam0, bool bParam1, int iParam2)
{
	if (func_1028(255))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(522750908))
	{
		return 0;
	}
	if (!func_1296(iParam0))
	{
		return 0;
	}
	if (!func_1298(func_1297(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_974(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_485(bParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_481(bParam0, -537818634) || func_481(bParam0, -458578204)) && !func_481(bParam0, -1242251796)) && !func_481(bParam0, 127710288))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 307971639)
			{
				if (func_481(bParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -427144552)
			{
				return true;
			}
			else if (iVar0 == 307971639)
			{
				if (func_481(bParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_1299(bParam0) || func_1064(bParam0, -1636519629) == -701492487) || bParam0 == 894654881)
			{
				return true;
			}
			break;
		case 4:
			if (func_481(bParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_481(bParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_975(int iParam0)
{
	if (func_1300())
	{
		return 0;
	}
	if (!_0xdd73c9838ce7181d())
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	iVar0 = func_1301(iParam0);
	iVar1 = func_1302(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_1298(func_1303(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_976(int iParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1952637->f_2843.f_2 = 0;
		Global_1952637->f_2843.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*Global_1952637->f_2843.f_43[iVar0] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1952637->f_2843.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1304(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1305(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_1306(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_977(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1307(iVar0, 1);
		if (!func_1308(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1309(iVar0, 0);
				func_1310(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1311(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_978(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	bVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_1312(bVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_481(bVar0, -166674229))
	{
		return 0;
	}
	return func_1313(iParam0);
}

int func_979(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1307(iVar0, 1);
		if (func_1308(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1314(iVar0) == -1)
			{
				func_1309(iVar0, 0);
				func_1310(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1315(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return 1;
	}
	return 0;
}

void func_980(int iParam0)
{
	func_1315(iParam0, 8, 6);
}

bool func_981(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_1316(&(Global_1952637->f_1058), 2))
	{
		return false;
	}
	if (iParam1 == -2118203104)
	{
		bVar0 = func_1317(bParam0);
	}
	else if (iParam1 == -1811760631)
	{
		bVar0 = func_1318(bParam0);
	}
	else
	{
		return false;
	}
	iVar1 = func_1319(uParam3, iParam1);
	bVar2 = func_824(bVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1320(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1321(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1322(&Var3, bVar0, 0, 1, 6))
		{
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return false;
		}
		func_1323(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1324(uParam2, uParam3, bVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1322(&Var21, bVar0, 0, 1, 6))
		{
			return false;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return true;
}

int func_982(var uParam0)
{
	return uParam0;
}

bool func_983(int iParam0)
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

bool func_984(int iParam0)
{
	return (func_1325(iParam0) || func_1326(iParam0));
}

bool func_985(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
		case -1719060085:
		case -1632561800:
		case -1423861687:
		case -923693316:
		case -839140560:
		case -639682912:
		case -497931013:
		case 81053684:
		case 172394747:
		case 294388917:
		case 461122406:
		case 502936876:
		case 562107429:
		case 684307653:
		case 688587926:
		case 698653232:
		case 912453393:
		case 1282123855:
		case 1297434125:
		case 1388798186:
		case 1477698721:
		case 1769055947:
		case 1868067663:
		case 2016058810:
		case 2047428024:
			return true;
		default:
			break;
	}
	return false;
}

int func_986(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return -1;
	}
	if (func_1327(bParam0, 0))
	{
		return -1;
	}
	if (func_481(bParam0, -1938332139))
	{
		return 1;
	}
	if (func_481(bParam0, -821065926))
	{
		return 2;
	}
	if (func_481(bParam0, -923980501))
	{
		return 3;
	}
	if (func_481(bParam0, -1679966367))
	{
		return 4;
	}
	return -1;
}

bool func_987(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_988(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

Vector3 func_989(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

bool func_990(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_991(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

void func_992(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

bool func_993(var uParam0, bool bParam1)
{
	func_743(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_1328(Global_1952637->f_83[iVar1]->f_9, 0);
	iVar3 = func_1328(Global_1952637->f_83[iVar0]->f_9, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	else
	{
		uParam0->f_1[iVar1] = iVar2;
	}
	if (iVar3 == 0)
	{
		if (func_1160() == 24043185)
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0] = iVar3;
	}
	*uParam0 = bParam1;
	return true;
}

bool func_994(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (bParam2 != 0 && func_1329(iParam1) != bParam2)
	{
		return false;
	}
	if (func_1330(2, iParam1))
	{
		func_1331(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_995(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_1332(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_743(uParam0, func_1333(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1334(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1333(iVar0);
		}
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			bVar3 = iVar0;
			iVar1 = func_1335(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				uParam0->f_1[iVar1] = iVar0;
				if (bVar2)
				{
					func_1315(bVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1336(bVar3) && func_1337(&(uParam0->f_1[iVar1]), bVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_1338(uParam0, iVar11, func_1312(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_1160() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1312(&(uParam0->f_1[34])) == 0) && !func_204(32)) && !func_204(64))
					{
						uParam0->f_1[iVar1] = func_1328(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_1339(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_996(int iParam0)
{
	func_1311(iParam0, 8, 6);
}

void func_997(int iParam0)
{
	Global_1952637->f_1057 = iParam0;
}

float func_998(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	if (func_1340(iParam0, iParam1, &Var0))
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = _network_try_access_tunable_float(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_999(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x8f4f050054005c27(&(Global_1146212->f_2166), iParam0))
	{
		return true;
	}
	if (Global_1146212->f_2165 >= 21)
	{
		return false;
	}
	Global_1146212->f_2143[Global_1146212->f_2165] = iParam0;
	Global_1146212->f_2165++;
	return true;
}

bool func_1000(int iParam0)
{
	iVar0 = func_1001(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1001(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1745889187:
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case 370243254:
			return 4;
		case 1213888609:
			return 2;
		case 1416591065:
			return 1;
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

void func_1002()
{
	if (Global_1146212->f_21645[3]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 550, bVar0);
	if (Global_1146212->f_21645[4]->f_208)
	{
		if (!func_20((*Global_1298536)[&Global_1296859]->f_86, 1))
		{
			bVar1 = true;
		}
	}
	set_ped_config_flag(Global_1296859->f_8, 556, bVar1);
}

void func_1003()
{
	bVar0 = false;
	if (Global_1146212->f_21645[12]->f_208)
	{
		bVar0 = true;
	}
	set_ped_config_flag(Global_1296859->f_8, 263, bVar0);
}

char* func_1004(int iParam0)
{
	switch (iParam0)
	{
		case 1870637439:
			return "MP_ArrowDrain";
		case 492808644:
			return "MP_ArrowDisorient";
		case 50982971:
			return "MP_ArrowTracking";
		case -106166013:
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1005(int iParam0)
{
	switch (iParam0)
	{
		case 482459685:
			return -843895567;
		case -1655894020:
			return -1655894020;
		case 907911269:
			return 907911269;
		default:
			break;
	}
	return 0;
}

void func_1006(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((*Global_1193972)[iVar0]->f_5 == iParam0)
		{
			(*Global_1193972)[iVar0]->f_7 = 1;
			(*Global_1193972)[iVar0]->f_5 = 0;
		}
		iVar0++;
	}
}

void func_1007()
{
	set_ped_config_flag(Global_1296859->f_8, 305, false);
	_0x801917e7d7bce418(Global_1296859->f_8);
}

int func_1008(int iParam0)
{
	if (!func_753(iParam0))
	{
		return -1;
	}
	iVar0 = func_754(iParam0, 1);
	return &(Global_1146212->f_35859.f_9286[iVar0]);
}

bool func_1009(int iParam0, int iParam1)
{
	if (!func_471(iParam0))
	{
		return false;
	}
	iVar0 = func_224(iParam0, 1);
	iVar2 = Global_1146212->f_35859.f_3116[iVar0]->f_4;
	if (func_473(*Global_1146212->f_35859.f_3116[iVar0]))
	{
		iVar3 = &Global_1146212->f_35859.f_9286[func_754(iVar2, 1)];
		Var4 = { func_1010(iVar3) };
		if (iVar3 != iParam0 && Global_1146212->f_35859.f_3116[iVar0]->f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (&Global_1146212->f_35859.f_3116[iVar0])
	{
		case -1606735498:
		case -1455211650:
		case -1324410551:
		case -1276912520:
		case -1028878953:
		case -992973338:
		case -971275364:
		case -932644421:
		case -590004554:
		case -528257357:
		case -193993646:
		case -166662497:
		case -23641105:
		case 37083370:
		case 52193493:
		case 180258367:
		case 429965152:
		case 461381338:
		case 522523138:
		case 589907865:
		case 979390476:
		case 1028557598:
		case 1154303630:
		case 1254162401:
		case 1269394302:
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case 1759133423:
		case 1810352391:
		case 1915097582:
		case 1921800945:
		case 2046842849:
		case 2116793692:
			return true;
		case 1245579893:
			if (!func_1341() && !func_1342())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1341())
			{
				return false;
			}
			return true;
		case -2139108927:
			iVar1 = func_470(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_470(iParam1);
			if (iVar1 == &Global_1296859)
			{
				return false;
			}
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
			if (!_0x81fb74c83c2ed69f(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		case 190804938:
			iVar1 = func_470(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (iVar1 != &Global_1296859 && !func_441(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (!func_1343(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!&Global_1956200->f_1716[8])
			{
				return false;
			}
			iVar1 = func_470(iParam1);
			if (!_network_is_player_index_valid(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			if (_0x0c31c51168e80365(Global_1296859->f_8) != get_player_ped(&(Global_1296859->f_154[iVar1])))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1010(int iParam0)
{
	iVar0 = func_224(iParam0, 1);
	return *Global_1146212->f_35859.f_3116[iVar0];
}

bool func_1011(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	if (func_1340(iParam0, iParam1, &Var0))
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = _network_try_access_tunable_bool(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1012(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 482459685:
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1013(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!does_particle_fx_looped_exist(Global_1193972[iVar0]) && !(*Global_1193972)[iVar0]->f_6)
		{
			(*Global_1193972)[iVar0]->f_5 = iParam0;
			(*Global_1193972)[iVar0]->f_1 = iParam1;
			(*Global_1193972)[iVar0]->f_2 = iParam2;
			(*Global_1193972)[iVar0]->f_3 = iParam3;
			(*Global_1193972)[iVar0]->f_4 = iParam4;
			(*Global_1193972)[iVar0]->f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1014()
{
	set_ped_config_flag(Global_1296859->f_8, 305, true);
	_0x05ce6af4df071d23(Global_1296859->f_8, 0.7f);
}

char* func_1015(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1016(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1017(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(bParam0, iParam1);
}

bool func_1018(bool bParam0, bool bParam1)
{
	if (func_459(bParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(bParam0))
	{
		if (bParam1)
		{
			return func_1344();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1019(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_628(bParam0, *uParam1, bParam2, bParam3, 1, bParam4) > 0;
}

bool func_1020(bool bParam0, var uParam1, bool bParam2)
{
	if (func_1345(bParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1021(bool bParam0)
{
	iVar0 = func_489(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_773(271701509, func_627(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_773(271701509, func_627(bParam0), 12999093, 0);
}

bool func_1022(bool bParam0, int iParam1)
{
	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_459(bParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &bVar0))
		{
			if (func_1346(bParam0, iParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1023(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1347(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1024(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1992167326:
			return 8;
		case -1884014371:
			return 9;
		case -1871413878:
			return 10;
		case -1554232707:
			return 6;
		case -987049424:
			return 4;
		case -724534761:
			return 12;
		case -215258135:
			return 3;
		case -682748:
			return 0;
		case 892234183:
			return 5;
		case 1357161730:
			return 1;
		case 1483778247:
			return 11;
		case 1538293636:
			return 7;
		case 1581179681:
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

int func_1025()
{
	return Global_1051252->f_12;
}

char* func_1026()
{
	return "unnamed";
}

int func_1027(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_1028(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_296(36, iParam0);
}

int func_1029(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

int func_1030(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_1031(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_1348(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_1032(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_1033(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

bool func_1034(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_1035(int iParam0)
{
	func_1349(3, iParam0);
}

void func_1036(int iParam0)
{
	func_1349(2, iParam0);
}

int func_1037(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return -2089344668;
		case 121:
			return 2050756334;
		case 122:
			return 1086496835;
		case 123:
			return 1461439733;
		case 124:
			return -942529833;
		case 125:
			return 2125074568;
		case 111:
			return 41788943;
		case 112:
			return -1359472568;
		case 113:
			return 309845830;
		case 114:
			return 472445608;
		case 115:
			return -302836163;
		case 126:
			return -827426745;
		case 127:
			return -1585799712;
		case 128:
			return -1378452636;
		case 129:
			return -273086735;
		case 130:
			return 75146260;
		case 131:
			return 1988797837;
		case 132:
			return -182115660;
		case 133:
			return -420968901;
		case 116:
			return -324004853;
		case 117:
			return -81940250;
		case 118:
			return 1363893568;
		case 119:
			return 1604450797;
		default:
			break;
	}
	return 0;
}

bool func_1038(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	return uParam0->f_9[iParam1]->f_3 >= 2;
}

bool func_1039(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_6)
	{
		func_1350(uParam2, 1, iVar0);
	}
	if (!Global_1940258->f_6 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = vdist(Global_35, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_1351(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1352(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_1353(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_1354(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1355(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_20 && func_690(player_id(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1352(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_19)
		{
			if (func_1356(uParam2, 1065353216))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_1357(Global_34, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_1358(Global_34, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940258->f_23) < 300)
			{
				if (func_1359(Global_34, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_1359(Global_34, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1352(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940258->f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1360(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940258->f_19 || uParam2->f_13 < 20f)
			{
				if (func_1361(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940258->f_24 || Global_1940258->f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_1362(uParam2, 4000))
				{
					if ((func_1363(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1364(uParam2, iParam0)) && func_1365(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_1363(iParam0, Global_1940258->f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1364(uParam2, iParam0)) && func_1365(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940258->f_34 == 0)
			{
				if (Global_1940258->f_35 != 0)
				{
					if (func_1366(iParam0, Global_1940258->f_35))
					{
						func_1367();
						*uParam3 = 2;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 10f)
			{
				if (func_1368(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_1369() - uParam2->f_10) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_1367();
						*uParam3 = 2;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940258->f_36 != 0)
			{
				if (func_1370())
				{
					if (func_1366(iParam0, Global_1940258->f_36))
					{
						func_1367();
						*uParam3 = 2;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_1371(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1352(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_1372(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_1352(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_1373(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_1374(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1375(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1376(uParam2, 4000))
				{
					if (func_1377(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1352(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1378(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_1352(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_1379(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1352(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_1040(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = net_to_ped(&(uParam0->f_9[iParam3]));
	if (!is_entity_dead(iVar0))
	{
		if (_0x9be7dcb22d32ccbe(uParam2->f_2, player_id()))
		{
			if (uParam2->f_25[iParam3]->f_2 == 2 && func_160(iVar0, -76381094))
			{
				if (does_blip_exist(&(uParam2->f_25[iParam3])))
				{
					remove_blip(uParam2->f_25[iParam3]);
				}
			}
			else if (!does_blip_exist(&(uParam2->f_25[iParam3])))
			{
				uParam2->f_25[iParam3] = _blip_add_for_entity(849732319, iVar0);
				set_blip_name_from_text_file(&(uParam2->f_25[iParam3]), "NET_CAMP_BLIP_CAMP_FOLLOWER");
			}
			else
			{
				_set_blip_flash_style(&(uParam2->f_25[iParam3]), 2096805056);
			}
		}
		else if (uParam0->f_9[iParam3]->f_3 == 1 && func_16(uParam1, 1, uParam2->f_1))
		{
			if (!does_blip_exist(&(uParam2->f_25[iParam3])))
			{
				uParam2->f_25[iParam3] = _blip_add_for_entity(849732319, iVar0);
				set_blip_name_from_text_file(&(uParam2->f_25[iParam3]), "NET_CAMP_BLIP_CAMP_FOLLOWER");
			}
			if (does_blip_exist(&(uParam2->f_25[iParam3])))
			{
				_blip_set_modifier(&(uParam2->f_25[iParam3]), 2096805056);
			}
		}
		else if (does_blip_exist(&(uParam2->f_25[iParam3])))
		{
			remove_blip(uParam2->f_25[iParam3]);
		}
	}
	else if (does_blip_exist(&(uParam2->f_25[iParam3])))
	{
		remove_blip(uParam2->f_25[iParam3]);
	}
}

void func_1041(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_9[iParam2]->f_3 != 0)
	{
		func_1380(uParam1, iParam2, uParam0->f_9[iParam2]->f_3);
	}
}

void func_1042(var uParam0, var uParam1, int iParam2)
{
	iVar0 = net_to_ped(&(uParam0->f_9[iParam2]));
	if (!is_entity_dead(iVar0))
	{
		if (network_has_control_of_network_id(&(uParam0->f_9[iParam2])))
		{
			func_161(iVar0, 0);
			if (!func_160(iVar0, -2117564886))
			{
				if (is_ped_using_any_scenario(iVar0))
				{
					_0x463803429297117c(iVar0, uParam0->f_6, 1, 1);
					clear_ped_tasks(iVar0, 1, 0);
				}
				task_combat_hated_targets(iVar0, -1f);
			}
		}
	}
	if (uParam0->f_9[iParam2]->f_3 != 1)
	{
		func_1380(uParam1, iParam2, uParam0->f_9[iParam2]->f_3);
	}
}

void func_1043(var uParam0, var uParam1, int iParam2)
{
	if (network_has_control_of_network_id(&(uParam0->f_9[iParam2])))
	{
		iVar0 = net_to_ped(&(uParam0->f_9[iParam2]));
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			func_161(iVar0, 1);
			iVar1 = uParam1->f_63;
			if (_does_scenario_point_exist(iVar1))
			{
				if (!_0x9c54041bb66bcf9e(iVar0, uParam1->f_63))
				{
					vVar2 = { _get_scenario_point_coords(iVar1, true) };
					if (!func_43(vVar2))
					{
						fVar5 = vdist(get_entity_coords(iVar0, false, false), vVar2);
						if (is_ped_on_mount(iVar0))
						{
							if (fVar5 < 6f && !func_160(iVar0, 501393341))
							{
								task_dismount_animal(iVar0, 0, 0, 0, 0, 0);
							}
						}
						else if (fVar5 > 2f)
						{
							if (!func_160(iVar0, 713668775))
							{
								task_follow_nav_mesh_to_coord(iVar0, vVar2, 1.5f, -1, 0.25f, 0, 40000f);
							}
						}
						else if (!func_160(iVar0, -76381094))
						{
							iVar6 = func_950(func_949(uParam1->f_3));
							if (iVar6 != 0 && uParam1->f_18 == 5)
							{
								_task_use_scenario_point(iVar0, iVar1, 0, 0, true, false, -458796310, false, -1f, false);
							}
							else
							{
								_task_use_scenario_point(iVar0, iVar1, 0, 0, true, false, 0, false, -1f, false);
							}
							set_ped_keep_task(iVar0, true);
							set_ped_can_ragdoll(iVar0, false);
						}
					}
				}
				else
				{
					iVar7 = func_950(func_949(uParam1->f_3));
					if (((iVar7 != 0 && uParam1->f_18 == 5) && _0xbe28db99556ff8d9(iVar0) != iVar7) && _0xbe28db99556ff8d9(iVar0) != 0)
					{
						_0x8e901b65206c2d3e(iVar0);
						_0xb93a769b8b726950(iVar0, iVar7);
						_0xc4cfce4c656ef480(iVar0);
					}
				}
			}
		}
	}
	if (uParam0->f_9[iParam2]->f_3 != 2)
	{
		if (network_has_control_of_network_id(&(uParam0->f_9[iParam2])))
		{
			iVar8 = net_to_ped(&(uParam0->f_9[iParam2]));
			if (!is_entity_dead(iVar8))
			{
				set_ped_can_ragdoll(iVar8, true);
			}
		}
		func_1380(uParam1, iParam2, uParam0->f_9[iParam2]->f_3);
	}
}

void func_1044(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != 0)
	{
		func_1380(uParam1, iParam2, 0);
	}
	iVar1 = net_to_ped(&(uParam0->f_9[iParam2]));
	if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
	{
		bVar0 = true;
	}
	if (uParam0->f_9[iParam2]->f_3 != uParam1->f_25[iParam2]->f_2)
	{
		if (network_has_control_of_network_id(&(uParam0->f_9[iParam2])) && bVar0)
		{
			clear_ped_tasks(iVar1, 1, 0);
		}
		if (func_416(&(uParam1->f_25[iParam2]->f_5)))
		{
			func_422(&(uParam1->f_25[iParam2]->f_5));
		}
		func_1381(uParam1, 0);
		func_1380(uParam1, iParam2, uParam0->f_9[iParam2]->f_3);
	}
	else
	{
		if (_0x77525bbf433f2cd6(iVar1))
		{
			return;
		}
		if (network_has_control_of_network_id(&(uParam0->f_9[iParam2])) && bVar0)
		{
			switch (uParam1->f_19)
			{
				case 0:
					uParam1->f_19.f_1 = func_1382(uParam0, uParam1, uParam0->f_9[iParam2]->f_3);
					if (func_1383(uParam1->f_19.f_1, iVar1))
					{
						uParam1->f_19.f_2 = { _get_scenario_point_coords(uParam1->f_19.f_1, true) };
						func_1381(uParam1, 1);
					}
					break;
				case 1:
					if (func_43(uParam1->f_19.f_2))
					{
						func_1381(uParam1, 0);
					}
					else
					{
						vVar2 = { get_entity_coords(iVar1, true, false) };
						if (func_43(vVar2))
						{
							return;
						}
						if (func_637(vVar2, uParam1->f_19.f_2) < 7f)
						{
							func_1381(uParam1, 2);
							if (!func_416(&(uParam1->f_25[iParam2]->f_5)))
							{
								func_417(&(uParam1->f_25[iParam2]->f_5));
							}
						}
						else if (!func_160(iVar1, 713668775))
						{
							task_follow_nav_mesh_to_coord(iVar1, uParam1->f_19.f_2, 1f, -1, 0.25f, 0, 40000f);
							func_417(&(uParam1->f_25[iParam2]->f_5));
						}
					}
					break;
				case 2:
					if (!_does_scenario_point_exist(uParam1->f_19.f_1))
					{
						func_1381(uParam1, 0);
						return;
					}
					if (_does_scenario_point_exist(uParam1->f_19.f_1))
					{
						if (!ped_has_use_scenario_task(iVar1) || !_0x9c54041bb66bcf9e(iVar1, uParam1->f_19.f_1))
						{
							if (!func_416(&(uParam1->f_25[iParam2]->f_8)))
							{
								func_417(&(uParam1->f_25[iParam2]->f_8));
							}
							else if (func_418(&(uParam1->f_25[iParam2]->f_8)) > 500)
							{
								_task_use_scenario_point(iVar1, uParam1->f_19.f_1, 0, 0, true, false, 0, false, -1f, false);
								set_ped_keep_task(iVar1, true);
								set_ped_can_ragdoll(iVar1, false);
								func_422(&(uParam1->f_25[iParam2]->f_8));
							}
						}
					}
					break;
			}
		}
	}
}

bool func_1045(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1384(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1385(iParam0, bParam1);
	}
	return true;
}

int func_1046(bool bParam0, bool bParam1)
{
	if (!func_1017(bParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1047(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1384(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, bParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1386(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1048(bool bParam0)
{
	if (_item_database_is_intrinsic_item(bParam0))
	{
		return true;
	}
	return false;
}

bool func_1049(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_488(bParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_1387(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_1050(bool bParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_773(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1051(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_20(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1052(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == iParam1)
			{
			}
			else
			{
				Global_1293346->f_20.f_1[iVar0]->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1293346->f_20.f_1[iVar0]->f_2 = iParam2;
				Global_1293346->f_20.f_1[iVar0]->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_1388(iParam0, iParam1, iParam2, iParam3);
}

bool func_1053(int iParam0)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	iVar0 = func_1008(iParam0);
	if (!func_471(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_1054(int iParam0)
{
	if (!func_753(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_754(iParam0, 1);
	return *Global_1146212->f_35859.f_9286[iVar3];
}

bool func_1055(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 5);
	if (!func_1389(1))
	{
		return false;
	}
	*uParam0 = Global_1071686->f_28448[51]->f_3;
	return true;
}

bool func_1056(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	uVar0 = uParam0->f_1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		uParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

var func_1057(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	return func_1390(&uParam0, 78, iParam5);
}

var func_1058(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	return func_1390(&uParam0, 79, iParam5);
}

int func_1059(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1301323->f_84[iParam0][iVar0])
	{
		return func_1059(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1301323->f_84[iParam0][iVar0])
	{
		return func_1059(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_1060(int iParam0, int iParam1)
{
	return (*Global_1301323->f_84[iParam0])[iParam1]->f_1;
}

var func_1061(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_1390(&uParam0, 73, 1);
}

bool func_1062(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1391(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		default:
			break;
	}
	return 1084182731;
}

int func_1064(bool bParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(bParam0, &Var0, &iVar41, 20))
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

struct<10> func_1065(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_1066(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1067(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1068(bool bParam0)
{
	iVar0 = 0;
	switch (bParam0)
	{
		case -151356522:
		case 1006434513:
			iVar0 = -2116748615;
			break;
		case 306916738:
		case 1481288777:
			iVar0 = 1493541632;
			break;
		case -1824685471:
		case 724563284:
			iVar0 = 264156159;
			break;
		case 803930024:
		case 1917027383:
			iVar0 = 1538187374;
			break;
		case -855052577:
		case 1111663869:
			iVar0 = -300867788;
			break;
		case -5376850:
		case 1425358430:
			iVar0 = 122748261;
			break;
		case 1297433586:
		case 1338219162:
			iVar0 = -711779521;
			break;
		case -1538397860:
		case -293259613:
			iVar0 = -1553593715;
			break;
		case 193037129:
		case 588902637:
			iVar0 = 697075200;
			break;
		case -861419347:
		case 1416872916:
			iVar0 = 706485280;
			break;
		case 357567274:
		case 1500919793:
			iVar0 = 513249462;
			break;
		case 683583793:
		case 1042542561:
			iVar0 = 1520661;
			break;
		case -1202625002:
		case 56657913:
			iVar0 = 1860580756;
			break;
		case 485620834:
		case 1570826681:
			iVar0 = 41707457;
			break;
		case 727522818:
		case 785407605:
			iVar0 = 490159652;
			break;
		case -1457420231:
		case 563848610:
		case 1432949803:
			iVar0 = 674267496;
			break;
		case -2120099592:
		case -983831788:
		case 1848456619:
			iVar0 = 1582986780;
			break;
		case -1882344824:
		case -1640704323:
		case -1134447619:
			iVar0 = -930822792;
			break;
		case -1969404854:
		case 183958842:
		case 1948158930:
			iVar0 = 1784941179;
			break;
		case -1323780599:
		case -532099639:
		case 905173572:
			iVar0 = -292997097;
			break;
		case -1586332975:
		case -832850511:
		case 1857501916:
			iVar0 = -1550768676;
			break;
		case -1888757291:
		case 894877715:
		case 995863399:
			iVar0 = -2037578922;
			break;
		case -1905834457:
		case -110353515:
		case 59384454:
			iVar0 = 98537260;
			break;
		case -1464585113:
		case -610456424:
		case -284151822:
			iVar0 = -1302821723;
			break;
		case -1956973834:
		case -738999731:
		case 566023444:
			iVar0 = 1746830155;
			break;
		case -1999212658:
		case -593435395:
		case -245335326:
			iVar0 = 111281960;
			break;
		case -1726572562:
		case -1017987135:
		case 2058475216:
			iVar0 = 2105463796;
			break;
		case -1909348309:
		case -1788506246:
		case 1761263432:
			iVar0 = 989669666;
			break;
		case -1290897778:
		case -350704687:
		case 765892430:
			iVar0 = -1210546580;
			break;
		case -318217782:
		case -100913452:
		case 72307351:
			iVar0 = -1910795227;
			break;
		case -1867587109:
		case 182158309:
		case 313332607:
			iVar0 = -1028170431;
			break;
		case 444160793:
		case 1205453831:
		case 1815539745:
			iVar0 = 1465438313;
			break;
		case -2123600216:
		case -146690338:
		case -124539232:
			iVar0 = 1502581273;
			break;
		case -1403731492:
		case -843795569:
		case 1496267371:
			iVar0 = 510312109;
			break;
	}
	return iVar0;
}

int func_1069(bool bParam0)
{
	if (func_481(bParam0, 1064293907))
	{
		return 2;
	}
	else if (func_481(bParam0, -1218707194))
	{
		return 1;
	}
	else if (func_481(bParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_1070(int iParam0, int iParam1, bool bParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_331(&(uVar0[iVar17]), 0) && bParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_1071(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_1072(bool bParam0)
{
	if (bParam0 == 7)
	{
		return Global_39.f_281;
	}
	return bParam0;
}

bool func_1073(bool bParam0)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 <= -1)
	{
		return false;
	}
	if (bParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[bParam0]))
	{
		return true;
	}
	return false;
}

int func_1074(bool bParam0)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 == -1)
	{
		return 0;
	}
	if (bParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[bParam0];
}

bool func_1075(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (!_0x9a100f1cf4546629(iVar0))
	{
		return false;
	}
	if (_0xf8b48a361dc388ae(iVar0) == 2)
	{
		return false;
	}
	if (_0x8de41e9902e85756(iParam0))
	{
		return false;
	}
	if (_0xcdc25355c0d65963(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1076(bool bParam0)
{
	return func_459(bParam0) == 1868067663;
}

bool func_1077(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

bool func_1078(bool bParam0)
{
	if (!func_331(*bParam0, 0))
	{
		return false;
	}
	if (!func_1392(*bParam0))
	{
		return false;
	}
	switch (*bParam0)
	{
		case -1073808995:
			*bParam0 = -1753819339;
			break;
		case 1903483453:
			*bParam0 = -1527293029;
			break;
		case -541584777:
			*bParam0 = 206762213;
			break;
		case 998010398:
			*bParam0 = -324053813;
			break;
		case -1424823393:
			*bParam0 = -885810591;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1079(bool bParam0)
{
	return func_485(bParam0) == -427144552;
}

int func_1080(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_331(bParam0, 0) && !func_1017(func_764(bParam0), 2))
	{
		return 0;
	}
	if (func_485(bParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_488(bParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(bParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_489(bParam3), bParam0);
}

bool func_1081(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_1393(iParam0))
		{
			return false;
		}
	}
	if (func_1394(&(iParam0->f_6)))
	{
		if (_0xe10f2d7715ababec(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!_0xce54c9abe6fbc6db(2113164098))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1318406457))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(-1230526146))
	{
		return false;
	}
	if (!_0xce54c9abe6fbc6db(1702063850))
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_cashinventory_is_connection_faulted())
	{
		return false;
	}
	if (_cashinventory_init_session_is_faulted())
	{
		return false;
	}
	return true;
}

bool func_1082(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1384(iParam0))
	{
		return false;
	}
	bVar1 = func_183(bParam3, 2);
	bVar2 = func_1045(iParam0, -570078785, bVar1);
	bVar3 = func_1045(iParam0, -915411861, bVar1);
	if (func_1045(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_1395(iParam0, &iVar0) || func_1396(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_1397())
		{
			bParam1 = -570078785;
		}
		else
		{
			bParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		bParam1 = -915411861;
	}
	else if (func_1398(15) && func_1045(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

int func_1083(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1045(iParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_183(bParam2, 2))
	{
		if (func_1385(iParam0, bParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_183(bParam2, 8))
	{
		return func_1399(iParam0, bParam1);
	}
	return 1;
}

bool func_1084(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_1047(uParam1->f_16, bParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_1400(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_1401(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_1402(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_1403(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_1404(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_1405(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_1406(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_1407(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_1408(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_1409(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_1410(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_1411(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_1412(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_1413(iParam0, uParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_1414(iParam0, uParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_1085(int* iParam0, bool bParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (func_183(bParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_1023(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_1346(bParam1, func_459(Var0.f_4), bParam6))
		{
			return 0;
		}
	}
	if (func_183(bParam9, 1))
	{
		if (!func_1415(bParam1))
		{
			return 0;
		}
	}
	if (func_183(bParam9, 2))
	{
		if (func_1416(bParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_183(bParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = bParam6;
		Var14 = { Param2 };
		iVar19 = func_628(bParam1, Param2, bParam6, 1, !bParam10, 0);
		iVar20 = func_1080(bParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_1417(bParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_1418(iParam0, bParam1) * iVar21);
		if (iVar22 > 0)
		{
		}
		if (iVar20 >= 0)
		{
			iVar23 = (iVar20 - (iVar19 + iVar22));
			iVar24 = (bParam8 * iVar21);
			if (iVar24 > iVar20)
			{
				iVar24 = iVar20;
			}
			if (iVar23 <= 0)
			{
				return 0;
			}
			else if ((iVar24 - iVar23) >= iVar21)
			{
				return 0;
			}
		}
	}
	if (func_183(bParam9, 8))
	{
		return func_1419(iParam0, bParam1, bParam7, bParam8);
	}
	return 1;
}

struct<16> func_1086(bool bParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_773(bParam0, Var0.f_4, bParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = bParam5;
	if (bParam7)
	{
		Var0.f_15 = func_488(bParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_527() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1087(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_568(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_1420(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 2:
			return func_1421(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 3:
			return func_1422(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 4:
			return func_1423(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 5:
			return func_1424(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 6:
			return func_1425(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 7:
			return func_1426(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 8:
			return func_1427(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 9:
			return func_1428(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 10:
			return func_1429(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 11:
			return func_1430(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 12:
			return func_1431(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 13:
			return func_1432(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 14:
			return func_1433(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 15:
			return func_1434(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		default:
			break;
	}
	return false;
}

int func_1088(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

bool func_1089(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

char* func_1090(int iParam0)
{
	sVar0 = "Invalid!";
	switch (iParam0)
	{
		case 0:
			sVar0 = "scr_net_animal_ghost";
			break;
		case 2:
			sVar0 = "scr_net_animal_ghost_sma";
			break;
		case 3:
			sVar0 = "scr_net_animal_ghost_sma";
			break;
		case 1:
			sVar0 = "scr_net_animal_ghost_boar";
			break;
		default:
			sVar0 = "scr_net_animal_ghost";
			break;
	}
	return sVar0;
}

float func_1091(var uParam0)
{
	return 1f;
}

char* func_1092()
{
	return "scr_net_animal_ghost_head";
}

char* func_1093()
{
	return "scr_net_animal_ghost_limb";
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 43312;
		case 1:
			return 33646;
		case 2:
			return 54187;
		case 3:
			return 55120;
		case 4:
			return 45454;
		case 5:
			return 53675;
		default:
			break;
	}
	return 11569;
}

bool func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1096(var uParam0)
{
	return false;
}

bool func_1097(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	return func_1435(iVar0);
}

int func_1098(int iParam0)
{
	if (func_1097(iParam0))
	{
		iVar0 = _0x4be6c13a45cca8ec(iParam0);
		return Global_1196095->f_1[iVar0]->f_2;
	}
	return 0;
}

int func_1099(var uParam0)
{
	return 0;
}

void func_1100(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_425(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_425(uParam0))
		{
		}
	}
}

int func_1101()
{
	return 1;
}

bool func_1102(int iParam0, int iParam1, var uParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!func_46(iParam1))
	{
		return false;
	}
	if (_does_thread_exist(*uParam2))
	{
		return false;
	}
	request_script("net_fast_travel_barker");
	if (!has_script_loaded("net_fast_travel_barker"))
	{
		return false;
	}
	decor_set_int(iParam0, "fast_travel_camp_barker", iParam1);
	*uParam2 = _0x4e4507cc5e4db869(iParam0, "net_fast_travel_barker", 1024, 0);
	set_script_as_no_longer_needed("net_fast_travel_barker");
	return true;
}

bool func_1103()
{
	if (!_unlock_is_unlocked(1636781897))
	{
		return true;
	}
	if (func_1436())
	{
		return true;
	}
	return func_1437(2);
}

bool func_1104(int iParam0)
{
	func_193(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904651[iVar0];
	return is_bit_set(iVar2, iVar1);
}

int func_1105(int iParam0)
{
	switch (iParam0)
	{
		case -833277401:
			return -941414360;
		default:
			break;
	}
	return -941414360;
}

bool func_1106(struct<2> Param0)
{
	return func_1438(Param0, 5, 8);
}

int func_1107(int iParam0)
{
	if (func_1439(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_1108(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_1440(iParam0);
	if (!func_1441(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_1442(128) && !func_1443(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_1444() == 4)
	{
		func_1107(18);
	}
	func_1445(1024);
}

int func_1109(int iParam0)
{
	if (func_1446(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_1110(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1111(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1112(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_1113(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_1114(int iParam0)
{
	if (_0x603ac35fd4602c76(Global_1139381->f_7) && !func_1448(12, func_1447(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1115(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1116()
{
	return Global_1893587->f_2;
}

void func_1117(var uParam0)
{
	if (uParam0->f_64)
	{
		if (func_716(&(uParam0->f_63), &(uParam0->f_64)))
		{
			uParam0->f_64 = 0;
		}
	}
	if (uParam0->f_66)
	{
		if (func_716(&(uParam0->f_65), &(uParam0->f_66)))
		{
			uParam0->f_66 = 0;
		}
	}
	if (uParam0->f_68)
	{
		if (func_716(&(uParam0->f_67), &(uParam0->f_68)))
		{
			uParam0->f_68 = 0;
		}
	}
}

bool func_1118(int iParam0, int iParam1)
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
	if (func_20(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_20(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_20(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_20(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_1119(var uParam0)
{
	if (func_431(16) || uParam0->f_128 == 7)
	{
		iVar0 = func_1122(uParam0);
		if (iVar0 != -1)
		{
			if (!func_181(&(uParam0->f_135[6])))
			{
				disable_control_action(0, 1287709438, false);
			}
			disable_control_action(0, -209515122, false);
			disable_control_action(0, -2131587435, false);
			disable_control_action(0, -1046962283, false);
		}
	}
}

void func_1120(bool bParam0)
{
	if (bParam0)
	{
		func_1449(4);
	}
	func_1449(2);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_1121(var uParam0)
{
	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_127;
	vVar0 = { 0f, 0f, 0.5f };
	_0x66f9eb44342bb4c5(Global_34, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (is_ped_active_in_scenario(Global_34, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (is_ped_active_in_scenario(Global_34, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && has_anim_event_fired(Global_34, -1206250122)))
	{
		if (_0xdd0b7c5ae58f721d(&(uParam0->f_18)))
		{
			if (!_0x927b810e43e99932(&(uParam0->f_18)))
			{
				_0xb8b207c34285e978(&(uParam0->f_18));
			}
		}
	}
}

int func_1122(var uParam0)
{
	iVar0 = _get_scenario_point_ped_is_using(Global_34, false);
	if (_does_scenario_point_exist(iVar0) && !_0x0c3cb2e600c8977d(Global_34, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (_does_scenario_point_exist(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

bool func_1123(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_1124(var uParam0)
{
	return func_183(uParam0->f_126, 512);
}

void func_1125(var uParam0)
{
	func_184(&(uParam0->f_126), 512);
}

void func_1126(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

void func_1127(bool bParam0, bool bParam1)
{
	func_362(bParam0, bParam1);
}

void func_1128(var uParam0, int iParam1)
{
	func_362(&(uParam0->f_126), 512);
	uParam0->f_128 = iParam1;
}

bool func_1129(var uParam0)
{
	return true;
}

bool func_1130(var uParam0)
{
	if (does_entity_exist(uParam0->f_127))
	{
		if (func_183(uParam0->f_125, 512))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, -0.966f, 0.203f, 0.5f) };
			*uParam0->f_5[0] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + -99.171f);
			func_945(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = create_scenario_point(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (func_183(uParam0->f_125, 1024))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, -0.212f, -1.045f, 0.5f) };
			*uParam0->f_5[1] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + -11.405f);
			func_945(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = create_scenario_point(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (func_183(uParam0->f_125, 2048))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, 1.025f, 0.043f, 0.5f) };
			*uParam0->f_5[2] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + 91.78f);
			func_945(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = create_scenario_point(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (func_183(uParam0->f_125, 4096))
		{
			vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_127, 0.249f, 1.05f, 0.5f) };
			*uParam0->f_5[3] = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (get_entity_heading(uParam0->f_127) + 164.29f);
			func_945(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = create_scenario_point(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_1131(var uParam0)
{
	if (!_0xdd0b7c5ae58f721d(&(uParam0->f_18)))
	{
		if (!_0xc285fd21294a1c49(&(uParam0->f_18)))
		{
			_0x6a4d224fc7643941(&(uParam0->f_18));
		}
	}
}

void func_1132(int iParam0)
{
	if (!func_431(iParam0))
	{
		Global_1958000 = (Global_1958000 || iParam0);
	}
}

bool func_1133(var uParam0)
{
	func_184(&(uParam0->f_126), 1024);
	if (_is_ped_carrying(Global_34))
	{
		iVar0 = _get_first_entity_ped_is_carrying(Global_34);
		if (is_entity_a_ped(iVar0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			if (_0x9a100f1cf4546629(iVar1))
			{
				func_362(&(uParam0->f_126), 1024);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (func_431(32) || !func_183(uParam0->f_125, 8192))
	{
		return false;
	}
	if (func_1450(Global_34, 0))
	{
		return false;
	}
	if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
	{
		return false;
	}
	if (get_ped_config_flag(Global_34, 227, true))
	{
		return false;
	}
	if (func_1451(Global_34))
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	if (_0xd04241bbf6d03a5e(Global_34) != 0)
	{
		return false;
	}
	if ((func_507(Global_34) || func_1452(Global_34)) || func_1453(Global_34))
	{
		return false;
	}
	if (!func_1454(Global_34, uParam0->f_127, -0.5f))
	{
		return false;
	}
	if (get_number_of_fires_in_range(get_entity_coords(uParam0->f_127, true, false), 1.5f) > 2)
	{
		return false;
	}
	if (func_41() == -1)
	{
		if (func_1455())
		{
			return false;
		}
	}
	else if (func_1455() && !((Global_1915715->f_20241 == 28 || Global_1915715->f_20241 == 27) || Global_1915715->f_20241 == 29))
	{
		return false;
	}
	if (func_1456(uParam0) == -1)
	{
		return false;
	}
	return true;
}

void func_1134(int iParam0)
{
	if (func_431(iParam0))
	{
		Global_1958000 = (&Global_1958000 - (Global_1958000 && iParam0));
	}
}

void func_1135(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar0]))
		{
			_set_scenario_point_flag(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_1136()
{
	disable_control_action(0, 1301263553, false);
	disable_control_action(0, -39308912, false);
	disable_control_action(0, 130948705, false);
}

int func_1137()
{
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	switch (iVar0)
	{
		case 512684539:
		case 970934364:
			return 3;
		case 1135271674:
		case 1844142525:
			return 6;
		case -571916863:
		case 825619760:
			return 8;
		case -597629206:
		case 1316803372:
			return 7;
		case -1879538536:
			return 1;
		case -777009509:
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_1138(var uParam0, int iParam1)
{
	uParam0->f_124 = iParam1;
}

void func_1139(var uParam0)
{
	if (((!ped_has_use_scenario_task(Global_34) && func_183(uParam0->f_126, 131072)) && !_is_ped_carrying(Global_34)) && !_0x0de0944eccb3df5d(Global_34))
	{
		if (does_entity_exist(uParam0->f_127))
		{
			if (!func_181(uParam0->f_145))
			{
				uParam0->f_145 = func_364("REST_BY_FIRE", -719620017, uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
			}
			else if (func_313(uParam0->f_145, 1))
			{
				func_1143(uParam0);
				func_435(uParam0);
				func_184(&(uParam0->f_126), 131072);
			}
		}
	}
	else
	{
		func_1457(uParam0);
	}
	if (func_181(uParam0->f_145))
	{
		func_366(uParam0->f_145, 1754796591, 0, 1);
	}
}

void func_1140(var uParam0)
{
	if (func_183(uParam0->f_126, 131072))
	{
		if (!func_181(uParam0->f_146))
		{
			if (func_1458(uParam0))
			{
				uParam0->f_146 = func_364("CRAFT_COOK", -473983589, uParam0->f_127, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				set_bit(&(Global_1957959->f_1), 2);
				set_bit(&(Global_1957959->f_1), 3);
				if (func_183(uParam0->f_126, 1024))
				{
					if (func_1459(uParam0))
					{
						func_1460(uParam0->f_146, "CAMP_REC_COOK", 1);
					}
					else
					{
						clear_bit(&(Global_1957959->f_1), 2);
						func_312(uParam0->f_146, 0, 1, 1);
					}
				}
			}
		}
		else if (((((ped_has_use_scenario_task(Global_34) || _0x0de0944eccb3df5d(Global_34)) || func_368(872480335)) || func_368(-92416669)) || func_1461()) || Global_1940258->f_38 == 332793555)
		{
			func_435(uParam0);
			func_184(&(uParam0->f_126), 131072);
		}
		else if (func_431(16) || func_183(uParam0->f_126, 32768))
		{
			func_1134(16);
			func_362(&(uParam0->f_126), 32768);
			func_435(uParam0);
			func_184(&(uParam0->f_126), 131072);
		}
		else
		{
			if (func_183(uParam0->f_126, 1024) != func_183(uParam0->f_126, 2048))
			{
				if (func_183(uParam0->f_126, 1024))
				{
					if (func_1459(uParam0) && !func_181(Global_1940144->f_85))
					{
						func_1460(uParam0->f_146, "CAMP_REC_COOK", 1);
						func_312(uParam0->f_146, 1, 1, 1);
						func_362(&(uParam0->f_126), 4096);
					}
					else
					{
						func_182(&(uParam0->f_146), 1, 1);
						uParam0->f_146 = func_364("CRAFT_COOK", -473983589, uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
						func_312(uParam0->f_146, 0, 1, 1);
						func_184(&(uParam0->f_126), 4096);
					}
				}
				else
				{
					set_bit(&(Global_1957959->f_1), 2);
					set_bit(&(Global_1957959->f_1), 3);
					func_182(&(uParam0->f_146), 1, 1);
					uParam0->f_146 = func_364("CRAFT_COOK", -473983589, uParam0->f_127, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824, 0, -820096546, 0, 0);
				}
				if (func_183(uParam0->f_126, 1024))
				{
					func_362(&(uParam0->f_126), 2048);
				}
				else
				{
					func_184(&(uParam0->f_126), 2048);
				}
			}
			if (func_313(uParam0->f_146, 1))
			{
				func_362(&(uParam0->f_126), 32768);
				clear_bit(&(Global_1957959->f_1), 2);
				func_435(uParam0);
				func_184(&(uParam0->f_126), 131072);
				if (func_183(uParam0->f_126, 1024))
				{
					if (func_1459(uParam0))
					{
						func_362(&(uParam0->f_126), 4096);
					}
					else
					{
						func_184(&(uParam0->f_126), 4096);
					}
				}
				if (func_183(uParam0->f_126, 1024) && func_183(uParam0->f_126, 4096))
				{
					func_1132(64);
				}
			}
		}
	}
	else
	{
		func_182(&(uParam0->f_146), 1, 1);
	}
	if (func_181(uParam0->f_146))
	{
		func_366(uParam0->f_146, 1754796591, 0, 1);
	}
}

char* func_1141(int iParam0)
{
	return "CAMPFIRE";
}

float func_1142(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1143(var uParam0)
{
	iVar0 = func_1456(uParam0);
	if (iVar0 == -1)
	{
		func_1134(64);
		func_1134(16);
		func_184(&(uParam0->f_126), 32768);
		uParam0->f_132 = 0;
		return;
	}
	if (func_431(64))
	{
		func_1462(Global_34, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_132 = 2;
				_task_use_scenario_point(Global_34, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_132 = 2;
				_task_use_scenario_point(Global_34, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1f, false);
				uParam0->f_130 = 6;
				uParam0->f_129 = 1;
				break;
		}
		do_screen_fade_out(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((func_431(16) || func_183(uParam0->f_126, 32768)) || func_1183(684307653, &iVar1)) || func_1183(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_1463(0) || func_1463(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						_0xd65fdc686a031c83(Global_34, -1955932021, 3f);
					}
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (uParam0->f_132 == 1)
				{
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (func_1464())
				{
					if (is_ped_male(Global_34))
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1f, false);
					}
					else
					{
						_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1f, false);
					}
				}
				else if (is_ped_male(Global_34))
				{
					_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1f, false);
				}
				else
				{
					_task_use_scenario_point(Global_34, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1f, false);
				}
				break;
		}
		uParam0->f_129 = iVar0;
	}
}

void func_1144()
{
	if (func_331(-160924582, 0))
	{
		func_1465(32);
	}
	if (func_331(1652431022, 0))
	{
		func_1465(32);
	}
	if (func_331(-1016714371, 0))
	{
		func_1465(64);
	}
	if (func_331(332793555, 0))
	{
		func_1465(131072);
	}
}

void func_1145(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_181(&(uParam0->f_135[iVar0])))
		{
			if (func_311(&(uParam0->f_135[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				func_312(&(uParam0->f_135[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_1146(var uParam0)
{
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	iVar1 = 0;
	if (iVar0 == 1135271674 || iVar0 == 1844142525)
	{
		if ((((((func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500) && !func_183(uParam0->f_126, 32768)) && !func_431(16)) && uParam0->f_132 != 1) && !func_1183(684307653, &iVar1)) && !func_1183(562107429, &iVar1))
		{
			func_542(&(uParam0->f_157));
			func_1151(-63615330, 0.5f);
			uParam0->f_149 = get_game_timer();
		}
	}
	else if (iVar0 == -571916863 || iVar0 == 825619760)
	{
		if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			if (!func_537(&(uParam0->f_157)))
			{
				func_542(&(uParam0->f_157));
			}
			if (func_903(&(uParam0->f_157), 180f))
			{
				func_542(&(uParam0->f_157));
				if (!func_1464())
				{
					func_1151(1698735158, 0.5f);
					uParam0->f_149 = get_game_timer();
				}
			}
		}
	}
	else if (iVar0 == -597629206 || iVar0 == 1316803372)
	{
		if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			if (!func_537(&(uParam0->f_157)))
			{
				func_542(&(uParam0->f_157));
			}
			if (func_903(&(uParam0->f_157), 10f))
			{
				if (func_1464())
				{
					func_542(&(uParam0->f_157));
					uParam0->f_149 = get_game_timer();
					func_1151(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_1151(653141085, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 500)
		{
			func_1151(1335077954, 2f);
			uParam0->f_149 = get_game_timer();
		}
	}
}

bool func_1147(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_129;
		}
	}
	else
	{
		iVar1 = uParam0->f_129;
		iVar2 = uParam0->f_130;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (func_41() != 0 || func_183(uParam0->f_126, 64))
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (func_41() != 0 || func_183(uParam0->f_126, 64))
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (_0x038b1f1674f0e242(Global_34) || func_183(uParam0->f_126, 16384))
	{
		iVar0 = 0;
	}
	else if (func_1450(Global_34, 0) || _0x0de0944eccb3df5d(Global_34))
	{
		if (!func_183(uParam0->f_126, 32))
		{
			func_276(207, 1);
			func_362(&(uParam0->f_126), 32);
		}
		iVar0 = 16;
	}
	func_1466(uParam0, iVar0);
	if (uParam0->f_132 == 2)
	{
		func_1145(uParam0, 0);
	}
	iVar3 = func_1467(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_131 != -1)
		{
			uParam0->f_129 = uParam0->f_131;
		}
	}
	switch (iVar3)
	{
		case 0:
			func_711(&(uParam0->f_49));
			func_718(&(uParam0->f_49), 1);
			uParam0->f_132 = 6;
			break;
		case 8:
			func_432(uParam0);
			func_362(&(uParam0->f_126), 16384);
			break;
		case 2:
			func_718(&(uParam0->f_49), 2);
			func_1138(uParam0, 0);
			func_1127(&(uParam0->f_49), 32);
			uParam0->f_132 = 2;
			func_432(uParam0);
			func_1128(uParam0, 7);
			break;
		case 6:
			func_432(uParam0);
			uParam0->f_132 = 10;
			return true;
		case 1:
			uParam0->f_132 = 0;
			func_432(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

int func_1148(var uParam0)
{
	switch (uParam0->f_129)
	{
		case 0:
			return func_1468(uParam0);
		case 1:
			return func_1469(uParam0);
		case 2:
			return func_1470(uParam0);
		case 3:
			return func_1471(uParam0);
	}
	func_432(uParam0);
	return 0;
}

bool func_1149(var uParam0)
{
	bVar0 = _0xc488b8c0e52560d8(Global_34);
	bVar1 = _0x2dc0e8dcbd3546e9(Global_34);
	if ((bVar0 || bVar1) && !has_anim_event_fired(Global_34, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_131 != -1)
	{
		iVar2 = func_1122(uParam0);
		if (iVar2 != uParam0->f_131)
		{
			return false;
		}
		if (uParam0->f_129 != iVar2)
		{
			uParam0->f_129 = iVar2;
			return false;
		}
	}
	if (func_1472())
	{
		return false;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return false;
	}
	return true;
}

int func_1150(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_1473())
	{
		Global_1940311->f_10894 = bParam0;
		func_570(bParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_1474(bParam0, bParam4))
	{
		return 0;
	}
	if (func_1475(bParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_1476(bParam0))
	{
		Global_1913502 = bParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_481(bParam0, -2081717885))
	{
		func_1477(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_481(bParam0, -1909684001))
	{
		func_1478(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_481(bParam0, 587975446))
	{
		func_1479(bParam0, Var10);
	}
	else if (func_481(bParam0, 566155764))
	{
		if (!func_1480(bParam0))
		{
			return 0;
		}
	}
	if (func_1481(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = bParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_481(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_1482(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_481(bParam0, -1472964441) || func_481(bParam0, -228153877)) || func_481(bParam0, 566155764))
	{
	}
	else if (func_481(bParam0, 1919582297))
	{
		if (((func_1483() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
		}
		switch (bParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1482(Var10, 0);
		bVar28 = false;
	}
	else if (func_1484(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_1485(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1482(Var10, 0);
		iVar29 = 1;
	}
	else if (func_485(bParam0) == -1037537535)
	{
		if (!func_1486(bParam0))
		{
			func_190("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_459(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_1487();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_1488(player_id()))
			{
				func_190("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_190("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != bParam0)
			{
				func_205(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_1489(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_1490(bParam0);
					func_205(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_1491(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_1492(bParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_1492(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_1491(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_1492(bParam0, 0, 0);
						return 1;
					}
					else
					{
						func_1492(bParam0, 1, 0);
						func_1493(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_1493(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_1493(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_481(bParam0, 160827531))
					{
					}
					else
					{
						func_1489(bParam0, 0);
					}
					break;
			}
			func_1491(Global_34, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039:
				func_1494(1);
				break;
			case -727924611:
				if (func_41() != -1)
				{
				}
				else if (!func_1486(bParam0))
				{
					func_190("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_1495(7, bParam0);
					bVar31 = func_1495(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_190(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_1496(7))
					{
						func_190("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_1497(Global_34, func_1074(7), 0))
						{
							func_190("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_190(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_1482(Var10, 0);
						}
						Jump @2406; //curOff = 1788
						func_1498();
						Jump @2406; //curOff = 1795
						if (func_1486(-1838434463))
						{
							if (func_1499(1, 1))
							{
								func_1500(2, 1);
							}
							else if (func_307(1))
							{
								func_190("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_382())
							{
								func_190("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_1501();
								}
								else
								{
									func_190("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_1502(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_190("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_1502(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_382())
						{
							func_190("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_190("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2406; //curOff = 2016
						if (!_is_weapon_binoculars(func_1123(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2054
						if (func_1123(Global_34, 1, 0, 0) != bParam0)
						{
							set_current_ped_weapon(Global_34, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2089
						Jump @2406; //curOff = 2092
						func_276(535, 1);
						Jump @2406; //curOff = 2103
						func_1503(1);
						Jump @2406; //curOff = 2111
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2406; //curOff = 2146
						_launch_app_by_hash(-76766502);
						if (_get_number_of_references_of_script_with_name_hash(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_1482(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2222
						_close_app_by_hash(-4058091);
						if (get_hash_of_this_script_name() == 1349139153)
						{
							_launch_app_by_hash_with_entry(1976336482, 1261159557);
						}
						else
						{
							_launch_app_by_hash(1976336482);
						}
						if (_get_number_of_references_of_script_with_name_hash(698150113) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_3 = !get_hash_of_this_script_name() != 1349139153;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_1482(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2352
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_190("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_1504();
						}
						return 1;
						Jump @2406; //curOff = 2397
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_1151(int iParam0, float fParam1)
{
	if (!_0x68821369a2ceadd5(Global_34, iParam0))
	{
		_0xd65fdc686a031c83(Global_34, iParam0, fParam1);
		_0x6d07b371e9439019(Global_34);
		return false;
	}
	return true;
}

bool func_1152(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (iParam3 == -142743235)
	{
		if (func_1505(bParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	bVar3 = func_486(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		_remove_ammo_from_ped_by_type(Global_34, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_1506(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_332(bParam0, 1))
	{
		return false;
	}
	Var5 = { func_1507(bParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_246(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_246(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_1152(bParam0, func_246(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_485(bParam0) == -427144552)
	{
		if (!func_1508(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_570(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_772(bParam0, 0, 0) };
		if (func_569(0) && Var7.f_4 == 1084182731)
		{
			func_1509(1, 0, 0);
		}
	}
	if (bParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_569(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_1506(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

bool func_1153(var uParam0, var uParam1)
{
	if (func_1510(uParam0))
	{
		return true;
	}
	return false;
}

void func_1154(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!func_569(0) || func_566())
	{
		return;
	}
	if (!func_331(bParam0, 0))
	{
		return;
	}
	func_720(func_1511(-413660030), iParam1);
	if (bParam3)
	{
		if (func_41() == -1)
		{
			if (func_481(bParam0, -1588156645))
			{
				bVar0 = func_1513(func_1512(bParam0, 0), 0);
				if (is_weapon_valid(bVar0))
				{
					func_1514(bVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_485(bParam0) == -1977020088)
			{
				if (func_1515(bParam0, 0))
				{
					func_1506(bParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_1516(bParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_1517(bParam0, iParam4, iParam1);
		}
	}
	func_1518(bParam0, iParam1);
	Global_1051133 = bParam0;
}

void func_1155(var uParam0)
{
	if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 250)
	{
		iVar0 = _0xc22aa08a8adb87d4(Global_34);
		if (iVar0 == -518407211 || iVar0 == 1662215698)
		{
			func_1151(653141085, 1086324736);
			uParam0->f_149 = get_game_timer();
		}
		else if (iVar0 == -1433449364 || iVar0 == 2058555960)
		{
			func_1151(1335077954, 1086324736);
			uParam0->f_149 = get_game_timer();
		}
		else if (ped_has_use_scenario_task(Global_34) && (get_frame_count() % 2) == 0)
		{
			clear_ped_tasks(Global_34, 1, 0);
		}
	}
}

bool func_1156(int iParam0)
{
	iVar0 = create_itemset(true);
	iVar1 = _0x84ccf9a12942c83d(*iParam0, iVar0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = get_indexed_item_in_itemset(iVar2, iVar0);
		iVar4 = _get_entity_from_item(iVar3);
		if (is_entity_dead(iVar4))
		{
			destroy_itemset(iVar0);
			return true;
		}
		iVar2++;
	}
	destroy_itemset(iVar0);
	return false;
}

bool func_1157()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_1158(int iParam0)
{
	if (func_1446(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1159(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_14))
	{
		uParam0->f_14 = _create_anim_scene("script@common@shop@playercamp", 0, 0, false, true);
	}
	if (!_is_anim_scene_loading(uParam0->f_14, true))
	{
		load_anim_scene(uParam0->f_14);
	}
	if (uParam0->f_13 == -1151073879)
	{
		if (!_does_anim_scene_exist(uParam0->f_15))
		{
			uParam0->f_15 = _create_anim_scene("lightrig_mp@ui_lightrigs@camp_wardrobe", 1, 0, false, true);
		}
		if (!_is_anim_scene_loading(uParam0->f_15, true))
		{
			load_anim_scene(uParam0->f_15);
		}
	}
}

int func_1160()
{
	return Global_1952637->f_1;
}

bool func_1161(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!func_1519(uParam0->f_4, iVar0, &(uParam0->f_2207)))
		{
			return false;
		}
		if (!func_1520(uParam0, uParam0->f_20))
		{
			if (!func_1521(iParam1, &(uParam0->f_2207)))
			{
				return false;
			}
			if (func_1520(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!func_1521(iParam1, &(uParam0->f_2207)))
		{
			return false;
		}
		if (!func_1522(uParam0, iParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2207.f_71 = func_1523(&(uParam0->f_2207));
	uParam0->f_2207.f_74 = 0;
	uParam0->f_2207.f_76 = 0;
	uParam0->f_2207.f_77 = 0;
	uParam0->f_2207.f_69 = 0;
	uParam0->f_2207.f_48 = 0;
	uParam0->f_2207.f_118 = 0;
	uParam0->f_2207.f_119 = -1;
	uParam0->f_2207.f_120 = -1;
	uParam0->f_2207.f_82 = 0;
	uParam0->f_2207.f_84 = 0;
	uParam0->f_2207.f_117 = 0;
	func_1524(uParam0, 1);
	func_450();
	func_1525(uParam0);
	func_1526();
	func_1527(uParam0);
	func_1264();
	uParam0->f_2207.f_50 = _databinding_add_data_container_from_path("", "GenericShop");
	uParam0->f_2207.f_51 = _databinding_add_data_hash(uParam0->f_2207.f_50, "Title", get_hash_key(func_1528(uParam0->f_3)));
	uParam0->f_2207.f_53 = _databinding_add_data_container(uParam0->f_2207.f_50, "Prompts");
	uParam0->f_2207.f_52 = _databinding_add_data_container(uParam0->f_2207.f_50, "Scene");
	uParam0->f_2207.f_54 = _databinding_add_data_container(uParam0->f_2207.f_52, "price_details");
	func_1529(uParam0, 7, -2122634935);
	func_1257(uParam0, 7, 1);
	func_1530(uParam0, 7, 1);
	func_1531(uParam0, 7, 0);
	func_1529(uParam0, 1, -672301300);
	func_1257(uParam0, 1, 1);
	func_1530(uParam0, 1, 1);
	func_1531(uParam0, 1, 0);
	func_1529(uParam0, 2, 1891107858);
	func_1257(uParam0, 2, 0);
	func_1530(uParam0, 2, 0);
	func_1531(uParam0, 2, 0);
	func_1529(uParam0, 3, -405106071);
	func_1257(uParam0, 3, 0);
	func_1530(uParam0, 3, 0);
	func_1531(uParam0, 2, 0);
	func_1529(uParam0, 6, 1003038367);
	func_1257(uParam0, 6, 0);
	func_1530(uParam0, 6, 0);
	func_1531(uParam0, 6, 0);
	if (bParam3)
	{
		uParam0->f_2207.f_141 = 0;
		uParam0->f_2207.f_143 = 0;
		uParam0->f_2207.f_139 = 0;
		uParam0->f_2207.f_145 = 0;
		uParam0->f_2207.f_151 = 0;
		uParam0->f_2207.f_147 = 0;
		uParam0->f_2207.f_153 = 0;
		uParam0->f_2207.f_155 = 0;
	}
	uParam0->f_2207.f_157 = 239394;
	uParam0->f_2207.f_158 = 240298;
	uParam0->f_2207.f_159 = 185576;
	uParam0->f_2207.f_160 = 241114;
	uParam0->f_2207.f_161 = 241282;
	uParam0->f_2207.f_46 = 1;
	return true;
}

int func_1162(var uParam0, var uParam1)
{
	if (!func_1536(uParam0))
	{
		func_1537(uParam0, 4, 1945003767, 0, 0, 0);
	}
	else
	{
		func_1537(uParam0, 4, 1945003767, func_1538(), 1, 0);
	}
	switch (*uParam1)
	{
		case 2077448405:
			if (func_459(uParam1->f_9) != -999503751)
			{
			}
			else
			{
				if (func_1539(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = func_744(uParam1->f_9);
					if ((iVar0 <= -1 || func_1540() == uParam1->f_9) || !func_1330(2, iVar0))
					{
						func_1537(uParam0, 4, 904671343, 0, 0, 0);
					}
					else
					{
						func_1537(uParam0, 4, 904671343, 1, 1, 0);
					}
				}
				if (func_1539(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = func_744(uParam1->f_9);
					if (iVar0 <= -1 || !func_1330(2, iVar0))
					{
						func_1537(uParam0, 3, -1503720446, 0, 0, 1);
					}
					else
					{
						func_1537(uParam0, 3, -1503720446, 1, 1, 1);
					}
				}
				if (func_1540() == uParam1->f_9 || func_1327(uParam1->f_9, 0))
				{
					func_1537(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (func_1541(uParam1->f_9))
				{
					func_1537(uParam0, 2, -1208531349, 1, 1, 0);
				}
				else
				{
					iVar0 = func_744(uParam1->f_9);
					if (iVar0 <= -1)
					{
						func_1537(uParam0, 2, 920855044, 1, 1, 0);
					}
					else if (uParam1->f_9 == 491602716)
					{
						if (func_1540() == 491602716)
						{
							func_1537(uParam0, 2, 920855044, func_1330(2, iVar0), 1, 0);
						}
					}
					else
					{
						func_1537(uParam0, 2, 920855044, func_1330(2, iVar0), 1, 0);
					}
				}
				Jump @583; //curOff = 481
				func_1542(uParam0, 1108822547, uParam1->f_9);
				Jump @583; //curOff = 499
				func_1543(&(uParam0->f_2506), uParam1->f_9);
				Jump @583; //curOff = 515
				Jump @583; //curOff = 518
				if (func_459(uParam1->f_9) == -2061583405)
				{
					func_1542(uParam0, 1108822547, uParam1->f_9);
				}
				else
				{
					func_1537(uParam0, 2, 0, 0, 0, 0);
				}
				Jump @583; //curOff = 566
				func_1537(uParam0, 2, 0, 0, 0, 0);
			}
			if (func_485(uParam1->f_9) == -1037537535 && func_737(func_459(uParam1->f_9)))
			{
				func_1544(&(uParam0->f_2506.f_2), uParam1->f_9, uParam0->f_2207.f_107);
			}
			else
			{
				func_1545(&(uParam0->f_2506.f_2), uParam0->f_2207.f_107);
			}
			if (func_1188(uParam0) == 1256151078 && !func_204(64))
			{
				func_1537(uParam0, 2, -810523886, 1, 1, 0);
			}
			return 1;
			default:
				break;
	}
}

void func_1163(var uParam0, int iParam1)
{
	uParam0->f_2207.f_142 = iParam1;
	uParam0->f_2207.f_141 = 1;
}

int func_1164(var uParam0, var uParam1)
{
	iVar0 = func_459(uParam1->f_7);
	switch (uParam1->f_10)
	{
		case 1:
			if (*uParam1 == -348190488)
			{
				func_1546(uParam1->f_7);
			}
			break;
		case 2:
			if (func_1188(uParam0) == 1256151078)
			{
				func_1522(uParam0, -1934515925, 1, -1, 1, 1, 1, 0);
				return 1;
			}
			switch (*uParam1)
			{
				case 2077448405:
					bVar3 = true;
					break;
				case 1942587409:
					bVar3 = true;
					break;
				case 761079318:
					if (iVar0 == -2061583405)
					{
						bVar3 = true;
					}
					break;
			}
			switch (uParam1->f_7)
			{
				case -2065815962:
					bVar3 = false;
					break;
			}
			if (bVar3)
			{
				if (func_1541(uParam1->f_7))
				{
					if (func_1547(func_1210(uParam0)))
					{
						func_1249(uParam0, -1, 1);
					}
					func_1548(uParam1->f_7, 0, 0, 1, 0);
				}
				else
				{
					if (func_481(uParam1->f_7, 160827531))
					{
						iVar0 = 81053684;
					}
					if (func_1549(iVar0, 0))
					{
						func_1550(uParam1->f_7, 0, 0, 0, 1, 0);
					}
					else
					{
						if (iVar0 == -999503751)
						{
							iVar2 = func_1551(iVar0, Global_1952637->f_1675);
						}
						else
						{
							iVar2 = func_1551(iVar0, &(Global_1952637->f_1675.f_1[func_1335(func_1552(iVar0), 1)]));
						}
						func_1553(iVar2, uParam1->f_7, 1, 0, 0);
					}
				}
			}
			func_454(1048576);
			break;
		case 3:
			if (!func_1539(uParam1->f_7) || uParam1->f_7 == 491602716)
			{
			}
			else
			{
				uParam0->f_2506.f_7 = 2;
				uParam0->f_2506.f_6 = uParam1->f_7;
				Jump @617; //curOff = 418
				if ((func_1539(uParam1->f_7) && func_1540() != uParam1->f_7) && uParam1->f_7 != 491602716)
				{
					if (func_1541(uParam1->f_7))
					{
						func_1548(uParam1->f_7, 0, 0, 1, 0);
						func_454(1048576);
					}
					func_1554(uParam1->f_7, 1);
					if (func_1555(uParam1->f_7, &iVar4, 1))
					{
						func_1556(iVar4);
						func_1557(2, iVar4, 6);
						func_1558(iVar4);
						func_454(1048576);
					}
					func_1249(uParam0, -1, 1);
				}
				else if (func_1559(&(uParam0->f_2506.f_16)))
				{
					iVar1 = func_1560(uParam0->f_2506.f_16);
					if (iVar1 != 0)
					{
						uParam0->f_2506.f_7 = 1;
						uParam0->f_2506.f_6 = iVar1;
					}
				}
			}
			return 1;
			default:
				break;
	}
}

void func_1165(var uParam0, int iParam1)
{
	uParam0->f_2207.f_144 = iParam1;
	uParam0->f_2207.f_143 = 1;
}

void func_1166(var uParam0, var uParam1, int iParam2)
{
	func_1561(&(uParam0->f_2506.f_2));
	if (func_210(&(uParam0->f_2506), 2))
	{
		if (!func_204(4194304))
		{
			func_1268(uParam0, 64);
			func_1253();
			func_1562(&(uParam0->f_2506), 2);
		}
	}
	else if (func_204(4194304))
	{
		func_1207(uParam0, 64);
		if (func_1563(uParam0, 4) || func_1564(uParam0, 4))
		{
			func_1537(uParam0, 4, 1945003767, 0, 0, 0);
		}
		iVar0 = func_1236();
		if (((((iVar0 == 761079318 || iVar0 == -2056428614) || iVar0 == 1942587409) || iVar0 == -395279071) || iVar0 == -348190488) || iVar0 == 753463028)
		{
			if (iParam2 == -252412307 || iParam2 == -440651963)
			{
				func_1565(256);
				func_1199(16);
				func_1565(1024);
			}
			else
			{
				func_1253();
			}
		}
		if (iVar0 == 2077448405)
		{
			func_1253();
		}
		func_913(&(uParam0->f_2506), 2);
	}
}

void func_1167(var uParam0, int iParam1)
{
	uParam0->f_2207.f_140 = iParam1;
	uParam0->f_2207.f_139 = 1;
}

void func_1168(var uParam0, var uParam1, int iParam2)
{
	func_1566();
	Var0.f_1 = -1;
	if (func_1567(&(Global_1952637->f_1675), &Var0, func_773(889965687, func_627(1), 1034665895, 1)))
	{
		if (!func_210(&(uParam0->f_2506), 4))
		{
			func_913(&(uParam0->f_2506), 4);
		}
	}
	else if (func_210(&(uParam0->f_2506), 4))
	{
		func_1562(&(uParam0->f_2506), 4);
	}
	if (iParam2 == 1256151078)
	{
		func_1172(uParam0, uParam0->f_2506.f_13);
		func_1568(uParam0, uParam0->f_2506.f_13);
		func_450();
	}
	else
	{
		iVar3 = iParam2;
		if (func_331(iVar3, 0) && func_481(iVar3, -393037696))
		{
			func_1172(uParam0, iParam2);
			func_1568(uParam0, iParam2);
		}
		else
		{
			func_1525(uParam0);
			func_450();
			iVar4 = func_1210(uParam0);
			if (iVar4 != -1)
			{
				func_1568(uParam0, iVar4);
			}
			else
			{
				func_1568(uParam0, iParam2);
			}
		}
	}
}

void func_1169(var uParam0, int iParam1)
{
	uParam0->f_2207.f_146 = iParam1;
	uParam0->f_2207.f_145 = 1;
}

void func_1170(var uParam0, int iParam1)
{
	if (iParam1 == 1256151078 || iParam1 == -1011619512)
	{
		func_913(&(uParam0->f_2506), 16);
		func_913(&(uParam0->f_2506), 8);
	}
}

void func_1171(var uParam0, int iParam1)
{
	uParam0->f_2207.f_152 = iParam1;
	uParam0->f_2207.f_151 = 1;
}

void func_1172(var uParam0, int iParam1)
{
	uParam0->f_17 = iParam1;
}

int func_1173(var uParam0)
{
	return get_ped_index_from_entity_index(uParam0->f_30);
}

int func_1174(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	clear_ped_env_dirt(iParam1);
	clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
	uParam0->f_2207.f_107 = iParam1;
	return 1;
}

bool func_1175(var uParam0)
{
	if (!func_1569(uParam0))
	{
		return false;
	}
	if (_does_streamed_txd_exist(1912964614))
	{
		_request_streamed_txd(1912964614, false);
		if (!_has_streamed_txd_loaded(1912964614))
		{
			return false;
		}
	}
	if (_is_app_running(347537322))
	{
		return false;
	}
	if (_is_app_running(1289756680))
	{
		return true;
	}
	iVar0 = _launch_app_by_hash_with_entry(1289756680, -1102306668);
	if (iVar0 == 0)
	{
		uParam0->f_2207.f_47 = 1;
		return true;
	}
	return false;
}

int func_1176(var uParam0)
{
	if (!_is_anim_scene_loaded(uParam0->f_14, true, false))
	{
		return 0;
	}
	if (!_0x0df57f86fe71dbe5(uParam0->f_14, "PB_IDLE"))
	{
		_0xdf7b5144e25cd3fe(uParam0->f_14, "PB_IDLE");
	}
	if (!_0x23e33cb9f4a3f547(uParam0->f_14, "PB_IDLE"))
	{
		return 0;
	}
	if (uParam0->f_13 == -1151073879)
	{
		if (!_is_anim_scene_loaded(uParam0->f_15, true, false))
		{
			return 0;
		}
	}
	return 1;
}

void func_1177(var uParam0)
{
	if (!network_is_in_mp_cutscene())
	{
		_0xf3354d6ca46f419d(*uParam0, 0);
		set_local_player_visible_in_cutscene(1, 0, 256);
		network_set_in_mp_cutscene(true, true, 32, true);
	}
	if (!_is_anim_scene_started(uParam0->f_14, false))
	{
		set_anim_scene_entity(uParam0->f_14, "player", *uParam0, 0);
		fVar0 = (uParam0->f_20 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		set_anim_scene_origin(uParam0->f_14, uParam0->f_27, 0f, 0f, fVar0, 0);
		start_anim_scene(uParam0->f_14);
	}
	if (!_0x1f0e401031e20146(uParam0->f_14, "PB_IDLE"))
	{
		_set_anim_scene_playback_list_bool(uParam0->f_14, "PB_IDLE", true);
	}
	if (_does_anim_scene_exist(uParam0->f_15) && !_is_anim_scene_started(uParam0->f_15, false))
	{
		set_anim_scene_origin(uParam0->f_15, uParam0->f_27 + Vector(1f, 0f, 0f), 0f, 0f, uParam0->f_20, 0);
		start_anim_scene(uParam0->f_15);
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	if (!func_1570(32))
	{
		Var3 = { func_767(0, -1591664384, -1591664384, -1591664384, 2047428024, 0, 0) };
		if (func_770(&Var3, &iVar1, &iVar2, 1))
		{
			if (iVar2 > 0)
			{
				func_1571(32);
			}
			func_771(iVar1);
		}
	}
	if (!func_1570(64))
	{
		Var3 = { func_767(0, -1591664384, -1591664384, -1591664384, 502936876, 0, 0) };
		if (func_770(&Var3, &iVar1, &iVar2, 1))
		{
			if (iVar2 > 0)
			{
				func_1571(64);
			}
			func_771(iVar1);
		}
	}
}

void func_1178(var uParam0)
{
	Global_1915715->f_23051.f_23 = *uParam0;
	if (uParam0->f_13 == -1151073879)
	{
		*Global_1915715->f_23051.f_24[0] = { get_offset_from_entity_in_world_coords(*uParam0, 0.1596f, 2.403f, 0.2532f) };
		Global_1915715->f_23051.f_24[0]->f_3 = { get_entity_rotation(*uParam0, 2) + Vector(186.414f, 0f, -6.9665f) };
		vVar0 = { *Global_1915715->f_23051.f_24[0] };
		func_585(&vVar0, 1088421888);
		func_1100(&(uParam0->f_9), vVar0, 2.5f, 1, 4, 0);
	}
	else
	{
		*Global_1915715->f_23051.f_24[0] = { get_offset_from_entity_in_world_coords(*uParam0, 0.1773f, 2.1151f, 0.576f) };
		Global_1915715->f_23051.f_24[0]->f_3 = { get_entity_rotation(*uParam0, 2) + Vector(186.414f, 0f, -14.7873f) };
	}
	Global_1915715->f_23051.f_2.f_9 = 50.9f;
	func_1572(*uParam0, 20, func_1116());
	Global_1915715->f_23051.f_22 = 1;
	if (!does_cam_exist(uParam0->f_2))
	{
		uParam0->f_2 = create_cam_with_params("default_scripted_camera", *Global_1915715->f_23051.f_24[0], Global_1915715->f_23051.f_24[0]->f_3, Global_1915715->f_23051.f_2.f_9, false, 2);
	}
	else
	{
		set_cam_params(uParam0->f_2, *Global_1915715->f_23051.f_24[0], Global_1915715->f_23051.f_24[0]->f_3, Global_1915715->f_23051.f_2.f_9, 0, 1, 1, 2, 1, 0);
	}
	if (!is_cam_active(uParam0->f_2))
	{
		set_cam_active(uParam0->f_2, true);
	}
	if (!is_cam_rendering(uParam0->f_2))
	{
		render_script_cams(true, false, 3000, true, false, 0);
	}
	set_timecycle_modifier("MP_wardrobe_generic");
	func_1573(uParam0->f_2, 0);
}

void func_1179(int iParam0, var uParam1)
{
	iVar0 = Global_1915715->f_20241;
	iVar1 = Global_1915715->f_22044;
	if (iVar0 != -1 && iVar1 == 0)
	{
		iVar1 = func_1116();
	}
	if (Global_1915715->f_23051.f_22 == 1)
	{
		return;
	}
	Global_1915715->f_23051.f_23 = iParam0;
	Global_1915715->f_23051 = *uParam1;
	*Global_1915715->f_23051.f_24[0] = { get_cam_coord(*uParam1) };
	Global_1915715->f_23051.f_24[0]->f_3 = { get_cam_rot(*uParam1, 2) };
	Global_1915715->f_23051.f_2.f_9 = 51.3f;
	if (iVar0 == -1 && iVar1 == 0)
	{
		Global_1915715->f_23051.f_240 = 1;
	}
	else
	{
		Global_1915715->f_23051.f_240 = 0;
	}
	func_1572(iParam0, iVar0, iVar1);
	func_1574(1);
	Global_1915715->f_23051.f_22 = 1;
}

int func_1180(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(bParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

int func_1181(int iParam0)
{
	iVar0 = func_1335(func_1552(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1182(bool bParam0)
{
	if (func_1183(81053684, bParam0))
	{
		return true;
	}
	if (func_1183(-525676072, bParam0))
	{
		return true;
	}
	return false;
}

bool func_1183(int iParam0, bool bParam1)
{
	iVar1 = func_1335(func_1552(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		bVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_459(bVar0) == iParam0 || (iParam0 == 81053684 && func_481(bVar0, 160827531)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_1184(bool bParam0)
{
	return &(Global_1952637->f_1675.f_1[func_1335(bParam0, 1)]);
}

int func_1185(bool bParam0)
{
	return func_1575(bParam0);
}

bool func_1186(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_1182(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1187(bool bParam0, int iParam1)
{
	bVar1 = func_1576(bParam0);
	iVar2 = func_1335(bVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_1577(bParam0) && func_1541(bParam0))
	{
		iParam1 |= 64;
	}
	if ((bVar1 == 1108822547 && func_204(32768)) || bParam0 != &Global_1952637->f_1675.f_1[iVar2])
	{
		if (func_1577(&(Global_1952637->f_1675.f_1[iVar2])) && func_1541(&(Global_1952637->f_1675.f_1[iVar2])))
		{
			iParam1 |= 32;
		}
		if (Global_1952637->f_83[iVar2]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_459(bParam0))
		{
			case 81053684:
				if (func_1183(-525676072, &uVar0))
				{
					iVar3 = func_1335(func_1552(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
						if (func_481(bParam0, -180472385) && func_1183(1024667707, &uVar0))
						{
							iVar3 = func_1335(func_1552(1024667707), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
								Jump @513; //curOff = 342
								if (func_204(32768))
								{
									func_996(func_1307(iVar2, 1));
								}
								if (func_1183(81053684, &uVar4))
								{
									iVar3 = func_1335(func_1552(81053684), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
										Jump @513; //curOff = 428
										if (!func_481(bParam0, 160827531))
										{
										}
										else
										{
											if (func_1183(-525676072, &uVar0))
											{
												iVar3 = func_1335(func_1552(-525676072), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
												}
												Global_1952637->f_2685[iVar2] = bParam0;
												func_1578(bVar1, iParam1, 6);
											}
										}
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

int func_1188(var uParam0)
{
	return func_1523(&(uParam0->f_2207));
}

int func_1189(var uParam0)
{
	uVar0 = func_1579(&(uParam0->f_2207));
	return uVar0;
}

int func_1190(var uParam0)
{
	return uParam0->f_2207.f_106;
}

int func_1191(var uParam0)
{
	return uParam0->f_2207.f_108;
}

int func_1192(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam1);
	iVar1 = func_1580(iVar0);
	iVar2 = func_1581(iVar0);
	iVar3 = func_1582(iVar0);
	bVar4 = func_1583(iVar0) + 1;
	bVar4 = func_1584(bVar4, 0, 10);
	bVar6 = bVar4 + 2;
	bVar6 = func_1584(bVar6, 0, 10);
	bVar7 = func_1585(iVar0) + 1;
	bVar7 = func_1584(bVar7, 0, 10);
	bVar9 = bVar7 + 2;
	bVar9 = func_1584(bVar9, 0, 10);
	func_1586(&(uParam0->f_2207.f_89), &bVar5, &bVar8);
	bVar5 = floor((IntToFloat(bVar5) * 0.01f));
	bVar5 = (bVar5 + bVar4);
	bVar5 = func_1584(bVar5, 0, 10);
	bVar8 = floor((IntToFloat(bVar8) * 0.01f));
	bVar8 = (bVar8 + bVar7);
	bVar8 = func_1584(bVar8, 0, 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedValue", bVar4);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentValue", bVar5);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityValue", bVar6);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccValue", bVar7);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentValue", bVar8);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityValue", bVar9);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMaxValue", 10);
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseHandling", get_hash_key(func_1587(iVar2)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseType", get_hash_key(func_1588(iVar3, iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseBreed", get_hash_key(func_1589(iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseCoat", get_hash_key(func_1590(iVar1)));
	sVar10 = func_1591(iParam1);
	if (func_1236() == -239176093)
	{
		iVar11 = func_1242();
		iVar12 = _databinding_read_data_int_from_parent_by_hash(iVar11, func_1243());
		switch (iVar12)
		{
			case 0:
				sVar10 = func_1592(1);
				break;
			case 1:
				sVar10 = func_1592(2);
				break;
		}
	}
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseGender", get_hash_key(sVar10));
	return 1;
}

int func_1193(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam1);
	iVar1 = func_1593(iVar0);
	iVar2 = func_1594(iVar0);
	iVar3 = func_1595(iVar0);
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleMaxSpeed", get_hash_key(func_1596(iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleAcceleration", get_hash_key(func_1597(iVar2)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleSteering", get_hash_key(func_1598(iVar3)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleDescription", get_hash_key(func_1599(iVar0)));
	return 1;
}

bool func_1194()
{
	if ((func_1157() || Global_1048585) // PointerArith)
	{
		return true;
	}
	if ((func_780() || func_1600()) || func_1601())
	{
		return true;
	}
	if ((func_1602() && !func_1603()) || func_1604())
	{
		return true;
	}
	if (Global_1051439->f_43)
	{
		return true;
	}
	return false;
}

void func_1195(int* iParam0)
{
	if (!func_1081(iParam0, 0))
	{
		func_1605(1);
		_uiprompt_disable_prompts_this_frame();
		disable_all_control_actions(2);
	}
}

void func_1196(var uParam0)
{
	iVar0 = -1558366648;
	if (!func_1606(uParam0))
	{
		return;
	}
	if (!_can_launch_app_by_hash(iVar0))
	{
		return;
	}
	if (!_is_app_running(iVar0))
	{
		iVar1 = -500021522;
		if (uParam0->f_1929.f_1)
		{
			iVar1 = -1102037190;
		}
		iVar2 = _launch_app_by_hash_with_entry(iVar0, iVar1);
		if (iVar2 == 0)
		{
			uParam0->f_1929 = 0;
		}
	}
}

bool func_1197(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (uParam0->f_2207.f_75 >= 0)
		{
			uParam0->f_2207.f_74 = uParam0->f_2207.f_75;
			uParam0->f_2207.f_75 = -1;
		}
		else
		{
			uParam0->f_2207.f_74 = 0;
		}
		uParam0->f_2207.f_76 = 0;
		uParam0->f_2207.f_77 = 0;
		func_1607(uParam0, 0);
		func_1608(uParam0, "");
		func_1609(uParam0, 0);
		func_1610(uParam0);
		func_1611(uParam0, 0);
		func_1612(uParam0, 0);
		func_1613(uParam0, 0, 0, 0, 1105014447);
		func_1614(uParam0, 0);
		func_1615(uParam0, 0, 0, 0);
		func_1616(uParam0, "", 1);
		func_1617(uParam0);
		func_1618(uParam0, 0);
		func_1619(uParam0, 0);
		func_1620(uParam0, 0);
		func_1621(uParam0, 0);
		_databinding_add_data_bool(uParam0->f_2207.f_50, func_1622(), false);
		_databinding_add_data_hash(uParam0->f_2207.f_50, "ItemPaletteItemName", -1);
		_databinding_add_data_bool(uParam0->f_2207.f_52, "HorseStats", true);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "isGoldPrice", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "rightPriceTextVisible", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceGold", false);
		_databinding_add_data_int(uParam0->f_2207.f_54, "purchasePrice", false);
		_databinding_add_data_string(uParam0->f_2207.f_54, "rightPriceRawText", "");
		_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", false);
		_databinding_add_data_int(uParam0->f_2207.f_54, "itemPriceRank", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "isAffordable", false);
		_databinding_add_data_string(uParam0->f_2207.f_54, "purchaseLabel", "");
		_databinding_add_data_int(uParam0->f_2207.f_54, "tokenPrice", false);
		_databinding_add_data_hash(uParam0->f_2207.f_50, "Title", get_hash_key(func_1528(uParam0->f_3)));
		func_447(uParam0);
		func_448(uParam0);
	}
	if (func_1247(uParam0, &iVar0))
	{
		if (iVar0 <= 0)
		{
			func_1623();
			return true;
		}
		else
		{
			func_1624(uParam0, iVar0);
		}
	}
	switch (iParam1)
	{
		case 1036144478:
			return func_1625(uParam0, bParam2);
		case 2057502022:
			return func_1626(uParam0, bParam2);
		case -996064024:
			return func_1627(uParam0, bParam2);
		case -706012851:
			return func_1628(uParam0, bParam2);
		case -645366665:
			return func_1629(uParam0, bParam2);
		case -252412307:
			return func_1630(uParam0, bParam2);
		case -659372875:
			return func_1631(uParam0, bParam2);
		case -720046:
			return func_1632(uParam0, bParam2);
		case 2144984909:
			return func_1633(uParam0, bParam2);
		case 115613670:
			return func_1634(uParam0, bParam2);
		case 1275816411:
			return func_1635(uParam0, bParam2);
		case 178644271:
			return func_1636(uParam0, bParam2);
		case 2092883099:
			return func_1637(uParam0, bParam2);
		case 1705401718:
			return func_1638(uParam0, bParam2);
		case 310306577:
			return func_1639(uParam0, bParam2);
		case -856183175:
			return func_1640(uParam0, bParam2);
		case 1860655620:
			return func_1641(uParam0, bParam2);
		case 94016929:
			return func_1642(uParam0, bParam2);
		case 1426047132:
			return func_1643(uParam0, bParam2);
		case 803749366:
			return func_1644(uParam0, bParam2);
		case -2144266389:
			return func_1645(uParam0, bParam2);
		case -1548684311:
			return func_1646(uParam0, bParam2);
		case 1965673387:
			return func_1647(uParam0, bParam2);
		case 1013443471:
			return func_1648(uParam0, bParam2);
		case 23814986:
			return func_1649(uParam0, bParam2);
		case 253603960:
			return func_1650(uParam0, bParam2);
		case -946221162:
			if (uParam0->f_3 == 33 && func_1188(uParam0) == 603940701)
			{
				return func_1629(uParam0, bParam2);
			}
			else
			{
				return func_1651(uParam0, bParam2);
			}
			break;
		case -440651963:
			return func_1652(uParam0, bParam2);
	}
	return false;
}

bool func_1198()
{
	return func_1199(1024);
}

bool func_1199(bool bParam0)
{
	return func_183(Global_1915715->f_20241.f_3, bParam0);
}

bool func_1200(int iParam0)
{
	return _request_uiapp_transition_by_hash(1289756680, iParam0);
}

bool func_1201(bool bParam0, var uParam1)
{
	if (func_1653(uParam1))
	{
		if (func_1654(bParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1202(var uParam0)
{
	iVar0 = func_1189(uParam0);
	if (func_1206(uParam0) && !(func_1655(uParam0) && func_1656(uParam0)))
	{
		func_1529(uParam0, 7, -436465203);
	}
	else
	{
		func_1529(uParam0, 7, -436465203);
	}
	func_1657(uParam0);
	if (!func_1197(uParam0, iVar0, 0))
	{
		return false;
	}
	if (!func_1200(iVar0))
	{
		return false;
	}
	func_1607(uParam0, 0);
	func_446(uParam0);
	func_1658();
	if (!uParam0->f_2207.f_69)
	{
		uParam0->f_2207.f_69 = 1;
	}
	return true;
}

void func_1203(int iParam0)
{
	func_184(&(Global_1915715->f_20241.f_3), iParam0);
}

var func_1204(var uParam0)
{
	return uParam0->f_19;
}

bool func_1205(var uParam0)
{
	if (uParam0->f_2207.f_121.f_1)
	{
		if (func_1521(uParam0->f_2207.f_121.f_3, &(uParam0->f_2207)))
		{
			uParam0->f_2207.f_71 = uParam0->f_2207.f_121.f_4;
			func_1659(uParam0->f_2207.f_121.f_5, &(uParam0->f_2207));
			if (func_1522(uParam0, uParam0->f_2207.f_121.f_2, 1, uParam0->f_2207.f_121.f_6, 0, 0, 0, 1))
			{
				func_1524(uParam0, 0);
				bVar0 = func_1211();
				if (func_331(bVar0, 0) || func_1017(func_764(bVar0), 2))
				{
					func_1212(bVar0);
				}
				return true;
			}
		}
	}
	else if (func_1522(uParam0, uParam0->f_2207.f_121.f_2, 1, uParam0->f_2207.f_121.f_6, 0, 1, 1, 1))
	{
		func_1524(uParam0, 0);
		bVar1 = func_1211();
		if (func_331(bVar1, 0) || func_1017(func_764(bVar1), 2))
		{
			func_1212(bVar1);
		}
		return true;
	}
	return false;
}

bool func_1206(var uParam0)
{
	if (func_1660(&(uParam0->f_2207)) == uParam0->f_2207.f_71)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_1207(var uParam0, int iParam1)
{
	func_50(&(uParam0->f_2207.f_45), iParam1);
}

void func_1208(var uParam0, int iParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1661(iParam1, 1), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1661(iParam1, 0), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1662(iParam1, 1), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1662(iParam1, 0), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1663(iParam1), false);
}

bool func_1209(var uParam0)
{
	if ((uParam0->f_42 - 1) >= 0)
	{
		if (!func_1664(uParam0, &Var0))
		{
			return false;
		}
		uParam0->f_31[uParam0->f_42] = -1;
		uParam0->f_20[uParam0->f_42] = 0;
		uParam0->f_42 = (uParam0->f_42 - 1);
		uParam0->f_12 = { Var0 };
		if (uParam0->f_42 < 0 || uParam0->f_42 >= 10)
		{
			uParam0->f_19 = 0;
		}
		else
		{
			uParam0->f_19 = &uParam0->f_20[uParam0->f_42];
		}
		return true;
	}
	return false;
}

int func_1210(var uParam0)
{
	bVar0 = false;
	if (!func_1665(uParam0, uParam0->f_2207.f_74, &bVar0))
	{
		return -1;
	}
	return func_1666(bVar0, &(uParam0->f_2207));
}

bool func_1211()
{
	return Global_1915715->f_20241.f_3.f_12;
}

void func_1212(bool bParam0)
{
	_unlock_set_new(func_1667(bParam0), false);
}

bool func_1213(var uParam0)
{
	uParam0->f_2207.f_74 = func_1668(uParam0);
	iVar0 = 0;
	if (!func_1665(uParam0, uParam0->f_2207.f_74, &iVar0))
	{
		return false;
	}
	if (func_1669(iVar0, &(uParam0->f_2207), &iVar1))
	{
		func_1568(uParam0, func_1670(uParam0, iVar1));
		func_1249(uParam0, 0, 1);
		func_1607(uParam0, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1214(var uParam0)
{
	if (func_1671() == 1039059780)
	{
		return true;
	}
	if (((!func_1199(512) && func_1671() != -729996127) && func_1189(uParam0) != 1965673387) && func_1189(uParam0) != -1548684311)
	{
		if (!_databinding_is_data_id_valid(func_1672()))
		{
			iVar0 = func_1673();
			iVar1 = func_1231();
			bVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				bVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = _databinding_get_array_count(uParam0->f_2207.f_58);
			if (bVar2 >= iVar4 || bVar2 < 0)
			{
				return false;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, bVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return false;
			}
			func_1674(&iVar5);
			iVar6 = _databinding_read_data_int_from_parent(func_1672(), func_1675());
			func_1676(iVar6);
		}
	}
	func_1677(uParam0);
	Var7.f_14 = -1;
	Var7.f_15 = -1;
	func_1678(uParam0, &Var7);
	if (func_1199(512))
	{
		if (func_1660(&(uParam0->f_2207)) == uParam0->f_2207.f_71)
		{
			uParam0->f_2207.f_48 = 1;
		}
		if (!func_1679(uParam0, 8))
		{
			iVar30 = 0;
			iVar31 = func_459(func_1184(1108822547));
			if ((uParam0->f_3 == 8 && iVar31 != 119907797) && func_1304(1905845894) == -1)
			{
				iVar30 = 1905845894;
			}
			if (uParam0->f_2207.f_48)
			{
				if (!uParam0->f_2207.f_84)
				{
					func_444(uParam0, 1, iVar30);
				}
			}
			else
			{
				func_444(uParam0, 1, iVar30);
			}
			if (!(func_1680(uParam0) == -223810523 && func_1188(uParam0) != 1651623911))
			{
				func_1260(uParam0);
			}
		}
		if (func_1189(uParam0) == 803749366)
		{
			func_1681();
		}
		if (func_1623())
		{
			func_447(uParam0);
			func_448(uParam0);
			uParam0->f_2558 = 0;
			if (uParam0->f_2207.f_151)
			{
				Stack.Push(uParam0);
				Stack.Push(func_1680(uParam0));
				Call_Loc(uParam0->f_2207.f_152);
			}
			func_1682(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (!func_1683(uParam0, Var7.f_11, &Var7))
	{
	}
	if (Var7.f_10 == 1)
	{
		bVar32 = Var7.f_7;
		if (Var7 == 193788635 || Var7 == -1198174119)
		{
			bVar32 = Var7.f_1;
		}
		else if (Var7 == 317179309)
		{
			bVar32 = 692350163;
		}
		else if (Var7 == -1594421938)
		{
			bVar32 = 675142260;
		}
		else if (Var7 == -1352600334)
		{
			bVar32 = -1724045811;
		}
		if ((func_1397() || (func_1684(bVar32) && !func_1685(Var7))) && func_1686())
		{
			bVar33 = false;
			if ((func_332(bVar32, 1) || (Var7 == 1394581936 && func_1687(uParam0, bVar32, 1394581936))) && !func_1688(bVar32, 1048576))
			{
			}
			else if (func_1689(bVar32, 1))
			{
			}
			else
			{
				if (Var7.f_11 == 310306577)
				{
					iVar35 = func_1690(func_1265(uParam0, &uVar34, 1, 1));
					if (!func_1077(iVar35))
					{
						bVar33 = true;
					}
				}
				else if (func_1691(bVar32))
				{
					bVar33 = (!func_1692(uParam0, bVar32) && !func_1693(bVar32, 0, 1));
				}
				else if (!func_1693(bVar32, 0, 1))
				{
					bVar33 = true;
				}
				if (bVar33)
				{
					func_1694(1);
					return true;
				}
			}
		}
	}
	if (Var7.f_11 == 310306577)
	{
	}
	else if (!func_1533(uParam0, &Var7, 1))
	{
	}
	if (uParam0->f_2207.f_143)
	{
		Stack.Push(uParam0);
		Stack.Push(&Var7);
		Call_Loc(uParam0->f_2207.f_144);
		if (!StackVal)
		{
		}
	}
	if (Var7.f_10 == 3)
	{
		if (Var7.f_13 == -1804681488)
		{
			return true;
		}
	}
	if ((!func_1695(uParam0->f_2160) && !func_1695(uParam0->f_2170)) && func_1081(&(uParam0->f_2160), 0))
	{
		if (Var7.f_11 == 1705401718 || Var7.f_11 == 310306577)
		{
			if (!func_1246(uParam0))
			{
			}
		}
		if (!func_1245(uParam0))
		{
		}
	}
	if (((Var7.f_11 != 1705401718 && Var7.f_11 != 310306577) && Var7.f_11 != 94016929) && Var7.f_11 != 1426047132)
	{
		func_1696(uParam0);
	}
	func_1697(uParam0, Var7);
	func_1698(uParam0);
	return true;
}

int func_1215(var uParam0)
{
	if (func_1393(&(uParam0->f_2160)))
	{
		return 0;
	}
	if (func_1189(uParam0) != -1548684311 && func_1189(uParam0) != 1965673387)
	{
		if (!_databinding_is_data_id_valid(func_1242()))
		{
			iVar0 = func_1248();
			iVar1 = func_1231();
			bVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				bVar2 = ((iVar1 * -1) - iVar3);
			}
			if (!_databinding_is_data_id_valid(uParam0->f_2207.f_58))
			{
				return 0;
			}
			iVar4 = _databinding_get_array_count(uParam0->f_2207.f_58);
			if (iVar4 == 0)
			{
				return 0;
			}
			if (bVar2 >= iVar4 || bVar2 < 0)
			{
				return 0;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, bVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return 0;
			}
			func_1699(&iVar5);
			iVar6 = _databinding_read_data_int_from_parent(func_1242(), func_1675());
			func_1700(iVar6);
		}
	}
	func_1607(uParam0, 0);
	func_1612(uParam0, 0);
	func_1613(uParam0, 0, 0, 0, 1105014447);
	func_1614(uParam0, 0);
	func_1615(uParam0, 0, 0, 0);
	func_1610(uParam0);
	func_1611(uParam0, 0);
	func_1701(uParam0);
	func_1702(&Var7, uParam0);
	func_1252(0);
	if (!func_1703(uParam0, Var7.f_12, &Var7))
	{
	}
	if (!func_1532(uParam0, &Var7))
	{
	}
	if (!func_1199(65536))
	{
		if (func_331(Var7.f_9, 0))
		{
			if (func_481(Var7.f_9, -495963434))
			{
				if (!func_1704(uParam0, &Var7))
				{
				}
			}
		}
		if (uParam0->f_2207.f_141)
		{
			Stack.Push(uParam0);
			Stack.Push(&Var7);
			Call_Loc(uParam0->f_2207.f_142);
			if (!StackVal)
			{
			}
		}
	}
	func_1203(65536);
	if (Var7.f_12 == 310306577 && Var7.f_13 == -1665950342)
	{
		if (func_1705(uParam0, 0, 1))
		{
		}
	}
	else if (uParam0->f_4 != 179 && Var7.f_12 != 253603960)
	{
		if ((Var7 != 1119253406 && Var7 != -339889117) && Var7 != -1968468235)
		{
			bVar25 = Var7.f_9;
			if (Var7 == 193788635 || Var7 == -1198174119)
			{
				bVar26 = func_1706(uParam0);
				if (Var7.f_2 > 0)
				{
					Var27 = { func_1707(bVar26, (Var7.f_2 - 1), &(uParam0->f_2207)) };
					if (!func_1708(Var7.f_1) && func_1708(Var27))
					{
						bVar25 = Var7.f_1;
					}
					else
					{
						bVar25 = false;
					}
				}
				else
				{
					bVar25 = false;
				}
			}
			if (Var7 == 317179309)
			{
				if (func_1709(692350163, 0, 1, 0, 1) != 0 && !func_1711(func_1710(uParam0)))
				{
					func_1705(uParam0, 0, 1);
				}
				else
				{
					func_447(uParam0);
				}
			}
			else if (Var7 == -1594421938)
			{
				if (func_1709(675142260, 0, 1, 0, 1) != 0 && !func_1713(func_1712(uParam0)))
				{
					func_1705(uParam0, 0, 1);
				}
				else
				{
					func_447(uParam0);
				}
			}
			else if (Var7 == -1352600334)
			{
				Var31 = { func_1710(uParam0) };
				if (_0xb881ca836cc4b6d4(&Var31))
				{
					Var35.f_9 = -1591664384;
					func_1714(&Var31, &Var35);
					if (!func_785(&(Var35.f_24), 64))
					{
						func_1705(uParam0, -1724045811, 0);
					}
					else
					{
						func_447(uParam0);
					}
				}
				else
				{
					func_447(uParam0);
				}
			}
			else if (func_331(bVar25, 0))
			{
				bVar64 = false;
				if (((((((Var7 == -1502467280 || Var7 == 777890122) || Var7 == 1394581936) || Var7 == -853534656) || Var7 == -584027224) || Var7 == -87783305) || Var7 == -467661559) || Var7 == 848718617)
				{
					bVar64 = func_1687(uParam0, Var7.f_9, Var7);
				}
				else if (Var7 == -384358143)
				{
					Var65 = { func_772(bVar25, 0, 1) };
					iVar70 = func_1080(bVar25, &Var65, 0, 0);
					bVar64 = func_1715(bVar25, &Var65, iVar70, 0);
				}
				else if (Var7 == -1048755899)
				{
					if (bVar25 == -228768324 || bVar25 == 446901936)
					{
						bVar64 = func_1687(uParam0, bVar25, -1048755899);
					}
				}
				if (!bVar64 && !func_1716(bVar25))
				{
					func_1705(uParam0, bVar25, 0);
					func_1238(uParam0, bVar25, 0);
					func_1718(uParam0, (func_1717(uParam0, bVar25, Var7) && func_1415(bVar25)));
					if ((((Var7 == -239176093 || Var7 == 848718617) || Var7 == 1394581936) && !func_1397()) && func_1719(uParam0))
					{
						func_1721(uParam0, bVar25, func_1720());
						func_1722(uParam0, -1, bVar25, 0);
					}
				}
				else
				{
					func_447(uParam0);
					func_448(uParam0);
				}
			}
			else
			{
				func_447(uParam0);
				func_448(uParam0);
			}
		}
		else
		{
			func_447(uParam0);
			func_448(uParam0);
		}
	}
	else
	{
		func_447(uParam0);
		func_448(uParam0);
	}
	if (func_1017(func_764(Var7.f_9), 2))
	{
		func_1723(uParam0, &Var7);
	}
	else
	{
		func_1724(uParam0, &Var7);
	}
	if (func_1725() == -1352600334 && func_1236() != -1352600334)
	{
		_0xd962f8579d702db5();
	}
	func_1697(uParam0, Var7);
	return 1;
}

int func_1216(var uParam0)
{
	return 1;
}

int func_1217(var uParam0)
{
	iVar0 = func_1725();
	switch (iVar0)
	{
		case -239176093:
			_databinding_add_data_bool_by_hash(func_1726(), func_1727(), false);
			break;
	}
	if (func_1397())
	{
		func_1250(uParam0, func_1726(), &bVar1);
		func_1251(uParam0, bVar1);
	}
	func_1728(uParam0);
	func_1252(1);
	return 1;
}

void func_1218(var uParam0)
{
	iVar0 = func_1729();
	iVar1 = func_1730(uParam0);
	bVar2 = iVar0 != false;
	if (bVar2)
	{
		iVar1 = (iVar1 + iVar0);
		func_1731(uParam0, iVar1);
		func_1732(0);
	}
	func_1733(uParam0, func_1730(uParam0));
}

int func_1219()
{
	return Global_1915715->f_20241.f_3.f_18;
}

int func_1220(var uParam0)
{
	iVar0 = func_1734();
	iVar1 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2207.f_52, -804795275);
	iVar2 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2207.f_52, 1184271882);
	iVar2 = (iVar2 + iVar0);
	iVar2 = func_1735(iVar2, 1, iVar1);
	func_1736(uParam0, iVar2);
	return 1;
}

bool func_1221(var uParam0)
{
	iVar0 = func_1242();
	iVar1 = _databinding_read_data_int_from_parent(iVar0, func_1737());
	iVar2 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_1243());
	iVar3 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_1738());
	iVar4 = func_1734();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	_databinding_write_data_int_from_parent_by_hash(iVar0, func_1243(), iVar2);
	if (iVar1 == -395279071)
	{
		func_1739(uParam0, &iVar0, iVar2);
	}
	else if (iVar1 == -339889117)
	{
		bVar5 = false;
		switch (iVar2)
		{
			case 0:
				bVar5 = 1728382685;
				break;
			case 1:
				bVar5 = -649335959;
				break;
		}
		if (bVar5 != 0)
		{
			if (func_1740(func_1211(), bVar5, &iVar6, &iVar7))
			{
				_databinding_add_data_hash_by_hash(iVar0, func_1741(), iVar6);
				_databinding_add_data_hash_by_hash(iVar0, func_1742(), iVar7);
			}
			_databinding_write_data_hash_string_from_parent_by_hash(iVar0, func_1743(), bVar5);
			func_1744(uParam0, bVar5);
			if ((func_1189(uParam0) == -2144266389 || func_1189(uParam0) == 2057502022) || func_1189(uParam0) == 1275816411)
			{
				func_1745(uParam0, func_1211(), 0);
			}
			bVar8 = func_1211();
			if (_is_weapon_one_handed(bVar8))
			{
				bVar19 = true;
				bVar20 = true;
				bVar21 = true;
				iVar17 = -1610187846;
				iVar18 = 190417139;
				Var9 = { func_773(bVar8, func_768(0), bVar5, 0) };
				if (_0x6929e22158e52265(Global_34, 2, &uVar13))
				{
					if (func_1746(&Var9, &uVar13))
					{
						bVar19 = false;
						bVar20 = false;
					}
				}
				if (_0x6929e22158e52265(Global_34, 3, &uVar13))
				{
					if (func_1746(&Var9, &uVar13))
					{
						bVar19 = false;
						iVar18 = 165536584;
					}
				}
				if (!func_1344() || func_1747() < 2)
				{
					bVar21 = false;
				}
				func_1537(uParam0, 3, iVar17, bVar19, 1, 0);
				func_1537(uParam0, 2, iVar18, (bVar20 && bVar21), bVar21, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		func_1748(uParam0);
	}
	return true;
}

int func_1222()
{
	return Global_1915715->f_20241.f_3.f_36;
}

int func_1223(var uParam0)
{
	return uParam0->f_2207.f_78;
}

bool func_1224(var uParam0)
{
	if (is_pc_version())
	{
		iVar0 = func_1749(uParam0->f_3);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return func_1750(&(uParam0->f_2207));
}

int func_1225(bool bParam0, bool bParam1, bool bParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(bParam0, bParam1, &bVar0))
	{
		if (_item_database_get_shop_layout_menu_info_by_index(bParam0, bVar0, bParam2, &uVar7))
		{
			return uVar7;
		}
	}
	return -1;
}

bool func_1226(bool bParam0, bool bParam1, int iParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(bParam0, bParam1, &Var0))
	{
		return func_20(Var0.f_3, iParam2);
	}
	return false;
}

bool func_1227(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_1751(bParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(bParam1, bParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			bVar8 = -1;
			bVar9 = false;
			while (bVar9 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(bParam1, bParam2, bVar9, &bVar8))
				{
					if (!func_1752(uParam0, bParam1, bVar8))
					{
						bVar7 = true;
					}
					else
					{
						bVar9++;
					}
					if (!bVar7)
					{
						return true;
					}
					return false;
				}
			}
		}
	}
}

int func_1228(var uParam0, bool bParam1)
{
	if (bParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1222();
	if (iVar0 == -1)
	{
		_databinding_add_data_int(uParam0->f_2207.f_50, "ItemListEntryIndex", bParam1);
	}
	else if (_virtual_collection_exists(func_1222()))
	{
		_virtual_collection_set_interest_index(func_1222(), bParam1);
	}
	return 1;
}

void func_1229(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_58))
	{
		uParam0->f_2207.f_58 = _databinding_add_ui_item_list(uParam0->f_2207.f_50, "ItemList");
	}
	else
	{
		func_443(uParam0, &(uParam0->f_2207.f_58));
		_databinding_clear_binding_array(uParam0->f_2207.f_58);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_59))
	{
		_databinding_remove_data_entry(uParam0->f_2207.f_59);
	}
	uParam0->f_2207.f_59 = _databinding_add_data_container(uParam0->f_2207.f_50, "ItemListEntries");
	Global_1915715->f_20241.f_44 = uParam0->f_2207.f_58;
}

int func_1230()
{
	return Global_1915715->f_20241.f_3.f_39;
}

int func_1231()
{
	return Global_1915715->f_20241.f_3.f_38;
}

bool func_1232(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1189(uParam0);
	iVar1 = func_1223(uParam0);
	iVar2 = 0;
	if (iParam1 < 0)
	{
		iVar2 = (iVar1 + iParam1);
	}
	else
	{
		iVar2 = iParam1;
	}
	switch (iVar0)
	{
		case -996064024:
		case 1036144478:
		case 2057502022:
			if (uParam0->f_3 == 33)
			{
				return func_1753(uParam0, func_1188(uParam0), iVar2, iParam2);
			}
			else
			{
				return func_1754(uParam0, func_1188(uParam0), iVar2, iParam2);
			}
			break;
		case -2144266389:
		case -856183175:
		case -706012851:
		case -659372875:
		case -645366665:
		case -720046:
		case 115613670:
		case 178644271:
		case 1275816411:
		case 2092883099:
		case 2144984909:
			if (uParam0->f_3 == 33)
			{
				if (func_1210(uParam0) == -1081756941)
				{
					return func_1755(uParam0, 0, -1) > 0;
				}
				else if (func_1210(uParam0) == -918663084)
				{
					return func_1756(uParam0, 0, -1) > 0;
				}
			}
			return func_1757(uParam0, uParam0->f_2207.f_74, iVar2, iParam2, 0);
		case -252412307:
			return func_1757(uParam0, uParam0->f_2207.f_74, iVar2, iParam2, 1);
		case 310306577:
		case 1705401718:
			return func_1758(uParam0, iVar2, iParam2);
		case 1860655620:
			return func_1759(uParam0, iVar2, iParam2);
		case 94016929:
			return func_1760(uParam0, iVar2, iParam2);
		case 1426047132:
			return func_1761(uParam0, iVar2, iParam2);
		case 803749366:
			return func_1762(uParam0, iVar2, iParam2);
		case -440651963:
			return func_1763(uParam0, iVar2, iParam2);
		case 1013443471:
			return func_1764(uParam0, iVar2, iParam2);
		case 23814986:
			return func_1765(uParam0, iVar2, iParam2);
		case 253603960:
			return func_1766(uParam0, iVar2, iParam2);
		case -946221162:
			if (uParam0->f_3 == 33)
			{
				if (func_1188(uParam0) == 603940701)
				{
					return func_1767(uParam0, 0, 0) > 0;
				}
			}
			else
			{
				return func_1768(uParam0, 0, 0) > 0;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_1233()
{
	func_1203(1024);
}

void func_1234(var uParam0)
{
	iVar3 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (&uParam0->f_2767[iVar0] < 0)
		{
			return;
		}
		else if (&uParam0->f_2767[iVar0] > iVar3)
		{
			bVar1 = true;
		}
		else if (&uParam0->f_2767[iVar0] != 0)
		{
			bVar2 = true;
			uParam0->f_2767[iVar0] = 0;
		}
		iVar0++;
	}
	if (bVar2 && !bVar1)
	{
		func_448(uParam0);
		Global_1915715->f_20241.f_3.f_4 = 1;
	}
	if (uParam0->f_2207.f_103 && !_0x42095b886d30de66(1289756680))
	{
		uParam0->f_2207.f_103 = 0;
		if (func_181(uParam0->f_2207.f_102))
		{
			func_1769(uParam0->f_2207.f_102, 1, 0);
		}
		if (func_181(uParam0->f_2207.f_101))
		{
			func_1769(uParam0->f_2207.f_101, 1, 0);
		}
	}
}

bool func_1235(var uParam0)
{
	if (!func_181(uParam0->f_2207.f_102) || uParam0->f_2207.f_103)
	{
		return false;
	}
	return func_1770(uParam0->f_2207.f_102, 1);
}

int func_1236()
{
	iVar0 = _databinding_read_data_int_from_parent(func_1242(), func_1737());
	return iVar0;
}

int func_1237()
{
	iVar0 = _databinding_read_data_int_from_parent(func_1242(), func_1771());
	return iVar0;
}

int func_1238(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!func_331(bParam1, 0))
		{
			func_448(uParam0);
			return 0;
		}
		if (func_1772(bParam1))
		{
			func_448(uParam0);
			return 0;
		}
		if (func_1689(bParam1, 1))
		{
			func_448(uParam0);
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			bVar2 = func_1773(iVar0, 1, 1);
			bVar3 = func_1774(bParam1, bVar2, 0);
			if (func_331(bVar3, 0))
			{
				Var4 = { func_490(bVar3, 0) };
				if (func_1775(&Var4))
				{
					uParam0->f_2767[iVar1] = _0x4a606c17276e1bcc(&Var4);
					if (&uParam0->f_2767[iVar1] <= 0)
					{
						uParam0->f_2767[iVar1] = -1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < (8 - iVar1))
		{
			uParam0->f_2767[(iVar1 + iVar0)] = 0;
			iVar0++;
		}
		if (iVar1 == 0)
		{
			func_448(uParam0);
			return 0;
		}
	}
	if (!func_181(uParam0->f_2207.f_102))
	{
		uParam0->f_2207.f_102 = func_1776(_create_var_string(0, -1215798841), -1460216218, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_102), 18, 1);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_102), 17, 1);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_102), 14, 1);
		_0x958278b97c4affd8(func_1777(uParam0->f_2207.f_102), _0x066725a9d52b3641() + 1);
		_uiprompt_set_urgent_pulsing_enabled(func_1777(uParam0->f_2207.f_102), true);
		if (_is_app_active(1289756680) && _0x42095b886d30de66(1289756680))
		{
			uParam0->f_2207.f_103 = 1;
			func_1769(uParam0->f_2207.f_102, 0, 1);
		}
	}
	return 1;
}

bool func_1239(var uParam0)
{
	return func_181(uParam0->f_2207.f_102);
}

char* func_1240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ST_DOCTOR";
		case 3:
			return "ST_GENERAL";
		case 4:
			return "ST_FENCE";
		case 33:
			return "ST_MOONSHINE_STILL";
		case 6:
			return "ST_GUNSMITH";
		case 7:
			return "ST_TAILOR";
		case 8:
			return "ST_BARBER";
		case 1:
			return "ST_TRAIN_STATION";
		case 2:
			return "ST_POST_OFFICE";
		case 9:
			return "ST_HORSE_SHOP";
		case 10:
			return "ST_BUTCHER";
		case 11:
			return "ST_DYNAMIC";
		case 22:
			return "ST_QUARTERMASTER";
		case 23:
			return "ST_HORSE_TRAINER";
		case 24:
			return "ST_BLACKSMITH";
		case 25:
			return "ST_BOUNTYHUNTING_MP_RETURN";
		case 26:
			return "ST_COACH";
		case 12:
			return "ST_BANK";
		case 14:
			return "ST_BAIT";
		case 30:
			return "ST_BARTENDER";
		case 31:
			return "ST_PIANIST";
		case 32:
			return "ST_MUSICIAN";
		case 5:
			return "ST_HORSE_FENCE";
		case 15:
			return "ST_TRAPPER";
		case 16:
			return "ST_PEARSON";
		case 17:
			return "ST_HOTEL";
		case 27:
			return "ST_WILDERNESS_SUPPLIES";
		case 28:
			return "ST_CAMP_LOCKBOX";
		case 29:
			return "ST_CAMP_BUTCHERTABLE";
		case 34:
			return "ST_HANDHELD";
		case 19:
			return "ST_WEAPON_MOD_STORE";
		case 20:
			return "ST_CLOTHING";
		case 21:
			return "ST_CAMP_SHAVING";
		case 18:
			return "ST_PHOTO_STUDIO";
		case 35:
			return "ST_HONOR_MP";
		case 36:
			return "ST_THEATER_MP";
		case 38:
			return "ST_TRAVELLING_SALESMAN";
		case 37:
			return "ST_MOONSHINE_PROPERTY";
		case 39:
			return "ST_HARRIET";
		default:
			break;
	}
	return "UNDEFINED TYPE";
}

bool func_1241(bool bParam0)
{
	return func_485(bParam0) == -1784221369;
}

int func_1242()
{
	return Global_1915715->f_20241.f_3.f_13;
}

int func_1243()
{
	return 1999907591;
}

bool func_1244(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_1751(bParam1))
	{
		Var0.f_20 = 10;
		Var0.f_31 = 10;
		if (func_1521(bParam1, &Var0))
		{
			if (func_1778(bParam2, &Var0))
			{
				if (!uParam0->f_2207.f_69)
				{
					func_1653(&(uParam0->f_2207));
				}
				iVar44 = func_1523(&(uParam0->f_2207));
				bVar45 = func_1750(&(uParam0->f_2207));
				uVar46 = uParam0->f_2207.f_71;
				uVar47 = func_1779(&(uParam0->f_2207));
				iVar48 = func_1248();
				if (bParam3 != -1)
				{
					if (func_1778(bParam3, &Var0))
					{
						uParam0->f_2207.f_71 = bParam3;
					}
					else
					{
						return false;
					}
				}
				else if (func_1780(bParam1, bParam2, &uVar49))
				{
					uParam0->f_2207.f_71 = uVar49;
				}
				else
				{
					return false;
				}
				uParam0->f_2207 = { Var0 };
				func_1520(uParam0, uParam0->f_20);
				iVar50 = 0;
				if (func_1781(uParam0, bParam2, &iVar50))
				{
					if (bParam4)
					{
						if (func_1209(&(uParam0->f_2207)))
						{
							uParam0->f_2207.f_79 = iVar50;
							if (!func_1269())
							{
							}
						}
						else
						{
							func_1782(uParam0);
						}
					}
					if (bParam5)
					{
						func_1783(uParam0);
						uParam0->f_2207.f_121 = 1;
						uParam0->f_2207.f_121.f_1 = 1;
						uParam0->f_2207.f_121.f_2 = iVar44;
						uParam0->f_2207.f_121.f_3 = bVar45;
						uParam0->f_2207.f_121.f_4 = uVar46;
						uParam0->f_2207.f_121.f_5 = uVar47;
						uParam0->f_2207.f_121.f_6 = iVar48;
						if (bParam3 != -1)
						{
							uParam0->f_2207.f_121.f_7 = bParam3;
						}
						else
						{
							uParam0->f_2207.f_121.f_7 = bParam2;
						}
						uParam0->f_2207.f_121.f_8 = bParam1;
					}
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1245(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_58))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(uParam0->f_2207.f_58);
	bVar1 = false;
	bVar2 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar3 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, bVar1);
		func_1250(uParam0, iVar3, &bVar2);
		bVar1++;
	}
	func_1251(uParam0, bVar2);
	return true;
}

bool func_1246(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_60))
	{
		return false;
	}
	iVar0 = uParam0->f_2207.f_73;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 < iVar0)
	{
		iVar2 = _databinding_get_item_context_by_index(uParam0->f_2207.f_60, bVar1);
		if (_databinding_is_data_id_valid(iVar2))
		{
			func_1784(&Var3, &iVar2);
			if (!func_1785(uParam0, Var3, Var3.f_3, Var3.f_1, &iVar2, 0))
			{
			}
		}
		bVar1++;
	}
	return true;
}

bool func_1247(var uParam0, int iParam1)
{
	*iParam1 = 0;
	iVar0 = func_1189(uParam0);
	switch (iVar0)
	{
		case -996064024:
		case 1036144478:
		case 2057502022:
			if (!func_1786(uParam0, func_1188(uParam0), iParam1))
			{
			}
			return true;
		case -2144266389:
		case -856183175:
		case -706012851:
		case -659372875:
		case -645366665:
		case -252412307:
		case -720046:
		case 115613670:
		case 178644271:
		case 1275816411:
		case 2092883099:
		case 2144984909:
			if (uParam0->f_3 == 33)
			{
				if (func_1210(uParam0) == -1081756941)
				{
					*iParam1 = func_1755(uParam0, 1, -1);
					return true;
				}
				else if (func_1210(uParam0) == -918663084)
				{
					*iParam1 = func_1756(uParam0, 1, -1);
					return true;
				}
			}
			if (!func_1787(uParam0, uParam0->f_2207.f_74, iParam1))
			{
			}
			return true;
		case 310306577:
		case 1705401718:
			*iParam1 = func_1788(&(uParam0->f_2207));
			return true;
		case 1860655620:
			*iParam1 = func_1789(0);
			return true;
		case 94016929:
			*iParam1 = func_1790(0, &(uParam0->f_2207));
			if (*iParam1 <= 0)
			{
			}
			return true;
		case 1426047132:
			*iParam1 = func_1790(0, &(uParam0->f_2207));
			if (*iParam1 <= 0)
			{
			}
			return true;
		case 803749366:
			*iParam1 = func_1791(0);
			return true;
		case 1013443471:
			return true;
		case 23814986:
			return true;
		case 253603960:
			*iParam1 = (*iParam1 + func_1792(uParam0, 1, -1));
			*iParam1 = (*iParam1 + func_1793(uParam0, 1045621973, 1, -1, 0));
			*iParam1 = (*iParam1 + func_1793(uParam0, 1583044470, 1, -1, 0));
			*iParam1 = (*iParam1 + func_1793(uParam0, 1005272, 1, -1, 0));
			*iParam1 = (*iParam1 + func_1793(uParam0, 1463321587, 1, -1, 0));
			*iParam1 = (*iParam1 + func_1793(uParam0, 348853959, 1, -1, 0));
			return true;
		case -946221162:
			if (uParam0->f_3 == 33)
			{
				if (func_1188(uParam0) == 603940701)
				{
					*iParam1 = func_1767(uParam0, 1, -1);
					return true;
				}
			}
			else
			{
				*iParam1 = func_1768(uParam0, 1, -1);
				return true;
			}
			break;
		case -440651963:
			iVar1 = 0;
			while (iVar1 < 6)
			{
				if (func_1794(iVar1))
				{
					*iParam1++;
				}
				iVar1++;
			}
			return true;
		case -1548684311:
		case 1965673387:
			return false;
	}
	return false;
}

int func_1248()
{
	return Global_1915715->f_20241.f_3.f_11;
}

int func_1249(var uParam0, int iParam1, bool bParam2)
{
	if (!_virtual_collection_exists(func_1222()))
	{
		return 0;
	}
	_virtual_collection_reset(func_1222());
	if (iParam1 >= 0)
	{
		uParam0->f_2207.f_119 = iParam1;
	}
	if (bParam2)
	{
		func_1782(uParam0);
	}
	return 1;
}

void func_1250(var uParam0, int iParam1, bool bParam2)
{
	if (_databinding_is_data_id_valid(iParam1))
	{
		func_1784(&Var5, &iParam1);
		switch (Var5.f_1)
		{
			case -1968468235:
				iVar0 = _databinding_read_data_hash_string_from_parent(iParam1, func_1795());
				iVar3 = iVar0;
				iVar1 = _databinding_read_data_hash_string_from_parent(iParam1, func_1796());
				iVar4 = iVar1;
				bVar2 = _databinding_read_data_hash_string_from_parent(iParam1, func_1797());
				func_1798(uParam0, Var5.f_2, &iParam1, 0, iVar3, iVar4, bVar2);
				break;
			case 336033112:
				func_1799(uParam0, Var5.f_2, &iParam1);
				break;
			case -1499658354:
				func_1800(uParam0, Var5.f_2, &iParam1);
				break;
			case 193788635:
				if (!func_1801(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -1198174119:
				if (!func_1802(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case 1119253406:
				if (!func_1803(uParam0, Var5.f_2, Var5.f_5, &iParam1, 0))
				{
					return;
				}
				break;
			case 1837492866:
				*bParam2 = 1;
				if (!func_1804(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -1080155519:
				if (!func_1805(uParam0, Var5, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -760956867:
				if (!func_1806(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 38807286:
				if (!func_1807(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -339889117:
				if (!func_1808(uParam0, Var5, Var5.f_3, Var5.f_4, &iParam1, 0))
				{
					return;
				}
				break;
			case -395279071:
				if (!func_1809(uParam0, _databinding_read_data_int_from_parent(iParam1, func_1771()), &iParam1))
				{
					return;
				}
				break;
			case -348190488:
				if (!func_1810(uParam0, Var5, Var5.f_3, Var5.f_4, &iParam1, 0))
				{
					return;
				}
				break;
			case -384358143:
				if (func_1017(func_764(Var5), 2))
				{
					if (!func_1811(uParam0, func_764(Var5), &iParam1))
					{
						return;
					}
				}
				else if (func_331(Var5, 0))
				{
					if (!func_1813(uParam0, Var5, func_1812(Var5, 0), &iParam1))
					{
						return;
					}
				}
				break;
			case 1425890997:
				if (!func_1814(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1395073769:
				if (!func_1815(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -853534656:
				if (!func_1816(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -349391286:
				Var5.f_1 = func_1817(uParam0, Var5);
				if (Var5.f_1 != -349391286)
				{
					_databinding_add_data_int(iParam1, func_1737(), Var5.f_1);
					func_1250(uParam0, iParam1, bParam2);
					return;
				}
				else if (!func_1818(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 2036169888:
				if (!func_1819(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1086794738:
				if (!func_1820(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1928601151:
				if (!func_1821(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 1850514202:
				if (!func_1822(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -239176093:
				if (!func_1823(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 848718617:
				if (!func_1824(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 1394581936:
				if (!func_1825(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 777890122:
				if (!func_1826(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1502467280:
				if (!func_1827(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -584027224:
				if (!func_1828(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -87783305:
				if (!func_1829(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 761079318:
				if (!func_1830(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -2056428614:
				if (!func_1831(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 753463028:
				if (!func_1832(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 1942587409:
				if (!func_1833(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 2077448405:
				if (!func_1834(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -1048755899:
				Var16 = { func_772(Var5, 0, 1) };
				iVar21 = func_1080(Var5, &Var16, 0, 0);
				bVar22 = func_1715(Var5, &Var16, iVar21, 0);
				if (!func_1835(uParam0, Var5, iVar21, bVar22, &iParam1))
				{
					return;
				}
				break;
			case -1352600334:
				if (!func_1836(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -772187037:
				if (!func_1837(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -2092532275:
				if (!func_1838(uParam0, &iParam1))
				{
					return;
				}
				break;
			case 317179309:
				if (!func_1839(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -1594421938:
				if (!func_1840(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -698448975:
				bVar23 = _databinding_read_data_int_from_parent(iParam1, func_1771());
				if (!func_1841(bVar23))
				{
					return;
				}
				if (!func_1842(uParam0, bVar23, &iParam1))
				{
					return;
				}
				break;
			case -627085098:
				if (!func_1843(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -841939068:
				if (!func_1844(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case 1751567119:
				if (!func_1845(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -467661559:
				if (!func_1846(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
		}
	}
	if (func_1189(uParam0) == -252412307)
	{
		if (!func_1847(uParam0, Var5, Var5.f_1, &iParam1, 0))
		{
			return;
		}
	}
}

void func_1251(var uParam0, bool bParam1)
{
	if (func_1189(uParam0) == 94016929)
	{
		if (bParam1)
		{
			if (func_1848() == 0 && func_1849() != 5)
			{
				func_1249(uParam0, -1, 1);
			}
		}
		else if (func_1848() != 0 || (func_1848() == 0 && func_1849() == 5))
		{
			func_1249(uParam0, -1, 1);
		}
	}
}

void func_1252(int iParam0)
{
	Global_1915715->f_20241.f_3.f_6 = iParam0;
}

void func_1253()
{
	Global_1915715->f_20241.f_3.f_4 = 1;
}

bool func_1254(var uParam0, int iParam1)
{
	return func_20(uParam0->f_2207.f_45, iParam1);
}

void func_1255(var uParam0)
{
	uParam0->f_2207.f_83 = 1;
}

bool func_1256(var uParam0)
{
	return uParam0->f_2207.f_83;
}

void func_1257(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_2207.f_163 && (iParam1 == 1 || iParam1 == 7))
	{
		return;
	}
	bVar0 = func_1850(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1661(iParam1, bVar0), bParam2);
}

void func_1258(var uParam0)
{
	bVar0 = func_1236();
	bVar1 = func_1211();
	iVar2 = func_1242();
	if (bVar0 == 1119253406)
	{
		return;
	}
	if (bVar0 == 193788635 || bVar0 == -1198174119)
	{
		bVar1 = func_1237();
	}
	else if (bVar0 == 317179309)
	{
		bVar1 = 692350163;
	}
	else if (bVar0 == -1594421938)
	{
		bVar1 = 675142260;
	}
	else if (bVar0 == -1352600334)
	{
		bVar1 = -1724045811;
	}
	if (!func_331(bVar1, 0))
	{
		if (func_1397())
		{
			func_736(0);
		}
		return;
	}
	bVar3 = func_1717(uParam0, bVar1, bVar0);
	bVar3 = (bVar3 && func_1081(&(uParam0->f_2160), 0));
	if (!func_1686())
	{
		if (func_1851(bVar1, &iVar4))
		{
			if (!func_844(iVar4, -570078785, &uVar5, 1, 0))
			{
				bVar3 = false;
			}
		}
		else if (func_810(bVar1, -570078785))
		{
			if (!func_1852(bVar1, 1, -570078785, 1))
			{
				bVar3 = false;
			}
		}
	}
	bVar10 = func_1851(bVar1, &uVar9);
	if (func_1853(bVar1))
	{
		if (func_1854(uParam0))
		{
			if (!func_1397())
			{
				func_736(1);
				func_1855(Global_1051439->f_3258, bVar1, &Var11);
				if (Var11.f_1 != 0 && Var11 != 0)
				{
					if (func_1686() || func_1077(Var11.f_3))
					{
						_databinding_add_data_bool(iVar2, func_1856(), true);
					}
					func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_OFFER_WITH_GOLD", func_1857(Var11.f_3)), 1, 1, 1);
					func_1702(&uVar15, uParam0);
					func_1724(uParam0, &uVar15);
					func_1859(uParam0, bVar1);
				}
			}
		}
		else if (func_1397())
		{
			func_736(0);
			func_1860();
		}
	}
	else if (func_1684(bVar1))
	{
		bVar8 = func_1861(bVar1, 0, 1, -1, 1);
		bVar7 = func_1709(bVar1, bVar8, 1, 0, 1);
		if (func_1189(uParam0) == 310306577)
		{
			bVar7 = func_1265(uParam0, &bVar33, 0, 1);
			if (bVar33)
			{
				bVar3 = false;
			}
			else if (!func_1077(bVar7 * 100) && !func_1686())
			{
				bVar3 = false;
			}
		}
		else if (func_1691(bVar1))
		{
			bVar3 = !func_1692(uParam0, bVar1);
		}
		if (bVar10)
		{
			if (func_1854(uParam0))
			{
				if (!func_1397())
				{
					func_736(1);
				}
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_NOW_WITH_GOLD", bVar7), bVar3, 1, 1);
			}
			else if (func_1397())
			{
				func_736(0);
				func_1860();
			}
		}
		else if ((!func_1693(bVar1, bVar8, 1) && func_1415(bVar1)) && bVar3)
		{
			if (!func_1719(uParam0) && func_1862(bVar1, 1))
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", bVar7, func_1863(bVar1, 1)), bVar7 > 0, 1, 1);
			}
			else if (func_1864(bVar8))
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_OFFER_WITH_GOLD", bVar7), bVar7 > 0, 1, 1);
			}
			else
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", bVar7), bVar7 > 0, 1, 1);
			}
		}
		if (func_1189(uParam0) != 310306577)
		{
			if (func_1719(uParam0))
			{
				func_1722(uParam0, -1, bVar1, 0);
			}
		}
	}
	else if (func_1854(uParam0))
	{
		if (!func_1397())
		{
			func_736(1);
		}
		bVar8 = func_1861(bVar1, 0, 1, -1, 1);
		bVar7 = func_1709(bVar1, bVar8, 1, 0, 1);
		bVar34 = false;
		if (bVar3)
		{
			if ((bVar1 == -862059856 || func_459(bVar1) == -186198417) || func_459(bVar1) == 1528977929)
			{
				bVar34 = !func_1865(uParam0, bVar1);
				bVar3 = !bVar34;
			}
		}
		if (!func_1393(&(uParam0->f_2160)))
		{
			if (bVar10)
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_NOW_WITH_GOLD", bVar7), bVar3, 1, 1);
			}
			else if (!func_1719(uParam0) && func_1862(bVar1, 1))
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", bVar7, func_1863(bVar1, 1)), bVar3, 1, 1);
			}
			else
			{
				func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", bVar7), bVar3, 1, 1);
			}
		}
		if (func_1189(uParam0) == 310306577)
		{
			bVar7 = func_1265(uParam0, &bVar35, 0, 1);
			if (func_1719(uParam0))
			{
				iVar36 = func_1265(uParam0, &bVar35, 0, 0);
				Var37 = -1;
				Var37.f_1 = -1;
				Var37.f_2 = -1;
				Var37.f_4 = 1;
				Var37.f_5 = -1;
				Var37.f_7 = -1;
				Var37.f_1 = bVar7;
				Var37.f_2 = iVar36;
				Var37.f_3 = 1;
				if (func_1866(uParam0, bVar1))
				{
					Var37.f_4 = 0;
					if (func_1867(bVar1, &iVar45, &uVar46, 1) && iVar45 == 0)
					{
						Var37.f_5 = uVar46;
					}
				}
				if (bVar35)
				{
					Var37.f_7 = -298752054;
					Var37.f_4 = 0;
				}
				func_1868(uParam0, &Var37);
			}
			bVar47 = (func_1077(bVar7 * 100) && !bVar35);
			bVar3 = (((!bVar47 && !bVar35) && func_1686()) || bVar47);
			if (!func_1393(&(uParam0->f_2160)))
			{
				if (!func_1719(uParam0) && func_1862(bVar1, 1))
				{
					func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", bVar7, func_1863(bVar1, 1)), bVar3, 1, 1);
				}
				else
				{
					func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", bVar7), bVar3, 1, 1);
				}
			}
		}
		else
		{
			_databinding_add_data_bool(iVar2, "useGoldPrice", true);
			if ((bVar0 != 848718617 && !bVar34) && !func_1719(uParam0))
			{
				_databinding_add_data_bool(iVar2, "forSale", func_1415(bVar1));
			}
			_databinding_add_data_int(iVar2, "price", bVar7);
			bVar48 = (bVar3 && func_1415(bVar1));
			if (func_459(bVar1) == -1895880220 || func_459(bVar1) == 1099996440)
			{
				bVar48 = false;
			}
			_databinding_add_data_bool(iVar2, func_1856(), bVar48);
			_databinding_add_data_bool_by_hash(iVar2, func_1727(), bVar48);
			func_1869(uParam0, bVar48);
			func_1702(&uVar49, uParam0);
			func_1724(uParam0, &uVar49);
			if (func_1236() == -239176093)
			{
				func_1537(uParam0, 5, -1451828257, 1, 1, 0);
			}
			if (func_1719(uParam0))
			{
				func_1722(uParam0, -1, bVar1, 0);
			}
		}
	}
	else if (func_1397())
	{
		func_736(0);
		func_1860();
	}
}

bool func_1259(bool bParam0)
{
	return func_459(bParam0) == -712836614;
}

int func_1260(var uParam0)
{
	iVar0 = func_1190(uParam0);
	if (does_entity_exist(iVar0))
	{
		Var1 = { func_1870() };
		Var5.f_9 = -1591664384;
		if (func_1023(Var1, &Var5, 0, 0, -1))
		{
			func_1871(uParam0, Var1);
		}
		else
		{
			Var19 = { func_1710(uParam0) };
			Var23 = { func_1872(&Var19, 0) };
			func_1873(&Var23, &uVar47);
			func_1874(&Var23, &Var55);
			if (Var55 == -377364164 || Var55.f_1 == 357708345)
			{
				_0xa5bae410b03e7371(iVar0, 0, 0, 1);
				func_1875(iVar0, &Var55, &uVar47, 0, 1);
				bVar57 = func_1876(Var19, -653439684, 0, -1);
				if (bVar57 == -388128145)
				{
					func_1877(iVar0, 1);
				}
				else
				{
					func_1877(iVar0, 2);
				}
			}
			else
			{
				func_1878(&Var19, iVar0);
			}
		}
		func_1879(uParam0);
	}
	return 1;
}

bool func_1261(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_569(0))
	{
		return func_1880(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1023(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_489(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1262(bool bParam0)
{
	if (func_459(bParam0) == -126813555 || func_459(bParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

void func_1263(int iParam0, var uParam1)
{
	if (func_1881(iParam0, &uVar0))
	{
		Var4 = -1;
		Var4.f_4.f_7 = -142743235;
		Var4.f_4.f_16 = -1;
		func_1882(iParam0, &Var4);
		Var25 = { Var4.f_4 };
		iVar42 = Global_1915715->f_20241.f_3.f_35;
		uVar43 = Var25.f_16;
		_0x621d719c4836292b(&uVar0, func_1883(iVar42), iVar42, uVar43, uParam1, func_1884());
	}
	func_1264();
}

void func_1264()
{
	if (Global_1915715->f_20241.f_3.f_35 != 0)
	{
		Global_1915715->f_20241.f_3.f_35 = 0;
	}
}

int func_1265(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 1;
	if (uParam0->f_2207.f_164 > 0)
	{
		*bParam1 = 0;
		bVar0 = false;
		if (bParam2)
		{
			bVar0 = -570078785;
		}
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < uParam0->f_2207.f_164)
		{
			if (!(func_810(&(uParam0->f_2207.f_164.f_1[iVar2]), 59806960) && func_1397()))
			{
				iVar1 = (iVar1 + func_1709(&(uParam0->f_2207.f_164.f_1[iVar2]), bVar0, 1, 0, bParam3));
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

void func_1266(int iParam0, int iParam1, int iParam2)
{
	Global_1051439->f_4466.f_3 = iParam0;
	Global_1051439->f_4466.f_4 = iParam1;
	Global_1051439->f_4466.f_5 = iParam2;
}

bool func_1267(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		Var0.f_2 = 0;
		Var0.f_3 = get_hash_key("SHOP_YES");
		Var0.f_3.f_3 = 0;
		Var0.f_7 = get_hash_key("SHOP_NO");
		Var0.f_3.f_3 = 0;
		func_1885(&Var0);
		*uParam0 = func_1886(&Var0, "GLOBAL_ALERT_DEFAULT", "WARDROBE_WARNING_INTRO_EXIT", 0, 0, 1);
	}
	else if (is_control_just_pressed(2, -186823577))
	{
		_0x00a15b94cba4f76f(*uParam0);
		*uParam0 = 0;
		*bParam1 = 1;
		return true;
	}
	else if (is_control_just_pressed(2, 217814591))
	{
		_0x00a15b94cba4f76f(*uParam0);
		*uParam0 = 0;
		*bParam1 = 0;
		return true;
	}
	return false;
}

void func_1268(var uParam0, int iParam1)
{
	func_106(&(uParam0->f_2207.f_45), iParam1);
}

bool func_1269()
{
	return _request_uiapp_transition_by_hash(1289756680, 677247760);
}

var func_1270(var uParam0)
{
	return uParam0->f_42;
}

void func_1271(var uParam0)
{
	if (uParam0->f_2506.f_7 == 0)
	{
		return;
	}
	_hide_hud_component(uParam0->f_2506.f_5);
	switch (uParam0->f_2506.f_7)
	{
		case 2:
			if (!func_1555(uParam0->f_2506.f_6, &(uParam0->f_2506.f_16), 0))
			{
			}
			else
			{
				if (func_1330(4, uParam0->f_2506.f_16))
				{
					Var16 = { func_1887(uParam0->f_2506.f_16) };
				}
				else
				{
					StringCopy(&Var16, _get_label_text_by_hash(uParam0->f_2506.f_6), 64);
				}
				if (func_1888(&Var16, "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					func_1889(Var8, uParam0->f_2506.f_16);
					func_454(1048576);
					Global_1915715->f_20241.f_3.f_4 = 1;
				}
				uParam0->f_2506.f_7 = 0;
				Jump @348; //curOff = 201
				if (func_1888(_get_label_text_by_hash(uParam0->f_2506.f_6), "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					func_1889(Var8, uParam0->f_2506.f_16);
					func_1890(uParam0, 0);
					Global_1952637->f_1675 = uParam0->f_2506.f_6;
					func_1891(uParam0->f_2506.f_16, 0, 1, 6);
					func_1554(uParam0->f_2506.f_6, 0);
					func_1892(uParam0->f_2506.f_6);
					func_454(1048576);
					Global_1915715->f_20241.f_3.f_4 = 1;
				}
				uParam0->f_2506.f_7 = 0;
			}
			_display_hud_component(uParam0->f_2506.f_5);
			default:
				break;
	}
}

void func_1272(var uParam0)
{
	if (func_210(&(uParam0->f_2506), 8) && func_210(&(uParam0->f_2506), 16))
	{
		uParam0->f_2506.f_10 = 1256619963;
		func_1562(&(uParam0->f_2506), 8);
	}
	if (uParam0->f_2506.f_11 == uParam0->f_2506.f_10)
	{
		return;
	}
	else if (!func_210(&(uParam0->f_2506), 32))
	{
		animpostfx_play("CamTransitionBlink");
		uParam0->f_2506.f_18 = get_game_timer();
		func_913(&(uParam0->f_2506), 32);
		func_454(134217728);
	}
	if ((get_game_timer() - uParam0->f_2506.f_18) < 120)
	{
		return;
	}
	uParam0->f_2506.f_21 = func_1893(uParam0);
	uParam0->f_2506.f_21 = ((uParam0->f_2506.f_21 + 180f) % 360f);
	uParam0->f_2506.f_11 = uParam0->f_2506.f_10;
	set_anim_scene_origin(uParam0->f_2506.f_14, uParam0->f_2506.f_27, 0f, 0f, uParam0->f_2506.f_21, 0);
	func_1562(&(uParam0->f_2506), 32);
	func_1562(&(uParam0->f_2506), 16);
	func_208(134217728);
}

int func_1273(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_933(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_933(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_1274(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_1894(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_442(iParam0);
			return;
		}
		_0x51951de06c0d1c40(iParam0, 2);
		Global_1071686->f_21416.f_1[iVar0] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = int_to_playerindex(iVar2);
			if (iVar2 != &Global_1296859 && network_is_player_active(iVar3))
			{
				if (_0x81fb74c83c2ed69f(iVar3))
				{
					if (bParam3)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_0x3f59fe6f37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						_0x31010318ba9897ac(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1274(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1895(&Var6, uVar4);
		}
	}
}

void func_1275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

bool func_1276(var uParam0, int iParam1)
{
	if (func_935(uParam0, iParam1) || network_does_network_id_exist(&(uParam0->f_9[iParam1])))
	{
		return false;
	}
	return true;
}

bool func_1277(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	vVar0 = { func_397(iParam0) };
	iVar3 = _create_volume_sphere(vVar0, 0f, 0f, 0f, 100f, 100f, 100f);
	iVar4 = create_itemset(false);
	iVar5 = _0x84ccf9a12942c83d(iVar3, iVar4, 1, 1, 0, "iCampFollowerCamp");
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (iVar5 - 1))
	{
		iVar6 = _get_entity_from_item(get_indexed_item_in_itemset(iVar7, iVar4));
		if (does_entity_exist(iVar6) && decor_get_int(iVar6, "iCampFollowerCamp") == iParam0)
		{
			*iParam1 = iVar6;
		}
		else
		{
			iVar7++;
		}
	}
	_delete_volume(iVar3);
	destroy_itemset(iVar4);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	return true;
}

void func_1278(int iParam0)
{
	Var0.f_8 = iParam0;
	func_515(1, Var0, func_514(0, 8));
}

char* func_1279()
{
	return "CRIPPS";
}

Vector3 func_1280(vector3 vParam0, float fParam3, float fParam4)
{
	vVar0 = { get_random_float_in_range(-1f, 1f), get_random_float_in_range(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_1896(vVar0, get_random_float_in_range(0f, fParam3)) };
	vVar0.f_2 = get_random_float_in_range(-fVar3, fVar3);
	return vParam0 + vVar0;
}

bool func_1281(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_1282(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1283(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

bool func_1284(bool bParam0)
{
	iVar0 = _get_weapon_unlock(bParam0);
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

bool func_1285(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(bParam0))
	{
		return false;
	}
	if (_is_weapon_melee(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, bParam0, 0, false))
	{
		Var0 = { func_772(bParam0, 0, 1) };
		if (func_1019(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1020(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_773(bParam0, Var0, Var0.f_4, 0) };
				func_816(bParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_569(0))
	{
		_give_weapon_to_ped_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, bParam0, 0, false))
		{
			return false;
		}
		func_1897(_get_ammo_type_for_weapon(bParam0), iParam1, iParam6);
		func_1898(bParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, bParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

void func_1286(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
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

bool func_1287(bool bParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(bParam0));
}

void func_1288(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		func_1900(uParam0, iParam2, func_1899(uParam0, uParam1));
	}
	else
	{
		func_1900(uParam0, iParam2, func_1901(uParam1, iParam2));
	}
}

void func_1289(var uParam0, var uParam1, int iParam2)
{
	if (!func_252(uParam0, 16))
	{
		if (iParam2 == 0)
		{
			func_1900(uParam0, iParam2, func_1899(uParam0, uParam1));
		}
		else
		{
			func_1900(uParam0, iParam2, func_1901(uParam1, iParam2));
		}
	}
}

void func_1290(var uParam0, var uParam1, int iParam2)
{
	if (func_252(uParam0, 16))
	{
		func_1900(uParam0, iParam2, 1);
	}
	else
	{
		iVar0 = func_1899(uParam0, uParam1);
		if (iVar0 != 2)
		{
			func_1900(uParam0, iParam2, iVar0);
		}
	}
}

void func_1291(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 != 0)
	{
		func_1900(uParam0, iParam2, 0);
	}
	if (func_252(uParam0, 16))
	{
		func_1900(uParam0, iParam2, 1);
		if (func_252(uParam0, 1024))
		{
			func_402(uParam0, 1024);
		}
		if (func_416(&(uParam1->f_25[iParam2]->f_5)))
		{
			func_422(&(uParam1->f_25[iParam2]->f_5));
		}
	}
	else
	{
		bVar0 = false;
		iVar1 = net_to_ped(&(uParam0->f_9[iParam2]));
		if (func_416(&(uParam1->f_25[iParam2]->f_5)))
		{
			if (_0x0c3cb2e600c8977d(iVar1, 1))
			{
				func_1902(&(uParam1->f_25[iParam2]->f_5));
			}
			else
			{
				func_1903(&(uParam1->f_25[iParam2]->f_5));
			}
		}
		if (_does_scenario_point_exist(uParam1->f_19.f_1) && !func_1383(uParam1->f_19.f_1, 0))
		{
			bVar0 = true;
		}
		else if (func_416(&(uParam1->f_25[iParam2]->f_5)))
		{
			if (func_418(&(uParam1->f_25[iParam2]->f_5)) > uParam1->f_25[iParam2]->f_11 && !is_ped_active_in_scenario(iVar1, 1))
			{
				bVar0 = true;
			}
		}
		if (func_252(uParam0, 1024))
		{
			if (!func_416(&(uParam1->f_25[iParam2]->f_5)))
			{
				func_417(&(uParam1->f_25[iParam2]->f_5));
			}
			if (func_416(&(uParam1->f_25[iParam2]->f_5)))
			{
				if (func_418(&(uParam1->f_25[iParam2]->f_5)) > uParam1->f_25[iParam2]->f_12 && is_ped_active_in_scenario(iVar1, 1))
				{
					func_402(uParam0, 1024);
					iVar2 = func_1899(uParam0, uParam1);
					func_422(&(uParam1->f_25[iParam2]->f_5));
					iVar3 = func_1382(uParam0, uParam1, iVar2);
					if (func_1383(iVar3, 0))
					{
						iVar4 = func_1899(uParam0, uParam1);
						if (iVar4 != uParam0->f_9[iParam2]->f_3)
						{
							func_1900(uParam0, iParam2, iVar2);
						}
					}
					else
					{
						func_398(uParam0, 1024);
						func_417(&(uParam1->f_25[iParam2]->f_5));
					}
				}
			}
		}
		else if (bVar0)
		{
			if (!func_252(uParam0, 1024))
			{
				func_398(uParam0, 1024);
				func_1900(uParam0, iParam2, 12);
				func_422(&(uParam1->f_25[iParam2]->f_5));
			}
		}
		else
		{
			if (func_252(uParam0, 1024))
			{
				func_402(uParam0, 1024);
			}
			iVar5 = func_1899(uParam0, uParam1);
			if (iVar5 != uParam0->f_9[iParam2]->f_3)
			{
				func_1900(uParam0, iParam2, iVar5);
			}
		}
	}
}

int func_1292(int iParam0)
{
	if (!func_46(iParam0))
	{
		return 0;
	}
	return Global_1132288->f_1[iParam0]->f_3;
}

var func_1293(int iParam0)
{
	iVar0 = func_1905(0, (func_1904() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1906(iVar0);
}

bool func_1294(int iParam0)
{
	if ((iParam0 == 1493442814 || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_1295(int iParam0)
{
	return iParam0 == -1005911451;
}

bool func_1296(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

int func_1297(int iParam0)
{
	if (!func_1296(iParam0))
	{
		return 0;
	}
	return Global_1139381->f_11[iParam0]->f_2;
}

int func_1298(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1907(iParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

bool func_1299(bool bParam0)
{
	if (func_485(bParam0) == 2085633299 && _0x245d07651b1d183b(bParam0, 16777216))
	{
		return true;
	}
	return false;
}

bool func_1300()
{
	return (func_1908(0) && func_1908(1));
}

int func_1301(int iParam0)
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

int func_1302(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1909(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_50[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_50[iParam0]);
		default:
			break;
	}
	return 1;
}

int func_1303(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

int func_1304(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2843.f_1)
	{
		if (&Global_1952637->f_2843.f_43[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1305(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_1306(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

int func_1307(int iParam0, int iParam1)
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
			return 735520874;
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

bool func_1308(bool bParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 && iParam1) != 0;
}

void func_1309(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1910(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_1310(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1311(bool bParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 && iParam1));
}

int func_1312(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(bParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

int func_1313(int iParam0)
{
	Var2 = -961687407;
	if (func_41() == -1)
	{
		Var2 = 1444744190;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	if (!_0xed4413cee1bf142c(&Var2))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
	{
		return 0;
	}
	iVar1 = func_1911(iParam0);
	func_1912(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_1912(iVar0, iVar1);
		}
	}
	return 1;
}

int func_1314(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_2897)
	{
		if (&Global_1952637->f_2897.f_2[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1315(bool bParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1335(bParam0, 1)])->f_11 || iParam1);
}

bool func_1316(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1317(bool bParam0)
{
	if (bParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_1318(bool bParam0)
{
	if (bParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_481(bParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_481(bParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_481(bParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_1319(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1 || (*uParam0)[iVar0]->f_17 == 0)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1320(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_1319(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_1321(uParam0, uParam1, iVar0);
	return 1;
}

void func_1321(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*(*uParam1)[iVar0] = { *((*uParam1)[iVar0 + 1]) };
			(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 1);
			iVar0++;
		}
	}
}

bool func_1322(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = bParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_1913(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = bParam1;
	if (bParam2)
	{
		func_1914(uParam0, bParam3);
	}
	return true;
}

void func_1323(var uParam0, var uParam1, var uParam2)
{
	if ((!func_1316(uParam0, 1) || func_1316(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1915(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1319(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_1916(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_1917(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

int func_1324(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1322(&Var0, bParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*(*uParam1)[uParam0->f_6] = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if ((*uParam1)[iVar18]->f_1 < ((*uParam1)[(iVar18 - 1)])->f_1)
		{
			Var19 = { *(*uParam1)[iVar18] };
			*(*uParam1)[iVar18] = { *((*uParam1)[(iVar18 - 1)]) };
			*((*uParam1)[(iVar18 - 1)]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1325(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 688587926 || iParam0 == 2047428024) || iParam0 == 698653232) || iParam0 == 81053684) || iParam0 == -2061583405) || iParam0 == 2086043523) || iParam0 == -1719060085) || iParam0 == -163032984) || iParam0 == 1868067663) || iParam0 == -839140560) || iParam0 == -686686829) || iParam0 == -795466267) || iParam0 == 2029752284) || iParam0 == 1201276490) || iParam0 == 912453393) || iParam0 == 562107429) || iParam0 == 1477698721) || iParam0 == -1632561800) || iParam0 == 684307653) || iParam0 == 1282123855) || iParam0 == -68128151) || iParam0 == -497931013) || iParam0 == -413129408) || iParam0 == 2112290568) || iParam0 == 502936876) || iParam0 == 1132079111) || iParam0 == 478744432) || iParam0 == 1096747416) || iParam0 == 1033860813) || iParam0 == 2016058810) || iParam0 == 1769055947) || iParam0 == 1508306587) || iParam0 == -525676072) || iParam0 == -298391753) || iParam0 == -590250209) || iParam0 == -923693316) || iParam0 == 1477698721) || iParam0 == 1882579758) || iParam0 == 1589583617) || iParam0 == 294388917) || iParam0 == -13558554) || iParam0 == 320619384) || iParam0 == 826594019) || iParam0 == 1297434125) || iParam0 == 119907797) || iParam0 == 1388798186) || iParam0 == 1024667707) || iParam0 == -709696437) || iParam0 == 1223979091) || iParam0 == 1545016984) || iParam0 == 629735563) || iParam0 == -698079035) || iParam0 == -1000405829) || iParam0 == -1387964792) || iParam0 == 1526346227) || iParam0 == -1847550017) || iParam0 == -1080198344) || iParam0 == -852381396) || iParam0 == 153430294) || iParam0 == 684852611) || iParam0 == -1972808239) || iParam0 == -2085606460) || iParam0 == 1772421657) || iParam0 == -1423861687)
	{
		return 1;
	}
	return 0;
}

int func_1326(int iParam0)
{
	if ((iParam0 == -999503751 || iParam0 == -1044137471) || iParam0 == 884451223)
	{
		return 1;
	}
	return 0;
}

bool func_1327(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -1713496139 || bParam0 == -598283164))
	{
		return false;
	}
	if (func_481(bParam0, 265372629))
	{
		return true;
	}
	return false;
}

int func_1328(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_767(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_770(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1918(iVar0, iVar1, iParam1);
		}
		func_771(iVar0);
	}
	return iVar2;
}

bool func_1329(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1919();
	}
	return Global_17411.f_55.f_644.f_33[iParam0]->f_1;
}

bool func_1330(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17411.f_55.f_644.f_33[iParam1] && iParam0) != 0;
	}
	return false;
}

void func_1331(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	*uParam0 = Global_17411.f_55.f_644.f_33[iParam1]->f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iVar0] };
		iVar0++;
	}
	if (119907797 == func_459(&(uParam0->f_1[10])) && func_481(&(uParam0->f_1[1]), 458991572))
	{
		uParam0->f_1[10] = &Global_1952637->f_83[10];
	}
}

int func_1332(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1160();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_1333(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1334(int iParam0)
{
	func_1920(&(Global_1952637->f_2897), iParam0);
}

int func_1335(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
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
		case 735520874:
			return 5;
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

bool func_1336(bool bParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1921(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, bParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1337(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1338(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_481(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_990(iVar0, 16);
		if (bVar1)
		{
			func_991(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_1309(iVar0, iParam3);
			}
			if (!bParam2 && func_1312(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_988(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_1339(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_1309(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1339(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

void func_1339(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bVar0 = bParam1;
	bVar1 = func_1327(bVar0, 1);
	if (bParam3 && func_481(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_1922(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_1307(iParam2, 1))
	{
		case -1130352927:
			func_1923(uParam0, bVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_1924(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_1925(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1926(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_1927(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_1928(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1929(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_1930(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1931(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_1932(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_1933(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_1934(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_1935(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1936(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_1937(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_1938(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

bool func_1340(int iParam0, int iParam1, var uParam2)
{
	Var0 = -178401592;
	Var0.f_1 = iParam0;
	Var0.f_2 = -421429484;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (_0x44b3a36933ac009c(&iVar7, &Var0, -421429484))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		_0x44b3a36933ac009c(&iVar7, &Var0, 828747869);
		uParam2->f_10.f_3 = func_1939(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!_0x52fc26d2d2fc2987(&(uParam2->f_10), &Var0, -455129387))
				{
				}
				break;
			case 1:
				if (!_0xb2b42607f7867576(&(uParam2->f_10.f_1), &Var0, -455129387))
				{
				}
				break;
			case 2:
				if (!_0xa63cd20f19b961ab(&(uParam2->f_10.f_2), &Var0, -455129387))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_14), &Var0, -30349581);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_14.f_1), &Var0, -30349581);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_14.f_2), &Var0, -30349581);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				_0x52fc26d2d2fc2987(&(uParam2->f_18), &Var0, 1616931012);
				break;
			case 1:
				_0xb2b42607f7867576(&(uParam2->f_18.f_1), &Var0, 1616931012);
				break;
			case 2:
				_0xa63cd20f19b961ab(&(uParam2->f_18.f_2), &Var0, 1616931012);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1341()
{
	return Global_1572887->f_6;
}

bool func_1342()
{
	if (!&Global_1048577)
	{
		return false;
	}
	if (!func_107(func_274(0)))
	{
		return false;
	}
	if (&Global_3145858 != -504335712)
	{
		return false;
	}
	if (func_1348(Global_524288->f_40400))
	{
		return true;
	}
	return false;
}

bool func_1343(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_1344()
{
	return (func_1940(-1185145312, 0, 0, 0) > 0 && func_1876(func_773(889965687, func_627(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1345(bool bParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = func_489(0);
	*uParam1 = { func_773(bParam0, func_768(0), bParam3, 0) };
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

bool func_1346(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(bParam0, iParam1, bParam2);
}

bool func_1347(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_489(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_1348(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_1349(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

void func_1350(int iParam0, bool bParam1, int iParam2)
{
	func_1941(iParam2);
	if (Global_1572887->f_13 == -1)
	{
		if (!does_entity_exist(Global_34))
		{
			return;
		}
		if (Global_1940258->f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1296859->f_11)
		{
			return;
		}
		if (Global_1296859->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_11 = 0;
	}
	iParam0->f_6 = iParam2;
	if (Global_1572887->f_13 == -1)
	{
		iParam0->f_14 = Global_1940258->f_38;
	}
	else
	{
		iParam0->f_14 = func_1942(0);
	}
	switch (iParam0->f_7)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_14 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_34))
						{
							func_362(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_1943(1, 1))
						{
							func_362(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_34) && (!func_1943(1, 1) || *iParam0 & 8192 != 0))
				{
					func_184(iParam0, 33554432);
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
	if (!iParam0->f_2 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_15))
		{
			if (func_1944(iParam0))
			{
				iParam0->f_16 = get_network_time_accurate();
			}
		}
		else if (iParam0->f_16 != 0)
		{
			if (get_time_difference(iParam0->f_16, get_network_time_accurate()) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_15))
				{
					iParam0->f_15 = 0;
					iParam0->f_16 = 0;
				}
			}
		}
	}
	iParam0->f_7++;
	if (iParam0->f_7 >= 4)
	{
		iParam0->f_7 = 0;
		iParam0->f_8++;
		if (iParam0->f_8 > 4)
		{
			iParam0->f_8 = 0;
		}
	}
	func_1945(iParam0);
}

bool func_1351(int iParam0, var uParam1)
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
			if (iVar2 == Global_1940258->f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940258->f_26)
			{
				return false;
			}
			if (!func_1946(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_1947(iParam0, iVar2) <= func_1948(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1352(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_11 = iParam0;
	}
	if (func_1949(iParam2, 1, 1, 1, 0))
	{
		func_362(iParam1, 2048);
	}
	iParam1->f_17 = iParam2;
	func_1950(iParam1, 1);
	func_1951();
}

bool func_1353(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_1952(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_13 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_13 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1953(iParam1);
			if (func_1954(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_3 == 0)
				{
					iParam1->f_3 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_3);
				iVar3 = func_1955(iParam1);
				if (iParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1950(iParam1, 1);
						return true;
					}
					else if (iParam1->f_13 < 3.5f)
					{
						if (iVar2 > func_1956(iParam1))
						{
							func_1950(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_1354(int iParam0, int iParam1, int iParam2)
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
	if (func_1957(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_13 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_13 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1953(iParam2);
		if (func_1954(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_3 == 0)
			{
				iParam2->f_3 = get_game_timer();
			}
			if (iParam2->f_3 != 0)
			{
				if (get_game_timer() - iParam2->f_3) > func_1955(iParam2)
				{
					func_1950(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1355(int iParam0, var uParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, 0, 0))
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
	if (Global_1940258->f_34 != 0)
	{
		if (_get_rider_of_mount(Global_1940258->f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_1946(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_4) > func_1955(uParam1)
		{
			fVar3 = func_1953(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_34, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1356(var uParam0, float fParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_1369();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_1357(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_1958(iParam2);
			if (!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1940258->f_40) && _0xea522f991e120d45(Global_1940258->f_40))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1940258->f_40) || Global_1940258->f_40 == -1569615261) || (is_weapon_valid(Global_1940258->f_40) && _0x5809dbca0a37c82b(Global_1940258->f_40)))
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
			if (func_1365(iParam2, iParam1))
			{
				func_1950(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_1358(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_13 < IntToFloat(func_1959(iParam2)))
	{
		if ((is_weapon_valid(Global_1940258->f_40) && !_0x5809dbca0a37c82b(Global_1940258->f_40)) || get_current_ped_vehicle_weapon(Global_34, &uVar0))
		{
			if (func_1365(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_1950(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1359(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1960(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_24))
				{
					func_1950(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_30))
				{
					func_1950(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_29, &vVar4, 0, 0);
					if (func_1961(iParam1, vVar0, vVar4))
					{
						func_1950(iParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_24))
				{
					func_1950(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_24))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_29, &vVar7, 0, 0);
					if (func_1961(iParam1, vVar0, vVar7))
					{
						func_1950(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (is_shocking_event_in_sphere(-624326149, vVar0, 15f) || is_shocking_event_in_sphere(-732566870, vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_1360(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940258->f_33)
	{
		if (!func_1946(iParam0, uParam1, &(Global_1940258->f_28[iVar0])) || iParam0 == &Global_1940258->f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_1962(&(Global_1940258->f_28[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false), vVar9);
			if (func_615(&(Global_1940258->f_28[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1940258->f_28[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_1963(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_1964(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_1965(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1940258->f_28[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1361(int iParam0, var uParam1)
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

bool func_1362(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_1369();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_1363(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1) || decor_exist_on(iParam0, "DamagedByPlayer"))
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
		if (func_1966(iVar0, &iVar2))
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
	if (func_1967(iVar0, iParam0))
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

int func_1364(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_1365(var uParam0, int iParam1)
{
	if (func_1968(uParam0))
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
	if ((is_ped_performing_melee_action(Global_34, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_34, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_34) != 0)
	{
		return true;
	}
	if (_0x8d50f43298ab9545(Global_34, iParam1))
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_1366(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_1969(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1367()
{
}

bool func_1368(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_34);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1970(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_1369();
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
						if (func_1971(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_10 = func_1369();
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

int func_1369()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_1370()
{
	if (Global_1940258->f_36 == 0)
	{
		return false;
	}
	if (Global_1940258->f_36 == Global_1940258->f_34)
	{
		return false;
	}
	if (Global_1940258->f_37 <= 0)
	{
		return false;
	}
	if ((func_1369() - Global_1940258->f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_1371(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_15))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_1948(uParam0);
	if (uParam0->f_13 > func_1972(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_1973(iParam1);
	iVar1 = func_1974(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || _0x9d9473cb82d83a30(iParam1, Global_34, 0) == 1) || _0x9d9473cb82d83a30(iParam1, uParam0->f_15, 0) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_1372(var uParam0, int iParam1)
{
	if (!Global_1940258->f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_1975(iVar0, iParam1, 1060437492) != 0)
	{
		return false;
	}
	vVar1 = { get_entity_coords(iParam1, true, false) };
	vVar4 = { get_entity_coords(iVar0, true, false) };
	fVar7 = func_272(vVar1, vVar4);
	fVar8 = absf((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_1373(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1976(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_1374(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1940258->f_18)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1977(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_34, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_34, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_34);
	if ((does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true)) || Global_1940258->f_24)
	{
		if (_0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_1978(iParam0))
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
			if (func_1979(uParam1))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_34)
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
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_34, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_34, 17))
				{
					if (!func_1980(uParam1, iParam0))
					{
						if (func_1971(iVar4, Global_35, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case -171567092:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (!is_ped_a_player(iVar4) || !is_ped_a_player(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) || _0x06087579e7aa85a9(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) || has_entity_clear_los_to_entity(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			_0x1a5c5d350068a673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_1375(int iParam0, var uParam1)
{
	if (!func_1981(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_34, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_34, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_1376(var uParam0, int iParam1)
{
	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_1369();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_1377(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_1378(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_1369();
	}
	else if (func_1369() - uParam1->f_5) > func_1982(uParam1)
	{
		return func_1983(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_1379(var uParam0, int iParam1)
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
	if (Global_34 == iVar1 || Global_1940258->f_34 == iVar1)
	{
		return true;
	}
	return false;
}

void func_1380(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_25[iParam1]->f_2 = iParam2;
}

void func_1381(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

int func_1382(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case 1:
			return uVar0;
		case 2:
		case 12:
			uVar0 = uParam1->f_63;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			uVar0 = func_1985(uParam0, uParam1, func_1984(iParam2), 19);
			break;
		case 9:
		case 10:
		case 11:
			uVar0 = func_1985(uParam0, uParam1, func_1984(iParam2), 20);
			break;
	}
	return uVar0;
}

bool func_1383(int iParam0, int iParam1)
{
	if (!_does_scenario_point_exist(iParam0))
	{
		return false;
	}
	vVar0 = { _get_scenario_point_coords(iParam0, true) };
	if (!func_43(vVar0))
	{
		iVar3 = _find_closest_active_scenario_point_of_type(vVar0, -447259824, 0.5f, 0, false);
		if (_does_scenario_point_exist(iVar3))
		{
			return false;
		}
	}
	if (does_entity_exist(iParam1))
	{
		iVar4 = _get_scenario_point_ped_is_using(iParam1, false);
		if (_does_scenario_point_exist(iVar4) && iVar4 == iParam0)
		{
			return false;
		}
	}
	return true;
}

bool func_1384(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_1385(int iParam0, bool bParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == bParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

void func_1386(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != bParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_459(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1387(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((*uParam0)[iVar0]->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((*uParam0)[iVar0]->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_1986((*uParam0)[iVar0]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(*uParam0)[*iParam1] = { *(*uParam0)[iVar0] };
				(*uParam0)[*iParam1]->f_4 = (*uParam0)[iVar0]->f_4;
			}
			if ((*uParam0)[iVar0]->f_5 > iParam2)
			{
				(*uParam0)[*iParam1]->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(*uParam0)[*iParam1]->f_5 = (*uParam0)[iVar0]->f_5;
				iParam2 = (iParam2 - (*uParam0)[*iParam1]->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(*uParam0)[iVar0] = { func_527() };
				(*uParam0)[iVar0]->f_4 = 0;
				(*uParam0)[iVar0]->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

void func_1388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1293346->f_20 < 20)
	{
		Global_1293346->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_20.f_1[iVar0] = { *(Global_1293346->f_20.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	func_1987(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

bool func_1389(int iParam0)
{
	if (!_0x7907969497ea92f5(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(Global_1071686->f_28448[51]->f_3))
	{
		return false;
	}
	return true;
}

var func_1390(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
	}
	return uVar0;
}

int func_1391(bool bParam0)
{
	switch (bParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_1392(bool bParam0)
{
	return func_481(bParam0, 1279601681);
}

bool func_1393(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_1988(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_1394(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1395(int iParam0, int iParam1)
{
	*iParam1 = func_1989(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1396(int iParam0, int iParam1)
{
	*iParam1 = func_1990(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_1397()
{
	return Global_1915715->f_22477;
}

bool func_1398(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_378(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1399(int iParam0, bool bParam1)
{
	if (bParam1 == -570078785)
	{
		iVar0 = func_813(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_1077(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_1991(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_1857(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -915411861)
	{
		iVar1 = func_813(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_561(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_1991("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 997808187)
	{
		return 1;
	}
	if (!func_844(iParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1400(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1401(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1402(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1403(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1404(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1405(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1406(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1407(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1408(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1409(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1410(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1411(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1412(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1413(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1414(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1992(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_1415(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_41() == -1)
	{
		if (func_1079(bParam0))
		{
			iVar1 = _get_weapon_unlock(bParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(bParam0);
	}
	return bVar0;
}

bool func_1416(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, 0))
	{
		return func_1993(func_764(bParam0), bParam1, bParam2);
	}
	if (func_811(bParam0))
	{
		return func_1385(func_812(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_41() == 0) && !_unlock_is_visible(bParam0))
	{
		return true;
	}
	if (!func_1994(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_1417(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_331(bParam0, 0) && !func_1017(func_764(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_1418(int* iParam0, bool bParam1)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		iVar2 = _cashinventory_transaction_get_num_of_items(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -1591664384;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!_cashinventory_transaction_get_item_info(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_1419(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1862(bParam1, 1) && !func_1995(bParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_1991(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_567(bParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_1077((iVar1 + func_1996(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1991(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_567(bParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_561((iVar3 + func_1996(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1991("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_1017(func_764(bParam1), 2))
	{
		if (!func_1997(func_764(bParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_331(bParam1, 0))
	{
		if (!func_1998(bParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_1420(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1421(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1422(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1423(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1424(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1425(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1426(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1427(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1428(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1429(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1430(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1431(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1432(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1433(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1434(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_1999(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_1435(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	return ((Global_1196095->f_1[iVar0]->f_1 == 0 && &Global_1196095->f_1[iVar0] != 0) && Global_1196095->f_1[iVar0]->f_2 != 0);
}

bool func_1436()
{
	if (Global_1108365->f_935.f_23 && func_2000())
	{
		return true;
	}
	if (func_107(func_274(0)))
	{
		if (func_2000() && !func_2001())
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_1437(int iParam0)
{
	return (Global_1071686->f_23887.f_4 && iParam0) != 0;
}

bool func_1438(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_107(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_2002(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_1439(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

void func_1440(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_1441(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_1442(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_1443(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_1444()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

void func_1445(int iParam0)
{
	if (func_2003(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_1446(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_1447(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -809040070;
		case 6:
			return 443958153;
		case 7:
			return 1035357148;
		case 8:
			return -990591911;
		case 19:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 12:
			return -2008988392;
		case 122:
			return 1866591384;
		case 123:
			return -810797676;
		case 5:
			return 1591504033;
		case 9:
			return -1481022983;
		case 10:
			return -200160067;
		case 11:
			return -906556724;
		case 16:
			return 882729775;
		case 17:
			return 1957450109;
		case 18:
			return 1826386989;
		case 23:
			return 213861089;
		case 24:
			return 187124199;
		case 25:
			return -1639286351;
		case 22:
			return 1244472740;
		case 26:
			return -184950877;
		case 45:
			return -922179383;
		case 48:
			return 877339314;
		case 46:
			return 327042733;
		case 49:
			return -1159824322;
		case 42:
			return 187784199;
		case 43:
			return 156869848;
		case 44:
			return 959980967;
		case 50:
			return -605457855;
		case 51:
			return -967272484;
		case 52:
			return 253446434;
		case 53:
			return -24930371;
		case 63:
			return -491616406;
		case 56:
			return 1428271505;
		case 57:
			return -404449802;
		case 60:
			return -2132681852;
		case 124:
			return 1479356600;
		case 125:
			return -1608228131;
		case 54:
			return 1700741106;
		case 55:
			return 509242725;
		case 59:
			return -1243693278;
		case 58:
			return 106026254;
		case 61:
			return -1340467914;
		case 62:
			return -2128099513;
		case 27:
			return -768596287;
		case 28:
			return -1789795772;
		case 33:
			return 986912071;
		case 31:
			return 312948291;
		case 34:
			return 770563571;
		case 35:
			return 288839560;
		case 30:
			return 399352507;
		case 39:
			return -1241147617;
		case 126:
			return 1576805996;
		case 29:
			return -1427623397;
		case 36:
			return 305555540;
		case 37:
			return -697751457;
		case 38:
			return -994915577;
		case 68:
			return 2080716288;
		case 69:
			return 922959422;
		case 70:
			return 1948709075;
		case 71:
			return 599204508;
		case 74:
			return -362796541;
		case 127:
			return -176953214;
		case 75:
			return -1992095599;
		case 72:
			return -553046416;
		case 73:
			return 1410537143;
		case 83:
			return 646741747;
		case 84:
			return -773037432;
		case 85:
			return 1444751354;
		case 78:
			return 709943351;
		case 87:
			return 731746260;
		case 86:
			return 405856312;
		case 82:
			return -1749578899;
		case 88:
			return 1581089825;
		case 81:
			return 1124822890;
		case 91:
			return 1618521465;
		case 90:
			return -442258411;
		case 120:
			return 1665083003;
		case 121:
			return 810431028;
		case 77:
			return 1161446575;
		case 79:
			return -406930559;
		case 80:
			return -1850308061;
		case 89:
			return 787686374;
		case 41:
			return 1523596125;
		case 98:
			return -372049939;
		case 97:
			return 226213668;
		case 93:
			return 1437804895;
		case 96:
			return -1254552445;
		case 94:
			return 1526480524;
		case 95:
			return 470861506;
		case 128:
			return 644508980;
		case 129:
			return -1985767496;
		case 0:
			return 1117878254;
		case 1:
			return 622553269;
		case 2:
			return -1934358691;
		case 101:
			return 94750187;
		case 99:
			return 545745902;
		case 100:
			return 1875117241;
		case 119:
			return -1861588330;
		case 133:
			return -1079912632;
		case 152:
			return -1624899219;
		case 176:
			return 1712034773;
		case 177:
			return 1084233913;
		case 178:
			return -1628307596;
		case 153:
			return 1109728466;
		case 154:
			return 151142181;
		case 147:
			return 191185611;
		case 135:
			return 1689047337;
		case 136:
			return 631237697;
		case 137:
			return 1309294228;
		case 138:
			return -1862366064;
		case 139:
			return -708893514;
		case 140:
			return -61253253;
		case 141:
			return -1674694281;
		case 142:
			return 14391281;
		case 143:
			return -869603674;
		case 144:
			return 2081857521;
		case 145:
			return 526646992;
		case 146:
			return 1672297313;
		case 47:
			return 1025033373;
		case 32:
			return 1025033373;
		case 21:
			return 1025033373;
		case 115:
			return 1025033373;
		case 92:
			return 1025033373;
		case 131:
			return 1025033373;
		case 20:
			return 1025033373;
		case 134:
			return -765151559;
		case 179:
			return 1244193358;
		case 155:
			return -268420964;
		case 156:
			return -283845926;
		case 157:
			return 76731659;
		case 158:
			return 2141489518;
		case 67:
			return 1529797091;
		case 159:
			return 1120323763;
		case 160:
			return -1951530479;
		case 161:
			return 2034257465;
		case 162:
			return 278587369;
		case 65:
			return 1388932648;
		case 164:
			return 1467401843;
		case 165:
			return -1049737591;
		case 166:
			return 1175719437;
		case 167:
			return 2115547696;
		case 64:
			return 878376253;
		case 168:
			return -508879537;
		case 169:
			return -654369397;
		case 170:
			return 1573058547;
		case 171:
			return 1753151614;
		case 172:
			return -2113647360;
		case 173:
			return 1337275619;
		case 174:
			return -237650722;
		case 175:
			return 283754781;
		case 66:
			return -2076086367;
		case 163:
			return -487054121;
		case 108:
			return -1769964380;
		case 110:
			return -1464928880;
		case 109:
			return -812483303;
		case 111:
			return 1315212395;
		case 112:
			return 450843655;
		case 113:
			return -1477315484;
		case 114:
			return -1132316597;
		case 102:
			return -1495157302;
		case 105:
			return -2140031237;
		case 106:
			return -375350;
		case 103:
			return -1829807698;
		case 104:
			return 186603357;
		case 107:
			return -1575817877;
		case 116:
			return 1087483310;
		case 130:
			return -552506176;
		case 117:
			return 441769767;
		case 118:
			return 1318049946;
		case 3:
			return 548657065;
		case 4:
			return 243086140;
		case 40:
			return -305029900;
		case 76:
			return 1008537949;
		case 148:
			return 1239556700;
		case 149:
			return 1968750441;
		case 150:
			return 317019665;
		case 151:
			return 1421441577;
		default:
			break;
	}
	return 0;
}

bool func_1448(int iParam0, int iParam1, var uParam2)
{
	if (func_2004(iParam0, iParam1, &uVar0))
	{
		func_2005(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1449(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

bool func_1450(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1451(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

int func_1452(int iParam0)
{
	return func_778(iParam0, 7);
}

int func_1453(int iParam0)
{
	return func_778(iParam0, 6);
}

bool func_1454(int iParam0, int iParam1, float fParam2)
{
	return func_2006(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_1455()
{
	return (Global_1915715->f_20637 || Global_1915715->f_22504.f_1);
}

int func_1456(var uParam0)
{
	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = create_itemset(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (_does_scenario_point_exist(uParam0[iVar3]))
		{
			if (_get_ped_using_scenario_point(uParam0[iVar3]) != 0)
			{
			}
			else if (!_0xab643407d0b26f07(Global_34, uParam0[iVar3], 0, 0, 1) && !func_431(64))
			{
			}
			else
			{
				_0x20a4bf0e09bee146(iVar2);
				if (func_638(&iVar2, _get_scenario_point_coords(uParam0[iVar3], true), 1065353216))
				{
				}
				else
				{
					fVar4 = func_637(Global_35, *uParam0->f_5[iVar3]);
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	destroy_itemset(iVar2);
	return iVar1;
}

void func_1457(var uParam0)
{
	if (func_181(uParam0->f_145))
	{
		func_182(&(uParam0->f_145), 1, 1);
	}
}

bool func_1458(var uParam0)
{
	if (_0x0de0944eccb3df5d(Global_34))
	{
		return false;
	}
	if (func_183(uParam0->f_126, 32768))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		return false;
	}
	if (func_431(16))
	{
		return false;
	}
	return true;
}

bool func_1459(var uParam0)
{
	iVar0 = _get_first_entity_ped_is_carrying(Global_34);
	if (is_entity_a_ped(iVar0))
	{
		iVar1 = get_entity_model(iVar0);
		bVar2 = func_2007(iVar1);
		if (((func_1299(bVar2) && !_0x8de41e9902e85756(iVar0)) && _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0)) != 2) && !_0xcdc25355c0d65963(iVar0))
		{
			uParam0->f_49.f_61 = bVar2;
			uParam0->f_49.f_62 = -214678071;
			if (func_181(uParam0->f_146))
			{
				func_366(uParam0->f_146, _uiprompt_get_group_id_for_target_entity(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_1460(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

bool func_1461()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	if (_get_number_of_references_of_script_with_name_hash(872480335) > 0)
	{
		return true;
	}
	return false;
}

void func_1462(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = func_2008(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!func_569(0) || func_566())
	{
		iVar1 = get_entity_model(iVar0);
		func_2009(iVar1, 0);
	}
	else if (is_ped_human(get_ped_index_from_entity_index(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar0), 1, 1, get_entity_model(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			bVar26 = &Var2.f_1[iVar25];
			if (func_331(bVar26, 0))
			{
				if (!bParam1 || func_836(bVar26))
				{
					func_1516(bVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = _get_ped_damage(get_ped_index_from_entity_index(iVar0));
		if (func_332(-269048282, 1))
		{
			if (iVar39 < 2 && get_random_int_in_range(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = _0xf8b48a361dc388ae(get_ped_index_from_entity_index(iVar0));
		iVar42 = func_2010(get_ped_index_from_entity_index(iVar0), iVar41);
		_0x6b89faa36fc909a3(&iVar27, get_ped_index_from_entity_index(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_2011(iVar0) && !func_2012(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || func_836(&(iVar27[iVar38])))
				{
					func_1516(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	bVar43 = func_2013(&iVar0);
	if (!func_331(bVar43, 0))
	{
		bVar43 = func_2014(iVar0);
	}
	if (func_331(bVar43, 0))
	{
		func_2015(bVar43, 1, 1, -142743235);
	}
	_0x0d0db2b6af19a987(&iVar0);
}

int func_1463(int iParam0)
{
	bVar0 = false;
	if (get_current_ped_weapon(Global_34, &bVar0, true, iParam0, false))
	{
		if (func_331(bVar0, 0))
		{
			if (_is_weapon_two_handed(bVar0) || func_2016(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_1464()
{
	iVar0 = _get_prev_weather_type_hash_name();
	if (((((iVar0 == 1420204096 || iVar0 == -416908843) || iVar0 == 212278652) || iVar0 == 839715153) || iVar0 == 2082228755) || iVar0 == -1233681761)
	{
		return true;
	}
	iVar1 = _get_next_weather_type_hash_name();
	if (((((iVar1 == 1420204096 || iVar1 == -416908843) || iVar1 == 212278652) || iVar1 == 839715153) || iVar1 == 2082228755) || iVar1 == -1233681761)
	{
		return true;
	}
	iVar2 = func_2017();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_1465(int iParam0)
{
	Global_1940144->f_39 = (Global_1940144->f_39 || iParam0);
}

void func_1466(var uParam0, bool bParam1)
{
	if (has_anim_event_fired(Global_34, -996707397))
	{
		func_362(&(uParam0->f_126), 2);
	}
	else
	{
		func_184(&(uParam0->f_126), 2);
	}
	if (func_183(bParam1, 1))
	{
		if (!func_181(&(uParam0->f_135[0])))
		{
			uParam0->f_135[0] = func_2018("KNEEL_FIRE", 992265328, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_366(&(uParam0->f_135[0]), 1754796591, 0, 1);
		}
	}
	else if (func_181(&(uParam0->f_135[0])))
	{
		func_182(uParam0->f_135[0], 1, 1);
	}
	if (((func_183(bParam1, 4096) && func_183(uParam0->f_125, 16)) && !func_431(128)) && uParam0->f_132 != 2)
	{
		set_bit(&(Global_1957959->f_1), 2);
		set_bit(&(Global_1957959->f_1), 3);
		if (!func_181(&(uParam0->f_135[2])))
		{
			uParam0->f_135[2] = func_2018("CRAFT_COOK", -473983589, 2, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			func_366(&(uParam0->f_135[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		clear_bit(&(Global_1957959->f_1), 2);
		if (func_181(&(uParam0->f_135[2])))
		{
			func_182(uParam0->f_135[2], 1, 1);
		}
	}
	disable_control_action(0, 1287709438, false);
	disable_control_action(0, -209515122, false);
	disable_control_action(0, -399233038, false);
	disable_control_action(0, -1046962283, false);
	if (func_181(&(uParam0->f_135[6])))
	{
		func_182(uParam0->f_135[6], 1, 1);
	}
	if (func_431(32))
	{
		if (func_181(&(uParam0->f_135[6])))
		{
			func_312(&(uParam0->f_135[6]), 0, 1, 1);
		}
	}
	else if (func_181(&(uParam0->f_135[6])) && !func_311(&(uParam0->f_135[6]), 0))
	{
		func_312(&(uParam0->f_135[6]), 1, 1, 1);
	}
	if (func_431(32) || (func_183(uParam0->f_126, 2) && uParam0->f_132 != 2))
	{
		if (func_181(&(uParam0->f_135[2])))
		{
			func_312(&(uParam0->f_135[2]), 0, 1, 1);
		}
	}
	else if (func_181(&(uParam0->f_135[2])))
	{
		func_312(&(uParam0->f_135[2]), 1, 1, 1);
	}
	if ((func_183(bParam1, 16) && !func_431(128)) && uParam0->f_132 != 2)
	{
		if (!func_181(&(uParam0->f_135[1])))
		{
			uParam0->f_135[1] = func_2018("LEAVE", 992265328, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
			if (func_183(bParam1, 524288) && func_183(uParam0->f_126, 8192))
			{
				func_1769(&(uParam0->f_135[1]), 0, 1);
				func_593(&(uParam0->f_135[1]), 20, 1, 1);
				func_593(&(uParam0->f_135[1]), 13, 1, 1);
			}
			func_366(&(uParam0->f_135[1]), 1754796591, 0, 1);
		}
		if (func_183(bParam1, 524288) && func_183(uParam0->f_126, 8192))
		{
			if (!func_181(&(uParam0->f_135[8])))
			{
				uParam0->f_135[8] = func_2018("LEAVE", 992265328, 2, 0, 0, 5, 570, 4000, 10, 1073741824, -820096546, 0);
				func_593(&(uParam0->f_135[8]), 19, 1, 1);
				func_593(&(uParam0->f_135[8]), 20, 1, 1);
				func_593(&(uParam0->f_135[8]), 13, 1, 1);
				func_2019(uParam0->f_135[8], "INPUT_PCAMP_TEARDWN");
				func_366(&(uParam0->f_135[8]), 1754796591, 0, 1);
			}
		}
		else if (func_181(&(uParam0->f_135[8])))
		{
			func_182(uParam0->f_135[8], 1, 1);
		}
	}
	else
	{
		if (func_181(&(uParam0->f_135[1])))
		{
			func_182(uParam0->f_135[1], 1, 1);
		}
		if (func_181(&(uParam0->f_135[8])))
		{
			func_182(uParam0->f_135[8], 1, 1);
		}
	}
	if (func_183(uParam0->f_126, 2))
	{
		if (func_181(&(uParam0->f_135[1])) && func_311(&(uParam0->f_135[1]), 0))
		{
			func_312(&(uParam0->f_135[1]), 0, 1, 1);
			if (func_183(bParam1, 524288) && func_183(uParam0->f_126, 8192))
			{
				func_1769(&(uParam0->f_135[1]), 0, 1);
			}
		}
	}
	else if (func_181(&(uParam0->f_135[1])) && !func_311(&(uParam0->f_135[1]), 0))
	{
		func_312(&(uParam0->f_135[1]), 1, 1, 1);
		if (func_183(bParam1, 524288) && func_183(uParam0->f_126, 8192))
		{
			func_1769(&(uParam0->f_135[1]), 0, 1);
		}
	}
	if (func_181(&(uParam0->f_135[8])))
	{
		func_312(&(uParam0->f_135[8]), 1, 1, 1);
	}
	uParam0->f_147 = func_1141(_uiprompt_get_group_active_page(1754796591));
	iVar0 = 1;
	if (!func_431(128))
	{
		_uiprompt_set_ambient_group_this_frame(uParam0->f_127, 3f, 1, iVar0, 1754796591, uParam0->f_147, 0);
	}
}

int func_1467(var uParam0)
{
	if (func_431(16) || func_183(uParam0->f_126, 32768))
	{
		func_184(&(uParam0->f_126), 32768);
		func_1134(16);
		uParam0->f_150 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_181(&(uParam0->f_135[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (func_311(&(uParam0->f_135[iVar0]), 0))
				{
					if (func_512(&(uParam0->f_135[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_2020())
					{
						if (!func_537(&(uParam0->f_151)))
						{
							func_542(&(uParam0->f_151));
						}
						if (func_2021(&(uParam0->f_151), 0.5f))
						{
							return iVar0;
						}
					}
					else if (func_537(&(uParam0->f_151)))
					{
						func_533(&(uParam0->f_151));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (func_313(&(uParam0->f_135[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (func_916(&(uParam0->f_135[8]), 1))
					{
						if (!func_537(&(uParam0->f_49.f_70)))
						{
							func_542(&(uParam0->f_49.f_70));
						}
						else if (func_903(&(uParam0->f_49.f_70), 0.1f))
						{
							func_1460(&(uParam0->f_135[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (func_537(&(uParam0->f_49.f_70)))
						{
							func_533(&(uParam0->f_49.f_70));
						}
						func_1460(&(uParam0->f_135[8]), "LEAVE", 1);
					}
				}
			}
			else if (func_512(&(uParam0->f_135[iVar0]), 1))
			{
				if (iVar0 == 2)
				{
					play_sound_frontend("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1468(var uParam0)
{
	if (func_2022(uParam0) && !func_183(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_1149(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_1151(-1890302844, 0.5f);
					break;
				case 7:
					func_1151(36116464, 0.5f);
					break;
				case 6:
					if (func_1151(420089068, 1f))
					{
						return 1;
					}
					break;
				default:
					func_2023(uParam0);
					break;
			}
			break;
		case 6:
			func_2024(uParam0);
			break;
	}
	return 0;
}

int func_1469(var uParam0)
{
	if (func_2022(uParam0) && !func_183(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_1149(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_1151(-1890302844, 0.5f);
					break;
				case 7:
					func_1151(36116464, 0.5f);
					break;
				case 6:
					func_1151(1352801403, 1f);
					return 1;
				default:
					func_2023(uParam0);
					break;
			}
			break;
		case 6:
			func_2025(uParam0);
			break;
	}
	return 0;
}

int func_1470(var uParam0)
{
	if (func_2022(uParam0) && !func_183(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_1149(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_1151(-1890302844, 0.5f);
					break;
				case 7:
					func_1151(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_131 = 1;
					if (func_2026(Global_34, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_2023(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_1471(var uParam0)
{
	if (func_2022(uParam0) && !func_183(uParam0->f_126, 4))
	{
		return 1;
	}
	if (!func_1149(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_132)
	{
		case 1:
			switch (uParam0->f_130)
			{
				case 8:
					func_1151(-1890302844, 0.5f);
					break;
				case 7:
					func_1151(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_131 = 0;
					if (func_2026(Global_34, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_2023(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_1472()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_1473()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_1474(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((bParam0 != 1259508039 && bParam0 != -1838434463) && bParam0 != 2019377485) && bParam1)
	{
		bVar0 = func_2027(bParam0);
		if (func_481(bParam0, 1147021565))
		{
			bVar0 = (bVar0 || 64);
		}
		if (!func_2028(1, bVar0))
		{
			return false;
		}
	}
	if (bParam0 == -1448210800 || bParam0 == -2035110427)
	{
		if (func_2029())
		{
			return false;
		}
	}
	if (!func_332(bParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_1475(bool bParam0)
{
	if (func_1484(bParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_489(0), bParam0, func_378(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case -1838434463:
		case 2019377485:
			func_2030(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_2031() != -1)
			{
				func_190(func_2032(), 10000, 0, 0, 0, 1);
				func_2033(-1);
			}
			break;
	}
	return true;
}

bool func_1476(bool bParam0)
{
	if (bParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_1482(Var0, 0);
		return true;
	}
	return false;
}

void func_1477(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_1478(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_1479(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_1480(bool bParam0)
{
	if (func_41() == 0 && func_2035(func_2034(bParam0), 1, 0) != 0)
	{
		func_190("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_1481(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_2036(bParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_1064(bParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), bParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_2037())
				{
					if (func_2038(&Global_34))
					{
						_task_item_interaction(player_ped_id(), bParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), bParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_190("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), bParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), bParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), bParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), bParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), bParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), bParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_2039(bParam0);
				}
				else
				{
					func_2040(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_2041(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_2042(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_2043(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_2039(bParam0);
				}
				else
				{
					func_2044(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_2039(bParam0);
				}
				else
				{
					func_2045(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_2039(bParam0);
				}
				else
				{
					func_2046(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_2039(bParam0);
				}
				else
				{
					func_2047(bParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), bParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_2048(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_2049(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_2050(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_2039(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_2051(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_2052(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_1482(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_2053(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_2054(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_2055(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_1483()
{
	return Global_1893587 & 2 != 0;
}

bool func_1484(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (func_485(bParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_1485(int iParam0)
{
	return func_2056(iParam0);
}

bool func_1486(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_485(bParam0) == -1037537535)
	{
		if (func_459(bParam0) == -999503751)
		{
		}
	}
	return true;
}

int func_1487()
{
	iVar0 = player_id();
	iVar1 = _0xf49f14462f0ae27c(iVar0);
	iVar2 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return 0;
	}
	if (is_ped_swimming(iVar2) || is_ped_swimming(iVar1))
	{
		return 0;
	}
	if (is_ped_on_mount(iVar2))
	{
		if (_get_rider_of_mount(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { get_entity_coords(iVar2, false, false) };
	vVar6 = { get_entity_coords(iVar1, false, false) };
	if (get_distance_between_coords(vVar3, vVar6, true) < 2f && _0xd543d3a8fde4f185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_1488(int iParam0)
{
	iVar0 = get_player_ped(iParam0);
	iVar1 = _0xf49f14462f0ae27c(iParam0);
	if (is_ped_on_mount(iVar0))
	{
		if (_get_rider_of_mount(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_1489(bool bParam0, bool bParam1)
{
	if (!func_2057())
	{
		return 0;
	}
	if (!func_2058(bParam0))
	{
		return 0;
	}
	if (func_1185(bParam0))
	{
		iVar0 = 0;
		if ((func_459(bParam0) == 81053684 || func_481(bParam0, 160827531)) && !func_481(bParam0, -1303648999))
		{
			if (bParam1)
			{
				func_50(&iVar0, 2);
			}
		}
		return func_2059(bParam0, iVar0);
	}
	return 0;
}

void func_1490(bool bParam0)
{
	iVar0 = 10;
	bVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (bVar1 == bParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_1491(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_1492(bParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_1491(Global_34, bParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_204(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_2060();
		func_454(128);
		return;
	}
	if (bVar1 == &Global_1952637->f_83[iVar0])
	{
		func_1492(bParam0, 1, 0);
		return;
	}
	if (func_1549(-2061583405, 0))
	{
		if (func_1541(bVar1))
		{
			func_1492(bVar1, 0, 0);
		}
		else
		{
			func_1550(bVar1, 1, 1, 0, 0, 0);
		}
		func_1492(bParam0, 1, 0);
		return;
	}
	if (func_1541(bVar1))
	{
		func_1492(bVar1, 0, 0);
		func_1492(bParam0, 1, 0);
	}
	else if (func_1541(bParam0))
	{
		if (bParam0 != func_2061(0))
		{
			func_1553(bParam0, bVar1, 0, 0, 0);
			func_1492(bParam0, 0, 0);
			func_1492(bVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_454(128);
			func_1492(bParam0, 1, 0);
		}
	}
}

int func_1491(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam3 == -358215195)
	{
		Var0 = { func_772(bParam1, 1, 0) };
		bParam3 = func_2062(Var0.f_4);
		if (bParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_2063(bParam1, iParam2, func_1335(bParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_2064(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_1327(bParam1, 0))
		{
			func_2065(&(Global_1952637->f_1675.f_1[func_1335(bParam3, 1)]), 0, 0);
		}
		else
		{
			func_2065(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != &Global_1952637->f_83[func_1335(bParam3, 1)])
			{
				func_205(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_204(32768))
			{
				func_2060();
				func_205(21, bParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_2066(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_2067(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_205(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_205(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1492(bool bParam0, int iParam1, bool bParam2)
{
	Var0 = { func_772(bParam0, bParam2, 0) };
	Var5 = { func_773(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_628(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_489(bParam2), &Var5, iParam1);
}

bool func_1493(int iParam0, bool bParam1)
{
	bVar2 = false;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &bVar7))
	{
		return false;
	}
	Var8 = { func_773(889965687, func_627(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		bVar1 = &Global_1952637->f_3334[iVar0];
		if (func_459(bVar1) == iParam0 || (iParam0 == 81053684 && func_481(bVar1, 160827531)))
		{
			Var3 = { func_773(bVar1, Var8, bVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_489(bParam1), &Var3))
			{
				bVar2 = bVar1;
				_0x65a5f70f4a292ebe(func_489(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return bVar2;
}

void func_1494(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_1495(bool bParam0, bool bParam1)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 == -1)
	{
		return 0;
	}
	if (bParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_1074(bParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_34) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_34))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_34)
		{
			if (bParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_2068(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1496(bool bParam0)
{
	bParam0 = func_1072(bParam0);
	if (bParam0 <= -1)
	{
		return false;
	}
	if (bParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1074(bParam0);
	if (!does_entity_exist(iVar0))
	{
		if (bParam0 == func_1849())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

bool func_1497(int iParam0, int iParam1, bool bParam2)
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

void func_1498()
{
	if (func_2069())
	{
		return;
	}
	if (func_2070(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_2070(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_2071(16);
				}
				func_2072(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_2071(8);
					func_2072(0);
				}
		}
		return;
	}
	if (func_2073())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_2074();
	}
	else
	{
		iVar0 = func_2076(func_2075());
		if (iVar0 != -1)
		{
			func_190(func_2032(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_2077(0);
			func_2033(-1);
		}
	}
}

bool func_1499(int iParam0, int iParam1)
{
	if ((!func_2078() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_322(16))
	{
		return false;
	}
	if (func_275())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_2079())
	{
		return false;
	}
	if (func_47(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_20(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_382())
	{
		return false;
	}
	return true;
}

int func_1500(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_2080();
	}
	if (!func_2081(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_2082(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

void func_1501()
{
	Var0 = { func_274(0) };
	if (func_107(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_2083(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_2084(iVar2) == -785841056)
				{
					func_190("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_190("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_190("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_190("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_1502(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_2085(Var0, func_514(0, 8), 0, 0);
}

void func_1503(bool bParam0)
{
	if ((func_41() != -1 || !bParam0) || func_1451(Global_34))
	{
		func_2086();
		return;
	}
}

void func_1504()
{
	iVar0 = player_id();
	func_2087(1, iVar0);
}

bool func_1505(bool bParam0)
{
	return func_485(bParam0) == 2085633299;
}

void func_1506(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_331(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 1807503187)
	{
		return;
	}
	else if (bParam1 == 0)
	{
		return;
	}
	if (!func_2088() || bParam6)
	{
		func_2089(bParam0, bParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(bParam1);
	StringCopy(&cVar2, func_2090(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (bParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_2090(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1688(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_485(bParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && bParam0 != 424030678) && bParam0 != -1188697038) && bParam0 != 446901936) && bParam0 != -228768324) && bParam0 != 34372170) && bParam0 != 963726415) && bParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_459(bParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_2091(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar13 = 109029619;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_481(bParam0, 474910316))
	{
		sVar17 = func_2092(bParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_481(bParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_2093(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -1777836132;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	bVar18 = func_1062(bParam0);
	if ((func_2094(iVar12) && func_481(bParam0, -306684263)) && bVar18 != 0)
	{
		bVar18 = func_2095(bParam0);
	}
	else if (func_485(bParam0) == -1037537535)
	{
		bVar19 = func_2096(bParam0);
		if (func_331(bVar19, 0))
		{
			bVar18 = func_1062(bVar19);
		}
	}
	if (func_2097(bParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1417(bParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		bParam1 = ceil((to_float(bParam1) / to_float(iVar20)));
	}
	sVar21 = func_669(_create_var_string(10, &cVar2, _create_var_string(0, bVar18), iVar1), iVar13);
	if (bParam1 == 1)
	{
		sVar21 = _create_var_string(0, bVar18);
	}
	if ((((((iVar12 == -1839668642 && bParam0 != -1713496139) && bParam0 != 1326838792) && bParam0 != -230310728) || ((iVar12 == 231148558 && bParam0 != 1733464892) && bParam0 != -598283164)) || (iVar12 == 252325943 && bParam0 != -860557048)) || (iVar12 == -636562458 && bParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_2098(bParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_2099(bParam0, &cVar22))
		{
			sVar21 = func_833(func_2100(cVar22), 109029619);
		}
	}
	func_2101(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_1507(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
		return Var0;
	}
	if (func_481(bParam0, -305066475))
	{
		if (func_41() == -1)
		{
			if (func_481(bParam0, -537818634))
			{
				return func_2102(189951448);
			}
			else
			{
				return func_2102(1176172851);
			}
		}
	}
	else if (func_481(bParam0, -537818634))
	{
		return func_2102(-963660207);
	}
	if (func_481(bParam0, 2084895747))
	{
		return func_2102(1694039471);
	}
	return Var2;
}

bool func_1508(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(bParam0))
	{
		return false;
	}
	Var0 = { func_767(bParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam2)
	{
		func_769(&Var0, func_768(0));
	}
	if (!func_770(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_783(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_816(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_771(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_1509(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940311->f_4 = bParam0;
	Global_1940311->f_34 = iParam2;
	if (bParam1 || (func_2103() && iParam2 == 0))
	{
		func_2104(1);
		func_2105(1);
	}
}

bool func_1510(var uParam0)
{
	disable_control_action(0, -124244224, false);
	func_1127(&(uParam0->f_49), 32);
	iVar0 = _0xc22aa08a8adb87d4(Global_34);
	if (func_431(64) && uParam0->f_124 < 9)
	{
		func_2106(&(uParam0->f_49));
		func_2107(&(uParam0->f_49));
		if ((get_game_timer() - uParam0->f_150) > 1000 && func_2108(&(uParam0->f_49)))
		{
			func_2109();
			if (func_1149(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_1151(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_1151(36116464, 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913694->f_1577 != 0)
			{
				uParam0->f_49.f_61 = Global_1913694->f_1577;
			}
			uParam0->f_49.f_62 = -214678071;
			uParam0->f_150 = -1;
			do_screen_fade_in(500);
			if (iVar0 == -518407211 || iVar0 == 1662215698)
			{
				set_current_ped_weapon(Global_34, -618550132, true, 0, false, false);
				func_362(&(uParam0->f_126), 65536);
			}
			func_1132(2);
			if (func_569(0) && !func_566())
			{
				func_2110(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, 0, uParam0->f_49.f_11);
			}
			_0x378d3b1b11d9385b(uParam0->f_49.f_61);
			uParam0->f_161 = 3;
			if (does_entity_exist(uParam0->f_133))
			{
				delete_object(&(uParam0->f_133));
			}
			uParam0->f_133 = create_object(func_2111(uParam0->f_49.f_61), Global_35, false, false, false, false, true);
			if (_0x3bbdd6143ff16f98(Global_34, uParam0->f_133, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			set_entity_visible(uParam0->f_133, false);
			_set_object_burn_level(uParam0->f_133, 0f, true);
			func_711(&(uParam0->f_49));
			func_718(&(uParam0->f_49), 2);
			uParam0->f_135[3] = func_2018("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, 7000, 10000, 25, 1073741824, 1704213876, 0);
			func_2112(uParam0, 3, 0, 0);
			func_312(&(uParam0->f_135[3]), 0, 1, 1);
			func_366(&(uParam0->f_135[3]), -1067771379, 0, 1);
			func_971(&(uParam0->f_49), 1024);
			_databinding_remove_data_entry(uParam0->f_49.f_28);
			func_1138(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_124 != 0)
	{
		enable_control_action(0, -1450761377, true);
		enable_control_action(0, -771458680, true);
	}
	if (uParam0->f_124 > 0)
	{
		_uiprompt_set_active_group_this_frame(-1067771379, _create_var_string(0, uParam0->f_49.f_61), 1, 0, 0, 0);
	}
	if (has_anim_event_fired(Global_34, 442509369))
	{
		uParam0->f_162++;
		if (uParam0->f_49.f_61 == -1199896558)
		{
			if (func_2113())
			{
				func_2114(1);
			}
			else if (func_2115())
			{
				func_2114(0);
			}
		}
		func_2116(uParam0->f_49.f_61, to_float(uParam0->f_161), uParam0->f_162 >= uParam0->f_161);
	}
	if (func_569(0) && !func_566())
	{
		if (has_anim_event_fired(Global_34, -936525963))
		{
			func_362(&(uParam0->f_126), 256);
			func_1154(uParam0->f_49.f_61, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_49.f_23 != -1 && func_2117(&(uParam0->f_49)) != 12)
	{
		if (func_1695(uParam0->f_49.f_23))
		{
		}
		else
		{
			uParam0->f_49.f_23 = -1;
		}
	}
	set_ped_can_play_ambient_anims(Global_34, false);
	set_ped_can_play_gesture_anims(Global_34, 0, 1);
	switch (uParam0->f_124)
	{
		case 0:
			if (func_1149(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_1151(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_1151(36116464, 0.5f);
					return false;
				}
			}
			if (((func_1149(uParam0) || has_anim_event_fired(Global_34, -1208591336)) && func_2118(iVar0)) || func_2117(&(uParam0->f_49)) == 12)
			{
				func_2119(&(uParam0->f_49), 1);
				if (func_2117(&(uParam0->f_49)) == 11)
				{
					if (func_1299(uParam0->f_49.f_61))
					{
						func_2120(uParam0);
					}
					else if (func_717(&(uParam0->f_49), 8192))
					{
						uParam0->f_161 = 1;
						if (func_569(0) && !func_566())
						{
							func_2110(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, func_2121(), uParam0->f_49.f_11);
						}
						func_718(&(uParam0->f_49), 0);
						func_711(&(uParam0->f_49));
						func_182(uParam0->f_135[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (func_183(uParam0->f_125, 16384))
						{
							iVar1 = round((IntToFloat(iVar1) * 0.8f));
							iVar2 = round((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_135[3] = func_2018("CRAFT_FASTER", 1138488863, 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824, 1704213876, 0);
						func_2112(uParam0, 3, 0, 0);
						func_312(&(uParam0->f_135[3]), 0, 1, 1);
						func_366(&(uParam0->f_135[3]), -1067771379, 0, 1);
						func_2122();
						uParam0->f_149 = get_game_timer();
						func_1138(uParam0, 1);
					}
					else
					{
						func_184(&(uParam0->f_126), 4);
					}
				}
				else if (func_2117(&(uParam0->f_49)) == 0)
				{
					func_1145(uParam0, 1);
					func_1134(2);
				}
				else if (func_2117(&(uParam0->f_49)) == 1 || func_1450(Global_34, 0))
				{
					func_184(&(uParam0->f_126), 4);
					func_971(&(uParam0->f_49), 32);
					func_1145(uParam0, 1);
					func_711(&(uParam0->f_49));
					func_1134(2);
					uParam0->f_132 = 6;
					uParam0->f_149 = get_game_timer();
					func_184(&(uParam0->f_126), 128);
					return true;
				}
			}
			break;
		case 1:
			if (func_1149(uParam0) && (get_game_timer() - uParam0->f_149) > 250)
			{
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					if (func_1151(653141085, 1086324736))
					{
					}
				}
				else if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_1151(1520707380, 1086324736);
					func_1138(uParam0, 2);
				}
				else
				{
					func_1151(-1161086932, 1086324736);
					func_1138(uParam0, 2);
				}
				uParam0->f_149 = get_game_timer();
			}
			break;
		case 2:
			if (!func_311(&(uParam0->f_135[3]), 0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (has_anim_event_fired(Global_34, 1070143458) || func_1149(uParam0))
				{
					func_312(&(uParam0->f_135[3]), 1, 1, 1);
				}
			}
			if (func_313(&(uParam0->f_135[3]), 1))
			{
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				func_2112(uParam0, 3, 1, 0);
				func_182(uParam0->f_135[3], 1, 1);
				if ((((func_485(uParam0->f_49.f_61) == 2085633299 && !func_481(uParam0->f_49.f_61, -1242251796)) && !func_481(uParam0->f_49.f_61, 1919582297)) && !func_481(uParam0->f_49.f_61, -651046900)) && !func_481(uParam0->f_49.f_61, 127710288))
				{
					uParam0->f_135[5] = func_2018("USE_ITEM", -1932931774, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_366(&(uParam0->f_135[5]), -1067771379, 0, 1);
					func_593(&(uParam0->f_135[5]), 10, 1, 1);
					uParam0->f_135[4] = func_2018("STOW_ITEM", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_593(&(uParam0->f_135[4]), 10, 1, 1);
					func_366(&(uParam0->f_135[4]), -1067771379, 0, 1);
					if (func_1064(uParam0->f_49.f_61, -1636519629) == -701492487)
					{
						func_1460(&(uParam0->f_135[5]), "DRINK", 1);
						func_312(&(uParam0->f_135[4]), 0, 1, 1);
					}
					if (!func_2123(2))
					{
						func_312(&(uParam0->f_135[5]), 0, 1, 1);
					}
					_0x7e2c766adb2c5f1a(uParam0->f_49.f_61, 1);
				}
				if (!func_569(0) || func_566())
				{
					uParam0->f_49.f_23 = func_595(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					if (func_181(&(uParam0->f_135[5])))
					{
						func_312(&(uParam0->f_135[5]), 0, 1, 1);
					}
				}
				uParam0->f_162 = 0;
				func_542(&(uParam0->f_154));
				uParam0->f_149 = get_game_timer();
				func_184(&(uParam0->f_126), 256);
				func_1138(uParam0, 3);
			}
			else if (func_311(&(uParam0->f_135[3]), 0))
			{
				func_2124(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_1149(uParam0))
			{
				if (func_2021(&(uParam0->f_154), 0.1f))
				{
					if (iVar0 == -87088667 || iVar0 == -8536912)
					{
						uParam0->f_149 = get_game_timer();
						func_1151(-266297705, 1f);
						func_542(&(uParam0->f_154));
					}
					else
					{
						uParam0->f_149 = get_game_timer();
						func_1151(1581850152, 1086324736);
					}
				}
			}
			func_2125(uParam0);
			if (func_181(&(uParam0->f_135[5])))
			{
				if (func_311(&(uParam0->f_135[5]), 0) && (func_512(&(uParam0->f_135[5]), 1) || is_control_pressed(0, -1181049683)))
				{
					if (!func_569(0) || func_566())
					{
						func_1152(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					_0xd962f8579d702db5();
					func_1154(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_182(uParam0->f_135[5], 1, 1);
					func_182(uParam0->f_135[4], 1, 1);
					func_2126(uParam0, 1);
					func_718(&(uParam0->f_49), 15);
					func_1138(uParam0, 5);
					return false;
				}
			}
			if ((!func_181(&(uParam0->f_135[5])) || (func_311(&(uParam0->f_135[4]), 0) && (func_1770(&(uParam0->f_135[4]), 1) || is_control_pressed(0, -69749786)))) || func_1450(Global_34, 0))
			{
				func_182(uParam0->f_135[5], 1, 1);
				func_182(uParam0->f_135[4], 1, 1);
				_0xd962f8579d702db5();
				uParam0->f_149 = get_game_timer();
				if (func_183(uParam0->f_126, 128))
				{
					func_184(&(uParam0->f_126), 128);
					func_712(&(uParam0->f_49), 0);
					play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
					func_718(&(uParam0->f_49), 1);
				}
				else
				{
					func_718(&(uParam0->f_49), 15);
				}
				func_2126(uParam0, 1);
				func_1138(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_1149(uParam0) && ((get_game_timer() - uParam0->f_149) > 100 || func_537(&(uParam0->f_154))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_1151(-1530401853, 1086324736);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_1151(-1463467224, 1086324736);
					func_1151(1111052667, 1086324736);
				}
				else
				{
					func_1151(1111052667, 1086324736);
				}
				uParam0->f_149 = get_game_timer();
				func_1138(uParam0, 7);
			}
			break;
		case 5:
			func_2127();
			if (func_1149(uParam0) && ((get_game_timer() - uParam0->f_149) > 100 || func_537(&(uParam0->f_154))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_1151(-1878840211, 1086324736);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_1151(-1510453203, 1086324736);
					func_1151(-1783213919, 1086324736);
				}
				else
				{
					func_1151(-1783213919, 1086324736);
				}
				uParam0->f_149 = get_game_timer();
				func_1138(uParam0, 6);
			}
			break;
		case 9:
			if (func_1149(uParam0))
			{
				if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_1151(1335077954, 1086324736);
					return false;
				}
				func_1134(64);
				uParam0->f_149 = get_game_timer();
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					func_1151(-9448781, 1086324736);
					func_1132(2);
					func_1138(uParam0, 10);
				}
				else
				{
					func_1151(2101630952, 1086324736);
					func_1132(2);
					func_1138(uParam0, 10);
				}
			}
			break;
		case 10:
			if (has_anim_event_fired(Global_34, -560091334))
			{
				set_entity_visible(uParam0->f_133, true);
			}
			if (!func_311(&(uParam0->f_135[3]), 0) && (get_game_timer() - uParam0->f_149) > 500)
			{
				if (has_anim_event_fired(Global_34, 1070143458))
				{
					_play_sound_from_entity("cook_meat_sizzle_loop", uParam0->f_133, "Player_Campfire_Sounds", false, 0, 0);
					_0x9821b68cd3e05f2b("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					func_312(&(uParam0->f_135[3]), 1, 1, 1);
					func_2128(&(uParam0->f_135[3]), 1);
				}
			}
			if (func_313(&(uParam0->f_135[3]), 1))
			{
				uParam0->f_160 = -1;
				_set_object_burn_level(uParam0->f_133, 1f, true);
				if (_0x1252c029fc8ebb4d())
				{
					_0x709ba8c08c5c008d();
				}
				uParam0->f_135[4] = func_2018("STOW_ITEM", -69749786, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
				uParam0->f_135[5] = func_2018("EAT_MEAT", -1181049683, 1, 0, 0, 0, 570, 4000, 1, 1073741824, 1704213876, 0);
				func_593(&(uParam0->f_135[5]), 10, 1, 1);
				func_593(&(uParam0->f_135[4]), 10, 1, 1);
				func_366(&(uParam0->f_135[4]), -1067771379, 0, 1);
				func_366(&(uParam0->f_135[5]), -1067771379, 0, 1);
				if (func_2129(uParam0->f_49.f_61, 1, 0))
				{
					func_312(&(uParam0->f_135[4]), 0, 1, 1);
				}
				else if (!func_2123(2))
				{
					func_312(&(uParam0->f_135[5]), 0, 1, 1);
				}
				func_182(uParam0->f_135[3], 1, 1);
				func_542(&(uParam0->f_154));
				func_1134(2);
				uParam0->f_162 = 0;
				if (!func_569(0) || func_566())
				{
					uParam0->f_49.f_23 = func_595(uParam0->f_49.f_61, uParam0->f_49.f_62, 1, uParam0->f_49.f_11);
					func_312(&(uParam0->f_135[5]), 0, 1, 1);
				}
				_0x7e2c766adb2c5f1a(uParam0->f_49.f_61, 1);
				_0x0f2a2175734926d8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				func_184(&(uParam0->f_126), 256);
				func_1138(uParam0, 11);
			}
			else
			{
				func_2124(uParam0, iVar0);
				if (uParam0->f_160 == -1)
				{
					if (has_anim_event_fired(Global_34, 1070143458))
					{
						uParam0->f_160 = get_game_timer();
					}
				}
				else
				{
					fVar3 = func_2130(&(uParam0->f_135[3]), 1);
					fVar3 = func_2131(fVar3, 0f, 1f);
					_set_object_burn_level(uParam0->f_133, (1f * fVar3), true);
				}
			}
			break;
		case 11:
			if (func_1149(uParam0))
			{
				if (func_2021(&(uParam0->f_154), 0.1f))
				{
					uParam0->f_149 = get_game_timer();
					if (iVar0 == -283636008 || iVar0 == -341412437)
					{
						func_1151(-1065570550, 2f);
					}
					else
					{
						func_1151(-1295988014, 2f);
					}
				}
			}
			func_2125(uParam0);
			if (func_181(&(uParam0->f_135[5])))
			{
				if (func_311(&(uParam0->f_135[5]), 0) && (func_512(&(uParam0->f_135[5]), 1) || is_control_pressed(0, -1181049683)))
				{
					_0xd962f8579d702db5();
					func_1154(uParam0->f_49.f_61, 1, 1, 0, 0);
					func_182(uParam0->f_135[5], 1, 1);
					func_182(uParam0->f_135[4], 1, 1);
					func_2126(uParam0, 1);
					if (!func_569(0) || func_566())
					{
						func_1152(uParam0->f_49.f_61, 1, 1, -142743235);
					}
					uParam0->f_149 = get_game_timer();
					func_1138(uParam0, 13);
					return false;
				}
			}
			if (func_181(&(uParam0->f_135[4])))
			{
				if (((func_311(&(uParam0->f_135[4]), 0) && (func_512(&(uParam0->f_135[4]), 1) || is_control_pressed(0, -69749786))) || func_1450(Global_34, 0)) || _0x916b8e075abc8b4e(Global_34, 1))
				{
					_0xd962f8579d702db5();
					func_182(uParam0->f_135[4], 1, 1);
					func_182(uParam0->f_135[5], 1, 1);
					func_2126(uParam0, 1);
					func_1138(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			if (func_1149(uParam0) && ((get_game_timer() - uParam0->f_149) > 250 || func_537(&(uParam0->f_154))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_1151(528569882, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_1151(288708544, 1f);
				}
				else
				{
					func_1151(-915834315, 1f);
				}
				uParam0->f_149 = get_game_timer();
				func_1138(uParam0, 15);
			}
			break;
		case 13:
			func_2127();
			if (func_1149(uParam0) && ((get_game_timer() - uParam0->f_149) > 250 || func_537(&(uParam0->f_154))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_1151(709478876, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_1151(606164441, 1f);
				}
				else
				{
					func_1151(-414126081, 2f);
				}
				uParam0->f_149 = get_game_timer();
				func_1138(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_124 == 14 || uParam0->f_124 == 6)
			{
				func_2127();
			}
			if (has_anim_event_fired(Global_34, -243011316) || has_anim_event_fired(Global_34, -1208591336))
			{
				func_2132(uParam0, 1);
				if (uParam0->f_124 == 14 || uParam0->f_124 == 15)
				{
					if (func_431(256))
					{
						func_720(func_699(1643512046, -444296448), 1);
					}
					func_1138(uParam0, 12);
				}
				else
				{
					if (func_431(256))
					{
						func_720(func_699(-1108808256, -444296448), 1);
					}
					func_1138(uParam0, 8);
				}
			}
			else if ((get_game_timer() - uParam0->f_149) > 750)
			{
				if (!_0xc488b8c0e52560d8(Global_34))
				{
					if (iVar0 == -518407211 || iVar0 == 1662215698)
					{
						func_1138(uParam0, 12);
					}
					else if (iVar0 == -1433449364 || iVar0 == 2058555960)
					{
						func_1138(uParam0, 8);
					}
					else if (uParam0->f_124 == 14)
					{
						func_1138(uParam0, 13);
					}
					else if (uParam0->f_124 == 15)
					{
						func_1138(uParam0, 16);
					}
					else if (uParam0->f_124 == 7)
					{
						func_1138(uParam0, 4);
					}
					else if (uParam0->f_124 == 6)
					{
						func_1138(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			if (func_311(&(uParam0->f_135[3]), 0))
			{
				if (func_1450(Global_34, 0))
				{
					func_312(&(uParam0->f_135[3]), 0, 1, 1);
				}
			}
			if (func_512(&(uParam0->f_135[3]), 1))
			{
				func_2133(&(uParam0->f_135));
				if (uParam0->f_124 == 12)
				{
					func_2120(uParam0);
				}
				else
				{
					func_2134(uParam0);
				}
			}
			else if (func_512(&(uParam0->f_135[7]), 1))
			{
				func_2133(&(uParam0->f_135));
				func_1138(uParam0, 0);
				func_718(&(uParam0->f_49), 15);
				func_184(&(uParam0->f_126), 128);
			}
			else if (func_313(&(uParam0->f_135[1]), 1))
			{
				func_2133(&(uParam0->f_135));
				func_1138(uParam0, 0);
				func_184(&(uParam0->f_126), 128);
				func_712(&(uParam0->f_49), 0);
				play_sound_frontend("Exit", "SSCRFT_Sounds", true, 0);
				func_718(&(uParam0->f_49), 1);
				func_1138(uParam0, 0);
				return false;
			}
			else if (func_916(&(uParam0->f_135[1]), 1))
			{
				if (!func_537(&(uParam0->f_49.f_70)))
				{
					func_542(&(uParam0->f_49.f_70));
				}
				else if (func_903(&(uParam0->f_49.f_70), 0.1f))
				{
					func_1460(&(uParam0->f_135[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_537(&(uParam0->f_49.f_70)))
				{
					func_533(&(uParam0->f_49.f_70));
				}
				if (func_181(&(uParam0->f_135[1])))
				{
					func_1460(&(uParam0->f_135[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

struct<2> func_1511(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

bool func_1512(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case -1639263599:
			bVar0 = -764310200;
			break;
		case -1860710511:
			bVar0 = -764310200;
			break;
		case 1507636870:
			bVar0 = -764310200;
			break;
		case 1828724907:
			bVar0 = -764310200;
			break;
		case 1222378998:
			bVar0 = -764310200;
			break;
		case 2074469742:
			bVar0 = -764310200;
			break;
		case 1270940175:
			bVar0 = -764310200;
			break;
		case -1857826511:
			bVar0 = -764310200;
			break;
		case 480079517:
			bVar0 = -1504859554;
			break;
		case 840671577:
			bVar0 = -1504859554;
			break;
		case 1446246869:
			bVar0 = 1885857703;
			break;
		case -2006166057:
			bVar0 = 1885857703;
			break;
		case 1235846615:
			bVar0 = -1511427369;
			break;
		case -228768324:
			bVar0 = 2133046983;
			break;
		case -1411922943:
			bVar0 = -1511427369;
			break;
		case -834103244:
			bVar0 = -1511427369;
			break;
		case 34372170:
			bVar0 = 1151374672;
			break;
		case 963726415:
			bVar0 = -577893115;
			break;
		case 424030678:
			bVar0 = 165751297;
			break;
		case 446901936:
			bVar0 = 710736342;
			break;
		case -1092841802:
			bVar0 = -462374995;
			break;
		case -1452241321:
			bVar0 = 567069252;
			break;
		case -1188697038:
			bVar0 = -281894307;
			break;
		case 1671758975:
			bVar0 = -1127860381;
			break;
		case -893514737:
			bVar0 = -1894785522;
			break;
		case -2063089161:
			bVar0 = 469927692;
			break;
		case -452897925:
			bVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_331(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_2135(bVar0) || func_1284(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_1513(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (is_weapon_valid(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_1514(bool bParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_823(bParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_1515(bool bParam0, bool bParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (!func_2136(bParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_2137() };
	Var10.f_4 = uVar9;
	if (func_2138(bParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_2139(bParam0, 1))
			{
			}
		}
		if (func_2140(bParam0))
		{
			func_1515(func_2141(bParam0), 1);
		}
		func_2142();
		return true;
	}
	return false;
}

bool func_1516(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (!func_2143(bParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_2144(bParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_2145(bParam0, bParam2);
	iVar2 = 0;
	if (func_485(bParam0) == -1037537535)
	{
		if (!func_481(bParam0, 866047851) && !func_481(bParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1688(bParam0, 8388608) && !func_2146(27))
	{
		func_2147(27);
	}
	func_2148(bParam0);
	if (!bVar3)
	{
		if (func_481(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_1513(func_1512(bParam0, 1), 0);
			if (is_weapon_valid(bVar1))
			{
				if (func_41() == -1)
				{
					func_1514(bVar1);
				}
				if (func_569(0) && func_1285(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1897(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_2149(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_485(bParam0) == -427144552)
		{
			if (!func_2150(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_485(bParam0) == 307971639 && func_2151(bParam0))
		{
			if (!func_2152(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_481(bParam0, -103750053))
		{
			func_720(func_1511(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_720(func_699(-717883113, 2091222383), iVar0);
		}
		else if (func_481(bParam0, -121341956) && !func_481(bParam0, 606799272))
		{
			if (bParam0 != 191707516)
			{
				func_276(536, 0);
			}
			if (func_481(bParam0, -2017733358) || func_481(bParam0, -1369131378))
			{
			}
		}
		else if (func_481(bParam0, -136654233))
		{
			if (func_481(bParam0, -1021472396))
			{
			}
		}
		else if (func_481(bParam0, -1466706512) && func_481(bParam0, 1147021565))
		{
			func_276(519, 0);
		}
		else if (func_481(bParam0, 1147021565) && func_481(bParam0, -524514947))
		{
		}
		else if (func_481(bParam0, 554195525))
		{
		}
		else if (func_481(bParam0, 589988438))
		{
			if (func_2153())
			{
				func_2154(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_481(bParam0, 787083290) && func_481(bParam0, 949916894))
		{
			func_2155(bParam0);
		}
		else if (func_481(bParam0, -1718133314))
		{
			func_2156(bParam0);
		}
		else if (func_481(bParam0, -1738650224))
		{
			func_2157(bParam0);
		}
		else if (func_481(bParam0, -1112814642) && func_481(bParam0, 949916894))
		{
			func_2158(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_481(bParam0, 1841149704))
		{
			func_2159();
		}
		else if (func_481(bParam0, -1979000645))
		{
		}
		else if (func_481(bParam0, 606799272))
		{
		}
		else if (func_481(bParam0, -1112814642) && func_481(bParam0, -1697809989))
		{
		}
		else if (func_481(bParam0, -2017733358) || func_481(bParam0, -1369131378))
		{
		}
		else if (func_481(bParam0, -1921346699))
		{
			return false;
		}
		else if (func_481(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868:
					if (!func_332(215778062, 1))
					{
						func_1516(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_332(670273567, 1))
					{
						func_1516(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_332(-967317137, 1))
					{
						func_1516(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_332(526074061, 1))
					{
						func_1516(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_332(-1045488665, 1))
					{
						func_1516(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_332(471514780, 1))
					{
						func_1516(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_481(bParam0, -839724752) && func_1688(bParam0, 4))
		{
		}
		else if (func_481(bParam0, 1399091007))
		{
			func_2160(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
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
			case 1127253961:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case -160924582:
			case 1652431022:
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309:
				func_2161(272, func_1062(-21093309), 0);
				break;
			case 204375141:
				func_2161(270, func_1062(204375141), 0);
				break;
			case -417963070:
				func_2161(271, func_1062(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(685, 1934060482, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(685, 1110018439, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(685, -1228016946, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
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
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_2162(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_276(526, 0);
				break;
			case 1613651027:
				func_276(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_2146(1))
				{
					func_276(522, 0);
				}
				break;
			case -898386032:
				func_276(521, 0);
				break;
			case -2035110427:
				if (func_41() == -1)
				{
					bParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_276(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		bVar5 = bParam0;
		func_2163(&bVar5);
		if (!func_2149(bVar5, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_569(0))
		{
			return true;
		}
		if (func_485(bParam0) == -1037537535)
		{
			func_2164(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_569(0) && !func_566())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1516(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_2009(iVar2, 0);
		}
	}
	Var30 = { func_1507(bParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_2165(bParam0);
	if (fParam6 > 0f)
	{
		if (func_481(bParam0, -839724752))
		{
			func_2166(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_1506(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_1517(bool bParam0, int iParam1, int iParam2)
{
	if (!func_2167(bParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_1063(iParam1);
	Var0 = { func_627(0) };
	if (!func_2138(bParam0, &uVar5, &Var0, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

void func_1518(bool bParam0, int iParam1)
{
	Var0 = { func_2168(bParam0) };
	_0x6a0184e904cdf25e(&Var0, iParam1);
	if (!func_481(bParam0, 1714518167))
	{
		Var0 = { func_2169(bParam0) };
		if (Var0.f_1 != 0)
		{
			_0x6a0184e904cdf25e(&Var0, iParam1);
		}
	}
}

bool func_1519(int iParam0, int iParam1, var uParam2)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam2 = { Var0 };
	uParam2->f_5 = -1;
	uParam2->f_12 = -1;
	*uParam2 = func_1447(iParam0);
	if (_item_database_is_shop_layout_key_valid(*uParam2))
	{
		if (_item_database_get_shop_layout_info(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	*uParam2 = func_2170(iParam1);
	if (is_pc_version() || _is_stadia_version())
	{
		iVar44 = func_1749(iParam1);
		if (iVar44 != 0)
		{
			*uParam2 = iVar44;
		}
	}
	if (_item_database_is_shop_layout_key_valid(*uParam2))
	{
		if (_item_database_get_shop_layout_info(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	return false;
}

bool func_1520(var uParam0, int iParam1)
{
	iVar0 = func_2171(&(uParam0->f_2207));
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	if (!func_2172(iParam1, &iVar1))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_1659(iVar2, &(uParam0->f_2207)))
		{
			if (func_2173(&(uParam0->f_2207)) == iVar1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1521(bool bParam0, var uParam1)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam1 = { Var0 };
	uParam1->f_5 = -1;
	uParam1->f_12 = -1;
	*uParam1 = bParam0;
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return false;
	}
	if (!_item_database_get_shop_layout_info(*uParam1, &(uParam1->f_1)))
	{
		return false;
	}
	return true;
}

bool func_1522(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	if (func_1778(bParam1, &(uParam0->f_2207)))
	{
		iVar0 = func_1523(&(uParam0->f_2207));
		uVar1 = func_1779(&(uParam0->f_2207));
		iVar2 = func_1248();
		iVar3 = 0;
		bVar4 = false;
		iVar6 = func_2171(&(uParam0->f_2207));
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if (func_1659(iVar5, &(uParam0->f_2207)))
			{
				if (func_1781(uParam0, bParam1, &iVar3))
				{
					bVar4 = true;
				}
				else
				{
					iVar5++;
				}
				if (bVar4)
				{
					if (bParam2)
					{
						if (bParam7)
						{
							if (!func_1623())
							{
							}
							uParam0->f_2207.f_118 = 1;
						}
						else if (func_1209(&(uParam0->f_2207)))
						{
							uParam0->f_2207.f_79 = iVar3;
							if (!func_1269())
							{
							}
						}
						else
						{
							func_1782(uParam0);
						}
						if (iParam3 >= 0)
						{
							uParam0->f_2207.f_119 = iParam3;
						}
					}
					if (bParam4)
					{
						func_1783(uParam0);
						uParam0->f_2207.f_121 = 1;
						uParam0->f_2207.f_121.f_2 = iVar0;
						uParam0->f_2207.f_121.f_7 = bParam1;
						uParam0->f_2207.f_121.f_5 = uVar1;
						uParam0->f_2207.f_121.f_6 = iVar2;
						uParam0->f_2207.f_121.f_1 = 0;
					}
					return true;
				}
				return false;
			}
		}
	}
}

int func_1523(var uParam0)
{
	return uParam0->f_12;
}

int func_1524(var uParam0, bool bParam1)
{
	if (uParam0->f_2207.f_121)
	{
		uParam0->f_2207.f_121.f_5 = -1;
		uParam0->f_2207.f_121.f_3 = -1;
		uParam0->f_2207.f_121.f_2 = -1;
		uParam0->f_2207.f_121.f_7 = -1;
		uParam0->f_2207.f_121.f_8 = -1;
		uParam0->f_2207.f_121.f_1 = 0;
		uParam0->f_2207.f_121 = 0;
		func_2174(uParam0);
		if (bParam1)
		{
			func_1524(uParam0, 0);
		}
		return 1;
	}
	return 0;
}

void func_1525(var uParam0)
{
	uParam0->f_17 = 0;
}

void func_1526()
{
	Global_1915715->f_20241.f_3 = 0;
}

void func_1527(var uParam0)
{
	uParam0->f_2207.f_45 = 0;
}

char* func_1528(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return "SHOP_TITLE_BAIT";
		case 12:
			return "SHOP_TITLE_BANK";
		case 8:
			return "SHOP_TITLE_BARBER";
		case 30:
			return "SHOP_TITLE_BARTENDER";
		case 24:
			return "SHOP_TITLE_";
		case 25:
			return "SHOP_TITLE_BOUNTYHUNTING_MP_RETURN";
		case 10:
			return "SHOP_TITLE_BUTCHER";
		case 21:
			return "SHOP_TITLE_CAMP_SHAVING";
		case 26:
			return "SHOP_TITLE_COACH";
		case 0:
			return "SHOP_TITLE_DOCTOR";
		case 4:
			return "SHOP_TITLE_FENCE";
		case 3:
			return "SHOP_TITLE_GENERAL";
		case 6:
			return "SHOP_TITLE_GUNSMITH";
		case 23:
			return "SHOP_TITLE_TRAINER";
		case 9:
			return "SHOP_TITLE_HORSE_SHOP";
		case 2:
			return "SHOP_TITLE_POST";
		case 22:
			return "SHOP_TITLE_QUARTER";
		case 7:
			return "SHOP_TITLE_TAILOR";
		case 1:
			return "SHOP_TITLE_TRAIN_STATION";
		case 5:
			return "SHOP_TITLE_HORSE_FENCE";
		case 15:
			return "SHOP_TITLE_GUS";
		case 16:
			return "SHOP_TITLE_PEARSON";
		case 17:
			return "SHOP_TITLE_HOTEL";
		case 27:
			return "SHOP_TITLE_WILDERNESS_SUPPLIES";
		case 28:
			return "GC_LOCK_TITLE";
		case 29:
			return "NET_CAMP_BUTCHER";
		case 34:
			return "SHOP_TITLE_HANDHELD";
		case 18:
			return "SHOP_TITLE_PHOTO_STUDIO";
		case 20:
			return "SHOP_TITLE_WARDROBE";
		case 38:
			return "SHOP_TITLE_TRAVELLING_SALESMAN";
		case 39:
			return "SHOP_TITLE_HARRIET";
		case 33:
			return "SHOP_TITLE_MP_MOONSHINER";
		case 37:
			return "SHOP_TITLE_MP_MOONSHINE_PROP";
		default:
			break;
	}
	return "INVALID SHOP";
}

void func_1529(var uParam0, int iParam1, int iParam2)
{
	func_2175(uParam0, iParam1, _get_label_text_by_hash(iParam2));
}

void func_1530(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_1850(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1662(iParam1, bVar0), bParam2);
}

void func_1531(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_1563(uParam0, iParam1);
	bVar1 = func_1564(uParam0, iParam1);
	func_1257(uParam0, iParam1, 0);
	func_1530(uParam0, iParam1, 0);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1663(iParam1), bParam2);
	func_1257(uParam0, iParam1, bVar0);
	func_1530(uParam0, iParam1, bVar1);
}

int func_1532(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return func_2176(uParam0, uParam1);
		case -384358143:
			if (func_1017(func_764(uParam1->f_9), 2))
			{
				return func_2177(uParam0, uParam1);
			}
			else
			{
				return func_2178(uParam0, uParam1);
			}
			break;
		case -1048755899:
			return func_2179(uParam0, uParam1);
		case -349391286:
			return func_2180(uParam0, uParam1);
		case -1928601151:
			return func_2181(uParam0, uParam1);
		case -1086794738:
			return func_2182(uParam0, uParam1);
		case -1702260384:
			return func_2183(uParam0, uParam1);
		case -760956867:
			return func_2184(uParam0, uParam1);
		case 38807286:
			return func_2185(uParam0, uParam1);
		case -1395073769:
			return func_2186(uParam0, uParam1);
		case 1425890997:
			return func_2187(uParam0, uParam1);
		case -853534656:
			return func_2188(uParam0, uParam1);
		case 777890122:
			return func_2189(uParam0, uParam1);
		case -1502467280:
			return func_2190(uParam0, uParam1);
		case -239176093:
			return func_2191(uParam0, uParam1);
		case -87783305:
			return func_2192(uParam0, uParam1);
		case 848718617:
			return func_2193(uParam0, uParam1);
		case -1080155519:
			return func_2194(uParam0);
		case 1394581936:
			return func_2195(uParam0, uParam1);
		case 193788635:
			return func_2196(uParam0, uParam1);
		case -1198174119:
			return func_2197(uParam0, uParam1);
		case 1119253406:
			return func_2198(uParam0, uParam1);
		case 1837492866:
			return func_2199(uParam0);
		case -339889117:
			return func_2200(uParam0, uParam1);
		case -348190488:
			return func_2201(uParam0, uParam1);
		case 1702073444:
			return func_2202(uParam0, uParam1);
		case -584027224:
			return func_2203(uParam0, uParam1->f_9);
		case -467661559:
			return func_2204(uParam0, uParam1->f_9);
		case -1968468235:
			return func_2205(uParam0, uParam1);
		case 761079318:
			return func_2206(uParam0, uParam1);
		case 1942587409:
			return func_2207(uParam0, uParam1);
		case 753463028:
			return func_2208(uParam0, uParam1);
		case 2077448405:
			return func_2209(uParam0, uParam1);
		case -2056428614:
			return func_2210(uParam0, uParam1);
		case -395279071:
			return func_2211(uParam0, uParam1);
		case 420195545:
			return func_2212(uParam0, uParam1);
		case -698448975:
			return func_2213(uParam0, uParam1);
		case -627085098:
			return func_2214(uParam0, uParam1);
		case -841939068:
			return func_2215(uParam0, uParam1);
		case 1751567119:
			return func_2216(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_2217(uParam0, uParam1);
	}
	return 1;
}

int func_1533(var uParam0, var uParam1, bool bParam2)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return func_2218(uParam0, uParam1);
		case -1968468235:
			return 1;
		case -384358143:
			return func_2219(uParam0, uParam1);
		case -1928601151:
		case -349391286:
			return func_2220(uParam0, uParam1);
		case -760956867:
			return func_2221(uParam0, uParam1);
		case 38807286:
			return func_2222(uParam0, uParam1);
		case -1395073769:
			return func_2223(uParam0, uParam1);
		case 1425890997:
			return func_2224(uParam0, uParam1);
		case -853534656:
			return func_2225(uParam0, uParam1);
		case 777890122:
			return func_2226(uParam0, uParam1, bParam2);
		case -1502467280:
			if (func_2227(uParam1->f_7))
			{
				return func_2219(uParam0, uParam1);
			}
			else
			{
				return func_2228(uParam0, uParam1, bParam2);
			}
			break;
		case -1048755899:
			return func_2229(uParam0, uParam1);
		case -239176093:
			return func_2230(uParam0, uParam1);
		case -87783305:
			return func_2231(uParam0, uParam1);
		case 848718617:
			return func_2232(uParam0, uParam1);
		case -1080155519:
			return func_2233(uParam0, uParam1);
		case 1394581936:
			return func_2234(uParam0, uParam1);
		case 193788635:
			return func_2235(uParam0, uParam1);
		case -1198174119:
			return func_2236(uParam0, uParam1);
		case 1119253406:
			return func_2237(uParam0, uParam1);
		case 1837492866:
			return func_2238(uParam0, *uParam1);
		case -339889117:
			return func_2239(uParam0, *uParam1);
		case -348190488:
			return func_2240(uParam0, *uParam1);
		case 1702073444:
			return func_2241(uParam0, *uParam1, bParam2);
		case -584027224:
			return func_2242(uParam0, uParam1);
		case -467661559:
			return func_2243(uParam0, uParam1);
		case 761079318:
			return func_2244(uParam0, uParam1);
		case 1942587409:
			return func_2245(uParam0, uParam1);
		case 753463028:
			return func_2246(uParam0, uParam1);
		case -2056428614:
			return func_2247(uParam0, uParam1);
		case 2077448405:
			return func_2248(uParam0, uParam1);
		case -698448975:
			return func_2249(uParam0, uParam1);
		case -627085098:
			return func_2250(uParam0, uParam1);
		case -841939068:
			return func_2251(uParam0, uParam1);
		case 1751567119:
			return func_2252(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_2253(uParam0, uParam1);
	}
	return 1;
}

bool func_1534(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1751(bParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(bParam1, bParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			bVar14 = false;
			while (bVar14 < Var0.f_6)
			{
				if (_item_database_get_shop_layout_menu_info_by_index(bParam1, bParam2, bVar14, &bVar7))
				{
					if (func_1534(uParam0, bParam1, bVar7, bParam3))
					{
						return true;
					}
				}
				bVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			bVar15 = -1;
			bVar16 = false;
			while (bVar16 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(bParam1, bParam2, bVar16, &bVar15))
				{
					if (func_2254(uParam0, bParam1, bVar15, bParam3))
					{
						return true;
					}
				}
				bVar16++;
			}
		}
	}
	return false;
}

bool func_1535(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_4 == 179)
	{
		return false;
	}
	if (!func_1751(bParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(bParam1, bParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			bVar14 = false;
			while (bVar14 < Var0.f_6)
			{
				if (_item_database_get_shop_layout_menu_info_by_index(bParam1, bParam2, bVar14, &bVar7))
				{
					if (func_1535(uParam0, bParam1, bVar7, bParam3))
					{
						return true;
					}
				}
				bVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			bVar15 = -1;
			bVar16 = false;
			while (bVar16 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(bParam1, bParam2, bVar16, &bVar15))
				{
					if (func_2255(uParam0, bParam1, bVar15, bParam3))
					{
						return true;
					}
				}
				bVar16++;
			}
		}
	}
	return false;
}

bool func_1536(var uParam0)
{
	return (func_1540() == 491602716 && func_210(&(uParam0->f_2506), 4));
}

void func_1537(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_1858(uParam0, iParam1, _get_label_text_by_hash(iParam2), bParam3, bParam4, bParam5);
}

bool func_1538()
{
	iVar0 = 1;
	while (iVar0 <= 11)
	{
		iVar1 = func_1560(iVar0);
		if (func_331(iVar1, 0))
		{
			Var2 = { func_772(iVar1, 0, 0) };
		}
		else
		{
			Var2.f_4 = 0;
		}
		if (func_628(iVar1, Var2, Var2.f_4, 0, 0, 0) <= 0)
		{
		}
		else if (!func_1330(2, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1539(bool bParam0)
{
	if (!func_331(bParam0, 0))
	{
	}
	if (func_481(bParam0, -1285438911))
	{
		return true;
	}
	return false;
}

bool func_1540()
{
	return Global_1952637->f_1675;
}

bool func_1541(bool bParam0)
{
	return func_2256(bParam0, &uVar0);
}

void func_1542(var uParam0, int iParam1, int iParam2)
{
	if (func_628(-55206167, func_627(1), -1990194462, 1, 0, 0) <= 5)
	{
		func_1537(uParam0, 2, 0, 0, 0, 0);
		return;
	}
	iVar0 = func_1335(iParam1, 1);
	if (&Global_1952637->f_1675.f_1[iVar0] == iParam2 || func_1327(iParam2, 0))
	{
		func_1537(uParam0, 2, -1208531349, 0, 0, 0);
	}
	else if (func_1541(iParam2))
	{
		func_1537(uParam0, 2, -1208531349, 1, 1, 0);
	}
	else
	{
		func_1537(uParam0, 2, 920855044, 1, 1, 0);
	}
}

void func_1543(var uParam0, int iParam1)
{
	if (func_459(iParam1) == 119907797)
	{
		uParam0->f_10 = func_2257(iParam1, uParam0->f_12);
	}
}

void func_1544(var uParam0, int iParam1, int iParam2)
{
	if (!Global_1915715->f_23051.f_22)
	{
		func_1179(iParam2, uParam0);
	}
	iVar0 = func_2258(iParam1);
	if (Global_1915715->f_23051.f_1 != 0 && func_2259(iVar0) == func_2259(Global_1915715->f_23051.f_1))
	{
		return;
	}
	if (func_43(get_cam_coord(*uParam0)))
	{
		func_2260(&(Global_1915715->f_23051.f_16), &(Global_1915715->f_23051.f_19), &(Global_1915715->f_23051.f_24[0]->f_9), &(Global_1915715->f_23051.f_24[0]->f_6), &(Global_1915715->f_23051.f_24[0]->f_10), &(Global_1915715->f_23051.f_24[0]->f_11));
	}
	else
	{
		Global_1915715->f_23051.f_16 = { get_cam_coord(*uParam0) };
		Global_1915715->f_23051.f_19 = { get_cam_rot(*uParam0, 2) };
	}
	Global_1915715->f_23051.f_1 = iVar0;
	func_2260(&(Global_1915715->f_23051.f_2), &(Global_1915715->f_23051.f_2.f_3), &(Global_1915715->f_23051.f_2.f_9), &(Global_1915715->f_23051.f_2.f_6), &(Global_1915715->f_23051.f_2.f_10), &(Global_1915715->f_23051.f_2.f_11));
	if (!does_cam_exist(*uParam0))
	{
	}
	Global_1915715->f_23051.f_221 = 0;
	func_449(1);
	func_1574(0);
	set_cam_params(*uParam0, Global_1915715->f_23051.f_2, Global_1915715->f_23051.f_2.f_3, Global_1915715->f_23051.f_2.f_9, 500, 6, 6, 2, 1, 0);
	if (func_2261(Global_1915715->f_23051.f_1))
	{
		set_cam_near_clip(*uParam0, 0.25f);
	}
	else
	{
		set_cam_near_clip(*uParam0, 0.15f);
	}
	func_1573(*uParam0, func_2259(Global_1915715->f_23051.f_1));
}

void func_1545(var uParam0, int iParam1)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	if (!Global_1915715->f_23051.f_22)
	{
		func_1179(iParam1, uParam0);
	}
	if (Global_1915715->f_23051.f_1 == -999503751 || Global_1915715->f_23051.f_1 == 0)
	{
		return;
	}
	Global_1915715->f_23051.f_1 = -999503751;
	func_1574(1);
	set_cam_params(*uParam0, *Global_1915715->f_23051.f_24[0], Global_1915715->f_23051.f_24[0]->f_3, Global_1915715->f_23051.f_24[0]->f_9, 500, 6, 6, 2, 1, 0);
	set_cam_near_clip(*uParam0, 0.15f);
	func_449(0);
	func_1573(*uParam0, 0);
}

void func_1546(bool bParam0)
{
	Global_1915715->f_21859 = bParam0;
}

bool func_1547(bool bParam0)
{
	if ((bParam0 == 207706105 || bParam0 == -1998614617) || bParam0 == -357182937)
	{
		return true;
	}
	return false;
}

void func_1548(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_459(bParam0))
	{
		case -2061583405:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_481(bParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_995(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = &Var1.f_1[iVar121];
						if (func_331(bVar122, 0))
						{
							func_1548(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_481(bParam0, 160827531))
			{
				bVar0 = func_2262(bParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_2263(0, bParam0);
	}
	if (bParam2)
	{
		func_2264();
	}
	if (bParam1)
	{
		func_206(0, 0);
	}
}

bool func_1549(int iParam0, bool bParam1)
{
	return func_2265(iParam0, 0) < func_2266(iParam0, bParam1);
}

void func_1550(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_459(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_481(bParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_481(bParam0, 160827531))
			{
				bVar1 = func_2267(bParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_2264();
	if (func_2268(iVar0) || (iVar0 != -999503751 && func_481(bParam0, -166674229)))
	{
		_0x766315a564594401(func_489(bParam5), bParam0, 0);
	}
	func_1492(bParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_2263(1, bParam0);
	}
	if (bParam2)
	{
		func_206(0, 0);
	}
}

bool func_1551(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		bVar1 = &Global_1952637->f_3334[iVar0];
		if (func_459(bVar1) == iParam0 || (iParam0 == 81053684 && func_481(bVar1, 160827531)))
		{
			if (iParam1 == bVar1)
			{
			}
			else
			{
				return bVar1;
			}
		}
		iVar0++;
	}
	return false;
}

int func_1552(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_2062(iVar0);
}

void func_1553(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_2269(bParam0, bParam1))
	{
		func_2270(bParam0, bParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

void func_1554(int iParam0, int iParam1)
{
	if (!func_331(iParam0, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_2091(iParam0, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			sVar4 = "Transaction_Positive";
			iVar6 = 109029619;
			iVar7 = func_744(iParam0);
			if ((iVar7 > 0 && iVar7 < 11) && func_1330(4, iVar7))
			{
				sVar3 = "OUTFIT_SAVED_LITERAL";
				sVar5 = func_2271(func_1887(iVar7));
			}
			else
			{
				sVar3 = "ITEM_SAVED";
				sVar5 = _create_var_string(0, func_1062(iParam0));
			}
			break;
		case 1:
			sVar4 = "Transaction_Negative";
			iVar6 = 619977481;
			iVar7 = func_744(iParam0);
			if ((iVar7 > 0 && iVar7 < 11) && func_1330(4, iVar7))
			{
				sVar3 = "OUTFIT_DELETED_LITERAL";
				sVar5 = func_2271(func_1887(iVar7));
			}
			else
			{
				sVar3 = "ITEM_DELETED";
				sVar5 = _create_var_string(0, func_1062(iParam0));
			}
			break;
	}
	sVar8 = func_669(_create_var_string(10, sVar3, sVar5), iVar6);
	func_2101(sVar8, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

bool func_1555(var uParam0, var uParam1, bool bParam2)
{
	iVar0 = 0;
	iVar1 = uParam0;
	if (!bParam2)
	{
		iVar0 = 1;
	}
	while (iVar0 < 11)
	{
		if (iVar1 == Global_17411.f_55.f_644.f_33[iVar0]->f_1)
		{
			*uParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1556(int iParam0)
{
	Global_17411.f_55.f_644.f_33[iParam0] = 0;
	Global_17411.f_55.f_644.f_33[iParam0]->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1952637->f_83[iVar0];
		func_2272(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

void func_1557(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (&Global_17411.f_55.f_644.f_33[iParam1] - (Global_17411.f_55.f_644.f_33[iParam1] && iParam0));
	}
}

void func_1558(int iParam0)
{
	StringCopy(Global_17411.f_2625[iParam0], "", 64);
	func_1557(4, iParam0, 6);
}

bool func_1559(var uParam0)
{
	iVar0 = 1;
	while (iVar0 <= 11)
	{
		iVar1 = func_1560(iVar0);
		Var2 = { func_772(iVar1, 0, 0) };
		if (func_628(iVar1, Var2, Var2.f_4, 0, 0, 0) <= 0)
		{
		}
		else if (!func_1330(2, iVar0))
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1560(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 217155793;
		case 2:
			return 97391779;
		case 3:
			return -808817534;
		case 4:
			return 1270922359;
		case 5:
			return -2011879201;
		case 6:
			return -1063340820;
		case 7:
			return 2127262701;
		case 8:
			return -1323870201;
		case 9:
			return 1632140501;
		case 10:
			return 967218463;
		default:
			break;
	}
	return 0;
}

void func_1561(var uParam0)
{
	func_2273(uParam0);
	if (_uiprompt_is_valid(Global_1915715->f_23051.f_222) && func_737(Global_1915715->f_23051.f_1))
	{
		if (_uiprompt_is_hold_mode_running(Global_1915715->f_23051.f_222))
		{
			if (!Global_1915715->f_23051.f_221)
			{
				func_2274(uParam0);
			}
		}
		else if (Global_1915715->f_23051.f_221)
		{
			func_2274(uParam0);
		}
	}
}

void func_1562(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
}

bool func_1563(var uParam0, int iParam1)
{
	bVar0 = func_1850(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2207.f_53, func_1661(iParam1, bVar0));
}

bool func_1564(var uParam0, int iParam1)
{
	bVar0 = func_1850(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2207.f_53, func_1662(iParam1, bVar0));
}

void func_1565(bool bParam0)
{
	func_362(&(Global_1915715->f_20241.f_3), bParam0);
}

void func_1566()
{
	func_2275(&(Global_1952637->f_2897));
}

bool func_1567(var uParam0, var uParam1, struct<4> Param2)
{
	iVar3 = &uParam0->f_1[34];
	iVar4 = &uParam0->f_1[18];
	iVar5 = 0;
	if (func_1160() == 24043185)
	{
		iVar5 = 1;
	}
	if (func_459(iVar4) != 912453393)
	{
		iVar4 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = (&uParam0->f_1[iVar0] == 0 || func_1327(&(uParam0->f_1[iVar0]), 1));
		if (!bVar1)
		{
			iVar2 = &uParam0->f_1[iVar0];
			Var6 = { func_772(iVar2, 1, 0) };
			func_2276(iVar0, &(uParam0->f_1[iVar0]));
			if (func_628(iVar2, Var6, Var6.f_4, 1, 0, 0) == 0)
			{
				func_2277(uParam1, 1, iVar0, 0);
			}
			else if ((&uParam0->f_1[iVar0] != 1733464892 && &uParam0->f_1[iVar0] != -230310728) && &uParam0->f_1[iVar0] != 1326838792)
			{
				if (_get_ped_component_category(&(uParam0->f_1[iVar0]), iVar5, true) == 0)
				{
					func_2277(uParam1, 1, iVar0, 0);
				}
				else
				{
					func_2278(uParam1, iVar0, iVar2);
					Jump @313; //curOff = 274
					func_2276(iVar0, &(Global_1952637->f_83[iVar0]));
					func_2279(Global_1952637->f_1794.f_1[iVar0], 16, 6);
					if (func_2280(iVar0, iVar3, iVar4))
					{
						if (!func_2281(uParam0, iVar0, Param2))
						{
							func_2277(uParam1, 1, iVar0, 1);
						}
						else
						{
							Jump @416; //curOff = 355
							Jump @416; //curOff = 358
							if (!func_2282(&(uParam0->f_1[iVar0]), func_1876(Param2, Global_1952637->f_83[iVar0]->f_9, 1, -1), iVar0, Param2, 0))
							{
								func_2277(uParam1, 1, iVar0, 0);
							}
						}
						iVar0++;
						func_2283(&(Global_1952637->f_1794), uParam1, Param2);
						if (*uParam1 != 1)
						{
							func_2277(uParam1, 0, -1, 0);
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_1568(var uParam0, bool bParam1)
{
	if (uParam0->f_17 == 0)
	{
		bVar0 = bParam1;
	}
	else
	{
		bVar0 = uParam0->f_17;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_57))
	{
		_databinding_write_data_hash_string(uParam0->f_2207.f_57, bVar0);
	}
	else
	{
		uParam0->f_2207.f_57 = _databinding_add_data_hash(uParam0->f_2207.f_50, "PageFilterCurrentPageLabel", bVar0);
	}
}

bool func_1569(var uParam0)
{
	uParam0->f_2207.f_49 = 0;
	return _0x3d084d5568fb4028(40);
}

bool func_1570(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

void func_1571(int iParam0)
{
	Global_17411.f_55.f_644.f_1734 = (Global_17411.f_55.f_644.f_1734 || iParam0);
}

void func_1572(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	vVar3 = { get_entity_coords(iParam0, true, false) };
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 14)
	{
		if (iVar7 != 0)
		{
			if (iParam1 == -1 || !func_2285(&vVar0, iParam1, iParam2, func_2284(iVar7, "CamPosOffset")))
			{
				vVar0 = { func_2286(iVar7) };
			}
			*Global_1915715->f_23051.f_24[iVar7] = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
		}
		if (iParam1 == -1 || !func_2285(&vVar0, iParam1, iParam2, func_2284(iVar7, "LookAt")))
		{
			vVar0 = { func_2287(iVar7) };
		}
		vVar0 = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
		if (Global_1915715->f_23051.f_240 && iVar7 != 0)
		{
			vVar0 = { func_2288(&vVar0, &vVar3) };
		}
		Global_1915715->f_23051.f_24[iVar7]->f_6 = { vVar0 };
		if (iVar7 != 0)
		{
			Global_1915715->f_23051.f_24[iVar7]->f_3 = { func_2289(*Global_1915715->f_23051.f_24[iVar7], vVar0) };
		}
		if (iParam1 == -1 || !func_2290(&fVar6, iParam1, iParam2, func_2284(iVar7, "FOV")))
		{
			fVar6 = func_2291(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_9 = fVar6;
		if (iParam1 == -1 || !func_2290(&fVar6, iParam1, iParam2, func_2284(iVar7, "FNum")))
		{
			fVar6 = func_2292(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_10 = fVar6;
		if (iParam1 == -1 || !func_2290(&fVar6, iParam1, iParam2, func_2284(iVar7, "FocusDistance")))
		{
			fVar6 = func_2293(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_11 = fVar6;
		if (Global_1915715->f_23051.f_240 && iVar7 != 0)
		{
			*Global_1915715->f_23051.f_24[iVar7] = { func_2294(iVar7) };
		}
		if (iParam1 == -1 || !func_2290(&fVar6, iParam1, iParam2, func_2284(iVar7, "PitchMin")))
		{
			fVar6 = func_2295(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_13 = fVar6;
		if (iParam1 == -1 || !func_2290(&fVar6, iParam1, iParam2, func_2284(iVar7, "PitchMax")))
		{
			fVar6 = func_2296(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_12 = fVar6;
		iVar7++;
	}
}

void func_1573(var uParam0, int iParam1)
{
	_0x11f32bb61b756732(uParam0, Global_1915715->f_23051.f_24[iParam1]->f_11);
	Var0 = { func_2297(iParam1) };
	_0xe4b7945ef4f1bfb2(uParam0, &Var0);
}

void func_1574(bool bParam0)
{
	if (bParam0)
	{
		Global_1915715->f_23051.f_1 = 0;
		Global_1915715->f_23051.f_226 = { *Global_1915715->f_23051.f_24[0] };
		Global_1915715->f_23051.f_229 = { Global_1915715->f_23051.f_24[0]->f_3 };
		Global_1915715->f_23051.f_236 = get_distance_between_coords(*Global_1915715->f_23051.f_24[0], Global_1915715->f_23051.f_24[0]->f_6, true);
	}
	else
	{
		Global_1915715->f_23051.f_226 = { Global_1915715->f_23051.f_2 };
		Global_1915715->f_23051.f_229 = { Global_1915715->f_23051.f_2.f_3 };
		Global_1915715->f_23051.f_236 = get_distance_between_coords(Global_1915715->f_23051.f_2, Global_1915715->f_23051.f_2.f_6, true);
	}
	Global_1915715->f_23051.f_232 = 0f;
	Global_1915715->f_23051.f_233 = 0f;
	Global_1915715->f_23051.f_234 = Global_1915715->f_23051.f_229;
	Global_1915715->f_23051.f_235 = Global_1915715->f_23051.f_229.f_2;
	Global_1915715->f_23051.f_224 = 0f;
	Global_1915715->f_23051.f_225 = 0f;
	Global_1915715->f_23051.f_237 = 0;
}

int func_1575(bool bParam0)
{
	iVar0 = func_459(bParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_481(bParam0, 160827531)) || func_481(bParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_1576(bool bParam0)
{
	Var0 = { func_772(bParam0, 1, 0) };
	return func_2062(Var0.f_4);
}

bool func_1577(bool bParam0)
{
	switch (func_459(bParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case 119907797:
			return true;
		case 1388798186:
			return true;
		default:
			break;
	}
	if (func_481(bParam0, 160827531))
	{
		return true;
	}
	return false;
}

void func_1578(bool bParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_2685[func_1335(bParam0, 1)])->f_1 = ((Global_1952637->f_2685[func_1335(bParam0, 1)])->f_1 || iParam1);
}

var func_1579(var uParam0)
{
	return uParam0->f_12.f_1;
}

int func_1580(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277;
	}
	switch (iParam0)
	{
		case -450053710:
			return -974145463;
		case -1679658797:
			return 1432602132;
		case 1792770814:
			return 92296905;
		case -1963397600:
			return -842044823;
		case -1250098797:
			return 1371398552;
		case -318278790:
			return -745453539;
		case 55096099:
			return 1583029039;
		case -458397856:
			return -783061276;
		case -444610976:
			return -1322521536;
		case 746627200:
			return 728055838;
		case 705691988:
			return 1100711204;
		case 2130094044:
			return -1782334639;
		case -1554827654:
			return -1181052732;
		case -1029277326:
			return -179102320;
		case -1140650619:
			return -1266863668;
		case -1999198818:
			return -2078767648;
		case -403470324:
			return -852553462;
		case -925223936:
			return -80004868;
		case -1547438906:
			return 1813208211;
		case -635239558:
			return 836323303;
		case -2026265047:
			return 153881023;
		case -586898625:
			return -1256798240;
		case 937246805:
			return 2118089359;
		case 1593035738:
			return -1537586382;
		case 861505058:
			return 1440692746;
		case 687445866:
			return 697143532;
		case 1705182311:
			return 281128160;
		case -78273782:
			return 1854519167;
		case -819697512:
			return -1376299681;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230;
		case 2024948086:
			return 1974379573;
		case 1696286663:
			return 545109431;
		case -1342159303:
			return 1275638003;
		case -1154406788:
			return 2083573823;
		case 2030804811:
			return 1235275977;
		case 1230359523:
			return 892601357;
		case -1038436471:
			return 1224695367;
		case 96930969:
			return 648301150;
		case -1180427609:
			return -1597490733;
		case 2119038574:
			return 2000205872;
		case 43825738:
			return -1428527735;
		case 2145697477:
			return 170010697;
		case -1261814606:
			return -742726637;
		case 107013696:
			return -1714171692;
		case 1066034872:
			return -103101636;
		case 36009259:
			return -1999094324;
		case -1599683008:
			return 1724200240;
		case -1693870200:
			return 237935328;
		case 1072019803:
			return 120848852;
		case 1074477367:
			return -868094182;
		case -85890205:
			return -887362763;
		case -727455979:
			return -847714194;
		case -1667789645:
			return 1756765331;
		case -1924405794:
			return -813071670;
		case 1861665605:
			return -1900569233;
		case -526169133:
			return 1688250187;
		case 2120708491:
			return -1262715164;
		case 900144280:
			return 2010625508;
		case 1133837220:
			return -136225010;
		case 1702024301:
			return -225011104;
		case -1604180548:
			return -1882436593;
		case -683592019:
			return -757978903;
		case 337109765:
			return 1909854428;
		case -619132373:
			return 1592694494;
		case 1544366970:
			return 981469777;
		case -1441144351:
			return 1064693514;
		case -1717674545:
			return -1365665739;
		case 1825358734:
			return 1577022605;
		case 1138427579:
			return 381495209;
		case -1720251851:
			return 3032834;
		case 506887890:
			return -1722101672;
		case 766293155:
			return -189605757;
		case 2147082926:
			return 863391233;
		case -390136947:
			return -952011226;
		case 1104566530:
			return -356470463;
		case -1142861801:
			return -1750687713;
		case -417416199:
			return -272192064;
		case -1460773772:
			return 1935859332;
		case 1476007840:
			return -1898310680;
		case -1616287563:
			return 885568364;
		case -127412252:
			return -1540355548;
		case -1881155818:
			return -601560591;
		case -955237712:
			return -370362766;
		case -647020346:
			return -1698261864;
		case -1846319726:
			return -670301166;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case 1772321403:
			return -1331210307;
		case -1230516683:
			return 122449722;
		case 594040097:
			return -1784502482;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104;
		case 84224102:
			return -1427377767;
		case 1496579364:
			return -2055655009;
		case -1896838685:
			return -1293672675;
		case -420599285:
			return -1179079660;
		case 478986344:
			return 805526368;
		case 917402668:
			return -235714362;
		case -914712122:
			return -1678164;
		case -598917269:
			return -977833913;
		default:
			break;
	}
	return 0;
}

int func_1581(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	iVar0 = func_2298(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

int func_1582(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case -450053710:
			return -311956671;
		case -1679658797:
			return -311956671;
		case 1792770814:
			return -311956671;
		case -1963397600:
			return -311956671;
		case -1250098797:
			return 356361174;
		case -318278790:
			return 356361174;
		case 55096099:
			return 356361174;
		case -458397856:
			return 356361174;
		case -444610976:
			return -1771663379;
		case 746627200:
			return -1771663379;
		case 705691988:
			return -1771663379;
		case 2130094044:
			return -311956671;
		case -1554827654:
			return -311956671;
		case -1029277326:
			return -311956671;
		case -1140650619:
			return -311956671;
		case -1999198818:
			return -2030355032;
		case -403470324:
			return -2030355032;
		case -925223936:
			return -2030355032;
		case -1547438906:
			return -1771663379;
		case -635239558:
			return -1771663379;
		case -2026265047:
			return -1771663379;
		case -586898625:
			return 918497150;
		case 937246805:
			return 918497150;
		case 1593035738:
			return -311956671;
		case 861505058:
			return -311956671;
		case 687445866:
			return -311956671;
		case 1705182311:
			return -1771663379;
		case -78273782:
			return -1771663379;
		case -819697512:
			return -1771663379;
		case -247265944:
			return 997958153;
		case -1265030920:
			return 997958153;
		case 2024948086:
			return 997958153;
		case 1696286663:
			return 997958153;
		case -1342159303:
			return -1651618152;
		case -1154406788:
			return -1651618152;
		case 2030804811:
			return 997958153;
		case 1230359523:
			return 997958153;
		case -1038436471:
			return 997958153;
		case 96930969:
			return 997958153;
		case -1180427609:
			return -1651618152;
		case 2119038574:
			return -1651618152;
		case 43825738:
			return -1651618152;
		case 2145697477:
			return 356361174;
		case -1261814606:
			return 356361174;
		case 107013696:
			return 356361174;
		case 1066034872:
			return 918497150;
		case 36009259:
			return 918497150;
		case -1599683008:
			return 918497150;
		case -1693870200:
			return 918497150;
		case 1072019803:
			return 997958153;
		case 1074477367:
			return 997958153;
		case -85890205:
			return 997958153;
		case -727455979:
			return 997958153;
		case -1667789645:
			return 997958153;
		case -1924405794:
			return 356361174;
		case 1861665605:
			return 356361174;
		case -526169133:
			return 356361174;
		case 2120708491:
			return 356361174;
		case 900144280:
			return 356361174;
		case 1133837220:
			return -1651618152;
		case 1702024301:
			return -1651618152;
		case -1604180548:
			return -1651618152;
		case -683592019:
			return -1651618152;
		case 337109765:
			return -1651618152;
		case -619132373:
			return -1651618152;
		case 1544366970:
			return -1651618152;
		case -1441144351:
			return -1651618152;
		case -1717674545:
			return -1651618152;
		case 1825358734:
			return -1651618152;
		case 1138427579:
			return -1651618152;
		case -1720251851:
			return -1651618152;
		case 506887890:
			return -1651618152;
		case 766293155:
			return -1651618152;
		case 2147082926:
			return -1651618152;
		case -390136947:
			return -1651618152;
		case 1104566530:
			return -1651618152;
		case -1142861801:
			return -1651618152;
		case -417416199:
			return -1651618152;
		case -1460773772:
			return -1651618152;
		case 1476007840:
			return -1651618152;
		case -1616287563:
			return -1651618152;
		case -127412252:
			return -1651618152;
		case -1881155818:
			return -1651618152;
		case -955237712:
			return -1651618152;
		case -647020346:
			return -1651618152;
		case -1846319726:
			return -1651618152;
		case 1007570567:
			return -1651618152;
		case 1029339151:
			return -1651618152;
		case -1424767799:
			return -1651618152;
		case -217135948:
			return -1651618152;
		case -156439156:
			return -1651618152;
		case 1344011125:
			return -1651618152;
		case 1772321403:
			return 1090011026;
		case -1230516683:
			return 1090011026;
		case 594040097:
			return 1090011026;
		case 1883159941:
			return 356361174;
		case -1028075925:
			return -311956671;
		case 84224102:
			return -2030355032;
		case 1496579364:
			return -2030355032;
		case -1896838685:
			return -1771663379;
		case -420599285:
			return -1651618152;
		case 478986344:
			return -1651618152;
		case 917402668:
			return 997958153;
		case -914712122:
			return 356361174;
		case -598917269:
			return -311956671;
		default:
			break;
	}
	return 779169510;
}

int func_1583(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2299());
	return iVar0;
}

bool func_1584(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 > iParam2)
	{
		return iParam2;
	}
	else if (bParam0 < iParam1)
	{
		return iParam1;
	}
	return bParam0;
}

int func_1585(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2300());
	return iVar0;
}

void func_1586(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1775(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_2301(*uParam0, -415648720, &Var0, 1, -1))
		{
			if (func_331(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var14.f_1[iVar43]), &vVar36))
						{
							if (vVar36.y == -1620444701)
							{
								*bParam1 = (*bParam1 + vVar36.z);
							}
							else if (vVar36.y == 2086291460)
							{
								*bParam2 = (*bParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			bVar44 = func_1876(Var0, 986998820, 0, -1);
			if (func_331(bVar44, 0))
			{
				Var45.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(bVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var45.f_1[iVar74]), &vVar67))
						{
							if (vVar67.y == -1620444701)
							{
								*bParam1 = (*bParam1 + vVar67.z);
							}
							else if (vVar67.y == 2086291460)
							{
								*bParam2 = (*bParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

char* func_1587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

char* func_1588(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return "HORSE_CLASS_RIDING";
		case 918497150:
			return "HORSE_CLASS_DRAFT";
		case 356361174:
			return "HORSE_CLASS_RACE";
		case -1771663379:
			return "HORSE_CLASS_WAR";
		case -311956671:
			return "HORSE_CLASS_WORK";
		case -1651618152:
			return func_2302(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char[] func_1589(int iParam0)
{
	StringCopy(&cVar0, func_2303(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_2304(&cVar0);
}

char* func_1590(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -757978903:
			return "COAT_REDR";
		case 1909854428:
			return "COAT_SORREL";
		case 1592694494:
			return "COAT_GRULDUN";
		case 981469777:
			return "COAT_SEALBR";
		case 1064693514:
			return "COAT_MEALYDAPBAY";
		case -1365665739:
			return "COAT_STEELGREY";
		case 1577022605:
			return "COAT_BLUEROANOVERO";
		case 381495209:
			return "COAT_DUN";
		case 3032834:
			return "COAT_BAYBRINDLE";
		case -1722101672:
			return "COAT_SORRELOVERO";
		case -189605757:
			return "COAT_BAYFRAMEOVERO";
		case 863391233:
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case 885568364:
			return "COAT_BLACK";
		case -1540355548:
			return "COAT_WHITE";
		case -601560591:
			return "COAT_CREM";
		case -370362766:
			return "COAT_GREY";
		case -1698261864:
			return "COAT_DAPROSEGREY";
		case -670301166:
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -2055655009:
			return "COAT_REDCH";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

char* func_1591(int iParam0)
{
	iVar0 = func_2305(iParam0);
	switch (iVar0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_1592(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

int func_1593(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 1;
		case -1772561076:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_1594(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 0;
		case -1772561076:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_1595(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 0;
		case -1772561076:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_1596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_MAXSPEED_SLOW";
		case 1:
			return "VEHICLE_MAXSPEED_AVERAGE";
		case 2:
			return "VEHICLE_MAXSPEED_FAST";
		default:
			break;
	}
	return "";
}

char* func_1597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_ACCELERATION_SLOW";
		case 1:
			return "VEHICLE_ACCELERATION_AVERAGE";
		case 2:
			return "VEHICLE_ACCELERATION_FAST";
		default:
			break;
	}
	return "";
}

char* func_1598(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_STEERING_SLUGGISH";
		case 1:
			return "VEHICLE_STEERING_AVERAGE";
		case 2:
			return "VEHICLE_STEERING_RESPONSIVE";
		default:
			break;
	}
	return "";
}

char* func_1599(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case -1698498246:
			return "VEHICLE_TRADER_DESCRIPTION";
		case -1772561076:
			return "VEHICLE_BOUNTY_HUNTER_DESCRIPTION";
		default:
			break;
	}
	return "";
}

bool func_1600()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_1601()
{
	return Global_1071686->f_28662.f_58.f_6 == 2;
}

bool func_1602()
{
	return func_2306() >= 11;
}

bool func_1603()
{
	return func_2306() >= 15;
}

bool func_1604()
{
	if (Global_1572887->f_360.f_8 == 2)
	{
		return true;
	}
	return false;
}

void func_1605(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_1606(var uParam0)
{
	return uParam0->f_1929;
}

void func_1607(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 != 0)
		{
			if (iVar0 == 7 && !bParam1)
			{
			}
			else
			{
				func_1208(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_1608(var uParam0, char* sParam1)
{
	_databinding_add_data_string(uParam0->f_2207.f_52, "ItemTooltip", sParam1);
}

void func_1609(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemDescription");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1610(var uParam0)
{
	_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
	_databinding_add_data_bool(uParam0->f_2207.f_54, "visible", false);
	_databinding_add_data_bool(uParam0->f_2207.f_54, "rightPriceTextVisible", false);
	_databinding_add_data_int(uParam0->f_2207.f_54, "purchasePrice", false);
	_databinding_add_data_int(uParam0->f_2207.f_54, "purchaseModifiedPrice", false);
	_databinding_add_data_string(uParam0->f_2207.f_54, "purchaseLabel", "");
}

void func_1611(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "FooterVisible", bParam1);
}

void func_1612(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1613(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", bParam2);
	_databinding_add_data_hash(iVar0, "Texture", bParam3);
	_databinding_add_data_hash(iVar0, "Color", bParam4);
}

void func_1614(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1615(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", bParam2);
	_databinding_add_data_hash(iVar0, "Texture", bParam3);
}

void func_1616(var uParam0, char* sParam1, bool bParam2)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_hash(iVar0, "Text", false);
	_databinding_add_data_string(iVar0, "RawText", sParam1);
	if (bParam2)
	{
		_databinding_add_data_hash(iVar0, "Style", -548373963);
	}
	else
	{
		_databinding_add_data_hash(iVar0, "Style", 432931142);
	}
}

void func_1617(var uParam0)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemWeather");
	_databinding_add_data_bool(iVar0, "Visible", false);
	iVar1 = _databinding_add_data_container(uParam0->f_2207.f_52, "OutfitWeather");
	_databinding_add_data_bool(iVar1, "Visible", false);
}

void func_1618(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "SaddleStatsVisible", bParam1);
}

void func_1619(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "StirrupStatsVisible", bParam1);
}

void func_1620(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "StatsVisible", bParam1);
}

void func_1621(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "Business");
	_databinding_add_data_bool(iVar0, "FooterVisible", bParam1);
}

char* func_1622()
{
	return "uiPaletteVisible";
}

bool func_1623()
{
	return _request_uiapp_transition_by_hash(1289756680, -1597171896);
}

int func_1624(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return 0;
	}
	uParam0->f_2207.f_78 = iParam1;
	return 1;
}

int func_1625(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	return 1;
}

int func_1626(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_1745(uParam0, func_2307(uParam0), 0);
	return 1;
}

int func_1627(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_2308(uParam0, 0);
	return 1;
}

int func_1628(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	return 1;
}

int func_1629(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	return 1;
}

int func_1630(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	if (func_2309())
	{
	}
	else
	{
		func_1617(uParam0);
	}
	return 1;
}

int func_1631(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	func_2310(uParam0, 0);
	if ((uParam0->f_3 == 37 || uParam0->f_3 == 39) || uParam0->f_3 == 15)
	{
		func_2308(uParam0, 1);
	}
	return 1;
}

int func_1632(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	func_2310(uParam0, 0);
	return 1;
}

int func_1633(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	iVar0 = func_2311(uParam0);
	iVar1 = func_2312(uParam0);
	func_2313(uParam0, iVar1, iVar0, iVar0, 0, 1);
	if (uParam0->f_3 == 21)
	{
		_databinding_add_data_bool(uParam0->f_2207.f_50, "ShavingSplitterVisible", false);
	}
	return 1;
}

int func_1634(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, false, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	func_2310(uParam0, 0);
	if (((uParam0->f_3 == 38 || uParam0->f_3 == 37) || uParam0->f_3 == 39) || uParam0->f_3 == 15)
	{
		func_2308(uParam0, 1);
	}
	return 1;
}

int func_1635(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	iVar0 = func_2307(uParam0);
	if (func_331(iVar0, 0))
	{
		func_1745(uParam0, iVar0, 0);
	}
	func_2314(uParam0, 1);
	return 1;
}

int func_1636(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, false, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_1637(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, false, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_1638(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_1229(uParam0);
	_databinding_add_data_bool(uParam0->f_2207.f_50, "ItemPalettePriceVisible", false);
	return 1;
}

int func_1639(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_1229(uParam0);
	_databinding_add_data_bool(uParam0->f_2207.f_50, "ItemPalettePriceVisible", true);
	return 1;
}

int func_1640(var uParam0, bool bParam1)
{
	if (!func_1696(uParam0))
	{
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_64))
	{
		uParam0->f_2207.f_64 = _databinding_add_ui_item_list(uParam0->f_2207.f_50, "ItemRecipeTextList");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2207.f_64);
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_65))
	{
		uParam0->f_2207.f_65 = _databinding_add_ui_item_list(uParam0->f_2207.f_50, "ItemRecipeImageList");
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2207.f_65);
	}
	func_2315(uParam0, 0);
	func_1611(uParam0, 0);
	func_2316(uParam0, 1);
	return 1;
}

int func_1641(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, false, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	func_2308(uParam0, 0);
	return 1;
}

int func_1642(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	if (!uParam0->f_2207.f_81)
	{
		func_1611(uParam0, 0);
	}
	return 1;
}

int func_1643(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	if (!uParam0->f_2207.f_81)
	{
		func_1611(uParam0, 0);
	}
	func_2308(uParam0, 0);
	return 1;
}

int func_1644(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	return 1;
}

int func_1645(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_1696(uParam0))
		{
		}
	}
	return 1;
}

int func_1646(var uParam0, bool bParam1)
{
	func_1565(2);
	func_1565(1024);
	return 1;
}

int func_1647(var uParam0, bool bParam1)
{
	func_1565(2);
	func_1565(1024);
	return 1;
}

int func_1648(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_2310(uParam0, 0);
	func_1537(uParam0, 1, -2494464, 1, 1, 0);
	return 1;
}

int func_1649(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	func_2310(uParam0, 0);
	func_1537(uParam0, 1, -1217561127, 0, 1, 0);
	func_1537(uParam0, 2, -1789759600, 0, 1, 1);
	return 1;
}

int func_1650(var uParam0, bool bParam1)
{
	_databinding_add_data_int(uParam0->f_2207.f_50, "DefaultCategoryIndex", false);
	_databinding_add_data_int(uParam0->f_2207.f_50, "CategoryCount", true);
	func_1568(uParam0, func_1523(&(uParam0->f_2207)));
	return 1;
}

int func_1651(var uParam0, bool bParam1)
{
	_databinding_add_data_int(uParam0->f_2207.f_50, "DefaultCategoryIndex", false);
	_databinding_add_data_int(uParam0->f_2207.f_50, "CategoryCount", true);
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_51))
	{
		_databinding_write_data_hash_string(uParam0->f_2207.f_51, -1833437118);
	}
	else
	{
		uParam0->f_2207.f_51 = _databinding_add_data_hash(uParam0->f_2207.f_50, "Title", -1833437118);
	}
	func_1568(uParam0, func_1062(Global_1051439->f_3258));
	if (func_459(Global_1051439->f_3258) == -1839668642)
	{
		func_1568(uParam0, func_2098(Global_1051439->f_3258, -442898163));
	}
	return 1;
}

int func_1652(var uParam0, bool bParam1)
{
	func_1568(uParam0, func_1188(uParam0));
	return 1;
}

bool func_1653(var uParam0)
{
	iVar0 = func_2317(uParam0);
	if (iVar0 > 0)
	{
		if (_item_database_get_shop_layout_menu_info_by_index(*uParam0, uParam0->f_12, false, &Var1))
		{
			uParam0->f_31[uParam0->f_42] = uParam0->f_12;
			uParam0->f_20[uParam0->f_42] = uParam0->f_19;
			uParam0->f_42++;
			uParam0->f_12 = { Var1 };
			uParam0->f_19 = 0;
			return true;
		}
	}
	return false;
}

bool func_1654(bool bParam0, var uParam1)
{
	bVar0 = func_2317(uParam1);
	if (bVar0 > 0)
	{
		if (bParam0 >= 0 && bParam0 < bVar0)
		{
			if (_item_database_get_shop_layout_menu_info_by_index(*uParam1, func_1660(uParam1), bParam0, &Var1))
			{
				uParam1->f_19 = bParam0;
				uParam1->f_12 = { Var1 };
				return true;
			}
		}
	}
	return false;
}

bool func_1655(var uParam0)
{
	return uParam0->f_2207.f_121;
}

bool func_1656(var uParam0)
{
	return uParam0->f_2207.f_121.f_1;
}

void func_1657(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_60))
	{
		uParam0->f_2207.f_60 = _databinding_add_ui_item_list_by_hash(uParam0->f_2207.f_50, 924730110);
	}
	else
	{
		_databinding_clear_binding_array(uParam0->f_2207.f_60);
	}
	uParam0->f_2207.f_73 = 0;
	func_1731(uParam0, 0);
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_61))
	{
		_databinding_remove_data_entry(uParam0->f_2207.f_61);
	}
	uParam0->f_2207.f_61 = _databinding_add_data_container_by_hash(uParam0->f_2207.f_50, -248239712);
}

void func_1658()
{
	Global_1915715->f_20241.f_3.f_11 = 0;
	Global_1915715->f_20241.f_3.f_12 = 0;
	Global_1915715->f_20241.f_3.f_13 = uVar0;
	Global_1915715->f_20241.f_3.f_14 = 0;
	Global_1915715->f_20241.f_3.f_15 = 0;
	Global_1915715->f_20241.f_3.f_16 = uVar0;
}

bool func_1659(int iParam0, var uParam1)
{
	if (_item_database_get_shop_layout_root_menu_info(*uParam1, iParam0, &(uParam1->f_5)))
	{
		uParam1->f_31[0] = uParam1->f_5;
		uParam1->f_12 = { uParam1->f_5 };
		uParam1->f_20[0] = 0;
		uParam1->f_42 = 0;
		uParam1->f_43 = iParam0;
		return true;
	}
	return false;
}

var func_1660(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return &(uParam0->f_31[(uParam0->f_42 - 1)]);
		}
	}
	return func_2318(uParam0);
}

char* func_1661(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldEnabled";
			}
			else
			{
				return "SelectEnabled";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldEnabled";
			}
			else
			{
				return "OptionEnabled";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldEnabled";
			}
			else
			{
				return "ToggleEnabled";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldEnabled";
			}
			else
			{
				return "InfoEnabled";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldEnabled";
			}
			else
			{
				return "AdjustEnabled";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "BackHeldEnabled";
			}
			else
			{
				return "BackEnabled";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "ModifyHeldEnabled";
			}
			else
			{
				return "ModifyEnabled";
			}
			break;
	}
	return "";
}

char* func_1662(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "SelectHeldVisible";
			}
			else
			{
				return "SelectVisible";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "OptionHeldVisible";
			}
			else
			{
				return "OptionVisible";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "ToggleHeldVisible";
			}
			else
			{
				return "ToggleVisible";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "InfoHeldVisible";
			}
			else
			{
				return "InfoVisible";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "AdjustHeldVisible";
			}
			else
			{
				return "AdjustVisible";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "BackHeldVisible";
			}
			else
			{
				return "BackVisible";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "ModifyHeldVisible";
			}
			else
			{
				return "ModifyVisible";
			}
			break;
	}
	return "";
}

char* func_1663(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "SelectHeld";
		case 2:
			return "OptionHeld";
		case 3:
			return "ToggleHeld";
		case 4:
			return "InfoHeld";
		case 5:
			return "AdjustHeld";
		case 7:
			return "BackHeld";
		case 6:
			return "ModifyHeld";
	}
	return "";
}

bool func_1664(var uParam0, var uParam1)
{
	if (uParam0->f_42 > 1)
	{
		if (_item_database_get_shop_layout_menu_info_by_id(*uParam0, func_1660(uParam0), uParam1))
		{
			return true;
		}
	}
	else
	{
		*uParam1 = { uParam0->f_5 };
		return true;
	}
	return false;
}

bool func_1665(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = func_1788(&(uParam0->f_2207));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_1669(iVar1, &(uParam0->f_2207), &uVar3))
		{
			if (!func_2319(uParam0, iVar1))
			{
			}
			else
			{
				if (iVar2 == iParam1)
				{
					*iParam2 = iVar1;
					return true;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	return false;
}

int func_1666(bool bParam0, var uParam1)
{
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return -1;
	}
	bVar0 = func_1788(uParam1);
	if ((bParam0 < 0 || bParam0 >= bVar0) || bVar0 == 0)
	{
		return -1;
	}
	iVar1 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, bParam0, &iVar1))
	{
		return iVar1;
	}
	return -1;
}

bool func_1667(bool bParam0)
{
	return bParam0;
}

int func_1668(var uParam0)
{
	return _databinding_read_data_int_from_parent(uParam0->f_2207.f_50, func_2320());
}

bool func_1669(bool bParam0, var uParam1, bool bParam2)
{
	bVar0 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, bParam0, &bVar0))
	{
		if (_item_database_get_shop_layout_page_info_by_key(*uParam1, bVar0, bParam2))
		{
			return true;
		}
	}
	return false;
}

bool func_1670(var uParam0, bool bParam1)
{
	if (func_2321(func_1224(uParam0), bParam1, 1))
	{
		return 703647745;
	}
	if (func_2321(func_1224(uParam0), bParam1, 16))
	{
		return 644372540;
	}
	if (func_2321(func_1224(uParam0), bParam1, 32))
	{
		return 931007774;
	}
	return bParam1;
}

int func_1671()
{
	return Global_1915715->f_20241.f_3.f_1;
}

int func_1672()
{
	return Global_1915715->f_20241.f_3.f_10;
}

bool func_1673()
{
	return Global_1915715->f_20241.f_3.f_8;
}

void func_1674(int iParam0)
{
	Global_1915715->f_20241.f_3.f_10 = *iParam0;
}

char* func_1675()
{
	return "uiItemEnum";
}

void func_1676(int iParam0)
{
	Global_1915715->f_20241.f_3.f_9 = iParam0;
}

void func_1677(var uParam0)
{
	if (Global_1915715->f_20241.f_3.f_1 == -729996127)
	{
		func_2322(uParam0->f_2207.f_72);
		iVar0 = _databinding_get_item_context_by_index(uParam0->f_2207.f_60, uParam0->f_2207.f_72);
		func_1674(&iVar0);
		iVar1 = _databinding_read_data_int_from_parent(iVar0, func_1675());
		iVar2 = iVar1;
		func_1676(iVar2);
	}
}

void func_1678(var uParam0, var uParam1)
{
	iVar0 = func_1189(uParam0);
	iVar1 = func_2323(uParam0, func_1673());
	uParam1->f_11 = iVar0;
	uParam1->f_12 = iVar1;
	uParam1->f_13 = func_1188(uParam0);
	*uParam1 = func_2324();
	uParam1->f_7 = func_2325();
	uParam1->f_1 = func_2326();
	uParam1->f_2 = func_1673();
	uParam1->f_8 = func_1672();
	uParam1->f_10 = func_2327();
	uParam1->f_21 = func_2328(uParam0);
	uParam1->f_22 = func_2312(uParam0);
	uParam1->f_3 = { func_2329(&(uParam1->f_8)) };
	uParam1->f_14 = _databinding_read_data_int_from_parent(func_1672(), func_2330());
	uParam1->f_15 = _databinding_read_data_int_from_parent(func_1672(), func_2331());
	if (uParam0->f_3 == 2 || uParam0->f_3 == 28)
	{
		uParam1->f_20 = _databinding_read_data_int_from_parent(func_1672(), func_1675());
	}
}

int func_1679(var uParam0, int iParam1)
{
	return func_2332(&(uParam0->f_2207), iParam1);
}

int func_1680(var uParam0)
{
	return uParam0->f_2207.f_70;
}

void func_1681()
{
	Global_1051439->f_4698 = { func_527() };
}

void func_1682(var uParam0)
{
	bVar0 = func_1211();
	iVar1 = func_1242();
	iVar2 = func_1236();
	if (!func_331(bVar0, 0) && !func_1017(func_764(bVar0), 2))
	{
		return;
	}
	if (iVar2 != -348190488)
	{
		if (func_2333(bVar0))
		{
			bVar3 = true;
			if (uParam0->f_4 != 179)
			{
				if (func_485(bVar0) == -1037537535)
				{
					if (func_1687(uParam0, bVar0, -853534656))
					{
						bVar3 = false;
					}
				}
			}
			if (bVar3)
			{
				func_1212(bVar0);
				_databinding_add_data_bool(iVar1, func_2334(), false);
			}
		}
	}
}

int func_1683(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return 1;
		case 2057502022:
			return 1;
		case -996064024:
			return func_2335(uParam0, uParam2);
		case -706012851:
			return 1;
		case -645366665:
			return 1;
		case -252412307:
			return 1;
		case 115613670:
			return 1;
		case -659372875:
			return 1;
		case -720046:
			return 1;
		case 2144984909:
			return 1;
		case -856183175:
			return func_2336(uParam0, uParam2);
		case 1705401718:
			return func_2337(uParam0, uParam2);
		case 310306577:
			return func_2338(uParam0, uParam2);
		case 1275816411:
			return func_2339(uParam0, uParam2);
		case 178644271:
			return func_2340(uParam0, uParam2);
		case 2092883099:
			return func_2341(uParam0, uParam2);
		case 1860655620:
			return func_2342(uParam0, uParam2);
		case 94016929:
			return func_2343(uParam0, uParam2);
		case 1426047132:
			return func_2344(uParam0, uParam2);
		case 803749366:
			return func_2345(uParam0, uParam2);
		case -2144266389:
			return 1;
		case -1548684311:
			return func_2346(uParam0, uParam2);
		case 1965673387:
			return func_2347(uParam0, uParam2);
	}
	return 1;
}

bool func_1684(bool bParam0)
{
	return (func_810(bParam0, -570078785) && !func_810(bParam0, -915411861));
}

bool func_1685(int iParam0)
{
	if (((((((((((iParam0 == 761079318 || iParam0 == 1942587409) || iParam0 == 2077448405) || iParam0 == -2056428614) || iParam0 == 336033112) || iParam0 == -1499658354) || iParam0 == -1968468235) || iParam0 == -348190488) || iParam0 == -395279071) || iParam0 == 1837492866) || iParam0 == 1119253406) || iParam0 == 753463028)
	{
		return true;
	}
	return false;
}

bool func_1686()
{
	return _0xdbc754cb6ccb9378();
}

bool func_1687(var uParam0, bool bParam1, bool bParam2)
{
	bVar0 = false;
	if (bParam1 == -2020756516)
	{
		return true;
	}
	if (bParam2 == -1502467280 || bParam2 == 777890122)
	{
		bVar0 = func_1692(uParam0, bParam1);
	}
	else if (bParam2 == -584027224 || bParam2 == -87783305)
	{
		if (func_1940(bParam1, 1, 0, 0) > 0)
		{
			return true;
		}
		if (func_2348(897456793, bParam1))
		{
			return true;
		}
		if (func_2348(-1565675519, bParam1))
		{
			return true;
		}
	}
	else if (bParam2 == 1702073444)
	{
		bVar3 = func_1210(uParam0);
		Var4.f_2 = -1;
		Var4.f_3 = -1;
		Var12 = -1;
		Var12.f_1 = -1;
		Var12.f_2 = -1;
		Var12.f_3 = -1;
		Var12.f_4 = -1;
		Var12.f_5 = -1;
		Var12.f_6 = -1;
		Var12.f_7 = -1;
		Var12.f_8 = -1;
		if (func_2349(func_1750(&(uParam0->f_2207)), bVar3, &Var8))
		{
			iVar1 = 0;
			while (iVar1 < Var8.f_3)
			{
				Var4 = { func_2350(iVar1, Var8, &(uParam0->f_2207)) };
				if (Var4 == bParam1 && func_331(Var4, 0))
				{
					Var12.f_8 = Var4.f_2;
					iVar23 = _item_database_create_item_collection(&Var12, &iVar22, 1);
					if (iVar23 == -1)
					{
					}
					else
					{
						iVar24 = 0;
						while (iVar24 < iVar22)
						{
							bVar25 = func_1067(iVar24, iVar23);
							if (((func_331(bVar25, 0) && bVar25 != bParam1) && func_2351(&(uParam0->f_2207), bVar25, &uVar2)) || _item_database_get_item_tag_type(bVar25, Var12.f_8) == -2089472884)
							{
								bVar26 = func_1817(uParam0, bVar25);
								if (func_1687(uParam0, bVar25, bVar26))
								{
									bVar0 = true;
								}
								else
								{
									iVar24++;
								}
								_0xcbb7b6edfa933ade(iVar23);
								Jump @465; //curOff = 453
								iVar1++;
								Jump @615; //curOff = 465
								if (bParam2 == 1394581936)
								{
									if (func_2352(bParam1))
									{
										Var27 = { func_1710(uParam0) };
										return func_2353(&Var27, bParam1);
									}
									else
									{
										if ((func_481(bParam1, 1435272033) && func_2354(bParam1, &bVar31)) && func_2355(func_1774(bParam1, bVar31, 0)) == 785047730)
										{
											return true;
										}
										Var32 = { func_1870() };
										return func_2353(&Var32, bParam1);
									}
								}
								else
								{
									Var36 = { func_772(bParam1, 0, 1) };
									bVar0 = func_845(bParam1, &Var36, 1, 0, 0, -1, 0);
								}
								return bVar0;
							}
						}
					}
				}
			}
		}
	}
}

bool func_1688(bool bParam0, int iParam1)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(bParam0, iParam1);
}

bool func_1689(bool bParam0, bool bParam1)
{
	return (func_810(bParam0, 997808187) && !func_1416(bParam0, 997808187, bParam1));
}

int func_1690(int iParam0)
{
	return iParam0 * 100;
}

bool func_1691(bool bParam0)
{
	return func_481(bParam0, -800818901);
}

bool func_1692(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (func_2356(bParam1))
	{
		bVar0 = true;
	}
	else if (func_481(bParam1, 1844906744))
	{
		iVar1 = func_459(bParam1);
		iVar2 = func_485(bParam1);
		if ((iVar2 == -1013984273 || iVar1 == 146649851) || iVar1 == -1954920608)
		{
			bVar0 = true;
		}
		else if (iVar2 == 658570475)
		{
			Var6 = -1;
			Var6.f_1 = -1;
			Var6.f_2 = -1;
			Var6.f_3 = -1;
			Var6.f_4 = -1;
			Var6.f_5 = -1;
			Var6.f_6 = -1;
			Var6.f_7 = -1;
			Var6.f_8 = -1;
			Var6.f_13 = -1;
			bVar24 = func_2307(uParam0);
			bVar25 = func_2357(uParam0);
			if (bVar24 != 0 && bVar25 != 0)
			{
				Var20 = { func_773(bVar24, func_768(0), bVar25, 0) };
				if (iVar1 != 0)
				{
					bVar0 = true;
					iVar26 = func_2358(bParam1);
					iVar27 = 0;
					while (iVar27 < iVar26)
					{
						if (_item_database_get_fits_slot_info(iVar1, iVar27, &bVar3))
						{
							Var6 = { func_767(0, bVar3, -1591664384, -1591664384, 0, 0, 0) };
							func_769(&Var6, Var20);
							if (func_770(&Var6, &iVar4, &iVar5, 1))
							{
								if (iVar5 != 0)
								{
									bVar0 = false;
								}
								func_771(iVar4);
							}
						}
						iVar27++;
					}
				}
			}
		}
	}
	else if (func_481(bParam1, 188214926))
	{
		Var30.f_2 = -1;
		Var30.f_3 = -1;
		Var38 = -1;
		Var38.f_1 = -1;
		Var38.f_2 = -1;
		Var38.f_3 = -1;
		Var38.f_4 = -1;
		Var38.f_5 = -1;
		Var38.f_6 = -1;
		Var38.f_7 = -1;
		Var38.f_8 = -1;
		bVar52 = func_1210(uParam0);
		if (bVar52 == -1)
		{
			return false;
		}
		if (func_2349(func_1750(&(uParam0->f_2207)), bVar52, &Var34))
		{
			iVar28 = 0;
			while (iVar28 < Var34.f_3)
			{
				Var30 = { func_2350(iVar28, Var34, &(uParam0->f_2207)) };
				if (Var30 == bParam1 && func_331(Var30, 0))
				{
					Var38.f_8 = Var30.f_2;
					iVar49 = _item_database_create_item_collection(&Var38, &iVar48, 1);
					if (iVar49 == -1)
					{
					}
					else
					{
						iVar50 = 0;
						while (iVar50 < iVar48)
						{
							bVar51 = func_1067(iVar50, iVar49);
							if (((func_331(bVar51, 0) && bVar51 != bParam1) && func_2351(&(uParam0->f_2207), bVar51, &uVar29)) || _item_database_get_item_tag_type(bVar51, Var38.f_8) == -2089472884)
							{
								if (func_1692(uParam0, bVar51))
								{
									bVar0 = true;
								}
								else
								{
									iVar50++;
								}
								_0xcbb7b6edfa933ade(iVar49);
								Jump @662; //curOff = 650
								iVar28++;
								Jump @689; //curOff = 662
								bVar53 = func_2307(uParam0);
								bVar0 = func_2359(bVar53, bParam1, func_2357(uParam0));
								return bVar0;
							}
						}
					}
				}
			}
		}
	}
}

bool func_1693(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_331(bParam0, 0))
	{
		return false;
	}
	if (func_1862(bParam0, 1) && !func_1995(bParam0, 1))
	{
		return false;
	}
	if (bParam2 && func_1851(bParam0, &iVar0))
	{
		if (func_1045(iVar0, 997808187, 0) && !func_1385(iVar0, 997808187))
		{
			return true;
		}
		else if (func_1045(iVar0, -570078785, 0))
		{
			return func_844(iVar0, -570078785, &uVar1, 1, 0);
		}
	}
	else
	{
		if (bParam1 == 0)
		{
			bVar3 = func_1861(bParam0, bVar3, 1, -1, 1);
		}
		else
		{
			bVar3 = bParam1;
		}
		if (bVar3 == 0)
		{
			return false;
		}
		iVar7 = func_1709(bParam0, bVar3, 0, 1, 1);
		if (bVar3 == -570078785)
		{
			return func_1077(iVar7);
		}
		else if (bVar3 == -915411861)
		{
			return func_561(iVar7);
		}
		else if (bVar3 == 997808187)
		{
			return true;
		}
		else
		{
			return func_1998(bParam0, 1, bVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

void func_1694(int iParam0)
{
	Global_1051439->f_4466 = iParam0;
}

bool func_1695(int iParam0)
{
	iVar0 = func_2360(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_1696(var uParam0)
{
	iVar0 = 0;
	uParam0->f_2207.f_76 = 0;
	iVar1 = 0;
	iVar1 = func_1788(&(uParam0->f_2207));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1669(iVar2, &(uParam0->f_2207), &bVar3))
			{
				if (!func_2319(uParam0, iVar2))
				{
				}
				else
				{
					uParam0->f_2207.f_76++;
				}
			}
			iVar2++;
		}
		if (uParam0->f_2207.f_74 >= uParam0->f_2207.f_76)
		{
			uParam0->f_2207.f_74 = (uParam0->f_2207.f_76 - 1);
		}
		if (func_1665(uParam0, uParam0->f_2207.f_74, &iVar2))
		{
			if (func_1669(iVar2, &(uParam0->f_2207), &bVar3))
			{
				func_1568(uParam0, func_1670(uParam0, bVar3));
			}
		}
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	_databinding_add_data_int(uParam0->f_2207.f_50, "DefaultCategoryIndex", uParam0->f_2207.f_74);
	_databinding_add_data_int(uParam0->f_2207.f_50, "CategoryCount", uParam0->f_2207.f_76);
	uParam0->f_2207.f_56 = _databinding_add_data_int(uParam0->f_2207.f_50, func_2320(), uParam0->f_2207.f_74);
	return iVar0;
}

int func_1697(var uParam0, int iParam1)
{
	if (func_1393(&(uParam0->f_2160)))
	{
		func_1257(uParam0, 7, 0);
		func_1537(uParam0, 1, 267171385, 0, 1, 0);
	}
	else if (!func_1081(&(uParam0->f_2160), 0))
	{
		func_1257(uParam0, 7, 1);
		if ((iParam1 != 336033112 && iParam1 != -1499658354) && iParam1 != -339889117)
		{
			func_1257(uParam0, 1, 0);
		}
	}
	else
	{
		func_1257(uParam0, 7, 1);
	}
	return 1;
}

void func_1698(var uParam0)
{
	bVar0 = func_2325();
	iVar1 = func_2324();
	if (!func_331(bVar0, 0) && !func_1017(func_764(bVar0), 2))
	{
		return;
	}
	if (iVar1 == -348190488)
	{
		return;
	}
	if (func_2333(bVar0))
	{
		bVar2 = true;
		iVar3 = func_1672();
		if (uParam0->f_4 != 179)
		{
			if (func_485(bVar0) == -1037537535)
			{
				if (func_1687(uParam0, bVar0, -853534656))
				{
					bVar2 = false;
				}
			}
		}
		if (bVar2)
		{
			func_1212(bVar0);
			_databinding_add_data_bool(iVar3, func_2334(), false);
		}
	}
}

void func_1699(int iParam0)
{
	Global_1915715->f_20241.f_3.f_13 = *iParam0;
}

void func_1700(int iParam0)
{
	Global_1915715->f_20241.f_3.f_12 = iParam0;
}

int func_1701(var uParam0)
{
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMaxValue", 1000);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMaxValue", 1000);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMinValue", false);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMaxValue", 10);
	return 1;
}

void func_1702(int iParam0, var uParam1)
{
	iVar0 = func_1189(uParam1);
	iParam0->f_12 = iVar0;
	*iParam0 = func_1236();
	iParam0->f_13 = func_1188(uParam1);
	iParam0->f_7 = func_1720();
	iParam0->f_8 = func_2361();
	iParam0->f_9 = func_1211();
	iParam0->f_1 = func_1237();
	iParam0->f_2 = func_1248();
	iParam0->f_11 = func_1242();
	iParam0->f_14 = func_2362();
	iParam0->f_15 = func_2363();
	iParam0->f_16 = func_2328(uParam1);
	iParam0->f_17 = func_2312(uParam1);
	iParam0->f_3 = { func_2329(&(iParam0->f_11)) };
	iParam0->f_14 = _databinding_read_data_int_from_parent(func_1242(), func_2330());
	iParam0->f_15 = _databinding_read_data_int_from_parent(func_1242(), func_2331());
}

int func_1703(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return func_2364(uParam0);
		case 2057502022:
			return func_2365(uParam0);
		case -706012851:
			return func_2366(uParam0);
		case -996064024:
			return func_2367(uParam0);
		case -645366665:
			return func_2368(uParam0);
		case -252412307:
			return func_2369(uParam0);
		case -659372875:
			return func_2370(uParam0);
		case -720046:
			return func_2371(uParam0);
		case 2144984909:
			return func_2372(uParam0);
		case 115613670:
			return func_2373(uParam0);
		case -856183175:
			return func_2374(uParam0);
		case 310306577:
		case 1705401718:
			return func_2375(uParam0, iParam2);
		case 178644271:
			return func_2376(uParam0);
		case 2092883099:
			return func_2377(uParam0);
		case 1275816411:
			return func_2378(uParam0);
		case 1860655620:
			return func_2379(uParam0, iParam2);
		case 94016929:
			return func_2380(uParam0);
		case 1426047132:
			return func_2381(uParam0);
		case 803749366:
			return func_2382(uParam0, iParam2);
		case -2144266389:
			return func_2383(uParam0);
		case -1548684311:
			return func_2384(uParam0);
		case 23814986:
			return func_2385(uParam0);
		case 1965673387:
			return func_2386(uParam0, iParam2);
		case -440651963:
			return func_2387(uParam0);
	}
	return 1;
}

bool func_1704(var uParam0, int iParam1)
{
	if (*iParam1 == 1702073444)
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
		Var0.f_8 = iParam1->f_14;
		iVar10 = 0;
		iVar11 = 0;
		iVar11 = _item_database_create_item_collection(&Var0, &iVar10, 1);
		if (iVar11 == -1)
		{
			return false;
		}
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 < iVar10)
		{
			bVar12 = func_1067(iVar13, iVar11);
			if (func_331(bVar12, 0))
			{
				if (func_2388(uParam0, bVar12))
				{
					_0xcbb7b6edfa933ade(iVar11);
					return true;
				}
			}
			iVar13++;
		}
		_0xcbb7b6edfa933ade(iVar11);
		if (func_2388(uParam0, iParam1->f_9))
		{
			return true;
		}
	}
	else if (func_2388(uParam0, iParam1->f_9))
	{
		return true;
	}
	if (iParam1->f_12 == 310306577)
	{
		func_2375(uParam0, iParam1);
	}
	return false;
}

bool func_1705(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = -1098568115;
	if (!bParam2)
	{
		if (!func_331(bParam1, 0))
		{
			func_447(uParam0);
			return false;
		}
		if (func_1853(bParam1))
		{
			func_1855(Global_1051439->f_3258, bParam1, &Var1);
			if (Var1 == 0 || Var1.f_1 == 0)
			{
				func_447(uParam0);
				return false;
			}
		}
		else
		{
			bVar5 = func_1861(bParam1, 0, 1, -1, 1);
			if (bVar5 == 997808187 || func_571(bVar5))
			{
				func_447(uParam0);
				return false;
			}
			iVar6 = 0;
			if (func_1851(bParam1, &iVar6))
			{
				iVar0 = 1427884050;
			}
			else if ((func_810(bParam1, -570078785) && !func_1684(bParam1)) && func_1415(bParam1))
			{
				iVar0 = -1098568115;
			}
			else
			{
				func_447(uParam0);
				func_736(0);
				return false;
			}
		}
	}
	if (!func_181(uParam0->f_2207.f_101))
	{
		uParam0->f_2207.f_101 = func_1776(_create_var_string(0, iVar0), -1862657621, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_101), 18, 1);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_101), 17, 1);
		_uiprompt_set_attribute(func_1777(uParam0->f_2207.f_101), 14, 1);
		if (_is_app_active(1289756680) && _0x42095b886d30de66(1289756680))
		{
			uParam0->f_2207.f_103 = 1;
			func_1769(uParam0->f_2207.f_101, 0, 1);
		}
	}
	else
	{
		func_1460(uParam0->f_2207.f_101, _create_var_string(0, iVar0), 1);
	}
	return true;
}

int func_1706(var uParam0)
{
	iVar0 = 0;
	if (!func_1665(uParam0, uParam0->f_2207.f_74, &iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<4> func_1707(bool bParam0, int iParam1, var uParam2)
{
	bVar0 = func_1666(bParam0, uParam2);
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	bVar5 = false;
	iVar6 = -1;
	iVar7 = -1;
	if (_item_database_get_shop_layout_page_item_key(*uParam2, bVar0, iParam1, &bVar5, &iVar6, &iVar7))
	{
		Var1.f_2 = iVar7;
		Var1.f_3 = iVar6;
		if (!func_1017(func_764(bVar5), 2))
		{
			Var1 = bVar5;
			return Var1;
		}
		Var1.f_1 = func_764(bVar5);
		Var1 = 0;
	}
	return Var1;
}

bool func_1708(bool bParam0)
{
	Var0 = { func_773(389943619, func_627(1), 1591329969, 1) };
	Var0.f_4 = 2123222014;
	Var5 = { func_773(bParam0, Var0, Var0.f_4, 0) };
	if (_0xb881ca836cc4b6d4(&Var5))
	{
		return true;
	}
	return false;
}

int func_1709(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_331(bParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_1851(bParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_1397() && bVar1) && bParam1 == 0))
	{
		if (func_1045(iVar0, 997808187, 0) && !func_1385(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = bParam0;
			return Global_1051439->f_46;
		}
		else if (func_1045(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_813(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_1857(func_813(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = bParam0;
			return Global_1051439->f_46;
		}
	}
	bVar3 = bParam1;
	if (bVar3 == 0)
	{
		bVar3 = func_1861(bParam0, bVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_2389(bParam0))
	{
		iVar4 = func_2390(bParam0);
	}
	else if (func_2391(bParam0))
	{
		iVar4 = func_2392(bParam0);
	}
	else if (func_842(bParam0))
	{
		iVar4 = func_843(bParam0);
	}
	else if (func_2393(bParam0))
	{
		iVar4 = func_2394(bParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_813(iVar4, bVar3, 0, bParam4);
		bVar5 = false;
		if (func_1864(bVar3))
		{
			if (func_2395(iVar4, 773203532, bVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_1857(iVar2);
		}
		Global_1051439->f_61 = bParam0;
		return iVar2;
	}
	if (bVar3 == 997808187)
	{
		Global_1051439->f_61 = bParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_567(bParam0, bVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_1864(bVar3))
		{
			if (func_2396(bParam0, 773203532, bVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((bVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_1857(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = bParam0;
		if (Global_1051439->f_62 != Global_1051439->f_61)
		{
			Global_1051439->f_62 = Global_1051439->f_61;
		}
		else
		{
			Global_1051439->f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439->f_46 = 0;
	return -1;
}

struct<4> func_1710(var uParam0)
{
	return uParam0->f_2207.f_89;
}

bool func_1711(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_2397(&uParam0, -1585141069, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> func_1712(var uParam0)
{
	return uParam0->f_2207.f_93;
}

bool func_1713(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_2397(&uParam0, 1686943047, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1714(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(func_489(0), uParam0, uParam1, 29, 0))
	{
		return false;
	}
	return true;
}

bool func_1715(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_485(bParam0) == -1977020088 && func_41() == -1)
	{
		return func_2398(bParam0);
	}
	return func_845(bParam0, uParam1, 1, bParam3, 0, iParam2, 0);
}

bool func_1716(bool bParam0)
{
	iVar0 = func_812(bParam0, 1);
	if (iVar0 != 0 && func_1045(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_1717(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1862(bParam1, 1) && !func_1995(bParam1, 1))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	switch (bParam2)
	{
		case 317179309:
			return !func_1711(func_1710(uParam0));
		case -1594421938:
			return !func_1713(func_1712(uParam0));
		case -1352600334:
			Var0 = { func_1710(uParam0) };
			if ((_0xb881ca836cc4b6d4(&Var0) && func_1714(&Var0, &Var4)) && !func_785(&(Var4.f_24), 64))
			{
				return true;
			}
			return false;
		case 1394581936:
			if (!func_1687(uParam0, bParam1, 1394581936))
			{
				if (func_1259(bParam1) && func_2399(0, 0) >= func_1791(0))
				{
					return false;
				}
				return true;
			}
			return false;
		case -1502467280:
		case 777890122:
			return true;
		case -760956867:
			return !func_2400(bParam1);
		case 1425890997:
			return !func_2401(bParam1);
		case -239176093:
			return func_2402(&uVar33, 1);
		default:
			break;
	}
	return !func_1812(bParam1, 0);
}

void func_1718(var uParam0, bool bParam1)
{
	if (func_181(uParam0->f_2207.f_102))
	{
		func_312(uParam0->f_2207.f_102, bParam1, 0, 0);
		_uiprompt_set_urgent_pulsing_enabled(func_1777(uParam0->f_2207.f_102), bParam1);
	}
}

bool func_1719(var uParam0)
{
	return _databinding_read_data_bool_from_parent(uParam0->f_2207.f_54, "visible");
}

bool func_1720()
{
	return _databinding_read_data_bool_from_parent(Global_1915715->f_20241.f_3.f_13, func_1856());
}

void func_1721(var uParam0, bool bParam1, bool bParam2)
{
	iVar1 = func_1709(bParam1, 0, 1, 0, 1);
	bVar2 = func_1861(bParam1, 0, 0, -1, 0);
	if (bVar2 == 997808187)
	{
		iVar1 = 0;
	}
	iVar3 = -2494464;
	if (func_2356(bParam1))
	{
		iVar3 = -507073631;
	}
	else if (func_571(bVar2))
	{
		if (func_1684(bParam1) || func_1397())
		{
			iVar3 = 571554831;
			bVar4 = true;
		}
		else
		{
			iVar3 = -625835022;
		}
	}
	else if (func_1864(bVar2))
	{
		if (func_1684(bParam1) || func_1397())
		{
			iVar3 = 262921336;
			bVar4 = true;
		}
		else
		{
			iVar3 = -836619478;
		}
	}
	else if (iVar1 <= 0 && bVar2 != 0)
	{
		iVar3 = 1892711184;
	}
	else if (bVar2 == -570078785)
	{
		iVar3 = -4214208;
		bVar4 = true;
	}
	if (func_331(bParam1, 0))
	{
		bVar0 = (((((func_1684(bParam1) && iVar1 > 0) || iVar1 >= 10000) || func_1862(bParam1, 1)) || func_571(bVar2)) || func_1864(bVar2));
	}
	if (func_1862(bParam1, 1) && !func_1719(uParam0))
	{
		if (func_1684(bParam1) || func_1397())
		{
			func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", iVar1, func_1863(bParam1, 1)), bParam2, 1, bVar0);
		}
		else
		{
			func_1858(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_TOKEN", iVar1, func_1863(bParam1, 1)), bParam2, 1, bVar0);
		}
	}
	else if (bVar4)
	{
		func_1858(uParam0, 1, _create_var_string(0, iVar3, iVar1), bParam2, 1, bVar0);
	}
	else
	{
		func_1537(uParam0, 1, iVar3, bParam2, 1, bVar0);
	}
}

void func_1722(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = func_1817(uParam0, bParam2);
	bVar1 = false;
	bVar2 = false;
	bVar3 = func_1861(bParam2, 0, 0, -1, 0);
	bVar4 = bVar3 == -570078785;
	if (func_331(bParam2, 0))
	{
		if (func_1864(bVar3) && func_2396(bParam2, 773203532, bVar3, 1, 1) > 0)
		{
			bVar4 = true;
		}
		bVar1 = func_1709(bParam2, bVar3, func_1397(), 0, 0);
		bVar2 = func_1709(bParam2, bVar3, func_1397(), 0, 1);
		if (bParam3)
		{
			bVar1 = func_2403(bParam2, 816454899, 1, 0);
			bVar2 = func_2404(bParam2);
		}
	}
	if (((!func_1241(bParam2) && !func_1259(bParam2)) && func_1687(uParam0, bParam2, bVar0)) && func_2405(bParam2, 0) <= 1)
	{
		_databinding_add_data_string(uParam0->f_2207.f_54, "rightPriceRawText", _create_var_string(0, -298752054));
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceGold", false);
		func_2406(uParam0, 1);
	}
	else
	{
		_databinding_add_data_bool(uParam0->f_2207.f_54, "isGoldPrice", bVar4);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", (bVar1 != bVar2 && !bVar4));
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceGold", (bVar1 != bVar2 && bVar4));
		_databinding_add_data_int(uParam0->f_2207.f_54, "purchasePrice", bVar2);
		_databinding_add_data_int(uParam0->f_2207.f_54, "purchaseModifiedPrice", bVar1);
		bVar5 = func_1863(bParam2, 1);
		_databinding_add_data_int(uParam0->f_2207.f_54, "tokenPrice", bVar5);
		if (bVar2 == 0 && bVar5 == 0)
		{
			sVar6 = _create_var_string(0, 174366467);
			if (bParam3)
			{
				sVar6 = _create_var_string(0, 705869517);
			}
			_databinding_add_data_string(uParam0->f_2207.f_54, "rightPriceRawText", sVar6);
			_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
			_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceGold", false);
			func_2406(uParam0, 1);
		}
		else
		{
			func_2406(uParam0, 0);
		}
	}
	bVar7 = func_1866(uParam0, bParam2);
	if (bVar7)
	{
		func_1867(bParam2, &iVar9, &bVar8, 1);
		if (bVar8 > 0)
		{
			if (iVar9 == 0)
			{
				_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", false);
				_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", true);
				_databinding_add_data_int(uParam0->f_2207.f_54, "itemPriceRank", bVar8);
			}
			else
			{
				_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", false);
				_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", false);
			}
		}
		else
		{
			_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", false);
			_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", true);
		}
	}
	else
	{
		_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", false);
	}
	bVar10 = true;
	if (!bParam3)
	{
		bVar10 = func_1693(bParam2, 0, func_1397());
		if (bVar7 && !(func_1397() && func_1851(bParam2, &uVar11)))
		{
			bVar10 = false;
		}
	}
	_databinding_add_data_bool(uParam0->f_2207.f_54, "isAffordable", bVar10);
	if (iParam1 != -1)
	{
		_databinding_add_data_string(uParam0->f_2207.f_54, "purchaseLabel", _get_label_text_by_hash(iParam1));
	}
	_databinding_add_data_bool(uParam0->f_2207.f_54, "visible", true);
}

int func_1723(var uParam0, var uParam1)
{
	bVar0 = func_764(uParam1->f_9);
	bVar1 = uParam1->f_9;
	if (!func_1017(bVar0, 2))
	{
		return 0;
	}
	iVar2 = *uParam1;
	iVar3 = -1;
	iVar4 = 0;
	sVar5 = "";
	if (func_2407(uParam0, bVar0))
	{
		sVar5 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
		if (!func_2408(bVar0) && !_unlock_is_unlock_flag_set(bVar0, 64))
		{
			if (func_1867(bVar1, &iVar3, &iVar4, 1) && iVar4 > func_247(iVar3))
			{
				if (iVar3 == 0)
				{
					sVar5 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
				}
				else
				{
					sVar5 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar3)), _create_var_string(0, func_2410(iVar3)), iVar4);
				}
			}
		}
		func_1608(uParam0, sVar5);
		return 1;
	}
	if (!func_2412(bVar0, 1, func_2411(bVar0, 0, 1), 1))
	{
		if (func_1862(bVar1, 1) && !func_1995(bVar1, 1))
		{
			sVar5 = _get_label_text_by_hash(179940305);
		}
		else if (func_2413(bVar0, -570078785) && func_2413(bVar0, -915411861))
		{
			if (func_1397())
			{
				sVar5 = _get_label_text_by_hash(-1119897106);
			}
			else
			{
				sVar5 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", func_2414(bVar0, -570078785, 1, 0, 0));
			}
		}
		else
		{
			sVar5 = _get_label_text_by_hash(-1119897106);
		}
		func_1608(uParam0, sVar5);
		return 1;
	}
	switch (iVar2)
	{
		case -384358143:
			if (func_765(bVar0, -1503828579))
			{
				if (func_2415(uParam0, -800818901))
				{
					sVar5 = _create_var_string(2, "SHOP_TOOLTIP_VARIANT_EQUIPPED");
				}
				else
				{
					sVar5 = _create_var_string(2, "SHOP_TOOLTIP_VARIANT_NOT_OWNED");
				}
			}
			break;
	}
	if (!is_string_null_or_empty(sVar5))
	{
		func_1608(uParam0, sVar5);
	}
	return 1;
}

int func_1724(var uParam0, var uParam1)
{
	bVar0 = uParam1->f_9;
	func_1078(&bVar0);
	if (!func_331(bVar0, 0))
	{
		return 0;
	}
	bVar1 = *uParam1;
	sVar2 = "";
	iVar7 = func_1940(bVar0, 0, 0, 0);
	iVar8 = -1;
	if (func_1262(bVar0))
	{
		Var9 = { func_772(bVar0, 0, 0) };
		iVar8 = func_1080(bVar0, &Var9, 1, 0);
	}
	else
	{
		iVar8 = func_2405(bVar0, 0);
	}
	bVar22 = func_1866(uParam0, bVar0);
	if (uParam0->f_4 != 179)
	{
		bVar24 = func_1693(bVar0, 0, 1);
		if (func_1189(uParam0) == 310306577)
		{
			bVar24 = func_561(func_1265(uParam0, &uVar23, 0, 1));
		}
	}
	switch (bVar1)
	{
		case -841939068:
			if (_databinding_read_data_bool_from_parent(uParam1->f_11, func_1856()))
			{
				if (func_1861(Global_1051439->f_3258, 0, 1, -1, 1) == -570078785)
				{
					func_1608(uParam0, _create_var_string(2, "SHOP_OFFERS_ORIGINAL_GOLD", func_1709(Global_1051439->f_3258, 0, 0, 0, 0)));
				}
				else
				{
					func_1608(uParam0, _create_var_string(2, "SHOP_OFFERS_ORIGINAL_DOLLARS", func_1709(Global_1051439->f_3258, 0, 0, 0, 0)));
				}
			}
			else if (func_1986(&(uParam1->f_3)))
			{
				if (func_1853(uParam1->f_9))
				{
					func_2416(uParam0, -561536925);
				}
				else
				{
					func_2416(uParam0, -1886429826);
				}
			}
			else
			{
				func_1855(Global_1051439->f_3258, uParam1->f_9, &Var18);
				if (Var18 != 0 || Var18.f_1 != 0)
				{
					if ((Var18 != 0 && !func_561(Var18.f_2)) || ((Var18.f_1 != 0 && !func_1077(Var18.f_3)) && !func_1686()))
					{
						func_2416(uParam0, -224345454);
					}
					else
					{
						func_2416(uParam0, 1816028278);
					}
				}
				else if (func_1853(uParam1->f_9))
				{
					func_2416(uParam0, 402282547);
				}
				else
				{
					func_2416(uParam0, 1326194393);
				}
			}
			return 1;
		case -1048755899:
		case -384358143:
		case 1850514202:
		case 2036169888:
			iVar16 = func_459(bVar0);
			if (func_2417(bVar0))
			{
				iVar28 = func_812(bVar0, 0);
				if (iVar28 != 0)
				{
					if (_0xfbe782b3165ac8ec(iVar28))
					{
						iVar7 = iVar8;
					}
				}
			}
			if (iVar7 == iVar8)
			{
				if (iVar16 == 1528977929)
				{
					sVar2 = _get_label_text_by_hash(137839714);
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_FULL_PERCENT", iVar7, iVar8);
				}
			}
			else
			{
				if (func_2418(bVar0))
				{
					bVar29 = bVar0;
					func_2419(&bVar29);
					if (func_2420(uParam0, bVar29, 1))
					{
						func_1608(uParam0, _create_var_string(2, "SHOPS_TOOLTIP_EXCEED_PURCHASE_LIMIT"));
						return 1;
					}
				}
				if (!bVar24)
				{
					if (func_1862(bVar0, 1) && !func_1995(bVar0, 1))
					{
						sVar2 = _get_label_text_by_hash(179940305);
					}
					else if (func_1851(bVar0, &iVar30) && func_1045(iVar30, -570078785, 0))
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_RANK_GOLD", func_1857(func_813(iVar30, -570078785, 0, 1)));
					}
					else if (func_810(bVar0, -570078785) && func_810(bVar0, -915411861))
					{
						if (func_1397())
						{
							sVar2 = _get_label_text_by_hash(-1119897106);
						}
						else
						{
							sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", func_1709(bVar0, -570078785, 1, 0, 1));
						}
					}
					else
					{
						sVar2 = _get_label_text_by_hash(-1119897106);
					}
				}
				else if (iVar16 == 1528977929)
				{
					sVar2 = _get_label_text_by_hash(-2111874188);
				}
				else if (iVar8 == -1)
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_PERCENT_INFINITE", iVar7);
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_PERCENT", iVar7, iVar8);
				}
				if (bVar22)
				{
					if (bVar0 == -1609310766)
					{
						sVar2 = _create_var_string(2, "SHOPS_TOOLTIP_MOONSHINE_NEED_BAR");
					}
					else if (bVar0 == -663241357)
					{
						sVar2 = _create_var_string(2, "SHOPS_TOOLTIP_MOONSHINE_NEED_STILL");
					}
					else
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
					}
					if (!func_1415(bVar0))
					{
						if (!_unlock_is_unlock_flag_set(bVar0, 64))
						{
							if (func_1867(bVar0, &iVar6, &iVar4, 1) && iVar4 > func_247(iVar6))
							{
								if (func_1716(bVar0))
								{
									sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
								}
								else if (iVar6 == 0)
								{
									sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
								}
								else
								{
									sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
								}
								func_1608(uParam0, sVar2);
								return 1;
							}
						}
					}
				}
				vVar31 = 3;
				if (func_2421(bVar0, uParam0->f_4, &vVar31))
				{
					iVar42 = 0;
					while (iVar42 < vVar31.f_10)
					{
						if (vVar31[iVar42]->f_2)
						{
							switch (&vVar31[iVar42])
							{
								case 1412799554:
									switch (vVar31[iVar42]->f_1)
									{
										case 85134332:
											bVar43 = true;
											break;
										case -862059856:
											bVar44 = true;
											break;
									}
									break;
							}
						}
						iVar42++;
					}
					if (bVar43)
					{
						if (bVar44)
						{
							sVar2 = _create_var_string(2, "SHOP_TOOLTIP_NEEDS_SPADE_DETECTOR");
						}
						else
						{
							sVar2 = _create_var_string(2, "SHOP_TOOLTIP_NEEDS_SPADE");
						}
					}
					else if (bVar44)
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_NEEDS_DETECTOR");
					}
				}
			}
			break;
		case -239176093:
			if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				if (!func_1415(bVar0))
				{
					if (!_unlock_is_unlock_flag_set(bVar0, 64))
					{
						if (!func_1867(bVar0, &iVar6, &iVar4, 1))
						{
							return 1;
						}
						if (iVar4 > 0)
						{
							if (func_1716(bVar0))
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
							}
							else if (iVar6 == 0)
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
							}
							else
							{
								sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
							}
						}
					}
				}
			}
			else if (!func_2422())
			{
				sVar2 = _get_label_text_by_hash(-1848132362);
			}
			else if (!bVar24)
			{
				if (func_1862(bVar0, 1) && !func_1995(bVar0, 1))
				{
					sVar2 = _get_label_text_by_hash(179940305);
				}
				else if (func_1851(bVar0, &iVar45) && func_1045(iVar45, -570078785, 0))
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_RANK_GOLD", func_1857(func_813(iVar45, -570078785, 0, 1)));
				}
				else if (func_810(bVar0, -570078785) && func_810(bVar0, -915411861))
				{
					if (func_1397())
					{
						sVar2 = _get_label_text_by_hash(-1119897106);
					}
					else
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", func_1709(bVar0, -570078785, 1, 0, 1));
					}
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-1119897106);
				}
			}
			else
			{
				sVar2 = _get_label_text_by_hash(-928680867);
			}
			break;
		case 848718617:
			if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				if (!func_1415(bVar0))
				{
					if (!_unlock_is_unlock_flag_set(bVar0, 64))
					{
						if (!func_1867(bVar0, &iVar6, &iVar4, 1))
						{
							return 1;
						}
						if (iVar4 > 0)
						{
							if (func_1716(bVar0))
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
							}
							else if (iVar6 == 0)
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
							}
							else
							{
								sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
							}
						}
					}
				}
			}
			else if (func_2423(bVar0))
			{
				sVar2 = _get_label_text_by_hash(1387842121);
			}
			else if (!bVar24)
			{
				if (func_1862(bVar0, 1) && !func_1995(bVar0, 1))
				{
					sVar2 = _get_label_text_by_hash(179940305);
				}
				else if (func_1851(bVar0, &iVar46) && func_1045(iVar46, -570078785, 0))
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_RANK_GOLD", func_1857(func_813(iVar46, -570078785, 0, 1)));
				}
				else if (func_810(bVar0, -570078785) && func_810(bVar0, -915411861))
				{
					if (func_1397())
					{
						sVar2 = _get_label_text_by_hash(-1119897106);
					}
					else
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", func_1709(bVar0, -570078785, 1, 0, 1));
					}
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-1119897106);
				}
			}
			else
			{
				sVar2 = _get_label_text_by_hash(-1557803753);
			}
			break;
		case -1502467280:
		case -853534656:
		case -584027224:
		case -467661559:
		case -87783305:
		case 777890122:
		case 1394581936:
		case 1702073444:
			iVar16 = func_459(bVar0);
			if (((((func_481(bVar0, -1870432326) || bVar0 == 726009467) || bVar0 == 841778380) || bVar0 == 1852586958) || bVar0 == -1220336138) || bVar0 == -119387206)
			{
				func_1608(uParam0, "");
				return 1;
			}
			if (func_2356(bVar0))
			{
				func_1608(uParam0, _create_var_string(2, "SHOP_TOOLTIP_VARIANT_REVERT"));
				return 1;
			}
			if (uParam1->f_13 == -1665950342)
			{
				if (_databinding_is_data_id_valid(uParam0->f_2207.f_58) && _databinding_get_array_count(uParam0->f_2207.f_58) > 0)
				{
					iVar47 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, false);
					if (uParam1->f_1 != 1154588893)
					{
						iVar48 = _databinding_read_data_hash_string_from_parent(iVar47, func_1795());
						bVar49 = iVar48;
						if ((((!func_331(bVar49, 0) || bVar49 == 902806957) || bVar49 == 726009467) || bVar49 == 841778380) || bVar49 == 493688651)
						{
							func_1608(uParam0, "");
							return 1;
						}
					}
				}
			}
			if (func_2424(uParam0, bVar0, bVar1, -1, -1))
			{
				if (bVar1 == -87783305)
				{
					sVar2 = _get_label_text_by_hash(1080690164);
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-835900986);
				}
			}
			else if (func_1687(uParam0, bVar0, bVar1))
			{
				if (iVar16 == -186198417)
				{
					sVar2 = _get_label_text_by_hash(-2010760424);
				}
				else if (iVar16 == 2065516088)
				{
					sVar2 = _get_label_text_by_hash(449334683);
				}
				else if (func_1691(bVar0) && uParam0->f_3 == 15)
				{
					sVar2 = _get_label_text_by_hash(1641256444);
				}
				else
				{
					sVar2 = _get_label_text_by_hash(1387842121);
				}
			}
			else if (bVar22)
			{
				if (iVar16 == -186198417)
				{
					if (func_2348(104187473, -1334222892))
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_INCREASE_OUTLAW_PASS_RANK");
					}
					else
					{
						sVar2 = _create_var_string(2, "SHOPS_TOOLTIP_MOONSHINE_NEED_BAR");
					}
				}
				else if (iVar16 == 2065516088)
				{
					sVar2 = _create_var_string(2, "SHOPS_TOOLTIP_MOONSHINE_NEED_BAR");
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				}
				if (!func_1415(bVar0))
				{
					if (!_unlock_is_unlock_flag_set(bVar0, 64))
					{
						if (!func_1867(bVar0, &iVar6, &iVar4, 1))
						{
							func_1608(uParam0, sVar2);
							return 1;
						}
						if (iVar4 > 0)
						{
							if (func_1716(bVar0))
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
							}
							else if (iVar6 == 0)
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
							}
							else
							{
								sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
							}
						}
					}
				}
			}
			else if (!bVar24)
			{
				if (func_1862(bVar0, 1) && !func_1995(bVar0, 1))
				{
					sVar2 = _get_label_text_by_hash(179940305);
				}
				else if (func_1851(bVar0, &iVar50) && func_1045(iVar50, -570078785, 0))
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_RANK_GOLD", func_813(iVar50, -570078785, 0, 1));
				}
				else if ((func_810(bVar0, -570078785) && func_810(bVar0, -915411861)) || func_1189(uParam0) == 310306577)
				{
					if (uParam1->f_12 == 310306577)
					{
						iVar51 = func_1265(uParam0, &uVar23, 1, 1);
					}
					else
					{
						iVar51 = func_1709(bVar0, -570078785, 1, 0, 1);
					}
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", iVar51);
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-1119897106);
				}
			}
			else if (bVar1 == 1394581936 && func_1259(bVar0))
			{
				iVar14 = func_2399(0, bVar0);
				if (iVar14 > 0)
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_BUY_DUP_SADDLE", iVar14);
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-1680878307);
				}
			}
			else if (bVar1 == -87783305 && !func_1687(uParam0, bVar0, bVar1))
			{
				bVar52 = func_2425(network_player_id_to_int());
				if (func_331(bVar52, 0))
				{
					sVar2 = _get_label_text_by_hash(1673498537);
				}
				else
				{
					sVar2 = _get_label_text_by_hash(489132444);
				}
			}
			else if (func_459(bVar0) == -186198417)
			{
				sVar2 = _get_label_text_by_hash(-1866150919);
			}
			else if (func_459(bVar0) == 2065516088)
			{
				sVar2 = _get_label_text_by_hash(-709081095);
			}
			else
			{
				sVar2 = _get_label_text_by_hash(-2064544801);
			}
			iVar53 = uParam0->f_4;
			if (func_670(func_2426(uParam0)))
			{
				iVar53 = func_2426(uParam0);
			}
			if (func_459(bVar0) == -999503751)
			{
				vVar54 = 3;
				if (func_2421(bVar0, iVar53, &vVar54))
				{
					iVar65 = 0;
					while (iVar65 < vVar54.f_10)
					{
						if (vVar54[iVar65]->f_2)
						{
							switch (&vVar54[iVar65])
							{
								case -253134813:
									sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_HONOR");
									break;
							}
						}
						iVar65++;
					}
				}
			}
			if (func_1259(bVar0))
			{
				iVar66 = func_2399(0, 0);
				iVar67 = func_1791(0);
				if (iVar66 >= iVar67)
				{
					sVar2 = _create_var_string(0, 1132548288, iVar66, iVar67);
				}
			}
			if (bVar1 == 1394581936)
			{
				if (func_2427(uParam0, 32) && func_1259(bVar0))
				{
					bVar24 = func_810(bVar0, 205718222);
					if (!bVar24)
					{
						sVar2 = _get_label_text_by_hash(-2106154966);
					}
				}
			}
			break;
		case -349391286:
			if (func_1691(bVar0))
			{
				vVar68 = 3;
				if (func_2421(bVar0, uParam0->f_4, &vVar68))
				{
					iVar79 = 0;
					while (iVar79 < vVar68.f_10)
					{
						if (vVar68[iVar79]->f_2)
						{
							switch (&vVar68[iVar79])
							{
								case 1412799554:
									switch (vVar68[iVar79]->f_1)
									{
										case 115405099:
											func_1608(uParam0, _create_var_string(2, "SHOP_TOOLTIP_GUS_NEEDS_BOW"));
											return 1;
										default:
											break;
									}
									break;
							}
						}
						iVar79++;
					}
				}
			}
			func_2428(uParam0->f_3, &bVar80);
			if (func_842(bVar0))
			{
				if (func_1045(func_843(bVar0), 358994769, 0) && !func_1385(func_843(bVar0), 358994769))
				{
					bVar80 = 358994769;
				}
			}
			else if (func_810(bVar0, 358994769) && !func_1416(bVar0, 358994769, 1))
			{
				bVar80 = 358994769;
			}
			if (func_485(bVar0) == 658570475)
			{
				bVar81 = func_1692(uParam0, bVar0);
			}
			else
			{
				bVar81 = func_1812(bVar0, 0);
			}
			if (bVar81)
			{
				sVar2 = _get_label_text_by_hash(1387842121);
			}
			else if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
			}
			else if (!func_561(func_2429(bVar0, bVar80)))
			{
				sVar2 = _get_label_text_by_hash(-1119897106);
			}
			else if (!func_2430(bVar0, bVar80, &bVar82, &uVar83, &uVar84, 1, 1, 0))
			{
				if (uParam0->f_3 == 15 && func_834(uParam0->f_3, bVar82) == 1)
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS_GUS");
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CRAFT_NO_INGREDIENTS");
				}
			}
			else if (iVar8 != 1 && iVar7 > 0)
			{
				if (iVar8 == -1)
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_PERCENT_INFINITE", iVar7);
				}
				else
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_PERCENT", iVar7, iVar8);
				}
			}
			else if (uParam0->f_3 == 15)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS_GUS");
			}
			else
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CRAFT_ALL_INGREDIENTS");
			}
			break;
		case -1086794738:
			func_2428(uParam0->f_3, &uVar85);
			if (func_1812(bVar0, 0))
			{
				sVar2 = _get_label_text_by_hash(1387842121);
			}
			else if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
			}
			else if (!func_561(func_2431(bVar0, 0)))
			{
				sVar2 = _get_label_text_by_hash(-1119897106);
			}
			else if ((bVar0 == -822124724 && func_1415(-950723794)) && func_628(-950723794, func_627(1), -1311702610, 0, 0, 0) == 0)
			{
				sVar2 = _create_var_string(2, "SHOP_MS_MASH_DESC_UPGRADE");
			}
			else if ((bVar0 == 1269193435 && func_1415(-663241357)) && func_628(-663241357, func_627(1), -1311702610, 0, 0, 0) == 0)
			{
				sVar2 = _create_var_string(2, "SHOP_MS_MASH_DESC_UPGRADE");
			}
			else
			{
				sVar2 = _create_var_string(2, "SHOP_MASH_REQUIRED");
			}
			break;
		case -1395073769:
		case -760956867:
		case 38807286:
		case 1425890997:
			if (func_2424(uParam0, bVar0, bVar1, -1, -1))
			{
				sVar2 = _get_label_text_by_hash(-835900986);
			}
			else if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				if (!func_1415(bVar0))
				{
					if (!_unlock_is_unlock_flag_set(bVar0, 64))
					{
						if (!func_1867(bVar0, &iVar6, &iVar4, 1))
						{
							return 1;
						}
						if (iVar4 > 0)
						{
							if (func_1716(bVar0))
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
							}
							else if (iVar6 == 0)
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
							}
							else
							{
								sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
							}
						}
					}
				}
			}
			else if (!bVar24)
			{
				if (func_1862(bVar0, 1) && !func_1995(bVar0, 1))
				{
					sVar2 = _get_label_text_by_hash(179940305);
				}
				else if (func_1851(bVar0, &iVar86) && func_1045(iVar86, -570078785, 0))
				{
					sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_RANK_GOLD", func_813(iVar86, -570078785, 0, 1));
				}
				else if (func_810(bVar0, -570078785) && func_810(bVar0, -915411861))
				{
					if (func_1397())
					{
						sVar2 = _get_label_text_by_hash(-1119897106);
					}
					else
					{
						sVar2 = _create_var_string(2, "SHOP_TOOLTIP_CANT_AFFORD_GOLD", func_1709(bVar0, -570078785, 1, 0, 1));
					}
				}
				else
				{
					sVar2 = _get_label_text_by_hash(-1119897106);
				}
			}
			else
			{
				sVar2 = _get_label_text_by_hash(-2064544801);
			}
			iVar53 = uParam0->f_4;
			if (func_670(func_2426(uParam0)))
			{
				iVar53 = func_2426(uParam0);
			}
			break;
		case 2077448405:
			iVar14 = func_2265(-999503751, 1);
			iVar15 = func_2266(-999503751, 1);
			if (iVar14 >= iVar15)
			{
				sVar2 = _create_var_string(2, "WARDROBE_OUTFITS_ON_HORSE_FULL_TOOLTIP", iVar14, iVar15);
			}
			else
			{
				sVar2 = _create_var_string(2, "WARDROBE_OUTFITS_ON_HORSE_TOOLTIP", iVar14, iVar15);
			}
			break;
		case 1942587409:
			iVar16 = func_459(bVar0);
			if (!func_2432(func_731(uParam0), bVar0, &bVar17))
			{
				func_2433(uParam0, bVar17);
			}
			else if (func_1327(bVar0, 0))
			{
				if (!func_2424(uParam0, bVar0, 1942587409, -1, -1))
				{
					sVar2 = _create_var_string(8, -1779818913, _get_label_text_by_hash(func_2434(iVar16)));
				}
				else if (func_2435(func_459(bVar0)))
				{
					sVar2 = _create_var_string(8, 888250769, func_832(bVar0));
				}
				else
				{
					sVar2 = _create_var_string(8, 287622369, func_832(bVar0));
				}
			}
			else
			{
				iVar14 = func_2265(-525676072, 1);
				iVar15 = func_2266(-525676072, 1);
				if (!func_1549(-525676072, 1))
				{
					sVar2 = _create_var_string(2, "WARDROBE_MASKS_ON_HORSE_FULL_TOOLTIP", iVar14, iVar15);
				}
				else
				{
					sVar2 = _create_var_string(2, "WARDROBE_MASKS_ON_HORSE_TOOLTIP", iVar14, iVar15);
				}
			}
			break;
		case 753463028:
		case 761079318:
			iVar16 = func_459(bVar0);
			bVar26 = func_2436(bVar0);
			bVar27 = func_2424(uParam0, bVar0, bVar1, -1, -1);
			iVar5 = func_1188(uParam0);
			bVar87 = iVar5;
			if (func_331(bVar87, 0) && func_481(bVar87, -393037696))
			{
				sVar3 = func_832(bVar87);
			}
			else
			{
				sVar3 = func_832(bVar0);
			}
			bVar25 = func_2432(func_731(uParam0), bVar0, &bVar17);
			if (bVar27)
			{
				if (bVar26)
				{
					sVar2 = _create_var_string(8, 220200945, sVar3);
				}
				else
				{
					sVar2 = _create_var_string(8, -321520534, sVar3);
				}
			}
			else if (!bVar25)
			{
				sVar2 = _create_var_string(8, 1249433589, sVar3);
				func_2433(uParam0, bVar17);
			}
			else if (!bVar27 && bVar25)
			{
				if (bVar26)
				{
					sVar2 = _create_var_string(8, -682383052, sVar3);
				}
				else
				{
					sVar2 = _create_var_string(8, -1889410522, sVar3);
				}
			}
			if (func_1327(bVar0, 0))
			{
				if (!bVar27)
				{
					sVar2 = _create_var_string(8, -1779818913, _get_label_text_by_hash(func_2434(iVar16)));
				}
				else if (func_2435(func_459(bVar0)))
				{
					sVar2 = _create_var_string(8, 888250769, func_832(bVar0));
				}
				else
				{
					sVar2 = _create_var_string(8, 287622369, func_832(bVar0));
				}
			}
			else if (iVar16 == -2061583405)
			{
				iVar14 = func_2265(-2061583405, 1);
				iVar15 = func_2266(-2061583405, 1);
				if (!func_1549(-2061583405, 1))
				{
					sVar2 = _create_var_string(2, "WARDROBE_HATS_ON_HORSE_FULL_TOOLTIP", iVar14, iVar15);
				}
				else
				{
					sVar2 = _create_var_string(2, "WARDROBE_HATS_ON_HORSE_TOOLTIP", iVar14, iVar15);
				}
			}
			break;
		case -2056428614:
			if (func_2424(uParam0, bVar0, bVar1, -1, -1))
			{
				sVar2 = _create_var_string(0, 1909730358);
			}
			else
			{
				sVar2 = _create_var_string(0, 1608753778);
			}
			break;
		case -348190488:
			if (func_2437(bVar0))
			{
				func_1608(uParam0, _create_var_string(10, "SHOP_TOOLTIP_EMOTE_STYLE", _create_var_string(0, func_1062(bVar0))));
				return 1;
			}
			if (!func_2432(func_731(uParam0), bVar0, &bVar17))
			{
				func_2433(uParam0, bVar17);
				sVar2 = _create_var_string(10, "SHOP_CANNOT_PREVIEW", _get_label_text_by_hash(uParam1->f_1));
			}
			else
			{
				func_1614(uParam0, 0);
				sVar2 = _create_var_string(10, "SHOP_ITEM_STYLE_SELECT_TOOLTIP", _get_label_text_by_hash(uParam1->f_1));
			}
			if (uParam0->f_4 == 179)
			{
			}
			else if (bVar22)
			{
				sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED");
				if (!func_1415(bVar0))
				{
					if (!_unlock_is_unlock_flag_set(bVar0, 64))
					{
						if (!func_1867(bVar0, &iVar6, &iVar4, 1))
						{
							return 1;
						}
						if (iVar4 > 0)
						{
							if (func_1716(bVar0))
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_DONT_OWN_ITEM");
							}
							else if (iVar6 == 0)
							{
								sVar2 = _create_var_string(2, "SHOP_TOOLTIP_ITEM_LOCKED_RANK", iVar4);
							}
							else
							{
								sVar2 = _create_var_string(42, "SHOP_TOOLTIP_ITEM_LOCKED_ROLE_RANK", _create_var_string(0, func_2409(iVar6)), _create_var_string(0, func_2410(iVar6)), iVar4);
							}
						}
					}
				}
			}
			break;
	}
	if (!is_string_null_or_empty(sVar2))
	{
		func_1608(uParam0, sVar2);
	}
	return 1;
}

int func_1725()
{
	iVar0 = _databinding_read_data_int_from_parent(func_1726(), func_1737());
	return iVar0;
}

int func_1726()
{
	return Global_1915715->f_20241.f_3.f_16;
}

int func_1727()
{
	return 811708401;
}

void func_1728(var uParam0)
{
	bVar0 = func_2438();
	iVar1 = func_1726();
	iVar2 = func_1725();
	if (func_1199(4))
	{
		bVar0 = func_1211();
		iVar1 = func_1242();
	}
	if (iVar2 == 193788635)
	{
		bVar0 = func_2439();
	}
	if (!func_331(bVar0, 0) && !func_1017(func_764(bVar0), 2))
	{
		return;
	}
	if (iVar2 != -348190488)
	{
		if (func_2333(bVar0))
		{
			bVar3 = true;
			if (uParam0->f_4 != 179)
			{
				if (func_485(bVar0) == -1037537535)
				{
					if (func_1687(uParam0, bVar0, -853534656))
					{
						bVar3 = false;
					}
				}
			}
			if (bVar3)
			{
				func_1212(bVar0);
				if (iVar2 == 193788635)
				{
					_databinding_add_data_int(iVar1, "frontSlotTextureDict", -437533031);
					_databinding_add_data_int(iVar1, "frontSlotTexture", 1220803671);
				}
				_databinding_add_data_bool(iVar1, func_2334(), false);
			}
		}
	}
	else if (func_2333(bVar0))
	{
		func_1212(bVar0);
	}
}

int func_1729()
{
	return Global_1915715->f_20241.f_3.f_19;
}

bool func_1730(var uParam0)
{
	return uParam0->f_2207.f_72;
}

void func_1731(var uParam0, int iParam1)
{
	uParam0->f_2207.f_72 = iParam1;
	if (uParam0->f_2207.f_72 >= uParam0->f_2207.f_73)
	{
		uParam0->f_2207.f_72 = 0;
	}
	else if (uParam0->f_2207.f_72 < 0)
	{
		uParam0->f_2207.f_72 = (uParam0->f_2207.f_73 - 1);
	}
	_databinding_add_data_int_by_hash(uParam0->f_2207.f_50, 1731278865, uParam0->f_2207.f_72);
}

void func_1732(int iParam0)
{
	Global_1915715->f_20241.f_3.f_19 = iParam0;
}

int func_1733(var uParam0, bool bParam1)
{
	if (uParam0->f_2207.f_73 <= 0 || bParam1 >= uParam0->f_2207.f_73)
	{
		return 0;
	}
	func_2440(func_1248());
	iVar0 = func_1242();
	func_2441(&iVar0);
	func_2442(func_1211());
	_databinding_write_data_int_from_parent(uParam0->f_2207.f_50, "currentPaletteIndex", bParam1);
	func_2443(uParam0->f_2207.f_72);
	iVar1 = _databinding_get_item_context_by_index(uParam0->f_2207.f_60, bParam1);
	func_1699(&iVar1);
	iVar2 = _databinding_read_data_int_from_parent(iVar1, func_1675());
	iVar3 = iVar2;
	func_1700(iVar3);
	return 1;
}

int func_1734()
{
	return Global_1915715->f_20241.f_3.f_17;
}

int func_1735(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

int func_1736(var uParam0, int iParam1)
{
	iVar0 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2207.f_52, -804795275);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (_databinding_read_data_bool_from_parent_by_hash(uParam0->f_2207.f_52, 1535851697))
	{
		_databinding_add_data_bool_by_hash(uParam0->f_2207.f_52, 988907979, iParam1 > 1);
		_databinding_add_data_bool_by_hash(uParam0->f_2207.f_52, 1417549877, iParam1 < iVar0);
	}
	if (iParam1 > iVar0)
	{
		return 0;
	}
	_databinding_add_data_int_by_hash(uParam0->f_2207.f_52, 1184271882, iParam1);
	return 1;
}

char* func_1737()
{
	return "uiItemType";
}

int func_1738()
{
	return -655974324;
}

void func_1739(var uParam0, int iParam1, int iParam2)
{
	iVar1 = func_1237();
	iVar2 = iVar1;
	Global_1952637->f_1464.f_1[iVar2]->f_8 = iParam2;
	bVar3 = func_1540();
	if (bVar3 == 491602716)
	{
		bVar3 = false;
	}
	if (!func_2444(Global_1952637->f_1464.f_1[iVar2][iParam2], iVar2))
	{
		return;
	}
	if (!func_2069() && !func_1541(491602716))
	{
		func_1890(uParam0, bVar3);
		func_1892(491602716);
	}
	bVar4 = Global_1952637->f_1464.f_1[iVar2][iParam2];
	_databinding_write_data_hash_string_from_parent_by_hash(*iParam1, func_1743(), bVar4);
	func_1245(uParam0);
}

bool func_1740(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = func_2445(bParam0, bParam1);
	if (iVar0 == 1)
	{
		*iParam2 = -2098954619;
		*iParam3 = 1210712530;
	}
	else if (iVar0 == 2)
	{
		*iParam2 = -1498731425;
		*iParam3 = 1210712530;
	}
	else
	{
		return false;
	}
	return true;
}

int func_1741()
{
	return -1577411677;
}

int func_1742()
{
	return -2105905628;
}

int func_1743()
{
	return 800223284;
}

void func_1744(var uParam0, bool bParam1)
{
	uParam0->f_2207.f_88 = bParam1;
	uParam0->f_176.f_1305.f_257 = bParam1;
	Global_1915715->f_20241.f_50 = bParam1;
}

void func_1745(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_1079(bParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!_item_database_fillout_item_effects_ids(bParam1, &Var0))
	{
	}
	else if (Var0 <= 0)
	{
	}
	else
	{
		fVar34 = 100f;
		Var35 = { func_699(-664570214, _0x8ec44ae8decff841(bParam1)) };
		if (_stat_id_is_valid(&Var35))
		{
			stat_id_get_float(&Var35, &fVar34);
		}
		iVar37 = 0;
		while (iVar37 < Var0)
		{
			if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
			{
				if (vVar22.y == -266488916)
				{
					iVar29 = (iVar29 + vVar22.z);
				}
				else if (vVar22.y == 1648497600)
				{
					iVar30 = (iVar30 + vVar22.z);
				}
				else if (vVar22.y == -1856731002)
				{
					bVar31 = (bVar31 + vVar22.z);
				}
				else if (vVar22.y == 2038990430)
				{
					bVar32 = (bVar32 + vVar22.z);
				}
				else if (vVar22.y == 983649838)
				{
					iVar33 = (iVar33 + vVar22.z);
				}
				if (vVar22.y == 1465168878)
				{
					iVar30 = (iVar30 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -1103443887)
				{
					bVar32 = (bVar32 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -800430237)
				{
					iVar33 = (iVar33 + floor((to_float(vVar22.z) * (fVar34 / 100f))));
				}
			}
			iVar37++;
		}
		iVar38 = 0;
		iVar39 = 0;
		iVar40 = 0;
		iVar41 = 0;
		iVar42 = 0;
		iVar43 = 0;
		Var44 = { func_772(bParam1, 0, 0) };
		Var44.f_4 = func_2357(uParam0);
		Var49 = { func_773(bParam1, Var44, Var44.f_4, 0) };
		iVar53 = func_2446(bParam1);
		bVar58 = true;
		iVar54 = 0;
		while (iVar54 < iVar53)
		{
			bVar55 = func_2447(bParam1, iVar54);
			if (bVar55 != 0)
			{
				bVar56 = func_1876(Var49, bVar55, 0, -1);
				bVar58 = true;
				if (func_331(bParam2, 0))
				{
					if (func_2448(bParam2, bVar55) || func_481(bParam2, 1844906744))
					{
						if (func_481(bParam2, 1844906744))
						{
							if (func_2449(uParam0, func_1224(uParam0), func_1210(uParam0), &bVar57))
							{
								if (func_2448(bVar57, bVar55))
								{
									bVar58 = false;
								}
							}
						}
						else if (!func_331(bVar56, 0))
						{
							bVar58 = false;
						}
						else if (bVar56 != bParam2)
						{
							bVar58 = false;
						}
					}
				}
				if (func_331(bVar56, 0))
				{
					if (_item_database_fillout_item_effects_ids(bVar56, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar41 = (iVar41 + vVar22.z);
									if (bVar58)
									{
										iVar38 = (iVar38 + vVar22.z);
									}
								}
								else if (vVar22.y == 1173003838)
								{
									iVar43 = (iVar43 + vVar22.z);
									if (bVar58)
									{
										iVar39 = (iVar39 + vVar22.z);
									}
								}
								else if (vVar22.y == -1657343230)
								{
									iVar42 = (iVar42 + vVar22.z);
									if (bVar58)
									{
										iVar40 = (iVar40 + vVar22.z);
									}
								}
							}
							iVar37++;
						}
					}
				}
				if (!bVar58)
				{
					if (_item_database_fillout_item_effects_ids(bParam2, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar38 = (iVar38 + vVar22.z);
								}
								else if (vVar22.y == 1173003838)
								{
									iVar39 = (iVar39 + vVar22.z);
								}
								else if (vVar22.y == -1657343230)
								{
									iVar40 = (iVar40 + vVar22.z);
								}
							}
							iVar37++;
						}
					}
				}
			}
			iVar54++;
		}
		if (func_485(bParam2) == 307971639)
		{
			if (_item_database_fillout_item_effects_ids(bParam2, &Var0))
			{
				iVar37 = 0;
				iVar37 = 0;
				while (iVar37 < Var0)
				{
					if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
					{
						if (vVar22.y == 1999781523)
						{
							iVar29 = (iVar29 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar33 = (iVar33 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar30 = (iVar30 + vVar22.z);
						}
					}
					iVar37++;
				}
			}
		}
		if (func_1691(bParam2) || func_2356(bParam2))
		{
			bVar59 = Var44.f_4;
			iVar70 = 0;
			while (iVar70 < 6)
			{
				if (!&Global_1051439->f_47.f_7[iVar70])
				{
				}
				else if (!func_2136(&(Global_1051439->f_47[iVar70]), bParam1, &bVar65, &Var66, &uVar60, 1, bVar59))
				{
				}
				else
				{
					bVar71 = func_1876(Var66, bVar65, 0, -1);
					if (func_331(bVar71, 0))
					{
						bVar58 = true;
						if (bVar71 != &Global_1051439->f_47[iVar70])
						{
							bVar58 = false;
						}
						if (_item_database_fillout_item_effects_ids(bVar71, &Var0))
						{
							iVar37 = 0;
							iVar37 = 0;
							while (iVar37 < Var0)
							{
								if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
								{
									switch (vVar22.y)
									{
										case 1999781523:
											iVar29 = (iVar29 - vVar22.z);
											break;
										case 1173003838:
											iVar33 = (iVar33 - vVar22.z);
											break;
										case -1657343230:
											iVar30 = (iVar30 - vVar22.z);
											break;
									}
								}
								iVar37++;
							}
						}
					}
					if (func_2356(bParam2))
					{
					}
					else if (_item_database_fillout_item_effects_ids(&(Global_1051439->f_47[iVar70]), &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar37]), &vVar22))
							{
								switch (vVar22.y)
								{
									case 1999781523:
										iVar41 = (iVar41 + vVar22.z);
										if (bVar58)
										{
											iVar38 = (iVar38 + vVar22.z);
										}
										break;
									case 1173003838:
										iVar43 = (iVar43 + vVar22.z);
										if (bVar58)
										{
											iVar39 = (iVar39 + vVar22.z);
										}
										break;
									case -1657343230:
										iVar42 = (iVar42 + vVar22.z);
										if (bVar58)
										{
											iVar40 = (iVar40 + vVar22.z);
										}
										break;
								}
							}
							iVar37++;
						}
					}
				}
				iVar70++;
			}
		}
		bVar72 = (iVar29 + iVar41);
		if (iVar29 + iVar38) > (iVar29 + iVar41)
		{
			bVar72 = (iVar29 + iVar38);
		}
		bVar73 = (iVar30 + iVar42);
		if (iVar30 + iVar40) > (iVar30 + iVar42)
		{
			bVar73 = (iVar30 + iVar40);
		}
		bVar74 = (iVar33 + iVar43);
		if (iVar33 + iVar39) > (iVar33 + iVar43)
		{
			bVar74 = (iVar33 + iVar39);
		}
		bVar75 = (iVar29 + iVar41);
		if (iVar29 + iVar38) < (iVar29 + iVar41)
		{
			bVar75 = (iVar29 + iVar38);
		}
		bVar76 = (iVar30 + iVar42);
		if (iVar30 + iVar40) < (iVar30 + iVar42)
		{
			bVar76 = (iVar30 + iVar40);
		}
		bVar77 = (iVar33 + iVar43);
		if (iVar33 + iVar39) < (iVar33 + iVar43)
		{
			bVar77 = (iVar33 + iVar39);
		}
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponPowerValue", bVar72);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponRangeValue", bVar73);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponAccuracyValue", bVar74);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponFireRateValue", bVar31);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponReloadValue", bVar32);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponPowerDiff", (iVar29 + iVar41));
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponRangeDiff", (iVar30 + iVar42));
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponAccuracyDiff", (iVar33 + iVar43));
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponFireRateDiff", bVar31);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponReloadDiff", bVar32);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponPowerNew", bVar75);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponRangeNew", bVar76);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponAccuracyNew", bVar77);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponFireRateNew", bVar31);
		_databinding_add_data_int(uParam0->f_2207.f_52, "WeaponReloadNew", bVar32);
	}
}

bool func_1746(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1747()
{
	Var4.f_9 = -1591664384;
	if (func_790("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_783(&Var4, iVar2, iVar0, iVar1))
			{
			}
			else if (_is_weapon_one_handed(Var4.f_4))
			{
				iVar3++;
			}
			iVar2++;
		}
		func_771(iVar0);
	}
	return iVar3;
}

void func_1748(var uParam0)
{
	iVar0 = func_1242();
	iVar1 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_1243());
	iVar2 = func_1190(uParam0);
	switch (iVar1)
	{
		case 0:
			sVar3 = func_1592(1);
			if (does_entity_exist(iVar2))
			{
				func_1877(iVar2, 1);
			}
			break;
		case 1:
			sVar3 = func_1592(2);
			if (does_entity_exist(iVar2))
			{
				func_1877(iVar2, 2);
			}
			break;
	}
	_0xa3bd6ff95e713ee5(iVar0, func_1743(), sVar3);
	if (does_entity_exist(iVar2))
	{
		_update_ped_variation(iVar2, false, true, true, true, false);
	}
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseGender", get_hash_key(sVar3));
}

int func_1749(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 1564187321;
		default:
			break;
	}
	return 0;
}

bool func_1750(var uParam0)
{
	return *uParam0;
}

bool func_1751(bool bParam0)
{
	return _item_database_is_shop_layout_key_valid(bParam0);
}

bool func_1752(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_1751(bParam1))
	{
		return false;
	}
	Var8.f_2 = -1;
	Var8.f_3 = -1;
	if (_item_database_get_shop_layout_page_info_by_key(bParam1, bParam2, &Var4))
	{
		iVar0 = 0;
		while (iVar0 < Var4.f_3)
		{
			if (_item_database_get_shop_layout_page_item_key(bParam1, Var4, iVar0, &bVar3, &uVar1, &uVar2))
			{
				if (!func_2450(uParam0, bVar3))
				{
				}
				else
				{
					Var8 = bVar3;
					Var8.f_2 = uVar2;
					Var8.f_3 = uVar1;
					if (func_2451(uParam0, Var8))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	return true;
}

int func_1753(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1224(uParam0);
	iVar1 = func_2452(iVar0, iParam1);
	iVar2 = func_1223(uParam0);
	iVar3 = 0;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = func_1225(iVar0, iParam1, iVar5);
		if (iVar4 != -1)
		{
			if (func_2453(iVar3, iParam2, iParam3, iVar2))
			{
				if (func_2454(uParam0, iVar4, iVar3, iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_1754(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_1224(uParam0);
	iVar1 = func_2452(iVar0, iParam1);
	iVar2 = func_1223(uParam0);
	iVar3 = 0;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar4 = func_1225(iVar0, iParam1, iVar5);
		if (iVar4 != -1)
		{
			if (func_1226(iVar0, iVar4, 16384))
			{
				if (!_unlock_is_unlocked(1582250596))
				{
				}
				else
				{
					Jump @141; //curOff = 92
					if (func_1226(iVar0, iVar4, 32768))
					{
						if (!_unlock_is_unlocked(2139782524) && func_1227(uParam0, iVar0, iVar4))
						{
						}
						else if (!func_2453(iVar3, iParam2, iParam3, iVar2))
						{
							iVar3++;
						}
						else
						{
							iVar6 = func_2323(uParam0, iVar5);
							if (func_2455(iVar6))
							{
								switch (iVar6)
								{
									case 2119176479:
										if (func_2456(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
									case -1873242174:
										if (func_2457(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
									case 1406783678:
										if (func_2458(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
									case 1649093494:
										if (func_2459(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
									case -506355977:
										if (func_2460(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
									case -1095179319:
										if (func_2461(uParam0, iVar3))
										{
											iVar3++;
										}
										break;
								}
							}
							else if (func_2462(uParam0, iVar4, iVar3, iVar5))
							{
								iVar3++;
							}
						}
						iVar5++;
						return 1;
					}
				}
			}
		}
	}
}

int func_1755(var uParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	Var1 = { func_2464(func_2463()) };
	iVar9 = player_id();
	func_2465(&((*Global_1298536)[iVar9]->f_53), &iVar8, &Var1);
	iVar18 = 0;
	iVar19 = 0;
	while (iVar19 < iVar8)
	{
		Var10 = { func_2466((*Global_1298536)[iVar9]->f_53[iVar19]) };
		iVar0 = func_2467((*Global_1298536)[iVar9]->f_53[iVar19]);
		if (get_hash_key(&Var10) != 0 && !func_1866(uParam0, iVar0))
		{
			if (!bParam1)
			{
				func_2468(uParam0, iVar0, (iParam2 + iVar18));
			}
			iVar18++;
		}
		iVar19++;
	}
	return iVar18;
}

int func_1756(var uParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	iVar3 = player_id();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_2469(&((*Global_1298536)[iVar3]->f_19.f_1[iVar1]), 2))
		{
			if (!bParam1)
			{
				iVar0 = func_2470(iVar1);
				func_2468(uParam0, iVar0, (iParam2 + iVar2));
			}
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

int func_1757(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = func_1223(uParam0);
	iVar1 = 0;
	if (!func_1665(uParam0, iParam1, &iVar1))
	{
		return 0;
	}
	iVar2 = func_1788(&(uParam0->f_2207));
	if (iVar2 <= 0)
	{
		return 0;
	}
	if (iVar1 >= iVar2 || iVar1 < 0)
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		return 0;
	}
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	iVar7 = 0;
	iVar9 = 0;
	iVar10 = func_1666(iVar1, &(uParam0->f_2207));
	if (func_2321(func_1224(uParam0), iVar10, 1))
	{
		if (!func_2471(uParam0, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else if (func_1547(iVar10))
	{
		if (!func_2472(uParam0, iVar10, iParam2, iParam3, bParam4))
		{
			return 0;
		}
	}
	else
	{
		iVar8 = func_1790(iVar1, &(uParam0->f_2207));
		if (iVar8 <= 0)
		{
		}
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			Var3 = { func_1707(iVar1, iVar7, &(uParam0->f_2207)) };
			bVar11 = func_2453(iVar9, iParam2, iParam3, iVar0);
			if (func_2473(uParam0, Var3))
			{
				if (bVar11)
				{
					func_2474(uParam0, Var3.f_1, iVar9, Var3.f_2, Var3.f_3);
				}
				iVar9++;
			}
			else if (func_2451(uParam0, Var3))
			{
				if (bVar11)
				{
					func_2475(uParam0, Var3, iVar9, Var3.f_2, Var3.f_3, bParam4);
				}
				iVar9++;
			}
			iVar7++;
		}
	}
	return 1;
}

int func_1758(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	iVar1 = func_1788(&(uParam0->f_2207));
	if (iVar1 <= 0)
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_2453(iVar2, iParam1, iParam2, iVar0))
		{
			if (func_1669(iVar2, &(uParam0->f_2207), &iVar3))
			{
				func_2476(uParam0, iVar3, iVar2);
			}
		}
		iVar2++;
	}
	return 1;
}

int func_1759(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	if (func_41() == -1)
	{
		iVar4 = 0;
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (func_2453(iVar4, iParam1, iParam2, iVar0))
			{
				switch (iVar3)
				{
					case 0:
						iVar2 = 2;
						break;
					case 1:
						iVar2 = 3;
						break;
					case 2:
						iVar2 = 4;
						break;
					default:
						return 0;
				}
				if (func_2477(iVar2) && func_2478(iVar2))
				{
					iVar5 = func_2479(iVar2);
					iVar1 = func_2480(iVar5);
					if (func_2481(uParam0, iVar1, iVar2, iVar4))
					{
						iVar4++;
					}
				}
			}
			iVar3++;
		}
	}
	else
	{
		Var6.f_9 = -1591664384;
		iVar35 = func_1789(0);
		iVar37 = 0;
		iVar36 = 0;
		while (iVar36 < iVar35)
		{
			if (func_2453(iVar37, iParam1, iParam2, iVar0))
			{
				if (func_2482(iVar36, &Var6, 0))
				{
					if (func_2481(uParam0, Var6.f_4, iVar36, iVar37))
					{
						iVar37++;
					}
				}
			}
			iVar36++;
		}
	}
	return 1;
}

int func_1760(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	iVar5 = func_1790(0, &(uParam0->f_2207));
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var1 = { func_1707(0, iVar6, &(uParam0->f_2207)) };
		if (func_331(Var1, 0))
		{
			if (func_2453(iVar6, iParam1, iParam2, iVar0))
			{
				if (!func_2483(uParam0, Var1, iVar6))
				{
				}
			}
		}
		iVar6++;
	}
	return 1;
}

int func_1761(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	iVar5 = func_1790(0, &(uParam0->f_2207));
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var1 = { func_1707(0, iVar6, &(uParam0->f_2207)) };
		if (func_331(Var1, 0))
		{
			if (func_2453(iVar6, iParam1, iParam2, iVar0))
			{
				if (!func_2484(uParam0, Var1, iVar6))
				{
				}
			}
		}
		iVar6++;
	}
	return 1;
}

int func_1762(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	Var1.f_9 = -1591664384;
	iVar15 = func_2485(0);
	iVar16 = 0;
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		if (func_2453(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_2486(iVar17, &Var1, 0))
			{
				if (func_2487(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	iVar18 = func_1791(0);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar18)
	{
		if (func_2488(iVar17, &Var1, 0))
		{
			if (func_2453(iVar16, iParam1, iParam2, iVar0))
			{
				if (func_2487(uParam0, Var1, iVar16))
				{
					iVar16++;
				}
			}
		}
		iVar17++;
	}
	iVar23 = (iVar0 - iVar16);
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < iVar23)
	{
		if (func_2453(iVar16, iParam1, iParam2, iVar0))
		{
			if (func_2487(uParam0, Var19, iVar16))
			{
				iVar16++;
			}
		}
		iVar17++;
	}
	return 1;
}

int func_1763(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	func_2489(&(Global_1952637->f_1675));
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_1794(iVar2))
		{
			if (func_2453(iVar2, iParam1, iParam2, iVar0))
			{
				if (func_2490(uParam0, iVar2, iVar1))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_1764(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar1++;
	}
	return 1;
}

int func_1765(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	bVar2 = func_41() == -1;
	iVar5 = 0;
	while (iVar5 < 140)
	{
		if (func_2453(iVar1, iParam1, iParam2, iVar0))
		{
			iVar3 = -1;
			if (!func_2491(iVar5))
			{
			}
			else if (bVar2 && !func_2492(iVar5))
			{
			}
			else
			{
				iVar3 = func_2494(func_2493(iVar5, 1, 1));
				if (!func_1841(iVar3))
				{
				}
				else if (iVar3 == 5)
				{
				}
				else if (func_954(iVar4, iVar3))
				{
				}
				else if (func_2495(uParam0, iVar3, iVar1))
				{
					func_2496(&iVar4, iVar3);
					iVar1++;
				}
			}
		}
		iVar5++;
	}
	return 1;
}

int func_1766(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1223(uParam0);
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = func_1792(uParam0, 0, iVar1);
	iVar1 = (iVar1 + iVar2);
	iVar2 = func_1793(uParam0, 1045621973, 0, iVar1, 0);
	iVar1 = (iVar1 + iVar2);
	iVar2 = func_1793(uParam0, 1583044470, 0, iVar1, 0);
	iVar1 = (iVar1 + iVar2);
	iVar2 = func_1793(uParam0, 1005272, 0, iVar1, 0);
	iVar1 = (iVar1 + iVar2);
	iVar2 = func_1793(uParam0, 1463321587, 0, iVar1, 0);
	iVar1 = (iVar1 + iVar2);
	iVar2 = func_1793(uParam0, 348853959, 0, iVar1, 0);
	return 1;
}

int func_1767(var uParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	Var0 = { func_2464(func_2463()) };
	iVar8 = player_id();
	func_2465(&((*Global_1298536)[iVar8]->f_53), &iVar7, &Var0);
	iVar33 = 0;
	iVar34 = 0;
	while (iVar34 < iVar7)
	{
		if (!bParam1)
		{
			Var9 = { func_2497((*Global_1298536)[iVar8]->f_53[iVar34]) };
			Var17 = { func_2466((*Global_1298536)[iVar8]->f_53[iVar34]) };
			Var25 = { func_2498((*Global_1298536)[iVar8]->f_53[iVar34]) };
			func_2499(uParam0, Var9, Var17, Var25, (iParam2 + iVar33));
		}
		iVar33++;
		iVar34++;
	}
	return iVar33;
}

int func_1768(var uParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	iVar0 = 0;
	bVar1 = Global_1051439->f_3258;
	iVar44 = 0;
	while (iVar44 < 8)
	{
		iVar43 = 0;
		if (iVar0 >= 8)
		{
		}
		else
		{
			bVar48 = func_1773(iVar44, 1, 1);
			if (!func_568(bVar1, bVar48, &Var2, &iVar43, 1, 0))
			{
			}
			else
			{
				iVar46 = 0;
				while (iVar46 < iVar43)
				{
					if (func_1262(&(Var2[iVar46])) && func_2355(&(Var2[iVar46])) != 785047730)
					{
						bVar49 = false;
						iVar47 = 0;
						while (iVar47 < iVar42)
						{
							if (&uVar33[iVar47] == &Var2[iVar46])
							{
								bVar49 = true;
							}
							else
							{
								iVar47++;
							}
						}
						if (!bVar49)
						{
							uVar33[iVar42] = &Var2[iVar46];
							iVar42++;
							Var50 = { func_490(&(Var2[iVar46]), 0) };
							if (_0xb881ca836cc4b6d4(&Var50))
							{
								bVar45 = _0xc97e0d2302382211(func_489(0), &Var50, true);
								if (bVar45 > 0)
								{
									if (!bParam1)
									{
										func_2500(uParam0, &Var50, &(Var2[iVar46]), bVar45, (iParam2 + iVar0));
									}
									iVar0++;
								}
							}
						}
						Jump @318; //curOff = 290
					}
					else if (&Var2[iVar46] == 0)
					{
					}
					else
					{
						iVar46++;
					}
				}
			}
			iVar44++;
		}
	}
	if (iVar42 == 0)
	{
		return 0;
	}
	bVar54 = func_2355(&(uVar33[0]));
	if (bVar54 == 0)
	{
		return iVar0;
	}
	Var57.f_9 = -1591664384;
	Var71 = { func_767(0, -1591664384, -1591664384, -1591664384, 0, bVar54, 0) };
	if (func_770(&Var71, &iVar55, &iVar56, 1))
	{
		iVar46 = 0;
		while (iVar46 < iVar56)
		{
			if (func_783(&Var57, iVar46, iVar55, iVar56))
			{
				bVar49 = false;
				iVar47 = 0;
				while (iVar47 < iVar42)
				{
					if (&uVar33[iVar47] == Var57.f_4)
					{
						bVar49 = true;
					}
					else
					{
						iVar47++;
					}
				}
				if (!bVar49 && !func_1986(&Var57))
				{
					if (!bParam1)
					{
						func_2500(uParam0, &Var57, Var57.f_4, Var57.f_11, (iParam2 + iVar0));
					}
					iVar0++;
				}
			}
			iVar46++;
		}
		func_771(iVar55);
	}
	return iVar0;
}

void func_1769(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_181(iParam0))
	{
		return;
	}
	iVar0 = func_429(iParam0);
	func_563(iVar0, bParam1);
}

bool func_1770(int iParam0, bool bParam1)
{
	if (bParam1 && !func_181(iParam0))
	{
		return false;
	}
	iVar0 = func_429(iParam0);
	return _uiprompt_is_pressed((*Global_1951255)[iVar0]->f_3);
}

char* func_1771()
{
	return "uiItemID";
}

bool func_1772(bool bParam0)
{
	if (!func_275() && func_891())
	{
		return true;
	}
	return func_481(bParam0, 1435272033);
}

int func_1773(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_1774(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_568(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return false;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_1262(&(Var0[iVar32])))
		{
			return &(Var0[iVar32]);
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return false;
}

bool func_1775(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1776(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
	while (iVar0 < 60)
	{
		if (func_558(iVar0, 2))
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
		func_560(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

int func_1777(int iParam0)
{
	iVar0 = func_429(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return (*Global_1951255)[iVar0]->f_3;
}

bool func_1778(bool bParam0, var uParam1)
{
	return _item_database_get_shop_layout_menu_info_by_id(*uParam1, bParam0, &uVar0);
}

var func_1779(var uParam0)
{
	return uParam0->f_43;
}

bool func_1780(bool bParam0, bool bParam1, var uParam2)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	if (func_1521(bParam0, &Var0))
	{
		iVar44 = func_2171(&Var0);
		iVar45 = 0;
		while (iVar45 < iVar44)
		{
			if (func_1659(iVar45, &Var0))
			{
				if (func_2501(&Var0, bParam1, uParam2))
				{
					return true;
				}
			}
			iVar45++;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1781(var uParam0, bool bParam1, int iParam2)
{
	if (func_1523(&(uParam0->f_2207)) == bParam1)
	{
		return true;
	}
	iVar0 = func_2502(&(uParam0->f_2207));
	bVar1 = false;
	if (iVar0 > 0)
	{
		bVar1 = false;
		while (bVar1 <= (iVar0 - 1))
		{
			*iParam2 = bVar1;
			if (func_1201(bVar1, &(uParam0->f_2207)))
			{
				if (func_1781(uParam0, bParam1, iParam2))
				{
					return true;
				}
			}
			bVar1++;
		}
		func_1209(&(uParam0->f_2207));
		return false;
	}
	else
	{
		func_1209(&(uParam0->f_2207));
	}
	return false;
}

void func_1782(var uParam0)
{
	uParam0->f_2207.f_81 = 1;
}

void func_1783(var uParam0)
{
	if (uParam0->f_2207.f_121)
	{
		_copy_memory(&(uParam0->f_2207.f_130), &(uParam0->f_2207.f_121), 9);
	}
}

int func_1784(bool bParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*iParam1))
	{
		return 0;
	}
	bParam0->f_1 = _databinding_read_data_int_from_parent(*iParam1, func_1737());
	*bParam0 = _databinding_read_data_int_from_parent(*iParam1, func_1675());
	bParam0->f_2 = _databinding_read_data_int_from_parent(*iParam1, func_1771());
	bParam0->f_3 = _databinding_read_data_int_from_parent(*iParam1, func_2330());
	bParam0->f_4 = _databinding_read_data_int_from_parent(*iParam1, func_2331());
	bParam0->f_5 = { func_2329(iParam1) };
	bParam0->f_9 = _databinding_read_data_bool_from_parent(*iParam1, func_1856());
	bParam0->f_10 = _databinding_read_data_hash_string_from_parent(*iParam1, func_1795());
	return 1;
}

bool func_1785(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	*iParam4 = _databinding_add_data_container_by_hash(uParam0->f_2207.f_61, bParam1);
	_databinding_add_data_int(*iParam4, func_1737(), bParam3);
	_databinding_add_data_int(*iParam4, func_1675(), bParam1);
	if (bParam3 == 1702073444 || func_481(bParam1, -495963434))
	{
		_databinding_add_data_int(*iParam4, func_2330(), bParam2);
	}
	_databinding_add_data_int(*iParam4, func_1771(), bParam1);
	if (bParam5)
	{
		if (func_2503(uParam0, bParam1, &uVar0, &cVar4, 0))
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_string_by_hash(*iParam4, 1976702369, &uVar0);
			_databinding_add_data_string_by_hash(*iParam4, -1924991449, &cVar4);
		}
		else if (!func_2504(uParam0, bParam1, &Var8, 164843734))
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_hash_by_hash(*iParam4, 1976702369, 2);
			_databinding_add_data_hash_by_hash(*iParam4, -1924991449, 2);
		}
		else
		{
			_databinding_add_data_bool_by_hash(*iParam4, -1765302991, true);
			_databinding_add_data_string_by_hash(*iParam4, 1976702369, Var8.f_1);
			_databinding_add_data_string_by_hash(*iParam4, -1924991449, Var8);
		}
	}
	_databinding_add_data_bool(*iParam4, func_2334(), func_2505(uParam0, bParam1));
	_databinding_add_data_bool(*iParam4, "owned", func_1687(uParam0, bParam1, bParam3));
	_databinding_add_data_bool(*iParam4, "equipped", func_2424(uParam0, bParam1, bParam3, bParam2, -1));
	_databinding_add_data_bool(*iParam4, "locked", func_1866(uParam0, bParam1));
	bVar11 = func_2506(uParam0, bParam1, bParam3);
	_databinding_add_data_bool(*iParam4, func_1856(), bVar11);
	return true;
}

bool func_1786(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = func_1224(uParam0);
	iVar1 = func_2452(iVar0, iParam1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_1225(iVar0, iParam1, iVar2) != -1)
		{
			*iParam2++;
		}
		iVar2++;
	}
	return true;
}

bool func_1787(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	iVar0 = 0;
	if (!func_1665(uParam0, iParam1, &iVar0))
	{
		return false;
	}
	iVar1 = func_1788(&(uParam0->f_2207));
	if (iVar1 <= 0)
	{
		return false;
	}
	if (iVar0 >= iVar1 || iVar0 < 0)
	{
		return false;
	}
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	iVar6 = 0;
	iVar8 = func_1666(iVar0, &(uParam0->f_2207));
	if (func_2321(func_1224(uParam0), iVar8, 1))
	{
		if (!func_2507(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (func_1547(iVar8))
	{
		if (!func_2508(uParam0, iVar8, iParam2))
		{
			return false;
		}
	}
	else
	{
		iVar7 = func_1790(iVar0, &(uParam0->f_2207));
		if (iVar7 <= 0)
		{
		}
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			Var2 = { func_1707(iVar0, iVar6, &(uParam0->f_2207)) };
			if (func_1017(Var2.f_1, 2))
			{
				if (func_2473(uParam0, Var2))
				{
					*iParam2++;
				}
			}
			else if (func_331(Var2, 0))
			{
				if (func_2451(uParam0, Var2))
				{
					*iParam2++;
				}
			}
			iVar6++;
		}
	}
	return true;
}

int func_1788(var uParam0)
{
	return uParam0->f_12.f_5;
}

int func_1789(bool bParam0)
{
	iVar0 = func_2510(func_2509(), -1591664384, bParam0);
	return iVar0;
}

int func_1790(bool bParam0, var uParam1)
{
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return -1;
	}
	bVar0 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, bParam0, &bVar0))
	{
		if (_item_database_get_shop_layout_page_info_by_key(*uParam1, bVar0, &Var1))
		{
			return Var1.f_3;
		}
	}
	return -1;
}

int func_1791(bool bParam0)
{
	Var0 = { func_2511(0) };
	Var4.f_9 = -1591664384;
	func_1023(Var0, &Var4, bParam0, 0, -1);
	return func_2446(Var4.f_4);
}

int func_1792(var uParam0, bool bParam1, int iParam2)
{
	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	iVar0 = 0;
	if (!func_2512())
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < weekly_collectible_get_num_sets(1332470872))
	{
		iVar2 = weekly_collectible_get_item_set_buy_award(1332470872, iVar1);
		if (func_2513(iVar2))
		{
			if (!bParam1)
			{
				func_2514(uParam0, iVar2, (iParam2 + iVar0));
			}
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1793(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!bParam2 && iParam3 == -1)
	{
		iParam3 = 0;
	}
	iVar3 = 0;
	Var4.f_9 = -1591664384;
	Var18.f_9 = -1591664384;
	Var32 = { func_767(0, iParam1, -1591664384, -1591664384, 0, 0, 0) };
	if (iParam1 != 1045621973)
	{
		func_769(&Var32, func_773(-1268909760, func_627(1), 359221401, 1));
	}
	if (func_770(&Var32, &iVar0, &iVar1, 1))
	{
		if (iParam1 == 1045621973 && !bParam2)
		{
			iVar3 = func_2515(uParam0, iParam1, 21550967, iVar0, iVar1, iParam3, bParam4);
		}
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_783(&Var18, iVar2, iVar0, iVar1))
			{
				if (!func_1023(Var18.f_5, &Var4, 1, 0, -1))
				{
				}
				if (Var4.f_4 == 21550967)
				{
				}
				else
				{
					if (!bParam2)
					{
						func_2516(uParam0, &Var18, Var18.f_4, Var18.f_11, iParam1, (iParam3 + iVar3));
					}
					if (bParam4)
					{
						if (!func_2517(Var18.f_4, 0))
						{
							iVar3++;
						}
					}
					else
					{
						iVar3++;
					}
				}
			}
			iVar2++;
		}
		func_771(iVar0);
	}
	return iVar3;
}

bool func_1794(bool bParam0)
{
	if (func_1160() == 2026485318)
	{
		if (bParam0 == 4)
		{
			return false;
		}
	}
	return true;
}

char* func_1795()
{
	return "uiPaletteOptionItemEnum";
}

char* func_1796()
{
	return "uiPaletteOptionItemType";
}

char* func_1797()
{
	return "uiPaletteOptionItemLayoutLinkID";
}

bool func_1798(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	*iParam2 = _databinding_add_data_container_by_hash(uParam0->f_2207.f_59, bParam1);
	_databinding_add_data_int(*iParam2, func_1737(), -1968468235);
	_databinding_add_data_int(*iParam2, func_1771(), bParam1);
	_databinding_add_data_hash(*iParam2, func_2518(), bParam1);
	bVar0 = true;
	if (func_1752(uParam0, func_1224(uParam0), bParam1))
	{
		bVar0 = false;
	}
	if (uParam0->f_2207.f_147)
	{
		Stack.Push(uParam0);
		Stack.Push(func_1188(uParam0));
		Stack.Push(bParam1);
		Stack.Push(-1968468235);
		Call_Loc(uParam0->f_2207.f_148);
		if (!StackVal)
		{
			bVar0 = false;
		}
	}
	bVar1 = iParam5;
	bVar3 = true;
	if (func_1189(uParam0) == 310306577)
	{
		bVar2 = iParam4;
		if (bVar2 == 0)
		{
			if (!func_2449(uParam0, func_1224(uParam0), bParam1, &bVar2))
			{
				func_2519(uParam0, func_1224(uParam0), bParam1, &bVar2, &bParam6);
				bVar3 = false;
			}
		}
		else
		{
			bVar3 = func_2424(uParam0, bVar2, bVar1, bParam6, -1);
		}
	}
	else if (!func_2449(uParam0, func_1224(uParam0), bParam1, &bVar2))
	{
		bVar3 = false;
	}
	if (func_331(bVar2, 0))
	{
		bVar1 = func_1817(uParam0, bVar2);
		_databinding_add_data_hash(*iParam2, func_1795(), bVar2);
		_databinding_add_data_hash(*iParam2, func_1796(), bVar1);
		_databinding_add_data_int(*iParam2, func_1797(), bParam6);
		if (func_2503(uParam0, bVar2, &uVar4, &cVar8, 1))
		{
			_databinding_add_data_bool(*iParam2, "iconVisible", true);
			_databinding_add_data_string(*iParam2, "iconTextureDict", &uVar4);
			_databinding_add_data_string(*iParam2, "iconTexture", &cVar8);
		}
		else if (!func_2504(uParam0, bVar2, &Var12, 164843734))
		{
			_databinding_add_data_bool(*iParam2, "iconVisible", true);
			_databinding_add_data_string(*iParam2, "iconTextureDict", "");
			_databinding_add_data_string(*iParam2, "iconTexture", "");
		}
		else
		{
			_databinding_add_data_bool(*iParam2, "iconVisible", true);
			_databinding_add_data_string(*iParam2, "iconTextureDict", Var12.f_1);
			_databinding_add_data_string(*iParam2, "iconTexture", Var12);
		}
		{
		}
