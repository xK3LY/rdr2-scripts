void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_24 = 401817002;
	func_1(ScriptParam_0.f_18);
	func_2(&Local_776, &uLocal_2185, &ScriptParam_0);
	while (!func_3(&Local_776, &uLocal_2185))
	{
		func_4(&uLocal_25, &Local_776, &uLocal_2185);
		wait(0);
	}
	func_5(&uLocal_25, &Local_776, &uLocal_2185);
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	if (func_9())
	{
		func_6();
	}
	network_register_host_broadcast_variables(&uLocal_25, 751, 56);
	func_10(_0xba24095ea96dfe17(&uLocal_25), 751, "m_netMCVSMissionHostData");
	network_register_player_broadcast_variables(&Local_776, 1409, 57);
	func_11(_0x690806bc83bc8ca2(Local_776[0]), 1409, "m_netMCVSMissionPlayerData");
	func_12(0);
	set_this_script_can_be_paused(false);
}

void func_2(var uParam0, var uParam1, var uParam2)
{
	uParam1->f_10 = { *uParam2 };
	uParam1->f_93.f_3472 = { uParam2->f_27 };
	if (func_13(0, 0) || !func_14(participant_id()))
	{
		return;
	}
	if (!func_15(uParam2, 2048))
	{
		func_16();
		func_17();
		func_18(1);
	}
	func_19(128);
	func_20(&(uParam1->f_93));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!network_is_player_active(int_to_playerindex(iVar0)))
		{
		}
		else
		{
			if (func_21(iVar0, 1))
			{
				func_22(1);
				func_23(&(uParam1->f_10), 512);
				func_23(&(uParam1->f_10), 8);
				func_23(&(uParam1->f_10), 1024);
				func_24(uParam0, 8);
			}
			if (uParam2->f_26 == -318976023)
			{
				func_23(&(uParam1->f_10), 512);
				func_24(uParam0, 8);
			}
		}
		iVar0++;
	}
	if (func_25(25))
	{
		func_26((*uParam0)[participant_id_to_int()], 0);
	}
	func_27();
	_0xdd1232b332cbb9e7(6, 1, 0);
	iVar1 = 512;
	Var2 = { func_28() };
	if (Var2 != 2)
	{
		iVar1 |= 64 | 128;
	}
	_0x78335e12db0bf961(iVar1);
	_0x0ae241a4a9adeeec(0);
	(*uParam0)[participant_id_to_int()]->f_30 = get_network_time_accurate();
	_text_database_request("UIC");
}

bool func_3(var uParam0, var uParam1)
{
	if (func_13(0, 0))
	{
		func_29(uParam1, 128);
		return true;
	}
	if (func_30((*uParam0)[participant_id_to_int()]) >= 15)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (network_is_host_of_this_script())
	{
		func_31(uParam0, uParam1, uParam2);
	}
	func_32();
	func_33(uParam0, uParam1, uParam2);
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	func_34();
	func_35();
	func_36(131072);
	func_36(16);
	func_36(262144);
	func_37(uParam2);
	func_38();
	func_39(uParam0, uParam2);
	_0x0ae241a4a9adeeec(0);
	if (func_40(uParam2, 1) || func_40(uParam2, 128))
	{
		if (!func_15(&(uParam2->f_10), 2048))
		{
			func_41();
			func_18(0);
			func_42();
			func_16();
			func_17();
		}
		func_43(&(uParam2->f_10));
		if (!func_44())
		{
			toggle_paused_renderphases(true);
		}
		func_45(&(uParam2->f_10), 0);
		if (func_40(uParam2, 4))
		{
			func_46(player_ped_id(), 1);
		}
		if ((func_47() || !func_48(uParam2->f_10.f_53)) && !func_44())
		{
			vVar0 = { *uParam2->f_93.f_4033[0] + Vector(0f, -7.5f, -7.5f) };
			vVar3 = { func_49(player_id()) };
			if (func_50(vVar0, vVar3, 1.5f, 1))
			{
				set_entity_coords(player_ped_id(), Global_3145858->f_196, false, false, true, true);
			}
			func_51(1, 0, 0);
			func_52(0);
			if (func_53(255))
			{
				if (is_screen_faded_in() || is_screen_fading_in())
				{
					do_screen_fade_out(0);
				}
				func_54(0);
			}
			func_55(1, 1);
			func_54(0);
			func_56(0);
			if (func_57(vVar3, &iVar6))
			{
				func_58(iVar6, 0);
			}
			else
			{
				func_59(1, 1);
			}
			func_60();
		}
		func_61(1);
		if (!func_62())
		{
			func_63(1);
			do_screen_fade_out(0);
			_0x9b1fc259187c97c0("fade_to_black");
		}
		if (!func_40(uParam2, 16))
		{
			func_64(1);
		}
		Global_1051212 = -1;
	}
	func_65();
	if (func_15(&((*Global_263042)[&Global_1296859]->f_1), 64))
	{
		func_66(32768);
	}
	Var7 = { func_28() };
	if (func_40(uParam2, 1) || func_40(uParam2, 128))
	{
		if (Var7 == 2)
		{
			func_67("MP_CO_OP_LOBBIES_EXIT", 3, 1);
		}
		func_68(uParam1, uParam2);
		return;
	}
	if (!&Global_1048584)
	{
		clear_focus();
	}
	if (Var7 == 2)
	{
		func_67("MP_CO_OP_LOBBIES_STOP", 3, 1);
	}
}

void func_6()
{
	terminate_this_thread();
}

void func_7(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_8()
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
			func_6();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!network_is_game_in_progress())
		{
			func_6();
		}
		if (!network_is_signed_online())
		{
			func_6();
		}
		if (func_69() == 0)
		{
			if (func_70())
			{
				func_6();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_6();
	}
	return 1;
}

bool func_9()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
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
			func_6();
			return;
		}
		wait(0);
	}
}

bool func_13(bool bParam0, bool bParam1)
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

int func_14(int iParam0)
{
	return func_71(iParam0);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

void func_16()
{
	func_72(&(Global_1291734->f_11.f_78));
	func_73(43);
}

void func_17()
{
	func_72(&(Global_1291734->f_581.f_82));
	func_73(87);
}

void func_18(bool bParam0)
{
	if (!bParam0)
	{
		func_74(15);
	}
	else
	{
		func_75(15);
	}
}

void func_19(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 - ((*Global_263042)[&Global_1296859]->f_68 && iParam0));
}

void func_20(var uParam0)
{
	func_76(uParam0, 0);
}

bool func_21(int iParam0, int iParam1)
{
	return func_77((*Global_1056141)[iParam0]->f_15.f_11, iParam1);
}

void func_22(int iParam0)
{
	if (!func_77((*Global_1056141)[network_player_id_to_int()]->f_15.f_11, iParam0))
	{
	}
	func_78(&((*Global_1056141)[network_player_id_to_int()]->f_15.f_11), iParam0);
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

void func_24(var uParam0, int iParam1)
{
	iVar0 = participant_id_to_int();
	func_78(&((*uParam0)[iVar0]->f_1), iParam1);
}

bool func_25(int iParam0)
{
	return func_79(&(Global_3145858->f_6), iParam0);
}

void func_26(var uParam0, int iParam1)
{
	uParam0->f_27 = iParam1;
}

void func_27()
{
	if (!func_80(2))
	{
		func_81(2);
	}
}

struct<2> func_28()
{
	return Global_1572887->f_106.f_11;
}

void func_29(var uParam0, int iParam1)
{
	func_78(&(uParam0->f_9), iParam1);
}

int func_30(var uParam0)
{
	return *uParam0;
}

void func_31(var uParam0, var uParam1, var uParam2)
{
	iVar0 = participant_id_to_int();
	switch (func_82(uParam0))
	{
		case 0:
			if (func_30((*uParam1)[iVar0]) <= 0)
			{
				return;
			}
			func_83(uParam0, uParam2);
			func_84(&(uParam0->f_734));
			func_85(uParam0, 1);
			break;
		case 1:
			if ((func_86(uParam1, 3) && !_0x179a6f0ee2e79026(&(uParam0->f_748))) || func_87(&(uParam0->f_734), 15000))
			{
				func_85(uParam0, 2);
			}
			break;
		case 2:
			func_88(uParam0, uParam1, uParam2);
			func_89(uParam0, uParam2);
			if (func_90(uParam0, uParam1, uParam2))
			{
				func_85(uParam0, 4);
			}
			break;
		case 4:
			uParam0->f_743 = get_network_time_accurate();
			func_85(uParam0, 5);
			func_91(uParam0);
			break;
		case 5:
			iVar1 = network_get_num_participants();
			if (func_92(uParam0, uParam2, iVar1, 1))
			{
				func_93(uParam0);
				return;
			}
			if (network_get_total_num_players() != iVar1 && get_time_difference(uParam0->f_743, get_network_time_accurate()) < Global_1901947->f_308.f_4)
			{
				return;
			}
			if (func_15(&(uParam2->f_10), 2))
			{
				func_85(uParam0, 6);
				return;
			}
			func_94(uParam0, uParam1, uParam2);
			if (!func_25(25))
			{
				func_95(uParam0, uParam1, uParam2);
			}
			if (func_92(uParam0, uParam2, iVar1, 0))
			{
				if (!func_15(&(uParam2->f_10), 512))
				{
					func_93(uParam0);
				}
				else
				{
					func_96(uParam2);
					func_97(uParam1, 15);
				}
				return;
			}
			if (func_77(_0x51f33dbc1a41cbfd(), 2048) && uParam0->f_744 == 0)
			{
				uParam0->f_744 = get_network_time_accurate();
			}
			if ((func_98(uParam0) || func_99(uParam2)) && (uParam0->f_744 != 0 && get_time_difference(uParam0->f_744, get_network_time_accurate()) > Global_1901947->f_308.f_7))
			{
				if (func_100(uParam0))
				{
					func_101(uParam0, 0);
				}
				else
				{
					func_85(uParam0, 6);
				}
			}
			break;
		case 6:
			iVar1 = network_get_num_participants();
			if (func_92(uParam0, uParam2, iVar1, 1))
			{
				func_93(uParam0);
				return;
			}
			func_94(uParam0, uParam1, uParam2);
			if (func_102(uParam1, 4))
			{
				func_85(uParam0, 7);
			}
			break;
		case 7:
			break;
	}
}

void func_32()
{
	func_103(0);
}

void func_33(var uParam0, var uParam1, var uParam2)
{
	func_104(uParam0, uParam1, uParam2);
	func_105(uParam2);
	iVar0 = participant_id_to_int();
	switch (func_30((*uParam1)[iVar0]))
	{
		case 0:
			func_106(uParam0, uParam1, uParam2);
			break;
		case 1:
			func_107(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_108(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_109(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_110(uParam0, uParam1, uParam2);
			break;
		case 5:
			func_111(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_112(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_113(uParam0, uParam1, uParam2, iVar0);
			break;
		case 8:
			func_114(uParam0, uParam1, uParam2, iVar0);
			break;
		case 9:
			func_115(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_116(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_117(uParam0, uParam1, uParam2);
			break;
		case 12:
			func_118(uParam1, uParam2);
			break;
		case 13:
			func_119(uParam1, uParam2);
			break;
		case 14:
			func_120(uParam0, uParam1, uParam2);
			break;
		case 15:
			func_121(uParam0, uParam1, uParam2);
			break;
	}
}

void func_34()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

void func_35()
{
	if (func_80(2))
	{
		func_122(2);
	}
}

void func_36(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_37(var uParam0)
{
	func_123();
}

void func_38()
{
	iVar0 = &Global_1296859;
	(*Global_263042)[iVar0]->f_65 += 32;
	if ((*Global_263042)[iVar0]->f_65 > 511)
	{
		(*Global_263042)[iVar0]->f_65 = get_unique_int_for_player(player_id());
	}
	iVar1 = 15;
	iVar2 = 0;
	uVar3 = func_124((*Global_263042)[iVar0]->f_65, 0);
	while (_0x179a6f0ee2e79026(&uVar3) && iVar2 < iVar1)
	{
		iVar2++;
		(*Global_263042)[iVar0]->f_65 += 32;
		if ((*Global_263042)[iVar0]->f_65 > 511)
		{
			(*Global_263042)[iVar0]->f_65 = get_unique_int_for_player(player_id());
		}
		uVar3 = func_125((*Global_263042)[iVar0]->f_65, 0);
	}
	if ((*Global_263042)[iVar0]->f_65 == -1)
	{
	}
}

void func_39(var uParam0, var uParam1)
{
	func_126(&(uParam1->f_93));
	if (func_127(&(uParam1->f_93)) == -1)
	{
		return;
	}
	if (func_128(&(uParam1->f_93), 2))
	{
		_0x5a8b01199c3e79c3();
	}
	if (uParam1->f_93.f_4030 != -1)
	{
		if (_is_anim_scene_started(uParam1->f_93.f_4030, false))
		{
			abort_anim_scene(uParam1->f_93.f_4030, false);
		}
		reset_anim_scene(uParam1->f_93.f_4030, 0);
	}
	if (uParam1->f_93.f_3470 != 0)
	{
		_0x00a15b94cba4f76f(uParam1->f_93.f_3470);
	}
	if (func_128(&(uParam1->f_93), 64))
	{
		clear_focus();
		func_129(&(uParam1->f_93), 64);
	}
	if (does_cam_exist(uParam1->f_93.f_4031))
	{
		destroy_cam(uParam1->f_93.f_4031, false);
	}
	if (does_entity_exist(uParam1->f_93.f_4032))
	{
		delete_ped(&(uParam1->f_93.f_4032));
	}
	if (uParam1->f_93.f_5303)
	{
		uParam1->f_93.f_5303 = 0;
	}
	clear_timecycle_modifier();
	_0xff8018c778349234(1);
	_0xf01d21df39554115(1);
	_display_hud_component(439038017);
	render_script_cams(false, false, 3000, true, false, 0);
	_display_hud_component(481761311);
	_display_hud_component(-1679307491);
	func_131(0, func_130());
	func_132(func_130());
	func_133(&(uParam1->f_93.f_3475));
	func_134(uParam0, uParam1, 1);
	func_135(&(uParam1->f_93));
	func_136();
	_0x65f040d91001ed4b(0);
	clear_weather_type_persist();
	if (!func_137(256))
	{
		func_138();
		if (network_is_in_mp_cutscene())
		{
			network_set_in_mp_cutscene(false, true, 32, true);
		}
	}
	if (uParam1->f_93.f_2 == -1794869146)
	{
		_close_app_by_hash_immediate(1473691941);
	}
	else
	{
		_close_app_by_hash(1473691941);
	}
	func_139();
	_databinding_remove_data_entry(uParam1->f_93.f_30);
	_databinding_remove_data_entry(uParam1->f_93.f_142);
	_databinding_remove_data_entry(uParam1->f_93.f_1949);
	_databinding_remove_data_entry(uParam1->f_93.f_2400);
	_databinding_remove_data_entry(uParam1->f_93.f_2667);
	_databinding_remove_data_entry(uParam1->f_93.f_2686);
	_databinding_remove_data_entry(uParam1->f_93.f_3128);
	func_140();
	func_141(1);
	if (uParam1->f_93.f_5298 != 0)
	{
		func_142(uParam1);
		_datafile_unload(uParam1->f_93.f_5298);
		uParam1->f_93.f_5298 = 0;
	}
	func_76(&(uParam1->f_93), -1);
}

bool func_40(var uParam0, int iParam1)
{
	return func_77(uParam0->f_9, iParam1);
}

void func_41()
{
	func_143(1);
	func_143(16);
	func_143(4);
	func_143(2);
	func_143(8);
	func_143(64);
	func_143(128);
	func_143(512);
	func_143(1024);
	func_143(2048);
	func_143(4096);
	func_143(8192);
	func_144();
	func_145();
}

void func_42()
{
	if (func_146(255) == 4)
	{
		Global_1102219->f_3953 = 1;
		return;
	}
	func_74(50);
	func_74(59);
	func_74(60);
	func_74(61);
	func_74(62);
	func_74(65);
	func_74(66);
	func_74(67);
	func_74(68);
	func_74(69);
	func_74(70);
	func_74(71);
	func_74(75);
	func_74(76);
	func_74(73);
	func_74(74);
	func_74(72);
	func_74(77);
	func_74(78);
	func_74(79);
	func_74(80);
	func_74(81);
	func_74(82);
	func_74(86);
	func_74(87);
	func_74(85);
	func_74(83);
	func_74(84);
	Global_1102219->f_3953 = 0;
}

int func_43(var uParam0)
{
	if (!func_147(uParam0, 0))
	{
		return 0;
	}
	if (func_148(255) && !func_149(player_id(), 8192))
	{
		_0x7de4643157ad646c(Global_265377->f_124675);
	}
	func_150();
	return 1;
}

bool func_44()
{
	return Global_1572887->f_266 > 0;
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1 && func_15(uParam0, 512))
	{
		return;
	}
	iVar0 = 2;
	if (bParam1)
	{
		iVar0 = 60;
	}
	if (!func_44())
	{
		func_151(!bParam1, iVar0);
	}
	if (bParam1)
	{
		_hide_hud_component(474191950);
	}
	else
	{
		_display_hud_component(474191950);
	}
	_0xc505036a35afd01b(bParam1);
}

void func_46(int iParam0, bool bParam1)
{
	if (!func_152(32))
	{
		return;
	}
	func_153(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_154(32);
	func_155();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_156(&(Global_1952637->f_2365));
	func_157(&(Global_1952637->f_2365));
	func_158(4);
	if (bParam1)
	{
		func_159(iParam0, 1, 1, 0);
	}
	func_153(27, 0, 131074, 0, 0);
	func_153(34, 0, 131072, 0, 0);
}

bool func_47()
{
	iVar0 = 9;
	while (iVar0 <= 12)
	{
		if (Global_1139381->f_4912[iVar0]->f_1 && !Global_1139381->f_4912[iVar0]->f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_48(struct<2> Param0)
{
	return func_160(Param0, 9, 12);
}

Vector3 func_49(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

bool func_50(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_51(bool bParam0, int iParam1, bool bParam2)
{
	if (func_161())
	{
		if (func_162(255))
		{
			if (!func_163(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_164(Global_1893587->f_2) && func_165(Global_1893587->f_2))
		{
			func_166(Global_1893587->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587->f_7 = iParam1;
				func_167(16);
			}
		}
		else if (func_164(Global_1893587->f_2) && !func_168(Global_1893587->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1893587->f_7 = 0;
		func_169(16);
		func_170(bParam2);
		if (bVar0)
		{
			func_169(1);
		}
	}
}

void func_52(bool bParam0)
{
	if (!bParam0)
	{
		func_74(25);
	}
	else
	{
		func_75(25);
	}
}

bool func_53(int iParam0)
{
	return func_163(1, iParam0);
}

void func_54(bool bParam0)
{
	if (!bParam0)
	{
		func_74(18);
	}
	else
	{
		func_75(18);
	}
}

void func_55(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (iParam1 != -1)
		{
			Global_1102219->f_3809 = 0;
		}
		else
		{
			Global_1102219->f_3809 = 1;
		}
		func_75(58);
		Global_1102219->f_3808 = iParam1;
	}
	else
	{
		func_74(58);
	}
}

void func_56(bool bParam0)
{
	if (!bParam0)
	{
		func_74(19);
	}
	else
	{
		func_75(19);
	}
}

bool func_57(vector3 vParam0, var uParam3)
{
	*uParam3 = func_171(vParam0, 1);
	switch (*uParam3)
	{
		case 33:
			*uParam3 = 5;
			return true;
		default:
			break;
	}
	return false;
}

void func_58(int iParam0, bool bParam1)
{
	if (!func_172(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_75(88);
	if (func_173(iParam0, &uVar0))
	{
		func_174(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_74(0);
		}
		return;
	}
	func_175(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_74(0);
	}
}

void func_59(bool bParam0, bool bParam1)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (func_176(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_74(0);
	}
	else
	{
		if (bParam1)
		{
			func_177(0, 0, 0, 1);
		}
		func_75(0);
		func_178(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_179(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_180(Global_1102219->f_3849, 36);
	func_181(Global_1102219->f_3888, 36);
}

void func_60()
{
	if (!Global_1572887->f_6)
	{
		Global_1572887->f_6 = 1;
		_0xe9f24081d84931b8();
	}
}

void func_61(bool bParam0)
{
	if (network_is_game_in_progress() && func_44())
	{
		if (network_is_in_tutorial_session())
		{
			func_182(1);
		}
	}
	if (bParam0 && network_is_clock_time_overridden())
	{
		network_clear_clock_time_override();
	}
}

bool func_62()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

int func_63(int iParam0)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_266 >= 6 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	Global_1572887->f_360.f_4 = 4;
	Global_1572887->f_360.f_21 = iParam0;
	Global_1572887->f_360.f_5 = 18;
	Global_1572887->f_360.f_25 = 0;
	Global_1572887->f_360.f_26 = 0;
	_0xc505036a35afd01b(true);
	return 1;
}

void func_64(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_78(&(Global_1194053->f_3), 32);
		func_78(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_78(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_78(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_78(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_78(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_78(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_65()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_66(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

int func_67(char* sParam0, int iParam1, bool bParam2)
{
	iVar0 = get_id_of_this_thread();
	if (((iVar0 == Global_1071686->f_22971.f_1 || Global_1071686->f_22971.f_1 == 0) || iParam1 > Global_1071686->f_22971) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			_copy_memory(&(Global_1071686->f_22971), &uVar1, 2);
		}
		else
		{
			Global_1071686->f_22971.f_1 = get_id_of_this_thread();
			Global_1071686->f_22971 = iParam1;
		}
		if (trigger_music_event(sParam0))
		{
		}
		return 1;
	}
	return 0;
}

void func_68(var uParam0, var uParam1)
{
	Var0 = network_is_host_of_this_script();
	Var0.f_1 = uParam1->f_10.f_21.f_2;
	Var0.f_2 = func_183(uParam1);
	Var0.f_3 = func_184(uParam1->f_10.f_53);
	Var0.f_8 = { uParam1->f_10.f_27 };
	Var0.f_11 = 2084825405;
	Var0.f_12 = 2084825405;
	if (network_is_game_in_progress())
	{
		Var0.f_4 = get_time_difference((*uParam0)[participant_id_to_int()]->f_30, get_network_time_accurate());
		Var0.f_7 = network_get_num_participants();
		if ((*uParam0)[participant_id_to_int()]->f_26 > -1 && (*uParam0)[participant_id_to_int()]->f_26 < 8)
		{
			Var0.f_11 = func_185(&((*uParam0)[participant_id_to_int()]->f_15[(*uParam0)[participant_id_to_int()]->f_26]));
		}
		Var0.f_12 = func_185((*uParam0)[participant_id_to_int()]->f_14);
		bVar41 = !_databinding_read_data_bool(uParam1->f_93.f_57.f_66);
		Var42.f_9 = -1591664384;
		if (!bVar41)
		{
			iVar39 = 0;
			while (iVar39 < 4)
			{
				if (iVar40 < 0 || iVar40 == 20)
				{
				}
				else if (!_0xb881ca836cc4b6d4(uParam1->f_93.f_2229.f_14[iVar39]))
				{
				}
				else
				{
					bVar56 = func_186(*uParam1->f_93.f_2229.f_14[iVar39], &Var42, 1, 0, -1);
					if (bVar56)
					{
						uVar18[iVar40] = Var42.f_4;
						iVar40++;
					}
				}
				iVar39++;
			}
			iVar39 = 0;
			while (iVar39 < 9)
			{
				if (iVar40 < 0 || iVar40 == 20)
				{
				}
				else if (!_0xb881ca836cc4b6d4(uParam1->f_93.f_2229.f_36[iVar39]))
				{
				}
				else
				{
					bVar56 = func_186(*uParam1->f_93.f_2229.f_36[iVar39], &Var42, 1, 0, -1);
					if (bVar56)
					{
						uVar18[iVar40] = Var42.f_4;
						iVar40++;
					}
				}
				iVar39++;
			}
			iVar39 = 0;
			while (iVar39 < 23)
			{
				if (iVar40 < 0 || iVar40 == 20)
				{
				}
				else if (!_0xb881ca836cc4b6d4(uParam1->f_93.f_2229.f_75[iVar39]))
				{
				}
				else
				{
					bVar56 = func_186(*uParam1->f_93.f_2229.f_75[iVar39], &Var42, 1, 0, -1);
					if (bVar56)
					{
						uVar18[iVar40] = Var42.f_4;
						iVar40++;
					}
				}
				iVar39++;
			}
		}
		iVar39 = 0;
		while (iVar39 < 4)
		{
			if (iVar39 < 0 || iVar39 == 4)
			{
			}
			else
			{
				uVar13[iVar39] = &Global_1139381->f_4621.f_36[iVar39];
			}
			iVar39++;
		}
	}
	else
	{
		Var0.f_4 = 0;
		Var0.f_7 = 0;
	}
	Var0.f_6 = func_187(uParam0, 8);
	Var0.f_5 = func_188(uParam1, &Var0);
	_0xecd67e9fa677cccf(&Var0, &uVar13, &uVar18, bVar41);
}

int func_69()
{
	return Global_1572887->f_13;
}

bool func_70()
{
	return Global_1051252->f_8;
}

int func_71(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= network_get_max_num_participants())
	{
		return 0;
	}
	return 1;
}

void func_72(var uParam0)
{
	func_189(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_190() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

void func_73(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

int func_74(int iParam0)
{
	if (func_192(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0)
{
	if (func_193(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_76(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_77(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_78(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_79(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

bool func_80(int iParam0)
{
	return func_194((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

void func_81(int iParam0)
{
	if (!func_80(iParam0))
	{
		func_195(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

int func_82(var uParam0)
{
	return uParam0->f_730;
}

void func_83(var uParam0, var uParam1)
{
	func_196(uParam0, uParam1->f_10.f_30);
	if (!func_197(uParam1))
	{
		func_198(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_199(uParam0, iVar0, uParam1[iVar0]);
		iVar0++;
	}
	uParam0->f_744 = 0;
	func_201(uParam0, func_200(uParam1->f_10.f_18));
}

void func_84(var uParam0)
{
	func_202(uParam0, 0);
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_730 = iParam1;
}

bool func_86(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (func_30((*uParam0)[iVar0]) <= iParam1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_87(var uParam0, int iParam1)
{
	if (!func_203(uParam0))
	{
		return false;
	}
	if (func_204(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_205(uParam0);
	if (func_15(&(uParam2->f_10), 4))
	{
		func_196(uParam0, ceil((to_float(iVar0) / to_float(&(uParam0->f_7[0])))));
	}
	func_206(uParam0, uParam2);
	func_207(uParam0, uParam1, uParam2);
	func_208(uParam0, uParam1, uParam2);
	func_209(uParam0);
	bVar1 = func_210(uParam0, uParam2);
	if (!bVar1)
	{
		iVar2 = network_get_num_participants();
		if (iVar2 < uParam2->f_10.f_32)
		{
			if (func_15(&(uParam2->f_10), 512))
			{
				if (!func_211(&(uParam2->f_80)))
				{
					func_212(&(uParam2->f_80), 0);
					do_screen_fade_out(0);
					return;
				}
				if (func_213(&(uParam2->f_80)) > 30000)
				{
					func_66(32);
					func_214(8);
					return;
				}
			}
		}
		else if (iVar2 <= uParam2->f_10.f_33 && func_25(25))
		{
			bVar1 = true;
		}
	}
	if ((bVar1 && !func_203(&(uParam0->f_731))) && func_86(uParam1, 4))
	{
		func_84(&(uParam0->f_731));
		func_215(uParam0, 1024);
	}
	else if (!bVar1)
	{
		if (func_203(&(uParam0->f_731)))
		{
			func_216(&(uParam0->f_731));
		}
		func_217(uParam0, 1024);
	}
}

void func_89(var uParam0, var uParam1)
{
	iVar0 = func_218(uParam0);
	iVar1 = func_200(uParam1->f_10.f_18);
	if (((_network_is_player_index_valid(iVar1) && iVar0 != iVar1) && network_is_player_active(iVar1)) && network_is_player_a_participant(iVar1))
	{
		func_201(uParam0, iVar1);
		return;
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		func_201(uParam0, player_id());
		return;
	}
	if (!network_is_player_active(iVar0) || !network_is_player_a_participant(iVar0))
	{
		func_201(uParam0, player_id());
	}
}

bool func_90(var uParam0, var uParam1, var uParam2)
{
	iVar0 = (func_219(uParam0, uParam2) - 15000);
	if (func_203(&(uParam0->f_731)) && func_204(&(uParam0->f_731)) > iVar0)
	{
		return true;
	}
	if (func_220(func_125(uParam2->f_10.f_18, uParam2->f_10.f_17), 8192))
	{
		func_215(uParam0, 8192);
		func_202(&(uParam0->f_731), iVar0);
		return true;
	}
	if (!func_221(uParam0, 1024))
	{
		return false;
	}
	if (func_221(uParam0, 2048))
	{
		return false;
	}
	if (func_222(uParam2->f_10.f_53) == 9)
	{
		if (network_get_num_participants() < func_223() && func_204(&(uParam0->f_731)) < 15000)
		{
			return false;
		}
	}
	if (func_102(uParam1, 8))
	{
		func_202(&(uParam0->f_731), (iVar0 + 15000 - 0));
		return true;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		if (func_224((*uParam1)[iVar1], 1))
		{
			func_226(uParam0, uParam2, 77, func_225(0, 8));
			func_202(&(uParam0->f_731), iVar0);
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_91(var uParam0)
{
	func_227(uParam0);
	if (func_229(uParam0, func_228(uParam0, -1), &uVar0))
	{
		if (uParam0->f_4 != 2)
		{
			func_101(uParam0, 2);
		}
	}
	else
	{
		func_101(uParam0, 6);
		uParam0->f_554 = 0;
	}
}

bool func_92(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_221(uParam0, 8192))
	{
		return false;
	}
	if (bParam3 && func_15(&(uParam1->f_10), 512))
	{
		return false;
	}
	if (iParam2 < uParam1->f_10.f_32 || iParam2 > uParam1->f_10.f_33)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0)
{
	if (func_203(&(uParam0->f_731)))
	{
		func_216(&(uParam0->f_731));
	}
	func_101(uParam0, 0);
	func_217(uParam0, 1024);
	func_85(uParam0, 2);
}

void func_94(var uParam0, var uParam1, var uParam2)
{
	if (!func_203(&(uParam0->f_731)) || !func_102(uParam1, 8))
	{
		return;
	}
	iVar0 = (func_219(uParam0, uParam2) - 0);
	if (func_204(&(uParam0->f_731)) < iVar0)
	{
		func_202(&(uParam0->f_731), iVar0);
	}
}

void func_95(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_205(uParam0);
	if (func_15(&(uParam2->f_10), 4))
	{
		func_196(uParam0, ceil((to_float(iVar0) / to_float(&(uParam0->f_7[0])))));
	}
	func_207(uParam0, uParam1, uParam2);
	func_230(uParam0);
	if (!func_99(uParam2) && !func_98(uParam0))
	{
		if (Global_1071686->f_11)
		{
			func_231(uParam0);
		}
		else
		{
			func_232(uParam0, uParam1);
		}
	}
}

void func_96(var uParam0)
{
	func_29(uParam0, 1);
	func_66(32);
}

void func_97(var uParam0, int iParam1)
{
	(*uParam0)[participant_id_to_int()] = iParam1;
}

bool func_98(var uParam0)
{
	if (Global_1071686->f_11)
	{
		return uParam0->f_4 == 7;
	}
	return *uParam0 == 12;
}

bool func_99(var uParam0)
{
	if (func_25(25))
	{
		return true;
	}
	if (uParam0->f_10.f_21.f_2 != -504335712)
	{
		return false;
	}
	return is_bit_set(Global_524288->f_35370, 17);
}

bool func_100(var uParam0)
{
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar2))
		{
		}
		else if (func_233(uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar2);
			if (func_234(uParam0, iVar1) == -2)
			{
				iVar4 = -1;
				if (func_25(25))
				{
					iVar4 = 0;
				}
				func_235(uParam0, iVar1, 0, 0, iVar4);
				iVar3 = 1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_101(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1)
	{
		uParam0->f_517 = 0;
		uParam0->f_4 = iParam1;
	}
}

bool func_102(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		iVar0 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar0))
		{
		}
		else if (!func_224((*uParam0)[iVar1], iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_103(int iParam0)
{
	Global_1956200->f_1431.f_2 = 0f;
	Global_1956200->f_1431.f_1 = iParam0;
}

void func_104(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_236(uParam0, uParam1, uParam2, iVar0);
				break;
			case -2001102517:
				func_237(iVar0);
				break;
			case -437497832:
				func_238(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_105(var uParam0)
{
	if (func_15(&(uParam0->f_10), 512))
	{
		return;
	}
	_0x236905c700fdb54d();
}

void func_106(var uParam0, var uParam1, var uParam2)
{
	if (!func_147(&(uParam2->f_10), 0))
	{
		func_96(uParam2);
		func_97(uParam1, 15);
		return;
	}
	if (func_148(255))
	{
		func_239(1024);
		func_97(uParam1, 4);
		return;
	}
	iVar0 = network_player_id_to_int();
	if (!func_15(&((*Global_263042)[iVar0]->f_1), 2097152) && !func_149(&(Global_1296859->f_154[iVar0]), 4))
	{
		return;
	}
	if (is_bit_set(Global_3145858->f_226, 17))
	{
		func_240(&(uParam2->f_10), 512);
		func_240(&(uParam2->f_10), 8);
		func_240(&(uParam2->f_10), 1024);
		func_241(uParam1, 8);
	}
	func_182(1);
	func_42();
	func_242(&(uParam2->f_10), uParam2, &(uParam2->f_93.f_3405), 0);
	func_239(16384);
	func_97(uParam1, 1);
}

void func_107(var uParam0, var uParam1, var uParam2)
{
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_243(uParam0, uParam1, uParam2);
	}
	iVar0 = player_ped_id();
	iVar1 = func_244(iVar0);
	if (does_entity_exist(iVar1))
	{
		if (get_script_task_status(iVar0, -208384378, true) != 1)
		{
			task_place_carried_entity_at_coord(iVar0, iVar1, 0f, 0f, 0f, 2f, 1);
		}
		return;
	}
	if (!func_15(&(uParam2->f_10), 2048))
	{
		if (func_245())
		{
			func_246();
		}
		else
		{
			func_247();
		}
	}
	if (func_15(&(uParam2->f_10), 512))
	{
		func_97(uParam1, 5);
	}
	else
	{
		func_97(uParam1, 2);
	}
}

void func_108(var uParam0, var uParam1, var uParam2)
{
	func_248(uParam0, uParam1, uParam2);
	func_249(uParam2, uParam1);
	func_243(uParam0, uParam1, uParam2);
	if (func_250(&(uParam2->f_93), 5))
	{
		func_97(uParam1, 3);
	}
}

void func_109(var uParam0, var uParam1, var uParam2)
{
	if (!func_147(&(uParam2->f_10), 0))
	{
		func_96(uParam2);
		func_97(uParam1, 15);
		return;
	}
	func_248(uParam0, uParam1, uParam2);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	if (func_53(255))
	{
		return;
	}
	func_251();
	func_97(uParam1, 4);
}

void func_110(var uParam0, var uParam1, var uParam2)
{
	func_248(uParam0, uParam1, uParam2);
	if ((*uParam1)[participant_id_to_int()]->f_27 == -1 && Global_1071686->f_10 != -1)
	{
		func_26((*uParam1)[participant_id_to_int()], Global_1071686->f_10);
	}
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	if (func_82(uParam0) > 0 && !func_53(255))
	{
		func_252();
		if (!func_137(8))
		{
			func_253(uParam0, uParam1, uParam2, 1);
		}
		func_66(16);
		if (func_254())
		{
			func_255();
		}
		func_97(uParam1, 5);
	}
}

void func_111(var uParam0, var uParam1, var uParam2)
{
	func_248(uParam0, uParam1, uParam2);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	if (func_82(uParam0) > 1)
	{
		func_66(262144);
		func_256();
		func_97(uParam1, 6);
	}
}

void func_112(var uParam0, var uParam1, var uParam2)
{
	func_248(uParam0, uParam1, uParam2);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	if (func_257(uParam0, uParam1, uParam2))
	{
		func_97(uParam1, 7);
	}
}

void func_113(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_248(uParam0, uParam1, uParam2);
	func_253(uParam0, uParam1, uParam2, 0);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	else if (!func_224((*uParam1)[participant_id_to_int()], 8))
	{
		func_24(uParam1, 8);
	}
	if (func_258(uParam0))
	{
		if (!func_15(&(uParam2->f_10), 512))
		{
			func_259(uParam2, 1);
			if (func_229(uParam0, func_228(uParam0, -1), &uVar0))
			{
				func_260(uParam2, 1);
			}
		}
		if (func_48(uParam2->f_10.f_53) || (uParam2->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400)))
		{
			func_262(1);
		}
		uParam2->f_5428 = get_game_timer();
		_0xe546bda1b3e288ee(512);
		_0xe546bda1b3e288ee(128);
		_0x0ae241a4a9adeeec(1);
		if (func_137(8))
		{
			do_screen_fade_out(0);
			uParam2->f_93.f_5302 = Global_1296859->f_20;
		}
		func_66(64);
		func_97(uParam1, 8);
	}
	else
	{
		func_263(uParam2, 256);
	}
	func_264(uParam0, uParam1, uParam2, iParam3);
}

void func_114(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_248(uParam0, uParam1, uParam2);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	func_265(uParam0, uParam1);
	if (func_82(uParam0) < 5)
	{
		func_266(uParam1, uParam2);
	}
	else if (func_82(uParam0) > 5)
	{
		if (func_77(_0x51f33dbc1a41cbfd(), 2048) || (uParam2->f_5428 != -1 && (get_game_timer() - uParam2->f_5428) > Global_1901947->f_1.f_8))
		{
			if (func_233(uParam0, iParam3) || func_234(uParam0, player_id()) == -2)
			{
				func_239(1024);
			}
			iVar0 = (*uParam1)[iParam3]->f_29;
			func_267(uParam0, uParam1, uParam2);
			if ((*uParam1)[iParam3]->f_29 != iVar0)
			{
				func_263(uParam2, 4);
				func_249(uParam2, uParam1);
			}
			func_260(uParam2, 0);
			func_269(&(uParam2->f_10), func_268(uParam1));
			func_270(&(uParam2->f_10), uParam0);
			func_239(32768);
			func_239(65536);
			func_97(uParam1, 9);
		}
	}
	else if (!func_77(_0x51f33dbc1a41cbfd(), 2048))
	{
		if (func_48(uParam2->f_10.f_53) || (uParam2->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400)))
		{
			func_262(1);
		}
		_0xe546bda1b3e288ee(512);
		_0xe546bda1b3e288ee(128);
		iVar1 = get_time_difference(uParam0->f_743, get_network_time_accurate());
		if (iVar1 >= Global_1901947->f_308.f_2)
		{
			func_271(0);
		}
		if (iVar1 >= Global_1901947->f_308.f_3)
		{
			func_96(uParam2);
			func_97(uParam1, 15);
		}
	}
	func_264(uParam0, uParam1, uParam2, iParam3);
}

void func_115(var uParam0, var uParam1, var uParam2)
{
	func_248(uParam0, uParam1, uParam2);
	if (!func_15(&(uParam2->f_10), 512))
	{
		func_249(uParam2, uParam1);
		func_243(uParam0, uParam1, uParam2);
	}
	iVar0 = func_219(uParam0, uParam2);
	if (func_82(uParam0) < 5)
	{
		func_266(uParam1, uParam2);
	}
	if (func_203(&(uParam0->f_731)) && func_204(&(uParam0->f_731)) > iVar0)
	{
		play_sound_frontend("Ready_Up_Flash", "RDRO_In_Game_Menu_Sounds", true, 0);
		toggle_paused_renderphases(false);
		if ((!is_screen_fading_out() && !is_screen_faded_out()) && !func_272())
		{
			_close_app_by_hash(1473691941);
			do_screen_fade_out(1000);
		}
		func_129(&(uParam2->f_93), 64);
		func_273(&(uParam2->f_77));
		uParam2->f_89 = Global_1296859->f_20;
		func_97(uParam1, 11);
	}
}

void func_116(var uParam0, var uParam1, var uParam2)
{
	if (func_82(uParam0) <= 6)
	{
		return;
	}
	bVar0 = (func_149(Global_1296859->f_10, 4096) || func_149(Global_1296859->f_10, 131072));
	if ((func_137(2) || (!func_274() && bVar0)) || (get_game_timer() - uParam2->f_5426) > 60000)
	{
		_0x78335e12db0bf961(128);
		func_97(uParam1, 15);
	}
}

void func_117(var uParam0, var uParam1, var uParam2)
{
	bVar0 = (Global_1296859->f_20 - uParam2->f_89) > 10000;
	if (func_53(255) && !bVar0)
	{
		return;
	}
	if ((!is_screen_faded_out() && !bVar0) && !func_272())
	{
		if (!is_screen_fading_out() && !is_screen_faded_out())
		{
			_close_app_by_hash(1473691941);
			do_screen_fade_out(1000);
		}
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
	}
	if (func_275(uParam0, participant_id_to_int()))
	{
		func_96(uParam2);
		func_97(uParam1, 15);
		return;
	}
	if (func_276(uParam0) || func_277(&(uParam2->f_77), 15000))
	{
		func_248(uParam0, uParam1, uParam2);
		func_249(uParam2, uParam1);
		func_24(uParam1, 4);
		func_278(uParam0, uParam2);
		func_66(64);
		func_66(256);
		func_66(512);
		uParam2->f_5426 = get_game_timer();
		uParam2->f_5427 = -1;
		if (_is_loading_screen_active())
		{
			do_screen_fade_in(0);
		}
		func_68(uParam1, uParam2);
		func_279(&(uParam2->f_93.f_2229));
		func_39(uParam0, uParam2);
		func_97(uParam1, 10);
	}
}

void func_118(var uParam0, var uParam1)
{
	uParam1->f_5427 = get_game_timer();
	Var0 = { func_280(255) };
	Var8 = "";
	Var8.f_1 = "";
	Var8.f_2 = 0;
	Var8.f_3 = get_hash_key("IB_EXIT");
	Var8.f_3.f_1 = 0;
	Var8.f_3.f_2 = 0;
	Var8.f_3.f_3 = 0;
	func_281(&Var8);
	vVar27.x = 0;
	vVar27.f_1 = "SG_HDNG";
	vVar27.f_2 = _create_var_string(10, "NET_JOIN_VS_MISSION_FULL_NON_POSSE_PLAYER", func_282(&Var0, 109029619));
	uParam1->f_5425 = _0x9f2cc2439a04e7ba(&Var8, &vVar27, 1);
	func_97(uParam0, 13);
}

void func_119(var uParam0, var uParam1)
{
	while (_event_manager_is_event_pending(-1933804684))
	{
		if (_event_manager_peek_event(-1933804684, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.y == uParam1->f_5425)
					{
						if (vVar1.z == 2074623703)
						{
							_event_manager_pop_event(-1933804684);
							bVar0 = true;
						}
					}
					break;
			}
		}
		_event_manager_pop_event(-1933804684);
	}
	iVar5 = (get_game_timer() - uParam1->f_5427);
	if ((iVar5 > 15000 && uParam1->f_5427 != -1) || bVar0)
	{
		func_97(uParam0, 14);
	}
}

void func_120(var uParam0, var uParam1, var uParam2)
{
	_0x00a15b94cba4f76f(uParam2->f_5425);
	func_96(uParam2);
	func_39(uParam0, uParam2);
	func_97(uParam1, 15);
}

void func_121(var uParam0, var uParam1, var uParam2)
{
	func_19(16384);
}

void func_122(int iParam0)
{
	if (func_80(iParam0))
	{
		func_283(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_123()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

var func_124(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (!network_is_player_active(iVar1))
		{
		}
		else if (!network_is_player_a_participant_on_script(iVar1, "net_ugc_global_loader", -1))
		{
		}
		else if ((*Global_263042)[iVar2]->f_1.f_18 == 2147483647)
		{
		}
		else if ((*Global_263042)[iVar2]->f_1.f_18 != iParam0)
		{
		}
		else if (iParam1 != 0)
		{
			if ((*Global_263042)[iVar2]->f_1.f_16 != iParam1 && (*Global_263042)[iVar2]->f_1.f_17 != iParam1)
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
			iVar2++;
			return uVar0;
		}
	}
}

var func_125(int iParam0, int iParam1)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (&Global_262155->f_1[iVar1] == iParam0 && (iParam1 == 0 || Global_262155->f_1[iVar1]->f_1 == iParam1))
		{
			return Global_262155->f_1[iVar1]->f_2;
		}
		iVar1++;
	}
	return uVar0;
}

void func_126(var uParam0)
{
	if (!func_128(uParam0, 32))
	{
		return;
	}
	func_153(27, 0, 131072, 0, 0);
	func_153(34, 0, 131072, 0, 0);
	func_284(0, 1);
	func_129(uParam0, 32);
}

int func_127(var uParam0)
{
	return *uParam0;
}

bool func_128(var uParam0, int iParam1)
{
	return func_77(uParam0->f_1, iParam1);
}

void func_129(var uParam0, int iParam1)
{
	func_285(&(uParam0->f_1), iParam1);
}

int func_130()
{
	if (Global_3145858->f_229 != 0)
	{
		switch (Global_3145858->f_229)
		{
			case 1:
				return 924267974;
			case 2:
				return 2096114765;
			case 3:
				return 254481872;
			case 4:
				return 1984181016;
			case 5:
				return 511673431;
			default:
				break;
		}
	}
	iVar0 = func_171(Global_3145858->f_196, 1);
	switch (iVar0)
	{
		case 17:
		case 21:
		case 36:
		case 37:
		case 39:
		case 40:
		case 41:
		case 67:
		case 69:
		case 70:
		case 71:
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
		case 111:
		case 112:
		case 117:
		case 135:
		case 136:
		case 137:
		case 138:
			return 924267974;
		case 0:
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
		case 31:
		case 32:
		case 33:
		case 34:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 68:
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
		case 97:
		case 98:
			return 2096114765;
		case 42:
		case 43:
		case 45:
		case 46:
		case 47:
		case 48:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 57:
		case 59:
			return 254481872;
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			return 1984181016;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 18:
		case 19:
		case 20:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 30:
		case 35:
		case 38:
		case 44:
		case 53:
		case 58:
		case 60:
		case 61:
		case 113:
		case 114:
		case 115:
		case 116:
		case 118:
		case 119:
			return 511673431;
		default:
			break;
	}
	iVar1 = func_286(Global_3145858->f_196);
	switch (iVar1)
	{
		case 4:
		case 9:
		case 11:
		case 16:
			return 924267974;
		case 0:
		case 2:
		case 8:
		case 10:
			return 2096114765;
		case 5:
		case 6:
		case 7:
			return 254481872;
		case 13:
		case 14:
		case 15:
			return 1984181016;
		case 1:
		case 3:
		case 12:
			return 511673431;
		default:
			break;
	}
	return 924267974;
}

void func_131(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 924267974:
			set_ambient_zone_state("AZ_Other_Shore_Zones_02", !bParam0, true);
			set_ambient_zone_state("AZ_MP_Lobby_Plains", bParam0, true);
			break;
		case 1984181016:
			set_ambient_zone_state("AZ_MP_Lobby_Desert", bParam0, true);
			break;
		case 2096114765:
			set_ambient_zone_state("AZ_Other_Shore_Zones_02", !bParam0, true);
			set_ambient_zone_state("AZ_MP_Lobby_Swamp", bParam0, true);
			break;
		case 254481872:
		case 511673431:
			set_ambient_zone_state("AZ_MP_Lobby_Mountains", bParam0, true);
			break;
		default:
			break;
	}
	if (bParam0)
	{
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 924267974:
			if ((((((((_is_imap_active(iParam0) || _is_imap_active(-1503851195)) || _is_imap_active(-1342300025)) || _is_imap_active(2029007468)) || _is_imap_active(-1800377876)) || _is_imap_active(-1424779606)) || _is_imap_active(-961163794)) || _is_imap_active(-1897865659)) || _is_imap_active(-1725697333))
			{
				func_287(iParam0);
				func_287(-1503851195);
				func_287(-1342300025);
				func_287(2029007468);
				func_287(-1800377876);
				func_287(-1424779606);
				func_287(-961163794);
				func_287(-1897865659);
				func_287(-1725697333);
				return 0;
			}
			return 1;
		case 2096114765:
			if (_is_imap_active(iParam0) || _is_imap_active(-1373409788))
			{
				func_287(iParam0);
				func_287(-1373409788);
				return 0;
			}
			return 1;
		case 254481872:
			if (_is_imap_active(iParam0) || _is_imap_active(-483215130))
			{
				func_287(iParam0);
				func_287(-483215130);
				return 0;
			}
			return 1;
		case 1984181016:
			if (((((_is_imap_active(iParam0) || _is_imap_active(-1790706759)) || _is_imap_active(386105150)) || _is_imap_active(411599432)) || _is_imap_active(709895639)) || _is_imap_active(1008617843))
			{
				func_287(iParam0);
				func_287(-1790706759);
				func_287(386105150);
				func_287(411599432);
				func_287(709895639);
				func_287(1008617843);
				return 0;
			}
			return 1;
		case 511673431:
			if (_is_imap_active(iParam0) || _is_imap_active(-269787403))
			{
				func_287(iParam0);
				func_287(-269787403);
				return 0;
			}
			return 1;
		default:
			break;
	}
	if (_is_imap_active(iParam0))
	{
		func_287(iParam0);
		return 0;
	}
	return 1;
}

void func_133(var uParam0)
{
	if (does_entity_exist(uParam0->f_47))
	{
		delete_entity(&(uParam0->f_47));
	}
	if (does_entity_exist(uParam0->f_49))
	{
		delete_ped(&(uParam0->f_49));
	}
}

void func_134(var uParam0, var uParam1, bool bParam2)
{
	switch (uParam1->f_93.f_2)
	{
		case 1549204131:
			func_288();
			break;
		case 723208654:
			func_289(&(uParam1->f_93.f_142));
			_databinding_write_data_int(uParam1->f_93.f_57.f_1.f_24, uParam1->f_93.f_6);
			if (func_128(&(uParam1->f_93), 1024))
			{
				_databinding_write_data_string(uParam1->f_93.f_142.f_8, _create_var_string(2, "MP_LOBBY_SHOW_STABLE"));
				func_129(&(uParam1->f_93), 1024);
			}
			break;
		case 409305524:
			_databinding_write_data_string(uParam1->f_93.f_1949.f_5, "");
			break;
		case 1268583550:
			func_290(uParam1, 0, 0);
			break;
		case -198141192:
			_databinding_clear_binding_array(uParam1->f_93.f_2229.f_13);
			func_292(&(uParam1->f_93.f_2229), func_291(uParam1));
			break;
		case -761066372:
			func_293(&(uParam1->f_93));
			func_289(&(uParam1->f_93.f_142));
			break;
		case -1182353825:
			if (!bParam2)
			{
				func_294(uParam0, &(uParam1->f_93), 0, 1);
			}
			break;
		case 1596028677:
			_databinding_write_data_bool(uParam1->f_93.f_30.f_10, false);
			_databinding_write_data_bool(uParam1->f_93.f_30.f_11, false);
			func_295(&(uParam1->f_93.f_2686));
			break;
		case 306537471:
			func_296(&(uParam1->f_93));
			_databinding_write_data_int(uParam1->f_93.f_57.f_1.f_24, uParam1->f_93.f_6);
			break;
		case -1136409476:
			_databinding_write_data_string(uParam1->f_93.f_30.f_9, _create_var_string(2, "MP_LOBBY_DETAILS_TOOLTIP"));
			uParam1->f_93.f_2022.f_2 = -1;
			break;
	}
}

void func_135(var uParam0)
{
	func_297(uParam0, 0);
	func_297(uParam0, 1);
}

void func_136()
{
	func_298();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_299(iVar0);
		func_300(iVar0);
		func_301(iVar0);
		func_302(iVar0);
		iVar0++;
	}
}

bool func_137(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

void func_138()
{
	if (Global_1071686->f_22961 >= 0f)
	{
		Global_1071686->f_22961 = -1f;
	}
}

void func_139()
{
	if (func_303(0))
	{
		Global_1051439->f_43 = 1;
	}
}

void func_140()
{
	while (_event_manager_is_event_pending(2084771291))
	{
		_event_manager_pop_event(2084771291);
	}
}

void func_141(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

int func_142(var uParam0)
{
	if (!func_304(uParam0, &uVar0))
	{
		return 0;
	}
	iVar10 = 0;
	if (!func_305(&uVar0, &uVar5, &iVar10))
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 <= (iVar10 - 1))
	{
		if (!func_306(&uVar5, iVar12, &uVar11))
		{
			return 0;
		}
		_0x4eddd9e9ca5af985(uVar11);
		iVar12++;
	}
	return 1;
}

void func_143(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_77(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_285((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_144()
{
	enable_script_brain_set(4);
}

void func_145()
{
	enable_script_brain_set(1);
}

int func_146(int iParam0)
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

bool func_147(var uParam0, bool bParam1)
{
	if (((bParam1 && _network_is_player_index_valid(*uParam0)) && network_is_player_active(*uParam0)) && (*Global_263042)[&Global_1296859]->f_1 == *uParam0)
	{
		return true;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_17 != uParam0->f_17)
	{
		return false;
	}
	if ((*Global_263042)[&Global_1296859]->f_1.f_18 != uParam0->f_18)
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_263042[&Global_1296859] > 2;
	}
	return Global_263042[iParam0] > 2;
}

bool func_149(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

void func_150()
{
	func_307();
	func_308(&(Global_265377->f_124517));
	func_309(&(Global_265377->f_124517));
	func_310((*Global_263042)[Global_1296859->f_10]);
	_0xd39a72ae5ebd57e5();
}

void func_151(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_311(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_312(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_152(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_313(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_314(Var0);
}

void func_154(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_155()
{
	Global_1952637->f_3467 = 0;
	Global_1952637->f_3467.f_1 = 0;
	Global_1952637->f_3467.f_8 = 0;
	Global_1952637->f_3467.f_2 = 0;
	Global_1952637->f_3467.f_3[0] = 0;
	Global_1952637->f_3467.f_3[1] = 0;
	Global_1952637->f_3467.f_3[2] = 0;
	Global_1952637->f_3467.f_3[3] = 0;
	Global_1952637->f_3467.f_9 = 0;
	Global_1952637->f_3467.f_10 = 0;
	Global_1952637->f_3467.f_11 = 0;
	if (Global_1952637->f_3467.f_12)
	{
		_0x13e7320c762f0477(Global_1952637->f_3467.f_13);
	}
	Global_1952637->f_3467.f_12 = 0;
	func_154(32768);
	func_315(1108822547, 8, 6);
}

void func_156(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_157(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_158(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_316(iVar0, iParam0))
		{
			func_317(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_159(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_318(Global_1952637->f_2843);
		func_319(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_320(iParam3))
	{
		func_321(0);
	}
	if (func_152(32768))
	{
		func_322(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_323(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_323(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_153(2, 0, iVar0, 0, 0);
		func_153(4, 0, 0, 0, 0);
		func_153(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_153(2, 0, iVar0, iParam0, 0);
	}
	func_324();
}

bool func_160(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_325(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_326(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_161()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_162(int iParam0)
{
	return func_163(27, iParam0);
}

bool func_163(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_327(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_328())
	{
		return func_327(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_327(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_164(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_165(int iParam0)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	return func_168(iParam0, 8);
}

void func_166(int iParam0, int iParam1)
{
	if (!func_164(iParam0))
	{
		return;
	}
	(*Global_1887339)[iParam0]->f_20 = iParam1;
}

void func_167(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_168(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_169(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_170(bool bParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_168(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1887339)[iVar1]->f_27)))
			{
				set_script_as_no_longer_needed(&((*Global_1887339)[iVar1]->f_27));
			}
		}
		if ((*Global_1887339)[iVar1]->f_10 != 0)
		{
			if (is_thread_active((*Global_1887339)[iVar1]->f_10, false))
			{
				if (func_69() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1887339)[iVar1]->f_10, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1887339)[iVar1]->f_10))
				{
					_0x7de4643157ad646c((*Global_1887339)[iVar1]->f_10);
				}
			}
			else if (func_168(iVar1, 2))
			{
				if (func_69() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1887339)[iVar1]->f_27), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1887339)[iVar1]->f_27)));
				}
			}
			if (!_does_thread_exist((*Global_1887339)[iVar1]->f_10))
			{
				(*Global_1887339)[iVar1]->f_10 = 0;
				func_329(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_168(iVar1, 1))
			{
				func_329(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_171(vector3 vParam0, int iParam3)
{
	iVar0 = func_330();
	if (func_164(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_331(vParam0, iParam3);
}

bool func_172(var uParam0, var uParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_332(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_333(uVar0, iVar2, uParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_173(int iParam0, var uParam1)
{
	if (!func_164(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist((*Global_1887339)[iParam0]->f_4))
	{
		return false;
	}
	uParam1->f_17.f_6 = { _0xf70f00013a62f866((*Global_1887339)[iParam0]->f_4) };
	if (get_ground_z_for_3d_coord(uParam1->f_17.f_6, &uVar0, false))
	{
		uParam1->f_17.f_6.f_2 = uVar0;
	}
	uParam1->f_17 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_1 = Global_1901947->f_50.f_1;
	uParam1->f_17.f_2 = Global_1901947->f_50.f_1;
	vVar1 = { _0x3e2a25b2416dd67e((*Global_1887339)[iParam0]->f_4) };
	fVar4 = (((vVar1.x + vVar1.y) + vVar1.z) * 0.3333f);
	if (fVar4 < Global_1901947->f_50)
	{
		fVar4 = Global_1901947->f_50;
	}
	if (fVar4 > Global_1901947->f_50.f_1)
	{
		fVar4 = Global_1901947->f_50.f_1;
	}
	uParam1->f_17.f_3 = { 0f, 0f, 0f };
	uParam1->f_17 = fVar4;
	uParam1->f_17.f_1 = fVar4;
	uParam1->f_17.f_2 = fVar4;
	uParam1->f_17.f_9 = -432403087;
	return true;
}

void func_174(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_176(uParam0->f_17.f_6))
		{
			return;
		}
		if (vmag(uParam0->f_17) < 1f)
		{
			uParam0->f_17 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_1 = Global_1901947->f_50.f_1;
			uParam0->f_17.f_2 = Global_1901947->f_50.f_1;
		}
	}
	if (func_176(uParam1->f_6))
	{
		return;
	}
	if (uParam0->f_16)
	{
		if (vmag(uParam0->f_6) < 1f)
		{
			return;
		}
		if (vmag(uParam0->f_17) < vmag(uParam0->f_6))
		{
			uParam0->f_16 = 0;
		}
	}
	func_75(0);
	func_75(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_178(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_179(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_180(Global_1102219->f_3849, 36);
	func_181(Global_1102219->f_3888, 36);
}

void func_175(vector3 vParam0, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	bVar3 = bParam3;
	if (!func_334(Global_1296859->f_17, &vVar0, &bVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		bVar3 = bParam3;
	}
	func_335(vParam0, bParam3, vVar0, bVar3, iParam4, iParam5, iParam6, bParam7, fParam8, 1);
}

bool func_176(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_177(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_336(iParam0);
	if (!func_337(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_338(128) && !func_339(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_340() == 4)
	{
		func_74(18);
	}
	func_341(1024);
}

void func_178(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_179(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_180(struct<29> Param0, var uParam29, int iParam30)
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

void func_181(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_182(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_78(&(Global_1071686->f_28773.f_2), 2);
}

int func_183(var uParam0)
{
	switch (uParam0->f_10.f_21.f_2)
	{
		case -504335712:
			return Global_524288->f_40400;
		case 395262693:
			return Global_2359296->f_155;
		case -933924539:
			return Global_2097152->f_32;
	}
	return 0;
}

int func_184(struct<2> Param0)
{
	return func_342(Param0);
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2084825405;
		case 0:
			return -287083731;
		case 1:
			return -989146205;
		case 2:
			return 1575612426;
		case 3:
			return -517873027;
		case 4:
			return -645801489;
		case 5:
			return 1299359605;
		case 6:
			return -1523431410;
	}
	return 2084825405;
}

bool func_186(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_343(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_187(var uParam0, int iParam1)
{
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		iVar0 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar0))
		{
		}
		else if (func_224((*uParam0)[iVar1], iParam1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

int func_188(var uParam0, var uParam1)
{
	if (func_40(uParam0, 1) || func_40(uParam0, 128))
	{
		return 5;
	}
	if (uParam1->f_6 < uParam1->f_7)
	{
		return 2;
	}
	else
	{
		return 8;
	}
	return 9;
}

void func_189(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

struct<4> func_190()
{
	return Var0;
}

bool func_191(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_192(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_193(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_194(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_195(int iParam0, int iParam1)
{
	func_344(iParam0, iParam1);
}

void func_196(var uParam0, int iParam1)
{
	if (uParam0->f_4 > 0)
	{
		if (iParam1 < uParam0->f_516)
		{
			func_198(uParam0, 4);
		}
		else if (iParam1 > uParam0->f_516)
		{
			func_345(uParam0);
		}
	}
	iParam1 = func_346(iParam1, 0, 8);
	uParam0->f_516 = iParam1;
}

bool func_197(var uParam0)
{
	if ((uParam0->f_10.f_21.f_2 == -504335712 || uParam0->f_10.f_21.f_2 == 395262693) || uParam0->f_10.f_21.f_2 == -933924539)
	{
		return true;
	}
	return false;
}

void func_198(var uParam0, int iParam1)
{
	func_78(&(uParam0->f_6), iParam1);
}

void func_199(var uParam0, int iParam1, int iParam2)
{
	iParam2 = func_346(iParam2, 0, 32);
	uParam0->f_7[iParam1] = iParam2;
}

int func_200(int iParam0)
{
	if (iParam0 == 2147483647)
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_262155->f_1[iVar0] == iParam0)
		{
			return Global_262155->f_1[iVar0]->f_3;
		}
		iVar0++;
	}
	return 255;
}

void func_201(var uParam0, int iParam1)
{
	uParam0->f_745 = iParam1;
}

void func_202(var uParam0, int iParam1)
{
	uParam0->f_1 = get_network_time_accurate();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = get_time_offset(uParam0->f_1, iParam1);
	}
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_203(var uParam0)
{
	return func_349(*uParam0, 1);
}

int func_204(var uParam0)
{
	if (!func_203(uParam0))
	{
		return 0;
	}
	if (func_350(uParam0))
	{
		return uParam0->f_2;
	}
	return func_351(uParam0->f_1);
}

int func_205(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (uParam0->f_32[iVar0]->f_8 == 255)
		{
		}
		else if (network_is_player_active(uParam0->f_32[iVar0]->f_8) && network_is_player_a_participant(uParam0->f_32[iVar0]->f_8))
		{
			iVar2 = network_get_participant_index(uParam0->f_32[iVar0]->f_8);
			if (func_14(iVar2) && network_is_participant_active(iVar2))
			{
				iVar1++;
			}
			else
			{
				func_352(uParam0, iVar0, 0, 0);
			}
			iVar0++;
			return iVar1;
		}
	}
}

void func_206(var uParam0, var uParam1)
{
	switch (uParam1->f_10.f_21.f_2)
	{
		case -504335712:
			if (!is_bit_set(Global_524288->f_35370, 16))
			{
				return;
			}
			break;
		case 395262693:
			if (!is_bit_set(Global_2359296->f_158, 13))
			{
				return;
			}
			break;
		default:
			return;
	}
	iVar0 = 0;
	iVar1 = network_get_num_participants();
	iVar2 = 0;
	while (iVar2 < network_get_max_num_participants())
	{
		if (func_233(uParam0, iVar2))
		{
			iVar1 = (iVar1 - 1);
		}
		iVar2++;
	}
	switch (uParam1->f_10.f_21.f_2)
	{
		case -504335712:
			func_353(&iVar0, &iVar1, &(Global_524288->f_35351));
			break;
		case 395262693:
			func_353(&iVar0, &iVar1, &(Global_2359296->f_27));
			break;
	}
	if (iVar0 > 1 && iVar0 != uParam0->f_516)
	{
		func_196(uParam0, iVar0);
	}
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	iVar0 = network_get_num_participants();
	iVar1 = func_354(uParam0);
	iVar2 = uParam2->f_10.f_33;
	if (iVar0 > iVar2)
	{
		Var3 = 32;
		Var3.f_1 = -2147483647;
		Var3.f_1.f_1 = 255;
		Var3.f_1.f_2 = -2147483647;
		Var3.f_1.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -2147483647;
		Var3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_1 = 255;
		iVar69 = get_network_time_accurate();
		iVar70 = 0;
		while (iVar70 < network_get_max_num_participants())
		{
			iVar68 = int_to_participantindex(iVar70);
			if (!network_is_participant_active(iVar68))
			{
			}
			else if ((*uParam1)[iVar70]->f_30 == 0)
			{
				iVar0 = (iVar0 - 1);
			}
			else
			{
				Var3[iVar70] = get_time_difference((*uParam1)[iVar70]->f_30, iVar69);
				Var3[iVar70]->f_1 = iVar68;
			}
			iVar70++;
		}
		iVar71 = (iVar0 - iVar2);
		if (iVar71 < iVar1)
		{
			func_355(uParam0);
		}
		iVar72 = iVar2;
		iVar73 = func_346(((iVar2 + iVar71) - 1), 0, 32);
		_0x7e300b5b86ab1d1a(&Var3, 32, 2, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		iVar70 = iVar72;
		while (iVar70 <= iVar73)
		{
			func_356(uParam0, Var3[iVar70]->f_1);
			iVar70++;
		}
	}
	else if (iVar1 != 0)
	{
		func_355(uParam0);
	}
}

void func_208(var uParam0, var uParam1, var uParam2)
{
	iVar5 = 0;
	while (iVar5 < 32)
	{
		iVar1 = int_to_participantindex(iVar5);
		if (!network_is_participant_active(iVar1))
		{
			if (func_275(uParam0, iVar5))
			{
				func_357(uParam0, iVar5);
			}
		}
		else
		{
			iVar0 = int_to_playerindex(iVar5);
			if (func_275(uParam0, iVar5))
			{
			}
			else
			{
				iVar2 = func_234(uParam0, iVar0);
				if (iVar2 < 0)
				{
					iVar6 = -1;
					if (func_25(25))
					{
						iVar6 = 0;
					}
					func_235(uParam0, iVar0, 0, 1, iVar6);
				}
				iVar3 = func_358(uParam1, iVar0);
				if (iVar3 >= 0)
				{
					func_359(uParam0, iVar0, iVar3, 0, 0);
					if (func_15(&(uParam2->f_10), 2))
					{
						func_360(uParam0, iVar0, iVar3);
					}
				}
				iVar4 = func_361(uParam1, iVar0);
				if (!is_bit_set(Global_3145858->f_49704[iVar4]->f_3, func_362(iVar5)))
				{
					func_363(uParam0, &iVar5, &iVar4);
				}
				if (iVar4 >= 0 && iVar4 != func_364(uParam0, iVar0))
				{
					func_365(uParam0, iVar0, iVar4);
				}
			}
		}
		iVar5++;
	}
}

void func_209(var uParam0)
{
	if (uParam0->f_516 == 0)
	{
		return;
	}
	if (uParam0->f_722 == -1)
	{
		uParam0->f_721 = (uParam0->f_721 + 1 % uParam0->f_516);
	}
	iVar0 = uParam0->f_721;
	if (uParam0->f_7[iVar0]->f_1 < &uParam0->f_7[iVar0])
	{
		uParam0->f_722 = -1;
		iVar1 = func_366(uParam0, iVar0, -1);
		if (iVar1 != -1)
		{
			func_360(uParam0, uParam0->f_32[iVar1]->f_8, iVar0);
		}
	}
	else
	{
		uParam0->f_722 = func_367(uParam0, iVar0);
		if (uParam0->f_722 != -1)
		{
			iVar2 = uParam0->f_32[uParam0->f_722]->f_2;
			iVar3 = func_366(uParam0, iVar0, iVar2);
			if (iVar3 != -1)
			{
				func_368(uParam0, uParam0->f_32[iVar3]->f_8);
				func_360(uParam0, uParam0->f_32[uParam0->f_722]->f_8, iVar2);
				func_360(uParam0, uParam0->f_32[iVar3]->f_8, iVar0);
				uParam0->f_722 = -1;
			}
		}
	}
}

int func_210(var uParam0, var uParam1)
{
	fVar0 = func_225(4, 8);
	fVar1 = func_225(0, 8);
	bVar2 = true;
	_0x64f765d9a1f8f02c(&fVar1, &fVar0, &(uParam0->f_748));
	iVar5 = 0;
	while (iVar5 < 32)
	{
		iVar3 = int_to_playerindex(iVar5);
		if (!_0x72b2e00c9bac6789(&fVar0, iVar3))
		{
		}
		else if (func_149(iVar3, 1024))
		{
			_0xd426e2e3288469d6(&fVar0, iVar5);
		}
		else
		{
			iVar4 = func_234(uParam0, iVar3);
			if (iVar4 < 0)
			{
				bVar2 = false;
			}
		}
		iVar5++;
	}
	if (_0x179a6f0ee2e79026(&(uParam0->f_748)))
	{
		func_215(uParam0, 2048);
	}
	else
	{
		func_217(uParam0, 2048);
	}
	if ((func_203(&(uParam0->f_737)) && func_204(&(uParam0->f_737)) > 3000) && !func_369())
	{
		_0xe4abe20dce7c7cfe(&(uParam1->f_5429), &(uParam0->f_748), &fVar6);
		func_226(uParam0, uParam1, 75, fVar6);
		func_84(&(uParam0->f_737));
	}
	if (!bVar2)
	{
		return 0;
	}
	iVar7 = func_370(uParam1->f_10.f_53);
	if (((uParam1->f_10.f_21.f_2 == -504335712 && Global_524288->f_40400 == -1759663922) && iVar7 >= 9) && iVar7 <= 12)
	{
		uParam1->f_10.f_32 = 1;
	}
	if (!func_15(&(uParam1->f_10), 2))
	{
	}
	iVar8 = count_player_bits(&fVar0);
	iVar9 = uParam1->f_10.f_32;
	if (!(uParam1->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400)) && Global_1901947->f_308.f_8 > 0)
	{
		if (!func_203(&(uParam0->f_740)) || func_204(&(uParam0->f_740)) < Global_1901947->f_308.f_8)
		{
			if (!func_203(&(uParam0->f_740)))
			{
				func_84(&(uParam0->f_740));
			}
			iVar10 = round((IntToFloat(uParam1->f_10.f_33) * Global_1901947->f_308.f_11));
		}
		else if (func_204(&(uParam0->f_740)) < Global_1901947->f_308.f_9)
		{
			iVar10 = round((IntToFloat(uParam1->f_10.f_33) * Global_1901947->f_308.f_12));
		}
		else if (func_204(&(uParam0->f_740)) < Global_1901947->f_308.f_10)
		{
			iVar10 = round((IntToFloat(uParam1->f_10.f_33) * Global_1901947->f_308.f_13));
		}
		if (iVar10 >= uParam1->f_10.f_32)
		{
			iVar9 = iVar10;
		}
	}
	if (iVar8 < iVar9 || iVar8 > uParam1->f_10.f_33)
	{
		return 0;
	}
	return 1;
}

bool func_211(var uParam0)
{
	return func_349(*uParam0, 1);
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1 || !func_211(uParam0))
	{
		func_273(uParam0);
	}
}

int func_213(var uParam0)
{
	if (!func_211(uParam0))
	{
		func_212(uParam0, 0);
		return uParam0->f_1;
	}
	if (func_371(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_372() - uParam0->f_1);
}

void func_214(int iParam0)
{
	func_78(&(Global_1572887->f_106.f_16), iParam0);
}

void func_215(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_78(&(uParam0->f_746), iParam1);
}

void func_216(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_217(var uParam0, int iParam1)
{
	if (!network_is_host_of_this_script())
	{
		return;
	}
	func_285(&(uParam0->f_746), iParam1);
}

var func_218(var uParam0)
{
	return uParam0->f_745;
}

int func_219(var uParam0, var uParam1)
{
	iVar0 = Global_1901947->f_308;
	if (func_15(&(uParam1->f_10), 8192))
	{
		iVar0 = Global_1901947->f_308.f_1;
	}
	iVar0 = (iVar0 + uParam0->f_747 * 25000);
	return iVar0;
}

bool func_220(var uParam0, int iParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
		}
		else if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else if (((*Global_263042)[iVar0]->f_68 && iParam1) != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_221(var uParam0, int iParam1)
{
	return func_77(uParam0->f_746, iParam1);
}

int func_222(struct<2> Param0)
{
	return func_374(func_373(func_342(Param0)));
}

int func_223()
{
	return Global_1102219->f_3673;
}

bool func_224(var uParam0, int iParam1)
{
	return func_77(uParam0->f_1, iParam1);
}

float func_225(int iParam0, int iParam1)
{
	return func_375(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_226(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (!_0x179a6f0ee2e79026(&fParam3))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0 = 2;
	Var0.f_4 = iParam2;
	Var0.f_14 = func_218(uParam0);
	Var0.f_6 = uParam1->f_10.f_18;
	Var0.f_7 = uParam1->f_10.f_17;
	Var0.f_8 = Global_265377->f_124517.f_135;
	vVar19 = { 0f, 0f, 0f };
	fVar22 = 0f;
	func_377(func_376(), vVar19, fVar22, 0, 1, fParam3, Var0);
}

void func_227(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_7[iVar0]->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar2))
		{
		}
		else
		{
			iVar3 = int_to_playerindex(iVar0);
			iVar1 = func_378(iVar3);
			if (iVar1 == -1)
			{
			}
			else if (&uParam0->f_32[iVar1] > -1)
			{
				uParam0->f_7[&uParam0->f_32[iVar1]]->f_1++;
			}
		}
		iVar0++;
	}
}

int func_228(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	fVar2 = -9999f;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_516 - 1))
	{
		if (iParam1 != -1 && iParam1 == iVar0)
		{
		}
		else
		{
			fVar3 = func_379(uParam0, iVar0);
			if (fVar3 > fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
			else if (fVar3 == fVar2)
			{
				if (&uParam0->f_7[iVar0] < &uParam0->f_7[iVar1])
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_229(var uParam0, int iParam1, var uParam2)
{
	if (func_25(25))
	{
		return false;
	}
	if (uParam0->f_7[iParam1]->f_1 == 0)
	{
		*uParam2 = func_380(uParam0);
		bVar0 = uParam0->f_7[*uParam2]->f_1 > 1;
	}
	else
	{
		fVar2 = func_381(uParam0, iParam1);
		func_382(uParam0, &uVar3);
		iVar12 = 0;
		while (iVar12 <= (uParam0->f_516 - 1))
		{
			*uParam2 = &uVar3[iVar12];
			fVar1 = func_383(uParam0, *uParam2);
			if (fVar1 <= fVar2)
			{
				bVar0 = true;
			}
			else
			{
				iVar12++;
			}
		}
	}
	if ((bVar0 && uParam0->f_7[*uParam2]->f_1 != 1) && iParam1 != *uParam2)
	{
		return true;
	}
	return false;
}

void func_230(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		if (!func_275(uParam0, iVar1))
		{
		}
		else
		{
			iVar0 = int_to_participantindex(iVar1);
			if (!network_is_participant_active(iVar0))
			{
				func_357(uParam0, iVar1);
			}
		}
		iVar1++;
	}
}

void func_231(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			func_384(uParam0);
			break;
		case 1:
			func_385(uParam0);
			break;
		case 2:
			func_386(uParam0);
			break;
		case 3:
			func_387(uParam0);
			break;
		case 4:
			func_388(uParam0);
			break;
		case 5:
			func_389(uParam0);
			break;
		case 6:
			func_390(uParam0);
			break;
		case 7:
			func_391(uParam0);
			break;
	}
}

void func_232(var uParam0, var uParam1)
{
	if (func_392(uParam0, uParam1))
	{
		return;
	}
	switch (*uParam0)
	{
		case 0:
			func_393(uParam0, uParam1);
			break;
		case 1:
			func_394(uParam0, uParam1, 2);
			break;
		case 2:
			func_395(uParam0, uParam1);
			break;
		case 3:
			func_394(uParam0, uParam1, 4);
			break;
		case 4:
			func_396(uParam0, uParam1);
			break;
		case 5:
			func_394(uParam0, uParam1, 6);
			break;
		case 6:
			func_397(uParam0, uParam1);
			break;
		case 7:
			func_394(uParam0, uParam1, 8);
			break;
		case 8:
			func_398(uParam0, uParam1);
			break;
		case 9:
			func_394(uParam0, uParam1, 10);
			break;
		case 10:
			func_399(uParam0);
			break;
		case 11:
			func_400(uParam0);
			break;
		case 12:
			break;
	}
}

bool func_233(var uParam0, int iParam1)
{
	return _0x0a79c81c418f5d38(&(uParam0->f_552), iParam1);
}

int func_234(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return -1;
	}
	return &(uParam0->f_32[iVar0]);
}

void func_235(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_402(uParam0, iParam4) && uParam0->f_7[iParam4]->f_1 < &uParam0->f_7[iParam4])
	{
		func_360(uParam0, iParam1, iParam4);
		bVar0 = true;
	}
	else if (bParam2)
	{
		if (func_234(uParam0, iParam1) == -1)
		{
			func_403(uParam0, iParam1);
			func_360(uParam0, iParam1, -2);
			bVar0 = true;
			func_345(uParam0);
		}
	}
	else if (bParam3)
	{
		if (func_234(uParam0, iParam1) < 0)
		{
			iVar2 = func_404(uParam0, iParam1, &iVar1, 1);
			iVar3 = func_234(uParam0, iVar1);
			if ((func_402(uParam0, iVar3) && uParam0->f_7[iVar3]->f_1 < &uParam0->f_7[iVar3]) && iVar2 > 0)
			{
				func_360(uParam0, iParam1, iVar3);
				if (uParam0->f_7[iVar3]->f_1 > &uParam0->f_7[iVar3])
				{
					func_198(uParam0, 4);
				}
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		if (func_234(uParam0, iParam1) < 0)
		{
			iVar5 = func_404(uParam0, iParam1, &iVar4, 1);
			iVar7 = func_234(uParam0, iVar4);
			if ((func_402(uParam0, iVar7) && uParam0->f_7[iVar7]->f_1 < &uParam0->f_7[iVar7]) && iVar5 >= 4)
			{
				iVar6 = iVar7;
			}
			else
			{
				iVar6 = func_228(uParam0, -1);
			}
			func_360(uParam0, iParam1, iVar6);
		}
	}
	iVar8 = func_378(iParam1);
	if (func_401(iVar8))
	{
		uParam0->f_32[iVar8]->f_8 = iParam1;
	}
}

void func_236(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!get_event_data(1, iParam3, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 49:
			func_405(uParam0, uParam1, uParam2, iParam3);
			break;
	}
}

void func_237(int iParam0)
{
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = get_id_of_this_thread();
		bVar42 = false;
		iVar43 = 0;
		while (iVar43 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar43] == iVar41)
			{
				bVar42 = true;
			}
			else
			{
				iVar43++;
			}
		}
		if (!bVar42)
		{
			return;
		}
		if (Var0.f_40 != network_get_participant_index(player_id()))
		{
			func_406("NET_SCRIPT_JOIN", &Var0, 109029619);
		}
	}
}

void func_238(int iParam0)
{
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = get_id_of_this_thread();
		bVar42 = false;
		iVar43 = 0;
		while (iVar43 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar43] == iVar41)
			{
				bVar42 = true;
			}
			else
			{
				iVar43++;
			}
		}
		if (!bVar42)
		{
			return;
		}
		if (Var0.f_40 != network_get_participant_index(player_id()))
		{
			func_406("NET_SCRIPT_LEFT", &Var0, 109029619);
		}
	}
}

void func_239(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 || iParam0);
}

void func_240(var uParam0, int iParam1)
{
	if (!(uParam0->f_20 && iParam1) != 0)
	{
		return;
	}
	uParam0->f_20 = (uParam0->f_20 - (uParam0->f_20 && iParam1));
}

void func_241(var uParam0, int iParam1)
{
	iVar0 = participant_id_to_int();
	func_285(&((*uParam0)[iVar0]->f_1), iParam1);
}

void func_242(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (uParam0->f_21.f_2 == -933924539)
	{
		if (bParam3 || (Global_2097152->f_6314 == 1 && Global_2097152->f_6316 <= 1))
		{
			uParam0->f_30 = 1;
			iVar0 = uParam0->f_33;
		}
		else if (Global_2097152->f_6316 == 0)
		{
			func_23(uParam0, 4);
			uParam0->f_30 = (uParam0->f_33 / Global_2097152->f_6314);
			iVar0 = Global_2097152->f_6314;
			if (!is_string_null_or_empty(Global_3145858->f_205[0]) && !bParam3)
			{
				StringCopy((*uParam2)[0], _get_label_text(Global_3145858->f_205[0]), 64);
			}
		}
		else
		{
			uParam0->f_30 = Global_2097152->f_6316;
		}
	}
	if (uParam0->f_30 > 8)
	{
		uParam0->f_30 = 8;
	}
	if (uParam0->f_30 > 0 && iVar0 == 0)
	{
		if (func_25(25))
		{
			iVar0 = uParam0->f_33;
		}
		else
		{
			iVar0 = (uParam0->f_33 / uParam0->f_30);
		}
	}
	iVar4 = 0;
	while (iVar4 < uParam0->f_30)
	{
		StringCopy(&cVar1, "", 16);
		iVar3 = 0;
		if (!bParam3)
		{
			cVar1 = { *Global_3145858->f_205[iVar4] };
		}
		if (is_string_null_or_empty(&cVar1))
		{
			StringCopy(&cVar1, "TEAM_", 16);
			StringIntConCat(&cVar1, iVar4, 16);
		}
		MemCopy((*uParam2)[iVar4], {cVar1}, 8);
		if (!bParam3)
		{
			switch (uParam0->f_21.f_2)
			{
				case -504335712:
					iVar3 = &Global_524288->f_35360[iVar4];
					break;
				case 395262693:
					iVar3 = &Global_2359296->f_36[iVar4];
					break;
				case -933924539:
					if (iVar0 == 0)
					{
						iVar3 = Global_2097152->f_6317[iVar4]->f_1;
					}
					break;
			}
		}
		if (iVar3 == 0)
		{
			iVar3 = iVar0;
		}
		(*uParam1)[iVar4] = iVar3;
		iVar4++;
	}
}

void func_243(var uParam0, var uParam1, var uParam2)
{
	func_407(uParam2);
	func_408(uParam2);
	func_409(uParam0, uParam1, uParam2);
	func_410(uParam0, uParam1, uParam2);
	switch (func_127(&(uParam2->f_93)))
	{
		case 0:
			func_411(uParam1, uParam2);
			break;
		case 1:
			func_412(&(uParam2->f_93));
			break;
		case 2:
			func_413(uParam2);
			break;
		case 3:
			func_414(&(uParam2->f_93));
			break;
		case 4:
			func_415(uParam2);
			break;
		case 5:
			func_416(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_417(uParam0, uParam1, uParam2);
			break;
		case 7:
			func_418(uParam0, uParam1, uParam2);
			break;
		case 8:
			func_419(uParam0, uParam1, uParam2);
			break;
		case 9:
			func_420(uParam0, uParam1, uParam2);
			break;
		case 10:
			func_421(uParam0, uParam1, uParam2);
			break;
		case 11:
			func_422(uParam0, uParam2);
			break;
		case 12:
			func_423(uParam0, uParam1, uParam2);
			break;
	}
	func_410(uParam0, uParam1, uParam2);
}

int func_244(int iParam0)
{
	iVar0 = func_424(iParam0);
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

bool func_245()
{
	if (func_425(255) <= 2)
	{
		return false;
	}
	if (Global_265377->f_124517.f_71.f_21.f_2 != -504335712)
	{
		return false;
	}
	if (!func_261(Global_265377->f_124517.f_71.f_21.f_3))
	{
		return false;
	}
	return true;
}

void func_246()
{
	func_426(1);
	func_426(16);
	func_426(2);
	func_426(8);
	func_426(64);
	func_426(128);
	func_426(512);
	func_426(1024);
	func_426(2048);
	func_426(4096);
}

void func_247()
{
	func_426(1);
	func_426(16);
	func_426(4);
	func_426(2);
	func_426(8);
	func_426(64);
	func_426(128);
	func_426(512);
	func_426(1024);
	func_426(2048);
	func_426(4096);
	func_426(8192);
	func_427();
	func_428();
}

void func_248(var uParam0, var uParam1, var uParam2)
{
	func_263(uParam2, 2);
	iVar0 = participant_id_to_int();
	iVar1 = func_234(uParam0, player_id());
	if (iVar1 < 0)
	{
		(*uParam1)[iVar0]->f_26 = iVar1;
		return;
	}
	if ((*uParam1)[iVar0]->f_26 == iVar1)
	{
		return;
	}
	(*uParam1)[iVar0]->f_26 = iVar1;
	if (func_197(uParam2) && !func_429(func_268(uParam1), iVar1))
	{
		func_431(func_430(iVar1), uParam1, uParam2);
	}
	func_29(uParam2, 2);
	func_263(uParam2, 4);
}

void func_249(var uParam0, var uParam1)
{
	if (func_40(uParam0, 4))
	{
		return;
	}
	if (func_432(uParam0, uParam1, &Var0))
	{
		if (func_433(Var0))
		{
			func_46(player_ped_id(), 1);
		}
		else
		{
			func_434(&Var0, func_40(uParam0, 2));
		}
	}
	else if (func_152(32))
	{
		Var0 = 0;
		Var0.f_1 = 0;
		func_435(&Var0);
		func_436(4);
		func_154(32);
	}
	func_29(uParam0, 4);
}

bool func_250(var uParam0, int iParam1)
{
	return *uParam0 > iParam1;
}

void func_251()
{
	if (func_137(8))
	{
		return;
	}
	if (animpostfx_is_running("MP_Downed"))
	{
		animpostfx_stop("MP_Downed");
		_0x9428447ded71fc7e("RDRO_Death_Fail_Respawn_Scenes");
	}
	func_437(1);
}

void func_252()
{
	if (!func_137(1024))
	{
		return;
	}
	Global_1048596 = 0;
	Global_1048624 = -1;
	Global_1048625 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*Global_1048597)[iVar0] = 0;
		(*Global_1048606)[iVar0] = 0;
		(*Global_1048615)[iVar0] = 0;
		iVar0++;
	}
}

void func_253(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_40(uParam2, 8) && !bParam3)
	{
		return;
	}
	iVar0 = participant_id_to_int();
	if (!func_224((*uParam1)[iVar0], 2))
	{
		bVar1 = func_267(uParam0, uParam1, uParam2);
		if (!bVar1)
		{
			iVar2 = func_234(uParam0, player_id());
			if (iVar2 != -1)
			{
				if (func_197(uParam2))
				{
					func_431(func_430(iVar2), uParam1, uParam2);
				}
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			func_24(uParam1, 2);
			func_263(uParam2, 4);
		}
	}
}

bool func_254()
{
	return Global_1896738->f_382;
}

void func_255()
{
	func_438(0);
}

void func_256()
{
	if (Global_1572887->f_6)
	{
		Global_1572887->f_6 = 0;
		_0x3180e991d4b8f248();
	}
}

bool func_257(var uParam0, var uParam1, var uParam2)
{
	if (!func_211(&(uParam2->f_74)))
	{
		func_273(&(uParam2->f_74));
	}
	if (uParam2->f_10.f_21.f_2 == -933924539)
	{
		func_440(&(uParam2->f_10), func_439(uParam0));
	}
	bVar0 = func_441(&(uParam2->f_10));
	bVar1 = (func_211(&(uParam2->f_74)) && func_213(&(uParam2->f_74)) > 15000);
	Var2 = { func_28() };
	if ((func_211(&(uParam2->f_74)) && (15000 - func_213(&(uParam2->f_74))) < 5000) && Var2 == 2)
	{
		func_67("MP_CO_OP_LOBBIES_STOP", 3, 1);
	}
	if (bVar0 || bVar1)
	{
		if (!bVar0 && bVar1)
		{
		}
		_0x0ae241a4a9adeeec(0);
		return true;
	}
	return false;
}

bool func_258(var uParam0)
{
	if (func_82(uParam0) >= 5)
	{
		return true;
	}
	return false;
}

void func_259(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		_databinding_write_data_bool(uParam0->f_93.f_57.f_64, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_60, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_68, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_81, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_83, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_30.f_1, false);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_30.f_21, false);
		switch (uParam0->f_93.f_2)
		{
			case -1794869146:
				_uistatemachine_request_transition(1473691941, -12451259);
				break;
			case -761066372:
			case -587541440:
				_uistatemachine_request_transition(1473691941, 927041140);
				break;
		}
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_93.f_57.f_60, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_64, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_68, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_81, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_83, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_30.f_1, true);
		_databinding_write_data_bool(uParam0->f_93.f_57.f_30.f_21, true);
	}
	func_442(uParam0, bParam1);
}

void func_260(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_137(8))
		{
			uParam0->f_93.f_5302 = Global_1296859->f_20;
			func_443(&(uParam0->f_93));
			func_273(&(uParam0->f_93.f_3));
			func_444(uParam0, 500);
			func_76(&(uParam0->f_93), 8);
		}
		else
		{
			func_76(&(uParam0->f_93), 10);
		}
	}
	else if (func_127(&(uParam0->f_93)) == 10)
	{
		do_screen_fade_out(125);
		func_76(&(uParam0->f_93), 11);
	}
}

bool func_261(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_262(bool bParam0)
{
	if (!func_445())
	{
		return;
	}
	if (!network_is_session_active())
	{
		return;
	}
	iVar0 = 192;
	if (bParam0)
	{
		_0xe546bda1b3e288ee(iVar0);
	}
	else
	{
		_0x78335e12db0bf961(iVar0);
	}
}

void func_263(var uParam0, int iParam1)
{
	func_285(&(uParam0->f_9), iParam1);
}

void func_264(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_233(uParam0, iParam3))
	{
		return;
	}
	func_97(uParam1, 12);
	func_64(1);
}

void func_265(var uParam0, var uParam1)
{
	if (*uParam0 > 0 && *uParam0 < 12)
	{
		func_446(uParam0, uParam1);
	}
}

void func_266(var uParam0, var uParam1)
{
	func_259(uParam1, 0);
	func_260(uParam1, 0);
	func_19(65536);
	func_19(32768);
	_0x78335e12db0bf961(512);
	_0x78335e12db0bf961(2048);
	_0x3215bbe34d3418c5(1);
	func_241(uParam0, 1);
	func_97(uParam0, 7);
	uParam1->f_5428 = -1;
}

int func_267(var uParam0, var uParam1, var uParam2)
{
	iVar0 = player_id();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar0 != uParam0->f_32[iVar2]->f_8)
		{
		}
		else
		{
			iVar1 = participant_id_to_int();
			if ((uParam0->f_32[iVar2]->f_3 != -1 && uParam0->f_32[iVar2]->f_5) && uParam0->f_32[iVar2]->f_3 != (*uParam1)[iVar1]->f_29)
			{
				func_431(uParam0->f_32[iVar2]->f_3, uParam1, uParam2);
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_268(var uParam0)
{
	return (*uParam0)[participant_id_to_int()]->f_29;
}

void func_269(var uParam0, int iParam1)
{
	func_447(uParam0, iParam1);
	func_448(uParam0->f_17, iParam1);
}

void func_270(var uParam0, var uParam1)
{
	iVar0 = player_id();
	iVar1 = &Global_1296859;
	iVar2 = func_234(uParam1, iVar0);
	if ((*Global_263042)[iVar1]->f_1.f_21.f_2 != 395262693 && (*Global_263042)[iVar1]->f_1.f_21.f_2 != -933924539)
	{
		func_449(uParam0, iVar2, 0);
		return;
	}
	if (func_450(uParam1) != 1)
	{
		func_449(uParam0, iVar2, 0);
		return;
	}
	if (func_234(uParam1, iVar0) != 0)
	{
		func_449(uParam0, iVar2, 0);
		return;
	}
	func_449(uParam0, -1, 0);
}

void func_271(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_272()
{
	return Global_1071686->f_28662.f_8.f_13 != 0;
}

void func_273(var uParam0)
{
	func_451(uParam0, 0);
}

bool func_274()
{
	return &Global_1048577;
}

bool func_275(var uParam0, int iParam1)
{
	return _0x0a79c81c418f5d38(&(uParam0->f_553), iParam1);
}

bool func_276(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar1))
		{
		}
		else if (func_233(uParam0, iVar1))
		{
		}
		else if (func_362(iVar0) == -2)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_277(var uParam0, int iParam1)
{
	if (!func_211(uParam0))
	{
		return false;
	}
	if (func_213(uParam0) > iParam1)
	{
		return true;
	}
	return false;
}

void func_278(var uParam0, var uParam1)
{
	if (!func_250(&(uParam1->f_93), 5))
	{
		return;
	}
	switch (uParam1->f_10.f_21.f_2)
	{
		case -504335712:
			if (func_261(Global_524288->f_40400))
			{
				return;
			}
			func_452(uParam0->f_723, &((*Global_263042)[network_player_id_to_int()]->f_1.f_34));
			if (func_453(uParam0->f_723.f_1, &uVar1))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					Global_524288->f_40405[iVar0]->f_3 = uVar1;
					iVar0++;
				}
			}
			func_454(uParam0->f_723.f_2, &(Global_3145858->f_285));
			func_455(uParam0->f_723.f_3, &(Global_3145858->f_238), &(Global_3145858->f_239));
			func_456(uParam0->f_723.f_4, &(Global_3145858->f_236), &(Global_3145858->f_237));
			func_457(uParam0->f_723.f_5, &(Global_3145858->f_51905));
			if (uParam0->f_723.f_6 == 1)
			{
				func_458(25);
			}
			else if (uParam0->f_723.f_6 == 2)
			{
				func_459(25);
			}
			break;
		case 395262693:
			func_452(uParam0->f_723, &((*Global_263042)[network_player_id_to_int()]->f_1.f_34));
			func_453(uParam0->f_723.f_1, &(Global_3145858->f_284));
			func_454(uParam0->f_723.f_2, &(Global_3145858->f_285));
			func_455(uParam0->f_723.f_3, &(Global_3145858->f_238), &(Global_3145858->f_239));
			func_456(uParam0->f_723.f_4, &(Global_3145858->f_236), &(Global_3145858->f_237));
			func_457(uParam0->f_723.f_5, &(Global_3145858->f_51905));
			if (uParam0->f_723.f_6 == 1)
			{
				clear_bit(&(Global_2359296->f_158), 9);
			}
			else if (uParam0->f_723.f_6 == 2)
			{
				set_bit(&(Global_2359296->f_158), 9);
			}
			break;
		case -933924539:
			break;
	}
}

void func_279(var uParam0)
{
	Global_1296679->f_148 = { *uParam0->f_14[0] };
	Global_1296679->f_152 = { *uParam0->f_14[1] };
	Global_1296679->f_156 = { *uParam0->f_14[2] };
	Global_1296679->f_160 = { *uParam0->f_14[3] };
}

struct<8> func_280(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return (*Global_263042)[iParam0]->f_1.f_37;
}

void func_281(var uParam0)
{
}

char* func_282(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_460(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_283(var uParam0, int iParam1)
{
	func_461(uParam0, iParam1);
}

void func_284(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_324();
	}
	if (bParam0)
	{
		func_313(8);
		func_313(512);
	}
	else
	{
		func_313(8);
		func_313(16);
	}
}

void func_285(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_286(vector3 vParam0)
{
	return func_462(_get_map_zone_at_coords(vParam0, 10));
}

int func_287(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_463())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

void func_288()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, false);
}

void func_289(var uParam0)
{
	uParam0->f_1798 = 0;
	_databinding_clear_binding_array(uParam0->f_5);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		_databinding_write_data_int(uParam0->f_20[iVar0]->f_37, 255);
		iVar0++;
	}
	_databinding_write_data_bool(uParam0->f_7, false);
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 500;
	if (iParam1 == 0)
	{
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_268, false);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_271, false);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_273, false);
	}
	else if (iParam1 == 1)
	{
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_268, true);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_273, true);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_271, false);
		_databinding_write_data_string(uParam0->f_93.f_3128.f_269, "MP_STARTING_WEAPON_OPTION_GAMBLE");
		_databinding_write_data_string(uParam0->f_93.f_3128.f_270, _create_var_string(2, "MP_LOBBY_GAMBLE_DESCRIPTION"));
		_databinding_write_data_string(uParam0->f_93.f_3128.f_274, func_464((iVar0 / 100)));
		_databinding_write_data_string(uParam0->f_93.f_3128.f_275, func_465((iVar0 % 100)));
	}
	else if (iParam1 >= 2)
	{
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_268, true);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_271, true);
		_databinding_write_data_bool(uParam0->f_93.f_3128.f_273, false);
		_databinding_write_data_string(uParam0->f_93.f_3128.f_269, "MP_STARTING_WEAPON_CONTENTS");
		func_466(uParam0, iParam2);
		switch (uParam0->f_10.f_21.f_2)
		{
			case -504335712:
				_databinding_write_data_string(uParam0->f_93.f_3128.f_272, func_464(Global_3145858->f_57980[iParam2]->f_103));
				break;
			case 395262693:
				_databinding_write_data_string(uParam0->f_93.f_3128.f_272, func_464(Global_3145858->f_57980[iParam2]->f_103));
				break;
			case -933924539:
				_databinding_write_data_string(uParam0->f_93.f_3128.f_272, func_464(Global_3145858->f_57980[iParam2]->f_103));
				break;
		}
	}
}

int func_291(var uParam0)
{
	return uParam0->f_93.f_2229.f_170;
}

void func_292(var uParam0, int iParam1)
{
	uVar0 = func_467(uParam0, iParam1);
	sVar1 = func_468(uParam0, iParam1);
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (_0xb881ca836cc4b6d4(uParam0->f_14[iParam1]))
			{
				_databinding_write_data_string(uVar0, sVar1);
			}
			else
			{
				_databinding_write_data_string(uVar0, _create_var_string(0, -1569615261));
			}
			break;
		case 4:
		case 5:
			_databinding_write_data_string(uVar0, sVar1);
			break;
	}
}

void func_293(var uParam0)
{
	switch (uParam0->f_27)
	{
		case 1:
			network_clear_found_gamers();
			break;
		case 2:
			_0x49cf17a564918e8d();
			uParam0->f_3540 = 0;
			break;
	}
	uParam0->f_142.f_1804 = 0;
	_0xff36f36b07e69059(0);
}

void func_294(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_2 != -1182353825)
	{
		if (uParam1->f_2 != 723208654)
		{
			uParam1->f_8 = -1;
		}
		else if (!func_128(uParam1, 1024))
		{
			iVar0 = func_469(uParam0, uParam1->f_6);
			if (iVar0 == 0)
			{
				uParam1->f_8 = -1;
			}
			else
			{
				iParam2 = func_346(iParam2, 0, 15);
				uParam1->f_8 = iParam2;
			}
		}
	}
	if (uParam1->f_8 == -1)
	{
		uParam1->f_5312 = { *uParam1->f_4033[uParam1->f_5297]->f_3[uParam1->f_5320] };
		uParam1->f_5312.f_3 = { uParam1->f_4033[uParam1->f_5297]->f_3[uParam1->f_5320]->f_3 };
		uParam1->f_5312.f_6 = uParam1->f_4033[uParam1->f_5297]->f_3[uParam1->f_5320]->f_6;
	}
	else
	{
		iVar1 = 0;
		iVar2 = uParam1->f_4033[uParam1->f_5297]->f_20[uParam1->f_8]->f_1;
		if ((iVar2 != -1 && does_entity_exist(uParam1->f_4033[uParam1->f_5297]->f_325[iVar2]->f_3)) && !is_ped_male(uParam1->f_4033[uParam1->f_5297]->f_325[iVar2]->f_3))
		{
			iVar1 = 1;
		}
		uParam1->f_5312 = { *uParam1->f_4033[uParam1->f_5297]->f_20[uParam1->f_8]->f_2[iVar1] };
		uParam1->f_5312.f_3 = { uParam1->f_4033[uParam1->f_5297]->f_20[uParam1->f_8]->f_2[iVar1]->f_3 };
		uParam1->f_5312.f_6 = uParam1->f_4033[uParam1->f_5297]->f_20[uParam1->f_8]->f_2[iVar1]->f_6;
	}
	if (uParam1->f_5324 || iParam3)
	{
		animpostfx_play("MP_CampWipeL");
	}
	else
	{
		animpostfx_play("MP_CampWipeR");
	}
	func_273(&(uParam1->f_5321));
	func_470(uParam1, 128);
}

void func_295(var uParam0)
{
	_databinding_clear_binding_array(uParam0->f_1);
}

void func_296(var uParam0)
{
	func_153(2, 0, 3, uParam0->f_4033[uParam0->f_5297]->f_325[0]->f_3, 0);
}

void func_297(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_471(uParam0, iParam1, iVar0);
		iVar0++;
	}
}

void func_298()
{
	if (Global_1071686->f_21952.f_581 != 0)
	{
		Global_1071686->f_21952.f_581 = 0;
	}
}

void func_299(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_6 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_6 = 0;
		if (is_mp_gamer_tag_active(Global_1071686->f_21952[iParam0]->f_2))
		{
			_set_mp_gamer_tag_type(Global_1071686->f_21952[iParam0]->f_2, 0);
		}
		func_472(iParam0);
	}
}

void func_300(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_9 != 0)
	{
		func_473(iParam0, 1, 1);
		Global_1071686->f_21952[iParam0]->f_9 = 0;
		func_472(iParam0);
	}
}

void func_301(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_3 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_3 = 0;
		func_472(iParam0);
	}
}

void func_302(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = 0;
		func_472(iParam0);
	}
}

bool func_303(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_304(var uParam0, var uParam1)
{
	Var0 = uParam0->f_93.f_5298;
	Var0.f_2 = 0;
	if (!_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		return false;
	}
	*uParam1 = { Var0 };
	if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
	{
		iVar5 = func_474(func_370(uParam0->f_10.f_53));
		if (iVar5 != 0)
		{
			uParam1->f_2 = 2;
			uParam1->f_3 = iVar5;
		}
		else
		{
			uParam1->f_2 = 1;
		}
	}
	else
	{
		uParam1->f_2 = 3;
		uParam1->f_3 = Global_524288->f_40400;
		Var6 = { *uParam1 };
		if (_datafile_get_data_node_index(&(uParam1->f_1), uParam1))
		{
			return true;
		}
		else
		{
			*uParam1 = { Var6 };
		}
		uParam1->f_2 = 1;
		uParam1->f_3 = 0;
	}
	if (!_datafile_get_data_node_index(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

bool func_305(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = { *uParam0 };
	uParam1->f_2 = 19;
	if (!_datafile_get_data_node_index(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	*iParam2 = _datafile_get_num_children(*uParam1, uParam1->f_1);
	return true;
}

bool func_306(var uParam0, int iParam1, int iParam2)
{
	Var1 = { *uParam0 };
	Var1.f_2 = 20;
	Var1.f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = 21;
	if (!_datafile_get_hash(&uVar0, &Var1))
	{
		return false;
	}
	else
	{
		*iParam2 = uVar0;
	}
	return true;
}

void func_307()
{
	Var0 = { func_475() };
	if (!func_325(Var0))
	{
		return;
	}
	if (Var0 == 2)
	{
		func_476(func_370(Var0), 0);
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	if (!func_477(Var0) && !func_478(Var0))
	{
		return;
	}
	func_479(Var0, 0, 2, 0, 0);
	if (func_477(Var0))
	{
		func_480(Var0);
	}
}

void func_308(var uParam0)
{
	func_481(&(uParam0->f_63), 1, 1);
	func_482(&(uParam0->f_35), 1);
}

void func_309(var uParam0)
{
	func_483(uParam0);
	uParam0->f_69 = -1;
	uParam0->f_69.f_1 = 0;
	func_484(&(uParam0->f_71));
	uParam0->f_135 = 0;
	StringCopy(&(uParam0->f_136), "", 24);
	func_347(&(uParam0->f_139), 0);
	uParam0->f_139.f_1 = 0;
	uParam0->f_139.f_2 = 0;
	uParam0->f_142 = -2;
	_0xde544b7ec0c187cc(&(uParam0->f_142.f_1));
	uParam0->f_142.f_2 = 0;
	uParam0->f_142.f_3 = 0;
	uParam0->f_142.f_4 = -1;
	func_347(&(uParam0->f_147), 0);
	uParam0->f_147.f_1 = 0;
	uParam0->f_147.f_2 = 0;
	uParam0->f_150 = 0;
	uParam0->f_151 = 0;
}

void func_310(var uParam0)
{
	*uParam0 = 0;
	func_484(&(uParam0->f_1));
	uParam0->f_65 = -1;
	uParam0->f_68 = 0;
	uParam0->f_69 = -1;
}

void func_311(int iParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	set_entity_visible(iVar1, true);
	_0x18ff3110cf47115d(iVar1, 2, true);
	_0x18ff3110cf47115d(iVar1, 3, true);
	_0x18ff3110cf47115d(iVar1, 11, true);
	_0x18ff3110cf47115d(iVar1, 12, true);
	_0x18ff3110cf47115d(iVar1, 1, true);
	_0x18ff3110cf47115d(iVar1, 0, true);
	set_ped_can_ragdoll(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		set_player_control(iVar0, true, 0, false);
	}
	else
	{
		set_player_control(iVar0, true, 4, false);
	}
	freeze_entity_position(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_485();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_312(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = 0;
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	set_player_control(iVar0, false, iVar2, false);
	set_entity_visible(iVar1, bParam0);
	_0x18ff3110cf47115d(iVar1, 2, bParam0);
	_0x18ff3110cf47115d(iVar1, 3, bParam0);
	_0x18ff3110cf47115d(iVar1, 11, bParam0);
	_0x18ff3110cf47115d(iVar1, 12, bParam0);
	_0x18ff3110cf47115d(iVar1, 1, bParam0);
	_0x18ff3110cf47115d(iVar1, 0, bParam0);
	if (bParam1)
	{
		set_player_invincible(iVar0, true);
	}
	if ((!is_ped_in_any_vehicle(iVar1, true) && !is_entity_attached_to_any_object(iVar1)) && !is_entity_attached_to_any_ped(iVar1))
	{
		if (bParam2)
		{
			set_entity_collision(iVar1, false, false);
			set_entity_completely_disable_collision(iVar1, false, false);
			freeze_entity_position(iVar1, true);
		}
	}
	if (bParam3 && !is_ped_fatally_injured(iVar1))
	{
		if (_0x9ff5f9b24e870748(iVar1))
		{
			clear_ped_tasks_immediately(iVar1, false, !bParam6);
		}
	}
}

void func_313(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_314(struct<4> Param0)
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
			if (func_486(Param0))
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
			func_487(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_313(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_486(Param0))
			{
				return;
			}
			func_487(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_313(8);
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
			if (func_486(Param0))
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
			func_487(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_313(8);
			break;
			break;
	}
}

void func_315(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_488(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_488(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_488(iParam0, 1)])->f_11 && iParam1));
}

bool func_316(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_317(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

int func_318(int iParam0)
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
	iVar0 = func_489(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_490(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_491(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_319(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_492(iVar0, 1);
		if (!func_493(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_494(iVar0, 0);
				func_495(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_315(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_320(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_496(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_497(iVar0, -166674229))
	{
		return 0;
	}
	return func_498(iParam0);
}

int func_321(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_492(iVar0, 1);
		if (func_493(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_499(iVar0) == -1)
			{
				func_494(iVar0, 0);
				func_495(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_500(iVar2, 2, 6);
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

void func_322(int iParam0)
{
	func_500(iParam0, 8, 6);
}

int func_323(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_501(&(Global_1952637->f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_502(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_503(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_504(uParam3, iParam1);
	bVar2 = func_505(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_506(uParam2, uParam3, iParam1);
		}
		else
		{
			func_507(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_508(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return 0;
		}
		func_509(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_510(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_508(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return 1;
}

void func_324()
{
	Global_1952637->f_1057 = 0;
}

bool func_325(struct<2> Param0)
{
	if (!func_511(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_512(Param0))
	{
		return false;
	}
	return true;
}

int func_326(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_513(Param0);
	}
	return -1;
}

bool func_327(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_328()
{
	return Global_1102219->f_3672;
}

void func_329(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

int func_330()
{
	return Global_1893587->f_2;
}

int func_331(vector3 vParam0, bool bParam3)
{
	iVar0 = func_514(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_332(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_333(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 160165798;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		_datafile_get_vector(uParam2, &Var0);
		Var0.f_2 = -55481687;
		_datafile_get_float(bParam3, &Var0);
		return true;
	}
	return false;
}

bool func_334(vector3 vParam0, var uParam3, bool bParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_515(vParam0)];
	iVar1 = func_332(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_333(uVar0, iVar2, uParam3, bParam4))
		{
			return true;
		}
	}
	return false;
}

void func_335(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_146(255) == 4)
	{
		return;
	}
	if (func_176(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901947->f_50;
		fParam9 = Global_1901947->f_50.f_1;
	}
	if (bParam10)
	{
		func_177(0, 0, 0, 1);
	}
	func_75(0);
	func_75(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_178(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = bParam3;
	Global_1102219->f_3849.f_5 = 1;
	Global_1102219->f_3849.f_17.f_6 = { vParam0 };
	Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102219->f_3849.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102219->f_3849.f_17.f_9 = -432403087;
	if (fParam8 > 1f)
	{
		Global_1102219->f_3849.f_16 = 1;
		Global_1102219->f_3849.f_6.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3849.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102219->f_3849.f_6.f_9 = -432403087;
	}
	func_179(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = bParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_180(Global_1102219->f_3849, 36);
	func_181(Global_1102219->f_3888, 36);
}

void func_336(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_337(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_338(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_339(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_340()
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

void func_341(int iParam0)
{
	if (func_516(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

int func_342(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_517(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

void func_344(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_345(var uParam0)
{
	if (uParam0->f_4 != 0 || !func_519(uParam0, 2))
	{
		func_101(uParam0, 0);
		func_198(uParam0, 2);
	}
}

int func_346(int iParam0, int iParam1, int iParam2)
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

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_349(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_350(var uParam0)
{
	return func_349(*uParam0, 2);
}

int func_351(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_352(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = &uParam0->f_32[iParam1];
	if (!func_402(uParam0, iVar0))
	{
		return;
	}
	uParam0->f_7[iVar0]->f_1 = (uParam0->f_7[iVar0]->f_1 - 1);
	func_520(uParam0, iParam1);
	if (bParam2)
	{
		func_345(uParam0);
	}
	else if (bParam3)
	{
		func_198(uParam0, 4);
	}
}

void func_353(int iParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (*iParam1 >= uParam2[iVar0] && uParam2[iVar0] != 0)
		{
			*iParam0++;
			*iParam1 = (*iParam1 - uParam2[iVar0]);
		}
		iVar0++;
	}
}

int func_354(var uParam0)
{
	return count_participant_bits(&(uParam0->f_552));
}

void func_355(var uParam0)
{
	_0x5827be85a87b073d(&(uParam0->f_552));
}

void func_356(var uParam0, int iParam1)
{
	_0x1bdb5a07307f6929(&(uParam0->f_552), iParam1);
}

void func_357(var uParam0, int iParam1)
{
	_0x1c5eb3c27f7508cb(&(uParam0->f_553), iParam1);
}

int func_358(var uParam0, int iParam1)
{
	if (!network_is_player_a_participant(iParam1))
	{
		return -1;
	}
	iVar0 = network_get_participant_index(iParam1);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return -1;
	}
	return (*uParam0)[iVar0]->f_27;
}

void func_359(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == 255)
	{
		return;
	}
	if (iParam2 >= func_450(uParam0))
	{
		iParam2 = (func_450(uParam0) - 1);
	}
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return;
	}
	if (func_521(uParam0, iParam1) != iParam2)
	{
		uParam0->f_32[iVar0]->f_2 = iParam2;
		if (uParam0->f_7[iParam2]->f_1 < &uParam0->f_7[iParam2])
		{
			func_360(uParam0, iParam1, iParam2);
		}
		else
		{
			uParam0->f_32[iVar0]->f_7 = get_network_time_accurate();
		}
		if (bParam3)
		{
			func_345(uParam0);
		}
		else if (bParam4)
		{
			func_198(uParam0, 4);
		}
	}
}

void func_360(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return;
	}
	if (func_234(uParam0, iParam1) == iParam2)
	{
		return;
	}
	func_368(uParam0, iParam1);
	uParam0->f_32[iVar0] = iParam2;
	if (func_402(uParam0, iParam2))
	{
		func_227(uParam0);
	}
}

int func_361(var uParam0, int iParam1)
{
	if (!network_is_player_a_participant(iParam1))
	{
		return -1;
	}
	iVar0 = network_get_participant_index(iParam1);
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return -1;
	}
	return (*uParam0)[iVar0]->f_29;
}

int func_362(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_35;
}

void func_363(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (!is_bit_set(Global_3145858->f_49704[*iParam2]->f_3, &(uParam0->f_32[*iParam1])) && iVar0 < 18)
	{
		iVar0++;
		*iParam2++;
		if (*iParam2 >= 18)
		{
			*iParam2 = 0;
		}
	}
}

int func_364(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return -1;
	}
	return uParam0->f_32[iVar0]->f_4;
}

void func_365(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return;
	}
	uParam0->f_32[iVar0]->f_4 = iParam2;
}

int func_366(var uParam0, int iParam1, int iParam2)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (uParam0->f_32[iVar1]->f_2 != iParam1 || &uParam0->f_32[iVar1] == iParam1)
		{
		}
		else if (iParam2 != -1 && &uParam0->f_32[iVar1] != iParam2)
		{
		}
		else if (iVar0 == -1 || is_time_less_than(uParam0->f_32[iVar1]->f_7, uParam0->f_32[iVar0]->f_7))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return iVar0;
}

int func_367(var uParam0, int iParam1)
{
	if (uParam0->f_722 != -1)
	{
		iVar0 = uParam0->f_32[uParam0->f_722]->f_7;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if ((&uParam0->f_32[iVar2] == iParam1 && uParam0->f_32[iVar2]->f_2 != iParam1) && uParam0->f_32[iVar2]->f_2 != -1)
		{
			if (uParam0->f_722 != -1)
			{
				if (is_time_more_than(uParam0->f_32[iVar2]->f_7, iVar0) && (iVar1 == -1 || is_time_less_than(uParam0->f_32[iVar2]->f_7, uParam0->f_32[iVar1]->f_7)))
				{
					iVar1 = iVar2;
				}
			}
			else if (iVar1 == -1 || is_time_less_than(uParam0->f_32[iVar2]->f_7, uParam0->f_32[iVar1]->f_7))
			{
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

void func_368(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return;
	}
	iVar1 = func_234(uParam0, iParam1);
	uParam0->f_32[iVar0] = -1;
	if (func_402(uParam0, iVar1))
	{
		func_227(uParam0);
	}
}

bool func_369()
{
	return func_77(Global_1572887->f_7, 1);
}

int func_370(struct<2> Param0)
{
	if (!func_325(Param0))
	{
		return -1;
	}
	if (Param0 != 2)
	{
		return -1;
	}
	return func_513(Param0);
}

bool func_371(var uParam0)
{
	return func_349(*uParam0, 2);
}

int func_372()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

int func_373(int iParam0)
{
	if (!func_522(7, iParam0, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1636457257;
	if (!_datafile_get_hash(&uVar5, &vVar0))
	{
		return 0;
	}
	return uVar5;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		case 1039801657:
			return 10;
		default:
			break;
	}
	return 0;
}

var func_375(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_523() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_524());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_524());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_524());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_525(get_player_team(iVar5)));
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
			if (func_526(iVar2))
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
				if (iVar9 & 8192 != 0 && func_146(iVar2) != 1)
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
					if (!func_527(iVar10))
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

struct<2> func_376()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_377(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	if (!_0x179a6f0ee2e79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = get_player_index();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 27, 16, &fParam8);
}

int func_378(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return -1;
	}
	return get_unique_int_for_player(iParam0);
}

float func_379(var uParam0, int iParam1)
{
	if (&uParam0->f_7[iParam1] == 0)
	{
		return 0f;
	}
	iVar0 = &uParam0->f_7[iParam1];
	iVar1 = uParam0->f_7[iParam1]->f_1;
	return (to_float((iVar0 - iVar1)) / to_float(iVar0));
}

int func_380(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_516 - 1))
	{
		if (uParam0->f_7[iVar0]->f_1 > iVar2)
		{
			iVar2 = uParam0->f_7[iVar0]->f_1;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

float func_381(var uParam0, int iParam1)
{
	if (&uParam0->f_7[iParam1] == 0)
	{
		return 0f;
	}
	iVar0 = &uParam0->f_7[iParam1];
	fVar1 = to_float(uParam0->f_7[iParam1]->f_1);
	if (fVar1 == 1f && iVar0 != 1)
	{
		fVar1 = (fVar1 + -0.5f);
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (&uParam0->f_7[iVar2] > iVar3)
		{
			iVar3 = &uParam0->f_7[iVar2];
		}
		iVar2++;
	}
	if (iVar3 > iVar0)
	{
		fVar1 = (fVar1 + -0.9f);
	}
	return ((to_float(iVar0) - (fVar1 + 1f)) / to_float(iVar0));
}

void func_382(var uParam0, var uParam1)
{
	iVar3 = 1;
	iVar1 = 0;
	while (iVar1 <= (uParam0->f_516 - 1))
	{
		(*uParam1)[iVar1] = iVar1;
		iVar1++;
	}
	iVar0 = 1;
	while (iVar0 <= (uParam0->f_516 - 1))
	{
		iVar1 = (uParam0->f_516 - 1);
		while (iVar1 >= iVar3)
		{
			if (func_379(uParam0, uParam1[iVar1]) < func_379(uParam0, uParam1[(iVar1 - 1)]))
			{
				uVar2 = uParam1[(iVar1 - 1)];
				(*uParam1)[(iVar1 - 1)] = uParam1[iVar1];
				(*uParam1)[iVar1] = uVar2;
			}
			iVar1 = (iVar1 + -1);
		}
		iVar3++;
		iVar0++;
	}
}

float func_383(var uParam0, int iParam1)
{
	if (&uParam0->f_7[iParam1] == 0)
	{
		return 0f;
	}
	iVar0 = &uParam0->f_7[iParam1];
	fVar1 = to_float(uParam0->f_7[iParam1]->f_1);
	if ((fVar1 - 1f) == 1f && iVar0 != 1)
	{
		fVar1 = (fVar1 + -0.5f);
	}
	return ((to_float(iVar0) - (fVar1 - 1f)) / to_float(iVar0));
}

void func_384(var uParam0)
{
	if (func_519(uParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (&uParam0->f_32[iVar0] == -1)
			{
			}
			else
			{
				uParam0->f_32[iVar0] = -2;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			uParam0->f_7[iVar1]->f_1 = 0;
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		uParam0->f_518[iVar2] = 0;
		iVar2++;
	}
	bVar3 = func_519(uParam0, 8);
	uParam0->f_517 = 0;
	uParam0->f_6 = 0;
	if (bVar3)
	{
		func_198(uParam0, 8);
	}
	func_101(uParam0, 1);
}

void func_385(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (func_528(uParam0, iVar2))
		{
			iVar1 = func_521(uParam0, iVar2);
			if (func_402(uParam0, iVar1))
			{
				func_360(uParam0, iVar2, iVar1);
			}
		}
		iVar0++;
	}
	func_101(uParam0, 2);
}

void func_386(var uParam0)
{
	iVar0 = int_to_playerindex(uParam0->f_517);
	if (func_528(uParam0, iVar0) && func_529(uParam0, iVar0) == -1)
	{
		func_530(uParam0, iVar0);
	}
	uParam0->f_517++;
	if (uParam0->f_517 == 32)
	{
		func_101(uParam0, 3);
	}
}

void func_387(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				uParam0->f_321[iVar0]->f_3 = -1;
				uParam0->f_321[iVar0]->f_2 = -1;
				uParam0->f_321[iVar0]->f_4 = 0;
				iVar0++;
			}
			func_531(uParam0, 1);
			break;
		case 1:
			func_532(uParam0);
			_0x7e300b5b86ab1d1a(&(uParam0->f_321), uParam0->f_321, 6, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_517 = 0;
			func_531(uParam0, 2);
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (uParam0->f_517 > 32)
				{
				}
				else
				{
					if (!func_533(uParam0, iVar1))
					{
						func_531(uParam0, 3);
						return;
					}
					iVar1++;
				}
			}
			uParam0->f_517 = 0;
			func_531(uParam0, 4);
			break;
		case 3:
			if (func_534(uParam0, uParam0->f_551))
			{
				func_531(uParam0, 2);
			}
			break;
		case 4:
			if (!func_535(uParam0, func_228(uParam0, -1), &uVar6))
			{
				func_531(uParam0, 7);
			}
			else
			{
				func_531(uParam0, 5);
			}
			break;
		case 5:
			bVar7 = false;
			iVar2 = func_228(uParam0, -1);
			iVar3 = func_536(uParam0, iVar2);
			if (uParam0->f_517 < 32)
			{
				iVar1 = 0;
				while (iVar1 <= 31)
				{
					if ((&uParam0->f_321[iVar1] > 0 && !uParam0->f_321[iVar1]->f_5) && func_537(uParam0, iVar3, iVar2, &(uParam0->f_321[iVar1])))
					{
						func_538(&(uParam0->f_321), uParam0->f_321[iVar1]->f_2);
						bVar7 = true;
						func_531(uParam0, 6);
					}
					else
					{
						iVar1++;
					}
				}
			}
			uParam0->f_517++;
			if (!bVar7)
			{
				func_531(uParam0, 7);
			}
			break;
		case 6:
			iVar2 = func_228(uParam0, -1);
			iVar3 = func_536(uParam0, iVar2);
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam0->f_321[iVar0]->f_4)
				{
					uParam0->f_321[iVar0]->f_4 = 0;
					iVar4 = uParam0->f_321[iVar0]->f_2;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar5 = int_to_playerindex(iVar0);
				if (!func_401(func_378(iVar5)))
				{
				}
				else if (func_529(uParam0, iVar5) == iVar4)
				{
					func_360(uParam0, iVar5, iVar2);
				}
				iVar0++;
			}
			func_531(uParam0, 4);
			break;
		case 7:
			func_101(uParam0, 4);
			break;
	}
}

void func_388(var uParam0)
{
	iVar0 = func_228(uParam0, -1);
	bVar3 = func_229(uParam0, iVar0, &iVar1);
	bVar5 = false;
	if (bVar3)
	{
		iVar8 = 255;
		iVar9 = 5;
		iVar11 = 2147483647;
		iVar12 = 0;
		while (iVar12 <= 31)
		{
			iVar6 = int_to_playerindex(iVar12);
			if (func_528(uParam0, iVar6) && func_234(uParam0, iVar6) == iVar1)
			{
				iVar10 = func_404(uParam0, iVar6, &uVar7, 0);
				iVar13 = func_529(uParam0, iVar6);
				iVar14 = &uParam0->f_518[iVar13];
				if (iVar10 < iVar9 || (iVar10 == iVar9 && (!bVar5 || iVar14 < iVar11)))
				{
					iVar2 = func_378(iVar6);
					bVar5 = uParam0->f_32[iVar2]->f_2 == iVar0;
					iVar9 = iVar10;
					iVar8 = iVar6;
					iVar11 = iVar14;
				}
			}
			iVar12++;
		}
		if (iVar8 != 255)
		{
			func_360(uParam0, iVar8, iVar0);
			bVar4 = true;
		}
	}
	if (!bVar4)
	{
		func_539(uParam0, 4);
		func_101(uParam0, 5);
	}
}

void func_389(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (func_528(uParam0, iVar0))
		{
			iVar2 = func_234(uParam0, iVar0);
			if (iVar2 < 0)
			{
				iVar3 = func_228(uParam0, -1);
				func_360(uParam0, iVar0, iVar3);
			}
		}
		iVar1++;
	}
	func_540(uParam0, 0);
	func_101(uParam0, 6);
}

void func_390(var uParam0)
{
	if (func_519(uParam0, 8))
	{
		if (func_541(uParam0) != 5)
		{
			func_540(uParam0, 5);
		}
	}
	switch (uParam0->f_554)
	{
		case 0:
			func_542(uParam0);
			break;
		case 1:
			func_543(uParam0);
			break;
		case 2:
			func_544(uParam0);
			break;
		case 3:
			func_545(uParam0);
			break;
		case 4:
			func_546(uParam0);
			break;
		case 5:
			func_101(uParam0, 7);
			return;
	}
}

void func_391(var uParam0)
{
	if (func_519(uParam0, 4))
	{
		func_101(uParam0, 0);
	}
}

bool func_392(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 2:
		case 4:
		case 6:
		case 8:
			if (!func_394(uParam0, uParam1, *uParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_393(var uParam0, var uParam1)
{
	func_547(uParam0);
	func_548(uParam0, uParam1);
	uParam0->f_3++;
	func_549(uParam0, 1);
}

bool func_394(var uParam0, var uParam1, int iParam2)
{
	if (func_550(uParam0, uParam1))
	{
		func_548(uParam0, uParam1);
		func_549(uParam0, iParam2);
		return true;
	}
	return false;
}

void func_395(var uParam0, var uParam1)
{
	if (uParam0->f_2 < 8)
	{
		if (func_551(uParam0, uParam1, 0))
		{
			uParam0->f_2++;
		}
		else
		{
			uParam0->f_3++;
		}
		return;
	}
	uParam0->f_2 = 0;
	func_549(uParam0, 3);
}

void func_396(var uParam0, var uParam1)
{
	if (uParam0->f_2 < 8)
	{
		if (func_551(uParam0, uParam1, 6))
		{
			uParam0->f_2++;
		}
		else
		{
			uParam0->f_3++;
		}
		return;
	}
	uParam0->f_2 = 0;
	func_549(uParam0, 5);
}

void func_397(var uParam0, var uParam1)
{
	if (!func_552(uParam0, uParam1))
	{
		uParam0->f_3++;
		return;
	}
	uParam0->f_2 = 0;
	func_549(uParam0, 7);
}

void func_398(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&(uParam0->f_1)))
	{
		func_549(uParam0, 9);
		return;
	}
	if (!func_553(uParam0, uParam1, uParam0->f_2))
	{
		uParam0->f_3++;
	}
	uParam0->f_2++;
	if (uParam0->f_2 == 32)
	{
		func_549(uParam0, 9);
	}
}

void func_399(var uParam0)
{
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (!func_528(uParam0, iVar0))
		{
			iVar3 = func_228(uParam0, -1);
			func_360(uParam0, iVar0, iVar3);
		}
		iVar1++;
	}
	func_540(uParam0, 0);
	func_549(uParam0, 11);
}

void func_400(var uParam0)
{
	if (func_519(uParam0, 8))
	{
		if (func_541(uParam0) != 5)
		{
			func_549(uParam0, 12);
		}
	}
	switch (uParam0->f_554)
	{
		case 0:
			func_542(uParam0);
			break;
		case 1:
			func_543(uParam0);
			break;
		case 2:
			func_544(uParam0);
			break;
		case 3:
			func_545(uParam0);
			break;
		case 4:
			func_546(uParam0);
			break;
		case 5:
			func_549(uParam0, 12);
			return;
	}
}

bool func_401(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

bool func_402(var uParam0, int iParam1)
{
	return (iParam1 > -1 && iParam1 < uParam0->f_516);
}

void func_403(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (uParam0->f_32[iVar0]->f_8 == iParam1)
		{
			func_520(uParam0, iVar0);
			return;
		}
		iVar0++;
	}
}

int func_404(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = int_to_playerindex(iVar2);
		if (iParam1 == iVar3)
		{
		}
		else if (func_528(uParam0, iVar3))
		{
			iVar1 = func_554(uParam0, iParam1, iVar3, bParam3);
			if (iVar1 > iVar0)
			{
				iVar0 = iVar1;
				*iParam2 = iVar3;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_405(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar15 = func_555();
	if (!get_event_data(1, iParam3, &Var0, 9))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			do_screen_fade_out(0);
			func_556();
			func_96(uParam2);
			func_29(uParam2, 16);
			func_97(uParam1, 15);
			break;
		case 1:
			break;
		case 2:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723 = Var0.f_5;
			break;
		case 3:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_1 = Var0.f_5;
			break;
		case 4:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_2 = Var0.f_5;
			break;
		case 5:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_3 = Var0.f_5;
			break;
		case 6:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_4 = Var0.f_5;
			break;
		case 7:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_5 = Var0.f_5;
			break;
		case 8:
			if (!network_is_host_of_this_script())
			{
				return;
			}
			uParam0->f_723.f_6 = Var0.f_5;
			break;
		case 9:
			Var16 = Var0.f_5;
			Var16.f_1 = Var0.f_6;
			Var16.f_2 = Var0.f_7;
			Var16.f_3 = Var0.f_8;
			func_557(&(uParam2->f_93.f_2229), Var16);
			break;
		case 10:
			if (!get_event_data(1, iParam3, &Var9, 6))
			{
				return;
			}
			if (uParam0->f_749 != 255 && uParam0->f_749 != Var9.f_5)
			{
				return;
			}
			func_560(_create_var_string(130, "KICK_PLAYER_TICKER", uParam0->f_750 + 1, iVar15, func_559(func_558(Var9.f_5), 109029619)), -2, 0, 0, 0, 0);
			if (network_is_host_of_this_script())
			{
				uParam0->f_749 = Var9.f_5;
				uParam0->f_750++;
				if (uParam0->f_750 >= iVar15)
				{
					func_561(uParam0, network_get_participant_index(uParam0->f_749));
					func_368(uParam0, uParam0->f_749);
					func_562(uParam0->f_749);
					uParam0->f_749 = 255;
					uParam0->f_750 = 0;
				}
			}
			break;
		case 11:
			func_563(uParam2);
			break;
		case 12:
			if (uParam0->f_747 < 3)
			{
				uParam0->f_747++;
			}
			break;
	}
}

var func_406(char* sParam0, char* sParam1, int iParam2)
{
	sVar0 = _create_var_string(10, sParam0, func_282(sParam1, iParam2));
	uVar1 = func_560(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_407(var uParam0)
{
	if ((is_control_just_pressed(2, -875187602) || is_control_just_pressed(2, 652860416)) || is_control_just_pressed(2, -1384133541))
	{
		uParam0->f_93.f_5324 = 1;
	}
	else if ((is_control_just_pressed(2, 285921746) || is_control_just_pressed(2, -1932931774)) || is_control_just_pressed(2, 1710877787))
	{
		uParam0->f_93.f_5324 = 0;
	}
}

void func_408(var uParam0)
{
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar4))
		{
			case -507840394:
				get_event_data(1, iVar4, &iVar0, 4);
				switch (iVar0)
				{
					case 190:
						func_564(iVar4);
						break;
					case 191:
						func_565(iVar4, uParam0);
						break;
				}
				break;
		}
		iVar4++;
	}
}

void func_409(var uParam0, var uParam1, var uParam2)
{
	iVar11 = player_id();
	iVar12 = participant_id_to_int();
	iVar21 = _0x901e0dc25080c8b9(iVar11);
	while (_event_manager_is_event_pending(2084771291))
	{
		if (_event_manager_peek_event(2084771291, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					func_566(&Var0, uParam2);
					switch (Var0.f_2)
					{
						case -1858235574:
						case -1533989033:
							iVar18 = _databinding_read_data_hash_string_from_parent(Var0.f_3, "inventory_item");
							_databinding_write_data_hash_string(uParam2->f_93.f_2686.f_424, get_hash_key("MP_LOBBY_PURCHASES_REFILL"));
							uParam2->f_93.f_2686.f_427 = 0;
							uParam2->f_93.f_2686.f_428 = 0;
							switch (func_567(iVar18))
							{
								case 307971639:
									func_568(&(uParam2->f_93), iVar18);
									break;
								case -562345805:
								case 2085633299:
									func_569(&(uParam2->f_93), iVar18);
									break;
								default:
									break;
							}
							break;
						case 953615807:
							_databinding_write_data_hash_string(uParam2->f_93.f_2686.f_424, get_hash_key("MP_LOBBY_PURCHASES_CLEAN"));
							_databinding_write_data_string(uParam2->f_93.f_2686.f_417, _create_var_string(2, "MP_LOBBY_PURCHASES_CLEAN_ALL_INFO"));
							uParam2->f_93.f_2686.f_428 = 1;
							uParam2->f_93.f_2686.f_427 = 0;
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_419, false);
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_422, true);
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_418, true);
							break;
						case -110320509:
							_databinding_write_data_hash_string(uParam2->f_93.f_2686.f_424, get_hash_key("MP_LOBBY_PURCHASES_REFILL"));
							uParam2->f_93.f_2686.f_427 = 1;
							uParam2->f_93.f_2686.f_428 = 0;
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_419, false);
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_422, true);
							_databinding_write_data_bool(uParam2->f_93.f_2686.f_418, true);
							sVar22 = _create_var_string(2, "MP_LOBBY_PURCHASES_REFILL_ALL_INFO");
							_databinding_write_data_string(uParam2->f_93.f_2686.f_417, sVar22);
							break;
						case -600701932:
							func_290(uParam2, Var0.f_1, _databinding_read_data_int_from_parent(Var0.f_3, "item_index"));
							break;
					}
					_event_manager_pop_event(2084771291);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case -600701932:
							func_570(&(uParam2->f_93.f_3128), Var0.f_1, _databinding_read_data_int_from_parent(Var0.f_3, "item_index"));
							break;
						case -892886940:
							if (uParam2->f_93.f_6 == func_234(uParam0, player_id()))
							{
								func_572("MP_LOBBY_PREFER_TEAM_TICKER", uParam2->f_93.f_3405[uParam2->f_93.f_6], func_571(uParam0, uParam2, network_player_id_to_int(), uParam2->f_93.f_6));
								func_573((*uParam1)[iVar12], func_234(uParam0, player_id()));
							}
							else if ((*uParam1)[iVar12]->f_27 == uParam2->f_93.f_6)
							{
								func_572("MP_LOBBY_JOIN_TEAM_CANCEL_QUEUE_TICKER", uParam2->f_93.f_3405[uParam2->f_93.f_6], func_571(uParam0, uParam2, network_player_id_to_int(), uParam2->f_93.f_6));
								func_26((*uParam1)[iVar12], func_234(uParam0, player_id()));
							}
							else
							{
								if (func_469(uParam0, uParam2->f_93.f_6) >= &uParam0->f_7[uParam2->f_93.f_6])
								{
									func_572("MP_LOBBY_JOIN_TEAM_QUEUE_TICKER", uParam2->f_93.f_3405[uParam2->f_93.f_6], func_571(uParam0, uParam2, network_player_id_to_int(), uParam2->f_93.f_6));
								}
								func_26((*uParam1)[iVar12], uParam2->f_93.f_6);
							}
							break;
						case 155948449:
							if (_0x0f99f6436528a089(iVar21))
							{
								if (_0x4be6c13a45cca8ec(iVar21) == iVar11)
								{
									if (_0x149a2751ab66ac02(iVar21) == 1)
									{
										_uistatemachine_request_transition(1473691941, 962885784);
									}
									else if (func_574(uParam2))
									{
										_uistatemachine_request_transition(1473691941, 1037078506);
									}
									else
									{
										_uistatemachine_request_transition(1473691941, -1614690942);
									}
								}
								else
								{
									_uistatemachine_request_transition(1473691941, -1913939249);
								}
							}
							else
							{
								_uistatemachine_request_transition(1473691941, 962885784);
							}
							break;
						case -1539764988:
							func_576(func_575(iVar21), 0, -1, -1, -1, -1);
							break;
						case -1618757613:
							if ((_0x0f99f6436528a089(iVar21) && _0x4be6c13a45cca8ec(iVar21) == iVar11) && _0x149a2751ab66ac02(iVar21) == 1)
							{
								func_576(func_575(iVar21), 0, -1, -1, -1, -1);
							}
							else
							{
								func_263(uParam2, 16);
								func_96(uParam2);
								func_97(uParam1, 15);
							}
							break;
						case -631467057:
							if (func_128(&(uParam2->f_93), 1024))
							{
								_databinding_write_data_string(uParam2->f_93.f_142.f_8, _create_var_string(2, "MP_LOBBY_SHOW_STABLE"));
								func_294(uParam0, &(uParam2->f_93), 0, 1);
								func_129(&(uParam2->f_93), 1024);
							}
							else
							{
								_databinding_write_data_string(uParam2->f_93.f_142.f_8, _create_var_string(2, "MP_LOBBY_SHOW_PLAYERS"));
								func_470(&(uParam2->f_93), 1024);
								func_577(&(uParam2->f_93));
								if (uParam2->f_93.f_25 != 255)
								{
									func_578(uParam2->f_93.f_25);
									func_579(&(uParam2->f_93), uParam2->f_93.f_25, 0);
									func_580(&(uParam2->f_93.f_3475), uParam2->f_93.f_3475.f_53, uParam2->f_93.f_3475.f_53.f_11, 0);
								}
							}
							break;
						case 2060637039:
							if (func_224((*uParam1)[iVar12], 8))
							{
								func_241(uParam1, 8);
							}
							else
							{
								func_24(uParam1, 8);
							}
							break;
						case 1631495361:
							func_581(uParam0, uParam2, &(uParam2->f_93.f_10), &(uParam2->f_93.f_17));
							break;
						case -1138111981:
							if (!func_15(&(uParam2->f_10), 128) && func_582())
							{
								switch (uParam2->f_93.f_27)
								{
									case 0:
										func_583(uParam0, uParam2);
										break;
									case 1:
									case 2:
										func_584(uParam0, uParam2);
										break;
								}
							}
							break;
						case 388204243:
							break;
						case -855746379:
							func_585();
							break;
						case -417392533:
							network_handle_from_player(uParam2->f_93.f_9, &uVar4);
							if (!network_is_friend(&uVar4))
							{
								if (!network_is_pending_friend(&uVar4))
								{
									network_add_friend(&uVar4, "");
								}
							}
							break;
						case -1164131233:
							network_handle_from_player(uParam2->f_93.f_9, &uVar4);
							if (!func_586(&uVar4))
							{
							}
							break;
						case 1971479169:
							func_587(uParam2, Var0.f_1);
							break;
						case 400344993:
							switch (func_291(uParam2))
							{
								case 5:
									func_588(&Var0, &(uParam2->f_93.f_2229));
									break;
								case 4:
									func_589(&Var0, &(uParam2->f_93.f_2229));
									break;
								default:
									func_590(&Var0, &(uParam2->f_93.f_2229));
									break;
							}
							func_591(&(uParam2->f_93.f_2229), func_291(uParam2));
							break;
						case -202642534:
							break;
						case -534988100:
							network_show_profile_ui(&(uParam2->f_10.f_1));
							break;
						case 1455165691:
							network_show_profile_ui(&(uParam2->f_93.f_10));
							break;
						case 1200002659:
							if (uParam2->f_93.f_9 == player_id())
							{
								if (func_137(8388608))
								{
									func_36(8388608);
									func_592(0);
									_databinding_write_data_string(uParam2->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_MUTE");
								}
								else
								{
									func_66(8388608);
									func_592(1);
									_databinding_write_data_string(uParam2->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_UNMUTE");
								}
							}
							else if (_0x0ded260a1958a82e(uParam2->f_93.f_9))
							{
								_0x49623bcfc3a3d829(uParam2->f_93.f_9, 0);
								_databinding_write_data_string(uParam2->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_MUTE");
							}
							else
							{
								_0x49623bcfc3a3d829(uParam2->f_93.f_9, 1);
								_databinding_write_data_string(uParam2->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_UNMUTE");
							}
							break;
						case 953615807:
							func_593();
							func_594(&iVar15);
							iVar15 = (func_595(1933821560, 0, 59806960) * iVar15);
							_databinding_write_data_int(uParam2->f_93.f_2686.f_421, iVar15);
							bVar16 = iVar15 > 0;
							_databinding_write_data_bool_from_parent(Var0.f_3, func_596(0), bVar16);
							_databinding_write_data_bool_from_parent(Var0.f_3, func_596(59), (bVar16 && func_597() >= iVar15));
							break;
						case -1858235574:
							iVar18 = _databinding_read_data_hash_string_from_parent(Var0.f_3, "inventory_item");
							func_598(&(uParam2->f_93), iVar18);
							break;
						case -1533989033:
							iVar18 = _databinding_read_data_hash_string_from_parent(Var0.f_3, "inventory_item");
							func_599(&(uParam2->f_93), iVar18, 0);
							break;
						case -110320509:
							if (uParam2->f_93.f_28 == 2)
							{
							}
							else
							{
								iVar14 = &uParam2->f_93.f_2686.f_429[uParam2->f_93.f_28];
								if (func_597() < iVar14)
								{
								}
								else
								{
									func_600(&(uParam2->f_93.f_2686.f_432), 2113164098);
									iVar13 = 0;
									iVar13 = 0;
									while (iVar13 < 17)
									{
										iVar18 = func_601(iVar13);
										if (!func_602(iVar18, 0))
										{
										}
										else
										{
											iVar19 = func_567(iVar18);
											switch (iVar19)
											{
												case 307971639:
													if (uParam2->f_93.f_28 != 0)
													{
													}
													else
													{
														Jump @2205; //curOff = 2186
														if (uParam2->f_93.f_28 != 1)
														{
														}
														else if (!func_603(iVar18))
														{
														}
														else
														{
															iVar20 = func_604(iVar18, 0, 1, -1, 1);
															if (func_605(iVar18, iVar20, 1))
															{
															}
															else if (func_606(&(uParam2->f_93.f_2686.f_432), iVar18))
															{
																func_599(&(uParam2->f_93), iVar18, 1);
															}
														}
													}
													iVar13++;
													func_607(&(uParam2->f_93.f_2686.f_432));
													Jump @2324; //curOff = 2299
													if (uParam2->f_93.f_9 != player_id())
													{
														func_608(uParam2);
													}
													_event_manager_pop_event(2084771291);
													Jump @2504; //curOff = 2333
													_event_manager_pop_event(2084771291);
													Jump @2504; //curOff = 2345
													switch (Var0.f_2)
													{
														case -109527816:
															func_470(&(uParam2->f_93), 1);
															break;
													}
													_event_manager_pop_event(2084771291);
													Jump @2504; //curOff = 2385
													switch (Var0.f_2)
													{
														case 1592690024:
															func_609(&(uParam2->f_93));
															break;
														case -285312482:
															func_610(uParam0, uParam1, uParam2, func_439(uParam0));
															bVar17 = Var0 == -722926211;
															func_611(uParam0, uParam1, uParam2, 1, bVar17);
															break;
														case -698982549:
															func_612(&(uParam2->f_93));
															break;
													}
													_event_manager_pop_event(2084771291);
													Jump @2504; //curOff = 2489
													_event_manager_pop_event(2084771291);
												}
											}
										}
									}
									default:
										break;
							}
							default:
								break;
					}
				}
			}
		}

void func_410(var uParam0, var uParam1, var uParam2)
{
	while (_event_manager_is_event_pending(1433015236))
	{
		if (_event_manager_peek_event(1433015236, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					func_613(&Var0);
					func_566(&Var0, uParam2);
					switch (Var0.f_2)
					{
						case -443656498:
							iVar5 = _databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_player_index");
							if (iVar5 == 255)
							{
								return;
							}
							uParam2->f_93.f_25 = int_to_playerindex(iVar5);
							if (func_128(&(uParam2->f_93), 1024))
							{
								if (iVar5 != -1 && uParam2->f_93.f_5297 != -1)
								{
									uParam2->f_93.f_8 = uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar5]->f_7;
								}
								func_579(&(uParam2->f_93), uParam2->f_93.f_25, 0);
								func_578(uParam2->f_93.f_25);
							}
							else if (!func_128(&(uParam2->f_93), 65536))
							{
								if (Var0.f_1 >= 16)
								{
									func_470(&(uParam2->f_93), 65536);
									func_614(uParam0, &(uParam2->f_93), (uParam2->f_93.f_5297 + 1 % 2), uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar5]->f_7);
								}
								else
								{
									func_615(&(uParam2->f_93), uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar5]->f_7);
								}
							}
							else if (Var0.f_1 < 16)
							{
								func_129(&(uParam2->f_93), 65536);
								func_614(uParam0, &(uParam2->f_93), (uParam2->f_93.f_5297 + 1 % 2), uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar5]->f_7);
							}
							else
							{
								func_615(&(uParam2->f_93), uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar5]->f_7);
							}
							_databinding_write_data_bool(uParam2->f_93.f_142.f_7, is_durango_version());
							break;
						case 153098848:
							func_616(&(uParam2->f_93), _databinding_read_data_hash_string_from_parent(Var0.f_3, "ugc_lobby_ui_outfit_save_slot_hash"));
							break;
						case 1582020365:
							func_617(&(uParam2->f_93), _databinding_read_data_int_from_parent(Var0.f_3, "InventoryIndex"));
							break;
						case 2063464981:
							func_618(uParam2, _databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_friend_index"));
							break;
						case -926236232:
							func_619(uParam2, _databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_friend_index"));
							break;
						case -1954200378:
							Global_1940311->f_242.f_1189 = 0;
							break;
						case 290710310:
						case 1685218753:
							Global_1940311->f_242 = Var0.f_3;
							break;
					}
					_event_manager_pop_event(1433015236);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 2063464981:
							if (func_618(uParam2, _databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_friend_index")))
							{
								func_581(uParam0, uParam2, &(uParam2->f_93.f_10), &(uParam2->f_93.f_17));
							}
							break;
						case -926236232:
							func_619(uParam2, _databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_friend_index"));
							func_581(uParam0, uParam2, &(uParam2->f_93.f_10), &(uParam2->f_93.f_17));
							break;
						case 153098848:
							func_620(&(uParam2->f_93), _databinding_read_data_hash_string_from_parent(Var0.f_3, "ugc_lobby_ui_outfit_save_slot_hash"));
							break;
						case -443656498:
							uParam2->f_93.f_9 = int_to_playerindex(_databinding_read_data_int_from_parent(Var0.f_3, "dynamic_list_item_entry_player_index"));
							network_handle_from_player(uParam2->f_93.f_9, &(uParam2->f_93.f_10));
							StringCopy(&(uParam2->f_93.f_17), func_558(uParam2->f_93.f_9), 64);
							break;
						case 1582020365:
							func_621(uParam1, &(uParam2->f_93), &(Var0.f_3));
							break;
						case -2069910617:
							switch (func_622(&(uParam2->f_93.f_2667.f_5)))
							{
								case -370780981:
									func_623(&(uParam2->f_93.f_2667.f_5), 1453090978);
									break;
								case 1453090978:
									func_623(&(uParam2->f_93.f_2667.f_5), -370780981);
									break;
							}
							break;
						case -2111588953:
							func_624(Global_1940311->f_242);
							break;
						case -533058584:
							break;
						case 290710310:
							func_625(Global_1940311->f_242);
							break;
						case 1685218753:
							func_626(Global_1940311->f_242);
							break;
						case 110545328:
							func_627(Global_1940311->f_242);
							break;
					}
					_event_manager_pop_event(1433015236);
					break;
				case -1151569080:
					iVar4 = _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(38));
					switch (iVar4)
					{
						case -128178694:
							func_628(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case 1805386311:
							func_629(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case -63064432:
							func_630(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case -233831798:
							func_631(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case 786798524:
							func_632(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case -761702459:
							func_633(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case -1775919669:
							func_634(uParam0, uParam2, _databinding_read_data_hash_string_from_parent(Var0.f_3, func_596(33)));
							break;
						case -1527315056:
							func_635(uParam0, uParam1, uParam2, func_439(uParam0), _databinding_read_data_int_from_parent(Var0.f_3, func_596(34)));
							break;
						case -405777397:
							func_636(uParam1, uParam2, &(Var0.f_3));
							break;
					}
					_event_manager_pop_event(1433015236);
					break;
				case -722926211:
				case 703281244:
					switch (Var0.f_2)
					{
						case -1373902020:
							func_637();
							_event_manager_pop_event(1433015236);
							break;
					}
					_event_manager_pop_event(1433015236);
					break;
				case -1340543710:
					func_638(Var0, Var0.f_2);
					_event_manager_pop_event(1433015236);
					break;
				case 922460030:
					_event_manager_pop_event(1433015236);
					break;
				case -2075827635:
					_event_manager_pop_event(1433015236);
					break;
				default:
					_event_manager_pop_event(1433015236);
					break;
			}
		}
	}
}

void func_411(var uParam0, var uParam1)
{
	func_639(0f);
	if (!func_211(&(uParam1->f_93.f_3)))
	{
		func_273(&(uParam1->f_93.f_3));
	}
	bVar0 = func_277(&(uParam1->f_93.f_3), 10000);
	if (func_640(uParam1) != 2 && !bVar0)
	{
		return;
	}
	func_641(uParam0, &(uParam1->f_93));
	func_76(&(uParam1->f_93), 1);
}

void func_412(var uParam0)
{
	if (func_642())
	{
		func_54(1);
		func_643();
	}
	if (func_53(255))
	{
		return;
	}
	func_76(uParam0, 2);
	func_273(&(uParam0->f_3));
}

void func_413(var uParam0)
{
	if (!func_137(8))
	{
		func_443(&(uParam0->f_93));
	}
	bVar0 = func_277(&(uParam0->f_93.f_3), 30000);
	if (!func_128(&(uParam0->f_93), 256) && !bVar0)
	{
		if (!func_644(func_130()))
		{
			return;
		}
		if (!_0x5ac0944c156e5f44("MS_MP001_U_07P_MPLOBBY_BASE"))
		{
			_0x7c334ff4d9215912("MS_MP001_U_07P_MPLOBBY_BASE");
			return;
		}
		if (!func_645())
		{
			return;
		}
	}
	if (!func_646() && !bVar0)
	{
		return;
	}
	if (!func_647())
	{
		if (!func_648(&(uParam0->f_93)) && !bVar0)
		{
			return;
		}
	}
	if (!func_649(uParam0) && !bVar0)
	{
		return;
	}
	func_650();
	if (!func_651(16))
	{
		func_652(1, func_326(Global_1572887->f_106.f_11), 0);
	}
	func_255();
	func_273(&(uParam0->f_93.f_3));
	func_76(&(uParam0->f_93), 3);
}

void func_414(var uParam0)
{
	bVar0 = func_277(&(uParam0->f_3), 10000);
	if (!func_128(uParam0, 1) && !bVar0)
	{
		return;
	}
	if (func_651(2) && !bVar0)
	{
		return;
	}
	func_273(&(uParam0->f_3));
	func_177(2, 0, 0, 1);
	func_76(uParam0, 4);
}

void func_415(var uParam0)
{
	func_653();
	if (!func_137(8))
	{
		func_443(&(uParam0->f_93));
	}
	if (func_654(255) != 1)
	{
		return;
	}
	if (!func_651(2048))
	{
		if (!is_screen_faded_out())
		{
			if (!is_screen_fading_out())
			{
				do_screen_fade_out(500);
			}
			return;
		}
	}
	if (func_655())
	{
		func_656(0, 1, 0, 0, 0, 0, 0, 0, 0);
		return;
	}
	iVar0 = player_ped_id();
	clear_ped_tasks_immediately(iVar0, false, true);
	_remove_ped_from_mount(iVar0, true, false);
	detach_entity(iVar0, true, true);
	if (is_ped_in_any_vehicle(iVar0, false))
	{
		_0xe0b61ed8bb37712f(iVar0);
	}
	set_focus_pos_and_vel(*uParam0->f_93.f_4033[0], 0f, 0f, 0f);
	set_entity_coords(iVar0, *uParam0->f_93.f_4033[0] + Vector(0f, -7.5f, -7.5f), false, false, true, true);
	freeze_entity_position(iVar0, true);
	func_470(&(uParam0->f_93), 64);
	if (!_0x513f8aa5bf2f17cf(*uParam0->f_93.f_4033[0], 250f, 0))
	{
		return;
	}
	func_470(&(uParam0->f_93), 2);
	func_273(&(uParam0->f_93.f_3));
	func_76(&(uParam0->f_93), 5);
}

void func_416(var uParam0, var uParam1, var uParam2)
{
	func_653();
	if (!func_137(8))
	{
		func_443(&(uParam2->f_93));
	}
	if (!_0x0909f71b5c070797() && !func_277(&(uParam2->f_93.f_3), 20000))
	{
		return;
	}
	_0x5a8b01199c3e79c3();
	func_129(&(uParam2->f_93), 2);
	if (!func_647())
	{
		start_anim_scene(uParam2->f_93.f_4030);
	}
	if (!func_657(uParam2) && !func_277(&(uParam2->f_93.f_3), 20000))
	{
		return;
	}
	if (func_128(&(uParam2->f_93), 256))
	{
		set_anim_scene_origin(uParam2->f_93.f_4030, _get_scenario_point_coords(&(uParam2->f_93.f_4033[0]->f_20[0]), true), 0f, 0f, _get_scenario_point_heading(&(uParam2->f_93.f_4033[0]->f_20[0]), true), 2);
	}
	func_658(uParam0, uParam1, uParam2);
	func_76(&(uParam2->f_93), 6);
}

void func_417(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_659(uParam0, uParam1, uParam2);
	func_660(uParam0, uParam2);
	if (!func_137(8))
	{
		func_443(&(uParam2->f_93));
		func_661(uParam0, uParam1, uParam2);
	}
	if (func_82(uParam0) > 0 && !func_53(255))
	{
		if (!func_15(&(uParam2->f_10), 512))
		{
			func_662(&(uParam2->f_93));
		}
		if (!func_137(8) && !_is_loading_screen_active())
		{
			func_273(&(uParam2->f_93.f_3));
			func_444(uParam2, 500);
			func_76(&(uParam2->f_93), 8);
		}
		else
		{
			func_76(&(uParam2->f_93), 7);
		}
	}
}

void func_418(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_659(uParam0, uParam1, uParam2);
	func_660(uParam0, uParam2);
	if (!func_137(8) && !_is_loading_screen_active())
	{
		uParam2->f_93.f_5302 = Global_1296859->f_20;
		func_443(&(uParam2->f_93));
		func_273(&(uParam2->f_93.f_3));
		func_444(uParam2, 500);
		func_76(&(uParam2->f_93), 8);
	}
	else if (_is_loading_screen_active())
	{
		func_652(0, -1, 0);
	}
}

void func_419(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_659(uParam0, uParam1, uParam2);
	func_660(uParam0, uParam2);
	bVar0 = func_277(&(uParam2->f_93.f_3), 10000);
	if (!func_663() && !bVar0)
	{
		return;
	}
	func_664(uParam2);
	if (get_number_of_streaming_requests() > 0 && !bVar0)
	{
		return;
	}
	if (func_40(uParam2, 256))
	{
		if (!func_211(&(uParam2->f_86)))
		{
			func_212(&(uParam2->f_86), 0);
		}
		else if (func_213(&(uParam2->f_86)) > 60000)
		{
			func_665(50, 1);
		}
		return;
	}
	if (!func_211(&(uParam2->f_93.f_5328)))
	{
		func_212(&(uParam2->f_93.f_5328), 0);
		return;
	}
	else if (func_213(&(uParam2->f_93.f_5328)) < 5000)
	{
		return;
	}
	if (func_450(uParam0) == 1)
	{
		func_667(uParam2, func_666(uParam0), 1, 1);
	}
	else
	{
		if (uParam2->f_93.f_6 >= 0 && uParam2->f_93.f_6 < 8)
		{
			func_667(uParam2, func_469(uParam0, uParam2->f_93.f_6), 1, 1);
		}
		iVar1 = func_234(uParam0, player_id());
		bVar2 = uParam2->f_93.f_6 == iVar1;
		if (!bVar2)
		{
			if (!func_211(&(uParam2->f_83)))
			{
				func_212(&(uParam2->f_83), 0);
			}
			else if (func_213(&(uParam2->f_83)) > 60000)
			{
				func_665(50, 2);
			}
			func_635(uParam0, uParam1, uParam2, func_439(uParam0), iVar1);
			return;
		}
	}
	func_656(0, 1, 0, 0, 0, 0, 0, 0, 0);
	func_668(0);
	func_669(0, -1, 0);
	func_650();
	_0xa565fac215cbc77d();
	do_screen_fade_in(1000);
	_hide_hud_component(481761311);
	_hide_hud_component(439038017);
	_0x9b1fc259187c97c0("lobby");
	_0x9b8d5d4cb8af58b3(1769811557);
	iVar3 = get_player_index();
	if (func_30((*uParam1)[participant_id_to_int()]) >= 8)
	{
		if (func_149(iVar3, 32768))
		{
			func_76(&(uParam2->f_93), 9);
		}
		else
		{
			func_76(&(uParam2->f_93), 10);
		}
	}
	else
	{
		func_76(&(uParam2->f_93), 9);
	}
}

void func_420(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_659(uParam0, uParam1, uParam2);
	func_660(uParam0, uParam2);
	func_661(uParam0, uParam1, uParam2);
	func_443(&(uParam2->f_93));
}

void func_421(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_660(uParam0, uParam2);
	func_661(uParam0, uParam1, uParam2);
	if (uParam2->f_93.f_5331 == -1)
	{
		uParam2->f_93.f_5331 = func_234(uParam0, player_id());
	}
}

void func_422(var uParam0, var uParam1)
{
	func_653();
	func_660(uParam0, uParam1);
	if (is_screen_faded_out())
	{
		func_297(&(uParam1->f_93), uParam1->f_93.f_5297);
		func_76(&(uParam1->f_93), 12);
	}
}

void func_423(var uParam0, var uParam1, var uParam2)
{
	func_653();
	func_659(uParam0, uParam1, uParam2);
	func_660(uParam0, uParam2);
	func_661(uParam0, uParam1, uParam2);
	do_screen_fade_in(125);
	func_76(&(uParam2->f_93), 9);
}

int func_424(int iParam0)
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

int func_425(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

void func_426(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (!func_77(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_78((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_427()
{
	disable_script_brain_set(4);
}

void func_428()
{
	disable_script_brain_set(1);
}

bool func_429(int iParam0, int iParam1)
{
	return is_bit_set(Global_3145858->f_49704[iParam0]->f_3, iParam1);
}

int func_430(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_49703)
	{
		if (is_bit_set(Global_3145858->f_49704[iVar0]->f_3, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_431(int iParam0, var uParam1, var uParam2)
{
	(*uParam1)[participant_id_to_int()]->f_29 = iParam0;
	if (iParam0 < 0 || iParam0 >= 18)
	{
		return;
	}
	if (uParam2->f_10.f_21.f_2 != -504335712)
	{
		return;
	}
	func_670(Global_3145858->f_49704[iParam0]->f_105);
}

int func_432(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = func_671(uParam1, player_id());
	iVar4 = participant_id_to_int();
	if (iVar3 < 0)
	{
		return 0;
	}
	switch (uParam0->f_10.f_21.f_2)
	{
		case -504335712:
			if ((*uParam1)[iVar4]->f_29 >= 0)
			{
				iVar1 = &Global_3145858->f_49704[(*uParam1)[iVar4]->f_29]->f_8[iVar3];
			}
			if (iVar1 >= 0)
			{
				iVar0 = &Global_524288->f_135748[iVar1];
			}
			break;
		case 395262693:
			iVar0 = Global_2359296->f_74[iVar3]->f_1;
			break;
	}
	iVar2 = func_672(iVar0, 1);
	if (iVar2 <= 0 || iVar2 >= 31)
	{
		return 0;
	}
	return func_673(iVar0, uParam2, &(uParam2->f_1), iVar3, 0, -1);
}

bool func_433(int iParam0)
{
	if (iParam0 == 239524244)
	{
		return true;
	}
	return false;
}

int func_434(int iParam0, bool bParam1)
{
	if (!func_435(iParam0))
	{
		return 0;
	}
	func_674(bParam1);
	return 1;
}

bool func_435(int iParam0)
{
	if (!func_152(32))
	{
		func_675(&(Global_1952637->f_2365));
		func_313(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_676(*iParam0))
		{
			if (func_152(32))
			{
				func_46(get_player_ped(player_id()), 1);
			}
			return false;
		}
		func_157(&(Global_1952637->f_2365));
		if (!func_677(&(Global_1952637->f_1556), *iParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_152(32))
			{
				func_46(get_player_ped(player_id()), 1);
			}
			return false;
		}
		func_156(&(Global_1952637->f_1556));
	}
	func_153(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *iParam0;
	Global_1139381->f_4779 = iParam0->f_1;
	func_153(30, 0, 0, 0, 0);
	func_153(27, 0, 0, 0, 0);
	func_153(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return true;
}

void func_436(int iParam0)
{
	func_283(Global_1293345, iParam0);
}

void func_437(bool bParam0)
{
	if (bParam0)
	{
		Global_1940085->f_9 = 0f;
	}
	Global_1940085->f_8 = 0f;
	Global_1940085->f_15.f_1 = 0f;
	Global_1940085->f_15 = 0f;
	Global_1940085->f_15.f_9 = 0f;
	Global_1940085->f_15.f_8 = 0f;
	Global_1940085->f_15.f_10 = 0;
	if (does_entity_exist(Global_34))
	{
		_0x06d26a96ca1bca75(Global_34, 10, 0f, 0);
		set_ped_is_drunk(Global_34, false);
		_0x406ccf555b04fad3(Global_34, 0, 0f);
	}
	func_678(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_679();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

void func_438(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

int func_439(var uParam0)
{
	return func_450(uParam0);
}

void func_440(var uParam0, int iParam1)
{
	func_680(uParam0, iParam1);
	func_681(uParam0->f_17, iParam1);
}

int func_441(var uParam0)
{
	if (!func_682(uParam0))
	{
		return 0;
	}
	if (func_148(255))
	{
		_0x0ae241a4a9adeeec(1);
		return 1;
	}
	func_23(&((*Global_263042)[network_player_id_to_int()]->f_1), 8388608);
	Global_265377->f_124517.f_71 = { (*Global_263042)[network_player_id_to_int()]->f_1 };
	func_683(&(Global_265377->f_124517.f_71));
	func_684();
	func_685();
	func_686();
	func_687();
	func_688();
	func_689();
	func_690();
	func_691();
	func_692();
	func_693();
	func_239(2);
	if (!func_15(&(Global_265377->f_124517.f_71), 2097152))
	{
		func_694(3);
	}
	else
	{
		func_239(4);
		func_694(4);
	}
	_0x0ae241a4a9adeeec(1);
	return 1;
}

void func_442(var uParam0, bool bParam1)
{
	switch (uParam0->f_93.f_29)
	{
		case -463710139:
			if (bParam1)
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_STABLE_TOOLTIP");
			}
			break;
		case -993924856:
			if (bParam1)
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_INVITE_PLAYERS_TOOLTIP");
			}
			break;
		case -900772831:
			if (bParam1)
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_QUIT_TO_FREEROAM_TOOLTIP");
			}
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		_databinding_write_data_string(uParam0->f_93.f_30.f_9, sVar0);
	}
}

void func_443(var uParam0)
{
	if (func_128(uParam0, 512))
	{
		func_695(uParam0);
		return;
	}
	iVar0 = func_696(uParam0);
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 1632247697;
	sVar4 = "";
	sVar5 = "";
	iVar6 = uParam0->f_5297;
	if (!func_128(uParam0, 256))
	{
		iVar7 = func_130();
		switch (iVar7)
		{
			case 924267974:
				uParam0->f_5303 = 1;
				if (func_697(110))
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 1500834021;
					sVar5 = "misty_MP_Pred";
					if (iVar6 == 0)
					{
						sVar4 = "mp_lobby_hrtlnds_night_predator_team1";
						uParam0->f_5304 = { 0.134f, 0.188f, 1f };
						uParam0->f_5310 = 718.25f;
						uParam0->f_5307 = { 2210.157f, 1737.223f, -715.213f };
					}
					else
					{
						sVar4 = "mp_lobby_hrtlnds_night_predator_team2";
						uParam0->f_5304 = { 0.449f, -0.559f, 1f };
						uParam0->f_5310 = 383.5f;
						uParam0->f_5307 = { 2255.112f, 1625.943f, -798.235f };
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iVar3 = 821931868;
							iVar1 = 8;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_hrtlnds_day_team1";
								uParam0->f_5304 = { 0.346f, -0.137f, 1f };
								uParam0->f_5310 = 150.5f;
								uParam0->f_5307 = { 3848.058f, 3534.413f, -416.348f };
							}
							else
							{
								sVar4 = "mp_lobby_hrtlnds_day_team2";
								uParam0->f_5304 = { -0.04f, -0.74f, 1f };
								uParam0->f_5310 = 323.25f;
								uParam0->f_5307 = { 1438.733f, 2201.597f, -137.019f };
							}
							break;
						case 1:
							iVar3 = 821931868;
							iVar1 = 17;
							if (iVar6 == 0)
							{
								iVar2 = 0;
								sVar4 = "mp_lobby_hrtlnds_dusk_team1";
								uParam0->f_5304 = { 0.346f, -0.137f, 1f };
								uParam0->f_5310 = 840.5f;
								uParam0->f_5307 = { 3848.058f, 3534.413f, -416.348f };
							}
							else
							{
								iVar2 = 30;
								sVar4 = "mp_lobby_hrtlnds_dusk_team2";
								uParam0->f_5304 = { -0.04f, -0.74f, 1f };
								uParam0->f_5310 = 652f;
								uParam0->f_5307 = { 1438.733f, 2201.597f, -137.019f };
							}
							break;
						case 2:
							iVar1 = 0;
							if (iVar6 == 0)
							{
								iVar3 = 433385945;
								sVar4 = "mp_lobby_hrtlnds_night_team1";
								uParam0->f_5304 = { 0.311f, -0.733f, 1f };
								uParam0->f_5310 = 666.25f;
								uParam0->f_5307 = { 2599.28f, 3544.22f, -338.405f };
							}
							else
							{
								iVar3 = 433385945;
								sVar4 = "mp_lobby_hrtlnds_night_team2";
								uParam0->f_5304 = { 0.372f, -0.731f, 1f };
								uParam0->f_5310 = 484.25f;
								uParam0->f_5307 = { 2651.665f, 3605.552f, -347.812f };
							}
							break;
					}
				}
				break;
			case 2096114765:
				if (func_697(110))
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 1500834021;
					sVar5 = "misty_MP_Pred";
					if (iVar6 == 0)
					{
						sVar4 = "mp_lobby_swamps_night_predator_team1";
					}
					else
					{
						sVar4 = "mp_lobby_swamps_night_predator_team2";
					}
				}
				else
				{
					iVar3 = -702816767;
					switch (iVar0)
					{
						case 0:
							uParam0->f_5303 = 1;
							iVar1 = 9;
							uParam0->f_5310 = 2000f;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_swamps_day_team1";
							}
							else
							{
								sVar4 = "mp_lobby_swamps_day_team2";
							}
							break;
						case 1:
							uParam0->f_5303 = 1;
							iVar1 = 19;
							uParam0->f_5310 = 2000f;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_swamps_dusk_team1";
							}
							else
							{
								sVar4 = "mp_lobby_swamps_dusk_team2";
							}
							break;
						case 2:
							if (iVar6 == 0)
							{
								iVar1 = 1;
								sVar4 = "mp_lobby_swamps_night_team1";
							}
							else
							{
								iVar1 = 2;
								sVar4 = "mp_lobby_swamps_night_team2";
							}
							break;
					}
				}
				break;
			case 254481872:
				switch (iVar0)
				{
					case 0:
						iVar3 = 603685163;
						iVar1 = 7;
						if (iVar6 == 0)
						{
							sVar4 = "mp_lobby_snow_day_team1";
						}
						else
						{
							sVar4 = "mp_lobby_snow_day_team2";
						}
						break;
					case 1:
						iVar3 = 603685163;
						iVar1 = 19;
						if (iVar6 == 0)
						{
							sVar4 = "mp_lobby_snow_dusk_team1";
						}
						else
						{
							sVar4 = "mp_lobby_snow_dusk_team2";
						}
						break;
					case 2:
						iVar3 = 725623432;
						iVar1 = 0;
						if (iVar6 == 0)
						{
							sVar4 = "mp_lobby_snow_night_team1";
						}
						else
						{
							sVar4 = "mp_lobby_snow_night_team2";
						}
						break;
				}
				break;
			case 1984181016:
				if (func_697(110))
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = -702816767;
					sVar5 = "fog_MP_Pred";
					if (iVar6 == 0)
					{
						sVar4 = "mp_lobby_desert_night_predator_team1";
					}
					else
					{
						sVar4 = "mp_lobby_desert_night_predator_team2";
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iVar3 = -173507739;
							iVar1 = 12;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_desert_day_team1";
							}
							else
							{
								sVar4 = "mp_lobby_desert_day_team2";
							}
							break;
						case 1:
							uParam0->f_5303 = 1;
							iVar3 = 1632247697;
							iVar1 = 19;
							iVar2 = 30;
							uParam0->f_5310 = 2000f;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_desert_dusk_team1";
							}
							else
							{
								sVar4 = "mp_lobby_desert_dusk_team2";
							}
							break;
						case 2:
							iVar3 = -173507739;
							iVar1 = 0;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_desert_night_team1";
							}
							else
							{
								sVar4 = "mp_lobby_desert_night_team2";
							}
							break;
					}
				}
				break;
			case 511673431:
				uParam0->f_5303 = 1;
				if (func_697(110))
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 1500834021;
					sVar5 = "misty_MP_Pred";
					if (iVar6 == 0)
					{
						sVar4 = "mp_lobby_forest_night_predator_team1";
						uParam0->f_5304 = { -0.152f, -0.369f, 1f };
						uParam0->f_5310 = 30f;
						uParam0->f_5307 = { 2672.92f, 591.817f, -1567.185f };
					}
					else
					{
						sVar4 = "mp_lobby_forest_night_predator_team2";
						uParam0->f_5304 = { 0.465f, -0.201f, 1f };
						uParam0->f_5310 = 160f;
						uParam0->f_5307 = { 2783.962f, 316.99f, -1770.011f };
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							iVar3 = 433385945;
							iVar1 = 12;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_forest_day_team1";
								uParam0->f_5304 = { 0.524f, 0.676f, 1f };
								uParam0->f_5310 = 584.75f;
								uParam0->f_5307 = { 1422.197f, 2282.412f, -526.53f };
							}
							else
							{
								sVar4 = "mp_lobby_forest_day_team2";
								uParam0->f_5304 = { 0.081f, 0.023f, 1f };
								uParam0->f_5310 = 647f;
								uParam0->f_5307 = { 3612.022f, -369.765f, -1258.954f };
							}
							break;
						case 1:
							iVar3 = 433385945;
							iVar1 = 17;
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_forest_dusk_team1";
								uParam0->f_5304 = { 0.43f, 0.952f, 1f };
								uParam0->f_5310 = 828.25f;
								uParam0->f_5307 = { 1470.963f, 2339.517f, -587.707f };
							}
							else
							{
								sVar4 = "mp_lobby_forest_dusk_team2";
								uParam0->f_5304 = { 0.426f, -0.09f, 1f };
								uParam0->f_5310 = 554f;
								uParam0->f_5307 = { 3787.415f, -164.401f, -1333.37f };
							}
							break;
						case 2:
							iVar3 = 821931868;
							iVar1 = 0;
							uParam0->f_5307 = { 1772.679f, 1581.341f, 3998.05f };
							if (iVar6 == 0)
							{
								sVar4 = "mp_lobby_forest_night_team1";
								uParam0->f_5304 = { -0.632f, 0.056f, 1f };
								uParam0->f_5310 = 182.5f;
							}
							else
							{
								sVar4 = "mp_lobby_forest_night_team2";
								uParam0->f_5304 = { -0.632f, 0.056f, 1f };
								uParam0->f_5310 = 391.5f;
							}
							break;
					}
				}
				break;
			default:
				return;
		}
		_network_clock_time_override(iVar1, iVar2, 0, 0, true);
		_set_weather_type(iVar3, true, true, false, 0f, false);
		if (!is_string_null_or_empty(sVar5))
		{
			switch (iVar3)
			{
				case 1500834021:
					_0x3373779baf7caf48("MISTY", sVar5);
					break;
				case -702816767:
					_0x3373779baf7caf48("FOG", sVar5);
					break;
			}
		}
		set_timecycle_modifier(sVar4);
		_0xff8018c778349234(0);
		_0xf01d21df39554115(0);
	}
	else
	{
		iVar1 = Global_3145858->f_238;
		iVar2 = Global_3145858->f_239;
		iVar3 = func_698(Global_3145858->f_237);
		sVar4 = "mp_coop_lobby_generic";
		if (iVar1 >= 0 && iVar2 >= 0)
		{
			_network_clock_time_override(iVar1, iVar2, 0, 0, true);
		}
		if (iVar3 != 0)
		{
			_set_weather_type(iVar3, true, true, false, 0f, false);
		}
		set_timecycle_modifier(sVar4);
	}
	func_695(uParam0);
	func_470(uParam0, 512);
}

void func_444(var uParam0, int iParam1)
{
	if (does_cam_exist(uParam0->f_93.f_4031))
	{
		vVar0 = { *uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_3[uParam0->f_93.f_5320] };
		vVar3 = { uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_3[uParam0->f_93.f_5320]->f_3 };
		fVar6 = uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_3[uParam0->f_93.f_5320]->f_6;
		if (!is_cam_active(uParam0->f_93.f_4031))
		{
			set_cam_active(uParam0->f_93.f_4031, true);
			render_script_cams(true, false, 3000, true, false, 0);
			set_focus_pos_and_vel(vVar0, vVar3);
			func_470(&(uParam0->f_93), 64);
			if (!func_149(player_id(), 65536))
			{
				func_699(uParam0);
			}
		}
		if (is_cam_interpolating(uParam0->f_93.f_4031))
		{
			set_cam_params(uParam0->f_93.f_4031, get_cam_coord(uParam0->f_93.f_4031), get_cam_rot(uParam0->f_93.f_4031, 2), get_cam_fov(uParam0->f_93.f_4031), 0, 1, 1, 2, 1, 0);
		}
		set_cam_params(uParam0->f_93.f_4031, vVar0, vVar3, fVar6, iParam1, 1, 0, 2, 1, 0);
		vVar7 = { _get_scenario_point_coords(&(uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_20[0]), true) + Vector(0.75f, 0f, 0f) };
		iVar10 = uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_20[0]->f_1;
		if (iVar10 != -1 && does_entity_exist(uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_325[iVar10]->f_3))
		{
			vVar7 = { get_ped_bone_coords(uParam0->f_93.f_4033[uParam0->f_93.f_5297]->f_325[iVar10]->f_3, 16351, 0f, 0f, 0f) };
		}
		_0x11f32bb61b756732(uParam0->f_93.f_4031, vdist(vVar0, vVar7));
		func_700(&(uParam0->f_93));
		uParam0->f_93.f_8 = -1;
	}
}

bool func_445()
{
	if (!is_thread_active(&(Global_1051252->f_16[5]), false))
	{
		return false;
	}
	if (!network_is_script_active("net_ugc_global_loader", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&(Global_1051252->f_16[5]));
}

var func_446(var uParam0, var uParam1)
{
	iVar0 = network_get_participant_index(player_id());
	iVar1 = func_234(uParam0, player_id());
	if ((*uParam1)[iVar0]->f_12 >= uParam0->f_3)
	{
		return (*uParam1)[iVar0]->f_2;
	}
	if (!func_402(uParam0, iVar1))
	{
		(*uParam1)[iVar0]->f_12++;
		return (*uParam1)[iVar0]->f_2;
	}
	(*uParam1)[iVar0]->f_2 = 0;
	(*uParam1)[iVar0]->f_14 = 0;
	iVar3 = 0;
	while (iVar3 < 8)
	{
		(*uParam1)[iVar0]->f_15[iVar3] = 0;
		(*uParam1)[iVar0]->f_3[iVar3] = 0;
		iVar3++;
	}
	iVar2 = 0;
	while (iVar2 < network_get_max_num_participants())
	{
		if (iVar0 == iVar2)
		{
		}
		else
		{
			iVar6 = int_to_participantindex(iVar2);
			if (!network_is_participant_active(iVar6))
			{
			}
			else
			{
				iVar5 = network_get_player_index(iVar6);
				if (!network_is_player_connected(iVar5))
				{
				}
				else
				{
					iVar4 = func_378(iVar5);
					if (!func_401(iVar4))
					{
					}
					else
					{
						iVar3 = &uParam0->f_32[iVar4];
						if (!func_402(uParam0, iVar3))
						{
						}
						else
						{
							network_handle_from_player(iVar5, &uVar7);
							bVar14 = iVar3 == iVar1;
							bVar15 = false;
							if (network_is_friend(&uVar7))
							{
								bVar15 = true;
								func_701(&((*uParam1)[iVar0]->f_14), 3, -1);
								if (bVar14)
								{
									func_701((*uParam1)[iVar0]->f_15[iVar1], 3, iVar1);
									(*uParam1)[iVar0]->f_2 += 8;
								}
								else
								{
									func_701((*uParam1)[iVar0]->f_15[iVar3], 3, iVar3);
									(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 4);
									(*uParam1)[iVar0]->f_3[iVar3] = &(*uParam1)[iVar0]->f_3[iVar3] + 8;
								}
							}
							if (_0x11820d1ae80dea39(&(Global_1296859->f_1), &uVar7))
							{
								if (bVar15)
								{
									func_701(&((*uParam1)[iVar0]->f_14), 5, -1);
									if (bVar14)
									{
										func_701((*uParam1)[iVar0]->f_15[iVar1], 5, iVar1);
										(*uParam1)[iVar0]->f_2 += 12;
									}
									else
									{
										func_701((*uParam1)[iVar0]->f_15[iVar3], 5, iVar3);
										(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 6);
										(*uParam1)[iVar0]->f_3[iVar3] = &(*uParam1)[iVar0]->f_3[iVar3] + 12;
									}
								}
								else if (bVar14)
								{
									func_701((*uParam1)[iVar0]->f_15[iVar1], 4, iVar1);
									(*uParam1)[iVar0]->f_2 += 10;
								}
								else
								{
									func_701((*uParam1)[iVar0]->f_15[iVar3], 4, iVar3);
									(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 5);
									(*uParam1)[iVar0]->f_3[iVar3] = &(*uParam1)[iVar0]->f_3[iVar3] + 10;
								}
							}
							if (_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar5))
							{
								func_701(&((*uParam1)[iVar0]->f_14), 6, -1);
								if (bVar14)
								{
									func_701((*uParam1)[iVar0]->f_15[iVar1], 6, iVar1);
									(*uParam1)[iVar0]->f_2 += 15;
								}
								else
								{
									func_701((*uParam1)[iVar0]->f_15[iVar3], 6, iVar3);
									(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 7);
									(*uParam1)[iVar0]->f_3[iVar3] = &(*uParam1)[iVar0]->f_3[iVar3] + 15;
								}
							}
						}
					}
				}
			}
		}
		iVar2++;
	}
	if (func_402(uParam0, (*uParam1)[iVar0]->f_28))
	{
		func_701(&((*uParam1)[iVar0]->f_14), 2, -1);
		if (iVar1 == (*uParam1)[iVar0]->f_28)
		{
			func_701((*uParam1)[iVar0]->f_15[iVar1], 2, iVar1);
			(*uParam1)[iVar0]->f_2 += 8;
		}
		else
		{
			func_701((*uParam1)[iVar0]->f_15[(*uParam1)[iVar0]->f_28], 2, (*uParam1)[iVar0]->f_28);
			(*uParam1)[iVar0]->f_2 = ((*uParam1)[iVar0]->f_2 - 4);
			(*uParam1)[iVar0]->f_3[(*uParam1)[iVar0]->f_28] = &(*uParam1)[iVar0]->f_3[(*uParam1)[iVar0]->f_28] + 8;
		}
	}
	if (func_402(uParam0, Global_1071686->f_10))
	{
		if (iVar1 == Global_1071686->f_10)
		{
			(*uParam1)[iVar0]->f_2 += 3;
			func_701((*uParam1)[iVar0]->f_15[iVar1], 1, iVar1);
			func_701(&((*uParam1)[iVar0]->f_14), 1, iVar1);
		}
	}
	(*uParam1)[iVar0]->f_12++;
	return (*uParam1)[iVar0]->f_2;
}

void func_447(var uParam0, int iParam1)
{
	if (!func_147(uParam0, 0))
	{
		return;
	}
	iParam1 = func_346(iParam1, 0, 17);
	(*Global_263042)[&Global_1296859]->f_1.f_36 = iParam1;
}

void func_448(int iParam0, int iParam1)
{
	if (!func_148(255))
	{
		return;
	}
	if (func_702() != iParam0)
	{
		return;
	}
	iParam1 = func_346(iParam1, 0, 17);
	Global_265377->f_124517.f_71.f_36 = iParam1;
}

void func_449(var uParam0, int iParam1, bool bParam2)
{
	func_703(uParam0, iParam1, bParam2);
	func_704(uParam0->f_17, iParam1, bParam2);
}

int func_450(var uParam0)
{
	return uParam0->f_516;
}

void func_451(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_372() - iParam1);
	func_347(uParam0, 1);
	func_348(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_452(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1;
			return 1;
		case 2:
			*uParam1 = 2;
			return 1;
		case 3:
			*uParam1 = 3;
			return 1;
		case 4:
			*uParam1 = 4;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_453(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 3;
			return true;
		case 2:
			*uParam1 = 5;
			return true;
		case 3:
			*uParam1 = 10;
			return true;
		case 4:
			*uParam1 = 15;
			return true;
		case 5:
			*uParam1 = 20;
			return true;
		default:
			break;
	}
	return false;
}

int func_454(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 300000;
			return 1;
		case 2:
			*uParam1 = 600000;
			return 1;
		case 3:
			*uParam1 = 900000;
			return 1;
		case 4:
			*uParam1 = 1200000;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_455(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = -1;
			*uParam2 = -1;
			return 1;
		case 2:
			*uParam1 = 7;
			*uParam2 = 0;
			return 1;
		case 3:
			*uParam1 = 12;
			*uParam2 = 0;
			return 1;
		case 4:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_456(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 1;
			return 1;
		case 2:
			*uParam1 = 3;
			*uParam2 = 1632247697;
			return 1;
		case 3:
			*uParam1 = 3;
			*uParam2 = 1420204096;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_457(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 0;
			return 1;
		case 2:
			*uParam1 = 1;
			return 1;
		case 3:
			*uParam1 = 2;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_458(int iParam0)
{
	func_705(&(Global_524288->f_6), iParam0);
}

void func_459(int iParam0)
{
	func_706(&(Global_524288->f_6), iParam0);
}

char* func_460(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_461(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_462(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_463()
{
	return func_340() == 4;
}

var func_464(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

var func_465(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_464(iParam0);
}

void func_466(var uParam0, int iParam1)
{
	switch (uParam0->f_10.f_21.f_2)
	{
		case -504335712:
			func_707(&(uParam0->f_93.f_3128), iParam1, &(Global_3145858->f_57980));
			break;
		case 395262693:
			func_707(&(uParam0->f_93.f_3128), iParam1, &(Global_3145858->f_57980));
			break;
		case -933924539:
			func_707(&(uParam0->f_93.f_3128), iParam1, &(Global_3145858->f_57980));
			break;
	}
}

var func_467(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_3;
		case 2:
			return uParam0->f_5;
		case 3:
			return uParam0->f_7;
		case 4:
			return uParam0->f_9;
		case 5:
			return uParam0->f_11;
		default:
			break;
	}
	return uVar0;
}

char* func_468(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Var0.f_9 = -1591664384;
			func_186(*uParam0->f_14[iParam1], &Var0, 1, 0, -1);
			return _create_var_string(0, Var0.f_4);
		case 4:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_EQUIPPED_COUNT", uParam0->f_169, uParam0->f_168);
		case 5:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_EQUIPPED_COUNT", uParam0->f_74, uParam0->f_73);
	}
	return _create_var_string(0, 0);
}

int func_469(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return 0;
	}
	return uParam0->f_7[iParam1]->f_1;
}

void func_470(var uParam0, int iParam1)
{
	func_78(&(uParam0->f_1), iParam1);
}

void func_471(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if ((iParam2 == 0 && iParam1 == uParam0->f_5297) && uParam0->f_2 == 306537471)
	{
		_uistatemachine_request_transition(1473691941, 927041140);
	}
	if (does_entity_exist(uParam0->f_4033[iParam1]->f_325[iParam2]->f_3))
	{
		func_299(iParam2);
		func_300(iParam2);
		func_301(iParam2);
		delete_ped(&(uParam0->f_4033[iParam1]->f_325[iParam2]->f_3));
		uParam0->f_4033[iParam1]->f_20[uParam0->f_4033[iParam1]->f_325[iParam2]->f_7]->f_1 = -1;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_4 = 0;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_7 = -1;
		uParam0->f_4033[iParam1]->f_325[iParam2] = 0;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_1 = 0;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_5 = 0;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_6 = 1;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_2 = 0;
		uParam0->f_4033[iParam1]->f_325[iParam2]->f_8 = 0;
	}
}

void func_472(int iParam0)
{
	if (!func_708(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

void func_473(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_mp_gamer_tag_active(Global_1071686->f_21952[iParam0]->f_2))
	{
		Global_1071686->f_21952[iParam0]->f_2 = uVar0;
		return;
	}
	iVar1 = get_frame_count();
	if (Global_1071686->f_21952.f_585 == iVar1 && !bParam1)
	{
		return;
	}
	Global_1071686->f_21952.f_585 = iVar1;
	if (network_is_player_active(int_to_playerindex(iParam0)))
	{
	}
	func_709(&(Global_1071686->f_21952[iParam0]->f_8));
	if (bParam2)
	{
		remove_mp_gamer_tag(&(Global_1071686->f_21952[iParam0]->f_2));
	}
	Global_1071686->f_21952[iParam0]->f_2 = uVar2;
	Global_1071686->f_21952[iParam0]->f_1 = 0;
	Global_1071686->f_21952[iParam0] = 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 1433607064;
		case 10:
			return 1759774748;
		case 11:
			return -467164220;
		case 12:
			return 1945913953;
		case 13:
			return 622326403;
		case 14:
			return 384587308;
		case 15:
			return 968661964;
		case 16:
			return 49496744;
		case 17:
			return 1495592714;
		case 18:
			return 2125588482;
		case 19:
			return 1866942769;
		case 20:
			return 757099750;
		case 21:
			return 661064591;
		case 22:
			return 1311562014;
		case 23:
			return 1435506115;
		case 24:
			return 1709487724;
		case 25:
			return 392315242;
		default:
			break;
	}
	return 0;
}

struct<2> func_475()
{
	return Global_265377->f_124517.f_71.f_53;
}

void func_476(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Var0 = { func_710(iParam0) };
	if (!func_478(Var0))
	{
		return;
	}
	func_711(0);
	func_712();
	func_479(Var0, 0, 2, 0, 0);
	Global_1900736->f_69 = 0;
	if (bParam1)
	{
		func_714(func_713(4, iParam0), 0);
	}
	func_715(iParam0);
	func_716(0);
}

bool func_477(struct<2> Param0)
{
	iVar0 = func_717(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_478(struct<2> Param0)
{
	iVar0 = func_717(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_479(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_325(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_478(Param0) && !func_477(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_184(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_717(Param0) == 3)
		{
			func_718(1, -1706799532);
		}
		else if (func_717(Param0) == 4)
		{
			func_718(0, -1706799532);
		}
	}
	if ((func_717(Param0) == 3 || func_717(Param0) == 1) || ((bParam5 && func_717(Param0) == 4) && _0x01f4d242765c6b24(func_184(Param0))))
	{
		if (iParam3 != -1)
		{
			func_719(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_719(Param0, 2, iParam4, 255, 0);
		}
	}
	func_720(Param0, 0);
	if (func_722(func_721(0), Param0))
	{
		func_723(1);
		func_724(0);
		func_725(0);
		func_726(1);
	}
	func_727(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_728(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_480(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_325(Param0))
	{
		return;
	}
	if (func_477(Param0))
	{
		func_479(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_729(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_730((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_730((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_481(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 != 0)
	{
		if (bParam2)
		{
			texture_download_release(*uParam0);
		}
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	if (bParam1)
	{
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = 0;
}

void func_482(var uParam0, bool bParam1)
{
	if (*uParam0 != 0)
	{
		texture_download_release(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {vVar4}, 8);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_12), {Var7}, 8);
		uParam0->f_20 = { Var11 };
	}
}

void func_483(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 5;
	uParam0->f_2 = -1;
	func_731(&(uParam0->f_3));
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	StringCopy(&(uParam0->f_22), "", 24);
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	func_732(&(uParam0->f_29));
	func_733(&(uParam0->f_30));
	func_734(&(uParam0->f_32));
	func_735(&(uParam0->f_33));
	func_736(&(uParam0->f_35));
	func_737(&(uParam0->f_63));
}

void func_484(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { Var0 };
	StringCopy(&(uParam0->f_8), "", 64);
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 2147483647;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	func_731(&(uParam0->f_21));
	uParam0->f_26 = -1;
	StringCopy(&(uParam0->f_27), "", 24);
	uParam0->f_30 = 1;
	uParam0->f_31 = 1;
	uParam0->f_32 = 1;
	uParam0->f_33 = 32;
	uParam0->f_34 = 1;
	uParam0->f_35 = -2;
	uParam0->f_36 = 0;
	StringCopy(&(uParam0->f_37), "", 64);
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	func_737(&(uParam0->f_47));
	func_730(&(uParam0->f_53));
	func_738(&(uParam0->f_55));
	uParam0->f_60 = 0;
	uParam0->f_61 = { 0f, 0f, 0f };
}

void func_485()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

bool func_486(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_487(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

int func_488(int iParam0, int iParam1)
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

int func_489(int iParam0)
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

bool func_490(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_491(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

int func_492(int iParam0, int iParam1)
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

bool func_493(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_488(iParam0, 1)])->f_11 && iParam1) != 0;
}

void func_494(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_739(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_495(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_496(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

bool func_497(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return func_741(func_740(iParam0), iParam1);
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

int func_498(int iParam0)
{
	Var2 = -961687407;
	if (func_69() == -1)
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
	iVar1 = func_742(iParam0);
	func_743(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_743(iVar0, iVar1);
		}
	}
	return 1;
}

int func_499(int iParam0)
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

void func_500(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_488(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_488(iParam0, 1)])->f_11 || iParam1);
}

bool func_501(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_502(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_503(int iParam0)
{
	if (iParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_497(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_497(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_497(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_504(var uParam0, int iParam1)
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

int func_505(int iParam0)
{
	switch (iParam0)
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

int func_506(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_504(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_507(uParam0, uParam1, iVar0);
	return 1;
}

void func_507(var uParam0, var uParam1, int iParam2)
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

bool func_508(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_744(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_745(uParam0, bParam3);
	}
	return true;
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	if ((!func_501(uParam0, 1) || func_501(uParam0, 2)) || uParam0->f_6 < 0)
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
		func_746(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_504(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_747(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_748(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

int func_510(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_508(&Var0, iParam2, bParam3, bParam4, 6))
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

bool func_511(int iParam0)
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

int func_512(int iParam0)
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

int func_513(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_517(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_514(vector3 vParam0)
{
	iVar0 = func_749(vParam0, 0f, 0f, 0, 2);
	return func_749(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_515(vector3 vParam0)
{
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = vdist(vParam0, Global_1071686->f_23887.f_366[iVar0]->f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_516(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_517(struct<2> Param0, var uParam2)
{
	if (!func_325(Param0))
	{
		return false;
	}
	func_750(uParam2);
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

int func_518(bool bParam0)
{
	if (func_69() == -1)
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

bool func_519(var uParam0, int iParam1)
{
	return func_77(uParam0->f_6, iParam1);
}

void func_520(var uParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 32)
	{
		uParam0->f_32[iParam1] = -2;
		uParam0->f_32[iParam1]->f_1 = -1;
		uParam0->f_32[iParam1]->f_2 = -1;
		uParam0->f_32[iParam1]->f_3 = -1;
		uParam0->f_32[iParam1]->f_4 = -1;
		uParam0->f_32[iParam1]->f_5 = 0;
		uParam0->f_32[iParam1]->f_8 = 255;
	}
}

int func_521(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return -1;
	}
	return uParam0->f_32[iVar0]->f_2;
}

bool func_522(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_751(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

int func_523()
{
	return Global_1051252->f_12;
}

char* func_524()
{
	return "unnamed";
}

int func_525(int iParam0)
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

bool func_526(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_163(36, iParam0);
}

bool func_527(int iParam0)
{
	if (func_752(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_753(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_528(var uParam0, int iParam1)
{
	if (func_234(uParam0, iParam1) < 0)
	{
		return false;
	}
	if (!network_is_player_a_participant(iParam1))
	{
		return false;
	}
	iVar0 = network_get_participant_index(iParam1);
	iVar1 = iVar0;
	if (_0x0a79c81c418f5d38(&(uParam0->f_552), iVar1))
	{
		return false;
	}
	if (_0x0a79c81c418f5d38(&(uParam0->f_553), iVar1))
	{
		return false;
	}
	return true;
}

int func_529(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return -1;
	}
	return uParam0->f_32[iVar0]->f_1;
}

void func_530(var uParam0, int iParam1)
{
	iVar0 = func_378(iParam1);
	if (!func_401(iVar0))
	{
		return;
	}
	iVar1 = 255;
	func_404(uParam0, iParam1, &iVar1, 1);
	iVar2 = func_529(uParam0, iVar1);
	if (iVar1 == 255 || iVar2 == -1)
	{
		uParam0->f_32[iVar0]->f_1 = iVar0;
	}
	else
	{
		uParam0->f_32[iVar0]->f_1 = iVar2;
	}
}

void func_531(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_532(var uParam0)
{
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = int_to_playerindex(iVar2);
		iVar0 = func_378(iVar3);
		if (!func_401(iVar0))
		{
		}
		else
		{
			iVar1 = func_529(uParam0, iVar3);
			if (iVar1 > -1)
			{
				uParam0->f_321[iVar1] = &uParam0->f_321[iVar1] + 1;
				uParam0->f_321[iVar1]->f_2 = iVar1;
				uParam0->f_321[iVar1]->f_3 = func_234(uParam0, iVar3);
				uParam0->f_518[iVar1] = &uParam0->f_321[iVar1];
			}
		}
		iVar2++;
	}
}

bool func_533(var uParam0, int iParam1)
{
	iVar3 = uParam0->f_321[iParam1]->f_2;
	uParam0->f_517++;
	if (iVar3 < 0)
	{
		return true;
	}
	if (iVar3 >= 32)
	{
		return true;
	}
	if (&uParam0->f_321[iParam1] <= 1)
	{
		return true;
	}
	if (&uParam0->f_321[iParam1] > &uParam0->f_7[uParam0->f_321[iParam1]->f_3])
	{
		return true;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = int_to_playerindex(iVar0);
		if (func_401(func_378(iVar4)))
		{
			if (func_529(uParam0, iVar4) == iVar3)
			{
				iVar5[iVar1] = func_234(uParam0, iVar4);
				if (iVar1 == 0)
				{
					iVar2 = &iVar5[iVar1];
				}
				else if (iVar2 != &iVar5[iVar1])
				{
					uParam0->f_551 = iVar3;
					return false;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_534(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar5 = int_to_playerindex(iVar0);
		if (func_401(func_378(iVar5)))
		{
			if (func_529(uParam0, iVar5) == iParam1)
			{
				iVar1 = func_234(uParam0, iVar5);
				if (iVar1 >= 0 && iVar1 < 32)
				{
					Var6[iVar1] = &Var6[iVar1] + 1;
					Var6[iVar1]->f_3 = iVar1;
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	_0x7e300b5b86ab1d1a(&Var6, Var6, 6, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Var6[iVar0] >= 1)
		{
			iVar4 = (&Var6[iVar0] - iVar3);
			if ((uParam0->f_7[Var6[iVar0]->f_3]->f_1 + iVar4) <= &uParam0->f_7[Var6[iVar0]->f_3])
			{
				iVar2 = Var6[iVar0]->f_3;
			}
			else
			{
				iVar0++;
			}
			if (iVar2 > -1)
			{
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					iVar5 = int_to_playerindex(iVar0);
					if (func_401(func_378(iVar5)))
					{
						if (func_529(uParam0, iVar5) == iParam1 && func_234(uParam0, iVar5) != iVar2)
						{
							func_360(uParam0, iVar5, iVar2);
						}
					}
					iVar0++;
				}
			}
			uParam0->f_551 = -1;
			return true;
		}
	}
}

bool func_535(var uParam0, int iParam1, var uParam2)
{
	if (func_25(25))
	{
		return false;
	}
	iVar0 = uParam0->f_7[iParam1]->f_1;
	iVar1 = 0;
	iVar3 = 0;
	while (iVar3 <= (uParam0->f_516 - 1))
	{
		if (iVar3 != iParam1)
		{
			if (iVar0 < (uParam0->f_7[iVar3]->f_1 - 1) && func_754(uParam0, iVar3))
			{
				if (iVar1 < uParam0->f_7[iVar3]->f_1)
				{
					iVar1 = uParam0->f_7[iVar3]->f_1;
					*uParam2 = iVar3;
					iVar2 = 1;
				}
				else
				{
					iVar3++;
				}
				return iVar2;
			}
		}
	}
}

int func_536(var uParam0, int iParam1)
{
	fVar2 = 9999f;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_516 - 1))
	{
		if (iParam1 != -1 && iParam1 == iVar0)
		{
		}
		else
		{
			fVar3 = func_379(uParam0, iVar0);
			if (fVar3 < fVar2 && uParam0->f_7[iVar0]->f_1 > 0)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_537(var uParam0, int iParam1, int iParam2, var uParam3)
{
	iVar0 = uParam0->f_7[iParam1]->f_1;
	iVar1 = uParam0->f_7[iParam2]->f_1;
	iVar2 = uParam3;
	iVar3 = (iVar1 + iVar2);
	iVar4 = (iVar0 - iVar2);
	if (iVar3 > &uParam0->f_7[iParam2])
	{
		return false;
	}
	if (iVar4 <= 0)
	{
		return false;
	}
	if (iVar3 <= iVar4)
	{
		return true;
	}
	if (iVar3 == iVar4 + 1)
	{
		return true;
	}
	return false;
}

void func_538(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam0)[iVar0]->f_2 == iParam1)
		{
			(*uParam0)[iVar0]->f_4 = 1;
			(*uParam0)[iVar0]->f_5 = 1;
		}
		iVar0++;
	}
}

void func_539(var uParam0, int iParam1)
{
	func_285(&(uParam0->f_6), iParam1);
}

void func_540(var uParam0, int iParam1)
{
	uParam0->f_554 = iParam1;
}

int func_541(var uParam0)
{
	return uParam0->f_554;
}

void func_542(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		iVar2 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar2))
		{
			uParam0->f_32[iVar0]->f_3 = -1;
		}
		else
		{
			iVar1 = uParam0->f_32[iVar0]->f_4;
			if (iVar1 < 0 || iVar1 >= 18)
			{
				uParam0->f_32[iVar0]->f_3 = -1;
			}
			else
			{
				func_363(uParam0, &iVar0, &iVar1);
				uParam0->f_32[iVar0]->f_3 = iVar1;
			}
		}
		iVar0++;
	}
	uParam0->f_720 = -1;
	func_540(uParam0, 1);
}

void func_543(var uParam0)
{
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar3 = -1;
		if (uParam0->f_7[iVar2]->f_1 != 0)
		{
			iVar3 = 0;
		}
		iVar0 = 0;
		while (iVar0 < 18)
		{
			(*uParam0->f_555[iVar0])[iVar2] = iVar3;
			iVar0++;
		}
		iVar2++;
	}
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (uParam0->f_32[iVar0]->f_8 == 255)
		{
		}
		else
		{
			iVar4 = network_get_participant_index(uParam0->f_32[iVar0]->f_8);
			if (!func_14(iVar4))
			{
			}
			else if (!network_is_participant_active(iVar4))
			{
			}
			else
			{
				iVar2 = &uParam0->f_32[iVar0];
				if (iVar2 < 0 || iVar2 >= 8)
				{
				}
				else
				{
					iVar1 = uParam0->f_32[iVar0]->f_3;
					if (iVar1 < 0 || iVar1 >= 18)
					{
					}
					else
					{
						if (uParam0->f_555[iVar1][iVar2] == -1)
						{
							(*uParam0->f_555[iVar1])[iVar2] = 0;
						}
						(*uParam0->f_555[iVar1])[iVar2] = uParam0->f_555[iVar1][iVar2] + 1;
					}
				}
			}
		}
		iVar0++;
	}
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (!is_bit_set(Global_3145858->f_49704[iVar0]->f_3, iVar2))
			{
			}
			else
			{
				if ((Global_3145858->f_49704[iVar0]->f_86 > uParam0->f_555[iVar0][iVar2] || Global_3145858->f_49704[iVar0]->f_84 > uParam0->f_555[iVar0][iVar2]) && uParam0->f_555[iVar0][iVar2] != -1)
				{
					bVar5 = true;
					func_540(uParam0, 2);
				}
				else if (Global_3145858->f_49704[iVar0]->f_85 < uParam0->f_555[iVar0][iVar2] && uParam0->f_555[iVar0][iVar2] != -1)
				{
					bVar5 = true;
					func_540(uParam0, 3);
				}
				if (bVar5)
				{
					if (uParam0->f_718 == iVar0 && uParam0->f_719 == iVar2)
					{
						if (uParam0->f_720 == -1)
						{
							uParam0->f_720 = uParam0->f_555[uParam0->f_718][uParam0->f_719];
						}
						else if (uParam0->f_720 == uParam0->f_555[uParam0->f_718][uParam0->f_719])
						{
							func_540(uParam0, 4);
							return;
						}
					}
					else
					{
						uParam0->f_720 = -1;
					}
					uParam0->f_718 = iVar0;
					uParam0->f_719 = iVar2;
					return;
				}
			}
			iVar2++;
		}
		iVar0++;
	}
	func_540(uParam0, 4);
}

void func_544(var uParam0)
{
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iVar0 == uParam0->f_718)
		{
		}
		else if (Global_3145858->f_49704[iVar0]->f_86 != 0)
		{
		}
		else if (Global_3145858->f_49704[iVar0]->f_84 != 0 && Global_3145858->f_49704[iVar0]->f_84 <= uParam0->f_555[iVar0][uParam0->f_719])
		{
		}
		else if (uParam0->f_555[iVar0][uParam0->f_719] > iVar1)
		{
			iVar1 = uParam0->f_555[iVar0][uParam0->f_719];
			iVar2 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		func_540(uParam0, 1);
		return;
	}
	if (iVar2 != -1)
	{
		iVar0 = 0;
		while (iVar0 < network_get_max_num_participants())
		{
			iVar3 = int_to_participantindex(iVar0);
			if (!network_is_participant_active(iVar3))
			{
			}
			else if (uParam0->f_32[iVar0]->f_3 == iVar2 && &uParam0->f_32[iVar0] == uParam0->f_719)
			{
				uParam0->f_32[iVar0]->f_3 = uParam0->f_718;
				func_540(uParam0, 1);
				return;
			}
			iVar0++;
		}
	}
	func_540(uParam0, 1);
}

void func_545(var uParam0)
{
	iVar1 = 2147483647;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iVar0 == uParam0->f_718)
		{
		}
		else if (uParam0->f_555[iVar0][uParam0->f_719] >= Global_3145858->f_49704[iVar0]->f_85)
		{
		}
		else if (uParam0->f_555[iVar0][uParam0->f_719] < iVar1 && is_bit_set(Global_3145858->f_49704[iVar0]->f_3, uParam0->f_719))
		{
			iVar1 = uParam0->f_555[iVar0][uParam0->f_719];
			iVar2 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		func_540(uParam0, 1);
		return;
	}
	if (iVar2 != -1)
	{
		iVar0 = 0;
		while (iVar0 < network_get_max_num_participants())
		{
			if (uParam0->f_32[iVar0]->f_3 == uParam0->f_718 && &uParam0->f_32[iVar0] == uParam0->f_719)
			{
				uParam0->f_32[iVar0]->f_3 = iVar2;
				func_540(uParam0, 1);
				return;
			}
			iVar0++;
		}
	}
	func_540(uParam0, 1);
}

void func_546(var uParam0)
{
	if (is_bit_set(Global_3145858->f_226, 9))
	{
		func_755(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < network_get_max_num_participants())
	{
		if (uParam0->f_32[iVar0]->f_3 != -1)
		{
			uParam0->f_32[iVar0]->f_5 = 1;
		}
		iVar0++;
	}
	func_540(uParam0, 5);
}

void func_547(var uParam0)
{
	uParam0->f_514 = func_666(uParam0);
	iVar3 = 0;
	iVar4 = 999;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_402(uParam0, iVar0))
		{
		}
		else
		{
			if (&uParam0->f_7[iVar0] > iVar3)
			{
				iVar3 = &uParam0->f_7[iVar0];
				iVar2 = iVar0;
			}
			if (&uParam0->f_7[iVar0] < iVar4)
			{
				iVar4 = &uParam0->f_7[iVar0];
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	iVar5 = uParam0->f_516;
	if (uParam0->f_514 < uParam0->f_516)
	{
		iVar5 = uParam0->f_514;
	}
	uParam0->f_515 = iVar5;
	if (iVar4 != iVar3)
	{
		if (iVar5 < uParam0->f_516)
		{
			uParam0->f_7[iVar1]->f_2 = 1;
		}
		else
		{
			iVar6 = uParam0->f_514;
			iVar7 = iVar6;
			iVar10 = 0;
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (!func_402(uParam0, iVar0))
				{
				}
				else
				{
					set_bit(&iVar9, iVar0);
				}
				iVar0++;
			}
			while (iVar6 > 0)
			{
				if (iVar8 == iVar9)
				{
					if (iVar7 == iVar6)
					{
						Jump @460; //curOff = 253
					}
					else
					{
						iVar7 = iVar6;
						iVar8 = 0;
					}
				}
				iVar10 = 0;
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (!func_402(uParam0, iVar0))
					{
					}
					else if (is_bit_set(iVar8, iVar0))
					{
					}
					else if (&uParam0->f_7[iVar0] > &uParam0->f_7[iVar10])
					{
						iVar10 = iVar0;
					}
					iVar0++;
				}
				fVar11 = to_float((uParam0->f_7[iVar2]->f_2 / &uParam0->f_7[iVar2]));
				fVar12 = to_float((uParam0->f_7[iVar10]->f_2 / &uParam0->f_7[iVar10]));
				if (fVar12 < fVar11 || &uParam0->f_7[iVar2] == &uParam0->f_7[iVar10])
				{
					uParam0->f_7[iVar10]->f_2++;
					iVar6 = (iVar6 - 1);
				}
				set_bit(&iVar8, iVar10);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_402(uParam0, iVar0))
			{
			}
			else if (iVar0 >= iVar5)
			{
			}
			else if (uParam0->f_514 < uParam0->f_516)
			{
				uParam0->f_7[iVar0]->f_2 = 0;
			}
			else
			{
				uParam0->f_7[iVar0]->f_2 = floor(to_float((uParam0->f_514 / iVar5)));
			}
			iVar0++;
		}
	}
}

void func_548(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar3))
		{
		}
		else
		{
			iVar2 = network_get_player_index(iVar3);
			iVar1 = func_378(iVar2);
			if (!func_401(iVar1))
			{
			}
			else
			{
				if (uParam0->f_32[iVar1]->f_8 != iVar2)
				{
				}
				uParam0->f_32[iVar1]->f_6 = (*uParam1)[iVar0]->f_14;
			}
		}
		iVar0++;
	}
}

void func_549(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
		*uParam0 = iParam1;
	}
}

bool func_550(var uParam0, var uParam1)
{
	iVar1 = 0;
	while (iVar1 < network_get_max_num_participants())
	{
		iVar0 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar0))
		{
		}
		else if ((*uParam1)[iVar1]->f_12 < uParam0->f_3)
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_551(var uParam0, var uParam1, int iParam2)
{
	if (!func_402(uParam0, uParam0->f_2))
	{
		return true;
	}
	if (uParam0->f_7[uParam0->f_2]->f_1 >= &uParam0->f_7[uParam0->f_2])
	{
		return true;
	}
	if (uParam0->f_7[uParam0->f_2]->f_1 >= uParam0->f_7[uParam0->f_2]->f_2)
	{
		return true;
	}
	iVar2 = uParam0->f_2;
	iVar5 = -1;
	iVar6 = 9999;
	iVar7 = -9999;
	iVar8 = -1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar4 = int_to_participantindex(iVar1);
		if (!network_is_participant_active(iVar4))
		{
		}
		else
		{
			iVar3 = network_get_player_index(iVar4);
			iVar0 = func_378(iVar3);
			if (!func_401(iVar0))
			{
			}
			else if (!func_402(uParam0, &(uParam0->f_32[iVar0])))
			{
			}
			else if (uParam0->f_32[iVar0]->f_6 > iParam2)
			{
			}
			else if (iVar2 == &uParam0->f_32[iVar0])
			{
			}
			else
			{
				iVar9 = &uParam0->f_32[iVar0];
				if (uParam0->f_7[iVar9]->f_1 == uParam0->f_7[iVar9]->f_2)
				{
				}
				else
				{
					if ((*uParam1)[iVar1]->f_2 < iVar6)
					{
						iVar6 = (*uParam1)[iVar1]->f_2;
						iVar5 = iVar0;
					}
					if (&(*uParam1)[iVar1]->f_3[iVar2] > iVar7 && (*uParam1)[iVar1]->f_2 < &(*uParam1)[iVar1]->f_3[iVar2])
					{
						iVar7 = &(*uParam1)[iVar1]->f_3[iVar2];
						iVar8 = iVar0;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar5 == -1 && iVar8 == -1)
	{
		return true;
	}
	if (iVar6 == iVar7 && iVar5 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar5]->f_8);
		func_360(uParam0, uParam0->f_32[iVar5]->f_8, iVar2);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar5);
	}
	else if (iVar7 > iVar6 * 2 && iVar8 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar8]->f_8);
		func_360(uParam0, uParam0->f_32[iVar8]->f_8, iVar2);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar8);
	}
	else if (iVar5 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar5]->f_8);
		func_360(uParam0, uParam0->f_32[iVar5]->f_8, iVar2);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar5);
	}
	return false;
}

bool func_552(var uParam0, var uParam1)
{
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 999;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (!func_402(uParam0, iVar4))
		{
		}
		else if (iVar4 >= uParam0->f_515)
		{
		}
		else
		{
			if (uParam0->f_7[iVar4]->f_1 > iVar0)
			{
				iVar0 = uParam0->f_7[iVar4]->f_1;
				iVar1 = iVar4;
			}
			if (uParam0->f_7[iVar4]->f_1 < iVar2)
			{
				iVar2 = uParam0->f_7[iVar4]->f_1;
				iVar3 = iVar4;
			}
		}
		iVar4++;
	}
	if (!func_402(uParam0, iVar1))
	{
		return true;
	}
	if (!func_402(uParam0, iVar3))
	{
		return true;
	}
	if (&uParam0->f_7[iVar3] == uParam0->f_7[iVar3]->f_1)
	{
		return true;
	}
	if (iVar0 <= uParam0->f_7[iVar1]->f_2)
	{
		return true;
	}
	if (iVar0 < iVar2 + 2)
	{
		return true;
	}
	if (iVar1 == iVar3)
	{
		return true;
	}
	if (iVar0 == iVar2)
	{
		return true;
	}
	iVar9 = -1;
	iVar10 = 9999;
	iVar11 = -9999;
	iVar12 = -1;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		iVar6 = int_to_participantindex(iVar8);
		if (!network_is_participant_active(iVar6))
		{
		}
		else
		{
			iVar5 = network_get_player_index(iVar6);
			iVar7 = func_378(iVar5);
			if (!func_401(iVar7))
			{
			}
			else
			{
				if (!func_402(uParam0, &(uParam0->f_32[iVar7])))
				{
				}
				if (&uParam0->f_32[iVar7] != iVar1)
				{
				}
				else
				{
					if ((*uParam1)[iVar8]->f_2 < iVar10)
					{
						iVar10 = (*uParam1)[iVar8]->f_2;
						iVar9 = iVar7;
					}
					if (&(*uParam1)[iVar8]->f_3[iVar3] > iVar11)
					{
						iVar11 = &(*uParam1)[iVar8]->f_3[iVar3];
						iVar12 = iVar7;
					}
				}
			}
		}
		iVar8++;
	}
	if (iVar9 == -1 && iVar12 == -1)
	{
		return true;
	}
	if (iVar10 == iVar11 && iVar9 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar9]->f_8);
		func_360(uParam0, uParam0->f_32[iVar9]->f_8, iVar3);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar9);
	}
	else if (iVar11 > iVar10 * 2 && iVar12 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar12]->f_8);
		func_360(uParam0, uParam0->f_32[iVar12]->f_8, iVar3);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar12);
	}
	else if (iVar9 != -1)
	{
		func_368(uParam0, uParam0->f_32[iVar9]->f_8);
		func_360(uParam0, uParam0->f_32[iVar9]->f_8, iVar3);
		_0x31010318ba9897ac(&(uParam0->f_1), iVar9);
	}
	return false;
}

bool func_553(var uParam0, var uParam1, int iParam2)
{
	iVar7 = int_to_participantindex(iParam2);
	if (!network_is_participant_active(iVar7))
	{
		return true;
	}
	iVar5 = network_get_player_index(iVar7);
	iVar0 = func_378(iVar5);
	if (!func_401(iVar0))
	{
		return true;
	}
	if ((*uParam1)[iParam2]->f_14 == 0)
	{
		return true;
	}
	iVar4 = &uParam0->f_32[iVar0];
	if (func_402(uParam0, iVar4))
	{
		return true;
	}
	iVar9 = -1;
	iVar10 = -1;
	iVar11 = -1;
	iVar12 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (iVar2 == iParam2)
		{
		}
		else
		{
			iVar8 = int_to_participantindex(iVar2);
			if (!network_is_participant_active(iVar8))
			{
			}
			else
			{
				iVar6 = network_get_player_index(iVar8);
				iVar3 = func_378(iVar6);
				if (!func_401(iVar3))
				{
				}
				else
				{
					iVar1 = &uParam0->f_32[iVar3];
					if (!func_402(uParam0, iVar1))
					{
					}
					else if (iVar1 == iVar4)
					{
					}
					else if (&(*uParam1)[iParam2]->f_15[iVar1] < 2)
					{
					}
					else if (&(*uParam1)[iParam2]->f_15[iVar4] >= &(*uParam1)[iParam2]->f_15[iVar1])
					{
					}
					else
					{
						if (!_0x72b2e00c9bac6789(&(uParam0->f_1), iVar3))
						{
							if (&(*uParam1)[iVar2]->f_15[iVar1] > 2)
							{
							}
							else
							{
								Jump @320; //curOff = 298
								if (&(*uParam1)[iVar2]->f_15[iVar1] > 1)
								{
								}
								else
								{
									if (iVar9 == -1)
									{
										iVar9 = iVar3;
										iVar10 = iVar2;
										iVar11 = iVar1;
										iVar12 = iVar6;
									}
									else if (&(*uParam1)[iVar2]->f_15[iVar1] < &(*uParam1)[iVar10]->f_15[iVar11])
									{
										iVar9 = iVar3;
										iVar11 = iVar1;
										iVar10 = iVar2;
										iVar12 = iVar6;
									}
									if (iVar12 == iVar6)
									{
									}
								}
							}
							iVar2++;
							if (iVar9 != -1)
							{
								func_368(uParam0, uParam0->f_32[iVar0]->f_8);
								func_368(uParam0, uParam0->f_32[iVar9]->f_8);
								func_360(uParam0, uParam0->f_32[iVar0]->f_8, iVar11);
								func_360(uParam0, uParam0->f_32[iVar9]->f_8, iVar4);
								return false;
							}
							return true;
						}
					}
				}
			}
		}
	}
}

int func_554(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 4;
	while (iVar0 >= 0)
	{
		if (func_756(uParam0, iParam1, iParam2, iVar0, bParam3))
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iVar0;
}

int func_555()
{
	return ceil((IntToFloat(network_get_num_participants()) * 0.51f));
}

void func_556()
{
	if (Global_1194053->f_426.f_7 == 1)
	{
		return;
	}
	if (!network_is_player_active(player_id()))
	{
		return;
	}
	if (!_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())))
	{
		return;
	}
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return;
	}
	if (!_0xce88a261dcbba0d9(_0x901e0dc25080c8b9(player_id()), &Var0) || !func_757(Var0))
	{
		return;
	}
	Global_1194053->f_426.f_7 = 1;
	Global_1194053->f_426 = { Var0 };
}

void func_557(var uParam0, struct<4> Param1)
{
	bVar0 = false;
	Var2 = { func_190() };
	Var6.f_9 = -1591664384;
	if (func_758(&Param1, &Var2))
	{
		return;
	}
	func_186(Param1, &Var6, 1, 1, -1);
	if (Var6.f_4 == 0)
	{
		return;
	}
	iVar25 = func_567(Var6.f_4);
	if (iVar25 == 307971639)
	{
		iVar20 = func_759(Var6.f_4, 0);
		if (iVar20 == 0)
		{
			return;
		}
		Var21 = { func_761(iVar20, func_760(1), -1591664384, 1) };
		if (func_758(&Var21, &Var2))
		{
			return;
		}
	}
	else
	{
		iVar20 = Var6.f_4;
		Var21 = { Param1 };
	}
	iVar26 = 0;
	while (iVar26 <= (6 - 1))
	{
		iVar1 = iVar26;
		if (func_762(Var6.f_4, iVar1) && !func_763(uParam0, Param1))
		{
			bVar0 = true;
		}
		else
		{
			iVar26++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	if (iVar1 == 5)
	{
		iVar26 = 0;
		iVar26 = 0;
		while (iVar26 < 9)
		{
			if (func_758(uParam0->f_36[iVar26], &Var2))
			{
				*uParam0->f_36[iVar26] = { Var21 };
				Jump @313; //curOff = 278
			}
			else if (func_758(uParam0->f_36[iVar26], &Var21))
			{
			}
			else
			{
				iVar26++;
			}
		}
	}
	else if (iVar1 == 4)
	{
		iVar26 = 0;
		iVar26 = 0;
		while (iVar26 < 23)
		{
			if (func_758(uParam0->f_75[iVar26], &Var2))
			{
				*uParam0->f_75[iVar26] = { Var21 };
				Jump @401; //curOff = 366
			}
			else if (func_758(uParam0->f_36[iVar26], &Var21))
			{
			}
			else
			{
				iVar26++;
			}
		}
	}
	else if (func_758(uParam0->f_14[iVar26], &Var2))
	{
		*uParam0->f_14[iVar1] = { Var21 };
	}
	func_591(uParam0, iVar1);
	func_764(uParam0);
	func_292(uParam0, iVar1);
}

char* func_558(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_765(iVar0);
}

char* func_559(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_460(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_560(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_561(var uParam0, int iParam1)
{
	_0x1bdb5a07307f6929(&(uParam0->f_553), iParam1);
}

void func_562(int iParam0)
{
	if (iParam0 == 255)
	{
		return;
	}
	_0xde544b7ec0c187cc(&uVar0);
	iVar1 = iParam0;
	_0x31010318ba9897ac(&uVar0, iVar1);
	Var2 = 49;
	Var2.f_1 = player_id();
	Var2.f_2 = get_network_time_accurate();
	Var2.f_4 = 11;
	trigger_script_event(1, &Var2, 6, 42, &uVar0);
}

void func_563(var uParam0)
{
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	Var0.f_3 = get_hash_key("IB_OK");
	Var0.f_3.f_1 = 0;
	Var0.f_3.f_2 = 0;
	Var0.f_3.f_3 = 0;
	sVar19 = _create_var_string(2, "KICKED_FROM_LOBBY_SOLO");
	iVar20 = player_id();
	iVar21 = _0x901e0dc25080c8b9(iVar20);
	if (_0x0f99f6436528a089(iVar21))
	{
		if (_0x4be6c13a45cca8ec(iVar21) == iVar20)
		{
			if (_0x149a2751ab66ac02(iVar21) != 1)
			{
				sVar19 = _create_var_string(2, "KICKED_FROM_LOBBY_POSSE_LEADER");
			}
		}
		else
		{
			sVar19 = _create_var_string(2, "KICKED_FROM_LOBBY_POSSE_MEMBER");
		}
	}
	uParam0->f_93.f_3470 = func_766(&Var0, "KICKED_TITLE", sVar19, 0, 1);
	func_470(&(uParam0->f_93), 32768);
}

void func_564(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 4))
	{
		return;
	}
	func_767(Var0.f_1);
}

void func_565(int iParam0, var uParam1)
{
	if (!get_event_data(1, iParam0, &Var0, 16))
	{
		return;
	}
	if (uParam1->f_93.f_25 != Var0.f_1)
	{
		return;
	}
	if (!func_768(&(uParam1->f_93), &(Var0.f_4)))
	{
	}
	func_769(&(uParam1->f_93.f_3475), 2);
}

void func_566(int iParam0, var uParam1)
{
	if (*iParam0 != -1740156697)
	{
		return;
	}
	if (iParam0->f_2 == 153098848)
	{
		return;
	}
	uParam1->f_93.f_29 = iParam0->f_2;
	sVar0 = "";
	switch (uParam1->f_93.f_29)
	{
		case -2119034026:
			sVar0 = _create_var_string(2, "MP_LOBBY_PLAYERS_TOOLTIP");
			break;
		case -113134429:
			if (uParam1->f_93.f_6 >= 0)
			{
				sVar0 = _create_var_string(10, "MP_LOBBY_TEAMS_TOOLTIP", uParam1->f_93.f_3405[uParam1->f_93.f_6]);
			}
			break;
		case -463710139:
			if (func_149(player_id(), 65536))
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_STABLE_TOOLTIP");
			}
			break;
		case 1053839171:
			sVar0 = _create_var_string(2, "MP_LOBBY_INVENTORY_TOOLTIP");
			break;
		case 2057225614:
			sVar0 = _create_var_string(2, "MP_LOBBY_DETAILS_TOOLTIP");
			break;
		case -249115450:
			sVar0 = _create_var_string(2, "MP_LOBBY_OPTIONS_TOOLTIP");
			break;
		case -1975593785:
			sVar0 = _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_TOOLTIP");
			break;
		case 34833187:
			sVar0 = _create_var_string(2, "MP_LOBBY_POSITION_TOOLTIP");
			break;
		case -993924856:
			if (func_149(player_id(), 65536))
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_INVITE_PLAYERS_TOOLTIP");
			}
			break;
		case -606625181:
			sVar0 = _create_var_string(2, "MP_LOBBY_PURCHASES_TOOLTIP");
			break;
		case 1300209701:
			if (func_152(64))
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_POSSE_OUTFIT_EQUIPPED_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_OUTFITS_TOOLTIP");
			}
			break;
		case 272525543:
			sVar0 = _create_var_string(2, "MP_LOBBY_INVITES_TOOLTIP");
			break;
		case -900772831:
			if (func_149(player_id(), 65536))
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_GREY_OUT_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_QUIT_TO_FREEROAM_TOOLTIP");
			}
			break;
		case -855746379:
			if (func_128(&(uParam1->f_93), 8192))
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_MATCHMAKING_ON_TOOLTIP");
			}
			else
			{
				sVar0 = _create_var_string(2, "MP_LOBBY_MATCHMAKING_OFF_TOOLTIP");
			}
			break;
		case -803590188:
			sVar0 = _create_var_string(2, "NM_PW_ABILITY_LOAD_FOOTER");
			break;
		case 502353340:
			sVar0 = _create_var_string(2, "NM_PW_VIEW_ABILITY_LOADOUT_FOOTER");
			break;
		case 1581269839:
			sVar0 = _create_var_string(2, "MP_LOBBY_PLYR_OPTIONS_KICK_TOOLTIP");
			break;
		case -259626270:
			sVar0 = _create_var_string(2, "NM_PW_INVITE_TO_CREW_FOOTER");
			break;
		case -546843398:
			sVar0 = _create_var_string(2, "NM_PW_ADD_FRIEND_TOOLTIP");
			break;
		case -611122068:
			sVar0 = _create_var_string(2, "NM_PW_REMOVE_FRIEND_TOOLTIP");
			break;
		case 862800978:
			sVar0 = _create_var_string(2, "NM_PW_MESSAGE_FOOTER");
			break;
		case 1964487973:
			sVar0 = _create_var_string(2, "NM_PW_SHOW_GAMER_CARD_FOOTER");
			break;
		case 1567588697:
			sVar0 = _create_var_string(2, "NM_PW_REPORT_PLAYER_FOOTER");
			break;
		case 364382993:
			if (uParam1->f_93.f_9 == player_id())
			{
				if (func_137(8388608))
				{
					sVar0 = _create_var_string(2, "NM_MW_ENTRY_PLAYER_UNMUTE_ALL");
				}
				else
				{
					sVar0 = _create_var_string(2, "NM_MW_ENTRY_PLAYER_MUTE_ALL");
				}
			}
			else if (func_137(8388608))
			{
				sVar0 = _create_var_string(2, "NM_MW_ENTRY_PLAYER_ALL_MUTED_FOOTER");
			}
			else if (_0x0ded260a1958a82e(uParam1->f_93.f_9))
			{
				sVar0 = _create_var_string(2, "NM_MW_ENTRY_PLAYER_UNMUTE_FOOTER");
			}
			else
			{
				sVar0 = _create_var_string(2, "NM_MW_ENTRY_PLAYER_MUTE_FOOTER");
			}
			break;
		case 1337318144:
			sVar0 = _create_var_string(2, "MP_LOBBY_TARGET_WINS");
			break;
		case 1453646050:
			sVar0 = _create_var_string(2, "MP_LOBBY_TARGET_SCORE");
			break;
		case 1480700926:
			sVar0 = _create_var_string(2, "MP_LOBBY_TIME_LIMIT");
			break;
		case 1026068262:
			sVar0 = _create_var_string(2, "MP_LOBBY_TOD");
			break;
		case 367679069:
			sVar0 = _create_var_string(2, "MP_LOBBY_WEATHER");
			break;
		case 2086085984:
			sVar0 = _create_var_string(2, "MP_LOBBY_CAMERA_LOCK");
			break;
		case -930110659:
			sVar0 = _create_var_string(2, "MP_LOBBY_TIME_CYCLE");
			break;
		case 1971479169:
			sVar0 = func_770(iParam0->f_1);
			break;
		case -110320509:
			sVar0 = _create_var_string(2, "MP_LOBBY_PURCHASES_PURCHASES_FREEROAM_VALID");
			break;
		case 953615807:
			sVar0 = _create_var_string(2, "MP_LOBBY_PURCHASES_PURCHASES_FREEROAM_VALID");
			break;
		default:
			return;
	}
	_databinding_write_data_string(uParam1->f_93.f_30.f_9, sVar0);
}

int func_567(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

void func_568(var uParam0, int iParam1)
{
	uParam0->f_2686.f_426 = iParam1;
	if (!func_602(iParam1, 0))
	{
		return;
	}
	if (func_567(iParam1) != 307971639)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_30.f_11, false);
	_databinding_write_data_bool(uParam0->f_2686.f_418, false);
	_databinding_write_data_bool(uParam0->f_2686.f_419, false);
	_databinding_write_data_bool(uParam0->f_2686.f_422, true);
}

void func_569(var uParam0, int iParam1)
{
	uParam0->f_2686.f_426 = iParam1;
	if (!func_602(iParam1, 0))
	{
		return;
	}
	if (func_567(iParam1) != -562345805 && func_567(iParam1) != 2085633299)
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_30.f_11, false);
	_databinding_write_data_bool(uParam0->f_2686.f_418, true);
	_databinding_write_data_bool(uParam0->f_2686.f_419, true);
	_0x75cfac49301e134f(uParam0->f_2686.f_420, iParam1, 0);
	sVar0 = _create_var_string(0, func_771(iParam1));
	_databinding_write_data_string(uParam0->f_2686.f_417, sVar0);
	_databinding_write_data_bool(uParam0->f_2686.f_422, false);
}

void func_570(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_267 == iParam1)
	{
		return;
	}
	if (uParam0->f_267 > -1)
	{
		_databinding_write_data_bool(uParam0->f_2[uParam0->f_267]->f_21, false);
	}
	_databinding_write_data_bool(uParam0->f_2[iParam1]->f_21, true);
	uParam0->f_267 = iParam1;
	if (iParam1 == 0)
	{
		Global_1051123 = 0;
	}
	else if (iParam1 == 1)
	{
		Global_1051123 = 1;
	}
	else if (iParam1 >= 2)
	{
		Global_1051123 = 2;
		Global_1051124 = iParam2;
	}
}

int func_571(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_574(uParam1) || Global_524288->f_40400 == -698288936)
	{
		return -963477619;
	}
	if (func_450(uParam0) == 1)
	{
		if (iParam2 == 0)
		{
			return 1105014447;
		}
		else
		{
			return 1891514641;
		}
	}
	return func_772(iParam3, 1, 0);
}

var func_572(char* sParam0, char* sParam1, int iParam2)
{
	sVar0 = _create_var_string(10, sParam0, func_460(sParam1, iParam2));
	uVar1 = func_560(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_573(var uParam0, int iParam1)
{
	uParam0->f_28 = iParam1;
}

bool func_574(var uParam0)
{
	if (uParam0->f_10.f_21.f_2 == -504335712 && Global_524288->f_40400 == -1759663922)
	{
		return func_474(func_370(uParam0->f_10.f_53)) != 0;
	}
	return false;
}

float func_575(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_576(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!_0x179a6f0ee2e79026(&fParam0))
	{
		return;
	}
	Var0 = 49;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam4;
	Var0.f_8 = iParam5;
	trigger_script_event(1, &Var0, 9, 41, &fParam0);
}

void func_577(var uParam0)
{
	iVar0 = func_773(&(uParam0->f_3475));
	uParam0->f_5312 = { uParam0->f_3475.f_1[iVar0]->f_8 };
	uParam0->f_5312.f_3 = { uParam0->f_3475.f_1[iVar0]->f_11 };
	uParam0->f_5312.f_6 = uParam0->f_3475.f_1[iVar0]->f_14;
	uParam0->f_5312.f_7 = -1;
	animpostfx_play("MP_CampWipeR");
	func_273(&(uParam0->f_5321));
	func_470(uParam0, 128);
}

void func_578(int iParam0)
{
	vVar0.x = 190;
	vVar0.f_1 = player_id();
	vVar0.f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar4, iParam0);
	trigger_script_event(1, &vVar0, 4, 26, &uVar4);
}

void func_579(var uParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(uParam0->f_3475.f_49))
	{
		delete_ped(&(uParam0->f_3475.f_49));
	}
	iVar0 = func_773(&(uParam0->f_3475));
	uParam0->f_3475.f_49 = clone_ped(get_player_ped(iParam1), 0f, true, true);
	_set_entity_coords_and_heading(uParam0->f_3475.f_49, uParam0->f_3475.f_1[iVar0]->f_4, uParam0->f_3475.f_1[iVar0]->f_7, true, false, true);
	_0x2208438012482a1a(uParam0->f_3475.f_49, false, false);
	func_774(&(uParam0->f_3475), bParam2);
	if (!bParam2)
	{
		func_470(uParam0, 2048);
	}
}

void func_580(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = func_773(uParam0);
	vVar1 = { *uParam0->f_1[iVar0] };
	fVar4 = uParam0->f_1[iVar0]->f_3;
	if (does_entity_exist(uParam0->f_47))
	{
		delete_entity(&(uParam0->f_47));
	}
	if (is_model_a_ped(iParam1))
	{
		uParam0->f_47 = func_775(iParam1, vVar1, fVar4, 0, 1, 0, 1, 1, 1, 0, 0);
	}
	else if (is_model_a_vehicle(iParam1))
	{
		uParam0->f_47 = create_vehicle(iParam1, vVar1, fVar4, false, true, false, false);
	}
	if (does_entity_exist(uParam0->f_47) && !is_entity_dead(uParam0->f_47))
	{
		set_entity_invincible(uParam0->f_47, true);
		set_entity_can_be_damaged(uParam0->f_47, false);
		func_776(uParam0, bParam3);
		if (is_model_a_ped(get_entity_model(uParam0->f_47)))
		{
			iVar5 = get_ped_index_from_entity_index(uParam0->f_47);
			if (does_entity_exist(iVar5) && !is_entity_dead(iVar5))
			{
				func_777(iVar5, iParam2);
				set_ped_relationship_group_hash(iVar5, get_ped_relationship_group_hash(player_ped_id()));
				set_blocking_of_non_temporary_events(iVar5, true);
				set_ped_can_ragdoll_from_player_impact(iVar5, false);
				set_ped_config_flag(iVar5, 277, true);
				set_ped_config_flag(iVar5, 340, true);
				set_ped_config_flag(iVar5, 137, true);
				set_ped_config_flag(iVar5, 17, true);
				set_ped_config_flag(iVar5, 77, true);
				set_ped_config_flag(iVar5, 77, true);
				set_ped_config_flag(iVar5, 24, false);
				set_ped_config_flag(iVar5, 72, true);
				set_ped_config_flag(iVar5, 150, true);
				set_ped_config_flag(iVar5, 47, true);
				if (func_778(iVar5))
				{
					task_play_anim(iVar5, func_779(), func_780(), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
				}
				_0x9587913b9e772d29(iVar5, 1);
				_0x2208438012482a1a(iVar5, false, false);
			}
		}
		if (*uParam0 == 2)
		{
			freeze_entity_position(uParam0->f_47, true);
		}
	}
}

void func_581(var uParam0, var uParam1, var uParam2, char* sParam3)
{
	iVar0 = get_game_timer();
	if ((iVar0 - uParam1->f_92) < 1000)
	{
		return;
	}
	uParam1->f_92 = iVar0;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	if (func_369())
	{
		func_78(&(Var1.f_10), 4);
	}
	else
	{
		func_285(&(Var1.f_10), 4);
	}
	Var1 = func_781();
	Var1.f_1 = func_782();
	Var1.f_2 = func_783();
	Var1.f_3 = { func_28() };
	Var1.f_9 = func_784();
	if (network_is_gamer_in_my_session(uParam2))
	{
		return;
	}
	func_785(uParam2, sParam3, &(uParam1->f_10.f_27), &Var1, 0);
	uParam1->f_93.f_142.f_1805 = get_time_offset(get_network_time_accurate(), -3001);
	uParam1->f_93.f_142.f_1806 = 1;
	if (func_574(uParam1) && uParam0->f_747 < 3)
	{
		func_786(12, -1);
	}
}

bool func_582()
{
	if (func_369())
	{
		return true;
	}
	if (func_425(player_id()) > 6)
	{
		return true;
	}
	return false;
}

void func_583(var uParam0, var uParam1)
{
	iVar0 = get_game_timer();
	if ((iVar0 - uParam1->f_92) < 1000)
	{
		return;
	}
	uParam1->f_92 = iVar0;
	iVar1 = _0xdb7abdd203fa3704();
	if (iVar1 == 0)
	{
		return;
	}
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_3.f_1 = -1;
	if (func_369())
	{
		func_78(&(Var9.f_10), 4);
	}
	else
	{
		func_285(&(Var9.f_10), 4);
	}
	Var9 = func_781();
	Var9.f_1 = func_782();
	Var9.f_2 = func_783();
	Var9.f_3 = { func_28() };
	Var9.f_9 = func_784();
	iVar20 = 0;
	while (iVar20 < iVar1)
	{
		Var2 = { func_787(iVar20) };
		if (!_0xe348d1404bd80146(&Var2))
		{
		}
		else if (network_is_gamer_in_my_session(&Var2))
		{
		}
		else
		{
			func_785(&Var2, _0x5659d87be674ab17(&Var2), &(uParam1->f_10.f_27), &Var9, 524288);
		}
		iVar20++;
	}
	if (func_574(uParam1) && uParam0->f_747 < 3)
	{
		func_786(12, -1);
	}
}

void func_584(var uParam0, var uParam1)
{
	iVar0 = get_game_timer();
	if ((iVar0 - uParam1->f_92) < 1000)
	{
		return;
	}
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	if (func_369())
	{
		func_78(&(Var1.f_10), 4);
	}
	else
	{
		func_285(&(Var1.f_10), 4);
	}
	Var1 = func_781();
	Var1.f_1 = func_782();
	Var1.f_2 = func_783();
	Var1.f_3 = { func_28() };
	Var1.f_9 = func_784();
	iVar12 = 0;
	while (iVar12 < uParam1->f_93.f_3540.f_483)
	{
		if (network_is_gamer_in_my_session(uParam1->f_93.f_3540.f_1.f_1[iVar12]))
		{
		}
		else
		{
			func_785(uParam1->f_93.f_3540.f_1.f_1[iVar12], &(uParam1->f_93.f_3540.f_1.f_1[iVar12]->f_7), &(uParam1->f_10.f_27), &Var1, 524288);
		}
		iVar12++;
	}
	if (func_574(uParam1) && uParam0->f_747 < 3)
	{
		func_786(12, -1);
	}
}

void func_585()
{
	vVar0.x = 189;
	vVar0.f_1 = player_id();
	vVar0.f_2 = get_network_time_accurate();
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar5 = int_to_playerindex(iVar6);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			_0x31010318ba9897ac(&uVar4, iVar6);
		}
		iVar6++;
	}
	trigger_script_event(1, &vVar0, 4, 26, &uVar4);
}

bool func_586(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (!network_is_friend(uParam0))
	{
		return false;
	}
	if (!_0x55f618f68ab854d3(uParam0))
	{
		return false;
	}
	return true;
}

void func_587(var uParam0, var uParam1)
{
	uParam0->f_93.f_2229.f_170 = uParam1;
}

void func_588(var uParam0, var uParam1)
{
	if (uParam0->f_1 > (9 - 1))
	{
		return;
	}
	bVar0 = _databinding_read_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible");
	if (bVar0)
	{
		*uParam1->f_36[uParam0->f_1] = { func_190() };
		_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", false);
	}
	else
	{
		Var1 = { func_788(uParam0) };
		*uParam1->f_36[uParam0->f_1] = { Var1 };
		_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", true);
		func_789(uParam1, uParam0->f_1);
	}
}

void func_589(var uParam0, var uParam1)
{
	if (uParam0->f_1 > (23 - 1))
	{
		return;
	}
	bVar0 = _databinding_read_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible");
	if (bVar0)
	{
		*uParam1->f_75[uParam0->f_1] = { func_190() };
		_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", false);
	}
	else
	{
		Var1 = { func_788(uParam0) };
		*uParam1->f_75[uParam0->f_1] = { Var1 };
		_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", true);
	}
}

void func_590(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_170;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return;
	}
	bVar1 = _databinding_read_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible");
	if (&uParam1->f_31[iVar0] == uParam0->f_1)
	{
		if (bVar1)
		{
			_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", false);
			*uParam1->f_14[iVar0] = { func_190() };
			uParam1->f_31[iVar0] = -1;
		}
		else
		{
			_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", true);
			Var2 = { func_788(uParam0) };
			*uParam1->f_14[iVar0] = { Var2 };
			uParam1->f_31[iVar0] = uParam0->f_1;
		}
	}
	else
	{
		if (&uParam1->f_31[iVar0] != -1)
		{
			uVar6 = _databinding_get_item_context_by_index(uParam1->f_13, &(uParam1->f_31[iVar0]));
			_databinding_write_data_bool_from_parent(uVar6, "dynamic_list_item_end_img_visible", false);
		}
		_databinding_write_data_bool_from_parent(uParam0->f_3, "dynamic_list_item_end_img_visible", true);
		Var2 = { func_788(uParam0) };
		*uParam1->f_14[iVar0] = { Var2 };
		uParam1->f_31[iVar0] = uParam0->f_1;
	}
}

void func_591(var uParam0, int iParam1)
{
	iVar1 = 0;
	switch (iParam1)
	{
		case 0:
			*Global_1296679 = { *uParam0->f_14[0] };
			break;
		case 1:
			Global_1296679->f_4 = { *uParam0->f_14[1] };
			break;
		case 2:
			Global_1296679->f_8 = { *uParam0->f_14[2] };
			break;
		case 3:
			Global_1296679->f_12 = { *uParam0->f_14[3] };
			break;
		case 5:
			uParam0->f_74 = 0;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (_0xb881ca836cc4b6d4(uParam0->f_36[iVar0]))
				{
					*Global_1296679->f_16[iVar1] = { *uParam0->f_36[iVar0] };
					iVar1++;
					uParam0->f_74++;
				}
				iVar0++;
			}
			if (iVar1 != 9)
			{
				iVar1 = iVar1;
				while (iVar1 <= (9 - 1))
				{
					*Global_1296679->f_16[iVar1] = { Var2 };
					iVar1++;
				}
			}
			break;
		case 4:
			uParam0->f_169 = 0;
			iVar0 = 0;
			while (iVar0 <= (23 - 1))
			{
				if (_0xb881ca836cc4b6d4(uParam0->f_75[iVar0]))
				{
					*Global_1296679->f_53[iVar1] = { *uParam0->f_75[iVar0] };
					iVar1++;
					uParam0->f_169++;
				}
				iVar0++;
			}
			if (iVar1 != 23)
			{
				iVar1 = iVar1;
				while (iVar1 <= (23 - 1))
				{
					*Global_1296679->f_53[iVar1] = { Var2 };
					iVar1++;
				}
			}
			break;
	}
}

void func_592(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (iVar0 == player_id())
		{
		}
		else if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			func_790(iVar0, iParam0);
		}
		iVar1++;
	}
}

void func_593()
{
	Var0.f_9 = -1591664384;
	func_791(Global_1296679, &Var0, &iVar22);
	func_791(&(Global_1296679->f_4), &Var0, &iVar22);
	func_791(&(Global_1296679->f_8), &Var0, &iVar22);
	func_791(&(Global_1296679->f_12), &Var0, &iVar22);
	if (func_792(1933821560, 0, iVar22, 1, 0, 59806960) != -1)
	{
	}
}

bool func_594(int iParam0)
{
	Var0.f_9 = -1591664384;
	*iParam0 = (*iParam0 + func_793(Global_1296679, &Var0));
	*iParam0 = (*iParam0 + func_793(&(Global_1296679->f_4), &Var0));
	*iParam0 = (*iParam0 + func_793(&(Global_1296679->f_8), &Var0));
	*iParam0 = (*iParam0 + func_793(&(Global_1296679->f_12), &Var0));
	return *iParam0 > 0;
}

int func_595(int iParam0, bool bParam1, int iParam2)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	return func_794(iParam0, iParam2, 1, bParam1, 1, 0);
}

char* func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

int func_597()
{
	if (func_69() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

void func_598(var uParam0, int iParam1)
{
	if (!func_602(iParam1, 0))
	{
		return;
	}
	if (!func_795(&(uParam0->f_2686.f_432), iParam1, 1, 1, 0, -1, 1))
	{
		return;
	}
}

void func_599(var uParam0, int iParam1, bool bParam2)
{
	if (!func_602(iParam1, 0))
	{
		return;
	}
	if (!func_796(iParam1, -915411861, &iVar0, 0))
	{
		return;
	}
	Var1 = { func_797(iParam1, 1, 1) };
	iVar6 = func_798(iParam1, &Var1, 0, 1, 0);
	iVar7 = func_799(iParam1, 0, 1, 0, 1);
	iVar8 = (func_597() / iVar7);
	if ((iVar8 * iVar0) > iVar6)
	{
		iVar8 = (iVar6 / iVar0);
	}
	if (iVar0 > 1 && (iVar6 - (iVar8 * iVar0)) > 0)
	{
		if (iVar8 + 1 <= (func_597() / iVar7))
		{
			iVar8++;
		}
	}
	Var9 = { func_801(func_800(iParam1), 0) };
	iVar13 = func_800(iParam1);
	if (!func_795(&(uParam0->f_2686.f_432), iParam1, iVar8, !bParam2, 0, -1, 1))
	{
	}
	else if (_is_weapon_throwable(iVar13) && func_802(iParam1, Var1, Var1.f_4, 0, 0, 0) == 0)
	{
		iVar14 = 0;
		while (iVar14 <= 8)
		{
			if (_0xb881ca836cc4b6d4(uParam0->f_2229.f_36[iVar14]))
			{
			}
			else
			{
				*uParam0->f_2229.f_36[iVar14] = { Var9 };
				func_803(uParam0->f_2229, uParam0->f_2229.f_13, Var9, iVar13, -1, -1, 0);
				func_591(&(uParam0->f_2229), 5);
				uParam0->f_2229.f_73++;
				func_292(&(uParam0->f_2229), 5);
			}
			else
			{
				iVar14++;
			}
		}
	}
}

bool func_600(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_start(iParam0, 712853601, iParam1))
	{
		return false;
	}
	return true;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1950175060;
		case 2:
			return 1681219929;
		case 3:
			return 218444191;
		case 4:
			return 2113196069;
		case 5:
			return -1330115686;
		case 6:
			return -1878508229;
		case 7:
			return -1282254562;
		case 8:
			return 954660191;
		case 9:
			return 480079517;
		case 10:
			return 963726415;
		case 11:
			return 1446246869;
		case 12:
			return 1235846615;
		case 13:
			return 1701457723;
		case 14:
			return 230530039;
		case 15:
			return 1973952589;
		case 16:
			return -653299524;
		default:
			break;
	}
	return 0;
}

bool func_602(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_603(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_69() == -1)
	{
		if (func_804(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

bool func_604(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_805(iParam0))
	{
		return func_808(func_806(iParam0, 0), bParam1, bParam2, bParam3, func_807(iParam0));
	}
	if (func_809(iParam0, bParam4) || func_810(iParam0))
	{
		bParam1 = 997808187;
	}
	else if (func_807(iParam0) && (func_811(iParam0, &iVar0) || func_812(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_813(iParam0, -570078785);
		bVar2 = func_813(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			bParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_814())
			{
				bParam1 = -570078785;
			}
			else
			{
				bParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			bParam1 = -915411861;
		}
		else if (func_815(15) && func_813(iParam0, 369710026))
		{
			bParam1 = 369710026;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_605(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_602(iParam0, 0))
	{
		return func_816(func_740(iParam0), bParam1, bParam2);
	}
	if (func_805(iParam0))
	{
		return func_817(func_806(iParam0, 1), bParam1);
	}
	if ((bParam2 && func_69() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_818(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_606(var uParam0, int iParam1)
{
	iVar0 = func_604(iParam1, 0, 1, -1, 1);
	Var1 = { func_797(iParam1, 1, 1) };
	if (!func_819(uParam0, iParam1, Var1, Var1.f_4, iVar0, 1, -1, 1))
	{
		return false;
	}
	return true;
}

bool func_607(int* iParam0)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		func_820(*iParam0, 0, 0, 0);
		return true;
	}
	if (_cashinventory_transaction_get_num_of_items(*iParam0) == 0)
	{
		_cashinventory_transaction_delete(*iParam0);
		func_820(*iParam0, 4, 0, 0);
		return true;
	}
	if (!_cashinventory_transaction_checkout(*iParam0))
	{
		func_820(*iParam0, 2, 0, 0);
		return false;
	}
	func_820(*iParam0, 1, 0, 0);
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 == 2113164098 || iVar0 == 541670136)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

void func_608(var uParam0)
{
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	Var0.f_3 = get_hash_key("IB_YES");
	Var0.f_3.f_1 = 0;
	Var0.f_3.f_2 = 0;
	Var0.f_3.f_3 = 0;
	Var0.f_7 = get_hash_key("IB_NO");
	Var0.f_7.f_1 = 0;
	Var0.f_7.f_2 = 0;
	Var0.f_7.f_3 = 0;
	sVar19 = _create_var_string(10, "KICK_PLAYER_BODY", func_559(&(uParam0->f_93.f_17), 859817522));
	uParam0->f_93.f_3470 = func_821(&Var0, "SG_HDNG", sVar19, 0, 0, 1);
	func_470(&(uParam0->f_93), 16384);
}

void func_609(var uParam0)
{
	iVar0 = _databinding_read_data_int(uParam0->f_2686.f_4);
	if (iVar0 == 2 || uParam0->f_28 == iVar0)
	{
		return;
	}
	uParam0->f_28 = iVar0;
	iVar1 = 0;
	switch (uParam0->f_28)
	{
		case 0:
			iVar1 = 976118230;
			break;
		case 1:
			iVar1 = -631767611;
			break;
	}
	func_295(&(uParam0->f_2686));
	func_823(&(uParam0->f_2686), func_822(uParam0));
	_databinding_write_data_hash_string(uParam0->f_2686.f_2, iVar1);
}

void func_610(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = _databinding_read_data_int(uParam2->f_93.f_30.f_22);
	func_635(uParam0, uParam1, uParam2, iParam3, iVar0);
}

void func_611(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		uParam2->f_93.f_25 = 255;
		uParam2->f_93.f_5324 = bParam4;
	}
	func_824(uParam0, uParam2);
	if (bParam3)
	{
		if (func_128(&(uParam2->f_93), 1024))
		{
			func_577(&(uParam2->f_93));
			if (uParam2->f_93.f_25 != 255)
			{
				func_579(&(uParam2->f_93), uParam2->f_93.f_25, 0);
				func_580(&(uParam2->f_93.f_3475), uParam2->f_93.f_3475.f_53, uParam2->f_93.f_3475.f_53.f_11, 0);
				func_769(&(uParam2->f_93.f_3475), 2);
			}
			else
			{
				func_133(&(uParam2->f_93.f_3475));
			}
		}
	}
	iVar0 = player_id();
	iVar1 = func_234(uParam0, iVar0);
	bVar2 = uParam2->f_93.f_6 != iVar1;
	bVar3 = false;
	if ((((*uParam1)[participant_id_to_int()]->f_28 == -1 || (*uParam1)[participant_id_to_int()]->f_28 != iVar1) && uParam2->f_93.f_6 == iVar1) && uParam0->f_516 > 1)
	{
		bVar3 = true;
	}
	if (!func_149(player_id(), 65536) && func_30((*uParam1)[participant_id_to_int()]) != 8)
	{
		if (!func_40(uParam2, 512))
		{
			if (bVar3)
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_82, bVar3);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_83, bVar3);
				func_29(uParam2, 512);
			}
			else
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_83, bVar2);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_82, bVar2);
			}
		}
		else if (func_40(uParam2, 512) && !bVar3)
		{
			_databinding_write_data_bool(uParam2->f_93.f_57.f_82, bVar2);
			_databinding_write_data_bool(uParam2->f_93.f_57.f_83, bVar2);
			func_263(uParam2, 512);
		}
	}
	if (!bVar3)
	{
		func_263(uParam2, 512);
	}
	if (func_30((*uParam1)[participant_id_to_int()]) >= 8)
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_82, false);
		_databinding_write_data_bool(uParam2->f_93.f_57.f_83, false);
	}
	func_825(uParam0, uParam2);
}

void func_612(var uParam0)
{
	iVar0 = _databinding_read_data_int(uParam0->f_142.f_4);
	if (iVar0 == 3 || uParam0->f_27 == iVar0)
	{
		return;
	}
	func_293(uParam0);
	uParam0->f_27 = iVar0;
	iVar1 = 0;
	switch (uParam0->f_27)
	{
		case 0:
			iVar1 = -84758224;
			break;
		case 1:
			iVar1 = 2111970599;
			uParam0->f_3540 = 0;
			uParam0->f_3540.f_483 = 0;
			uParam0->f_142.f_1804 = 0;
			_databinding_write_data_bool(uParam0->f_142.f_12, false);
			_databinding_write_data_bool(uParam0->f_142.f_13, false);
			break;
		case 2:
			iVar1 = 1302430994;
			uParam0->f_3540 = 0;
			uParam0->f_3540.f_483 = 0;
			uParam0->f_142.f_1804 = 0;
			_databinding_write_data_bool(uParam0->f_142.f_12, false);
			_databinding_write_data_bool(uParam0->f_142.f_13, false);
			break;
	}
	func_289(&(uParam0->f_142));
	_databinding_write_data_hash_string(uParam0->f_142.f_2, iVar1);
	func_826(uParam0);
}

void func_613(int iParam0)
{
	func_828(func_827());
	func_829(iParam0);
}

void func_614(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam1->f_5297 == iParam2)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 2)
	{
		return;
	}
	uParam1->f_5312.f_7 = uParam1->f_5297;
	uParam1->f_5297 = iParam2;
	func_294(uParam0, uParam1, iParam3, 0);
}

void func_615(var uParam0, int iParam1)
{
	if (iParam1 > uParam0->f_8)
	{
		animpostfx_play("MP_CampWipeUp");
	}
	else
	{
		animpostfx_play("MP_CampWipeDown");
	}
	uParam0->f_8 = iParam1;
	func_470(uParam0, 524288);
	func_273(&(uParam0->f_5321));
}

void func_616(var uParam0, int iParam1)
{
	func_830(uParam0, iParam1);
}

void func_617(var uParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_831(uParam0->f_3475, iParam1, &Var0))
	{
		return;
	}
	Var14 = func_832(Var0.f_4);
	if (!func_833(Var0, &(Var14.f_1), &(Var14.f_9), &(Var14.f_11)))
	{
		return;
	}
	if (!func_768(uParam0, &Var14))
	{
		return;
	}
	func_769(&(uParam0->f_3475), 1);
	_databinding_write_data_string(uParam0->f_30.f_9, _create_var_string(2, "MP_LOBBY_INVITE_HORSE_TOOLTIP"));
}

bool func_618(var uParam0, int iParam1)
{
	Var0 = { func_787(iParam1) };
	uParam0->f_93.f_9 = 255;
	uParam0->f_93.f_10 = { Var0 };
	StringCopy(&(uParam0->f_93.f_17), _0x5659d87be674ab17(&Var0), 64);
	_databinding_write_data_bool(uParam0->f_93.f_142.f_7, is_durango_version());
	return true;
}

void func_619(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	uParam0->f_93.f_9 = 255;
	uParam0->f_93.f_10 = { *uParam0->f_93.f_3540.f_1.f_1[iParam1] };
	uParam0->f_93.f_17 = { uParam0->f_93.f_3540.f_1.f_1[iParam1]->f_7 };
	_databinding_write_data_bool(uParam0->f_93.f_142.f_7, is_durango_version());
}

void func_620(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (!func_602(iVar0, 0))
	{
		return;
	}
	func_834(Global_1296859->f_8, iVar0);
	func_835(iVar0);
	func_470(uParam0, 32);
	func_836(uParam0, iParam1);
}

void func_621(var uParam0, var uParam1, var uParam2)
{
	if (!_databinding_is_data_id_valid(*uParam2))
	{
		return;
	}
	func_837(&(uParam1->f_2667), uParam2);
	func_838(uParam0, uParam1, _databinding_read_data_int_from_parent(*uParam2, "InventoryIndex"));
}

int func_622(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2))
	{
		return -1;
	}
	return _0x81d7183e7a8eca72(uParam0->f_2);
}

void func_623(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2))
	{
		return;
	}
	_databinding_write_data_hash_string(uParam0->f_2, iParam1);
}

void func_624(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(87));
	switch (iVar0)
	{
		case 8:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_839(iVar1, uParam0);
			break;
		case 21:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_840(iVar1, 1);
			break;
		case 16:
		case 17:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(51));
			func_841(iVar1);
			break;
		case 6:
			break;
		case 1:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_842(iVar1, 0);
			break;
	}
	func_843(uParam0);
}

void func_625(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(87));
	switch (iVar0)
	{
		case 6:
			func_844(_databinding_read_data_int_from_parent(uParam0, func_596(50)));
			break;
		case 16:
			iVar1 = _0xe6aab897120492d6(uParam0, func_596(88));
			func_845(1, iVar1, Global_1901947->f_308.f_172);
			func_846(88, Global_1296859->f_15, iVar1, 1);
			break;
		case 17:
			iVar1 = _0xe6aab897120492d6(uParam0, func_596(88));
			func_845(2, iVar1, Global_1901947->f_308.f_172);
			func_846(89, Global_1296859->f_15, iVar1, 1);
			break;
		case 20:
			iVar3 = _databinding_read_data_int_from_parent(uParam0, func_596(51));
			func_847(int_to_playerindex(iVar3));
			break;
		case 8:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_848(iVar2, 1);
			break;
		case 21:
			func_849();
			break;
		case 10:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_850(iVar2);
			break;
		case 9:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_851(iVar2);
			break;
		case 12:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			break;
		case 11:
			break;
		case 1:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			func_842(iVar2, 1);
			break;
		case 19:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			if (_0x8e2143144b8e188d(iVar2))
			{
			}
			break;
		case 23:
			Var4.f_10 = 255;
			Var4.f_4 = 34;
			Var4.f_5 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			_0x31010318ba9897ac(&uVar23, network_player_id_to_int());
			func_852(&Var4, uVar23);
			break;
	}
	func_843(uParam0);
	func_255();
}

void func_626(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(87));
	iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_3.f_1 = -1;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	switch (iVar0)
	{
		case 1:
			uVar2 = _0x27b1ae4d8c652f08(iVar1);
			_0xc0cffda87c2c163d(uVar2, &Var3, 11);
			iVar15 = _0xe79ba3bc265895da(uVar2);
			iVar14 = _databinding_read_data_string_from_parent(uParam0, func_596(15));
			break;
		case 10:
			StringCopy(&cVar17, _create_var_string(2, "POSSE_INVITE_HDR"), 64);
			iVar15 = func_853(cVar17);
			iVar16 = _create_var_string(2, "POSSE_INVITE_DESC");
			iVar14 = _databinding_read_data_string_from_parent(uParam0, func_596(15));
			break;
	}
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_1, iVar15);
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_4, iVar14);
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_5, iVar16);
}

void func_627(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(75));
	switch (iVar0)
	{
		case 2:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			uVar2 = _0x27b1ae4d8c652f08(iVar1);
			_0x16efb123c4451032(uVar2, &Var3);
			network_show_profile_ui(&Var3);
			break;
		case 3:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			_0x7baa30c9bbe8aee7(iVar1, &Var10);
			network_show_profile_ui(&(Var10.f_1));
			break;
		case 4:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(51));
			iVar18 = int_to_playerindex(iVar1);
			if (!_network_is_player_index_valid(iVar18) || !network_is_player_active(iVar18))
			{
				return;
			}
			Var3 = { func_854(iVar18) };
			network_show_profile_ui(&Var3);
			break;
		case 22:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_596(50));
			iVar18 = int_to_playerindex(iVar1);
			if (!_network_is_player_index_valid(iVar18) || !network_is_player_active(iVar18))
			{
				return;
			}
			Var3 = { func_854(iVar18) };
			network_show_profile_ui(&Var3);
			break;
	}
}

void func_628(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_855(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723 = iVar0;
	}
	else if (uParam0->f_723 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 2, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_629(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_856(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_1 = iVar0;
	}
	else if (uParam0->f_723.f_1 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 3, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_630(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_857(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_2 = iVar0;
	}
	else if (uParam0->f_723.f_2 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 4, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_631(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_858(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_3 = iVar0;
	}
	else if (uParam0->f_723.f_3 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 5, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_632(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_859(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_4 = iVar0;
	}
	else if (uParam0->f_723.f_4 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 6, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_633(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_860(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_5 = iVar0;
	}
	else if (uParam0->f_723.f_5 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 7, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_634(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_861(iParam2);
	if (network_is_host_of_this_script())
	{
		uParam0->f_723.f_6 = iVar0;
	}
	else if (uParam0->f_723.f_6 != iVar0)
	{
		iVar1 = get_network_time_accurate();
		if (get_time_difference(uParam1->f_93.f_26, iVar1) > 100)
		{
			func_576(func_225(0, 8), 8, iVar0, -1, -1, -1);
			uParam1->f_93.f_26 = iVar1;
		}
	}
}

void func_635(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if ((iParam4 < 0 || iParam4 >= iParam3) || uParam2->f_93.f_6 == iParam4)
	{
		return;
	}
	uParam2->f_93.f_6 = iParam4;
	iVar0 = func_469(uParam0, uParam2->f_93.f_6);
	if (uParam2->f_93.f_8 >= iVar0)
	{
		uParam2->f_93.f_8 = (iVar0 - 1);
	}
	func_667(uParam2, iVar0, 0, 0);
	func_614(uParam0, &(uParam2->f_93), (uParam2->f_93.f_5297 + 1 % 2), uParam2->f_93.f_8);
	_databinding_write_data_string(uParam2->f_93.f_30.f_21, _create_var_string(2, uParam2->f_93.f_3405[uParam2->f_93.f_6]));
	_databinding_write_data_string(uParam2->f_93.f_30.f_24, _create_var_string(2, "MP_LOBBY_TEAM_COUNT", iVar0, &(uParam0->f_7[uParam2->f_93.f_6])));
	iVar1 = player_id();
	iVar2 = func_234(uParam0, iVar1);
	bVar3 = uParam2->f_93.f_6 != iVar2;
	_databinding_write_data_bool(uParam2->f_93.f_57.f_82, bVar3);
	if (!func_149(iVar1, 65536) && func_30((*uParam1)[participant_id_to_int()]) != 8)
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_83, bVar3);
	}
	if (func_128(&(uParam2->f_93), 8))
	{
		func_862(&(uParam2->f_93), uParam2->f_93.f_6);
		func_863(&(uParam2->f_93), func_268(uParam1));
		if (func_149(iVar1, 65536))
		{
			bVar3 = true;
		}
		_databinding_write_data_bool(uParam2->f_93.f_57.f_30.f_1, !bVar3);
		_databinding_write_data_bool(uParam2->f_93.f_57.f_30.f_21, !bVar3);
	}
	_databinding_write_data_string(uParam2->f_93.f_30.f_9, _create_var_string(10, "MP_LOBBY_TEAMS_TOOLTIP", uParam2->f_93.f_3405[iParam4]));
}

void func_636(var uParam0, var uParam1, var uParam2)
{
	iVar0 = _databinding_read_data_int_from_parent(*uParam2, func_596(34));
	StringCopy(&cVar1, "Role_", 24);
	StringIntConCat(&cVar1, iVar0, 24);
	func_431(_databinding_read_data_int_from_parent(*uParam2, &cVar1), uParam0, uParam1);
}

void func_637()
{
	func_864();
}

void func_638(struct<4> Param0, int iParam4)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	switch (iParam4)
	{
		case 778915895:
			if (_databinding_read_data_bool_from_parent(Param0.f_3, func_596(86)))
			{
				return;
			}
			else if (!func_865())
			{
				func_625(Param0.f_3);
			}
			_databinding_write_data_bool_from_parent(Param0.f_3, func_596(86), true);
			func_866(Param0.f_3);
			break;
		case 1126679425:
			Var0 = Param0.f_1;
			func_867(Var0, &Var0, 2, -1);
			func_868(player_id(), 0);
			func_870(func_869(Var0));
			func_871(&Var0);
			_launch_app_by_hash_with_entry(-1641598689, 1731040532);
			break;
		case 863036578:
			func_872(player_id(), &vVar34);
			_0xe0884c184728c75b(vVar34, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 2099367966:
			iVar40 = func_873(player_id(), 1);
			vVar37 = { func_874(iVar40) };
			_0xe0884c184728c75b(vVar37, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case -1121162991:
			vVar41 = { func_875() };
			_0xe0884c184728c75b(vVar41, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 510323272:
			vVar44 = { Global_1051439->f_3745[39]->f_1 };
			_0xe0884c184728c75b(vVar44, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 179854274:
			func_876(17745825, 0, 0, 0, 1, 0, 0);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

void func_639(float fParam0)
{
	if (Global_1071686->f_22961 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1071686->f_22961 = fParam0;
		}
	}
}

int func_640(var uParam0)
{
	if (func_574(uParam0))
	{
		if (func_877())
		{
			func_182(1);
			return 1;
		}
		func_470(&(uParam0->f_93), 256);
		uParam0->f_93.f_5299 = { 0f, 0f, 0f };
		network_set_in_mp_cutscene(true, true, 32, true);
	}
	else
	{
		uParam0->f_93.f_5299 = { func_878(func_130()) };
	}
	if (!func_879(&(uParam0->f_93)))
	{
		return 1;
	}
	if (!func_880(uParam0))
	{
		return 1;
	}
	if (!func_881(uParam0))
	{
		return 1;
	}
	if (!func_137(8))
	{
		func_443(&(uParam0->f_93));
	}
	func_131(1, func_130());
	return 2;
}

void func_641(var uParam0, var uParam1)
{
	switch (Global_2097152->f_31)
	{
		case 149530285:
			func_882(&(uParam1->f_3475), 0);
			break;
		case -1742691940:
			func_882(&(uParam1->f_3475), 1);
			break;
		case 628988510:
			func_882(&(uParam1->f_3475), 2);
			break;
	}
	Var0 = { func_884(0, 1, 0, func_883()) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		Var4.f_9 = -1591664384;
		if (func_186(Var0, &Var4, 0, 0, -1))
		{
			(*uParam0)[participant_id_to_int()]->f_31 = Var4.f_4;
			func_885(&Var4, func_883(), 0);
			func_886((*uParam0)[participant_id_to_int()], Var4.f_4, Var4);
		}
	}
	else
	{
		(*uParam0)[participant_id_to_int()]->f_31 = 559905966;
		(*uParam0)[participant_id_to_int()]->f_32 = func_832(559905966);
		uParam1->f_3475.f_53 = 808655744;
		func_769(&(uParam1->f_3475), 1);
	}
}

bool func_642()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_643()
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		vVar0.f_2 = uVar3;
	}
	fVar4 = get_gameplay_cam_relative_heading();
	if (func_176(vVar0))
	{
		return;
	}
	func_887(vVar0, fVar4);
	func_59(1, 1);
}

bool func_644(int iParam0)
{
	switch (iParam0)
	{
		case 924267974:
			if ((((((((!_is_imap_active(iParam0) || !_is_imap_active(-1503851195)) || !_is_imap_active(-1342300025)) || !_is_imap_active(2029007468)) || !_is_imap_active(-1800377876)) || !_is_imap_active(-1424779606)) || !_is_imap_active(-961163794)) || !_is_imap_active(-1897865659)) || !_is_imap_active(-1725697333))
			{
				func_888(iParam0);
				func_888(-1503851195);
				func_888(-1342300025);
				func_888(2029007468);
				func_888(-1800377876);
				func_888(-1424779606);
				func_888(-961163794);
				func_888(-1897865659);
				func_888(-1725697333);
				return false;
			}
			return true;
		case 2096114765:
			if (!_is_imap_active(iParam0) || !_is_imap_active(-1373409788))
			{
				func_888(iParam0);
				func_888(-1373409788);
				return false;
			}
			return true;
		case 254481872:
			if (!_is_imap_active(iParam0) || !_is_imap_active(-483215130))
			{
				func_888(iParam0);
				func_888(-483215130);
				return false;
			}
			return true;
		case 1984181016:
			if (((((!_is_imap_active(iParam0) || !_is_imap_active(-1790706759)) || !_is_imap_active(386105150)) || !_is_imap_active(411599432)) || !_is_imap_active(709895639)) || !_is_imap_active(1008617843))
			{
				func_888(iParam0);
				func_888(-1790706759);
				func_888(386105150);
				func_888(411599432);
				func_888(709895639);
				func_888(1008617843);
				return false;
			}
			return true;
		case 511673431:
			if (!_is_imap_active(iParam0) || !_is_imap_active(-269787403))
			{
				func_888(iParam0);
				func_888(-269787403);
				return false;
			}
			return true;
		default:
			break;
	}
	if (!_is_imap_active(iParam0))
	{
		func_888(iParam0);
		return false;
	}
	return true;
}

bool func_645()
{
	sVar0 = func_779();
	if (!does_anim_dict_exist(sVar0))
	{
		return true;
	}
	else if (!has_anim_dict_loaded(sVar0))
	{
		request_anim_dict(sVar0);
		return false;
	}
	return true;
}

bool func_646()
{
	if (!has_model_loaded(iLocal_24))
	{
		request_model(iLocal_24, false);
		return false;
	}
	return true;
}

bool func_647()
{
	if (func_697(110))
	{
		return true;
	}
	return false;
}

bool func_648(var uParam0)
{
	sVar0 = func_889(uParam0);
	if (!_does_anim_scene_exist(uParam0->f_4030))
	{
		uParam0->f_4030 = _create_anim_scene(sVar0, 1, 0, false, true);
		return false;
	}
	else if (!_is_anim_scene_loaded(uParam0->f_4030, true, false))
	{
		if (!_is_anim_scene_loading(uParam0->f_4030, true))
		{
			load_anim_scene(uParam0->f_4030);
		}
		return false;
	}
	return true;
}

bool func_649(var uParam0)
{
	if (!func_304(uParam0, &uVar0))
	{
		return false;
	}
	iVar10 = 0;
	if (!func_305(&uVar0, &uVar5, &iVar10))
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 <= (iVar10 - 1))
	{
		if (!func_306(&uVar5, iVar12, &iVar11))
		{
			return false;
		}
		if (!_has_scenario_type_loaded(iVar11, false))
		{
			return false;
		}
		iVar12++;
	}
	return true;
}

void func_650()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

bool func_651(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_652(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		func_890(1);
		Global_1071686->f_28662.f_8 = iParam1;
	}
	else
	{
		func_890(2);
		if (bParam2)
		{
			func_890(4);
		}
		else
		{
			func_891(4);
		}
	}
}

void func_653()
{
	func_892();
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 1);
}

int func_654(int iParam0)
{
	if (iParam0 == 255)
	{
		return &Global_1102219;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return Global_1100469[iParam0];
	}
	return 26;
}

bool func_655()
{
	return _is_anim_scene_started(Global_1071686->f_28662.f_65.f_20, false);
}

void func_656(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1071686->f_28662.f_65.f_28 = 1;
		Global_1071686->f_28662.f_65.f_29 = iParam3;
		Global_1071686->f_28662.f_65.f_26 = iParam6;
		Global_1071686->f_28662.f_65.f_27 = iParam8;
		if (bParam7)
		{
			set_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
	else
	{
		Global_1071686->f_28662.f_65.f_30 = 1;
		Global_1071686->f_28662.f_65.f_33 = !bParam1;
		Global_1071686->f_28662.f_65.f_31 = iParam2;
		Global_1071686->f_28662.f_65.f_32 = iParam4;
		Global_1071686->f_28662.f_65.f_35 = iParam5;
		if (is_bit_set(Global_1071686->f_28662.f_65.f_8, 18))
		{
			clear_bit(&(Global_1071686->f_28662.f_65.f_8), 18);
		}
	}
}

bool func_657(var uParam0)
{
	if (!func_304(uParam0, &Var0))
	{
		return false;
	}
	if (!func_893(uParam0, &Var0))
	{
		return false;
	}
	iVar10 = 0;
	if (!func_305(&Var0, &uVar5, &iVar10))
	{
		return false;
	}
	iVar11 = 0;
	while (iVar11 <= (iVar10 - 1))
	{
		if (!func_894(uParam0, &uVar5, iVar11))
		{
			return false;
		}
		iVar11++;
	}
	iVar11 = iVar10;
	while (iVar11 <= 15)
	{
		uParam0->f_93.f_4033[0]->f_614[iVar11] = iVar11;
		uParam0->f_93.f_4033[1]->f_614[iVar11] = iVar11;
		iVar11++;
	}
	Var12 = { Var0 };
	Var12.f_2 = 26;
	if (!_datafile_get_data_node_index(&(Var12.f_1), &Var12))
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 3)
	{
		if (!func_895(&(uParam0->f_93), &Var12, iVar17))
		{
			return false;
		}
		iVar17++;
	}
	return true;
}

void func_658(var uParam0, var uParam1, var uParam2)
{
	if (!func_137(8))
	{
		if (Global_1572887->f_266.f_92)
		{
			func_29(uParam2, 256);
		}
	}
	func_896(&(uParam2->f_93));
	func_897();
	func_898(uParam0, uParam1, uParam2);
	if (network_is_in_tutorial_session())
	{
		network_end_tutorial_session();
	}
	func_45(&(uParam2->f_10), 1);
	_hide_ped_weapons(player_ped_id(), 2, false);
	set_frontend_active(false);
}

void func_659(var uParam0, var uParam1, var uParam2)
{
	iVar0 = player_ped_id();
	iVar1 = func_899(255);
	iVar2 = func_900();
	if (((iVar2 != (*uParam1)[0]->f_25 || iVar1 != (*uParam1)[0]->f_24) && !func_901()) && _0xa0bc8faed8cfeb3c(iVar0))
	{
		(*uParam1)[0]->f_24 = iVar1;
		(*uParam1)[0]->f_25 = iVar2;
	}
	bVar3 = (func_127(&(uParam2->f_93)) != 9 || func_128(&(uParam2->f_93), 128));
	func_902(&(uParam2->f_93));
	iVar8 = func_903(&(uParam2->f_93), 0);
	iVar7 = 0;
	while (iVar7 < 32)
	{
		if (iVar7 <= -1)
		{
			iVar6 = int_to_participantindex(0);
		}
		else
		{
			iVar6 = int_to_participantindex(iVar7);
		}
		if (!network_is_participant_active(iVar6) || func_275(uParam0, iVar7))
		{
			func_471(&(uParam2->f_93), uParam2->f_93.f_5297, iVar7);
		}
		else
		{
			iVar5 = network_get_player_index(iVar6);
			bVar11 = _0xa0bc8faed8cfeb3c(get_player_ped(iVar5));
			if (uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_6 && !bVar11)
			{
				uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_6 = 0;
			}
			iVar9 = func_234(uParam0, iVar5);
			func_904(iVar7, func_571(uParam0, uParam2, iVar7, iVar9));
			if ((!func_128(&(uParam2->f_93), 4) && iVar9 != uParam2->f_93.f_6) && 1)
			{
				func_471(&(uParam2->f_93), uParam2->f_93.f_5297, iVar7);
			}
			else
			{
				iVar10 = iVar5;
				if (!func_905(iVar10))
				{
				}
				else if (func_128(&(uParam2->f_93), 65536) && iVar7 < 16)
				{
				}
				else
				{
					iVar4 = func_906(iVar10);
					if (does_entity_exist(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3))
					{
						if (_0xaa35fd9abab490a3(iVar5) && _0xef6f2a35faaf2ed7(iVar5))
						{
							func_907(iVar7, 2);
						}
						else
						{
							func_907(iVar7, 0);
						}
						if (iVar4 != 0 && iVar4 != uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_2)
						{
							func_471(&(uParam2->f_93), uParam2->f_93.f_5297, iVar7);
						}
						else
						{
							if ((uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_4 && !uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_6) && &uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7] != (*uParam1)[iVar7]->f_24)
							{
								_0xc2ef407645beecdc(_get_label_text_by_hash((*uParam1)[iVar7]->f_24));
								func_471(&(uParam2->f_93), uParam2->f_93.f_5297, iVar7);
								uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7] = (*uParam1)[iVar7]->f_24;
								uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_1 = (*uParam1)[iVar7]->f_25;
							}
							if (!_0xa0bc8faed8cfeb3c(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3))
							{
							}
							else
							{
								if (uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_8 == 0)
								{
									uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_8 = Global_1296859->f_20;
								}
								iVar12 = get_entity_alpha(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3);
								if (iVar12 < 255)
								{
									iVar13 = (Global_1296859->f_20 - uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_8);
									if (IntToFloat(iVar13) < 125f)
									{
										iVar14 = round(((IntToFloat(iVar13) / 125f) * 255f));
										set_entity_alpha(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, iVar14, false);
									}
									else
									{
										set_entity_alpha(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 255, false);
									}
								}
								if (!ped_has_use_scenario_task(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3))
								{
									set_ped_reset_flag(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 29, true);
									iVar15 = uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_7;
									_task_use_scenario_point(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, &(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_20[iVar15]), 0, 0, false, true, 0, false, -1f, false);
								}
								else
								{
									freeze_entity_position(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, false);
									_0x9587913b9e772d29(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 0);
								}
								Jump @2294; //curOff = 1271
								if (iVar8 >= 16 || iVar8 < 0)
								{
								}
								else if (!_does_scenario_point_exist(&(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_20[iVar8])))
								{
									iVar8 = func_903(&(uParam2->f_93), iVar8 + 1);
								}
								else
								{
									if (iVar4 != 0 && !uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_5)
									{
										request_model(iVar4, false);
										if (!has_model_loaded(iVar4))
										{
										}
										else
										{
											uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_2 = iVar4;
											uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_5 = 1;
											if (!bVar11)
											{
											}
											else
											{
												if (uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_2 == 0)
												{
													if (!uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_4)
													{
														uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3 = clone_ped(get_player_ped(iVar5), 0f, false, false);
														set_ped_lod_multiplier(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 5f);
														set_entity_coords(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, *uParam2->f_93.f_4033[0] + Vector(0f, -7.5f, -7.5f), false, false, true, true);
														freeze_entity_position(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, true);
													}
													else
													{
														iVar8 = uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_7;
													}
												}
												else
												{
													uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3 = func_908(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_2, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 1);
													uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7] = (*uParam1)[iVar7]->f_24;
													uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_1 = (*uParam1)[iVar7]->f_25;
												}
												_0x9587913b9e772d29(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 0);
												set_blocking_of_non_temporary_events(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, true);
												set_ped_config_flag(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 259, true);
												disable_ped_pain_audio(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, true);
												stop_ped_speaking(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, true);
												set_ped_reset_flag(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 29, true);
												_task_use_scenario_point(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, &(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_20[iVar8]), 0, 0, false, true, 0, false, -1f, false);
												if (!bVar3)
												{
													set_entity_alpha(uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3, 0, false);
												}
												func_909(iVar7, -2068940184);
												func_910(iVar7, uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_3);
												func_907(iVar7, 0);
												uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_4 = 1;
												uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_325[iVar7]->f_7 = iVar8;
												uParam2->f_93.f_4033[uParam2->f_93.f_5297]->f_20[iVar8]->f_1 = iVar7;
												iVar8 = func_903(&(uParam2->f_93), iVar8 + 1);
											}
										}
										iVar7++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_660(var uParam0, var uParam1)
{
	iVar0 = func_219(uParam0, uParam1);
	iVar2 = 15;
	bVar3 = (func_221(uParam0, 1024) && func_203(&(uParam0->f_731)));
	if (bVar3)
	{
		iVar1 = ceil((IntToFloat((iVar0 - func_204(&(uParam0->f_731)))) / 1000f));
		func_912(func_911(iVar1, 0), uParam1->f_10.f_18);
		_databinding_write_data_bool(uParam1->f_93.f_30.f_14, true);
		_databinding_write_data_bool(uParam1->f_93.f_30.f_18, iVar1 > iVar2);
		_databinding_write_data_string(uParam1->f_93.f_30.f_17, "GAME_START_TIMER");
	}
	else
	{
		iVar1 = (iVar0 / 1000);
		func_912(-1, uParam1->f_10.f_18);
		_databinding_write_data_bool(uParam1->f_93.f_30.f_14, false);
		_databinding_write_data_bool(uParam1->f_93.f_30.f_18, false);
		_databinding_write_data_string(uParam1->f_93.f_30.f_17, "GAME_START_TIMER_WAITING");
	}
	if (iVar1 < 0)
	{
		return;
	}
	_databinding_write_data_string(uParam1->f_93.f_30.f_16, func_913(iVar1));
	iVar4 = (iVar1 - iVar2);
	if (iVar4 >= 0)
	{
		_databinding_write_data_string(uParam1->f_93.f_30.f_20, func_913(iVar4));
	}
}

void func_661(var uParam0, var uParam1, var uParam2)
{
	iVar0 = func_914();
	if (iVar0 != 2)
	{
		if (iVar0 == 1 || uParam2->f_5430 > 3)
		{
			func_39(uParam0, uParam2);
			return;
		}
		else if (iVar0 == 0)
		{
			uParam2->f_5430++;
		}
	}
	_0x1c38c3577901af1f();
	iVar1 = _0x96fd694fe5be55dc(1473691941);
	if (uParam2->f_93.f_2 != iVar1)
	{
		if (uParam2->f_93.f_2 == 409305524 && iVar1 == 723208654)
		{
			_databinding_write_data_string(uParam2->f_93.f_30.f_9, _create_var_string(10, "MP_LOBBY_TEAMS_TOOLTIP", uParam2->f_93.f_3405[uParam2->f_93.f_6]));
		}
		if (uParam2->f_93.f_2 == 306537471)
		{
			func_126(&(uParam2->f_93));
		}
		func_915(uParam0, uParam1, uParam2, iVar1);
	}
	if (func_128(&(uParam2->f_93), 524288) && ((func_211(&(uParam2->f_93.f_5321)) && func_213(&(uParam2->f_93.f_5321)) > 250) || is_screen_faded_out()))
	{
		func_916(&(uParam2->f_93), uParam2->f_93.f_8);
	}
	if (func_128(&(uParam2->f_93), 128) && ((func_211(&(uParam2->f_93.f_5321)) && func_213(&(uParam2->f_93.f_5321)) > 250) || is_screen_faded_out()))
	{
		func_129(&(uParam2->f_93), 512);
		func_917(&(uParam2->f_93));
		if (is_screen_faded_out())
		{
			do_screen_fade_in(125);
		}
		if (iVar1 == -1182353825)
		{
			if (!is_entity_dead(uParam2->f_93.f_3475.f_49))
			{
				vVar2 = { get_ped_bone_coords(uParam2->f_93.f_3475.f_49, 16351, 0f, 0f, 0f) };
				_0x11f32bb61b756732(uParam2->f_93.f_4031, vdist(uParam2->f_93.f_5312, vVar2));
			}
		}
		func_129(&(uParam2->f_93), 128);
	}
	if ((((!&Global_1048581 && uParam2->f_93.f_5302 != 0) && !func_128(&(uParam2->f_93), 128)) && is_screen_faded_out()) && !func_44())
	{
		if ((Global_1296859->f_20 - uParam2->f_93.f_5302) > 125)
		{
			do_screen_fade_in(125);
			uParam2->f_93.f_5302 = 0;
		}
	}
	if (func_128(&(uParam2->f_93), 16384) || func_128(&(uParam2->f_93), 32768))
	{
		func_918(uParam1, uParam2);
	}
	bVar5 = (func_221(uParam0, 1024) && !func_102(uParam1, 8));
	_databinding_write_data_bool(uParam2->f_93.f_30.f_3, bVar5);
	iVar6 = func_187(uParam1, 8);
	iVar7 = func_666(uParam0);
	if (func_224((*uParam1)[participant_id_to_int()], 8))
	{
		_databinding_write_data_string(uParam2->f_93.f_30.f_2, _create_var_string(2, "MP_LOBBY_UNREADY_UP", iVar6, iVar7));
	}
	else
	{
		_databinding_write_data_string(uParam2->f_93.f_30.f_2, _create_var_string(2, "MP_LOBBY_READY_UP", iVar6, iVar7));
	}
	if (func_450(uParam0) == 1)
	{
		_databinding_write_data_string(uParam2->f_93.f_30.f_24, _create_var_string(2, "MP_LOBBY_TEAM_COUNT", iVar7, Global_3145858->f_194));
		func_667(uParam2, iVar7, 1, 0);
	}
	else if (uParam2->f_93.f_6 >= 0 && uParam2->f_93.f_6 < 8)
	{
		iVar8 = func_469(uParam0, uParam2->f_93.f_6);
		func_667(uParam2, iVar8, 1, 0);
		_databinding_write_data_string(uParam2->f_93.f_30.f_24, _create_var_string(2, "MP_LOBBY_TEAM_COUNT", iVar8, &(uParam0->f_7[uParam2->f_93.f_6])));
	}
	if (func_127(&(uParam2->f_93)) != 10 && (func_40(uParam2, 2) || func_919(uParam0, uParam2)))
	{
		iVar9 = func_234(uParam0, player_id());
		func_572("MP_LOBBY_JOIN_TEAM_TICKER", uParam2->f_93.f_3405[iVar9], func_920(player_id(), 1, -1, 0));
		uParam2->f_93.f_5331 = -1;
	}
	iVar10 = func_921(func_782());
	switch (iVar10)
	{
		case 10:
		case 11:
		case 12:
		case 13:
			iVar11 = func_922();
			if (iVar11 == -1)
			{
				_databinding_write_data_bool(uParam2->f_93.f_30.f_25, true);
				_databinding_write_data_string(uParam2->f_93.f_30.f_26, _create_var_string(2, "NOMINATED_QUEUE_NONE"));
			}
			else if (iVar11 > 0)
			{
				_databinding_write_data_bool(uParam2->f_93.f_30.f_25, true);
				_databinding_write_data_string(uParam2->f_93.f_30.f_26, _create_var_string(2, "NOMINATED_QUEUE_NUM", iVar11));
			}
			else
			{
				_databinding_write_data_bool(uParam2->f_93.f_30.f_25, false);
			}
			break;
	}
	func_664(uParam2);
	if (!func_923(uParam2))
	{
	}
	else
	{
		switch (iVar1)
		{
			case 1549204131:
				func_924(uParam0, uParam2, uParam1);
				break;
			case 723208654:
				func_611(uParam0, uParam1, uParam2, 0, 1);
				func_925(uParam1, uParam2);
				break;
			case 409305524:
				func_926(uParam0, uParam2, uParam1);
				break;
			case -1136409476:
				func_927(uParam2);
				break;
			case -587541440:
				func_928(uParam0, uParam2);
				break;
			case 1120962917:
				func_929();
				func_930();
				break;
			case -761066372:
				func_931(&(uParam2->f_93));
				break;
			case 1596028677:
				func_932(&(uParam2->f_93));
				break;
			case 306537471:
				func_933(&(uParam2->f_93));
				break;
			case -1182353825:
				func_925(uParam1, uParam2);
				break;
			case 1268583550:
				break;
		}
	}
}

void func_662(var uParam0)
{
	*uParam0->f_4033[1]->f_3[0] = { func_934(uParam0, *uParam0->f_4033[0]->f_3[0]) };
	uParam0->f_4033[1]->f_3[0]->f_3 = { uParam0->f_4033[0]->f_3[0]->f_3 };
	uParam0->f_4033[1]->f_3[0]->f_3.f_2 = (uParam0->f_4033[1]->f_3[0]->f_3.f_2 + uParam0->f_5296);
	uParam0->f_4033[1]->f_3[0]->f_6 = uParam0->f_4033[0]->f_3[0]->f_6;
	*uParam0->f_4033[1]->f_3[1] = { func_934(uParam0, *uParam0->f_4033[0]->f_3[1]) };
	uParam0->f_4033[1]->f_3[1]->f_3 = { uParam0->f_4033[0]->f_3[1]->f_3 };
	uParam0->f_4033[1]->f_3[1]->f_3.f_2 = (uParam0->f_4033[1]->f_3[1]->f_3.f_2 + uParam0->f_5296);
	uParam0->f_4033[1]->f_3[1]->f_6 = uParam0->f_4033[0]->f_3[1]->f_6;
	if (!does_cam_exist(uParam0->f_4031))
	{
		uParam0->f_4031 = create_cam_with_params("DEFAULT_SCRIPTED_CAMERA", *uParam0->f_4033[uParam0->f_5297]->f_3[uParam0->f_5320], uParam0->f_4033[uParam0->f_5297]->f_3[uParam0->f_5320]->f_3, uParam0->f_4033[uParam0->f_5297]->f_3[uParam0->f_5320]->f_6, false, 2);
		Var0 = 1065353216;
		Var0.f_1 = 1056964608;
		Var0.f_2 = 1132462080;
		Var0.f_3 = 1108082688;
		Var0.f_4 = 1084227584;
		Var0.f_5 = 1152319488;
		Var0.f_6 = 1;
		Var0.f_8 = 1;
		Var0 = 8f;
		Var0.f_6 = 1;
		Var0.f_7 = 0;
		Var0.f_3 = 50f;
		Var0.f_8 = 0;
		Var0.f_9 = 0;
		_0xe4b7945ef4f1bfb2(uParam0->f_4031, &Var0);
		func_902(uParam0);
	}
}

bool func_663()
{
	return Global_263042[&Global_1296859] >= 9;
}

void func_664(var uParam0)
{
	if (func_935() == 2094371892)
	{
		if (_databinding_read_data_bool(uParam0->f_93.f_57.f_74))
		{
			_databinding_write_data_bool(uParam0->f_93.f_57.f_74, false);
			_databinding_write_data_bool(uParam0->f_93.f_57.f_75, false);
		}
		if (_databinding_read_data_bool(uParam0->f_93.f_57.f_67))
		{
			_databinding_write_data_bool(uParam0->f_93.f_57.f_67, false);
			_databinding_write_data_bool(uParam0->f_93.f_57.f_66, false);
		}
	}
}

void func_665(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_936(iParam0, iParam1);
	}
	func_937(4);
	func_938();
	func_939(1);
}

int func_666(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (func_528(uParam0, iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_667(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (0 > iParam1)
	{
		iParam1 = 0;
	}
	if (iParam1 <= 8)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (uParam0->f_93.f_5320 != iVar0)
	{
		if (!func_128(&(uParam0->f_93), 128) && _0x96fd694fe5be55dc(1473691941) == 1549204131)
		{
			uParam0->f_93.f_5320 = iVar0;
			if (bParam2)
			{
				func_444(uParam0, func_940(bParam3, 0, 1500));
			}
		}
	}
}

void func_668(bool bParam0)
{
	func_941(bParam0, 0, 0, 0, 0);
}

void func_669(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (iParam1 == -1)
		{
			return;
		}
		Global_1071686->f_28662.f_58.f_2 = 1;
		Global_1071686->f_28662.f_58 = iParam1;
	}
	else
	{
		Global_1071686->f_28662.f_58.f_3 = 1;
		Global_1071686->f_28662.f_58.f_4 = iParam2;
	}
}

void func_670(int iParam0)
{
	if (Global_1071686->f_21952.f_581 != iParam0)
	{
		Global_1071686->f_21952.f_581 = iParam0;
	}
}

int func_671(var uParam0, int iParam1)
{
	if (!network_is_player_a_participant(iParam1))
	{
		return -1;
	}
	return (*uParam0)[network_get_participant_index(iParam1)]->f_26;
}

int func_672(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2134370571:
			return 13;
		case -2074263068:
			return 28;
		case -1915012460:
			return 17;
		case -1899158261:
			return 6;
		case -1726449085:
			return 4;
		case -1708466388:
			return 11;
		case -1369841721:
			return 24;
		case -1356044053:
			return 8;
		case -1315230160:
			return 26;
		case -1217346486:
			return 31;
		case -1194356600:
			return 29;
		case -821459456:
			return 14;
		case -811649290:
			return 15;
		case -795906647:
			return 20;
		case -630290199:
			return 5;
		case -512310598:
			return 1;
		case -273652689:
			return 2;
		case -195591998:
			return 10;
		case 0:
			return 0;
		case 2623192:
			return 25;
		case 70946373:
			return 18;
		case 160396598:
			return 23;
		case 240043260:
			return 3;
		case 492126343:
			return 16;
		case 1097033514:
			return 27;
		case 1161436106:
			return 7;
		case 1162603881:
			return 9;
		case 1529593823:
			return 30;
		case 1690199860:
			return 19;
		case 1812426623:
			return 12;
		case 1834964020:
			return 22;
		case 1905099953:
			return 21;
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

int func_673(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	Var33 = 1693123496;
	if (iParam3 >= 0)
	{
		Var33.f_1 = func_942(iParam3);
	}
	else
	{
		Var33.f_1 = 114550809;
	}
	Var33.f_2 = 459292749;
	Var33.f_3 = 1;
	Var33.f_4 = iParam0;
	_0x91ded5dd64bb2691(&Var33);
	if (iParam4 == 0)
	{
		iParam4 = func_943();
	}
	iVar40 = func_940(iParam4 == 24043185, 1830115867, 472588819);
	iVar41 = func_940(iParam4 == 24043185, 40357956, -1830132248);
	while (_0xed4413cee1bf142c(&Var33))
	{
		if (_0x44b3a36933ac009c(&uVar0, &Var33, iVar40))
		{
			if (iVar1 >= 15)
			{
			}
			else
			{
				Var2[iVar1] = uVar0;
				Var2[iVar1]->f_1 = 0;
				if (_0x44b3a36933ac009c(&uVar0, &Var33, iVar41))
				{
					Var2[iVar1]->f_1 = uVar0;
				}
				iVar1++;
			}
			if (iVar1 <= 0)
			{
				return 0;
			}
			if (iParam5 < 0 || iParam5 >= iVar1)
			{
				iParam5 = func_944(iVar1);
			}
			*uParam1 = &Var2[iParam5];
			*uParam2 = Var2[iParam5]->f_1;
			return 1;
		}
	}
}

void func_674(bool bParam0)
{
	func_155();
	if (Global_1139381->f_4779 != 0)
	{
		func_153(25, Global_1139381->f_4779.f_4, 0, 0, 0);
	}
	else if (bParam0)
	{
		func_945(&(Global_1952637->f_1675), Global_34, 1, -1, 1, 1, 1, 1);
	}
	else
	{
		func_153(2, 0, 2, 0, 0);
	}
}

void func_675(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

bool func_676(var uParam0)
{
	Var0 = func_946(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	return _0xed4413cee1bf142c(&Var0);
}

bool func_677(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_946(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_948(uParam0, func_947(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_949(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_947(iVar0);
		}
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_488(iVar3, 1);
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
					func_500(iVar3, 16, 6);
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
							if (func_950(iVar3) && func_951(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_952(uParam0, iVar11, func_496(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_943() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_496(&(uParam0->f_1[34])) == 0) && !func_152(32)) && !func_152(64))
					{
						uParam0->f_1[iVar1] = func_953(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_954(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_678(float fParam0)
{
}

void func_679()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

void func_680(var uParam0, int iParam1)
{
	if (!func_147(uParam0, 0))
	{
		return;
	}
	iParam1 = func_346(iParam1, 0, 7);
	if ((*Global_263042)[network_player_id_to_int()]->f_1.f_30 == iParam1)
	{
		return;
	}
	(*Global_263042)[network_player_id_to_int()]->f_1.f_30 = iParam1;
}

void func_681(int iParam0, int iParam1)
{
	if (!func_148(255))
	{
		return;
	}
	if (func_702() != iParam0)
	{
		return;
	}
	iParam1 = func_346(iParam1, 0, 7);
	if (Global_265377->f_124517.f_71.f_30 == iParam1)
	{
		return;
	}
	Global_265377->f_124517.f_71.f_30 = iParam1;
}

bool func_682(var uParam0)
{
	if (!func_147(uParam0, 0))
	{
		return false;
	}
	iVar0 = Global_263042[network_player_id_to_int()];
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		return true;
	}
	if (func_702() == uParam0->f_17)
	{
		return true;
	}
	return false;
}

void func_683(var uParam0)
{
	Global_265377->f_124517.f_3 = { uParam0->f_21 };
}

void func_684()
{
	Var0 = { func_475() };
	if (!func_325(Var0))
	{
		return;
	}
	if (func_477(Var0))
	{
		return;
	}
	if (func_478(Var0))
	{
		return;
	}
	func_955(Var0);
}

void func_685()
{
	func_956();
	_0xde544b7ec0c187cc(&(Global_1071686->f_28345));
}

void func_686()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28346));
}

void func_687()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28347));
}

void func_688()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28349));
}

void func_689()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28350));
}

void func_690()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28348));
}

void func_691()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_957(int_to_playerindex(iVar0), 0);
		iVar0++;
	}
}

void func_692()
{
	(*Global_1100469)[network_player_id_to_int()]->f_36 = { Var0 };
}

void func_693()
{
	(*Global_1100469)[network_player_id_to_int()]->f_29 = { Var0 };
	(*Global_1100469)[network_player_id_to_int()]->f_43 = 0;
	(*Global_1100469)[network_player_id_to_int()]->f_44 = 0;
	Global_1102219->f_3665 = 0;
}

void func_694(int iParam0)
{
	(*Global_263042)[&Global_1296859] = iParam0;
	func_958();
}

void func_695(var uParam0)
{
	if (uParam0->f_5303)
	{
		_0xb8c984c0d47f4f07(uParam0->f_5304, uParam0->f_5304.f_1, round(uParam0->f_5304.f_2));
		_0xc332c91388f5580b(uParam0->f_5310);
		_0xfe7966df01452f32(uParam0->f_5307, uParam0->f_5307.f_1, uParam0->f_5307.f_2);
	}
}

int func_696(var uParam0)
{
	if (Global_3145858->f_238 >= 0)
	{
		return func_959(Global_3145858->f_238, Global_3145858->f_239);
	}
	if (network_is_clock_time_overridden())
	{
		_network_get_clock_time_override(&iVar0, &iVar1, &uVar2);
	}
	else
	{
		network_get_global_multiplayer_clock(&iVar0, &iVar1, &uVar2);
	}
	return func_959(iVar0, iVar1);
}

bool func_697(int iParam0)
{
	return func_79(&(Global_524288->f_6), iParam0);
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case -1439599467:
		case 0:
		case 1679686673:
			return 0;
	}
	return iParam0;
}

void func_699(var uParam0)
{
	iVar0 = network_player_id_to_int();
	if ((!func_53(255) && !func_15(&((*Global_263042)[iVar0]->f_1), 8)) && !func_15(&((*Global_263042)[iVar0]->f_1), 512))
	{
		iVar1 = player_id();
		vVar2 = { func_960(uParam0->f_10.f_21.f_2, func_149(iVar1, 1024)) };
		if (!func_50(vVar2, func_49(iVar1), 1.5f, 1))
		{
			iVar5 = player_ped_id();
			vVar2.f_2 = (vVar2.z + 1f);
			set_entity_coords(iVar5, vVar2, false, false, true, true);
			_0x9587913b9e772d29(iVar5, 0);
		}
	}
}

void func_700(var uParam0)
{
	if (uParam0->f_8 == -1)
	{
		return;
	}
	if (does_entity_exist(uParam0->f_4033[uParam0->f_5297]->f_325[uParam0->f_8]->f_3))
	{
		_0x541e5b41dca45828(uParam0->f_4033[uParam0->f_5297]->f_325[uParam0->f_8]->f_3, 1, 1);
	}
}

void func_701(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 < iParam1)
	{
		*uParam0 = iParam1;
	}
}

int func_702()
{
	return Global_265377->f_124517.f_71.f_17;
}

void func_703(var uParam0, int iParam1, bool bParam2)
{
	if (!func_147(uParam0, 0))
	{
		return;
	}
	iParam1 = func_346(iParam1, -1, 7);
	if ((*Global_263042)[&Global_1296859]->f_1.f_35 == iParam1 && !bParam2)
	{
		return;
	}
	(*Global_263042)[&Global_1296859]->f_1.f_35 = iParam1;
}

void func_704(int iParam0, int iParam1, bool bParam2)
{
	if (!func_148(255))
	{
		return;
	}
	if (func_702() != iParam0)
	{
		return;
	}
	iParam1 = func_346(iParam1, -1, 7);
	if (Global_265377->f_124517.f_71.f_35 == iParam1 && !bParam2)
	{
		return;
	}
	Global_265377->f_124517.f_71.f_35 = iParam1;
}

void func_705(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	clear_bit((*uParam0)[iVar0], iVar1);
}

void func_706(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	set_bit((*uParam0)[iVar0], iVar1);
}

void func_707(var uParam0, int iParam1, var uParam2)
{
	iVar2 = 0;
	while (iVar2 <= 15)
	{
		if (&(*uParam2)[iParam1]->f_3[iVar2] == 0)
		{
		}
		else
		{
			if (_is_weapon_melee(&((*uParam2)[iParam1]->f_3[iVar2])))
			{
				sVar1 = _create_var_string(34, "MP_STARTING_WEAPON_CONTENTS_LINE", 1, _0x6d3ac61694a791c5(&((*uParam2)[iParam1]->f_3[iVar2])));
			}
			else
			{
				sVar1 = _create_var_string(34, "MP_STARTING_WEAPON_CONTENTS_LINE", (*uParam2)[iParam1]->f_3[iVar2]->f_3, _0x6d3ac61694a791c5(&((*uParam2)[iParam1]->f_3[iVar2])));
			}
			if (iVar2 == 0)
			{
				sVar0 = sVar1;
			}
			else
			{
				sVar0 = _create_var_string(42, "VAR_STRING_2", sVar0, sVar1);
			}
			iVar2++;
		}
	}
	_databinding_write_data_string(uParam0->f_270, sVar0);
}

bool func_708(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_709(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

struct<2> func_710(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_376();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_711(bool bParam0)
{
	if (!bParam0)
	{
		func_74(14);
	}
	else
	{
		func_75(14);
	}
}

void func_712()
{
	func_143(1);
	func_143(2);
	func_143(4);
	func_143(8);
	func_143(16);
	func_143(32);
	func_143(64);
	func_143(128);
	func_143(256);
	func_143(512);
	func_143(1024);
	func_143(2048);
	func_143(4096);
	func_143(8192);
	func_144();
	func_145();
}

int func_713(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_714(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_961();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_962();
	Var0.f_3 = iParam1;
	func_963(Var0, 0);
	return Var0;
}

void func_715(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

void func_716(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_717(struct<2> Param0)
{
	if (!func_325(Param0))
	{
		return -1;
	}
	iVar0 = func_964(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_718(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_965())
	{
		return 0;
	}
	if (!func_62())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_966(&Global_0, 8);
	}
	func_966(&Global_0, 1);
	return 1;
}

void func_719(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_967(func_728(Param0));
	iVar1 = func_184(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_69() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_968(Param0, &Var2);
	}
	if (network_is_player_active(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	_0xd5910ecf81a2278c(iVar0, iVar1, iParam2, &Var2);
}

void func_720(struct<2> Param0, int iParam2)
{
	if (!func_325(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_969(Param0);
	}
	else
	{
		func_970(Param0, iParam2);
	}
	func_971();
}

struct<2> func_721(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_722(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_723(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_972(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_973(Global_1940258, 8388608);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_724(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_974(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_975(cVar2);
			}
			else
			{
				func_976();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_725(bool bParam0)
{
	if (!bParam0 && func_977(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_726(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_727(struct<2> Param0)
{
	return func_979(func_978(Param0));
}

int func_728(var uParam0, var uParam1)
{
	return uParam0;
}

int func_729(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_722(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_730(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_731(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -504335712;
	uParam0->f_3 = 0;
	uParam0->f_4 = 3;
}

void func_732(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_733(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_734(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_735(var uParam0)
{
	iVar1 = 1;
	_copy_memory(uParam0, &uVar0, iVar1);
}

void func_736(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_20), "", 64);
}

void func_737(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_738(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
}

void func_739(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_980(uParam0, 1))
	{
		func_981(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			uParam0->f_2[iVar0]->f_1 = iParam2;
			return;
		}
		if (Global_1952637->f_83[&uParam0->f_2[iVar0]]->f_2 > Global_1952637->f_83[iParam1]->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*uParam0->f_2[iVar1] = { *(uParam0->f_2[(iVar1 - 1)]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0] = iParam1;
			uParam0->f_2[iVar0]->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0]->f_1 = iParam2;
	uParam0->f_2[*uParam0] = iParam1;
	*uParam0++;
}

int func_740(int iParam0)
{
	return iParam0;
}

int func_741(int iParam0, int iParam1)
{
	if (!func_982(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_742(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_743(int iParam0, int iParam1)
{
	if (!func_983(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_497(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_984(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_985(iVar1))
		{
			func_986(10, iParam1);
		}
	}
	func_986(iVar0, iParam1);
}

bool func_744(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (_0x44b3a36933ac009c(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return false;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	else
	{
		uParam1->f_3 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 1330140418))
	{
		uParam1->f_4 = iVar0;
	}
	else
	{
		uParam1->f_4 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 2055530431))
	{
		uParam1->f_5 = iVar0;
	}
	else
	{
		uParam1->f_5 = 0;
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	else
	{
		uParam1->f_13 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_987(iVar0);
	}
	if (_0xb2b42607f7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	else
	{
		uParam1->f_15 = 0f;
	}
	if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	else
	{
		uParam1->f_6 = 0;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		else
		{
			uParam1->f_8 = 0;
		}
		if (_0xb2b42607f7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
		else
		{
			uParam1->f_14 = 0f;
		}
	}
	else
	{
		uParam1->f_7 = 0;
		uParam1->f_8 = 0;
		uParam1->f_14 = 0f;
	}
	if (_0x44b3a36933ac009c(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (_0x52fc26d2d2fc2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	else
	{
		uParam1->f_9 = 0;
		uParam1->f_10 = 0;
		uParam1->f_11 = 0;
		uParam1->f_12 = 0;
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = 459292749;
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	_0x91ded5dd64bb2691(uParam0);
	if (_0x52fc26d2d2fc2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	return true;
}

void func_745(var uParam0, bool bParam1)
{
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_988(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_761(889965687, func_989(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_990(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_991(func_761(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_992(Var1.f_16);
}

void func_746(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_747(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_993(uParam0, uParam1);
	}
	else
	{
		func_994(uParam0, (*uParam1)[iParam2]);
	}
}

void func_748(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		_set_ped_overlay_textures(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		_set_ped_overlay_palette(*uParam0, uParam1->f_2, uParam1->f_9);
		_set_ped_overlay_colour(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		_0xf2ea041f1146d75b(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		_0x057c4f092e2298be(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	_sep_ped_overlay_variation(*uParam0, uParam1->f_2, uParam1->f_6);
	_set_ped_overlay_opacity(*uParam0, uParam1->f_2, uParam1->f_13);
}

int func_749(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_751(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1649591222;
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = 1293082345;
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = -1480791665;
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = 1923799069;
			break;
		case 12:
			iVar0 = -605765767;
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

bool func_752(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_753(int iParam0)
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
		func_995(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_996(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_754(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&uParam0->f_32[iVar0] == iParam1)
		{
			if (iVar0 == 0)
			{
				iVar1 = uParam0->f_32[iVar0]->f_1;
			}
			else if (uParam0->f_32[iVar0]->f_1 != iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_755(var uParam0)
{
	Var0 = 8;
	Var0.f_1 = 32;
	Var0.f_1.f_34 = 32;
	Var0.f_1.f_34.f_34 = 32;
	Var0.f_1.f_34.f_34.f_34 = 32;
	Var0.f_1.f_34.f_34.f_34.f_34 = 32;
	Var0.f_1.f_34.f_34.f_34.f_34.f_34 = 32;
	Var0.f_1.f_34.f_34.f_34.f_34.f_34.f_34 = 32;
	Var0.f_1.f_34.f_34.f_34.f_34.f_34.f_34.f_34 = 32;
	iVar273 = 0;
	while (iLocal_276 <= 31)
	{
		iVar275 = int_to_participantindex(iLocal_276);
		if (!network_is_participant_active(iLocal_278))
		{
		}
		else
		{
			iVar274 = &uParam0->f_32[iLocal_276];
			if (iLocal_277 < 0 || iLocal_277 >= 8)
			{
			}
			else
			{
				(*Var0[iLocal_277])[Var0[iLocal_277]->f_33] = iLocal_276;
				Var0[iLocal_277]->f_33++;
			}
		}
		iVar273 = iLocal_276 + 1;
	}
	iVar274 = 0;
	while (iLocal_277 <= (uParam0->f_516 - 1))
	{
		iVar273 = 0;
		while (iLocal_276 <= (Var0[iLocal_277]->f_33 - 1))
		{
			iVar278 = get_random_int_in_range(0, Var0[iLocal_277]->f_33);
			if (iLocal_276 == iLocal_281)
			{
			}
			else
			{
				uVar276 = Var0[iLocal_277][iLocal_276];
				uVar277 = Var0[iLocal_277][iLocal_281];
				uVar279 = uParam0->f_32[iLocal_279]->f_3;
				uParam0->f_32[iLocal_279]->f_3 = uParam0->f_32[iLocal_280]->f_3;
				uParam0->f_32[iLocal_280]->f_3 = uLocal_282;
			}
			iVar273 = iLocal_276 + 1;
		}
		iVar274 = iLocal_277 + 1;
	}
}

bool func_756(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0 = { func_854(iParam1) };
	Var7 = { func_854(iParam2) };
	if (!bParam4 && func_234(uParam0, iParam1) != func_234(uParam0, iParam2))
	{
		return false;
	}
	switch (iParam3)
	{
		case 2:
			return _0x11820d1ae80dea39(&Var0, &Var7);
		case 3:
			return false;
		case 4:
			if (_0x3f59fe6f37869576(iParam1, iParam2))
			{
				return true;
			}
			break;
		case 1:
			break;
	}
	return false;
}

bool func_757(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

bool func_758(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_759(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case -1860710511:
			iVar0 = -764310200;
			break;
		case 1507636870:
			iVar0 = -764310200;
			break;
		case 1828724907:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 1270940175:
			iVar0 = -764310200;
			break;
		case -1857826511:
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
		case 34372170:
			iVar0 = 1151374672;
			break;
		case 963726415:
			iVar0 = -577893115;
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
	if (func_602(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_997(iVar0) || func_998(iVar0))
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

struct<4> func_760(bool bParam0)
{
	iVar0 = func_518(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_761(923904168, func_989(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_761(923904168, func_989(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_761(923904168, func_989(bParam0), -740156546, 0);
}

struct<4> func_761(int iParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!func_602(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_518(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

bool func_762(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (func_999())
			{
				if (_is_weapon_one_handed(iParam0))
				{
					return true;
				}
			}
			break;
		case 1:
			if (_is_weapon_one_handed(iParam0))
			{
				return true;
			}
			break;
		case 2:
		case 3:
			if (_is_weapon_two_handed(iParam0) || _is_weapon_bow(iParam0))
			{
				return true;
			}
			break;
		case 4:
			if (_is_weapon_melee(iParam0))
			{
				iVar0 = _get_ammo_type_for_weapon(iParam0);
				if (iVar0 == 0)
				{
					return true;
				}
				if (func_1000(iVar0, 1, 1, 0) > 0)
				{
					return true;
				}
			}
			break;
		case 5:
			if (_is_weapon_throwable(iParam0))
			{
				iVar0 = _get_ammo_type_for_weapon(iParam0);
				if (iVar0 != 0)
				{
					if (func_1000(iVar0, 1, 1, 0) > 0)
					{
						return true;
					}
				}
			}
			if (_is_weapon_lasso(iParam0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (_0x4c543d5dfcd2dafd(uParam0->f_14[iVar0], &uParam1))
		{
			return true;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		if (_0x4c543d5dfcd2dafd(uParam0->f_36[iVar0], &uParam1))
		{
			return true;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 22)
	{
		if (_0x4c543d5dfcd2dafd(uParam0->f_75[iVar0], &uParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_764(var uParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1001("ALL WEAPONS", &iVar14, &iVar15, -1591664384, 1))
	{
		func_1002(iVar14);
		return;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (!func_1003(&Var0, iVar16, iVar14, iVar15))
		{
		}
		else
		{
			iVar24 = 0;
			while (iVar24 <= (6 - 1))
			{
				iVar25 = iVar24;
				if (func_762(Var0.f_4, iVar25) && !func_1004(uParam0, Var0, iVar25))
				{
					uVar17[iVar24] = &uVar17[iVar24] + 1;
				}
				iVar24++;
			}
		}
		iVar16++;
	}
	func_1002(iVar14);
	iVar26 = 0;
	while (iVar26 <= (6 - 1))
	{
		iVar27 = iVar26;
		uVar28 = func_1005(uParam0, iVar27);
		if (iVar26 == 0 && func_1000(-1185145312, 0, 0, 0) == 0)
		{
			_databinding_write_data_bool(uVar28, false);
		}
		else if (&uVar17[iVar26] != 0)
		{
			_databinding_write_data_bool(uVar28, true);
		}
		else
		{
			_databinding_write_data_bool(uVar28, false);
		}
		iVar26++;
	}
}

char* func_765(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_163(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_163(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

var func_766(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

void func_767(int iParam0)
{
	Var0 = 191;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	iVar16 = func_1006(func_883(), 0);
	if (iVar16 == -1)
	{
		return;
	}
	Var17 = { *Global_17411.f_55.f_61[iVar16] };
	if (!_0xb881ca836cc4b6d4(&Var17))
	{
		Var0.f_4 = func_832(559905966);
	}
	else
	{
		Var21.f_9 = -1591664384;
		func_186(Var17, &Var21, 0, 0, -1);
		Var0.f_4 = func_832(Var21.f_4);
		Var0.f_4.f_9 = func_990(Var17, 1415981582, 0, -1);
		Var0.f_4.f_9.f_1 = func_990(Var17, -2119169513, 0, -1);
		iVar35 = func_990(Var17, -653439684, 0, -1);
		if (iVar35 == -388128145)
		{
			Var0.f_4.f_11 = 1;
		}
		else
		{
			Var0.f_4.f_11 = 2;
		}
		Var36.f_9 = -1591664384;
		if (func_1007(Var17, -415648720, &Var36, 0, -1))
		{
			Var0.f_4.f_1.f_1 = Var36.f_4;
			Var0.f_4.f_1 = func_990(Var36, -1189569496, 0, -1);
			Var0.f_4.f_1.f_2 = func_990(Var36, 325139909, 0, -1);
			Var0.f_4.f_1.f_3 = func_990(Var36, 986998820, 0, -1);
			Var0.f_4.f_1.f_4 = func_990(Var36, -997150586, 0, -1);
			Var0.f_4.f_1.f_5 = func_990(Var36, 1310070322, 0, -1);
			Var0.f_4.f_1.f_6 = func_990(Var36, 802754820, 0, -1);
			Var0.f_4.f_1.f_7 = func_990(Var36, -1886147520, 0, -1);
		}
	}
	_0x31010318ba9897ac(&uVar50, iParam0);
	trigger_script_event(1, &Var0, 16, 55, &uVar50);
}

bool func_768(var uParam0, int iParam1)
{
	if (!is_model_valid(*iParam1))
	{
		return false;
	}
	func_1008(&(uParam0->f_3475.f_53.f_1));
	func_1009(&(uParam0->f_3475.f_53.f_9));
	uParam0->f_3475.f_53.f_11 = 0;
	uParam0->f_3475.f_53 = { *iParam1 };
	return true;
}

void func_769(var uParam0, int iParam1)
{
	uParam0->f_51 = iParam1;
}

char* func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_SHORT_ARM_LEFT_TOOLTIP");
		case 1:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_SHORT_ARM_RIGHT_TOOLTIP");
		case 2:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_LONG_ARM_TOOLTIP");
		case 3:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_LONG_ARM_BACKUP_TOOLTIP");
		case 4:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_MELEE_WEAPONS_TOOLTIP");
		case 5:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_THROWABLES_TOOLTIP");
	}
	return "";
}

int func_771(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

int func_772(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (bParam2)
		{
			return func_1010();
		}
		else
		{
			return func_1011();
		}
	}
	switch (iParam0)
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
		default:
			break;
	}
	return 1105014447;
}

int func_773(var uParam0)
{
	return *uParam0;
}

void func_774(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_49))
	{
		if (bParam1)
		{
			uParam0->f_50 = Global_1296859->f_20;
		}
		else
		{
			set_entity_alpha(uParam0->f_49, 0, false);
		}
	}
}

int func_775(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1012(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_776(var uParam0, bool bParam1)
{
	if (does_entity_exist(uParam0->f_47))
	{
		if (bParam1)
		{
			uParam0->f_48 = Global_1296859->f_20;
		}
		else
		{
			set_entity_alpha(uParam0->f_47, 0, false);
		}
		if (func_778(uParam0->f_47))
		{
			if (bParam1)
			{
				_0xc9151483cc06a414(get_ped_index_from_entity_index(uParam0->f_47));
			}
			else
			{
				_0xcac43d060099ea72(get_ped_index_from_entity_index(uParam0->f_47));
			}
		}
	}
}

void func_777(int iParam0, int iParam1)
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

bool func_778(int iParam0)
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

char* func_779()
{
	return "CREATURES_MAMMAL@horse@normal@idle";
}

char* func_780()
{
	return "idle";
}

var func_781()
{
	return Global_1572887->f_106;
}

int func_782()
{
	if (!func_369())
	{
		return -1;
	}
	return Global_1572887->f_106.f_9;
}

var func_783()
{
	return Global_1572887->f_106.f_10;
}

var func_784()
{
	return Global_1572887->f_106.f_74;
}

void func_785(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)
{
	if (_0xe47001b7cb8b98ae(uParam0, uParam2, uParam3, 11, 0, iParam4))
	{
	}
	func_406("NJ_INVITE_SENT", sParam1, 109029619);
	func_1013(uParam3);
}

void func_786(int iParam0, int iParam1)
{
	Var0 = 49;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	_trigger_script_event_2(&Var0, 9, 41, Global_265377->f_124745);
}

struct<7> func_787(int iParam0)
{
	network_handle_from_friend(iParam0, &Var0);
	return Var0;
}

struct<4> func_788(var uParam0)
{
	Var0 = _databinding_read_data_int_from_parent(uParam0->f_3, "dynamic_list_item_inventory_item_guidD_1");
	Var0.f_1 = _databinding_read_data_int_from_parent(uParam0->f_3, "dynamic_list_item_inventory_item_guidD_2");
	Var0.f_2 = _databinding_read_data_int_from_parent(uParam0->f_3, "dynamic_list_item_inventory_item_guidD_3");
	Var0.f_3 = _databinding_read_data_int_from_parent(uParam0->f_3, "dynamic_list_item_inventory_item_guidD_4");
	return Var0;
}

void func_789(var uParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (func_186(*uParam0->f_36[iParam1], &Var0, 1, 1, -1))
	{
		Var14.f_9 = -1591664384;
		if (_is_weapon_lasso(Var0.f_4))
		{
			iVar28 = 0;
			while (iVar28 < 9)
			{
				if (iVar28 == iParam1)
				{
				}
				else if (func_186(*uParam0->f_36[iVar28], &Var14, 1, 1, -1))
				{
					if (_is_weapon_lasso(Var14.f_4))
					{
						uVar29 = _databinding_get_item_context_by_index(uParam0->f_13, iVar28);
						if (_databinding_is_data_id_valid(uVar29))
						{
							_databinding_write_data_bool_from_parent(uVar29, "dynamic_list_item_end_img_visible", false);
							*uParam0->f_36[iVar28] = { func_190() };
						}
					}
				}
				iVar28++;
			}
		}
	}
}

int func_790(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return 0;
	}
	return _0x49623bcfc3a3d829(iParam0, iParam1);
}

void func_791(var uParam0, var uParam1, var uParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return;
	}
	bVar0 = func_1014(1933821560, *uParam2 + 1, 59806960);
	bVar1 = func_186(*uParam0, uParam1, 1, 1, -1);
	bVar2 = !func_1015(uParam1->f_4, uParam1, uParam1->f_9);
	if ((bVar0 && bVar1) && bVar2)
	{
		uParam1->f_16 = 0f;
		uParam1->f_18 = 0f;
		uParam1->f_19 = 0f;
		uParam1->f_20 = 0f;
		if (_0xd80a8854db5cfba5(func_518(0), uParam0, uParam1, 22))
		{
			*uParam2++;
		}
	}
}

int func_792(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_602(iParam0, 0))
	{
		return -1;
	}
	if (func_567(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_1016())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_794(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_794(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
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
	else if (func_1017(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_1018(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_1019(0))
	{
		if (iVar0 > 0)
		{
			func_1020(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_1020(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_1021(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_1020(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_1022(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_1023(iVar52, Var53);
	}
	return iVar52;
}

int func_793(var uParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return 0;
	}
	return func_1024((func_186(*uParam0, uParam1, 1, 1, -1) && !func_1015(uParam1->f_4, uParam1, uParam1->f_9)));
}

int func_794(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && bParam1 == -915411861) && func_813(iParam0, 59806960))
	{
		bParam1 = 59806960;
	}
	if (func_805(iParam0))
	{
		return func_1025(func_806(iParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_1017(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_795(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	func_1026(&iParam1);
	if (func_805(iParam1))
	{
		return func_1027(iParam0, func_806(iParam1, 1), 1, 1, bParam3, 0, iParam4, iParam5, func_807(iParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var16 = { func_797(iParam1, 1, 1) };
	if (func_1028(iParam1, &iVar21))
	{
		return func_1027(iParam0, iVar21, iParam2, 1, bParam3, 0, 0, iParam5, 0);
	}
	if (func_1029(iParam1))
	{
		if (!func_1030(iParam0, iParam1, Var16, iParam2, &Var0, iParam4, iParam5, bParam3))
		{
			return 0;
		}
	}
	else if (!func_1031(iParam0, iParam1, Var16, Var16.f_4, iParam2, &Var0, bParam3, iParam4, iParam5, bParam6))
	{
		return 0;
	}
	func_1032(Var0);
	return 1;
}

bool func_796(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_602(iParam0, 0) && !func_982(func_740(iParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
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

struct<5> func_797(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_989(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_567(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_761(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_760(bParam1) };
			if (bParam2 && func_1033(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1034(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1034(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1035(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1036(bParam1) };
			switch (func_985(iParam0))
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
			if (func_1037(iParam0, -1823706425))
			{
				Var0 = { func_761(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1037(iParam0, -1483207246))
			{
				Var0 = { func_761(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_761(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1037(iParam0, -1653629781))
			{
				Var0 = { func_761(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_186(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_1037(iParam0, -1653629781))
			{
				Var0 = { func_761(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

int func_798(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)
{
	func_1026(&iParam0);
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!bParam2 && func_1038(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	iVar0 = func_1039(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	iVar1 = func_802(iParam0, *uParam1, uParam1->f_4, bParam3, bParam2, iParam4);
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_799(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_602(iParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_1028(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_814() && bVar1) && iParam1 == 0))
	{
		if (func_1040(iVar0, 997808187, 0) && !func_817(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
		else if (func_1040(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_1025(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_1041(func_1025(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_604(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_1042(iParam0))
	{
		iVar4 = func_1043(iParam0);
	}
	else if (func_1044(iParam0))
	{
		iVar4 = func_1045(iParam0);
	}
	else if (func_1046(iParam0))
	{
		iVar4 = func_1047(iParam0);
	}
	else if (func_1048(iParam0))
	{
		iVar4 = func_1049(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_1025(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_1050(iVar3))
		{
			if (func_1051(iVar4, 773203532, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_1041(iVar2);
		}
		Global_1051439->f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439->f_61 = iParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_794(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_1050(iVar3))
		{
			if (func_1052(iParam0, 773203532, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_1041(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = iParam0;
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

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case 480079517:
			return -1504859554;
		case 963726415:
			return -577893115;
		case 1446246869:
			return 1885857703;
		case 1235846615:
			return -1511427369;
		default:
			break;
	}
	return 0;
}

struct<4> func_801(int iParam0, bool bParam1)
{
	Var0 = { func_797(iParam0, bParam1, 0) };
	return func_761(iParam0, Var0, Var0.f_4, bParam1);
}

int func_802(int iParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1038(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_761(iParam0, Param1, bParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_518(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_518(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

void func_803(var uParam0, var uParam1, struct<4> Param2, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0 = 1;
	Var0.f_1 = 1;
	if (iParam7 != -1)
	{
		Var0.f_5 = iParam7;
	}
	if (iParam8 != -1)
	{
		Var0.f_6 = iParam8;
	}
	Var0.f_4 = 2084771291;
	Var0.f_8 = 1;
	Var0.f_9 = 1;
	StringCopy(&cVar49, _create_var_string(0, sParam6), 64);
	StringIntConCat(&cVar49, _databinding_get_array_count(uParam1), 64);
	StringCopy(&(Var0.f_16), _create_var_string(0, sParam6), 64);
	Var0.f_24 = 1442026401;
	Var0.f_25 = -1218088854;
	Var0.f_26 = iParam9;
	func_1053(&uVar27, uParam0, cVar49, Var0);
	_databinding_add_data_int(uVar27, "dynamic_list_item_inventory_item_guidD_1", Param2);
	_databinding_add_data_int(uVar27, "dynamic_list_item_inventory_item_guidD_2", Param2.f_1);
	_databinding_add_data_int(uVar27, "dynamic_list_item_inventory_item_guidD_3", Param2.f_2);
	_databinding_add_data_int(uVar27, "dynamic_list_item_inventory_item_guidD_4", Param2.f_3);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1, _databinding_get_array_count(uParam1), "pm_dynamic_text_and_end_image", uVar27);
}

bool func_804(int iParam0)
{
	return func_567(iParam0) == -427144552;
}

bool func_805(int iParam0)
{
	if (func_497(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_806(int iParam0, bool bParam1)
{
	if (!func_602(iParam0, 0))
	{
		return func_1054(func_740(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_807(int iParam0)
{
	if (!func_62() && func_1055())
	{
		return true;
	}
	return func_497(iParam0, 1435272033);
}

bool func_808(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	bVar1 = func_77(bParam3, 2);
	bVar2 = func_1040(iParam0, -570078785, bVar1);
	bVar3 = func_1040(iParam0, -915411861, bVar1);
	if (func_1040(iParam0, 997808187, bVar1))
	{
		bParam1 = 997808187;
	}
	else if (bParam4 && (func_1057(iParam0, &iVar0) || func_1058(iParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_814())
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
	else if (func_815(15) && func_1040(iParam0, 369710026, bVar1))
	{
		bParam1 = 369710026;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return bParam1;
}

bool func_809(int iParam0, bool bParam1)
{
	return (func_813(iParam0, 997808187) && !func_605(iParam0, 997808187, bParam1));
}

bool func_810(int iParam0)
{
	iVar0 = func_806(iParam0, 1);
	if (iVar0 != 0 && func_1040(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_811(int iParam0, int iParam1)
{
	*iParam1 = func_1059(iParam0, 1);
	return *iParam1 != 0;
}

bool func_812(int iParam0, int iParam1)
{
	*iParam1 = func_1060(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_813(int iParam0, bool bParam1)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_805(iParam0))
	{
		return func_1040(func_806(iParam0, 0), bParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, bParam1) > 0;
}

bool func_814()
{
	return Global_1915715->f_22477;
}

bool func_815(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_303(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_816(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_982(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_69() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_1061(iParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
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
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_817(int iParam0, bool bParam1)
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

bool func_818(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_819(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (func_77(bParam9, 32))
	{
		if (!_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var0.f_9 = -1591664384;
		if (!func_186(Param2, &Var0, 1, 0, -1))
		{
			return 0;
		}
		if (!func_1062(iParam1, func_985(Var0.f_4), bParam6))
		{
			return 0;
		}
	}
	if (func_77(bParam9, 1))
	{
		if (!func_603(iParam1))
		{
			return 0;
		}
	}
	if (func_77(bParam9, 2))
	{
		if (func_605(iParam1, bParam7, 1))
		{
			return 0;
		}
	}
	if (func_77(bParam9, 4))
	{
		if (!bParam10 && !_0xb881ca836cc4b6d4(&Param2))
		{
			return 0;
		}
		Var14.f_4 = bParam6;
		Var14 = { Param2 };
		iVar19 = func_802(iParam1, Param2, bParam6, 1, !bParam10, 0);
		iVar20 = func_1039(iParam1, &Var14, !bParam10, 1);
		iVar21 = 1;
		if (func_796(iParam1, bParam7, &iVar21, 0))
		{
		}
		iVar22 = (func_1063(iParam0, iParam1) * iVar21);
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
	if (func_77(bParam9, 8))
	{
		return func_1064(iParam0, iParam1, bParam7, bParam8);
	}
	return 1;
}

void func_820(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1065(iParam0, iParam1, iParam2, iParam3);
}

var func_821(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

int func_822(var uParam0)
{
	return func_1066(uParam0->f_28);
}

void func_823(var uParam0, int iParam1)
{
	func_295(uParam0);
	if (!is_bit_set(Global_3145858->f_226, 21))
	{
		if (iParam1 == 307971639)
		{
			func_1067(uParam0);
			func_1068(uParam0);
		}
	}
	iVar2 = 0;
	while (iVar2 < 17)
	{
		iVar0 = func_601(iVar2);
		if (!func_602(iVar0, 0))
		{
		}
		else
		{
			iVar1 = func_567(iVar0);
			bVar3 = false;
			switch (iVar1)
			{
				case 307971639:
					if (is_bit_set(Global_3145858->f_226, 21))
					{
					}
					else
					{
						bVar3 = true;
						Jump @166; //curOff = 139
						if (is_bit_set(Global_3145858->f_226, 22))
						{
						}
						else if (!func_603(iVar0))
						{
						}
						else
						{
							iVar4 = func_604(iVar0, 0, 1, -1, 1);
							if (func_605(iVar0, iVar4, 1))
							{
							}
							else if (iParam1 != 0 && iVar1 != iParam1)
							{
							}
							else
							{
								func_1069(uParam0, iVar2, bVar3, !bVar3);
							}
						}
					}
					iVar2++;
					default:
						break;
			}
		}
	}
}

void func_824(var uParam0, var uParam1)
{
	iVar0 = uParam1->f_93.f_6;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (_databinding_read_data_int(uParam1->f_93.f_142.f_20[iVar3]->f_37) != 255)
		{
			set_bit(&iVar4, _databinding_read_data_int(uParam1->f_93.f_142.f_20[iVar3]->f_37));
		}
		iVar3++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (func_234(uParam0, int_to_playerindex(iVar2)) == iVar0)
		{
			set_bit(&iVar5, iVar2);
		}
		iVar2++;
	}
	if (iVar4 == iVar5)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (is_bit_set(iVar4, iVar2) && !is_bit_set(iVar5, iVar2))
		{
			_databinding_write_data_int(uParam1->f_93.f_142.f_20[iVar2]->f_37, 255);
			_databinding_remove_binding_array_item_by_data_context_id(uParam1->f_93.f_142.f_5, &(uParam1->f_93.f_142.f_20[iVar2]));
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = network_get_player_index(int_to_participantindex(iVar2));
		if (!network_is_player_active(iVar1))
		{
		}
		else if (!is_bit_set(iVar4, iVar2) && is_bit_set(iVar5, iVar2))
		{
			StringCopy(&cVar6, func_559(func_558(iVar1), 109029619), 64);
			_databinding_write_data_string(uParam1->f_93.f_142.f_20[iVar2]->f_27, &cVar6);
			if (iVar1 != uParam0->f_749)
			{
				StringCopy(&cVar14, func_1070(iVar2), 8);
				_databinding_write_data_string(uParam1->f_93.f_142.f_20[iVar2]->f_28, &cVar14);
				_databinding_write_data_bool(uParam1->f_93.f_142.f_20[iVar2]->f_29, true);
				_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_31, -1693157378);
				_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_32, -1120556042);
				_databinding_write_data_bool(uParam1->f_93.f_142.f_20[iVar2]->f_1, true);
			}
			else
			{
				_databinding_write_data_string(uParam1->f_93.f_142.f_20[iVar2]->f_28, "");
				_databinding_write_data_bool(uParam1->f_93.f_142.f_20[iVar2]->f_29, false);
				_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_31, 1210712530);
				_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_32, -436069763);
			}
			_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_8, -672301300);
			_databinding_write_data_int(uParam1->f_93.f_142.f_20[iVar2]->f_37, iVar1);
			_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_4, -680433132);
			_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_7, -443656498);
			_databinding_write_data_hash_string(uParam1->f_93.f_142.f_20[iVar2]->f_6, -443656498);
			_databinding_write_data_bool(uParam1->f_93.f_142.f_20[iVar2]->f_9, true);
			_databinding_write_data_bool(uParam1->f_93.f_142.f_20[iVar2]->f_33, true);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam1->f_93.f_142.f_5, iVar2, "pm_dynamic_player_entry", &(uParam1->f_93.f_142.f_20[iVar2]));
		}
		iVar2++;
	}
}

void func_825(var uParam0, var uParam1)
{
	if (func_40(uParam1, 512))
	{
		_databinding_write_data_string(uParam1->f_93.f_57.f_84, _create_var_string(2, "MP_LOBBY_PREFER_TEAM"));
	}
	else if ((uParam1->f_93.f_6 >= 0 && uParam1->f_93.f_6 < 8) && uParam0->f_7[uParam1->f_93.f_6]->f_1 < &uParam0->f_7[uParam1->f_93.f_6])
	{
		_databinding_write_data_string(uParam1->f_93.f_57.f_84, _create_var_string(2, "MP_LOBBY_JOIN_TEAM"));
	}
	else
	{
		iVar0 = func_521(uParam0, player_id());
		if (iVar0 == uParam1->f_93.f_6)
		{
			_databinding_write_data_string(uParam1->f_93.f_57.f_84, _create_var_string(2, "MP_LOBBY_CANCEL_JOIN_TEAM"));
		}
		else
		{
			_databinding_write_data_string(uParam1->f_93.f_57.f_84, _create_var_string(2, "MP_LOBBY_JOIN_TEAM_QUEUED"));
		}
	}
}

void func_826(var uParam0)
{
	sVar0 = "";
	switch (uParam0->f_27)
	{
		case 0:
			sVar0 = _create_var_string(2, "MP_LOBBY_INVITE_FRIENDS_TOOLTIP");
			if (_is_stadia_version())
			{
				switch (_0x3e8cce6769db5f34(1))
				{
					case -1:
					case 0:
					case 2:
						sVar0 = _create_var_string(2, "FRIENDS_LIST_CONSENT_TOOLTIP");
						break;
				}
			}
			break;
		case 1:
			sVar0 = _create_var_string(2, "MP_LOBBY_INVITE_CREW_TOOLTIP");
			break;
		case 2:
			sVar0 = _create_var_string(2, "MP_LOBBY_INVITE_RECENT_TOOLTIP");
			break;
	}
	_databinding_write_data_string(uParam0->f_30.f_9, sVar0);
}

int func_827()
{
	return func_1071(Global_1940311->f_1433);
}

void func_828(int iParam0)
{
	switch (iParam0)
	{
		case -1594107850:
		case -1080557963:
		case 72556410:
			func_1072();
			break;
		default:
			break;
	}
	func_1073(iParam0, 0);
}

int func_829(int iParam0)
{
	return func_1074(iParam0, Global_1940311->f_1433);
}

void func_830(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (!func_602(iVar0, 0))
	{
		return;
	}
	func_834(uParam0->f_4033[uParam0->f_5297]->f_325[0]->f_3, iVar0);
	_databinding_write_data_string(uParam0->f_30.f_9, _create_var_string(2, "MP_LOBBY_INVITE_OUTFIT_TOOLTIP"));
}

bool func_831(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "ALL HORSES";
			break;
		case 1:
		case 2:
			sVar0 = "ALL COACHES";
			break;
	}
	iVar1 = 0;
	if (func_1001(sVar0, &iVar2, &iVar3, -1591664384, 0))
	{
		Var4.f_9 = -1591664384;
		func_1003(&Var4, iParam1, iVar2, iVar3);
		if (func_602(Var4.f_4, 0))
		{
			*uParam2 = { Var4 };
			iVar1 = 1;
		}
		func_1002(iVar2);
	}
	return iVar1;
}

int func_832(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_833(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	*uParam5 = func_990(Param0, 1415981582, 0, -1);
	uParam5->f_1 = func_990(Param0, -2119169513, 0, -1);
	Var0.f_9 = -1591664384;
	if (func_1007(Param0, -415648720, &Var0, 0, -1))
	{
		uParam4->f_1 = Var0.f_4;
		*uParam4 = func_990(Var0, -1189569496, 0, -1);
		uParam4->f_2 = func_990(Var0, 325139909, 0, -1);
		uParam4->f_3 = func_990(Var0, 986998820, 0, -1);
		uParam4->f_4 = func_990(Var0, -997150586, 0, -1);
		uParam4->f_5 = func_990(Var0, 1310070322, 0, -1);
		uParam4->f_6 = func_990(Var0, 802754820, 0, -1);
		uParam4->f_7 = func_990(Var0, -1886147520, 0, -1);
	}
	iVar14 = func_990(Param0, -653439684, 0, -1);
	if (iVar14 == -388128145)
	{
		*uParam6 = 1;
	}
	else
	{
		*uParam6 = 2;
	}
	return true;
}

int func_834(int iParam0, int iParam1)
{
	iVar0 = func_1075(iParam1);
	if (iVar0 <= -1)
	{
		return 0;
	}
	if (!func_1076(2, iVar0))
	{
		return 0;
	}
	func_1077();
	if (!func_1078(&(Global_1952637->f_1556), &uVar1, 0, iVar0, 0, 0, 0, 0, 8))
	{
		return 0;
	}
	if (func_152(32))
	{
		if (!func_677(&(Global_1952637->f_1556), func_899(255), &uVar1, 0, 1, 0, 0, 0, 0, 8))
		{
			return 0;
		}
	}
	func_153(1, 0, 2, iParam0, 0);
	return 1;
}

int func_835(int iParam0)
{
	if (func_152(32))
	{
		iVar0 = func_1075(iParam0);
		if (iVar0 <= -1)
		{
			return 0;
		}
		func_675(&(Global_1952637->f_2365));
		if (!func_1078(&(Global_1952637->f_2365), &uVar1, 0, iVar0, 1, 0, 0, 0, 8))
		{
			return 0;
		}
	}
	func_1079();
	return 1;
}

void func_836(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (_databinding_is_data_id_valid(uParam0->f_2400.f_2[iVar0]->f_21))
		{
			iVar1 = _databinding_read_data_hash_string_from_parent(&(uParam0->f_2400.f_2[iVar0]), "ugc_lobby_ui_outfit_save_slot_hash");
			_databinding_write_data_bool(uParam0->f_2400.f_2[iVar0]->f_21, iParam1 == iVar1);
			_databinding_write_data_bool(uParam0->f_2400.f_2[iVar0]->f_9, iParam1 != iVar1);
		}
		iVar0++;
	}
}

void func_837(var uParam0, var uParam1)
{
	_databinding_write_data_bool_from_parent(uParam0->f_2, func_596(23), false);
	_databinding_write_data_bool_from_parent(*uParam1, func_596(23), true);
	uParam0->f_2 = *uParam1;
}

int func_838(var uParam0, var uParam1, int iParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_831(uParam1->f_3475, iParam2, &Var0))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	if (!func_885(&Var0, func_883(), 0))
	{
		return 0;
	}
	(*uParam0)[participant_id_to_int()]->f_31 = Var0.f_4;
	func_886((*uParam0)[participant_id_to_int()], Var0.f_4, Var0);
	return 1;
}

void func_839(int iParam0, var uParam1)
{
	Var0 = { func_1080(iParam0) };
	Var35 = { Var0.f_8 };
	iVar37 = func_513(Var35);
	iVar38 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam0]->f_25);
	iVar39 = (Global_1296859->f_21 - (iVar38 - (Global_1901947->f_308.f_169 / 1000)));
	switch (iVar37)
	{
		case 20:
			func_1081(_0xe6aab897120492d6(uParam1, func_596(88)));
			_0xf37a2149bc9a8a27(-1522841992, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
		case 21:
			func_1081(_0xe6aab897120492d6(uParam1, func_596(88)));
			_0xf37a2149bc9a8a27(2112282570, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
		case 28:
			func_1081(_0xe6aab897120492d6(uParam1, func_596(88)));
			_0xf37a2149bc9a8a27(1403358139, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
	}
}

void func_840(int iParam0, int iParam1)
{
	_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_8), iParam0);
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1248240->f_8903.f_14)
	{
		if (&Global_1248240->f_8903.f_9[iVar1] == iVar0)
		{
			Global_1248240->f_8903.f_9[iVar1]->f_2 = 1;
			Global_1248240->f_8903.f_9[iVar1]->f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

void func_841(int iParam0)
{
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 3;
	Var0.f_9 = player_id();
	Var0.f_10 = iParam0;
	Var0.f_7 = _0x901e0dc25080c8b9(player_id());
	Var0.f_8 = _0x901e0dc25080c8b9(player_id());
	func_1082(&Var0);
}

void func_842(int iParam0, bool bParam1)
{
	uVar0 = _0x27b1ae4d8c652f08(iParam0);
	if (bParam1)
	{
		if (func_44())
		{
			return;
		}
		func_1083(iParam0);
		func_1084(0);
		func_1085(0);
	}
	else
	{
		_0x3aa0cdc63696166d(uVar0);
	}
}

void func_843(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_866(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_1086((Global_1940311->f_242.f_1186 - 1));
}

void func_844(int iParam0)
{
	Var0 = { func_1087(iParam0) };
	if (!func_325(Var0))
	{
		return;
	}
	iVar2 = func_1088(Var0);
	if (iVar2 != -1)
	{
		iVar3 = Global_1196339->f_1[iVar2]->f_3;
		if (network_is_player_active(player_id()))
		{
			if (func_1089(1048576, player_id()) || func_1090())
			{
				iVar4 = Global_1296851->f_2.f_4;
				if (!func_1091(iVar4))
				{
					func_1092(iVar2, 131072);
				}
				else
				{
					func_1092(iVar2, 32768);
				}
				return;
			}
			else if (func_1093())
			{
				func_1092(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && func_1094(iVar2, Var0, iVar3))
		{
			iVar5 = func_1095(iVar2);
			if (iVar5 != -1 && func_1096(iVar5) == -785841056)
			{
				iVar6 = func_1097(iVar5);
				if (!func_1098(iVar6))
				{
					func_1099(iVar6);
					func_1100(func_1097(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_845(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == Global_1296859->f_15)
	{
		return;
	}
	if (!func_1101(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var14 = -1;
	Var14.f_1 = -1;
	Var17.f_12 = -1;
	Var17.f_12.f_1 = -1;
	Var17.f_14 = 255;
	Var17.f_15 = 255;
	vVar36 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1296859->f_15;
	iVar39 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	switch (iParam0)
	{
		case 2:
			Var14 = { func_1103(5, func_1102(0)) };
			Var17.f_4 = 80;
			break;
		case 1:
			Var14 = { func_1103(4, func_1102(0)) };
			Var17.f_4 = 81;
			break;
	}
	func_1104(&fVar16, iParam1, 1);
	Var17 = 1;
	Var17.f_1 = player_id();
	Var17.f_2 = get_network_time_accurate();
	Var17.f_6 = uParam2;
	Var17.f_9 = iVar39;
	Var17.f_16 = Global_1296859->f_15;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_1105(Var0.f_5))
	{
		return;
	}
	if (!func_1106(iParam1))
	{
		return;
	}
	func_377(Var14, vVar36, 0f, 0, 0, fVar16, Var17);
	func_1104(&fVar16, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var17.f_4 = 84;
			break;
		case 1:
			Var17.f_4 = 83;
			break;
	}
	Var17.f_7 = iParam1;
	Var17 = 0;
	func_1107(Var17, fVar16, 0, 0);
	_0xde544b7ec0c187cc(&fVar16);
	func_1108(Var0.f_5, &fVar16);
	if (!_0x179a6f0ee2e79026(&fVar16))
	{
		return;
	}
	Var0.f_6 = player_id();
	Var0.f_8 = { Var14 };
	Var0.f_7 = fVar16;
	Var0.f_11 = iParam1;
	Var0.f_13 = 1;
	Var0.f_12 = iVar39;
	func_1109(&Var0, &fVar16);
	func_1107(Var17, fVar16, 0, 0);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_255();
}

void func_846(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar0 = func_575(iParam1);
	if (bParam3)
	{
		_0xd426e2e3288469d6(&fVar0, player_id());
	}
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_4 = iParam0;
	Var1.f_16 = iParam2;
	func_1107(Var1, fVar0, 0, 0);
}

void func_847(int iParam0)
{
	if (!func_1110(iParam0))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return;
	}
	iVar2 = iParam0;
	func_1111(&uVar0, Global_1296859->f_15);
	func_1111(&uVar1, _0x901e0dc25080c8b9(iParam0));
	Var3.f_5 = player_id();
	Var3.f_6 = iParam0;
	Var3.f_4 = 2;
	func_1112(&Var3, &uVar0);
	Var3.f_4 = 3;
	func_1112(&Var3, &uVar1);
	func_1113(&(Global_1108365->f_34[iVar2]->f_8), 2);
	Global_1108365->f_34.f_771 = 255;
	func_1114(iVar2);
}

void func_848(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1115(iParam0);
	}
	else
	{
		func_1116(iParam0);
	}
}

void func_849()
{
	iVar6 = player_id();
	Var8 = 5;
	Var8.f_1 = 255;
	Var8.f_1.f_2 = 255;
	Var8.f_1.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2.f_2 = 255;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (iVar0 >= 5)
		{
		}
		else
		{
			if (!func_1117(iVar3))
			{
			}
			else
			{
				iVar5 = int_to_playerindex(iVar3);
				fVar4 = vdist(func_49(iVar5), func_49(iVar6));
				if (fVar4 > (Global_1901947->f_166.f_23 * Global_1139381->f_4778))
				{
				}
				else
				{
					iVar7 = func_1118(iVar3);
					func_1119(Var8[iVar0], iVar7, iVar3);
					iVar1 = (iVar1 + Var8[iVar0]->f_1);
					iVar0++;
				}
			}
			iVar3++;
		}
	}
	if (iVar0 <= 0)
	{
		Var19.f_12 = -1;
		Var19.f_12.f_1 = -1;
		Var19.f_14 = 255;
		Var19.f_15 = 255;
		Var19.f_4 = 108;
		_0x31010318ba9897ac(&fVar38, player_id());
		func_1107(Var19, fVar38, 0, 0);
		return;
	}
	iVar39 = func_1120(1, iVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar39 = (iVar39 - Var8[iVar2]->f_1);
		if (iVar39 <= 0)
		{
			func_1121(&(Var8[iVar2]));
			return;
		}
		iVar2++;
	}
}

void func_850(int iParam0)
{
	iVar0 = _0xe4c64cd37cb176aa(iParam0);
	_0xb22b1d9f74095382(iParam0);
	if (!func_1122(iVar0))
	{
		return;
	}
}

void func_851(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	if (!func_1123(iVar0))
	{
		return;
	}
}

void func_852(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 19, 25, &uParam1);
	func_1124(uParam0);
}

char* func_853(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

struct<7> func_854(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_855(int iParam0)
{
	switch (iParam0)
	{
		case -770404614:
			return 1;
		case -513004119:
			return 2;
		case 1182529483:
			return 3;
		case 399284845:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case -1830321594:
			return 1;
		case -262750941:
			return 2;
		case -430305033:
			return 3;
		case 405992616:
			return 4;
		case 1745359169:
			return 5;
		default:
			break;
	}
	return 0;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case 613649924:
			return 1;
		case 1010622428:
			return 2;
		case 1565991440:
			return 3;
		case 561914803:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case -2086645560:
			return 1;
		case -1890764313:
			return 2;
		case 666286870:
			return 3;
		case -1538299703:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_859(int iParam0)
{
	switch (iParam0)
	{
		case -320743214:
			return 1;
		case 1076574759:
			return 2;
		case -764747645:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_860(int iParam0)
{
	switch (iParam0)
	{
		case 1992418159:
			return 1;
		case -259664361:
			return 2;
		case -2023244076:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_861(int iParam0)
{
	switch (iParam0)
	{
		case -100997621:
			return 1;
		case 213894183:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_862(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 31)
	{
		return;
	}
	_0x3bf0767cf33fcc88(uParam0->f_57.f_30.f_19);
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 < Global_3145858->f_49703)
	{
		if (!is_bit_set(Global_3145858->f_49704[iVar3]->f_3, iParam1))
		{
		}
		else
		{
			_0xc900cec8a172375b(uParam0->f_57.f_30.f_19, func_1125(Global_3145858->f_49704[iVar4]), -1);
			StringCopy(&cVar0, "Role_", 24);
			StringIntConCat(&cVar0, iVar4, 24);
			_databinding_write_data_int_from_parent(uParam0->f_57.f_30, &cVar0, iVar3);
			iVar4++;
		}
		iVar3++;
	}
	_databinding_write_data_int(uParam0->f_57.f_30.f_25, (iVar4 - 1));
}

void func_863(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 18)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 18)
	{
		StringCopy(&cVar1, "Role_", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		if (iParam1 == _databinding_read_data_int_from_parent(uParam0->f_57.f_30, &cVar1))
		{
			_databinding_write_data_int(uParam0->f_57.f_30.f_24, iVar0);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_864()
{
	iVar0 = _databinding_read_data_int(Global_1940311->f_242.f_2);
	Global_1940311->f_242.f_1185 = iVar0;
	_databinding_write_data_hash_string(Global_1940311->f_242.f_3, func_1126(iVar0));
	func_1127(iVar0);
}

bool func_865()
{
	if (func_1128())
	{
		return func_1129(12, 0);
	}
	return func_1129(5, 0);
}

void func_866(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(91));
	if (func_1130(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

bool func_867(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1131())
	{
		return false;
	}
	return func_1132(iParam0, uParam1, iParam2, iParam3);
}

void func_868(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1133(0);
	}
	if (player_id() == iParam0)
	{
		func_1134(0);
	}
	else
	{
		func_1134(1);
	}
	func_1135(0, iParam0);
	func_1135(1, iParam0);
	func_1135(2, iParam0);
	func_1135(3, iParam0);
}

int func_869(int iParam0)
{
	if (!func_1136(iParam0))
	{
		return -1;
	}
	iVar2 = func_1137(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1138(iVar0);
		if (func_1139(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_870(int iParam0)
{
	func_1133(iParam0);
	if (func_1140(iParam0))
	{
		iVar0 = 304794100;
	}
	else if (!func_1141(iParam0, 1))
	{
		iVar0 = func_1143(func_1142(iParam0, 1));
	}
	else
	{
		iVar0 = 1467455271;
	}
	func_1144(iVar0, func_1142(iParam0, 1));
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -2109508723);
	}
}

void func_871(int iParam0)
{
	func_1145(*iParam0);
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -1316999016);
	}
}

int func_872(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { (*Global_1134390)[iVar0]->f_38.f_8 };
	return 1;
}

int func_873(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

Vector3 func_874(int iParam0)
{
	func_1147(51288898, func_1146(iParam0), 0, 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_875()
{
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (func_1148() - 1))
	{
		iVar1 = func_1149(iVar0);
		if (iVar1 == -1)
		{
		}
		else
		{
			fVar3 = func_1151(Global_35, func_1150(iVar1));
			if (iVar2 == -1)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
			else if (fVar3 < fVar4)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return 0f, 0f, 0f;
	}
	return func_1150(iVar2);
}

int func_876(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_1152())
	{
		Global_1940311->f_10894 = iParam0;
		func_1020(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_1153(iParam0, bParam4))
	{
		return 0;
	}
	if (func_1154(iParam0))
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
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_1155(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_497(iParam0, -2081717885))
	{
		func_1156(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_497(iParam0, -1909684001))
	{
		func_1157(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_497(iParam0, 587975446))
	{
		func_1158(iParam0, Var10);
	}
	else if (func_497(iParam0, 566155764))
	{
		if (!func_1159(iParam0))
		{
			return 0;
		}
	}
	if (func_1160(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_497(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_1161(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_497(iParam0, -1472964441) || func_497(iParam0, -228153877)) || func_497(iParam0, 566155764))
	{
	}
	else if (func_497(iParam0, 1919582297))
	{
		if (((func_1162() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
		}
		switch (iParam0)
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
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1161(Var10, 0);
		bVar28 = false;
	}
	else if (func_1163(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_1164(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1161(Var10, 0);
		iVar29 = 1;
	}
	else if (func_567(iParam0) == -1037537535)
	{
		if (!func_1165(iParam0))
		{
			func_1166("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_985(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_1167();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_1168(player_id()))
			{
				func_1166("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_1166("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_153(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_1169(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_1170(iParam0);
					func_153(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_1171(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_1172(iParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_1172(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_1171(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_1172(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_1172(iParam0, 1, 0);
						func_1173(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_1173(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_1173(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_497(iParam0, 160827531))
					{
					}
					else
					{
						func_1169(iParam0, 0);
					}
					break;
			}
			func_1171(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_1174(1);
				break;
			case -727924611:
				if (func_69() != -1)
				{
				}
				else if (!func_1165(iParam0))
				{
					func_1166("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_1175(7, iParam0);
					bVar31 = func_1175(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_1166(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_1176(7))
					{
						func_1166("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_1178(Global_34, func_1177(7), 0))
						{
							func_1166("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_1166(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
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
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_1161(Var10, 0);
						}
						Jump @2406; //curOff = 1788
						func_1179();
						Jump @2406; //curOff = 1795
						if (func_1165(-1838434463))
						{
							if (func_1180(1, 1))
							{
								func_1129(2, 1);
							}
							else if (func_1181(1))
							{
								func_1166("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_1182())
							{
								func_1166("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_1183();
								}
								else
								{
									func_1166("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_1184(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_1166("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_1184(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_1182())
						{
							func_1166("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_1166("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2406; //curOff = 2016
						if (!_is_weapon_binoculars(func_1185(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2054
						if (func_1185(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2406; //curOff = 2089
						Jump @2406; //curOff = 2092
						func_1186(535, 1);
						Jump @2406; //curOff = 2103
						func_1187(1);
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
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_1161(Var10, 0);
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
							Var0.f_1 = iParam0;
							Var0.f_3 = !get_hash_of_this_script_name() != 1349139153;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_1161(Var10, 0);
						}
						return 1;
						Jump @2406; //curOff = 2352
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_1166("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_1188();
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

bool func_877()
{
	return Global_1071686->f_28773 >= 3;
}

Vector3 func_878(int iParam0)
{
	switch (iParam0)
	{
		case 924267974:
			return 0f, 0f, 0f;
		case 2096114765:
			return 0f, -440f, 0f;
		case 254481872:
			return 0f, -880f, 0f;
		case 1984181016:
			return 0f, -1320f, 0f;
		case 511673431:
			return 0f, -1760f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_879(var uParam0)
{
	if (!func_1190(func_1189(), &(uParam0->f_5298), 600, -1, 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!_datafile_register_query(uParam0->f_5298, iVar0, func_1191(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_880(var uParam0)
{
	if (!func_304(uParam0, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 4;
	if (!_datafile_get_vector(uParam0->f_93.f_4033[0], &vVar0))
	{
		return false;
	}
	else
	{
		*uParam0->f_93.f_4033[0] = { *uParam0->f_93.f_4033[0] + uParam0->f_93.f_5299 };
	}
	vVar0.f_2 = 5;
	if (!_datafile_get_vector(uParam0->f_93.f_4033[1], &vVar0))
	{
		return false;
	}
	else
	{
		*uParam0->f_93.f_4033[1] = { *uParam0->f_93.f_4033[1] + uParam0->f_93.f_5299 };
	}
	vVar0.f_2 = 6;
	if (!_datafile_get_float(&(uParam0->f_93.f_5296), &vVar0))
	{
		return false;
	}
	return true;
}

bool func_881(var uParam0)
{
	if (!func_304(uParam0, &uVar0))
	{
		return false;
	}
	iVar10 = 0;
	if (!func_305(&uVar0, &uVar5, &iVar10))
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 <= (iVar10 - 1))
	{
		if (!func_306(&uVar5, iVar12, &iVar11))
		{
			return false;
		}
		_request_scenario_type(iVar11, 15, 0, 0);
		iVar12++;
	}
	return true;
}

void func_882(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_883()
{
	return func_1192((*Global_263042)[player_id()]->f_1.f_21.f_2, Global_524288->f_40400);
}

struct<4> func_884(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_1193(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1194() };
		if (func_1195() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_1196(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_1197(player_id());
	}
	bVar33 = func_25(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_1006(iParam3, 0);
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
			return func_190();
		}
		if (!func_1198(&Var0, 0))
		{
			Var35 = { func_1199(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_885(var uParam0, int iParam1, bool bParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_186(*uParam0, &Var0, bParam2, 0, -1))
	{
		return false;
	}
	iVar14 = func_1006(iParam1, 0);
	if (!func_1200(iVar14))
	{
		return false;
	}
	*Global_17411.f_55.f_61[iVar14] = { *uParam0 };
	return true;
}

int func_886(var uParam0, int iParam1, struct<4> Param2)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(&Param2))
	{
		return 0;
	}
	uParam0->f_32 = func_832(iParam1);
	uParam0->f_32.f_9 = func_990(Param2, 1415981582, 0, -1);
	uParam0->f_32.f_9.f_1 = func_990(Param2, -2119169513, 0, -1);
	Var0.f_9 = -1591664384;
	if (func_1007(Param2, -415648720, &Var0, 0, -1))
	{
		uParam0->f_32.f_1.f_1 = Var0.f_4;
		uParam0->f_32.f_1 = func_990(Var0, -1189569496, 0, -1);
		uParam0->f_32.f_1.f_2 = func_990(Var0, 325139909, 0, -1);
		uParam0->f_32.f_1.f_3 = func_990(Var0, 986998820, 0, -1);
		uParam0->f_32.f_1.f_4 = func_990(Var0, -997150586, 0, -1);
		uParam0->f_32.f_1.f_5 = func_990(Var0, 1310070322, 0, -1);
		uParam0->f_32.f_1.f_6 = func_990(Var0, 802754820, 0, -1);
		uParam0->f_32.f_1.f_7 = func_990(Var0, -1886147520, 0, -1);
	}
	iVar14 = func_990(Param2, -653439684, 0, -1);
	if (iVar14 == -388128145)
	{
		uParam0->f_32.f_11 = 1;
	}
	else
	{
		uParam0->f_32.f_11 = 2;
	}
	return 1;
}

bool func_887(vector3 vParam0, bool bParam3)
{
	if (func_176(vParam0))
	{
		return false;
	}
	if (func_146(255) == 4)
	{
		return false;
	}
	if (func_163(4, 255))
	{
	}
	func_75(4);
	func_1201(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = bParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_1202(Global_1102219->f_3879, 36);
	return true;
}

int func_888(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_463())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

char* func_889(var uParam0)
{
	if (func_128(uParam0, 256))
	{
		return "lightrig@online@online_coop_lobby_generic";
	}
	sVar0 = "lightrig@online_free_roam_lobby";
	iVar1 = func_130();
	switch (iVar1)
	{
		case 924267974:
			sVar0 = "lightrig@online@online_lobby_heartlands";
			break;
		case 1984181016:
			sVar0 = "lightrig@online@online_lobby_desert";
			break;
		case 2096114765:
			sVar0 = "lightrig@online@online_lobby_swamp";
			break;
		case 254481872:
			sVar0 = "lightrig@online@online_lobby_snow";
			break;
		case 511673431:
			sVar0 = "lightrig@online@online_lobby_forest";
			break;
		default:
			break;
	}
	return sVar0;
}

void func_890(int iParam0)
{
	func_195(&(Global_1071686->f_28662.f_8.f_1), iParam0);
}

void func_891(int iParam0)
{
	if (func_1203(iParam0))
	{
		func_283(&(Global_1071686->f_28662.f_8.f_1), iParam0);
	}
}

void func_892()
{
	disable_control_action(0, -1758491362, false);
	disable_control_action(0, -433799070, false);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -867103143, false);
	disable_control_action(0, -1582581421, false);
	func_1204(0);
	func_1205();
}

bool func_893(var uParam0, var uParam1)
{
	Var0 = { *uParam1 };
	Var0.f_2 = 7;
	if (!_datafile_get_vector(uParam0->f_93.f_4033[0]->f_3[0], &Var0))
	{
		return false;
	}
	Var0.f_2 = 9;
	if (!_datafile_get_vector(&(uParam0->f_93.f_4033[0]->f_3[0]->f_3), &Var0))
	{
		return false;
	}
	if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
	{
		*uParam0->f_93.f_4033[0]->f_3[0] = { *uParam0->f_93.f_4033[0] + func_1206(*uParam0->f_93.f_4033[0]->f_3[0], uParam0->f_93.f_4033[0]->f_3[0]->f_3.f_2) };
	}
	*uParam0->f_93.f_4033[0]->f_3[0] = { *uParam0->f_93.f_4033[0]->f_3[0] + uParam0->f_93.f_5299 };
	Var0.f_2 = 10;
	if (!_datafile_get_float(&(uParam0->f_93.f_4033[0]->f_3[0]->f_6), &Var0))
	{
		return false;
	}
	Var0.f_2 = 16;
	if (!_datafile_get_vector(uParam0->f_93.f_4033[0]->f_3[1], &Var0))
	{
	}
	if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
	{
		*uParam0->f_93.f_4033[0]->f_3[1] = { *uParam0->f_93.f_4033[0] + func_1206(*uParam0->f_93.f_4033[0]->f_3[1], uParam0->f_93.f_4033[0]->f_3[1]->f_3.f_2) };
	}
	*uParam0->f_93.f_4033[0]->f_3[1] = { *uParam0->f_93.f_4033[0]->f_3[1] + uParam0->f_93.f_5299 };
	Var0.f_2 = 17;
	if (!_datafile_get_vector(&(uParam0->f_93.f_4033[0]->f_3[1]->f_3), &Var0))
	{
	}
	Var0.f_2 = 18;
	if (!_datafile_get_float(&(uParam0->f_93.f_4033[0]->f_3[1]->f_6), &Var0))
	{
	}
	return true;
}

bool func_894(var uParam0, var uParam1, int iParam2)
{
	Var1.f_6 = 2;
	Var1.f_6.f_1.f_6 = 1099978559;
	Var1.f_6.f_1.f_8.f_6 = 1099978559;
	Var24 = { *uParam1 };
	Var24.f_2 = 20;
	Var24.f_3 = iParam2;
	if (!_datafile_get_data_node_index(&(Var24.f_1), &Var24))
	{
		return false;
	}
	Var24.f_2 = 21;
	if (!_datafile_get_hash(&uVar0, &Var24))
	{
		return false;
	}
	else
	{
		Var1 = uVar0;
	}
	Var24.f_2 = 4;
	if (!_datafile_get_vector(&(Var1.f_1), &Var24))
	{
		return false;
	}
	else
	{
		if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
		{
			Var1.f_1 = { func_1206(Var1.f_1, uParam0->f_93.f_4033[0]->f_3[0]->f_3.f_2) };
			Var1.f_1 = { Var1.f_1 + *uParam0->f_93.f_4033[0] };
		}
		Var1.f_1 = { Var1.f_1 + uParam0->f_93.f_5299 };
	}
	Var24.f_2 = 23;
	if (!_datafile_get_float(&(Var1.f_4), &Var24))
	{
		return false;
	}
	else if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
	{
		Var1.f_4 = (Var1.f_4 + uParam0->f_93.f_4033[0]->f_3[0]->f_3.f_2);
	}
	Var24.f_2 = 22;
	if (!_datafile_get_int(&(Var1.f_5), &Var24))
	{
		Var1.f_5 = iParam2;
	}
	Var24.f_2 = 8;
	if (!_datafile_get_vector(Var1.f_6[0], &Var24))
	{
		return false;
	}
	else
	{
		*Var1.f_6[0] = { Var1.f_1 + func_1206(*Var1.f_6[0], Var1.f_4) };
	}
	Var24.f_2 = 9;
	if (!_datafile_get_vector(&(Var1.f_6[0]->f_3), &Var24))
	{
		return false;
	}
	else
	{
		Var1.f_6[0]->f_3.f_2 = (Var1.f_6[0]->f_3.f_2 + Var1.f_4);
	}
	Var24.f_2 = 10;
	if (!_datafile_get_float(&(Var1.f_6[0]->f_6), &Var24))
	{
		return false;
	}
	Var24.f_2 = 11;
	if (!_datafile_get_float(&(Var1.f_6[0]->f_7), &Var24))
	{
	}
	Var24.f_2 = 12;
	if (!_datafile_get_vector(Var1.f_6[1], &Var24))
	{
	}
	else
	{
		*Var1.f_6[1] = { Var1.f_1 + func_1206(*Var1.f_6[1], Var1.f_4) };
	}
	Var24.f_2 = 13;
	if (!_datafile_get_vector(&(Var1.f_6[1]->f_3), &Var24))
	{
	}
	else
	{
		Var1.f_6[1]->f_3.f_2 = (Var1.f_6[1]->f_3.f_2 + Var1.f_4);
	}
	Var24.f_2 = 14;
	if (!_datafile_get_float(&(Var1.f_6[1]->f_6), &Var24))
	{
	}
	Var24.f_2 = 15;
	if (!_datafile_get_float(&(Var1.f_6[1]->f_7), &Var24))
	{
	}
	if (Var1.f_6[0]->f_6 == 0f)
	{
		Var1.f_6[0]->f_6 = 18.0426f;
	}
	if (Var1.f_6[1]->f_7 == 0f)
	{
		Var1.f_6[1]->f_7 = 18.0426f;
	}
	func_1207(uParam0, iParam2, &Var1);
	return true;
}

bool func_895(var uParam0, var uParam1, int iParam2)
{
	iVar0 = iParam2;
	if (iVar0 < 0 || iVar0 >= 3)
	{
		return false;
	}
	Var1 = { *uParam1 };
	switch (iParam2)
	{
		case 0:
			Var1.f_2 = 27;
			break;
		case 1:
			Var1.f_2 = 28;
			break;
		case 2:
			Var1.f_2 = 29;
			break;
	}
	if (!_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		return false;
	}
	Var1.f_2 = 4;
	if (!_datafile_get_vector(uParam0->f_3475.f_1[iVar0], &Var1))
	{
		return false;
	}
	else
	{
		*uParam0->f_3475.f_1[iVar0] = { *uParam0->f_3475.f_1[iVar0] + uParam0->f_5299 };
	}
	Var1.f_2 = 23;
	if (!_datafile_get_float(&(uParam0->f_3475.f_1[iVar0]->f_3), &Var1))
	{
		return false;
	}
	Var1.f_2 = 24;
	if (!_datafile_get_vector(&(uParam0->f_3475.f_1[iVar0]->f_4), &Var1))
	{
		return false;
	}
	else
	{
		uParam0->f_3475.f_1[iVar0]->f_4 = { uParam0->f_3475.f_1[iVar0]->f_4 + uParam0->f_5299 };
	}
	Var1.f_2 = 25;
	if (!_datafile_get_float(&(uParam0->f_3475.f_1[iVar0]->f_7), &Var1))
	{
		return false;
	}
	Var1.f_2 = 7;
	if (!_datafile_get_vector(&(uParam0->f_3475.f_1[iVar0]->f_8), &Var1))
	{
		return false;
	}
	else
	{
		uParam0->f_3475.f_1[iVar0]->f_8 = { uParam0->f_3475.f_1[iVar0]->f_8 + uParam0->f_5299 };
	}
	Var1.f_2 = 9;
	if (!_datafile_get_vector(&(uParam0->f_3475.f_1[iVar0]->f_11), &Var1))
	{
		return false;
	}
	Var1.f_2 = 10;
	if (!_datafile_get_float(&(uParam0->f_3475.f_1[iVar0]->f_14), &Var1))
	{
		return false;
	}
	return true;
}

void func_896(var uParam0)
{
	if (does_entity_exist(uParam0->f_4032))
	{
		return;
	}
	uParam0->f_4032 = create_ped(iLocal_24, 0f, 0f, 0f, 0f, false, true, true, true);
	if (does_entity_exist(uParam0->f_4032))
	{
		set_entity_visible(uParam0->f_4032, false);
		freeze_entity_position(uParam0->f_4032, true);
		set_entity_collision(uParam0->f_4032, false, false);
		set_entity_invincible(uParam0->f_4032, true);
		set_entity_can_be_damaged(uParam0->f_4032, false);
		set_blocking_of_non_temporary_events(uParam0->f_4032, true);
		set_ped_can_ragdoll_from_player_impact(uParam0->f_4032, false);
		set_ped_can_ragdoll(uParam0->f_4032, false);
		set_entity_proofs(uParam0->f_4032, 127, false);
	}
}

void func_897()
{
	if (Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 0;
}

void func_898(var uParam0, var uParam1, var uParam2)
{
	func_1208(uParam0, uParam2);
	func_1209(uParam0, uParam2);
	func_1210(&(uParam2->f_93.f_142));
	func_1211(&(uParam2->f_93.f_1949));
	func_1212(uParam2);
	if (!is_bit_set(Global_3145858->f_226, 23))
	{
		func_1213(uParam2);
	}
	func_1214(&(uParam2->f_93.f_2025));
	func_1215(&(uParam2->f_93.f_2400));
	func_1216(&(uParam2->f_93));
	func_1217(&(uParam2->f_93.f_2686));
	func_1218(uParam2);
	uParam2->f_93.f_26 = get_network_time_accurate();
	iVar1 = network_player_id_to_int();
	iVar2 = func_234(uParam0, player_id());
	if (is_bit_set(Global_3145858->f_226, 22) && is_bit_set(Global_3145858->f_226, 21))
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_75, false);
	}
	else
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_75, true);
	}
	if (is_bit_set(Global_3145858->f_226, 23))
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_66, false);
	}
	if (is_bit_set(Global_3145858->f_226, 18))
	{
		_databinding_write_data_bool(uParam2->f_93.f_57.f_61, true);
		_databinding_write_data_bool(uParam2->f_93.f_142.f_9, true);
	}
	switch (uParam2->f_10.f_21.f_2)
	{
		case -504335712:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				iVar0++;
			}
			if (Global_3145858->f_230 > 0)
			{
				(*Global_263042)[iVar1]->f_1.f_34 = Global_3145858->f_230;
			}
			switch (Global_524288->f_40400)
			{
				case -1759663922:
				case -318976023:
				case 772881414:
					_databinding_write_data_bool(uParam2->f_93.f_57.f_65, false);
					if (!func_47() || func_48(uParam2->f_10.f_53))
					{
						_databinding_write_data_bool(uParam2->f_93.f_57.f_69, false);
						_databinding_write_data_bool(uParam2->f_93.f_57.f_79, false);
					}
					else if (func_1219())
					{
						_databinding_write_data_bool(uParam2->f_93.f_57.f_70, true);
						_databinding_write_data_bool(uParam2->f_93.f_57.f_71, true);
					}
					if (func_128(&(uParam2->f_93), 256))
					{
						_databinding_write_data_bool(uParam2->f_93.f_57.f_76, false);
						_databinding_write_data_bool(uParam2->f_93.f_57.f_72, true);
						_databinding_write_data_string(uParam2->f_93.f_30.f_21, _create_var_string(2, "MP_LOBBY_PLAYERS"));
					}
					break;
				default:
					if (is_bit_set(Global_3145858->f_226, 5))
					{
						_databinding_write_data_bool(uParam2->f_93.f_2025.f_1.f_2, false);
					}
					if (is_bit_set(Global_3145858->f_226, 6))
					{
						_databinding_write_data_bool(uParam2->f_93.f_2025.f_30.f_2, false);
					}
					if (is_bit_set(Global_3145858->f_226, 7))
					{
						_databinding_write_data_bool(uParam2->f_93.f_2025.f_59.f_2, false);
					}
					if (is_bit_set(Global_3145858->f_226, 13))
					{
						_databinding_write_data_bool(uParam2->f_93.f_2025.f_146.f_2, false);
					}
					if (func_1220(uParam0, uParam2))
					{
						func_470(&(uParam2->f_93), 4);
						_databinding_write_data_bool(uParam2->f_93.f_30.f_19, false);
						_databinding_write_data_bool(uParam2->f_93.f_57.f_1.f_2, false);
						_databinding_write_data_bool(uParam2->f_93.f_57.f_59, true);
						_databinding_write_data_bool(uParam2->f_93.f_142.f_1, false);
					}
					break;
			}
			if (((is_bit_set(Global_3145858->f_226, 5) && is_bit_set(Global_3145858->f_226, 6)) && is_bit_set(Global_3145858->f_226, 7)) && is_bit_set(Global_3145858->f_226, 13))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_65, false);
			}
			if (is_bit_set(Global_3145858->f_226, 1) || func_25(25))
			{
				func_470(&(uParam2->f_93), 4);
				_databinding_write_data_bool(uParam2->f_93.f_30.f_19, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_1.f_2, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_59, true);
				_databinding_write_data_bool(uParam2->f_93.f_142.f_1, false);
			}
			if (is_bit_set(Global_3145858->f_226, 2))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_76, false);
			}
			_databinding_write_data_bool(uParam2->f_93.f_57.f_77, func_1221());
			if (!is_bit_set(Global_3145858->f_226, 8))
			{
			}
			if (is_bit_set(Global_3145858->f_226, 16))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_62, true);
			}
			if ((func_1222(iVar2) && is_bit_set(Global_3145858->f_226, 3)) && !is_bit_set(Global_3145858->f_226, 9))
			{
				func_470(&(uParam2->f_93), 8);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_30.f_2, true);
				func_862(&(uParam2->f_93), iVar2);
			}
			_databinding_write_data_bool(uParam2->f_93.f_57.f_74, true);
			break;
		case 395262693:
			if (func_1223(20))
			{
				func_470(&(uParam2->f_93), 4);
				_databinding_write_data_bool(uParam2->f_93.f_30.f_19, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_1.f_2, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_59, true);
				_databinding_write_data_bool(uParam2->f_93.f_142.f_1, false);
			}
			if (is_bit_set(Global_3145858->f_226, 1) || !func_1223(27))
			{
				func_470(&(uParam2->f_93), 4);
				_databinding_write_data_bool(uParam2->f_93.f_30.f_19, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_1.f_2, false);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_59, true);
				_databinding_write_data_bool(uParam2->f_93.f_142.f_1, false);
			}
			if (Global_3145858->f_230 > 0)
			{
				(*Global_263042)[iVar1]->f_1.f_34 = Global_3145858->f_230;
			}
			if (is_bit_set(Global_3145858->f_226, 5))
			{
				_databinding_write_data_bool(uParam2->f_93.f_2025.f_1.f_2, false);
			}
			if (is_bit_set(Global_3145858->f_226, 6))
			{
				_databinding_write_data_bool(uParam2->f_93.f_2025.f_30.f_2, false);
			}
			if (is_bit_set(Global_3145858->f_226, 7))
			{
				_databinding_write_data_bool(uParam2->f_93.f_2025.f_59.f_2, false);
			}
			if (is_bit_set(Global_3145858->f_226, 13))
			{
				_databinding_write_data_bool(uParam2->f_93.f_2025.f_146.f_2, false);
			}
			if (((is_bit_set(Global_3145858->f_226, 5) && is_bit_set(Global_3145858->f_226, 6)) && is_bit_set(Global_3145858->f_226, 7)) && is_bit_set(Global_3145858->f_226, 13))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_65, false);
			}
			if ((func_1222(iVar2) && is_bit_set(Global_3145858->f_226, 3)) && !is_bit_set(Global_3145858->f_226, 9))
			{
				func_470(&(uParam2->f_93), 8);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_30.f_2, true);
				func_862(&(uParam2->f_93), iVar2);
			}
			if (is_bit_set(Global_3145858->f_226, 16))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_62, true);
			}
			break;
		case -933924539:
			func_470(&(uParam2->f_93), 4);
			_databinding_write_data_bool(uParam2->f_93.f_30.f_19, false);
			_databinding_write_data_bool(uParam2->f_93.f_57.f_1.f_2, false);
			_databinding_write_data_bool(uParam2->f_93.f_57.f_59, true);
			_databinding_write_data_bool(uParam2->f_93.f_142.f_1, false);
			if (is_bit_set(Global_3145858->f_226, 16))
			{
				_databinding_write_data_bool(uParam2->f_93.f_57.f_62, true);
			}
			if (is_bit_set(Global_2097152->f_253, 14))
			{
				uParam2->f_10.f_32 = 1;
			}
			if ((func_1222(iVar2) && is_bit_set(Global_3145858->f_226, 3)) && !is_bit_set(Global_3145858->f_226, 9))
			{
				func_470(&(uParam2->f_93), 8);
				_databinding_write_data_bool(uParam2->f_93.f_57.f_30.f_2, true);
				func_862(&(uParam2->f_93), iVar2);
			}
			_databinding_write_data_bool(uParam2->f_93.f_57.f_61, true);
			_databinding_write_data_bool(uParam2->f_93.f_142.f_9, true);
			break;
	}
}

int func_899(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1139381->f_4779.f_4;
	}
	return (*Global_1145091)[iParam0]->f_23.f_4;
}

int func_900()
{
	if (func_152(32))
	{
		return Global_1952637->f_2365;
	}
	return Global_1952637->f_1675;
}

bool func_901()
{
	iVar0 = &Global_1952637->f_595[8];
	iVar0 = (&Global_1952637->f_595[10] + iVar0);
	iVar0 = (&Global_1952637->f_595[1] + iVar0);
	iVar0 = (&Global_1952637->f_595[2] + iVar0);
	iVar0 = (&Global_1952637->f_595[5] + iVar0);
	iVar0 = (&Global_1952637->f_595[25] + iVar0);
	iVar0 = (&Global_1952637->f_595[23] + iVar0);
	iVar0 = (&Global_1952637->f_595[18] + iVar0);
	iVar0 = (&Global_1952637->f_595[19] + iVar0);
	return iVar0 > 0;
}

void func_902(var uParam0)
{
	if (!is_entity_focus(func_1224()))
	{
		return;
	}
	set_focus_pos_and_vel(*uParam0->f_4033[0], uParam0->f_4033[0]->f_3[1]->f_3);
	func_470(uParam0, 64);
}

int func_903(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 16)
	{
		return -1;
	}
	iVar0 = uParam0->f_5297;
	iVar1 = iParam1;
	while (iVar1 <= 15)
	{
		if (uParam0->f_4033[iVar0]->f_20[iVar1]->f_1 == -1)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_904(int iParam0, int iParam1)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = iParam1;
		func_472(iParam0);
	}
}

bool func_905(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

int func_906(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1139381->f_4779;
	}
	return (*Global_1145091)[iParam0]->f_23;
}

void func_907(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_3 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_3 = iParam1;
		func_472(iParam0);
	}
}

int func_908(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_909(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_6 != iParam1)
	{
		Global_1071686->f_21952[iParam0]->f_6 = iParam1;
		if (is_mp_gamer_tag_active(Global_1071686->f_21952[iParam0]->f_2))
		{
			_set_mp_gamer_tag_type(Global_1071686->f_21952[iParam0]->f_2, iParam1);
		}
		func_472(iParam0);
	}
}

void func_910(int iParam0, int iParam1)
{
	if (Global_1071686->f_21952[iParam0]->f_9 != iParam1)
	{
		func_473(iParam0, 1, 1);
		Global_1071686->f_21952[iParam0]->f_9 = iParam1;
		func_472(iParam0);
	}
}

int func_911(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_912(int iParam0, int iParam1)
{
	if (!func_445())
	{
		return;
	}
	iVar1 = func_1225();
	switch (iVar1)
	{
		case -1:
			break;
		case 0:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (&Global_262155->f_1[iVar0] == iParam1)
				{
					Global_262155->f_1[iVar0]->f_4 = iParam0;
					return;
				}
				iVar0++;
			}
			break;
		case 1:
			if (&Global_262155->f_1[Global_262155->f_162] == 2147483647)
			{
				return;
			}
			Global_262155->f_1[Global_262155->f_162]->f_4 = iParam0;
			break;
	}
}

char* func_913(int iParam0)
{
	iVar0 = floor((to_float(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return _0xd8402b858f4ddd88(&cVar1, get_length_of_literal_string(&cVar1));
}

int func_914()
{
	if (!func_77(Global_1572887->f_266.f_63, 8))
	{
		return 2;
	}
	if (Global_1572887->f_266.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887->f_266 > 7 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	return 2;
}

void func_915(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_134(uParam0, uParam2, 0);
	uParam2->f_93.f_2 = iParam3;
	switch (uParam2->f_93.f_2)
	{
		case -1942962658:
			func_444(uParam2, 500);
			if (func_574(uParam2))
			{
				func_67("MP_CO_OP_LOBBIES_LOW_START", 3, 0);
			}
			break;
		case 1717789502:
			func_444(uParam2, 500);
			if (!func_15(&(uParam2->f_10), 512))
			{
				func_656(0, 1, 0, 0, 0, 0, 0, 0, 0);
			}
			if (is_screen_faded_out())
			{
				do_screen_fade_in(0);
			}
			break;
		case 1549204131:
			func_1226(uParam2);
			func_1227(uParam2);
			func_1228(func_921(func_782()));
			if (!func_128(&(uParam2->f_93), 128))
			{
				if (func_128(&(uParam2->f_93), 65536))
				{
					func_129(&(uParam2->f_93), 65536);
					func_614(uParam0, &(uParam2->f_93), 0, -1);
				}
				else
				{
					func_444(uParam2, 500);
				}
			}
			break;
		case 723208654:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_PLAYERS"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			_databinding_write_data_bool(uParam2->f_93.f_1949.f_4, false);
			if (func_128(&(uParam2->f_93), 4))
			{
				_databinding_write_data_string(uParam2->f_93.f_30.f_21, _create_var_string(2, "MP_LOBBY_PLAYERS_ALL"));
				_databinding_write_data_int(uParam2->f_93.f_30.f_23, 1);
			}
			break;
		case 409305524:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_PLAYER_OPTIONS_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, &(uParam2->f_93.f_17));
			func_1229(uParam0, uParam2);
			break;
		case -1136409476:
			func_1230(uParam2);
			break;
		case -587541440:
			func_1226(uParam2);
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, _create_var_string(2, "MP_LOBBY_GAME_OPTIONS_SUBHEADER"));
			break;
		case 1570227737:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_SUBHEADER"));
			func_764(&(uParam2->f_93.f_2229));
			break;
		case -198141192:
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, func_1231(func_291(uParam2)));
			func_1232(&(uParam2->f_93.f_2229), func_291(uParam2));
			break;
		case 1596028677:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_PURCHASES_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			_databinding_write_data_bool(uParam2->f_93.f_30.f_10, true);
			if (!func_1233(uParam2->f_93.f_28))
			{
				if (func_1234() == 0)
				{
				}
				else
				{
					_databinding_write_data_int(uParam2->f_93.f_2686.f_4, func_1235());
				}
				func_609(&(uParam2->f_93));
			}
			else
			{
				func_823(&(uParam2->f_93.f_2686), func_822(&(uParam2->f_93)));
			}
			break;
		case 306537471:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_OUTFITS_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			func_1236(uParam0, uParam1, uParam2);
			break;
		case 1120962917:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "INVITES_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			func_1237(1);
			break;
		case -761066372:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_INVITE_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			func_826(&(uParam2->f_93));
			break;
		case 911640860:
			break;
		case -1182353825:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_STABLE_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, "");
			func_577(&(uParam2->f_93));
			func_579(&(uParam2->f_93), player_id(), 0);
			break;
		case 1268583550:
			_databinding_write_data_string(uParam2->f_93.f_30.f_7, _create_var_string(2, "MP_LOBBY_STARTING_INVENTORY_HEADER"));
			_databinding_write_data_string(uParam2->f_93.f_30.f_8, _create_var_string(2, "MP_LOBBY_STARTING_INVENTORY_SUBHEADER"));
			break;
		default:
			break;
	}
}

void func_916(var uParam0, int iParam1)
{
	if (func_128(uParam0, 128))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 >= 16)
	{
		return;
	}
	iVar0 = 0;
	if (does_cam_exist(uParam0->f_4031))
	{
		if (is_cam_interpolating(uParam0->f_4031))
		{
			set_cam_params(uParam0->f_4031, get_cam_coord(uParam0->f_4031), get_cam_rot(uParam0->f_4031, 2), get_cam_fov(uParam0->f_4031), 0, 1, 1, 2, 1, 0);
		}
		func_700(uParam0);
		iVar1 = uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_1;
		if ((iVar1 != -1 && does_entity_exist(uParam0->f_4033[uParam0->f_5297]->f_325[iVar1]->f_3)) && !is_ped_male(uParam0->f_4033[uParam0->f_5297]->f_325[iVar1]->f_3))
		{
			iVar0 = 1;
		}
		set_cam_params(uParam0->f_4031, *uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_2[iVar0], uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_2[iVar0]->f_3, uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_2[iVar0]->f_6, 0, 1, 0, 2, 1, 0);
		if (iVar1 != -1)
		{
			vVar2 = { get_ped_bone_coords(uParam0->f_4033[uParam0->f_5297]->f_325[iVar1]->f_3, 16351, 0f, 0f, 0f) };
			_0x11f32bb61b756732(uParam0->f_4031, vdist(*uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_2[iVar0], vVar2));
			if (!does_entity_exist(uParam0->f_4032))
			{
				func_896(uParam0);
			}
			if (does_entity_exist(uParam0->f_4032))
			{
				vVar5 = { *uParam0->f_4033[uParam0->f_5297]->f_20[iParam1]->f_2[iVar0] };
				vVar5.f_2 = (vVar5.z + func_1238(func_128(uParam0, 256), -1f, -1.9f));
				set_entity_coords(uParam0->f_4032, vVar5, true, false, true, true);
			}
			if (func_1239(uParam0->f_4033[uParam0->f_5297]->f_325[iVar1]->f_3, uParam0->f_5297))
			{
				_0xe7fa07624574b79a(uParam0->f_4033[uParam0->f_5297]->f_325[iVar1]->f_3, uParam0->f_4032, 1, 1, -1f, 1, 0, 0, 1);
			}
		}
	}
	func_129(uParam0, 524288);
}

void func_917(var uParam0)
{
	if (!does_cam_exist(uParam0->f_4031))
	{
		return;
	}
	func_297(uParam0, uParam0->f_5312.f_7);
	set_cam_params(uParam0->f_4031, uParam0->f_5312, uParam0->f_5312.f_3, uParam0->f_5312.f_6, 0, 1, 1, 2, 1, 0);
}

void func_918(var uParam0, var uParam1)
{
	if (func_128(&(uParam1->f_93), 32768) && Global_1901947->f_50.f_28 > 0)
	{
		if (uParam1->f_93.f_3470 != 0)
		{
			if (!func_211(&(uParam1->f_93.f_5325)))
			{
				func_273(&(uParam1->f_93.f_5325));
			}
			else if (func_213(&(uParam1->f_93.f_5325)) > Global_1901947->f_50.f_28)
			{
				func_1240(uParam0, uParam1);
			}
		}
		else if (func_211(&(uParam1->f_93.f_5325)))
		{
			func_1241(&(uParam1->f_93.f_5325));
		}
	}
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &Var1))
		{
			switch (Var1)
			{
				case -1203660660:
					if (Var1.f_1 == uParam1->f_93.f_3470)
					{
						if (func_128(&(uParam1->f_93), 16384))
						{
							func_1242(uParam1, &Var1);
						}
						else if (func_128(&(uParam1->f_93), 32768))
						{
							func_1240(uParam0, uParam1);
						}
					}
					_event_manager_pop_event(iVar0);
					break;
				default:
					_event_manager_pop_event(iVar0);
					break;
			}
		}
	}
}

bool func_919(var uParam0, var uParam1)
{
	return (uParam1->f_93.f_5331 != -1 && uParam1->f_93.f_5331 != func_234(uParam0, player_id()));
}

int func_920(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_478(func_721(0)) && func_728(func_721(0)) == 7)
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
			iVar6 = func_1243(iParam0);
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
			return func_1244(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_194(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_1245(iParam0, 1);
	if (!bVar0)
	{
		if (func_1246(iParam0, bParam1))
		{
			return func_1244(iParam0);
		}
		else if (func_1247(iParam0, bParam1))
		{
			if (func_1248(iParam0, bParam1))
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
		return func_1243(iParam0);
	}
	else if (func_1246(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_1249(func_513(func_721(0)), 1) == 395262693)
		{
			return func_1244(iParam0);
		}
		else
		{
			return func_1244(iParam0);
		}
	}
	else if (func_1247(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

int func_921(int iParam0)
{
	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iParam0 != &Global_265377->f_117359.f_6758[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (&Global_265377->f_117359.f_6725[iVar0] != &Global_265354->f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_922()
{
	return Global_1572887->f_106.f_90;
}

bool func_923(var uParam0)
{
	if (!func_128(&(uParam0->f_93), 131072))
	{
		if (_can_launch_app_by_hash_with_entry(1473691941, -515341293))
		{
			if (!_is_app_running(595204529))
			{
				iVar0 = _launch_app_by_hash_with_entry(1473691941, -515341293);
				if (iVar0 != 0)
				{
				}
				else
				{
					func_470(&(uParam0->f_93), 131072);
					return true;
				}
			}
		}
		return false;
	}
	else if (!func_128(&(uParam0->f_93), 262144))
	{
		if (_uistatemachine_request_transition(1473691941, 53664663))
		{
			func_470(&(uParam0->f_93), 262144);
			return true;
		}
		return false;
	}
	return true;
}

void func_924(var uParam0, var uParam1, var uParam2)
{
	func_929();
	_databinding_write_data_bool(uParam1->f_93.f_57.f_78, (_unlock_is_unlocked(-722216913) && Global_1940311->f_242.f_1186 > 0));
	_databinding_write_data_bool(uParam1->f_93.f_57.f_80, (_unlock_is_unlocked(-722216913) && Global_1940311->f_242.f_1186 > 0));
	iVar0 = func_234(uParam0, player_id());
	bVar1 = uParam1->f_93.f_6 == iVar0;
	_databinding_write_data_int(uParam1->f_93.f_30.f_22, uParam1->f_93.f_6);
	bVar2 = uParam1->f_93.f_6 != iVar0;
	bVar3 = false;
	if ((((*uParam2)[participant_id_to_int()]->f_28 == -1 || (*uParam2)[participant_id_to_int()]->f_28 != iVar0) && uParam1->f_93.f_6 == iVar0) && uParam0->f_516 > 1)
	{
		bVar3 = true;
	}
	if (!func_149(player_id(), 65536) && func_30((*uParam2)[participant_id_to_int()]) != 8)
	{
		if (!func_40(uParam1, 512) && bVar3)
		{
			_databinding_write_data_bool(uParam1->f_93.f_57.f_82, bVar3);
			_databinding_write_data_bool(uParam1->f_93.f_57.f_83, bVar3);
			func_29(uParam1, 512);
		}
		else if (func_40(uParam1, 512) && !bVar3)
		{
			_databinding_write_data_bool(uParam1->f_93.f_57.f_82, bVar2);
			_databinding_write_data_bool(uParam1->f_93.f_57.f_83, bVar2);
			func_263(uParam1, 512);
		}
	}
	if (!bVar3)
	{
		func_263(uParam1, 512);
	}
	if (func_40(uParam1, 2))
	{
		if (func_128(&(uParam1->f_93), 8))
		{
			_databinding_write_data_bool(uParam1->f_93.f_57.f_30.f_1, bVar1);
			_databinding_write_data_bool(uParam1->f_93.f_57.f_30.f_21, bVar1);
		}
	}
	if (func_30((*uParam2)[participant_id_to_int()]) >= 8)
	{
		_databinding_write_data_bool(uParam1->f_93.f_57.f_82, false);
		_databinding_write_data_bool(uParam1->f_93.f_57.f_83, false);
	}
	iVar4 = _0x51f33dbc1a41cbfd();
	if (func_128(&(uParam1->f_93), 8192))
	{
		if (func_194(iVar4, 192))
		{
			_databinding_write_data_string(uParam1->f_93.f_57.f_73, "MP_LOBBY_TOGGLE_BACKFILL");
			if (uParam1->f_93.f_29 == -855746379)
			{
				_databinding_write_data_string(uParam1->f_93.f_30.f_9, _create_var_string(2, "MP_LOBBY_MATCHMAKING_OFF_TOOLTIP"));
			}
			func_129(&(uParam1->f_93), 8192);
		}
	}
	else if (!func_194(iVar4, 192))
	{
		_databinding_write_data_string(uParam1->f_93.f_57.f_73, "MP_LOBBY_TOGGLE_BACKFILL_DISABLE");
		if (uParam1->f_93.f_29 == -855746379)
		{
			_databinding_write_data_string(uParam1->f_93.f_30.f_9, _create_var_string(2, "MP_LOBBY_MATCHMAKING_ON_TOOLTIP"));
		}
		func_470(&(uParam1->f_93), 8192);
	}
	iVar5 = func_439(uParam0);
	iVar6 = _databinding_read_data_int(uParam1->f_93.f_57.f_1.f_25) + 1;
	if (iVar5 != iVar6)
	{
		func_1250(uParam0, uParam1);
	}
	func_825(uParam0, uParam1);
	if (!func_128(&(uParam1->f_93), 256) && !is_bit_set(Global_3145858->f_226, 2))
	{
		_databinding_write_data_bool(uParam1->f_93.f_57.f_76, bVar1);
	}
	_databinding_write_data_bool(uParam1->f_93.f_57.f_77, func_1221());
}

void func_925(var uParam0, var uParam1)
{
	if (!func_1251(uParam1))
	{
		return;
	}
	if (uParam1->f_93.f_2 == -1182353825)
	{
		if (_is_app_running(1473691941) && !_databinding_read_data_bool(uParam1->f_93.f_57.f_60))
		{
			_request_uiapp_transition_by_hash(1473691941, 927041140);
			return;
		}
	}
	if (uParam1->f_93.f_2 == 723208654 && uParam1->f_93.f_25 != 255)
	{
		iVar0 = func_832((*uParam0)[uParam1->f_93.f_25]->f_31);
		if (uParam1->f_93.f_3475.f_53 != iVar0)
		{
			iVar1 = iVar0;
			if (!func_768(&(uParam1->f_93), &iVar1))
			{
			}
			func_769(&(uParam1->f_93.f_3475), 2);
		}
	}
	func_1252(uParam1);
	if (func_128(&(uParam1->f_93), 2048))
	{
		if (!does_entity_exist(uParam1->f_93.f_3475.f_49))
		{
			func_129(&(uParam1->f_93), 2048);
		}
		else if (_0xa0bc8faed8cfeb3c(uParam1->f_93.f_3475.f_49))
		{
			func_774(&(uParam1->f_93.f_3475), 1);
			func_470(&(uParam1->f_93), 4096);
			func_129(&(uParam1->f_93), 2048);
		}
	}
	if (func_128(&(uParam1->f_93), 4096))
	{
		if (!does_entity_exist(uParam1->f_93.f_3475.f_49))
		{
			func_129(&(uParam1->f_93), 4096);
		}
		else
		{
			iVar13 = (Global_1296859->f_20 - uParam1->f_93.f_3475.f_50);
			if (IntToFloat(iVar13) < 125f)
			{
				iVar14 = round(((IntToFloat(iVar13) / 125f) * 255f));
				set_entity_alpha(uParam1->f_93.f_3475.f_49, iVar14, false);
			}
			else
			{
				func_129(&(uParam1->f_93), 4096);
				set_entity_alpha(uParam1->f_93.f_3475.f_49, 255, false);
			}
		}
	}
}

void func_926(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_749 == uParam1->f_93.f_9)
	{
		_databinding_write_data_string(uParam1->f_93.f_1949.f_5, _create_var_string(2, "MP_LOBBY_TEAM_COUNT", uParam0->f_750, func_555()));
		_databinding_write_data_bool(uParam1->f_93.f_1949.f_4, (!uParam1->f_93.f_3471 && uParam0->f_749 != player_id()));
	}
	else
	{
		_databinding_write_data_string(uParam1->f_93.f_1949.f_5, "");
		_databinding_write_data_bool(uParam1->f_93.f_1949.f_4, (uParam0->f_749 == 255 && uParam1->f_93.f_9 != player_id()));
	}
	if (uParam1->f_93.f_9 != 255 && network_is_player_a_participant(uParam1->f_93.f_9))
	{
		iVar0 = network_get_participant_index(uParam1->f_93.f_9);
		if (func_275(uParam0, iVar0) || func_30((*uParam2)[iVar0]) == 15)
		{
			if (_is_app_running(1473691941))
			{
				_request_uiapp_transition_by_hash(1473691941, 927041140);
			}
		}
	}
	func_1253(uParam1);
}

void func_927(var uParam0)
{
	if (uParam0->f_93.f_2022.f_2 == -1)
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		if (!_network_get_display_name_from_handle(&(uParam0->f_10.f_1), Var0[0]))
		{
			return;
		}
		_databinding_write_data_string(uParam0->f_93.f_30.f_9, _create_var_string(10, "MP_LOBBY_GAME_DETAILS_CREATOR", func_559(Var0[0], 109029619)));
	}
	else
	{
		iVar9 = _0x58cc181719256197(uParam0->f_93.f_2022.f_2, &Var0, 1);
		if (iVar9 == 0)
		{
			_databinding_write_data_string(uParam0->f_93.f_30.f_9, _create_var_string(10, "MP_LOBBY_GAME_DETAILS_CREATOR", func_559(Var0[0], 109029619)));
			uParam0->f_93.f_2022.f_2 = -1;
		}
		else if (iVar9 == -1)
		{
			uParam0->f_93.f_2022.f_2 = -1;
		}
		else if (iVar9 == 1)
		{
		}
	}
}

void func_928(var uParam0, var uParam1)
{
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_1.f_24);
	if (uParam0->f_723 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_1.f_24, uParam0->f_723);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_30.f_24);
	if (uParam0->f_723.f_1 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_30.f_24, uParam0->f_723.f_1);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_59.f_24);
	if (uParam0->f_723.f_2 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_59.f_24, uParam0->f_723.f_2);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_88.f_24);
	if (uParam0->f_723.f_3 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_88.f_24, uParam0->f_723.f_3);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_117.f_24);
	if (uParam0->f_723.f_4 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_117.f_24, uParam0->f_723.f_4);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_146.f_24);
	if (uParam0->f_723.f_5 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_146.f_24, uParam0->f_723.f_5);
	}
	iVar0 = _databinding_read_data_int(uParam1->f_93.f_2025.f_175.f_24);
	if (uParam0->f_723.f_6 != iVar0)
	{
		_databinding_write_data_int(uParam1->f_93.f_2025.f_175.f_24, uParam0->f_723.f_6);
	}
}

void func_929()
{
	iVar2 = Global_1296859->f_21;
	if (Global_1940311->f_242.f_1186 <= 0)
	{
		return;
	}
	if (Global_1940311->f_242.f_1190 >= 30)
	{
		Global_1940311->f_242.f_1190 = 0;
	}
	Var3 = { *Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190] };
	if (_databinding_is_data_id_valid(Var3))
	{
		iVar0 = _databinding_read_data_int(Var3.f_25);
		switch (_databinding_read_data_int(Var3.f_26))
		{
			case 21:
				if (!func_1254() || iVar0 < iVar2)
				{
					iVar1 = 0;
					while (iVar1 < Global_1248240->f_8903.f_14)
					{
						if (&Global_1248240->f_8903.f_9[iVar1] == int_to_playerindex(_databinding_read_data_int(Var3.f_27)))
						{
							Global_1248240->f_8903.f_9[iVar1]->f_2 = 1;
							Global_1248240->f_8903.f_9[iVar1]->f_3 = iVar0 < iVar2;
						}
						iVar1++;
					}
					func_1255(_databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_26));
					func_843(Var3);
				}
				break;
			default:
				if (iVar0 < iVar2)
				{
					func_1255(_databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_26));
					func_843(Var3);
				}
				break;
		}
	}
	Global_1940311->f_242.f_1190++;
}

void func_930()
{
	if (Global_1940311->f_242.f_1187 <= 0)
	{
		func_1256("", 1105014447);
		return;
	}
	func_1257();
	iVar0 = Global_1296859->f_21;
	if (Global_1940311->f_242.f_1189 + 1 <= iVar0)
	{
		Global_1940311->f_242.f_1189 = iVar0;
		func_1256(func_1259(func_1258()), 1105014447);
	}
}

void func_931(var uParam0)
{
	switch (uParam0->f_27)
	{
		case 0:
			func_1260(&(uParam0->f_142), uParam0);
			break;
		case 1:
			func_1261(uParam0);
			break;
		case 2:
			func_1262(uParam0);
			break;
	}
}

void func_932(var uParam0)
{
	switch (func_567(uParam0->f_2686.f_426))
	{
		case 307971639:
			iVar0 = func_1224();
			iVar1 = _get_weapon_type_from_ammo_type(uParam0->f_2686.f_426);
			if (func_1263(iVar1))
			{
				iVar2 = get_max_ammo_in_clip(iVar0, iVar1, false);
				iVar3 = get_ammo_in_ped_weapon(iVar0, iVar1);
				if (iVar3 < iVar2)
				{
					iVar2 = iVar3;
				}
				_databinding_write_data_int(uParam0->f_30.f_12, iVar2);
				_databinding_write_data_int(uParam0->f_30.f_13, (iVar3 - iVar2));
			}
			break;
		case -562345805:
		case 2085633299:
			break;
		default:
			break;
	}
	iVar4 = func_822(uParam0);
	iVar12 = func_597();
	iVar13 = uParam0->f_28;
	iVar10 = 0;
	uParam0->f_2686.f_429[iVar13] = 0;
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 17)
	{
		iVar7 = func_601(iVar10);
		iVar6 = 2;
		iVar5 = func_567(iVar7);
		if (iVar4 != 0 && iVar5 != iVar4)
		{
		}
		else
		{
			switch (iVar5)
			{
				case 307971639:
					if (is_bit_set(Global_3145858->f_226, 21))
					{
					}
					else
					{
						iVar6 = 0;
						Jump @300; //curOff = 273
						if (is_bit_set(Global_3145858->f_226, 22))
						{
						}
						else
						{
							iVar6 = 1;
							if (!func_602(iVar7, 0))
							{
							}
							else if (!func_603(iVar7))
							{
							}
							else
							{
								iVar8 = func_604(iVar7, 0, 1, -1, 1);
								if (func_605(iVar7, iVar8, 1))
								{
								}
								else
								{
									bVar9 = func_606(&(uParam0->f_2686.f_432), iVar7);
									_databinding_write_data_bool(uParam0->f_2686.f_41[iVar10]->f_1, bVar9);
									_databinding_write_data_bool(uParam0->f_2686.f_41[iVar10]->f_9, bVar9);
									iVar11 = func_1264(iVar7);
									_databinding_write_data_bool(uParam0->f_2686.f_41[iVar10]->f_20, (bVar9 && iVar12 >= iVar11));
									_databinding_write_data_string(uParam0->f_2686.f_41[iVar10]->f_18, _create_var_string(2, "SHOP_AMMO_BUY_MAX", iVar11));
									if ((iVar6 != 2 && iVar6 == uParam0->f_28) && bVar9)
									{
										uParam0->f_2686.f_429[iVar6] = (&uParam0->f_2686.f_429[iVar6] + iVar11);
									}
								}
							}
						}
					}
					iVar10++;
					bVar14 = (&uParam0->f_2686.f_429[iVar13] > 0 && iVar12 >= &uParam0->f_2686.f_429[iVar13]);
					_databinding_write_data_bool(uParam0->f_2686.f_5.f_1, bVar14);
					_databinding_write_data_bool(uParam0->f_2686.f_5.f_9, bVar14);
					func_594(&iVar15);
					iVar15 = (func_595(1933821560, 0, 59806960) * iVar15);
					if (func_518(0) == 3)
					{
						_databinding_write_data_bool(uParam0->f_2686.f_23.f_1, false);
						_databinding_write_data_bool(uParam0->f_2686.f_23.f_9, false);
					}
					else
					{
						bVar9 = iVar15 > 0;
						_databinding_write_data_bool(uParam0->f_2686.f_23.f_1, (bVar9 && iVar12 >= iVar15));
						_databinding_write_data_bool(uParam0->f_2686.f_23.f_9, (bVar9 && iVar12 >= iVar15));
					}
					if (uParam0->f_2686.f_428)
					{
						_databinding_write_data_int(uParam0->f_2686.f_421, iVar15);
					}
					else if (uParam0->f_2686.f_427)
					{
						_databinding_write_data_int(uParam0->f_2686.f_421, &(uParam0->f_2686.f_429[iVar13]));
					}
					else
					{
						iVar10 = func_1264(uParam0->f_2686.f_426);
						_databinding_write_data_int(uParam0->f_2686.f_421, iVar10);
						if (iVar10 == 0)
						{
							_databinding_write_data_bool(uParam0->f_2686.f_423, false);
						}
						else
						{
							_databinding_write_data_bool(uParam0->f_2686.f_423, true);
						}
						if (uParam0->f_2686.f_426 != 0)
						{
							_databinding_write_data_string(uParam0->f_30.f_9, _create_var_string(2, "SHOP_TOOLTIP_ITEM_PERCENT", func_1000(uParam0->f_2686.f_426, 1, 1, 0), func_1265(uParam0->f_2686.f_426, 1)));
						}
					}
					default:
						break;
			}
		}
	}
}

void func_933(var uParam0)
{
	iVar0 = uParam0->f_4033[uParam0->f_5297]->f_325[participant_id_to_int()]->f_7;
	if (uParam0->f_8 != iVar0 && is_screen_faded_in())
	{
		func_615(uParam0, iVar0);
	}
}

Vector3 func_934(var uParam0, vector3 vParam1)
{
	vVar0 = { vParam1 - *uParam0->f_4033[0] };
	vVar0 = { func_1206(vVar0, uParam0->f_5296) };
	vVar0 = { *uParam0->f_4033[1] + vVar0 };
	return vVar0;
}

int func_935()
{
	if (Global_3145858->f_224 != -1)
	{
		return Global_3145858->f_224;
	}
	return Global_3145858->f_225;
}

void func_936(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_937(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_938()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_939(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

int func_940(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_941(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam0)
	{
		func_1266(1);
		if (bParam1)
		{
			func_1266(4);
		}
		else
		{
			func_1267(4);
		}
		if (bParam3)
		{
			func_1266(8);
		}
		else
		{
			func_1267(8);
		}
		if (bParam4)
		{
			func_1266(16);
		}
		else
		{
			func_1267(16);
		}
	}
	else
	{
		func_1266(2);
		if (bParam1)
		{
			func_1266(4);
		}
		else
		{
			func_1267(4);
		}
		if (bParam3)
		{
			func_1266(8);
		}
		else
		{
			func_1267(8);
		}
		if (bParam2)
		{
			func_1266(128);
		}
		else
		{
			func_1267(128);
		}
	}
}

int func_942(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1629924060;
		case 1:
			return -1915493356;
		case 2:
			return -656754985;
		case 3:
			return -1741930097;
		case 4:
			return -1253413535;
		case 5:
			return 1439605128;
		case 6:
			return -1974111254;
		case 7:
			return -1737346484;
		default:
			break;
	}
	return 114550809;
}

int func_943()
{
	return Global_1952637->f_1;
}

int func_944(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

void func_945(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_1268(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_152(32768) && func_493(1108822547, 8)) && func_1269(10, iParam3))
	{
		func_1270(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_488(iVar2, 1);
		if (func_493(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_1269(iVar0, iParam3))
		{
		}
		else if ((func_493(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_493(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_1271(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_500(iVar2, 1, 6);
			}
		}
		else
		{
			if (!bParam6)
			{
				if ((!bParam2 && &uParam0->f_1[iVar0] == &Global_1952637->f_2764[iVar0]) && uParam0->f_1[iVar0]->f_1 == Global_1952637->f_2764[iVar0]->f_1)
				{
				}
				else
				{
					func_1271(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_493(iVar2, 1))
					{
						func_315(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_1272(uParam0->f_1[iVar0], iParam1);
				}
				iVar1++;
				if (Global_1952637->f_925 <= 0)
				{
					return;
				}
				if (bParam4)
				{
					_0xaab86462966168ce(iParam1, 1);
					_update_ped_variation(iParam1, false, true, true, true, bParam5);
				}
			}
		}
	}
}

int func_946(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_943();
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

int func_947(int iParam0)
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

void func_948(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1273(uParam0->f_1[iVar0], 2))
		{
			if (func_1269(iVar0, iParam1))
			{
				vVar4 = { func_1274(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_316(iVar0, 4))
				{
					func_317(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1275(iVar0, 4, 6);
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

void func_949(int iParam0)
{
	func_1276(&(Global_1952637->f_2897), iParam0);
}

bool func_950(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1277(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_951(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_952(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_497(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_316(iVar0, 16);
		if (bVar1)
		{
			func_317(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_494(iVar0, iParam3);
			}
			if (!bParam2 && func_496(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_1269(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_954(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_494(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_954(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_953(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_1278(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_1279(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1280(iVar0, iVar1, iParam1);
		}
		func_1002(iVar0);
	}
	return iVar2;
}

void func_954(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_1281(iVar0, 1);
	if (bParam3 && func_497(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_1282(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_492(iParam2, 1))
	{
		case -1130352927:
			func_1283(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_1284(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_1285(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1286(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_1287(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_1288(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1289(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_1290(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1291(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_1292(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_1293(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_1294(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_1295(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1296(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_1297(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_1298(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_955(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1299(Param0))
	{
		return -1;
	}
	iVar1 = func_729(Param0);
	if (iVar1 >= 0)
	{
		func_1300(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_1300(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_956()
{
	func_1301(0);
}

void func_957(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_connected(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108365->f_34[iVar0]->f_6)
	{
		return;
	}
	func_1302(iParam0);
	func_1303(iParam0);
	func_1304(iParam0);
	func_1113(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_1305(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_1306(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_1307(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_1308(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_1308(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_560(_create_var_string(10, "PARLEY_TICKER_END", func_559(get_player_name(iParam0), func_920(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*Global_1108365->f_34[iVar0] = { Var1 };
	Var12 = 255;
	*(*(*Global_1288736)[network_player_id_to_int()])[iVar0] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	_0x31010318ba9897ac(&uVar14, iVar0);
	Var15.f_5 = player_id();
	Var15.f_4 = 5;
	func_1112(&Var15, &uVar14);
}

void func_958()
{
	func_273(&(Global_265377->f_124517.f_147));
}

int func_959(int iParam0, int iParam1)
{
	if (((iParam0 == 20 && iParam1 >= 16) || (iParam0 > 20 || iParam0 < 5)) || (iParam0 == 5 && iParam1 <= 15))
	{
		return 2;
	}
	if (((iParam0 == 5 && iParam1 >= 16) || (iParam0 > 5 && iParam0 < 8)) || (iParam0 == 8 && iParam1 == 0))
	{
		return 1;
	}
	if (((iParam0 == 8 && iParam1 >= 1) || (iParam0 > 8 && iParam0 < 17)) || (iParam0 == 17 && iParam1 == 0))
	{
		return 0;
	}
	if (((iParam0 == 17 && iParam1 >= 1) || (iParam0 > 17 && iParam0 < 20)) || (iParam0 == 20 && iParam1 <= 15))
	{
		return 1;
	}
	return 0;
}

Vector3 func_960(int iParam0, bool bParam1)
{
	vVar0 = { Global_3145858->f_196 };
	switch (iParam0)
	{
		case -504335712:
			vVar3 = { func_1309(bParam1) };
			break;
		case 395262693:
			vVar3 = { func_1310() };
			break;
		case -933924539:
			vVar3 = { func_1311(bParam1) };
			break;
	}
	if (!func_176(vVar3))
	{
		vVar0 = { vVar3 };
	}
	return vVar0;
}

void func_961()
{
}

var func_962()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_963(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_1312()] = { Param0 };
			func_1313((func_1312() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_1314()] = { Param0 };
			func_1315((func_1314() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

int func_964(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_517(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_517(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

bool func_965()
{
	return !Global_1572887->f_9;
}

void func_966(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_967(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_968(struct<2> Param0, var uParam2)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _0x901e0dc25080c8b9(player_id());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_728(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1316(func_513(Param0));
			iVar5 = func_1317(iVar4);
			if (!func_1318(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1107216->f_33[iVar1] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107216->f_33[iVar2]->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1116202[iVar0];
}

int func_969(struct<2> Param0)
{
	iVar0 = func_964(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1319(iVar0);
}

int func_970(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_517(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1071686->f_19550 == 0)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar6 };
		Global_1071686->f_19550++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1071686->f_19550)
	{
		func_517(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1320(iVar9);
			*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1071686->f_19550 < 31)
	{
		iVar9 = Global_1071686->f_19550;
		*Global_1071686->f_19550.f_1[iVar9] = { vVar6 };
		Global_1071686->f_19550++;
		if (Global_1071686->f_19550 > 32)
		{
			Global_1071686->f_19550 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_971()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_517(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_972(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_973(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_974(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559;
		case 1:
			return 195938434;
		case 2:
			return 416962030;
		case 3:
			return 1314857970;
		case 4:
			return -999071359;
		case 5:
			return -683250308;
		case 6:
			return -857617219;
		case 7:
			return 1780145725;
		case 8:
			return -1521715232;
		case 9:
			return -1560342203;
		case 10:
			return 1343354387;
		case 11:
			return 1052408375;
		case 12:
			return -1759599185;
		case 13:
			return 1481148278;
		case 14:
			return -16106300;
		case 15:
			return 105387183;
		case 16:
			return -2095449173;
		case 17:
			return -2097683294;
		case 18:
			return 1805131596;
		case 19:
			return 314693001;
		case 20:
			return -1728509733;
		case 21:
			return -42817558;
		case 22:
			return 1458462042;
		case 23:
			return 481893872;
		case 24:
			return 1714017012;
		case 25:
			return 1437412331;
		case 26:
			return -493957506;
		case 27:
			return 1224055398;
		case 28:
			return -953803399;
		case 29:
			return 2006449383;
		case 30:
			return -1788230330;
		case 31:
			return 1396375613;
		case 32:
			return -547914843;
		case 33:
			return -1547772340;
		case 34:
			return -59535775;
		case 35:
			return -1701536647;
		case 36:
			return 1923998736;
		case 37:
			return -1103472584;
		case 38:
			return -2051405571;
		case 39:
			return 1135209633;
		case 40:
			return -1810065318;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442;
		case 43:
			return 1171995096;
		case 44:
			return -267442581;
		case 45:
			return -1361146315;
		case 46:
			return 1352191066;
		case 47:
			return -2130852007;
		case 48:
			return -102241052;
		case 49:
			return 1420320220;
		case 50:
			return -1715130379;
		case 51:
			return -661550833;
		case 52:
			return -1358475411;
		case 53:
			return -1848598303;
		case 54:
			return -173287735;
		case 55:
			return -715363719;
		case 56:
			return -1117123933;
		case 57:
			return 1972833301;
		case 58:
			return 0;
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

void func_975(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_976()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_977(int iParam0)
{
	iVar0 = func_1321(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1322(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_1323(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_978(struct<2> Param0)
{
	if (!func_325(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_722(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_979(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900736->f_66 == 1)
	{
		Global_1900736->f_66 = 0;
		func_730(Global_1900736->f_1[0]);
		return 1;
	}
	func_730(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1324(iParam0, Global_1900736->f_66);
	return 1;
}

bool func_980(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_981(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_982(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_983(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1912930450:
			iVar0 = 1742327865;
			if (func_985(func_1325(iVar0)) != 81053684 && !func_497(func_1325(iVar0), 160827531))
			{
				return false;
			}
			break;
		case -1745589872:
			iVar0 = 1742327865;
			if (!func_497(func_1325(iVar0), -1303648999))
			{
				return false;
			}
			break;
		case -1549909015:
			iVar0 = 1108822547;
			iVar1 = func_985(func_1325(iVar0));
			if (iVar1 != -525676072 && iVar1 != -2061583405)
			{
				return false;
			}
			break;
		case 357406204:
			iVar0 = -1197751823;
			iVar1 = func_985(func_1325(iVar0));
			if (iVar1 != 294388917)
			{
				return false;
			}
			break;
		case -464635753:
			iVar0 = -450913544;
			iVar1 = func_985(func_1325(iVar0));
			if (iVar1 != 698653232)
			{
				return false;
			}
			break;
		case 1742327865:
			iVar0 = 1742327865;
			if (func_497(func_1325(iVar0), -1303648999))
			{
				return false;
			}
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	*iParam1 = func_488(iVar0, 1);
	return true;
}

int func_984(int iParam0, int iParam1)
{
	iVar0 = func_946(0);
	func_1277(&(Global_1952637->f_1043), iVar0, iParam0, 1409451727, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1373051002))
	{
		return 0;
	}
	return uVar1;
}

int func_985(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_986(int iParam0, int iParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (Global_1952637->f_2843.f_3[iParam0] || iParam1);
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_988(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<4> func_989(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_518(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_761(1328661203, func_190(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_761(1328661203, func_190(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_761(1328661203, func_190(), -1591664384, bParam0);
}

int func_990(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_1326(&uParam0, bParam4, bParam5, iParam6);
}

struct<17> func_991(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1327(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_992(int iParam0)
{
	return (to_float(iParam0) / 10000f);
}

void func_993(var uParam0, var uParam1)
{
	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if ((*uParam1)[iVar0]->f_1 < ((*uParam1)[(iVar0 - 1)])->f_1)
		{
			_remove_ped_overlay(*uParam0, ((*uParam1)[(iVar0 - 1)])->f_2);
			Var2 = { *(*uParam1)[iVar0] };
			*(*uParam1)[iVar0] = { *((*uParam1)[(iVar0 - 1)]) };
			*((*uParam1)[(iVar0 - 1)]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_994(uParam0, (*uParam1)[iVar0]);
		iVar0++;
	}
}

void func_994(var uParam0, var uParam1)
{
	uParam1->f_2 = _add_ped_overlay(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_748(uParam0, uParam1, 0);
}

void func_995(int iParam0)
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
	func_996(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

void func_996(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

int func_997(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_unlock_is_visible(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_998(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_999()
{
	return (func_1000(-1185145312, 0, 0, 0) > 0 && func_990(func_761(889965687, func_989(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_1000(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1328(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_518(bParam1), iParam0, iParam3);
}

bool func_1001(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_518(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1002(int iParam0)
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

bool func_1003(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1004(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	switch (iParam5)
	{
		case 0:
			if (_0x4c543d5dfcd2dafd(uParam0->f_14[1], &uParam1))
			{
				return true;
			}
			break;
		case 1:
			if (_0x4c543d5dfcd2dafd(uParam0->f_14[0], &uParam1))
			{
				return true;
			}
			break;
		case 2:
			if (_0x4c543d5dfcd2dafd(uParam0->f_14[3], &uParam1))
			{
				return true;
			}
			break;
		case 3:
			if (_0x4c543d5dfcd2dafd(uParam0->f_14[2], &uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

var func_1005(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_4;
		case 2:
			return uParam0->f_6;
		case 3:
			return uParam0->f_8;
		case 4:
			return uParam0->f_10;
		case 5:
			return uParam0->f_12;
		default:
			break;
	}
	return uVar0;
}

int func_1006(int iParam0, int iParam1)
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

bool func_1007(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_1329(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

void func_1008(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_1009(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

int func_1010()
{
	if (Global_3145858->f_282 < 2 && !func_1330())
	{
		return 1105014447;
	}
	if (func_697(14))
	{
		return 830499243;
	}
	return 1765299542;
}

int func_1011()
{
	return -1031763995;
}

void func_1012(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (bParam5)
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
			func_1331(iParam0, 0, 1);
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
			func_1332(iParam0, 0);
			bVar0 = true;
		}
		func_777(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1013(var uParam0)
{
}

bool func_1014(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_595(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_1091(iVar0);
	}
	return bVar1;
}

bool func_1015(int iParam0, var uParam1, int iParam2)
{
	if (func_1333(iParam0, &uVar0, uParam1, iParam2))
	{
		if (uParam1->f_16 <= 0.1f && uParam1->f_20 <= 0.1f)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1016()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

bool func_1017(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, bParam1);
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
		if (!_0xad73b614df26cf8a(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
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
		func_1334(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1018(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_567(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_1335(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_1336(iParam0, 0);
	}
	if (func_1038(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_518(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_801(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_518(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1019(bool bParam0)
{
	if (func_69() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_518(bParam0));
}

bool func_1020(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_1038(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1337(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_797(iParam0, bParam4, 0) };
	Var6 = { func_761(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1338(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_1021(int iParam0)
{
	switch (iParam0)
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

int func_1022(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1339(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1341(func_1340(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1342(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1023(int iParam0, struct<17> Param1)
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

int func_1024(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1025(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1343(iParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_1026(int iParam0)
{
	if (!func_602(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1344(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			break;
		case 1903483453:
			*iParam0 = -1527293029;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case -1424823393:
			*iParam0 = -885810591;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1027(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_1345(iParam0, iParam1, &Var0, bParam4, iParam6, iParam7, bParam8))
	{
		return 0;
	}
	func_1346(Var0);
	return 1;
}

bool func_1028(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_603(iParam0))
	{
		return false;
	}
	if (func_497(iParam0, 81450561) || func_497(iParam0, 1342455455))
	{
		return false;
	}
	if (func_805(iParam0))
	{
		return false;
	}
	iVar0 = func_806(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_1040(iVar0, -570078785, 0))
	{
		return false;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_797(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return false;
		}
	}
	*iParam1 = iVar0;
	return true;
}

bool func_1029(int iParam0)
{
	return func_497(iParam0, 1166200945);
}

bool func_1030(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_602(iParam1, 0))
	{
		return false;
	}
	if (!func_1347(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = func_604(iParam1, bParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_815(15))
	{
		bVar0 = true;
	}
	func_285(&bParam9, 32);
	func_285(&bParam9, 64);
	func_285(&bParam9, 4);
	func_285(&bParam9, 128);
	if (bParam6 < 1)
	{
		bParam6 = true;
	}
	if (!func_819(iParam0, iParam1, Param2, -1591664384, bParam8, bParam6, bParam9, 1))
	{
		return false;
	}
	Var1 = { func_1348(iParam1, Param2, 1084182731, bParam6, 0) };
	Var1.f_13 = bParam8;
	Var1.f_12 = 1248274121;
	*bParam7 = { Var1 };
	if (!func_600(iParam0, 1702063850))
	{
		return false;
	}
	bVar17 = false;
	bVar18 = false;
	iVar19 = Global_1915715->f_20241.f_49;
	iVar20 = Global_1915715->f_20241.f_50;
	Var41.f_9 = -1591664384;
	iVar55 = 0;
	while (iVar55 < 6)
	{
		if (!func_602(&(Global_1051439->f_47[iVar55]), 0))
		{
		}
		else if (!func_1349(&(Global_1051439->f_47[iVar55]), iVar19, &bVar21, &Var31, &uVar22, 1, iVar20))
		{
		}
		else
		{
			Var27 = { func_761(&(Global_1051439->f_47[iVar55]), Var31, bVar21, 0) };
			if (func_1350(&(Global_1051439->f_47[iVar55])))
			{
				if (!func_1034(&(Global_1051439->f_47[iVar55]), &Var31, bVar21, 0, 0))
				{
					if (!&Global_1051439->f_47.f_7[iVar55])
					{
					}
					else if (func_1351(&(Global_1051439->f_47[iVar55])))
					{
					}
					else
					{
						bVar40 = bParam8;
						if (func_813(&(Global_1051439->f_47[iVar55]), 997808187))
						{
							bVar40 = 997808187;
						}
						if (bVar0 && bVar40 != 997808187)
						{
							if (!func_1352(iParam0, &(Global_1051439->f_47[iVar55]), Var31, bVar21, 1, &Var1, 0, bVar40, bParam9, 1))
							{
								bVar17 = false;
								Jump @814; //curOff = 506
							}
							else
							{
								bVar18 = true;
							}
						}
						else if (!bVar0 || bVar40 == 997808187)
						{
							if (!func_1353(iParam0, &(Global_1051439->f_47[iVar55]), Var31, bVar21, !bVar0, &Var1, 0, bVar40, 0, bParam9, 0))
							{
								bVar17 = false;
								Jump @814; //curOff = 579
							}
							else
							{
								bVar18 = true;
							}
						}
						bVar17 = true;
						Jump @805; //curOff = 591
						if (!bVar0)
						{
							if (!&Global_1051439->f_47.f_7[iVar55])
							{
								iVar39 = func_990(Var31, bVar21, 0, -1);
								if (!func_602(iVar39, 0))
								{
								}
								else
								{
									Var35 = { func_761(iVar39, Var35, bVar21, 0) };
									if (!func_1354(Var35, &(Global_1051439->f_47.f_7[iVar55]), 0))
									{
										if (!func_186(Var35, &Var41, 1, 0, -1))
										{
										}
										if (Var41.f_10 == &Global_1051439->f_47.f_7[iVar55])
										{
											bVar17 = true;
										}
										else
										{
											bVar17 = false;
										}
										else
										{
											Jump @740; //curOff = 734
											bVar17 = true;
											Jump @805; //curOff = 740
											if (!func_186(Var27, &Var41, 1, 0, -1))
											{
											}
											if (Var41.f_10 != &Global_1051439->f_47.f_7[iVar55])
											{
												if (!func_1354(Var27, 1, 0))
												{
													bVar17 = false;
												}
												else
												{
													Jump @805; //curOff = 799
													bVar17 = true;
													iVar55++;
												}
												if (!bVar17)
												{
													func_1355(iParam0);
													return false;
												}
												if (bVar18)
												{
													if (bParam10 && !func_607(iParam0))
													{
														return false;
													}
													else
													{
														iVar56 = _0x46f032b8ddf46cde(iVar19);
														if (!is_bit_set(&(Global_1051439->f_4461[(func_1356(iVar56, 1) / 32)]), (func_1356(iVar56, 1) % 32)))
														{
															func_1358(func_1357(1137323725, 1914305383), 1);
															set_bit(Global_1051439->f_4461[(func_1356(iVar56, 1) / 32)], (func_1356(iVar56, 1) % 32));
														}
													}
												}
												return true;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_1031(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	if (!func_1347(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_604(iParam1, iParam10, 1, bParam11, 1);
	}
	if (!func_819(iParam0, iParam1, Param2, bParam6, iParam10, iParam7, bParam11, iParam12))
	{
		return false;
	}
	Var0 = { func_1348(iParam1, Param2, bParam6, iParam7, iParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 1248274121;
	*iParam8 = { Var0 };
	if (func_567(iParam1) == -1037537535)
	{
		Var16.f_9 = 1;
		Var16.f_11 = -1591664384;
		Var16 = { Var0 };
		if (!func_1359(iParam0, Var16, 2113164098, bParam9, -1))
		{
			return false;
		}
	}
	else if (!func_1360(iParam0, Var0, 2113164098, bParam9, bParam11))
	{
		return false;
	}
	return true;
}

void func_1032(struct<14> Param0, var uParam14, var uParam15)
{
	iVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_1052(iVar0, 773203532, iVar1, 1, 0) > 0)
	{
		func_1361("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (_0x2bae4880dcdd560b(iVar0, 0))
	{
		iVar2 = func_1362(iVar0, 0);
		if (!_0x6df942c4179be5ab(iVar2, -41291407))
		{
			play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			_0xe8eaff7b41edd291(iVar2, -41291407, 0);
		}
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_1033(int iParam0, bool bParam1)
{
	if (func_985(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_999();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_1034(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_802(iParam0, *uParam1, bParam2, bParam3, 1, bParam4) > 0;
}

bool func_1035(int iParam0, var uParam1, int iParam2)
{
	if (func_1333(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1036(bool bParam0)
{
	iVar0 = func_518(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_761(271701509, func_989(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_761(271701509, func_989(bParam0), 12999093, 0);
}

bool func_1037(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_985(iParam0);
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
			if (func_1062(iParam0, iParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_1038(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_1039(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_602(iParam0, 0) && !func_982(func_740(iParam0), 2))
	{
		return 0;
	}
	if (func_567(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_1038(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_518(bParam3), iParam0);
}

bool func_1040(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1056(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_817(iParam0, bParam1);
	}
	return true;
}

int func_1041(int iParam0)
{
	return (iParam0 / 100);
}

bool func_1042(int iParam0)
{
	return func_985(iParam0) == -999503751;
}

int func_1043(int iParam0)
{
	if (!func_1042(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111:
			return -705751660;
		case -1871922677:
			return 1364634153;
		case -905031115:
			return -388301838;
		case 1928115537:
			return 208175031;
		case 453281150:
			return -98968806;
		case 153739721:
			return -402606360;
		case 1167678119:
			return -709946811;
		case 736667462:
			return -362300646;
		case -673644764:
			return -65380737;
		case -980133221:
			return 100758093;
		case -209930641:
			return -1740761400;
		case -1735897526:
			return -27480348;
		case -482614352:
			return -257977494;
		case -1258944731:
			return -582914898;
		case 1536480356:
			return -814067424;
		case 1827632921:
			return -1179212391;
		case -1483084691:
			return -1407415707;
		case -1855140882:
			return -9237745;
		case -1605932637:
			return 296464256;
		case 838274308:
			return -1849217095;
		case 1423463110:
			return 1698584232;
		case 1722021469:
			return 1996257828;
		case 1293960018:
			return 1186175379;
		case 1084020314:
			return -1332741910;
		case 1384905272:
			return -1632447184;
		case 166258931:
			return -1930088011;
		case -285691117:
			return 2065632777;
		case -1506238056:
			return 937854865;
		case -141245365:
			return -1520409981;
		case 962175652:
			return 1356000914;
		case 687079897:
			return -423388555;
		case 373021801:
			return -188959129;
		case 75839740:
			return -93765184;
		case -208529642:
			return 401046716;
		case -504466477:
			return -845387737;
		case -1896067425:
			return -229247533;
		case -1732419039:
			return 57481217;
		case 1620668890:
			return 383434460;
		case 2095557238:
			return 404275544;
		case -700719823:
			return 721381157;
		case -520949089:
			return 1027509151;
		case 783963696:
			return -1688869940;
		case 477409701:
			return -97312371;
		case 325427079:
			return -870234774;
		case -2127824110:
			return -573609786;
		case -478920799:
			return -1336767027;
		case -784753876:
			return 1125692243;
		case -1991069642:
			return 1599850951;
		case 1534579841:
			return 1505836690;
		case 1755770591:
			return 1007026972;
		case 852591413:
			return -1271696523;
		case -1269692868:
			return -1501734903;
		case -1638540740:
			return -466660528;
		case 1404368072:
			return -1675392330;
		case 561909851:
			return -1377882579;
		case 1369829534:
			return 2136592667;
		case 669687080:
			return -1849788956;
		case 908671397:
			return -1561028528;
		case -50313388:
			return -1268368589;
		case 896138350:
			return -655694620;
		case -1347489546:
			return -882128410;
		case -1127937242:
			return -27217981;
		case -821055557:
			return 513863747;
		case -666844643:
			return 272520062;
		case 1507149124:
			return 1115043821;
		case 1797068311:
			return 434380030;
		case 1509389260:
			return -1994163333;
		case 1196052082:
			return 1445336445;
		case 914074837:
			return -1000181256;
		case 599099209:
			return -1601951172;
		case 774216741:
			return -1900673376;
		case 180232641:
			return -1722245291;
		case -1597878813:
			return -1550994497;
		case -895311481:
			return -1654216923;
		case -2075290374:
			return -956892603;
		case -1349063796:
			return 2044551183;
		case 1649135863:
			return 1816380636;
		case 10498108:
			return -1216565419;
		case 317576407:
			return -997045888;
		case -803057859:
			return -622430680;
		case -229076051:
			return -1279023141;
		case -1445559642:
			return -1036761924;
		case -1140185331:
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515:
			return 1379601741;
		case -1160690408:
			return -245138056;
		case -1763097043:
			return 115504824;
		case 912572382:
			return -1399728874;
		case 73391061:
			return -1090192900;
		case 332495544:
			return -1893000631;
		case -501475506:
			return -1583759578;
		case -280579677:
			return -204905596;
		case -814845497:
			return -974747713;
		case -1610902814:
			return -701454253;
		case -1313261987:
			return 678546644;
		case -668402627:
			return -1643732782;
		case -1436966753:
			return -1879178047;
		case -1105410003:
			return 2033604402;
		case -792302208:
			return 729201588;
		case -1544547372:
			return 1695854319;
		case -1268599623:
			return -2040860293;
		case 1281867320:
			return 430601343;
		case -1699226913:
			return 528449577;
		case -1610553999:
			return 836052180;
		case -1909243438:
			return 1126483827;
		case -1551799186:
			return 1432546287;
		case -1999554802:
			return 1721339484;
		case 723981565:
			return 1684533498;
		case 963752338:
			return 1404424086;
		case 372402960:
			return 69611632;
		case 989901996:
			return -221377088;
		case -239754729:
			return 1613326453;
		case 142266273:
			return 1307853835;
		case 911761394:
			return 2176663;
		case 1676688161:
			return -292908182;
		case 1907906229:
			return 1638955448;
		case -1621282302:
			return 1374083621;
		case -1801773954:
			return -1218075359;
		case -1003029579:
			return -1516043876;
		case 165089723:
			return -726135810;
		case 395586869:
			return -458052621;
		case 623560802:
			return -926911473;
		case 888203246:
			return -1761242982;
		case 1123550204:
			return -1388135148;
		case 1862360078:
			return -1644486999;
		case -1320869011:
			return -688485759;
		case -1078345642:
			return -381735150;
		case -571278136:
			return 2046513300;
		case -856663353:
			return -1943603989;
		case -632654469:
			return -1635706465;
		case -380562552:
			return -1338786556;
		case 1911459413:
			return -1434447686;
		case -1606456586:
			return -675714260;
		case -1888892597:
			return 249321841;
		case 1154823199:
			return -1070777324;
		case 856068226:
			return 2065543650;
		case 1786380136:
			return 1826887023;
		case 1943475930:
			return -1810703525;
		case 1697315198:
			return -1226563331;
		case -1787340262:
			return -1466006414;
		case -1341845703:
			return 724273546;
		case -1632670578:
			return 1512859531;
		case -932593662:
			return 1266305575;
		case -499308854:
			return 1937278961;
		case -785677145:
			return 971478216;
		case -18849776:
			return 1202597973;
		case -806059467:
			return 507698559;
		case 91876671:
			return 746355186;
		case -199538046:
			return 523755373;
		case -1754780383:
			return 1219798516;
		case -2050586146:
			return -1568843392;
		case -1622000367:
			return 1824681487;
		case -1930520502:
			return 933561301;
		case 1689602008:
			return -614970571;
		case 1384162159:
			return -310186102;
		case -733625577:
			return 1209768883;
		case -370348443:
			return 1834280485;
		case -1205728560:
			return 329528021;
		case 459985248:
			return 1778442129;
		case 834207228:
			return 805432208;
		case 1230744937:
			return -25950091;
		case 1859098900:
			return 922505133;
		case -2137310037:
			return 120975393;
		case 1086995730:
			return 426742932;
		case -1962290800:
			return 2081118674;
		case 1736084082:
			return -1914569345;
		case 2038967949:
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_1044(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	return func_985(iParam0) == 153430294;
}

int func_1045(int iParam0)
{
	if (!func_1044(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1652808217:
			return 2113612788;
		case 475385282:
			return 1799751306;
		case -35942194:
			return 1444076568;
		case 48470838:
			return 1147680963;
		case 1997008874:
			return -2020336278;
		case 1729941524:
			return -1377900033;
		case -1856789375:
			return -1541941647;
		case -2086565603:
			return 1616727805;
		case -463888252:
			return -922666835;
		case -1967067820:
			return -855621461;
		case 2030324187:
			return -564862124;
		case 837041052:
			return 1955205056;
		case -351609819:
			return 1515886177;
		case -112363350:
			return 1212871226;
		case 1064633628:
			return 520003486;
		case 1811373600:
			return 214694713;
		case 293907485:
			return -1002555587;
		case 896201705:
			return -704816453;
		case -953837732:
			return -408748538;
		case -849861695:
			return 2080515794;
		case -1484084376:
			return -1438504284;
		case -1244280834:
			return -1663266855;
		case -939529134:
			return -977280609;
		case -302466993:
			return -1208924670;
		case -740134980:
			return 760352143;
		case -462384932:
			return 1528293658;
		case 1388866954:
			return 601619107;
		case 1124978197:
			return 309975007;
		case 773175735:
			return -1805872365;
		case -6365998:
			return 25128279;
		case 163836188:
			return -286209990;
		case -603318871:
			return 1269465524;
		case -866802112:
			return 66925801;
		case -1222804528:
			return -1897379743;
		case -2051565307:
			return 1963005075;
		case -1837321585:
			return -2037925984;
		case 973666748:
			return 1668961632;
		case 211230425:
			return 1358934123;
		case -1098349891:
			return -1141176732;
		case -801495520:
			return -1415813725;
		case -1186378964:
			return 11713414;
		case -1629350306:
			return 1307072000;
		case 245003725:
			return 1575941645;
		case -61091504:
			return 701926877;
		case -1579778179:
			return -766852067;
		case -1100138310:
			return -1076125889;
		case 271080495:
			return -1445170375;
		case -620695071:
			return -1685465452;
		case -724967739:
			return -1670121942;
		case -687545541:
			return 1790317231;
		case 1877447950:
			return 1889214097;
		case -2102805870:
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case -542471226:
			return 1570234737;
		case -185354664:
			return -288324636;
		case -1008937941:
			return 11282331;
		case -770543466:
			return 725318841;
		case 1382597333:
			return -949699437;
		case 1129882805:
			return 1306347914;
		case 883033928:
			return 1536910598;
		case -1225782302:
			return 1924797251;
		case 1377331935:
			return 9499074;
		case -136923555:
			return 483863122;
		case 98783862:
			return 237473007;
		case 363196923:
			return 1066004403;
		case 547298053:
			return 1559978137;
		case 796506298:
			return 1322239046;
		case -2078055928:
			return 1564631339;
		case 855162804:
			return -212824759;
		case -1550515886:
			return -274429432;
		case -699406649:
			return 570453695;
		case -1870177465:
			return 207242099;
		case 1121730546:
			return -1112267224;
		case -1606199964:
			return 1417685661;
		case -1366953495:
			return -2095478833;
		case 1493223136:
			return 1899947034;
		case 1732731757:
			return -1752321861;
		case -993297765:
			return 1413210443;
		case 1243186493:
			return 1182877142;
		case 1548003731:
			return -208887838;
		case 1853771270:
			return 21707615;
		case -456994495:
			return 857732585;
		case -1627994710:
			return 1087541582;
		case -2009556946:
			return 1451015330;
		case 849308921:
			return 1688754425;
		case 1779645445:
			return 1437777233;
		case 2112644023:
			return 1676958164;
		case -909575313:
			return -35123787;
		case 1534435018:
			return 195668280;
		case -83784299:
			return -2087370390;
		case 1681940497:
			return 888087567;
		case 1436861146:
			return 707399301;
		case 1192175023:
			return 1507847664;
		case -503349107:
			return -2018900297;
		case 424603435:
			return -626938711;
		case 1033779145:
			return -336900292;
		case 734729251:
			return -1124798132;
		case -1451110845:
			return 1051595054;
		case 1302861393:
			return 1338028883;
		case 2145483459:
			return 574052421;
		case 1916198766:
			return -1516904708;
		case 229873288:
			return -337288225;
		case 1056766234:
			return 432390051;
		case 1993402593:
			return 1094880924;
		case 1754221662:
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_1046(int iParam0)
{
	return (func_1363(iParam0) && func_497(iParam0, 1584357097));
}

int func_1047(int iParam0)
{
	if (!func_1046(iParam0))
	{
		return 0;
	}
	switch (iParam0)
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

bool func_1048(int iParam0)
{
	return func_985(iParam0) == 1882579758;
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case -756756912:
			return 174220197;
		case 380458460:
			return 468518590;
		case -1336702674:
			return -184567584;
		case -1481672726:
			return 140205975;
		case 1088924248:
			return 1664750935;
		case -1981006748:
			return 1960130701;
		case -1800252944:
			return 766061110;
		case -392037938:
			return 1364291974;
		case 2052037931:
			return 2076526201;
		case 683408729:
			return 292938556;
		default:
			break;
	}
	return 0;
}

bool func_1050(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_1051(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_1343(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

int func_1052(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_805(iParam0))
	{
		return func_1051(func_806(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_1017(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

void func_1053(var uParam0, var uParam1, char[32] cParam2, struct<27> Param10)
{
	func_1364(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_596(15), &(Param10.f_16));
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, func_596(21), Param10.f_24);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_596(22), Param10.f_25);
	uParam0->f_21 = _databinding_add_data_bool(*uParam0, func_596(23), Param10.f_26);
}

int func_1054(int iParam0, bool bParam1)
{
	if (!func_982(iParam0, 2))
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

bool func_1055()
{
	return func_1365(func_721(0));
}

bool func_1056(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_1057(int iParam0, int iParam1)
{
	*iParam1 = func_1366(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1058(int iParam0, int iParam1)
{
	*iParam1 = func_1367(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_1059(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1368(iVar0, 1, 0);
		if (!func_1017(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1369(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1018(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1060(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1368(iVar0, 0, 1);
		if (!func_1017(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1370(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1018(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_1061(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_982(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_1371(iParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = &Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_1062(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 == 487172188)
	{
		if (_0xaa29a5f13b2c20b2(iParam1, -455129387) == -1925887917)
		{
			return false;
		}
	}
	return _item_database_can_equip_item_on_category(iParam0, iParam1, bParam2);
}

int func_1063(int* iParam0, int iParam1)
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
			else if (Var3.f_8 != iParam1)
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

int func_1064(int* iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_1372(iParam1, 1) && !func_1373(iParam1, 1))
	{
		if (Global_1915715->f_20644)
		{
			func_1374(_create_var_string(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -570078785)
	{
		iVar0 = func_794(iParam1, -570078785, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_1376((iVar1 + func_1375(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1374(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -915411861)
	{
		iVar2 = func_794(iParam1, -915411861, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_1091((iVar3 + func_1375(iParam0, bParam2))))
		{
			if (Global_1915715->f_20644)
			{
				func_1374("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 997808187)
	{
		return 1;
	}
	if (func_982(func_740(iParam1), 2))
	{
		if (!func_1377(func_740(iParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_602(iParam1, 0))
	{
		if (!func_1378(iParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1065(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1379(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)]);
	Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)] = iParam0;
	(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_2 = iParam2;
		(Global_1293346->f_20.f_1[(Global_1293346->f_20 - 1)])->f_3 = iParam3;
	}
}

int func_1066(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 307971639;
		case 1:
			return 2085633299;
		default:
			break;
	}
	return 0;
}

void func_1067(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	iVar17 = func_597();
	func_594(&iVar16);
	iVar16 = (func_595(1933821560, 0, 59806960) * iVar16);
	bVar18 = (iVar16 > 0 && iVar17 >= iVar16);
	Var0 = bVar18;
	Var0.f_1 = 1;
	Var0.f_5 = 953615807;
	Var0.f_4 = 2084771291;
	StringConCat(&cVar19, "entry_", 64);
	StringIntConCat(&cVar19, _databinding_get_array_count(uParam0->f_1), 64);
	func_1364(&(uParam0->f_23), *uParam0, cVar19, Var0);
	_databinding_write_data_hash_string_from_parent(uParam0->f_23, func_596(58), 1861776397);
	_databinding_write_data_bool_from_parent(uParam0->f_23, func_596(60), true);
	_databinding_write_data_bool_from_parent(uParam0->f_23, func_596(59), bVar18);
	_databinding_add_data_string(uParam0->f_23, "dynamic_list_item_purchase_raw_text_entry", _create_var_string(2, "MP_LOBBY_PURCHASES_CLEAN_ALL"));
	_databinding_add_data_bool(uParam0->f_23, "dynamic_list_item_cashCost_visible", 0);
	_databinding_add_data_bool(uParam0->f_23, "dynamic_list_item_prompt_option_visible", 0);
	_databinding_add_data_bool(uParam0->f_23, "dynamic_list_item_prompt_option_enabled", 0);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, _databinding_get_array_count(uParam0->f_1), "lobby_purchases_list_item", uParam0->f_23);
}

void func_1068(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_5 = -110320509;
	Var0.f_6 = -110320509;
	StringCopy(&cVar16, _create_var_string(2, "MP_LOBBY_PURCHASES_ALL_AMMO"), 64);
	func_1364(&(uParam0->f_5), *uParam0, cVar16, Var0);
	_databinding_add_data_hash(uParam0->f_5, "dynamic_list_item_purchase_text_label_entry", -1457374590);
	_databinding_add_data_bool(uParam0->f_5, "dynamic_list_item_cashCost_visible", 0);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, _databinding_get_array_count(uParam0->f_1), "lobby_purchases_list_item", uParam0->f_5);
}

void func_1069(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = func_601(iParam1);
	if (!func_602(iVar0, 0))
	{
		return;
	}
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = 1105014447;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	iVar17 = _databinding_get_array_count(uParam0->f_1);
	Var1.f_1 = 1;
	if (bParam2)
	{
		Var1.f_5 = -1533989033;
	}
	else
	{
		Var1.f_5 = -1858235574;
	}
	Var1.f_6 = -1858235574;
	Var1.f_4 = 2084771291;
	Var1 = func_606(&(uParam0->f_432), iVar0);
	iVar18 = func_794(iVar0, -915411861, 1, 0, 1, 0);
	StringCopy(&cVar19, func_1380(iVar0), 64);
	StringConCat(&cVar27, &cVar19, 64);
	StringIntConCat(&cVar27, iVar17, 64);
	func_1364(uParam0->f_41[iParam1], *uParam0, cVar27, Var1);
	if (bParam2)
	{
	}
	else
	{
		uParam0->f_41[iParam1]->f_18 = _databinding_add_data_string(&(uParam0->f_41[iParam1]), "dynamic_list_item_prompt_option_raw_text", _create_var_string(2, "SHOP_AMMO_BUY_MAX"));
		uParam0->f_41[iParam1]->f_19 = _databinding_add_data_bool(&(uParam0->f_41[iParam1]), func_596(66), 1);
		uParam0->f_41[iParam1]->f_20 = _databinding_add_data_bool(&(uParam0->f_41[iParam1]), func_596(65), 1);
		uParam0->f_41[iParam1]->f_21 = _databinding_add_data_hash(&(uParam0->f_41[iParam1]), func_596(67), -1533989033);
	}
	_databinding_add_data_string(&(uParam0->f_41[iParam1]), "dynamic_list_item_purchase_raw_text_entry", &cVar19);
	_databinding_add_data_bool(&(uParam0->f_41[iParam1]), "uiItemSale", func_1381(iVar0));
	if (bParam3)
	{
		_databinding_add_data_string(&(uParam0->f_41[iParam1]), "dollar_price", func_464((iVar18 / 100)));
		_databinding_add_data_string(&(uParam0->f_41[iParam1]), "cents_price", func_465((iVar18 % 100)));
		_databinding_add_data_bool(&(uParam0->f_41[iParam1]), "dynamic_list_item_cashCost_visible", 1);
	}
	else
	{
		_databinding_add_data_bool(&(uParam0->f_41[iParam1]), "dynamic_list_item_cashCost_visible", 0);
		_databinding_add_data_bool(&(uParam0->f_41[iParam1]), "dynamic_list_item_prompt_option_visible", 0);
	}
	_databinding_add_data_hash(&(uParam0->f_41[iParam1]), "inventory_item", iVar0);
	_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, _databinding_get_array_count(uParam0->f_1), "lobby_purchases_list_item", &(uParam0->f_41[iParam1]));
}

char* func_1070(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

int func_1071(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return 0;
	}
	return Global_1896738->f_3715[iVar0]->f_2;
}

void func_1072()
{
	func_1382();
	func_1383();
	func_1384();
}

int func_1073(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 238850895:
			_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_54, bParam1);
			break;
		case -1108319209:
			_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_4.f_1, bParam1);
			break;
	}
	return 1;
}

int func_1074(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return 0;
	}
	_copy_memory(Global_1896738->f_3715[iVar0], iParam0, 4);
	return 1;
}

int func_1075(int iParam0)
{
	switch (iParam0)
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

bool func_1076(int iParam0, int iParam1)
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

void func_1077()
{
	Global_1952637->f_1556 = Global_1952637->f_1675;
	Global_1952637->f_1552 = Global_1952637->f_1554;
	Global_1952637->f_1552.f_1 = Global_1952637->f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

bool func_1078(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	if (iParam2 == 1378879298)
	{
		if (!func_1385(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (!func_1386(uParam0, iParam3, iParam2) && !func_677(uParam0, iParam2, uParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_152(32768) && iParam6 == 0)
	{
		if (!*uParam1 || (*uParam1 && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]))
		{
			func_1387(1108822547);
		}
		else
		{
			func_322(1108822547);
		}
	}
	if (bParam5)
	{
		func_1388(2);
	}
	return true;
}

void func_1079()
{
	Global_1952637->f_1675 = Global_1952637->f_1556;
	Global_1952637->f_1554 = Global_1952637->f_1552;
	Global_1952637->f_1554.f_1 = Global_1952637->f_1552.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *Global_1952637->f_1556.f_1[iVar0] };
		iVar0++;
	}
}

struct<35> func_1080(int iParam0)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_16.f_12 = -1;
	Var0.f_16.f_12.f_1 = -1;
	Var0.f_16.f_14 = 255;
	Var0.f_16.f_15 = 255;
	if (Global_1071686->f_16 > 0)
	{
		return *Global_1071686->f_16.f_5[iParam0];
	}
	return Var0;
}

void func_1081(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return;
	}
	if (_0x149a2751ab66ac02(iParam0) == 0)
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 2;
	Var0.f_9 = _0x4be6c13a45cca8ec(iParam0);
	Var0.f_10 = player_id();
	Var0.f_7 = iParam0;
	Var0.f_8 = _0x901e0dc25080c8b9(player_id());
	func_1082(&Var0);
}

void func_1082(var uParam0)
{
	fVar0 = func_225(0, 8);
	if (!_0x179a6f0ee2e79026(&fVar0))
	{
		return;
	}
	trigger_script_event(1, uParam0, 12, 46, &fVar0);
}

void func_1083(int iParam0)
{
	uVar0 = _0x27b1ae4d8c652f08(iParam0);
	StringCopy(&(Var1.f_7), _0xe59f4924bd3a718d(uVar0), 64);
	_0x16efb123c4451032(uVar0, &Var1);
	StringCopy(&(Var1.f_17), _0xe79ba3bc265895da(uVar0), 24);
	Var1.f_15 = iParam0;
	Var1.f_21 = _0x5ed39da62beb1330(uVar0);
	func_1389(&Var1);
}

void func_1084(int iParam0)
{
	Global_1572887->f_266.f_2 = iParam0;
}

void func_1085(bool bParam0)
{
	if (bParam0)
	{
		func_1390(128);
	}
	if (func_69() == 0)
	{
		func_1391(2);
	}
	func_1392(1);
}

void func_1086(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

struct<2> func_1087(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_1393(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1393(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_376();
}

int func_1088(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_722(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1089(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_1090()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_1091(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_69() == 0)
	{
		return func_1394(iParam0);
	}
	return iParam0 <= func_597();
}

void func_1092(int iParam0, int iParam1)
{
	func_195(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

bool func_1093()
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(player_id()), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_1089(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_1094(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_1395(Param1, 0, 128))
	{
		return false;
	}
	func_1396(iParam0, Param1);
	if (iParam0 == -1)
	{
		return false;
	}
	if (Global_1196898->f_78[iParam0]->f_3 == -1)
	{
		return false;
	}
	if (func_1397(iParam0, 32))
	{
		return true;
	}
	if (!func_325(Param1))
	{
		return false;
	}
	else if (!func_477(Param1))
	{
		return false;
	}
	else if (func_478(Param1))
	{
		return false;
	}
	Var0 = { func_1398() };
	if (func_325(Var0) && !func_722(Var0, Param1))
	{
		if (func_1399())
		{
			func_1092(iParam0, 262144);
			func_1400(1);
		}
		else
		{
			return false;
		}
	}
	func_1401(Param1, 1, 1, 1);
	func_1402(Param1, 1, 0, -1);
	func_1403(2);
	func_1404(Global_1196898->f_78[iParam0]->f_3, iParam3);
	func_1092(iParam0, 32);
	func_1405(7);
	if (func_1096(Global_1196898->f_78[iParam0]->f_3) != -785841056)
	{
		func_1406();
		_0x7d654266025e921b(1638906956);
	}
	else
	{
		_0x7d654266025e921b(784116709);
		_0xe5a680a5d8b1f687(1);
	}
	return true;
}

int func_1095(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

int func_1096(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

int func_1097(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_1098(int iParam0)
{
	return Global_1108365->f_935.f_28 == iParam0;
}

void func_1099(int iParam0)
{
	if (Global_1108365->f_935.f_28 != iParam0)
	{
		Global_1108365->f_935.f_28 = iParam0;
	}
}

int func_1100(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1407(iParam0, Param1, iParam3);
	return 1;
}

bool func_1101(int iParam0)
{
	if (func_728(func_721(0)) == 5)
	{
		return false;
	}
	if (func_728(func_721(0)) == 3)
	{
		if (!func_1399())
		{
			return false;
		}
	}
	if (func_728(func_721(0)) == 4)
	{
		return false;
	}
	if (func_369())
	{
		return false;
	}
	if (func_1408())
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	if ((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_1409(iParam0, _0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 3 && !_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	return true;
}

int func_1102(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1410(iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<2> func_1103(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (((iVar0 < 0 || iVar0 >= 7) || iVar1 < 0) || iVar1 >= 16)
	{
		return func_376();
	}
	return func_1393(Global_1108365->f_814.f_1[iParam0][iParam1], 3);
}

void func_1104(float fParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_connected(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar2) != iParam1)
		{
		}
		else if (bParam2)
		{
			if (!_0x424b17a7dc5c90bc(iVar2))
			{
			}
			else
			{
				bVar1 = true;
				_0x31010318ba9897ac(fParam0, iVar2);
			}
			iVar0++;
			if (!bVar1)
			{
				_0xde544b7ec0c187cc(fParam0);
			}
		}
	}
}

bool func_1105(int iParam0)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	if (!func_1411(iParam0))
	{
		return false;
	}
	if (!func_1101(iParam0))
	{
		return false;
	}
	if (func_1412(player_id(), 1, 1) && !func_1413(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		case 4:
		case 5:
			return func_1414(iParam0);
		case 6:
			return func_1415();
		case 7:
			return func_1416();
		case 8:
		case 9:
		case 10:
			return func_1417(iParam0);
		default:
			break;
	}
	return false;
}

bool func_1106(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	if (_0x149a2751ab66ac02(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1107(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&fParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_1418(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 6, &fParam19);
}

void func_1108(var uParam0, float fParam1)
{
	func_1419(fParam1, 1);
}

void func_1109(var uParam0, float fParam1)
{
	*uParam0 = 29;
	trigger_script_event(1, uParam0, 14, 43, fParam1);
}

bool func_1110(int iParam0)
{
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		return false;
	}
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		return false;
	}
	if (func_369())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_connected(iParam0))
	{
		return false;
	}
	if (_0x81fb74c83c2ed69f(iParam0))
	{
		return false;
	}
	return true;
}

void func_1111(float fParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) != iParam1)
		{
		}
		else
		{
			_0x31010318ba9897ac(fParam0, iVar1);
		}
		iVar0++;
	}
}

void func_1112(var uParam0, float fParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 10, fParam1);
}

void func_1113(var uParam0, int iParam1)
{
	func_283(uParam0, iParam1);
}

void func_1114(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		clear_bit(&(Global_1108365->f_34[iParam0]->f_5), iVar0);
		iVar0++;
	}
}

void func_1115(int iParam0)
{
	if (func_1420(iParam0))
	{
	}
	else if (func_1421(iParam0))
	{
	}
	func_1422(iParam0);
}

void func_1116(int iParam0)
{
	if (func_1423(iParam0))
	{
	}
	else if (func_1424(iParam0))
	{
	}
	else if (func_1425(iParam0))
	{
	}
	func_1422(iParam0);
}

bool func_1117(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1237665->f_573), iParam0);
}

int func_1118(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (func_1426(iVar0, 32, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1119(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = int_to_playerindex(iParam2);
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = func_1427(iParam1);
	}
	Var1 = { func_854(*uParam0) };
	_0x4ef23e04a0c8ff51(&Var1, &iVar8);
	uParam0->f_1 = floor(((((to_float((32 - iVar0)) / to_float(32)) * 10f) + ((func_1428(*uParam0, 0) / IntToFloat(Global_1901947->f_716.f_28)) * 5f)) + (IntToFloat(iVar8) * 2.5f)));
}

int func_1120(int iParam0, int iParam1)
{
	return (iParam0 + func_944((iParam1 - iParam0)));
}

void func_1121(int iParam0)
{
	func_840(iParam0, 0);
	(*Global_1238240)[network_player_id_to_int()]->f_300.f_1 = iParam0;
}

bool func_1122(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	if (!func_1429())
	{
		func_1430("NG_CANT_JOIN");
		return false;
	}
	else if (_0x149a2751ab66ac02(iParam0) == _0x853b0fa4d8732c57(iParam0))
	{
		func_406("NG_FULL", func_1431(iParam0, 1, 0), 340002725);
		return false;
	}
	if (func_1432(iParam0))
	{
		func_1433(_0x4be6c13a45cca8ec(iParam0));
	}
	else
	{
		func_1434(iParam0);
	}
	return true;
}

bool func_1123(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_1435(8))
	{
		if (func_1436(0) == 3)
		{
			func_1437(8);
		}
	}
	func_1438(iParam0);
	func_1439(3);
	if (Global_1298378->f_29.f_3 > 0)
	{
		Global_1298378->f_29.f_3 = 0;
	}
	func_1440();
	return true;
}

void func_1124(var uParam0)
{
}

char[] func_1125(char[4] cParam0)
{
	return cParam0;
}

int func_1126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2119268333;
		case 1:
			return -1827170883;
		case 2:
			return 2014102137;
		default:
			break;
	}
	return 0;
}

void func_1127(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_242.f_5);
	iVar0 = iParam0;
	iVar1 = 29;
	while (iVar1 >= 0)
	{
		if (!_databinding_read_data_bool(Global_1940311->f_242.f_14[iVar1]->f_37))
		{
		}
		else if (func_1441() != 0)
		{
			if (_databinding_read_data_int(Global_1940311->f_242.f_14[iVar1]->f_24) != iVar0)
			{
			}
			else
			{
				_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, iVar2, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar1]));
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
			Global_1940311->f_242.f_1189 = 0;
			Global_1940311->f_242.f_1187 = iVar2;
		}
	}
}

bool func_1128()
{
	return func_1442() != -1;
}

int func_1129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1443();
	}
	if (!func_1444(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_1445(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_1130(int iParam0)
{
	return iParam0 != 0;
}

bool func_1131()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_1132(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_1446() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1136(iParam0))
	{
		func_1447(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_1448(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_8;
	if (!func_602(uParam1->f_2, 0))
	{
		func_1447(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1136(*uParam1))
	{
		func_1447(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1449())
		{
			uParam1->f_19 = func_1450(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_6;
			if (func_1451(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_869(*uParam1);
			iVar3 = func_1138(uParam1->f_19);
			uParam1->f_3 = { func_761(uParam1->f_2, func_989(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_1452(uParam1);
			uParam1->f_13 = func_1453(uParam1);
			uParam1->f_15 = func_1454(uParam1);
			uParam1->f_20 = func_1455(uParam1);
			uParam1->f_22 = func_1456(uParam1);
			uParam1->f_14 = func_1457(uParam1);
			uParam1->f_23 = func_1458(uParam1);
			uParam1->f_24 = func_1459(uParam1);
			uParam1->f_25 = func_1460(uParam1);
			uParam1->f_26 = func_1461(uParam1);
			uParam1->f_27 = func_1462(uParam1);
			uParam1->f_29 = func_1463(uParam1);
			uParam1->f_30 = func_1464(uParam1);
			uParam1->f_31 = func_1465(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1466((Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_1467(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_1466((Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_3;
				uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_6;
			}
			else
			{
				func_1468(uParam1);
			}
		}
	}
	else
	{
		iVar5 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
		uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_3;
		uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_6;
		if (_network_is_player_index_valid(iVar5))
		{
			uParam1->f_19 = func_1469(*uParam1, iVar5);
			if (func_1451(uParam1->f_19))
			{
				vVar6 = { *(*Global_1145091)[iVar5]->f_10[uParam1->f_19] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1470(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1471(uParam1);
	uParam1->f_12 = func_1472(*(Global_1139381->f_11.f_1562[func_1448(iParam0, 1)]), uParam1);
	return 1;
}

void func_1133(int iParam0)
{
	func_1473(iParam0);
	func_1474(iParam0);
}

void func_1134(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2083 = iParam0;
}

void func_1135(int iParam0, int iParam1)
{
	if (func_1475())
	{
		func_1476(iParam0, 1);
	}
	else
	{
		func_1477(iParam1, iParam0, 1);
	}
}

bool func_1136(int iParam0)
{
	iVar0 = func_1448(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1137(int iParam0)
{
	if (!func_1136(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_2;
}

int func_1138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

bool func_1139(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1478(iParam0))
	{
		return false;
	}
	Var0 = { func_989(bParam2) };
	if (func_802(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1140(int iParam0)
{
	if (!func_1451(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_1141(int iParam0, bool bParam1)
{
	iVar0 = func_1138(iParam0);
	Var1 = { func_989(bParam1) };
	iVar5 = func_1479(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

int func_1142(int iParam0, bool bParam1)
{
	if (func_1449())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_1138(iParam0);
	Var1 = { func_989(bParam1) };
	iVar5 = func_1480(Var1, iVar0, 0, bParam1);
	if (!func_1478(iVar5))
	{
		return 0;
	}
	return func_1481(iVar5);
}

int func_1143(int iParam0)
{
	if (!func_1136(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_1;
}

void func_1144(int iParam0, int iParam1)
{
	if (!func_1482(iParam0))
	{
		func_1483(iParam1);
		return;
	}
	if (iParam0 == 304794100)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, false);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, true);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_1484(iVar0, 1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_15[iVar0]->f_1, iParam0 == iVar1);
			iVar0++;
		}
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_3, func_1485(iParam0));
	func_1486(iParam0);
	func_1483(iParam1);
}

void func_1145(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_867(iParam0, &Var0, 2, iVar68);
		func_1487(Global_1940311->f_1433.f_4189.f_1797[iVar68], Var0);
		if (func_1488(iVar68))
		{
			func_1489(&(Global_1940311->f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

int func_1146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

void func_1147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_1490();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

int func_1148()
{
	return Global_1130634->f_235;
}

var func_1149(int iParam0)
{
	return Global_1130634[iParam0];
}

Vector3 func_1150(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

float func_1151(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_1152()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_1153(int iParam0, bool bParam1)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_1491(iParam0);
		if (func_497(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_1492(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_1493())
		{
			return false;
		}
	}
	if (!func_1494(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_1154(int iParam0)
{
	if (func_1163(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_518(0), iParam0, func_303(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_1495(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_1496() != -1)
			{
				func_1166(func_1497(), 10000, 0, 0, 0, 1);
				func_1498(-1);
			}
			break;
	}
	return true;
}

bool func_1155(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_1161(Var0, 0);
		return true;
	}
	return false;
}

void func_1156(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_1157(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_1158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_1159(int iParam0)
{
	if (func_69() == 0 && func_1500(func_1499(iParam0), 1, 0) != 0)
	{
		func_1166("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_1160(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1501(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_1502(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_1503())
				{
					if (func_1504(&Global_34))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_1166("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
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
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
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
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
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
					func_1505(iParam0);
				}
				else
				{
					func_1506(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_1507(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_1508(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_1509(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1505(iParam0);
				}
				else
				{
					func_1510(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1505(iParam0);
				}
				else
				{
					func_1511(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1505(iParam0);
				}
				else
				{
					func_1512(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1505(iParam0);
				}
				else
				{
					func_1513(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_1514(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_1515(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_1516(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_1505(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_1517(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_1518(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_1161(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_1519(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_1520(&(Param0.f_10)))
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
			func_1521(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_1162()
{
	return Global_1893587 & 2 != 0;
}

bool func_1163(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_567(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_1164(int iParam0)
{
	return func_1522(iParam0);
}

bool func_1165(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_567(iParam0) == -1037537535)
	{
		if (func_985(iParam0) == -999503751)
		{
		}
	}
	return true;
}

var func_1166(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1167()
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

bool func_1168(int iParam0)
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

int func_1169(int iParam0, bool bParam1)
{
	if (!func_1523())
	{
		return 0;
	}
	if (!func_1524(iParam0))
	{
		return 0;
	}
	if (func_1525(iParam0))
	{
		iVar0 = 0;
		if ((func_985(iParam0) == 81053684 || func_497(iParam0, 160827531)) && !func_497(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_195(&iVar0, 2);
			}
		}
		return func_1526(iParam0, iVar0);
	}
	return 0;
}

void func_1170(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_1171(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_1172(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_1171(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_152(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_155();
		func_313(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_1172(iParam0, 1, 0);
		return;
	}
	if (func_1527(-2061583405, 0))
	{
		if (func_1528(iVar1))
		{
			func_1172(iVar1, 0, 0);
		}
		else
		{
			func_1529(iVar1, 1, 1, 0, 0, 0);
		}
		func_1172(iParam0, 1, 0);
		return;
	}
	if (func_1528(iVar1))
	{
		func_1172(iVar1, 0, 0);
		func_1172(iParam0, 1, 0);
	}
	else if (func_1528(iParam0))
	{
		if (iParam0 != func_1530(0))
		{
			func_1531(iParam0, iVar1, 0, 0, 0);
			func_1172(iParam0, 0, 0);
			func_1172(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_313(128);
			func_1172(iParam0, 1, 0);
		}
	}
}

int func_1171(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_797(iParam1, 1, 0) };
		iParam3 = func_1532(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1533(iParam1, iParam2, func_488(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_1534(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_1281(iParam1, 0))
		{
			func_1535(&(Global_1952637->f_1675.f_1[func_488(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_1535(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_488(iParam3, 1)])
			{
				func_153(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_152(32768))
			{
				func_155();
				func_153(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_1536(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_1537(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_153(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_153(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1172(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_797(iParam0, bParam2, 0) };
	Var5 = { func_761(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_802(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_518(bParam2), &Var5, iParam1);
}

int func_1173(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_761(889965687, func_989(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_985(iVar1) == iParam0 || (iParam0 == 81053684 && func_497(iVar1, 160827531)))
		{
			Var3 = { func_761(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_518(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_518(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_1174(bool bParam0)
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

int func_1175(int iParam0, int iParam1)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_1177(iParam0);
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
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_1539(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1176(int iParam0)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1177(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_1540())
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

int func_1177(int iParam0)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_1178(int iParam0, int iParam1, bool bParam2)
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

void func_1179()
{
	if (func_1541())
	{
		return;
	}
	if (func_1542(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_1542(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_1543(16);
				}
				func_1544(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_1543(8);
					func_1544(0);
				}
		}
		return;
	}
	if (func_1545())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_1546();
	}
	else
	{
		iVar0 = func_1548(func_1547());
		if (iVar0 != -1)
		{
			func_1166(func_1497(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_1549(0);
			func_1498(-1);
		}
	}
}

bool func_1180(int iParam0, int iParam1)
{
	if ((!func_1550() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_80(16))
	{
		return false;
	}
	if (func_62())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_1551())
	{
		return false;
	}
	if (func_1552(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_194(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_1182())
	{
		return false;
	}
	return true;
}

bool func_1181(int iParam0)
{
	return func_194(Global_1137047->f_8, iParam0);
}

bool func_1182()
{
	iVar0 = func_1553(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_194((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1183()
{
	Var0 = { func_721(0) };
	if (func_325(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_1554(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_1096(iVar2) == -785841056)
				{
					func_1166("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_1166("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1166("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_1166("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_1184(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_1107(Var0, func_225(0, 8), 0, 0);
}

int func_1185(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_1186(int iParam0, bool bParam1)
{
	func_1555(iParam0, &iVar0, &iVar1);
	if (!func_1556(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1557(iVar0, iVar1);
}

void func_1187(bool bParam0)
{
	if ((func_69() != -1 || !bParam0) || func_1558(Global_34))
	{
		func_1559();
		return;
	}
}

void func_1188()
{
	iVar0 = player_id();
	func_1560(1, iVar0);
}

int func_1189()
{
	return 1542252876;
}

bool func_1190(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = _0xd97d8d905f1562f2(iParam0);
	while ((!_0x603ac35fd4602c76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		wait(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

char* func_1191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "lobby";
		case 1:
			return "camp";
		case 2:
			return "mission(id=%x)";
		case 3:
			return "mission_sub_type(id=%x)";
		case 4:
			return ":position";
		case 5:
			return ":position_two";
		case 6:
			return ":rotation";
		case 7:
			return "camera:position";
		case 8:
			return "camera:position_offset";
		case 9:
			return "camera:euler_angles";
		case 10:
			return "camera:fov";
		case 11:
			return "camera:dof";
		case 12:
			return "camera_female:position_offset";
		case 13:
			return "camera_female:euler_angles";
		case 14:
			return "camera_female:fov";
		case 15:
			return "camera_female:dof";
		case 16:
			return "camera_far:position";
		case 17:
			return "camera_far:euler_angles";
		case 18:
			return "camera_far:fov";
		case 19:
			return "scenarios";
		case 20:
			return "scenario(%i)";
		case 21:
			return ":type";
		case 23:
			return ":heading";
		case 24:
			return "spawn:position";
		case 25:
			return "spawn:heading";
		case 22:
			return ":uiIndex";
		case 26:
			return "stable";
		case 27:
			return "horse";
		case 28:
			return "vehicle";
		case 29:
			return "boat";
		default:
			break;
	}
	return "";
}

int func_1192(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_261(iParam1))
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

bool func_1193(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1278(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1279(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1003(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1561(&Var45, &Var0, 0))
				{
					if (func_1562(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1002(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1002(iVar43);
	}
	return false;
}

struct<4> func_1194()
{
	return Global_1291734->f_11.f_310;
}

bool func_1195()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_1196(var uParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

int func_1197(int iParam0)
{
	iVar0 = func_1563(iParam0);
	bVar1 = func_1395(func_376(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_1198(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_1278(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1279(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1003(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1561(&Var45, &Var0, 0))
				{
					if (func_1562(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1002(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_1002(iVar43);
	}
	return false;
}

struct<4> func_1199(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_1001("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1003(&Var2, iVar16, iVar0, iVar1))
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
	func_1002(iVar0);
	return Var2;
}

bool func_1200(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

void func_1201(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1202(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_1203(int iParam0)
{
	return func_194(Global_1071686->f_28662.f_8.f_1, iParam0);
}

void func_1204(bool bParam0)
{
	if (bParam0)
	{
		func_1564(1);
	}
	func_1564(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_1205()
{
	disable_control_action(0, 1287709438, false);
	func_1174(0);
	Global_1940311->f_5 = 1;
}

Vector3 func_1206(vector3 vParam0, float fParam3)
{
	fVar3 = sin(fParam3);
	fVar4 = cos(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

void func_1207(var uParam0, int iParam1, var uParam2)
{
	vVar0 = { func_934(&(uParam0->f_93), uParam2->f_1) };
	if (uParam0->f_10.f_21.f_2 == -504335712 && func_261(Global_524288->f_40400))
	{
		fVar3 = uParam2->f_1.f_2;
		func_1565(&(uParam2->f_1), 2, 5, 0, 1);
		fVar3 = (uParam2->f_1.f_2 - fVar3);
		uParam2->f_6[0]->f_2 = (uParam2->f_6[0]->f_2 + fVar3);
		uParam2->f_6[1]->f_2 = (uParam2->f_6[1]->f_2 + fVar3);
		if (iParam1 == 0)
		{
			uParam0->f_93.f_4033[0]->f_3[0]->f_2 = (uParam0->f_93.f_4033[0]->f_3[0]->f_2 + fVar3);
		}
	}
	uParam0->f_93.f_4033[0]->f_20[iParam1] = create_scenario_point(*uParam2, uParam2->f_1, uParam2->f_4, 0, 0, 0);
	uParam0->f_93.f_4033[1]->f_20[iParam1] = create_scenario_point(*uParam2, vVar0, (uParam0->f_93.f_5296 + uParam2->f_4), 0, 0, 0);
	_set_scenario_point_flag(&(uParam0->f_93.f_4033[0]->f_20[iParam1]), 25, true);
	_set_scenario_point_flag(&(uParam0->f_93.f_4033[0]->f_20[iParam1]), 23, true);
	_set_scenario_point_flag(&(uParam0->f_93.f_4033[1]->f_20[iParam1]), 25, true);
	_set_scenario_point_flag(&(uParam0->f_93.f_4033[0]->f_20[iParam1]), 23, true);
	uParam0->f_93.f_4033[0]->f_614[uParam2->f_5] = iParam1;
	uParam0->f_93.f_4033[1]->f_614[uParam2->f_5] = iParam1;
	_copy_memory(uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[0], uParam2->f_6[0], 8);
	_copy_memory(uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0], uParam2->f_6[0], 8);
	*uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0] = { func_934(&(uParam0->f_93), *uParam2->f_6[0]) };
	uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0]->f_3.f_2 = (uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0]->f_3.f_2 + uParam0->f_93.f_5296);
	_copy_memory(uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[1], uParam2->f_6[1], 8);
	_copy_memory(uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1], uParam2->f_6[1], 8);
	if (func_176(*uParam2->f_6[1]))
	{
		*uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[1] = { *uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[0] };
		*uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1] = { *uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0] };
	}
	else
	{
		*uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1] = { func_934(&(uParam0->f_93), *uParam2->f_6[1]) };
	}
	if (func_176(uParam2->f_6[1]->f_3))
	{
		uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[1]->f_3 = { uParam0->f_93.f_4033[0]->f_20[iParam1]->f_2[0]->f_3 };
		uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1]->f_3 = { uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[0]->f_3 };
	}
	else
	{
		uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1]->f_3.f_2 = (uParam0->f_93.f_4033[1]->f_20[iParam1]->f_2[1]->f_3.f_2 + uParam0->f_93.f_5296);
	}
}

void func_1208(var uParam0, var uParam1)
{
	uParam1->f_93.f_30 = _databinding_add_data_container_from_path("", "lobby_data");
	uParam1->f_93.f_30.f_1 = _databinding_add_data_bool(uParam1->f_93.f_30, "lm_host_visibility", 1);
	uParam1->f_93.f_30.f_7 = _databinding_add_data_string(uParam1->f_93.f_30, "main_title", "MAIN_TITLE");
	uParam1->f_93.f_30.f_8 = _databinding_add_data_string(uParam1->f_93.f_30, "sub_title", "SUB_TITLE");
	uParam1->f_93.f_30.f_9 = _databinding_add_data_string(uParam1->f_93.f_30, "main_footer", "");
	uParam1->f_93.f_30.f_10 = _databinding_add_data_bool(uParam1->f_93.f_30, "currency_visibility", 0);
	uParam1->f_93.f_30.f_11 = _databinding_add_data_bool(uParam1->f_93.f_30, "ammo_visibility", 0);
	uParam1->f_93.f_30.f_12 = _databinding_add_data_int(uParam1->f_93.f_30, "ammo_in_clip", 0);
	uParam1->f_93.f_30.f_13 = _databinding_add_data_int(uParam1->f_93.f_30, "ammo_in_reserve", 0);
	uParam1->f_93.f_30.f_14 = _databinding_add_data_bool(uParam1->f_93.f_30, "game_start_timer_enabled", 0);
	uParam1->f_93.f_30.f_15 = _databinding_add_data_bool(uParam1->f_93.f_30, "game_start_timer_visible", 1);
	uParam1->f_93.f_30.f_16 = _databinding_add_data_string(uParam1->f_93.f_30, "game_start_timer_time", "");
	uParam1->f_93.f_30.f_17 = _databinding_add_data_string(uParam1->f_93.f_30, "game_start_timer_text", "GAME_START_TIMER");
	uParam1->f_93.f_30.f_18 = _databinding_add_data_bool(uParam1->f_93.f_30, "teams_lock_timer_enabled", 0);
	uParam1->f_93.f_30.f_19 = _databinding_add_data_bool(uParam1->f_93.f_30, "teams_lock_timer_visible", 1);
	uParam1->f_93.f_30.f_20 = _databinding_add_data_string(uParam1->f_93.f_30, "teams_lock_timer_time", "");
	uParam1->f_93.f_30.f_2 = _databinding_add_data_string(uParam1->f_93.f_30, "ready_up_text", "TEST");
	uParam1->f_93.f_30.f_3 = _databinding_add_data_bool(uParam1->f_93.f_30, "ready_up_enabled", 1);
	uParam1->f_93.f_30.f_4 = _databinding_add_data_bool(uParam1->f_93.f_30, "ready_up_visible", 1);
	uParam1->f_93.f_30.f_5 = _databinding_add_data_bool(uParam1->f_93.f_30, "invite_all_enabled", 0);
	uParam1->f_93.f_30.f_6 = _databinding_add_data_bool(uParam1->f_93.f_30, "invite_all_visible", 1);
	iVar0 = func_234(uParam0, player_id());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	uParam1->f_93.f_6 = iVar0;
	uParam1->f_93.f_30.f_21 = _databinding_add_data_string(uParam1->f_93.f_30, "team_name", _create_var_string(2, uParam1->f_93.f_3405[iVar0]));
	uParam1->f_93.f_30.f_24 = _databinding_add_data_string(uParam1->f_93.f_30, "team_member_count", _create_var_string(2, "MP_LOBBY_TEAM_COUNT", func_469(uParam0, iVar0), &(uParam0->f_7[iVar0])));
	iVar1 = func_921(func_782());
	switch (iVar1)
	{
		case 10:
		case 11:
		case 12:
		case 13:
			uParam1->f_93.f_30.f_25 = _databinding_add_data_bool(uParam1->f_93.f_30, "nominated_queue_visible", 1);
			uParam1->f_93.f_30.f_26 = _databinding_add_data_string(uParam1->f_93.f_30, "nominated_queue_text", _create_var_string(2, "NOMINATED_QUEUE_NONE"));
			break;
	}
	uParam1->f_93.f_30.f_22 = _databinding_add_data_int(uParam1->f_93.f_30, "filterIndex", iVar0);
	iVar2 = func_439(uParam0);
	uParam1->f_93.f_30.f_23 = _databinding_add_data_int(uParam1->f_93.f_30, "filterCount", iVar2);
	func_1226(uParam1);
	func_1227(uParam1);
	if (func_1566())
	{
		sVar3 = texture_download_get_name(func_1567());
		sVar4 = sVar3;
	}
	else
	{
		sVar4 = "hud";
		sVar3 = "placeholder";
	}
	_databinding_add_data_string(uParam1->f_93.f_30, "details_photo_image", sVar3);
	_databinding_add_data_string(uParam1->f_93.f_30, "details_photo_dictionary", sVar4);
}

void func_1209(var uParam0, var uParam1)
{
	uParam1->f_93.f_57 = _databinding_add_data_container_from_path("", "lobby_main_menu_data");
	func_1568(uParam0, uParam1);
	func_1569(&(uParam1->f_93.f_57));
	uParam1->f_93.f_57.f_59 = _databinding_add_data_bool(uParam1->f_93.f_57, "players_visible", 0);
	uParam1->f_93.f_57.f_60 = _databinding_add_data_bool(uParam1->f_93.f_57, "stable_enabled", 1);
	uParam1->f_93.f_57.f_61 = _databinding_add_data_bool(uParam1->f_93.f_57, "stable_visible", 0);
	uParam1->f_93.f_57.f_62 = _databinding_add_data_bool(uParam1->f_93.f_57, "starting_inventory_visible", 0);
	uParam1->f_93.f_57.f_63 = _databinding_add_data_bool(uParam1->f_93.f_57, "game_details_visible", 1);
	uParam1->f_93.f_57.f_64 = _databinding_add_data_bool(uParam1->f_93.f_57, "game_options_enabled", 1);
	uParam1->f_93.f_57.f_68 = _databinding_add_data_bool(uParam1->f_93.f_57, "invite_players_enabled", 1);
	uParam1->f_93.f_57.f_69 = _databinding_add_data_bool(uParam1->f_93.f_57, "invite_players_visible", 1);
	uParam1->f_93.f_57.f_70 = _databinding_add_data_bool(uParam1->f_93.f_57, "toggle_backfill_enabled", 0);
	uParam1->f_93.f_57.f_71 = _databinding_add_data_bool(uParam1->f_93.f_57, "toggle_backfill_prompt_enabled", 0);
	uParam1->f_93.f_57.f_72 = _databinding_add_data_bool(uParam1->f_93.f_57, "toggle_backfill_visible", 0);
	iVar1 = _0x51f33dbc1a41cbfd();
	if (func_194(iVar1, 192))
	{
		sVar0 = "MP_LOBBY_TOGGLE_BACKFILL";
		func_129(&(uParam1->f_93), 8192);
	}
	else
	{
		sVar0 = "MP_LOBBY_TOGGLE_BACKFILL_DISABLE";
		func_470(&(uParam1->f_93), 8192);
	}
	uParam1->f_93.f_57.f_73 = _databinding_add_data_string(uParam1->f_93.f_57, "toggle_backfill_text", sVar0);
	uParam1->f_93.f_57.f_74 = _databinding_add_data_bool(uParam1->f_93.f_57, "purchases_enabled", 1);
	uParam1->f_93.f_57.f_75 = _databinding_add_data_bool(uParam1->f_93.f_57, "purchases_visible", 1);
	uParam1->f_93.f_57.f_76 = _databinding_add_data_bool(uParam1->f_93.f_57, "outfits_visible", 1);
	uParam1->f_93.f_57.f_77 = _databinding_add_data_bool(uParam1->f_93.f_57, "outfits_enabled", !func_152(64));
	uParam1->f_93.f_57.f_79 = _databinding_add_data_bool(uParam1->f_93.f_57, "invites_visible", 1);
	uParam1->f_93.f_57.f_78 = _databinding_add_data_bool(uParam1->f_93.f_57, "invites_enabled", (_unlock_is_unlocked(-722216913) && Global_1940311->f_242.f_1186 > 0));
	uParam1->f_93.f_57.f_80 = _databinding_add_data_bool(uParam1->f_93.f_57, "invites_icon_visible", (_unlock_is_unlocked(-722216913) && Global_1940311->f_242.f_1186 > 0));
	uParam1->f_93.f_57.f_81 = _databinding_add_data_bool(uParam1->f_93.f_57, "quit_enabled", 1);
	uParam1->f_93.f_57.f_83 = _databinding_add_data_bool(uParam1->f_93.f_57, "join_team_enabled", 0);
	uParam1->f_93.f_57.f_82 = _databinding_add_data_bool(uParam1->f_93.f_57, "join_team_visible", 0);
	uParam1->f_93.f_57.f_84 = _databinding_add_data_string(uParam1->f_93.f_57, "join_team_text", _create_var_string(2, "MP_LOBBY_JOIN_TEAM"));
	iVar2 = 0;
	uParam1->f_93.f_57.f_65 = _databinding_add_data_bool(uParam1->f_93.f_57, "game_options_visible", iVar2);
	uParam1->f_93.f_57.f_66 = _databinding_add_data_bool(uParam1->f_93.f_57, "weapon_loadout_visible", 1);
	uParam1->f_93.f_57.f_67 = _databinding_add_data_bool(uParam1->f_93.f_57, "weapon_loadout_enabled", 1);
}

void func_1210(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_player_data");
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, "teams_nav_visible", 1);
	uParam0->f_2 = _databinding_add_data_hash_by_hash(*uParam0, 796332293, -84758224);
	uParam0->f_3 = _databinding_add_data_int_by_hash(*uParam0, -1821544064, 3);
	uParam0->f_4 = _databinding_add_data_int_by_hash(*uParam0, 2093245832, 0);
	uParam0->f_5 = _databinding_add_ui_item_list(*uParam0, "lobby_player_collection");
	uParam0->f_6 = _databinding_add_data_string(*uParam0, "player_list_info_text", "PLAYERS_EMPTY");
	uParam0->f_7 = _databinding_add_data_bool_by_hash(*uParam0, -1887394100, 0);
	uParam0->f_8 = _databinding_add_data_string(*uParam0, "show_stable_text", _create_var_string(2, "MP_LOBBY_SHOW_STABLE"));
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, "show_stable_visible", 0);
	uParam0->f_16 = _databinding_add_data_string(*uParam0, "dynamic_list_item_prompt_dpad_left_right_text", "");
	uParam0->f_17 = _databinding_add_data_bool(*uParam0, "dynamic_list_item_prompt_dpad_left_right_enabled", 0);
	uParam0->f_18 = _databinding_add_data_bool(*uParam0, "dynamic_list_item_prompt_dpad_left_right_visible", 0);
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, "dynamic_list_item_select_dpad_left_right_select_hash", 0);
	uParam0->f_10 = _databinding_add_data_int_by_hash(*uParam0, 1777013063, 0);
	uParam0->f_11 = _databinding_add_data_int_by_hash(*uParam0, 781014292, 0);
	uParam0->f_12 = _databinding_add_data_bool_by_hash(*uParam0, 352346104, 0);
	uParam0->f_13 = _databinding_add_data_bool_by_hash(*uParam0, -1813868604, 0);
	uParam0->f_14 = _databinding_add_data_bool_by_hash(*uParam0, -1613779848, 0);
	uParam0->f_15 = _databinding_add_data_bool_by_hash(*uParam0, 1413210936, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_20)
	{
		StringCopy(&cVar1, "Player_List_Root_", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		func_1570(&cVar1, uParam0->f_20[iVar0], uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		uParam0->f_1781[iVar0] = 255;
		iVar0++;
	}
}

void func_1211(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_player_options");
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, "invite_player_visible", 0);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, "view_player_card_visible", 0);
	uParam0->f_3 = _databinding_add_data_string(*uParam0, "kick_label", "MP_LOBBY_KICK_VOTE");
	uParam0->f_4 = _databinding_add_data_bool(*uParam0, "kick_enabled", 1);
	uParam0->f_5 = _databinding_add_data_string(*uParam0, "kick_vote_count", "");
	uParam0->f_6 = _databinding_add_data_bool(*uParam0, "invite_crew_enabled", 1);
	uParam0->f_7 = _databinding_add_data_string(*uParam0, "invite_crew_string", "MP_LOBBY_INVITE_TO_CREW");
	uParam0->f_10 = _databinding_add_data_string(*uParam0, "add_friend_string", "MP_LOBBY_ADD_FRIEND");
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, "add_friend_enabled", 1);
	uParam0->f_8 = _databinding_add_data_bool(*uParam0, "add_friend_visible", 1);
	uParam0->f_13 = _databinding_add_data_string(*uParam0, "remove_friend_string", "MP_LOBBY_REMOVE_FRIEND");
	uParam0->f_12 = _databinding_add_data_bool(*uParam0, "remove_friend_enabled", 1);
	uParam0->f_11 = _databinding_add_data_bool(*uParam0, "remove_friend_visible", 1);
	uParam0->f_14 = _databinding_add_data_bool(*uParam0, "message_enabled", 0);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, "report_enabled", 0);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, "mute_enabled", 1);
	uParam0->f_17 = _databinding_add_data_string(*uParam0, "mute_text", "NM_MW_ENTRY_PLAYER_MUTE");
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	func_1572(&(uParam0->f_18), *uParam0, func_1571("lobby_player_sub_header"), Var0);
}

void func_1212(var uParam0)
{
	uParam0->f_93.f_2022 = _databinding_add_data_container_from_path("", "lobby_details_data");
	_databinding_add_data_string(uParam0->f_93.f_2022, "job_description", func_1573(&(Global_3145858->f_19)));
	_databinding_add_data_string(uParam0->f_93.f_2022, "playercount_requirement", func_1574(uParam0->f_10.f_32, uParam0->f_10.f_33));
	uParam0->f_93.f_2022.f_1 = _databinding_add_data_bool(uParam0->f_93.f_2022, "show_creator_gamercard_visible", func_757(uParam0->f_10.f_1));
}

void func_1213(var uParam0)
{
	uParam0->f_93.f_2229 = _databinding_add_data_container_from_path("", "weapon_loadout_types_data");
	uParam0->f_93.f_2229.f_1 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_ShortArmLeft", "");
	uParam0->f_93.f_2229.f_2 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_ShortArmLeft", 1);
	uParam0->f_93.f_2229.f_3 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_ShortArmRight", "");
	uParam0->f_93.f_2229.f_4 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_ShortArmRight", 1);
	uParam0->f_93.f_2229.f_5 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_LongArm", "");
	uParam0->f_93.f_2229.f_6 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_LongArm", 1);
	uParam0->f_93.f_2229.f_7 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_LongArmBackup", "");
	uParam0->f_93.f_2229.f_8 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_LongArmBackup", 1);
	uParam0->f_93.f_2229.f_9 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_MeleeWeapons", "");
	uParam0->f_93.f_2229.f_10 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_MeleeWeapons", 1);
	uParam0->f_93.f_2229.f_11 = _databinding_add_data_string(uParam0->f_93.f_2229, "secondaryText_Throwables", "");
	uParam0->f_93.f_2229.f_12 = _databinding_add_data_bool(uParam0->f_93.f_2229, "bEnabled_Throwables", 1);
	uParam0->f_93.f_2229.f_13 = _databinding_add_ui_item_list(uParam0->f_93.f_2229, "weapon_loadout_type_collection");
	_databinding_clear_binding_array(uParam0->f_93.f_2229.f_13);
	Var1 = { func_190() };
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		*uParam0->f_93.f_2229.f_14[iVar0] = { Var1 };
		uParam0->f_93.f_2229.f_31[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		*uParam0->f_93.f_2229.f_36[iVar0] = { Var1 };
		*Global_1296679->f_16[iVar0] = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (23 - 1))
	{
		*uParam0->f_93.f_2229.f_75[iVar0] = { Var1 };
		*Global_1296679->f_53[iVar0] = { Var1 };
		iVar0++;
	}
	*Global_1296679 = { Var1 };
	Global_1296679->f_4 = { Var1 };
	Global_1296679->f_8 = { Var1 };
	Global_1296679->f_12 = { Var1 };
	*Global_1296843 = { Var1 };
	Global_1296843->f_4 = { Var1 };
	Global_1296679->f_146 = 1;
	func_1575(&(uParam0->f_93.f_2229));
}

void func_1214(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_game_options");
	func_1576(uParam0);
	func_1577(uParam0);
	func_1578(uParam0);
	func_1579(uParam0);
	func_1580(uParam0);
	func_1581(uParam0);
	func_1582(uParam0);
}

void func_1215(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_outfits_data");
	uParam0->f_1 = _databinding_add_ui_item_list(*uParam0, "lobby_outfits_collection");
	Var5 = { func_761(889965687, func_989(1), 1034665895, 1) };
	iVar0 = 1;
	while (iVar0 <= 10)
	{
		StringCopy(&cVar1, "Outfit_List_Root_", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		iVar4 = func_1583(iVar0);
		if (func_802(iVar4, Var5, -751549960, 1, 0, 0) <= 0)
		{
		}
		else
		{
			uParam0->f_2[iVar0]->f_22 = iVar4;
			uParam0->f_2[iVar0]->f_22.f_1 = func_1076(2, iVar0);
			func_1584(&cVar1, uParam0->f_2[iVar0], uParam0);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, iVar0, "pm_dynamic_text_and_end_image", &(uParam0->f_2[iVar0]));
		}
		iVar0++;
	}
}

void func_1216(var uParam0)
{
	uParam0->f_2667 = _databinding_add_data_container_from_path("", "lobby_stable_data");
	uParam0->f_2667.f_1 = _databinding_add_ui_item_list(uParam0->f_2667, "lobby_stable_collection");
	uParam0->f_2667.f_4 = _databinding_add_data_string_by_hash(uParam0->f_2667, -1598411022, _create_var_string(2, "MP_LOBBY_STABLE_CAT_MY_HORSES"));
	_databinding_add_data_int_by_hash(uParam0->f_2667, -1821544064, 1);
	_databinding_add_data_int_by_hash(uParam0->f_2667, 2093245832, 0);
	_databinding_clear_binding_array(uParam0->f_2667.f_1);
	func_1585(uParam0, -1);
	func_1586(&(uParam0->f_2667.f_5), &(uParam0->f_2667), "horse_rpg_stats");
}

void func_1217(var uParam0)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_purchases_data");
	uParam0->f_1 = _databinding_add_ui_item_list(*uParam0, "lobby_purchases_collection");
	uParam0->f_2 = _databinding_add_data_hash_by_hash(*uParam0, -2145732328, 976118230);
	uParam0->f_3 = _databinding_add_data_int_by_hash(*uParam0, -1821544064, func_1234());
	uParam0->f_4 = _databinding_add_data_int_by_hash(*uParam0, 2093245832, 0);
	uParam0->f_417 = _databinding_add_data_string(*uParam0, "item_description", "");
	uParam0->f_418 = _databinding_add_data_bool(*uParam0, "item_desc_visible", 0);
	uParam0->f_419 = _databinding_add_data_bool(*uParam0, "item_icon_visible", 0);
	uParam0->f_420 = _0x9d21b185abc2dbc4(*uParam0, "item_effect", 0, 0);
	uParam0->f_421 = _databinding_add_data_int(*uParam0, "lobby_purchase_refill_price", 0);
	uParam0->f_422 = _databinding_add_data_bool(*uParam0, "lobby_purchase_refill_price_visible", 1);
	uParam0->f_423 = _databinding_add_data_bool(*uParam0, "lobby_purchase_refill_price_enabled", 1);
	uParam0->f_424 = _databinding_add_data_hash(*uParam0, "lobby_purchase_refill_price_text", 0);
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		uParam0->f_429[iVar0] = 0;
		iVar0++;
	}
}

void func_1218(var uParam0)
{
	switch (uParam0->f_10.f_21.f_2)
	{
		case -504335712:
			func_1587(&(uParam0->f_93.f_3128), &(Global_3145858->f_57980));
			break;
		case 395262693:
			func_1587(&(uParam0->f_93.f_3128), &(Global_3145858->f_57980));
			break;
		case -933924539:
			func_1587(&(uParam0->f_93.f_3128), &(Global_3145858->f_57980));
			break;
	}
}

bool func_1219()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (func_194(_0x51f33dbc1a41cbfd(), 192) || _0x2f7eb8b6f6afe79c(1) == 1)
	{
		if (_0x0f99f6436528a089(iVar0) && _0x4be6c13a45cca8ec(iVar0) == player_id())
		{
			return true;
		}
	}
	return false;
}

bool func_1220(var uParam0, var uParam1)
{
	iVar0 = func_439(uParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (uParam1->f_10.f_21.f_2)
	{
		case -504335712:
			return func_1588(iVar0, &(Global_524288->f_35360));
		case 395262693:
			return func_1588(iVar0, &(Global_2359296->f_36));
		default:
			break;
	}
	return false;
}

int func_1221()
{
	if (!func_1589())
	{
		return 0;
	}
	if (!func_152(32))
	{
		return 1;
	}
	iVar0 = func_899(255);
	return func_1590(iVar0);
}

bool func_1222(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 31)
	{
		return false;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Global_3145858->f_49703)
	{
		if (is_bit_set(Global_3145858->f_49704[iVar1]->f_3, iParam0))
		{
			if (bVar0)
			{
				return true;
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return false;
}

bool func_1223(int iParam0)
{
	return func_79(&(Global_2359296->f_3), iParam0);
}

int func_1224()
{
	return get_player_ped(255);
}

int func_1225()
{
	return &Global_262155;
}

void func_1226(var uParam0)
{
	switch (uParam0->f_10.f_21.f_2)
	{
		case -504335712:
			_databinding_write_data_string(uParam0->f_93.f_30.f_7, func_1591(Global_524288->f_40400, &(Global_3145858->f_11), &(Global_3145858->f_108)));
			break;
		case 395262693:
			if (!is_string_null_or_empty(&(Global_3145858->f_108)))
			{
				_databinding_write_data_string(uParam0->f_93.f_30.f_7, _0xd8402b858f4ddd88(&(Global_3145858->f_108), get_length_of_literal_string(&(Global_3145858->f_108))));
			}
			else
			{
				_databinding_write_data_string(uParam0->f_93.f_30.f_7, func_1592(Global_2359296->f_155));
			}
			break;
		case -933924539:
			if (!is_string_null_or_empty(&(Global_3145858->f_108)))
			{
				_databinding_write_data_string(uParam0->f_93.f_30.f_7, _0xd8402b858f4ddd88(&(Global_3145858->f_108), get_length_of_literal_string(&(Global_3145858->f_108))));
			}
			else
			{
				_databinding_write_data_string(uParam0->f_93.f_30.f_7, func_1593(Global_2097152->f_32));
			}
			break;
	}
}

void func_1227(var uParam0)
{
	_databinding_write_data_string(uParam0->f_93.f_30.f_8, &(Global_3145858->f_100));
}

void func_1228(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 20)
	{
		return;
	}
	func_1594(Global_1901947->f_123[iVar0]->f_1, &(Global_1901947->f_123[iVar0]));
}

void func_1229(var uParam0, var uParam1)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	iVar88 = uParam1->f_93.f_9;
	StringCopy(&(Var0.f_25), func_559(get_player_name(uParam1->f_93.f_9), 109029619), 128);
	Var0.f_2 = func_920(uParam1->f_93.f_9, 1, -1, 0);
	Var0.f_21 = 1;
	Var0.f_20 = 1292500213;
	Var0.f_19 = 469293194;
	if (_0x0ded260a1958a82e(uParam1->f_93.f_9))
	{
		Var0.f_20 = -2020914324;
	}
	else if (_0xaa35fd9abab490a3(uParam1->f_93.f_9) && _0xef6f2a35faaf2ed7(uParam1->f_93.f_9))
	{
		Var0.f_20 = -129728325;
	}
	else
	{
		iVar89 = _0x901e0dc25080c8b9(uParam1->f_93.f_9);
		if (_0xd6f6acf4392187fb(iVar89))
		{
			if (func_1432(iVar89))
			{
				if (func_1595(uParam1->f_93.f_9, &iVar90))
				{
					switch (iVar90)
					{
						case -482360895:
							Var0.f_20 = 202246788;
							break;
					}
				}
			}
			else if (_0x0f99f6436528a089(iVar89) && _0x424b17a7dc5c90bc(uParam1->f_93.f_9))
			{
				Var0.f_20 = 202246788;
			}
		}
	}
	Var0.f_61 = 1;
	Var0.f_59 = -1693157378;
	Var0.f_60 = -1120556042;
	Var0.f_57 = 1;
	StringCopy(&(Var0.f_41), func_1070(iVar88), 128);
	func_1596(&(uParam1->f_93.f_1949.f_18), Var0);
	bVar91 = _0x9c725d149622bfde(0);
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_2, bVar91);
	if (uParam0->f_749 == uParam1->f_93.f_9)
	{
		_databinding_write_data_string(uParam1->f_93.f_1949.f_5, _create_var_string(2, "MP_LOBBY_TEAM_COUNT", uParam0->f_750, func_555()));
	}
	else
	{
		_databinding_write_data_string(uParam1->f_93.f_1949.f_5, "");
	}
	func_1253(uParam1);
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_4, !uParam1->f_93.f_3471);
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_6, false);
	bVar92 = network_is_gamer_in_my_session(&(uParam1->f_93.f_10));
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_1, !bVar92);
	if (uParam1->f_93.f_9 != player_id() && func_137(8388608))
	{
		_databinding_write_data_bool(uParam1->f_93.f_1949.f_16, false);
	}
	else
	{
		_databinding_write_data_bool(uParam1->f_93.f_1949.f_16, bVar92);
	}
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_14, false);
	_databinding_write_data_bool(uParam1->f_93.f_1949.f_15, false);
	if (uParam1->f_93.f_9 == player_id())
	{
		if (func_137(8388608))
		{
			_databinding_write_data_string(uParam1->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_UNMUTE");
		}
		else
		{
			_databinding_write_data_string(uParam1->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_MUTE");
		}
	}
	else if (bVar92)
	{
		if (_0x0ded260a1958a82e(uParam1->f_93.f_9))
		{
			_databinding_write_data_string(uParam1->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_UNMUTE");
		}
		else
		{
			_databinding_write_data_string(uParam1->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_MUTE");
		}
	}
	else
	{
		_databinding_write_data_string(uParam1->f_93.f_1949.f_17, "NM_MW_ENTRY_PLAYER_MUTE");
	}
}

void func_1230(var uParam0)
{
	func_1226(uParam0);
	func_1227(uParam0);
	if (!func_757(uParam0->f_10.f_1))
	{
		_databinding_write_data_string(uParam0->f_93.f_30.f_9, _create_var_string(10, "MP_LOBBY_GAME_DETAILS_CREATOR", func_559(&(uParam0->f_10.f_8), 109029619)));
	}
	else
	{
		*Var0[0] = { uParam0->f_10.f_1 };
		if (is_pc_version() || _is_stadia_version())
		{
			uParam0->f_93.f_2022.f_2 = 1;
			return;
		}
		uParam0->f_93.f_2022.f_2 = _0xd66c9e72b3cc4982(&Var0, 1);
	}
}

char* func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_SHORT_ARM_LEFT");
		case 1:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_SHORT_ARM_RIGHT");
		case 2:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_LONG_ARM");
		case 3:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_LONG_ARM_BACKUP");
		case 4:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_MELEE_WEAPONS");
		case 5:
			return _create_var_string(2, "MP_LOBBY_WEAPON_LOADOUT_THROWABLES");
	}
	return "";
}

void func_1232(var uParam0, int iParam1)
{
	_databinding_clear_binding_array(uParam0->f_13);
	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (4 == iParam1 || 5 == iParam1)
	{
		bVar19 = true;
	}
	if (func_1001("ALL WEAPONS", &iVar14, &iVar15, -1591664384, 1))
	{
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (bVar19)
			{
				if (iVar17 == func_1597(iParam1))
				{
				}
				else
				{
					if (func_1003(&Var0, iVar16, iVar14, iVar15))
					{
						iVar18 = func_1598(uParam0, iParam1, Var0, 1, iVar17);
						if (func_762(Var0.f_4, iParam1) && !func_1004(uParam0, Var0, iParam1))
						{
							func_803(*uParam0, uParam0->f_13, Var0, Var0.f_4, 400344993, 400344993, iVar18);
							iVar17++;
						}
					}
					iVar16++;
				}
				func_1002(iVar14);
			}
		}
	}
}

bool func_1233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (is_bit_set(Global_3145858->f_226, 21))
			{
				return false;
			}
			break;
		case 1:
			if (is_bit_set(Global_3145858->f_226, 22))
			{
				return false;
			}
			break;
		default:
			break;
	}
	return true;
}

int func_1234()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (2 - 1))
	{
		iVar2 = iVar1;
		if (func_1233(iVar2))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1235()
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (func_1233(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 2;
}

void func_1236(var uParam0, var uParam1, var uParam2)
{
	if (func_152(32))
	{
		_databinding_write_data_string(uParam2->f_93.f_30.f_9, _create_var_string(2, "MP_LOBBY_OUTFIT_OVERRIDE_ENABLED"));
	}
	else
	{
		_databinding_write_data_string(uParam2->f_93.f_30.f_9, _create_var_string(2, "MP_LOBBY_OUTFIT_OVERRIDE_DISABLED"));
	}
	func_836(&(uParam2->f_93), func_900());
}

void func_1237(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1599(iParam0);
	switch (iParam0)
	{
		case 0:
			func_1600();
			func_1601();
			break;
		case 1:
			func_1602();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 13:
			func_1603(0);
			break;
		case 7:
			func_1604();
			break;
		case 16:
			func_1605(iParam0, 1);
			break;
		case 14:
			func_1606();
			break;
		case 15:
			func_1607();
			break;
		case 19:
			func_1608();
			break;
		case 17:
			func_1605(iParam0, 0);
			func_1609();
			break;
		case 18:
			func_1610();
			break;
		case 6:
		case 22:
		case 23:
			func_1611(iParam0);
			break;
		case 53:
			func_1612();
			break;
		case 8:
		case 9:
		case 10:
			func_1613();
			break;
		case 28:
			func_1614();
			break;
		case 44:
			func_1615();
			break;
		case 40:
			func_1616();
			_hide_hud_component(-523411361);
			break;
		case 41:
			func_1617(2f, 1);
			break;
		case 42:
			break;
		case 21:
			func_1618();
			break;
		case 43:
			func_1619();
			break;
		case 49:
			func_1620();
			break;
		case 50:
			func_1621();
			break;
		case 51:
			func_1622();
			break;
		case 24:
			func_1623();
			break;
		case 25:
			func_1624();
			break;
		case 32:
			func_1625();
			break;
		case 56:
			func_1617(3f, 1);
			break;
		case 55:
			func_1617(3f, 1);
			break;
		case 54:
			func_1626();
			_hide_hud_component(-523411361);
			break;
		case 57:
			func_1627();
			break;
	}
}

float func_1238(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_1239(int iParam0, int iParam1)
{
	if (Global_524288->f_40400 == 909765192 && iParam1 == 0)
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (is_ped_male(iParam0))
	{
		if (iVar0 == 99506713 || iVar0 == 562630994)
		{
			return false;
		}
	}
	else if (iVar0 == 1317919899)
	{
		return false;
	}
	return true;
}

void func_1240(var uParam0, var uParam1)
{
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x0f99f6436528a089(iVar1) && _0x4be6c13a45cca8ec(iVar1) == iVar0)
	{
		func_576(func_575(iVar1), 0, -1, -1, -1, -1);
	}
	else
	{
		func_96(uParam1);
		func_97(uParam0, 15);
	}
	_0x00a15b94cba4f76f(uParam1->f_93.f_3470);
	func_129(&(uParam1->f_93), 16384);
}

void func_1241(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

void func_1242(var uParam0, var uParam1)
{
	if (uParam1->f_2 == 2074623703)
	{
		uParam0->f_93.f_3471 = 1;
		func_1628(func_225(0, 8), uParam0->f_93.f_9);
		_0x00a15b94cba4f76f(uParam0->f_93.f_3470);
		func_129(&(uParam0->f_93), 16384);
	}
	else if (uParam1->f_2 == 1400745903)
	{
		_0x00a15b94cba4f76f(uParam0->f_93.f_3470);
		func_129(&(uParam0->f_93), 16384);
	}
}

int func_1243(int iParam0)
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

int func_1244(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_1629())
	{
		return 636925055;
	}
	return -963477619;
}

int func_1245(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1428(iParam0, bParam1));
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

bool func_1246(int iParam0, bool bParam1)
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

bool func_1247(int iParam0, bool bParam1)
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
	if (func_1630(iParam0))
	{
		return true;
	}
	return !func_1246(iParam0, 0);
}

bool func_1248(int iParam0, bool bParam1)
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
	if (func_752(iParam0))
	{
		return false;
	}
	if (func_1630(iParam0))
	{
		return false;
	}
	if (func_1631(iParam0))
	{
		return true;
	}
	return func_1632(iParam0);
}

int func_1249(int iParam0, int iParam1)
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

void func_1250(var uParam0, var uParam1)
{
	_0x3bf0767cf33fcc88(uParam1->f_93.f_57.f_1.f_19);
	iVar0 = func_439(uParam0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		_0x7fc60c94c83c5cd7(uParam1->f_93.f_57.f_1.f_19, get_hash_key(uParam1->f_93.f_3405[iVar1]), -1);
		iVar1++;
	}
	_databinding_write_data_int(uParam1->f_93.f_57.f_1.f_25, (iVar0 - 1));
}

bool func_1251(var uParam0)
{
	return _databinding_read_data_bool(uParam0->f_93.f_57.f_61);
}

void func_1252(var uParam0)
{
	if (uParam0->f_93.f_3475.f_51 == 1)
	{
		if (!is_model_valid(uParam0->f_93.f_3475.f_53))
		{
			func_769(&(uParam0->f_93.f_3475), 0);
			return;
		}
		func_776(&(uParam0->f_93.f_3475), 0);
		func_769(&(uParam0->f_93.f_3475), 2);
	}
	if (uParam0->f_93.f_3475.f_51 == 2)
	{
		if (!is_model_valid(uParam0->f_93.f_3475.f_53))
		{
			func_769(&(uParam0->f_93.f_3475), 0);
			return;
		}
		request_model(uParam0->f_93.f_3475.f_53, false);
		if (!has_model_loaded(uParam0->f_93.f_3475.f_53))
		{
			return;
		}
		func_769(&(uParam0->f_93.f_3475), 3);
	}
	if (uParam0->f_93.f_3475.f_51 == 3)
	{
		func_580(&(uParam0->f_93.f_3475), uParam0->f_93.f_3475.f_53, uParam0->f_93.f_3475.f_53.f_11, 0);
		if (func_778(uParam0->f_93.f_3475.f_47))
		{
			iVar0 = get_ped_index_from_entity_index(uParam0->f_93.f_3475.f_47);
			if (does_entity_exist(iVar0))
			{
				func_1633(iVar0, 0, 100);
				func_1633(iVar0, 1, 100);
				func_1634(&(uParam0->f_93), &iVar0);
			}
		}
		func_769(&(uParam0->f_93.f_3475), 4);
	}
	if (uParam0->f_93.f_3475.f_51 == 4)
	{
		if (is_entity_a_ped(uParam0->f_93.f_3475.f_47))
		{
			if (!_0xa0bc8faed8cfeb3c(get_ped_index_from_entity_index(uParam0->f_93.f_3475.f_47)))
			{
				return;
			}
			iVar1 = get_ped_index_from_entity_index(uParam0->f_93.f_3475.f_47);
			func_1635(&(uParam0->f_93.f_2667.f_5), &iVar1);
		}
		func_776(&(uParam0->f_93.f_3475), 1);
		func_769(&(uParam0->f_93.f_3475), 5);
	}
	if (uParam0->f_93.f_3475.f_51 == 5)
	{
		iVar2 = (Global_1296859->f_20 - uParam0->f_93.f_3475.f_48);
		if (IntToFloat(iVar2) < 125f)
		{
			iVar3 = round(((IntToFloat(iVar2) / 125f) * 255f));
			set_entity_alpha(uParam0->f_93.f_3475.f_47, iVar3, false);
		}
		else
		{
			func_769(&(uParam0->f_93.f_3475), 0);
			set_entity_alpha(uParam0->f_93.f_3475.f_47, 255, false);
		}
	}
	if (uParam0->f_93.f_3475.f_51 != 3)
	{
		if (does_entity_exist(uParam0->f_93.f_3475.f_47))
		{
			_0x3fe4fb41ef7d2196(get_ped_index_from_entity_index(uParam0->f_93.f_3475.f_47));
		}
	}
}

void func_1253(var uParam0)
{
	if (uParam0->f_93.f_9 == player_id())
	{
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_1, false);
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_4, false);
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_6, false);
		_databinding_write_data_string(uParam0->f_93.f_1949.f_10, "MP_LOBBY_ADD_FRIEND");
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, false);
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, false);
		if (is_orbis_version())
		{
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, false);
		}
		if (is_orbis_version() || is_durango_version())
		{
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, false);
		}
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_14, false);
		_databinding_write_data_bool(uParam0->f_93.f_1949.f_15, false);
		return;
	}
	else
	{
		if (func_1636())
		{
			_0x1f51f367b710a832();
		}
		if (is_orbis_version())
		{
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, false);
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, false);
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, false);
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, false);
		}
		else if (is_durango_version())
		{
			if (network_is_friend(&(uParam0->f_93.f_10)))
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, false);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, false);
			}
			else
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, _0x99abe9bf9dada162(&(uParam0->f_93.f_10)));
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, true);
			}
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, false);
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, false);
		}
		else if (_is_stadia_version())
		{
			if (network_is_friend(&(uParam0->f_93.f_10)))
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, false);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, false);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, true);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, true);
			}
			else
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, _0x99abe9bf9dada162(&(uParam0->f_93.f_10)));
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, true);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, false);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, false);
			}
		}
		else
		{
			if (network_is_friend(&(uParam0->f_93.f_10)))
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, false);
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, false);
			}
			else
			{
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_9, _0x99abe9bf9dada162(&(uParam0->f_93.f_10)));
				_databinding_write_data_bool(uParam0->f_93.f_1949.f_8, true);
			}
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_12, false);
			_databinding_write_data_bool(uParam0->f_93.f_1949.f_11, false);
		}
	}
}

bool func_1254()
{
	iVar2 = player_id();
	if (func_642())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1238240)[iVar0]->f_300 & 1 == 0)
		{
		}
		else if (!_0x72b2e00c9bac6789(&(Global_1237665->f_573), iVar0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (iVar1 == iVar2)
			{
			}
			else if (!network_is_player_active(iVar1))
			{
			}
			else if (_0x3f59fe6f37869576(iVar1, iVar2))
			{
			}
			else if (vdist(get_entity_coords(get_player_ped(iVar2), false, false), get_entity_coords(get_player_ped(iVar1), false, false)) > (Global_1901947->f_166.f_23 * (*Global_1145091)[network_player_id_to_int()]->f_34))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1255(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 8:
			func_1637();
			break;
	}
}

void func_1256(char* sParam0, int iParam1)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_5, sParam0);
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_6, iParam1);
	}
}

void func_1257()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1940311->f_242.f_1186 - 1))
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_26);
		if (!func_1638(iVar1))
		{
		}
		else
		{
			sVar2 = func_1639(iVar1, iVar0);
			if (!is_string_null_or_empty(sVar2))
			{
				iVar3 = get_hash_key(sVar2);
				iVar4 = iVar3;
			}
			else
			{
				iVar3 = 1700592256;
				iVar4 = 1434360011;
			}
			if (_0x81d7183e7a8eca72(Global_1940311->f_242.f_14[iVar0]->f_22) != iVar3)
			{
				_databinding_write_data_hash_string(Global_1940311->f_242.f_14[iVar0]->f_22, iVar3);
				_databinding_write_data_hash_string(Global_1940311->f_242.f_14[iVar0]->f_23, iVar4);
			}
		}
		iVar0++;
	}
}

var func_1258()
{
	return func_1640(Global_1940311->f_1433);
}

char* func_1259(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_596(89));
	iVar1 = Global_1296859->f_21;
	iVar2 = (iVar0 - iVar1);
	sVar3 = func_913(iVar2);
	if (func_1641())
	{
		return _create_var_string(2, "MI_WANTED_TT", func_1642());
	}
	if (iVar2 > 0)
	{
		return _create_var_string(10, "INV_EXPIRE", sVar3);
	}
	return "";
}

void func_1260(var uParam0, var uParam1)
{
	switch (uParam0->f_1804)
	{
		case 0:
			_databinding_write_data_string(uParam0->f_6, "PLAYERS_EMPTY");
			_0x5cb8b0c846d0f30b(0);
			_0xff36f36b07e69059(1);
			uParam0->f_1799 = 0;
			uParam0->f_1800 = uParam0->f_1799;
			uParam0->f_1801 = uParam0->f_1800 + 11;
			uParam0->f_1803 = 1;
			uParam0->f_1802 = _0xdb7abdd203fa3704();
			_databinding_write_data_bool(uParam0->f_13, true);
			if (uParam0->f_1802 <= 0)
			{
				return;
			}
			if (uParam0->f_1802 > 12)
			{
				_databinding_write_data_bool(uParam0->f_12, true);
				_databinding_write_data_int(uParam0->f_10, uParam0->f_1799);
				_databinding_write_data_int(uParam0->f_11, uParam0->f_1802);
				_databinding_write_data_bool(uParam0->f_15, true);
			}
			_databinding_write_data_bool(uParam0->f_14, false);
			func_1643(uParam0, uParam1, 1);
			uParam0->f_1804 = 1;
			break;
		case 1:
			iVar1 = ceil((to_float(uParam0->f_1802) / to_float(12)));
			if (is_control_just_pressed(2, 1141111167))
			{
				if (uParam0->f_1799 < uParam0->f_1801)
				{
					uParam0->f_1799++;
				}
			}
			else if (is_control_just_pressed(2, -1860390754))
			{
				if (uParam0->f_1799 > uParam0->f_1800)
				{
					uParam0->f_1799 = (uParam0->f_1799 - 1);
				}
			}
			else if (is_control_just_pressed(2, -1384133541))
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_1803 > 1)
					{
						uParam0->f_1803 = (uParam0->f_1803 - 1);
						bVar0 = true;
						uParam0->f_1799 = (uParam0->f_1799 - 12);
						uParam0->f_1800 = (uParam0->f_1800 - 12);
						uParam0->f_1801 = uParam0->f_1800 + 11;
					}
					else if (uParam0->f_1803 == 1)
					{
						uParam0->f_1803 = iVar1;
						bVar0 = true;
						uParam0->f_1799 = (uParam0->f_1799 + (12 * (iVar1 - 1)));
						uParam0->f_1800 = (12 * (iVar1 - 1));
						uParam0->f_1801 = uParam0->f_1800 + 11;
						if (uParam0->f_1801 > (uParam0->f_1802 - 1))
						{
							uParam0->f_1801 = (uParam0->f_1802 - 1);
						}
					}
				}
			}
			else if (is_control_just_pressed(2, 1710877787))
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_1803 < iVar1)
					{
						uParam0->f_1803++;
						bVar0 = true;
						uParam0->f_1799 += 12;
						uParam0->f_1800 += 12;
						uParam0->f_1801 = uParam0->f_1800 + 11;
						if (uParam0->f_1801 > (uParam0->f_1802 - 1))
						{
							uParam0->f_1801 = (uParam0->f_1802 - 1);
						}
					}
					else if (uParam0->f_1803 == iVar1)
					{
						uParam0->f_1803 = 1;
						bVar0 = true;
						uParam0->f_1799 = (uParam0->f_1799 - (12 * (iVar1 - 1)));
						uParam0->f_1800 = (uParam0->f_1800 - (12 * (iVar1 - 1)));
						uParam0->f_1801 = uParam0->f_1800 + 11;
						if (uParam0->f_1801 > (uParam0->f_1802 - 1))
						{
							uParam0->f_1801 = (uParam0->f_1802 - 1);
						}
					}
				}
			}
			if (uParam0->f_1799 > (uParam0->f_1802 - 1))
			{
				uParam0->f_1799 = uParam0->f_1800;
			}
			_databinding_write_data_bool(uParam0->f_14, false);
			_databinding_write_data_bool(uParam0->f_15, false);
			func_1643(uParam0, uParam1, bVar0);
			break;
		case 2:
			break;
	}
}

void func_1261(var uParam0)
{
	if (!network_clan_service_is_valid())
	{
		return;
	}
	iVar1 = 0;
	switch (uParam0->f_3540)
	{
		case 0:
			_databinding_write_data_bool(uParam0->f_30.f_5, false);
			_databinding_write_data_string(uParam0->f_142.f_6, "PLAYERS_EMPTY");
			_databinding_write_data_bool(uParam0->f_142.f_17, false);
			_databinding_write_data_bool(uParam0->f_142.f_18, false);
			if (network_is_finding_gamers())
			{
				func_1644(uParam0, 1);
			}
			else if (_0xe532d6811b3a4d2a(0))
			{
				uParam0->f_3540.f_483 = 0;
				func_1644(uParam0, 1);
			}
			else
			{
				network_clear_found_gamers();
				func_289(&(uParam0->f_142));
			}
			break;
		case 1:
			if (_0x0e54d4da6018ff8e() && _0xf9b83b77929d8863())
			{
				uParam0->f_3540.f_483 = _0x7bca0a3972708436(&(uParam0->f_3540.f_1), 482);
				if (uParam0->f_3540.f_483 >= 32)
				{
					uParam0->f_3540.f_483 = 31;
				}
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_3540.f_483 - 1))
				{
					if (func_757(*uParam0->f_3540.f_1.f_1[iVar0]))
					{
						if (!func_1645(&(uParam0->f_142), iVar1, uParam0->f_3540.f_1.f_1[iVar0], func_559(&(uParam0->f_3540.f_1.f_1[iVar0]->f_7), 109029619), iVar0, -926236232, -926236232, &(uParam0->f_3472), 0, 1))
						{
						}
						else
						{
							iVar1++;
						}
					}
					iVar0++;
				}
				_databinding_write_data_bool(uParam0->f_30.f_5, iVar1 > 0);
				func_1646(&(uParam0->f_142), iVar1);
				network_clear_found_gamers();
				func_1644(uParam0, 0);
			}
			else if (!network_is_finding_gamers())
			{
				func_1644(uParam0, 0);
			}
			break;
		case -1:
			break;
	}
}

void func_1262(var uParam0)
{
	iVar1 = 0;
	switch (uParam0->f_3540)
	{
		case 0:
			uParam0->f_142.f_1806 = 0;
			_databinding_write_data_bool(uParam0->f_30.f_5, false);
			_databinding_write_data_string(uParam0->f_142.f_6, "PLAYERS_EMPTY");
			_databinding_write_data_bool(uParam0->f_142.f_17, false);
			_databinding_write_data_bool(uParam0->f_142.f_18, false);
			if (_0x4664d213a0ccaf40())
			{
				func_1644(uParam0, 1);
			}
			else if (_0x12aeb56b489415c5())
			{
				uParam0->f_3540.f_483 = 0;
				func_1644(uParam0, 1);
			}
			else if (_0x6d206d383bb5f6b1(0, 8))
			{
				func_1644(uParam0, 1);
			}
			else
			{
				_0x49cf17a564918e8d();
				func_289(&(uParam0->f_142));
			}
			break;
		case 1:
			if (_0x12aeb56b489415c5())
			{
				uParam0->f_3540.f_483 = _0x37a834aec6a4f74a();
				if (uParam0->f_3540.f_483 >= 8)
				{
					uParam0->f_3540.f_483 = 7;
				}
				if (_0xfefcc345ce357453(0, uParam0->f_3540.f_483, &(uParam0->f_3540.f_1), 482))
				{
					iVar0 = 0;
					while (iVar0 <= (uParam0->f_3540.f_483 - 1))
					{
						if (func_757(*uParam0->f_3540.f_1.f_1[iVar0]))
						{
							if (!func_1645(&(uParam0->f_142), iVar1, uParam0->f_3540.f_1.f_1[iVar0], func_559(&(uParam0->f_3540.f_1.f_1[iVar0]->f_7), 109029619), iVar0, -926236232, -926236232, &(uParam0->f_3472), 0, 1))
							{
							}
							else
							{
								iVar1++;
							}
						}
						iVar0++;
					}
					_databinding_write_data_bool(uParam0->f_30.f_5, iVar1 > 0);
					func_1646(&(uParam0->f_142), iVar1);
					func_1644(uParam0, 2);
				}
				else
				{
					func_1644(uParam0, 0);
				}
			}
			else if (!_0x4664d213a0ccaf40())
			{
				_databinding_write_data_string(uParam0->f_142.f_6, "PLAYERS_FAILED");
				func_1644(uParam0, 2);
			}
			break;
		case 2:
			if (uParam0->f_142.f_1806)
			{
				func_1644(uParam0, 0);
			}
			break;
		case -1:
			break;
	}
}

bool func_1263(int iParam0)
{
	if (((((_is_weapon_revolver(iParam0) || _is_weapon_pistol(iParam0)) || _is_weapon_repeater(iParam0)) || _is_weapon_rifle(iParam0)) || _is_weapon_shotgun(iParam0)) || _is_weapon_sniper(iParam0))
	{
		return true;
	}
	return false;
}

int func_1264(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_796(iParam0, -915411861, &iVar1, 0))
	{
		return iVar0;
	}
	Var2 = { func_797(iParam0, 1, 1) };
	iVar7 = func_798(iParam0, &Var2, 0, 1, 0);
	iVar8 = func_799(iParam0, 0, 1, 0, 1);
	iVar9 = (func_597() / iVar8);
	if ((iVar9 * iVar1) > iVar7)
	{
		iVar9 = (iVar7 / iVar1);
	}
	if (iVar1 > 1 && (iVar7 - (iVar9 * iVar1)) > 0)
	{
		if (iVar9 + 1 <= (func_597() / iVar8))
		{
			iVar9++;
		}
	}
	iVar0 = (iVar9 * iVar8);
	return iVar0;
}

int func_1265(int iParam0, bool bParam1)
{
	Var0 = { func_797(iParam0, 0, 0) };
	return func_1039(iParam0, &Var0, 0, bParam1);
}

void func_1266(int iParam0)
{
	func_195(&(Global_1071686->f_28662.f_22.f_1), iParam0);
}

void func_1267(int iParam0)
{
	if (func_1647(iParam0))
	{
		func_283(&(Global_1071686->f_28662.f_22.f_1), iParam0);
	}
}

void func_1268(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		_set_ped_face_feature(iParam0, &(Global_1952637->f_4[iVar0]), (*uParam1)[iVar0]->f_1);
		iVar0++;
	}
	if (iParam2 != 0)
	{
		_set_ped_body_component(iParam0, iParam2);
	}
	if (iParam3 != 0)
	{
		_set_ped_body_component(iParam0, iParam3);
	}
}

bool func_1269(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_1270(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_493(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_1271(iParam0, iVar0, 0);
			func_500(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_315(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1271(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_0xdf631e4bce1b1fc4(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0, 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1952637->f_83[iParam1]->f_1)
		{
			_set_ped_component_disabled(iParam0, &(Global_1952637->f_83[iParam1]->f_3[iVar0]), 0);
			iVar0++;
		}
	}
}

void func_1272(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

bool func_1273(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

Vector3 func_1274(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	return *Global_17411.f_55.f_644.f_33[iParam1]->f_1.f_1[iParam0];
}

void func_1275(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 || iParam1);
}

void func_1276(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_1648(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_1648(uParam0->f_2[iVar0], 1))
				{
					func_495(uParam0->f_2[iVar0], 2, 6);
				}
				*Global_1952637->f_2897.f_35[iVar1] = { *uParam0->f_2[iVar0] };
				iVar1++;
				*uParam0->f_2[iVar0] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*uParam0->f_2[iVar0] = { *Global_1952637->f_2897.f_35[iVar0] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_1277(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

struct<14> func_1278(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

bool func_1279(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_518(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1280(int iParam0, int iParam1, int iParam2)
{
	Var1.f_9 = -1591664384;
	iVar16 = 0;
	if (func_943() == 24043185)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_1003(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (_get_ped_component_category(Var1.f_4, iVar16, true) == 0)
		{
			if ((Var1.f_4 != 1733464892 && Var1.f_4 != 1326838792) && Var1.f_4 != -230310728)
			{
			}
			else if (func_496(Var1.f_4) != 0)
			{
			}
			else if (func_497(Var1.f_4, -166674229))
			{
			}
			else if (func_497(Var1.f_4, 525391395))
			{
			}
			else
			{
				iVar15 = func_985(Var1.f_4);
				if (func_1650(iParam2, func_1649(iVar15)))
				{
				}
				else
				{
					return Var1.f_4;
				}
			}
			iVar0++;
			return 0;
		}
	}
}

bool func_1281(int iParam0, bool bParam1)
{
	if (!func_602(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_497(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

void func_1282(var uParam0, var uParam1)
{
	Var0 = func_946(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	_0x91ded5dd64bb2691(&Var0);
	if (!_0xed4413cee1bf142c(&Var0))
	{
		return;
	}
	while (_0xed4413cee1bf142c(&Var0))
	{
		if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1409451727))
		{
		}
		else
		{
			iVar8 = func_488(iVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar7, &Var0, 1373051002))
			{
			}
			else if (&uParam0->f_1[iVar8] != iVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8] = &Global_1952637->f_83[iVar8];
				uParam0->f_1[iVar8]->f_1 = 0;
				func_494(iVar8, 0);
			}
		}
	}
}

void func_1283(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -230310728 || iParam1 == 1326838792)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
	iVar0 = 10;
	iVar1 = func_985(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_497(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_497(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_497(&(uParam0->f_1[iVar0]), -1446529222) && func_497(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam1, -93469181)) && func_497(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1284(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 1733464892)
	{
		uParam0->f_1[iParam2]->f_1 = 289238755;
	}
	else if (uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		uParam0->f_1[iParam2]->f_1 = 1155669136;
	}
}

void func_1285(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_1281(iVar1, 0) && func_497(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_985(iVar1) == 2086043523) && func_497(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1286(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_985(iParam2))
	{
		case -525676072:
			func_1651(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_1652(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1287(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_985(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_494(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_985(iParam2) == 81053684 || func_497(iParam2, 160827531))
	{
		func_1653(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_497(iParam2, -180472385) && !func_1281(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	if (func_497(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_494(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_494(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_494(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_494(iVar0, iParam3);
		}
	}
}

void func_1288(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_943() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_497(iParam2, 1872585553)) || func_985(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_1281(&(uParam0->f_1[iVar0]), 0) && func_497(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_1281(&(uParam0->f_1[iVar0]), 0) && func_497(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_985(iVar2) == 1759215194 && func_985(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_1654(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam4);
	}
	else if (func_1655(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_985(iVar2) == 912453393 && func_1656(32))
		{
			iVar3 |= 1;
		}
		if (func_497(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_953(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam4);
			func_1296(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_1281(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_494(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_1657(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_1657(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_1289(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1290(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_985(iParam2))
	{
		case 698653232:
			func_1658(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_1659(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1291(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_985(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_1660(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_1661(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1292(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_985(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_494(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_943() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_494(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_1657(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_1657(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_1293(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

void func_1294(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_1662(99217379) && func_497(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_1281(&(uParam0->f_1[iVar0]), 0) && func_497(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1295(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

void func_1296(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_985(iParam2))
	{
		case 1759215194:
			func_1663(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_1664(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_1665(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_1666(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_1667(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_1668(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1297(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_985(iParam2))
	{
		case 1769055947:
			func_1669(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_1670(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1298(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_1671(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_497(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_985(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	if ((func_497(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_985(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_497(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

bool func_1299(struct<2> Param0)
{
	return func_717(Param0) == 0;
}

void func_1300(struct<2> Param0, bool bParam2)
{
	if (!func_325(Param0))
	{
		return;
	}
	if (!func_1299(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1672(Param0);
	}
	func_720(Param0, 1);
	bParam2 = bParam2;
}

void func_1301(bool bParam0)
{
	if (bParam0)
	{
		func_1673();
		_0x9b39b0555cc692b5();
		return;
	}
	func_1673();
	switch (Global_1572887->f_16)
	{
		case 0:
			_0x9b39b0555cc692b5();
			break;
		case 1:
			_0x9b39b0555cc692b5();
			_0xe3ab5eefcb6671a2(1);
			break;
		case 2:
			_0x9b39b0555cc692b5();
			_0xe3ab5eefcb6671a2(2);
			break;
	}
}

void func_1302(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_1303(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_527(iParam0))
		{
			func_995(iParam0);
		}
	}
}

void func_1304(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_1305(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_472(iParam0);
	}
}

bool func_1306(int iParam0, int iParam1)
{
	return func_194(*iParam0, iParam1);
}

int func_1307(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_1308(int iParam0, int iParam1)
{
	if (func_1306(iParam0, iParam1))
	{
		return;
	}
	func_195(iParam0, iParam1);
}

Vector3 func_1309(bool bParam0)
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1674(iVar0, bParam0))
		{
		}
		else if (func_176(Global_3145858->f_38736[iVar0]->f_1))
		{
		}
		else
		{
			return Global_3145858->f_38736[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1310()
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1675(iVar0))
		{
		}
		else if (func_176(Global_3145858->f_38736[iVar0]->f_1))
		{
		}
		else
		{
			return Global_3145858->f_38736[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1311(bool bParam0)
{
	if (bParam0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_176(*Global_2097152->f_6035[iVar0]))
		{
		}
		else
		{
			return *Global_2097152->f_6035[iVar0];
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

int func_1312()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_1313(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_1314()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_1315(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

int func_1316(int iParam0)
{
	iVar0 = -1;
	if (func_1676(&Var1, iParam0))
	{
		iVar0 = ((func_1677() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1317(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1318(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -697789102:
		case -260420884:
		case -232478158:
		case 78055447:
		case 195932838:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return true;
		case 1539023636:
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1319(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1071686->f_19550.f_1[iVar0] = { *(Global_1071686->f_19550.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1071686->f_19550 < 32)
	{
		*Global_1071686->f_19550.f_1[Global_1071686->f_19550] = { vVar1 };
	}
	Global_1071686->f_19550 = (Global_1071686->f_19550 - 1);
	if (Global_1071686->f_19550 < 0)
	{
		Global_1071686->f_19550 = 0;
	}
	return 1;
}

int func_1320(int iParam0)
{
	iVar0 = (Global_1071686->f_19550 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1071686->f_19550.f_1[iVar0 + 1]) = { *Global_1071686->f_19550.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1071686->f_19550.f_1[iParam0] = { vVar1 };
	Global_1071686->f_19550++;
	if (Global_1071686->f_19550 > 32)
	{
		Global_1071686->f_19550 = 32;
	}
	return 1;
}

int func_1321(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 394;
		case -2058120606:
			return 194;
		case -2056579774:
			return 464;
		case -2043909922:
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 387;
		case -1939389836:
			return 416;
		case -1932919229:
			return 428;
		case -1925798111:
			return 41;
		case -1914141706:
			return 439;
		case -1906892166:
			return 403;
		case -1882707460:
			return 463;
		case -1861414976:
			return 380;
		case -1852605133:
			return 10;
		case -1848799275:
			return 409;
		case -1847672446:
			return 312;
		case -1842033327:
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case -1749433374:
			return 479;
		case -1749043433:
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 421;
		case -1700452710:
			return 317;
		case -1684974589:
			return 466;
		case -1674179981:
			return 53;
		case -1673998598:
			return 527;
		case -1666278201:
			return 33;
		case -1664435783:
			return 486;
		case -1624627591:
			return 438;
		case -1612662716:
			return 198;
		case -1610966108:
			return 354;
		case -1608141409:
			return 538;
		case -1585840296:
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 434;
		case -1573753524:
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case -1547280108:
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 523;
		case -1462313959:
			return 462;
		case -1455998786:
			return 370;
		case -1447311849:
			return 321;
		case -1445041595:
			return 528;
		case -1442844448:
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 478;
		case -1387772214:
			return 407;
		case -1378911044:
			return 475;
		case -1369678628:
			return 487;
		case -1344601768:
			return 347;
		case -1341750998:
			return 476;
		case -1340339190:
			return 362;
		case -1339871203:
			return 532;
		case -1329135070:
			return 138;
		case -1319875891:
			return 437;
		case -1311865656:
			return 37;
		case -1296807958:
			return 352;
		case -1290997627:
			return 461;
		case -1287894233:
			return 426;
		case -1283202000:
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 382;
		case -1029225159:
			return 104;
		case -1023919011:
			return 431;
		case -1014145132:
			return 273;
		case -1004266677:
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case -941648233:
			return 511;
		case -939420910:
			return 44;
		case -931337253:
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case -911126844:
			return 368;
		case -897750037:
			return 366;
		case -895307590:
			return 500;
		case -895073533:
			return 393;
		case -889906510:
			return 389;
		case -888632790:
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 432;
		case -851626677:
			return 371;
		case -839820438:
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case -800891377:
			return 493;
		case -797689456:
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 372;
		case -729679654:
			return 530;
		case -699277634:
			return 4;
		case -693828600:
			return 355;
		case -683458244:
			return 78;
		case -677920206:
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 512;
		case -632127260:
			return 342;
		case -630295963:
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 471;
		case -591815673:
			return 383;
		case -583127403:
			return 506;
		case -574190021:
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 337;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 515;
		case -492731190:
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case -448554447:
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case -414883443:
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case -381925743:
			return 507;
		case -371827125:
			return 388;
		case -364475655:
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 433;
		case -279765076:
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 516;
		case -209894800:
			return 344;
		case -207792846:
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 430;
		case -108780030:
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case -101740709:
			return 498;
		case -99303535:
			return 165;
		case -90486812:
			return 490;
		case -89829333:
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 508;
		case -75024673:
			return 244;
		case -74031276:
			return 440;
		case -70727482:
			return 452;
		case -63926460:
			return 87;
		case -61411516:
			return 357;
		case -38135693:
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case 64896505:
			return 390;
		case 74872959:
			return 331;
		case 84709454:
			return 453;
		case 93964309:
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 455;
		case 565812320:
			return 447;
		case 582380806:
			return 358;
		case 588987611:
			return 177;
		case 589380360:
			return 340;
		case 618699440:
			return 75;
		case 619839857:
			return 375;
		case 630808005:
			return 126;
		case 640520536:
			return 469;
		case 642824856:
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 483;
		case 723021499:
			return 250;
		case 730069127:
			return 474;
		case 747514327:
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 361;
		case 791041526:
			return 18;
		case 799106423:
			return 454;
		case 803929300:
			return 468;
		case 804063423:
			return 502;
		case 817925178:
			return 227;
		case 826868753:
			return 473;
		case 831940854:
			return 406;
		case 846837291:
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case 883901517:
			return 384;
		case 885203519:
			return 315;
		case 885378256:
			return 378;
		case 885777893:
			return 374;
		case 896725436:
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case 965467037:
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 445;
		case 1032791043:
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case 1126565489:
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 451;
		case 1157309080:
			return 513;
		case 1159471771:
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 480;
		case 1238086793:
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case 1279586666:
			return 448;
		case 1280406542:
			return 441;
		case 1287917122:
			return 386;
		case 1302228510:
			return 348;
		case 1306158345:
			return 199;
		case 1321892118:
			return 356;
		case 1325325699:
			return 420;
		case 1341699707:
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 435;
		case 1521272922:
			return 457;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case 1703398561:
			return 364;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case 1788424349:
			return 444;
		case 1812677765:
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case 1891256113:
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 497;
		case 2051822093:
			return 284;
		case 2068208444:
			return 427;
		case 2068253437:
			return 477;
		case 2077022393:
			return 291;
		case 2079292950:
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 396;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_1322(int iParam0)
{
	iVar0 = func_1678(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1323(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_1324(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1679((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1679(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_325(*Global_1900736->f_1[0]))
	{
		func_720(*Global_1900736->f_1[0], 3);
	}
}

int func_1325(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_488(iParam0, 1)]);
}

int func_1326(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1329(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<16> func_1327(var uParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_1038(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_190() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1328(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1329(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, uParam0, bParam1, &uVar0))
	{
		return false;
	}
	if (!func_343(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1330()
{
	return &Global_3145858 == -504335712;
}

void func_1331(int iParam0, bool bParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		_0xdf631e4bce1b1fc4(iParam0, -1725579161, 0, 1);
	}
	else
	{
		_set_ped_component_disabled(iParam0, -1725579161, 1);
	}
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1332(int iParam0, bool bParam1)
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

bool func_1333(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = func_518(0);
	*uParam1 = { func_761(iParam0, func_760(0), bParam3, 0) };
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

void func_1334(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_985(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1335(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_567(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_497(iParam0, 1399091007))
	{
		func_1680(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1336(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1278(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1681(&Var0, func_760(0));
	}
	if (!func_1279(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1002(iVar14);
	return uVar15;
}

int func_1337(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1682(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_1038(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1019(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1683(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_1684(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_1022(1702063850, &Var65, 1);
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
			func_1023(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_518(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1338(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1682(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_186(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1019(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_69() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1022(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_1023(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_518(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1339(int iParam0, var uParam1)
{
	iVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_1685(uParam1->f_8, iParam0, iVar0, 2048) || func_1685(uParam1->f_8, iParam0, iVar0, 32768)) || func_1685(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_1685(uParam1->f_8, iParam0, iVar0, 4) || func_1685(uParam1->f_8, iParam0, iVar0, 256)) || func_1685(uParam1->f_8, iParam0, iVar0, 65536)) || func_1685(uParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_1685(uParam1->f_8, iParam0, iVar0, 1) || func_1685(uParam1->f_8, iParam0, iVar0, 8)) || func_1685(uParam1->f_8, iParam0, iVar0, 65536)) || func_1685(uParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_1685(uParam1->f_8, iParam0, iVar0, 1) || func_1685(uParam1->f_8, iParam0, iVar0, 16)) || func_1685(uParam1->f_8, iParam0, iVar0, 2)) || func_1685(uParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1685(uParam1->f_8, iParam0, iVar0, 8) || func_1685(uParam1->f_8, iParam0, iVar0, 4096)) || func_1685(uParam1->f_8, iParam0, iVar0, 256)) || func_1685(uParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1340(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1341(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_820(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_820(iParam1, 2, 0, 0);
	return -1;
}

int func_1342(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_820(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1343(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1056(iParam0))
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
		func_1686(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1344(int iParam0)
{
	return func_497(iParam0, 1279601681);
}

bool func_1345(int* iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_1347(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_808(iParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_1687(iParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_16 = iParam1;
	uParam2->f_8 = iParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 1248274121;
	if (!func_1688(iParam0, *uParam2, 541670136, bParam3))
	{
		return false;
	}
	if (_0x9adee485726025d4(iParam1) != 0)
	{
		if (Global_1293346->f_20.f_422 != -1)
		{
		}
		Global_1293346->f_20.f_422.f_1 = iParam1;
		Global_1293346->f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_1346(struct<17> Param0)
{
	iVar0 = Param0.f_16;
	iVar1 = Param0.f_13;
	if (func_1051(iVar0, 773203532, iVar1, 0, 1) > 0)
	{
		func_1361("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		play_sound_frontend("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_1347(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_1689(iParam0))
		{
			return false;
		}
	}
	if (func_1690(&(iParam0->f_6)))
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

struct<16> func_1348(int iParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_761(iParam0, Var0.f_4, bParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = bParam5;
	if (bParam7)
	{
		Var0.f_15 = func_1038(iParam0, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_190() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1349(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_985(iParam1);
		iVar5 = func_1691(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (_item_database_get_has_slot_info(iVar1, iVar0, &bVar2))
			{
				if (func_1062(iParam0, iVar1, bVar2))
				{
					*uParam4 = { func_797(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_761(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = bVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_518(0);
			Var37 = { func_797(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_761(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = _0xe843d21a8e2498aa(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (_0xcd9a485f2b383b44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_985(Var6.f_4);
					iVar5 = _item_database_get_has_slot_count(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (_item_database_get_has_slot_info(iVar1, iVar0, &bVar2))
						{
							if (func_1062(iParam0, iVar1, bVar2))
							{
								if (func_1007(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = bVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_1350(int iParam0)
{
	iVar0 = func_567(iParam0);
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		return true;
	}
	return false;
}

bool func_1351(int iParam0)
{
	return func_497(iParam0, 1282106666);
}

bool func_1352(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (!func_1347(iParam0, 0))
	{
		return false;
	}
	if (!func_819(iParam0, iParam1, Param2, bParam6, bParam10, bParam7, bParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_1348(iParam1, Param2, bParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	*bParam8 = { Var0 };
	if (!func_1692(iParam0, &Var0, 2113164098, bParam9, bParam11))
	{
		return false;
	}
	return true;
}

bool func_1353(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_1347(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_604(iParam1, bParam10, 1, bParam12, 1);
	}
	if (!func_1693(iParam0, iParam1, Param2, bParam6, bParam10, bParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_8 = iParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 1248274121;
	Var0.f_4 = { Param2 };
	Var0.f_11 = bParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_1038(iParam1, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_190() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_1360(iParam0, Var0, 2113164098, bParam9, bParam12))
	{
		return false;
	}
	return true;
}

bool func_1354(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_1019(0))
	{
		return func_1694(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_186(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_518(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

void func_1355(int* iParam0)
{
	if (_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		_cashinventory_transaction_delete(*iParam0);
		func_820(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

int func_1356(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 51;
		case -2139497371:
			return 76;
		case -2073547330:
			return 48;
		case -2066076661:
			return 98;
		case -2048056274:
			return 25;
		case -2038873145:
			return 54;
		case -1988984077:
			return 42;
		case -1976230089:
			return 68;
		case -1948083328:
			return 113;
		case -1915486054:
			return 36;
		case -1914604474:
			return 58;
		case -1894256235:
			return 8;
		case -1882615108:
			return 80;
		case -1879729569:
			return 4;
		case -1827447245:
			return 22;
		case -1816811601:
			return 75;
		case -1812870325:
			return 104;
		case -1672929718:
			return 107;
		case -1604265010:
			return 21;
		case -1549775456:
			return 20;
		case -1533288167:
			return 83;
		case -1461871483:
			return 72;
		case -1327698122:
			return 55;
		case -1309844859:
			return 78;
		case -1271310569:
			return 71;
		case -1239377811:
			return 73;
		case -1221836150:
			return 92;
		case -1190908814:
			return 44;
		case -1169075737:
			return 47;
		case -1157194180:
			return 34;
		case -1151085798:
			return 35;
		case -1019271530:
			return 14;
		case -944178516:
			return 30;
		case -937655290:
			return 57;
		case -936508922:
			return 106;
		case -907971236:
			return 69;
		case -875426853:
			return 2;
		case -863017340:
			return 96;
		case -835345303:
			return 61;
		case -832908671:
			return 52;
		case -759061492:
			return 23;
		case -692335380:
			return 87;
		case -596510485:
			return 100;
		case -585098035:
			return 50;
		case -520556863:
			return 89;
		case -378561682:
			return 64;
		case -377574959:
			return 37;
		case -367868014:
			return 19;
		case -353010695:
			return 86;
		case -350556716:
			return 85;
		case -102827824:
			return 38;
		case -102545856:
			return 79;
		case -82191741:
			return 91;
		case 0:
			return 116;
		case 7562841:
			return 109;
		case 41932468:
			return 39;
		case 72801698:
			return 82;
		case 104820669:
			return 81;
		case 175025255:
			return 97;
		case 205166155:
			return 59;
		case 214785091:
			return 46;
		case 229544920:
			return 93;
		case 253727941:
			return 70;
		case 266787856:
			return 95;
		case 358997942:
			return 67;
		case 530671939:
			return 18;
		case 558731558:
			return 62;
		case 693005399:
			return 11;
		case 709801630:
			return 102;
		case 713508039:
			return 90;
		case 744226541:
			return 17;
		case 745945503:
			return 99;
		case 757105507:
			return 3;
		case 787316203:
			return 5;
		case 790678034:
			return 12;
		case 805845691:
			return 45;
		case 911414965:
			return 28;
		case 978801228:
			return 77;
		case 992695664:
			return 56;
		case 1062881804:
			return 29;
		case 1105471824:
			return 24;
		case 1128086492:
			return 112;
		case 1131758526:
			return 66;
		case 1139025222:
			return 111;
		case 1183803081:
			return 15;
		case 1190538002:
			return 103;
		case 1250977037:
			return 110;
		case 1261138928:
			return 7;
		case 1261539922:
			return 43;
		case 1285391378:
			return 10;
		case 1306457250:
			return 65;
		case 1314299724:
			return 115;
		case 1338756401:
			return 16;
		case 1400887301:
			return 31;
		case 1423490462:
			return 94;
		case 1437199060:
			return 40;
		case 1440632655:
			return 33;
		case 1472024063:
			return 49;
		case 1504223919:
			return 88;
		case 1562378696:
			return 108;
		case 1639899405:
			return 74;
		case 1706052688:
			return 9;
		case 1741725206:
			return 26;
		case 1747661667:
			return 1;
		case 1753192824:
			return 105;
		case 1780028424:
			return 60;
		case 1865339861:
			return 32;
		case 1901448492:
			return 27;
		case 1921351553:
			return 63;
		case 1961205920:
			return 53;
		case 1985273028:
			return 41;
		case 1993361168:
			return 114;
		case 1995043222:
			return 101;
		case 2031132011:
			return 13;
		case 2041846130:
			return 84;
		case 2069893421:
			return 0;
		case 2129028479:
			return 6;
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

struct<2> func_1357(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_1358(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

bool func_1359(int* iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((iParam18 != 2113164098 && iParam18 != -1318406457) && iParam18 != -1230526146)
	{
		return false;
	}
	if (!func_1695(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_1696(iParam0, iParam18))
	{
		return false;
	}
	if (func_1697(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_1698(iParam0, bParam19);
}

bool func_1360(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17, bool bParam18, bool bParam19)
{
	if ((((iParam17 != 2113164098 && iParam17 != -1318406457) && iParam17 != -1230526146) && iParam17 != 1702063850) && iParam17 != -1406934746)
	{
		return false;
	}
	if (!func_1695(iParam17, &uParam1, bParam19))
	{
		return false;
	}
	if (!func_1696(iParam0, iParam17))
	{
		return false;
	}
	if (func_1340(*iParam0, iParam17, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_1698(iParam0, bParam18);
}

void func_1361(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

int func_1362(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!_0x2bae4880dcdd560b(iParam0, iParam1))
	{
		return 0;
	}
	return _0x2e1cdc1ff3b8473e(iParam0, iParam1);
}

bool func_1363(int iParam0)
{
	return func_985(iParam0) == 1868067663;
}

void func_1364(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_596(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_596(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_596(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_596(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_596(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_596(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_596(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_596(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_596(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_596(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_596(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_596(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_596(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_596(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_596(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_596(66), Param10.f_15);
}

bool func_1365(struct<2> Param0)
{
	return func_160(Param0, 5, 8);
}

int func_1366(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_1368(iVar0, 1, 0);
		if (!func_1343(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_1369(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1018(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1367(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_1368(iVar0, 0, 1);
		if (!func_1343(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_1370(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1018(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_1368(int iParam0, bool bParam1, bool bParam2)
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

bool func_1369(int iParam0)
{
	return func_985(iParam0) == 1946043663;
}

bool func_1370(int iParam0)
{
	return func_985(iParam0) == -126813555;
}

bool func_1371(int iParam0, bool bParam1, var uParam2)
{
	iVar1 = _0x7a35a72a692be9db(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x3a0b667abff87f6e(iParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1372(int iParam0, bool bParam1)
{
	if (!func_497(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_497(iParam0, -1090933859))
		{
			return func_806(iParam0, 1) != 0;
		}
		if ((func_605(iParam0, -915411861, 0) || func_605(iParam0, 600942249, 0)) || func_605(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_1373(int iParam0, bool bParam1)
{
	iVar0 = func_1699(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_817(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_1700(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1374(char* sParam0)
{
	Global_1915715->f_22470 = func_1166(sParam0, 10000, 0, 0, 0, 1);
}

int func_1375(int* iParam0, bool bParam1)
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
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_794(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1376(int iParam0)
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

bool func_1377(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	if (!func_1701(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_1019(0)) && !func_1016());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && func_1091(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (&Var0[iVar34] == 773203532 && func_1376(iVar32))
			{
			}
			else
			{
				iVar33 = func_1018(&(Var0[iVar34]), 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { *Var0[iVar34] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_1378(int iParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_805(iParam0))
	{
		return func_1700(func_806(iParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_1017(iParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_1019(0)) && !func_1016());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * bParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_1091(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_1376(iVar32)))
			{
			}
			else
			{
				iVar36 = func_1702(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_1703(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_1018(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_1704(&(Var0[iVar34])) || func_1705(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_1706(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_1707(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_1708(7, &(Var0[iVar34]))) + func_1709(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

void func_1379(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1710(&(uParam0->f_4));
}

char* func_1380(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1711(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

int func_1381(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	Var0.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var0) || Var0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1382()
{
	_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_115, "");
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_116, false);
}

void func_1383()
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_111, 0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_113, false);
}

void func_1384()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_118, false);
}

bool func_1385(var uParam0, int iParam1)
{
	func_948(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_953(Global_1952637->f_83[iVar1]->f_9, 0);
	iVar3 = func_953(Global_1952637->f_83[iVar0]->f_9, 0);
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
		if (func_943() == 24043185)
		{
			return false;
		}
	}
	else
	{
		uParam0->f_1[iVar0] = iVar3;
	}
	*uParam0 = iParam1;
	return true;
}

bool func_1386(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1712(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1076(2, iParam1))
	{
		func_1713(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1387(int iParam0)
{
	func_315(iParam0, 8, 6);
}

void func_1388(int iParam0)
{
	Global_1952637->f_1057 = iParam0;
}

void func_1389(var uParam0)
{
	Global_1572887->f_266.f_28 = { *uParam0 };
}

void func_1390(int iParam0)
{
	func_78(&(Global_1572887->f_266.f_63), iParam0);
}

void func_1391(int iParam0)
{
	Global_1572887->f_266.f_67 = iParam0;
}

void func_1392(int iParam0)
{
	Global_1572887->f_266 = iParam0;
}

struct<2> func_1393(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636), func_512(iParam1));
			break;
		case 3:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_602), func_512(iParam1));
			break;
		case 4:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_2104), func_512(iParam1));
			break;
		case 5:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_12606), func_512(iParam1));
			break;
		case 6:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_12908), func_512(iParam1));
			break;
		case 7:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_15910), func_512(iParam1));
			break;
		case 8:
			Var0.f_1 = func_1714(iParam0, &(Global_1071686->f_636.f_16512), func_512(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_376();
	}
	return Var0;
}

bool func_1394(int iParam0)
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

bool func_1395(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_325(*Global_1051213) && !func_722(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_1552(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1715(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_1629())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_325(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

int func_1396(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_1397(iParam0, 16))
	{
		return 1;
	}
	if (!func_325(Param1))
	{
		return 0;
	}
	else if (func_477(Param1))
	{
		return 0;
	}
	else if (func_478(Param1))
	{
		return 0;
	}
	func_955(Param1);
	func_1092(iParam0, 16);
	return 1;
}

bool func_1397(int iParam0, int iParam1)
{
	return func_194(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

struct<2> func_1398()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_721(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_721(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_1399()
{
	return (func_1716() != 0 || func_1717(1));
}

int func_1400(int iParam0)
{
	if (func_1718())
	{
		return 0;
	}
	if (!func_1399())
	{
		return 0;
	}
	if (func_1719())
	{
		func_1720(2);
	}
	else
	{
		func_1720(1);
	}
	func_1721(iParam0);
	return 1;
}

void func_1401(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_325(Param0))
	{
		return;
	}
	if (!func_477(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1722(Param0);
	}
	if (!func_325(func_721(0)))
	{
		func_720(Param0, 3);
		func_723(bParam3);
		func_724(!bParam4);
		func_1723(Param0, -1);
		if (bParam2 && !func_1724(2))
		{
			func_966(&Global_0, 1024);
		}
		func_726(1);
	}
	else
	{
		func_1723(Param0, -1);
		func_720(Param0, 4);
		func_1725(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_728(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1726(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_1402(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_1727(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_342(Param0);
	Var0.f_3 = iParam3;
	func_1728(&Var0, bParam2, iParam4);
	return 1;
}

void func_1403(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_1404(int iParam0, int iParam1)
{
	iVar0 = func_1096(iParam0);
	if (iVar0 == -785841056)
	{
		func_1358(func_1357(1511238709, -785841056), 1);
	}
	else
	{
		func_1358(func_1357(1511238709, -1666944573), 1);
	}
	if (func_1729(iParam0, iParam1, &iVar1))
	{
		func_1358(func_1357(1511238709, iVar1), 1);
	}
}

void func_1405(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_69() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_1730(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_1731(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_1731(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_1406()
{
	if (network_is_player_active(player_id()))
	{
		if (func_1089(1048576, player_id()) || Global_1296851->f_2.f_1 == 2)
		{
			func_1732();
		}
	}
	if (_get_wanted_intensity_for_player(Global_1296859->f_10) > 0)
	{
		if (func_1641())
		{
			func_1733();
		}
		func_1734();
	}
}

void func_1407(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_325(Global_1109340->f_193[&Global_1296859]->f_2.f_1))
	{
		return;
	}
	if (Global_1109340->f_193[&Global_1296859]->f_2 != -1 && Global_1109340->f_193[&Global_1296859]->f_2 != iParam0)
	{
		return;
	}
	Global_1109340->f_193[&Global_1296859]->f_2 = iParam0;
	Global_1109340->f_193[&Global_1296859]->f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109340->f_193[&Global_1296859]->f_2.f_3 = iParam3;
	}
	iVar0 = func_1735(Global_1296859->f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1736(6);
	}
}

bool func_1408()
{
	return Global_263042[&Global_1296859] > 2;
}

bool func_1409(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 8:
			return bParam1;
		case 10:
			return bParam1;
		case 9:
			return bParam1;
		case 4:
			return bParam1;
		case 5:
			return bParam1;
		case 6:
			return bParam1;
		case 7:
			return bParam1;
		default:
			break;
	}
	return false;
}

bool func_1410(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return false;
	}
	return true;
}

bool func_1411(int iParam0)
{
	if (!_unlock_is_unlocked(956799153))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return _unlock_is_unlocked(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (_unlock_is_unlocked(1612825071) && _unlock_is_unlocked(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_1412(int iParam0, bool bParam1, bool bParam2)
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

bool func_1413(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return true;
	}
	return false;
}

int func_1414(int iParam0)
{
	if (!func_1432(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_1737())
	{
		return 0;
	}
	if (!func_1738())
	{
		func_1739();
		return 0;
	}
	if (func_1740(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (func_1741())
	{
		func_1739();
		return 0;
	}
	if (!get_safe_coord_for_ped(Global_35, false, &uVar0, 16))
	{
		func_1739();
		return 0;
	}
	iVar3 = _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id()));
	switch (iParam0)
	{
		case 4:
			if (iVar3 > 2 && func_1742(1, 3))
			{
				return 1;
			}
			break;
		case 5:
			if (iVar3 > 1 && func_1742(1, 2))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1415()
{
	if (!func_1432(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_1737())
	{
		return 0;
	}
	if (func_1740(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_1743())
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1)
	{
		return 1;
	}
	if (!func_1742(1, 2))
	{
		return 0;
	}
	return 0;
}

int func_1416()
{
	if (!func_1745(func_1744(7)))
	{
		return 0;
	}
	if (_0x2f7eb8b6f6afe79c(1) < 2)
	{
		return 0;
	}
	return 1;
}

int func_1417(int iParam0)
{
	if (iParam0 == 8)
	{
		func_1746(&(Global_1108365->f_935), 1);
	}
	if (!func_1745(func_1744(iParam0)))
	{
		return 0;
	}
	if (!func_1432(Global_1296859->f_15))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) < 2)
	{
		return 0;
	}
	if (!func_1742(1, 2))
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar2 = int_to_playerindex(iVar0);
			if ((!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
			{
			}
			else
			{
				if (func_77((*Global_1196567)[iVar0]->f_9, 1))
				{
					iVar1++;
				}
				if (iVar1 > 1)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar1 < 2)
				{
					func_1747(&(Global_1108365->f_935), 1);
					return 0;
				}
				func_1746(&(Global_1108365->f_935), 1);
				return 1;
			}
		}
	}
}

int func_1418(var uParam0, struct<21> Param1)
{
	if (!func_1748(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_1419(float fParam0, bool bParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
		{
		}
		else if (!bParam1 && _0x424b17a7dc5c90bc(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) != iVar0)
		{
		}
		else
		{
			_0x31010318ba9897ac(fParam0, iVar1);
		}
		iVar2++;
	}
}

bool func_1420(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	switch (func_1749(Var0))
	{
		case 1:
			func_1750(iParam0);
			break;
		case 2:
			func_1751(iParam0);
			break;
		case 3:
			func_1752(iParam0);
			break;
		case 4:
			func_1753(iParam0);
			break;
		case 5:
			func_1754(iParam0);
			break;
		default:
			return false;
	}
	func_255();
	return true;
}

bool func_1421(int iParam0)
{
	return false;
}

struct<35> func_1422(int iParam0)
{
	Var4.f_8 = -1;
	Var4.f_8.f_1 = -1;
	Var4.f_16.f_12 = -1;
	Var4.f_16.f_12.f_1 = -1;
	Var4.f_16.f_14 = 255;
	Var4.f_16.f_15 = 255;
	Var4.f_16.f_1 = 255;
	Var4.f_16.f_2 = vVar0.z;
	func_730(&(Var4.f_8));
	if (func_1755() == iParam0)
	{
		func_1756();
	}
	if (Global_1071686->f_16 > 0)
	{
		Global_1071686->f_16 = (Global_1071686->f_16 - 1);
		Var4 = { *Global_1071686->f_16.f_5[iParam0] };
		Global_1071686->f_16.f_5[iParam0] = 0;
	}
	iVar39 = iParam0;
	iVar39 = iParam0;
	while (iVar39 <= 8)
	{
		if (func_1755() == iVar39 + 1)
		{
			func_1757(iVar39);
		}
		*Global_1071686->f_16.f_5[iVar39] = { *(Global_1071686->f_16.f_5[iVar39 + 1]) };
		Global_1071686->f_16.f_5[iVar39 + 1] = 0;
		iVar39++;
	}
	return Var4;
}

bool func_1423(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	switch (func_1749(Var0))
	{
		case 1:
			func_1424(iParam0);
			return true;
		case 3:
			func_1758(iParam0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1424(int iParam0)
{
	Var11 = { func_1080(iParam0) };
	iVar46 = _0x901e0dc25080c8b9(Var11.f_16.f_14);
	switch (Var11.f_16.f_4)
	{
		case 69:
			Var0.f_4 = 2;
			Var0.f_5 = iVar46;
			Var0.f_6 = Var11.f_16.f_7;
			func_1759(&Var0, Var11.f_16.f_14);
			return true;
		case 70:
			return true;
		case 72:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1425(int iParam0)
{
	return false;
}

bool func_1426(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_1760(iParam0) && func_77((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

int func_1427(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1426(iParam0, 32, iVar0) && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1428(int iParam0, bool bParam1)
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

bool func_1429()
{
	if (func_1761(1))
	{
		return false;
	}
	return true;
}

var func_1430(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_560(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

char* func_1431(int iParam0, bool bParam1, int iParam2)
{
	sVar0 = "Invalid Posse";
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return sVar0;
	}
	iVar1 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar1))
	{
		if (func_1432(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219->f_17 != (*Global_1100469)[iVar2]->f_17)
				{
					sVar0 = func_1762(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = func_1762(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_854(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (_0xc084ff658b2e61da(&Var3) - 1))
				{
					if (_0xc084ff658b2e81da(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_282(func_1763(Var10.f_1), 109029619);
						}
						else
						{
							sVar0 = func_282(func_1763(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_1762(iParam0, bParam1, iParam2);
				}
				if (func_1764(func_1763(Var10.f_1)))
				{
					if (bParam1 == 1 && func_1765(iVar1, sVar0))
					{
						sVar0 = func_1762(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_1762(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_1762(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

bool func_1432(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_854(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

int func_1433(int iParam0)
{
	if (Global_1194053->f_1 == 6 || Global_1194053->f_1 == 7)
	{
		return 1;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)) && _0x7933754f260b428a(iParam0) > 0)
	{
		return 0;
	}
	Var0 = { func_854(iParam0) };
	Var7.f_18 = 10;
	iVar106 = 0;
	while (iVar106 <= (_0xc084ff658b2e61da(&Var0) - 1))
	{
		if (_0xc084ff658b2e71da(&Var0, iVar106, &Var7))
		{
			if (Var7.f_9 == 1 && Var7 != 0)
			{
				if (func_1766(Var7))
				{
					func_1767(2);
					return func_1768(Var7, 0);
				}
				else if (Var7.f_17 < 10)
				{
					Global_1194053->f_14 = { Var0 };
					Global_1194053->f_14.f_7 = Var7;
					Global_1194053->f_14.f_9 = _0x901e0dc25080c8b9(iParam0);
					func_1769(6);
					func_1770(32);
					func_1767(2);
					if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
					{
						_0x0a04a07bc3074edb(_0x424b17a7dc5c90bc(player_id()));
					}
					return 1;
				}
			}
		}
		iVar106++;
	}
	return 0;
}

void func_1434(int iParam0)
{
	if (_0xd6f6acf4392187fb(iParam0) && iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		func_1767(2);
		func_1771(2, 1);
		return;
	}
	if ((Global_1194053->f_2 == 3 || Global_1194053->f_2 == 4) || Global_1194053->f_2 == 5)
	{
		return;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		_0x0a04a07bc3074edb(_0x424b17a7dc5c90bc(player_id()));
	}
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		_0xc08bff658b2e51da(0);
	}
	Global_1194053->f_14.f_7 = 0;
	Global_1194053->f_14.f_9 = iParam0;
	func_1767(2);
	func_1772(3);
}

bool func_1435(int iParam0)
{
	return func_194(Global_1298378->f_156, iParam0);
}

int func_1436(int iParam0)
{
	if (func_1773(iParam0))
	{
		return Global_1298166->f_201.f_1[iParam0]->f_3;
	}
	return 0;
}

void func_1437(int iParam0)
{
	func_195(&(Global_1298378->f_156), iParam0);
}

void func_1438(int iParam0)
{
	Global_1298166->f_200 = iParam0;
}

void func_1439(int iParam0)
{
	Global_1298166->f_1 = iParam0;
}

void func_1440()
{
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1298166->f_3.f_2 - 1))
	{
		*Global_1298166->f_3.f_2[iVar4] = { Var0 };
		iVar4++;
	}
	Global_1298166->f_3.f_1 = 0;
	Global_1298166->f_3 = 0;
}

int func_1441()
{
	return Global_1940311->f_242.f_1185;
}

int func_1442()
{
	return Global_1138962->f_137;
}

void func_1443()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_1444(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_1775(bParam2, func_1774(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_1445(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

int func_1446()
{
	return Global_1940311->f_1433.f_4189.f_2083;
}

void func_1447(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1468(&Var0);
	*uParam0 = { Var0 };
}

int func_1448(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

bool func_1449()
{
	return (func_1776(0) && func_1776(5));
}

int func_1450(int iParam0)
{
	if (!func_1449())
	{
		return -1;
	}
	if (!func_1136(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1139381->f_4796.f_34[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1451(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_1452(var uParam0)
{
	if (!func_1777(*uParam0))
	{
		return false;
	}
	if (func_1455(uParam0))
	{
		return true;
	}
	return _unlock_is_unlocked(uParam0->f_2);
}

int func_1453(var uParam0)
{
	if (!func_1136(*uParam0))
	{
		return -1;
	}
	if (!func_602(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_1778(iVar1);
		Var2 = { func_761(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1454(var uParam0)
{
	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_1136(*uParam0))
	{
		return -1;
	}
	if (!func_602(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_1778(iVar2);
		Var3 = { func_761(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
		}
		else
		{
			iVar8 = func_1779(iVar2);
			iVar0 = func_802(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1455(var uParam0)
{
	return func_1780(uParam0->f_2, 1);
}

int func_1456(var uParam0)
{
	if (!func_1136(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1781(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1457(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1458(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_1782(uParam0));
}

int func_1459(var uParam0)
{
	return 0;
}

var func_1460(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_1461(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1783(uParam0)) && func_811(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1462(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1783(uParam0)) && func_812(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1463(var uParam0)
{
	return (((!uParam0->f_20 && func_1783(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_1464(var uParam0)
{
	return 0;
}

var func_1465(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_1466(int iParam0, int iParam1)
{
	return func_794(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1467(int iParam0, int iParam1)
{
	iVar0 = func_1778(iParam0 + 1);
	return func_1466(iVar0, iParam1);
}

void func_1468(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_1469(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	if (!func_1136(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&(*Global_1145091)[iVar1]->f_10[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1470(var uParam0, int iParam1)
{
	return func_77(*uParam0, iParam1);
}

char* func_1471(var uParam0)
{
	return _create_var_string(42, "MP_ABILITY_CARD_DISPLAY_STRING", _create_var_string(0, uParam0->f_8), _create_var_string(2, func_1784(uParam0->f_13)));
}

char* func_1472(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1785(uParam46->f_13))
	{
		return "NULL";
	}
	return _create_var_string(0, Param0.f_9[uParam46->f_13]->f_11);
}

void func_1473(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2086 = iParam0;
}

void func_1474(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_12, iParam0);
}

bool func_1475()
{
	return func_1446() == 0;
}

void func_1476(int iParam0, bool bParam1)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_1142(iParam0, 1);
	if (!func_867(iVar34, &Var0, 0, -1))
	{
		func_1447(&Var0);
	}
	func_1786(iParam0, Global_1940311->f_1433.f_4189.f_1579[iParam0], Var0);
	if (bParam1 && func_1787(iParam0))
	{
		func_1788(&(Global_1940311->f_1433.f_4189.f_1985), &Var0, iParam0);
	}
}

void func_1477(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	iVar1 = &(*Global_1145091)[iVar0]->f_10[iParam1];
	Var2.f_7 = 1;
	Var2.f_13 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_32 = -1;
	Var2.f_13 = (*Global_1145091)[iVar0]->f_10[iParam1]->f_1;
	if (!func_867(iVar1, &Var2, 1, -1))
	{
		func_1447(&Var2);
	}
	func_1789(iParam1, Global_1940311->f_1433.f_4189.f_1579[iParam1], Var2, (*Global_1145091)[iVar0]->f_10[iParam1]->f_2);
	if (bParam2 && func_1787(iParam1))
	{
		func_1788(&(Global_1940311->f_1433.f_4189.f_1985), &Var2, iParam1);
	}
}

bool func_1478(int iParam0)
{
	iVar0 = func_567(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

int func_1479(var uParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_518(bParam2), uParam0, bParam1);
}

int func_1480(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1790(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1481(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381->f_11.f_1562[iVar0]->f_2)
		{
			return &(Global_1139381->f_11.f_1562[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_1482(int iParam0)
{
	if (iParam0 == Global_1940311->f_1433.f_4189.f_2085)
	{
		return false;
	}
	Global_1940311->f_1433.f_4189.f_2085 = iParam0;
	return true;
}

void func_1483(int iParam0)
{
	if (iParam0 == 0)
	{
		func_1791(0);
	}
	else
	{
		func_1791(func_1792(iParam0));
	}
}

int func_1484(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 304794100;
		case 2:
			return 1467455271;
		case 3:
			return 1272538178;
		case 4:
			return -1794176813;
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

char* func_1485(int iParam0)
{
	switch (iParam0)
	{
		case 304794100:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
		case 1467455271:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
		case 1272538178:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
		case -1794176813:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
		default:
			break;
	}
	return "NULL";
}

void func_1486(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_1433.f_4189.f_36);
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar35 = 0;
	while (iVar35 < 35)
	{
		iVar34 = &Global_1139381->f_11.f_1562.f_1611[iVar35];
		if (!func_867(iVar34, &Var0, 2, -1))
		{
		}
		else if (!func_1777(Var0))
		{
		}
		else if (Var0.f_33)
		{
		}
		else if (!func_1136(Var0))
		{
		}
		else if (iParam0 != Var0.f_1)
		{
		}
		else
		{
			_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_4189.f_36, iVar35, "ability_card", &(Global_1940311->f_1433.f_4189.f_37[func_1448(iVar34, 1)]));
		}
		iVar35++;
	}
}

void func_1487(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1793(uParam0, &uParam1);
}

bool func_1488(int iParam0)
{
	return func_1794() == iParam0;
}

void func_1489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1793(uParam0, &uParam1);
	_databinding_write_data_string(uParam0->f_45, func_1795(&uParam1));
	_databinding_write_data_string(uParam0->f_47, func_1796(&uParam1));
	_databinding_write_data_bool(uParam0->f_46, func_1797(&uParam1));
	_databinding_write_data_bool(uParam0->f_48, func_1798(&uParam1));
}

void func_1490()
{
	Global_1298378->f_1 = Global_1071686->f_28448[50]->f_3;
	Global_1298378->f_1.f_1 = 0;
	Global_1298378->f_1.f_2 = 0;
	Global_1298378->f_1.f_3 = 0;
	Global_1298378->f_1.f_4 = 0;
}

int func_1491(int iParam0)
{
	if (func_497(iParam0, 1573112293))
	{
		return func_1799(iParam0);
	}
	if (func_1800(iParam0))
	{
		return func_1801();
	}
	switch (func_985(iParam0))
	{
		case -77448735:
			if (func_1802(iParam0))
			{
				return func_1799(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_1799(iParam0);
		case -1520388130:
		case 1802292908:
			return func_1803();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_1804();
		case -525676072:
			return func_1804();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_1805();
			}
			return func_1806();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_1807();
			}
			else
			{
				return func_1808();
			}
			break;
		case -854348463:
			return func_1809();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_1810();
		default:
			if (func_602(iParam0, 0))
			{
				if (func_497(iParam0, 1919582297))
				{
					return func_1811();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_1812();
				}
				else if (iParam0 == -1516555556)
				{
					return func_1813();
				}
				else if (func_497(iParam0, 1147021565))
				{
					return func_1814();
				}
			}
			return func_1815();
	}
	return func_1815();
}

bool func_1492(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_69() == 0)
	{
		if (func_1816(131072))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 1))
	{
		if (func_1816(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_77(iParam1, 2) && func_1816(32))
	{
		return false;
	}
	if (!func_77(iParam1, 4))
	{
		if (func_1816(4096))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 8) && func_1816(512))
	{
		return false;
	}
	if (!func_77(iParam1, 512) && !func_1817(bParam0))
	{
		return false;
	}
	if (!func_77(iParam1, 262144) && !func_1818(bParam0, func_77(iParam1, 524288)))
	{
		return false;
	}
	if (!func_77(iParam1, 64) && !func_1819(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_77(iParam1, 128))
	{
		if (func_1820(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_1166("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_77(iParam1, 16))
	{
		if (func_1821(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_1822(iVar0, 1))
			{
				if (bParam0)
				{
					func_1166("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_77(iParam1, 256) && func_1816(8192))
	{
		return false;
	}
	if (!func_77(iParam1, 1024) && func_1816(65536))
	{
		if (bParam0)
		{
			func_1166("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_77(iParam1, 2048))
	{
		if (func_1816(32768))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 4096))
	{
		if (func_1816(16384))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 8192))
	{
		if (!func_1816(16))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 67108864))
	{
		if (!func_1816(268435456))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 16384))
	{
		if (func_1816(256))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 32768))
	{
		if (func_1823())
		{
			if (bParam0)
			{
				func_1166("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_77(iParam1, 131072))
	{
		if (!func_1816(524288))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 65536))
	{
		if (!func_1816(262144))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 1048576))
	{
		if (!func_1816(2097152))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 2097152))
	{
		if (!func_1816(8388608))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 4194304))
	{
		if (!func_1816(16777216))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 8388608))
	{
		if (func_1816(33554432))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 16777216))
	{
		if (func_1816(67108864))
		{
			return false;
		}
	}
	if (!func_77(iParam1, 33554432))
	{
		if (func_1816(134217728))
		{
			return false;
		}
	}
	if (func_1816(64))
	{
		return false;
	}
	else if (func_1816(128))
	{
		return false;
	}
	else if (func_1816(1048576))
	{
		return false;
	}
	else if (func_1816(4))
	{
		return false;
	}
	if (!func_77(iParam1, 134217728))
	{
		if (func_1824(256))
		{
			return false;
		}
	}
	return true;
}

bool func_1493()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return true;
		}
	}
	return false;
}

bool func_1494(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_567(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_1825(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1826(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1018(iParam0, 0, 0, 0) >= iParam1;
}

bool func_1495(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

int func_1496()
{
	return Global_1915715->f_22504.f_5;
}

char* func_1497()
{
	iVar0 = func_1496();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_721(0) };
			if (!func_325(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_1827(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_1828(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_1763(func_1829(iVar3, 461218520));
	}
	return "";
}

void func_1498(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

int func_1499(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_1830(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1500(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1831(iParam0))
	{
		return 1;
	}
	if (!func_1832(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392->f_48[iParam0]->f_17)
	{
		if (bParam2 || Global_1211392->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_1833(iParam0))
	{
		return 3;
	}
	if (func_1834(iParam0) && !func_1835())
	{
		return 4;
	}
	return 0;
}

bool func_1501(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_1502(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_1502(int iParam0, int iParam1)
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

bool func_1503()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_1504(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_1836(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_1505(int iParam0)
{
	iVar0 = 406178289;
	switch (func_1837())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_497(iParam0, 1573112293))
		{
			func_1839(func_1838(iParam0), 1, 1);
		}
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1506(int iParam0)
{
	iVar0 = 16939881;
	switch (func_1837())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1507(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_1837())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1508(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_1837())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1509(int iParam0)
{
	iVar0 = -362580870;
	switch (func_1837())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1510(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_1837())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1511(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_1837())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1512(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_1837())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1513(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_1837())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1514(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_1837())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1515(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_1837())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1516(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_1837())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1840(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1517(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_1837())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_1840(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_1841(iParam0);
			func_1842(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

void func_1518(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_1837())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_1840(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_1841(iParam0);
			func_1842(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_1841(iParam0);
		func_1842(iParam0, 1, 0, 562618531);
	}
}

bool func_1519(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1520(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1521(int iParam0)
{
	if (func_1519(iParam0, 1))
	{
		func_1843(1);
	}
}

int func_1522(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

bool func_1523()
{
	return Global_1952637->f_3484;
}

bool func_1524(int iParam0)
{
	if (func_1844())
	{
		return false;
	}
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (!func_1494(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_1525(int iParam0)
{
	return func_1845(iParam0);
}

int func_1526(int iParam0, int iParam1)
{
	bVar3 = func_1846(iParam0);
	if (func_985(iParam0) == -525676072 || func_497(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1847(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1848();
			}
			else
			{
				iVar0 = func_1849();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_1850();
		}
		else
		{
			iVar0 = func_1851();
		}
	}
	else if (func_1852(&iVar2))
	{
		if (func_497(iVar2, -1303648999) || func_985(iVar2) == -525676072)
		{
			iVar0 = func_1848();
		}
		else
		{
			iVar0 = func_1849();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1850();
	}
	else
	{
		iVar0 = func_1851();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_1527(int iParam0, bool bParam1)
{
	return func_1853(iParam0, 0) < func_1854(iParam0, bParam1);
}

bool func_1528(int iParam0)
{
	return func_1855(iParam0, &uVar0);
}

void func_1529(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_985(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_497(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_497(iParam0, 160827531))
			{
				bVar1 = func_1856(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_1857();
	if (func_1858(iVar0) || (iVar0 != -999503751 && func_497(iParam0, -166674229)))
	{
		_0x766315a564594401(func_518(bParam5), iParam0, 0);
	}
	func_1172(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_1859(1, iParam0);
	}
	if (bParam2)
	{
		func_284(0, 0);
	}
}

int func_1530(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_943();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_1531(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_1860(iParam0, iParam1))
	{
		func_1861(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_1532(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_492(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_1533(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1077();
	if (iParam2 == 39)
	{
		Var0 = { func_797(iParam0, 1, 0) };
		iParam2 = func_488(func_1532(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_152(32768) && iParam2 == 10)
	{
		func_1387(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_1281(iParam0, 1))
	{
		func_1862(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_949(iParam2);
	}
	func_494(iParam2, iVar5);
	func_1863(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_1863(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_954(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_1864(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_315(func_492(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1534(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_1865(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_1535(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_797(iParam0, bParam2, 0) };
	if (func_1281(iParam0, 0))
	{
		iVar9 = func_990(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_797(iVar9, bParam2, 0) };
			Var0 = { func_761(iVar9, Var4, Var4.f_4, bParam2) };
			return func_1354(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_761(iParam0, Var4, Var4.f_4, bParam2) };
	return func_1354(Var0, iParam1, bParam2);
}

int func_1536(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_488(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1952637->f_1675.f_1[iVar1] == &Global_1952637->f_83[iVar1] || &Global_1952637->f_1556.f_1[iVar1] == &Global_1952637->f_83[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1537(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1538(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_1539(int iParam0)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1177(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_1866(iVar0))
	{
		return true;
	}
	return false;
}

int func_1540()
{
	return Global_39.f_281.f_3222;
}

bool func_1541()
{
	return Global_1915715->f_22504.f_1;
}

bool func_1542(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_1543(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_1544(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

bool func_1545()
{
	return Global_1915715->f_22504;
}

void func_1546()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_1547()
{
	return func_1542(4);
}

int func_1548(bool bParam0)
{
	if (!func_1867())
	{
		return 3;
	}
	if ((_get_number_of_references_of_script_with_name_hash(29649618) > 0 && Global_1051439->f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715->f_20638)
	{
		return 10;
	}
	if (Global_1051439->f_3718 != 0)
	{
		return 0;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
		return 12;
	}
	if ((func_1868(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
	{
		return 13;
	}
	if (_0x1d46b417f926d34d(Global_34) || is_ped_in_any_train(Global_34))
	{
		iVar1 = get_vehicle_ped_is_using(Global_34);
		if (does_entity_exist(iVar1))
		{
			iVar2 = get_entity_model(iVar1);
			switch (iVar2)
			{
				case -1988548788:
				case 518773733:
				case 742064790:
				case 749266870:
					return 14;
			}
		}
		return 11;
	}
	if (_0x038b1f1674f0e242(Global_34) && !Global_1915715->f_22504.f_1)
	{
		return 16;
	}
	if (_is_ped_carrying(Global_34))
	{
		return 17;
	}
	if (_0xd04241bbf6d03a5e(player_ped_id()) != 0)
	{
		return 18;
	}
	if (is_ped_using_any_scenario(Global_34))
	{
		iVar3 = _get_scenario_point_type_ped_is_using(Global_34);
		if ((iVar3 != -1241981548 && iVar3 != -1177373461) && iVar3 != -447259824)
		{
			return 19;
		}
	}
	if (func_1869(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_1870(Global_1108365->f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (_0x2942457417a5fd24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887->f_106.f_75 >= 11 && Global_1572887->f_106.f_75 < 15)
	{
		return 42;
	}
	if (((is_ped_falling(Global_34) || is_ped_climbing(Global_34)) || _is_ped_sliding(Global_34)) || is_ped_swimming(Global_34))
	{
		return 15;
	}
	if (_0x7fc84e85d98f063d(Global_34))
	{
		return 21;
	}
	if (func_642())
	{
		return 43;
	}
	return -1;
}

void func_1549(int iParam0)
{
	if (!func_1547())
	{
		func_1871(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_1548(1);
	if (iVar0 != -1)
	{
		func_1498(iVar0);
		func_1872(0);
	}
	else
	{
		func_1872(1);
	}
}

bool func_1550()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

bool func_1551()
{
	return !func_80(2);
}

bool func_1552(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

int func_1553(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

int func_1554(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_1873(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return Global_1196339->f_1[iVar1]->f_1;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return Global_1196339->f_1[iVar1]->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_1555(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1556(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1874(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1875(iParam0))
	{
		return false;
	}
	if (func_1876(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_1877(iParam0, 1)) || func_1724(32768))
	{
		if (!func_1877(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_1878())
	{
		return false;
	}
	return true;
}

void func_1557(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_1558(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_1559()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_1560(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

bool func_1561(var uParam0, var uParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	iVar0 = func_518(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_1562(var uParam0, int iParam1)
{
	return func_194(*uParam0, iParam1);
}

int func_1563(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_1879(iVar0);
	iVar2 = func_1192(iVar0, iVar1);
	return iVar2;
}

void func_1564(int iParam0)
{
	if (!func_191(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

int func_1565(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1880(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

bool func_1566()
{
	return Global_265377->f_124517.f_63.f_4;
}

var func_1567()
{
	return Global_265377->f_124517.f_63;
}

void func_1568(var uParam0, var uParam1)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_LOBBY_TEAM"), 64);
	Var0.f_33 = -1527315056;
	Var0.f_5 = -1;
	Var0.f_4 = 2084771291;
	Var0.f_7 = 1830184421;
	func_1881(&(uParam1->f_93.f_57.f_1), uParam1->f_93.f_57, func_1571("teams"), Var0);
	func_1250(uParam0, uParam1);
	iVar34 = func_439(uParam0);
	iVar35 = func_234(uParam0, player_id());
	if (iVar35 >= 0 && iVar35 < iVar34)
	{
		_databinding_write_data_int(uParam1->f_93.f_57.f_1.f_24, iVar35);
	}
}

void func_1569(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_LOBBY_PREFERRED_POSITION"), 64);
	Var0.f_33 = -405777397;
	Var0.f_5 = -1;
	Var0.f_4 = 2084771291;
	Var0.f_1 = 0;
	Var0.f_30 = 0;
	func_1881(&(uParam0->f_30), *uParam0, func_1571("roles"), Var0);
	_0x3bf0767cf33fcc88(uParam0->f_30.f_19);
	iVar34 = 0;
	while (iVar34 < 18)
	{
		StringCopy(&cVar35, "Role_", 24);
		StringIntConCat(&cVar35, iVar34, 24);
		_databinding_add_data_int(uParam0->f_30, &cVar35, -1);
		iVar34++;
	}
}

void func_1570(char* sParam0, var uParam1, var uParam2)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	Var0.f_1 = 1;
	Var0.f_2 = -963477619;
	Var0.f_4 = 1433015236;
	Var0.f_8 = 1;
	Var0.f_9 = 1;
	Var0.f_16 = 1442026401;
	Var0.f_17 = -1102349958;
	Var0.f_19 = 469293194;
	Var0.f_20 = 1292500213;
	Var0.f_59 = -1693157378;
	Var0.f_60 = -1120556042;
	Var0.f_61 = 1;
	func_1572(uParam1, *uParam2, func_1571(sParam0), Var0);
}

struct<8> func_1571(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_1572(var uParam0, var uParam1, struct<8> Param2, struct<80> Param10, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97)
{
	func_1364(uParam0, uParam1, Param2, Param10);
	uParam0->f_18 = _databinding_add_data_hash(*uParam0, func_596(5), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, func_596(6), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_bool(*uParam0, func_596(7), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_596(9), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_596(10), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_bool(*uParam0, func_596(11), Param10.f_21);
	uParam0->f_24 = _databinding_add_data_hash(*uParam0, func_596(12), Param10.f_22);
	uParam0->f_25 = _databinding_add_data_hash(*uParam0, func_596(13), Param10.f_23);
	uParam0->f_26 = _databinding_add_data_bool(*uParam0, func_596(14), Param10.f_24);
	uParam0->f_27 = _databinding_add_data_string(*uParam0, func_596(15), &(Param10.f_25));
	uParam0->f_28 = _databinding_add_data_string(*uParam0, func_596(17), &(Param10.f_41));
	uParam0->f_29 = _databinding_add_data_bool(*uParam0, func_596(19), Param10.f_57);
	uParam0->f_30 = _databinding_add_data_bool(*uParam0, func_596(20), Param10.f_58);
	uParam0->f_31 = _databinding_add_data_hash(*uParam0, func_596(21), Param10.f_59);
	uParam0->f_32 = _databinding_add_data_hash(*uParam0, func_596(22), Param10.f_60);
	uParam0->f_33 = _databinding_add_data_bool(*uParam0, func_596(23), Param10.f_61);
	uParam0->f_34 = _databinding_add_data_bool(*uParam0, func_596(49), Param10.f_62);
	if (network_is_handle_valid(&(Param10.f_79)))
	{
		_copy_memory(&Var0, &(Param10.f_79), 7);
	}
	else
	{
		Var0 = { func_1882() };
	}
	uParam0->f_36 = _0x294af5323f44b053(*uParam0, func_596(29), &Var0);
	uParam0->f_37 = _databinding_add_data_int(*uParam0, func_596(27), -1);
	uParam0->f_38 = _databinding_add_data_int(*uParam0, func_596(28), -1);
	uParam0->f_39 = _databinding_add_data_hash(*uParam0, func_596(72), Param10.f_63);
	uParam0->f_40 = _databinding_add_data_bool(*uParam0, func_596(73), Param10.f_64);
	uParam0->f_41 = _databinding_add_data_bool(*uParam0, func_596(74), Param10.f_65);
	uParam0->f_42 = _databinding_add_data_hash(*uParam0, func_596(75), Param10.f_66);
	uParam0->f_43 = _databinding_add_data_hash(*uParam0, func_596(64), Param10.f_67);
	uParam0->f_44 = _databinding_add_data_bool(*uParam0, func_596(65), Param10.f_68);
	uParam0->f_45 = _databinding_add_data_bool(*uParam0, func_596(66), Param10.f_69);
	uParam0->f_46 = _databinding_add_data_hash(*uParam0, func_596(67), Param10.f_70);
	uParam0->f_47 = _databinding_add_data_hash(*uParam0, func_596(68), Param10.f_71);
	uParam0->f_48 = _databinding_add_data_bool(*uParam0, func_596(69), Param10.f_72);
	uParam0->f_49 = _databinding_add_data_bool(*uParam0, func_596(70), Param10.f_73);
	uParam0->f_50 = _databinding_add_data_hash(*uParam0, func_596(71), Param10.f_74);
	uParam0->f_51 = _databinding_add_data_hash(*uParam0, func_596(76), Param10.f_75);
	uParam0->f_52 = _databinding_add_data_bool(*uParam0, func_596(77), Param10.f_76);
	uParam0->f_53 = _databinding_add_data_bool(*uParam0, func_596(78), Param10.f_77);
	uParam0->f_54 = _databinding_add_data_hash(*uParam0, func_596(79), Param10.f_78);
}

char* func_1573(var uParam0)
{
	if (*uParam0 != 8)
	{
		return "";
	}
	return _create_var_string(174762, "FULL_MISSION_DESCRIPTION", (*uParam0)[0], (*uParam0)[1], (*uParam0)[2], (*uParam0)[3], (*uParam0)[4], (*uParam0)[5], (*uParam0)[6], (*uParam0)[7]);
}

char* func_1574(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return _create_var_string(2, "PLAYER_COUNT_REQUIREMENT_EQUAL", iParam0);
	}
	return _create_var_string(2, "PLAYER_COUNT_REQUIREMENT", iParam0, iParam1);
}

void func_1575(var uParam0)
{
	iVar6 = 0;
	iVar7 = 0;
	iVar9 = player_ped_id();
	bVar17 = func_1001("ALL WEAPONS", &iVar4, &iVar5, -1591664384, 1);
	Var18.f_9 = -1591664384;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar8 = iVar0;
		iVar1 = func_1883(iVar8);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar15 = func_1884(iVar8, iVar2);
			if (!_0x6929e22158e52265(iVar9, iVar15, &Var11))
			{
			}
			else
			{
				iVar10 = func_1185(iVar9, 0, iVar15, 1);
				if (!func_602(iVar10, 0))
				{
				}
				else
				{
					iVar32 = 29;
					switch (iVar15)
					{
						case 0:
							Global_1296843->f_4 = { Var11 };
							iVar32 = _0xcad4fe9398820d24(iVar9, iVar15);
							break;
						case 1:
							*Global_1296843 = { Var11 };
							iVar32 = _0xcad4fe9398820d24(iVar9, iVar15);
							break;
					}
					if ((func_762(iVar10, iVar8) && !func_763(uParam0, Var11)) && func_1885(iVar32, iVar8))
					{
						*uParam0->f_14[iVar0] = { Var11 };
						bVar16 = true;
					}
				}
			}
			iVar2++;
		}
		if (!bVar16)
		{
			if (bVar17)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (func_1003(&Var18, iVar3, iVar4, iVar5))
					{
						if (func_762(iVar10, iVar8) && !func_763(uParam0, Var11))
						{
							*uParam0->f_14[iVar0] = { Var18 };
						}
						else
						{
							iVar3++;
						}
						func_591(uParam0, iVar8);
						func_292(uParam0, iVar8);
						iVar0++;
						if (bVar17)
						{
							iVar3 = 0;
							bVar33 = false;
							iVar3 = 0;
							while (iVar3 < iVar5)
							{
								bVar33 = false;
								if (func_1003(&Var18, iVar3, iVar4, iVar5))
								{
									if (!_0xb881ca836cc4b6d4(&Var18))
									{
									}
									else
									{
										if (_0x4c543d5dfcd2dafd(&(Global_1296679->f_148), &Var18))
										{
											iVar0 = 0;
											iVar8 = 0;
											bVar33 = true;
										}
										else if (_0x4c543d5dfcd2dafd(&(Global_1296679->f_152), &Var18))
										{
											iVar0 = 1;
											iVar8 = 1;
											bVar33 = true;
										}
										else if (_0x4c543d5dfcd2dafd(&(Global_1296679->f_156), &Var18))
										{
											iVar0 = 2;
											iVar8 = 2;
											bVar33 = true;
										}
										else if (_0x4c543d5dfcd2dafd(&(Global_1296679->f_160), &Var18))
										{
											iVar0 = 3;
											iVar8 = 3;
											bVar33 = true;
										}
										if (bVar33)
										{
											*uParam0->f_14[iVar0] = { Var18 };
											bVar16 = true;
											func_591(uParam0, iVar8);
											func_292(uParam0, iVar8);
										}
									}
								}
								iVar3++;
							}
						}
						if (bVar17)
						{
							iVar0 = 0;
							iVar0 = 0;
							while (iVar0 < iVar5)
							{
								if (!func_1003(&Var18, iVar0, iVar4, iVar5))
								{
								}
								else if (iVar6 != func_1597(5))
								{
									if (func_762(Var18.f_4, 5))
									{
										*uParam0->f_36[iVar6] = { Var18 };
										iVar6++;
									}
									else if (iVar7 != func_1597(4))
									{
										if (func_762(Var18.f_4, 4))
										{
											*uParam0->f_75[iVar7] = { Var18 };
											iVar7++;
										}
									}
									iVar0++;
									func_1002(iVar4);
									uParam0->f_73 = iVar6;
									uParam0->f_168 = iVar7;
									func_591(uParam0, 5);
									func_591(uParam0, 4);
									func_292(uParam0, 5);
									func_292(uParam0, 4);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1576(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "target_wins", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_TARGET_WINS"), 64);
	Var0.f_33 = -128178694;
	func_1881(&(uParam0->f_1), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 5)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_1.f_19, func_1886(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_1.f_25, (iVar42 - 1));
}

void func_1577(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "target_score", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_TARGET_SCORE"), 64);
	Var0.f_33 = 1805386311;
	func_1881(&(uParam0->f_30), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 6)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_30.f_19, func_1887(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_30.f_25, (iVar42 - 1));
}

void func_1578(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "time_limit", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_TIME_LIMIT"), 64);
	Var0.f_33 = -63064432;
	func_1881(&(uParam0->f_59), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 5)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_59.f_19, func_1888(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_59.f_25, (iVar42 - 1));
}

void func_1579(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "time_of_day", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_TIME_OF_DAY"), 64);
	Var0.f_33 = -233831798;
	func_1881(&(uParam0->f_88), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 5)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_88.f_19, func_1889(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_88.f_25, (iVar42 - 1));
}

void func_1580(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "weather", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_WEATHER"), 64);
	Var0.f_33 = 786798524;
	func_1881(&(uParam0->f_117), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 4)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_117.f_19, func_1890(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_117.f_25, (iVar42 - 1));
}

void func_1581(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "camera_lock", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_CAMERALOCK"), 64);
	Var0.f_33 = -761702459;
	func_1881(&(uParam0->f_146), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 4)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_146.f_19, func_1891(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_146.f_25, (iVar42 - 1));
}

void func_1582(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_24 = 1;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_30 = 1;
	Var0.f_31 = 1;
	Var0.f_32 = 1;
	Var0.f_33 = -1;
	Var0.f_5 = -1;
	Var0.f_4 = 1433015236;
	StringCopy(&cVar34, "timecycle", 64);
	StringCopy(&(Var0.f_16), _create_var_string(2, "MP_TIMECYCLE"), 64);
	Var0.f_33 = -1775919669;
	func_1881(&(uParam0->f_175), *uParam0, cVar34, Var0);
	iVar42 = 0;
	while (iVar42 < 3)
	{
		iVar43 = iVar42;
		_0x7fc60c94c83c5cd7(uParam0->f_175.f_19, func_1892(iVar43), -1);
		iVar42++;
	}
	_databinding_write_data_int(uParam0->f_175.f_25, (iVar42 - 1));
}

int func_1583(int iParam0)
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

void func_1584(char* sParam0, var uParam1, var uParam2)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	iVar27 = func_1075(uParam1->f_22);
	if (iVar27 > 0 && iVar27 < 11)
	{
		StringCopy(&(Var0.f_16), func_1763(func_1893(iVar27)), 64);
	}
	else
	{
		StringCopy(&(Var0.f_16), _create_var_string(0, uParam1->f_22), 64);
	}
	Var0 = uParam1->f_22.f_1;
	Var0.f_5 = 153098848;
	Var0.f_6 = 153098848;
	Var0.f_4 = 1433015236;
	Var0.f_8 = 1;
	Var0.f_24 = 1442026401;
	Var0.f_25 = -1218088854;
	Var0.f_26 = 0;
	func_1053(uParam1, *uParam2, func_1571(sParam0), Var0);
	_databinding_add_data_hash(*uParam1, "ugc_lobby_ui_outfit_save_slot_hash", uParam1->f_22);
}

void func_1585(var uParam0, int iParam1)
{
	_databinding_clear_binding_array(uParam0->f_2667.f_1);
	Var17.f_9 = -1591664384;
	func_1894(uParam0->f_3475, &iVar13);
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		if (!func_831(uParam0->f_3475, iVar12, &Var17))
		{
		}
		else
		{
			iVar15 = func_832(Var17.f_4);
			if (!is_model_valid(iVar15))
			{
			}
			else
			{
				iVar16 = func_1895(iVar15);
				if (iVar16 == 779169510)
				{
				}
				else if (!func_1896(iParam1))
				{
					if (func_1897(iVar16, 1) != iParam1)
					{
					}
					else
					{
						StringCopy(&cVar0, "Stable_List_Entry_", 24);
						StringIntConCat(&cVar0, iVar11, 24);
						Var31 = { func_884(0, 1, 0, func_883()) };
						Var3 = { func_1898(&Var17, 0, 1) };
						bVar14 = _0x4c543d5dfcd2dafd(&Var17, &Var31);
						func_1899(uParam0, bVar14, iVar12, iVar11, &Var3, &cVar0, &(uParam0->f_2667.f_1));
						iVar11++;
					}
					iVar12++;
				}
			}
		}
	}
}

void func_1586(var uParam0, var uParam1, char* sParam2)
{
	if (!_databinding_is_data_id_valid(*uParam1))
	{
		return;
	}
	*uParam0 = _databinding_add_data_container(*uParam1, sParam2);
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return;
	}
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, "dynamic_list_item_visible", 0);
	uParam0->f_2 = _databinding_add_data_hash(*uParam0, "horse_rpg_stat_type", 1453090978);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, "horse_type_text", 0);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, "horse_breed_text", 0);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, "horse_gender_text", 0);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, "horse_coat_text", 0);
	uParam0->f_7 = _databinding_add_data_int(*uParam0, "horse_speed_value", 0);
	uParam0->f_8 = _databinding_add_data_int(*uParam0, "horse_speed_min_value", 0);
	uParam0->f_9 = _databinding_add_data_int(*uParam0, "horse_speed_max_value", 0);
	uParam0->f_10 = _databinding_add_data_int(*uParam0, "horse_acceleration_value", 0);
	uParam0->f_11 = _databinding_add_data_int(*uParam0, "horse_acceleration_min_value", 0);
	uParam0->f_12 = _databinding_add_data_int(*uParam0, "horse_acceleration_max_value", 0);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, "horse_handling_text", 0);
}

void func_1587(var uParam0, var uParam1)
{
	*uParam0 = _databinding_add_data_container_from_path("", "lobby_starting_inventory_data");
	uParam0->f_1 = _databinding_add_ui_item_list(*uParam0, "inventory_collection");
	uParam0->f_269 = _databinding_add_data_string(*uParam0, "description_title", "MP_STARTING_WEAPON_OPTION_GAMBLE");
	uParam0->f_270 = _databinding_add_data_string(*uParam0, "contents", "");
	uParam0->f_271 = _databinding_add_data_bool(*uParam0, "item_use_gold_price", 0);
	uParam0->f_272 = _databinding_add_data_string(*uParam0, "item_gold_price", "");
	uParam0->f_273 = _databinding_add_data_bool(*uParam0, "item_use_cash_price", 0);
	uParam0->f_274 = _databinding_add_data_string(*uParam0, "item_dollar_price", "");
	uParam0->f_275 = _databinding_add_data_string(*uParam0, "item_cents_price", "");
	uParam0->f_276 = _databinding_add_data_bool(*uParam0, "item_is_affordable", 0);
	uParam0->f_268 = _databinding_add_data_bool(*uParam0, "item_info_visible", 0);
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar2, "Item_List_Root_", 64);
		StringIntConCat(&cVar2, iVar0, 64);
		func_1901(&cVar2, _create_var_string(2, func_1900(iVar0)), uParam0->f_2[iVar0], uParam0);
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, iVar0, "pm_dynamic_text_and_end_image", &(uParam0->f_2[iVar0]));
		iVar1++;
		iVar0++;
	}
	iVar10 = 0;
	while (iVar10 <= 9)
	{
		if (!is_bit_set((*uParam1)[iVar10]->f_101, 1))
		{
		}
		else
		{
			StringCopy(&cVar2, "Item_List_Root_", 64);
			StringIntConCat(&cVar2, iVar1, 64);
			func_1901(&cVar2, (*uParam1)[iVar10], uParam0->f_2[iVar1], uParam0);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_1, iVar1, "pm_dynamic_text_and_end_image", &(uParam0->f_2[iVar1]));
			_databinding_add_data_int(&(uParam0->f_2[iVar1]), "item_index", iVar10);
			iVar1++;
		}
		iVar10++;
	}
	func_570(uParam0, 0, 0);
}

int func_1588(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		if (uParam1[iVar0] > 1)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1589()
{
	iVar0 = 1;
	bVar2 = true;
	while (bVar2)
	{
		iVar1 = func_1583(iVar0);
		if (iVar1 == 0)
		{
			bVar2 = false;
		}
		else
		{
			if (func_1076(2, iVar0))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

int func_1590(int iParam0)
{
	iVar0 = func_946(0);
	iVar1 = 0;
	func_1277(&(Global_1952637->f_1043), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return 0;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1952637->f_1043), -1516819610))
	{
		return 0;
	}
	return iVar1;
}

char* func_1591(int iParam0, char* sParam1, char* sParam2)
{
	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (_does_string_exist_in_string(sParam1, "Mission MP - "))
			{
				return _get_text_substring(sParam1, 13, get_length_of_literal_string(sParam1));
			}
			else
			{
				return _0xd8402b858f4ddd88(sParam1, get_length_of_literal_string(sParam1));
			}
			break;
		default:
			if (!is_string_null_or_empty(sParam2))
			{
				return _0xd8402b858f4ddd88(sParam2, get_length_of_literal_string(sParam2));
			}
			sVar0 = _create_var_string(2, func_1902(iParam0));
			if (_does_string_exist_in_string(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_1592(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return _create_var_string(2, "GST_DEATHMATCH");
		case -533426613:
			return _create_var_string(2, "GST_DEATHMATCH_TEAM");
		case -1918441640:
			return _create_var_string(2, "GST_DEATHMATCH_LTS");
		case -457802746:
			return _create_var_string(2, "GST_DEATHMATCH_FTB");
		case 1788958412:
			return _create_var_string(2, "GST_DEATHMATCH_PITP");
		case 1153715636:
			return _create_var_string(2, "GST_DEATHMATCH_LMS");
		case 424482930:
			return _create_var_string(2, "GST_DEATHMATCH_MM");
		case 1272390114:
			return _create_var_string(2, "GST_DEATHMATCH_WOC");
		case -1581094459:
			return _create_var_string(2, "GST_DEATHMATCH_EXC");
		case 1842544025:
			return _create_var_string(2, "GST_DEATHMATCH_TLG");
		case -632356431:
			return _create_var_string(2, "GST_DEATHMATCH_TTLG");
		case -559809431:
			return _create_var_string(2, "GST_DEATHMATCH_HT");
		case 1175500245:
			return _create_var_string(2, "GST_DEATHMATCH_TFTB");
		case -1437925683:
			return _create_var_string(2, "GST_DEATHMATCH_TWOC");
		case -548018579:
			return _create_var_string(2, "GST_DEATHMATCH_EC");
		case 10577687:
			return _create_var_string(2, "GST_DEATHMATCH_MC");
		case -222655798:
			return _create_var_string(2, "GST_DEATHMATCH_GR");
		case -725256130:
			return _create_var_string(2, "GST_DEATHMATCH_TGR");
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_1593(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return _create_var_string(2, "GST_RACE_STANDA");
		case 1579717899:
			return _create_var_string(2, "GST_RACE_COMBAT");
		case -63669280:
			return _create_var_string(2, "GST_RACE_DUALCO");
		case 851921060:
			return _create_var_string(2, "GST_RACE_ELIM");
		case 2028478397:
			return _create_var_string(2, "GST_RACE_SURVIV");
		case 1457860192:
			return _create_var_string(2, "GST_RACE_TIMECP");
		case -79999383:
			return _create_var_string(2, "GST_RACE_GOLDRU");
		case -1957416901:
			return _create_var_string(2, "GST_RACE_RUNAWT");
		case 218185167:
			return _create_var_string(2, "GST_RACE_TARRAC");
		case 1744858848:
			return _create_var_string(2, "GST_RACE_OPERAC");
		case -1185533313:
			return _create_var_string(2, "GST_RACE_OPTARA");
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

void func_1594(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_102, func_1903(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, false);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_99, func_1903(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, false);
	}
}

bool func_1595(int iParam0, int iParam1)
{
	if (iParam0 == player_id())
	{
		_0xc08aff658b2e51da(&iVar7);
		Var8.f_27 = 10;
		if (iVar7 != 0)
		{
			Var0 = { func_1882() };
			if (_0xc087ff658b2e51da(iVar7, &Var8))
			{
				iVar126 = 0;
				while (iVar126 <= 9)
				{
					if (network_are_handles_the_same(Var8.f_27[iVar126], &Var0))
					{
						*iParam1 = Var8.f_27[iVar126]->f_7;
						return true;
					}
					iVar126++;
				}
			}
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (network_is_player_active(iParam0))
	{
		Var0 = { func_854(iParam0) };
		Var127.f_18 = 10;
		iVar226 = 0;
		while (iVar226 <= (_0xc084ff658b2e61da(&Var0) - 1))
		{
			if (_0xc084ff658b2e71da(&Var0, iVar226, &Var127))
			{
				if (Var127.f_9 == 1)
				{
					iVar227 = 0;
					while (iVar227 <= (Var127.f_17 - 1))
					{
						if (network_are_handles_the_same(Var127.f_18[iVar227], &Var0))
						{
							*iParam1 = Var127.f_18[iVar227]->f_7;
							return true;
						}
						iVar227++;
					}
				}
				else
				{
					iVar226++;
				}
				return false;
				Jump @268; //curOff = 261
				return false;
				return false;
			}
		}
	}
}

void func_1596(var uParam0, struct<62> Param1, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88)
{
	_databinding_write_data_hash_string(uParam0->f_3, Param1.f_2);
	_databinding_write_data_hash_string(uParam0->f_21, Param1.f_19);
	_databinding_write_data_hash_string(uParam0->f_22, Param1.f_20);
	_databinding_write_data_bool(uParam0->f_23, Param1.f_21);
	_databinding_write_data_string(uParam0->f_27, &(Param1.f_25));
	_databinding_write_data_string(uParam0->f_28, &(Param1.f_41));
	_databinding_write_data_bool(uParam0->f_29, Param1.f_57);
	_databinding_write_data_hash_string(uParam0->f_31, Param1.f_59);
	_databinding_write_data_hash_string(uParam0->f_32, Param1.f_60);
	_databinding_write_data_bool(uParam0->f_33, Param1.f_61);
}

int func_1597(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 9;
		case 4:
			return 23;
		default:
			break;
	}
	return 4;
	return -1;
}

int func_1598(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	switch (iParam1)
	{
		case 5:
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (func_758(uParam0->f_36[iVar0], &uParam2))
				{
					return 1;
				}
				iVar0++;
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 <= (23 - 1))
			{
				if (func_758(uParam0->f_75[iVar0], &uParam2))
				{
					return 1;
				}
				iVar0++;
			}
			break;
		default:
			if (func_758(uParam0->f_14[iParam1], &uParam2))
			{
				if (bParam6)
				{
					uParam0->f_31[iParam1] = iParam7;
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_1599(int iParam0)
{
	sVar0 = func_1904(iParam0);
	func_1905(sVar0);
}

void func_1600()
{
	func_1906(Global_1296859->f_1, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_96, func_1907());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_78, func_1908());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_1909());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_84, func_1910());
	func_1912(0, func_1911() == 0);
	func_1912(9, func_1913() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_81, _0x3aeabae3f3c7600c());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_83, _unlock_is_unlocked(2108779990));
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_85, (((_unlock_is_unlocked(254907751) && !func_1629()) && !func_1408()) && func_1551()));
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_87, ((((_unlock_is_unlocked(1015316659) && !func_1629()) && !func_1408()) && !func_1093()) && !func_1090()));
	func_1912(7, func_1914() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_85, func_1915());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_92, func_1916());
	func_1912(6, func_1917() == 0);
	func_1912(1, func_1918() == 0);
	if ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 15) && !func_369())
	{
		_databinding_write_data_bool(Global_1572887->f_106.f_149, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_41, false);
		_databinding_write_data_string(Global_1940311->f_1433.f_1463.f_40, "MATCHMAKING_ACTIVE_LINK");
	}
	else
	{
		_databinding_write_data_bool(Global_1572887->f_106.f_149, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_41, true);
		_databinding_write_data_string(Global_1940311->f_1433.f_1463.f_40, "MATCHMAKING_LINK");
	}
	func_288();
}

void func_1601()
{
	Global_1940311->f_1433.f_9184 = 0;
	Global_1940311->f_1433.f_9184.f_1 = 0;
	Global_1940311->f_1433.f_9184.f_2 = -1;
	Global_1940311->f_1433.f_9184.f_3 = -1;
	Global_1940311->f_1433.f_9184.f_4 = 0;
	Global_1940311->f_1433.f_9184.f_236 = 1;
	Global_1940311->f_1433.f_9184.f_238 = 0;
	Global_1940311->f_1433.f_9184.f_240 = 1;
	Global_1940311->f_1433.f_9184.f_245 = 0;
	func_1919(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&(Global_1940311->f_1433.f_9184.f_5[iVar0]->f_3), "", 128);
		Global_1940311->f_1433.f_9184.f_5[iVar0]->f_19 = 0;
		Global_1940311->f_1433.f_9184.f_5[iVar0]->f_2 = -1;
		Global_1940311->f_1433.f_9184.f_5[iVar0] = -1;
		iVar0++;
	}
}

void func_1602()
{
}

void func_1603(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_3, bParam0);
}

void func_1604()
{
	func_1906(func_1920(), func_1921());
	func_1922(func_1920());
	func_1923(-1);
	func_1924(0);
	func_1925(0);
}

void func_1605(int iParam0, bool bParam1)
{
	func_1601();
	Var0 = { func_1926(1) };
	bVar95 = false;
	bVar96 = false;
	if (func_757(Var0.f_29) && network_is_player_active(network_get_player_from_gamer_handle(&(Var0.f_29))))
	{
	}
	switch (iParam0)
	{
		case 16:
			func_1601();
			break;
		case 14:
			if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15))
			{
				if (func_1432(Global_1296859->f_15))
				{
					_0xc08aff658b2e51da(&iVar97);
					if (iVar97 != 0)
					{
						bVar95 = true;
					}
				}
				else
				{
					bVar95 = true;
				}
			}
			bVar96 = true;
			break;
		case 17:
			func_1928(func_1927(&Var0));
			bVar95 = true;
			if (func_1929(&Var0))
			{
				if (func_1930(&Var0))
				{
					bVar96 = true;
				}
			}
			else if (func_1931(&Var0))
			{
				bVar96 = true;
			}
			break;
	}
	if (bVar95)
	{
		iVar98 = func_1933(func_1932(&Var0), -1, 394524610, 1, 1, 0, 1, 17);
		func_1934(iVar98);
	}
	if (bVar96)
	{
		iVar99 = func_1933(_create_var_string(2, "POSSE_SUBH"), -1, -303450633, 1, 1, 0, 1, 14);
	}
	switch (iParam0)
	{
		case 17:
			func_1935(iVar98, bParam1);
			break;
		case 14:
			func_1935(iVar99, bParam1);
			break;
	}
}

void func_1606()
{
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	if (func_1936(&Var0, 1))
	{
		func_1937(&Var0);
	}
	func_1938(6, 1);
	func_1605(14, 1);
	func_1617(1.5f, 1);
	func_1939(&(Global_1940311->f_1433.f_157.f_614.f_4), 1);
}

void func_1607()
{
	if (!func_1940(1))
	{
		func_1941();
		func_1942();
		if (func_1943(&(Global_1296859->f_154[&Global_1296859]), 0))
		{
			vVar0 = { func_1944(&Global_1296859) };
			func_1946(vVar0.y, func_1945(vVar0.x));
		}
		else
		{
			func_1942();
		}
		func_1947(0, 1);
		func_1948(!Global_17411.f_55.f_14.f_5);
		func_1949(0);
		_databinding_write_data_int(Global_1896738->f_13.f_50.f_70.f_24, 0);
		func_1938(2, 0);
		func_1938(1, 1);
	}
	_hide_hud_component(-1274560729);
}

void func_1608()
{
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_1926(1) };
	if (Global_1940311->f_1433.f_1 != 7)
	{
	}
	func_1617(3f, 1);
	func_1601();
	func_1933("POSSE_MEMBERS_SUBH", -1, -1, 0, 0, 0, 0, -1);
	if (func_1950(&Var0))
	{
		if (func_1951(&Var0) && func_1929(&Var0))
		{
			func_1933("POSSE_DEPUTIES_SUBH", -1, -1, 0, 0, 1, 0, -1);
		}
	}
	if (!func_1952(19, 7))
	{
	}
	func_1953(0);
	func_1954(&(Global_1940311->f_1433.f_157.f_197.f_3), 1);
}

void func_1609()
{
	func_1617(1.5f, 1);
	func_1939(&(Global_1940311->f_1433.f_157.f_206.f_7), 1);
}

void func_1610()
{
	func_1617(1.5f, 1);
	func_1955();
	Var0 = { func_1926(1) };
	if (!func_1950(&Var0))
	{
		return;
	}
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_157.f_264.f_92))
	{
		if (func_1951(&Var0))
		{
			_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_92, "NM_MW_POSSE_TYPE_PERSISTENT");
		}
		else
		{
			_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_92, "NM_MW_POSSE_TYPE_TEMPORARY");
		}
	}
	if (!func_1956(func_1932(&Var0)))
	{
	}
}

void func_1611(int iParam0)
{
	func_1957();
	func_1617(2f, 1);
	if (Global_1940311->f_1433.f_1 == 7)
	{
		func_1938(4, 1);
	}
	func_1601();
	switch (iParam0)
	{
		case 22:
			if (func_1958())
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					func_1933(func_1959(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
					iVar0++;
				}
			}
			else
			{
				func_1933(func_1959(1), 1, -1, 0, 0, 0, 0, -1);
				func_1933(func_1959(2), 2, -1, 0, 0, 0, 0, -1);
				func_1933(func_1959(3), 3, -1, 0, 0, 0, 0, -1);
			}
			if (!func_1952(6, 7))
			{
			}
			break;
		default:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_1933(func_1959(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
				iVar0++;
			}
			if (!func_1952(6, 7))
			{
			}
			break;
	}
	func_1960();
}

void func_1612()
{
	func_1957();
	func_1617(2f, 1);
	func_1601();
	func_1960();
	func_1961(1);
}

void func_1613()
{
	Global_1940311->f_1433.f_1316.f_9 = 0;
	_0x00a15b94cba4f76f(Global_1940311->f_1433.f_1316.f_8);
	Global_1940311->f_1433.f_1316.f_8 = 0;
	_databinding_write_data_string(Global_1940311->f_1433.f_1407.f_55, "");
	func_1962();
}

void func_1614()
{
}

void func_1615()
{
}

void func_1616()
{
	iVar0 = func_1963(0, 1);
	func_1965(iVar0, func_1964());
	func_1617(1f, 1);
	func_1966();
	func_1601();
	iVar2 = 7;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = iVar3;
		func_1933(func_1967(iVar1), iVar3, iVar3, 0, 0, 0, 0, -1);
		iVar3++;
	}
}

void func_1617(float fParam0, bool bParam1)
{
	Global_1896738->f_194.f_2 = 0f;
	Global_1896738->f_194.f_1 = fParam0;
	if (bParam1)
	{
		func_1968(0, 1);
	}
}

void func_1618()
{
	func_1617(2f, 1);
	func_1969();
	func_1970();
}

void func_1619()
{
}

void func_1620()
{
	iVar0 = func_1971();
	iVar1 = func_1972(iVar0, 0);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_5, _create_var_string(2, "NET_MG_CONTEXT_PUBLIC", iVar1));
	func_1973(iVar0);
}

void func_1621()
{
	iVar0 = func_1971();
	func_1973(iVar0);
}

void func_1622()
{
	iVar0 = func_1971();
	bVar1 = func_1974(2);
	StringCopy(&cVar2, _create_var_string(2, func_1975(bVar1, "NET_MG_TITLE_PRIVATE", "NET_MG_TITLE_PUBLIC")), 128);
	StringCopy(&cVar18, func_1977(func_1976(iVar0)), 128);
	StringCopy(&cVar18, _create_var_string(2, &cVar18), 128);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_1, _create_var_string(42, "NET_MG_TITLE_ASSEMBLY", &cVar2, &cVar18));
	func_1973(iVar0);
	iVar34 = func_1972(iVar0, 1);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_12, _create_var_string(2, "MGPKR_UI_BUYIN", iVar34));
	bVar35 = (func_1974(8192) && !func_1974(16384));
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_10, bVar35);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_11, true);
	func_1912(0, func_1911() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_1978());
	func_1912(1, func_1918() == 0);
	func_1979();
}

void func_1623()
{
	_databinding_write_data_bool(Global_1896738->f_371.f_1, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_2, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_3, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_4, true);
}

void func_1624()
{
}

void func_1625()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_437, false);
}

void func_1626()
{
	func_1617(1f, 1);
	func_1601();
	iVar1 = 3;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = iVar2;
		func_1933(func_1980(iVar0), iVar2, iVar2, 0, 0, 0, 0, -1);
		iVar2++;
	}
}

void func_1627()
{
	func_1957();
	func_1617(2f, 1);
	func_1601();
	func_1933(func_1959(0), 0, -1, 0, 0, 0, 0, -1);
}

void func_1628(float fParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&fParam0))
	{
		return;
	}
	Var0 = 49;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = 10;
	Var0.f_5 = uParam1;
	trigger_script_event(1, &Var0, 6, 42, &fParam0);
}

bool func_1629()
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
	if (!func_325(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_1630(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1631(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1632(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_995(iParam0);
		return false;
	}
	if (func_1631(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1981(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

void func_1633(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_346(iParam2, 0, 100);
	if (func_1982(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

int func_1634(var uParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return 0;
	}
	func_1983(*iParam1, &(uParam0->f_3475.f_53.f_9), &(uParam0->f_3475.f_53.f_1), 0, 1);
	return 1;
}

void func_1635(var uParam0, int iParam1)
{
	if (!does_entity_exist(*iParam1))
	{
		return;
	}
	if (!func_1984(*iParam1))
	{
		return;
	}
	_0x3fe4fb41ef7d2196(*iParam1);
	iVar0 = get_entity_model(*iParam1);
	iVar1 = func_1985(iVar0);
	iVar2 = func_1986(*iParam1);
	iVar3 = func_1895(iVar0);
	iVar4 = 0;
	iVar5 = 0;
	iVar4 = get_default_attribute_rank(iVar0, 5);
	iVar5 = get_default_attribute_rank(iVar0, 6);
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = get_default_max_attribute_rank(iVar0, 5);
	iVar7 = get_default_max_attribute_rank(iVar0, 6);
	iVar4 = func_346(iVar4, 0, iVar6);
	iVar5 = func_346(iVar5, 0, iVar7);
	_databinding_write_data_hash_string(uParam0->f_3, get_hash_key(func_1987(iVar3, iVar1)));
	_databinding_write_data_hash_string(uParam0->f_4, get_hash_key(func_1988(iVar1)));
	_databinding_write_data_hash_string(uParam0->f_5, get_hash_key(func_1989(*iParam1)));
	_databinding_write_data_hash_string(uParam0->f_6, get_hash_key(func_1990(iVar1)));
	_databinding_write_data_int(uParam0->f_7, iVar4 + 1);
	_databinding_write_data_int(uParam0->f_8, 0);
	_databinding_write_data_int(uParam0->f_9, 10);
	_databinding_write_data_int(uParam0->f_10, iVar5 + 1);
	_databinding_write_data_int(uParam0->f_11, 0);
	_databinding_write_data_int(uParam0->f_12, 10);
	_databinding_write_data_hash_string(uParam0->f_13, get_hash_key(func_1991(iVar2)));
}

bool func_1636()
{
	if (_0x9c725d149622bfde(3))
	{
		return false;
	}
	if (!_0x1af5e28e64a76a9f())
	{
		return false;
	}
	return true;
}

void func_1637()
{
	iVar0 = _databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_27);
	Var1.f_8 = -1;
	Var1.f_8.f_1 = -1;
	Var1.f_16.f_12 = -1;
	Var1.f_16.f_12.f_1 = -1;
	Var1.f_16.f_14 = 255;
	Var1.f_16.f_15 = 255;
	if (Global_1071686->f_16 > 0 && iVar0 < 10)
	{
		Var1 = { *Global_1071686->f_16.f_5[iVar0] };
	}
	if (!Var1)
	{
		return;
	}
	Var36 = { Var1.f_8 };
	iVar38 = func_513(Var36);
	switch (iVar38)
	{
		case 20:
		case 21:
		case 28:
			iVar39 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
			iVar40 = (Global_1296859->f_21 - (iVar39 - (Global_1901947->f_308.f_169 / 1000)));
			_0xf37a2149bc9a8a27(729112912, Var1.f_16.f_1, player_id(), 0, iVar40);
			break;
	}
}

bool func_1638(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1639(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			iVar17 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam1]->f_28);
			if (!_network_is_player_index_valid(iVar17))
			{
				return sVar0;
			}
			switch (func_1992(&Var1, iVar17, 1))
			{
				case 1:
					return sVar0;
				case 2:
					if (func_1993() == 0)
					{
						func_1994(int_to_playerindex(iVar17));
					}
					return sVar0;
				case 3:
					return sVar0;
				case 4:
					sVar0 = func_1995(Var1);
					return sVar0;
				default:
					break;
			}
			break;
		case 1:
			Var19 = { func_854(player_id()) };
			func_1996(&Var19);
			uVar18 = _0x27b1ae4d8c652f08(_databinding_read_data_int(Global_1940311->f_242.f_14[iParam1]->f_27));
			_0x16efb123c4451032(uVar18, &Var19);
			func_1996(&Var19);
			if (!func_757(Var19))
			{
				return sVar0;
			}
			sVar0 = _0xb5c4b18b12a2af23(&Var19, 0);
			if (is_string_null_or_empty(sVar0))
			{
				return sVar0;
			}
			break;
	}
	return sVar0;
}

var func_1640(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return uVar1;
	}
	return Global_1896738->f_3715[iVar0]->f_3;
}

bool func_1641()
{
	return (func_1740(Global_1296859->f_10, 1, 0, 1) && func_1642() > 0);
}

int func_1642()
{
	iVar0 = func_794(120839576, 59806960, 1, 0, 1, 0);
	if (!func_1091(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_1643(var uParam0, var uParam1, bool bParam2)
{
	_databinding_write_data_int(uParam0->f_10, uParam0->f_1799);
	if (get_time_difference(uParam0->f_1805, get_network_time_accurate()) < 3000 && !bParam2)
	{
		return 0;
	}
	uParam0->f_1805 = get_network_time_accurate();
	uParam0->f_1802 = _0xdb7abdd203fa3704();
	if (uParam0->f_1799 >= uParam0->f_1802)
	{
		uParam0->f_1799 = (uParam0->f_1802 - 1);
		if (uParam0->f_1799 > uParam0->f_1801)
		{
			uParam0->f_1801 = uParam0->f_1799;
			uParam0->f_1800 = (uParam0->f_1801 - 11);
			if (uParam0->f_1800 < 0)
			{
				uParam0->f_1800 = 0;
			}
		}
		_databinding_write_data_bool(uParam0->f_14, uParam0->f_1800 != 0);
		_databinding_write_data_bool(uParam0->f_15, (uParam0->f_1801 != (uParam0->f_1802 - 1) && uParam0->f_1802 > 12));
	}
	_databinding_write_data_int(uParam0->f_10, uParam0->f_1799);
	_databinding_write_data_int(uParam0->f_11, uParam0->f_1802);
	iVar0 = ceil((to_float(uParam0->f_1802) / to_float(12)));
	_databinding_write_data_string(uParam0->f_16, _create_var_string(2, "NM_PW_PLAYER_LIST_PAGE", uParam0->f_1803, iVar0));
	_databinding_write_data_bool(uParam0->f_17, iVar0 > 1);
	_databinding_write_data_bool(uParam0->f_18, iVar0 > 1);
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if ((iVar1 + uParam0->f_1800) > uParam0->f_1801)
		{
		}
		else if (iVar1 + uParam0->f_1800) >= _0xdb7abdd203fa3704()
		{
		}
		else
		{
			Var3 = { func_787((iVar1 + uParam0->f_1800)) };
			if (!func_757(Var3))
			{
			}
			else
			{
				bVar10 = (!network_is_gamer_in_my_session(&Var3) && _0xe348d1404bd80146(&Var3));
				if (bVar10)
				{
					iVar11++;
				}
				if (!func_1645(uParam0, iVar2, &Var3, func_559(_0x5659d87be674ab17(&Var3), 109029619), (iVar1 + uParam0->f_1800), 2063464981, 2063464981, &(uParam1->f_3472), 1, bVar10))
				{
				}
				else
				{
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	_databinding_write_data_bool(uParam1->f_30.f_5, iVar11 > 0);
	func_1646(uParam0, iVar2);
	return 1;
}

void func_1644(var uParam0, int iParam1)
{
	if (uParam0->f_3540 == iParam1)
	{
		return;
	}
	uParam0->f_3540 = iParam1;
}

bool func_1645(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6, var uParam7, bool bParam8, bool bParam9)
{
	if (!bParam8)
	{
		if (network_is_gamer_in_my_session(uParam2))
		{
			return false;
		}
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (bParam8)
	{
		_databinding_write_data_bool(uParam0->f_20[iParam1]->f_1, (!network_is_gamer_in_my_session(uParam2) && _0xe348d1404bd80146(uParam2)));
	}
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_3, 1105014447);
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_22, 1292500213);
	_databinding_write_data_string(uParam0->f_20[iParam1]->f_27, sParam3);
	_databinding_write_data_bool(uParam0->f_20[iParam1]->f_33, false);
	_databinding_write_data_string(uParam0->f_20[iParam1]->f_28, "");
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_8, 469385923);
	_databinding_write_data_int(uParam0->f_20[iParam1]->f_38, iParam4);
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_7, iParam5);
	_databinding_write_data_bool(uParam0->f_20[iParam1]->f_9, bParam9);
	if (iParam1 >= uParam0->f_1798)
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_5, iParam1, "pm_dynamic_player_entry", &(uParam0->f_20[iParam1]));
		uParam0->f_1798++;
	}
	if (_0xe39600e50d608693(uParam2, uParam7))
	{
		iVar1 = 1210712530;
		iVar0 = -1289525013;
		bVar2 = true;
		if (_0xc028b3f52c707c49(uParam2))
		{
			switch (_0xca58d4fd20d70f24(uParam2))
			{
				case 0:
					iVar0 = -1289525013;
					break;
				case 1:
					iVar0 = 160330423;
					break;
				case 2:
					iVar0 = -907357718;
					break;
			}
		}
	}
	else
	{
		iVar1 = -1693157378;
		iVar0 = -1120556042;
		bVar2 = false;
	}
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_31, iVar1);
	_databinding_write_data_hash_string(uParam0->f_20[iParam1]->f_32, iVar0);
	_databinding_write_data_bool(uParam0->f_20[iParam1]->f_33, bVar2);
	return true;
}

void func_1646(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	while (iVar0 <= (uParam0->f_1798 - 1))
	{
		_0x6318fb3be37e11b3(uParam0->f_5, iParam1);
		iVar0++;
	}
	uParam0->f_1798 = iParam1;
	if (uParam0->f_1798 == 0)
	{
		_databinding_write_data_bool(uParam0->f_7, false);
	}
}

bool func_1647(int iParam0)
{
	return func_194(Global_1071686->f_28662.f_22.f_1, iParam0);
}

bool func_1648(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_1649(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1650(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1651(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (func_497(iVar1, 160827531) || func_985(iVar1) == 81053684)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

void func_1652(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(&(uParam0->f_1[iVar0]), -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

void func_1653(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-525676072 == func_985(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

int func_1654(int iParam0)
{
	func_1277(&uVar1, 9044914, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&uVar1);
	while (_0xed4413cee1bf142c(&uVar1))
	{
		if (!_0x44b3a36933ac009c(&uVar0, &uVar1, -1168434056))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_1655(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_985(iParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 1759215194 || iVar0 == 344283346);
	}
	return (!bParam1 && (iVar0 == -1740828670 || iVar0 == 344283346));
}

bool func_1656(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

int func_1657(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < _0xffcc2db2d9953401(iParam0, iParam1, 1))
	{
		if (_0x6243635af2f1b826(iParam0, iVar0, iParam1, 1) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1658(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -1527414429)) && !func_497(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0]->f_1 == 1530758430 || uParam0->f_1[iVar0]->f_1 == 1334603721) && func_497(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_494(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
			func_494(iVar0, iParam3);
		}
	}
}

void func_1659(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2]->f_1 != -2081918609)
	{
		iVar0 = 34;
		iVar1 = &uParam0->f_1[iVar0];
		if (func_497(iVar1, 1583165364))
		{
			uParam0->f_1[iParam2]->f_1 = -2081918609;
			func_494(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			iVar1 = &uParam0->f_1[iVar0];
			if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_985(iVar1))
			{
				uParam0->f_1[iParam2]->f_1 = -2081918609;
				func_494(iParam2, iParam3);
			}
		}
	}
}

void func_1660(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 16;
	func_494(iVar0, iParam3);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_494(iVar0, iParam3);
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_494(iVar0, iParam3);
			func_1292(uParam0, 0, &(uParam0->f_1[iVar0]), iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -985549034))
	{
		if (uParam0->f_1[iVar0]->f_1 == 1530758430)
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
		else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			uParam0->f_1[iVar0]->f_1 = -1539589426;
		}
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -1527414429)) && !func_497(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1661(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_494(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && !func_497(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 13;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 25;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, 675650051))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

bool func_1662(int iParam0)
{
	return &Global_1952637->f_1675.f_1[func_488(iParam0, 1)] != &Global_1952637->f_83[func_488(iParam0, 1)];
}

void func_1663(var uParam0, int iParam1)
{
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam1);
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_494(iVar0, iParam1);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_494(iVar0, iParam1);
	}
}

void func_1664(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	iVar3 = 0;
	if (func_943() == 24043185)
	{
		iVar3 = 1;
	}
	if (func_943() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_985(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_953(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_494(iVar0, iParam3);
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -1473580422))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_497(iVar1, 1469783911))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
		}
		else if (func_1657(&(uParam0->f_1[iVar0]), iVar3, -2081918609) != -1)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_985(iVar1) == 912453393)
		{
			bVar2 = true;
			if (func_497(iParam2, 1583165364))
			{
				uParam0->f_1[iVar0]->f_1 = -2081918609;
				func_494(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0])
	{
		if (func_985(iVar1) == 1868067663 && func_497(iParam2, -1016441646))
		{
			func_1997(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_494(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (1759215194 == func_985(&(uParam0->f_1[iVar0])))
	{
		func_494(16, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -1650340550))
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (func_985(iVar1) == 1769055947)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
}

void func_1665(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_943() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0] && func_985(&(uParam0->f_1[18])) != 912453393)
		{
			uParam0->f_1[iVar0] = func_953(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_497(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1671(uParam0, iParam3, 1, 0);
		}
		else if (func_497(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
	func_494(iVar0, iParam3);
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iVar1, 1090938458)) && func_497(iParam2, 475297062))
	{
		func_1997(uParam0, iVar0, iParam3);
	}
}

void func_1666(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	func_494(36, iParam2);
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	if (func_943() == 24043185)
	{
		iVar0 = 16;
		if (&uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0] = func_953(Global_1952637->f_83[iVar0]->f_9, 0);
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (iVar1 != &Global_1952637->f_83[iVar0] && func_497(iVar1, 353024991))
	{
		func_1997(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && 1769055947 == func_985(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
}

void func_1667(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_985(iVar1) == 294388917)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 18;
	iVar1 = &uParam0->f_1[iVar0];
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_985(iVar1) == 912453393)
		{
			if (uParam0->f_1[iVar0]->f_1 != 1155669136)
			{
				uParam0->f_1[iVar0]->f_1 = 1155669136;
				func_494(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_494(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_497(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1671(uParam0, iParam3, 1, 0);
		}
		else if (func_497(iParam2, 1718965018))
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
		}
	}
}

void func_1668(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1997(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 35;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam2);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		if (func_497(&(uParam0->f_1[iVar0]), -2093434733))
		{
			func_1671(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0]->f_1 = 1155669136;
			func_494(iVar0, iParam2);
		}
	}
}

void func_1669(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_494(iVar0, iParam3);
	}
	iVar0 = 36;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0]->f_1 = -2081918609;
		func_494(iVar0, iParam3);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_497(iParam2, -1278198125))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
	iVar0 = 18;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		iVar1 = &uParam0->f_1[iVar0];
		if (912453393 == func_985(iVar1) && uParam0->f_1[iVar0]->f_1 != -2081918609)
		{
			uParam0->f_1[iVar0]->f_1 = -2081918609;
			func_494(iVar0, iParam3);
		}
	}
}

void func_1670(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_497(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam3);
	}
}

void func_1671(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam1);
	}
	iVar0 = 37;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam1);
	}
	iVar0 = 38;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -923693316 == func_985(&(uParam0->f_1[iVar0])))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_494(iVar0, iParam1);
	}
}

void func_1672(struct<2> Param0)
{
	if (func_184(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_184(Param0)))
	{
		_0x99230691875fc218(func_728(Param0), func_184(Param0), Global_35);
	}
}

void func_1673()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1071686->f_21416.f_1[iVar0] = 0;
		iVar0++;
	}
}

bool func_1674(int iParam0, bool bParam1)
{
	iVar1 = -1;
	bVar2 = func_149(get_player_index(), 128);
	if (Global_3145858->f_282 == 1 || (func_25(25) && !bVar2))
	{
		iVar1 = 0;
	}
	else if ((!bParam1 && func_261(Global_524288->f_40400)) && bVar2)
	{
		iVar1 = func_1998();
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_282 - 1))
	{
		if (iVar1 != -1 && iVar0 != iVar1)
		{
		}
		else if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_6[iVar0]), 1))
		{
		}
		else
		{
			if ((func_261(Global_524288->f_40400) && bVar2) && func_1999(iVar0) != -1)
			{
				if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_15[iVar0]), func_1999(iVar0)))
				{
				}
				else
				{
					Jump @266; //curOff = 237
					if (&Global_3145858->f_38736[iParam0]->f_15[iVar0] != 0)
					{
					}
					else
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1675(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_282 - 1))
	{
		if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_6[iVar0]), 1))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1676(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

int func_1677()
{
	iVar0 = 0;
	vVar1.x = Global_1257541->f_8863;
	vVar1.f_2 = -1041770777;
	if (_datafile_get_data_node_index(&(vVar1.f_1), &vVar1))
	{
		iVar0 = _datafile_get_num_children(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1678(int iParam0)
{
	return func_2000(iParam0) + 30;
}

void func_1679(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *Global_1900736->f_1[iParam0] };
	*Global_1900736->f_1[iParam0] = { *Global_1900736->f_1[iParam1] };
	*Global_1900736->f_1[iParam1] = { Var0 };
}

void func_1680(int iParam0, var uParam1, var uParam2)
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

void func_1681(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1682(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1683(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_1038(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_2001(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_1684(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_761(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1685(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_194(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1686(int iParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_985(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_1687(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1040(iParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_77(iParam2, 2))
	{
		if (func_817(iParam0, iParam1))
		{
			return 0;
		}
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 0;
	}
	if (func_77(iParam2, 8))
	{
		return func_2002(iParam0, iParam1);
	}
	return 1;
}

bool func_1688(int* iParam0, struct<17> Param1, int iParam18, bool bParam19)
{
	if (iParam18 != 541670136)
	{
		return false;
	}
	if (!func_2003(Param1))
	{
		return false;
	}
	if (!func_1696(iParam0, iParam18))
	{
		return false;
	}
	if (func_2004(*iParam0, iParam18, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_1698(iParam0, bParam19);
}

bool func_1689(int* iParam0)
{
	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_2005(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_1690(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1691(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_985(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return _item_database_get_has_slot_count(iVar0);
}

bool func_1692(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	uVar0 = 15;
	if (!func_1017(uParam1->f_8, uParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_2006(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 2:
			return func_2007(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 3:
			return func_2008(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 4:
			return func_2009(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 5:
			return func_2010(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 6:
			return func_2011(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 7:
			return func_2012(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 8:
			return func_2013(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 9:
			return func_2014(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 10:
			return func_2015(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 11:
			return func_2016(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 12:
			return func_2017(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 13:
			return func_2018(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 14:
			return func_2019(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		case 15:
			return func_2020(iParam0, uParam1, iParam2, &uVar0, bParam3, bParam4);
		default:
			break;
	}
	return false;
}

bool func_1693(int* iParam0, int iParam1, struct<4> Param2, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_819(iParam0, iParam1, Param2, bParam6, bParam7, 1, bParam8, 1))
	{
		return false;
	}
	if (func_77(bParam8, 4) && func_1034(iParam1, &Param2, bParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_1694(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_186(*uParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_567(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_2021(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_2022(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_2023(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_2024(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_991(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_2025(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1327(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1022(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1695(int iParam0, var uParam1, bool bParam2)
{
	if (uParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_602(uParam1->f_8, 0) && !func_982(func_740(uParam1->f_8), 2))
	{
		return false;
	}
	if (func_77(bParam2, 128))
	{
		if (func_985(uParam1->f_8) == 0)
		{
			return false;
		}
	}
	if (func_77(bParam2, 16))
	{
		if (!func_1339(iParam0, uParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1696(int* iParam0, int iParam1)
{
	if (!_cashinventory_transaction_get_basket_is_valid(*iParam0))
	{
		if (!func_600(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = _cashinventory_transaction_get_action(*iParam0);
	if (iVar0 != iParam1 || _cashinventory_transaction_get_num_of_items(*iParam0) >= 50)
	{
		if (!func_607(iParam0))
		{
			return false;
		}
		if (!func_600(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_1697(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_1698(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_607(iParam0);
	}
	return true;
}

int func_1699(int iParam0, bool bParam1)
{
	if (!func_1372(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_806(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_806(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_806(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_806(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_806(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_806(-611782825, 1);
	}
	return func_806(iParam0, 1);
}

bool func_1700(int iParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_1343(iParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_1091(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_1376(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_1702(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_1703(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_1018(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_1701(int iParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_982(iParam0, 2))
	{
		return false;
	}
	*iParam3 = _0x388088bff3681189(iParam0, bParam1);
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
		if (!_0xb542632693d53408(iParam0, bParam1, iVar0, (*uParam2)[iVar0]))
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
		func_2026(iParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

int func_1702(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_497(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_1703(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_989(0) };
	Var0.f_4 = func_2027(iParam1);
	Var5 = { func_761(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_518(0), &Var5, 0);
	return iVar9;
}

bool func_1704(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_497(iParam0, -887064662))
	{
		return true;
	}
	return func_1705(iParam0);
}

bool func_1705(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (func_497(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_1706(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_602(iParam1, 0))
	{
		return 0;
	}
	if (!func_2028(iParam0))
	{
		return 0;
	}
	iVar0 = func_1177(iParam0);
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
		if (!func_2029(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
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

int func_1707(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (!func_1704(iParam0) && !func_1705(iParam0))
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
	iVar13 = func_1502(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_2030(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_2031(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_2032(iVar15, iVar1);
			if (func_602(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_2033(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_1703(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_2035(iVar16, func_2034(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_2036(iVar1);
	}
	return iVar0;
}

int func_1708(int iParam0, int iParam1)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_602(iParam1, 0))
	{
		return 0;
	}
	if (!func_2028(iParam0))
	{
		return 0;
	}
	iVar0 = func_1177(iParam0);
	iVar1 = iParam1;
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
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
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

int func_1709(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

void func_1710(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -142743235;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

int func_1711(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_2037(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

int func_1712(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_2038();
	}
	return Global_17411.f_55.f_644.f_33[iParam0]->f_1;
}

void func_1713(var uParam0, int iParam1)
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
	if (119907797 == func_985(&(uParam0->f_1[10])) && func_497(&(uParam0->f_1[1]), 458991572))
	{
		uParam0->f_1[10] = &Global_1952637->f_83[10];
	}
}

int func_1714(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

bool func_1715(int iParam0, int iParam1)
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

int func_1716()
{
	return Global_1301323->f_150;
}

bool func_1717(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

bool func_1718()
{
	return func_2039() != 0;
}

bool func_1719()
{
	iVar0 = func_2040();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_1720(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_1721(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_1722(struct<2> Param0)
{
	if (func_184(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_184(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_184(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1726(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1723(struct<2> Param0, int iParam2)
{
	iVar0 = func_978(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_2041(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1324(iVar0, iParam2);
	return iParam2;
}

bool func_1724(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_1725(struct<2> Param0, int iParam2)
{
	if (!func_325(Param0))
	{
		return 0;
	}
	iVar0 = func_978(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_2042(Param0, func_721(0), iParam2))
	{
		func_720(func_721(0), 3);
		func_720(func_721(iVar0), 4);
		return 0;
	}
	func_1324(iVar0, 0);
	func_720(func_721(0), 3);
	func_720(func_721(1), 4);
	return 1;
}

bool func_1726(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_517(Param0, &vVar0);
	if (func_2043(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_1727(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_722((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1728(var uParam0, bool bParam1, int iParam2)
{
	func_2044(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_2045(func_1727(uParam0->f_1));
	}
	else
	{
		func_2046();
	}
}

bool func_1729(int iParam0, int iParam1, int iParam2)
{
	if ((func_2047(&Var0, iParam0) && func_2048(&Var0)) && func_2049(&Var0, iParam1))
	{
		if (func_2050(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1730(int iParam0)
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

void func_1731(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_1732()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_2051();
	if (iVar0 > 0)
	{
		func_2052(-1228177771, iVar0, 0);
	}
}

void func_1733()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_1642();
	if (iVar0 > 0)
	{
		func_2053(iVar0, 0, -142743235, 0);
	}
}

void func_1734()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_2054();
}

int func_1735(int iParam0)
{
	return &(Global_1109340->f_193[iParam0]);
}

void func_1736(int iParam0)
{
	Global_1109340->f_193[&Global_1296859] = iParam0;
	func_273(&(Global_1108365->f_935.f_30));
}

bool func_1737()
{
	if (func_325(func_721(0)) && !func_1399())
	{
		return true;
	}
	return false;
}

bool func_1738()
{
	return func_286(Global_35) != -1;
}

void func_1739()
{
	sVar0 = func_2055(Global_1108365->f_935.f_27);
	Global_1108365->f_935.f_18 = 0;
	if (!are_strings_equal(sVar0, _databinding_read_data_string(Global_1940311->f_1433.f_54.f_5)))
	{
		func_1256(sVar0, 1105014447);
	}
}

bool func_1740(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_2056(bParam1, bParam2, bParam3);
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

bool func_1741()
{
	if (is_ped_in_any_boat(Global_34))
	{
		return true;
	}
	iVar0 = func_2057(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_swimming(iVar0))
		{
			return true;
		}
	}
	return is_ped_swimming(Global_34);
}

bool func_1742(bool bParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else
		{
			if ((func_2058(iVar2) && func_325((*Global_1056141)[iVar0]->f_2)) || !func_325((*Global_1056141)[iVar0]->f_2))
			{
				if (bParam0 && !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1743()
{
	vVar0 = { _get_waypoint_coords() };
	func_2059(&(Global_1108365->f_935.f_36), 1);
	Global_1108365->f_935.f_20 = 0;
	if (Global_1108365->f_935.f_27 == -1)
	{
		return false;
	}
	if (func_176(vVar0))
	{
		func_1739();
		return false;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar4 = int_to_playerindex(iVar3);
		if ((!_network_is_player_index_valid(iVar4) || !network_is_player_active(iVar4)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar4))
		{
		}
		else if (iVar4 == player_id() && func_1151(vVar0, Global_35) <= (150f * 2f))
		{
			Global_1108365->f_935.f_20 = 1;
			func_1739();
			return false;
		}
		else if (func_1151(vVar0, func_49(iVar4)) <= 150f)
		{
			Global_1108365->f_935.f_20 = 1;
			func_1739();
			return false;
		}
		iVar3++;
	}
	vVar0.f_2 = _get_heightmap_bottom_z_for_position(vVar0.x, vVar0.y);
	request_collision_at_coord(vVar0);
	if (_0x6bfbdc46139c45ab(vVar0) && func_2060(&vVar0, 9999f))
	{
	}
	else
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_1739();
		}
		return false;
	}
	_0xcf213a5fc3abfc08(vVar0.x, vVar0.y, (50f * 2f));
	vVar5 = { 50f, 50f, 50f };
	if (!is_navmesh_loaded_in_area(vVar0 - vVar5, vVar0 + vVar5))
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_1739();
		}
		return false;
	}
	Global_1108365->f_935.f_4 = 0;
	if (!get_safe_coord_for_ped(vVar0, false, &(Global_1108365->f_935.f_24), 16))
	{
		Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
		func_1739();
		return false;
	}
	func_1739();
	return true;
}

int func_1744(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 18;
		case 10:
			return 15;
		case 8:
			return 16;
		case 9:
			return 17;
		default:
			break;
	}
	return -1;
}

bool func_1745(int iParam0)
{
	if (func_1737())
	{
		return false;
	}
	iVar0 = -1;
	iVar1 = func_2061(iParam0, player_id(), &iVar0);
	if (iVar1 != 0)
	{
		return false;
	}
	iVar2 = 0;
	if (!func_2062(iParam0))
	{
		iVar3 = func_2064(func_2063(iParam0));
		if (iVar3 == -1)
		{
			return false;
		}
		iVar2 = (iVar3 - 2);
		iVar2 = func_2065(iParam0, iVar2);
	}
	else
	{
		iVar2 = func_2066(iParam0, Global_35);
		iVar1 = func_2067(iParam0, iVar2);
		if (iVar1 != 0)
		{
			return false;
		}
	}
	iVar4 = func_2068(iParam0, iVar2);
	iVar1 = func_2069(iVar4);
	if (iVar1 != 0)
	{
		return false;
	}
	Var5 = { func_2070(iParam0, iVar2, iVar4) };
	iVar1 = func_2071(Var5);
	if (iVar1 != 0)
	{
		return false;
	}
	return true;
}

void func_1746(int iParam0, int iParam1)
{
	if (!func_77(*iParam0, iParam1))
	{
		return;
	}
	func_285(iParam0, iParam1);
}

void func_1747(var uParam0, int iParam1)
{
	if (func_77(*uParam0, iParam1))
	{
		return;
	}
	func_78(uParam0, iParam1);
}

bool func_1748(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_1749(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	switch (Param0.f_16.f_4)
	{
		case 69:
		case 70:
			return 1;
		case 72:
			return 2;
		case 96:
			return 3;
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 85:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_1750(int iParam0)
{
	Var11 = { func_1080(iParam0) };
	iVar46 = _0x901e0dc25080c8b9(Var11.f_16.f_14);
	switch (Var11.f_16.f_4)
	{
		case 69:
			Var0.f_4 = 3;
			Var0.f_5 = iVar46;
			Var0.f_6 = Var11.f_16.f_7;
			func_1759(&Var0, Var11.f_16.f_14);
			break;
		case 70:
			func_1122(iVar46);
			break;
	}
}

void func_1751(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	iVar35 = _0x901e0dc25080c8b9(player_id());
	if (_0x4be6c13a45cca8ec(iVar35) == player_id())
	{
		func_2072();
		if (!func_2073(Var0.f_16.f_14))
		{
			Var0.f_16.f_4 = 73;
			Var0.f_16.f_14 = Var0.f_16.f_14;
			func_1107(Var0.f_16, func_2074(player_id()), 0, 0);
			return;
		}
		Var0.f_16.f_4 = 75;
		func_1107(Var0.f_16, func_2074(player_id()), 0, 0);
		return;
	}
	Var36 = { Var0.f_16 };
	Var36 = 2;
	Var36.f_4 = 74;
	Var36.f_15 = player_id();
	vVar55 = { 0f, 0f, 0f };
	fVar58 = 0f;
	func_377(func_376(), vVar55, fVar58, 0, 1, func_2074(_0x4be6c13a45cca8ec(iVar35)), Var36);
}

void func_1752(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	func_2075(Var0.f_8, Var0.f_10, Var0.f_13, 0, 1);
	if (func_254())
	{
		func_255();
	}
}

void func_1753(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	func_2076(Var0.f_16.f_15, -1);
}

void func_1754(int iParam0)
{
	Var0 = { func_1080(iParam0) };
	Var35.f_8 = -1;
	Var35.f_8.f_1 = -1;
	Var35.f_8 = { Var0.f_8 };
	vVar49.f_1 = -1;
	vVar49.f_2 = -1;
	func_517(Var0.f_8, &vVar49);
	iVar52 = vVar49.y;
	if (!func_2077(iVar52))
	{
		func_2075(Var0.f_8, Var0.f_10, Var0.f_13, 0, 0);
		if (func_325(Var35.f_8))
		{
			func_1407(func_2078(iVar52), Var35.f_8, -1);
		}
	}
	else
	{
		Var35.f_4 = 1;
		iVar53 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam0]->f_25);
		iVar54 = (Global_1296859->f_21 - (iVar53 - (Global_1901947->f_308.f_169 / 1000)));
		iVar56 = 0;
		if (_network_is_player_index_valid(Var0.f_16.f_1))
		{
			iVar55 = Var0.f_16.f_1;
			iVar56 = Global_1108365->f_34[iVar55]->f_9;
		}
		else
		{
			iVar56 = 0;
			iVar55 = -1;
		}
		switch (iVar52)
		{
			case 18:
				Var35.f_5 = 0;
				func_2079(&uVar57, 0);
				break;
			case 20:
				_0xf37a2149bc9a8a27(-1522841992, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 1;
				func_1104(&uVar57, Var0.f_16.f_16, 0);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 21:
				_0xf37a2149bc9a8a27(2112282570, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 2;
				func_1104(&uVar57, Var0.f_16.f_16, 0);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 28:
				_0xf37a2149bc9a8a27(1403358139, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 3;
				_0x31010318ba9897ac(&uVar57, Var0.f_16.f_1);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 19:
				Var35.f_5 = 4;
				func_1419(&uVar57, 1);
				break;
			case 29:
				Var35.f_5 = 5;
				func_1419(&uVar57, 1);
				break;
		}
		Var35.f_7 = uVar57;
		Var35.f_6 = player_id();
		Var35 = { Var0.f_16 };
		Var35.f_10 = Var0.f_16.f_6;
		Var35.f_11 = Var0.f_16.f_16;
		Var35.f_12 = Var0.f_16.f_9;
		if (iVar52 != 18 && iVar52 != 19)
		{
			func_2080(2);
		}
		if (iVar52 != 28)
		{
			Var35.f_11 = _0x901e0dc25080c8b9(Var0.f_16.f_1);
			func_1108(Var35.f_5, &uVar57);
		}
		else
		{
			if (Var0.f_16.f_15 == Var35.f_6)
			{
				Var35.f_1 = Var0.f_16.f_14;
			}
			else
			{
				Var35.f_1 = Var0.f_16.f_15;
			}
			_0x31010318ba9897ac(&uVar57, player_id());
		}
		if (_0x179a6f0ee2e79026(&uVar57))
		{
			func_1109(&Var35, &uVar57);
		}
	}
	if (func_254())
	{
		func_255();
	}
}

int func_1755()
{
	return Global_1071686->f_16.f_2;
}

void func_1756()
{
	if (func_1755() == -1)
	{
		return;
	}
	func_843(Global_1071686->f_16.f_2.f_1);
	vVar0 = -1;
	Global_1071686->f_16.f_2 = { vVar0 };
}

void func_1757(int iParam0)
{
	Global_1071686->f_16.f_2 = iParam0;
}

void func_1758(int iParam0)
{
}

void func_1759(var uParam0, int iParam1)
{
	*uParam0 = 22;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar0, iParam1);
	trigger_script_event(1, uParam0, 11, 7, &uVar0);
}

bool func_1760(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_1761(int iParam0)
{
	return (Global_1071686->f_22973.f_3 && iParam0) != 0;
}

char* func_1762(int iParam0, bool bParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_559(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
		}
		else
		{
			sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_559(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
			return func_460(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	}
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	return func_460(sVar0, iParam2);
}

char* func_1763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

bool func_1764(char* sParam0)
{
	return _0xd4022c7286b0dfa2(sParam0, 100, 22);
}

bool func_1765(int iParam0, char* sParam1)
{
	sVar0 = get_player_name(iParam0);
	iVar1 = get_length_of_literal_string(sVar0);
	if (compare_strings(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

bool func_1766(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (_0xc088ff658b2e51da() - 1))
	{
		if (&Global_1194053->f_503[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1767(int iParam0)
{
	if (func_2081(iParam0, 1))
	{
		func_2082(iParam0);
	}
	func_2083(iParam0, 1);
}

int func_1768(int iParam0, int iParam1)
{
	if (Global_1194053->f_1 != 0)
	{
		return 1;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			_0x0a04a07bc3074edb(1);
		}
		else
		{
			_0x0a04a07bc3074edb(0);
		}
	}
	func_2084(iParam0);
	iVar0 = _0xc088ff658b2e51da();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (&Global_1194053->f_503[iVar1] == iParam0)
		{
			Global_1194053->f_492 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1194053->f_14 = { Global_1194053->f_503[Global_1194053->f_492]->f_19 };
	Global_1194053->f_14.f_7 = iParam0;
	if (network_is_gamer_in_my_session(&(Global_1194053->f_14)))
	{
		iVar2 = network_get_player_from_gamer_handle(&(Global_1194053->f_14));
		if (network_is_player_active(iVar2))
		{
			iVar3 = _0x901e0dc25080c8b9(iVar2);
			Global_1194053->f_14.f_9 = iVar3;
		}
	}
	func_1769(4);
	func_1770(32);
	func_1767(4);
	Var4 = { func_1882() };
	if (network_are_handles_the_same(&(Global_1194053->f_503[iVar1]->f_19), &Var4) && iParam1 == 1)
	{
		func_1770(16);
	}
	return 1;
}

void func_1769(int iParam0)
{
	Global_1194053->f_1 = iParam0;
}

void func_1770(int iParam0)
{
	func_78(&(Global_1194053->f_3), iParam0);
}

void func_1771(int iParam0, bool bParam1)
{
	func_2083(iParam0, 2);
	if (bParam1)
	{
		func_2083(iParam0, 4);
	}
	else if (func_2081(iParam0, 4))
	{
		func_2085(iParam0, 4);
	}
}

void func_1772(int iParam0)
{
	Global_1194053->f_2 = iParam0;
}

bool func_1773(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

bool func_1774()
{
	return Global_1915715->f_20643;
}

int func_1775(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_2086())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_1776(int iParam0)
{
	return func_327(&(Global_1956200->f_1565), iParam0, 1);
}

bool func_1777(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_497(vParam0.z, 216050813))
	{
		if (!_unlock_is_unlocked(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_1778(int iParam0)
{
	iVar0 = iParam0;
	return func_2087(iVar0);
}

int func_1779(int iParam0)
{
	iVar0 = iParam0;
	return func_2088(iVar0);
}

int func_1780(int iParam0, bool bParam1)
{
	if (!func_1478(iParam0))
	{
		return 0;
	}
	Var0 = { func_989(bParam1) };
	if (func_802(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_802(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_802(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_802(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_802(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_1781(int iParam0, bool bParam1)
{
	Var0 = { func_989(bParam1) };
	return func_1480(Var0, func_1138(iParam0), 0, bParam1);
}

bool func_1782(var uParam0)
{
	return uParam0->f_15 >= func_2089(uParam0->f_13);
}

bool func_1783(var uParam0)
{
	return _unlock_is_visible(uParam0->f_2);
}

char* func_1784(int iParam0)
{
	iVar0 = iParam0;
	return func_2090(iVar0);
}

bool func_1785(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

void func_1786(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bVar0 = func_2091(iParam0);
	if (func_1449())
	{
		_databinding_write_data_bool(uParam1->f_47, false);
		_databinding_write_data_bool(uParam1->f_46, false);
		_databinding_write_data_bool(uParam1->f_50, true);
		_databinding_write_data_bool(uParam1->f_49, false);
		_databinding_write_data_bool(uParam1->f_48, false);
		func_1793(uParam1, &Param2);
		return;
	}
	func_1793(uParam1, &Param2);
	if (bVar0)
	{
		func_2092(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	else
	{
		func_2093(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	_databinding_write_data_bool(uParam1->f_46, (bVar0 && func_1475()));
	_databinding_write_data_bool(uParam1->f_47, ((bVar0 && func_1475()) && func_2094(0)));
	_databinding_write_data_bool(uParam1->f_48, (Param2.f_22 && func_1475()));
	_databinding_write_data_bool(uParam1->f_49, ((Param2.f_22 && func_1475()) && func_2094(3)));
	_databinding_write_data_bool(uParam1->f_50, bVar0);
	_databinding_write_data_string(uParam1->f_51, func_2096(func_2095(iParam0)));
}

bool func_1787(int iParam0)
{
	return Global_1940311->f_1433.f_4189.f_2086 == iParam0;
}

void func_1788(var uParam0, var uParam1, int iParam2)
{
	func_2097(iParam2, uParam1);
	func_1793(uParam0, uParam1);
}

void func_1789(int iParam0, var uParam1, struct<34> Param2, var uParam36)
{
	func_2098(uParam1, Param2);
	_databinding_write_data_bool(uParam1->f_46, false);
	_databinding_write_data_bool(uParam1->f_47, false);
	_databinding_write_data_bool(uParam1->f_48, false);
	_databinding_write_data_bool(uParam1->f_49, false);
	_databinding_write_data_bool(uParam1->f_50, func_1470(&uParam36, 1));
	_databinding_write_data_string(uParam1->f_51, func_2096(func_2095(iParam0)));
}

bool func_1790(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_518(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

void func_1791(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_11, iParam0);
}

int func_1792(int iParam0)
{
	if (!func_1136(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1448(iParam0, 1)])->f_7;
}

void func_1793(var uParam0, var uParam1)
{
	_databinding_write_data_string(uParam0->f_2, uParam1->f_11);
	_databinding_write_data_string(uParam0->f_3, uParam1->f_12);
	_databinding_write_data_hash_string(uParam0->f_4, uParam1->f_9);
	_databinding_write_data_hash_string(uParam0->f_5, uParam1->f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_2099(uParam1->f_1, uParam1->f_13));
	_databinding_write_data_hash_string(uParam0->f_6, *uParam1);
	_databinding_write_data_bool(uParam0->f_7, func_2100(uParam1));
	_databinding_write_data_bool(uParam0->f_34, uParam1->f_22);
	_databinding_write_data_bool(uParam0->f_12, uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_13, !uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_35, func_2101(uParam1));
	_databinding_write_data_bool(uParam0->f_14, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_15, uParam1->f_30);
	_databinding_write_data_bool(uParam0->f_16, uParam1->f_29);
	_databinding_write_data_bool(uParam0->f_17, uParam1->f_31);
	_databinding_write_data_string(uParam0->f_18, func_2102(uParam1));
	_databinding_write_data_bool(uParam0->f_19, uParam1->f_24);
	_databinding_write_data_bool(uParam0->f_20, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_21, uParam1->f_25);
	_databinding_write_data_bool(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	_databinding_write_data_bool(uParam0->f_23, !uParam1->f_14);
	_databinding_write_data_bool(uParam0->f_24, (!uParam1->f_14 && func_2094(4)));
	_databinding_write_data_string(uParam0->f_25, func_2103(uParam1));
	_databinding_write_data_bool(uParam0->f_26, func_2104(uParam1));
	_databinding_write_data_bool(uParam0->f_27, func_2105(uParam1));
	_databinding_write_data_bool(uParam0->f_28, func_2106(uParam1));
	_databinding_write_data_bool(uParam0->f_29, (uParam1->f_31 && func_2106(uParam1)));
	_databinding_write_data_bool(uParam0->f_30, (uParam1->f_25 && func_2106(uParam1)));
	if (uParam1->f_26)
	{
		_databinding_write_data_string(uParam0->f_31, func_464(0));
		_databinding_write_data_string(uParam0->f_32, func_2107(0));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_31, func_464(func_2108(uParam1->f_17)));
		_databinding_write_data_string(uParam0->f_32, func_2107(func_2109(uParam1->f_17)));
	}
	_databinding_write_data_int(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		_databinding_write_data_string(uParam0->f_43, func_2096(uParam1->f_16));
	}
	_databinding_write_data_int(uParam0->f_36, uParam1->f_13);
	_databinding_write_data_int(uParam0->f_38, uParam1->f_15);
	_databinding_write_data_int(uParam0->f_40, func_2089(uParam1->f_13));
	_databinding_write_data_bool(uParam0->f_10, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_11, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

int func_1794()
{
	return Global_1940311->f_1433.f_4189.f_2087;
}

char* func_1795(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1796(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1797(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1798(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

int func_1799(int iParam0)
{
	if (func_602(iParam0, 0))
	{
		if (func_497(iParam0, -1242251796))
		{
			if (func_497(iParam0, 2060589226))
			{
				return func_2110();
			}
			return func_2111();
		}
		else if (func_497(iParam0, 1919582297))
		{
			return func_1811();
		}
		else if (func_497(iParam0, 1647670816))
		{
			return func_2112();
		}
		else if (func_497(iParam0, 1147021565))
		{
			return func_1814();
		}
	}
	if (Global_1940144->f_12)
	{
		return func_2111();
	}
	else
	{
		return func_1814();
	}
	return func_1814();
}

bool func_1800(int iParam0)
{
	return (iParam0 == 1401465909 || iParam0 == -1733092640);
}

int func_1801()
{
	return 234350720;
}

bool func_1802(int iParam0)
{
	if ((((((((((func_497(iParam0, 1147021565) || func_497(iParam0, -136654233)) || func_497(iParam0, -524514947)) || func_497(iParam0, -1238310989)) || func_497(iParam0, 1765172170)) || func_497(iParam0, 1490540191)) || func_497(iParam0, 1573112293)) || func_497(iParam0, -1242251796)) || func_497(iParam0, 1919582297)) || func_497(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_1803()
{
	return 234086528;
}

int func_1804()
{
	return 234339573;
}

int func_1805()
{
	return 226211840;
}

int func_1806()
{
	return 234596496;
}

int func_1807()
{
	return 150191252;
}

int func_1808()
{
	return 217554935;
}

int func_1809()
{
	return 234596352;
}

int func_1810()
{
	return 167247871;
}

int func_1811()
{
	return 99859463;
}

int func_1812()
{
	return 233516164;
}

int func_1813()
{
	return 232407015;
}

int func_1814()
{
	return 234339543;
}

int func_1815()
{
	return 234348672;
}

bool func_1816(int iParam0)
{
	return func_194(Global_1940144->f_7, iParam0);
}

bool func_1817(bool bParam0)
{
	if (func_1816(1))
	{
		if (bParam0)
		{
			func_1166("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1816(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_2113(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_1166("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_1166("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_1816(4194304))
	{
		return false;
	}
	return true;
}

bool func_1818(bool bParam0, bool bParam1)
{
	if (_is_ped_carrying(Global_34))
	{
		_0x6b67320e0d57856a(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_1166("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_1819(bool bParam0, bool bParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_34))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_34, true))
	{
		if (!is_ped_in_any_vehicle(Global_34, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_34);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_1166("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_1166("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_77(bParam1, 32) && !is_ped_on_mount(Global_34))
		{
			if (bParam2 || _0x2963b5c1637e8a27(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_34))
	{
		return false;
	}
	return true;
}

bool func_1820(int iParam0, int iParam1)
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

bool func_1821(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_1822(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_1823()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_1824(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

bool func_1825(int iParam0, int iParam1)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_1335(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1001("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1003(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_2114(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1002(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1002(iVar1);
	}
	return false;
}

bool func_1826(int iParam0)
{
	if (!func_602(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_985(iParam0);
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
	iVar1 = func_505(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_2115(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_2116(iParam0);
	iVar2 = func_2115(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

int func_1827(int iParam0, int iParam1)
{
	if (!func_325(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_513(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_1316(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_2117(iVar1);
			}
			break;
		case 3:
			iVar3 = func_2118(iVar5);
			iVar4 = func_2119(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_2120(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1828(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_1763(func_2121(iParam0, iParam1, bParam2)));
}

struct<8> func_1829(int iParam0, int iParam1)
{
	return func_2121(iParam0, iParam1, 1);
}

bool func_1830(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && &Global_1211392->f_48[iParam0]->f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1831(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_1832(int iParam0)
{
	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1]->f_4 == 0)
			{
			}
			else if (func_176(Global_17411.f_2966.f_1[iVar1]->f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_176((*Global_1211392->f_48[iParam0])[iVar2]->f_1))
					{
					}
					else
					{
						fVar0 = func_1151(Global_17411.f_2966.f_1[iVar1]->f_1, (*Global_1211392->f_48[iParam0])[iVar2]->f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_2122(4))
	{
		return false;
	}
	if (func_1835())
	{
		return true;
	}
	if (func_1408())
	{
		return false;
	}
	if (func_1715(1, 255))
	{
		return false;
	}
	if (func_325(func_1398()) && Global_1211392->f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_1833(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_1494(&(Global_1211392->f_48[iParam0]->f_18[iVar0]), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1834(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_2123(&(Global_1211392->f_48[iParam0]->f_18[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1835()
{
	return func_2124(func_721(0));
}

bool func_1836(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
	}
	return _is_metaped_using_component(iParam0, iParam1);
}

int func_1837()
{
	if (_is_ped_carrying(Global_34))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_2125(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_2125(iVar0)) || _is_weapon_lasso(iVar0))
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

int func_1838(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

void func_1839(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_2126(iParam0);
	iVar1 = func_1838(iVar0);
	if (iVar1 != iParam0)
	{
		func_2127(iVar1, 4);
	}
	if (!func_2128(iParam0))
	{
		return;
	}
	if (func_2129(iParam0))
	{
		return;
	}
	func_2127(iParam0, 4);
	func_2130(iParam0, bParam1);
	if (!func_2131(iParam0))
	{
		func_2132(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_2133(0, 0, 1))
		{
			func_2134(1, 6);
		}
	}
}

bool func_1840(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1940144->f_26 = 1;
		return true;
	}
	_0xd962f8579d702db5();
	return false;
}

void func_1841(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_497(iParam0, 1573112293) || func_497(iParam0, 672467738)) || func_497(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_567(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_2135(0, Var22.f_2);
				func_2136(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_2135(2, Var22.f_2);
				func_2137(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_2135(1, Var22.f_2);
				func_2138(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_2139(to_float(Var22.f_2), Var22.f_5);
				func_2140(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_2139(to_float(Var22.f_2), Var22.f_5);
				func_2140(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_2139(to_float(Var22.f_2), Var22.f_5);
				func_2140(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_2141(to_float(Var22.f_3), Var22.f_4);
				func_2142(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_2143(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_497(iParam0, -537818634))
		{
			func_1358(func_2144(-704089207), 1);
		}
		if (func_497(iParam0, -1457797660))
		{
			func_1358(func_2144(-1909697259), 1);
		}
		if (bVar38)
		{
			func_1358(func_2144(704570463), 1);
		}
		switch (iParam0)
		{
			case -1735850413:
			case -241345764:
				chal_add_goal_progress_int(-1823988672, 1517929953, 1);
				break;
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

int func_1842(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_602(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_2145(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1335(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_2146(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_1494(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_2147(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_1018(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_1018(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_1842(iParam0, func_1018(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_567(iParam0) == -427144552)
	{
		if (!func_2148(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1020(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_797(iParam0, 0, 0) };
		if (func_1019(0) && Var7.f_4 == 1084182731)
		{
			func_2149(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_1019(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_2146(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_1843(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

bool func_1844()
{
	if (Global_1952637->f_3485)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1952637->f_3483)) < 1250)
	{
		return true;
	}
	if (func_901())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	return false;
}

int func_1845(int iParam0)
{
	iVar0 = func_985(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_497(iParam0, 160827531)) || func_497(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_1846(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1852(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1847(int iParam0)
{
	if (-1829635046 == func_2150(81053684))
	{
		if (func_1852(iParam0))
		{
			return true;
		}
	}
	else if (func_2151(-525676072, iParam0) || func_497(func_1325(1742327865), -1303648999))
	{
		if (func_1852(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_1848()
{
	iVar0 = 1549701178;
	switch (func_1837())
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

int func_1849()
{
	iVar0 = 614608656;
	switch (func_1837())
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

int func_1850()
{
	iVar0 = -1832677570;
	switch (func_1837())
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

int func_1851()
{
	iVar0 = 1623252156;
	switch (func_1837())
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

bool func_1852(int iParam0)
{
	if (func_2151(81053684, iParam0))
	{
		return true;
	}
	if (func_2151(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

int func_1853(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637->f_3334.f_28;
		case 81053684:
			return Global_1952637->f_3334.f_30;
		case -525676072:
			return Global_1952637->f_3334.f_29;
		case -1719060085:
			return Global_1952637->f_3334.f_31;
		case 1388798186:
			return Global_1952637->f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637->f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637->f_3334.f_27;
			}
			else
			{
				return func_2152();
			}
			break;
	}
	return 0;
}

int func_1854(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637->f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637->f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637->f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
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

bool func_1855(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637->f_3334.f_26)
	{
		if (iParam0 == &Global_1952637->f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1856(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_1855(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_2153(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_2154(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_1857()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = &Global_1952637->f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637->f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637->f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637->f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637->f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637->f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637->f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637->f_3334.f_26;
}

bool func_1858(int iParam0)
{
	return func_2156(func_2155(iParam0));
}

void func_1859(bool bParam0, int iParam1)
{
	if (!func_602(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_2157(iParam1, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_1075(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_1076(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_1763(func_1893(iVar7));
		}
		else
		{
			iVar8 = func_2158(iParam1);
			if (func_602(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_1711(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_1075(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_1076(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_1763(func_1893(iVar7));
		}
		else
		{
			iVar9 = func_2158(iParam1);
			if (func_602(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_1711(iParam1));
		}
	}
	sVar10 = func_460(_create_var_string(10, sVar3, sVar5), iVar6);
	func_2159(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

bool func_1860(int iParam0, int iParam1)
{
	iVar0 = func_985(iParam1);
	iVar1 = func_985(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_2160(iParam1) && func_2160(iParam0))
	{
		return true;
	}
	return false;
}

void func_1861(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_2161(iParam0, 0, 0, bParam3, bParam5);
	func_1529(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

void func_1862(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_985(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_1654(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_2162(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_1863(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1864(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_943() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_1657(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_951(iParam0, func_492(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1865(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_152(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2163(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_1076(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_497(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_1076(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_2164(-1, 0, 6);
			func_153(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_284(0, 1);
	}
}

bool func_1866(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_2165(Global_34, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1867()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_1498(2);
		return false;
	}
	if (!func_62())
	{
		func_1498(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_1498(3);
		return false;
	}
	Var0 = { func_721(0) };
	if (func_325(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_1554(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_2166(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_1827(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_1828(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_1498(iVar2);
			return false;
		}
	}
	if (func_2167())
	{
		func_1498(4);
		return false;
	}
	if (func_1715(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_1498(5);
		return false;
	}
	if (func_1089(131072, 255))
	{
		func_1498(7);
		return false;
	}
	if (func_2168())
	{
		func_1498(8);
		return false;
	}
	return true;
}

bool func_1868(int iParam0, bool bParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_77(bParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, bParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_1869(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_1089(32, iParam0);
}

bool func_1870(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_1871(bool bParam0)
{
	if (bParam0)
	{
		func_2169(4);
	}
	else
	{
		func_1543(4);
	}
}

void func_1872(bool bParam0)
{
	if (!(bParam0 && Global_1915715->f_22504))
	{
		if (bParam0)
		{
			_0x6a564540fac12211(2, 1807503187);
		}
		else
		{
			_0x766315a564594401(2, 1807503187, 0);
		}
	}
	Global_1915715->f_22504 = bParam0;
}

bool func_1873(int iParam0, int iParam1, int iParam2)
{
	return func_194((*Global_1196567)[iParam2][iParam0], iParam1);
}

bool func_1874(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_1875(int iParam0)
{
	if (func_1877(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1876(int iParam0)
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

bool func_1877(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_1878()
{
	if (!func_62())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

int func_1879(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

bool func_1880(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_1881(var uParam0, var uParam1, char[32] cParam2, struct<34> Param10)
{
	func_1364(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_596(15), &(Param10.f_16));
	if (Param10.f_30)
	{
		uParam0->f_19 = _databinding_add_hash_array(*uParam0, func_596(32));
	}
	else
	{
		uParam0->f_19 = _databinding_add_string_array(*uParam0, func_596(32));
	}
	uParam0->f_20 = _databinding_add_data_bool(*uParam0, func_596(30), Param10.f_24);
	uParam0->f_21 = _databinding_add_data_bool(*uParam0, func_596(31), Param10.f_25);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_596(33), Param10.f_27);
	uParam0->f_25 = _databinding_add_data_int(*uParam0, func_596(35), Param10.f_28);
	uParam0->f_24 = _databinding_add_data_int(*uParam0, func_596(34), Param10.f_28);
	uParam0->f_26 = _databinding_add_data_bool(*uParam0, func_596(36), Param10.f_31);
	uParam0->f_27 = _databinding_add_data_bool(*uParam0, func_596(37), Param10.f_32);
	uParam0->f_28 = _databinding_add_data_hash(*uParam0, func_596(38), Param10.f_33);
}

struct<7> func_1882()
{
	network_get_local_handle(&Var0);
	return Var0;
}

int func_1883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_1884(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			return 1;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 2;
				default:
					break;
			}
			return 0;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 9;
				case 3:
					return 7;
				default:
					break;
			}
			return 9;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				case 2:
					return 10;
				case 3:
					return 8;
				default:
					break;
			}
			return 10;
		case 4:
			return 13;
		case 5:
			return 6;
		default:
			break;
	}
	return 0;
}

bool func_1885(int iParam0, int iParam1)
{
	if (iParam0 == 29)
	{
		return true;
	}
	switch (iParam1)
	{
		case 0:
			return iParam0 == 3;
		case 1:
			return iParam0 == 2;
		case 2:
			return (iParam0 == 9 || iParam0 == 7);
		case 3:
			return (iParam0 == 10 || iParam0 == 8);
		case 4:
			return iParam0 == 13;
		case 5:
			return iParam0 == 6;
	}
	return false;
}

int func_1886(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -770404614;
		case 2:
			return -513004119;
		case 3:
			return 1182529483;
		case 4:
			return 399284845;
		default:
			break;
	}
	return -58320738;
}

int func_1887(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1830321594;
		case 2:
			return -262750941;
		case 3:
			return -430305033;
		case 4:
			return 405992616;
		case 5:
			return 1745359169;
		default:
			break;
	}
	return -2116686621;
}

int func_1888(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 613649924;
		case 2:
			return 1010622428;
		case 3:
			return 1565991440;
		case 4:
			return 561914803;
		default:
			break;
	}
	return -1460433821;
}

int func_1889(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2086645560;
		case 2:
			return -1890764313;
		case 3:
			return 666286870;
		case 4:
			return -1538299703;
		default:
			break;
	}
	return 737677340;
}

int func_1890(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -320743214;
		case 2:
			return 1076574759;
		case 3:
			return -764747645;
		default:
			break;
	}
	return -984828048;
}

int func_1891(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1992418159;
		case 2:
			return -259664361;
		case 3:
			return -2023244076;
		default:
			break;
	}
	return -520845604;
}

int func_1892(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -100997621;
		case 2:
			return 213894183;
		default:
			break;
	}
	return 1730798103;
}

struct<8> func_1893(int iParam0)
{
	if (func_1076(4, iParam0))
	{
		return *Global_17411.f_2625[iParam0];
	}
	StringCopy(&cVar0, _get_label_text_by_hash(func_1583(iParam0)), 64);
	return cVar0;
}

void func_1894(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "ALL HORSES";
			break;
		case 1:
		case 2:
			sVar0 = "ALL COACHES";
			break;
	}
	if (func_1001(sVar0, &iVar1, &uVar2, -1591664384, 0))
	{
		*uParam1 = uVar2;
		func_1002(iVar1);
	}
}

int func_1895(int iParam0)
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

bool func_1896(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	return false;
}

int func_1897(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2030355032:
			return 7;
		case -1771663379:
			return 4;
		case -1651618152:
			return 6;
		case -311956671:
			return 5;
		case 356361174:
			return 3;
		case 779169510:
			return 0;
		case 918497150:
			return 2;
		case 997958153:
			return 1;
		case 1090011026:
			return 8;
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

struct<8> func_1898(var uParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return cVar0;
	}
	Var8 = { func_2170(uParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_2171(uParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (compare_strings(&cVar0, func_2172(), false, -1) == 0)
	{
		StringCopy(&cVar0, _create_var_string(2, func_2173(Var8.f_22)), 64);
	}
	if (get_length_of_literal_string(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, _create_var_string(2, func_1988(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_1899(var uParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, var uParam6)
{
	Var22 = 1;
	Var22.f_1 = 1;
	Var22.f_2 = 1105014447;
	Var22.f_4 = -1;
	Var22.f_5 = -1;
	Var22.f_6 = -1;
	Var22.f_10 = -1;
	Var22.f_11 = -1;
	Var22.f_12 = -1;
	Var22.f_1 = 1;
	Var22.f_5 = 1582020365;
	Var22.f_6 = 1582020365;
	Var22.f_4 = 1433015236;
	Var22.f_8 = 1;
	Var22.f_9 = 1;
	Var22 = 1;
	StringCopy(&(Var22.f_16), sParam4, 64);
	Var22.f_24 = 1442026401;
	Var22.f_25 = -1218088854;
	Var22.f_26 = 0;
	func_1053(&uVar0, uParam0->f_2667, func_1571(sParam5), Var22);
	_databinding_add_data_int(uVar0, "InventoryIndex", iParam2);
	_databinding_add_data_hash(uVar0, func_596(72), 2077063536);
	_databinding_add_data_bool(uVar0, func_596(73), 1);
	_databinding_add_data_bool(uVar0, func_596(74), 1);
	_databinding_add_data_hash(uVar0, func_596(75), -2069910617);
	if (bParam1)
	{
		func_837(&(uParam0->f_2667), &uVar0);
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(*uParam6, iParam3, "pm_lobby_stable_horse_entry", uVar0);
}

char* func_1900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_STARTING_WEAPON_OPTION_DEFAULT";
		case 1:
			return "MP_STARTING_WEAPON_OPTION_GAMBLE";
		default:
			break;
	}
	return "MP_STARTING_WEAPON_OPTION_DEFAULT";
}

void func_1901(char[4] cParam0, char* sParam1, var uParam2, var uParam3)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_1 = 1;
	Var0.f_4 = 2084771291;
	Var0.f_6 = -600701932;
	Var0.f_5 = -600701932;
	StringCopy(&(Var0.f_16), sParam1, 64);
	Var0.f_24 = 590634476;
	Var0.f_25 = -460811553;
	Var0.f_26 = 0;
	func_1053(uParam2, *uParam3, *cParam0, Var0);
}

char* func_1902(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case -318976023:
			return "UGC_MST_LGNDB";
		case 772881414:
			return "UGC_MST_MNSHN";
		case 603385332:
			return "UGC_MST_DEL";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case -777132493:
			return "UGC_MST_PDR";
		case -163684180:
			return "UGC_MST_SOW";
		case -1649482077:
			return "UGC_MST_UIS";
		case -698288936:
			return "UGC_MST_PROT";
		case 909765192:
			return "UGC_MST_PDH";
		case 604251967:
			return "UGC_MST_FOU";
		case 1078150940:
			return "UGC_MST_AWIP";
		case 482206342:
			return "UGC_MST_LEG";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

int func_1903(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1531758713;
		case 2:
			return 1111531686;
		case 3:
			return 2020859843;
		case 4:
			return -1620727213;
		case 5:
			return 2039881012;
		case 6:
			return -1429661529;
		case 7:
			return -540128588;
		case 8:
			return -1224238785;
		case 9:
			return 1485653341;
		case 10:
			return 1437644330;
		case 11:
			return 1511892115;
		case 12:
			return 876516058;
		case 13:
			return -1676572483;
		case 14:
			return 1995067205;
		case 15:
			return 1155770894;
		default:
			break;
	}
	return 0;
}

char* func_1904(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_2174();
		case 1:
			return _create_var_string(2, "INVITES_HEADER");
		case 2:
			return _create_var_string(2, "LOG_HEADER");
		case 3:
			return _create_var_string(2, "LOG_HEADER");
		case 4:
			return _create_var_string(2, "DAILY_HEADER");
		case 5:
			return _create_var_string(2, "DAILY_HEADER");
		case 6:
			return _create_var_string(2, "PLAYERS_HEADER");
		case 22:
			return _create_var_string(2, "POSSE_INVITE_HEADER");
		case 7:
			return _create_var_string(2, "PLAYERS_OPTIONS_HEADER");
		case 8:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 9:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 10:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 11:
			return _create_var_string(2, "MATCHMAKING_HEADER");
		case 12:
			return _create_var_string(2, "POST_OFFICE_HEADER");
		case 13:
			return _create_var_string(2, "POSSE_HEADER");
		case 14:
			return _create_var_string(2, "POSSE_HEADER");
		case 15:
			return _create_var_string(2, "POSSE_HEADER");
		case 16:
			return _create_var_string(2, "POSSE_HEADER");
		case 17:
			return _create_var_string(2, "POSSE_HEADER");
		case 18:
			return _create_var_string(2, "POSSE_HEADER");
		case 19:
			return _create_var_string(2, "POSSE_HEADER");
		case 20:
			return _create_var_string(2, "POSSE_HEADER");
		case 21:
			return _create_var_string(2, "POSSE_VERSUS_INFIGHTING_HEADER");
		case 23:
			return _create_var_string(2, "POSSE_INVITE_HEADER");
		case 24:
			return _create_var_string(2, "STABLES_HEADER");
		case 25:
			return _create_var_string(2, "STABLES_HEADER");
		case 26:
			return _create_var_string(2, "OWNED_HORSES_HEADER");
		case 27:
			return _create_var_string(2, "HORSE_SPECIALTY_HEADER");
		case 28:
			return _create_var_string(2, "HORSE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 29:
			return _create_var_string(2, "HORSE_SPECIALTY_RACE_SELECTION_HEADER");
		case 30:
			return _create_var_string(2, "HORSE_SPECIALTY_COOP_SELECTION_HEADER");
		case 31:
			return _create_var_string(2, "HORSE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 32:
			return _create_var_string(2, "STABLES_HEADER");
		case 33:
			return _create_var_string(2, "OWNED_VEHICLES_HEADER");
		case 35:
			return _create_var_string(2, "VEHICLE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 36:
			return _create_var_string(2, "VEHICLE_SPECIALTY_RACE_SELECTION_HEADER");
		case 37:
			return _create_var_string(2, "VEHICLE_SPECIALTY_COOP_SELECTION_HEADER");
		case 38:
			return _create_var_string(2, "VEHICLE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 39:
			return _create_var_string(2, "CAMP_HEADER");
		case 42:
			return _create_var_string(2, "CAMP_LOCATION_HEADER");
		case 40:
			return _create_var_string(2, "CAMP_LOCATION_HEADER");
		case 41:
			return _create_var_string(2, "CAMP_HEADER");
		case 43:
			return _create_var_string(2, "ONLINE_OPTIONS_HEADER");
		case 44:
			return _create_var_string(2, "BOUNTY_HEADER_MP_OPEN_BOUNTIES");
		case 45:
			return _create_var_string(2, "BOUNTY_REPLAY_HEADER");
		case 46:
			return _create_var_string(2, "EMOTES_HEADER");
		case 47:
			return _create_var_string(2, "EMOTES_HEADER");
		case 48:
			return _create_var_string(2, "PLAYER_WALK_STYLES_HEADER");
		case 49:
		case 50:
		case 51:
		case 52:
			return _create_var_string(2, "MINIGAME_POKER_HEADER");
		case 53:
			return _create_var_string(2, "PLAYERS_HEADER");
		case 54:
			return _create_var_string(2, "MOONSHINE_LOCATIONS_HEADER");
		case 55:
		case 56:
			return _create_var_string(2, "CAMP_AND_PROPERTIES_HEADER");
		case 57:
			return _create_var_string(2, "PROPERTY_INVITE_HEADER");
		default:
			break;
	}
	return "NULL";
}

void func_1905(char* sParam0)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_3, sParam0);
}

void func_1906(struct<7> Param0, char* sParam7)
{
	if (!func_757(Param0))
	{
		return;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	iVar88 = network_get_player_from_gamer_handle(&Param0);
	iVar89 = iVar88;
	bVar90 = func_2175(&Param0) == false;
	if (is_string_null_or_empty(sParam7))
	{
		if (_network_is_player_index_valid(iVar88) && network_is_player_active(iVar88))
		{
			StringCopy(&(Var0.f_25), func_559(get_player_name(iVar88), 109029619), 128);
		}
	}
	else
	{
		StringCopy(&(Var0.f_25), sParam7, 128);
	}
	if (bVar90)
	{
		Var0.f_2 = func_920(iVar88, 1, -1, 0);
	}
	else
	{
		Var0.f_2 = 1105014447;
	}
	Var0.f_21 = 1;
	Var0.f_20 = 1292500213;
	Var0.f_19 = 469293194;
	if (bVar90)
	{
		if (_0x0ded260a1958a82e(iVar88))
		{
			Var0.f_20 = -2020914324;
		}
		else if (_0xaa35fd9abab490a3(iVar88) && _0xef6f2a35faaf2ed7(iVar88))
		{
			Var0.f_20 = -129728325;
		}
		else
		{
			iVar91 = _0x901e0dc25080c8b9(iVar88);
			if (_0xd6f6acf4392187fb(iVar91))
			{
				if (func_1432(iVar91))
				{
					if (func_1595(iVar88, &iVar92))
					{
						switch (iVar92)
						{
							case -482360895:
								Var0.f_20 = 202246788;
								break;
						}
					}
				}
				else if (_0x0f99f6436528a089(iVar91) && _0x424b17a7dc5c90bc(iVar88))
				{
					Var0.f_20 = 202246788;
				}
			}
		}
	}
	if (bVar90)
	{
		Var0.f_61 = 1;
		Var0.f_59 = -1693157378;
		Var0.f_60 = -1120556042;
		Var0.f_57 = 1;
		StringCopy(&(Var0.f_41), func_1070(iVar89), 128);
	}
	else
	{
		Var0.f_61 = 0;
		Var0.f_57 = 0;
	}
	func_1596(&(Global_1940311->f_1433.f_54.f_7), Var0);
}

int func_1907()
{
	if (func_2176(64))
	{
		return 0;
	}
	return 1;
}

int func_1908()
{
	if (func_2176(8))
	{
		return 0;
	}
	if (!_unlock_is_unlocked(2032476253))
	{
		return 0;
	}
	return 1;
}

int func_1909()
{
	if (func_2176(2))
	{
		return 0;
	}
	if (func_194(Global_1138962->f_137.f_1, 2))
	{
		if (!func_194(Global_1138962->f_145, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_1910()
{
	if (func_2176(32))
	{
		return 0;
	}
	if (!_unlock_is_unlocked(56612678))
	{
		return 0;
	}
	if (func_1629())
	{
		return 0;
	}
	if (func_1408())
	{
		return 0;
	}
	return 1;
}

int func_1911()
{
	if (func_2176(1))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(319332586))
	{
		return 2;
	}
	if (func_194(Global_1138962->f_137.f_1, 2))
	{
		if (!func_1974(2))
		{
			return 3;
		}
	}
	return 0;
}

void func_1912(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_86, bParam1);
			break;
		case 1:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_80, bParam1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_95, bParam1);
			break;
		case 2:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_96, bParam1);
			break;
		case 3:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_78, bParam1);
			break;
		case 4:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_81, bParam1);
			break;
		case 5:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_84, bParam1);
			break;
		case 6:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_93, bParam1);
			break;
		case 7:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_88, bParam1);
			break;
		case 8:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_87, bParam1);
			break;
		case 9:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_89, bParam1);
			break;
		case 10:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_91, bParam1);
			break;
	}
}

int func_1913()
{
	if (func_2176(16))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(199773012))
	{
		return 2;
	}
	return 0;
}

int func_1914()
{
	if (func_642())
	{
		return 8;
	}
	if (!_unlock_is_unlocked(1349034126))
	{
		return 2;
	}
	if (func_1958())
	{
		return 0;
	}
	if (!func_1629())
	{
		return 5;
	}
	if (func_2177(255))
	{
		return 4;
	}
	switch (Global_524288->f_40400)
	{
		case 1520184724:
			return 7;
	}
	if (func_2178() == 2)
	{
		return 6;
	}
	return 0;
}

bool func_1915()
{
	return (func_1835() || ((!func_1629() && !func_1408()) && !func_325(func_1398())));
}

bool func_1916()
{
	return func_2179() == 0;
}

int func_1917()
{
	if (func_642())
	{
		return 2;
	}
	return 0;
}

int func_1918()
{
	if (func_2176(4))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(-722216913))
	{
		return 2;
	}
	if (Global_1940311->f_242.f_1186 < 1)
	{
		return 3;
	}
	return 0;
}

void func_1919(bool bParam0)
{
	Global_1940311->f_1433.f_9184.f_243 = bParam0;
	Global_1940311->f_1433.f_9184.f_242 = !bParam0;
}

struct<7> func_1920()
{
	return Global_1940311->f_1433.f_8;
}

char* func_1921()
{
	return func_1995(Global_1940311->f_1433.f_8.f_7);
}

int func_1922(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!network_is_handle_valid(&uParam0))
	{
		return 0;
	}
	_copy_memory(Var0[0], &uParam0, 7);
	func_2180(&Var0, 1);
	return 1;
}

void func_1923(int iParam0)
{
	Global_1896738->f_368.f_1 = iParam0;
}

void func_1924(int iParam0)
{
	Global_1896738->f_368 = iParam0;
}

void func_1925(bool bParam0)
{
	if (Global_1896738->f_197.f_7 == bParam0)
	{
		return;
	}
	if (!_databinding_is_data_id_valid(Global_1896738->f_197) || !_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		return;
	}
	_databinding_write_data_bool(Global_1896738->f_197, false);
	_databinding_write_data_bool(Global_1896738->f_197.f_1, bParam0);
	_databinding_write_data_bool(Global_1896738->f_197.f_5, bParam0);
	_databinding_write_data_bool(Global_1896738->f_197.f_6, bParam0);
	Global_1896738->f_197.f_7 = bParam0;
}

struct<95> func_1926(bool bParam0)
{
	if (bParam0)
	{
		func_2181(&(Global_1940311->f_1433.f_157.f_2));
	}
	return Global_1940311->f_1433.f_157.f_2;
}

int func_1927(var uParam0)
{
	if (uParam0->f_3)
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return 0;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return 0;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return 0;
		}
		if (uParam0->f_1 != Global_1296859->f_15)
		{
			return 0;
		}
	}
	return 1;
}

void func_1928(int iParam0)
{
	Global_1940311->f_1433.f_157.f_206.f_3 = iParam0;
}

bool func_1929(var uParam0)
{
	return uParam0->f_3;
}

bool func_1930(var uParam0)
{
	if (uParam0->f_3)
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return false;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return false;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

bool func_1931(var uParam0)
{
	if (uParam0->f_3)
	{
		return true;
	}
	else
	{
		return _0x9be7dcb22d32ccbe(uParam0->f_1, player_id());
	}
	return false;
}

var func_1932(var uParam0)
{
	return func_2182(uParam0->f_5);
}

int func_1933(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	iVar0 = Global_1940311->f_1433.f_9184.f_4;
	if (iVar0 < 0)
	{
		return -1;
	}
	if (iVar0 >= 10)
	{
		return -1;
	}
	Global_1940311->f_1433.f_9184.f_5[iVar0] = iParam7;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_1 = iParam1;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_2 = iParam2;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_3 = { func_2183(sParam0) };
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_19 = iParam3;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_20 = iParam4;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_21 = iParam5;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_22 = iParam6;
	Global_1940311->f_1433.f_9184.f_4++;
	_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_3, Global_1940311->f_1433.f_9184.f_4 > 1);
	if (iVar0 == 0)
	{
		Global_1940311->f_1433.f_9184.f_239 = 1;
		Global_1940311->f_1433.f_9184 = 0;
		Global_1940311->f_1433.f_9184.f_1 = iParam1;
		Global_1940311->f_1433.f_9184.f_2 = 0;
		Global_1940311->f_1433.f_9184.f_3 = iParam1;
	}
	return iVar0;
}

void func_1934(int iParam0)
{
	Global_1940311->f_1433.f_157.f_206.f_2 = iParam0;
}

int func_1935(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1940311->f_1433.f_9184.f_4)
	{
		return 0;
	}
	Global_1940311->f_1433.f_9184.f_2 = Global_1940311->f_1433.f_9184;
	Global_1940311->f_1433.f_9184.f_3 = Global_1940311->f_1433.f_9184.f_1;
	Global_1940311->f_1433.f_9184 = iParam0;
	Global_1940311->f_1433.f_9184.f_1 = Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_1;
	if (!Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_22)
	{
	}
	Global_1940311->f_1433.f_9184.f_239 = 1;
	if (bParam1)
	{
		if (Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2 != -1)
		{
			_uistatemachine_request_transition(1433015236, Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2);
			Global_1940311->f_1433.f_9184.f_238 = 1;
		}
	}
	Global_1940311->f_1433.f_9184.f_236 = 1;
	return 1;
}

int func_1936(var uParam0, bool bParam1)
{
	if (func_1432(Global_1296859->f_15))
	{
		if (func_2184(player_id()) == 0)
		{
			return 0;
		}
		_0xc08aff658b2e51da(&iVar0);
		return func_2185(iVar0, uParam0, bParam1);
	}
	else
	{
		if (bParam1)
		{
			if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
			{
				return 0;
			}
			if (!_0x0f99f6436528a089(Global_1296859->f_15))
			{
				return 0;
			}
		}
		return func_2186(Global_1296859->f_15, uParam0, bParam1);
	}
	return 0;
}

void func_1937(var uParam0)
{
	Global_1940311->f_1433.f_157.f_2 = { *uParam0 };
}

void func_1938(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_2187(&(Global_1896738->f_5), iParam0);
	}
	else
	{
		func_2188(&(Global_1896738->f_5), iParam0);
	}
}

void func_1939(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_1))
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_1, bParam1);
}

bool func_1940(int iParam0)
{
	return func_2189(Global_1896738->f_5, iParam0);
}

void func_1941()
{
	func_2190(0);
	func_2191(0);
	func_2192();
	if (func_2193(&(Global_1896738->f_13)))
	{
		func_2194(&(Global_1896738->f_13));
	}
}

void func_1942()
{
	Global_1896738->f_13.f_6 = 0;
	Global_1896738->f_13.f_9 = 0;
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_4))
	{
		_databinding_write_data_string(Global_1896738->f_13.f_50.f_4, _create_var_string(2, "NM_GC_TEXT_CAMP_NONE"));
	}
}

bool func_1943(int iParam0, bool bParam1)
{
	if (!network_is_game_in_progress() || !network_is_in_session())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1137047->f_9[iVar0]->f_4.f_2 != 0 && Global_1137047->f_9[iVar0]->f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_1166("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_2196(func_2195(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_1166("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

Vector3 func_1944(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_328()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

int func_1945(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1896177107;
		case 7:
			return 2042309940;
		default:
			break;
	}
	return -1896177107;
}

int func_1946(int iParam0, int iParam1)
{
	Global_1896738->f_13.f_7 = iParam0;
	Global_1896738->f_13.f_8 = iParam1;
	Global_1896738->f_13.f_6 = 1;
	Global_1896738->f_13.f_9 = func_2198(func_2197(iParam1));
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_4))
	{
		_databinding_write_data_string(Global_1896738->f_13.f_50.f_4, _create_var_string(2, func_2199(iParam0, 0)));
	}
	return 1;
}

void func_1947(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		iVar0 = func_2200(-2040602682);
		func_2201(func_595(-2040602682, 0, iVar0));
		if ((!_0x595f028698072dd9(-1) && is_orbis_version()) || !_ugc_has_privilege())
		{
			func_2202(0);
			func_2203(func_1762(_0x901e0dc25080c8b9(player_id()), 0, 0));
		}
		else
		{
			func_2202(1);
		}
	}
	else
	{
		func_2201(0);
		func_2202(0);
		if (func_2204(&iVar1, &iVar2))
		{
			if (iVar2 != -1896177107)
			{
				iVar2 = -1896177107;
				func_1946(iVar1, iVar2);
			}
		}
		func_2203(func_1762(_0x901e0dc25080c8b9(player_id()), 0, 0));
	}
	func_2205(-1895608703);
	func_2207(func_2206(player_id(), 1), 1);
	if ((bParam1 && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_24)) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_12.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_12.f_23, -6116668);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_12.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_12.f_23, -2107252183);
		}
	}
}

void func_1948(bool bParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_41.f_24) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_41.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_41.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_41.f_23, 1513236523);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_41.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_41.f_23, 126620015);
		}
	}
}

void func_1949(bool bParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_99.f_24) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_99.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_99.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_99.f_23, -299269340);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_99.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_99.f_23, 1083456181);
		}
	}
}

bool func_1950(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	if (uParam0->f_4 && uParam0->f_3)
	{
		Var0.f_27 = 10;
		if (!_0xc087ff658b2e51da(uParam0->f_2, &Var0))
		{
			return false;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return false;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

bool func_1951(var uParam0)
{
	return uParam0->f_4;
}

bool func_1952(int iParam0, int iParam1)
{
	iVar0 = func_2208(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= func_2209())
	{
		return false;
	}
	if (Global_1940311->f_1433.f_1 != iParam1)
	{
		return false;
	}
	func_1935(iVar0, 1);
	return true;
}

void func_1953(int iParam0)
{
	Global_1896738->f_209 = iParam0;
}

void func_1954(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_1))
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_1, bParam1);
}

void func_1955()
{
	Global_1940311->f_1433.f_157.f_264.f_90 = -1;
}

bool func_1956(char* sParam0)
{
	if (!_databinding_is_data_id_valid(Global_1940311->f_1433.f_157.f_264.f_91))
	{
		return false;
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_91, sParam0);
	return true;
}

void func_1957()
{
	Global_1940311->f_1433.f_830.f_2.f_483 = 0;
	func_2210(&(Global_1940311->f_1433.f_830), 0);
	network_clear_found_gamers();
}

bool func_1958()
{
	return Global_1572887->f_6;
}

char* func_1959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PLAYERS_CATEGORY_NAME_NEARBY";
		case 1:
			return "PLAYERS_CATEGORY_NAME_FRIENDS";
		case 2:
			return "PLAYERS_CATEGORY_NAME_CREW";
		case 3:
			return "PLAYERS_CATEGORY_NAME_RECENT";
		default:
			break;
	}
	return "FILTER_ALL";
}

void func_1960()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		_databinding_write_data_bool(Global_1896738->f_197.f_1, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197))
	{
		_databinding_write_data_bool(Global_1896738->f_197, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_3))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_3, 1433015236);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_4))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_4, -1996395310);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_2))
	{
		_databinding_write_data_string(Global_1896738->f_197.f_2, "");
	}
}

void func_1961(bool bParam0)
{
	func_1968(0, 1);
	if (bParam0)
	{
		func_1968(1, 1);
	}
}

void func_1962()
{
	Global_1940311->f_1433.f_1316 = -1;
	_copy_memory(&(Global_1940311->f_1433.f_1316.f_1), &uVar0, 7);
	func_2211();
}

int func_1963(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -682748;
		case 1:
			return 1357161730;
		case 2:
			return 1581179681;
		case 3:
			return -215258135;
		case 4:
			return -987049424;
		case 5:
			return 892234183;
		case 6:
			return -1554232707;
		case 7:
			return 1538293636;
		case 8:
			return -1992167326;
		case 9:
			return -1884014371;
		case 10:
			return -1871413878;
		case 11:
			return 1483778247;
		case 12:
			return -724534761;
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

int func_1964()
{
	return Global_1940311->f_1433.f_2643.f_47;
}

void func_1965(int iParam0, int iParam1)
{
	iVar0 = func_2198(func_2197(iParam1));
	_databinding_write_data_int(Global_1940311->f_1433.f_2643.f_43, iVar0);
}

void func_1966()
{
	_0x3bf0767cf33fcc88(Global_1940311->f_1433.f_2643.f_42);
}

char* func_1967(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "CAMP_LOCATION_CATEGORY_NEARBY";
		case 2:
			return "TITHE_AMBARINO";
		case 3:
			return "TITHE_LEMOYNE";
		case 4:
			return "TITHE_WEST_ELIZABETH";
		case 5:
			return "TITHE_NEW_HANOVER";
		case 6:
			return "TITHE_NEW_AUSTIN";
		default:
			break;
	}
	return "";
}

void func_1968(int iParam0, bool bParam1)
{
	if (func_2189(Global_1896738->f_194, iParam0) != bParam1)
	{
		if (bParam1)
		{
			func_2187(&(Global_1896738->f_194), iParam0);
		}
		else
		{
			func_2188(&(Global_1896738->f_194), iParam0);
		}
	}
}

void func_1969()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		_0x3bf0767cf33fcc88(Global_1896738->f_393.f_1);
	}
	func_2212();
}

void func_1970()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		_databinding_write_data_bool(Global_1896738->f_197.f_1, true);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197))
	{
		_databinding_write_data_bool(Global_1896738->f_197, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_3))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_3, 1433015236);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_4))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_4, -1712603330);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_2))
	{
		_databinding_write_data_string(Global_1896738->f_197.f_2, _create_var_string(2, "NM_MW_POSSE_VERSUS_CHANGE_TEAM"));
	}
}

int func_1971()
{
	uVar0 = func_2213();
	return uVar0;
}

int func_1972(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_2214(iParam0, iParam1);
	return uVar0;
}

void func_1973(int iParam0)
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_8111.f_2, -712210889);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_8111.f_3, func_2215(iParam0));
}

bool func_1974(int iParam0)
{
	return func_194(Global_1138962->f_145, iParam0);
}

char* func_1975(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1976(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40;
		case 1:
			return 5;
		case 2:
			return 80;
		case 3:
			return 121;
		case 4:
			return 81;
		default:
			break;
	}
	return -1;
}

char* func_1977(int iParam0)
{
	if (!func_164(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	return "REG_IF_INV";
}

bool func_1978()
{
	if (!func_194(Global_1138962->f_137.f_1, 2))
	{
		return false;
	}
	return func_194(Global_1138962->f_145, 2);
}

void func_1979()
{
	if (func_2216())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_13, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_13, false);
	}
}

char* func_1980(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "MOONSHINE_LOC_FILTER_CLOSEST";
		case 2:
			return "MOONSHINE_LOC_FILTER_DISTANCE";
		default:
			break;
	}
	return "";
}

void func_1981(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_2217(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_995(iParam0);
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
						func_1981(iVar3, iParam1, 0, 1, 0, 0);
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
			func_2218(&Var6, uVar4);
		}
	}
}

bool func_1982(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

void func_1983(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_2219(iParam0);
	func_2220(iParam0, uParam1);
	func_2221(iParam0);
	func_2222(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2223(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		_update_ped_variation(iParam0, false, true, true, true, true);
	}
}

bool func_1984(int iParam0)
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

int func_1985(int iParam0)
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

int func_1986(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = func_2224(iParam0);
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

char* func_1987(int iParam0, int iParam1)
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
			return func_2225(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char[] func_1988(int iParam0)
{
	StringCopy(&cVar0, func_2226(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_1125(&cVar0);
}

char* func_1989(int iParam0)
{
	iVar0 = func_2227(iParam0);
	switch (iVar0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_1990(int iParam0)
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

char* func_1991(int iParam0)
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

int func_1992(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_2228(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_2229(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_2230(iParam1, iParam2, 0);
						return 1;
					}
					func_2231(iParam1, iParam2, iVar1);
					func_2230(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_2232(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2230(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_2230(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_2230(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_2232(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2230(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_2230(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_2232(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2230(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

int func_1993()
{
	return Global_1139381->f_5079.f_325;
}

void func_1994(int iParam0)
{
	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), iParam0);
	func_2233(&Var0);
}

char* func_1995(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_1996(var uParam0)
{
}

void func_1997(var uParam0, int iParam1, int iParam2)
{
	if (func_497(&(uParam0->f_1[iParam1]), 343781202))
	{
		func_1282(uParam0, &(uParam0->f_1[iParam1]));
	}
	else
	{
		uParam0->f_1[iParam1] = &Global_1952637->f_83[iParam1];
		uParam0->f_1[iParam1]->f_1 = 0;
		func_494(iParam1, iParam2);
	}
}

int func_1998()
{
	return Global_265377->f_124517.f_71.f_35;
}

int func_1999(int iParam0)
{
	if (iParam0 != 0 && !func_697(67))
	{
		iParam0 = 0;
	}
	return func_2234(iParam0);
}

int func_2000(int iParam0)
{
	return iParam0 * 31;
}

bool func_2001(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_2235((*uParam0)[iVar0]))
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
				*(*uParam0)[iVar0] = { func_190() };
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

int func_2002(int iParam0, int iParam1)
{
	if (iParam1 == -570078785)
	{
		iVar0 = func_1025(iParam0, -570078785, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_1376(iVar0))
		{
			if (Global_1915715->f_20644)
			{
				func_1374(_create_var_string(2, "SHOP_H_TOO_POOR_GOLD", func_1041(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -915411861)
	{
		iVar1 = func_1025(iParam0, -915411861, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_1091(iVar1))
		{
			if (Global_1915715->f_20644)
			{
				func_1374("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 997808187)
	{
		return 1;
	}
	if (!func_1700(iParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_2003(struct<17> Param0)
{
	if (!func_1056(Param0.f_16))
	{
		return false;
	}
	return true;
}

bool func_2004(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_2005(int* iParam0)
{
	return func_2236(iParam0->f_1);
}

bool func_2006(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2007(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2008(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2009(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2010(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2011(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2012(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2013(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2014(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2015(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2016(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2017(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2018(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2019(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

bool func_2020(int* iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	return func_2237(iParam0, uParam1, iParam2, uParam3, Var0, &Var0, bParam4, bParam5);
}

struct<28> func_2021(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1327(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_2022(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1339(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1341(func_2238(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1342(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_2023(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_518(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1327(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_2024(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1341(func_2239(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1342(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

int func_2025(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1339(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1341(func_1697(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1342(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

void func_2026(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!_0xa97ee5e4589fcf5a(iParam0, &Var7) || Var7 == 0)
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
			if ((*uParam2)[iVar0]->f_1 == 0 && func_985(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_2027(int iParam0)
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

bool func_2028(int iParam0)
{
	iParam0 = func_1538(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1903136[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_2029(int iParam0)
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

struct<10> func_2030(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_2031(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_2032(int iParam0, int iParam1)
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

int func_2033(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
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

int func_2034(int iParam0)
{
	if (func_497(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_497(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_497(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_2035(int iParam0, int iParam1, int iParam2)
{
	_0xb29c553ba582d09e(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_602(&(uVar0[iVar17]), 0) && iParam2 == &uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_2036(int iParam0)
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

int func_2037(int iParam0)
{
	switch (iParam0)
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

int func_2038()
{
	return Global_17411.f_55.f_644.f_1777;
}

int func_2039()
{
	return Global_1301323->f_288;
}

int func_2040()
{
	return Global_1301323->f_150.f_4;
}

void func_2041(struct<2> Param0, int iParam2)
{
	if (!func_325(Param0))
	{
		func_730(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_1402(Param0, 0, 1, -1);
}

bool func_2042(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_325(Param0))
	{
		return false;
	}
	if (!func_325(Param2))
	{
		return true;
	}
	iVar0 = func_728(Param0);
	iVar1 = func_728(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_2043(int iParam0, var uParam1, var uParam2)
{
	if (!func_2240(iParam0))
	{
		return false;
	}
	if (func_2241(iParam0, uParam1, &uVar0))
	{
		func_2242(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_2044(var uParam0, int iParam1)
{
	if (Global_1196205->f_129 >= 32)
	{
		Global_1196205->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1196205->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*(*Global_1196205)[Global_1196205->f_129] = { *uParam0 };
		Global_1196205->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1196205->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *(*Global_1196205)[iVar1] };
		*(*Global_1196205)[iVar1] = { *((*Global_1196205)[iVar1 + 1]) };
		*((*Global_1196205)[iVar1 + 1]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*(*Global_1196205)[iParam1] = { *uParam0 };
	Global_1196205->f_129++;
}

void func_2045(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1196205->f_129)
	{
		return;
	}
	Global_1196205->f_130 = iParam0;
	Global_1196205->f_131 = Global_1196205[iParam0];
}

void func_2046()
{
	if (Global_1196205->f_131 == 0)
	{
		return;
	}
	Global_1196205->f_130 = func_2243(Global_1196205->f_131);
	if (Global_1196205->f_130 < 0)
	{
		Global_1196205->f_131 = 0;
	}
}

bool func_2047(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_2244(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_2048(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_2049(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_2050(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_2051()
{
	iVar0 = Global_1296851->f_2.f_4;
	if (!func_1091(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

int func_2052(int iParam0, int iParam1, int iParam2)
{
	return func_2245(iParam0, iParam1, iParam2);
}

int func_2053(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_797(2084597891, 1, 0) };
	Var6 = { func_2246(2084597891, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_1022(1702063850, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		Var22.f_16 = -1;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_1023(iVar0, Var22);
	}
	return iVar0;
}

void func_2054()
{
	_0x748c5f51a18cb8f0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_2247(iVar0))
		{
			func_2248(iVar0);
		}
		iVar0++;
	}
	_0x748c5f51a18cb8f0(1);
}

char* func_2055(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	_copy_memory(&Var0, &(Global_1940311->f_1433.f_157.f_2), 95);
	if ((network_is_handle_valid(&(Var0.f_29)) && network_is_handle_valid(&(Global_1296859->f_1))) && network_are_handles_the_same(&(Var0.f_29), &(Global_1296859->f_1)))
	{
		if (Var0.f_3)
		{
			_0xc08aff658b2e51da(&iVar95);
			if (iVar95 != Var0.f_2)
			{
				return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
			}
		}
		else if (_0xd6f6acf4392187fb(Var0.f_1) && !_0x0f99f6436528a089(Var0.f_1))
		{
			return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}
	if (!func_1432(Global_1296859->f_15) || !_0x424b17a7dc5c90bc(player_id()))
	{
		return _create_var_string(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");
	}
	if (((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_2249(iParam0)) && func_2250(iParam0))
	{
		iVar96 = (180 - (&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21));
		return _create_var_string(10, "POSSE_VERSUS_TIMER_FOOTER", func_282(func_2251(iVar96 * 1000, 0, 0, 0, 0, 0), 109029619));
	}
	switch (iParam0)
	{
		case 4:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 2)
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_2254())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_2255())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1412(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_INFIGHTING_FOOTER";
			}
			break;
		case 5:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_2254())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_2255())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1412(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			}
			break;
		case 8:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_2256(&(Global_1108365->f_935), 1))
			{
				sVar100 = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			}
			break;
		case 9:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			}
			break;
		case 10:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			}
			break;
		case 7:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HTPL_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_HTPL_TOO_FEW_AVAILABLE";
			}
			else if (_0x2f7eb8b6f6afe79c(1) < 2)
			{
				sVar100 = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (!func_2257(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (func_1412(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			}
			break;
		case 6:
			if (!func_2252(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW";
			}
			else if (!func_2253(1, 2))
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW_AVAILABLE";
			}
			else if (func_1740(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_176(_get_waypoint_coords()))
			{
				sVar100 = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			}
			else if (Global_1108365->f_935.f_20 && func_2258(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			}
			else if (func_176(Global_1108365->f_935.f_24) && func_2258(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_RACE_FOOTER";
			}
			break;
		default:
			sVar100 = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}
	return _create_var_string(2, sVar100);
}

int func_2056(bool bParam0, bool bParam1, bool bParam2)
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

int func_2057(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

bool func_2058(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = get_player_index();
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar1 = iParam0;
	if (!func_325((*Global_1056141)[iVar1]->f_2))
	{
		return false;
	}
	iVar0 = func_513((*Global_1056141)[iVar1]->f_2);
	iVar2 = func_728((*Global_1056141)[iVar1]->f_2);
	switch (iVar2)
	{
		case 3:
			switch (iVar0)
			{
				case 30:
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

void func_2059(var uParam0, bool bParam1)
{
	if (bParam1 || !func_2193(uParam0))
	{
		func_2259(uParam0);
	}
}

int func_2060(var uParam0, float fParam1)
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

int func_2061(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_1096(iParam0) == -785841056)
	{
		if (func_2260(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _0x901e0dc25080c8b9(iParam1);
		if (!_0xd6f6acf4392187fb(iVar0))
		{
			return 6;
		}
		if (!func_1432(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_0x149a2751ab66ac02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_1740(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_2064(&(Global_1196898->f_1[iParam0]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if (Global_1196339->f_1[*iParam2]->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_2047(&Var4, iParam0))
	{
		func_2261(Var4, -1068020191, &iVar2, 0);
		func_2261(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_2263(func_2262());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

bool func_2062(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return false;
		default:
			break;
	}
	return true;
}

int func_2063(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return -785841056;
		default:
			break;
	}
	return -1125105727;
}

int func_2064(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case 1232677007:
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1196339->f_1[iVar2] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_2065(int iParam0, int iParam1)
{
	if (func_2047(&Var0, iParam0) && func_2264(&Var0))
	{
		Var5 = { Var0 };
		if (func_2265(&Var5, iParam1))
		{
			iVar10 = 0;
			func_2050(Var5, -1378896287, &iVar10, 1);
			return iVar10;
		}
	}
	return 0;
}

int func_2066(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (func_2047(&Var1, iParam0) && func_2264(&Var1))
	{
		iVar11 = _datafile_get_num_children(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_2265(&Var6, iVar23))
			{
				iVar20 = 0;
				func_2050(Var6, -1378896287, &iVar20, 1);
				if (func_2266(iParam0, iVar20) == -1 && func_2067(iParam0, iVar20) == 0)
				{
					func_2267(Var6, 2060397848, &vVar12, 1);
					if (func_176(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = vdist(vParam1, vVar12);
					}
					fVar15 = func_2268(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_375(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (_0x72b2e00c9bac6789(&uVar19, iVar21))
						{
							iVar22 = int_to_playerindex(iVar21);
							if (network_is_player_active(iVar22) && !_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9(player_id()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_2067(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_1096(iParam0) == -785841056)
	{
		vVar0 = { func_2269(iParam0, iParam1) };
		if (!func_176(vVar0) && (_0x769bb7626b8cdb06(vVar0, 100f, 0, 0, 0) || _0xaa9ee2aafc717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_2068(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (((func_2047(&Var1, iParam0) && func_2264(&Var1)) && func_2270(&Var1, iParam1)) && func_2048(&Var1))
	{
		iVar6 = _datafile_get_num_children(Var1, Var1.f_1);
		iVar7 = (get_random_int_in_range(0, 65536) % iVar6);
		if (func_2271(&Var1, iVar7))
		{
			func_2050(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

int func_2069(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

struct<2> func_2070(int iParam0, int iParam1, int iParam2)
{
	if ((((func_2047(&Var0, iParam0) && func_2264(&Var0)) && func_2270(&Var0, iParam1)) && func_2048(&Var0)) && func_2049(&Var0, iParam2))
	{
		func_2050(Var0, -605149915, &uVar5, 1);
		if (func_2043(6, uVar5, &Var6))
		{
			return func_1393(Var6.f_3, 6);
		}
	}
	return func_376();
}

int func_2071(struct<2> Param0)
{
	if (!func_325(Param0))
	{
		return 5;
	}
	else if (func_2272(Param0) != -1)
	{
		return 13;
	}
	else if (!func_2273(Param0))
	{
		return 18;
	}
	else if (!func_2274(Param0))
	{
		return 19;
	}
	else if (func_369())
	{
		return 14;
	}
	return 0;
}

void func_2072()
{
	if (_0x277865a734918ae6())
	{
		return;
	}
	if (Global_263042[&Global_1296859] < 2)
	{
		return;
	}
	func_150();
	func_694(2);
}

bool func_2073(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (!func_15(&((*Global_263042)[iVar0]->f_1), 4194304))
	{
		return false;
	}
	if (func_15(&((*Global_263042)[iVar0]->f_1), 64))
	{
		return false;
	}
	if (!func_2275((*Global_263042)[iVar0]->f_1.f_53, func_15(&((*Global_263042)[iVar0]->f_1), 32768), 1))
	{
		return false;
	}
	if (func_2276(&((*Global_263042)[iVar0]->f_1)))
	{
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_18 == 2147483647)
	{
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_16 == 0)
	{
		return false;
	}
	iVar1 = network_player_id_to_int();
	(*Global_263042)[iVar1]->f_1 = iParam0;
	(*Global_263042)[iVar1]->f_1.f_19 = get_network_time_accurate();
	_0x5a91bcef74944e93(iParam0, 30f);
	func_2277(&((*Global_263042)[iVar0]->f_1.f_27));
	if (func_15(&((*Global_263042)[&Global_1296859]->f_1), 64) && (*Global_263042)[&Global_1296859]->f_1.f_17 == (*Global_263042)[iVar0]->f_1.f_17)
	{
		func_66(2097152);
	}
	return true;
}

float func_2074(int iParam0)
{
	_0x31010318ba9897ac(&uVar0, iParam0);
	return uVar0;
}

void func_2075(struct<2> Param0, vector3 vParam2, var uParam5, bool bParam6, bool bParam7)
{
	if (!func_325(Param0))
	{
		return;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (!func_517(Param0, &vVar0))
	{
		return;
	}
	if (func_477(Param0) && !func_2278(Param0))
	{
		func_2279(vParam2, uParam5, bParam6, bParam7);
		return;
	}
	if (func_478(Param0))
	{
		return;
	}
	Global_1071686->f_629 = { Param0 };
	Global_1071686->f_629.f_2 = { vParam2 };
	if (bParam6)
	{
		func_175(vParam2, uParam5, -1082130432, -1082130432, 1, 1, 1);
	}
	else if (bParam7)
	{
		func_2280(vParam2, uParam5, 1);
	}
	switch (Param0)
	{
		case 2:
			break;
		case 3:
			func_720(Param0, 0);
			func_955(Param0);
			func_2281(Param0);
			break;
		case 5:
			func_720(Param0, 0);
			func_955(Param0);
			func_2281(Param0);
			break;
		case 8:
			func_720(Param0, 0);
			func_955(Param0);
			func_2281(Param0);
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

int func_2076(int iParam0, int iParam1)
{
	iVar0 = player_id();
	if (iParam1 == 1)
	{
		return 0;
	}
	if ((!network_is_player_active(player_id()) || !_0x424b17a7dc5c90bc(player_id())) || !_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return 0;
	}
	if (!func_2282())
	{
		func_2283(iVar0);
		return 0;
	}
	if (func_2284(iParam0))
	{
		return 0;
	}
	if (!func_2285(iParam0))
	{
		return 0;
	}
	if (iParam1 == 2)
	{
		func_1430("NG_FULL_S");
		return 1;
	}
	if (!_unlock_is_unlocked(-1828672432))
	{
		func_1430("NG_CANT_INVITE");
		return 0;
	}
	if (!func_2286())
	{
		func_1430("NG_POSSE_INVITE_LIMIT");
		return 0;
	}
	if (_0x6102830f764b3de1(iParam0))
	{
		func_1358(func_1357(-1225075647, 1047079933), 1);
		sVar1 = _create_var_string(10, "NG_INVITE_SENT_POSSE", func_559(get_player_name(iParam0), func_920(iParam0, 1, -1, 0)));
		func_560(sVar1, -2, 0, 0, 0, 1);
		func_2287(iParam0);
		return 1;
	}
	func_1430("NG_CANT_INVITE");
	return 0;
}

bool func_2077(int iParam0)
{
	return ((((iParam0 == 18 || iParam0 == 20) || iParam0 == 21) || iParam0 == 28) || iParam0 == 19);
}

int func_2078(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 0;
		case 20:
			return 1;
		case 21:
			return 2;
		case 28:
			return 3;
		case 19:
			return 4;
		case 29:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_2079(float fParam0, bool bParam1)
{
	iVar2 = player_id();
	iVar4 = _0x901e0dc25080c8b9(iVar2);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2))
		{
		}
		else if (!network_is_player_connected(iVar2))
		{
		}
		else if (player_id() == iVar3)
		{
		}
		else
		{
			iVar5 = _0x901e0dc25080c8b9(iVar3);
			if (iVar5 == iVar4)
			{
			}
			else
			{
				_0xd1bf325c8252a982(iVar5, &Var6);
				bVar1 = true;
			}
			else
			{
				iVar0++;
			}
			if (!bVar1)
			{
				_0xde544b7ec0c187cc(fParam0);
			}
			iVar0 = 0;
			bVar1 = false;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (!func_757(*Var6[iVar0]))
				{
				}
				else
				{
					iVar3 = network_get_player_from_gamer_handle(Var6[iVar0]);
					if (!_network_is_player_index_valid(iVar3))
					{
					}
					else if (!network_is_player_connected(iVar3))
					{
					}
					else if (bParam1)
					{
						if (!_0x424b17a7dc5c90bc(iVar3))
						{
						}
						else
						{
							bVar1 = true;
							_0x31010318ba9897ac(fParam0, iVar3);
						}
						iVar0++;
						if (!bVar1)
						{
							_0xde544b7ec0c187cc(fParam0);
						}
					}
				}
			}
		}
	}
}

void func_2080(int iParam0)
{
	iVar0 = player_id();
	(*Global_1285390)[iVar0]->f_99 = iParam0;
}

bool func_2081(int iParam0, int iParam1)
{
	return func_77(&(Global_1194053->f_5[iParam0]), iParam1);
}

void func_2082(int iParam0)
{
	Global_1194053->f_5[iParam0] = 0;
}

void func_2083(int iParam0, int iParam1)
{
	func_78(Global_1194053->f_5[iParam0], iParam1);
}

void func_2084(var uParam0)
{
	Global_17411.f_55.f_14.f_4 = uParam0;
}

void func_2085(int iParam0, int iParam1)
{
	func_285(Global_1194053->f_5[iParam0], iParam1);
}

bool func_2086()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

int func_2087(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_2088(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_2089(int iParam0)
{
	iVar0 = iParam0;
	return func_2288(iVar0);
}

char* func_2090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
	}