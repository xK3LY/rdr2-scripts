void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_1674 = -1;
	iLocal_12865 = -1;
	iLocal_12867 = -1;
	uLocal_14313 = _0x842ccc9491ffcd9b("MP_Trans_SceneToPhoto");
	iLocal_14341 = -1161159757;
	iLocal_14343 = -1;
	iLocal_14475 = -1;
	iLocal_14597 = 1;
	iLocal_15558 = -1;
	fLocal_15559 = 10000f;
	iLocal_15560 = -1;
	iLocal_15561 = -1;
	iLocal_15648 = -394012119;
	iLocal_15660 = -1;
	iLocal_15687 = 4000;
	iLocal_15688 = -1;
	iLocal_15777 = -1;
	Var0 = -1;
	Var0.f_1 = -1;
	network_set_script_is_safe_for_network_game();
	func_1();
	func_2();
	func_3();
	if (network_is_game_in_progress())
	{
		if (!func_4(&ScriptParam_0))
		{
			_0x2e399eafbeea74d5();
			func_5(0);
		}
	}
	func_6();
	func_7(&Var0, ScriptParam_0.f_16);
	while (!func_8())
	{
		func_9();
		func_10(&Var0);
		func_11();
		if (func_12() && !is_bit_set(iLocal_58, 13))
		{
			func_13(2);
			set_bit(&iLocal_58, 13);
		}
		if (func_14())
		{
			if (!func_15())
			{
				func_16();
			}
			if (func_17())
			{
				_0x2e399eafbeea74d5();
				func_18();
				func_5(1);
			}
		}
		else if (!is_bit_set(iLocal_57, 11) && func_19())
		{
			_0x1096603b519c905f(func_20());
			set_bit(&iLocal_57, 11);
		}
		func_21();
		func_22();
		func_23();
		if (network_is_game_in_progress())
		{
			func_24(&Var0);
			func_25();
		}
		func_26();
		if (bLocal_75)
		{
			func_28(func_27(Var0));
			if (func_14())
			{
				if ((func_29(iLocal_70) > 4 && func_30(0)) && !func_31(5))
				{
					func_32();
				}
			}
		}
		func_33(&uLocal_14268);
		func_34(&uLocal_15649);
		func_35(iLocal_81);
		wait(0);
	}
	if (func_8())
	{
		func_36();
		func_37(128);
		if (is_bit_set(iLocal_57, 17))
		{
			if (func_29(iLocal_71) < 8)
			{
				if (!func_38(iLocal_71))
				{
					func_39();
					func_40();
				}
			}
		}
	}
	func_41();
	func_42();
	func_43();
	func_5(0);
}

void func_1()
{
	sVar0 = "net_ugc_intro_flow";
	func_44();
	func_45(1073741824);
	iVar1 = get_hash_key(sVar0);
	if (_get_number_of_references_of_script_with_name_hash(iVar1) != 0)
	{
		return;
	}
	if (network_is_script_active(sVar0, -1, true, 0))
	{
		return;
	}
	request_script(sVar0);
	if (!func_46(sVar0))
	{
		StringCopy(&(Var2.f_10), sVar0, 32);
		Var2.f_14 = 6000;
		func_47(Var2, 0);
	}
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Global_390124->f_36.f_79[iVar0] = 0;
		iVar0++;
	}
	Global_390124->f_36.f_96 = -1;
	Global_390124->f_18.f_10 = 0;
	Global_390124->f_18.f_5 = -1;
	Global_390124->f_18.f_15 = -1;
	Global_390124->f_1 = 0;
	Global_390124->f_2 = 0;
}

void func_3()
{
	func_48(1);
	func_49(0);
	func_50(128);
	if (func_51())
	{
		Var0 = { func_52() };
		bVar5 = func_53(player_id(), 1024);
		if (Var0 == 0)
		{
			bVar5 = true;
		}
		func_54(bVar5, &uLocal_15661);
	}
	else
	{
		func_54(1, &uLocal_15661);
	}
	func_55(1);
}

bool func_4(var uParam0)
{
	func_56(1);
	func_57(uParam0, &uLocal_68, 32);
	func_58(0, 28);
	func_9();
	func_59(128);
	_0x78857fc65cadb909(false);
	_0xfc6ecb9170145ece();
	func_60(1);
	clear_gps_custom_route();
	set_waypoint_off();
	if (_0xdcc4b7f7112e8ab7(iLocal_79))
	{
		clear_gps_player_waypoint();
	}
	func_61(1, 0);
	func_62();
	func_63();
	func_64();
	func_65(0);
	func_66(1);
	func_67(0);
	if (func_31(15))
	{
		set_bit(&(Local_13917.f_159), 0);
	}
	else if (func_31(39))
	{
		set_bit(&(Local_13917.f_159), 14);
	}
	else if (func_31(53))
	{
		set_bit(&(Local_13917.f_159), 21);
	}
	if (func_31(48))
	{
		set_bit(&(Local_13917.f_159), 17);
	}
	switch (Global_3145858->f_52526)
	{
		case 0:
			set_bit(&(Local_13917.f_159), 23);
			break;
		case 1:
			set_bit(&(Local_13917.f_159), 24);
			break;
		case 2:
			set_bit(&(Local_13917.f_159), 25);
			break;
		case 3:
			set_bit(&(Local_13917.f_160), 10);
			break;
	}
	if (func_31(55))
	{
		set_bit(&(Local_13917.f_159), 28);
	}
	if (func_31(54))
	{
		set_bit(&(Local_13917.f_159), 22);
	}
	Local_3702[iLocal_71] = uVar15658;
	if (!&Local_3702[iLocal_71])
	{
		func_68(Global_1050050);
		chal_net_start_chal(1852874750);
		Global_1049275 = 0;
	}
	func_69(Global_1050050);
	func_70();
	iLocal_14345 = get_max_wanted_level();
	func_71(0);
	func_72();
	func_73(-1);
	Global_1048626 = 0;
	*Global_1051116 = { Global_3145858->f_191 };
	_0x2f9ac754fe179d58(0f);
	_set_scenario_type_enabled_hash(-1525360788, false);
	_set_scenario_type_enabled_hash(-1152350314, false);
	func_74();
	func_75(&(Local_5688.f_2415), 1);
	func_76(&uLocal_15460);
	if (func_31(19))
	{
		if (func_31(20))
		{
			func_77(0);
		}
		else
		{
			func_77(0);
		}
	}
	else
	{
		func_77(1);
	}
	func_78(Global_2359296->f_4788);
	func_79(iLocal_81);
	func_80(iLocal_81);
	if (func_81(255))
	{
		func_79(_0xf49f14462f0ae27c(iLocal_79));
	}
	if (is_bit_set(Local_5688.f_24.f_5, 2))
	{
		func_82();
	}
	if (!func_31(62))
	{
		Global_1940122->f_21 = 0;
	}
	if (func_31(71))
	{
		set_bit(&(Local_13917.f_160), 5);
	}
	if (!func_30(5))
	{
		func_83(iLocal_81);
	}
	func_84();
	func_85();
	return true;
}

void func_5(bool bParam0)
{
	func_13(64);
	func_86();
	func_87();
	func_88(&uLocal_14295);
	Global_1051120 = 0;
	iVar1 = 2;
	bVar2 = true;
	if ((!func_89() || Global_1048581) // PointerArith)
	{
		iVar1 = 8;
		bVar2 = false;
	}
	if (!func_90(iLocal_79) && !func_91(255))
	{
		func_58(bVar2, iVar1);
	}
	func_92(0);
	func_93(0);
	if (Global_1048581 && func_91(255))
	{
		func_48(1);
		func_94(1);
	}
	else
	{
		func_48(0);
	}
	func_95(0, 0, 0, 1);
	func_96(0);
	func_97(0);
	func_98(0);
	func_99();
	func_100(0);
	func_101(1024);
	func_102(65536);
	func_103();
	if (func_14())
	{
		func_104();
		func_105(&(Global_265377->f_124517.f_71.f_53));
		Global_2892896->f_9 = 0;
		Global_2892896->f_6 = 0;
	}
	Var3.f_2 = 5;
	Var3.f_23 = 5;
	func_106(&uLocal_14249, &Var3);
	func_107(0);
	func_108(0);
	if (!&Global_1048581)
	{
		func_109(&uLocal_14268, 0, 1);
		animpostfx_stop_all();
		func_110(0);
		func_111(64);
	}
	func_111(256);
	func_112(-2101264851);
	func_113();
	clear_bit(&(Local_13917.f_159), 20);
	clear_bit(&(Local_13917.f_159), 8);
	if (!func_31(46))
	{
		_0x3fbb838aea30c1d8();
	}
	if (!func_31(62))
	{
		Global_1940122->f_21 = 1;
	}
	if (is_orbis_version())
	{
		_0xcb0360efefb2580d(0);
	}
	func_114(&uLocal_11245);
	if (bParam0)
	{
		func_115(&(Local_5688.f_52.f_172));
	}
	func_116(&uLocal_11999);
	func_117(&(Global_3145858->f_6823), &uLocal_11396, &uLocal_11798);
	func_118(&uLocal_12046);
	func_119(&iLocal_15842);
	func_120(&iLocal_15781);
	iVar68 = 327683;
	clear_area(Global_3145858->f_196, 9999f, iVar68);
	func_121(1);
	func_122(1);
	func_123();
	func_124();
	if (func_31(64))
	{
		func_125(iLocal_79, 0);
	}
	if (func_31(65))
	{
		func_126(iLocal_79, 0);
	}
	func_60(0);
	func_73(-1);
	func_127();
	if (func_31(79))
	{
		func_128(0);
	}
	if (func_30(9))
	{
		_0xe5d3eb37abc1eb03(iLocal_79);
	}
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_13424 - 1))
		{
			if (network_does_network_id_exist(&(Local_5688.f_52.f_33[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5688.f_52.f_33[iVar0])))
				{
					func_129(Local_5688.f_52.f_33[iVar0], 0);
					func_130(iVar0);
				}
				else
				{
					func_131(Local_5688.f_52.f_33[iVar0]);
					func_132(iVar0);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_36479 - 1))
		{
			if (bLocal_75)
			{
				iVar69 = &Local_5688.f_52.f_108[iVar0];
				if (network_does_network_id_exist(iVar69))
				{
					func_133(&iVar69, 0);
				}
			}
			if (_0x91a5f9cbebb9d936(&(uLocal_14463[iVar0])))
			{
				remove_scenario_blocking_area(&(uLocal_14463[iVar0]), true);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_458 - 1))
		{
			if (network_does_network_id_exist(&(Local_5688.f_52.f_111[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5688.f_52.f_111[iVar0])))
				{
					func_129(Local_5688.f_52.f_111[iVar0], 0);
				}
				else
				{
					func_131(Local_5688.f_52.f_111[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_452 - 1))
		{
			if (network_does_network_id_exist(&(Local_5688.f_52.f_75[iVar0])))
			{
				if (network_has_control_of_network_id(&(Local_5688.f_52.f_75[iVar0])))
				{
					func_129(Local_5688.f_52.f_75[iVar0], 0);
				}
				else
				{
					func_131(Local_5688.f_52.f_75[iVar0]);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_36479 - 1))
		{
			if (_0x91a5f9cbebb9d936(&(uLocal_14463[iVar0])))
			{
				remove_scenario_blocking_area(&(uLocal_14463[iVar0]), true);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (network_does_network_id_exist(&(iLocal_14470[iVar0])))
		{
			if (bParam0)
			{
				func_129(iLocal_14470[iVar0], 0);
			}
			else
			{
				func_131(iLocal_14470[iVar0]);
			}
		}
		iVar0++;
	}
	func_134();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_15728[iVar0]->f_7 != 4)
		{
			func_135(Local_15728[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_136(Local_5688.f_52[iVar0], iVar0);
		if (does_blip_exist(&(uLocal_12519[iVar0])))
		{
			remove_blip(uLocal_12519[iVar0]);
		}
		iVar70 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar70))
		{
			iVar71 = network_get_player_index(iVar70);
			iVar72 = get_player_ped(iVar71);
			if (iVar72 != func_137())
			{
				set_ped_drops_weapons_when_dead(iVar72, true);
			}
		}
		func_138(iVar0);
		func_139(iVar0);
		func_140(iVar0);
		func_141(iVar0);
		func_142(iVar0);
		func_143(iVar0);
		func_144(iVar0);
		func_145(iVar0, 0);
		if (does_blip_exist(&(Global_1071686->f_21689[iVar0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iVar0]), -1186550032);
			_set_blip_flash_style(&(Global_1071686->f_21689[iVar0]), -401963276);
			_set_blip_flash_style(&(Global_1071686->f_21689[iVar0]), 724082956);
			_set_blip_flash_style(&(Global_1071686->f_21689[iVar0]), -1203075151);
			_set_blip_flash_style(&(Global_1071686->f_21689[iVar0]), -859670473);
		}
		Global_1071686->f_21689[iVar0]->f_7 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!bParam0)
		{
			*(*Global_1050984)[iVar0] = { *(*Global_3145728)[iVar0] };
		}
		func_146(iVar0);
		remove_relationship_group(func_147(iVar0));
		_0xb6e79850b759a30e(iVar0, 0);
		iVar0++;
	}
	set_player_invincible(iLocal_79, false);
	_0xde544b7ec0c187cc(&(Global_1071686->f_21689.f_259));
	func_148(iLocal_81);
	func_149(iLocal_81);
	func_150(iLocal_81);
	if (is_bit_set(iLocal_58, 22))
	{
		set_ped_config_flag(iLocal_81, 472, false);
		clear_bit(&iLocal_58, 22);
	}
	_0xaca45ddcef6071c4(iLocal_79, 1);
	_0xa0c683284df027c7(iLocal_79, 15, 1);
	set_ped_config_flag(iLocal_81, 286, false);
	set_ped_config_flag(iLocal_81, 174, false);
	if (bParam0)
	{
		func_151(&uLocal_12894);
	}
	func_152(-1);
	func_153(0);
	func_154(16);
	func_155();
	func_156(0);
	func_157(0);
	func_158(0, 1);
	func_159(8);
	set_player_melee_weapon_damage_modifier(iLocal_79, 1f);
	set_player_weapon_damage_modifier(iLocal_79, 1f);
	_0x818241b3eda84191(iLocal_79, 0);
	_0x78030c7867d8b9b6(iLocal_81, 0);
	if (Local_1685[iLocal_71]->f_4 > -1 && Local_1685[iLocal_71]->f_4 < 18)
	{
		func_160(Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_40);
	}
	func_161(262144);
	func_162(&iLocal_81);
	func_163();
	if (!func_14())
	{
		if (func_164(Local_5688) && is_bit_set(iLocal_57, 18))
		{
			Var73.f_1 = !bParam0;
			Var73.f_2 = 1 == Global_1572887->f_106;
			if (Var73.f_2)
			{
				Var73 = func_165(Global_1572887->f_106.f_9);
			}
			Var73.f_5 = (Global_1048684->f_403.f_8 + Global_1048684->f_419.f_8);
			if (Local_1685[iLocal_72]->f_3 == -1)
			{
				Var73.f_4 = 0;
				Var73.f_3 = func_166(1);
			}
			else
			{
				Var73.f_4 = Local_1685[iLocal_72]->f_3;
				Var73.f_3 = func_167(Var73.f_4);
			}
			Var73.f_6 = (Global_1048684->f_403.f_6 + Global_1048684->f_419.f_6);
			Var73.f_7 = func_168();
			func_169(Global_1049170);
			func_170(Global_1049175);
			if (!Var73.f_1)
			{
				*Global_1049159 = { Var73 };
				Global_1049169 = 1;
				*Global_1049196 = { Local_5688 };
			}
			else
			{
				_0xa2058154357726bb(&Local_5688, &Var73, Global_1049170, Global_1049175, Global_3145858->f_60002 == 1);
			}
			Global_1050949 = Local_5688.f_2;
			Global_1050949->f_1 = Local_5688.f_2.f_1;
			Global_1050949->f_2 = Local_5688.f_2.f_2;
			Global_1050949->f_3 = Local_5688.f_2.f_3;
			Global_1050949->f_7 = Local_5688.f_2389;
			Global_1050949->f_8 = Local_5688.f_857;
		}
	}
	func_171(iLocal_81, &Local_15995, 1);
	func_172(0);
	func_173();
	func_174(0);
	func_175(0);
	func_176(0);
	func_177(0, 0);
	func_178(0, 0, 0);
	func_179(0);
	func_66(0);
	func_180(1);
	func_181(1);
	func_182(1, 1);
	func_183(0);
	func_184(1);
	func_185(0);
	func_186(0);
	func_187(0);
	func_188();
	func_189(iLocal_81, &Local_15995);
	if (!&Global_1048581)
	{
		func_190();
	}
	func_191(&iLocal_79);
	func_192();
	func_193();
	func_194();
	func_79(iLocal_81);
	func_80(iLocal_81);
	if (func_81(255))
	{
		func_79(_0xf49f14462f0ae27c(iLocal_79));
	}
	network_set_friendly_fire_option(false);
	_set_local_player_can_use_pickups_with_this_model(iVar15645, true);
	set_pickup_generation_range_multiplier(1f);
	_0x0bf3b3bd47d79c08(0, -1);
	_0x564552c6af1eeab1();
	_0x739b9c6d0e7f7f93(iLocal_81, 0);
	_set_local_player_can_use_pickups_with_this_model(iVar15645, true);
	set_pickup_generation_range_multiplier(1f);
	_0x0bf3b3bd47d79c08(0, -1);
	func_195(1);
	_0x1f5e07e14a86fafc(0);
	func_196(iLocal_81, 1);
	_0x6569f31a01b4c097(iLocal_81, 11, 0);
	_0x6569f31a01b4c097(iLocal_81, 18, 0);
	func_197();
	func_198();
	func_77(0);
	func_199(0);
	if (!&Global_1048581)
	{
		func_200(0);
	}
	if (!func_30(1))
	{
		func_201(Global_1940258, 524288);
	}
	if (func_31(32))
	{
		func_202(iLocal_79, 0);
	}
	if (func_31(30))
	{
		func_203(1);
	}
	Var83 = 16;
	*Global_3145728 = { Var83 };
	_0x1096603b519c905f("");
	_0xb779f4fa19269aec(0);
	func_204();
	func_205();
	func_154(64);
	func_154(2);
	func_154(4);
	func_154(8);
	func_154(262144);
	func_154(1048576);
	func_154(131072);
	func_154(1);
	func_82();
	func_206();
	func_207();
	func_208();
	func_209();
	func_210();
	func_211();
	func_212();
	func_213();
	func_214();
	_set_blip_flash_style(get_main_player_blip_id(), -1203075151);
	if (_0xdcc4b7f7112e8ab7(iLocal_79))
	{
		clear_gps_player_waypoint();
	}
	func_215(&iLocal_12819);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (does_blip_exist(&(iLocal_12573[iVar0])))
		{
			remove_blip(iLocal_12573[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (does_blip_exist(&(iLocal_12757[iVar0])))
		{
			remove_blip(iLocal_12757[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (does_blip_exist(&(iLocal_12724[iVar0])))
		{
			remove_blip(iLocal_12724[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_blip_exist(&(iLocal_12552[iVar0])))
		{
			remove_blip(iLocal_12552[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_6822)
	{
		if (does_blip_exist(&(iLocal_12315[iVar0])))
		{
			remove_blip(iLocal_12315[iVar0]);
		}
		iVar0++;
	}
	set_model_as_no_longer_needed(iVar14338);
	func_216();
	func_217();
	func_218(&iLocal_14474, 1, 1);
	func_219(&uLocal_14351);
	func_220();
	func_151(&uLocal_12894);
	set_max_wanted_level(iVar14342);
	func_71(1);
	_0x2f9ac754fe179d58(1f);
	_set_scenario_type_enabled_hash(-1525360788, true);
	_set_scenario_type_enabled_hash(-1152350314, true);
	if (_0x91a5f9cbebb9d936(uVar12867))
	{
		remove_scenario_blocking_area(uVar12867, true);
	}
	if (_does_volume_exist(iVar12866))
	{
		_0xa1cfb35069d23c23(iVar12866);
		_0x74c2b3dc0b294102(iVar12866);
	}
	if (_does_volume_exist(iVar14999))
	{
		func_221(&iLocal_15002);
	}
	func_222(iVar12866);
	func_222(iVar14999);
	func_223(network_player_id_to_int());
	func_224(1, 0, 1);
	if (_does_volume_exist(iVar1666))
	{
		_delete_volume(iVar1666);
	}
	if (_does_volume_exist(iVar1667))
	{
		_delete_volume(iVar1667);
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (_does_volume_exist(&(iLocal_1671[iVar0])))
		{
			_delete_volume(&(iLocal_1671[iVar0]));
		}
		iVar0++;
	}
	func_225(&uLocal_1037);
	iVar213 = 0;
	while (iVar213 < 32)
	{
		if (does_blip_exist(&(uLocal_12249[iVar213])))
		{
			remove_blip(uLocal_12249[iVar213]);
		}
		if (_does_volume_exist(&(iLocal_12111[iVar213])))
		{
			_delete_volume(&(iLocal_12111[iVar213]));
		}
		if (_does_volume_exist(&(iLocal_12144[iVar213])))
		{
			_delete_volume(&(iLocal_12144[iVar213]));
		}
		*vLocal_14905[iVar213] = { 0f, 0f, 0f };
		iVar213++;
	}
	iVar214 = 0;
	while (iVar214 < 32)
	{
		if (_does_volume_exist(&(iLocal_12179[iVar214])))
		{
			_delete_volume(&(iLocal_12179[iVar214]));
		}
		_0x9cf1836c03fb67a2(uLocal_12212[iVar214], 0);
		iVar214++;
	}
	if (does_blip_exist(iVar15639))
	{
		remove_blip(&uLocal_15642);
	}
	if (_does_volume_exist(iVar15640))
	{
		_delete_volume(iVar15640);
	}
	if (does_blip_exist(iVar12244))
	{
		remove_blip(&uLocal_12247);
	}
	if (_does_volume_exist(iVar12174))
	{
		_delete_volume(iVar12174);
	}
	if (does_blip_exist(iVar12245))
	{
		remove_blip(&uLocal_12248);
	}
	if (_does_volume_exist(iVar12175))
	{
		_delete_volume(iVar12175);
	}
	if (does_blip_exist(iVar12815))
	{
		remove_blip(&iLocal_12818);
	}
	func_226(&uLocal_15460);
	iLocal_12245 = 0;
	remove_all_cover_blocking_areas();
	iLocal_12246 = 0;
	if (network_is_signed_online())
	{
		if (bLocal_75 && bParam0)
		{
			func_227(&(Local_5688.f_1158), 0);
			Local_5688.f_1158 = -1;
			if (_0x91a5f9cbebb9d936(Local_5688.f_1159))
			{
				if ((Local_5688.f_1160 == 0f && Local_5688.f_1161 == 0f) && Local_5688.f_1162 == 0f)
				{
					func_228(&(Local_5688.f_1159));
				}
			}
		}
	}
	if (bParam0)
	{
		func_229();
	}
	if (func_89())
	{
		func_230();
	}
	_0xbc90bdf4e5228ea1();
	func_231();
	if (!&Global_1048581)
	{
		func_232(&uLocal_68, 1);
	}
	func_233();
	if (func_89())
	{
		chal_net_stop_chal(1852874750);
	}
	if (bLocal_75 && func_234())
	{
		network_set_mission_finished();
	}
	Global_1051123 = 0;
	Global_1051132 = 0;
	iLocal_742 = 0;
	if (bLocal_75)
	{
		Local_5688.f_1521 = 0;
	}
	func_235();
	func_236();
	func_237(524288);
	_0x1f488807bc8e0630(iLocal_79);
	if (func_89() || !bParam0)
	{
		func_238();
	}
	func_239(0);
	func_240();
	_0xa967d6a8ed2d713b(iLocal_81, 1);
	func_56(0);
	_0x708df841b8f27aa2("");
	func_241(0);
	_0x780a13f780a13f1b(1);
	func_2();
	if (iVar15777 != 0)
	{
		_0xdf95df488a645ce7();
	}
	if (!func_242(&Global_0, 1))
	{
		func_243(1, -462361264);
	}
	if (!bParam0)
	{
		if (func_244())
		{
			func_245(0);
		}
	}
	func_246(1);
	func_247(iLocal_81);
	func_248();
}

void func_6()
{
	func_249(0);
	func_93(1);
	func_250(262144);
	func_107(1);
	func_251(&uLocal_15780, Global_2359296->f_155);
	if (iVar15778 != 0)
	{
		_0xdf95df488a645ce7();
		_0x3eb2791a1fbc8a42(iVar15778, 0);
		_0x3eb2791a1fbc8a42(1168300822, 0);
		_0x3eb2791a1fbc8a42(701412595, 0);
	}
}

void func_7(var uParam0, struct<2> Param1)
{
	if (func_252(Param1))
	{
		*uParam0 = { Param1 };
	}
	if (func_14())
	{
		Global_265377->f_124517.f_71.f_53 = { func_253(-47596571, 7) };
		*uParam0 = { Global_265377->f_124517.f_71.f_53 };
	}
	else
	{
		_0x708df841b8f27aa2(&(Global_3145858->f_191));
	}
}

bool func_8()
{
	if (func_254(0, 0))
	{
		return true;
	}
	if (&Global_1051146)
	{
		return true;
	}
	if (&Global_1051139)
	{
		return true;
	}
	return false;
}

void func_9()
{
	bLocal_75 = network_is_host_of_this_script();
	iLocal_79 = player_id();
	iLocal_72 = network_player_id_to_int();
	iLocal_71 = participant_id_to_int();
	iLocal_77 = participant_id();
	iLocal_81 = get_player_ped(iLocal_79);
	if (func_255(iLocal_79))
	{
		bLocal_73 = true;
	}
	else
	{
		bLocal_73 = false;
	}
	Global_262154 = get_unique_int_for_player(iLocal_79);
	iVar0 = iLocal_82;
	clear_bit(&iLocal_57, 9);
	iLocal_82 = -1;
	Local_1685[iLocal_71]->f_34 = 255;
	func_256(&(Local_1685[iLocal_71]->f_43));
	if (func_257(255))
	{
		iVar1 = func_258();
		if (iVar1 == iLocal_79)
		{
			bVar2 = true;
		}
		else if ((iVar1 != 255 && network_is_player_active(iVar1)) && network_is_player_a_participant(iVar1))
		{
			iVar3 = network_get_participant_index(iVar1);
			iVar4 = iVar3;
			if ((network_is_participant_active(iVar3) && iVar4 >= 0) && iVar4 < 32)
			{
				if (!func_38(iVar4))
				{
					iLocal_78 = iVar1;
					iLocal_82 = iVar4;
					Local_1685[iLocal_71]->f_34 = iVar1;
					iLocal_70 = iLocal_82;
				}
				else
				{
					bVar2 = true;
				}
			}
			else
			{
				bVar2 = true;
			}
		}
		else
		{
			bVar2 = true;
		}
		if (bVar2)
		{
			iVar5 = 0;
			while (iVar5 < 32)
			{
				if (iVar5 == iLocal_71)
				{
				}
				else
				{
					iVar6 = int_to_participantindex(iVar5);
					if (!network_is_participant_active(iVar6))
					{
					}
					else
					{
						iVar1 = network_get_player_index(iVar6);
						if (!func_38(iVar5) && func_29(iVar5) == 6)
						{
							iLocal_78 = iVar1;
							iLocal_82 = iVar5;
							iLocal_70 = iVar5;
							Local_1685[iLocal_71]->f_34 = iVar1;
							bVar2 = false;
						}
						else
						{
							iVar5++;
						}
						if (iLocal_82 == -1)
						{
							iLocal_78 = iLocal_79;
							iLocal_70 = iLocal_71;
							bLocal_74 = bLocal_73;
							iLocal_80 = iLocal_81;
						}
						else if (func_255(iLocal_78))
						{
							bLocal_74 = true;
							iLocal_80 = get_player_ped(iLocal_78);
						}
						else
						{
							iLocal_80 = get_player_ped(iLocal_78);
							bLocal_74 = false;
						}
						if (iLocal_82 != iVar0)
						{
							set_bit(&iLocal_57, 9);
						}
						iVar7 = 0;
						while (iVar7 <= 31)
						{
							Local_92[iVar7] = -1;
							Local_92[iVar7]->f_1 = -1;
							Local_92[iVar7]->f_2 = 255;
							Local_92[iVar7]->f_4 = 255;
							Local_92[iVar7]->f_3 = 0;
							Local_92[iVar7]->f_5 = 0;
							Local_92[iVar7]->f_7 = 0;
							Local_92[iVar7]->f_2 = int_to_participantindex(iVar7);
							if (network_is_participant_active(Local_92[iVar7]->f_2))
							{
								Local_92[iVar7]->f_3 = 1;
								Local_92[iVar7]->f_4 = network_get_player_index(Local_92[iVar7]->f_2);
								if (Local_92[iVar7]->f_4 != 255 && network_is_player_active(Local_92[iVar7]->f_4))
								{
									if (!is_entity_dead(Local_92[iVar7]->f_6))
									{
										Local_92[iVar7]->f_5 = 1;
									}
									clear_bit(&uLocal_669, iVar7);
									if (func_31(50))
									{
										Local_92[iVar7]->f_9 = func_259(iVar7);
									}
									Local_92[iVar7] = get_unique_int_for_player(Local_92[iVar7]->f_4);
									Local_92[iVar7]->f_1 = get_player_team(Local_92[iVar7]->f_4);
									Local_92[iVar7]->f_8 = (func_260() && Local_92[iVar7]->f_1 == Local_1685[iLocal_70]->f_3);
									Local_92[iVar7]->f_6 = get_player_ped(Local_92[iVar7]->f_4);
									StringCopy(&(Local_92[iVar7]->f_10), get_player_name(Local_92[iVar7]->f_4), 64);
									if (is_bit_set(Local_5688.f_24.f_5, 2))
									{
										if (is_bit_set(Local_1685[iVar7]->f_2, 13))
										{
											iVar8++;
										}
										else
										{
											iVar9++;
										}
									}
									if (!is_ped_dead_or_dying(Local_92[iVar7]->f_6, true) && get_entity_health(Local_92[iVar7]->f_6) > 0)
									{
										Local_92[iVar7]->f_7 = 1;
									}
									if (Local_1685[iVar7]->f_34 != 255)
									{
										Local_92[iVar7]->f_7 = 0;
									}
								}
								else
								{
									Local_92[iVar7]->f_3 = 0;
								}
							}
							else if (!func_38(iVar7) && func_261() == 2)
							{
								if (&Local_92[iVar7] != -1)
								{
									if (!is_bit_set(iVar667, iVar7) && !is_string_null_or_empty(&(Local_92[iVar7]->f_10)))
									{
										sVar10 = "DMC_PLY_LFT";
										bVar11 = false;
										if (func_260())
										{
											bVar11 = true;
										}
										iVar12 = func_262(Local_1685[iVar7]->f_3, bVar11, Local_92[iVar7]->f_8);
										set_bit(&uLocal_669, iVar7);
										func_265(func_264(_create_var_string(10, sVar10, func_263(&(Local_92[iVar7]->f_10), iVar12)), 2000, 0, 0, 1, 1));
									}
								}
							}
							iVar7++;
						}
						if (is_bit_set(Local_5688.f_24.f_5, 2))
						{
							iLocal_672 = iVar8;
							iLocal_673 = iVar9;
						}
						func_249(1);
						if (!is_bit_set(iLocal_58, 12))
						{
							set_bit(&iLocal_58, 12);
						}
					}
				}
			}
		}
	}
}

void func_10(var uParam0)
{
	func_266();
	func_267();
	if (func_268(*Global_1049272, *Global_262148))
	{
		func_269();
		func_270(uParam0);
	}
	Global_390124->f_1 = 1;
	Global_390124->f_2 = 1;
}

void func_11()
{
	if (func_271())
	{
		_0x236905c700fdb54d();
	}
}

bool func_12()
{
	if ((is_bit_set(Local_5688.f_41, 5) || func_272(256)) || func_14())
	{
		return true;
	}
	return false;
}

void func_13(int iParam0)
{
	Global_262153 = (Global_262153 || iParam0);
}

bool func_14()
{
	return &Global_2883584;
}

bool func_15()
{
	return is_bit_set(Global_3145858->f_222, 1);
}

void func_16()
{
	switch (Global_2359296->f_14980)
	{
		case 0:
			if (func_260())
			{
				if (Local_1685[iLocal_71]->f_6 >= 5)
				{
					if (!is_bit_set(Global_2892896->f_11, Global_2892896->f_13))
					{
						set_bit(&(Global_2892896->f_11), Global_2892896->f_13);
					}
				}
				if (func_273())
				{
					func_274();
				}
			}
			else if (Local_1685[iLocal_71]->f_6 >= 5)
			{
				func_274();
			}
			break;
		case 1:
			if (_0x72b2e00c9bac6789(&(Local_5688.f_2323), iLocal_79) && Local_1685[iLocal_71]->f_6 >= 5)
			{
				func_274();
			}
			break;
		case 2:
			if (Local_1685[iLocal_71]->f_5 >= 1 && Local_1685[iLocal_71]->f_6 >= 5)
			{
				func_274();
			}
			break;
		case 3:
			if (func_260())
			{
				if (Local_1685[iLocal_71]->f_6 >= 3)
				{
					if (!is_bit_set(Global_2892896->f_11, Global_2892896->f_13))
					{
						set_bit(&(Global_2892896->f_11), Global_2892896->f_13);
					}
				}
				if (func_273())
				{
					func_274();
				}
			}
			else if (Local_1685[iLocal_71]->f_5 >= 3)
			{
				func_274();
			}
			break;
	}
}

bool func_17()
{
	if (func_14())
	{
		if (!is_pause_menu_active())
		{
			if (Global_2892896->f_9)
			{
				if (is_screen_faded_out())
				{
					if (func_14())
					{
						Global_2883584 = 0;
					}
					return true;
				}
				else if (!is_screen_fading_out())
				{
					do_screen_fade_out(500);
				}
			}
		}
	}
	return false;
}

void func_18()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_275(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_276(iVar0, 0, 0f);
		}
		iVar0++;
	}
}

bool func_19()
{
	if (iVar14342 > 100)
	{
		return true;
	}
	iLocal_14344 = iVar14342 + 1;
	_text_database_request("DMC_PLAY");
	if (_text_database_has_loaded("DMC_PLAY") || iVar14342 > 100)
	{
		iLocal_14344 = 101;
		return true;
	}
	return false;
}

char* func_20()
{
	sVar0 = "MP Instanced ADV";
	sVar1 = func_277();
	if (!is_string_null_or_empty(sVar1))
	{
		StringCopy(&cVar2, sVar0, 64);
		StringConCat(&cVar2, " - ", 64);
		StringConCat(&cVar2, sVar1, 64);
		return func_278(cVar2);
	}
	return sVar0;
}

void func_21()
{
	if (!network_is_host())
	{
		return;
	}
	if (func_279())
	{
		func_280(1);
	}
	if (Local_1685[iLocal_71]->f_59 == Local_5688.f_51)
	{
		return;
	}
	if (network_is_session_active())
	{
		iVar0 = 192;
		Local_1685[iLocal_71]->f_59 = Local_5688.f_51;
		if (Local_5688.f_51)
		{
			_0xe546bda1b3e288ee(iVar0);
		}
		else
		{
			_0x78335e12db0bf961(iVar0);
		}
	}
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		switch (get_event_at_index(1, iVar0))
		{
			case -507840394:
				get_event_data(1, iVar0, &iVar1, 4);
				switch (iVar1)
				{
					case 157:
						func_281(iVar0);
						break;
					case 158:
						func_282(iVar0);
						break;
					case 155:
						func_283(iVar0);
						break;
					case 164:
						func_284(iVar0);
						break;
					case 163:
						func_285(iVar0);
						break;
					case 165:
						func_286(iVar0);
						break;
					case 161:
						func_287(iVar0);
						break;
					case 159:
						func_288(iVar0);
						break;
					case 162:
						func_289(iVar0);
						break;
					case 166:
						func_290(iVar0);
						break;
					case 167:
						func_291(iVar0);
						break;
				}
				break;
			case -1315570756:
				func_292(iVar0);
				break;
			case -454144443:
				func_293(iVar0);
				break;
			case 1559647390:
				func_294(iVar0);
				break;
			case -437497832:
				func_295(iVar0);
				break;
			case -2001102517:
				func_296(iVar0);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -178091376:
				func_297(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_23()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_298(iVar0);
		iVar0++;
	}
	if (bLocal_75)
	{
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			func_299(iVar1);
			iVar1++;
		}
	}
}

void func_24(var uParam0)
{
	switch (func_29(iLocal_71))
	{
		case 0:
			func_300();
			break;
		case 1:
			func_67(3);
			break;
		case 2:
			func_301(*uParam0);
			break;
		case 3:
			func_302(*uParam0);
			break;
		case 4:
			func_303(64);
			func_304();
			break;
		case 5:
			if (is_bit_set(Local_5688.f_41, 5))
			{
				func_305();
				func_306(0);
				func_307(524288);
				func_241(1);
				func_108(1);
				func_67(6);
			}
			break;
		case 6:
			func_308(uParam0);
			break;
		case 8:
			if (is_player_control_on(iLocal_79))
			{
				func_58(0, 40);
			}
			if (func_261() >= 6)
			{
				if (func_309() <= 1)
				{
					if (is_bit_set(Local_5688.f_41, 17))
					{
						func_310();
					}
					else
					{
						func_311();
					}
				}
				else
				{
					func_310();
				}
			}
			break;
		case 7:
			func_312();
			break;
		case 9:
			func_313();
			break;
		case 11:
			func_314();
			break;
		case 13:
			func_315(&Local_13917, 1);
			func_316(1);
			func_67(12);
			break;
		case 12:
			func_317();
			break;
		case 14:
			func_318(1);
			_0x2e399eafbeea74d5();
			func_5(0);
			func_67(15);
			break;
		case 15:
			if (Global_1048586 || !&Global_1048581)
			{
				func_5(1);
			}
			else
			{
				func_319();
			}
			break;
	}
}

void func_25()
{
	func_320();
	func_321();
	func_322();
	func_323();
	if (_0xfb6eb8785f808551(iLocal_79, 5000, true))
	{
		if (!is_bit_set(iLocal_57, 2))
		{
			set_bit(&iLocal_57, 2);
			func_324(&uLocal_12871, 0, 0);
		}
	}
	else if (func_325(&uLocal_12871, 0, 0) > 15000)
	{
		clear_bit(&iLocal_57, 2);
	}
	if (!func_326(0))
	{
		func_327(0);
	}
	if (!func_31(10))
	{
		if (!is_bit_set(iLocal_57, 15))
		{
			if (!is_bit_set(iLocal_58, 22))
			{
				set_ped_config_flag(iLocal_81, 472, true);
				set_bit(&iLocal_58, 22);
			}
			set_ped_reset_flag(iLocal_81, 129, true);
			set_ped_reset_flag(iLocal_81, 219, true);
			set_ped_reset_flag(iLocal_81, 220, true);
		}
		else
		{
			clear_bit(&iLocal_57, 15);
			if (is_bit_set(iLocal_58, 22))
			{
				set_ped_config_flag(iLocal_81, 472, false);
				clear_bit(&iLocal_58, 22);
			}
		}
	}
	if (func_31(22))
	{
		if (func_31(18))
		{
			set_ped_reset_flag(iLocal_81, 254, true);
		}
	}
	if (func_14() && func_31(5))
	{
		set_bit(&(Local_12907.f_966), 8);
	}
	if (func_29(iLocal_70) <= 6)
	{
		func_328(Local_1685[iLocal_70]->f_3);
	}
	else if (func_29(iLocal_70) > 6)
	{
		func_329();
	}
	if (func_29(iLocal_70) != 6 || func_38(iLocal_71))
	{
		disable_control_action(0, -1404316431, true);
	}
	if (is_bit_set(Local_5688.f_24.f_5, 4))
	{
		func_330();
	}
	if (func_31(64))
	{
		set_ped_reset_flag(iLocal_81, 135, true);
		set_ped_reset_flag(iLocal_81, 140, true);
	}
	if (func_29(iLocal_71) >= 7)
	{
		if (uLocal_14268.f_20 != -1)
		{
			func_331(&iLocal_81);
		}
	}
	func_332();
	if (!func_38(iLocal_71))
	{
		func_333(0);
	}
	func_334();
	func_335();
	func_336(&Local_12907);
}

void func_26()
{
	if (Local_5688.f_1160 != fVar15001)
	{
		uLocal_15003 = Local_5688.f_1160;
		bVar0 = true;
	}
	if (Local_5688.f_1162 != fVar15002)
	{
		uLocal_15004 = Local_5688.f_1162;
		bVar0 = true;
	}
	if (Local_5688.f_1161 != fVar15003)
	{
		uLocal_15005 = Local_5688.f_1161;
		bVar0 = true;
	}
	if (bVar0)
	{
		func_337();
	}
	func_338(Local_5688.f_1160, Local_5688.f_1162, Local_5688.f_1161, Local_5688.f_1161 == 0f);
	_0xdb48e99f8e064e56(0f);
	_0x28cb6391acedd9db(0f);
}

int func_27(struct<2> Param0)
{
	return func_339(Param0);
}

void func_28(int iParam0)
{
	switch (func_261())
	{
		case 0:
			func_340(iParam0);
			break;
		case 1:
			func_341();
			break;
		case 2:
			func_342();
			break;
		case 3:
			func_343();
			if (func_344())
			{
				if (func_345(&uLocal_12877))
				{
					if (func_325(&uLocal_12877, 0, 0) > 500)
					{
						func_346(6);
					}
				}
				else
				{
					func_324(&uLocal_12877, 0, 0);
				}
			}
			break;
		case 6:
			break;
	}
}

int func_29(int iParam0)
{
	return &(Local_1685[iParam0]);
}

bool func_30(int iParam0)
{
	return func_347(&(Global_2359296->f_3), iParam0);
}

bool func_31(int iParam0)
{
	return func_347(&(Global_3145858->f_6), iParam0);
}

void func_32()
{
	if (!bLocal_75 || (func_14() && func_31(5)))
	{
		return;
	}
	iVar1 = func_348();
	switch (func_349())
	{
		case 0:
			reserve_network_mission_peds(iVar1);
			if (can_register_mission_peds(iVar1))
			{
				func_350();
				func_351(1);
			}
			break;
		case 1:
			if (func_234())
			{
				func_351(2);
			}
			else if (is_bit_set(Local_5688.f_41, 5))
			{
				if (Local_92[iVar15772]->f_3)
				{
					if (func_352(iVar15772) != 6)
					{
						func_353(iVar15772, 5);
					}
				}
				else if (func_352(iVar15772) == 6)
				{
					if (func_354(&(Local_5688.f_568[iVar15772]->f_1)))
					{
						func_353(iVar15772, 0);
					}
				}
				if (func_352(iVar15772) != 6)
				{
					func_355(Local_5688.f_52[iVar15772], iVar15772);
				}
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (func_352(iVar0) != 6)
				{
					func_136(Local_5688.f_52[iVar0], iVar0);
				}
				iVar0++;
			}
			break;
	}
	iLocal_15774 = iVar15772 + 1;
	if (iVar15772 >= iVar1)
	{
		iLocal_15774 = 0;
	}
}

void func_33(var uParam0)
{
	if (uParam0->f_16)
	{
		_0x702b75dc9d3ede56(true);
		_0xc64abc0676af262b();
	}
	else if (uParam0->f_20 != -1)
	{
		_0x8910c24b7e0046ec();
	}
}

void func_34(var uParam0)
{
	if (uParam0->f_6)
	{
		return;
	}
	if (!uParam0->f_5)
	{
		return;
	}
	if (uParam0->f_7)
	{
		if (!uParam0->f_8)
		{
			func_356(uParam0);
			uParam0->f_8 = 1;
		}
		return;
	}
	iVar0 = func_357();
	if (iVar0 >= 5000)
	{
		if (!func_345(uParam0))
		{
			func_324(uParam0, 0, 0);
			func_358(&(uParam0->f_2));
		}
	}
	else
	{
		if (func_345(uParam0))
		{
			func_358(uParam0);
		}
		if (!func_345(&(uParam0->f_2)))
		{
			func_324(&(uParam0->f_2), 0, 0);
		}
		iVar1 = func_325(&(uParam0->f_2), 0, 0);
		if (iVar1 >= 1000)
		{
			if (iVar0 < iVar1)
			{
				uParam0->f_4++;
			}
			func_324(&(uParam0->f_2), 0, 0);
		}
	}
}

void func_35(int iParam0)
{
	if (func_359())
	{
		if (!_0xb346c85d49cc998e(iParam0, 1))
		{
			_0xb8de69d9473b7593(iParam0, 1);
		}
		if (!_0xb346c85d49cc998e(iParam0, 2))
		{
			_0xb8de69d9473b7593(iParam0, 2);
		}
		if (!_0xb346c85d49cc998e(iParam0, 5))
		{
			_0xb8de69d9473b7593(iParam0, 5);
		}
		if (!_0xb346c85d49cc998e(iParam0, 15))
		{
			_0xb8de69d9473b7593(iParam0, 15);
		}
		if (!_0xb346c85d49cc998e(iParam0, 16))
		{
			_0xb8de69d9473b7593(iParam0, 16);
		}
		if (!_0xb346c85d49cc998e(iParam0, 17))
		{
			_0xb8de69d9473b7593(iParam0, 17);
		}
		if (!_0xb346c85d49cc998e(iParam0, 25))
		{
			_0xb8de69d9473b7593(iParam0, 25);
		}
		if (!_0xb346c85d49cc998e(iParam0, 33))
		{
			_0xb8de69d9473b7593(iParam0, 33);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 1))
		{
			_0xc163dac52ac975d3(iParam0, 1);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 2))
		{
			_0xc163dac52ac975d3(iParam0, 2);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 5))
		{
			_0xc163dac52ac975d3(iParam0, 5);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 15))
		{
			_0xc163dac52ac975d3(iParam0, 15);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 16))
		{
			_0xc163dac52ac975d3(iParam0, 16);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 17))
		{
			_0xc163dac52ac975d3(iParam0, 17);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 25))
		{
			_0xc163dac52ac975d3(iParam0, 25);
		}
		if (!_0x02aa2096fe00f3e1(iParam0, 33))
		{
			_0xc163dac52ac975d3(iParam0, 33);
		}
	}
}

void func_36()
{
	if (func_360())
	{
		return;
	}
	datafile_create(0);
	sVar0 = datafile_get_file_dict(0);
	datadict_set_int(sVar0, "lp", get_cloud_time_as_int());
	if (!is_bit_set(&Global_1048626, 2))
	{
		datadict_set_int(sVar0, "quit", 1);
	}
	Local_41.f_11 = _0xe79c70e77e0973c7(Global_1051116, Local_54.f_1, func_361(0), 0);
	func_362();
	IntToString(Global_1051116, get_hash_key(""), 24);
	func_363(10);
}

void func_37(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

bool func_38(int iParam0)
{
	if (func_29(iParam0) == 0)
	{
		return true;
	}
	if (is_bit_set(Local_1685[iParam0]->f_2, 5) || is_bit_set(Local_1685[iParam0]->f_2, 8))
	{
		return true;
	}
	return false;
}

void func_39()
{
	if (!func_14() && !func_38(iLocal_71))
	{
		Var0.f_2 = -1;
		Var0.f_3 = -1;
		Var0.f_4 = -1;
		Var0.f_5 = -1;
		Var0.f_6 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var14.f_2 = -1;
		Var14.f_3 = -1;
		Var14.f_4 = -1;
		Var14.f_5 = -1;
		Var14.f_6 = -1;
		Var14.f_7 = -1;
		Var14.f_8 = -1;
		Var14.f_9 = -1;
		Var14.f_10 = -1;
		Var14.f_11 = -1;
		iVar28 = 0;
		if (func_260())
		{
			iVar28 = 1;
		}
		iVar29 = func_364();
		func_365(&Var0, 0, iVar28, iVar29);
		func_366(&Var0, &(Global_1048684->f_403), &(Global_1048684->f_399), 0);
		func_365(&Var14, 1, iVar28, iVar29);
		func_366(&Var14, &(Global_1048684->f_419), &(Global_1048684->f_415), 0);
		Var30.f_1 = 11;
		func_367(&Var30, Var0.f_13);
		func_369(func_368(Var0.f_2), &(Global_1048684->f_431), &Var30, 0, 255, 0, 0);
	}
}

void func_40()
{
	if (!func_38(iLocal_71))
	{
		if (func_260())
		{
			if (func_370(Local_1685[iLocal_71]->f_3))
			{
				set_bit(Global_1048626, 0);
				func_371(Local_5688.f_24, 1, 0, 1);
			}
			else
			{
				set_bit(Global_1048626, 1);
				func_371(Local_5688.f_24, 0, 1, 1);
			}
		}
		else if (Local_5688.f_1130 == get_unique_int_for_player(iLocal_79))
		{
			set_bit(Global_1048626, 0);
			func_371(Local_5688.f_24, 1, 0, 1);
		}
		else
		{
			set_bit(Global_1048626, 1);
			func_371(Local_5688.f_24, 0, 1, 1);
		}
	}
}

void func_41()
{
	func_324(&uVar0, 1, 0);
	while (func_325(&uVar0, 1, 0) < 4500)
	{
		if (!network_is_signed_online())
		{
			return;
		}
		if ((!network_is_game_in_progress() && !_0xf2cbc969c4f090c7()) && !network_is_session_active())
		{
			return;
		}
		if (func_372(255) != 4)
		{
			return;
		}
		if (!func_373(11, 255))
		{
			func_374();
		}
		wait(0);
	}
}

void func_42()
{
	if ((network_is_game_in_progress() && _0xf2cbc969c4f090c7()) && network_is_session_active())
	{
		chal_net_stop_chal(1852874750);
	}
	func_11();
	if (iVar14115 != 0)
	{
		_0x00a15b94cba4f76f(iVar14115);
	}
	if (iVar14176 != 0)
	{
		_0x00a15b94cba4f76f(iVar14176);
	}
	_0x2e399eafbeea74d5();
}

void func_43()
{
	func_375(1);
	func_376(0);
	func_48(0);
	if (!func_377() && func_12())
	{
		if (func_378() == 33)
		{
			func_379(5, 0);
		}
		else
		{
			func_380(1, 1);
		}
		func_376(1);
		func_381();
	}
	_display_hud_component(690901814);
	func_230();
}

void func_44()
{
	Global_262153 = 0;
}

void func_45(int iParam0)
{
	func_382(536870912);
	func_382(1073741824);
	func_382(-2147483648);
	func_382(268435456);
	func_13(iParam0);
}

bool func_46(char* sParam0)
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

void func_47(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_383(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_46(&(Param0.f_10)))
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
			func_384(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_48(bool bParam0)
{
	if (!bParam0)
	{
		func_385(19);
	}
	else
	{
		func_59(19);
	}
}

void func_49(int iParam0)
{
	(*Global_263042)[network_player_id_to_int()]->f_1.f_55.f_4 = iParam0;
}

void func_50(int iParam0)
{
	Global_262151 = (&Global_262151 - (Global_262151 && iParam0));
}

bool func_51()
{
	return func_309() > 1;
}

struct<5> func_52()
{
	return (*Global_263042)[network_player_id_to_int()]->f_1.f_55;
}

bool func_53(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

void func_54(bool bParam0, var uParam1)
{
	if (func_386())
	{
		func_68(Global_1050050);
	}
	else if (bParam0)
	{
		func_68(Global_1050050);
	}
	else
	{
		*uParam1 = 1;
	}
	func_375(1);
}

void func_55(bool bParam0)
{
	if (Global_1071686->f_28773.f_1 != get_id_of_this_thread() && !bParam0)
	{
		return;
	}
	if (Global_1071686->f_28773.f_1 == 0)
	{
		return;
	}
	func_387(&(Global_1071686->f_28773.f_2), 2);
}

void func_56(int iParam0)
{
	if (&Global_1048577 != iParam0)
	{
		Global_1048577 = iParam0;
	}
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	network_set_this_script_is_network_script(iParam2, false, uParam0->f_13);
	func_388();
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	*uParam1 = Global_3145858->f_286;
	func_232(uParam1, 0);
}

void func_58(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_389(iParam1);
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
	func_390(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

int func_59(int iParam0)
{
	if (func_391(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_60(bool bParam0)
{
	if (func_31(42))
	{
		set_ped_model_is_suppressed(-1892280447, bParam0);
		set_ped_model_is_suppressed(-1598866821, bParam0);
		set_ped_model_is_suppressed(-1295720802, bParam0);
		set_ped_model_is_suppressed(-1124266369, bParam0);
		set_ped_model_is_suppressed(730092646, bParam0);
		set_ped_model_is_suppressed(480688259, bParam0);
		set_ped_model_is_suppressed(1654513481, bParam0);
		set_ped_model_is_suppressed(-1143398950, bParam0);
		set_ped_model_is_suppressed(-885451903, bParam0);
		set_ped_model_is_suppressed(-829273561, bParam0);
		set_ped_model_is_suppressed(90264823, bParam0);
		set_ped_model_is_suppressed(846659001, bParam0);
		set_ped_model_is_suppressed(1464167925, bParam0);
		set_ped_model_is_suppressed(-1790499186, bParam0);
		set_ped_model_is_suppressed(-1747620994, bParam0);
		set_ped_model_is_suppressed(545068538, bParam0);
	}
}

bool func_61(bool bParam0, int iParam1)
{
	if (bParam0 || func_392(iParam1))
	{
		func_393();
		if (bParam0)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				Local_5688.f_1196[iVar0] = -1;
				Local_5688.f_1163[iVar0] = -1;
				Local_5688.f_1230[iVar0] = func_394();
				(*Local_5688.f_2521[iVar0])[0] = 255;
				(*Local_5688.f_2521[iVar0])[1] = 255;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				Local_5688.f_1680[iVar0] = 255;
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			Local_5688.f_2663[iVar0] = 255;
			Local_5688.f_2663.f_3[iVar0] = 255;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 59)
		{
			Local_5688.f_1619[iVar0] = func_394();
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Local_5688.f_407[iVar0]->f_4 = 255;
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			iVar3 = 0;
			while (iVar3 <= 2)
			{
				Local_5688.f_1295[iVar2]->f_31[iVar3] = func_394();
				iVar3++;
			}
			iVar2++;
		}
		func_395();
		func_396();
		func_397(&(Local_5688.f_2391), is_bit_set(Local_5688.f_24.f_2, 9), bParam0);
		func_398(&(Local_5688.f_2391), 20000);
		if (is_bit_set(Local_5688.f_24.f_3, 10))
		{
			func_399(&(Local_5688.f_2391), 1);
		}
		Local_5688.f_1160 = func_400(Global_3145858->f_288);
		Local_5688.f_1161 = func_401(Global_3145858->f_287);
		Local_5688.f_1162 = func_400(Global_3145858->f_289);
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_4834 - 1))
		{
			if (func_402(iVar0))
			{
				set_bit(&(Local_5688.f_41), 21);
				set_bit(&(Local_5688.f_41), 23);
				Jump @565; //curOff = 485
			}
			else if (Global_2359296->f_4836[iVar0]->f_7 > 0)
			{
				set_bit(&(Local_5688.f_41), 21);
				Jump @565; //curOff = 519
			}
			else if (Global_2359296->f_4836[iVar0]->f_6 > 0)
			{
				set_bit(&(Local_5688.f_41), 14);
			}
			else
			{
				iVar0++;
			}
		}
		if (!bParam0 && Global_2359296->f_4835 > 0)
		{
			if (func_14() && Global_2892896->f_34 != -1)
			{
				iVar4 = Global_2892896->f_34;
			}
			else
			{
				iVar5 = get_random_int_in_range(1000, Global_2359296->f_4835 + 1 * 1000);
				iVar4 = (floor((to_float(iVar5) / 1000f)) - 1);
			}
			Local_5688.f_2414 = iVar4;
		}
		if (!bParam0)
		{
			Local_5688.f_3328 = func_403();
			iVar0 = 0;
			while (iVar0 <= (Global_3145858->f_6822 - 1))
			{
				func_404(iVar0, Global_3145858->f_6823[iVar0]->f_25);
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_13424 - 1))
		{
			Local_5688.f_1489[iVar0] = func_405(Global_3145858->f_13425[iVar0]->f_87);
			if (func_406(iVar0))
			{
				if (&Local_5688.f_1489[iVar0] != 999)
				{
					Local_5688.f_1489[iVar0] = &Local_5688.f_1489[iVar0] + 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_36479 - 1))
		{
			if (is_bit_set(Global_3145858->f_36480[iVar0]->f_7, 5))
			{
				set_bit(&(Local_5688.f_1488), iVar0);
			}
			iVar0++;
		}
		if (!bParam0)
		{
			Local_5688.f_1563 = Local_5688.f_867;
			if (!func_14() || Global_2892896->f_23 == 0)
			{
				Local_5688.f_868 = Local_5688.f_867;
				Local_5688.f_870 = Local_5688.f_867;
			}
		}
		if (func_260())
		{
			iVar1 = 0;
			while (iVar1 <= (Local_5688.f_857 - 1))
			{
				if (!bParam0)
				{
					Local_5688.f_1564[iVar1] = &Local_5688.f_858[iVar1];
					Local_5688.f_1582[iVar1] = &Local_5688.f_858[iVar1];
					Local_5688.f_1600[iVar1] = &Local_5688.f_858[iVar1];
					if (&Local_5688.f_1564[iVar1] > 0)
					{
						set_bit(Local_5688.f_42[iVar1], 0);
						iVar6++;
						uVar7 = iVar1 + 1;
					}
				}
				Local_5688.f_1609[iVar1] = 999999999;
				iVar1++;
			}
			if (!bParam0)
			{
				if (!func_14() || Global_2892896->f_24 == 0)
				{
					Local_5688.f_869 = iVar6;
					Local_5688.f_871 = iVar6;
				}
				Local_5688.f_875 = uVar7;
			}
			iVar1 = 0;
			while (iVar1 < 8)
			{
				if (iVar1 < Local_5688.f_857)
				{
					Local_5688.f_1135[iVar1] = iVar1;
				}
				else
				{
					Local_5688.f_1135[iVar1] = -1;
				}
				iVar1++;
			}
		}
		if (is_bit_set(Local_5688.f_24.f_5, 5))
		{
			func_407();
		}
		func_408(0);
		return true;
	}
	return false;
}

void func_62()
{
	if (Global_3145858->f_13424 > 0)
	{
		iVar1 = Global_3145858->f_13424;
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 <= (Global_3145858->f_13424 - 1))
		{
			if (!is_bit_set(Global_3145858->f_13425[iVar2]->f_11, 0))
			{
				iVar3 += 2;
			}
			iVar2++;
		}
		iVar0 = (iVar0 + iVar3);
	}
	if (Global_3145858->f_36479 > 0)
	{
		iVar7 = 0;
		iVar7 = 0;
		while (iVar7 <= (Global_3145858->f_36479 - 1))
		{
			iVar4 = (iVar4 + _0x635423d55ca84fc8(Global_3145858->f_36480[iVar7]->f_1));
			iVar7++;
		}
	}
	iVar1 = (iVar1 + iVar4);
	if (iVar1 > 0)
	{
		reserve_network_mission_vehicles(iVar1);
	}
	if (Global_3145858->f_452 > 0)
	{
		iVar0 = (iVar0 + Global_3145858->f_452);
	}
	if (iVar0 > 0)
	{
		reserve_network_mission_peds(iVar0);
	}
	if (Global_2359296->f_458 > 0 || Global_3145858->f_32695 > 0)
	{
		iVar5 = (iVar5 + (Global_2359296->f_458 + Global_3145858->f_32695));
		iVar6 = (iVar6 + func_409());
	}
	iVar8 = 0;
	while (iVar8 < Global_3145858->f_6822)
	{
		if (!func_410(Global_3145858->f_6823[iVar8]->f_28))
		{
			iVar6++;
		}
		iVar8++;
	}
	if (iVar6 > 0)
	{
		reserve_network_mission_pickups(iVar6);
	}
	if (iVar5 > 0)
	{
		reserve_network_mission_objects(iVar5);
	}
}

void func_63()
{
	func_411();
	func_412();
	func_413();
	func_414();
	func_416(55542);
	func_417();
	func_418();
	func_419();
}

void func_64()
{
	network_register_host_broadcast_variables(&Local_5688, 3329, 59);
	func_420(_0xba24095ea96dfe17(&Local_5688), 3329, "DMC_ServerBD");
	network_register_host_broadcast_variables(&Local_10501, 742, 60);
	func_420(_0xba24095ea96dfe17(&Local_10501), 742, "DMC_ServerBD_LB");
	network_register_host_broadcast_variables(&Local_9017, 742, 60);
	func_420(_0xba24095ea96dfe17(&Local_9017), 742, "DMC_ServerBD_LB_Rounds");
	network_register_host_broadcast_variables(&Local_9759, 742, 60);
	func_420(_0xba24095ea96dfe17(&Local_9759), 742, "DMC_ServerBD_LB_Unsorted");
	network_register_player_broadcast_variables(&Local_1685, 2017, 61);
	func_421(_0x690806bc83bc8ca2(Local_1685[0]), 2017, "DMC_PlayerBD");
	network_register_player_broadcast_variables(&Local_3702, 769, 62);
	func_421(_0x690806bc83bc8ca2(Local_3702[0]), 769, "DMC_PlayerBD_Scores");
	network_register_player_broadcast_variables(&Local_4471, 1217, 63);
	func_421(_0x690806bc83bc8ca2(Local_4471[0]), 1217, "g_UGCPlayerBD_Vote");
}

void func_65(bool bParam0)
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
					func_248();
					break;
				case 2:
					func_248();
					break;
				case 4:
					func_248();
					break;
				case 3:
					func_248();
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
			func_248();
			return;
		}
		wait(0);
	}
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		func_59(128);
	}
	else
	{
		func_385(128);
	}
}

void func_67(int iParam0)
{
	if (iLocal_71 == -1)
	{
		return;
	}
	Local_1685[iLocal_71] = iParam0;
}

void func_68(var uParam0)
{
	Var0 = 1;
	Var0.f_15 = 8;
	Var0.f_27 = 4;
	Var0.f_101 = 32;
	Var0.f_101.f_1.f_1 = -1082130432;
	Var0.f_101.f_1.f_2 = -1082130432;
	Var0.f_101.f_1.f_3 = -1082130432;
	Var0.f_101.f_1.f_4 = -1082130432;
	Var0.f_101.f_1.f_5 = -1082130432;
	Var0.f_101.f_1.f_14 = 255;
	Var0.f_101.f_1.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_1 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_2 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_3 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_4 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_5 = -1082130432;
	Var0.f_101.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_14 = 255;
	iVar838 = 0;
	while (iLocal_841 <= 31)
	{
		Var0.f_101[iLocal_841]->f_14 = 255;
		iVar838 = iLocal_841 + 1;
	}
	func_69(&Var0);
	*uParam0 = { Var0 };
}

void func_69(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(uParam0->f_27[iVar0], "", 64);
		iVar0++;
	}
}

void func_70()
{
	iVar0 = 0;
	while (iVar0 <= 67)
	{
		if (is_bit_set(&(Global_3145858->f_232[func_422(iVar0)]), func_423(iVar0)) || (func_424() && iVar0 < 49))
		{
			iVar1 = func_425(iVar0);
			if (iVar1 != 0)
			{
				chal_net_stop_goal(1852874750, iVar1);
			}
		}
		iVar0++;
	}
}

void func_71(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_201(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_426(Global_1940258, 8388608);
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

void func_72()
{
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0 = 0;
		while (iVar0 <= 108)
		{
			if (is_bit_set(&(Global_3145858->f_38736[iVar0]->f_6[iVar1]), 0))
			{
				uLocal_1675[iVar1] = &uLocal_1675[iVar1] + 1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iLocal_743[iVar0] = -1;
		iLocal_776[iVar0] = -1;
		iLocal_809[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_15781[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_18726 - 1))
	{
		iLocal_15842[iVar0] = -1;
		iVar0++;
	}
}

void func_73(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			(*Global_1051147)[iVar0] = 0;
			(*Global_1051147)[iVar0]->f_1 = 0;
			iVar0++;
		}
	}
	else
	{
		(*Global_1051147)[iParam0] = 0;
		(*Global_1051147)[iParam0]->f_1 = 0;
	}
}

void func_74()
{
	if (!is_bit_set(Local_1685[iLocal_71]->f_2, 12))
	{
		iLocal_12869 = _create_volume_sphere(Global_3145858->f_196, 0f, 0f, 0f, 5000f, 5000f, 5000f);
		uLocal_12870 = _0x4c39c95ae5db1329(iVar12867, 0, 15);
		if (!func_427())
		{
			_0x18262cafebb5fbe1(iVar12867, 0, 0, 0, -1, -1, 0);
			_0xb56d41a694e42e86(iVar12867, 0, 0, 0, -1, -1, 0);
		}
		set_vehicle_density_multiplier_this_frame(Local_5688.f_1161);
		_0xab0d553fe20a6e25(Local_5688.f_1160);
		_0xc0258742b034dfaf(Local_5688.f_1162);
		func_428(iVar12867, 0, 0, 0, 0, 0);
		func_337();
		uLocal_15003 = Local_5688.f_1160;
		uLocal_15004 = Local_5688.f_1162;
		uLocal_15005 = Local_5688.f_1161;
		set_bit(&(Local_1685[iLocal_71]->f_2), 12);
	}
}

void func_75(var uParam0, bool bParam1)
{
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!bParam1)
		{
			*Global_1050050->f_27[iVar18] = { *(*uParam0)[iVar18] };
		}
		else
		{
			*Global_1050050->f_27[iVar18] = { Var0 };
		}
		iVar18++;
	}
	if (bParam1)
	{
	}
}

void func_76(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_34228 - 1))
	{
		if (Global_3145858->f_34229[iVar0]->f_3 != 0)
		{
			func_429(Global_3145858->f_34229[iVar0], (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_77(int iParam0)
{
	Global_17352 = iParam0;
}

void func_78(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45)
{
	if (!is_bit_set(Param0, 0))
	{
		return;
	}
	func_430();
	iVar0 = 0;
	while (iVar0 <= (44 - 1))
	{
		iVar1 = iVar0;
		if (&Param0.f_1[iVar1] == -1)
		{
		}
		else
		{
			iVar2 = func_431(iVar1);
			iVar3 = func_431(&(Param0.f_1[iVar1]));
			if (iVar2 == 0 || iVar3 == 0)
			{
			}
			else
			{
				func_432(iVar2, iVar3);
			}
		}
		iVar0++;
	}
}

void func_79(int iParam0)
{
	if (_is_ped_carrying(iParam0))
	{
		iVar0 = create_itemset(false);
		find_all_attached_carriable_entities(iParam0, iVar0);
		iVar1 = get_itemset_size(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar3 = _0x3ffb15534067dcd4(get_indexed_item_in_itemset(iVar2, iVar0));
			if (does_entity_exist(iVar3) && _0x61914209c36efddb(iVar3) != 0)
			{
				detach_entity(iVar3, true, true);
				delete_ped(&iVar3);
			}
			else
			{
				iVar2++;
			}
		}
		destroy_itemset(iVar0);
	}
}

void func_80(int iParam0)
{
	if (_is_ped_carrying(iParam0))
	{
		iVar0 = create_itemset(false);
		find_all_attached_carriable_entities(iParam0, iVar0);
		iVar1 = get_itemset_size(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar3 = _0x18013392501ce5dc(get_indexed_item_in_itemset(iVar2, iVar0));
			if (does_entity_exist(iVar3) && _0x61914209c36efddb(iVar3) != 0)
			{
				detach_entity(iVar3, true, true);
				delete_object(&iVar3);
			}
			iVar2++;
		}
		destroy_itemset(iVar0);
	}
}

bool func_81(int iParam0)
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

void func_82()
{
	if (Global_1071686->f_21952.f_581 != 0)
	{
		Global_1071686->f_21952.f_581 = 0;
	}
}

void func_83(int iParam0)
{
	_0xaa5a52204e077883(iParam0, 529538990);
	_0xaa5a52204e077883(iParam0, -596647170);
	_0xaa5a52204e077883(iParam0, -1548100798);
	_0xaa5a52204e077883(iParam0, -159383285);
	_0xaa5a52204e077883(iParam0, -1233969318);
	_0xaa5a52204e077883(iParam0, -1860710511);
	_0xaa5a52204e077883(iParam0, 1507636870);
	_0xaa5a52204e077883(iParam0, 1828724907);
	_0xaa5a52204e077883(iParam0, 1270940175);
	_0xaa5a52204e077883(iParam0, -1857826511);
}

void func_84()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(*Global_1049283)[iVar0] = { *Global_3145858->f_61343[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(*Global_1049296)[iVar0] = { *Global_3145858->f_61357[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		*(*Global_1049309)[iVar0] = { *Global_3145858->f_61371[iVar0] };
		iVar0++;
	}
	if (func_433())
	{
		func_245(1);
	}
}

void func_85()
{
	if (func_359())
	{
		iVar0 = 0;
		while (iVar0 <= 17)
		{
			bVar1 = func_434(iVar0);
			if (Global_1901947->f_827.f_14 > -1 && !bVar1)
			{
				Global_3145858->f_49704[iVar0]->f_31 = Global_1901947->f_827.f_14;
			}
			if (Global_1901947->f_827.f_15 > -1 && !bVar1)
			{
				Global_3145858->f_49704[iVar0]->f_32 = Global_1901947->f_827.f_15;
			}
			if (Global_1901947->f_827.f_16 > -1)
			{
				Global_3145858->f_49704[iVar0]->f_35 = Global_1901947->f_827.f_16;
			}
			if (Global_1901947->f_827.f_17 > -1)
			{
				Global_3145858->f_49704[iVar0]->f_36 = Global_1901947->f_827.f_17;
			}
			if (Global_1901947->f_827.f_18 > -1)
			{
				Global_3145858->f_49704[iVar0]->f_33 = Global_1901947->f_827.f_18;
			}
			if (Global_1901947->f_827.f_19 > -1)
			{
				Global_3145858->f_49704[iVar0]->f_34 = Global_1901947->f_827.f_19;
			}
			if (Global_1901947->f_827 > 0 && Global_3145858->f_60002 != 1)
			{
				Global_3145858->f_49704[iVar0]->f_26 = 0;
			}
			if (Global_1901947->f_827.f_21)
			{
				Global_3145858->f_49704[iVar0]->f_27 = -1;
			}
			if (Global_1901947->f_827.f_22)
			{
				set_bit(&(Global_3145858->f_49704[iVar0]->f_6), 14);
			}
			set_bit(&(Global_3145858->f_49704[iVar0]->f_7), 2);
			set_bit(&(Global_3145858->f_49704[iVar0]->f_7), 3);
			clear_bit(&(Global_3145858->f_49704[iVar0]->f_6), 18);
			iVar0++;
		}
		func_435(1);
		if (Global_1901947->f_827 != -1 && Global_3145858->f_60002 != 1)
		{
			Global_3145858->f_60002 = 1;
			Var2.f_3 = 16;
			_copy_memory(Global_3145858->f_57980[0], &Var2, 105);
			*Global_3145858->f_57980[0] = { func_436(Global_1901947->f_827) };
		}
		if (Global_1901947->f_827.f_21)
		{
			func_435(29);
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar107 = Global_3145858->f_59128[iVar0]->f_1;
			iVar108 = 0;
			while (iVar108 <= (iVar107 - 1))
			{
				iVar109 = 0;
				while (iVar109 <= 2)
				{
					iVar110 = Global_3145858->f_59128[iVar0]->f_2[iVar108]->f_2[iVar109]->f_2;
					if (!func_437(iVar110, 0))
					{
					}
					else if (!func_438(iVar110))
					{
					}
					else
					{
						Global_3145858->f_59128[iVar0]->f_2[iVar108]->f_2[iVar109]->f_4 = (_get_weapon_clip_size(iVar110) * func_439(iVar110));
					}
					iVar109++;
				}
				iVar108++;
			}
			iVar0++;
		}
	}
}

void func_86()
{
	func_440(1);
	func_440(2);
	func_440(4);
	func_440(8);
	func_440(16);
	func_440(32);
	func_440(64);
	func_440(128);
	func_440(256);
	func_440(512);
	func_440(1024);
	func_440(2048);
	func_440(4096);
	func_440(8192);
	func_441();
	func_442();
}

void func_87()
{
	if (!is_bit_set(iLocal_58, 9))
	{
		return;
	}
	set_time_scale(1f);
	set_cinematic_mode_active(false);
	clear_bit(&iLocal_58, 9);
}

void func_88(var uParam0)
{
	if (_uistatemachine_exists(*uParam0))
	{
		uVar0 = *uParam0;
		_uistatemachine_destroy_and_clear(&uVar0);
		_uiflowblock_release(uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_3))
	{
		_databinding_remove_data_entry(uParam0->f_3);
	}
}

bool func_89()
{
	if (func_309() <= 1)
	{
		return true;
	}
	return is_bit_set(Local_5688.f_41, 13);
}

bool func_90(int iParam0)
{
	return func_443(128, iParam0);
}

bool func_91(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_444();
	}
	return func_443(64, iParam0);
}

void func_92(bool bParam0)
{
	if (!bParam0)
	{
		func_385(28);
	}
	else
	{
		func_59(28);
	}
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		func_445(4096);
	}
	else
	{
		func_111(4096);
	}
}

void func_94(bool bParam0)
{
	if (!bParam0)
	{
		func_385(22);
	}
	else
	{
		func_59(22);
	}
}

void func_95(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_96(iParam0);
	if (!func_446(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_447(128) && !func_448(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_449() == 4)
	{
		func_385(18);
	}
	func_445(1024);
}

void func_96(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

void func_97(bool bParam0)
{
	if (bParam0)
	{
		func_445(32);
	}
	else
	{
		func_111(32);
	}
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
		func_445(8);
	}
	else
	{
		func_111(8);
	}
}

void func_99()
{
	Global_1102219->f_26.f_3348 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3354 = { 0f, 0f, 0f };
	Global_1102219->f_26.f_3347 = 1;
}

void func_100(bool bParam0)
{
	if (!bParam0)
	{
		func_385(29);
	}
	else
	{
		func_59(29);
	}
}

void func_101(int iParam0)
{
	(*Global_263042)[&Global_1296859]->f_68 = ((*Global_263042)[&Global_1296859]->f_68 - ((*Global_263042)[&Global_1296859]->f_68 && iParam0));
}

void func_102(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_103()
{
	func_59(91);
}

void func_104()
{
	Var0 = { func_450() };
	if (!func_252(Var0))
	{
		return;
	}
	if (Var0 == 2)
	{
		func_452(func_451(Var0), 0);
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	if (!func_453(Var0) && !func_454(Var0))
	{
		return;
	}
	func_455(Var0, 0, 2, 0, 0);
	if (func_453(Var0))
	{
		func_456(Var0);
	}
}

void func_105(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_106(var uParam0, var uParam1)
{
}

void func_107(int iParam0)
{
	if (&Global_1048578 != iParam0)
	{
		Global_1048578 = iParam0;
	}
}

void func_108(int iParam0)
{
	if (&Global_1048579 != iParam0)
	{
		Global_1048579 = iParam0;
	}
}

void func_109(var uParam0, bool bParam1, bool bParam2)
{
	if (&Global_1048581)
	{
		return;
	}
	if (bParam1)
	{
		if (!is_bit_set(uParam0->f_8, 3) || bParam2)
		{
			toggle_paused_renderphases(false);
			set_bit(&(uParam0->f_8), 3);
		}
	}
	else if (is_bit_set(uParam0->f_8, 3) || bParam2)
	{
		toggle_paused_renderphases(true);
		clear_bit(&(uParam0->f_8), 3);
	}
}

void func_110(bool bParam0)
{
	if (!bParam0)
	{
		func_385(33);
	}
	else
	{
		func_59(33);
	}
	_0x63e5841a9264d016(bParam0);
}

void func_111(int iParam0)
{
	if (!func_457(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 - (Global_1102219->f_26.f_9 && iParam0));
}

void func_112(int iParam0)
{
	iVar0 = func_458(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_113()
{
	Global_1051119 = 0;
	Global_1051121 = 0;
	Global_1051122 = 0;
	func_459(&Local_12907);
	func_460();
	func_461(1);
	func_462();
	func_463(0);
	func_464(&Local_12907, &Local_13917);
	func_465(&Local_12907);
}

void func_114(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (!func_466(iVar0) && does_entity_exist(uParam0[iVar0]))
		{
			delete_object((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_115(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_466(iVar0) && network_does_network_id_exist(uParam0[iVar0]))
		{
			if (network_has_control_of_network_id(uParam0[iVar0]))
			{
				func_129((*uParam0)[iVar0], 0);
			}
			else
			{
				func_131((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_116(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (_does_propset_exist(uParam0[iVar0]))
		{
			_delete_propset(uParam0[iVar0], true, true);
		}
		iVar0++;
	}
}

void func_117(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (does_pickup_exist(uParam1[iVar0]))
		{
			func_467(uParam1[iVar0], iVar0);
		}
		if (does_entity_exist(uParam2[iVar0]))
		{
			delete_object((*uParam2)[iVar0]);
		}
		iVar0++;
	}
}

void func_118(var uParam0)
{
	if (Global_3145858->f_37517 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_37517 - 1))
	{
		if (Global_3145858->f_37518[iVar0]->f_1 == 0)
		{
		}
		else
		{
			if (_does_scenario_point_exist(uParam0[iVar0]))
			{
				_delete_scenario_point(uParam0[iVar0]);
			}
			_0x4eddd9e9ca5af985(Global_3145858->f_37518[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_119(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_18726 - 1))
	{
		func_468((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_120(int iParam0)
{
	if (func_469())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_458 - 1))
		{
			func_468((*iParam0)[iVar0]);
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= (Global_524288->f_40795 - 1))
		{
			func_468((*iParam0)[iVar1]);
			iVar1++;
		}
	}
}

void func_121(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_13424 - 1))
	{
		if (Global_3145858->f_13425[iVar0]->f_66 != 0)
		{
			set_model_as_no_longer_needed(Global_3145858->f_13425[iVar0]->f_66);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_36479 - 1))
	{
		func_470(Global_3145858->f_36480[iVar0]->f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_1 != 0)
		{
			set_model_as_no_longer_needed(Global_2359296->f_459[iVar0]->f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_452 - 1))
	{
		if (Global_3145858->f_453[iVar0]->f_43 != 0)
		{
			set_model_as_no_longer_needed(Global_3145858->f_453[iVar0]->f_43);
		}
		iVar0++;
	}
	func_471();
	if (bParam0)
	{
		func_472();
		func_473();
	}
}

void func_122(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_474(iVar0);
		iVar0++;
	}
	func_154(262144);
	func_154(1048576);
	func_154(4194304);
	func_154(2097152);
	func_206();
	if (bParam0)
	{
		func_154(8388608);
	}
}

void func_123()
{
	Var0 = 54;
	Var0.f_1 = 2;
	Var0.f_1.f_3 = 2;
	Var0.f_1.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
	*Global_1915498 = { Var0 };
}

void func_124()
{
	Global_1915498->f_163 = 0;
}

void func_125(int iParam0, int iParam1)
{
	_0x0751d461f06e41ce(iParam0, 35, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 26, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 34, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 52, 0, iParam1);
}

void func_126(int iParam0, int iParam1)
{
	_0x0751d461f06e41ce(iParam0, 5, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 6, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 10, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 11, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 22, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 27, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 28, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 29, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 31, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 32, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 33, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 44, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 45, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 46, 0, iParam1);
	_0x0751d461f06e41ce(iParam0, 47, 0, iParam1);
}

void func_127()
{
	if (func_475(128))
	{
		func_476(128);
	}
}

void func_128(bool bParam0)
{
	if (bParam0)
	{
		func_59(139);
	}
	else
	{
		func_385(139);
	}
}

void func_129(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		delete_entity(&iVar0);
	}
}

void func_130(int iParam0)
{
	if (network_does_network_id_exist(&(Local_5688.f_52.f_54[iParam0])))
	{
		if (network_has_control_of_network_id(&(Local_5688.f_52.f_54[iParam0])))
		{
			func_477(Local_5688.f_52.f_54[iParam0], 0);
		}
		else
		{
			func_478(Local_5688.f_52.f_54[iParam0]);
		}
	}
}

void func_131(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ent(*uParam0);
		if (decor_exist_on(iVar0, "MC_EntityID"))
		{
			_decor_remove_all(iVar0);
		}
		set_entity_as_no_longer_needed(&iVar0);
	}
}

void func_132(int iParam0)
{
	if (network_does_network_id_exist(&(Local_5688.f_52.f_54[iParam0])))
	{
		func_478(Local_5688.f_52.f_54[iParam0]);
	}
}

void func_133(int iParam0, bool bParam1)
{
	if (network_does_network_id_exist(*iParam0))
	{
		if (!network_has_control_of_network_id(*iParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
	}
	if (network_does_network_id_exist(*iParam0))
	{
		iVar0 = net_to_ent(*iParam0);
		if (is_entity_a_vehicle(iVar0))
		{
			iVar1 = net_to_veh(*iParam0);
			delete_mission_train(&iVar1);
		}
		else
		{
			return;
		}
	}
	*iParam0 = 0;
}

void func_134()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (!network_does_network_id_exist((*Local_5688.f_1295[iVar0])[iVar1][iVar2]))
				{
				}
				else if (network_has_control_of_network_id((*Local_5688.f_1295[iVar0])[iVar1][iVar2]))
				{
					func_129((*(*Local_5688.f_1295[iVar0])[iVar1])[iVar2], 0);
				}
				else
				{
					func_131((*(*Local_5688.f_1295[iVar0])[iVar1])[iVar2]);
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_135(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (is_bit_set(uParam0->f_5, iVar0))
		{
			func_479(iVar0, 0);
			set_bit(&(uParam0->f_5), iVar0);
		}
		iVar0++;
	}
	if (_does_volume_exist(*uParam0))
	{
		_delete_volume(*uParam0);
	}
	if (does_blip_exist(uParam0->f_6))
	{
		remove_blip(&(uParam0->f_6));
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0;
	func_480(uParam0, 4);
}

void func_136(var uParam0, int iParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = net_to_ped(*uParam0);
		if (network_has_control_of_network_id(*uParam0))
		{
			delete_ped(&iVar0);
		}
		else
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
}

int func_137()
{
	return -1;
}

void func_138(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
		}
		Global_1071686->f_21689[iParam0]->f_4 = 0;
		func_481(iParam0);
	}
}

void func_139(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = 0;
		func_481(iParam0);
	}
}

void func_140(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_3 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_3 = 0;
		func_481(iParam0);
	}
}

void func_141(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_21952.f_583), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21952.f_583), iParam0);
		func_481(iParam0);
	}
}

void func_142(int iParam0)
{
	if (Global_1071686->f_21952[iParam0]->f_4 != 0)
	{
		Global_1071686->f_21952[iParam0]->f_4 = 0;
		func_481(iParam0);
	}
}

void func_143(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21689[iParam0]->f_1 = 0;
		func_481(iParam0);
	}
}

void func_144(int iParam0)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != 0)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
		}
		Global_1071686->f_21689[iParam0]->f_5 = 0;
		func_481(iParam0);
	}
}

void func_145(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_260), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_260), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_260), iParam0);
		func_481(iParam0);
	}
}

void func_146(int iParam0)
{
	func_483(func_482(), iParam0);
}

int func_147(int iParam0)
{
	return &(uLocal_83[iParam0]);
}

void func_148(int iParam0)
{
	_0x949b2f9ed2917f5d(iParam0, 0);
	_0x949b2f9ed2917f5d(iParam0, 1);
	_0x949b2f9ed2917f5d(iParam0, 2);
	_0x949b2f9ed2917f5d(iParam0, 3);
	_0x949b2f9ed2917f5d(iParam0, 0);
	_0x949b2f9ed2917f5d(iParam0, 4);
	_0x949b2f9ed2917f5d(iParam0, 5);
	_0x949b2f9ed2917f5d(iParam0, 6);
	_0x949b2f9ed2917f5d(iParam0, 7);
	_0x949b2f9ed2917f5d(iParam0, 8);
	_0x949b2f9ed2917f5d(iParam0, 9);
	_0x949b2f9ed2917f5d(iParam0, 10);
	_0x949b2f9ed2917f5d(iParam0, 11);
	_0x949b2f9ed2917f5d(iParam0, 12);
	_0x949b2f9ed2917f5d(iParam0, 13);
	_0x949b2f9ed2917f5d(iParam0, 14);
	_0x949b2f9ed2917f5d(iParam0, 15);
	_0x949b2f9ed2917f5d(iParam0, 16);
	_0x949b2f9ed2917f5d(iParam0, 17);
	_0x949b2f9ed2917f5d(iParam0, 18);
	_0x949b2f9ed2917f5d(iParam0, 19);
	_0x949b2f9ed2917f5d(iParam0, 20);
	_0x949b2f9ed2917f5d(iParam0, 21);
	_0x949b2f9ed2917f5d(iParam0, 22);
	_0x949b2f9ed2917f5d(iParam0, 23);
	_0x949b2f9ed2917f5d(iParam0, 25);
	_0x949b2f9ed2917f5d(iParam0, 26);
	_0x949b2f9ed2917f5d(iParam0, 27);
	_0x949b2f9ed2917f5d(iParam0, 28);
	_0x949b2f9ed2917f5d(iParam0, 29);
	_0x949b2f9ed2917f5d(iParam0, 30);
	_0x949b2f9ed2917f5d(iParam0, 31);
	_0x949b2f9ed2917f5d(iParam0, 32);
	_0x949b2f9ed2917f5d(iParam0, 33);
}

void func_149(int iParam0)
{
	if (!does_entity_exist(iParam0) || !is_entity_a_ped(iParam0))
	{
		return;
	}
	set_ped_config_flag(iParam0, 366, false);
	set_ped_config_flag(iParam0, 7, false);
	set_ped_config_flag(iParam0, 421, false);
	set_ped_config_flag(iParam0, 149, false);
	set_ped_config_flag(iParam0, 274, false);
	set_ped_config_flag(iParam0, 373, false);
	set_ped_config_flag(iParam0, 97, false);
	set_ped_config_flag(iParam0, 249, false);
	set_ped_config_flag(iParam0, 284, false);
	set_ped_config_flag(iParam0, 419, false);
	set_ped_config_flag(iParam0, 398, false);
	set_ped_config_flag(iParam0, 259, false);
	set_ped_config_flag(iParam0, 40, false);
	set_ped_config_flag(iParam0, 98, false);
	set_ped_config_flag(iParam0, 214, false);
	set_ped_config_flag(iParam0, 253, false);
	set_ped_config_flag(iParam0, 122, false);
	set_ped_config_flag(iParam0, 278, false);
	set_ped_config_flag(iParam0, 266, false);
	set_ped_config_flag(iParam0, 96, false);
	set_ped_config_flag(iParam0, 77, false);
	set_ped_config_flag(iParam0, 286, false);
	set_ped_config_flag(iParam0, 185, false);
	set_ped_config_flag(iParam0, 169, false);
	set_ped_config_flag(iParam0, 305, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 43, false);
	set_ped_config_flag(iParam0, 330, false);
	set_ped_config_flag(iParam0, 277, false);
	set_ped_config_flag(iParam0, 147, false);
	set_ped_config_flag(iParam0, 130, false);
	set_ped_config_flag(iParam0, 337, false);
	set_ped_config_flag(iParam0, 182, false);
	set_ped_config_flag(iParam0, 107, false);
	set_ped_config_flag(iParam0, 2, false);
	set_ped_config_flag(iParam0, 265, false);
	set_ped_config_flag(iParam0, 189, false);
	set_ped_config_flag(iParam0, 319, false);
	set_ped_config_flag(iParam0, 168, false);
	set_ped_config_flag(iParam0, 207, false);
	set_ped_config_flag(iParam0, 246, false);
	set_ped_config_flag(iParam0, 297, false);
	set_ped_config_flag(iParam0, 23, false);
	set_ped_config_flag(iParam0, 331, false);
	set_ped_config_flag(iParam0, 315, false);
	set_ped_config_flag(iParam0, 120, false);
	set_ped_config_flag(iParam0, 35, false);
	set_ped_config_flag(iParam0, 81, false);
	set_ped_config_flag(iParam0, 129, false);
	set_ped_config_flag(iParam0, 138, false);
	set_ped_config_flag(iParam0, 180, false);
	set_ped_config_flag(iParam0, 233, false);
	set_ped_config_flag(iParam0, 65, false);
	set_ped_config_flag(iParam0, 104, false);
	set_ped_config_flag(iParam0, 309, false);
	set_ped_config_flag(iParam0, 225, false);
	set_ped_config_flag(iParam0, 24, false);
	set_ped_config_flag(iParam0, 217, false);
	set_ped_config_flag(iParam0, 112, false);
	set_ped_config_flag(iParam0, 250, false);
	set_ped_config_flag(iParam0, 105, false);
	set_ped_config_flag(iParam0, 289, false);
	set_ped_config_flag(iParam0, 154, false);
	set_ped_config_flag(iParam0, 5, false);
	set_ped_config_flag(iParam0, 592, false);
	func_484();
}

void func_150(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(iParam0);
	if (decor_exist_on(get_player_ped_script_index(iVar0), "TeamId"))
	{
		decor_remove(get_player_ped_script_index(iVar0), "TeamId");
	}
	if (decor_exist_on(get_player_ped_script_index(iVar0), "MC_EntityID"))
	{
		decor_remove(get_player_ped_script_index(iVar0), "MC_EntityID");
	}
}

void func_151(var uParam0)
{
	release_sound_id(uParam0->f_4);
	_0x531a78d6bf27014b(func_485(*uParam0));
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
	*uParam0 = 0;
}

void func_152(int iParam0)
{
	switch (iParam0)
	{
		case 534854562:
			iVar0 = 0;
			break;
		case -1176661506:
			iVar0 = 1;
			break;
		case 408982081:
			iVar0 = 2;
			break;
		case 2094371892:
		case 2116390633:
			iVar0 = 3;
			break;
		case -1:
		default:
			iVar0 = -1;
			break;
	}
	func_486(iVar0, iVar0);
}

void func_153(bool bParam0)
{
	func_487(42, !bParam0);
}

void func_154(int iParam0)
{
	if (func_488(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_489(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

void func_155()
{
	if (Global_1071686->f_21689.f_258 > 0)
	{
		Global_1071686->f_21689.f_258 = 0;
	}
}

void func_156(bool bParam0)
{
	if (bParam0)
	{
		func_59(134);
	}
	else
	{
		func_385(134);
	}
}

void func_157(bool bParam0)
{
	if (bParam0)
	{
		func_59(133);
	}
	else
	{
		func_385(133);
	}
}

void func_158(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_59(137);
		if (bParam1)
		{
			_0x18ff3110cf47115d(get_player_ped(player_id()), 7, false);
		}
	}
	else
	{
		func_385(137);
		if (bParam1)
		{
			_0x18ff3110cf47115d(get_player_ped(player_id()), 7, true);
		}
	}
}

void func_159(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 - ((*Global_1291106)[iVar0]->f_1 && iParam0));
}

void func_160(int iParam0)
{
	if (iParam0 != 0)
	{
		func_490(352539363, 1);
	}
}

void func_161(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_162(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == 0)
			{
			}
			else
			{
				if (!func_491(&(Global_3145858->f_57980[iVar0]->f_3[iVar1])))
				{
				}
				else
				{
					set_ped_infinite_ammo(*iParam0, false, &(Global_3145858->f_57980[iVar0]->f_3[iVar1]));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_163()
{
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		fVar3 = &Global_2359296->f_221[iVar1]->f_2[iVar0];
		if (fVar3 != 1f)
		{
			iVar2 = &Global_2359296->f_221[iVar1];
			if (has_ped_got_weapon(iLocal_81, iVar2, 0, false))
			{
				_0xd04ad186ce8bb129(iLocal_79, iVar2, 1f);
			}
		}
		iVar1++;
	}
}

bool func_164(struct<2> Param0)
{
	return (Param0 != 0 && Param0.f_1 != 0);
}

int func_165(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_166(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_10501[iVar0]->f_14 == iLocal_79)
		{
			if (bParam0)
			{
				return iVar0 + 1;
			}
			else
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_167(int iParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (&Local_5688.f_1135[iVar0] == iParam0)
		{
			return iVar1;
		}
		else if (&Local_5688.f_1135[iVar0] != -1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

bool func_168()
{
	if (func_492())
	{
		return is_bit_set(Local_5688.f_41, 9);
	}
	return false;
}

void func_169(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 < 0 || iVar0 == 4)
		{
		}
		else
		{
			(*uParam0)[iVar0] = &Global_1139381->f_4621.f_36[iVar0];
		}
		iVar0++;
	}
}

void func_170(var uParam0)
{
	iVar2 = 0;
	while (iVar2 < 20)
	{
		(*uParam0)[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 29)
	{
		if (iVar3 == 20)
		{
		}
		else
		{
			iVar1 = iVar2;
			iVar0 = func_493(Global_34, 0, iVar1, 0);
			if (iVar0 == 0 || iVar0 == -1569615261)
			{
			}
			else if (!func_438(iVar0))
			{
			}
			else if (_is_weapon_throwable(iVar0) || _is_weapon_melee(iVar0))
			{
			}
			else
			{
				(*uParam0)[iVar3] = iVar0;
				iVar3++;
			}
		}
		iVar2++;
	}
	func_494(uParam0, &iVar3);
}

void func_171(int iParam0, var uParam1, bool bParam2)
{
	_0xb7e52a058b07c7e2(iParam0, &uVar0, &uVar4);
	Var8.f_9 = -1591664384;
	if (_0xb881ca836cc4b6d4(&uVar0))
	{
		if (_0x025a1b1fb03fbf61(3, &uVar0, &Var8, 22, 1))
		{
			uParam1->f_22 = Var8.f_4;
			if (bParam2)
			{
				Global_1051130 = Var8.f_4;
			}
		}
	}
	if (_0xb881ca836cc4b6d4(&uVar4))
	{
		if (_0x025a1b1fb03fbf61(3, &uVar4, &Var8, 22, 1))
		{
			uParam1->f_23 = Var8.f_4;
			if (bParam2)
			{
				Global_1051131 = Var8.f_4;
			}
		}
	}
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		func_59(49);
	}
	else
	{
		func_385(49);
	}
}

void func_173()
{
	func_385(85);
}

void func_174(bool bParam0)
{
	if (!bParam0)
	{
		func_385(25);
	}
	else
	{
		func_59(25);
	}
}

void func_175(bool bParam0)
{
	if (!bParam0)
	{
		func_385(14);
	}
	else
	{
		func_59(14);
	}
}

void func_176(bool bParam0)
{
	if (!bParam0)
	{
		func_385(15);
	}
	else
	{
		func_59(15);
	}
}

void func_177(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_59(65);
		if (bParam1)
		{
			func_59(69);
		}
	}
	else
	{
		func_385(65);
		func_385(69);
	}
}

void func_178(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_59(70);
		if (bParam2)
		{
			func_59(72);
		}
		Global_1102219->f_3802 = iParam0;
	}
	else
	{
		func_385(70);
		func_385(72);
	}
}

void func_179(bool bParam0)
{
	if (!bParam0)
	{
		func_385(127);
	}
	else
	{
		func_59(127);
	}
}

void func_180(bool bParam0)
{
	if (bParam0)
	{
		func_59(109);
		if (!Global_1296859->f_12)
		{
			func_495(16);
		}
	}
	else
	{
		func_385(109);
		if (!Global_1296859->f_12)
		{
			func_495(16);
		}
	}
}

void func_181(bool bParam0)
{
	Global_1102219->f_3671 = 0;
	if (!Global_1296859->f_12 && bParam0)
	{
		func_495(16);
	}
}

void func_182(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_496(&(Global_1139381->f_4796), bParam1);
		func_385(117);
	}
	else
	{
		func_59(117);
	}
}

void func_183(bool bParam0)
{
	if (bParam0)
	{
		func_59(100);
	}
	else
	{
		func_385(100);
	}
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		func_497(8);
	}
	else
	{
		func_498(8);
	}
}

void func_185(bool bParam0)
{
	if (!bParam0)
	{
		func_385(30);
	}
	else
	{
		func_59(30);
	}
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		func_59(44);
	}
	else
	{
		func_385(44);
	}
}

void func_187(bool bParam0)
{
	if (bParam0)
	{
		func_59(96);
	}
	else
	{
		func_385(96);
	}
}

void func_188()
{
	Var0.f_2 = -1;
	*Global_1051126 = { Var0 };
}

void func_189(int iParam0, var uParam1)
{
	if ((Global_3145858->f_60002 == 3 || Global_3145858->f_60002 == 0) || (Global_3145858->f_60002 == 2 && !func_31(1)))
	{
		return;
	}
	if (_0xb881ca836cc4b6d4(&(uParam1->f_14)) && _0xb881ca836cc4b6d4(&(uParam1->f_18)))
	{
		_0xec1f85da51d3d6c4(iParam0, &(uParam1->f_14), &(uParam1->f_18));
	}
}

void func_190()
{
	if (func_372(255) == 4 || func_448(0))
	{
		Global_1102219->f_3955 = 1;
		return;
	}
	bVar0 = func_448(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102219->f_4[iVar1] = 0;
		iVar1++;
	}
	func_59(109);
	func_59(131);
	if (bVar0)
	{
		func_59(36);
	}
	Global_1102219->f_3952 = 0;
	Global_1102219->f_3953 = 0;
	Global_1102219->f_3954 = 0;
	Global_1102219->f_3955 = 0;
}

void func_191(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == 0)
			{
			}
			else
			{
				func_499(&(Global_3145858->f_57980[iVar0]->f_3[iVar1]), 1f, iParam0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_192()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_500(int_to_playerindex(iVar0), 0);
		iVar0++;
	}
}

void func_193()
{
	func_501(0f);
	func_502(0);
}

void func_194()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (network_does_network_id_exist(&(Local_5688.f_3285[iVar0])))
		{
			func_129(Local_5688.f_3285[iVar0], 0);
		}
		iVar0++;
	}
}

void func_195(bool bParam0)
{
	Global_1940144->f_15 = !bParam0;
}

void func_196(int iParam0, int iParam1)
{
	_0x6569f31a01b4c097(iParam0, 1, iParam1);
	_0x6569f31a01b4c097(iParam0, 0, iParam1);
	_0x6569f31a01b4c097(iParam0, 4, iParam1);
}

void func_197()
{
	Global_1913694->f_1585 = 0;
}

void func_198()
{
	Global_1913694->f_1584 = 0;
}

void func_199(int iParam0)
{
	Global_1913694->f_1578 = iParam0;
}

void func_200(bool bParam0)
{
	if (!bParam0)
	{
		func_385(21);
	}
	else
	{
		func_59(21);
	}
}

void func_201(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_202(int iParam0, int iParam1)
{
	_0x59f0aff3e0a1b019(iParam0, 1548507267, iParam1);
	_0x59f0aff3e0a1b019(iParam0, -1241684019, iParam1);
}

void func_203(bool bParam0)
{
	func_487(57, !bParam0);
}

void func_204()
{
	if ((Global_1071686->f_21952.f_578 != 0f || Global_1071686->f_21952.f_579 != 0f) || Global_1071686->f_21952.f_580 != 0f)
	{
		Global_1071686->f_21952.f_578 = 0f;
		Global_1071686->f_21952.f_579 = 0f;
		Global_1071686->f_21952.f_580 = 0f;
	}
}

void func_205()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_143(iVar0);
		func_138(iVar0);
		func_144(iVar0);
		iVar0++;
	}
}

void func_206()
{
	if (Global_1071686->f_22961 >= 0f)
	{
		Global_1071686->f_22961 = -1f;
	}
}

void func_207()
{
	func_503();
	_0xde544b7ec0c187cc(&(Global_1071686->f_28345));
}

void func_208()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28347));
}

void func_209()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28346));
}

void func_210()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28349));
}

void func_211()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28350));
}

void func_212()
{
	_0xde544b7ec0c187cc(&(Global_1071686->f_28348));
}

void func_213()
{
	(*Global_1100469)[network_player_id_to_int()]->f_36 = { Var0 };
}

void func_214()
{
	(*Global_1100469)[network_player_id_to_int()]->f_29 = { Var0 };
	(*Global_1100469)[network_player_id_to_int()]->f_43 = 0;
	(*Global_1100469)[network_player_id_to_int()]->f_44 = 0;
	Global_1102219->f_3665 = 0;
}

void func_215(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_216()
{
	if (func_504())
	{
		if (is_bit_set(iVar16021, 0))
		{
			_0x37d7bdba89f13959("MP_SuddenDeath");
			clear_bit(&uLocal_16023, 0);
		}
	}
}

void func_217()
{
	iVar1 = 3;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (is_bit_set(iVar16020, iVar0))
		{
			remove_named_ptfx_asset(func_505(iVar0));
			clear_bit(&uLocal_16022, iVar0);
		}
		iVar0++;
	}
}

void func_218(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_506(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_507(*iParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_508(iVar0);
	*iParam0 = 0;
}

int func_219(var uParam0)
{
	if (_0x603ac35fd4602c76(*uParam0))
	{
		_datafile_unload(*uParam0);
	}
	*uParam0 = { Var0 };
	return 1;
}

void func_220()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_11 == 1141570454)
		{
			sVar1 = func_509(Global_2359296->f_459[iVar0]->f_1);
			_0x531a78d6bf27014b(sVar1);
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("RDRO_Countdown_Sounds");
}

void func_221(int iParam0)
{
	if (_does_volume_exist(*iParam0))
	{
		_0x74c2b3dc0b294102(*iParam0);
		_0xa1cfb35069d23c23(*iParam0);
		_delete_volume(*iParam0);
	}
	_0x2e957aa81f2c61c9();
}

void func_222(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_223(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (150 - 1))
	{
		if (!func_510(iVar0))
		{
		}
		else
		{
			func_511(iVar0, iParam0);
		}
		iVar0++;
	}
}

void func_224(bool bParam0, int iParam1, bool bParam2)
{
	if (func_512())
	{
		if (func_513(255))
		{
			if (!func_373(39, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_510(Global_1893587->f_2) && func_514(Global_1893587->f_2))
		{
			func_515(Global_1893587->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893587->f_7 = iParam1;
				func_516(16);
			}
		}
		else if (func_510(Global_1893587->f_2) && !func_517(Global_1893587->f_2, 2))
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
		func_518(16);
		func_519(bParam2);
		if (bVar0)
		{
			func_518(1);
		}
	}
}

void func_225(var uParam0)
{
	func_520(uParam0);
	if (!_0x89ec2fc89ecb1005())
	{
		_0x5d3c528b7a7df836(-1741123096);
		_0x5d3c528b7a7df836(1593630490);
		_0x5d3c528b7a7df836(-869194337);
		_0x5d3c528b7a7df836(493630969);
		_0x5d3c528b7a7df836(1062828826);
		_0x5d3c528b7a7df836(-733639455);
		_0x6cee2e30021daec6();
	}
	Var0.f_10 = 16;
	Var0.f_94 = 128;
	Var0.f_479 = 128;
	Var0.f_608 = 15;
	Var0.f_626 = -1082130432;
	Var0.f_627 = -1082130432;
	Var0.f_628 = -1082130432;
	Var0.f_629 = -1082130432;
	Var0.f_630 = -1082130432;
	Var0.f_631 = -1082130432;
	*uParam0 = { Var0 };
}

void func_226(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_34228 - 1))
	{
		if (Global_3145858->f_34229[iVar0]->f_3 != 0)
		{
			func_521(Global_3145858->f_34229[iVar0], (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_227(var uParam0, bool bParam1)
{
	bVar0 = false;
	vVar1 = { -16000f, -16000f, -1700f };
	vVar4 = { 16000f, 16000f, 2700f };
	if (*uParam0 != -1)
	{
		if (does_pop_multiplier_area_exist(*uParam0))
		{
			remove_pop_multiplier_area(*uParam0, bVar0);
		}
		set_all_vehicle_generators_active_in_area(vVar1, vVar4, true, !bVar0);
		if (bParam1)
		{
			set_roads_back_to_original(vVar1, vVar4, 0, 1);
		}
	}
}

void func_228(var uParam0)
{
	if (!_0x91a5f9cbebb9d936(*uParam0))
	{
		return;
	}
	remove_scenario_blocking_area(*uParam0, true);
}

void func_229()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (!func_275(Global_3145858->f_37246[iVar0]->f_1))
		{
		}
		else
		{
			func_522(Global_3145858->f_37246[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_230()
{
	if (!&Global_1048581)
	{
		_0x65f040d91001ed4b(0);
		_0xce7690c0a0d1c36d(5000);
		func_523(0);
	}
}

void func_231()
{
	func_524(2);
}

void func_232(var uParam0, bool bParam1)
{
	iVar0 = *uParam0;
	if (bParam1)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 <= (func_525(16385) - 1))
	{
		iVar2 = func_526(iVar1);
		func_528(iVar2, func_527(iVar0, iVar2), uParam0);
		iVar1++;
	}
}

void func_233()
{
	trigger_music_event("MC_MUSIC_STOP");
	if (func_31(57))
	{
		set_audio_flag("MusicIgnoreDeathArrest", false);
	}
	if (func_31(72))
	{
		set_audio_flag("MusicIgnoreScreenFade", false);
	}
}

bool func_234()
{
	if (is_bit_set(Local_5688.f_41, 1))
	{
		return true;
	}
	return false;
}

void func_235()
{
	_0x9428447ded71fc7e("rdro_ambient_ped_intensity_scenes");
	_0x9428447ded71fc7e("rdro_ambient_animal_intensity_scenes");
	_0x9428447ded71fc7e("rdro_ambient_vehicle_intensity_scenes");
	iLocal_15006 = 0;
}

void func_236()
{
	set_ped_is_drunk(player_ped_id(), false);
	_0x406ccf555b04fad3(player_ped_id(), 0, 0f);
	func_529(1);
	Global_1940085->f_9 = 0f;
	Global_1940085->f_2 = 0;
	Global_1940085 = 0;
	Global_1940085->f_12 = 0;
}

void func_237(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

void func_238()
{
	Global_1296679->f_8 = { func_530() };
	Global_1296679->f_12 = { func_530() };
	*Global_1296679 = { func_530() };
	Global_1296679->f_4 = { func_530() };
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		*Global_1296679->f_53[iVar0] = { func_530() };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		*Global_1296679->f_16[iVar0] = { func_530() };
		iVar0++;
	}
	Global_1296679->f_146 = 0;
	Global_1296679->f_147 = 0;
	Global_1296843->f_4 = { func_530() };
	*Global_1296843 = { func_530() };
}

void func_239(bool bParam0)
{
	_set_local_player_can_use_pickups_with_this_model(-936393949, !bParam0);
	_set_local_player_can_use_pickups_with_this_model(-1891315382, !bParam0);
}

void func_240()
{
	if (is_audio_scene_active("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene"))
	{
		stop_audio_scene("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene");
	}
}

void func_241(bool bParam0)
{
	if (bParam0 && !bVar16053)
	{
		iLocal_16056 = 1;
		_0x7d654266025e921b(872329444);
	}
	else if (bVar16053 && !bParam0)
	{
		iLocal_16056 = 0;
		_0x50b72a754ee64a71(872329444);
	}
}

bool func_242(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_243(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_531())
	{
		return 0;
	}
	if (!func_532())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_533(&Global_0, 8);
	}
	func_533(&Global_0, 1);
	return 1;
}

bool func_244()
{
	return &Global_1048583;
}

void func_245(bool bParam0)
{
	if (!&Global_1048583)
	{
		if (bParam0)
		{
			Global_1048583 = 1;
		}
	}
	else if (!bParam0)
	{
		vVar0 = -1;
		vVar0.f_1 = -1;
		Global_1048583 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			*(*Global_1049283)[iVar3] = { vVar0 };
			*(*Global_1049296)[iVar3] = { vVar0 };
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 0)
		{
			*(*Global_1049309)[iVar3] = { vVar0 };
			iVar3++;
		}
	}
}

void func_246(bool bParam0)
{
	if (!bParam0)
	{
		func_534(0);
	}
	Global_1940311->f_2 = bParam0;
}

void func_247(int iParam0)
{
	set_ped_config_flag(iParam0, 169, false);
	set_ped_config_flag(iParam0, 340, false);
	set_ped_config_flag(iParam0, 26, false);
	_0x949b2f9ed2917f5d(iParam0, 1);
	_0x949b2f9ed2917f5d(iParam0, 2);
	_0x949b2f9ed2917f5d(iParam0, 5);
	_0x949b2f9ed2917f5d(iParam0, 15);
	_0x949b2f9ed2917f5d(iParam0, 16);
	_0x949b2f9ed2917f5d(iParam0, 17);
	_0x949b2f9ed2917f5d(iParam0, 25);
	_0x949b2f9ed2917f5d(iParam0, 33);
	_0xbbf6d1d07c02d00a(iParam0, 1);
	_0xbbf6d1d07c02d00a(iParam0, 2);
	_0xbbf6d1d07c02d00a(iParam0, 5);
	_0xbbf6d1d07c02d00a(iParam0, 15);
	_0xbbf6d1d07c02d00a(iParam0, 16);
	_0xbbf6d1d07c02d00a(iParam0, 17);
	_0xbbf6d1d07c02d00a(iParam0, 25);
	_0xbbf6d1d07c02d00a(iParam0, 33);
}

void func_248()
{
	terminate_this_thread();
}

void func_249(int iParam0)
{
	iVar0 = iLocal_71;
	if (iParam0 == 0)
	{
		iVar0 = participant_id_to_int();
	}
	if (iVar0 > -1 && iVar0 < 32)
	{
		Local_1685[iVar0]->f_15[iParam0] = func_535(-1161644143);
		Local_1685[iVar0]->f_18[iParam0] = func_535(-986822306);
		Local_1685[iVar0]->f_21[iParam0] = func_535(-1030989498);
		Local_1685[iVar0]->f_24[iParam0] = floor(func_536(-763706539, 405868330));
	}
}

void func_250(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_251(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1816768801:
			*iParam0 = -281350136;
			break;
		case -533426613:
			*iParam0 = 1639265719;
			break;
		case -1918441640:
			*iParam0 = -83681779;
			break;
		case 1788958412:
			*iParam0 = -1917078665;
			break;
		case 1153715636:
			*iParam0 = -1781132668;
			break;
		case -1581094459:
			if (_is_weapon_bow(Global_2359296->f_6686))
			{
				*iParam0 = -1450294742;
			}
			else if (Global_2359296->f_6686 == -1511427369)
			{
				*iParam0 = 164206681;
			}
			else if (Global_2359296->f_6686 == -764310200)
			{
				*iParam0 = -186523193;
			}
			else if (Global_2359296->f_6686 == 2133046983)
			{
				*iParam0 = 1089744352;
			}
			else
			{
				*iParam0 = -2078358886;
			}
			break;
		case -457802746:
			*iParam0 = 621415825;
			break;
		case 1175500245:
			*iParam0 = -291951614;
			break;
		case -222655798:
			*iParam0 = -141490041;
			break;
		case -725256130:
			*iParam0 = -2140118397;
			break;
		case 1272390114:
			*iParam0 = 2135316050;
			break;
		case -559809431:
			*iParam0 = 1439391213;
			break;
		default:
			break;
	}
}

bool func_252(struct<2> Param0)
{
	if (!func_537(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_538(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_253(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636), func_538(iParam1));
			break;
		case 3:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_602), func_538(iParam1));
			break;
		case 4:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_2104), func_538(iParam1));
			break;
		case 5:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_12606), func_538(iParam1));
			break;
		case 6:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_12908), func_538(iParam1));
			break;
		case 7:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_15910), func_538(iParam1));
			break;
		case 8:
			Var0.f_1 = func_539(iParam0, &(Global_1071686->f_636.f_16512), func_538(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_540();
	}
	return Var0;
}

bool func_254(bool bParam0, bool bParam1)
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

bool func_255(int iParam0)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		if (!func_541(iVar0))
		{
			return false;
		}
		iVar1 = get_player_ped(iParam0);
		if (is_entity_dead(iVar1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_256(var uParam0)
{
	return func_542(1, uParam0);
}

bool func_257(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 128 != 0;
	}
	return func_443(128, iParam0);
}

int func_258()
{
	iVar0 = 255;
	iVar1 = func_543();
	if (func_544(iVar1))
	{
		return player_id();
	}
	if (does_entity_exist(iVar1))
	{
		if (is_entity_a_ped(iVar1))
		{
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (is_ped_a_player(iVar2))
			{
				iVar0 = network_get_player_index_from_ped(iVar2);
			}
		}
	}
	return iVar0;
}

int func_259(int iParam0)
{
	if (!is_bit_set(iLocal_58, 12))
	{
		return 0;
	}
	if (Local_92[iParam0]->f_9 == -1)
	{
		return 0;
	}
	if (!is_bit_set(iVar739, iParam0))
	{
		uLocal_676[iParam0] = &Local_1685[iParam0]->f_15[1];
		uLocal_709[iParam0] = &Local_1685[iParam0]->f_18[1];
		set_bit(&iLocal_742, iParam0);
	}
	iVar2 = (uLocal_676[iParam0] - Local_1685[iParam0]->f_15[1]) // PointerArith;
	iVar3 = (uLocal_709[iParam0] - Local_1685[iParam0]->f_18[1]) // PointerArith;
	fVar0 = (to_float(iVar3) / to_float(iVar2));
	fVar0 = (fVar0 * 100f);
	iVar1 = round(fVar0);
	return iVar1;
}

bool func_260()
{
	return is_bit_set(Local_5688.f_24.f_5, 6);
}

int func_261()
{
	return Local_5688.f_39;
}

int func_262(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (bParam2)
		{
			return func_545();
		}
		else
		{
			return func_546();
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

char* func_263(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_547(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_264(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, bParam5);
	return uVar17;
}

void func_265(var uParam0)
{
	Global_1102219->f_26.f_3364 = uParam0;
}

void func_266()
{
	Global_390124->f_18 = bLocal_75;
	Global_390124 = get_id_of_this_thread();
	Global_390124->f_18.f_1 = func_38(iLocal_71);
	Global_390124->f_18.f_6 = Local_1685[iLocal_71]->f_2;
	Global_390124->f_18.f_3 = &Local_1685[iLocal_71];
	Global_390124->f_18.f_4 = Local_1685[iLocal_71]->f_62;
	Global_390124->f_18.f_14 = Local_1685[iLocal_71]->f_4;
}

void func_267()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Global_390124->f_36.f_54[iVar0] = &Local_5688.f_42[iVar0];
		iVar0++;
	}
	Global_390124->f_36.f_63 = Local_5688.f_41;
	Global_390124->f_36.f_94 = Local_5688.f_39;
	Global_390124->f_36.f_95 = Local_5688.f_3327;
	Global_390124->f_36.f_88 = Local_5688.f_24;
	Global_390124->f_36.f_89 = Local_5688.f_24.f_1;
	Global_390124->f_36.f_90 = Local_5688.f_24.f_2;
	Global_390124->f_36.f_91 = Local_5688.f_24.f_3;
	Global_390124->f_36.f_92 = Local_5688.f_24.f_4;
	Global_390124->f_36.f_93 = Local_5688.f_24.f_5;
}

bool func_268(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_269()
{
	if (!bLocal_75)
	{
		return;
	}
	if (Global_390124->f_36.f_96 != -1)
	{
		func_548(Global_390124->f_36.f_96);
		Global_390124->f_36.f_96 = -1;
	}
}

void func_270(var uParam0)
{
	if (Global_390124->f_18.f_10 != 0)
	{
		Local_1685[iLocal_71]->f_41 = Global_390124->f_18.f_10;
	}
	if (Global_390124->f_18.f_5 != -1)
	{
		func_549(Global_390124->f_18.f_5);
		Global_390124->f_18.f_5 = -1;
	}
	if (Global_390124->f_18.f_15 != -1)
	{
		func_550(Global_390124->f_18.f_15);
		func_551(*uParam0, 0);
		Global_390124->f_18.f_15 = -1;
	}
}

bool func_271()
{
	if (func_38(iLocal_71))
	{
		return true;
	}
	if (iLocal_82 != -1)
	{
		return true;
	}
	if (func_261() != 2)
	{
		return true;
	}
	if (func_29(iLocal_71) != 6)
	{
		return true;
	}
	return false;
}

bool func_272(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

bool func_273()
{
	iVar0 = 0;
	while (iVar0 <= (Local_5688.f_857 - 1))
	{
		if (!is_bit_set(Global_2892896->f_11, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_274()
{
	set_bit(&(Global_3145858->f_222), 1);
}

bool func_275(int iParam0)
{
	return iParam0 != 0;
}

void func_276(int iParam0, int iParam1, float fParam2)
{
	iVar0 = Global_3145858->f_37246[iParam0]->f_1;
	func_552(iVar0, iParam1, 0);
	func_553(iVar0, fParam2, 0);
}

char* func_277()
{
	sVar0 = func_554();
	return _get_label_text(sVar0);
}

char* func_278(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_279()
{
	if (func_12())
	{
		if (Global_390124->f_5)
		{
			return true;
		}
		if (is_bit_set(iLocal_57, 3))
		{
			return true;
		}
		if (func_30(15))
		{
			return true;
		}
	}
	return false;
}

void func_280(int iParam0)
{
	if (bLocal_75)
	{
		if (Local_5688.f_51 != iParam0)
		{
			Local_5688.f_51 = iParam0;
		}
	}
}

void func_281(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0.f_4 == iLocal_79)
		{
			Local_1685[iLocal_71]->f_36 = 1;
			func_556(func_555(289176535), 1);
		}
	}
}

void func_282(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0.f_4 == iLocal_79)
		{
			func_556(func_555(-1212810303), 1);
		}
	}
}

void func_283(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 7))
	{
		if (Var0.f_4 == iLocal_77)
		{
			if (Var0.f_6)
			{
				play_sound_frontend("Gain_Point", "HUD_MP_PITP", true, 0);
				func_557(iLocal_71, Var0.f_5);
			}
			else
			{
				play_sound_frontend("Deny_Point", "HUD_MP_PITP", true, 0);
			}
		}
	}
}

void func_284(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 6))
	{
		if (Var0 == 164)
		{
			iVar6 = func_558(0, Local_1685[iLocal_71]->f_3);
			iVar7 = Var0.f_4;
			iVar8 = Var0.f_5;
			if (iVar8 == 0 || is_bit_set(iVar8, iVar6))
			{
				if (!func_559(&uLocal_14614, iVar7))
				{
					func_560(&uLocal_14614, iVar7);
				}
			}
		}
	}
}

void func_285(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0 == 163)
		{
			iVar5 = Var0.f_4;
			if (bLocal_75 && !func_559(&(Local_5688.f_1264), iVar5))
			{
				func_560(&(Local_5688.f_1264), iVar5);
				func_561(iVar5);
			}
			if (!func_559(&uLocal_14618, iVar5))
			{
				func_560(&uLocal_14618, iVar5);
			}
		}
	}
}

void func_286(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 5))
	{
		if (Var0 == 165)
		{
			iVar5 = Var0.f_4;
			if (bLocal_75 && !func_559(&(Local_5688.f_1268), iVar5))
			{
				func_560(&(Local_5688.f_1268), iVar5);
			}
		}
	}
}

void func_287(int iParam0)
{
	Var0.f_4.f_5 = 255;
	if (!get_event_data(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0.f_11)
	{
		case 65416881:
			if (func_504())
			{
				animpostfx_play("MP_SuddenDeath");
			}
			break;
	}
	iVar12 = func_562(Var0.f_11, Var0.f_1, iLocal_79, -1, -1, -1, -1, 0, -1, Var0.f_4.f_5, is_bit_set(Local_5688.f_41, 9));
	if (iVar12 > -1)
	{
		vLocal_14263.x = func_563(iVar12, Var0.f_1, Var0.f_4.f_5, Var0.f_4.f_1, Var0.f_4.f_6, Var0.f_4.f_4);
		vLocal_14263.f_2 = Var0.f_11;
		return;
	}
	switch (Var0.f_11)
	{
		case -72364555:
			if (Var0.f_1 == iLocal_79)
			{
				iVar29 = 551037070;
				StringCopy(&cVar30, "EMC_YOUREL", 64);
				bVar38 = true;
			}
			else
			{
				iVar29 = 859817522;
				StringCopy(&cVar30, _create_var_string(10, "EMC_OTHREL", get_player_name(Var0.f_1)), 64);
				bVar38 = false;
			}
			func_564(&cVar30, iVar29, -2, 0, 0, 0, bVar38);
			break;
		case 65416881:
			func_566("DMC_SDNDTH", func_565(), 4000, 0, 0, 0, 1, 1);
			play_sound_frontend("sudden_death", "RDR_Shard_Central_Message_Sounds", true, 0);
			break;
		case 1516470724:
			func_566("DMC_SDNDTH", "DMC_SDT_ELI", 4000, 0, 0, 0, 1, 1);
			break;
		case -775261321:
			Var39.f_3 = -1;
			Var39 = { func_52() };
			func_566(_create_var_string(2, "UI_RND_SHRD", Var39 + 1), _create_var_string(2, "UI_RND_SCRE", func_309()), 2000, 0, 0, 0, 0, 0);
			break;
		case -1796890830:
			if (func_567())
			{
				StringCopy(&cVar44, "UI_RND_WON", 24);
			}
			else
			{
				StringCopy(&cVar44, "UI_RND_LOST", 24);
			}
			func_568(&cVar44, 2000, 0, 0, 0, 1);
			break;
		case -595384980:
			func_566(_create_var_string(2, "UI_BOUT_FIR"), _create_var_string(2, "UI_BOUT_TGT", Var0.f_4.f_3), 2000, 0, 0, 0, 0, 0);
			break;
		case -1359173784:
			func_566(_create_var_string(2, "UI_BOUT_NUM", Var0.f_4.f_2), _create_var_string(2, "UI_BOUT_TGT", Var0.f_4.f_3), 2000, 0, 0, 0, 0, 0);
			break;
		case 2110512971:
			func_566(_create_var_string(2, "UI_BOUT_NUM", Var0.f_4.f_2), _create_var_string(2, "UI_BOUT_DEC"), 2000, 0, 0, 0, 0, 0);
			break;
		case -1252587237:
			_0xdd1232b332cbb9e7(11, 1, 1);
			MemCopy(&cVar44, {func_569()}, 3);
			vLocal_14263.x = func_568(&cVar44, 2000, 0, 0, 0, 0);
			vLocal_14263.f_2 = Var0.f_11;
			break;
		case -1652801619:
			_0xdd1232b332cbb9e7(11, 1, 1);
			Var13 = { func_571(Var0.f_4.f_6, Var0.f_4.f_1, Var0.f_4.f_5, func_570(Var0.f_4.f_5)) };
			vLocal_14263.x = func_573(func_572(func_567()), "UGC_UI_TIE", &Var13, 2000, 0, 0, 0, 1, 1, 0);
			vLocal_14263.f_2 = Var0.f_11;
			break;
		case 1121928263:
			_0xdd1232b332cbb9e7(11, 1, 1);
			vLocal_14263.x = func_568(func_572(func_567()), -2, 0, 0, 0, 1);
			vLocal_14263.f_2 = Var0.f_11;
			break;
		case 1261477126:
			_0xdd1232b332cbb9e7(11, 1, 1);
			Var13 = { func_571(Var0.f_4.f_6, Var0.f_4.f_1, Var0.f_4.f_5, func_570(Var0.f_4.f_5)) };
			vLocal_14263.x = func_573(func_572(func_567()), "UGC_UI_TIE", &Var13, 2000, 0, 0, 0, 1, 1, 0);
			vLocal_14263.f_2 = Var0.f_11;
			break;
	}
}

void func_288(int iParam0)
{
	if (!bLocal_75)
	{
		return;
	}
	if (!get_event_data(1, iParam0, &Var0, 5))
	{
		return;
	}
	if (Var0 != 159)
	{
		return;
	}
	func_574(Var0.f_4);
}

void func_289(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 5))
	{
		return;
	}
	if (Var0 != 162)
	{
		return;
	}
	func_575(Var0.f_1, Var0.f_4);
}

void func_290(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 5) || Var0 != 166)
	{
		return;
	}
	iVar5 = Var0.f_1;
	if (!network_is_player_active(iVar5))
	{
		return;
	}
	iVar7 = Var0.f_4;
	StringCopy(&cVar8, get_player_name(iVar5), 64);
	if (iVar7 == -1 || !func_260())
	{
		sVar6 = _create_var_string(10, "JIPP_JOIN_NT", func_263(&cVar8, -5208416));
	}
	else if (!func_38(iLocal_71) && iVar7 == Local_1685[iLocal_71]->f_3)
	{
		sVar6 = _create_var_string(10, "JIPP_JOIN_YT", func_263(&cVar8, func_576(iVar7)));
	}
	else
	{
		sVar6 = _create_var_string(42, "JIPP_JOIN_OT", func_263(&cVar8, func_576(iVar7)), func_577((*Global_3145728)[iVar7], func_576(iVar7)));
	}
	func_264(sVar6, -2, 0, 0, 0, 1);
}

void func_291(int iParam0)
{
	if (!get_event_data(1, iParam0, &Var0, 4) || Var0 != 167)
	{
		return;
	}
	iVar4 = Var0.f_1;
	if (!network_is_player_active(iVar4))
	{
		return;
	}
	StringCopy(&cVar6, get_player_name(iVar4), 64);
	sVar5 = _create_var_string(10, "JIPS_JOIN", func_263(&cVar6, 1105014447));
	func_264(sVar5, -2, 0, 0, 0, 1);
}

void func_292(int iParam0)
{
	iVar7 = -1;
	iVar8 = -1;
	iVar9 = -1;
	iVar10 = -1;
	bVar11 = false;
	bVar12 = false;
	bVar13 = func_578();
	get_event_data(1, iParam0, &Var14, 32);
	if (does_entity_exist(Var14))
	{
		if (is_entity_a_ped(Var14))
		{
			iVar0 = get_ped_index_from_entity_index(Var14);
		}
		if (does_entity_exist(Var14.f_1) && is_entity_a_ped(Var14.f_1))
		{
			iVar1 = get_ped_index_from_entity_index(Var14.f_1);
			func_579(iVar1, iVar6, &iVar3, &uVar5, &iVar8, &iVar10, &bVar12);
		}
		if (Var14.f_3 || ((bVar13 && is_entity_a_vehicle(Var14)) && !is_vehicle_driveable(get_vehicle_index_from_entity_index(Var14), false, false)))
		{
			if (is_entity_a_ped(Var14))
			{
				iVar0 = get_ped_index_from_entity_index(Var14);
				if (is_ped_a_player(iVar0))
				{
					iVar2 = network_get_player_index_from_ped(iVar0);
					if (network_is_player_a_participant(iVar2))
					{
						iVar4 = network_get_participant_index(iVar2);
						if (network_is_participant_active(iVar4))
						{
							iVar7 = iVar4;
							iVar9 = get_player_team(iVar2);
							if (func_38(iVar7))
							{
								return;
							}
						}
					}
				}
				else
				{
					bVar11 = true;
					iVar6 = 0;
					while (iVar6 <= 31)
					{
						if (&Local_5688.f_568[iVar6] != 6)
						{
							if (&Local_5688.f_52[iVar6] == network_get_network_id_from_entity(iVar0))
							{
								iVar7 = iVar6;
								iVar9 = Local_5688.f_568[iVar6]->f_1;
							}
						}
						iVar6++;
					}
				}
				if (iVar7 != -1)
				{
					if (bVar11)
					{
					}
					if (does_entity_exist(Var14.f_1))
					{
						if (is_entity_a_vehicle(Var14.f_1))
						{
							iVar46 = Var14.f_1;
							if (!is_vehicle_seat_free(_0xe578c8ae173719b3(iVar46), -1))
							{
								Var14.f_1 = get_ped_in_vehicle_seat(Var14.f_1, -1);
								iVar1 = get_ped_index_from_entity_index(Var14.f_1);
								if (func_580(iVar1))
								{
									Var14.f_5 = func_581(get_entity_model(iVar46));
								}
								func_579(iVar1, iVar6, &iVar3, &uVar5, &iVar8, &iVar10, &bVar12);
							}
						}
						else if (func_582(Var14.f_1))
						{
							if (_0x2e2e06023d07631e(Var14.f_1, -1))
							{
								Var14.f_1 = _0xffec4b0a1a3ed515(Var14.f_1, -1);
								iVar1 = get_ped_index_from_entity_index(Var14.f_1);
								iVar3 = network_get_player_index_from_ped(iVar1);
								func_579(iVar1, iVar6, &iVar3, &uVar5, &iVar8, &iVar10, &bVar12);
							}
						}
						else if (is_entity_a_ped(Var14.f_1))
						{
							iVar1 = get_ped_index_from_entity_index(Var14.f_1);
							func_579(iVar1, iVar6, &iVar3, &uVar5, &iVar8, &iVar10, &bVar12);
						}
						if (iVar8 != -1)
						{
							if (bVar12)
							{
							}
						}
					}
					if (Var14.f_3)
					{
						func_583(iVar3, iVar2);
					}
					if (func_584(iVar9, iVar0, iVar8, iVar10, 0))
					{
						func_585(iVar0);
					}
					if (func_586())
					{
						if (iVar7 == iLocal_71)
						{
							set_bit(&(Local_1685[iLocal_71]->f_2), 19);
						}
					}
					if (iVar8 == iVar7 || iVar8 == -1)
					{
						iVar47 = 1;
						if (is_bit_set(Local_5688.f_24.f_5, 5))
						{
							if (&Local_5688.f_2663.f_12[iVar9] != -1)
							{
								if (network_get_player_index_from_ped(iVar0) == &Local_5688.f_2663[&Local_5688.f_2663.f_12[iVar9]])
								{
									iVar47 = Global_2359296->f_6724;
								}
								else
								{
									iVar47 = 0;
								}
							}
						}
						if (is_bit_set(iLocal_58, 17))
						{
							iVar47 = 0;
							clear_bit(&iLocal_58, 17);
						}
						if (bVar11)
						{
							if (bLocal_75)
							{
								func_587(iVar7);
								func_588(iVar7, iVar47);
							}
						}
						else if (iLocal_79 == iVar2)
						{
							func_589(iVar7, iVar47);
							func_590(iVar7, 1);
							func_591();
						}
						return;
					}
				}
				if (iVar7 != -1 && iVar8 != -1)
				{
					if (bLocal_75)
					{
						if ((func_168() && func_592(iLocal_70) == 6) && !func_593())
						{
							if (func_594(iVar8))
							{
								if (func_260())
								{
									func_595(iVar8, 1866839375);
								}
								else if (!func_586())
								{
									func_596(iVar8);
									func_597(iVar8);
								}
							}
						}
					}
					if (bVar11)
					{
						if (bLocal_75)
						{
							func_587(iVar7);
						}
					}
					else if (iLocal_79 == iVar2)
					{
						func_590(iLocal_71, 0);
						func_591();
					}
					if (iLocal_79 == iVar3)
					{
						if (Var14.f_11)
						{
							func_598(iVar8);
						}
					}
					if (func_260())
					{
						if (iVar9 == -1 || iVar10 == -1)
						{
							return;
						}
						if (func_38(iVar7) && !bVar11)
						{
							return;
						}
						if (iVar9 != iVar10)
						{
							if (bLocal_75)
							{
								if (is_bit_set(Local_5688.f_24.f_5, 3))
								{
									func_599(get_entity_coords(iVar0, true, false), network_get_player_index_from_ped(iVar0), iVar10);
								}
							}
							if (bVar12)
							{
								if (bLocal_75)
								{
									if (!is_bit_set(Local_5688.f_24.f_5, 3))
									{
										func_600(iVar8);
									}
									func_601(iVar8);
								}
							}
							else
							{
								if (bLocal_75)
								{
									func_602(iVar3);
								}
								if (iLocal_79 == iVar3)
								{
									if (!is_bit_set(Local_5688.f_24.f_5, 3))
									{
										if (is_bit_set(Local_5688.f_24.f_5, 4))
										{
											cVar48 = round(func_603(&Var14));
											if (is_bit_set(Local_5688.f_24.f_2, 28))
											{
												_0xdd1232b332cbb9e7(10, 1, 0);
												sVar49 = func_604(&Var14, cVar48);
												func_605(sVar49, 0, -2, 0, 0, 0, 1);
											}
											func_606(iVar8, iVar7, cVar48);
										}
										else if (!is_bit_set(Local_5688.f_24.f_5, 5))
										{
											func_606(iVar8, iVar7, 0);
										}
									}
									if (is_bit_set(Local_5688.f_24.f_5, 5))
									{
										if (&Local_5688.f_2663[iVar10] != 255)
										{
											if (network_get_player_index_from_ped(iVar0) == &Local_5688.f_2663[iVar10])
											{
												set_bit(&(Local_1685[iVar8]->f_44), 0);
												if (&Local_5688.f_2663[iVar9] == network_get_player_index_from_ped(iVar1))
												{
													func_606(iVar8, iVar7, Global_2359296->f_6722);
												}
												else
												{
													func_606(iVar8, iVar7, Global_2359296->f_6723);
												}
											}
											Local_1685[iVar6]->f_29++;
										}
										if (!is_bit_set(Local_5688.f_24.f_3, 22))
										{
											if (network_get_player_index_from_ped(iVar0) != &Local_5688.f_2663[iVar10])
											{
												if (&Local_5688.f_2663[iVar9] == network_get_player_index_from_ped(iVar1))
												{
													func_606(iVar8, iVar7, 0);
												}
											}
										}
									}
									func_607();
									func_608(iVar8);
									func_609();
								}
								else if (func_610(iLocal_79, iVar0))
								{
									if (is_bit_set(Local_5688.f_24.f_5, 10))
									{
										func_611(iLocal_71, is_bit_set(Local_5688.f_24.f_5, 3));
										func_612(iVar2);
									}
								}
							}
						}
					}
					else if (bVar12)
					{
						if (bLocal_75)
						{
							func_600(iVar8);
							func_601(iVar8);
						}
					}
					else
					{
						if (bLocal_75)
						{
							func_602(iVar3);
						}
						if (iLocal_79 == iVar3)
						{
							if (is_bit_set(Local_5688.f_24.f_5, 4))
							{
								cVar50 = round(func_603(&Var14));
								if (is_bit_set(Local_5688.f_24.f_2, 28))
								{
									if (iLocal_79 == iVar3)
									{
										_0xdd1232b332cbb9e7(10, 1, 0);
										sVar51 = func_604(&Var14, cVar50);
										func_605(sVar51, 0, -2, 0, 0, 0, 1);
									}
								}
								func_606(iVar8, iVar7, cVar50);
							}
							else
							{
								func_606(iVar8, iVar7, 0);
							}
							func_607();
							func_608(iVar8);
							func_609();
						}
						else if (func_610(iLocal_79, iVar0))
						{
							if (is_bit_set(Local_5688.f_24.f_5, 10))
							{
								func_611(iLocal_71, 0);
								func_612(iVar2);
							}
						}
					}
				}
			}
			if ((iVar0 != iLocal_81 && iVar8 != iLocal_70) && !func_613())
			{
				if (func_260())
				{
					bVar52 = func_614(Local_1685[iLocal_70]->f_3, iVar9);
					if (!bVar52 && is_bit_set(Local_5688.f_24.f_3, 13))
					{
						func_615(get_entity_coords(iVar0, false, false));
					}
					else if (bVar52 && is_bit_set(Local_5688.f_24.f_3, 14))
					{
						func_615(get_entity_coords(iVar0, false, false));
					}
				}
				else if (is_bit_set(Local_5688.f_24.f_3, 13))
				{
					func_615(get_entity_coords(iVar0, false, false));
				}
			}
			if (iVar7 > -1)
			{
				if (iVar7 == iLocal_70)
				{
					if (is_bit_set(Local_5688.f_24.f_5, 5))
					{
						if (&Local_5688.f_2663[iVar9] != 255)
						{
							if (network_get_player_index_from_ped(iVar1) == &Local_5688.f_2663[iVar9])
							{
								func_616();
							}
						}
					}
				}
				if (func_617())
				{
					clear_bit(&iLocal_60, 3);
				}
				if (network_is_host_of_this_script())
				{
					if (Local_1685[iVar7]->f_4 > -1)
					{
						if (is_bit_set(Global_3145858->f_49704[Local_1685[iVar7]->f_4]->f_6, 23))
						{
							func_618(iVar0, iVar7);
						}
					}
				}
				if (iVar1 == iLocal_80 && iVar0 != iLocal_80)
				{
					if (func_30(11))
					{
						func_619(get_entity_coords(iLocal_81, true, false));
					}
				}
			}
		}
		if (iVar1 == iLocal_81)
		{
			func_620(iVar0, iVar10, Var14.f_2);
		}
	}
}

void func_293(int iParam0)
{
	if (get_event_data(1, iParam0, &Var0, 8))
	{
		if (Var0.f_1 == iLocal_79)
		{
			if (Var0.f_2 != 738282662)
			{
				func_621(get_weapon_type_from_pickup_type(Var0.f_2), Var0.f_5, Var0.f_6, Var0.f_7 == 0);
			}
			if (is_bit_set(Local_5688.f_24.f_2, 27))
			{
				iLocal_15646 = get_weapon_type_from_pickup_type(Var0.f_2);
				if (func_580(iLocal_80))
				{
					iLocal_15646 = func_581(func_622(iLocal_80));
				}
			}
			iVar8 = 0;
			while (iVar8 < Global_3145858->f_6822)
			{
				if (iVar8 < 200)
				{
					if (Var0 == &uLocal_11396[iVar8])
					{
						if (is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 3))
						{
							if (has_ped_got_weapon(iLocal_81, get_weapon_type_from_pickup_type(Var0.f_2), 0, false))
							{
								set_current_ped_weapon(iLocal_81, get_weapon_type_from_pickup_type(Var0.f_2), true, 0, false, false);
								if (!is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 20))
								{
									_0x5230d3f6ee56cfe6(iLocal_81, 0);
								}
								Jump @361; //curOff = 237
							}
						}
						else if (is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 16))
						{
							if (has_ped_got_weapon(iLocal_81, get_weapon_type_from_pickup_type(Var0.f_2), 0, false))
							{
								if (!_0xcb690f680a3ea971(iLocal_81, 6))
								{
									set_current_ped_weapon(iLocal_81, get_weapon_type_from_pickup_type(Var0.f_2), true, 0, false, false);
									if (!is_bit_set(Global_3145858->f_6823[iVar8]->f_13, 20))
									{
										_0x5230d3f6ee56cfe6(iLocal_81, 0);
									}
								}
								else
								{
									iVar8++;
								}
								func_623();
								if (Var0.f_4 == iVar15645)
								{
									if (bLocal_75)
									{
										_0x31010318ba9897ac(&(Local_5688.f_2323), Var0.f_1);
									}
									if (Var0.f_1 == iLocal_79)
									{
										play_sound_frontend("Gain_Point", "HUD_MP_PITP", true, 0);
										_set_local_player_can_use_pickups_with_this_model(iVar15645, false);
									}
								}
								else if (Var0.f_4 == -1178474236)
								{
									set_bit(&Local_15723, 7);
								}
								else if (Var0.f_4 == 70776250)
								{
									set_bit(&Local_15723, 6);
								}
								if (Var0.f_1 == iLocal_78)
								{
									if (func_31(69))
									{
										use_particle_fx_asset("scr_net_race_checkpoints");
										vVar9 = { get_pickup_coords(Var0) };
										start_particle_fx_non_looped_at_coord("scr_net_race_barrel_break", vVar9, 0f, 0f, 0f, 1f, false, false, false);
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

void func_294(int iParam0)
{
	if (!get_event_data(1, iParam0, &vVar0, 3))
	{
		return;
	}
	if (vVar0.y == iLocal_79)
	{
		iVar3 = vVar0.z;
		switch (vVar0.x)
		{
			case 1:
				func_624(iVar3);
				break;
			case 2:
				if (iVar3 == -1888453608)
				{
					func_625("PCFR2", 2000, 0, 0, 0, 1);
				}
				else if (func_626(iVar3))
				{
					func_624(iVar3);
				}
				break;
			case 0:
				break;
		}
	}
}

void func_295(int iParam0)
{
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = Var0.f_40;
		iVar42 = Var0.f_8;
		if (Var0.f_11 <= 0)
		{
			return;
		}
		iVar43 = get_id_of_this_thread();
		bVar44 = false;
		iVar45 = 0;
		while (iVar45 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar45] == iVar43)
			{
				bVar44 = true;
			}
			else
			{
				iVar45++;
			}
		}
		if (!bVar44)
		{
			return;
		}
		func_627(iVar41, iVar42, Var0.f_40, Var0.f_8);
	}
}

void func_296(int iParam0)
{
	if (!bLocal_75)
	{
		return;
	}
	Var0.f_12 = 20;
	if (get_event_data(1, iParam0, &Var0, 41))
	{
		iVar41 = Var0.f_40;
		if (Var0.f_11 <= 0)
		{
			return;
		}
		iVar42 = get_id_of_this_thread();
		bVar43 = false;
		iVar44 = 0;
		while (iVar44 <= (Var0.f_11 - 1))
		{
			if (&Var0.f_12[iVar44] == iVar42)
			{
				bVar43 = true;
			}
			else
			{
				iVar44++;
			}
		}
		if (!bVar43)
		{
			return;
		}
		func_628(iVar41);
	}
}

void func_297(int iParam0)
{
	if (get_event_data(0, iParam0, &Var0, 8))
	{
		if (Var0.f_2 == iLocal_79)
		{
			if (Var0.f_3 == -1178474236)
			{
				set_bit(&Local_15723, 7);
			}
		}
	}
}

void func_298(int iParam0)
{
	if (&iLocal_776[iParam0] != -1)
	{
		func_358(Local_907[iParam0]);
		if (bLocal_75)
		{
			func_629(iParam0);
		}
		else
		{
			func_630(iParam0);
		}
	}
	else if (bLocal_75)
	{
		func_631(iParam0);
	}
	else
	{
		func_632(iParam0);
	}
}

void func_299(int iParam0)
{
	if (!Local_92[iParam0]->f_3)
	{
		return;
	}
	iVar0 = &Local_92[iParam0];
	if (is_bit_set(Local_5688.f_1263, iVar0))
	{
		return;
	}
	if (&iLocal_776[iVar0] != -1 || func_633(iVar0))
	{
		return;
	}
	if (&Local_5688.f_1230[iVar0] == func_394())
	{
		Local_5688.f_1230[iVar0] = Local_92[iParam0]->f_2;
	}
	if (is_bit_set(Local_1685[iParam0]->f_2, 18) || is_bit_set(Local_1685[iParam0]->f_2, 4))
	{
		set_bit(&(Local_5688.f_1263), iVar0);
	}
}

void func_300()
{
	if ((is_bit_set(Local_5688.f_41, 5) || func_53(iLocal_79, 1024)) || func_634(255))
	{
		if (func_634(255))
		{
			iLocal_14239 = 1;
		}
		func_635(0);
		func_13(2);
		set_bit(&(Local_1685[iLocal_71]->f_2), 5);
		func_67(2);
	}
	else if (func_636())
	{
		func_635(0);
		func_67(1);
	}
	else
	{
		func_67(3);
	}
	func_637(64);
	set_everyone_ignore_player(iLocal_79, true);
	set_ped_reset_flag(iLocal_81, 25, true);
}

void func_301(struct<2> Param0)
{
	iVar0 = get_unique_int_for_player(iLocal_79);
	Var1.f_2 = 5;
	Var1.f_23 = 5;
	if ((func_345(&uLocal_14455) && func_325(&uLocal_14455, 0, 0) > 60000) || func_638())
	{
		if (iVar14449 < 15)
		{
			if (func_639())
			{
				_0x00a15b94cba4f76f(iVar14174);
				Local_14178 = 0;
			}
			else if (iVar14449 == 3)
			{
				_0x00a15b94cba4f76f(iVar14113);
				Local_14117 = 0;
			}
			func_640(15);
			set_bit(&iLocal_57, 8);
		}
	}
	if (!is_bit_set(iLocal_57, 23))
	{
		if (!func_641())
		{
		}
		else
		{
			set_bit(&iLocal_57, 23);
		}
	}
	switch (iVar14449)
	{
		case 0:
			func_324(&uLocal_14455, 0, 0);
			if (is_entity_visible(iLocal_81))
			{
				set_entity_visible(iLocal_81, false);
			}
			func_642(1);
			func_643();
			func_238();
			func_640(1);
		case 1:
			if (func_519(0))
			{
				func_644(-2101264851);
				func_640(2);
			}
			break;
		case 2:
			if (func_645())
			{
				set_bit(&(Local_1685[iLocal_71]->f_2), 4);
				func_640(3);
			}
			break;
		case 3:
			if (!is_bit_set(Local_5688.f_41, 5) || func_646())
			{
				func_358(&uLocal_14455);
				if (iVar14113 == 0)
				{
					func_109(&uLocal_14268, 0, 1);
					Var67.f_44 = 4;
					Var67.f_52 = -1;
					Local_14117 = { Var67 };
					StringCopy(&(Local_14117.f_1), "JIP_JOINING", 16);
					StringCopy(&(Local_14117.f_3), "JIP_ERROR_INIAM", 16);
					Local_14117.f_43 = 1;
					Local_14117.f_44[0] = 45095138;
					Local_14117.f_42 = 1;
					func_647();
					func_648(&Local_14117, 0);
				}
				else if (_0x07954320d77f6a3d(iVar14113) >= 3)
				{
					if (!is_screen_faded_in())
					{
						do_screen_fade_in(0);
					}
					iVar66 = func_649(&Local_14117, -1218098620, &(Local_14117.f_49), 1);
					if (iVar66 == 0)
					{
						_0x00a15b94cba4f76f(iVar14113);
						Local_14117 = 0;
						func_318(1);
						do_screen_fade_out(0);
						_0x2e399eafbeea74d5();
						func_43();
						func_5(0);
					}
				}
				return;
			}
			if (!func_345(&uLocal_14455))
			{
				func_324(&uLocal_14455, 0, 0);
			}
			_0x00a15b94cba4f76f(iVar14113);
			Local_14117 = 0;
			do_screen_fade_out(0);
			func_640(4);
			break;
		case 4:
			func_650(1);
			if (is_bit_set(iLocal_57, 3) || func_634(255))
			{
				if (bVar14235)
				{
					func_640(12);
				}
				else
				{
					func_640(10);
				}
			}
			else
			{
				func_640(5);
				func_58(0, 28);
				set_bit(&(Local_1685[iLocal_71]->f_2), 6);
			}
			break;
		case 5:
			if (Local_5688.f_51 && func_527(_0x51f33dbc1a41cbfd(), 2048))
			{
				func_640(15);
				return;
			}
			if (&Local_5688.f_1196[iVar0] == -1)
			{
				if (!func_345(&uLocal_14457))
				{
					func_324(&uLocal_14457, 0, 0);
				}
				else if (func_325(&uLocal_14457, 0, 0) > 15000)
				{
					if (bVar14235)
					{
						func_640(12);
					}
					else
					{
						func_640(10);
					}
				}
				return;
			}
			clear_bit(&(Local_1685[iLocal_71]->f_2), 6);
			if (&Local_5688.f_1196[iVar0] == 1983)
			{
				if (bVar14235)
				{
					func_640(12);
				}
				else
				{
					func_640(10);
				}
				return;
			}
			if (func_260())
			{
				iVar128 = &Local_5688.f_1196[iVar0];
			}
			else
			{
				iVar128 = -1;
			}
			Local_1685[iLocal_71]->f_3 = iVar128;
			func_651(iVar128, 0, 1);
			if (func_260())
			{
				set_ped_relationship_group_hash(iLocal_81, func_147(iVar128));
			}
			func_550(func_652(iVar128));
			func_551(Param0, 1);
			set_bit(&(Local_1685[iLocal_71]->f_2), 9);
			func_640(6);
			break;
		case 6:
			if (func_646())
			{
				if (!is_bit_set(iLocal_57, 31))
				{
					set_bit(&iLocal_57, 31);
				}
			}
			if (func_653())
			{
				if (is_bit_set(iLocal_57, 31))
				{
					func_324(&uLocal_14455, 0, 0);
				}
				func_640(7);
			}
			break;
		case 7:
			if (is_player_control_on(iLocal_79))
			{
				func_58(0, 24);
			}
			if (func_646())
			{
				if (!is_bit_set(iLocal_57, 31))
				{
					func_324(&uLocal_14455, 0, 0);
					set_bit(&iLocal_57, 31);
				}
				return;
			}
			if (is_bit_set(iLocal_57, 31))
			{
				if (!func_653())
				{
					return;
				}
				clear_bit(&iLocal_57, 31);
			}
			if (!is_bit_set(iLocal_57, 23))
			{
				return;
			}
			if (!is_bit_set(Local_5688.f_1229, iVar0))
			{
				return;
			}
			func_13(512);
			func_640(8);
		case 8:
			if (_is_loading_screen_active())
			{
				return;
			}
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			_display_hud_component(128623374);
			func_640(9);
		case 9:
			set_bit(&(Local_1685[iLocal_71]->f_2), 7);
			clear_bit(&(Local_1685[iLocal_71]->f_2), 5);
			func_303(65536);
			func_306(0);
			func_307(524288);
			func_654();
			func_67(6);
			break;
		case 10:
			if (iVar14174 == 0)
			{
				func_324(&uLocal_14459, 0, 0);
				Var129.f_44 = 4;
				Var129.f_52 = -1;
				Local_14178 = { Var129 };
				StringCopy(&(Local_14178.f_1), "JIP_SPECTATE", 16);
				StringCopy(&(Local_14178.f_3), "JIP_CON_SPEC", 16);
				Local_14178.f_43 = 2;
				Local_14178.f_44[0] = -767935747;
				Local_14178.f_44[1] = 45095138;
				func_647();
				func_648(&Local_14178, 0);
			}
			if (_0x07954320d77f6a3d(iVar14174) < 3)
			{
				return;
			}
			func_640(11);
			break;
		case 11:
			if (!is_screen_faded_in())
			{
				do_screen_fade_in(0);
			}
			iVar66 = func_649(&Local_14178, -1218098620, &(Local_14178.f_49), 1);
			if (iVar66 == 0)
			{
				func_640(12);
				do_screen_fade_out(0);
				iLocal_14239 = 1;
			}
			else if (iVar66 == 1)
			{
				_0x00a15b94cba4f76f(iVar14174);
				Local_14178 = 0;
				do_screen_fade_out(0);
				func_318(1);
				_0x2e399eafbeea74d5();
				func_43();
				func_5(0);
			}
			break;
		case 12:
			clear_bit(&(Local_1685[iLocal_71]->f_2), 6);
			func_655(1);
			set_bit(&iLocal_58, 11);
			func_657(7, func_656(), 0, 0);
			func_145(iLocal_71, 1);
			func_324(&uLocal_14459, 0, 0);
			func_640(13);
			break;
		case 13:
			if (iLocal_82 <= -1 || iLocal_82 >= 32)
			{
				if (func_345(&uLocal_14459))
				{
					if (func_325(&uLocal_14459, 0, 0) > 30000)
					{
						func_640(15);
					}
				}
				else
				{
					func_324(&uLocal_14459, 0, 0);
				}
				return;
			}
			if (func_658() != 7)
			{
				return;
			}
			if (!is_bit_set(iLocal_57, 23))
			{
				return;
			}
			func_640(14);
		case 14:
			clear_bit(&(Local_1685[iLocal_71]->f_2), 5);
			set_bit(&(Local_1685[iLocal_71]->f_2), 8);
			func_659(&uLocal_15649);
			func_13(512);
			_display_hud_component(128623374);
			if (!is_screen_faded_in() && !is_screen_fading_in())
			{
				do_screen_fade_in(1000);
			}
			func_306(1);
			func_660(7);
			if (!func_634(255))
			{
				func_661();
			}
			func_67(6);
			break;
		case 15:
			func_109(&uLocal_14268, 0, 1);
			func_106(&uLocal_14249, &Var1);
			func_95(0, 0, 0, 1);
			Var190.f_44 = 4;
			Var190.f_52 = -1;
			Local_14117 = { Var190 };
			StringCopy(&(Local_14117.f_1), "ALERT_ERROR_MSG", 16);
			func_647();
			if (func_638())
			{
				StringCopy(&(Local_14117.f_3), "JIP_ERROR_DONE", 16);
				Local_14117.f_43 = 1;
				Local_14117.f_44[0] = 45095138;
				_0x778d4733e0f2f265(1);
			}
			else
			{
				StringCopy(&(Local_14117.f_3), "JIP_ERROR_RETRY", 16);
				Local_14117.f_43 = 2;
				Local_14117.f_44[0] = 1737041538;
				Local_14117.f_44[1] = 45095138;
			}
			func_648(&Local_14117, 0);
			func_640(16);
			break;
		case 16:
			if (is_entity_visible(iLocal_81))
			{
				set_entity_visible(iLocal_81, false);
			}
			if (_0x07954320d77f6a3d(iVar14113) < 3)
			{
				return;
			}
			func_324(&uLocal_14459, 0, 0);
			func_640(17);
			break;
		case 17:
			if (is_entity_visible(iLocal_81))
			{
				set_entity_visible(iLocal_81, false);
			}
			if (!is_screen_faded_in())
			{
				do_screen_fade_in(0);
			}
			iVar66 = func_649(&Local_14117, -1218098620, &(Local_14117.f_49), 1);
			if (func_638())
			{
				if (func_345(&uLocal_14459))
				{
					if (func_325(&uLocal_14459, 0, 0) > 7500)
					{
						_0x00a15b94cba4f76f(iVar14113);
						Local_14117 = 0;
						func_13(512);
						func_318(1);
						_0x2e399eafbeea74d5();
						func_43();
						func_5(0);
					}
				}
				if (iVar66 == 0)
				{
					func_318(1);
					_0x2e399eafbeea74d5();
					func_43();
					func_5(0);
				}
			}
			else if (iVar66 == 0)
			{
				func_109(&uLocal_14268, 1, 1);
				do_screen_fade_out(0);
				func_640(3);
			}
			else if (iVar66 == 1)
			{
				set_bit(&iLocal_57, 8);
			}
			break;
	}
}

void func_302(struct<2> Param0)
{
	if (!is_bit_set(iLocal_57, 23))
	{
		if (!func_641())
		{
		}
		else
		{
			set_bit(&iLocal_57, 23);
		}
	}
	switch (func_662())
	{
		case 0:
			func_643();
			if (is_ped_swimming(get_player_ped(iLocal_79)))
			{
				clear_ped_tasks(get_player_ped(iLocal_79), 1, 0);
			}
			func_642(0);
			func_663(&Local_13917);
			if (func_14())
			{
				func_664();
				func_665();
			}
			func_666(1);
		case 1:
			if (func_519(0))
			{
				func_644(-2101264851);
				func_666(2);
			}
			break;
		case 2:
			if (func_667())
			{
				func_668();
				func_550(-1);
				func_666(3);
				func_67(3);
				set_bit(&(Local_1685[iLocal_71]->f_2), 1);
			}
			break;
		case 3:
			if (!func_345(&uLocal_11243))
			{
				func_324(&uLocal_11243, 0, 0);
			}
			if (!func_669() || !func_670())
			{
				if (func_325(&uLocal_11243, 0, 0) < 30000)
				{
					return;
				}
			}
			func_551(Param0, 1);
			func_358(&uLocal_11243);
			func_666(4);
			break;
		case 4:
			if (is_bit_set(Local_5688.f_41, 15))
			{
				func_666(5);
			}
			break;
		case 5:
			if (func_671(0))
			{
				func_666(6);
			}
			break;
		case 6:
			if (func_672(255))
			{
				if (!is_ped_injured(iLocal_81))
				{
					set_ped_config_flag(iLocal_81, 286, true);
				}
				if (!func_345(&uLocal_14349))
				{
					func_324(&uLocal_14349, 0, 0);
				}
				else
				{
					iVar0 = func_325(&uLocal_14349, 0, 0);
					if (iVar0 >= 45000)
					{
						func_358(&uLocal_14349);
						func_385(1);
					}
				}
			}
			else if (func_673())
			{
				func_666(7);
			}
			break;
		case 7:
			if (func_261() == 0 || Local_5688.f_857 == 0)
			{
				return;
			}
			if (!func_427())
			{
				func_674(Global_3145858->f_196, 5000f, 0, 0);
			}
			func_650(0);
			func_666(8);
		case 8:
			if (!func_12())
			{
				return;
			}
			func_13(2);
			func_666(9);
		case 9:
			if (!is_bit_set(iLocal_57, 23))
			{
				return;
			}
			if (func_14())
			{
				Global_265377->f_124517.f_71.f_53 = { func_253(-47596571, 7) };
				func_664();
				func_665();
			}
			func_675();
			_set_hidof_env_blur_params(false, false, 0f, 0f, 0f, 0f);
			func_13(4);
			func_67(4);
			break;
	}
}

void func_303(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

void func_304()
{
	if (is_player_control_on(iLocal_79))
	{
		func_58(0, 8);
	}
	if (iVar12903 == 0)
	{
		set_bit(&(Local_1685[iLocal_71]->f_2), 2);
		iLocal_12906 = 1;
		if (!func_14())
		{
			func_303(2);
		}
		func_676(1);
	}
	if (iVar12903 == 1)
	{
		if (func_677())
		{
			func_676(2);
		}
	}
	if (iVar12903 == 2)
	{
		switch (iVar12904)
		{
			case 1:
				func_678();
				break;
			case 0:
			default:
				func_67(5);
				func_200(0);
				break;
		}
	}
	if (iVar12903 == 3)
	{
		iLocal_12906 = 0;
		bVar0 = false;
		if (func_260())
		{
			bVar0 = is_bit_set(&(Global_2359296->f_74[Local_1685[iLocal_70]->f_3]), 0);
		}
		network_set_friendly_fire_option(bVar0);
		func_154(8388608);
		func_67(5);
		func_48(0);
	}
}

void func_305()
{
	Var0.f_5 = 255;
	if (func_51())
	{
		func_679(-775261321, &Var0, 1);
	}
	else if (func_680())
	{
		Var0.f_2 = 1;
		Var0.f_3 = func_681();
		func_679(-595384980, &Var0, 1);
	}
	func_679(1060729809, &Var0, 1);
}

void func_306(bool bParam0)
{
	Var0.f_2 = 5;
	Var0.f_23 = 5;
	Var0.f_64 = "MP_LobbyBW01_Out";
	func_682(Global_1048684);
	if (func_683(iLocal_71))
	{
		func_303(2);
		_0x9b1fc259187c97c0("gameplay");
	}
	func_13(1024);
	func_106(&uLocal_14249, &Var0);
	func_684(0, 1, 0, 0, 0, 0, 0, 0, 0);
	_display_hud_component(690901814);
	func_109(&uLocal_14268, 0, 1);
	if (!bParam0)
	{
		func_685();
		func_324(&uLocal_12879, 0, 0);
		set_everyone_ignore_player(iLocal_79, false);
		set_ped_config_flag(iLocal_81, 286, false);
		func_686();
	}
	func_121(0);
	_0x86a68e84e5884951(&Local_16026);
	func_58(1, 2);
	set_bit(&(Local_1685[iLocal_71]->f_2), 18);
	set_bit(&iLocal_57, 18);
	_0xf620f47b4f4a78c4(&Local_5688, &Local_16033);
	func_687(&uLocal_15649);
}

void func_307(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 || iParam0);
}

void func_308(var uParam0)
{
	if (func_261() >= 3)
	{
		func_58(0, 40);
		if (!func_688(255))
		{
			func_689();
		}
		if (func_690(255))
		{
			func_174(1);
		}
		func_246(0);
		func_233();
		set_everyone_ignore_player(iLocal_79, true);
		set_ped_reset_flag(iLocal_81, 25, true);
		func_92(1);
		func_691(&uLocal_15649);
		func_108(0);
		if (_is_weapon_binoculars(func_493(iLocal_81, 1, 0, 1)))
		{
			if (func_692())
			{
				func_693();
				set_current_ped_weapon(iLocal_81, -1569615261, false, 0, false, false);
			}
		}
		set_ped_reset_flag(iLocal_81, 265, true);
		if (!func_91(255) && bLocal_73)
		{
			if ((func_694() == 2 || func_694() == 0) || func_694() == 4)
			{
				func_96(3);
			}
		}
		else
		{
			func_200(1);
			func_110(1);
			if ((func_695() && !is_screen_faded_out()) && !is_screen_fading_out())
			{
				func_445(64);
			}
		}
		func_185(0);
		func_67(8);
		return;
	}
	if (func_696())
	{
		func_697();
		return;
	}
	func_698(*uParam0);
	func_699();
}

int func_309()
{
	return (*Global_263042)[network_player_id_to_int()]->f_1.f_34;
}

void func_310()
{
	if (is_player_control_on(iLocal_79))
	{
		func_58(0, 8);
	}
	if (func_700(255))
	{
		func_172(0);
	}
	func_48(1);
	func_174(1);
	func_637(262144);
	func_92(1);
	func_701(&uLocal_12885, 0, 0);
	_0xa967d6a8ed2d713b(iLocal_81, 0);
	func_702(1);
	Var0.f_5 = 255;
	Var0.f_5 = func_703();
	if (func_260())
	{
		Var0.f_4 = func_370(Local_1685[iLocal_70]->f_3);
		Var0.f_1 = Local_5688.f_1132;
		Var0.f_5 = 255;
	}
	else
	{
		Var0.f_4 = Local_5688.f_1130 == get_unique_int_for_player(iLocal_78);
		Var0.f_5 = Local_5688.f_1120;
		Var0.f_1 = -1;
	}
	if (func_704(Local_5688.f_1134))
	{
		bVar7 = true;
		Var0.f_6 = Local_5688.f_1134;
	}
	if (func_51())
	{
		if (func_705())
		{
			func_706(bVar7, &Var0);
		}
		else
		{
			func_679(-1796890830, &Var0, 1);
		}
	}
	else
	{
		func_706(bVar7, &Var0);
	}
	func_67(7);
	set_bit(&(Local_1685[iLocal_71]->f_2), 0);
}

void func_311()
{
	if (!func_707())
	{
		return;
	}
	fVar1 = -1E+09f;
	fVar2 = 1E+09f;
	uVar3 = 4;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar8[iVar0] = -1;
		*Local_5688.f_2415[iVar0] = { Var46 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_92[iVar0]->f_3)
		{
			fVar13[iVar0] = func_708(iVar0);
			Local_5688.f_2488[&Local_92[iVar0]] = &fVar13[iVar0];
		}
		else
		{
			fVar13[iVar0] = -1f;
		}
		iVar0++;
	}
	if (func_709(&fVar13, &iVar8, &uVar3, 0, fVar1, 0, 0))
	{
		if (func_709(&fVar13, &iVar8, &uVar3, 1, fVar1, 0, 0))
		{
			if (func_709(&fVar13, &iVar8, &uVar3, 2, fVar1, 1, 0))
			{
			}
			else if (func_709(&fVar13, &iVar8, &uVar3, 2, fVar1, 0, 0))
			{
			}
		}
	}
	if (func_709(&fVar13, &iVar8, &uVar3, 3, fVar2, 1, 1))
	{
	}
	else if (func_709(&fVar13, &iVar8, &uVar3, 3, fVar2, 0, 1))
	{
	}
	set_bit(&(Local_5688.f_41), 17);
	if (((is_string_null_or_empty(Local_5688.f_2415[0]) || is_string_null_or_empty(Local_5688.f_2415[1])) || is_string_null_or_empty(Local_5688.f_2415[2])) || is_string_null_or_empty(Local_5688.f_2415[3]))
	{
		StringCopy(Local_5688.f_2415[0], "", 64);
	}
}

void func_312()
{
	func_58(0, 8);
	if (!func_710() && func_325(&uLocal_12885, 0, 0) < 6000)
	{
		return;
	}
	func_711();
	func_712(3, 0);
	func_712(1, 0);
	func_713(13);
	func_714();
	func_715();
	bVar0 = iLocal_82 == -1;
	if (iLocal_82 != -1 && Local_1685[iLocal_71]->f_61 != -2)
	{
		bVar1 = true;
		if (Local_1685[iLocal_70]->f_61 != -2)
		{
			Local_1685[iLocal_71]->f_61 = Local_1685[iLocal_70]->f_61;
			uLocal_14268.f_12 = Local_1685[iLocal_70]->f_61;
			bVar1 = false;
		}
		if (!func_345(&uLocal_12891))
		{
			func_324(&uLocal_12891, 0, 0);
		}
		else if (func_325(&uLocal_12891, 0, 0) >= 5000)
		{
			bVar1 = false;
		}
		if (bVar1)
		{
			return;
		}
	}
	if (func_716(&uLocal_14268, &iLocal_81, bVar0, 0))
	{
		if (uLocal_14268.f_16)
		{
			func_660(16);
		}
		else if (uLocal_14268.f_20 != -1)
		{
			if (_is_anim_scene_loaded(uLocal_14268.f_20, true, false))
			{
				if (!_is_anim_scene_started(uLocal_14268.f_20, false))
				{
					start_anim_scene(uLocal_14268.f_20);
					func_660(16);
				}
			}
			else
			{
				return;
			}
		}
		if (uLocal_14268.f_12 != -1)
		{
			Local_1685[iLocal_71]->f_61 = uLocal_14268.f_12;
		}
		func_717(&Local_12907);
		func_718(&Local_14319, 2, 0);
		func_48(1);
		if (bLocal_73)
		{
			if (is_ped_on_mount(iLocal_81))
			{
				clear_ped_tasks(get_mount(iLocal_81), 1, 0);
				task_stand_still(get_mount(iLocal_81), -1);
			}
			if (does_cam_exist(&(uLocal_14268[0])))
			{
				set_cam_affects_aiming(&(uLocal_14268[0]), false);
			}
		}
		func_324(&uLocal_12873, 0, 0);
		func_67(9);
	}
}

void func_313()
{
	func_58(0, 8);
	if (func_309() <= 1)
	{
		if (func_719())
		{
			func_67(11);
		}
	}
	else
	{
		if (bLocal_75)
		{
			if (func_720())
			{
				if (!Local_10501.f_739)
				{
					func_343();
					func_721();
					Local_10501.f_739 = 1;
				}
				else
				{
					func_311();
					if (is_bit_set(Local_5688.f_41, 17) && !is_bit_set(Local_5688.f_41, 12))
					{
						set_bit(&(Local_5688.f_41), 12);
					}
				}
			}
		}
		if (!func_38(iLocal_71))
		{
			bVar0 = func_567();
		}
		func_722(bVar0);
		if (is_bit_set(Local_5688.f_41, 12) && Local_10501.f_739)
		{
			if (func_719())
			{
				func_723();
				StringCopy(&cVar1, _get_label_text(func_724(Global_2359296->f_155)), 64);
				if (!is_string_null_or_empty(&(Global_3145858->f_108)))
				{
					cVar1 = { Global_3145858->f_108 };
				}
				func_725(&Local_10501, &uLocal_15670, &cVar1, &Local_5688, &(Local_5688.f_2), &(Global_3145858->f_11), Local_13917.f_159, Local_13917.f_160, Local_13917.f_162, &(Local_5688.f_1135), Local_5688.f_24, Local_5688.f_857, -1, 0, 1);
				func_67(11);
				func_726();
			}
		}
	}
}

void func_314()
{
	if (func_14())
	{
		func_67(12);
	}
	else
	{
		if (!func_727())
		{
			return;
		}
		if (!Local_10501.f_740)
		{
			func_324(&uLocal_12889, 0, 0);
			return;
		}
		if (!func_728())
		{
			return;
		}
		if (!is_bit_set(iLocal_57, 28))
		{
			StringCopy(&cVar0, _get_label_text(func_724(Global_2359296->f_155)), 64);
			if (!is_string_null_or_empty(&(Global_3145858->f_108)))
			{
				cVar0 = { Global_3145858->f_108 };
			}
			func_725(&Local_10501, &uLocal_15670, &cVar0, &Local_5688, &(Local_5688.f_2), &(Global_3145858->f_11), Local_13917.f_159, Local_13917.f_160, Local_13917.f_162, &(Local_5688.f_1135), Local_5688.f_24, Local_5688.f_857, -1, Local_10501.f_737, 0);
			func_75(&(Local_5688.f_2415), func_31(14));
			if (func_309() > 1)
			{
				func_729(&Local_9017);
			}
			set_bit(&iLocal_57, 28);
		}
		func_40();
		if (!func_38(iLocal_71))
		{
			func_39();
		}
		func_67(13);
	}
}

void func_315(var uParam0, bool bParam1)
{
	_close_app_by_hash(595204529);
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
	if (_databinding_is_data_id_valid(uParam0->f_142))
	{
		_databinding_remove_data_entry(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_143[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	_0x531a78d6bf27014b("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_730(&(uParam0->f_162));
	}
	func_731(0);
}

void func_316(bool bParam0)
{
	if (bParam0)
	{
		func_37(16);
	}
	else
	{
		func_50(16);
	}
}

void func_317()
{
	if ((!bLocal_73 || func_672(255)) || func_688(255))
	{
		func_174(1);
		if (&Global_1048581)
		{
			if (!&Global_1048586)
			{
				func_319();
				if (!is_screen_faded_out())
				{
					return;
				}
			}
		}
		if (!is_bit_set(iLocal_57, 6))
		{
			func_445(64);
			func_48(1);
			func_376(1);
			func_374();
			set_bit(&iLocal_57, 6);
		}
		return;
	}
	clear_bit(&iLocal_57, 6);
	func_733(func_732(4));
	func_734();
	func_18();
	if (func_14())
	{
		func_105(&(Global_265377->f_124517.f_71.f_53));
	}
	func_67(15);
}

void func_318(int iParam0)
{
	func_735(0, 0, iParam0, 129, -1, 0, -1);
}

void func_319()
{
	if (!bVar16053)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (does_entity_exist(&(Global_1048684->f_22[iVar0])))
			{
				iLocal_16055 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (!bVar16053)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Local_92[iVar0]->f_3 && !func_38(iVar0))
				{
					bVar1 = true;
				}
				iVar0++;
			}
			if (!bVar1)
			{
				func_37(128);
				Global_1048586 = 1;
			}
		}
	}
}

void func_320()
{
	if (func_38(iLocal_71))
	{
		return;
	}
	if (!func_696())
	{
		func_736(&uLocal_12894);
	}
	if (((func_261() > 2 && func_29(iLocal_71) > 6) || !func_345(&(Local_5688.f_1154))) || func_737(-1) >= 3)
	{
		if (func_168())
		{
			if (func_325(&(Local_5688.f_1154), 0, 0) > func_738() + 1000 + 500)
			{
				func_151(&uLocal_12894);
			}
		}
		else
		{
			func_151(&uLocal_12894);
		}
		return;
	}
	if (func_739(&uLocal_12894))
	{
		return;
	}
	if (!func_740(&uLocal_12894))
	{
		iVar0 = 1;
		if (func_89())
		{
			iVar0 = 2;
		}
		func_741(&uLocal_12894, iVar0);
	}
	iVar1 = (func_738() - func_742());
	bVar2 = true;
	if (func_168())
	{
		if (func_592(iLocal_70) != 6)
		{
			bVar2 = false;
		}
	}
	if (bVar2)
	{
		func_744(&uLocal_12894, iVar1, func_743());
	}
}

void func_321()
{
	if (func_29(iLocal_71) == 0)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	func_745(&(Local_5688.f_2391), &uLocal_62);
}

void func_322()
{
	if (!is_bit_set(iLocal_60, 15))
	{
		if (func_29(iLocal_71) >= 6)
		{
			if ((!_0x251241caec707106() || func_325(&uLocal_14293, 0, 0) > 3000) || is_player_control_on(iLocal_79))
			{
				set_bit(&iLocal_60, 15);
			}
		}
	}
}

void func_323()
{
	if (func_38(iLocal_71) || func_261() > 2)
	{
		return;
	}
	iVar0 = Local_14319.f_5;
	if (is_bit_set(iVar14317, 1))
	{
		iVar0 = Local_14319.f_7;
	}
	if (func_168())
	{
		if (iVar0 != 22)
		{
			func_718(&Local_14319, 22, 0);
			func_746(Local_14319.f_5);
		}
		return;
	}
	switch (iVar0)
	{
		case 8:
		case 9:
			func_747(iVar0);
			if (is_bit_set(iVar14317, 0))
			{
				clear_bit(&Local_14319, 0);
				func_746(Local_14319.f_6);
			}
			break;
		default:
			if (is_bit_set(iVar14317, 0))
			{
				clear_bit(&Local_14319, 0);
				func_746(iVar0);
			}
			break;
	}
}

void func_324(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = get_network_time();
		}
		else
		{
			*uParam0 = get_network_time_accurate();
		}
	}
	else
	{
		*uParam0 = get_game_timer();
	}
	uParam0->f_1 = 1;
}

int func_325(var uParam0, bool bParam1, bool bParam2)
{
	if (network_is_game_in_progress() && !bParam1)
	{
		if (!bParam2)
		{
			return get_time_difference(*uParam0, get_network_time());
		}
		else
		{
			return get_time_difference(*uParam0, get_network_time_accurate());
		}
	}
	return get_time_difference(*uParam0, get_game_timer());
}

bool func_326(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

void func_327(int iParam0)
{
	if (!func_748(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_328(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 8)
	{
		iParam0 = 0;
	}
	if (is_bit_set(&(Global_2359296->f_74[iParam0]), 14))
	{
		if (!is_bit_set(iLocal_58, 2))
		{
			set_bit(&iLocal_58, 2);
		}
		bVar0 = is_waypoint_active();
		bVar1 = func_90(Local_92[iLocal_71]->f_4);
		if (bVar1)
		{
			func_749();
		}
		if (Local_1685[iLocal_70]->f_54 == -99999f)
		{
			if (bVar0)
			{
				if (_0xf08e42bfa46bdff8(&(Local_1685[iLocal_71]->f_54), &(Local_1685[iLocal_71]->f_55)))
				{
					if (Local_1685[iLocal_70]->f_56 == -879298547)
					{
						switch (func_750())
						{
							case 0:
								Local_1685[iLocal_71]->f_56 = -511566837;
								break;
							case 1:
								Local_1685[iLocal_71]->f_56 = 133359852;
								break;
							case 2:
								Local_1685[iLocal_71]->f_56 = -164117130;
								break;
							case 3:
								Local_1685[iLocal_71]->f_56 = -1134374451;
								break;
							case 4:
								Local_1685[iLocal_71]->f_56 = -1395051846;
								break;
							case 5:
								Local_1685[iLocal_71]->f_56 = 1664261990;
								break;
							case 6:
								Local_1685[iLocal_71]->f_56 = -780469251;
								break;
							case 7:
								Local_1685[iLocal_71]->f_56 = -701364869;
								break;
							case 8:
								Local_1685[iLocal_71]->f_56 = 1147888108;
								break;
							case 9:
								Local_1685[iLocal_71]->f_56 = -104543072;
								break;
							case 10:
								Local_1685[iLocal_71]->f_56 = -352964861;
								break;
							case 11:
								Local_1685[iLocal_71]->f_56 = -1321714808;
								break;
							case 12:
								Local_1685[iLocal_71]->f_56 = -1633216922;
								break;
							case 13:
								Local_1685[iLocal_71]->f_56 = -992156975;
								break;
							case 14:
								Local_1685[iLocal_71]->f_56 = -985996415;
								break;
							case 15:
								Local_1685[iLocal_71]->f_56 = -1031152097;
								break;
							case 16:
								Local_1685[iLocal_71]->f_56 = 1763355466;
								break;
							case 17:
								Local_1685[iLocal_71]->f_56 = 1406173366;
								break;
							case 18:
								Local_1685[iLocal_71]->f_56 = -1988105196;
								break;
							case 19:
								Local_1685[iLocal_71]->f_56 = 2017085833;
								break;
							case 20:
								Local_1685[iLocal_71]->f_56 = 1055774449;
								break;
							case 21:
								Local_1685[iLocal_71]->f_56 = 748106308;
								break;
							case 22:
								Local_1685[iLocal_71]->f_56 = 1118985838;
								break;
							case 23:
								Local_1685[iLocal_71]->f_56 = 820034251;
								break;
							case 24:
								Local_1685[iLocal_71]->f_56 = -735182489;
								break;
							case 25:
								Local_1685[iLocal_71]->f_56 = 1368652849;
								break;
						}
					}
					if (!func_260())
					{
						func_752(&iLocal_12819, iLocal_79, Local_1685[iLocal_71]->f_54, Local_1685[iLocal_71]->f_55, func_751());
					}
					else
					{
						func_754(iLocal_79, &Local_15689, &uLocal_15693, Local_1685[iLocal_70]->f_54, Local_1685[iLocal_70]->f_55, Local_1685[iLocal_70]->f_56, func_753(Local_1685[iLocal_71]->f_3), 1);
					}
					set_waypoint_off();
				}
			}
		}
		else if (bVar0)
		{
			func_749();
		}
		if (!func_260())
		{
			return;
		}
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (Local_1685[iVar2]->f_3 == iParam0)
			{
				if (iVar2 != iLocal_70 || bVar1)
				{
					if (Local_92[iVar2]->f_3)
					{
						if (Local_1685[iVar2]->f_54 == -99999f)
						{
							func_755(Local_92[iVar2]->f_4, &uLocal_15693);
						}
						else
						{
							func_754(Local_92[iVar2]->f_4, &Local_15689, &uLocal_15693, Local_1685[iVar2]->f_54, Local_1685[iVar2]->f_55, Local_1685[iVar2]->f_56, func_753(Local_1685[iVar2]->f_3), 0);
						}
					}
				}
			}
			iVar2++;
		}
	}
}

void func_329()
{
	if (is_bit_set(iLocal_60, 4))
	{
		return;
	}
	func_756();
	func_757();
	func_758();
	if (iVar14241 != 0)
	{
		if (func_759(iVar14241))
		{
			_0x2f901291ef177b02(iVar14241, 0);
		}
	}
	if (iVar14242 != 0)
	{
		if (func_759(iVar14242))
		{
			_0x2f901291ef177b02(iVar14242, 0);
		}
	}
	if (iVar14239 != 0)
	{
		if (func_759(iVar14239))
		{
			_0x2f901291ef177b02(iVar14239, 0);
		}
	}
	if (iVar14240 != 0)
	{
		if (func_759(iVar14240))
		{
			_0x2f901291ef177b02(iVar14240, 0);
		}
	}
	if (iVar14243 != 0)
	{
		if (func_759(iVar14243))
		{
			_0x2f901291ef177b02(iVar14243, 0);
		}
	}
	if (iVar14176 != 0)
	{
		_0x00a15b94cba4f76f(iVar14176);
	}
	func_460();
	Global_1071686->f_28355 = 255;
	Global_1071686->f_28356 = 255;
	set_bit(&iLocal_60, 4);
}

void func_330()
{
	if (is_ped_climbing(iLocal_80) || is_ped_vaulting(iLocal_80))
	{
		func_324(&uLocal_15993, 0, 0);
	}
	else
	{
		if (!func_345(&uLocal_15993))
		{
			return;
		}
		if (func_760(&uLocal_15993, 2000, 0))
		{
			func_358(&uLocal_15993);
		}
	}
}

void func_331(int iParam0)
{
	if (iVar16058 != 401860102)
	{
		_0x8b3b71c80a29a4bb(*iParam0, iVar16058, 6);
	}
}

void func_332()
{
	if (func_168())
	{
		func_761();
	}
}

void func_333(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = Global_3145858->f_51905;
	}
	else
	{
		iVar0 = iParam0;
	}
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			_0x90da5ba5c2635416();
			break;
		case 2:
			if (_0xa24c1d341c6e0d53(0, 0, 0))
			{
				_0x8370d34bd2e60b73();
			}
			_disable_first_person_cam_this_frame();
			break;
	}
}

void func_334()
{
	if (func_31(13))
	{
		if (is_bit_set(iLocal_58, 9))
		{
			if (func_345(&uLocal_15726))
			{
				if (func_325(&uLocal_15726, 0, 0) > 3750)
				{
					func_87();
					func_358(&uLocal_15726);
				}
			}
			else
			{
				func_324(&uLocal_15726, 0, 0);
			}
		}
	}
}

void func_335()
{
	func_762(1);
	func_763();
}

void func_336(var uParam0)
{
	func_764(&(uParam0->f_973));
	func_765(uParam0);
	clear_bit(&(uParam0->f_966), 8);
	func_766(uParam0);
}

void func_337()
{
	func_303(524288);
	if (_does_volume_exist(iVar15000))
	{
		func_221(&iLocal_15002);
	}
	iLocal_15002 = func_767(Local_5688.f_1160, Local_5688.f_1162);
	fVar0 = 1f;
	if ((Local_5688.f_1160 == 0f && Local_5688.f_1162 == 0f) && Local_5688.f_1161 == 0f)
	{
		fVar0 = 0f;
	}
	func_768();
	_0x2f9ac754fe179d58(fVar0);
}

void func_338(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (fParam0 == 0f || fParam1 == 0f)
	{
		iVar0 = 0;
		if (fParam0 == 0f)
		{
			iVar0 = 8192;
		}
		if (fParam1 == 0f)
		{
			iVar0 |= 2016;
		}
		_0xf45e46deecf7df6e(iVar0, 0, 0, -1, -1);
	}
	_0xab0d553fe20a6e25(func_769(fParam0, fParam1));
	set_vehicle_density_multiplier_this_frame(fParam2);
	_0xc0258742b034dfaf(fParam1);
	_0xdb48e99f8e064e56(fParam1);
	_0xba0980b5c0a11924(fParam0);
	_0x28cb6391acedd9db(fParam0);
	set_random_vehicle_density_multiplier_this_frame(fParam2);
	set_parked_vehicle_density_multiplier_this_frame(fParam2);
	set_disable_random_trains_this_frame(bParam3);
}

int func_339(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_770(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_340(int iParam0)
{
	if (!is_bit_set(Local_5688.f_41, 2) && !func_14())
	{
		if (func_771())
		{
			if (func_772())
			{
				func_358(&(Local_5688.f_1146));
				func_280(1);
				set_bit(&(Local_5688.f_41), 2);
			}
		}
		else if (func_272(256))
		{
			if (!func_345(&(Local_5688.f_1146)))
			{
				func_324(&(Local_5688.f_1146), 0, 0);
			}
			else if (func_325(&(Local_5688.f_1146), 0, 0) >= 60000)
			{
				if (!func_771())
				{
					if (func_772())
					{
						func_358(&(Local_5688.f_1146));
						func_280(1);
						set_bit(&(Local_5688.f_41), 3);
						set_bit(&(Local_5688.f_41), 2);
					}
				}
			}
		}
	}
	else
	{
		if (func_14())
		{
			if (Local_5688.f_867 == 0)
			{
				Local_5688.f_858[Global_2892896->f_13] = 1;
				Local_5688.f_867 = 1;
				if (Global_2892896->f_23 > 0)
				{
					Local_5688.f_868 = Global_2892896->f_23;
					Local_5688.f_872 = Global_2892896->f_23;
					Local_5688.f_870 = Global_2892896->f_23;
					Local_5688.f_874 = Global_2892896->f_23;
				}
				if (Global_2892896->f_24 > 0)
				{
					Local_5688.f_869 = Global_2892896->f_24;
					Local_5688.f_871 = Global_2892896->f_24;
				}
				set_bit(&(Local_5688.f_41), 2);
			}
		}
		if (func_773())
		{
			if (func_61(0, iParam0))
			{
				func_324(&(Local_5688.f_1152), 0, 0);
				func_775(&(Local_5688.f_1158), func_774(), Local_5688.f_1161);
				if ((Local_5688.f_1160 == 0f && Local_5688.f_1161 == 0f) && Local_5688.f_1162 == 0f)
				{
					func_776(&(Local_5688.f_1159), 0);
				}
				func_346(1);
			}
		}
	}
}

void func_341()
{
	func_777();
	if (!is_bit_set(Local_5688.f_41, 25))
	{
		if (func_667())
		{
			if (!func_345(&(Local_5688.f_1150)))
			{
				func_324(&(Local_5688.f_1150), 0, 0);
			}
			if (func_670() || func_325(&(Local_5688.f_1150), 0, 0) >= 60000)
			{
				func_358(&(Local_5688.f_1150));
				if (func_778(1))
				{
					func_779(1);
				}
				set_bit(&(Local_5688.f_41), 25);
			}
		}
	}
	else if (!is_bit_set(Local_5688.f_41, 4))
	{
		if (func_780() == 8 && func_781())
		{
			func_782();
			func_346(2);
		}
	}
}

void func_342()
{
	if (!is_bit_set(Local_5688.f_41, 5))
	{
		if (func_783())
		{
			func_324(&(Local_5688.f_1156), 0, 0);
			func_324(&(Local_5688.f_1154), 0, 0);
			if (is_bit_set(Local_5688.f_41, 21))
			{
				func_784();
			}
			else if (func_785())
			{
				func_324(&(Local_5688.f_2400), 0, 0);
			}
			clear_bit(&(Local_5688.f_41), 0);
			clear_bit(&(Local_5688.f_41), 6);
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Local_92[iVar0]->f_3)
				{
					iVar1++;
				}
				iVar0++;
			}
			Local_5688.f_2.f_3 = iVar1;
			set_bit(&(Local_5688.f_41), 5);
			set_bit(&(Local_5688.f_41), 6);
			func_280(0);
		}
		return;
	}
	func_343();
	if (func_646())
	{
		func_786();
		return;
	}
	if (func_787())
	{
		if (func_680())
		{
			func_788();
		}
		if (!func_789())
		{
			func_790();
			func_346(3);
			func_791();
			func_408(1);
			func_792();
			func_280(1);
			if (func_14())
			{
				Global_2892896->f_9 = 1;
			}
		}
		else
		{
			func_793(1);
		}
	}
	else
	{
		func_794();
		func_795();
		func_796();
		func_408(0);
	}
	func_797();
	if (is_bit_set(Local_5688.f_41, 6))
	{
		set_bit(&(Local_5688.f_41), 0);
	}
}

void func_343()
{
	bVar3 = func_260();
	if (is_bit_set(Local_5688.f_24.f_5, 2))
	{
		bVar3 = false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		bVar4 = false;
		if (Local_92[iVar0]->f_3 && !func_38(iVar0))
		{
			if (!Local_92[iVar0]->f_7)
			{
				bVar4 = true;
			}
			if (func_31(50))
			{
				iVar1 = Local_92[iVar0]->f_9;
			}
			else
			{
				iVar1 = Local_1685[iVar0]->f_12;
			}
			if (func_680())
			{
				if (func_260())
				{
					if (Local_92[iVar0]->f_1 != -1)
					{
						iVar2 = &Local_5688.f_3294[Local_92[iVar0]->f_1];
					}
				}
				else if (&Local_92[iVar0] != -1)
				{
					iVar2 = &Local_5688.f_3294[&Local_92[iVar0]];
				}
			}
			else
			{
				iVar2 = (*Global_263042)[iVar0]->f_1.f_55.f_1;
			}
			if (func_244())
			{
				uVar5 = Local_92[iVar0]->f_1;
				iVar6 = func_798(Global_3145858->f_61343[0]->f_2, iVar0);
				iVar7 = func_798(Global_3145858->f_61343[1]->f_2, iVar0);
				iVar8 = func_798(Global_3145858->f_61343[2]->f_2, iVar0);
				iVar9 = func_798(Global_3145858->f_61343[3]->f_2, iVar0);
				iVar10 = func_798(Global_3145858->f_61357[0]->f_2, iVar0);
				iVar11 = func_798(Global_3145858->f_61357[1]->f_2, iVar0);
				iVar12 = func_798(Global_3145858->f_61357[2]->f_2, iVar0);
				iVar13 = func_798(Global_3145858->f_61357[3]->f_2, iVar0);
				iVar14 = func_798(Global_3145858->f_61371[0]->f_2, iVar0);
				func_799(&Local_9759, &(Local_92[iVar0]->f_4), uVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12, iVar13, iVar14, bVar4, &(Local_92[iVar0]), Local_1685[iVar0]->f_41, Local_92[iVar0]->f_10, 0);
			}
			else
			{
				func_800(&Local_9759, &(Local_92[iVar0]->f_4), Local_92[iVar0]->f_1, Local_1685[iVar0]->f_6, Local_1685[iVar0]->f_7, Local_1685[iVar0]->f_9, Local_1685[iVar0]->f_8, Local_1685[iVar0]->f_5, iVar1, Local_1685[iVar0]->f_38, iVar2, bVar4, Local_1685[iVar0]->f_41, Local_92[iVar0]->f_10, &(Local_92[iVar0]));
			}
		}
		else if (&Local_5688.f_568[iVar0] != 6)
		{
			if (func_244())
			{
				iVar15 = 255;
				uVar16 = Local_5688.f_568[iVar0]->f_1;
				iVar17 = func_801(Global_3145858->f_61343[0]->f_2, iVar0);
				iVar18 = func_801(Global_3145858->f_61343[1]->f_2, iVar0);
				iVar19 = func_801(Global_3145858->f_61343[2]->f_2, iVar0);
				iVar20 = func_801(Global_3145858->f_61343[3]->f_2, iVar0);
				iVar21 = func_801(Global_3145858->f_61357[0]->f_2, iVar0);
				iVar22 = func_801(Global_3145858->f_61357[1]->f_2, iVar0);
				iVar23 = func_801(Global_3145858->f_61357[2]->f_2, iVar0);
				iVar24 = func_801(Global_3145858->f_61357[3]->f_2, iVar0);
				iVar25 = func_801(Global_3145858->f_61371[0]->f_2, iVar0);
				func_799(&Local_9759, &iVar15, uVar16, iVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23, iVar24, iVar25, 0, iVar0, 0, func_802(iVar0), 0);
			}
			else
			{
				iVar26 = 255;
				func_800(&Local_9759, &iVar26, Local_5688.f_568[iVar0]->f_1, Local_5688.f_568[iVar0]->f_5, Local_5688.f_568[iVar0]->f_6, 0, 0, Local_5688.f_568[iVar0]->f_3, Local_5688.f_568[iVar0]->f_4, Local_5688.f_568[iVar0]->f_7, func_803(iVar0), 0, 0, func_802(iVar0), iVar0);
			}
		}
		else if (func_586())
		{
			if (&Local_92[iVar0] != -1)
			{
				func_804(&Local_9759, &(Local_92[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_586())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_9759[iVar0]->f_14 == 255)
			{
				Local_9759[iVar0]->f_2 = 10000f;
			}
			iVar0++;
		}
	}
	if (&Global_1051113)
	{
		Local_10501.f_738++;
	}
	func_805(&Local_9759, &Local_10501, &uLocal_15670, bVar3);
}

bool func_344()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_92[iVar0]->f_3)
		{
			if ((!is_bit_set(Local_1685[iVar0]->f_2, 5) && !is_bit_set(Local_1685[iVar0]->f_2, 7)) && !is_bit_set(Local_1685[iVar0]->f_2, 8))
			{
				if (func_29(iVar0) != 8)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_345(var uParam0)
{
	return uParam0->f_1;
}

void func_346(int iParam0)
{
	if (bLocal_75)
	{
		Local_5688.f_39 = iParam0;
	}
}

bool func_347(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_348()
{
	return Global_3145858->f_194;
}

int func_349()
{
	return uVar12901;
}

void func_350()
{
	if (func_260())
	{
		set_ped_relationship_group_hash(iLocal_81, func_147(Local_1685[iLocal_71]->f_3));
	}
	else
	{
		set_ped_relationship_group_hash(iLocal_81, 869270437);
	}
}

void func_351(int iParam0)
{
	iLocal_12903 = iParam0;
}

int func_352(int iParam0)
{
	return &(Local_5688.f_568[iParam0]);
}

void func_353(int iParam0, int iParam1)
{
	Local_5688.f_568[iParam0] = iParam1;
}

bool func_354(var uParam0)
{
	if (!func_260())
	{
		*uParam0 = -1;
		return true;
	}
	iVar11 = 0;
	iVar12 = 255;
	iVar13 = func_394();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar13 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar13))
		{
			iVar12 = network_get_player_index(iVar13);
			iVar1 = get_player_team(iVar12);
			if (iVar1 != -1 && iVar1 < 8)
			{
				uVar2[iVar1] = &uVar2[iVar1] + 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_352(iVar0) != 6)
		{
			uVar2[Local_5688.f_568[iVar0]->f_1] = &uVar2[Local_5688.f_568[iVar0]->f_1] + 1;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= (Local_5688.f_857 - 1))
	{
		if (&uVar2[iVar1] < &uVar2[iVar11])
		{
			iVar11 = iVar1;
		}
		else if (&uVar2[iVar1] == &uVar2[iVar11])
		{
			if (&Local_5688.f_876[iVar1] < &Local_5688.f_876[iVar11])
			{
				iVar11 = iVar1;
			}
		}
		iVar1++;
	}
	*uParam0 = iVar11;
	return true;
}

void func_355(var uParam0, int iParam1)
{
	switch (&Local_5688.f_568[iParam1])
	{
		case 0:
			set_bit(&(Local_5688.f_568[iParam1]->f_2), get_random_int_in_range(0, 3));
			Local_5688.f_568[iParam1]->f_3 = 0;
			Local_5688.f_568[iParam1]->f_5 = 0;
			Local_5688.f_568[iParam1]->f_6 = 0;
			func_353(iParam1, 1);
			break;
		case 1:
			if (func_806(uParam0, iParam1))
			{
				func_353(iParam1, 2);
				return;
			}
			break;
		case 2:
			if (network_does_network_id_exist(*uParam0))
			{
				iVar0 = net_to_ped(*uParam0);
				if (is_ped_dead_or_dying(iVar0, true))
				{
					Local_5688.f_568[iParam1]->f_8 = get_network_time_accurate();
					func_353(iParam1, 3);
				}
				else
				{
					func_807(uParam0);
				}
			}
			else
			{
				Local_5688.f_568[iParam1]->f_8 = get_network_time_accurate();
				func_353(iParam1, 3);
			}
			break;
		case 3:
			if (get_time_difference(Local_5688.f_568[iParam1]->f_8, get_network_time_accurate()) > 4000)
			{
				iVar0 = net_to_ped(*uParam0);
				set_ped_as_no_longer_needed(&iVar0);
				Local_5688.f_568[iParam1]->f_8 = get_network_time_accurate();
				if (does_blip_exist(&(uLocal_12519[iParam1])))
				{
					remove_blip(uLocal_12519[iParam1]);
				}
				func_353(iParam1, 4);
				Local_5688.f_568[iParam1]->f_7 = func_742();
			}
			break;
		case 4:
			if (!func_586())
			{
				if (get_time_difference(Local_5688.f_568[iParam1]->f_8, get_network_time_accurate()) > 4000)
				{
					func_353(iParam1, 1);
				}
			}
			break;
		case 5:
			func_136(uParam0, iParam1);
			func_353(iParam1, 6);
			break;
	}
}

void func_356(var uParam0)
{
	if (!func_345(uParam0))
	{
		return;
	}
	iVar0 = func_325(uParam0, 0, 0);
	if (uParam0->f_4 >= 5)
	{
		return;
	}
	if (iVar0 < 60000)
	{
		return;
	}
	func_808(1, -1);
}

int func_357()
{
	return _0x771dfcb24d19c2f6(0);
	iVar0 = _0xd7d22f5592aed8ba(0);
	iVar1 = _0xd7d22f5592aed8ba(1);
	iVar2 = _0xd7d22f5592aed8ba(2);
	if (iVar0 <= iVar1 && iVar0 <= iVar2)
	{
		return iVar0;
	}
	if (iVar1 <= iVar0 && iVar1 <= iVar2)
	{
		return iVar1;
	}
	if (iVar2 <= iVar1 && iVar2 <= iVar0)
	{
		return iVar2;
	}
	return 0;
}

void func_358(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_359()
{
	return Global_3145858->f_224 == 2094371892;
}

bool func_360()
{
	if (!network_is_cloud_available())
	{
		return true;
	}
	if (is_bit_set(&Global_1048626, 2))
	{
		return true;
	}
	return false;
}

char* func_361(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mission";
		case 1:
			return "photo";
		case 2:
			return "playlist";
		case 3:
			return "lifeinvaderpost";
		case 4:
			return "challenge";
		case 5:
			return "youtube";
		default:
			break;
	}
	return "mission";
}

void func_362()
{
	if (datafile_get_file_dict(0) != 0)
	{
		datafile_delete(0);
	}
}

void func_363(int iParam0)
{
	iLocal_24 = iParam0;
}

int func_364()
{
	switch (Local_5688.f_24)
	{
		case 1816768801:
			return 34;
		case -1581094459:
			switch (Global_3145858->f_57980[0]->f_100)
			{
				case -2002235300:
					return 30;
				case 2133046983:
					return 39;
				case -764310200:
					return 31;
				default:
					break;
			}
			break;
		case -457802746:
			return 32;
		case -222655798:
			return 33;
		case -533426613:
			return 36;
		case -725256130:
			return 37;
		case -1437925683:
			return 38;
		case 1272390114:
			return 35;
		case -559809431:
			return 41;
		case 1153715636:
			return 40;
	}
	return -1;
}

void func_365(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*uParam0 = iParam2;
	uParam0->f_1 = iParam1;
	uParam0->f_13 = iParam3;
	if (network_is_game_in_progress())
	{
		if (func_345(&uLocal_16020))
		{
			uParam0->f_2 = (func_325(&uLocal_16020, 0, 0) / 60000);
		}
		else if (func_680())
		{
			uParam0->f_2 = (func_325(&(Local_5688.f_1156), 0, 0) / 60000);
		}
		else if (func_168())
		{
			uParam0->f_2 = ((Global_3145858->f_285 + func_742()) / 60000);
		}
		else
		{
			uParam0->f_2 = (func_742() / 60000);
		}
	}
	else
	{
		_0x86a68e84e5884951(&Var0);
		if (Var0.f_4 > Local_16026.f_4)
		{
			uParam0->f_2 = (Var0.f_4 - Local_16026.f_4);
		}
		else if (Var0.f_4 != Local_16026.f_4)
		{
			uParam0->f_2 = ((60 - Local_16026.f_4) + Var0.f_4);
		}
		else
		{
			uParam0->f_2 = 0;
		}
	}
	if (uParam0->f_2 > 30)
	{
		uParam0->f_2 = 30;
	}
	else if (uParam0->f_2 < 0)
	{
		uParam0->f_2 = 0;
	}
	if (uParam0->f_1 == 1)
	{
		uParam0->f_3 = Local_5688.f_872;
	}
	if (*uParam0 == 1)
	{
		iVar9 = 1;
		iVar7 = 0;
		while (iVar7 < 8)
		{
			if (&Local_5688.f_1135[iVar7] == Local_1685[iLocal_71]->f_3)
			{
				uParam0->f_4 = iVar9;
			}
			else if (&Local_5688.f_1135[iVar7] != -1)
			{
				iVar9++;
			}
			if (func_809(iVar7))
			{
				iVar8++;
			}
			iVar7++;
		}
		if (uParam0->f_4 == 0)
		{
			uParam0->f_4 = iVar9;
		}
		if (uParam0->f_1 == 1)
		{
			uParam0->f_5 = iVar8;
		}
	}
	else
	{
		uParam0->f_4 = func_166(1);
	}
}

void func_366(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	Var0.f_1 = 11;
	if (func_367(&Var0, uParam0->f_13))
	{
	}
	if ((*uParam0 != 3 && *uParam0 != 5) && *uParam0 != 4)
	{
		if (func_810(&Var0, *uParam0, uParam0->f_2))
		{
		}
		if (func_811(&Var0, *uParam0, uParam0->f_3))
		{
		}
	}
	switch (*uParam0)
	{
		case 2:
			if (func_812(&Var0, uParam0->f_7))
			{
			}
			if (func_813(&Var0, uParam0->f_6))
			{
			}
			break;
		case 4:
			if (func_814(&Var0, uParam0->f_9))
			{
			}
			if (func_815(&Var0, uParam0->f_10))
			{
			}
			if (func_816(&Var0, uParam0->f_11))
			{
			}
			if (func_810(&Var0, *uParam0, uParam0->f_2))
			{
			}
			if (func_817(&Var0, uParam0->f_12))
			{
			}
			break;
		case 5:
			if (func_810(&Var0, *uParam0, uParam0->f_2))
			{
			}
			if (func_818(&Var0, uParam0->f_6))
			{
			}
			if (func_819(&Var0, uParam0->f_11))
			{
			}
			if (func_811(&Var0, *uParam0, uParam0->f_3))
			{
			}
			break;
		case 3:
			if (func_820(&Var0, uParam0->f_4))
			{
			}
			if (func_821(&Var0, uParam0->f_2))
			{
			}
			if (func_822(&Var0, uParam0->f_8))
			{
			}
			break;
		case 0:
		case 1:
			if (func_823(&Var0, *uParam0, uParam0->f_4))
			{
			}
			if (*uParam0 == 1)
			{
				if (func_824(&Var0, uParam0->f_5))
				{
				}
			}
			break;
	}
	*uParam2 = { Var13 };
	*uParam1 = { Var17 };
	if (*uParam0 == 4)
	{
		func_825(&Var0);
	}
	else if (!func_369(func_826(*uParam0, uParam0->f_1), uParam2, &Var0, 0, 255, 0, bParam3))
	{
	}
}

bool func_367(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, -260413506);
			break;
		case 1:
			func_827(iParam0, -2111337702);
			break;
		case 2:
			func_827(iParam0, -656492409);
			break;
		case 3:
			func_827(iParam0, -357278670);
			break;
		case 4:
			func_827(iParam0, -2143717776);
			break;
		case 5:
			func_827(iParam0, 1263733924);
			break;
		case 6:
			func_827(iParam0, 1553313577);
			break;
		case 7:
			func_827(iParam0, 1568888077);
			break;
		case 8:
			func_827(iParam0, 256424089);
			break;
		case 9:
			func_827(iParam0, 617538469);
			break;
		case 10:
			func_827(iParam0, 378029848);
			break;
		case 11:
			func_827(iParam0, -2080015931);
			break;
		case 12:
			func_827(iParam0, -1786110766);
			break;
		case 30:
			func_827(iParam0, -884340676);
			break;
		case 31:
			func_827(iParam0, 102860608);
			break;
		case 39:
			func_827(iParam0, 1794767366);
			break;
		case 33:
			func_827(iParam0, -783611486);
			break;
		case 32:
			func_827(iParam0, -952276855);
			break;
		case 34:
			func_827(iParam0, 318220867);
			break;
		case 35:
			func_827(iParam0, -1077729335);
			break;
		case 36:
			func_827(iParam0, -163378282);
			break;
		case 37:
			func_827(iParam0, 1021593062);
			break;
		case 38:
			func_827(iParam0, 1008454707);
			break;
		case 41:
			func_827(iParam0, 1705953859);
			break;
		case 40:
			func_827(iParam0, -455735051);
			break;
		case 23:
			func_827(iParam0, -1671824329);
			break;
		case 24:
			func_827(iParam0, 1142154017);
			break;
		case 25:
			func_827(iParam0, -1062585103);
			break;
		case 26:
			func_827(iParam0, 324387350);
			break;
		case 60:
			func_827(iParam0, 1572644157);
			break;
		case 61:
			func_827(iParam0, 1410030361);
			break;
		case 62:
			func_827(iParam0, -393597833);
			break;
		case 63:
			func_827(iParam0, -812549498);
			break;
		case 22:
			func_827(iParam0, 1456885582);
			break;
		case 21:
			func_827(iParam0, 1144077788);
			break;
		case 20:
			func_827(iParam0, -2055749896);
			break;
		case 27:
			func_827(iParam0, -267233182);
			break;
		case 28:
			func_827(iParam0, -1732897089);
			break;
		case 100:
			func_827(iParam0, 193425242);
			break;
		case 101:
			func_827(iParam0, -703536713);
			break;
		case 102:
			func_827(iParam0, 1493002126);
			break;
		case 103:
			func_827(iParam0, 1094531086);
			break;
		case 104:
			func_827(iParam0, -1800642837);
			break;
		case 105:
			func_827(iParam0, -1635028311);
			break;
		case 29:
			func_827(iParam0, -45153286);
			break;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return true;
}

int func_368(int iParam0)
{
	if (iParam0 > 29)
	{
		return -1496683509;
	}
	else if (iParam0 > 24)
	{
		return 244647508;
	}
	else if (iParam0 > 19)
	{
		return 1046912657;
	}
	else if (iParam0 > 14)
	{
		return -603072187;
	}
	else if (iParam0 > 11)
	{
		return 658173854;
	}
	else if (iParam0 > 8)
	{
		return 1882285004;
	}
	else if (iParam0 > 5)
	{
		return 227647118;
	}
	else if (iParam0 > 2)
	{
		return 436254572;
	}
	return 0;
}

int func_369(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_1 = 10;
	return func_828(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

bool func_370(int iParam0)
{
	if (func_260())
	{
		if (Local_5688.f_1132 == iParam0 && iParam0 > -1)
		{
			return true;
		}
	}
	return false;
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_251(&iVar0, iParam0);
	if (iParam1 > 0)
	{
		func_556(func_829(-1892463704, 1168300822), iParam1);
		func_556(func_829(-1892463704, iVar0), iParam1);
	}
	if (iParam2 > 0)
	{
		func_556(func_829(1374282888, 1168300822), iParam2);
		func_556(func_829(1374282888, iVar0), iParam2);
	}
	if (iParam3 > 0)
	{
		func_556(func_829(1511238709, 1168300822), iParam3);
		func_556(func_829(1511238709, iVar0), iParam3);
	}
}

int func_372(int iParam0)
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

bool func_373(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_830(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_831())
	{
		return func_830(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_830(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

void func_374()
{
	func_59(11);
	func_380(1, 1);
	func_832(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { get_entity_coords(player_ped_id(), false, false) };
	Global_1102219->f_3879 = get_gameplay_cam_relative_heading();
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_833(Global_1102219->f_3879, 36);
}

void func_375(int iParam0)
{
	Global_1050050 = iParam0;
}

void func_376(bool bParam0)
{
	if (!bParam0)
	{
		func_385(18);
	}
	else
	{
		func_59(18);
	}
}

bool func_377()
{
	return Global_1572887->f_266 > 0;
}

int func_378()
{
	return Global_1893587->f_2;
}

void func_379(int iParam0, bool bParam1)
{
	if (!func_834(&(Var30.f_6), &Var30))
	{
		Var30.f_6 = { (Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)])->f_2 };
		Var30 = (IntToFloat(get_random_int_in_range(0, 359)) * 1f);
	}
	Var30.f_5 = 1;
	func_59(88);
	if (func_835(iParam0, &uVar0))
	{
		func_836(&uVar0, &Var30, 1, 1, 1);
		if (bParam1)
		{
			func_385(0);
		}
		return;
	}
	func_837(Var30.f_6, Var30, -1082130432, -1082130432, 1, 1, 1);
	if (bParam1)
	{
		func_385(0);
	}
}

void func_380(bool bParam0, bool bParam1)
{
	if (func_372(255) == 4)
	{
		return;
	}
	if (func_410(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_385(0);
	}
	else
	{
		if (bParam1)
		{
			func_95(0, 0, 0, 1);
		}
		func_59(0);
		func_838(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_839(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_840(Global_1102219->f_3849, 36);
	func_841(Global_1102219->f_3888, 36);
}

void func_381()
{
	func_37(512);
	func_358(Global_1051135);
}

void func_382(int iParam0)
{
	Global_262153 = (&Global_262153 - (Global_262153 && iParam0));
}

bool func_383(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_384(int iParam0)
{
	if (func_383(iParam0, 1))
	{
		func_842(1);
	}
}

int func_385(int iParam0)
{
	if (func_843(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_386()
{
	return &Global_1050050;
}

void func_387(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_388()
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
			func_248();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_248();
					break;
				case 2:
					func_248();
					break;
				case 4:
					func_248();
					break;
				case 3:
					func_248();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_248();
		}
		if (!network_is_game_in_progress())
		{
			func_248();
		}
		if (!network_is_signed_online())
		{
			func_248();
		}
		if (func_844() == 0)
		{
			if (func_845())
			{
				func_248();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_248();
	}
	return 1;
}

void func_389(int iParam0)
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
		func_846();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_390(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

bool func_391(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_392(int iParam0)
{
	if (func_14())
	{
		return true;
	}
	if (_telemetry_create_uuid(&Local_5688))
	{
		func_847(iParam0, network_get_num_participants(), Global_3145858->f_196);
		return true;
	}
	return false;
}

void func_393()
{
	if (func_14())
	{
		Local_5688.f_24 = Global_2892896->f_21;
		Local_5688.f_857 = Global_2892896->f_14;
	}
	else
	{
		Local_5688.f_24 = Global_2359296->f_155;
		Local_5688.f_857 = Global_2359296->f_26;
	}
	if (func_848())
	{
		if (Local_5688.f_857 < 2)
		{
			Local_5688.f_857 = 2;
		}
		if (Local_5688.f_857 > func_849(Local_5688.f_24))
		{
			Local_5688.f_857 = func_849(Local_5688.f_24);
		}
	}
	else
	{
		Local_5688.f_857 = 1;
	}
	if (Local_5688.f_857 < 1)
	{
		Local_5688.f_857 = 1;
	}
	else if (Local_5688.f_857 > 8)
	{
		Local_5688.f_857 = 8;
	}
	Local_5688.f_24.f_5 = Global_2359296->f_161;
	Local_5688.f_24.f_2 = Global_2359296->f_158;
	Local_5688.f_24.f_3 = Global_2359296->f_159;
	Local_5688.f_24.f_4 = Global_2359296->f_160;
	if (func_613())
	{
		set_bit(&(Local_5688.f_24.f_3), 24);
	}
	switch (Global_2359296->f_14975)
	{
		case 0:
			Local_5688.f_24.f_1 = func_850();
			break;
		case 1:
			Local_5688.f_24.f_1 = 2;
			break;
		case 2:
			set_bit(&(Local_5688.f_24.f_5), 3);
			Local_5688.f_24.f_1 = func_850();
			break;
		case 3:
			set_bit(&(Local_5688.f_24.f_5), 2);
			clear_bit(&(Local_5688.f_24.f_3), 21);
			Local_5688.f_24.f_1 = func_850();
			break;
		case 4:
			set_bit(&(Local_5688.f_24.f_5), 1);
			Local_5688.f_24.f_1 = func_850();
			break;
		case 5:
			set_bit(&(Local_5688.f_24.f_5), 7);
			Local_5688.f_24.f_1 = 2;
			break;
		case 6:
			set_bit(&(Local_5688.f_24.f_5), 4);
			Local_5688.f_24.f_1 = func_850();
			break;
		case 7:
			set_bit(&(Local_5688.f_24.f_5), 5);
			Local_5688.f_24.f_1 = func_850();
			Global_1051122 = 1;
			break;
	}
	if (func_848())
	{
		set_bit(&(Local_5688.f_24.f_5), 6);
		func_851(&uLocal_15670, &uVar0, 0, 0, 1);
	}
	else
	{
		clear_bit(&(Local_5688.f_24.f_5), 6);
	}
	if (func_680())
	{
		func_851(&uLocal_15670, &uVar0, 8, 1, 1);
	}
	if (func_586())
	{
		set_bit(&iLocal_57, 3);
		func_851(&uLocal_15670, &uVar0, 2, 0, 1);
		func_851(&uLocal_15670, &uVar0, 7, 1, 1);
	}
	else if (is_bit_set(Local_5688.f_24.f_2, 8))
	{
		set_bit(&iLocal_57, 3);
	}
	if (func_492())
	{
		if (Global_2359296->f_68 == -1)
		{
			func_852();
		}
	}
	func_851(&uLocal_15670, &uVar0, 5, 1, 1);
	func_851(&uLocal_15670, &uVar0, 1, 1, 1);
	func_851(&uLocal_15670, &uVar0, 2, 0, 1);
	set_bit(&(Local_5688.f_41), 11);
}

int func_394()
{
	return 255;
}

void func_395()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_6761 - 1))
	{
		if (is_bit_set(Global_2359296->f_6762[iVar0]->f_46, 1))
		{
			if (Global_2359296->f_6762[iVar0]->f_80 != 0 && func_853(&(Global_2359296->f_6762[iVar0]->f_81)))
			{
				switch (Global_2359296->f_6762[iVar0]->f_80)
				{
					case 291889844:
						iVar1 = 0;
						while (iVar1 <= (Global_3145858->f_6822 - 1))
						{
							if (is_bit_set(&(Global_2359296->f_6762[iVar0]->f_81[func_422(iVar1)]), func_423(iVar1)) && !is_bit_set(&(Local_5688.f_1284.f_3[func_422(iVar1)]), func_423(iVar1)))
							{
								set_bit(Local_5688.f_1284.f_3[func_422(iVar1)], func_423(iVar1));
							}
							iVar1++;
						}
						break;
					case -1821507459:
						iVar1 = 0;
						while (iVar1 <= (Global_3145858->f_452 - 1))
						{
							if (is_bit_set(&(Global_2359296->f_6762[iVar0]->f_81[func_422(iVar1)]), func_423(iVar1)) && !is_bit_set(Local_5688.f_1284.f_1, iVar1))
							{
								set_bit(&(Local_5688.f_1284.f_1), iVar1);
							}
							iVar1++;
						}
						break;
					case 1135537454:
						iVar1 = 0;
						while (iVar1 <= (Global_3145858->f_13424 - 1))
						{
							if (is_bit_set(&(Global_2359296->f_6762[iVar0]->f_81[func_422(iVar1)]), func_423(iVar1)) && !is_bit_set(Local_5688.f_1284, iVar1))
							{
								set_bit(&(Local_5688.f_1284), iVar1);
							}
							iVar1++;
						}
						break;
					case 422112462:
						iVar1 = 0;
						while (iVar1 <= (Global_2359296->f_458 - 1))
						{
							if (is_bit_set(&(Global_2359296->f_6762[iVar0]->f_81[func_422(iVar1)]), func_423(iVar1)) && func_559(&(Local_5688.f_1744), iVar1))
							{
								func_854(&(Local_5688.f_1744), iVar1);
							}
							iVar1++;
						}
						break;
					case 465509728:
						iVar1 = 0;
						while (iVar1 <= (Global_3145858->f_36479 - 1))
						{
							if (is_bit_set(&(Global_2359296->f_6762[iVar0]->f_81[func_422(iVar1)]), func_423(iVar1)) && !is_bit_set(Local_5688.f_1284.f_2, iVar1))
							{
								set_bit(&(Local_5688.f_1284.f_2), iVar1);
							}
							iVar1++;
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_396()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (&Global_2359296->f_4182[iVar0]->f_1[iVar1] == -1)
			{
			}
			else
			{
				iVar2 = &Global_2359296->f_4182[iVar0]->f_1[iVar1];
				set_bit(&(Local_5688.f_1284), iVar2);
				set_bit(&(Local_5688.f_1481), iVar2);
				set_bit(&(Local_5688.f_41), 22);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_397(var uParam0, bool bParam1, bool bParam2)
{
	func_855(uParam0, bParam2);
	if (bParam1)
	{
		set_bit(&(uParam0->f_7), 2);
	}
	if (!bParam2)
	{
		set_bit(&(uParam0->f_7), 0);
	}
}

void func_398(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!is_bit_set(uParam0->f_7, 3))
		{
			set_bit(&(uParam0->f_7), 3);
		}
	}
	else if (is_bit_set(uParam0->f_7, 3))
	{
		clear_bit(&(uParam0->f_7), 3);
	}
}

float func_400(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (1f * fVar0);
}

float func_401(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			fVar0 = 0f;
			break;
		case 1:
			fVar0 = 0.2f;
			break;
		case 2:
			fVar0 = 0.5f;
			break;
		case 4:
			fVar0 = 0.85f;
			break;
		case 3:
			fVar0 = 1f;
			break;
		default:
			break;
	}
	return (fVar0 * 1f);
}

bool func_402(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		iVar1 = iVar0;
		if (&Global_2359296->f_4836[iParam0]->f_8[iVar1] != -1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_403()
{
	if (Global_3145858->f_224 != -1)
	{
		return Global_3145858->f_224;
	}
	return Global_3145858->f_225;
}

void func_404(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	Var0 = { func_856(iParam1) };
	if (Var0 == 0)
	{
		return;
	}
	vVar32 = { *Var0.f_1[0] };
	iVar35 = func_857(vVar32.x);
	if (iVar35 == 151)
	{
		return;
	}
	Local_5688.f_2684[iParam0] = iVar35;
	Local_5688.f_2684[iParam0]->f_2 = vVar32.y;
	Local_5688.f_2684[iParam0]->f_1 = vVar32.z;
}

int func_405(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 999;
			break;
		case -2:
			iVar0 = Local_5688.f_867;
			break;
		default:
			iVar0 = iParam0;
			break;
	}
	return iVar0;
}

bool func_406(int iParam0)
{
	if (is_bit_set(Local_5688.f_1284, iParam0))
	{
		return true;
	}
	return false;
}

void func_407()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_5688.f_2663[iVar0] = 255;
		Local_5688.f_2663.f_3[iVar0] = 255;
		Local_5688.f_2663.f_6[iVar0] = 0;
		Local_5688.f_2663.f_9[iVar0] = 0;
		Local_5688.f_2663.f_18[iVar0] = 0;
		Local_5688.f_2663.f_12[iVar0] = -1;
		Local_5688.f_2663.f_15[iVar0] = 1;
		iVar0++;
	}
}

void func_408(bool bParam0)
{
	if (Local_5688.f_857 == 1)
	{
		if (&Local_5688.f_1135[0] != 0)
		{
			Local_5688.f_1135[0] = 0;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_5688.f_857)
	{
		iVar2 = iVar0;
		iVar3 = iVar0 + 1;
		while (iVar3 <= 7)
		{
			if (func_858(&(Local_5688.f_1135[iVar3]), &(Local_5688.f_1135[iVar2]), &iVar1, 0))
			{
				iVar2 = iVar3;
			}
			iVar3++;
		}
		if (iVar2 != iVar0)
		{
			func_859(Local_5688.f_1135[iVar0], Local_5688.f_1135[iVar2]);
		}
		if (bParam0 && iVar0 == 0)
		{
			func_860(iVar1);
		}
		iVar0++;
	}
	if (Local_5688.f_857 == 8)
	{
		return;
	}
	if (&Local_5688.f_1135[(Local_5688.f_857 - 1)] == -1)
	{
		return;
	}
	Local_5688.f_1135[7] = &Local_5688.f_1135[(Local_5688.f_857 - 1)];
	Local_5688.f_1135[(Local_5688.f_857 - 1)] = -1;
}

int func_409()
{
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_11 != 1141570454)
		{
		}
		else
		{
			iVar5 = 0;
			bVar4 = false;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Global_2359296->f_459[iVar0]->f_13[iVar1]->f_1 <= 0 || &Global_2359296->f_459[iVar0]->f_13[iVar1] <= 0)
				{
				}
				else
				{
					bVar4 = true;
					iVar2 = 0;
					while (iVar2 <= (Global_2359296->f_459[iVar0]->f_13[iVar1]->f_1 - 1))
					{
						iVar8 = func_857(&(Global_2359296->f_459[iVar0]->f_13[iVar1]->f_2[iVar2]));
						if (iVar8 == 151)
						{
						}
						else
						{
							iVar6++;
						}
						iVar2++;
					}
					if (&Global_2359296->f_459[iVar0]->f_13[iVar1] < iVar6)
					{
						iVar6 = &Global_2359296->f_459[iVar0]->f_13[iVar1];
					}
					iVar5 = (iVar5 + iVar6);
				}
				iVar1++;
			}
			if (!bVar4)
			{
				if (iVar3 == -1)
				{
					iVar3 = func_861(Global_2359296->f_4180);
				}
				if (iVar3 > 0)
				{
					iVar5 = iVar3;
				}
			}
			if (iVar5 > 3)
			{
				iVar5 = 3;
			}
			if (iVar5 > iVar7)
			{
				iVar7 = iVar5;
				if (iVar7 >= 3)
				{
				}
				else
				{
					iVar0++;
				}
				return iVar7;
			}
		}
	}
}

bool func_410(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_411()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_36479 - 1))
	{
		if (Global_3145858->f_36480[iVar0]->f_1 == 0 || func_410(Global_3145858->f_36480[iVar0]->f_4))
		{
		}
		else if (is_bit_set(Local_5688.f_1284.f_2, iVar0))
		{
		}
		else
		{
			func_862(Global_3145858->f_36480[iVar0]->f_1);
		}
		iVar0++;
	}
}

void func_412()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_13424 - 1))
	{
		if (Global_3145858->f_13425[iVar0]->f_66 == 0 || func_410(Global_3145858->f_13425[iVar0]->f_55))
		{
		}
		else if (is_bit_set(Local_5688.f_1284, iVar0))
		{
		}
		else
		{
			func_863(iVar0);
		}
		iVar0++;
	}
}

void func_413()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if (Global_3145858->f_453[iVar0]->f_43 == 0 || func_410(Global_3145858->f_453[iVar0]->f_16))
		{
		}
		else
		{
			func_864(Global_3145858->f_453[iVar0]->f_43);
		}
		iVar0++;
	}
}

void func_414()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_1 == 0 || !func_865(iVar0))
		{
		}
		else
		{
			func_864(Global_2359296->f_459[iVar0]->f_1);
		}
		iVar0++;
	}
}

int func_415(var uParam0)
{
	return 1;
}

void func_416(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(Global_3145858->f_18727[iVar0]->f_8 == 0);
		Stack.Push(iVar0);
		Call_Loc(iParam0);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 207132841;
			}
			func_864(iVar1);
		}
		iVar0++;
	}
}

void func_417()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else
		{
			_request_propset(Global_3145858->f_32697[iVar0]->f_11);
		}
		iVar0++;
	}
}

bool func_418()
{
	iVar0 = 1;
	if (is_bit_set(Local_5688.f_24.f_5, 3))
	{
		if (!func_864(iVar14339))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_419()
{
	if (Global_3145858->f_37517 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_37517 - 1))
	{
		if (Global_3145858->f_37518[iVar0]->f_1 == 0)
		{
		}
		else
		{
			_request_scenario_type(Global_3145858->f_37518[iVar0]->f_1, 15, 0, 0);
		}
		iVar0++;
	}
}

int func_420(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_421(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_422(int iParam0)
{
	return (iParam0 / 32);
}

int func_423(int iParam0)
{
	return (iParam0 - (iParam0 / 32) * 32);
}

bool func_424()
{
	return &Global_3145858 == -933924539;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1763467984;
		case 1:
			return -311722996;
		case 2:
			return -663251240;
		case 3:
			return 299170259;
		case 4:
			return 1797448669;
		case 5:
			return -737967266;
		case 6:
			return -1132137047;
		case 7:
			return -808084283;
		case 8:
			return 1054743401;
		case 9:
			return -614717889;
		case 10:
			return -614717889;
		case 11:
			return 553641561;
		case 12:
			return 1015500476;
		case 13:
			return -1792457046;
		case 14:
			return -1110567953;
		case 15:
			return 1801427726;
		case 16:
			return -1179304729;
		case 17:
			return -1208920672;
		case 18:
			return 2049553553;
		case 19:
			return -517030668;
		case 20:
			return 1399046085;
		case 21:
			return -1581191600;
		case 22:
			return -840899846;
		case 23:
			return 1251710716;
		case 24:
			return -1851633148;
		case 25:
			return -1387569989;
		case 26:
			return -716088422;
		case 27:
			return -601057408;
		case 28:
			return -933688330;
		case 29:
			return -1058316279;
		case 30:
			return -1928147756;
		case 31:
			return -1625925065;
		case 32:
			return 1196791162;
		case 33:
			return -2026537663;
		case 34:
			return 1573191414;
		case 35:
			return 769276093;
		case 36:
			return 1645000405;
		case 37:
			return 2134225326;
		case 38:
			return -716072558;
		case 39:
			return 1530063285;
		case 40:
			return 1728764840;
		case 41:
			return -318321726;
		case 42:
			return -1197085363;
		case 43:
			return -776864312;
		case 44:
			return 2033486435;
		case 45:
			return -1085170826;
		case 46:
			return 679801275;
		case 47:
			return 1722821502;
		case 48:
			return 707056726;
		case 49:
			return -1199438720;
		case 50:
			return 409276899;
		case 51:
			return -662385272;
		case 52:
			return 1471375922;
		case 53:
			return 966194332;
		case 54:
			return -677165568;
		case 55:
			return 223181639;
		case 56:
			return -2077539676;
		case 57:
			return -1008746630;
		case 58:
			return 999882722;
		case 59:
			return 1150823022;
		case 60:
			return -512460250;
		case 61:
			return -68117845;
		case 62:
			return 195014139;
		case 63:
			return -711431897;
		case 64:
			return 1057455349;
		case 65:
			return 2076532901;
		case 66:
			return 1099283026;
		case 67:
			return 1453781476;
		default:
			break;
	}
	return 0;
}

void func_426(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_427()
{
	if ((Local_5688.f_1160 != 0f || Local_5688.f_1162 != 0f) || Local_5688.f_1161 != 0f)
	{
		return true;
	}
	return false;
}

void func_428(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_429(var uParam0, var uParam1)
{
	if (uParam0->f_3 == 0)
	{
		return;
	}
	if (_0xd4636c2edb0dea8a(uParam0->f_3))
	{
		*uParam1 = _0xfa50f79257745e74(*uParam0, 2f, 1, -1, 0);
	}
	else if (func_14())
	{
		create_model_hide(*uParam0, 0.1f, uParam0->f_3, true);
	}
	else
	{
		create_model_hide_excluding_script_objects(*uParam0, 0.1f, uParam0->f_3, true);
	}
	if (!is_bit_set(uParam0->f_4, 0))
	{
		fVar0 = 1.75f;
		iVar1 = _create_volume_box_with_custom_name(*uParam0, uParam0->f_5, uParam0->f_8 * Vector(fVar0, fVar0, fVar0), "Temp Cover Blocker");
		_0xeb2ed1dc3aec0654(iVar1, 0, 0, 1, 1);
		_delete_volume(iVar1);
	}
}

void func_430()
{
	Global_1915498->f_163 = 1;
}

int func_431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		case 9:
			return 10;
		case 10:
			return 11;
		case 11:
			return 12;
		case 12:
			return 13;
		case 13:
			return 14;
		case 14:
			return 15;
		case 15:
			return 16;
		case 16:
			return 17;
		case 17:
			return 18;
		case 18:
			return 20;
		case 19:
			return 21;
		case 20:
			return 22;
		case 21:
			return 23;
		case 22:
			return 24;
		case 23:
			return 25;
		case 24:
			return 26;
		case 25:
			return 27;
		case 26:
			return 28;
		case 27:
			return 29;
		case 28:
			return 30;
		case 29:
			return 31;
		case 30:
			return 32;
		case 31:
			return 33;
		case 32:
			return 34;
		case 33:
			return 35;
		case 34:
			return 36;
		case 35:
			return 37;
		case 36:
			return 38;
		case 37:
			return 39;
		case 38:
			return 49;
		case 39:
			return 50;
		case 40:
			return 51;
		case 41:
			return 52;
		case 42:
			return 53;
		default:
			break;
	}
	return 0;
}

void func_432(int iParam0, int iParam1)
{
	if (func_391((*Global_1915498)[iParam0], iParam1, 2))
	{
	}
}

bool func_433()
{
	if ((Global_3145858->f_61343[0]->f_2 != 0 || Global_3145858->f_61357[0]->f_2 != 0) || Global_3145858->f_61371[0]->f_2 != 0)
	{
		return true;
	}
	return false;
}

int func_434(int iParam0)
{
	if (Global_524288->f_40400 == 604251967)
	{
		if (iParam0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_435(int iParam0)
{
	func_866(&(Global_3145858->f_6), iParam0);
}

struct<105> func_436(int iParam0)
{
	Var0.f_3 = 16;
	switch (iParam0)
	{
		case 1:
			iVar105 = 0;
			while (iVar105 <= 15)
			{
				Var106 = { func_867(iParam0, iVar105) };
				Var0.f_3[iVar105] = Var106;
				Var0.f_3[iVar105]->f_3 = Var106.f_1;
				Var0.f_3[iVar105]->f_1 = 1f;
				iVar105++;
			}
			break;
	}
	return Var0;
}

bool func_437(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_438(int iParam0)
{
	return func_868(iParam0) == -427144552;
}

int func_439(int iParam0)
{
	if (_is_weapon_shotgun(iParam0))
	{
		return Global_1901947->f_827.f_12;
	}
	else if (_is_weapon_revolver(iParam0))
	{
		return Global_1901947->f_827.f_9;
	}
	else if (_is_weapon_pistol(iParam0))
	{
		return Global_1901947->f_827.f_8;
	}
	else if (_is_weapon_rifle(iParam0))
	{
		return Global_1901947->f_827.f_10;
	}
	else if (_is_weapon_repeater(iParam0))
	{
		return Global_1901947->f_827.f_11;
	}
	else if (func_869(iParam0))
	{
		return Global_1901947->f_827.f_13;
	}
	return 1;
}

void func_440(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (func_527(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_870((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_441()
{
	enable_script_brain_set(4);
}

void func_442()
{
	enable_script_brain_set(1);
}

bool func_443(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

bool func_444()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_447(2048))
	{
		return true;
	}
	if (func_446(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

void func_445(int iParam0)
{
	if (func_871(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_446(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_447(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_448(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_449()
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

struct<2> func_450()
{
	return Global_265377->f_124517.f_71.f_53;
}

int func_451(struct<2> Param0)
{
	if (!func_252(Param0))
	{
		return -1;
	}
	if (Param0 != 2)
	{
		return -1;
	}
	return func_872(Param0);
}

void func_452(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Var0 = { func_873(iParam0) };
	if (!func_454(Var0))
	{
		return;
	}
	func_175(0);
	func_86();
	func_455(Var0, 0, 2, 0, 0);
	Global_1900736->f_69 = 0;
	if (bParam1)
	{
		func_875(func_874(4, iParam0), 0);
	}
	func_876(iParam0);
	func_877(0);
}

bool func_453(struct<2> Param0)
{
	iVar0 = func_878(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_454(struct<2> Param0)
{
	iVar0 = func_878(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_455(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_252(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_454(Param0) && !func_453(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_27(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_878(Param0) == 3)
		{
			func_243(1, -1706799532);
		}
		else if (func_878(Param0) == 4)
		{
			func_243(0, -1706799532);
		}
	}
	if ((func_878(Param0) == 3 || func_878(Param0) == 1) || ((bParam5 && func_878(Param0) == 4) && _0x01f4d242765c6b24(func_27(Param0))))
	{
		if (iParam3 != -1)
		{
			func_879(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_879(Param0, 2, iParam4, 255, 0);
		}
	}
	func_880(Param0, 0);
	if (func_882(func_881(0), Param0))
	{
		func_71(1);
		func_883(0);
		func_884(0);
		func_885(1);
	}
	func_886(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_887(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

void func_456(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_252(Param0))
	{
		return;
	}
	if (func_453(Param0))
	{
		func_455(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_888(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_105((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_105((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

bool func_457(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

int func_458(int iParam0, int iParam1)
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

void func_459(var uParam0)
{
	func_889(uParam0);
}

void func_460()
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	_0xdd1232b332cbb9e7(12, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	_0xdd1232b332cbb9e7(11, 1, 0);
}

void func_461(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!bParam0 && !is_bit_set(iLocal_13, iVar0))
		{
		}
		else if (&Global_1048581)
		{
			if (iVar0 == 1)
			{
				clear_bit(&iLocal_13, iVar0);
			}
			else
			{
				func_712(iVar0, bParam0);
			}
			iVar0++;
		}
	}
}

void func_462()
{
	func_890();
	Global_1051119 = 0;
}

void func_463(bool bParam0)
{
	bVar0 = network_is_game_in_progress();
	Global_3230671 = 3;
	Global_3230671->f_1 = 0;
	if (bVar0)
	{
		Global_3230671->f_2 = get_network_time();
		Global_3230671->f_3 = get_network_time();
	}
	StringCopy(&(Global_3230671->f_4), "", 16);
	StringCopy(&(Global_3230671->f_6), "", 128);
	Global_3230671->f_22 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_464(var uParam0, var uParam1)
{
	if (!&Global_1048581)
	{
		if (!is_bit_set(uParam0->f_966, 9))
		{
			func_730(&(uParam0->f_973));
			func_459(uParam0);
			func_891(uParam1);
			func_892();
			_text_database_delete("UIC");
			set_bit(&(uParam0->f_966), 9);
		}
	}
	func_893(uParam0);
	func_894(uParam0);
	_display_hud_component(-2124237476);
}

void func_465(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_8))
	{
		_databinding_clear_binding_array(uParam0->f_8);
		_databinding_remove_data_entry(uParam0->f_7);
	}
}

bool func_466(int iParam0)
{
	return is_bit_set(Global_3145858->f_18727[iParam0]->f_19, 25);
}

void func_467(int iParam0, int iParam1)
{
	remove_pickup(iParam0);
}

void func_468(var uParam0)
{
	if (*uParam0 != -1)
	{
		_0x9cf1836c03fb67a2(uParam0, 0);
	}
}

bool func_469()
{
	return &Global_3145858 == 395262693;
}

void func_470(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (_0x635423d55ca84fc8(iParam0) - 1))
	{
		iVar0 = _0x8df5f6a19f99f0d5(iParam0, iVar1);
		set_model_as_no_longer_needed(iVar0);
		iVar1++;
	}
}

void func_471()
{
	func_895(1);
}

void func_472()
{
	func_895(0);
}

void func_473()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else
		{
			_release_propset(Global_3145858->f_32697[iVar0]->f_11);
		}
		iVar0++;
	}
}

void func_474(int iParam0)
{
	func_483(func_896(), iParam0);
}

bool func_475(int iParam0)
{
	return (Global_1102219->f_3520 && iParam0) != 0;
}

void func_476(int iParam0)
{
	if (func_475(iParam0))
	{
		Global_1102219->f_3520 = (Global_1102219->f_3520 - (Global_1102219->f_3520 && iParam0));
	}
}

void func_477(var uParam0, bool bParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		if (!network_has_control_of_network_id(*uParam0))
		{
			if (bParam1)
			{
				return;
			}
		}
		iVar0 = _0xd08066e00d26c448(*uParam0);
		_delete_propset(iVar0, true, true);
	}
}

void func_478(var uParam0)
{
	if (network_does_network_id_exist(*uParam0))
	{
		iVar0 = _0xd08066e00d26c448(*uParam0);
		_set_propset_as_no_longer_needed(iVar0);
	}
}

void func_479(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
		{
			_0x31010318ba9897ac(&(Global_1071686->f_21689.f_259), iParam0);
		}
	}
	else if (_0x72b2e00c9bac6789(&(Global_1071686->f_21689.f_259), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_21689.f_259), iParam0);
		func_481(iParam0);
	}
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_7 = iParam1;
}

void func_481(int iParam0)
{
	if (!func_897(iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21416.f_260), iParam0);
	}
}

char* func_482()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

void func_483(char* sParam0, int iParam1)
{
	if (decor_exist_on(player_ped_id(), sParam0))
	{
		iVar0 = decor_get_int(player_ped_id(), sParam0);
		if (is_bit_set(iVar0, iParam1))
		{
			clear_bit(&iVar0, iParam1);
			decor_set_int(player_ped_id(), sParam0, iVar0);
		}
	}
}

void func_484()
{
	func_898(1);
	func_899(1);
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return "RDRO_Countdown_Sounds";
		default:
			break;
	}
	return "";
}

void func_486(int iParam0, int iParam1)
{
	iVar0 = func_900(0);
	iVar1 = func_900(1);
	if (iVar0 > iParam0)
	{
		iParam0 = iVar0;
	}
	if (iVar1 > iParam1)
	{
		iParam1 = iVar1;
	}
	func_901(iParam0, iParam1);
}

void func_487(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_327(iParam0);
	}
	else
	{
		func_902(iParam0);
	}
}

bool func_488(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_489(var uParam0, int iParam1)
{
	func_903(uParam0, iParam1);
}

int func_490(int iParam0, bool bParam1)
{
	if (!func_904(iParam0))
	{
		return 0;
	}
	if (!func_905(iParam0))
	{
		return 0;
	}
	iVar0 = get_id_of_this_thread();
	if (!func_906(iParam0, iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		func_907(iParam0);
	}
	func_908(iParam0);
	return 1;
}

bool func_491(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

bool func_492()
{
	return !is_bit_set(Local_5688.f_24.f_2, 2);
}

int func_493(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_494(var uParam0, int iParam1)
{
	bVar3 = func_909("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0);
	Var4.f_9 = -1591664384;
	if (bVar3)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (*iParam1 == 20)
			{
			}
			else if (!func_910(&Var4, iVar0, iVar1, iVar2))
			{
			}
			else if (_is_weapon_throwable(Var4.f_4))
			{
				iVar18 = _get_ammo_type_for_weapon(Var4.f_4);
				if (iVar18 != 0)
				{
					if (func_911(iVar18, 0, 1, 0) > 0)
					{
						(*uParam0)[*iParam1] = Var4.f_4;
						*iParam1++;
					}
				}
			}
			else if (_is_weapon_melee(Var4.f_4))
			{
				iVar18 = _get_ammo_type_for_weapon(Var4.f_4);
				(*uParam0)[*iParam1] = Var4.f_4;
				*iParam1++;
			}
			iVar0++;
		}
		func_912(iVar1);
	}
}

bool func_495(int iParam0)
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

void func_496(var uParam0, bool bParam1)
{
	if (!func_913(uParam0))
	{
		return;
	}
	iVar0 = Global_1296859->f_8;
	func_914();
	func_915(0);
	if (uParam0->f_1)
	{
		func_916(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_917(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_918();
		}
	}
	if (uParam0->f_12)
	{
		func_919();
	}
	if (uParam0->f_8)
	{
		func_920(_0xdf66a37936d5f3d9(player_id()));
		func_922(func_921());
	}
	else if (uParam0->f_4)
	{
		func_923();
		func_920(_0xdf66a37936d5f3d9(player_id()));
		func_922(Global_1956200->f_1549);
	}
	if (uParam0->f_3)
	{
		func_924();
	}
	if (bParam1)
	{
		func_925(0, 0);
		func_926();
	}
	func_927(&(Global_1139381->f_4796));
}

void func_497(int iParam0)
{
	Global_1071686->f_22973.f_3 = (Global_1071686->f_22973.f_3 - (Global_1071686->f_22973.f_3 && iParam0));
}

void func_498(int iParam0)
{
	Global_1071686->f_22973.f_3 = (Global_1071686->f_22973.f_3 || iParam0);
}

void func_499(int iParam0, float fParam1, int iParam2)
{
	_0xd04ad186ce8bb129(*iParam2, iParam0, fParam1);
}

void func_500(int iParam0, bool bParam1)
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
	func_928(iParam0);
	func_929(iParam0);
	func_930(iParam0);
	func_931(&(Global_1108365->f_34[iVar0]->f_8), 2);
	func_144(iVar0);
	if (network_get_player_from_gamer_handle(Global_1108365->f_34.f_546[iVar0]) == iParam0 && !func_932(&(Global_1108365->f_34[iVar0]->f_8), 256))
	{
		if (func_933(Global_1108365->f_34.f_774) < 2 || Global_1108365->f_34.f_778 != 255)
		{
			func_934(&(Global_1108365->f_34.f_773), 64);
		}
		else
		{
			func_934(&(Global_1108365->f_34.f_773), 32);
			Global_1108365->f_34.f_778 = iParam0;
		}
		Global_1108365->f_34.f_774 = Global_1296859->f_21;
		func_264(_create_var_string(10, "PARLEY_TICKER_END", func_263(get_player_name(iParam0), func_935(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
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
	func_936(&Var15, &uVar14);
}

void func_501(float fParam0)
{
	if (Global_1106594->f_3 == fParam0)
	{
		return;
	}
	if (absf((Global_1106594->f_3 - fParam0)) > 10f)
	{
	}
	Global_1106594->f_3 = fParam0;
}

void func_502(int iParam0)
{
	if (Global_1106594->f_2 == iParam0)
	{
		return;
	}
	Global_1106594->f_2 = iParam0;
}

void func_503()
{
	func_937(0);
}

bool func_504()
{
	return (func_492() && !func_31(47));
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1267631983;
		case 1:
			return -295290036;
		case 2:
			return 1502571077;
		default:
			break;
	}
	return 0;
}

bool func_506(int iParam0)
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

int func_507(int iParam0)
{
	return iParam0;
}

void func_508(int iParam0)
{
	if (!func_938(iParam0))
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

char* func_509(var uParam0)
{
	return "RDRO_Gameplay_Chest_Open_Sounds";
}

bool func_510(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_511(int iParam0, int iParam1)
{
	if (func_844() == -1)
	{
		return;
	}
	func_939(&((*Global_1197355)[iParam1]->f_4), iParam0, 0, 30, 1, 7);
}

bool func_512()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_4;
}

bool func_513(int iParam0)
{
	return func_373(27, iParam0);
}

bool func_514(int iParam0)
{
	if (!func_510(iParam0))
	{
		return false;
	}
	return func_517(iParam0, 8);
}

void func_515(int iParam0, int iParam1)
{
	if (!func_510(iParam0))
	{
		return;
	}
	(*Global_1887339)[iParam0]->f_20 = iParam1;
}

void func_516(int iParam0)
{
	Global_1893587 = (Global_1893587 || iParam0);
}

bool func_517(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_8123[iParam0] && iParam1) != 0;
	}
	return (Global_1071686->f_19674[iParam0] && iParam1) != 0;
}

void func_518(int iParam0)
{
	Global_1893587 = (&Global_1893587 - (Global_1893587 && iParam0));
}

bool func_519(bool bParam0)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_517(iVar1, 1))
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
				if (func_844() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1887339)[iVar1]->f_10, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1887339)[iVar1]->f_10))
				{
					_0x7de4643157ad646c((*Global_1887339)[iVar1]->f_10);
				}
			}
			else if (func_517(iVar1, 2))
			{
				if (func_844() == -1)
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
				func_940(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_517(iVar1, 1))
			{
				func_940(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_520(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (_does_volume_exist(&(uParam0->f_10[iVar0])))
		{
			_delete_volume(&(uParam0->f_10[iVar0]));
		}
		iVar0++;
	}
}

void func_521(var uParam0, var uParam1)
{
	if (uParam0->f_3 == 0)
	{
		return;
	}
	if (_0xd4636c2edb0dea8a(uParam0->f_3))
	{
		_0x9cf1836c03fb67a2(uParam1, 0);
	}
	else
	{
		remove_model_hide(*uParam0, 0.1f, uParam0->f_3, 0);
	}
	if (!is_bit_set(uParam0->f_4, 0))
	{
		remove_all_cover_blocking_areas();
	}
}

void func_522(int iParam0)
{
	if (func_941(iParam0) && func_942())
	{
		remove_door_from_system(iParam0);
	}
}

void func_523(int iParam0)
{
	if (&Global_1049271 != iParam0)
	{
		Global_1049271 = iParam0;
	}
}

void func_524(int iParam0)
{
	func_870(&(Global_1071686->f_23887.f_4), iParam0);
}

int func_525(int iParam0)
{
	return func_943(iParam0) + 1;
}

int func_526(int iParam0)
{
	return shift_left(1, iParam0);
}

bool func_527(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_528(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 || !func_527(*uParam2, 8))
			{
				func_944(-1484676996, bParam1);
			}
			func_945("MS_FortM_MP", bParam1);
			break;
		case 2:
			func_944(1510350995, bParam1);
			break;
		case 4:
			func_944(-1591103463, bParam1);
			break;
		case 8:
			if (bParam1 || !func_527(*uParam2, 1))
			{
				func_944(-1484676996, bParam1);
			}
			func_944(2075683947, bParam1);
			func_944(1646485471, bParam1);
			func_946(2075683947, bParam1);
			func_945("MS_MP001_MP_REVENGE01", bParam1);
			break;
		case 16:
			func_944(-2131576785, bParam1);
			func_944(-2137016051, bParam1);
			func_944(1193151399, bParam1);
			func_944(-1353871107, bParam1);
			func_944(2026630914, bParam1);
			func_944(-225844616, bParam1);
			func_945("MS_mp001_sisika", bParam1);
			break;
		case 64:
			func_944(-200270658, bParam1);
			func_944(-127497991, bParam1);
			func_945("MS_MP001_GUNVOUTDECISION03", bParam1);
			func_946(-127497991, bParam1);
			break;
		case 256:
			func_944(331698185, bParam1);
			break;
		case 128:
			func_946(-393752274, bParam1);
			break;
		case 512:
			func_944(-770646513, bParam1);
			break;
		case 32:
			func_944(-1876837239, bParam1);
			break;
		case 1024:
			func_944(401370450, bParam1);
			func_944(1183263476, bParam1);
			func_944(573140494, bParam1);
			break;
		case 2048:
			func_944(-1407497494, bParam1);
			func_944(-1161238459, bParam1);
			func_944(-1583237641, bParam1);
			break;
		case 4096:
			func_944(-1744971427, bParam1);
			break;
		case 8192:
			func_944(793572138, bParam1);
			break;
		case 16384:
			func_944(1773228786, bParam1);
			func_945("nav_moonshine_moon3_extended_terrain", bParam1);
			break;
	}
	if (bParam1)
	{
		func_387(uParam2, iParam0);
	}
	else
	{
		func_870(uParam2, iParam0);
	}
}

void func_529(bool bParam0)
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
	func_947(0f);
	if (does_entity_exist(Global_34))
	{
		set_ped_config_flag(Global_34, 26, false);
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_948();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

struct<4> func_530()
{
	return Var0;
}

bool func_531()
{
	return !Global_1572887->f_9;
}

bool func_532()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_533(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_534(bool bParam0)
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

var func_535(int iParam0)
{
	Var1 = { func_555(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_536(int iParam0, int iParam1)
{
	Var1 = { func_829(iParam0, iParam1) };
	stat_id_get_float(&Var1, &uVar0);
	return uVar0;
}

bool func_537(int iParam0)
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

int func_538(int iParam0)
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

int func_539(int iParam0, var uParam1, int iParam2)
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

struct<2> func_540()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_541(int iParam0)
{
	return !func_672(iParam0);
}

int func_542(int iParam0, var uParam1)
{
	return func_949(&(Global_17411.f_55.f_2481), iParam0, uParam1);
}

int func_543()
{
	return Global_1102219->f_26.f_3341;
}

bool func_544(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	if (iVar0 == Global_1102219->f_26.f_3344)
	{
		return true;
	}
	if (iVar0 == get_player_ped(player_id()))
	{
		return true;
	}
	return false;
}

int func_545()
{
	if (Global_3145858->f_282 < 2 && !func_950())
	{
		return 1105014447;
	}
	if (func_951(14))
	{
		return 830499243;
	}
	return 1765299542;
}

int func_546()
{
	return -1031763995;
}

char* func_547(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

void func_548(int iParam0)
{
	if (Local_5688.f_3327 != iParam0)
	{
		Local_5688.f_3327 = iParam0;
	}
}

void func_549(int iParam0)
{
	if (Local_1685[iLocal_71]->f_62 != iParam0)
	{
		Local_1685[iLocal_71]->f_62 = iParam0;
	}
}

void func_550(int iParam0)
{
	if (func_14() && iParam0 == -1)
	{
		if (Global_2892896->f_12 > -1 && Global_2892896->f_12 < 18)
		{
			Local_1685[iLocal_71]->f_4 = Global_2892896->f_12;
			return;
		}
	}
	if (iParam0 == -1)
	{
		iVar0 = func_952(Local_1685[iLocal_71]->f_3);
	}
	else
	{
		iVar0 = iParam0;
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > Global_3145858->f_49703)
	{
		iVar0 = 0;
	}
	Local_1685[iLocal_71]->f_4 = iVar0;
}

void func_551(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = Local_1685[iLocal_71]->f_4;
	func_191(&iLocal_79);
	if (bParam2)
	{
		func_953(iLocal_81, &Local_15995);
	}
	Var1 = { func_954(1, bParam2) };
	func_955(&Var1, &uParam0, &(Local_12907.f_973), !bParam2);
	if (!bParam2)
	{
		func_956(iVar0);
	}
	if (is_bit_set(Local_5688.f_24.f_3, 24))
	{
		func_957(to_float(Global_2359296->f_6574), to_float(Global_2359296->f_6575), 0);
		func_637(131072);
	}
	func_958(iVar0);
	if (is_bit_set(Local_5688.f_24.f_3, 8))
	{
		func_959();
	}
	func_960(0);
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 7))
	{
		func_153(0);
	}
	else
	{
		func_153(1);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 13))
	{
		func_637(16);
		func_961(Global_2359296->f_6573);
	}
	else if (!is_bit_set(Local_5688.f_24.f_4, 2))
	{
		func_154(16);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_6, 1))
	{
		func_185(1);
	}
	else
	{
		func_185(0);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 25))
	{
		func_156(1);
	}
	else
	{
		func_156(0);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_6, 5))
	{
		func_158(1, 1);
	}
	else
	{
		func_158(0, 1);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 16))
	{
		func_962(1);
	}
	else
	{
		func_962(0);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 9))
	{
		func_637(1);
	}
	else
	{
		func_154(1);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_5, 21))
	{
		func_637(2);
	}
	else
	{
		func_154(2);
	}
	if (is_bit_set(Global_3145858->f_49704[iVar0]->f_6, 12))
	{
		set_player_melee_weapon_damage_modifier(iLocal_79, 100f);
	}
	else
	{
		set_player_melee_weapon_damage_modifier(iLocal_79, 1f);
	}
	set_ped_config_flag(iLocal_81, 263, is_bit_set(Global_3145858->f_49704[iVar0]->f_6, 13));
	Local_1685[iLocal_71]->f_33 = 0;
}

void func_552(int iParam0, int iParam1, bool bParam2)
{
	func_963(iParam0, 0, 0);
	if (func_941(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_553(int iParam0, float fParam1, int iParam2)
{
	func_963(iParam0, 0, 0);
	if (func_941(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam1, iParam2);
	}
}

char* func_554()
{
	switch (Local_5688.f_24)
	{
		case 1816768801:
			return "DMC_TYPE_STD";
		case -533426613:
			return "DMC_TYPE_TEAM";
		case -1918441640:
			return "DMC_TYPE_LTS";
		case 1153715636:
			return "DMC_TYPE_LMS";
		case 1788958412:
			return "DMC_TYPE_PITP";
		case -457802746:
			return "DMC_TYPE_KL";
		case 1175500245:
			return "DMC_TYPE_TKL";
		case 424482930:
			return "DMC_TYPE_MM";
		case 1272390114:
			return "DMC_TYPE_WOC";
		case -1437925683:
			return "DMC_TYPE_TWOC";
		case -1581094459:
			return "DMC_TYPE_EXC";
		case 1842544025:
			return "DMC_TYPE_TLG";
		case -632356431:
			return "DMC_TYPE_TTLG";
		case -559809431:
			return "DMC_TYPE_HT";
		case -548018579:
			return "DMC_TYPE_EC";
		case 10577687:
			return "DMC_TYPE_MC";
		case -222655798:
			return "DMC_TYPE_GR";
		case -725256130:
			return "DMC_TYPE_TGR";
		default:
			break;
	}
	return "DMC_TYPE_STD";
}

struct<2> func_555(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_556(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_557(int iParam0, int iParam1)
{
	Local_1685[iParam0]->f_5 = (Local_1685[iParam0]->f_5 + iParam1);
	if (func_680())
	{
		Local_1685[iParam0]->f_13 = (Local_1685[iParam0]->f_13 + iParam1);
	}
}

int func_558(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

bool func_559(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	return is_bit_set(uParam0[iVar0], (iParam1 - iVar0 * 32));
}

void func_560(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	set_bit((*uParam0)[iVar0], (iParam1 - iVar0 * 32));
}

void func_561(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_6761 - 1))
	{
		if (func_559(&(Global_2359296->f_6762[iParam0]->f_4), iVar0))
		{
			func_560(&(Local_5688.f_1268), iVar0);
		}
		iVar0++;
	}
}

int func_562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_3145858->f_52165[iVar0]->f_3 != iParam0)
		{
		}
		else
		{
			switch (Global_3145858->f_52165[iVar0]->f_5)
			{
				case -836875806:
					if (iParam1 != iParam2)
					{
					}
					else
					{
						Jump @193; //curOff = 105
						if (iParam1 == iParam2)
						{
						}
						else
						{
							Jump @193; //curOff = 118
							if (iParam2 != iParam9)
							{
							}
							else
							{
								Jump @193; //curOff = 131
								if (iParam3 > -1 && iParam4 != iParam3)
								{
								}
								else
								{
									Jump @193; //curOff = 154
									if (iParam3 > -1 && iParam4 == iParam3)
									{
									}
									else
									{
										Jump @193; //curOff = 177
										if (iParam6 != iParam4)
										{
										}
										else if (iParam3 > -1)
										{
											if (func_964(iVar0) && !is_bit_set(Global_3145858->f_52165[iVar0]->f_7, (8 + iParam3)))
											{
											}
											else if (func_965(iVar0) && !is_bit_set(Global_3145858->f_52165[iVar0]->f_7, (0 + iParam4)))
											{
											}
											else if ((iParam4 > -1 && iParam8 > -1) && is_bit_set(&(Global_3145858->f_52165[iVar0]->f_9[iParam4]), iParam8))
											{
											}
											else if ((iParam5 > -1 && Global_3145858->f_52165[iVar0]->f_8 > -1) && iParam5 != Global_3145858->f_52165[iVar0]->f_8)
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 0) && bParam7)
											{
											}
											else if ((is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 1) && !func_541(255)) && !func_91(255))
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 2) && bParam10)
											{
											}
											else if (is_bit_set(Global_3145858->f_52165[iVar0]->f_6, 3) && !bParam10)
											{
											}
											else
											{
												return iVar0;
											}
											iVar0++;
											return -1;
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
}

int func_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	Var0.f_1 = 8;
	Var0.f_10 = 2;
	Var0.f_24 = 2;
	Var0.f_30 = -666;
	Var0.f_31 = -666;
	Var0.f_10[0] = iParam2;
	Var0.f_29 = iParam4;
	Var0.f_28 = iParam3;
	Var0 = iParam1;
	Var0.f_21 = iParam5;
	return func_966(iParam0, &Var0);
}

int func_564(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = cParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x8d1249bd28791878(&Var0, &vVar13, bParam6);
	return uVar16;
}

char* func_565()
{
	sVar0 = "DMC_SDNDTH_K";
	if (func_586())
	{
		sVar0 = "DMC_SDNDTH_LS";
	}
	return sVar0;
}

int func_566(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _0xa6f4216ab10eb08e(&Var0, &vVar13, bParam6, bParam7);
	return uVar20;
}

bool func_567()
{
	if (func_260())
	{
		return func_370(Local_1685[iLocal_71]->f_3);
	}
	else if (Local_5688.f_1130 == get_unique_int_for_player(iLocal_79))
	{
		return true;
	}
	return false;
}

int func_568(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar20 = _0x860ddfe97cc94df0(&Var0, &Var13, bParam5);
	return uVar20;
}

struct<16> func_569()
{
	if (func_260())
	{
		if (Local_5688.f_1132 == Local_1685[iLocal_71]->f_3)
		{
			bVar16 = true;
		}
	}
	else if (Local_5688.f_1130 == &Local_92[iLocal_71])
	{
		bVar16 = true;
	}
	if (is_bit_set(Global_3145858->f_54227, 0))
	{
		if (bVar16)
		{
			if (Global_3145858->f_54223 > -1 && !is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_54223]))
			{
				Var0 = { *Global_3145858->f_52528[Global_3145858->f_54223] };
				return Var0;
			}
		}
		else if (Global_3145858->f_54225 > -1 && !is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_54225]))
		{
			StringCopy(&Var0, func_967(*Global_3145858->f_52528[Global_3145858->f_54225]), 128);
			return *Global_3145858->f_52528[Global_3145858->f_54225];
		}
	}
	if (bVar16)
	{
		StringCopy(&Var0, _create_var_string(2, "UI_BOUT_WON"), 128);
	}
	else
	{
		StringCopy(&Var0, _create_var_string(2, "UI_BOUT_LOS"), 128);
	}
	return Var0;
}

int func_570(int iParam0)
{
	iVar0 = network_get_participant_index(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return -2045797884;
	}
	iVar1 = iVar0;
	return func_576(Local_1685[iVar1]->f_3);
}

struct<16> func_571(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 > -1)
	{
		StringCopy(&cVar16, func_577((*Global_3145728)[iParam1], func_968(iParam1)), 128);
	}
	else if (iParam2 != 255)
	{
		StringCopy(&cVar16, func_263(get_player_name(iParam2), iParam3), 128);
	}
	else
	{
		return Var0;
	}
	switch (iParam0)
	{
		case -271313304:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_TMK", &cVar16), 128);
			break;
		case 194139726:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_TOML", &cVar16), 128);
			break;
		case -1882807564:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_TMHL", &cVar16), 128);
			break;
		case -1901798505:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_TDL", &cVar16), 128);
			break;
		case 1771857720:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_MHS", &cVar16), 128);
			break;
		case -1891006284:
			StringCopy(&Var0, _create_var_string(10, "UGC_UI_FTS", &cVar16), 128);
			break;
		default:
			StringCopy(&Var0, "not yet implemented", 128);
			break;
	}
	return Var0;
}

char* func_572(bool bParam0)
{
	if (bParam0)
	{
		return "UGC_UI_MATW";
	}
	return "UGC_UI_MATL";
}

int func_573(char* sParam0, char* sParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = cParam2;
	uVar20 = _0x02bcc0fe9eba3529(&Var0, &Var13, bParam7, bParam8, bParam9);
	return uVar20;
}

void func_574(int iParam0)
{
	if (func_559(&(Local_5688.f_1747), iParam0))
	{
		func_358(Local_14476[iParam0]);
		return;
	}
	if (bLocal_75)
	{
		func_560(&(Local_5688.f_1747), iParam0);
		func_358(Local_14476[iParam0]);
		return;
	}
	if (func_345(Local_14476[iParam0]))
	{
		if (func_325(Local_14476[iParam0], 0, 0) < 3000)
		{
			return;
		}
	}
	func_969(iParam0);
	func_324(Local_14476[iParam0], 0, 0);
}

void func_575(int iParam0, int iParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return;
	}
	iVar2 = iParam0;
	iVar0 = network_get_participant_index(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (func_38(iVar1))
	{
		return;
	}
	iVar4 = Local_1685[iLocal_71]->f_3;
	iVar5 = Local_1685[iLocal_71]->f_4;
	iVar6 = Local_1685[iVar1]->f_3;
	func_144(iVar2);
	bVar7 = !func_613();
	if (iVar1 == iLocal_71)
	{
		if (Global_3145858->f_282 < 2)
		{
			func_970(iVar2, 1105014447);
		}
		else
		{
			func_970(iVar2, func_576(iVar6));
		}
	}
	else if (func_614(iVar6, Local_1685[iLocal_70]->f_3))
	{
		func_971(iVar2, -275959642);
		func_970(iVar2, 830499243);
	}
	else if (bVar7)
	{
		if (is_bit_set(Local_5688.f_24.f_3, 21))
		{
			func_971(iVar2, -357610772);
		}
		else
		{
			func_971(iVar2, 2123265830);
		}
		if (!is_bit_set(Local_5688.f_24.f_3, 8))
		{
			func_972(iVar2, -188681898);
		}
	}
	if (!is_bit_set(iLocal_58, 11))
	{
		if (is_bit_set(Local_5688.f_24.f_3, 26))
		{
			func_973(iVar2);
		}
		else if (is_bit_set(Local_5688.f_24.f_3, 27))
		{
			if (iVar6 != iVar4)
			{
				func_973(iVar2);
			}
		}
		else if (is_bit_set(Local_5688.f_24.f_3, 24) && !func_614(iVar6, Local_1685[iLocal_70]->f_3))
		{
			func_973(iVar2);
		}
		else
		{
			func_141(iVar2);
		}
	}
	else
	{
		func_141(iVar2);
	}
	if (func_260())
	{
		if (func_31(11))
		{
			func_974(iVar2, func_753(iVar6));
			func_970(iVar2, func_576(iVar6));
		}
		else if (!func_614(iVar6, Local_1685[iLocal_70]->f_3))
		{
			func_974(iVar2, -612974303);
			func_970(iVar2, -5208416);
		}
	}
	else if (Global_2359296->f_58 != 0)
	{
		func_974(iVar2, Global_2359296->f_58);
	}
	if (!bVar7)
	{
		return;
	}
	if (is_bit_set(Local_5688.f_24.f_5, 1))
	{
		func_975(iVar2);
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (!func_976())
	{
		if (Global_3145858->f_49704[iParam1]->f_67 != 0)
		{
			func_971(iVar2, Global_3145858->f_49704[iParam1]->f_67);
		}
		if (Global_3145858->f_49704[iParam1]->f_68 != 0)
		{
			func_977(iVar2, Global_3145858->f_49704[iParam1]->f_68);
		}
		else
		{
			func_143(iVar2);
		}
	}
	if (iVar4 == 9999 || iVar4 == -1)
	{
		return;
	}
	if (iVar5 != -1)
	{
		if (is_bit_set(Global_3145858->f_49704[iVar5]->f_5, 24))
		{
			if (iVar6 != iVar4)
			{
				func_973(iVar1);
			}
		}
	}
	if (iVar3 >= 32)
	{
		return;
	}
	if (Global_3145858->f_49704[iParam1]->f_69 == 0)
	{
		return;
	}
	if (is_bit_set(Global_3145858->f_49704[iParam1]->f_6, 2) || !func_614(iVar4, iVar6))
	{
		func_972(iVar2, Global_3145858->f_49704[iParam1]->f_69);
	}
}

int func_576(int iParam0)
{
	if (iParam0 == -1 && func_260())
	{
		return 1105014447;
	}
	bVar0 = func_614(iParam0, Local_1685[iLocal_70]->f_3);
	bVar1 = func_31(11);
	return func_262(iParam0, bVar1, bVar0);
}

char* func_577(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_547(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_578()
{
	return Global_2359296->f_174;
}

void func_579(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_ped_a_player(iParam0))
	{
		*iParam2 = network_get_player_index_from_ped(iParam0);
		if (network_is_player_a_participant(*iParam2))
		{
			*uParam3 = network_get_participant_index(*iParam2);
			if (network_is_participant_active(*uParam3))
			{
				*iParam4 = *uParam3;
				*iParam5 = get_player_team(*iParam2);
			}
		}
	}
	else if (func_14())
	{
		iParam1 = 0;
		while (iParam1 <= 31)
		{
			if (&Local_5688.f_568[iParam1] != 6)
			{
				if (&Local_5688.f_52[iParam1] == network_get_network_id_from_entity(iParam0))
				{
					*iParam4 = iParam1;
					*iParam5 = Local_5688.f_568[iParam1]->f_1;
					*bParam6 = 1;
				}
			}
			iParam1++;
		}
	}
}

bool func_580(int iParam0)
{
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, true);
		if (is_vehicle_driveable(iVar0, false, false))
		{
			iVar1 = get_entity_model(iVar0);
			if (func_978(iVar1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_581(int iParam0)
{
	if (iParam0 == 749266870)
	{
		return 1609145491;
	}
	else if (iParam0 == 518773733)
	{
		return -628784915;
	}
	else if (iParam0 == 742064790)
	{
		return -1193642378;
	}
	return 0;
}

bool func_582(int iParam0)
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

void func_583(int iParam0, int iParam1)
{
	if ((iParam0 == iParam1 || iParam0 == 255) || iParam1 == 255)
	{
		return;
	}
	iVar0 = player_id();
	if (iParam0 == iVar0)
	{
		(*Global_1051147)[iParam1] = Global_1051147[iParam1] + 1;
	}
	else if (iParam1 == iVar0)
	{
		(*Global_1051147)[iParam0]->f_1++;
	}
}

bool func_584(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_31(13) && func_979(iParam0, iParam2, iParam3, iParam4))
	{
		if (func_980(iLocal_80, iParam1) < 1000f)
		{
			return true;
		}
	}
	return false;
}

void func_585(int iParam0)
{
	if (is_bit_set(iLocal_58, 9))
	{
		return;
	}
	_0xe3639db78b3b5400(iParam0);
	set_time_scale(0.25f);
	set_bit(&iLocal_58, 9);
}

bool func_586()
{
	return Local_5688.f_24.f_1 == 2;
}

void func_587(int iParam0)
{
	Local_5688.f_568[iParam0]->f_6++;
}

void func_588(int iParam0, int iParam1)
{
	Local_5688.f_568[iParam0]->f_3 = (Local_5688.f_568[iParam0]->f_3 - iParam1);
	if (Local_5688.f_568[iParam0]->f_3 < 0)
	{
		Local_5688.f_568[iParam0]->f_3 = 0;
	}
}

void func_589(int iParam0, int iParam1)
{
	if (func_168())
	{
		if (!func_594(iParam0))
		{
			return;
		}
	}
	func_557(iParam0, -iParam1);
	if (Local_1685[iParam0]->f_5 < 0)
	{
		Local_1685[iParam0]->f_5 = 0;
	}
	if (func_680() && Local_1685[iParam0]->f_13 < 0)
	{
		Local_1685[iParam0]->f_13 = 0;
	}
}

void func_590(int iParam0, bool bParam1)
{
	if (((!bParam1 && func_168()) && !func_594(iParam0)) && func_981() != 2)
	{
		return;
	}
	Local_1685[iParam0]->f_7++;
}

void func_591()
{
	Local_1685[iLocal_71]->f_11++;
}

int func_592(int iParam0)
{
	return Local_1685[iParam0]->f_1;
}

bool func_593()
{
	if (func_260())
	{
		return func_982();
	}
	return func_983();
}

bool func_594(int iParam0)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	if (func_168())
	{
		iVar0 = get_time_difference(Local_5688.f_1144, get_network_time_accurate());
		if (iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

void func_595(int iParam0, int iParam1)
{
	Local_5688.f_1133 = Local_92[iParam0]->f_1;
	func_860(iParam1);
}

void func_596(int iParam0)
{
	Local_5688.f_1121 = Local_92[iParam0]->f_2;
	Local_5688.f_1122 = { Local_92[iParam0]->f_10 };
}

void func_597(int iParam0)
{
	Local_5688.f_1131 = &Local_92[iParam0];
}

void func_598(int iParam0)
{
	Local_1685[iParam0]->f_9++;
}

void func_599(vector3 vParam0, var uParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!network_does_network_id_exist(&(Local_5688.f_407[iVar0])))
		{
			if (func_985(Local_5688.f_407[iVar0], iVar14334, vParam0, 1, 0))
			{
				Local_5688.f_407[iVar0]->f_2 = uParam4;
				Local_5688.f_407[iVar0]->f_1 = get_network_time_accurate();
				Local_5688.f_407[iVar0]->f_4 = uParam3;
				iVar1 = net_to_obj(&(Local_5688.f_407[iVar0]));
				_0x9587913b9e772d29(iVar1, 0);
				freeze_entity_position(iVar1, true);
				set_entity_collision(iVar1, false, false);
				set_bit(&iLocal_57, 16);
				return;
			}
		}
		iVar0++;
	}
}

void func_600(int iParam0)
{
	Local_5688.f_568[iParam0]->f_3++;
}

void func_601(int iParam0)
{
	Local_5688.f_568[iParam0]->f_5++;
}

void func_602(int iParam0)
{
	if (bLocal_75)
	{
		if (!is_bit_set(Local_5688.f_41, 8))
		{
			Var0 = 157;
			Var0.f_1 = iLocal_79;
			Var0.f_4 = iParam0;
			uVar5 = func_986(4, 8);
			trigger_script_event(1, &Var0, 5, 54, &uVar5);
			set_bit(&(Local_5688.f_41), 8);
		}
	}
}

float func_603(var uParam0)
{
	fVar0 = 1f;
	iVar1 = uParam0->f_5;
	fVar0 = func_987(iVar1);
	if (uParam0->f_18)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_13);
	}
	else if (uParam0->f_19)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_15);
	}
	if (is_ped_on_mount(_0x3ffb15534067dcd4(uParam0->f_1)))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_14);
	}
	else if (is_ped_in_any_vehicle(_0x3ffb15534067dcd4(uParam0->f_1), false))
	{
		if (!func_988(iVar1))
		{
			fVar0 = (fVar0 * Global_2359296->f_6699.f_16);
		}
	}
	if (uParam0->f_11)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_17);
	}
	if (uParam0->f_22)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_18);
	}
	if (uParam0->f_23)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_19);
	}
	return fVar0;
}

char* func_604(var uParam0, char* sParam1)
{
	sVar0 = "";
	iVar1 = uParam0->f_5;
	if (func_988(iVar1))
	{
		sVar0 = "WOC_TUR_KILL";
	}
	else if (func_989(iVar1))
	{
		sVar0 = "WOC_CAN_KILL";
	}
	else if (iVar1 == -1569615261)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	else if (_is_weapon_melee(iVar1))
	{
		sVar0 = "WOC_MELW_KILL";
	}
	else if (func_990(iVar1))
	{
		sVar0 = "WOC_EX_KILL";
	}
	else if (_is_weapon_throwable(iVar1))
	{
		sVar0 = "WOC_THR_KILL";
	}
	else if (_is_weapon_bow(iVar1))
	{
		sVar0 = "WOC_BOW_KILL";
	}
	else if (_is_weapon_pistol(iVar1))
	{
		sVar0 = "WOC_PIS_KILL";
	}
	else if (_is_weapon_revolver(iVar1))
	{
		sVar0 = "WOC_REV_KILL";
	}
	else if (_is_weapon_sniper(iVar1))
	{
		sVar0 = "WOC_SNI_KILL";
	}
	else if (_is_weapon_repeater(iVar1))
	{
		sVar0 = "WOC_REP_KILL";
	}
	else if (_is_weapon_rifle(iVar1))
	{
		sVar0 = "WOC_RIF_KILL";
	}
	else if (_is_weapon_shotgun(iVar1))
	{
		sVar0 = "WOC_SHO_KILL";
	}
	else if (iVar1 == 1885857703)
	{
		sVar0 = "WOC_MOL_KILL";
	}
	if (uParam0->f_18)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	else if (uParam0->f_19)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	if (is_ped_on_mount(_0x3ffb15534067dcd4(uParam0->f_1)))
	{
		sVar0 = "WOC_MEL_KILL";
	}
	else if (is_ped_in_any_vehicle(_0x3ffb15534067dcd4(uParam0->f_1), false))
	{
		if (!func_580(_0x3ffb15534067dcd4(uParam0->f_1)))
		{
			sVar0 = "WOC_MEL_KILL";
		}
	}
	if (uParam0->f_11)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	if (uParam0->f_22)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	if (uParam0->f_23)
	{
		sVar0 = "WOC_MEL_KILL";
	}
	if (!is_string_null_or_empty(sVar0))
	{
		sVar0 = _create_var_string(2, sVar0, sParam1);
	}
	return sVar0;
}

var func_605(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _0x893128cdb4b81fbb(&Var0, &vVar13, iParam6);
	return uVar16;
}

void func_606(int iParam0, int iParam1, int iParam2)
{
	if (func_168())
	{
		if (func_592(iLocal_70) != 6)
		{
			return;
		}
		if (!func_594(iParam0))
		{
			return;
		}
	}
	iVar0 = 1;
	if (!func_168())
	{
		switch (Global_2359296->f_14977)
		{
			case 1:
				func_991(iParam0, iParam1, &iVar0);
				bVar1 = true;
				break;
			case 2:
				func_992(iParam0, iParam1, &iVar0);
				bVar1 = true;
				break;
			case 3:
				func_993(iParam0, iParam1, &iVar0, iParam2);
				bVar1 = true;
				break;
		}
	}
	if (!bVar1)
	{
		if (is_bit_set(Local_5688.f_24.f_5, 4))
		{
			if (func_994(iParam2))
			{
				func_557(iParam0, iParam2);
				iVar0 = iParam2;
			}
			else
			{
				func_557(iParam0, 1);
			}
		}
		else
		{
			func_557(iParam0, 1);
		}
	}
	if (is_bit_set(Local_5688.f_24.f_2, 31))
	{
		_0xdd1232b332cbb9e7(10, 1, 0);
		sVar2 = func_995(iVar0);
		func_605(sVar2, 0, -2, 0, 0, 0, 1);
	}
}

void func_607()
{
	if (func_345(&uLocal_14266))
	{
		if (func_325(&uLocal_14266, 0, 0) < 2000)
		{
			func_556(func_555(-1683633663), 1);
			func_358(&uLocal_14266);
		}
		else
		{
			func_324(&uLocal_14266, 0, 0);
		}
	}
	else
	{
		func_324(&uLocal_14266, 0, 0);
	}
}

void func_608(int iParam0)
{
	if (func_168())
	{
		if (!func_594(iParam0))
		{
			return;
		}
	}
	Local_1685[iParam0]->f_6++;
	Local_1685[iParam0]->f_37 = get_network_time_accurate();
}

void func_609()
{
	Local_1685[iLocal_71]->f_11 = 0;
}

bool func_610(int iParam0, int iParam1)
{
	iVar1 = network_get_player_index_from_ped(iParam1);
	if (iParam0 == iVar1)
	{
		return false;
	}
	if (has_entity_been_damaged_by_entity(iParam1, iParam1, 1, 1))
	{
		return false;
	}
	if (_0x236321f1178a5446(iParam0, iParam1, &iVar0))
	{
		if (IntToFloat(iVar0) > 0.5f)
		{
			return true;
		}
	}
	return false;
}

void func_611(int iParam0, bool bParam1)
{
	Local_1685[iParam0]->f_8++;
	if (!bParam1)
	{
		Local_1685[iParam0]->f_10++;
		if (Local_1685[iParam0]->f_10 >= 5)
		{
			Local_1685[iParam0]->f_10 = 0;
			func_557(iParam0, 1);
		}
	}
}

void func_612(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 100;
	Var0.f_14 = iLocal_79;
	Var0.f_15 = iParam0;
	uVar19 = func_986(4, 8);
	func_996(Var0, uVar19, 0, 0);
}

bool func_613()
{
	if (((func_359() && !func_976()) && !is_bit_set(Local_5688.f_24.f_3, 9)) && !is_bit_set(Local_5688.f_24.f_5, 5))
	{
		return true;
	}
	return false;
}

bool func_614(int iParam0, int iParam1)
{
	if (!func_260())
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 8)
	{
		return false;
	}
	if (iParam0 == iParam1)
	{
		return true;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	iVar2 = get_relationship_between_groups(iVar0, iVar1);
	if (iVar2 == 2 || iVar2 == 1)
	{
		return true;
	}
	return false;
}

void func_615(vector3 vParam0)
{
	_blip_add_for_coord(-186344087, vParam0);
}

void func_616()
{
	if (!func_475(128))
	{
		func_997(128);
	}
}

bool func_617()
{
	if (func_30(17))
	{
		return true;
	}
	return false;
}

void func_618(int iParam0, int iParam1)
{
	if (iParam1 < 0 || Local_1685[iParam1]->f_4 < 0)
	{
		return;
	}
	if (!_0xf0460c7bf80011ea(1))
	{
		return;
	}
	iVar0 = Global_3145858->f_49704[Local_1685[iParam1]->f_4]->f_99;
	iVar1 = get_weapon_type_from_pickup_type(iVar0);
	iVar2 = get_ped_ammo_by_type(iParam0, _get_ammo_type_for_weapon(iVar1));
	iVar3 = 262144;
	vVar4 = { get_safe_pickup_coords(get_entity_coords(iParam0, true, false), 0.1f, 2f, 0) };
	if (network_does_network_id_exist(&(Local_5688.f_3285[iVar15721])))
	{
		func_129(Local_5688.f_3285[iVar15721], 0);
	}
	iVar7 = create_ambient_pickup(iVar0, vVar4, iVar3, iVar2, 0, true, true, 0, 0f);
	Local_5688.f_3285[iVar15721] = obj_to_net(iVar7);
	iLocal_15725 = iVar15721 + 1;
	if (iVar15721 >= 5)
	{
		iLocal_15725 = 0;
	}
}

void func_619(vector3 vParam0)
{
	iVar0 = func_998();
	if (Local_15728[iVar0]->f_7 != 4)
	{
		func_135(Local_15728[iVar0]);
	}
	Local_15728[iVar0]->f_1 = { vParam0 };
	func_480(Local_15728[iVar0], 0);
}

void func_620(int iParam0, int iParam1, float fParam2)
{
	Local_1685[iLocal_71]->f_14 = (Local_1685[iLocal_71]->f_14 + fParam2);
	if (iParam0 == func_137())
	{
		return;
	}
	func_556(func_555(1273489824), floor(fParam2));
	if (is_bit_set(Local_5688.f_24.f_5, 5))
	{
		if (iParam1 != -1)
		{
			if (&Local_5688.f_2663[iParam1] != 255)
			{
				if (network_get_player_index_from_ped(iParam0) == &Local_5688.f_2663[iParam1])
				{
					Local_1685[iLocal_71]->f_30 = (Local_1685[iLocal_71]->f_30 + fParam2);
					if (_0xb655db7582aec805(iParam0) && !is_ped_injured(iParam0))
					{
						Local_1685[iLocal_71]->f_28++;
					}
				}
			}
		}
	}
	if ((does_entity_exist(iParam0) && _0xb655db7582aec805(iParam0)) && !is_ped_injured(iParam0))
	{
		Local_1685[iLocal_71]->f_27++;
	}
}

void func_621(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_437(iParam0, 0))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = func_868(iParam0);
	iVar4 = 805880880;
	iVar5 = 0;
	Var1.f_1 = func_999(iParam0);
	if (iVar0 == 307971639)
	{
		iVar5 = 622449822;
		Var1.f_1 = "ammo_types";
		iVar4 = 622449822;
	}
	if (iVar0 == -1013984273 || iVar0 == 658570475)
	{
		Var1 = "ITEMTYPE_UPGRADES";
		Var1.f_1 = "itemtype_textures";
	}
	else if (!func_1000(iParam0, &Var1, iVar4, iVar5, 0, 0))
	{
		Var1 = "_PLACEHOLDER";
		Var1.f_1 = "inventory_items";
	}
	iVar6 = _get_ammo_type_for_weapon(iParam0);
	if (iParam2 != -1)
	{
		iVar6 = iParam2;
	}
	if (func_1001(iParam0))
	{
		StringCopy(&cVar7, func_1002(iParam1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		func_1004(_create_var_string(10, &cVar7, _create_var_string(0, func_1003(iParam0)), iParam1), Var1.f_1, get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		if (!bParam3)
		{
			func_1004(_create_var_string(10, "ITEM_GET_PUMP", _create_var_string(0, func_1003(iParam0))), Var1.f_1, get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
		}
		if (iVar6 != 0)
		{
			iVar5 = 622449822;
			iVar4 = 622449822;
			if (!func_1000(iVar6, &Var1, iVar4, iVar5, 0, 0))
			{
				Var1 = "_PLACEHOLDER";
				Var1.f_1 = "inventory_items";
			}
			StringCopy(&cVar7, func_1002(iParam1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
			func_1004(_create_var_string(10, &cVar7, _create_var_string(0, func_1003(iVar6)), iParam1), "ammo_types", get_hash_key(Var1), 0, 109029619, 0, 0, 0, 1);
		}
	}
}

int func_622(int iParam0)
{
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_in(iLocal_80, false);
		iVar1 = get_entity_model(iVar0);
		return iVar1;
	}
	return 0;
}

void func_623()
{
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		fVar3 = &Global_2359296->f_221[iVar1]->f_2[iVar0];
		if (fVar3 != 1f)
		{
			iVar2 = &Global_2359296->f_221[iVar1];
			if (has_ped_got_weapon(iLocal_81, iVar2, 0, false))
			{
				_0xd04ad186ce8bb129(iLocal_79, iVar2, fVar3);
			}
		}
		iVar1++;
	}
}

void func_624(int iParam0)
{
	StringCopy(&cVar0, "PCFR0a", 128);
	if (func_626(iParam0))
	{
		iVar24 = get_weapon_type_from_pickup_type(iParam0);
		if (func_491(iVar24))
		{
			if (_is_weapon_throwable(iVar24))
			{
				StringCopy(&cVar0, "PCFR0b", 128);
			}
			StringCopy(&cVar16, func_1005(iVar24), 64);
		}
		if (!is_string_null_or_empty(&cVar16))
		{
			StringCopy(&cVar0, _create_var_string(10, &cVar0, &cVar16), 128);
			func_625(&cVar0, 2000, 0, 0, 0, 0);
		}
	}
}

var func_625(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, bParam5);
	return uVar15;
}

bool func_626(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case -2136239332:
		case -1888453608:
		case -31919185:
		case 738282662:
		case 1723684897:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_627(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (&iLocal_743[iParam0] == -1)
	{
		func_1006(iParam0, iParam3, 0);
	}
	iVar0 = &iLocal_743[iParam0];
	if (iVar0 == -1)
	{
		return;
	}
	if (&iLocal_776[iVar0] != -1)
	{
		return;
	}
	if (func_633(iVar0))
	{
		return;
	}
	if (bLocal_75 && func_1007(iVar0))
	{
		func_1008(iVar0, iParam0, iParam1, iParam2, iParam3);
	}
	else
	{
		iLocal_776[iVar0] = iParam0;
		iLocal_809[iVar0] = iParam1;
	}
	func_73(iParam1);
	func_358(Local_15564[iParam0]);
	clear_bit(&uLocal_675, iParam0);
	iLocal_743[iParam0] = -1;
}

void func_628(int iParam0)
{
	if (is_bit_set(iLocal_57, 3))
	{
		return;
	}
	iVar0 = Local_92[iParam0]->f_4;
	if (func_634(iVar0))
	{
		return;
	}
	if (Local_5688.f_51)
	{
		return;
	}
	if (!is_bit_set(Local_5688.f_41, 5))
	{
		return;
	}
	if (func_234())
	{
		return;
	}
	iVar1 = func_1009(iParam0, 255);
	if (iVar1 == -1)
	{
		return;
	}
	if (&iLocal_776[iVar1] != -1)
	{
		return;
	}
	if (func_633(iVar1))
	{
		return;
	}
	if (&Local_5688.f_1196[iVar1] == -1)
	{
		clear_bit(&(Local_5688.f_1229), iVar1);
		Local_5688.f_1196[iVar1] = func_1010(iParam0);
	}
}

void func_629(int iParam0)
{
	func_358(Local_842[iParam0]);
	if (!func_1007(iParam0))
	{
		if (!func_345(Local_972[iParam0]))
		{
			func_324(Local_972[iParam0], 0, 0);
		}
		if (func_325(Local_972[iParam0], 0, 0) < 5000)
		{
			return;
		}
	}
	iVar0 = &iLocal_776[iParam0];
	iVar1 = &iLocal_809[iParam0];
	iVar2 = int_to_participantindex(iVar0);
	iVar3 = int_to_playerindex(iVar1);
	func_1008(iParam0, iVar0, iVar1, iVar2, iVar3);
	func_358(Local_972[iParam0]);
}

void func_630(int iParam0)
{
	func_358(Local_972[iParam0]);
	if (!func_1011(iParam0))
	{
		if (is_bit_set(Local_1685[iLocal_71]->f_60, iParam0))
		{
			clear_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
		}
		if (!func_345(Local_842[iParam0]))
		{
			func_324(Local_842[iParam0], 0, 0);
		}
		if (func_325(Local_842[iParam0], 0, 0) < 20000)
		{
			return;
		}
	}
	iLocal_776[iParam0] = -1;
	iLocal_809[iParam0] = -1;
	func_358(Local_842[iParam0]);
	set_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
}

void func_631(int iParam0)
{
	if (func_633(iParam0))
	{
		if (!is_bit_set(Local_1685[iLocal_71]->f_60, iParam0))
		{
			set_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
		}
		if (!func_1012(iParam0))
		{
			if (!func_345(Local_907[iParam0]))
			{
				func_324(Local_907[iParam0], 0, 0);
			}
			if (func_325(Local_907[iParam0], 0, 0) < 5000)
			{
				return;
			}
		}
		func_1013(iParam0);
		func_358(Local_907[iParam0]);
		clear_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
	}
}

void func_632(int iParam0)
{
	if (func_633(iParam0))
	{
		func_358(Local_907[iParam0]);
		if (!is_bit_set(Local_1685[iLocal_71]->f_60, iParam0))
		{
			set_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
		}
	}
	else if (is_bit_set(Local_1685[iLocal_71]->f_60, iParam0))
	{
		func_358(Local_907[iParam0]);
		clear_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
	}
}

bool func_633(int iParam0)
{
	if (is_bit_set(Local_5688.f_3291, iParam0) || is_bit_set(Local_9759.f_741, iParam0))
	{
		return true;
	}
	return false;
}

bool func_634(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_373(36, iParam0);
}

void func_635(bool bParam0)
{
	if (network_is_game_in_progress() && func_377())
	{
		if (network_is_in_tutorial_session())
		{
			func_55(1);
		}
	}
	if (bParam0 && network_is_clock_time_overridden())
	{
		network_clear_clock_time_override();
	}
}

bool func_636()
{
	return func_1014(&((*Global_263042)[network_player_id_to_int()]->f_1), 512);
}

void func_637(int iParam0)
{
	if (!func_488(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_1015(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

bool func_638()
{
	if (func_261() >= 3)
	{
		return true;
	}
	else if (is_bit_set(iLocal_57, 8))
	{
		return true;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (network_is_participant_active(int_to_participantindex(iVar0)))
			{
				if (!func_38(iVar0))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

bool func_639()
{
	if ((((iVar14451 == 10 || iVar14451 == 11) || iVar14451 == 12) || iVar14451 == 13) || iVar14451 == 14)
	{
		return true;
	}
	return false;
}

void func_640(int iParam0)
{
	iLocal_14453 = iParam0;
}

bool func_641()
{
	switch (func_1016())
	{
		case 0:
			if (func_19())
			{
				func_1017(1);
			}
			break;
		case 1:
			if (!func_1018() || func_1019(&uLocal_14351))
			{
				func_1017(2);
			}
			break;
		case 2:
			if (func_1020())
			{
				func_1017(3);
			}
			break;
		case 3:
			if (func_1021())
			{
				func_1017(4);
			}
			break;
		case 4:
			if (func_418())
			{
				func_1017(5);
			}
			break;
		case 5:
			if (is_bit_set(Local_5688.f_41, 15))
			{
				func_1017(6);
			}
			break;
		case 6:
			if (func_1023(&uLocal_11245, 55542, 130887, 0, 1))
			{
				func_472();
				func_1017(7);
			}
			break;
		case 7:
			if (func_1024(&uLocal_11999))
			{
				func_1017(8);
			}
			break;
		case 8:
			if (func_1025())
			{
				func_1017(9);
				func_324(&uLocal_16024, 0, 0);
			}
			break;
		case 9:
			if (func_345(&uLocal_16024) && func_325(&uLocal_16024, 0, 0) > 5000)
			{
				func_1017(10);
				func_324(&uLocal_16024, 0, 0);
			}
			if (func_1026(&iLocal_15781) && func_1027(&iLocal_15842))
			{
				func_1028();
				func_324(&uLocal_16024, 0, 0);
				func_1017(10);
			}
			break;
		case 10:
			if (func_345(&uLocal_16024) && func_325(&uLocal_16024, 0, 0) > 5000)
			{
				func_1017(11);
			}
			func_1029();
			func_1017(11);
			break;
		case 11:
			if (func_1030(&uLocal_12046))
			{
				func_1017(12);
				return true;
			}
			break;
		case 12:
			return true;
	}
	return false;
}

void func_642(bool bParam0)
{
	if (func_14())
	{
		return;
	}
	vVar0 = { func_1031(395262693, bParam0) };
	iVar3 = -1;
	if (func_260())
	{
		if ((!bParam0 && func_51()) && (*Global_263042)[iLocal_72]->f_1.f_55 > 0)
		{
			iVar3 = func_1032();
		}
	}
	if (iVar3 > -1 && iVar3 < Global_3145858->f_282)
	{
		func_1033(&vVar4, &uVar7, iVar3, 0, 0);
		if (!func_410(vVar4))
		{
			vVar0 = { vVar4 };
		}
	}
	if (!func_410(vVar0))
	{
		set_entity_coords(iLocal_81, vVar0, true, false, true, true);
	}
}

void func_643()
{
	func_1034();
	func_1035();
	func_224(1, 0, 1);
}

void func_644(int iParam0)
{
	iVar0 = func_458(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

bool func_645()
{
	iVar0 = func_1009(iLocal_71, iLocal_79);
	if (is_bit_set(Local_5688.f_1263, iVar0))
	{
		return false;
	}
	if (func_633(iVar0) && !func_1011(iVar0))
	{
		return false;
	}
	if (&Local_5688.f_1230[iVar0] != iLocal_77)
	{
		return false;
	}
	return true;
}

bool func_646()
{
	return is_bit_set(Local_5688.f_41, 26);
}

void func_647()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

void func_648(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	func_324(&(iParam0->f_49), 0, 0);
	Var19 = &iParam0->f_44[0];
	Var19.f_3 = iParam0->f_42;
	Var0.f_3 = { Var19 };
	if (iParam0->f_43 > 1)
	{
		Var23 = &iParam0->f_44[1];
		Var23.f_3 = iParam0->f_42;
		Var0.f_7 = { Var23 };
		if (iParam0->f_43 > 2)
		{
			Var27 = &iParam0->f_44[2];
			Var27.f_3 = iParam0->f_42;
			Var0.f_11 = { Var27 };
			if (iParam0->f_43 > 3)
			{
				Var31 = &iParam0->f_44[3];
				Var31.f_3 = iParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (iParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!is_string_null_or_empty(&(iParam0->f_5)))
	{
		cVar35 = _create_var_string(10, &(iParam0->f_3), &(iParam0->f_5));
	}
	else
	{
		cVar35 = func_1036(iParam0->f_3);
	}
	if (!is_string_null_or_empty(&(iParam0->f_7)))
	{
		if (!is_string_null_or_empty(&(iParam0->f_23)))
		{
			if (iParam0->f_39)
			{
				cVar35 = _create_var_string(42, cVar35, func_577(&(iParam0->f_7), 109029619), func_577(&(iParam0->f_23), 109029619), iParam0->f_40);
			}
			else
			{
				cVar35 = _create_var_string(42, cVar35, func_577(&(iParam0->f_7), 109029619), func_577(&(iParam0->f_23), 109029619));
			}
		}
		else if (iParam0->f_39)
		{
			cVar35 = _create_var_string(10, cVar35, func_577(&(iParam0->f_7), 109029619), iParam0->f_40);
		}
		else
		{
			cVar35 = _create_var_string(10, cVar35, func_577(&(iParam0->f_7), 109029619));
		}
	}
	else if (iParam0->f_39)
	{
		cVar35 = _create_var_string(2, cVar35, iParam0->f_40);
	}
	if (bParam1)
	{
		*iParam0 = func_1037(&Var0, &(iParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*iParam0 = func_1038(&Var0, &(iParam0->f_1), cVar35, 0, 0, 1);
	}
}

int func_649(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar0 = -1;
	if (_event_manager_is_event_pending(iParam1))
	{
		if (_event_manager_peek_event(iParam1, &vVar1))
		{
			if (func_345(uParam2))
			{
				if (func_325(uParam2, 0, 0) > 250)
				{
					switch (vVar1.x)
					{
						case -1203660660:
							if (vVar1.y == *iParam0)
							{
								if (vVar1.z == 2074623703)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 0;
								}
								else if (vVar1.z == 1400745903)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 1;
								}
								else if (vVar1.z == 444632721)
								{
									if (bParam3)
									{
										_0x00a15b94cba4f76f(*iParam0);
										*iParam0 = 0;
									}
									iVar0 = 2;
								}
							}
							break;
					}
				}
				_event_manager_pop_event(iParam1);
			}
			else
			{
				func_324(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_650(int iParam0)
{
	Local_16033 = { Local_5688.f_2 };
	Local_16033.f_8 = func_1039(&(Local_16033.f_9));
	Local_16033.f_20 = func_1040();
	Local_16033.f_21 = iParam0;
}

int func_651(int iParam0, bool bParam1, bool bParam2)
{
	if (!network_is_game_in_progress())
	{
		return 0;
	}
	if (get_player_team(player_id()) == iParam0 && !bParam2)
	{
		return 1;
	}
	if (!(iParam0 >= -1 && iParam0 <= 7))
	{
		return 0;
	}
	set_player_team(player_id(), iParam0, bParam1);
	if (!bParam1)
	{
		func_1041();
	}
	return 1;
}

int func_652(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_49703 - 1))
	{
		if (!func_260() || is_bit_set(Global_3145858->f_49704[iVar0]->f_3, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

bool func_653()
{
	switch (iVar14452)
	{
		case 0:
			if (func_671(1))
			{
				func_1042(2);
			}
			break;
		case 2:
			if (func_672(255))
			{
				func_1043();
				if (!func_345(&uLocal_14349))
				{
					func_324(&uLocal_14349, 0, 0);
				}
				else if (func_325(&uLocal_14349, 0, 0) >= 90000)
				{
					func_358(&uLocal_14349);
					func_385(1);
				}
			}
			else
			{
				func_1044();
				if (func_673())
				{
					func_1042(3);
				}
			}
			break;
		case 3:
			func_324(&uLocal_16020, 0, 0);
			func_675();
			Var0.f_2 = 5;
			Var0.f_23 = 5;
			func_106(&uLocal_14249, &Var0);
			func_1042(0);
			return true;
	}
	return false;
}

void func_654()
{
	Var0 = 166;
	Var0.f_1 = iLocal_79;
	Var0.f_4 = Local_1685[iLocal_71]->f_3;
	uVar5 = func_986(5, 8);
	if (_0x179a6f0ee2e79026(&uVar5))
	{
		trigger_script_event(1, &Var0, 5, 57, &uVar5);
	}
}

void func_655(bool bParam0)
{
	func_1045();
	func_460();
	func_1046(1);
	func_1047(bParam0, vLocal_14450);
	func_1048(&(Local_12907.f_973), 0);
	_0xc6dcc2a3a8825c85(1);
	func_1049();
	func_184(0);
	_0x406ccf555b04fad3(iLocal_81, 0, 0f);
	func_948();
	func_1050();
	_0x780a13f780a13f1b(0);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_92[iVar0]->f_3)
		{
			func_575(Local_92[iVar0]->f_4, Local_1685[iVar0]->f_4);
		}
		iVar0++;
	}
	if (!func_31(46))
	{
		_0xa1b4052c2a3dcc1e();
	}
}

int func_656()
{
	if (func_1051(&iVar0, Local_16033) && func_255(iVar0))
	{
		iVar1 = network_get_participant_index(iVar0);
		if ((Local_92[iVar1]->f_3 && !func_38(iVar1)) && !is_bit_set(Local_1685[iVar1]->f_2, 0))
		{
			return get_player_ped(iVar0);
		}
	}
	return func_1052();
}

void func_657(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = player_ped_id();
	if (iVar0 == iParam1)
	{
		iVar1 = 1;
	}
	func_97(1);
	func_1053(iParam0, iParam1, bParam2, iParam3, iVar1, 0);
}

var func_658()
{
	return func_1054();
}

void func_659(var uParam0)
{
	if (!uParam0->f_6)
	{
		uParam0->f_6 = 1;
	}
}

void func_660(int iParam0)
{
	set_bit(Global_1048684, iParam0);
}

void func_661()
{
	Var0 = 167;
	Var0.f_1 = iLocal_79;
	uVar4 = func_986(5, 8);
	if (_0x179a6f0ee2e79026(&uVar4))
	{
		trigger_script_event(1, &Var0, 4, 58, &uVar4);
	}
}

int func_662()
{
	return uVar12899;
}

void func_663(var uParam0)
{
	set_bit(&(uParam0->f_158), 16);
}

void func_664()
{
	Var0 = { func_450() };
	if (!func_252(Var0))
	{
		return;
	}
	if (func_453(Var0))
	{
		return;
	}
	if (func_454(Var0))
	{
		return;
	}
	func_1055(Var0);
}

void func_665()
{
	Var0 = { func_450() };
	if (!func_252(Var0))
	{
		return;
	}
	if (func_454(Var0))
	{
		return;
	}
	if (!func_453(Var0))
	{
		func_664();
	}
	if (Var0 == 2)
	{
		func_1056(func_451(Var0));
		return;
	}
	if (Var0 != 7)
	{
		return;
	}
	func_1057(Var0, 1, 0, 1);
}

void func_666(int iParam0)
{
	iLocal_12901 = iParam0;
}

bool func_667()
{
	if ((is_bit_set(Local_5688.f_41, 5) || func_53(iLocal_79, 32768)) || func_14())
	{
		return true;
	}
	return false;
}

void func_668()
{
	func_179(1);
	func_1058();
	if (!func_14())
	{
		if (func_260())
		{
			iVar0 = func_1059();
		}
		else
		{
			iVar0 = -1;
		}
	}
	else
	{
		iVar0 = func_1060(Global_2892896->f_13, -1, 7);
		bVar1 = true;
	}
	if (func_260())
	{
		if (iVar0 < 0)
		{
			bVar1 = true;
			iVar0 = 0;
		}
		if (iVar0 >= 8)
		{
			bVar1 = true;
			iVar0 = 7;
		}
	}
	else if (iVar0 != -1)
	{
		if (!func_14())
		{
		}
		bVar1 = true;
		iVar0 = -1;
	}
	Local_1685[iLocal_71]->f_3 = iVar0;
	if (bVar1)
	{
		func_651(iVar0, 0, 1);
	}
	if (func_260())
	{
		set_ped_relationship_group_hash(iLocal_81, func_147(iVar0));
	}
}

bool func_669()
{
	uVar4 = func_1061();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&uVar4, iVar0))
		{
		}
		else
		{
			iVar2 = int_to_playerindex(iVar0);
			if (!network_is_player_active(iVar2) || !network_is_player_a_participant(iVar2))
			{
				return false;
			}
			iVar3 = network_get_participant_index(iVar2);
			iVar1 = iVar3;
			if (is_bit_set(Local_1685[iVar1]->f_2, 5) || is_bit_set(Local_1685[iVar1]->f_2, 8))
			{
			}
			else if (!network_is_participant_active(iVar3))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_670()
{
	iVar3 = -1;
	uVar4 = func_1061();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_participantindex(iVar0);
		if (!network_is_participant_active(iVar2))
		{
		}
		else
		{
			iVar1 = network_get_player_index(iVar2);
			if (func_38(iVar0))
			{
				if (func_29(iVar0) == 0 && _0x72b2e00c9bac6789(&uVar4, iVar1))
				{
					return false;
				}
			}
			else
			{
				if (!is_bit_set(Local_1685[iVar0]->f_2, 1))
				{
					return false;
				}
				if (func_260())
				{
					if (!func_14())
					{
						iVar3 = func_1062(iVar1);
					}
					else
					{
						iVar3 = Global_2892896->f_13;
					}
				}
				if (func_1063(iVar1) != iVar3)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_671(bool bParam0)
{
	if (is_bit_set(Local_1685[iLocal_71]->f_2, 8))
	{
		return true;
	}
	fVar3 = 0f;
	if (!is_bit_set(iLocal_57, 31))
	{
		if (!func_1064(&vVar0, &fVar3, bParam0))
		{
			return false;
		}
	}
	func_176(1);
	func_48(1);
	func_1065(1);
	func_1066(1);
	func_94(1);
	func_174(1);
	if (func_31(79))
	{
		func_128(1);
	}
	iVar4 = Local_1685[iLocal_71]->f_3;
	iVar5 = Local_1685[iLocal_71]->f_4;
	if (!func_260() || iVar4 == -1)
	{
		iVar4 = 0;
	}
	if (is_bit_set(&(Global_2359296->f_74[iVar4]), 2) || is_bit_set(Global_3145858->f_49704[iVar5]->f_4, 20))
	{
		func_177(1, is_bit_set(Global_3145858->f_49704[iVar5]->f_4, 26));
	}
	else if (is_bit_set(Global_3145858->f_49704[iVar5]->f_4, 21) && func_1067())
	{
		func_1068(0, 1, is_bit_set(Global_3145858->f_49704[iVar5]->f_4, 26));
	}
	else if (Global_3145858->f_49704[iVar5]->f_88 != 0)
	{
		if (is_this_model_a_boat(Global_3145858->f_49704[iVar5]->f_88))
		{
			func_1069(3);
		}
		func_1068(Global_3145858->f_49704[iVar5]->f_88, 1, is_bit_set(Global_3145858->f_49704[iVar5]->f_4, 26));
	}
	func_1070();
	if (!bParam0)
	{
		func_1071(vVar0, fVar3, 1);
	}
	else
	{
		func_172(1);
		func_380(1, 1);
	}
	return true;
}

bool func_672(int iParam0)
{
	return func_373(1, iParam0);
}

bool func_673()
{
	if (!func_260())
	{
		func_1072(1);
		return true;
	}
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (is_bit_set(&(Global_2359296->f_74[iVar0]), 1))
	{
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (!Local_92[iVar1]->f_3)
			{
			}
			else
			{
				iVar3 = Local_92[iVar1]->f_6;
				set_ped_config_flag(iVar3, 297, false);
				set_ped_config_flag(iVar3, 315, true);
				set_ped_config_flag(iVar3, 130, true);
				_0xe98d55c5983f2509(iVar3);
				_0xfc6ecb9170145ece();
				if (iVar1 != iLocal_71 && Local_1685[iVar1]->f_3 == iVar0)
				{
					if (is_ped_on_mount(iVar3))
					{
						iVar2 = get_mount(iVar3);
					}
				}
			}
			iVar1++;
		}
		if ((!is_ped_injured(iVar2) && !_is_mount_seat_free(iVar2, -1)) && _is_mount_seat_free(iVar2, 0))
		{
			task_mount_animal(iLocal_81, iVar2, 1, 0, 2f, 16, 0, 0);
		}
		else if (!func_1073(&bVar4) && !bVar4)
		{
			return false;
		}
	}
	else if (&Global_2359296->f_204[iVar0] >= 0)
	{
		iVar5 = net_to_veh(&(Local_5688.f_52.f_33[&Global_2359296->f_204[iVar0]]));
		if (!are_any_vehicle_seats_free(iVar5))
		{
		}
		else
		{
			vVar6 = { get_entity_coords(iVar5, true, false) + Vector(0f, 2f, 0f) };
			set_entity_coords(iLocal_81, vVar6, true, false, true, true);
			iVar9 = func_1074(iVar5, 0);
			task_enter_vehicle(iLocal_81, iVar5, 20000, iVar9, 2f, 16, 0);
		}
	}
	func_1072(1);
	return true;
}

void func_674(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_675()
{
	iVar0 = Local_1685[iLocal_71]->f_3;
	func_1075(iVar0);
	func_1076();
	func_655(0);
}

void func_676(int iParam0)
{
	if (iVar12902 != iParam0)
	{
		iLocal_12905 = iParam0;
	}
}

bool func_677()
{
	return (is_bit_set(Local_5688.f_41, 4) && func_1077());
}

void func_678()
{
	if (is_player_control_on(iLocal_79))
	{
		func_58(0, 8);
	}
	_0x8910c24b7e0046ec();
	switch (iVar14290)
	{
		case 0:
			disable_control_action(0, -1404316431, false);
			destroy_all_cams(false);
			if (!is_bit_set(iLocal_57, 20))
			{
				if (!func_1078(0))
				{
					return;
				}
				if (!func_260())
				{
					Global_1049264 = 1;
				}
				set_bit(&iLocal_57, 20);
			}
			if (!func_1079(128))
			{
				func_13(8);
				func_13(128);
			}
			Global_1049277 = 0;
			Global_1049278 = 0;
			func_1080(8);
			break;
		case 8:
			if (func_1079(16))
			{
				iLocal_14318 = 1;
			}
			if (!func_1079(16384))
			{
				if (func_1079(32768) && func_1079(65536))
				{
					if (!_is_loading_screen_active())
					{
						set_bit(&(Local_1685[iLocal_71]->f_2), 20);
					}
					else
					{
						clear_bit(&(Local_1685[iLocal_71]->f_2), 20);
					}
				}
				iVar0 = 0;
				while (iVar0 <= 31)
				{
					if (Local_92[iVar0]->f_3 && !func_38(iVar0))
					{
						if (!is_bit_set(Local_1685[iVar0]->f_2, 20))
						{
							return;
						}
					}
					iVar0++;
				}
				func_13(16384);
			}
			if (bVar14316)
			{
				play_sound_frontend("match_start", "RDRO_Adversary_Sounds", true, 0);
				func_1080(15);
			}
			break;
		case 15:
			render_script_cams(false, true, 3000, true, false, 0);
			destroy_all_cams(true);
			func_324(&uLocal_14293, 0, 0);
			func_200(0);
			func_676(3);
			break;
	}
}

void func_679(int iParam0, int iParam1, bool bParam2)
{
	Var0.f_4.f_5 = 255;
	Var0 = 161;
	Var0.f_1 = iLocal_79;
	Var0.f_11 = iParam0;
	Var0.f_4 = { *iParam1 };
	if (!bParam2)
	{
		uVar12 = func_986(4, 8);
	}
	else
	{
		_0x31010318ba9897ac(&uVar12, player_id());
	}
	if (_0x179a6f0ee2e79026(&uVar12))
	{
		trigger_script_event(1, &Var0, 12, 52, &uVar12);
	}
}

bool func_680()
{
	return (Global_2359296->f_56 > 0 || Global_2359296->f_57 > 0);
}

int func_681()
{
	if (Global_2359296->f_57 > 0)
	{
		return Global_2359296->f_57;
	}
	fVar0 = (to_float(Global_2359296->f_56) / 2f);
	iVar1 = ceil(fVar0);
	return iVar1;
}

void func_682(var uParam0)
{
	Var0.f_20 = -1;
	Var0.f_22 = 32;
	Var0.f_343 = 32;
	Var0.f_377 = 28;
	Var0.f_378 = 5;
	Var0.f_469 = -1;
	*uParam0 = { Var0 };
}

bool func_683(int iParam0)
{
	return is_bit_set(Local_1685[iParam0]->f_2, 7);
}

void func_684(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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

void func_685()
{
	func_154(64);
	func_637(4);
	if (is_bit_set(Local_5688.f_24.f_5, 2))
	{
		func_637(8);
	}
	if (is_bit_set(Local_5688.f_24.f_3, 8) && !func_613())
	{
		func_959();
	}
	if (is_bit_set(Local_5688.f_24.f_3, 4))
	{
		func_637(64);
	}
	if (is_bit_set(Local_5688.f_24.f_3, 29) || func_613())
	{
		func_1081();
	}
	if (is_bit_set(Local_5688.f_24.f_4, 2))
	{
		func_637(16);
		func_961(Global_2359296->f_6573);
	}
}

void func_686()
{
	if (!is_ped_on_mount(iLocal_81) || func_672(255))
	{
		return;
	}
	iVar0 = get_mount(iLocal_81);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	set_ped_config_flag(iVar0, 174, false);
}

void func_687(var uParam0)
{
	if (!uParam0->f_5)
	{
		uParam0->f_5 = 1;
	}
}

bool func_688(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_443(32, iParam0);
}

void func_689()
{
	if (!func_345(&uLocal_12879))
	{
		return;
	}
	iVar0 = func_325(&uLocal_12879, 0, 0);
	func_358(&uLocal_12879);
	Local_1685[iLocal_71]->f_38 = (Local_1685[iLocal_71]->f_38 + iVar0);
	iVar1 = Global_3145858->f_285;
	if (func_168())
	{
		iVar1 = (iVar1 + 60000);
	}
	if (Local_1685[iLocal_71]->f_38 > iVar1)
	{
		Local_1685[iLocal_71]->f_38 = iVar1;
	}
}

bool func_690(int iParam0)
{
	return func_372(iParam0) == 4;
}

void func_691(var uParam0)
{
	if (!uParam0->f_7)
	{
		uParam0->f_7 = 1;
	}
}

bool func_692()
{
	if (!_is_weapon_binoculars(func_493(Global_34, 1, 0, 1)) && !is_entity_dead(Global_34))
	{
		return func_1082(4);
	}
	if (&Global_1913399 == 5)
	{
		return true;
	}
	return false;
}

int func_693()
{
	if (!is_first_person_aim_cam_active())
	{
		set_player_control(player_id(), true, 2048, false);
		return 1;
	}
	return 0;
}

int func_694()
{
	return Global_1102219->f_26.f_12;
}

bool func_695()
{
	return func_475(4);
}

bool func_696()
{
	if (func_737(-1) != 0 || func_646())
	{
		return true;
	}
	return false;
}

void func_697()
{
	if (func_38(iLocal_71))
	{
		return;
	}
	Var0.f_5 = 255;
	switch (func_737(-1))
	{
		case 0:
			func_58(0, 8);
			set_ped_using_action_mode(iLocal_81, false, -1, 0);
			_0xaf041c10756c30fb(iLocal_81, 1, 1, 1);
			func_174(1);
			func_200(1);
			func_376(1);
			func_445(256);
			func_1083(1);
			func_157(1);
			func_92(1);
			func_1084();
			clear_bit(&iLocal_60, 3);
			func_758();
			if (!func_30(10))
			{
				if (iVar14293 == 0)
				{
					func_1085(&uLocal_14295, 0, 0);
				}
				_0xf3e039322bfbd4d8(uVar14311);
				_0xe75cddebf618c8ff(uVar14311);
				_0xe368e8422c860ba7("photograph", "rdro_gamemode_transition_sounds", -2);
			}
			vLocal_14314 = { 0f, 0f, 0f };
			fLocal_14317 = 0f;
			if (!is_bit_set(iLocal_57, 21) && bLocal_73)
			{
				func_96(3);
			}
			if (func_695() || !bLocal_73)
			{
				_0xdd1232b332cbb9e7(11, 1, 1);
				func_549(3);
			}
			else
			{
				if (!func_257(255))
				{
					func_689();
				}
				func_549(1);
			}
			break;
		case 1:
			Var0.f_1 = Local_1685[iLocal_71]->f_3;
			if (network_is_participant_active(Local_5688.f_1120))
			{
				Var0.f_5 = network_get_player_index(Local_5688.f_1120);
			}
			if (func_704(Local_5688.f_1134))
			{
				Var0.f_6 = Local_5688.f_1134;
				func_679(-1652801619, &Var0, 1);
			}
			else
			{
				func_679(-1252587237, &Var0, 1);
			}
			func_549(2);
			break;
		case 2:
			if (func_1086())
			{
				return;
			}
			if (vLocal_14263.z == -1252587237 || vLocal_14263.z == -1652801619)
			{
				vLocal_14263.f_2 = 0;
			}
			func_549(3);
			break;
		case 3:
			if (func_695() && !func_1087())
			{
				return;
			}
			if (func_30(10) || !bLocal_73)
			{
				do_screen_fade_out(250);
				func_151(&uLocal_12894);
				func_549(7);
				return;
			}
			if (!func_716(&uLocal_14268, &iLocal_81, 0, 0))
			{
				return;
			}
			if (uLocal_14268.f_16)
			{
			}
			else if (uLocal_14268.f_20 != -1)
			{
				if (_is_anim_scene_loaded(uLocal_14268.f_20, true, false))
				{
					if (!_is_anim_scene_started(uLocal_14268.f_20, false))
					{
						start_anim_scene(uLocal_14268.f_20);
					}
				}
				else
				{
					return;
				}
			}
			func_151(&uLocal_12894);
			_0x78857fc65cadb909(false);
			func_324(&uLocal_14311, 0, 0);
			func_549(4);
			break;
		case 4:
			if (!func_1088(&uLocal_14295))
			{
				return;
			}
			if (_0x59ea80079b86d8c7(uVar14311))
			{
				return;
			}
			if (!_0xe368e8422c860ba7("photograph", "rdro_gamemode_transition_sounds", -2))
			{
				return;
			}
			if (func_345(&uLocal_14311) && func_325(&uLocal_14311, 0, 0) < 500)
			{
				return;
			}
			_0x9b8d5d4cb8af58b3(uVar14311);
			func_549(5);
			break;
		case 5:
			if (_0xeef83a759ae06a27(uVar14311))
			{
				if (!_0x9ab192a9ef980eed(uVar14311, 2, 0, &uVar7))
				{
					return;
				}
			}
			play_sound_frontend("photograph", "rdro_gamemode_transition_sounds", true, 0);
			func_324(&uLocal_14311, 0, 0);
			func_549(6);
			break;
		case 6:
			if (func_345(&uLocal_14311) && func_325(&uLocal_14311, 0, 0) < 500)
			{
				return;
			}
			func_1089(&Local_10501, &Local_13917, &uLocal_14295, iLocal_78, 0);
			func_549(7);
			break;
		case 7:
			if (is_screen_fading_out())
			{
				return;
			}
			if (func_690(255))
			{
				func_174(1);
				func_200(1);
				func_376(1);
				func_157(1);
				if (func_1090() && !func_373(11, 255))
				{
					func_374();
				}
				return;
			}
			if (func_1091() <= 1)
			{
				return;
			}
			if (!func_1092(&vLocal_14314, &fLocal_14317))
			{
				return;
			}
			func_1093();
			func_549(8);
		case 8:
			func_1094(0);
			if (func_1095())
			{
				func_174(1);
				func_200(1);
				func_48(1);
				func_376(1);
				func_157(1);
				func_1083(1);
				func_1071(vLocal_14314, fVar14315, 1);
				func_549(9);
			}
			else
			{
				if (_get_ped_crouch_movement(iLocal_81))
				{
					_set_ped_crouch_movement(iLocal_81, false, 0, false);
				}
				clear_ped_tasks(iLocal_81, 1, 0);
				start_player_teleport(iLocal_79, vLocal_14314, fVar14315, true, true, false, false);
				func_549(10);
			}
			break;
		case 9:
			if (func_672(255) || func_373(0, 255))
			{
				return;
			}
			func_1096(1);
			func_1097(&uLocal_14268);
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			func_549(11);
			break;
		case 10:
			if (!_has_player_teleport_finished(iLocal_79))
			{
				return;
			}
			if (is_player_teleport_active())
			{
				stop_player_teleport();
			}
			func_1097(&uLocal_14268);
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
			func_549(11);
			break;
		case 11:
			if (!func_30(10) && !is_screen_faded_out())
			{
				if (func_345(&uLocal_14311) && func_325(&uLocal_14311, 0, 0) < 2500)
				{
					return;
				}
			}
			func_549(12);
			break;
		case 12:
			if (!is_bit_set(Local_5688.f_41, 27))
			{
				return;
			}
			if (!func_1025())
			{
				return;
			}
			if (!func_30(10))
			{
				func_1098(&uLocal_14295, 0);
				func_1099(&uLocal_14295);
				if (_0xeef83a759ae06a27(uVar14311))
				{
					_0xeda5cbecf56e1386(uVar14311);
				}
			}
			_0x78857fc65cadb909(true);
			clear_bit(&iLocal_58, 16);
			Var8.f_4 = 3;
			Var8.f_8 = -1;
			Var8.f_9 = -1;
			Var8.f_10 = -1;
			Var8.f_11 = 1;
			Var8.f_42.f_1 = -1;
			Var8.f_42.f_3 = -1082130432;
			Var8.f_42.f_4 = 2;
			Var8.f_42.f_5 = -1082130432;
			Var8.f_42.f_7 = -1082130432;
			Var8.f_42.f_9 = -1082130432;
			Var8.f_42.f_11 = -1082130432;
			Var8.f_54.f_2 = -1;
			Var8.f_54.f_5 = -1;
			Var8 = { func_954(1, 0) };
			func_1100(&(Var8.f_18));
			func_1101(&Var8, 0);
			if (is_screen_faded_out())
			{
				do_screen_fade_in(250);
			}
			iVar69 = 0;
			while (iVar69 < Global_3145858->f_6822)
			{
				func_1102(iVar69);
				iVar69++;
			}
			func_174(0);
			func_200(0);
			func_48(0);
			func_376(0);
			func_1083(0);
			func_157(0);
			func_1103();
			if (iVar15775 != -1)
			{
				func_1104(func_558(Local_1685[iLocal_71]->f_3, 0), 0, 0, 0);
				iLocal_15777 = -1;
			}
			Var0.f_2 = Local_5688.f_3293;
			Var0.f_3 = func_681();
			if (!is_bit_set(Local_5688.f_41, 29))
			{
				func_679(-1359173784, &Var0, 1);
			}
			else
			{
				func_679(2110512971, &Var0, 1);
			}
			func_549(13);
			break;
		case 13:
			if (is_bit_set(Local_5688.f_41, 26))
			{
				return;
			}
			if (!is_screen_faded_in())
			{
				return;
			}
			func_92(0);
			func_58(1, 2);
			func_324(&uLocal_12879, 0, 0);
			if (!func_30(10))
			{
				_0x71845905bccde781(uVar14311);
				_0x38d9d50f2085e9b3(uVar14311);
			}
			uLocal_14268.f_16 = 0;
			func_358(&uLocal_14311);
			func_549(0);
			break;
	}
}

void func_698(struct<2> Param0)
{
	func_1105();
	func_1106();
	func_1107();
	func_1108();
	func_1109();
	func_1110();
	func_1111();
	func_1112();
	func_1113();
	func_1096(0);
	func_1114();
	func_1115();
	func_1116();
	func_1117(Param0);
	func_1118();
	func_1119();
	func_1120();
	func_1121();
}

void func_699()
{
	if (is_bit_set(iLocal_57, 9))
	{
		func_1122();
	}
	else if (iLocal_82 > -1)
	{
		if (!is_bit_set(Local_1685[iLocal_82]->f_2, 3))
		{
			func_1123();
		}
		else
		{
			func_1122();
		}
	}
}

bool func_700(int iParam0)
{
	return func_373(49, iParam0);
}

void func_701(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (network_is_game_in_progress() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = get_network_time_accurate();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		uParam0->f_1 = 1;
	}
}

void func_702(bool bParam0)
{
	if (!&Global_2883584)
	{
		if (bParam0)
		{
			func_37(4);
		}
		else
		{
			func_50(4);
		}
	}
}

var func_703()
{
	return Local_10501[0]->f_14;
}

bool func_704(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 375301172:
		case 1866839375:
			return false;
		default:
			break;
	}
	if (Global_2359296->f_6760 == iParam0)
	{
		return false;
	}
	return true;
}

bool func_705()
{
	Var0 = { func_52() };
	iVar5 = func_309();
	if (iVar5 < Var0 + 1 || (func_567() && Var0.f_1 + 1 >= iVar5))
	{
		return true;
	}
	iVar6 = 0;
	while (iVar6 < 32)
	{
		if (func_38(iVar6) || !Local_92[iVar6]->f_3)
		{
		}
		else if (!func_1124(iVar6))
		{
		}
		else
		{
			iVar7 = int_to_participantindex(iVar6);
			iVar8 = network_get_player_index(iVar7);
			iVar9 = iVar8;
			Var0 = { (*Global_263042)[iVar9]->f_1.f_55 };
			if (Var0.f_1 >= iVar5)
			{
				return true;
			}
		}
		iVar6++;
	}
	return false;
}

void func_706(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_679(1261477126, iParam1, 1);
	}
	else
	{
		func_679(1121928263, iParam1, 1);
	}
	if (iParam1->f_4)
	{
		_0x3a9a281ff71249e9("MP_MatchEndPulseWinner", 3000);
	}
	else
	{
		_0x3a9a281ff71249e9("MP_MatchEndPulseLoser", 3000);
	}
}

bool func_707()
{
	if (!bLocal_75)
	{
		return false;
	}
	if (!func_89())
	{
		set_bit(&(Local_5688.f_41), 17);
		return false;
	}
	if (func_31(14))
	{
		set_bit(&(Local_5688.f_41), 17);
		return false;
	}
	if (Local_5688.f_872 < 4)
	{
		set_bit(&(Local_5688.f_41), 17);
		return false;
	}
	return true;
}

float func_708(int iParam0)
{
	if ((func_260() && func_614(Local_1685[iParam0]->f_3, &(Local_5688.f_1135[0]))) || Local_5688.f_1120 == int_to_participantindex(iParam0))
	{
		bVar0 = true;
	}
	iVar1 = iParam0;
	if (func_260())
	{
		iVar1 = Local_1685[iParam0]->f_3;
	}
	if (func_742() < Local_1685[iParam0]->f_38)
	{
		fVar2 = to_float((func_742() / 1000));
	}
	else
	{
		fVar2 = to_float((Local_1685[iParam0]->f_38 / 1000));
	}
	return func_1125(Local_1685[iParam0]->f_6, Local_1685[iParam0]->f_9, to_float((Local_1685[iParam0]->f_15[0] - Local_1685[iParam0]->f_15[1]) // PointerArith), to_float((Local_1685[iParam0]->f_18[0] - Local_1685[iParam0]->f_18[1]) // PointerArith), to_float((Local_1685[iParam0]->f_21[0] - Local_1685[iParam0]->f_21[1]) // PointerArith), to_float(Local_1685[iParam0]->f_27), Local_1685[iParam0]->f_14, Local_1685[iParam0]->f_5, Local_1685[iParam0]->f_6, bVar0, 0, 0, 0, 0, 0, fVar2, to_float(Local_1685[iParam0]->f_29), 0, to_float(Local_1685[iParam0]->f_28), Local_1685[iParam0]->f_30, 0, 0, to_float((Local_1685[iParam0]->f_24[0] - Local_1685[iParam0]->f_24[1]) // PointerArith), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &(Local_5688.f_3294[iVar1]), 0);
}

bool func_709(float fParam0, int iParam1, var uParam2, int iParam3, float fParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = get_random_int_in_range(1000, 100000);
		bVar3 = (iVar2 % 2) == false;
		bVar4 = false;
		if (bParam5)
		{
			if (func_614(Local_92[iVar0]->f_1, &(Local_5688.f_1135[0])))
			{
			}
			else if (func_38(iVar0))
			{
			}
			else if (fParam0[iVar0] > -1f)
			{
				if (bParam6 && fParam0[iVar0] < fParam4)
				{
					bVar4 = true;
				}
				else if (!bParam6 && fParam0[iVar0] > fParam4)
				{
					bVar4 = true;
				}
				else if (fParam0[iVar0] == fParam4)
				{
					if (iParam1[iParam3] != -1)
					{
						if (!bParam5 && !func_614(Local_1685[iParam1[iParam3]]->f_3, &(Local_5688.f_1135[0])))
						{
							bVar4 = true;
						}
						else if (bVar3)
						{
							bVar4 = true;
						}
					}
					else
					{
						bVar4 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (iParam1[iVar1] == iVar0)
					{
						bVar4 = false;
					}
					iVar1++;
				}
				if (bVar4)
				{
					func_1126(iParam3, iVar0, fParam0[iVar0], uParam2);
					(*iParam1)[iParam3] = iVar0;
					fParam4 = uParam2[iParam3];
				}
			}
			iVar0++;
			if (iParam3 == 0 && iParam1[iParam3] > -1)
			{
				Global_1050050->f_100 = Local_1685[iParam1[iParam3]]->f_43;
			}
			return iParam1[iParam3] > -1;
		}
	}
}

bool func_710()
{
	if (iVar14261 == 0)
	{
		return true;
	}
	if (!func_1127(vLocal_14263.z))
	{
		return true;
	}
	if (_0x59fa676177dbe4c9(iVar14261) != 6 && _0x59fa676177dbe4c9(iVar14261) != 5)
	{
		return false;
	}
	return true;
}

void func_711()
{
	Var0.f_1 = 15;
	func_1128(&Local_12907, &Var0);
}

void func_712(int iParam0, bool bParam1)
{
	if (is_bit_set(iLocal_13, iParam0) || bParam1)
	{
		clear_bit(&iLocal_13, iParam0);
		_display_hud_component(func_1129(iParam0));
	}
}

void func_713(int iParam0)
{
	if (is_bit_set(iLocal_13, iParam0))
	{
	}
	else
	{
		set_bit(&iLocal_13, iParam0);
		_hide_hud_component(func_1129(iParam0));
	}
}

void func_714()
{
	iVar0 = _0xc17f69e1418cd11f(11);
	if (func_1130(iVar0))
	{
		if (_0x59fa676177dbe4c9(iVar0) == 4)
		{
			_0xdd1232b332cbb9e7(11, 1, 0);
		}
	}
}

void func_715()
{
	if (func_1131())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

bool func_716(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_1132(uParam0, iParam1))
	{
		switch (uParam0->f_22)
		{
			case 0:
				if (uParam0->f_20 == -1)
				{
					if (func_1133(iParam1))
					{
						if (is_ped_male(*iParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_F", 129, 0, false, true);
						}
						bVar0 = true;
					}
					else if (is_ped_on_mount(*iParam1))
					{
						if (is_ped_male(*iParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_F", 129, 0, false, true);
						}
					}
					else if (is_ped_male(*iParam1))
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_M", 129, 0, false, true);
					}
					else
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_F", 129, 0, false, true);
					}
					vVar1 = { get_entity_coords(*iParam1, true, true) };
					if (bVar0)
					{
						vVar1.f_2 = (vVar1.z + 1f);
					}
					set_anim_scene_origin(uParam0->f_20, vVar1, get_entity_rotation(*iParam1, 2), 2);
					load_anim_scene(uParam0->f_20);
					_0xdf7b5144e25cd3fe(uParam0->f_20, "LIVE");
					func_1134(&(uParam0->f_22), 1);
				}
				break;
			case 1:
				iVar4 = func_1135(uParam0, iParam1, bParam2, 0, uParam0->f_12);
				if (func_1133(iParam1))
				{
					iVar4 = 1;
					uParam0->f_17 = 1;
				}
				if (uParam0->f_9 == 0)
				{
					if (iVar4 == 2)
					{
						uParam0->f_12 = -1;
						uParam0->f_9 = 1;
						if (func_1136(iParam1))
						{
							uParam0->f_9 = 2;
						}
					}
					else if (iVar4 == 1)
					{
						func_1134(&(uParam0->f_22), 2);
					}
				}
				else if (iVar4 == 1)
				{
					func_1134(&(uParam0->f_22), 2);
				}
				else if (iVar4 == 2 || uParam0->f_9 > 1)
				{
					uParam0->f_9++;
					if (uParam0->f_9 > 3)
					{
						if (!does_cam_exist(uParam0[0]))
						{
							(*uParam0)[0] = create_camera(26379945, true);
						}
						func_1137((*uParam0)[0]);
						uParam0->f_16 = 1;
						return true;
					}
				}
				break;
			case 2:
				if (_is_anim_scene_loaded(uParam0->f_20, true, false) && _0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = uParam0->f_12;
						func_1060(uParam0->f_21, 0, 5);
						set_anim_scene_int(uParam0->f_20, "CameraIndex", uParam0->f_21, false);
						_set_anim_scene_playback_list_bool(uParam0->f_20, "LIVE", true);
						func_324(&(uParam0->f_18), 0, 0);
						func_1134(&(uParam0->f_22), 3);
					}
				}
				break;
			case 3:
				if (bParam3)
				{
					if (is_ped_on_mount(*iParam1))
					{
						set_ped_max_move_blend_ratio(*iParam1, 0f);
						if (!is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(*iParam1)))
						{
							return false;
						}
						if (!_is_ped_getting_into_a_mount_seat(*iParam1, true))
						{
							return false;
						}
					}
				}
				if (get_entity_speed(*iParam1) > 0.01f)
				{
					if (func_345(&(uParam0->f_18)) && func_325(&(uParam0->f_18), 0, 0) < 3000)
					{
						return false;
					}
				}
				vVar5 = { get_entity_coords(*iParam1, true, true) };
				set_anim_scene_origin(uParam0->f_20, vVar5, get_entity_rotation(*iParam1, 2), 2);
				func_358(&(uParam0->f_18));
				func_1134(&(uParam0->f_22), 4);
				break;
			case 4:
				if (uParam0->f_17)
				{
					if (bParam2)
					{
						func_1138(iParam1, uParam0);
					}
					_freeze_ped_camera_rotation(*iParam1);
					func_1134(&(uParam0->f_22), 5);
					return true;
				}
				break;
			case 5:
				return true;
		}
	}
	else
	{
		uParam0->f_16 = 1;
		return true;
	}
	return false;
}

void func_717(var uParam0)
{
	if (uParam0->f_895 != -1)
	{
		_0x3210bcb36af7621b(uParam0->f_895);
		uParam0->f_895 = -1;
		_0x9428447ded71fc7e("out_of_bounds_scenes");
	}
	_databinding_write_data_bool(&(uParam0->f_12[33]), false);
}

void func_718(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (!bParam2 && func_1139(iParam1, iParam0->f_5))
	{
		iParam0->f_9 = iParam1;
		set_bit(iParam0, 2);
		func_1140(iParam0);
	}
	else if (iParam0->f_5 != iParam1)
	{
		iParam0->f_5 = iParam1;
		clear_bit(iParam0, 2);
		iParam0->f_9 = -1;
		func_358(&(iParam0->f_3));
		if (!is_bit_set(*iParam0, 1))
		{
			func_324(&(iParam0->f_1), 0, 0);
			set_bit(iParam0, 0);
		}
	}
}

bool func_719()
{
	if (func_260())
	{
		if (Local_5688.f_1132 == Local_1685[iLocal_71]->f_3)
		{
			func_660(4);
		}
	}
	else if (Local_5688.f_1130 == get_unique_int_for_player(iLocal_79))
	{
		func_660(4);
	}
	if (func_89())
	{
		if (!is_bit_set(Local_1685[iLocal_71]->f_2, 14))
		{
			if (func_1141())
			{
				if (!is_bit_set(&Global_1048684, 4))
				{
					func_660(5);
				}
				func_1142();
				StringCopy(&cVar0, _get_label_text(func_724(Global_2359296->f_155)), 64);
				if (!is_string_null_or_empty(&(Global_3145858->f_108)))
				{
					cVar0 = { Global_3145858->f_108 };
				}
				func_725(&Local_10501, &uLocal_15670, &cVar0, &Local_5688, &(Local_5688.f_2), &(Global_3145858->f_11), Local_13917.f_159, Local_13917.f_160, Local_13917.f_162, &(Local_5688.f_1135), Local_5688.f_24, Local_5688.f_857, -1, 0, 1);
				func_1143(1);
				set_bit(&(Local_1685[iLocal_71]->f_2), 14);
			}
			return false;
		}
		else
		{
			iVar8 = 0;
			while (iVar8 <= 31)
			{
				if (does_entity_exist(&(Global_1048684->f_22[iVar8])))
				{
					iVar9 = network_get_player_index(int_to_participantindex(iVar8));
					if (network_is_player_active(iVar9))
					{
						if (_0xa0bc8faed8cfeb3c(&(Global_1048684->f_22[iVar8])))
						{
							func_1144(&(Global_1048684->f_22[iVar8]), iVar9);
						}
						else
						{
							return false;
						}
					}
				}
				iVar8++;
			}
		}
	}
	else
	{
		Global_1048684->f_398 = 1;
		func_1143(0);
		return true;
	}
	if (bLocal_75)
	{
		func_1145();
	}
	if (is_bit_set(Local_5688.f_41, 16))
	{
		Global_1048684->f_377 = Local_5688.f_2390;
		return true;
	}
	return false;
}

bool func_720()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (!func_1146(iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_721()
{
	iVar0 = func_309();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar3 = int_to_participantindex(iVar1);
		if (network_is_participant_active(iVar3))
		{
			iVar2 = func_803(iVar1);
			if (iVar2 >= iVar0)
			{
				set_bit(&(Local_5688.f_41), 13);
			}
			else
			{
				iVar1++;
			}
			if (!is_bit_set(Local_5688.f_41, 13))
			{
				if (!func_1147())
				{
					set_bit(&(Local_5688.f_41), 13);
				}
			}
		}
	}
}

void func_722(bool bParam0)
{
	if (!is_bit_set(Local_1685[iLocal_71]->f_2, 11))
	{
		if (bParam0)
		{
			func_1148();
		}
		set_bit(&(Local_1685[iLocal_71]->f_2), 11);
		func_49(1);
	}
}

void func_723()
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	if (func_309() > 1)
	{
		if (func_89())
		{
			func_1149(&Var0, func_364());
			func_366(&Var0, &(Global_1048684->f_452), &(Global_1048684->f_448), 0);
		}
		else if (func_168())
		{
			Global_1049275 = (&Global_1049275 + ((Global_3145858->f_285 + func_742()) / 60000));
		}
		else
		{
			Global_1049275 = (&Global_1049275 + (func_742() / 60000));
		}
	}
}

char* func_724(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return "GST_DEATHMATCH";
		case -533426613:
			return "GST_DEATHMATCH_TEAM";
		case -1918441640:
			return "GST_DEATHMATCH_LTS";
		case -457802746:
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case 1153715636:
			return "GST_DEATHMATCH_LMS";
		case 424482930:
			return "GST_DEATHMATCH_MM";
		case 1272390114:
			return "GST_DEATHMATCH_WOC";
		case -1581094459:
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case -1437925683:
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case -222655798:
			return "GST_DEATHMATCH_GR";
		case -725256130:
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

void func_725(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, struct<37> Param8, var uParam45, var uParam46, var uParam47, int iParam48, int iParam49, bool bParam50)
{
	func_1150(Global_1049313);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*Global_1049313)[iVar0] = { *(*uParam0)[iVar0] };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*Global_1050966)[iVar0] = uParam45[iVar0];
		iVar0++;
	}
	if (!bParam50)
	{
		if (iParam49 > 0)
		{
			func_1151(&(Global_1050050->f_101), uParam0, uParam1, &uVar1, 1);
		}
		else
		{
			func_68(Global_1050050);
			func_1151(&(Global_1050050->f_101), uParam0, uParam1, &uVar1, 0);
			func_375(0);
		}
	}
	Global_1051114 = uParam6;
	Global_1051115 = uParam7;
	*Global_1050888 = { Param8 };
	*Global_1050925 = { *uParam3 };
	*Global_1050927 = { *uParam4 };
	StringCopy(Global_1050958, sParam2, 64);
	func_1152(uParam5, uParam46, uParam47, iParam48);
}

void func_726()
{
	if (!func_89())
	{
		func_1154(func_1153());
	}
}

bool func_727()
{
	if (Local_1685[iLocal_71]->f_41 == 0)
	{
		bVar0 = (func_51() && !is_bit_set(Local_5688.f_41, 13));
		if (func_1155(&(Local_1685[iLocal_71]->f_41), bVar0))
		{
			if (!bLocal_75)
			{
				return true;
			}
		}
	}
	if (!bLocal_75)
	{
		return Local_1685[iLocal_71]->f_41 != 0;
	}
	if (func_1156())
	{
		if (!Local_10501.f_740)
		{
			func_1157(1);
			func_311();
			func_343();
			Local_10501.f_740 = 1;
		}
	}
	return Local_10501.f_740;
}

bool func_728()
{
	if (func_345(&uLocal_12889))
	{
		if (func_325(&uLocal_12889, 0, 0) > 8000)
		{
			return true;
		}
	}
	else
	{
		func_324(&uLocal_12889, 0, 0);
	}
	if ((&Local_92[iLocal_71] != -1 && Local_9759[&Local_92[iLocal_71]]->f_11 == 0) && !func_38(iLocal_71))
	{
		return false;
	}
	if (is_string_null_or_empty(&(Local_5688.f_2415[0]->f_8)) && !is_string_null_or_empty(Local_5688.f_2415[0]))
	{
		return false;
	}
	return true;
}

void func_729(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!is_string_null_or_empty(&((*uParam0)[iVar0]->f_14.f_1)))
		{
			*Global_1050050->f_101[iVar0] = { *(*uParam0)[iVar0] };
		}
		iVar0++;
	}
	func_375(0);
}

void func_730(var uParam0)
{
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_731(int iParam0)
{
	if (Global_1903133->f_1 != iParam0)
	{
		Global_1903133->f_1 = iParam0;
	}
}

bool func_732(int iParam0)
{
	return is_bit_set(&Global_1048684, iParam0);
}

int func_733(bool bParam0)
{
	Var0 = { func_450() };
	if (!func_252(Var0))
	{
		return 1;
	}
	if (Var0 == 2)
	{
		if (func_1158(func_451(Var0)))
		{
			func_1159(func_451(Var0));
			return 1;
		}
		return 0;
	}
	if (Var0 != 7)
	{
		return 1;
	}
	if (func_453(Var0))
	{
		return 1;
	}
	if (!func_454(Var0))
	{
		return 1;
	}
	if (bParam0)
	{
		func_455(Var0, 0, 0, 0, 0);
	}
	else
	{
		func_455(Var0, 0, 1, 0, 0);
	}
	return 1;
}

void func_734()
{
	iVar0 = 2;
	clear_area(Global_3145858->f_196, 9999f, iVar0);
}

void func_735(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (&Global_1051139)
	{
		return;
	}
	Global_1051139->f_2 = iParam0;
	Global_1051139->f_3 = iParam1;
	Global_1051139->f_4 = iParam2;
	Global_1051139->f_6 = iParam3;
	Global_1051139->f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = get_hash_of_this_script_name();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051139->f_1 = iVar0;
	Global_1051139 = 1;
}

void func_736(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (!uParam0->f_2)
	{
		if (_0xd9130842d7226045(func_485(*uParam0), 0))
		{
			uParam0->f_2 = 1;
		}
		return;
	}
	if (uParam0->f_3)
	{
		if (!uParam0->f_1 && _0x84848e1c0fc67dbb(uParam0->f_4))
		{
			uParam0->f_1 = 1;
		}
		if (uParam0->f_6)
		{
			_0x503703ec1781b7d6(uParam0->f_4, "isSuddenDeath", 1f);
		}
		else
		{
			_0x503703ec1781b7d6(uParam0->f_4, "isSuddenDeath", 0f);
		}
		return;
	}
	if (uParam0->f_5 <= 0)
	{
		return;
	}
	if (uParam0->f_5 > func_1160(*uParam0))
	{
		return;
	}
	fVar0 = (to_float(uParam0->f_5 + 500) / 1000f);
	uParam0->f_4 = get_sound_id();
	_0xce5d0ffe83939af1(uParam0->f_4, func_1161(*uParam0), func_485(*uParam0), 0);
	_0x503703ec1781b7d6(uParam0->f_4, "Time", fVar0);
	uParam0->f_3 = 1;
}

int func_737(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = iLocal_71;
	}
	return Local_1685[iParam0]->f_62;
}

int func_738()
{
	iVar0 = Global_3145858->f_285;
	if (func_168())
	{
		iVar0 = 60000;
	}
	return iVar0;
}

bool func_739(var uParam0)
{
	return uParam0->f_1;
}

bool func_740(var uParam0)
{
	return *uParam0 != 0;
}

void func_741(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

int func_742()
{
	return (func_325(&(Local_5688.f_1154), 0, 0) + func_1162());
}

bool func_743()
{
	if (func_492() && !func_168())
	{
		if (func_981() == 2)
		{
			return true;
		}
		if (func_1163())
		{
			return true;
		}
	}
	return false;
}

void func_744(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = bParam2;
}

void func_745(var uParam0, var uParam1)
{
	if (!is_bit_set(uParam0->f_7, 0))
	{
		return;
	}
	func_1164(uParam0, uParam1);
	func_1165(uParam0, uParam1);
}

void func_746(int iParam0)
{
	trigger_music_event(func_1166(iParam0));
}

void func_747(int iParam0)
{
	bVar0 = iParam0 == 9;
	if (!func_345(&(Local_14319.f_1)) || func_325(&(Local_14319.f_1), 0, 0) >= 1000)
	{
		if (bLocal_73)
		{
			if (func_168())
			{
				func_1167(&Local_14319, 17);
			}
			else if (is_bit_set(iLocal_57, 2))
			{
				func_1167(&Local_14319, 17);
				func_1167(&Local_14319, 19);
			}
			else if (is_ped_using_action_mode(iLocal_80) || _get_ped_crouch_movement(iLocal_80))
			{
				func_1167(&Local_14319, 18);
			}
			else
			{
				func_1167(&Local_14319, 20);
			}
		}
		func_324(&(Local_14319.f_1), 0, 0);
	}
}

bool func_748(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_749()
{
	if (Local_1685[iLocal_71]->f_54 == -99999f)
	{
		return;
	}
	if (!func_260())
	{
		func_215(&iLocal_12819);
	}
	else
	{
		remove_blip(&Local_15689);
	}
	Local_15689.f_1 = 255;
	Local_15689.f_1 = 255;
	Local_15689.f_2 = -99999f;
	Local_15689.f_3 = -99999f;
	Local_1685[iLocal_71]->f_54 = -99999f;
	Local_1685[iLocal_71]->f_55 = -99999f;
	set_waypoint_off();
}

int func_750()
{
	if (func_14())
	{
		return 0;
	}
	func_1168(&uVar3);
	iVar2 = iLocal_79;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(&(uVar3[iVar0])))
		{
			if (&uVar3[iVar0] != iLocal_79)
			{
				if (func_1063(&(uVar3[iVar0])) == func_1063(iVar2))
				{
					iVar1++;
				}
			}
			else
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_751()
{
	return 1871037390;
}

void func_752(int* iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	func_215(iParam0);
	*iParam0 = _blip_add_for_coord(1299840260, fParam2, fParam3, 0f);
	_blip_set_modifier(*iParam0, iParam4);
	_set_blip_name_from_player_string(*iParam0, _create_var_string(10, "P_WAYPOINT_BLIP", get_player_name(iParam1)));
}

int func_753(int iParam0)
{
	if (iParam0 == -1 && func_260())
	{
		return 2087220824;
	}
	bVar0 = func_614(iParam0, Local_1685[iLocal_70]->f_3);
	bVar1 = func_31(11);
	return func_1169(iParam0, bVar1, bVar0);
}

void func_754(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (bParam7)
		{
			iVar1 = 0;
		}
		else
		{
			if ((*uParam2)[iVar0]->f_1 == iParam0)
			{
				return;
			}
			if (iVar1 == -1 && !does_blip_exist(uParam2[iVar0]))
			{
				iVar1 = iVar0;
			}
			iVar0++;
		}
	}
	if (iVar1 > -1)
	{
		if (!bParam7)
		{
			(*uParam2)[iVar1] = _blip_add_for_coord(1299840260, fParam3, fParam4, 0f);
			(*uParam2)[iVar1]->f_1 = iParam0;
			_blip_set_modifier(uParam2[iVar1], iParam6);
			if (iParam5 != -879298547)
			{
				set_blip_sprite(uParam2[iVar1], iParam5, true);
			}
			_set_blip_name_from_player_string(uParam2[iVar1], _create_var_string(10, "P_WAYPOINT_BLIP", get_player_name(iParam0)));
		}
		else
		{
			*uParam1 = _blip_add_for_coord(1299840260, fParam3, fParam4, 0f);
			uParam1->f_1 = iParam0;
			_blip_set_modifier(*uParam1, iParam6);
			if (iParam5 != -879298547)
			{
				set_blip_sprite(*uParam1, iParam5, true);
			}
			_set_blip_name_from_player_string(*uParam1, _create_var_string(10, "P_WAYPOINT_BLIP", get_player_name(iParam0)));
		}
	}
}

void func_755(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if ((*uParam1)[iVar0]->f_1 == iParam0)
		{
			remove_blip((*uParam1)[iVar0]);
			(*uParam1)[iVar0]->f_1 = 255;
			(*uParam1)[iVar0]->f_2 = -99999f;
			(*uParam1)[iVar0]->f_3 = -99999f;
			return;
		}
		iVar0++;
	}
}

void func_756()
{
	if (is_bit_set(Local_5688.f_24.f_3, 30))
	{
		if (does_blip_exist(iVar12245))
		{
			remove_blip(&uLocal_12247);
		}
		if (does_blip_exist(iVar12246))
		{
			remove_blip(&uLocal_12248);
		}
	}
	if (does_blip_exist(iVar12816))
	{
		remove_blip(&iLocal_12818);
	}
	if (does_blip_exist(iVar15640))
	{
		remove_blip(&uLocal_15642);
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (does_blip_exist(&(uLocal_12249[iVar0])))
		{
			remove_blip(uLocal_12249[iVar0]);
		}
		iVar0++;
	}
}

void func_757()
{
	if (is_bit_set(iLocal_60, 7) || is_bit_set(iLocal_60, 14))
	{
		if (func_1170(iVar14238))
		{
			_0x2f901291ef177b02(iVar14238, 0);
		}
		func_758();
		clear_bit(&iLocal_60, 3);
		clear_bit(&iLocal_60, 7);
	}
}

void func_758()
{
	func_1171();
}

bool func_759(int iParam0)
{
	iVar0 = _0x59fa676177dbe4c9(iParam0);
	return (((iVar0 == 0 || iVar0 == 6) || iVar0 == 1) || iVar0 == 4);
}

bool func_760(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_701(uParam0, bParam2, 0);
	if (network_is_game_in_progress() && !bParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_761()
{
	if (Local_1685[iLocal_71]->f_1 >= 0)
	{
		if (!func_257(255))
		{
			if (!is_bit_set(iLocal_57, 22))
			{
				set_player_visible_locally(iLocal_79, false);
			}
			else
			{
				_0xc3abcfbc7d74afa5(iLocal_81, 7, 1);
				_0xc3abcfbc7d74afa5(iLocal_81, 5, 1);
				_0xc3abcfbc7d74afa5(iLocal_81, 1, 1);
			}
		}
	}
	switch (func_592(iLocal_71))
	{
		case 0:
			func_1172(1);
			break;
		case 1:
			if (func_1173())
			{
				func_1174(0, 0);
				func_1172(6);
			}
			else
			{
				clear_bit(&(Local_1685[iLocal_71]->f_2), 21);
				if (func_91(255))
				{
					func_1174(0, 1);
					func_1172(6);
					return;
				}
				func_1174(1, 0);
				func_1172(2);
			}
			break;
		case 2:
			if (func_716(&uLocal_14268, &iLocal_80, 0, 0))
			{
				if (uLocal_14268.f_16)
				{
				}
				else if (uLocal_14268.f_20 != -1)
				{
					if (_is_anim_scene_loaded(uLocal_14268.f_20, true, false))
					{
						if (!_is_anim_scene_started(uLocal_14268.f_20, false))
						{
							start_anim_scene(uLocal_14268.f_20);
						}
					}
					else
					{
						return;
					}
				}
				else
				{
					func_109(&uLocal_14268, 1, 1);
				}
				func_718(&Local_14319, 2, 0);
				func_48(1);
				if (is_ped_on_mount(iLocal_81))
				{
					clear_ped_tasks(get_mount(iLocal_81), 1, 0);
					task_stand_still(get_mount(iLocal_81), -1);
				}
				if (does_cam_exist(&(uLocal_14268[0])))
				{
					set_cam_affects_aiming(&(uLocal_14268[0]), false);
				}
				func_58(0, 8);
				func_324(&uLocal_12883, 0, 0);
				func_1175();
				func_1172(3);
			}
			break;
		case 3:
			if (func_325(&uLocal_12883, 0, 0) > 2000)
			{
				if (!is_ped_dead_or_dying(iLocal_81, true))
				{
					func_1176(iLocal_81, 0, 0);
					set_bit(&iLocal_58, 17);
				}
				func_109(&uLocal_14268, 1, 1);
				func_324(&uLocal_12883, 0, 0);
				func_185(0);
				clear_entity_last_damage_entity(iLocal_81);
				func_1172(4);
			}
			break;
		case 4:
			if (func_325(&uLocal_12883, 0, 0) > 2000)
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_all_cams(true);
				animpostfx_stop_all();
				func_1177();
				func_1172(5);
			}
			break;
		case 5:
			func_109(&uLocal_14268, 0, 1);
			func_1097(&uLocal_14268);
			func_1172(6);
			break;
	}
}

void func_762(int iParam0)
{
	if (func_448(115) && func_448(116))
	{
		func_1178(&(Global_1139381->f_4854), Global_1139381->f_4854.f_13, iParam0);
		func_385(116);
		func_385(115);
	}
}

void func_763()
{
	if (func_1179(255))
	{
		if (!func_1180())
		{
		}
	}
}

void func_764(var uParam0)
{
	if (uParam0->f_36 == 0 && uParam0->f_33 == uParam0->f_34)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
		if (uParam0->f_36 != 0)
		{
			func_1181(uParam0, uParam0->f_36, 0);
			uParam0->f_36 = 0;
		}
	}
	if (!is_bit_set(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = int_to_playerindex(iVar0);
	if (!network_is_player_active(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1182(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			set_bit(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1183(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 2:
			func_1183(iVar0, 1);
			set_bit(&(uParam0->f_36), iVar0);
			break;
		case 0:
			break;
	}
}

void func_765(var uParam0)
{
	func_1184(uParam0);
	func_1185(uParam0);
}

void func_766(var uParam0)
{
	Var0 = 15;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_7 = -1;
	Var0.f_1.f_15.f_1 = -1;
	Var0.f_1.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_1 = -1;
	Var0.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_7 = -1;
	Var0.f_228 = 4;
	Var0.f_233 = 4;
	Var0.f_233.f_1 = 10;
	Var0.f_233.f_1.f_1 = -1;
	Var0.f_233.f_1.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_2 = -1;
	Var0.f_233.f_1.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51 = 10;
	Var0.f_233.f_1.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51 = 10;
	Var0.f_233.f_1.f_51.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51 = 10;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_233.f_1.f_51.f_51.f_51.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438 = 10;
	Var0.f_438.f_1 = -1;
	Var0.f_438.f_1.f_1 = 26125758;
	Var0.f_438.f_1.f_2 = -1;
	Var0.f_438.f_1.f_3 = 26125758;
	Var0.f_438.f_1.f_5 = -1;
	Var0.f_438.f_1.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = 26125758;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_2 = -1;
	Var0.f_438.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = 26125758;
	Var0.f_489 = 2;
	Var0.f_489.f_1 = -1;
	Var0.f_489.f_1.f_1 = 26125758;
	Var0.f_489.f_1.f_2 = -1;
	Var0.f_489.f_1.f_3 = 26125758;
	Var0.f_489.f_1.f_5 = -1;
	Var0.f_489.f_1.f_5.f_1 = 26125758;
	Var0.f_489.f_1.f_5.f_2 = -1;
	Var0.f_489.f_1.f_5.f_3 = 26125758;
	uParam0->f_379 = { Var0 };
	uParam0->f_894 = 0;
}

int func_767(float fParam0, float fParam1)
{
	if (fParam0 == 0f || fParam1 == 0f)
	{
		iVar0 = 0;
		iVar1 = 262144;
		if (fParam0 == 0f)
		{
			iVar0 = 8192;
		}
		else
		{
			iVar1 |= 8192;
		}
		if (fParam1 == 0f)
		{
			iVar0 |= 2016;
		}
		else
		{
			iVar1 |= 2016;
		}
		vVar2 = { -16000f, -16000f, -1700f };
		vVar5 = { 16000f, 16000f, 2700f };
		iVar8 = func_1186(vVar2, vVar5);
		_0xb56d41a694e42e86(iVar8, iVar0, iVar1, 0, -1, -1, 0);
		_0x18262cafebb5fbe1(iVar8, iVar0, iVar1, 0, -1, -1, 0);
		if (fParam0 == 0f)
		{
			_0xefc5c6670e0b99ba();
		}
		return iVar8;
	}
	return 0;
}

void func_768()
{
	if (bVar15004)
	{
		_0xac84686c06184b0d(func_1187(Local_5688.f_1160), "rdro_ambient_ped_intensity_scenes");
		_0xac84686c06184b0d(func_1187(Local_5688.f_1162), "rdro_ambient_animal_intensity_scenes");
		_0xac84686c06184b0d(func_1187(Local_5688.f_1161), "rdro_ambient_vehicle_intensity_scenes");
	}
	else
	{
		_0x6339c1ea3979b5f7(func_1187(Local_5688.f_1160), "rdro_ambient_ped_intensity_scenes");
		_0x6339c1ea3979b5f7(func_1187(Local_5688.f_1162), "rdro_ambient_animal_intensity_scenes");
		_0x6339c1ea3979b5f7(func_1187(Local_5688.f_1161), "rdro_ambient_vehicle_intensity_scenes");
		iLocal_15006 = 1;
	}
}

float func_769(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

bool func_770(struct<2> Param0, var uParam2)
{
	if (!func_252(Param0))
	{
		return false;
	}
	func_1188(uParam2);
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

bool func_771()
{
	if (func_1189(16))
	{
		if (func_1189(32768))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_772()
{
	if (Local_5688.f_867 > 0)
	{
		return true;
	}
	if (func_12())
	{
		if (func_848())
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				Local_5688.f_858[iVar1] = func_1190(iVar1);
				iVar0 = (&Local_5688.f_858[iVar1] + iVar0);
				iVar1++;
			}
		}
		else
		{
			iVar0 = func_1191();
			Local_5688.f_858[0] = iVar0;
		}
		Local_5688.f_867 = iVar0;
		return Local_5688.f_867 > 0;
	}
	return false;
}

bool func_773()
{
	if (is_bit_set(Local_5688.f_41, 15))
	{
		return true;
	}
	if (!func_345(&(Local_5688.f_1148)))
	{
		func_324(&(Local_5688.f_1148), 0, 0);
	}
	if (func_325(&(Local_5688.f_1148), 0, 0) < 30000)
	{
		uVar4 = func_1061();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!_0x72b2e00c9bac6789(&uVar4, iVar0))
			{
			}
			else
			{
				iVar2 = int_to_playerindex(iVar0);
				if (!network_is_player_active(iVar2) || !network_is_player_a_participant(iVar2))
				{
					return false;
				}
				iVar3 = network_get_participant_index(iVar2);
				iVar1 = iVar3;
				if (!network_is_participant_active(iVar3))
				{
					return false;
				}
				if (!is_bit_set(Local_1685[iVar1]->f_2, 12))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	iVar5 = func_1192();
	iVar5 |= 1048576 | 1 | 524288 | 24 | 40;
	clear_area(Global_3145858->f_196, 5000f, iVar5);
	set_bit(&(Local_5688.f_41), 15);
	func_358(&(Local_5688.f_1148));
	return true;
}

float func_774()
{
	fVar0 = func_769(Local_5688.f_1160, Local_5688.f_1162);
	return fVar0;
}

void func_775(var uParam0, float fParam1, float fParam2)
{
	bVar0 = false;
	vVar1 = { -16000f, -16000f, -1700f };
	vVar4 = { 16000f, 16000f, 2700f };
	*uParam0 = add_pop_multiplier_area(vVar1, vVar4, fParam1, fParam2, bVar0, true);
	if (fParam1 == 0f && fParam2 == 0f)
	{
		set_all_vehicle_generators_active_in_area(vVar1, vVar4, false, !bVar0);
	}
}

void func_776(var uParam0, bool bParam1)
{
	vVar0 = { -16000f, -16000f, -1700f };
	vVar3 = { 16000f, 16000f, 2700f };
	iVar6 = 15;
	if (bParam1)
	{
		iVar6 |= 48;
	}
	*uParam0 = add_scenario_blocking_area(vVar0, vVar3, 1, iVar6);
}

int func_777()
{
	switch (func_780())
	{
		case 0:
			iVar0 = func_1193();
			iVar1 = func_1194();
			iVar2 = func_1195();
			if (!can_register_mission_entities(iVar0, iVar1, iVar2, 0))
			{
				return 0;
			}
			func_1196(1);
		case 1:
			if (!func_1197())
			{
				return 0;
			}
			func_1196(2);
		case 2:
			if (func_1198())
			{
				func_1196(3);
			}
			break;
		case 3:
			if (func_1199())
			{
				func_1196(4);
			}
			break;
		case 4:
			if (func_1200())
			{
				func_1196(5);
			}
			break;
		case 5:
			if (func_1201())
			{
				func_1196(6);
			}
			break;
		case 6:
			if (func_1202(&(Local_5688.f_52.f_172), 55542, 130887))
			{
				func_1196(7);
			}
			break;
		case 7:
			func_121(0);
			func_1196(8);
		case 8:
			return 1;
	}
	return 0;
}

bool func_778(bool bParam0)
{
	if (func_30(8))
	{
		return false;
	}
	if (func_51() && (*Global_263042)[iLocal_72]->f_1.f_55 > 0)
	{
		return true;
	}
	if (func_680() && !bParam0)
	{
		return true;
	}
	return false;
}

void func_779(bool bParam0)
{
	Var9 = 8;
	Var9.f_1 = 32;
	Var9.f_1.f_33 = 32;
	Var9.f_1.f_33.f_33 = 32;
	Var9.f_1.f_33.f_33.f_33 = 32;
	Var9.f_1.f_33.f_33.f_33.f_33 = 32;
	Var9.f_1.f_33.f_33.f_33.f_33.f_33 = 32;
	Var9.f_1.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	Var9.f_1.f_33.f_33.f_33.f_33.f_33.f_33.f_33 = 32;
	if (func_260())
	{
		iVar274 = 0;
		while (iLocal_277 <= (Global_2359296->f_26 - 1))
		{
			func_1203(iLocal_277, uVar0[iLocal_277], Var9[iLocal_277]);
			iVar274 = iLocal_277 + 1;
		}
	}
	else
	{
		func_1203(0, uVar0[0], Var9[0]);
	}
	uVar278 = Local_5688.f_867;
	iVar275 = 0;
	while (iLocal_278 <= 31)
	{
		if (iLocal_280 >= iLocal_281)
		{
		}
		else
		{
			if (!Local_92[iLocal_278]->f_3 || func_38(iLocal_278))
			{
			}
			else
			{
				uVar277 = iLocal_280 + 1;
				if (func_260())
				{
					if (bParam0)
					{
						iVar276 = func_1204(func_1063(Local_92[iLocal_278]->f_4));
					}
					else
					{
						iVar276 = func_1205(func_1063(Local_92[iLocal_278]->f_4));
					}
				}
				uVar279 = &Local_92[iLocal_278];
				if (iLocal_282 == -1)
				{
				}
				else if (&uVar0[iLocal_279] > 0)
				{
					iVar280 = get_random_int_in_range(1000, &uVar0[iLocal_279] + 1 * 1000);
					iVar280 = (floor((to_float(iLocal_283) / 1000f)) - 1);
					uVar281 = Var9[iLocal_279][iLocal_283];
					Local_5688.f_1163[iLocal_282] = uLocal_284;
					iVar282 = iLocal_283;
					while (iLocal_285 <= (&uVar0[iLocal_279] - 2))
					{
						(*Var9[iLocal_279])[iLocal_285] = Var9[iLocal_279][iLocal_285 + 1];
						iVar282 = iLocal_285 + 1;
					}
					uVar0[iLocal_279] = (&uVar0[iLocal_279] - 1);
				}
			}
			iVar275 = iLocal_278 + 1;
		}
	}
}

int func_780()
{
	return Local_5688.f_40;
}

bool func_781()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (!func_38(iVar0))
			{
				if (!is_bit_set(Local_1685[iVar0]->f_2, 2))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_782()
{
	set_bit(&(Local_5688.f_41), 4);
	Local_5688.f_1145 = get_network_time_accurate();
}

bool func_783()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if ((!is_bit_set(Local_1685[iVar0]->f_2, 5) && !is_bit_set(Local_1685[iVar0]->f_2, 7)) && !is_bit_set(Local_1685[iVar0]->f_2, 8))
			{
				iVar2 = network_get_player_index(iVar1);
				if (func_29(iVar0) != 5)
				{
					return false;
				}
				else if (is_entity_dead(get_player_ped(iVar2)))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_784()
{
	if (is_bit_set(Local_5688.f_41, 23))
	{
		if (Local_5688.f_2412 == -1)
		{
			func_1206();
		}
		if (&Global_2359296->f_6613[Local_5688.f_2413] > 0)
		{
			func_1207(&(Global_2359296->f_6613[Local_5688.f_2413]));
		}
	}
	else if (&Global_2359296->f_6613[Local_5688.f_2413] > 0)
	{
		func_1208(&(Global_2359296->f_6613[Local_5688.f_2413]));
	}
	func_324(&(Local_5688.f_2400), 0, 0);
}

bool func_785()
{
	if (is_bit_set(Local_5688.f_41, 21))
	{
		return false;
	}
	if (&Global_2359296->f_6648[Local_5688.f_2402] > 0)
	{
		return true;
	}
	return false;
}

void func_786()
{
	switch (func_1091())
	{
		case 0:
			clear_bit(&(Local_5688.f_41), 27);
			func_1209();
			func_548(1);
			break;
		case 1:
			if (!func_1210())
			{
				return;
			}
			if (func_778(0))
			{
				func_779(0);
			}
			iVar0 = 0;
			while (iVar0 <= (Global_3145858->f_6822 - 1))
			{
				func_404(iVar0, Global_3145858->f_6823[iVar0]->f_25);
				iVar0++;
			}
			iVar1 = func_1192();
			iVar1 |= 1 | 1048576 | 524288 | 24 | 40;
			clear_area(Global_3145858->f_196, 5000f, iVar1);
			func_1211();
			Local_5688.f_3293++;
			if (func_1212())
			{
				set_bit(&(Local_5688.f_41), 29);
			}
			func_548(2);
			break;
		case 2:
			if (!func_1213())
			{
				return;
			}
			if (!func_1214(&uLocal_11396))
			{
				return;
			}
			set_bit(&(Local_5688.f_41), 27);
			func_548(3);
			break;
		case 3:
			func_324(&(Local_5688.f_1154), 0, 0);
			if (is_bit_set(Local_5688.f_41, 21))
			{
				func_784();
			}
			else if (func_785())
			{
				func_324(&(Local_5688.f_2400), 0, 0);
			}
			func_793(0);
			func_548(0);
			break;
	}
}

bool func_787()
{
	if (bLocal_75)
	{
		if (Local_5688.f_1119 != 0)
		{
			return true;
		}
	}
	return false;
}

void func_788()
{
	if (func_260())
	{
		if (Local_5688.f_1132 > -1 && Local_5688.f_1132 < 8)
		{
			Local_5688.f_3294[Local_5688.f_1132] = &Local_5688.f_3294[Local_5688.f_1132] + 1;
		}
	}
	else if (Local_5688.f_1130 > -1 && Local_5688.f_1130 < 32)
	{
		Local_5688.f_3294[Local_5688.f_1130] = &Local_5688.f_3294[Local_5688.f_1130] + 1;
	}
}

bool func_789()
{
	if (!func_680())
	{
		return false;
	}
	if (func_1215())
	{
		return false;
	}
	if (Global_2359296->f_56 > 0 && Local_5688.f_3293 >= Global_2359296->f_56)
	{
		return false;
	}
	if (Global_2359296->f_57 > 0 && func_1216())
	{
		return false;
	}
	if (Global_2359296->f_56 > 0 && func_1217())
	{
		return false;
	}
	return true;
}

void func_790()
{
	if (bLocal_75)
	{
		set_bit(&(Local_5688.f_41), 1);
	}
}

void func_791()
{
	if (!is_bit_set(Local_5688.f_41, 10))
	{
		set_bit(&(Local_5688.f_41), 10);
		iVar0 = func_1218();
		if (!iVar0 == 255)
		{
			Var2 = 158;
			Var2.f_1 = iLocal_79;
			Var2.f_4 = iVar0;
			uVar1 = func_986(4, 8);
			trigger_script_event(1, &Var2, 5, 50, &uVar1);
		}
	}
}

void func_792()
{
	if (func_260())
	{
		return;
	}
	if (!func_680())
	{
		return;
	}
	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (!is_bit_set(Local_1685[iVar2]->f_2, 18) || is_bit_set(Local_1685[iVar2]->f_2, 8))
		{
		}
		else if (!Local_92[iVar2]->f_3)
		{
		}
		else if (func_1219(iVar2, iVar0, &iVar1, 1, 1))
		{
			iVar0 = iVar2;
		}
		iVar2++;
	}
	func_1220(iVar0, iVar1);
}

void func_793(bool bParam0)
{
	if (bParam0)
	{
		if (!is_bit_set(Local_5688.f_41, 26))
		{
			set_bit(&(Local_5688.f_41), 26);
		}
	}
	else if (is_bit_set(Local_5688.f_41, 26))
	{
		clear_bit(&(Local_5688.f_41), 26);
	}
}

void func_794()
{
	if (!is_bit_set(Local_5688.f_41, 0))
	{
		return;
	}
	func_1221();
	func_1222();
	func_1223();
	if (func_14())
	{
		return;
	}
	if (!func_1224())
	{
		return;
	}
	if (Local_5688.f_868 < Global_2359296->f_55)
	{
		if (Local_5688.f_868 == 1 && func_168())
		{
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (Local_92[iVar1]->f_3)
				{
					func_1220(iVar1, 1866839375);
				}
				else
				{
					iVar1++;
				}
			}
		}
		func_1225(2);
		return;
	}
	if (!func_260())
	{
		return;
	}
	if (Local_5688.f_869 < 2)
	{
		if (Local_5688.f_869 == 2 && func_168())
		{
			iVar0 = 0;
			while (iVar0 <= (Local_5688.f_857 - 1))
			{
				if (&Local_5688.f_1564[iVar0] > 0)
				{
					Local_5688.f_1132 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		func_1225(3);
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_5688.f_857 - 1))
	{
		if (!is_bit_set(&(Local_5688.f_42[iVar0]), 0))
		{
			if (&Local_5688.f_1564[iVar0] <= 0)
			{
			}
			else
			{
				set_bit(Local_5688.f_42[iVar0], 0);
				if (&Local_5688.f_1582[iVar0] < &Global_2359296->f_46[iVar0])
				{
					func_1225(2);
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_795()
{
	if (Local_5688.f_51)
	{
		return;
	}
	if (iVar14459 >= 32)
	{
		iLocal_14461 = 0;
	}
	func_1226(iVar14459);
	iLocal_14461 = iVar14459 + 1;
}

void func_796()
{
	if (network_is_session_active())
	{
		if (func_1227())
		{
			func_280(1);
		}
	}
}

void func_797()
{
	if (func_51() && func_1228())
	{
		Var1.f_1 = -1082130432;
		Var1.f_2 = -1082130432;
		Var1.f_3 = -1082130432;
		Var1.f_4 = -1082130432;
		Var1.f_5 = -1082130432;
		Var1.f_14 = 255;
		if (&Local_1685[iLocal_71] > 5)
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (Local_92[iVar0]->f_3)
				{
					if (!is_bit_set(iLocal_69, iVar0))
					{
						if (&Local_3702[iVar0])
						{
							*Local_9017[iVar0] = { Local_3702[iVar0]->f_1 };
							if (Local_10501.f_737 < (*Global_263042)[iVar0]->f_1.f_55)
							{
								Local_10501.f_737 = (*Global_263042)[iVar0]->f_1.f_55;
							}
							set_bit(&iLocal_69, iVar0);
						}
						else if (&Local_1685[iVar0] == 6)
						{
							set_bit(&iLocal_69, iVar0);
						}
						else
						{
							return;
						}
					}
				}
				else if (is_bit_set(iLocal_69, iVar0))
				{
					*Local_9017[iVar0] = { Var1 };
					clear_bit(&iLocal_69, iVar0);
				}
				iVar0++;
			}
		}
		if (iLocal_69 != 0)
		{
			set_bit(&(Local_5688.f_41), 20);
		}
	}
}

int func_798(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1639323328:
			return Local_1685[iParam1]->f_6;
		case 580738266:
			return Local_1685[iParam1]->f_7;
		case -952673229:
			return Local_1685[iParam1]->f_9;
		case -1640317778:
			return Local_1685[iParam1]->f_8;
		case 2105734739:
			return Local_1685[iParam1]->f_5;
		case -515335746:
			return -1;
		case 1691389412:
			return -1;
		case 1064633829:
			return &(Local_5688.f_3294[iParam1]);
		case 104896572:
			return Local_1685[iParam1]->f_38;
		case 1294910046:
			return (*Global_263042)[iParam1]->f_1.f_55.f_1;
		case -1128715836:
			return &(Local_5688.f_3294[Local_5688.f_568[iParam1]->f_1]);
		case -1726957461:
			return Local_92[iParam1]->f_9;
		case -645794988:
			return Local_1685[iParam1]->f_12;
		case -628568057:
			return -1;
		case 232749932:
			return -1;
		case -1458795323:
			return -1;
		default:
			break;
	}
	return -1;
}

void func_799(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, int iParam14, struct<8> Param15, int iParam23)
{
	func_1229(uParam0, iParam1, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, bParam12, iParam14, Param15, iParam13, iParam23);
}

void func_800(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, struct<8> Param13, int iParam21)
{
	func_1230(uParam0, iParam1, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12, Param13, iParam21, 0);
}

int func_801(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1639323328:
			return Local_5688.f_568[iParam1]->f_5;
		case 580738266:
			return Local_5688.f_568[iParam1]->f_6;
		case -952673229:
			return 0;
		case -1640317778:
			return 0;
		case 2105734739:
			return Local_5688.f_568[iParam1]->f_3;
		case -515335746:
			return -1;
		case 1691389412:
			return -1;
		case 1064633829:
			return -1;
		case 104896572:
			return Local_5688.f_568[iParam1]->f_7;
		case 1294910046:
			return -1;
		case -1128715836:
			return &(Local_5688.f_3294[Local_92[iParam1]->f_1]);
		case -1726957461:
			return -1;
		case -645794988:
			return Local_5688.f_568[iParam1]->f_4;
		case -628568057:
			return -1;
		case 232749932:
			return -1;
		case -1458795323:
			return -1;
		default:
			break;
	}
	return -1;
}

struct<8> func_802(int iParam0)
{
	if (is_bit_set(Local_5688.f_568[iParam0]->f_2, 1))
	{
		iVar0 = 1;
	}
	else if (is_bit_set(Local_5688.f_568[iParam0]->f_2, 2))
	{
		iVar0 = 2;
	}
	StringCopy(&cVar1, "DMC_BOT_", 64);
	StringIntConCat(&cVar1, iParam0, 64);
	StringConCat(&cVar1, "_", 64);
	StringIntConCat(&cVar1, iVar0, 64);
	StringConCat(&cVar9, _get_label_text(&cVar1), 64);
	return cVar9;
}

int func_803(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_55.f_1;
}

void func_804(var uParam0, int iParam1)
{
	if ((*uParam0)[iParam1]->f_14 != 255)
	{
		Var0.f_1 = -1082130432;
		Var0.f_2 = -1082130432;
		Var0.f_3 = -1082130432;
		Var0.f_4 = -1082130432;
		Var0.f_5 = -1082130432;
		Var0.f_14 = 255;
		*(*uParam0)[iParam1] = { Var0 };
		(*uParam0)[iParam1]->f_14 = 255;
		StringCopy(&((*uParam0)[iParam1]->f_14.f_1), "", 64);
		func_1157(1);
	}
}

void func_805(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (&Global_1051113)
	{
		func_1231(uParam0, uParam1, uParam2, bParam3);
		func_1157(0);
	}
}

bool func_806(var uParam0, int iParam1)
{
	if (network_does_network_id_exist(*uParam0))
	{
		return false;
	}
	if (iVar14339 == -1)
	{
		iLocal_14343 = iParam1;
		iLocal_14342 = func_1232();
	}
	else if (iVar14339 != iParam1)
	{
		return false;
	}
	if (!func_864(iVar14338))
	{
		return false;
	}
	vVar0 = { func_1233(iParam1, func_260()) };
	if (!func_410(vVar0))
	{
		iVar3 = func_1234(iVar14338, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 1);
	}
	*uParam0 = ped_to_net(iVar3);
	if (network_does_network_id_exist(*uParam0))
	{
		set_network_id_exists_on_all_machines(*uParam0, true);
		func_1235(iParam1, iVar3, Local_5688.f_568[iParam1]->f_1, iVar14338);
		iLocal_14343 = -1;
		iLocal_14342 = 0;
		return true;
	}
	return false;
}

void func_807(var uParam0)
{
	iVar0 = net_to_ped(*uParam0);
	if (!func_1236(iVar0, 1120685857))
	{
		set_blocking_of_non_temporary_events(iVar0, true);
		vVar1 = { get_entity_coords(iVar0, true, false) };
		task_combat_hated_targets_in_area(iVar0, vVar1, 1000f, 0, 18);
	}
}

void func_808(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_1237(iParam0, iParam1);
	}
	func_1238(4);
	func_1239();
	func_1240(1);
}

bool func_809(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 8)
	{
		return false;
	}
	if (is_bit_set(&(Local_5688.f_42[iParam0]), 0))
	{
		return true;
	}
	return false;
}

bool func_810(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 141920372);
					return true;
				case 1:
					func_827(iParam0, 164808569);
					return true;
				case 2:
					func_827(iParam0, -1180082468);
					return true;
				case 4:
					func_827(iParam0, -2031147264);
					return true;
				case 5:
					func_827(iParam0, -520666383);
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 508408868);
					return true;
				case 1:
					func_827(iParam0, 1384601825);
					return true;
				case 2:
					func_827(iParam0, -630742936);
					return true;
				case 4:
					func_827(iParam0, -1731638604);
					return true;
				case 5:
					func_827(iParam0, -558743961);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1704706755);
					return true;
				case 1:
					func_827(iParam0, 1682242652);
					return true;
				case 2:
					func_827(iParam0, 840454092);
					return true;
				case 4:
					func_827(iParam0, -1434522081);
					return true;
				case 5:
					func_827(iParam0, -831349272);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 2078338893);
					return true;
				case 1:
					func_827(iParam0, 1883772006);
					return true;
				case 2:
					func_827(iParam0, -155428591);
					return true;
				case 4:
					func_827(iParam0, 1961919243);
					return true;
				case 5:
					func_827(iParam0, -1140524787);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -787998310);
					return true;
				case 1:
					func_827(iParam0, -2096481814);
					return true;
				case 2:
					func_827(iParam0, -861600541);
					return true;
				case 4:
					func_827(iParam0, -2026035292);
					return true;
				case 5:
					func_827(iParam0, 940896555);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -441826594);
					return true;
				case 1:
					func_827(iParam0, -1932210817);
					return true;
				case 2:
					func_827(iParam0, -1723818469);
					return true;
				case 4:
					func_827(iParam0, -1730983216);
					return true;
				case 5:
					func_827(iParam0, 366193833);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 746999957);
					return true;
				case 1:
					func_827(iParam0, -1651609870);
					return true;
				case 2:
					func_827(iParam0, -1460257402);
					return true;
				case 4:
					func_827(iParam0, 1101765762);
					return true;
				case 5:
					func_827(iParam0, 60426294);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1120501019);
					return true;
				case 1:
					func_827(iParam0, -1994701304);
					return true;
				case 2:
					func_827(iParam0, -1250863492);
					return true;
				case 4:
					func_827(iParam0, 1132503084);
					return true;
				case 5:
					func_827(iParam0, -213915774);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1675579448);
					return true;
				case 1:
					func_827(iParam0, -1680249980);
					return true;
				case 2:
					func_827(iParam0, -1015287151);
					return true;
				case 4:
					func_827(iParam0, 1448625627);
					return true;
				case 5:
					func_827(iParam0, 1600700374);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1439282189);
					return true;
				case 1:
					func_827(iParam0, -442597619);
					return true;
				case 2:
					func_827(iParam0, -1405402100);
					return true;
				case 4:
					func_827(iParam0, 1747347831);
					return true;
				case 5:
					func_827(iParam0, 1294670683);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1362160601);
					return true;
				case 1:
					func_827(iParam0, 1551607978);
					return true;
				case 2:
					func_827(iParam0, 394550420);
					return true;
				case 4:
					func_827(iParam0, 435612048);
					return true;
				case 5:
					func_827(iParam0, -778032786);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1106660708);
					return true;
				case 1:
					func_827(iParam0, 1916064796);
					return true;
				case 2:
					func_827(iParam0, 573469160);
					return true;
				case 4:
					func_827(iParam0, 1197163612);
					return true;
				case 5:
					func_827(iParam0, -1011774063);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 748102310);
					return true;
				case 1:
					func_827(iParam0, -829059880);
					return true;
				case 2:
					func_827(iParam0, 909744638);
					return true;
				case 4:
					func_827(iParam0, -53235894);
					return true;
				case 5:
					func_827(iParam0, -280763211);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 495027323);
					return true;
				case 1:
					func_827(iParam0, -573822139);
					return true;
				case 2:
					func_827(iParam0, 1206664547);
					return true;
				case 4:
					func_827(iParam0, -1261396155);
					return true;
				case 5:
					func_827(iParam0, -509294217);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1740867089);
					return true;
				case 1:
					func_827(iParam0, -1407006733);
					return true;
				case 2:
					func_827(iParam0, 2064163751);
					return true;
				case 4:
					func_827(iParam0, -484344858);
					return true;
				case 5:
					func_827(iParam0, -1396252740);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1995580526);
					return true;
				case 1:
					func_827(iParam0, -1183817074);
					return true;
				case 2:
					func_827(iParam0, 1294190546);
					return true;
				case 4:
					func_827(iParam0, 271832586);
					return true;
				case 5:
					func_827(iParam0, 2097578044);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1940435144);
					return true;
				case 1:
					func_827(iParam0, 294884055);
					return true;
				case 2:
					func_827(iParam0, -1066815900);
					return true;
				case 4:
					func_827(iParam0, -1098075459);
					return true;
				case 5:
					func_827(iParam0, -1864521818);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1686573701);
					return true;
				case 1:
					func_827(iParam0, 617986395);
					return true;
				case 2:
					func_827(iParam0, -1968225552);
					return true;
				case 4:
					func_827(iParam0, 2048469463);
					return true;
				case 5:
					func_827(iParam0, -2122282772);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -699632126);
					return true;
				case 1:
					func_827(iParam0, -230140867);
					return true;
				case 2:
					func_827(iParam0, -507219687);
					return true;
				case 4:
					func_827(iParam0, 1869681799);
					return true;
				case 5:
					func_827(iParam0, -859922585);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1351931840);
					return true;
				case 1:
					func_827(iParam0, 8515760);
					return true;
				case 2:
					func_827(iParam0, -1274702436);
					return true;
				case 4:
					func_827(iParam0, -591073487);
					return true;
				case 5:
					func_827(iParam0, -553729049);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1044927295);
					return true;
				case 1:
					func_827(iParam0, 95877618);
					return true;
				case 2:
					func_827(iParam0, -236613521);
					return true;
				case 4:
					func_827(iParam0, -1760271659);
					return true;
				case 5:
					func_827(iParam0, -1803932157);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -775402270);
					return true;
				case 1:
					func_827(iParam0, 196937218);
					return true;
				case 2:
					func_827(iParam0, 691207945);
					return true;
				case 4:
					func_827(iParam0, 1051931144);
					return true;
				case 5:
					func_827(iParam0, -162401871);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -544806817);
					return true;
				case 1:
					func_827(iParam0, -503041395);
					return true;
				case 2:
					func_827(iParam0, 386423476);
					return true;
				case 4:
					func_827(iParam0, -1853991011);
					return true;
				case 5:
					func_827(iParam0, -1341463260);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -2030291121);
					return true;
				case 1:
					func_827(iParam0, -129802485);
					return true;
				case 2:
					func_827(iParam0, 1024763596);
					return true;
				case 4:
					func_827(iParam0, 1664678675);
					return true;
				case 5:
					func_827(iParam0, -2117039952);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1799236902);
					return true;
				case 1:
					func_827(iParam0, 1415190331);
					return true;
				case 2:
					func_827(iParam0, -1139137307);
					return true;
				case 4:
					func_827(iParam0, 771395735);
					return true;
				case 5:
					func_827(iParam0, -1301911081);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1468990920);
					return true;
				case 1:
					func_827(iParam0, 1656271864);
					return true;
				case 2:
					func_827(iParam0, -1782065087);
					return true;
				case 4:
					func_827(iParam0, -170418082);
					return true;
				case 5:
					func_827(iParam0, -2083812190);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 741015982);
					return true;
				case 1:
					func_827(iParam0, 418226275);
					return true;
				case 2:
					func_827(iParam0, -526979618);
					return true;
				case 4:
					func_827(iParam0, 1204077611);
					return true;
				case 5:
					func_827(iParam0, 1306927320);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1103899888);
					return true;
				case 1:
					func_827(iParam0, 788974741);
					return true;
				case 2:
					func_827(iParam0, -1427275124);
					return true;
				case 4:
					func_827(iParam0, 441149765);
					return true;
				case 5:
					func_827(iParam0, -1616296867);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1334757493);
					return true;
				case 1:
					func_827(iParam0, 1639592451);
					return true;
				case 2:
					func_827(iParam0, -218000713);
					return true;
				case 4:
					func_827(iParam0, -326595136);
					return true;
				case 5:
					func_827(iParam0, 2068511649);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1601923150);
					return true;
				case 1:
					func_827(iParam0, 2019647313);
					return true;
				case 2:
					func_827(iParam0, 80361032);
					return true;
				case 4:
					func_827(iParam0, 1328370356);
					return true;
				case 5:
					func_827(iParam0, 1292115732);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 520349240);
					return true;
				case 1:
					func_827(iParam0, 1539090900);
					return true;
				case 2:
					func_827(iParam0, 753372778);
					return true;
				case 4:
					func_827(iParam0, 1113247900);
					return true;
				case 5:
					func_827(iParam0, -798381831);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_811(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 2:
					func_827(iParam0, -271200791);
					return true;
				case 5:
					func_827(iParam0, 8877353);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1122507190);
					return true;
				case 1:
					func_827(iParam0, -1101156118);
					return true;
				case 2:
					func_827(iParam0, -72424037);
					return true;
				case 5:
					func_827(iParam0, -758048323);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 402375650);
					return true;
				case 1:
					func_827(iParam0, 1062810323);
					return true;
				case 2:
					func_827(iParam0, 158368030);
					return true;
				case 5:
					func_827(iParam0, 1433313014);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 641359967);
					return true;
				case 1:
					func_827(iParam0, 765398879);
					return true;
				case 2:
					func_827(iParam0, 438968977);
					return true;
				case 5:
					func_827(iParam0, -1481882764);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -75035911);
					return true;
				case 1:
					func_827(iParam0, 1524951530);
					return true;
				case 2:
					func_827(iParam0, 1221820387);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 230469476);
					return true;
				case 1:
					func_827(iParam0, 1227081320);
					return true;
				case 2:
					func_827(iParam0, 2007784856);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -84407849);
					return true;
				case 1:
					func_827(iParam0, 1726251513);
					return true;
				case 2:
					func_827(iParam0, 1231356170);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 206154874);
					return true;
				case 1:
					func_827(iParam0, -1811096503);
					return true;
				case 2:
					func_827(iParam0, -1775658350);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -550809026);
					return true;
				case 1:
					func_827(iParam0, 1110947996);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -96584803);
					return true;
				case 1:
					func_827(iParam0, -123177683);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -335569120);
					return true;
				case 1:
					func_827(iParam0, -891414119);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -20503957);
					return true;
				case 1:
					func_827(iParam0, 1664928344);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -242448394);
					return true;
				case 1:
					func_827(iParam0, 1970499269);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 586672844);
					return true;
				case 1:
					func_827(iParam0, 2138604239);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 347229761);
					return true;
				case 1:
					func_827(iParam0, -1847449694);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1001116282);
					return true;
				case 1:
					func_827(iParam0, 2086009986);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -434933500);
					return true;
				case 1:
					func_827(iParam0, 1781291055);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -649013377);
					return true;
				case 1:
					func_827(iParam0, -1727285779);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1980352309);
					return true;
				case 1:
					func_827(iParam0, -2034953920);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1424772636);
					return true;
				case 1:
					func_827(iParam0, -550641016);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1672997811);
					return true;
				case 1:
					func_827(iParam0, -1325988325);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 945853701);
					return true;
				case 1:
					func_827(iParam0, 867306387);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1181298966);
					return true;
				case 1:
					func_827(iParam0, 1168027500);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1706043166);
					return true;
				case 1:
					func_827(iParam0, -1771679494);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1890026898);
					return true;
				case 1:
					func_827(iParam0, -1470237463);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -2116147201);
					return true;
				case 1:
					func_827(iParam0, 717289905);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -812825764);
					return true;
				case 1:
					func_827(iParam0, -59564778);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -485004688);
					return true;
				case 1:
					func_827(iParam0, 221101707);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1178527804);
					return true;
				case 1:
					func_827(iParam0, 1596482175);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -691415903);
					return true;
				case 1:
					func_827(iParam0, -1463198692);
					return true;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -459313076);
					return true;
				case 1:
					func_827(iParam0, -1225000831);
					return true;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -202928404);
					return true;
				case 1:
					func_827(iParam0, -1080850000);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_812(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			func_827(iParam0, 993575611);
			return true;
		case 2:
			func_827(iParam0, -1905867771);
			return true;
		case 1:
			func_827(iParam0, 1106082224);
			return true;
		case 0:
			func_827(iParam0, -400280427);
			return true;
		default:
			break;
	}
	return false;
}

bool func_813(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, -717736488);
			return true;
		case 1:
			func_827(iParam0, -1272926485);
			return true;
		default:
			break;
	}
	return false;
}

bool func_814(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, 1218516131);
			return true;
		case 1:
			func_827(iParam0, 586664273);
			return true;
		case 2:
			func_827(iParam0, 872442722);
			return true;
		case 3:
			func_827(iParam0, -27656170);
			return true;
		case 4:
			func_827(iParam0, 792289808);
			return true;
		case 5:
			func_827(iParam0, 83037572);
			return true;
		case 6:
			func_827(iParam0, 332966735);
			return true;
		case 7:
			func_827(iParam0, -376088887);
			return true;
		case 8:
			func_827(iParam0, -164368378);
			return true;
		case 9:
			func_827(iParam0, -872834158);
			return true;
		default:
			break;
	}
	return false;
}

bool func_815(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		func_827(iParam0, -104707719);
	}
	else
	{
		func_827(iParam0, -1443353849);
	}
	return true;
}

bool func_816(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, 433504553);
			return true;
		case 1:
			func_827(iParam0, 1231265858);
			return true;
		case 2:
			func_827(iParam0, 1002046703);
			return true;
		case 3:
			func_827(iParam0, 2023784123);
			return true;
		case 4:
			func_827(iParam0, 1663980503);
			return true;
		default:
			break;
	}
	return false;
}

bool func_817(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_827(iParam0, 2008023596);
			return true;
		default:
			break;
	}
	func_827(iParam0, 1839456265);
	return true;
}

bool func_818(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, 281551868);
			return true;
		case 1:
			func_827(iParam0, -1226016902);
			return true;
		default:
			break;
	}
	return false;
}

bool func_819(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, -21392155);
			return true;
		case 1:
			func_827(iParam0, 298545790);
			return true;
		case 2:
			func_827(iParam0, 1878546608);
			return true;
		default:
			break;
	}
	return false;
}

bool func_820(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			func_827(iParam0, -388696912);
			return true;
		case 2:
			func_827(iParam0, -285900559);
			return true;
		case 3:
			func_827(iParam0, 223133087);
			return true;
		case 4:
			func_827(iParam0, -1584142801);
			return true;
		case 5:
			func_827(iParam0, 1874920074);
			return true;
		case 6:
			func_827(iParam0, -971985112);
			return true;
		case 7:
			func_827(iParam0, -1806513235);
			return true;
		case 8:
			func_827(iParam0, -2126010933);
			return true;
		default:
			break;
	}
	return false;
}

bool func_821(int iParam0, int iParam1)
{
	if (iParam1 >= 120)
	{
		func_827(iParam0, 569238447);
		return true;
	}
	else if (iParam1 >= 90)
	{
		func_827(iParam0, -12527053);
		return true;
	}
	else if (iParam1 >= 60)
	{
		func_827(iParam0, -1827244172);
		return true;
	}
	else if (iParam1 >= 30)
	{
		func_827(iParam0, 258094385);
		return true;
	}
	else if (iParam1 >= 20)
	{
		func_827(iParam0, 841284522);
		return true;
	}
	else if (iParam1 >= 15)
	{
		func_827(iParam0, 1768450916);
		return true;
	}
	else if (iParam1 >= 10)
	{
		func_827(iParam0, 1472776229);
		return true;
	}
	else if (iParam1 >= 5)
	{
		func_827(iParam0, -652550244);
		return true;
	}
	else if (iParam1 > 0)
	{
		func_827(iParam0, -1028377857);
		return true;
	}
	return false;
}

bool func_822(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_827(iParam0, -839144692);
			return true;
		case 1:
			func_827(iParam0, -623721286);
			return true;
		case 2:
			func_827(iParam0, -1780401460);
			return true;
		case 3:
			func_827(iParam0, -1557506722);
			return true;
		case 4:
			func_827(iParam0, -1319833165);
			return true;
		case 5:
			func_827(iParam0, -828036013);
			return true;
		default:
			break;
	}
	return false;
}

bool func_823(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1166734006);
					return true;
				case 1:
					func_827(iParam0, -1442828365);
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -30022643);
					return true;
				case 1:
					func_827(iParam0, -1833565921);
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -388253351);
					return true;
				case 1:
					func_827(iParam0, -992287384);
					return true;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 276990118);
					return true;
				case 1:
					func_827(iParam0, 1062918758);
					return true;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -2107839391);
					return true;
				case 1:
					func_827(iParam0, -283526683);
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 942626815);
					return true;
				case 1:
					func_827(iParam0, -609512695);
					return true;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 557525527);
					return true;
				case 1:
					func_827(iParam0, 226916030);
					return true;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -991989403);
					return true;
				case 1:
					func_827(iParam0, -1195881041);
					return true;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1225665142);
					return true;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1234300219);
					return true;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -399772096);
					return true;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 255771757);
					return true;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1042798183);
					return true;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 2091065136);
					return true;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1922809678);
					return true;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -666282373);
					return true;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1962755089);
					return true;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1637607714);
					return true;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1408912863);
					return true;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1480346055);
					return true;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -39086937);
					return true;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 989269821);
					return true;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1227598758);
					return true;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1591616623);
					return true;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1502616019);
					return true;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 2091782826);
					return true;
				default:
					break;
			}
			break;
		case 27:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1855341535);
					return true;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1222126411);
					return true;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 1050023623);
					return true;
				default:
					break;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, 679177202);
					return true;
				default:
					break;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -96628873);
					return true;
				default:
					break;
			}
			break;
		case 32:
			switch (iParam1)
			{
				case 0:
					func_827(iParam0, -1008721227);
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_824(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			func_827(iParam0, -1750196345);
			return true;
		case 3:
			func_827(iParam0, 340433086);
			return true;
		case 4:
			func_827(iParam0, 647642461);
			return true;
		case 5:
			func_827(iParam0, 961241791);
			return true;
		case 6:
			func_827(iParam0, 1258686008);
			return true;
		case 7:
			func_827(iParam0, -807202832);
			return true;
		case 8:
			func_827(iParam0, -515951960);
			return true;
		default:
			break;
	}
	return false;
}

void func_825(int iParam0)
{
	func_1241(iParam0);
	func_1242();
}

int func_826(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (iParam1 == 0)
		{
			return 27457000;
		}
		else if (iParam1 == 1)
		{
			return -1985454292;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			return -1722909891;
		}
		else if (iParam1 == 1)
		{
			return -1005050376;
		}
	}
	else if (iParam0 == 3)
	{
		return 1003643023;
	}
	else if (iParam0 == 4)
	{
		return 1677215183;
	}
	else if (iParam0 == 5)
	{
		if (iParam1 == 0)
		{
			return 45069099;
		}
		else if (iParam1 == 1)
		{
			return 39137574;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return -1072306748;
		}
		else if (iParam1 == 1)
		{
			return 1336102094;
		}
	}
	return 0;
}

void func_827(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

int func_828(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_827(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1243(uParam1, iParam0, Var3);
	return 1;
}

struct<2> func_829(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_830(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_831()
{
	return Global_1102219->f_3672;
}

void func_832(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_833(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_834(var uParam0, int iParam1)
{
	uVar0 = &Global_1071686->f_23887.f_366[get_random_int_in_range(0, 15)];
	iVar1 = func_1244(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_1245(uVar0, iVar2, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_835(int iParam0, var uParam1)
{
	if (!func_510(iParam0))
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

void func_836(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	if (func_372(255) == 4)
	{
		return;
	}
	if (bParam3)
	{
		if (func_410(uParam0->f_17.f_6))
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
	if (func_410(uParam1->f_6))
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
	func_59(0);
	func_59(3);
	Global_1102219->f_3919 = iParam2;
	Global_1102219->f_3920 = bParam3;
	Global_1102219->f_3921 = iParam4;
	func_838(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = { *uParam0 };
	func_839(&(Global_1102219->f_3888));
	Global_1102219->f_3888 = { *uParam1 };
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_840(Global_1102219->f_3849, 36);
	func_841(Global_1102219->f_3888, 36);
}

void func_837(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8)
{
	vVar0 = { get_entity_coords(player_ped_id(), false, false) };
	iVar3 = iParam3;
	if (!func_1246(Global_1296859->f_17, &vVar0, &iVar3))
	{
		vVar0 = { get_entity_coords(player_ped_id(), false, false) };
		iVar3 = iParam3;
	}
	func_1247(vParam0, iParam3, vVar0, iVar3, iParam4, iParam5, iParam6, iParam7, fParam8, 1);
}

void func_838(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_839(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_840(struct<29> Param0, var uParam29, int iParam30)
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

void func_841(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_842(int iParam0)
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

bool func_843(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

int func_844()
{
	return Global_1572887->f_13;
}

bool func_845()
{
	return Global_1051252->f_8;
}

void func_846()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

void func_847(int iParam0, int iParam1, vector3 vParam2)
{
	Local_5688.f_2 = iParam0;
	Local_5688.f_2.f_1 = 395262693;
	Local_5688.f_2.f_2 = Local_5688.f_24;
	Local_5688.f_2.f_3 = iParam1;
	Local_5688.f_2.f_4 = 0;
	Local_5688.f_2.f_5 = { vParam2 };
	Local_5688.f_2.f_16 = func_137();
	StringCopy(&(Local_5688.f_2.f_17), func_1248(Global_3145858->f_191), 24);
	Local_5688.f_2.f_20 = func_1040();
	Local_5688.f_2.f_8 = func_1039(&(Local_5688.f_2.f_9));
}

bool func_848()
{
	if (func_30(18))
	{
		return true;
	}
	return false;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case -559809431:
			return 2;
	}
	return 8;
}

int func_850()
{
	if (Global_3145858->f_284 > 0)
	{
		return 1;
	}
	if (Global_3145858->f_285 != 0)
	{
		return 0;
	}
	return 0;
}

void func_851(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	if (*uParam1 < 4)
	{
		(*uParam0)[*uParam1] = iParam2;
		uParam0->f_5[*uParam1] = iParam3;
		uParam0->f_10[*uParam1] = iParam4;
		*uParam1++;
	}
}

void func_852()
{
	iVar0 = -1;
	if (!is_bit_set(iLocal_60, 12))
	{
		iVar0 = func_1249();
		if (iVar0 != -1)
		{
			if (func_586())
			{
				func_1250("Sudden Death LTS", iVar0, 1174457346);
				func_1251(988196598, iVar0, 0, -1, 0);
				func_1251(866669490, iVar0, 1, -1, 1);
			}
			else
			{
				func_1250("Sudden Death Default", iVar0, 344700063);
				func_1251(988196598, iVar0, 0, -1, 0);
			}
			Global_3145858->f_37244++;
			Global_2359296->f_68 = iVar0;
			set_bit(&iLocal_60, 12);
		}
	}
}

bool func_853(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (uParam0[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_854(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	clear_bit((*uParam0)[iVar0], (iParam1 - iVar0 * 32));
}

void func_855(var uParam0, bool bParam1)
{
	if (Global_3145858->f_240 != 0)
	{
		if (!bParam1)
		{
			func_1252(uParam0);
		}
		else
		{
			*uParam0 = 2;
			uParam0->f_1 = 0;
			uParam0->f_3 = -1;
		}
		return;
	}
	if (Global_3145858->f_236 == 2)
	{
		if (!bParam1)
		{
			uParam0->f_1 = func_1253();
			*uParam0 = 3;
		}
		else
		{
			*uParam0 = 2;
			uParam0->f_1 = 0;
		}
	}
	else
	{
		uParam0->f_1 = Global_3145858->f_237;
		*uParam0 = 3;
	}
	uParam0->f_3 = Global_3145858->f_238;
	uParam0->f_4 = Global_3145858->f_239;
	uParam0->f_5 = 0;
}

struct<32> func_856(int iParam0)
{
	Var0.f_1 = 10;
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (Global_3145858->f_59128[iParam0]->f_1 <= 0)
	{
		return Var0;
	}
	if (is_bit_set(&(Global_3145858->f_59128[iParam0]), 0))
	{
		fVar32 = get_random_float_in_range(0f, 1f);
		fVar34 = 0f;
		iVar33 = 0;
		while (iVar33 <= (Global_3145858->f_59128[iParam0]->f_1 - 1))
		{
			if (fVar32 > (&Global_3145858->f_59128[iParam0]->f_105[iVar33] + fVar34))
			{
				fVar34 = (fVar34 + &Global_3145858->f_59128[iParam0]->f_105[iVar33]);
			}
			else
			{
				func_1254(iParam0, &Var0, iVar33);
			}
			else
			{
				iVar33++;
			}
		}
	}
	else
	{
		iVar36 = 0;
		while (iVar36 <= (Global_3145858->f_59128[iParam0]->f_1 - 1))
		{
			fVar35 = get_random_float_in_range(0f, 1f);
			if (fVar35 > &Global_3145858->f_59128[iParam0]->f_105[iVar36])
			{
			}
			else
			{
				func_1254(iParam0, &Var0, iVar36);
			}
			iVar36++;
		}
	}
	return Var0;
}

int func_857(int iParam0)
{
	switch (iParam0)
	{
		case -2002235300:
			return 854703859;
		case 115405099:
			return -1860329420;
		case 165751297:
			return -2111762437;
		case 710736342:
			return -1078754746;
		case -618550132:
			return 583220986;
		case 680856689:
			return 1244610670;
		case -1774451313:
			return -1119265642;
		case 1953585457:
			return 1583661538;
		case 1742487518:
			return 352402388;
		case -2055158210:
			return 2113230413;
		case 1701864918:
			return -263415986;
		case 34411519:
			return 1688152590;
		case -183018591:
			return -1422092654;
		case -1783478894:
			return -643931610;
		case -1471716628:
			return 308469619;
		case 379542007:
			return 1868573732;
		case 127400949:
			return 66733930;
		case 2075992054:
			return -1593482188;
		case 1529685685:
			return 1463707338;
		case 132728264:
			return 1965670269;
		case 389133414:
			return 1596109787;
		case 1999408598:
			return 423713854;
		case -1717423096:
			return -1769508994;
		case 1676963302:
			return -1456476541;
		case -570967010:
			return -1315480899;
		case 1845102363:
			return 1767269332;
		case 834124286:
			return -332243845;
		case 1674213418:
			return 428718594;
		case 392538360:
			return 1745420990;
		case 1838922096:
			return 151178647;
		case 1402226560:
			return -1987727151;
		case -506285289:
			return 1854500762;
		case -1504859554:
			return -1344609569;
		case 1885857703:
			return -1575794733;
		case -764310200:
			return 630632717;
		case -1511427369:
			return -846015784;
		case 2133046983:
			return 973919056;
		case -577893115:
			return 1663153103;
		case 1950175060:
			return 544828034;
		case 1681219929:
			return 1979271852;
		case 218444191:
			return -457363514;
		case -1330115686:
			return 497466042;
		case -1878508229:
			return 2012476125;
		case 954660191:
			return -316827687;
		case -1605113858:
		case 1594151226:
			return 738282662;
		default:
			break;
	}
	return 151;
}

bool func_858(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 < 0)
	{
		return false;
	}
	else if (iParam1 < 0)
	{
		return true;
	}
	*iParam2 = 1866839375;
	if (func_680() && bParam3)
	{
		if (&Local_5688.f_3294[iParam0] > &Local_5688.f_3294[iParam1])
		{
			return true;
		}
		else if (&Local_5688.f_3294[iParam0] < &Local_5688.f_3294[iParam1])
		{
			return false;
		}
	}
	if (func_982())
	{
		if (Local_5688.f_1133 == iParam0)
		{
			return true;
		}
		else if (Local_5688.f_1133 == iParam1)
		{
			return false;
		}
	}
	if (func_981() == 2)
	{
		if (!func_234())
		{
			if (&Local_5688.f_1600[iParam0] > &Local_5688.f_1600[iParam1])
			{
				return true;
			}
			else if (&Local_5688.f_1600[iParam0] < &Local_5688.f_1600[iParam1])
			{
				return false;
			}
		}
		if (func_234() || &Local_5688.f_1564[iParam0] == 0)
		{
			if (&Local_5688.f_1609[iParam0] > &Local_5688.f_1609[iParam1])
			{
				return true;
			}
			else if (&Local_5688.f_1609[iParam0] < &Local_5688.f_1609[iParam1])
			{
				return false;
			}
		}
	}
	if (&Local_5688.f_876[iParam0] > &Local_5688.f_876[iParam1])
	{
		return true;
	}
	else if (&Local_5688.f_876[iParam0] < &Local_5688.f_876[iParam1])
	{
		return false;
	}
	*iParam2 = -271313304;
	if (&Local_5688.f_894[iParam0] > &Local_5688.f_894[iParam1])
	{
		return true;
	}
	else if (&Local_5688.f_894[iParam0] < &Local_5688.f_894[iParam1])
	{
		return false;
	}
	*iParam2 = -1901798505;
	if (&Local_5688.f_885[iParam0] < &Local_5688.f_885[iParam1])
	{
		return true;
	}
	else if (&Local_5688.f_885[iParam0] > &Local_5688.f_885[iParam1])
	{
		return false;
	}
	*iParam2 = 1771857720;
	if (&Local_5688.f_903[iParam0] > &Local_5688.f_903[iParam1])
	{
		return true;
	}
	else if (&Local_5688.f_903[iParam0] < &Local_5688.f_903[iParam1])
	{
		return false;
	}
	*iParam2 = 375301172;
	if (iParam0 < iParam1)
	{
		return true;
	}
	return false;
}

void func_859(var uParam0, var uParam1)
{
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

void func_860(int iParam0)
{
	if (Local_5688.f_1134 == iParam0)
	{
		return;
	}
	Local_5688.f_1134 = iParam0;
}

int func_861(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (Global_3145858->f_59128[iParam0]->f_1 <= 0)
	{
		return 0;
	}
	if (is_bit_set(&(Global_3145858->f_59128[iParam0]), 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_59128[iParam0]->f_1 - 1))
		{
			iVar1 = func_1255(iParam0, iVar0);
			if (iVar1 > iVar2)
			{
				iVar2 = iVar1;
			}
			iVar0++;
		}
		return iVar2;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= (Global_3145858->f_59128[iParam0]->f_1 - 1))
		{
			iVar4 = func_1255(iParam0, iVar3);
			iVar5 = (iVar5 + iVar4);
			iVar3++;
		}
		return iVar5;
	}
	return 0;
}

bool func_862(int iParam0)
{
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 <= (_0x635423d55ca84fc8(iParam0) - 1))
	{
		iVar0 = _0x8df5f6a19f99f0d5(iParam0, iVar1);
		if (!func_864(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_863(int iParam0)
{
	if (!func_864(Global_3145858->f_13425[iParam0]->f_66))
	{
		return false;
	}
	if (func_1256(iParam0))
	{
		iVar0 = func_1257(iParam0);
		if (!func_1258(iVar0))
		{
			return false;
		}
	}
	return true;
}

bool func_864(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_865(int iParam0)
{
	if (is_bit_set(Global_2359296->f_459[iParam0]->f_10, 2))
	{
		return false;
	}
	return true;
}

void func_866(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	set_bit((*uParam0)[iVar0], iVar1);
}

struct<2> func_867(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					Var0 = 2075992054;
					iVar2 = 4;
					break;
				case 1:
					Var0 = -1783478894;
					iVar2 = 3;
					break;
				case 2:
					Var0 = 834124286;
					iVar2 = 3;
					break;
				case 3:
					Var0 = -764310200;
					iVar2 = 5;
					break;
				case 4:
					Var0 = -1504859554;
					iVar2 = 1;
					break;
				case 5:
					Var0 = -618550132;
					iVar2 = 1;
					break;
				case 6:
					Var0 = 2055893578;
					iVar2 = 1;
					break;
			}
			break;
	}
	if (func_491(Var0))
	{
		iVar3 = _get_weapon_clip_size(Var0);
		iVar4 = (iVar2 * iVar3);
		if (iVar2 == -1)
		{
			get_max_ammo(player_ped_id(), &iVar4, Var0);
		}
	}
	else
	{
		iVar3 = 1;
		iVar4 = 1;
	}
	Var0.f_1 = iVar4;
	return Var0;
}

int func_868(int iParam0)
{
	if (!func_437(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_869(int iParam0)
{
	switch (iParam0)
	{
		case -1511427369:
		case -1504859554:
		case -764310200:
		case -577893115:
		case -281894307:
		case 165751297:
		case 710736342:
		case 1151374672:
		case 1885857703:
		case 2133046983:
			return true;
		default:
			break;
	}
	return false;
}

void func_870(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_871(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_872(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_770(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

struct<2> func_873(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_540();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

int func_874(int iParam0, int iParam1)
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

int func_875(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_1259();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_1260();
	Var0.f_3 = iParam1;
	func_1261(Var0, 0);
	return Var0;
}

void func_876(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

void func_877(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_878(struct<2> Param0)
{
	if (!func_252(Param0))
	{
		return -1;
	}
	iVar0 = func_1262(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

void func_879(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_1263(func_887(Param0));
	iVar1 = func_27(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_844() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1264(Param0, &Var2);
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

void func_880(struct<2> Param0, int iParam2)
{
	if (!func_252(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1265(Param0);
	}
	else
	{
		func_1266(Param0, iParam2);
	}
	func_1267();
}

struct<2> func_881(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_882(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_883(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1268(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1269(cVar2);
			}
			else
			{
				func_1270();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_884(bool bParam0)
{
	if (!bParam0 && func_1271(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_885(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_886(struct<2> Param0)
{
	return func_1273(func_1272(Param0));
}

int func_887(var uParam0, var uParam1)
{
	return uParam0;
}

int func_888(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_882(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_889(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (_databinding_is_data_id_valid(&(uParam0->f_370[iVar0]->f_1[iVar1])))
			{
				_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[iVar1]), "");
			}
			iVar1++;
		}
		iVar0++;
	}
	func_1274(uParam0);
}

void func_890()
{
	Global_1071686->f_28352 = 0;
}

void func_891(var uParam0)
{
	if (_databinding_is_data_id_valid(uParam0->f_1))
	{
		_databinding_remove_data_entry(uParam0->f_1);
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_12[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_12[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (_databinding_is_data_id_valid(&(uParam0->f_3[iVar0])))
		{
			_databinding_remove_data_entry(&(uParam0->f_3[iVar0]));
		}
		iVar0++;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2))
	{
		_databinding_remove_data_entry(uParam0->f_2);
	}
	if (_databinding_is_data_id_valid(*uParam0))
	{
		_databinding_remove_data_entry(*uParam0);
	}
}

void func_892()
{
	Global_1071686->f_15 = 0;
	Global_1071686->f_14 = 50f;
}

void func_893(var uParam0)
{
	func_1274(uParam0);
	func_717(uParam0);
	_0xc5cb91d65852ed7e("MP_OutofArea");
	_display_hud_component(-2124237476);
	func_1275(4);
	func_1275(8);
}

void func_894(var uParam0)
{
	func_712(9, 0);
	_databinding_write_data_bool(&(uParam0->f_12[33]), false);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (_databinding_is_data_id_valid(&(uParam0->f_370[iVar0]->f_1[iVar1])))
			{
				_databinding_remove_data_entry(&(uParam0->f_370[iVar0]->f_1[iVar1]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (_databinding_is_data_id_valid(uParam0->f_10))
	{
		_databinding_remove_data_entry(uParam0->f_10);
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_remove_data_entry(uParam0->f_11);
	}
	if (_databinding_is_data_id_valid(uParam0->f_881))
	{
		_databinding_remove_data_entry(uParam0->f_881);
	}
	if (_databinding_is_data_id_valid(uParam0->f_6))
	{
		_databinding_remove_data_entry(uParam0->f_6);
	}
}

void func_895(bool bParam0)
{
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_18726)
	{
		bVar1 = func_466(iVar2);
		if (((bParam0 && !bVar1) || (!bParam0 && bVar1)) || Global_3145858->f_18727[iVar2]->f_8 == 0)
		{
		}
		else
		{
			iVar0 = Global_3145858->f_18727[iVar2]->f_8;
			if (!is_model_valid(iVar0))
			{
				iVar0 = 207132841;
			}
			set_model_as_no_longer_needed(iVar0);
		}
		iVar2++;
	}
}

char* func_896()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

bool func_897(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1071686->f_21416.f_260), iParam0);
}

void func_898(bool bParam0)
{
	if (bParam0)
	{
		if (func_1276(3))
		{
			func_1277(3);
		}
	}
	else if (!func_1276(3))
	{
		func_1278(3);
	}
}

void func_899(bool bParam0)
{
	iVar0 = player_id();
	if (bParam0)
	{
		if (func_1276(2))
		{
			func_1277(2);
		}
		if (_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1276(2))
		{
			func_1278(2);
		}
		if (!_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 1);
		}
	}
	_0xa63fcad3a6fec6d2(iVar0, bParam0);
	_0x7146cf430965927c(27, bParam0);
}

int func_900(int iParam0)
{
	return &(Global_1956200->f_1710.f_2[iParam0]);
}

void func_901(int iParam0, int iParam1)
{
	func_1279(1);
	func_1280(0, iParam0);
	func_1280(1, iParam1);
}

void func_902(int iParam0)
{
	if (!func_748(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_903(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_904(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_905(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_906(int iParam0, int iParam1)
{
	iVar0 = func_1282(iParam0);
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

void func_907(int iParam0)
{
	Global_1146212->f_47689.f_44[func_1282(iParam0)]->f_1 = 0;
}

int func_908(int iParam0)
{
	if (!func_904(iParam0))
	{
		return 0;
	}
	iVar0 = func_1281(iParam0, 1);
	if (!func_1283(&(Global_1146212->f_35859.f_919[iVar0])))
	{
		return 1;
	}
	iVar3 = func_1284(&(Global_1146212->f_35859.f_919[iVar0]), 1);
	iVar4 = 0;
	while (iVar4 < Global_1146212->f_35859[iVar3]->f_5)
	{
		iVar1 = Global_1146212->f_35859[iVar3][iVar4];
		switch (func_1285(iParam0, iVar1))
		{
			case 0:
				func_1286(iVar1, iParam0, iVar4);
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
						func_1286(iVar1, iParam0, iVar4);
						func_1287(Global_1146212->f_35859.f_9503[iVar5]);
						Global_1146212->f_35859.f_11700 = (Global_1146212->f_35859.f_11700 - 1);
						*Global_1146212->f_35859.f_9503[iVar5] = { *Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700] };
						func_1287(Global_1146212->f_35859.f_9503[Global_1146212->f_35859.f_11700]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1288(iVar1, 1);
				func_1289(iVar2, -1);
				if (Global_1146212->f_35859.f_3116[iVar2]->f_29 <= 0)
				{
					func_1290(iVar2, 0);
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
			func_1291(Global_1146212->f_35859.f_919[iVar0]);
			return 1;
		}

bool func_909(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1292(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_910(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_911(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_1293(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_1292(bParam1), iParam0, iParam3);
}

int func_912(int iParam0)
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

bool func_913(var uParam0)
{
	if (uParam0->f_1)
	{
		return true;
	}
	else if (uParam0->f_10)
	{
		return true;
	}
	else if (uParam0->f_9)
	{
		return true;
	}
	else if (uParam0->f_4)
	{
		return true;
	}
	else if (uParam0->f_5)
	{
		return true;
	}
	else if (uParam0->f_3)
	{
		return true;
	}
	else if (uParam0->f_8)
	{
		return true;
	}
	else if (uParam0->f_6)
	{
		return true;
	}
	else if (uParam0->f_7)
	{
		return true;
	}
	else if (uParam0->f_11)
	{
		return true;
	}
	else if (uParam0->f_2)
	{
		return true;
	}
	else if (uParam0->f_12)
	{
		return true;
	}
	return false;
}

void func_914()
{
	if (!func_373(132, 255))
	{
		return;
	}
}

void func_915(bool bParam0)
{
	if (!bParam0 && Global_1956200->f_1431.f_108)
	{
		return;
	}
	iVar0 = get_player_ped(player_id());
	if (_is_attribute_overpowered(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_1 = _0x4c9f782180712742(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_3 = _0x4c9f782180712742(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_2 = _0x4c9f782180712742(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_4 = _0xb429f58803d285b1(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_6 = _0xb429f58803d285b1(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_5 = _0xb429f58803d285b1(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	Global_1956200->f_1431.f_108 = 1;
}

void func_916(int iParam0, bool bParam1)
{
	if (!func_1294(32))
	{
		return;
	}
	func_1295(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_161(32);
	func_1296();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_1297(&(Global_1952637->f_2365));
	func_1298(&(Global_1952637->f_2365));
	func_1299(4);
	if (bParam1)
	{
		func_1300(iParam0, 1, 1, 0);
	}
	func_1295(27, 0, 131074, 0, 0);
	func_1295(34, 0, 131072, 0, 0);
}

bool func_917(bool bParam0)
{
	if (!func_1301(-931834499, bParam0))
	{
		return false;
	}
	return true;
}

void func_918()
{
	func_1302(&(Global_1139381->f_3876.f_480));
}

void func_919()
{
	func_1303();
	func_1304();
}

void func_920(float fParam0)
{
	Global_1956200->f_1561.f_3 = fParam0;
}

struct<12> func_921()
{
	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = player_ped_id();
	iVar13 = player_id();
	switch (Global_1956200->f_1565.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1956200->f_1565.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1956200->f_1565.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1956200->f_1565.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1956200->f_1565.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1956200->f_1565.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1956200->f_1565.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = get_entity_health(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = _get_ped_stamina(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = _0xa81d24ae0af99a5e(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1305(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1305(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1305(2, 2);
			break;
	}
	return Var0;
}

void func_922(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	iVar0 = player_ped_id();
	func_1306();
	func_1307();
	func_1308(&uParam0, iVar0);
	func_1309(&uParam0, iVar0);
	func_1310(&uParam0, iVar0);
	func_1311(&uParam0);
	func_1312();
	func_1313(1);
}

void func_923()
{
	fVar0 = func_536(-763706539, -1397419524);
	Global_1956200->f_1431.f_74.f_2 = fVar0;
	fVar1 = func_536(258444835, 1449106310);
	Global_1956200->f_1431.f_74.f_3 = fVar1;
	fVar2 = func_536(845057552, -458184788);
	fVar3 = func_536(845057552, 1468884243);
	Global_1956200->f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_535(-1645702932);
	Global_1956200->f_1431.f_74.f_5 = uVar4;
}

void func_924()
{
	_0xd2d74f89df844a50(&(Global_1956200->f_1565));
}

void func_925(int iParam0, int iParam1)
{
	_0xa6aa9f56bc6cff58(iParam0, iParam1);
	func_1314(&(Global_1293346->f_12));
	func_1314(&(Global_1293346->f_16));
}

void func_926()
{
	if (is_entity_dead(Global_34))
	{
		return;
	}
	_0xc395355843be134b(Global_34);
	if (get_current_ped_weapon(Global_34, &iVar0, false, 0, true))
	{
		if ((((iVar0 == -1415022764 || _is_weapon_binoculars(iVar0)) || iVar0 == -1016714371) || iVar0 == 332793555) || iVar0 == 191707516)
		{
			set_current_ped_weapon(Global_34, -1569615261, true, 0, false, false);
		}
	}
}

void func_927(var uParam0)
{
	func_1315(uParam0);
	func_1316(&(uParam0->f_16));
	func_1317(&(uParam0->f_21));
	func_1318(&(uParam0->f_22));
	func_1319(&(uParam0->f_25));
	func_1320(&(uParam0->f_47));
	func_1321(&(uParam0->f_51));
	func_1322(&(uParam0->f_54));
	func_1323(&(uParam0->f_57));
}

void func_928(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108365->f_34[iVar0]->f_10 = 0;
}

void func_929(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
		if (func_1324(iParam0))
		{
			func_1325(iParam0);
		}
	}
}

void func_930(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28350), iParam0);
}

void func_931(var uParam0, int iParam1)
{
	func_489(uParam0, iParam1);
}

bool func_932(var uParam0, int iParam1)
{
	return func_488(*uParam0, iParam1);
}

int func_933(int iParam0)
{
	return (Global_1296859->f_21 - iParam0);
}

void func_934(var uParam0, int iParam1)
{
	if (func_932(uParam0, iParam1))
	{
		return;
	}
	func_1015(uParam0, iParam1);
}

int func_935(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_454(func_881(0)) && func_887(func_881(0)) == 7)
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
			iVar6 = func_1326(iParam0);
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
			return func_1327(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_488(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_1328(iParam0, 1);
	if (!bVar0)
	{
		if (func_1329(iParam0, bParam1))
		{
			return func_1327(iParam0);
		}
		else if (func_1330(iParam0, bParam1))
		{
			if (func_1331(iParam0, bParam1))
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
		return func_1326(iParam0);
	}
	else if (func_1329(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_1332(func_872(func_881(0)), 1) == 395262693)
		{
			return func_1327(iParam0);
		}
		else
		{
			return func_1327(iParam0);
		}
	}
	else if (func_1330(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

void func_936(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 22, uParam1);
}

void func_937(bool bParam0)
{
	if (bParam0)
	{
		func_1333();
		_0x9b39b0555cc692b5();
		return;
	}
	func_1333();
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

bool func_938(int iParam0)
{
	return func_1334(iParam0, 2);
}

void func_939(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = (iParam1 / iParam3);
	iVar1 = (iParam1 % iParam3);
	iVar2 = (shift_left(1, iParam4) - 1);
	iVar3 = 0;
	iVar4 = 2147483647;
	iVar5 = (iParam4 * iVar1);
	iVar3 = shift_left(iParam2, iVar5);
	iVar4 = (iVar4 - shift_left(iVar2, iVar5));
	(*uParam0)[iVar0] = (uParam0[iVar0] && iVar4);
	(*uParam0)[iVar0] = (uParam0[iVar0] || iVar3);
}

void func_940(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_8123[iParam0] = (&Global_8123[iParam0] - (Global_8123[iParam0] && iParam1));
		return;
	}
	Global_1071686->f_19674[iParam0] = (&Global_1071686->f_19674[iParam0] - (Global_1071686->f_19674[iParam0] && iParam1));
}

bool func_941(int iParam0)
{
	if (func_275(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_942()
{
	return true;
}

int func_943(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	if (is_bit_set(iParam0, 31))
	{
		iVar0++;
		iParam0 ^= -1;
	}
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_944(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1335(iParam0);
	}
	else
	{
		func_1336(iParam0);
	}
}

void func_945(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1337(sParam0);
	}
	else
	{
		func_1338(sParam0);
	}
}

void func_946(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1339(iParam0);
	}
	else
	{
		func_1340(iParam0);
	}
}

void func_947(float fParam0)
{
}

void func_948()
{
	animpostfx_stop("PlayerDrunk01");
	Global_1940085->f_15 = 0f;
}

int func_949(var uParam0, int iParam1, var uParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*uParam2 = 0;
		return 0;
	}
	if ((*uParam0)[iVar0]->f_1 < 0)
	{
		*uParam2 = 0;
		return 0;
	}
	*uParam2 = &(*uParam0)[iVar0]->f_2[(*uParam0)[iVar0]->f_1];
	return 1;
}

bool func_950()
{
	return &Global_3145858 == -504335712;
}

bool func_951(int iParam0)
{
	return func_347(&(Global_524288->f_6), iParam0);
}

int func_952(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	else if (iParam0 == 9999)
	{
		return 0;
	}
	if (bVar1)
	{
		iVar0 = get_random_int_in_range(0, Global_3145858->f_49703);
		if (!func_260() || is_bit_set(Global_3145858->f_49704[iVar0]->f_3, iParam0))
		{
			return iVar0;
		}
	}
	else
	{
		return func_1341();
	}
	return 0;
}

void func_953(int iParam0, var uParam1)
{
	_0xb7e52a058b07c7e2(iParam0, &(uParam1->f_14), &(uParam1->f_18));
}

struct<61> func_954(int iParam0, bool bParam1)
{
	Var0.f_4 = 3;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = 1;
	Var0.f_42.f_1 = -1;
	Var0.f_42.f_3 = -1082130432;
	Var0.f_42.f_4 = 2;
	Var0.f_42.f_5 = -1082130432;
	Var0.f_42.f_7 = -1082130432;
	Var0.f_42.f_9 = -1082130432;
	Var0.f_42.f_11 = -1082130432;
	Var0.f_54.f_2 = -1;
	Var0.f_54.f_5 = -1;
	if (Local_1685[iLocal_71]->f_3 > -1)
	{
		Var0.f_2 = Local_1685[iLocal_71]->f_3;
	}
	else
	{
		Var0.f_2 = 0;
	}
	Var0.f_3 = Local_1685[iLocal_71]->f_4;
	Var0 = iLocal_81;
	Var0.f_1 = iLocal_79;
	Var0.f_11 = iParam0;
	Var0.f_9 = Global_3145858->f_49704[Var0.f_3]->f_27;
	if (&Global_1051123 == 1)
	{
		Var0.f_8 = func_1342();
	}
	else if (Local_5688.f_24 == -1581094459 && Global_2359296->f_6686 != 0)
	{
		Var0.f_8 = func_1343(Global_2359296->f_6686);
		Var0.f_10 = Global_2359296->f_6687;
	}
	else
	{
		Var0.f_8 = Global_3145858->f_49704[Var0.f_3]->f_26;
	}
	iVar61 = 0;
	while (iVar61 <= 2)
	{
		Var0.f_4[iVar61] = &Global_3145858->f_59031[iVar61];
		iVar61++;
	}
	if (!func_31(1) || is_bit_set(Global_3145858->f_49704[Var0.f_3]->f_6, 18))
	{
		set_bit(&(Var0.f_12), 0);
	}
	if (!func_31(26))
	{
		set_bit(&(Var0.f_12), 1);
	}
	if (!func_31(60))
	{
		set_bit(&(Var0.f_12), 6);
	}
	if (func_31(6) || is_bit_set(Global_3145858->f_49704[Var0.f_3]->f_5, 11))
	{
		set_bit(&(Var0.f_12), 2);
	}
	if (func_31(28))
	{
		set_bit(&(Var0.f_12), 3);
	}
	if (!func_31(29))
	{
		set_bit(&(Var0.f_12), 4);
	}
	if (!func_31(33))
	{
		set_bit(&(Var0.f_12), 5);
	}
	if (is_bit_set(Global_3145858->f_49704[Var0.f_3]->f_6, 14))
	{
		set_bit(&(Var0.f_12), 7);
	}
	else
	{
		clear_bit(&(Var0.f_12), 7);
	}
	Var0.f_13 = Global_2359296->f_74[Var0.f_2]->f_6;
	Var0.f_14 = { Global_2359296->f_74[Var0.f_2]->f_2 };
	Var0.f_42 = { func_1344(bParam1) };
	Var0.f_18 = { Local_15995 };
	uVar62 = &Global_3145858->f_49704[Var0.f_3]->f_8[Var0.f_2];
	Var0.f_54 = func_1345(&uVar62);
	Var0.f_54.f_3 = Var0.f_2;
	Var0.f_54.f_4 = func_31(12);
	Var0.f_54.f_5 = &Global_3145858->f_49704[Var0.f_3]->f_17[Var0.f_2];
	return Var0;
}

void func_955(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		func_1346(uParam0, uParam1, uParam2);
	}
	else
	{
		func_1347(uParam0, uParam2);
	}
}

void func_956(int iParam0)
{
	Var0 = 162;
	Var0.f_1 = iLocal_79;
	Var0.f_4 = iParam0;
	uVar5 = func_986(5, 8);
	if (_0x179a6f0ee2e79026(&uVar5))
	{
		trigger_script_event(1, &Var0, 5, 53, &uVar5);
	}
}

void func_957(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 <= 0f)
	{
		return;
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	else if (fParam0 > fParam1)
	{
		return;
	}
	if ((Global_1071686->f_21952.f_578 != fParam0 || Global_1071686->f_21952.f_579 != fParam1) || Global_1071686->f_21952.f_580 != fParam2)
	{
		Global_1071686->f_21952.f_578 = fParam0;
		Global_1071686->f_21952.f_579 = fParam1;
		Global_1071686->f_21952.f_580 = fParam2;
	}
}

void func_958(int iParam0)
{
	if (Global_3145858->f_49704[iParam0]->f_105 != 0)
	{
		set_bit(&iLocal_58, 1);
		func_1348(Global_3145858->f_49704[iParam0]->f_105);
	}
	else if (is_bit_set(iLocal_58, 1))
	{
		func_82();
		clear_bit(&iLocal_58, 1);
	}
}

void func_959()
{
	func_637(1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_146(iVar0);
		iVar0++;
	}
}

void func_960(int iParam0)
{
}

void func_961(int iParam0)
{
	if (Global_1071686->f_21689.f_258 != iParam0)
	{
		if (iParam0 > 0)
		{
			Global_1071686->f_21689.f_258 = iParam0;
		}
	}
}

void func_962(bool bParam0)
{
	iVar0 = get_id_of_this_thread();
	if (func_326(67) != bParam0)
	{
		if (bParam0)
		{
			Global_1291734->f_11.f_306 = iVar0;
		}
	}
	func_487(67, bParam0);
}

int func_963(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051252->f_16[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051252->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_964(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(Global_3145858->f_52165[iParam0]->f_7, (8 + iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_965(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (is_bit_set(Global_3145858->f_52165[iParam0]->f_7, (0 + iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_966(int iParam0, var uParam1)
{
	if (((iParam0 < 0 || Global_3145858->f_51943[iParam0]->f_3 == 0) || Global_3145858->f_51943[iParam0]->f_4 == -1) || is_string_null_or_empty(Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4]))
	{
		return 0;
	}
	Var0 = { *Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4] };
	if (is_bit_set(Global_3145858->f_52528[Global_3145858->f_51943[iParam0]->f_4]->f_16, 1))
	{
		func_1349(&Var0, uParam1, &bVar51, 0);
	}
	if (bVar51)
	{
		return 0;
	}
	switch (Global_3145858->f_51943[iParam0]->f_3)
	{
		case 1:
			func_1350(iParam0, uParam1, &cVar16, &cVar32, &bVar49, &bVar50, &iVar52);
			if (is_bit_set(Global_3145858->f_51943[iParam0]->f_9, 0))
			{
				_0xdd1232b332cbb9e7(11, 1, 0);
			}
			bVar48 = func_1351(Global_3145858->f_51943[iParam0]->f_4);
			switch (iVar52)
			{
				case 0:
					return func_568(&Var0, -2, 0, 0, 0, bVar48);
				case 1:
					return func_566(&Var0, &cVar16, -2, 0, 0, 0, bVar48, bVar49);
				case 2:
					return func_573(&Var0, &cVar16, &cVar32, -2, 0, 0, 0, bVar48, bVar49, bVar50);
				default:
					break;
			}
			break;
		case 2:
			if (is_bit_set(Global_3145858->f_51943[iParam0]->f_9, 0))
			{
				_0xdd1232b332cbb9e7(12, 1, 0);
			}
			return func_564(&Var0, Global_3145858->f_51943[iParam0]->f_8, -2, 0, 0, 0, bVar48);
		case 3:
			return func_264(&Var0, -2, 0, 0, 0, bVar48);
		case 4:
			func_1352(Global_3145858->f_51943[iParam0]->f_10, 1, 0, 0, 0, 0, 0);
			return 0;
	}
	return 0;
}

char* func_967(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_968(int iParam0)
{
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
		case 8:
			return 1713937168;
		default:
			break;
	}
	return 1105014447;
}

void func_969(int iParam0)
{
	Var0 = 159;
	Var0.f_1 = iLocal_79;
	Var0.f_4 = iParam0;
	_trigger_script_event_2(&Var0, 5, 51, get_id_of_this_thread());
}

void func_970(int iParam0, int iParam1)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_5 != iParam1)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_5 = iParam1;
		func_481(iParam0);
	}
}

void func_971(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_3 != iParam1)
	{
		Global_1071686->f_21689[iParam0]->f_3 = iParam1;
		func_481(iParam0);
	}
}

void func_972(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_5 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_5 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_5);
			}
		}
		Global_1071686->f_21689[iParam0]->f_5 = iParam1;
		func_481(iParam0);
	}
}

void func_973(int iParam0)
{
	if (!_0x72b2e00c9bac6789(&(Global_1071686->f_21952.f_583), iParam0))
	{
		_0x31010318ba9897ac(&(Global_1071686->f_21952.f_583), iParam0);
		func_481(iParam0);
	}
}

void func_974(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_4 != iParam1)
	{
		if (does_blip_exist(&(Global_1071686->f_21689[iParam0])))
		{
			if (Global_1071686->f_21689[iParam0]->f_4 != 0)
			{
				_set_blip_flash_style(&(Global_1071686->f_21689[iParam0]), Global_1071686->f_21689[iParam0]->f_4);
			}
		}
		Global_1071686->f_21689[iParam0]->f_4 = iParam1;
		func_481(iParam0);
	}
}

void func_975(int iParam0)
{
	if (Local_5688.f_2521[&Local_92[iParam0]][1] == iLocal_79 || Local_5688.f_2521[&Local_92[iParam0]][0] == iLocal_79)
	{
		func_637(1);
	}
	else if (func_1353(iLocal_72, 1))
	{
		func_154(1);
	}
}

bool func_976()
{
	if (is_bit_set(Local_5688.f_24.f_5, 2) || is_bit_set(Local_5688.f_24.f_5, 1))
	{
		return true;
	}
	return false;
}

void func_977(int iParam0, int iParam1)
{
	if (Global_1071686->f_21689[iParam0]->f_1 != iParam1)
	{
		Global_1071686->f_21689[iParam0]->f_1 = iParam1;
		func_481(iParam0);
	}
}

bool func_978(int iParam0)
{
	if ((iParam0 == 518773733 || iParam0 == 742064790) || iParam0 == 749266870)
	{
		return true;
	}
	return false;
}

bool func_979(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_168())
	{
		return true;
	}
	switch (func_981())
	{
		case 0:
		case 1:
			if (Global_3145858->f_284 <= 0)
			{
				return false;
			}
			if (func_260())
			{
				if (iParam2 != -1 && (func_1354(iParam2, 0) + iParam3) >= Global_3145858->f_284)
				{
					return true;
				}
			}
			else if (iParam1 != -1 && (func_1355(iParam1, 0) + iParam3) >= Global_3145858->f_284)
			{
				return true;
			}
			break;
		case 2:
			iVar3 = -1;
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (func_38(iVar0) || is_bit_set(Local_1685[iVar0]->f_2, 0))
				{
				}
				else if (!Local_92[iVar0]->f_7)
				{
				}
				else if (func_90(Local_92[iVar0]->f_4))
				{
				}
				else if (func_260())
				{
					if (!is_bit_set(iVar1, Local_92[iVar0]->f_1))
					{
						iVar2++;
						set_bit(&iVar1, Local_92[iVar0]->f_1);
						iVar3 = Local_92[iVar0]->f_1;
					}
				}
				else
				{
					iVar4++;
				}
				iVar0++;
			}
			if (func_260())
			{
				if (iVar2 <= 1 && iParam0 != iVar3)
				{
					return true;
				}
			}
			else if (iVar4 <= 1)
			{
				return true;
			}
			break;
	}
	return false;
}

float func_980(int iParam0, int iParam1)
{
	return func_1356(iParam0, iParam1, 1, 1);
}

int func_981()
{
	return Local_5688.f_24.f_1;
}

bool func_982()
{
	return Local_5688.f_1133 != -1;
}

bool func_983()
{
	iVar0 = Local_5688.f_1121;
	if (iVar0 >= 32 || iVar0 < 0)
	{
		return false;
	}
	return Local_5688.f_1121 != 255;
}

bool func_984(int iParam0)
{
	if (func_586())
	{
		if ((!is_ped_dead_or_dying(Local_92[iParam0]->f_6, true) && !func_91(255)) && !is_bit_set(Local_1685[iParam0]->f_2, 19))
		{
			iVar0 = 1;
		}
	}
	else if (func_260())
	{
		if (func_1354(Local_1685[iParam0]->f_3, 0) >= func_1357())
		{
			iVar0 = 1;
		}
	}
	else if (Local_5688.f_2389 != -1)
	{
		if (func_1355(iParam0, 0) >= Local_5688.f_2389)
		{
			iVar0 = 1;
		}
	}
	else if (!func_1358())
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_985(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_864(iParam1))
	{
		return false;
	}
	*iParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*iParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*iParam0, true);
		}
		return true;
	}
	return false;
}

var func_986(int iParam0, int iParam1)
{
	return func_1359(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

float func_987(int iParam0)
{
	fVar0 = 1f;
	if (iParam0 == -1569615261)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_10);
	}
	else if (_is_weapon_melee(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_11);
	}
	else if (func_990(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_7);
	}
	else if (_is_weapon_throwable(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_12);
	}
	else if (func_1360(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_9);
	}
	else if (_is_weapon_pistol(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699);
	}
	else if (_is_weapon_revolver(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_1);
	}
	else if (_is_weapon_sniper(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_4);
	}
	else if (_is_weapon_repeater(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_2);
	}
	else if (_is_weapon_rifle(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_3);
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_5);
	}
	else if (iParam0 == 1885857703)
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_6);
	}
	else if (func_988(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_20);
	}
	else if (func_989(iParam0))
	{
		fVar0 = (fVar0 * Global_2359296->f_6699.f_21);
	}
	return fVar0;
}

bool func_988(int iParam0)
{
	if (iParam0 == -628784915 || iParam0 == -1193642378)
	{
		return true;
	}
	return false;
}

bool func_989(int iParam0)
{
	if (iParam0 == 1609145491 || iParam0 == -1829236809)
	{
		return true;
	}
	return false;
}

bool func_990(int iParam0)
{
	return (iParam0 == 539292904 || iParam0 == -1504859554);
}

void func_991(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (!is_bit_set(Local_1685[iParam0]->f_2, 13))
		{
			set_bit(&(Local_1685[iParam0]->f_2), 13);
		}
		if (Local_1685[iParam1]->f_12 > 0)
		{
			if (is_bit_set(Local_5688.f_24.f_3, 20))
			{
				func_1361(Local_1685[iParam1]->f_12);
			}
			func_557(iParam0, Local_1685[iParam1]->f_12);
			*iParam2 = Local_1685[iParam1]->f_12;
		}
		else
		{
			func_557(iParam0, 1);
		}
	}
}

void func_992(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (func_1362(&(Local_92[iParam0]), 0) && iParam1 == network_get_participant_index(Local_5688.f_2521[&Local_92[iParam0]][0]))
		{
			func_1363(1, 0);
			play_sound_frontend("PURCHASE", "HUD_MP_FREE_ROAM", true, 0);
			play_sound_frontend("EVENT_AVAILABLE", "HUD_MP_FREE_MODE", true, 0);
			func_1364(7);
			func_557(iParam0, Global_2359296->f_6564);
			*iParam2 = Global_2359296->f_6564;
			bVar0 = true;
		}
		if (func_1362(&(Local_92[iLocal_71]), 1) && iParam1 == network_get_participant_index(Local_5688.f_2521[&Local_92[iLocal_71]][1]))
		{
			func_1363(2, 1);
			play_sound_frontend("EVENT_AVAILABLE", "HUD_MP_FREE_MODE", true, 0);
			func_557(iParam0, Global_2359296->f_6566);
			if (!bVar0)
			{
				*iParam2 = Global_2359296->f_6566;
				bVar0 = true;
			}
			else
			{
				*iParam2 = (*iParam2 + Global_2359296->f_6566);
			}
		}
		if (!bVar0)
		{
			func_557(iParam0, 1);
		}
	}
}

void func_993(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 != -1)
	{
		if (is_bit_set(Local_1685[iParam0]->f_44, 0))
		{
			if (!func_1170(iVar14241))
			{
				iLocal_14246 = func_564("HT_TARG_K", 1105014447, -2, 0, 0, 0, 1);
			}
		}
		if (func_994(iParam3))
		{
			func_557(iParam0, iParam3);
			*iParam2 = iParam3;
		}
		else
		{
			func_557(iParam0, 1);
		}
	}
}

bool func_994(int iParam0)
{
	if (iParam0 > 0)
	{
		return true;
	}
	return false;
}

char* func_995(int iParam0)
{
	sVar0 = "RET_FED_KS";
	if (iParam0 == 1)
	{
		sVar0 = "RET_FED_KS1";
	}
	if (!is_string_null_or_empty(sVar0))
	{
		sVar0 = _create_var_string(2, sVar0, iParam0);
	}
	return sVar0;
}

void func_996(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&uParam19))
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
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_1365(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 5, &uParam19);
}

void func_997(int iParam0)
{
	if (!func_475(iParam0))
	{
		Global_1102219->f_3520 = (Global_1102219->f_3520 || iParam0);
	}
}

int func_998()
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Local_15728[iVar0]->f_7 == 4)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Local_15728[iVar0]->f_4 > fVar1)
		{
			fVar1 = Local_15728[iVar0]->f_4;
			iVar2 = iVar0;
		}
		iVar0++;
	}
	return iVar2;
}

char* func_999(int iParam0)
{
	if (iParam0 == 1905553950)
	{
		return "inventory_items_mp";
	}
	return "inventory_items";
}

bool func_1000(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1001(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1511427369:
		case -1504859554:
		case -764310200:
		case -577893115:
		case 1885857703:
		case 2133046983:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_1002(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1003(int iParam0)
{
	if (!func_437(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1366(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

var func_1004(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1367(sParam0, sParam1, iParam2);
	return uVar20;
}

char* func_1005(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WT_INVALID";
		case -1569615261:
			return "WT_UNARMED";
		case 416676503:
			return "WT_PISTOL";
		case -1101297303:
			return "WT_REVOLVER";
		case 970310034:
			return "WT_RIFLE";
		case -594562071:
			return "WT_ASSAULTRIFLE";
		case 860033945:
			return "WT_SHOTGUN";
		case -1212426201:
			return "WT_SNIPERRIFLE";
		default:
			return _get_weapon_name(iParam0);
	}
	return "WT_INVALID";
}

int func_1006(int iParam0, int iParam1, bool bParam2)
{
	if (&iLocal_743[iParam0] == -1)
	{
		if (!bParam2 && Local_92[iParam0]->f_3)
		{
			return func_1009(iParam0, iParam1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (iParam0 == &Local_5688.f_1230[iVar0])
				{
					iLocal_743[iParam0] = iVar0;
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	else
	{
		return &(iLocal_743[iParam0]);
	}
	return -1;
}

bool func_1007(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3)
		{
		}
		else if (is_bit_set(Local_1685[iVar0]->f_60, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1008(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (is_bit_set(Local_1685[iParam1]->f_2, 18) && !is_bit_set(Local_5688.f_3291, iParam1))
	{
		func_1368(iParam1, iParam0);
	}
	if (is_bit_set(Local_5688.f_24.f_5, 1))
	{
		Local_5688.f_2618[iParam0] = 0;
		if (func_1362(iParam0, 0))
		{
			iVar1 = get_unique_int_for_player(Local_5688.f_2521[iParam0][0]);
			if (iVar1 != 255)
			{
				func_1369(iVar1, 1);
			}
			func_1369(iParam0, 0);
			func_358(Local_5688.f_2324[iParam0]);
		}
		_0xd426e2e3288469d6(&(Local_5688.f_2323), iParam2);
	}
	if (is_bit_set(Local_5688.f_24.f_5, 5))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (&Local_5688.f_2663[iVar0] == iParam4)
			{
				Local_5688.f_2663[iVar0] = 255;
			}
			if (&Local_5688.f_2663.f_3[iVar0] == iParam4)
			{
				Local_5688.f_2663.f_3[iVar0] = 255;
			}
			iVar0++;
		}
	}
	if (iParam0 == Local_5688.f_1130)
	{
		Local_5688.f_1130 = -1;
	}
	if (iParam3 == Local_5688.f_1120)
	{
		Local_5688.f_1120 = 255;
	}
	if (iParam0 == Local_5688.f_1131)
	{
		Local_5688.f_1131 = -1;
	}
	if (iParam3 == Local_5688.f_1121)
	{
		Local_5688.f_1121 = 255;
	}
	Local_5688.f_1196[iParam0] = -1;
	clear_bit(&(Local_5688.f_1229), iParam0);
	Local_5688.f_921[iParam0] = 0;
	Local_5688.f_954[iParam0] = 0;
	Local_5688.f_987[iParam0] = 0;
	Local_5688.f_1020[iParam0] = 0;
	Local_5688.f_1053[iParam0] = 0;
	Local_5688.f_1086[iParam0] = 0;
	if (!func_260() && &Local_5688.f_3294[iParam0] != 0)
	{
		Local_5688.f_3294[iParam0] = 0;
	}
	func_804(&Local_9759, iParam0);
	Local_5688.f_1230[iParam0] = func_394();
	if (Local_1685[iParam1]->f_50 != -1)
	{
		if (&Local_5688.f_1619[Local_1685[iParam1]->f_50] == iParam3)
		{
			Local_5688.f_1619[Local_1685[iParam1]->f_50] = func_394();
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (&Local_5688.f_1680[iVar0] == iParam4)
		{
			Local_5688.f_1680[iVar0] = 255;
		}
		iVar0++;
	}
	if (!Local_92[iParam1]->f_3)
	{
		Local_92[iParam1] = -1;
	}
	clear_bit(&(Local_5688.f_1263), iParam0);
	iLocal_776[iParam0] = -1;
	iLocal_809[iParam0] = -1;
	func_358(Local_972[iParam0]);
	func_358(Local_842[iParam0]);
	func_1370(iParam0);
	set_bit(&(Local_1685[iLocal_71]->f_60), iParam0);
}

int func_1009(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (Local_92[iParam0]->f_3)
		{
			if (iParam0 != -1)
			{
				if (&iLocal_743[iParam0] != -1)
				{
					return &(iLocal_743[iParam0]);
				}
				else if (&Local_92[iParam0] != -1)
				{
					iLocal_743[iParam0] = &Local_92[iParam0];
					return &(Local_92[iParam0]);
				}
			}
			iParam1 = network_get_player_index(int_to_participantindex(iParam0));
		}
		else
		{
			return -1;
		}
	}
	iVar0 = get_unique_int_for_player(iParam1);
	if (iParam0 != -1 && &iLocal_743[iParam0] == -1)
	{
		iLocal_743[iParam0] = iVar0;
	}
	return iVar0;
}

int func_1010(int iParam0)
{
	if (func_1371(60000))
	{
		return 1983;
	}
	if (Local_5688.f_51)
	{
		return 1983;
	}
	if (func_260())
	{
		return func_1372(-1);
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (network_is_participant_active(iVar2))
		{
			if (!is_bit_set(Local_1685[iVar1]->f_2, 8))
			{
				if (iVar1 == iParam0)
				{
				}
				else if (&Local_5688.f_1196[get_unique_int_for_player(network_get_player_index(iVar2))] != -1)
				{
					iVar0++;
				}
				else if (func_29(iVar1) == 0 || is_bit_set(Local_1685[iVar1]->f_2, 5))
				{
				}
				else
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	if (iVar0 + 1 <= Global_3145858->f_194)
	{
		return 1602;
	}
	return 1983;
}

bool func_1011(int iParam0)
{
	if (!is_bit_set(Local_5688.f_3291, iParam0) || !is_bit_set(Local_9759.f_741, iParam0))
	{
		return false;
	}
	return true;
}

bool func_1012(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3)
		{
		}
		else if (!is_bit_set(Local_1685[iVar0]->f_60, iParam0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1013(int iParam0)
{
	clear_bit(&(Local_5688.f_3291), iParam0);
	clear_bit(&(Local_9759.f_741), iParam0);
}

bool func_1014(var uParam0, int iParam1)
{
	return (uParam0->f_20 && iParam1) != 0;
}

void func_1015(var uParam0, int iParam1)
{
	func_1373(uParam0, iParam1);
}

int func_1016()
{
	return uVar12900;
}

void func_1017(int iParam0)
{
	if (iParam0 != iVar12899)
	{
		iLocal_12902 = iParam0;
	}
}

bool func_1018()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_11 == 1141570454)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1019(var uParam0)
{
	return func_1374(uParam0);
}

bool func_1020()
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar1]->f_11 == 1141570454)
		{
			sVar2 = func_509(Global_2359296->f_459[iVar1]->f_1);
			if (!_0xd9130842d7226045(sVar2, 0))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	if (!_0xd9130842d7226045("RDRO_Countdown_Sounds", 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_1021()
{
	iVar0 = 1;
	if (!is_bit_set(iLocal_58, 15))
	{
		iVar1 = 0;
		while (iVar1 < Global_3145858->f_6822)
		{
			if (is_bit_set(Global_3145858->f_6823[iVar1]->f_13, 19))
			{
			}
			else
			{
				set_bit(&iLocal_58, 14);
			}
			else
			{
				iVar1++;
			}
		}
		set_bit(&iLocal_58, 15);
	}
	if (is_bit_set(iLocal_58, 14))
	{
		if (!func_1375(2))
		{
			iVar0 = 0;
		}
	}
	if (is_bit_set(Local_5688.f_24.f_5, 5) || func_617())
	{
		if (!func_1375(0))
		{
			iVar0 = 0;
		}
	}
	if (is_bit_set(Local_5688.f_24.f_2, 0))
	{
		if (!func_1375(1))
		{
			iVar0 = 0;
		}
	}
	if (func_31(69))
	{
		request_named_ptfx_asset(134607740);
		if (!has_named_ptfx_asset_loaded(134607740))
		{
			iVar0 = 0;
		}
	}
	iVar0 = (iVar0 && func_1376());
	return iVar0;
}

void func_1022(var uParam0, var uParam1)
{
}

bool func_1023(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(((func_466(iVar0) || Global_3145858->f_18727[iVar0]->f_8 == 0) || does_entity_exist(uParam0[iVar0])));
		Stack.Push(iVar0);
		Call_Loc(iParam1);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (bParam3 && !func_1377(iVar1))
			{
			}
			else
			{
				if (!is_model_valid(iVar1))
				{
					iVar1 = 207132841;
				}
				if (!func_864(iVar1))
				{
					iVar2 = 0;
				}
				else if (bVar3)
				{
					iVar2 = 0;
				}
				else
				{
					(*uParam0)[iVar0] = create_object(iVar1, Global_3145858->f_18727[iVar0]->f_1, false, false, true, false, true);
					func_1378(uParam0[iVar0], iVar0, iParam2, bParam4, 0);
					bVar3 = true;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1024(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_32696 - 1))
	{
		if (Global_3145858->f_32697[iVar0]->f_11 == -1)
		{
		}
		else if (_does_propset_exist(uParam0[iVar0]))
		{
		}
		else
		{
			_request_propset(Global_3145858->f_32697[iVar0]->f_11);
			if (!_has_propset_loaded(Global_3145858->f_32697[iVar0]->f_11))
			{
				iVar1 = 0;
			}
			else
			{
				(*uParam0)[iVar0] = _create_propset(Global_3145858->f_32697[iVar0]->f_11, Global_3145858->f_32697[iVar0]->f_1, Global_3145858->f_32697[iVar0]->f_13, Global_3145858->f_32697[iVar0]->f_10, 1200f, false, is_bit_set(Global_3145858->f_32697[iVar0]->f_14, 0));
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1025()
{
	if (Global_3145858->f_6822 == 0)
	{
		return true;
	}
	iVar1 = 1;
	iVar2 = 1;
	if (is_bit_set(Local_5688.f_24.f_2, 12))
	{
		iVar2 = 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_6822)
	{
		if (func_1379(iVar0))
		{
			if (!func_1381(iVar0, &uLocal_11396, iVar2, &uLocal_11798, 1, &(Local_5688.f_2684[iVar0]), Local_5688.f_2684[iVar0]->f_2, Local_5688.f_2684[iVar0]->f_1, func_1380(iVar0)))
			{
				iVar1 = 0;
			}
			else
			{
				func_1382(iVar0);
				func_1102(iVar0);
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_1026(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (Global_2359296->f_458 - 1))
	{
		if (is_bit_set(Global_2359296->f_459[iVar1]->f_10, 11))
		{
			if (iParam0[iVar1] == -1)
			{
				func_1383(Global_2359296->f_459[iVar1]->f_2, Global_2359296->f_459[iVar1]->f_1, (*iParam0)[iVar1], 5, 1056964608);
			}
			if (iParam0[iVar1] == -1)
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

int func_1027(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= (Global_3145858->f_18726 - 1))
	{
		if (is_bit_set(Global_3145858->f_18727[iVar1]->f_19, 19))
		{
			if (iParam0[iVar1] == -1)
			{
				func_1383(Global_3145858->f_18727[iVar1]->f_1, Global_3145858->f_18727[iVar1]->f_8, (*iParam0)[iVar1], 5, 1056964608);
			}
			if (iParam0[iVar1] == -1)
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

void func_1028()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_5285 - 1))
	{
		if (!is_bit_set(iVar12243, iVar0))
		{
			if (func_1384(iVar0) || func_1385(iVar0))
			{
				iVar1 = Global_2359296->f_5286[iVar0]->f_4;
				if (iVar1 < 0)
				{
				}
				else
				{
					iVar2 = 1;
					if (func_1385(iVar0))
					{
						iVar2 = 4;
					}
					iLocal_12179[iVar0] = func_1386(iVar1, 0f, 0f, 0f);
					uLocal_12212[iVar0] = _0xbd3324281e8b9933(&(iLocal_12179[iVar0]), iVar2, -1, 0);
					set_bit(&iLocal_12245, iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_1029()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_5285 - 1))
	{
		if (!is_bit_set(iVar12244, iVar0))
		{
			if (func_1387(iVar0))
			{
				iVar1 = Global_2359296->f_5286[iVar0]->f_4;
				if (iVar1 < 0)
				{
				}
				else
				{
					iLocal_12179[iVar0] = func_1386(iVar1, 0f, 0f, 0f);
					_0xeb2ed1dc3aec0654(&(iLocal_12179[iVar0]), 1, 0, 1, 1);
					set_bit(&iLocal_12246, iVar0);
				}
			}
		}
		iVar0++;
	}
}

bool func_1030(var uParam0)
{
	if (Global_3145858->f_37517 <= 0)
	{
		return true;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_37517 - 1))
	{
		if (Global_3145858->f_37518[iVar0]->f_1 == 0)
		{
		}
		else if (!func_1388((*uParam0)[iVar0], iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

Vector3 func_1031(int iParam0, bool bParam1)
{
	vVar0 = { Global_3145858->f_196 };
	switch (iParam0)
	{
		case -504335712:
			vVar3 = { func_1389(bParam1) };
			break;
		case 395262693:
			vVar3 = { func_1390() };
			break;
		case -933924539:
			vVar3 = { func_1391(bParam1) };
			break;
	}
	if (!func_410(vVar3))
	{
		vVar0 = { vVar3 };
	}
	return vVar0;
}

int func_1032()
{
	return Global_265377->f_124517.f_71.f_35;
}

int func_1033(var uParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_14())
	{
		if (Global_2892896->f_16 > -1 && Global_2892896->f_16 < Global_3145858->f_38735)
		{
			if (bParam4)
			{
				Local_1685[iLocal_71]->f_45 = Global_2892896->f_16;
				Global_1049276 = Global_2892896->f_16;
			}
			*uParam0 = { Global_3145858->f_38736[Global_2892896->f_16]->f_1 };
			*fParam1 = Global_3145858->f_38736[Global_2892896->f_16]->f_4;
			return Global_2892896->f_16;
		}
	}
	if (iParam3 == -1)
	{
		if (func_260())
		{
			iVar0 = func_750();
		}
		else
		{
			iVar0 = func_1392();
		}
		if (iVar0 == -1)
		{
			return -1;
		}
	}
	else
	{
		iVar0 = iParam3;
	}
	iVar2 = 0;
	while (iVar2 <= (Global_3145858->f_38735 - 1))
	{
		if (func_260())
		{
			if (!is_bit_set(&(Global_3145858->f_38736[iVar2]->f_6[iParam2]), 1))
			{
			}
			else
			{
				Jump @267; //curOff = 234
				if (!is_bit_set(&(Global_3145858->f_38736[iVar2]->f_6[0]), 1))
				{
				}
				else if (func_260() && !is_bit_set(&(Global_3145858->f_38736[iVar2]->f_6[iParam2]), 0))
				{
				}
				else if (iVar0 != iVar1)
				{
					iVar1++;
				}
				else
				{
					*uParam0 = { Global_3145858->f_38736[iVar2]->f_1 };
					*fParam1 = Global_3145858->f_38736[iVar2]->f_4;
					if (bParam4)
					{
						Local_1685[iLocal_71]->f_45 = iVar2;
						Global_1049276 = iVar2;
					}
					return iVar2;
				}
			}
			iVar2++;
			return -1;
		}
	}
}

void func_1034()
{
	func_1393(4);
	iVar0 = 0;
	while (iVar0 <= (150 - 1))
	{
		if ((!func_510(iVar0) || iVar0 == 136) || _0x8f4f050054005c27(&(Global_2359296->f_14981), iVar0))
		{
		}
		else
		{
			func_1394(iVar0);
		}
		iVar0++;
	}
}

void func_1035()
{
	iVar0 = 0;
	while (iVar0 <= (150 - 1))
	{
		if (!_0x8f4f050054005c27(&(Global_2359296->f_14981), iVar0))
		{
		}
		else
		{
			func_1395(iVar0);
		}
		iVar0++;
	}
}

char* func_1036(var uParam0, var uParam1)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

var func_1037(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_1038(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

var func_1039(var uParam0)
{
	if (Global_1572887->f_266.f_92)
	{
		*uParam0 = { Global_1572887->f_266.f_68 };
	}
	return Global_1572887->f_266.f_92;
}

int func_1040()
{
	switch (Global_1572887->f_106.f_14)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
		case 6:
			return 4;
		case 7:
			return 5;
		case 8:
			return 6;
		case 9:
			return 7;
		case 3:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 14:
			return 12;
		case 15:
			return 13;
		case 16:
			return 14;
		case 17:
			return 15;
		default:
			break;
	}
	return 16;
}

void func_1041()
{
	iVar1 = get_player_team(player_id());
	switch (iVar1)
	{
		case -1:
			iVar0 = func_1396(network_player_id_to_int());
			break;
		case 0:
			iVar0 = 1965820175;
			break;
		case 1:
			iVar0 = -1164995627;
			break;
		case 2:
			iVar0 = -1406404850;
			break;
		case 3:
			iVar0 = 892340488;
			break;
		case 4:
			iVar0 = 570352286;
			break;
		case 5:
			iVar0 = 1809249877;
			break;
		case 6:
			iVar0 = 1185197041;
			break;
		case 7:
			iVar0 = -1901478918;
			break;
		case 8:
			iVar0 = 2097877918;
			break;
		default:
			return;
	}
	set_ped_relationship_group_hash(player_ped_id(), iVar0);
	if (!is_entity_dead(player_ped_id()) && is_ped_on_mount(player_ped_id()))
	{
		set_ped_relationship_group_hash(get_mount(player_ped_id()), func_1397());
	}
}

void func_1042(int iParam0)
{
	iLocal_14454 = iParam0;
}

void func_1043()
{
	if (!func_1398(255))
	{
		return;
	}
	if (!func_1399())
	{
		return;
	}
	if (func_1400() > 0)
	{
		iLocal_14348 = iVar14346 + 1;
		if (iVar1672 == -1)
		{
			fVar0 = func_1401((0.25f * IntToFloat(iVar14346)), 0f, 1f);
			func_1402(fVar0);
		}
		else
		{
			func_1403(&uLocal_1037, 1);
		}
	}
	func_1404(&uLocal_1037);
}

void func_1044()
{
	func_1405();
	if (iVar14346 != 0)
	{
		if (iVar1672 == -1)
		{
			func_1402(0);
		}
		else
		{
			clear_bit(&iLocal_57, 7);
		}
		iLocal_14348 = 0;
	}
}

void func_1045()
{
	if (func_31(0))
	{
		func_1406();
	}
	if (func_31(16))
	{
		Global_1051119 = 1;
	}
}

void func_1046(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_1047(bool bParam0, vector3 vParam1)
{
	func_1408(func_1407(bParam0, vParam1), Global_3145858->f_202);
}

void func_1048(var uParam0, int iParam1)
{
	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1409(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = int_to_playerindex(iVar4);
		if (!network_is_player_active(iVar5))
		{
		}
		else
		{
			set_bit(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

void func_1049()
{
	func_1410(2);
}

void func_1050()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Local_92[iVar0]->f_3 && network_is_player_active(Local_92[iVar0]->f_4))
		{
			func_1411(iVar0, Local_92[iVar0]->f_4);
		}
		iVar0++;
	}
}

bool func_1051(int iParam0, struct<10> Param1, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22)
{
	*iParam0 = 255;
	if (!Param1.f_8)
	{
		return false;
	}
	Var0 = { Param1.f_9 };
	if (!network_is_handle_valid(&Var0))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(&Var0))
	{
		return false;
	}
	iVar7 = network_get_player_from_gamer_handle(&Var0);
	if (!network_is_player_active(iVar7))
	{
		return false;
	}
	if (!network_is_player_a_participant(iVar7))
	{
		return false;
	}
	*iParam0 = iVar7;
	return true;
}

int func_1052()
{
	iVar2 = func_137();
	iVar3 = func_137();
	iVar4 = Local_1685[iLocal_71]->f_3;
	iVar5 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((Local_92[iVar0]->f_3 && iVar0 != iLocal_71) && !func_38(iVar0))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			if (func_255(iVar1) && !is_bit_set(Local_1685[iVar0]->f_2, 0))
			{
				if (!func_168())
				{
					if (is_bit_set(Local_1685[iLocal_71]->f_2, 8) || !func_260())
					{
						return get_player_ped(iVar1);
					}
					if (Local_1685[iVar0]->f_3 == iVar4)
					{
						return get_player_ped(iVar1);
					}
					else if (func_614(iVar4, Local_1685[iVar0]->f_3))
					{
						if (iVar2 == func_137())
						{
							iVar2 = get_player_ped(iVar1);
						}
					}
					if (iVar3 == func_137())
					{
						iVar3 = get_player_ped(iVar1);
					}
				}
				else if (func_1355(iVar0, 0) > iVar5)
				{
					iVar5 = func_1355(iVar0, 0);
					iVar3 = get_player_ped(iVar1);
				}
			}
		}
		iVar0++;
	}
	if (iVar2 != func_137())
	{
		return iVar2;
	}
	else if (iVar3 != func_137())
	{
		return iVar3;
	}
	return iLocal_81;
}

void func_1053(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!does_entity_exist(iParam1))
	{
		iParam4 = 1;
	}
	func_96(iParam0);
	func_111(1024);
	if (bParam5)
	{
		func_445(16);
	}
	func_1412(iParam1);
	func_1413(iParam4);
	if (bParam2)
	{
		Global_1102219->f_26.f_4 = 1;
		Global_1102219->f_26.f_5 = iParam3;
	}
}

var func_1054()
{
	return Global_1102219->f_26.f_3337;
}

int func_1055(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_1414(Param0))
	{
		return -1;
	}
	iVar1 = func_888(Param0);
	if (iVar1 >= 0)
	{
		func_1415(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_1415(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_1056(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_1416(iParam0))
	{
		func_175(1);
	}
	func_1417(iParam0, 0);
	func_1057((*Global_1835011)[iParam0]->f_1, 1, func_1418(&((*Global_1835011)[iParam0]->f_30), 2097152), 1);
	func_876(iParam0);
	if (func_1419(iParam0, &iVar0))
	{
		func_556(func_829(1511238709, iVar0), 1);
	}
}

void func_1057(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_252(Param0))
	{
		return;
	}
	if (!func_453(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1420(Param0);
	}
	if (!func_252(func_881(0)))
	{
		func_880(Param0, 3);
		func_71(bParam3);
		func_883(!bParam4);
		func_1421(Param0, -1);
		if (bParam2 && !func_1422(2))
		{
			func_533(&Global_0, 1024);
		}
		func_885(1);
	}
	else
	{
		func_1421(Param0, -1);
		func_880(Param0, 4);
		func_1423(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_887(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1424(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

void func_1058()
{
	bVar2 = Local_5688.f_857 != true;
	func_1425(bVar2);
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (iVar0 == iVar1)
				{
					set_relationship_between_groups(2, func_147(iVar0), func_147(iVar1));
				}
				else
				{
					set_relationship_between_groups(6, func_147(iVar0), func_147(iVar1));
				}
				iVar1++;
			}
			set_relationship_between_groups(4, iVar15555, &(uLocal_83[iVar0]));
			set_relationship_between_groups(4, &(uLocal_83[iVar0]), iVar15555);
			iVar0++;
		}
		return;
	}
	func_1426();
	iVar0 = 55;
	while (iVar0 <= 86)
	{
		set_relationship_between_groups(4, iVar15555, func_1427(iVar0, 1));
		set_relationship_between_groups(4, func_1427(iVar0, 1), iVar15555);
		iVar0++;
	}
}

int func_1059()
{
	if (!func_14())
	{
		iVar0 = func_1032();
		func_651(iVar0, 0, 1);
		return iVar0;
	}
	return Global_2892896->f_13;
}

int func_1060(int iParam0, int iParam1, int iParam2)
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

var func_1061()
{
	return Global_265377->f_124517.f_142.f_1;
}

int func_1062(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_35;
}

int func_1063(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 == 255)
	{
		return -1;
	}
	if (network_is_player_active(&(Global_1296859->f_154[iParam0])))
	{
		return get_player_team(&(Global_1296859->f_154[iParam0]));
	}
	return -1;
}

bool func_1064(var uParam0, float fParam1, bool bParam2)
{
	if ((bParam2 || !func_778(1)) || &Local_92[iLocal_71] == -1)
	{
		iVar0 = func_1204(Local_1685[iLocal_71]->f_3);
		if (func_1033(uParam0, fParam1, iVar0, -1, 1) == -1)
		{
			iVar1 = get_random_int_in_range(0, Global_3145858->f_38735);
			Local_1685[iLocal_71]->f_45 = iVar1;
			*uParam0 = { Global_3145858->f_38736[iVar1]->f_1 };
			*fParam1 = Global_3145858->f_38736[iVar1]->f_4;
		}
	}
	else if (&Local_5688.f_1163[&Local_92[iLocal_71]] == -1)
	{
		return false;
	}
	else
	{
		iVar2 = &Local_5688.f_1163[&Local_92[iLocal_71]];
		Local_1685[iLocal_71]->f_45 = iVar2;
		*uParam0 = { Global_3145858->f_38736[iVar2]->f_1 };
		*fParam1 = Global_3145858->f_38736[iVar2]->f_4;
	}
	clear_ped_tasks_immediately(iLocal_81, true, true);
	set_entity_coords(iLocal_81, *uParam0, true, false, true, true);
	set_entity_heading(iLocal_81, *fParam1);
	vLocal_14450 = { *uParam0 };
	return true;
}

void func_1065(bool bParam0)
{
	if (bParam0)
	{
		func_59(129);
	}
	else
	{
		func_385(129);
	}
}

void func_1066(bool bParam0)
{
	if (!bParam0)
	{
		func_385(20);
	}
	else
	{
		func_59(20);
	}
}

bool func_1067()
{
	return func_1428(2, 15);
}

void func_1068(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_59(71);
		if (bParam2)
		{
			func_59(72);
		}
		Global_1102219->f_3802 = iParam0;
	}
	else
	{
		func_385(71);
		func_385(72);
	}
}

void func_1069(int iParam0)
{
	func_59(87);
	Global_1102219->f_3846 = iParam0;
}

void func_1070()
{
	func_59(85);
}

void func_1071(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_1429(vParam0, fParam3))
	{
		func_380(1, bParam4);
	}
}

void func_1072(bool bParam0)
{
	if (!is_ped_on_mount(iLocal_81) || func_672(255))
	{
		return;
	}
	iVar0 = get_mount(iLocal_81);
	if (!network_has_control_of_entity(iVar0))
	{
		return;
	}
	_0xc9151483cc06a414(iVar0);
	func_196(iVar0, 0);
	func_1430(iVar0);
	if (bParam0)
	{
		task_stand_still(iVar0, -1);
		set_blocking_of_non_temporary_events(iVar0, true);
		set_animal_tuning_bool_param(iVar0, 48, true);
		set_ped_config_flag(iVar0, 174, true);
	}
}

bool func_1073(bool bParam0)
{
	if (!is_bit_set(iLocal_57, 1))
	{
		Var1.f_10 = 7;
		vVar12 = { get_entity_coords(iLocal_81, true, false) };
		bVar16 = get_ground_z_for_3d_coord(vVar12, &uVar15, false);
		if (bVar16)
		{
			vVar12.f_2 = uVar15;
			set_entity_coords(iLocal_81, vVar12 + Vector(10f, 0f, 0f), true, false, true, true);
		}
		Var1.f_6 = { vVar12 };
		set_entity_collision(iLocal_81, false, false);
		vVar17 = { get_entity_coords(iLocal_81, true, false) };
		Var1.f_9 = get_angle_between_2d_vectors(vVar17.x, vVar17.y, vVar12.x, vVar12.y);
		Var1 = 1;
		Var1.f_1 = 0;
		Var1.f_2 = 1;
		func_1431(&iVar0, &Var1);
		if (iVar0 == 1)
		{
			if (bVar16)
			{
				set_entity_coords(iLocal_81, vVar12, true, false, true, true);
			}
			set_entity_heading(iLocal_81, Var1.f_9);
			*bParam0 = 1;
			return false;
		}
		else if (iVar0 == 2)
		{
			set_bit(&iLocal_57, 1);
		}
	}
	if (is_bit_set(iLocal_57, 1))
	{
		iVar20 = func_1432(7);
		if (!is_entity_dead(iVar20) && !is_ped_injured(iVar20))
		{
			func_1433(iVar20, get_entity_coords(iVar20, true, false));
			task_stand_still(iVar20, 5000);
			set_animal_tuning_bool_param(iVar20, 48, true);
			set_entity_collision(iLocal_81, true, false);
			_set_ped_on_mount(iLocal_81, iVar20, -1, true);
			set_gameplay_cam_relative_heading(0f, 1f);
			clear_bit(&iLocal_57, 1);
			return true;
		}
	}
	return false;
}

int func_1074(int iParam0, bool bParam1)
{
	iVar2 = -2;
	iVar1 = get_vehicle_max_number_of_passengers(iParam0) + 1;
	if (!is_entity_dead(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = (iVar0 - 1);
			if (!is_vehicle_seat_free(iParam0, iVar2))
			{
				if (bParam1)
				{
					iVar3 = get_ped_in_vehicle_seat(iParam0, iVar2);
					if (is_ped_injured(iVar3))
					{
						return iVar2;
					}
				}
			}
			else
			{
				return iVar2;
			}
			iVar0++;
		}
	}
	return iVar2;
}

void func_1075(int iParam0)
{
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (iVar0 < 0 || iVar0 >= 8)
	{
		iVar0 = 0;
	}
	func_1434();
	func_960(0);
	func_1435(iLocal_81);
	func_193();
	iVar1 = get_entity_attached_to(iLocal_81);
	if (does_entity_exist(iVar1))
	{
		_0x9ebd34958ab6f824(iVar1);
		clear_ped_tasks_immediately(iLocal_81, false, true);
	}
	func_1436(iParam0);
	func_1437(iParam0);
	Local_1685[iLocal_71]->f_37 = get_network_time_accurate();
	if (!func_848())
	{
		func_13(2048);
	}
	if (func_31(8))
	{
		_0x78030c7867d8b9b6(iLocal_81, 0);
	}
	else
	{
		_0x78030c7867d8b9b6(iLocal_81, 1);
	}
	if (is_bit_set(Local_5688.f_24.f_4, 0))
	{
		func_196(iLocal_81, 1);
		_0x6569f31a01b4c097(iLocal_81, 11, 1);
	}
	if (!func_31(58))
	{
		_0x6569f31a01b4c097(iLocal_81, 18, 1);
	}
	if (Global_2359296->f_442 != 1)
	{
		_0xd637d327080cd86e(Global_2359296->f_442);
	}
	_0x94f3d956bfaeae18(iLocal_79, 738282662, true);
	_0x78857fc65cadb909(true);
	_0x1f5e07e14a86fafc(1);
	func_623();
	func_195(0);
	Var2.f_4 = 3;
	Var2.f_8 = -1;
	Var2.f_9 = -1;
	Var2.f_10 = -1;
	Var2.f_11 = 1;
	Var2.f_42.f_1 = -1;
	Var2.f_42.f_3 = -1082130432;
	Var2.f_42.f_4 = 2;
	Var2.f_42.f_5 = -1082130432;
	Var2.f_42.f_7 = -1082130432;
	Var2.f_42.f_9 = -1082130432;
	Var2.f_42.f_11 = -1082130432;
	Var2.f_54.f_2 = -1;
	Var2.f_54.f_5 = -1;
	Var2 = { func_954(1, 0) };
	func_1101(&Var2, 0);
	func_1438(&Var2);
	set_bit(&iLocal_58, 5);
	func_1439(iLocal_81);
	if (iLocal_71 < 32 && iLocal_71 > -1)
	{
		if (is_bit_set(Local_5688.f_24.f_5, 1))
		{
			Local_1685[iLocal_71]->f_35 = 255;
		}
		clear_bit(&(Local_1685[iLocal_71]->f_2), 16);
	}
	if (is_bit_set(Local_5688.f_24.f_2, 17))
	{
		Global_1051119 = 1;
	}
	Var63 = { func_1344(0) };
	func_1440(Var63, Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_65);
	if (Global_2359296->f_74[iVar0]->f_8 != -1)
	{
		iLocal_1674 = Global_2359296->f_74[iVar0]->f_8;
	}
	func_1441();
	if (func_31(22))
	{
		func_1442();
		func_199(1);
	}
	if (!func_359())
	{
		if (func_30(6))
		{
			set_ped_config_flag(iLocal_81, 340, true);
		}
		else
		{
			set_ped_config_flag(iLocal_81, 340, false);
		}
	}
	set_ped_config_flag(iLocal_81, 286, true);
	set_ped_config_flag(iLocal_81, 174, true);
	if (func_31(64))
	{
		func_125(iLocal_79, 1);
	}
	if (func_31(65))
	{
		func_126(iLocal_79, 1);
	}
	if (func_31(30))
	{
		func_203(0);
	}
	if (!func_31(52))
	{
		_0xaca45ddcef6071c4(iLocal_79, 0);
		_0xa0c683284df027c7(iLocal_79, 0, 0);
	}
	if (!func_30(1))
	{
		func_426(Global_1940258, 524288);
	}
	if (!func_30(2))
	{
		set_ped_drops_weapons_when_dead(iLocal_81, true);
	}
	else
	{
		set_ped_drops_weapons_when_dead(iLocal_81, false);
	}
	if (is_bit_set(&(Global_2359296->f_162[iVar0]), 1) || is_bit_set(Local_5688.f_24.f_3, 15))
	{
		func_185(1);
	}
	if (Global_2359296->f_74[iVar0]->f_7 != -1)
	{
		_0x0bf3b3bd47d79c08(0, Global_2359296->f_74[iVar0]->f_7);
	}
	func_177(is_bit_set(&(Global_2359296->f_74[iVar0]), 2), 0);
	func_1104(iVar0, 0, 0, 0);
	if (func_260())
	{
		if (!func_447(16))
		{
			func_98(1);
		}
	}
	func_1443();
	if (func_31(45))
	{
		if (!animpostfx_is_running("MP_DM_Annesburg_ReduceDustDensity"))
		{
			animpostfx_play("MP_DM_Annesburg_ReduceDustDensity");
		}
	}
	if (func_31(67))
	{
		if (!animpostfx_is_running("MP_Rhodes_ReduceDustDensity"))
		{
			animpostfx_play("MP_Rhodes_ReduceDustDensity");
		}
	}
	func_1444(Global_3145858->f_60018, iLocal_79, iLocal_81);
	if (Global_3145858->f_60019 > 0)
	{
		_0xac9ae68f0a463752(Global_3145858->f_60019);
	}
	if (func_31(73))
	{
		set_ped_config_flag(iLocal_81, 361, true);
	}
	if (func_31(78))
	{
		set_ped_config_flag(iLocal_81, 567, true);
	}
	func_1445();
}

void func_1076()
{
	if (func_586())
	{
		Local_1685[iLocal_71]->f_32 = 0;
	}
	else
	{
		iVar0 = Local_1685[iLocal_71]->f_3;
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Local_1685[iLocal_71]->f_32 = &Global_2359296->f_175[iVar0];
	}
}

bool func_1077()
{
	return get_time_difference(Local_5688.f_1145, get_network_time_accurate()) > 750;
}

bool func_1078(bool bParam0)
{
	iVar0 = &Global_1049278;
	iVar1 = player_id();
	iVar2 = get_player_team(iVar1);
	iVar4 = 16;
	if (&Global_1049277 >= iVar4)
	{
		return true;
	}
	if (&Global_1049278 >= 32)
	{
		return true;
	}
	iVar5 = int_to_participantindex(iVar0);
	if (network_is_participant_active(iVar5) || bVar3)
	{
		if (bVar3)
		{
			iVar6 = iVar1;
		}
		else
		{
			iVar6 = network_get_player_index(iVar5);
		}
		if ((get_player_team(iVar6) == iVar2 && !bParam0) || iVar1 == iVar6)
		{
			iVar7 = get_player_ped(iVar6);
			if (!is_ped_injured(iVar7))
			{
			}
			if (!bParam0 && iVar1 != iVar6)
			{
				Global_1049264 = 0;
			}
			if (!bVar3 || &Global_1049277 == 0)
			{
				(*Global_1049198)[&Global_1049277] = clone_ped(iVar7, 0f, true, true);
				func_1446(iVar7, Global_1049198[&Global_1049277]);
			}
			if (is_ped_injured(Global_1049198[&Global_1049277]))
			{
				revive_injured_ped(Global_1049198[&Global_1049277]);
			}
			set_entity_visible(Global_1049198[&Global_1049277], false);
			if (is_ped_on_mount(iVar7))
			{
				(*Global_1049231)[&Global_1049277] = clone_ped(get_mount(iVar7), 0f, false, true);
				_set_ped_on_mount(Global_1049198[&Global_1049277], Global_1049231[&Global_1049277], -1, true);
				set_blocking_of_non_temporary_events(Global_1049198[&Global_1049277], true);
				set_blocking_of_non_temporary_events(Global_1049231[&Global_1049277], true);
				set_entity_invincible(Global_1049198[&Global_1049277], true);
				set_entity_invincible(Global_1049231[&Global_1049277], true);
				set_entity_visible(Global_1049231[&Global_1049277], false);
			}
			else
			{
				(*Global_1049231)[&Global_1049277] = -1;
				set_blocking_of_non_temporary_events(Global_1049198[&Global_1049277], true);
				set_entity_invincible(Global_1049198[&Global_1049277], true);
			}
			Global_1049277 = &Global_1049277 + 1;
			if (&Global_1049277 >= iVar4)
			{
				return true;
			}
		}
	}
	Global_1049278 = &Global_1049278 + 1;
	if (&Global_1049278 >= 32)
	{
		return true;
	}
	if (!bVar3)
	{
		func_1078(bParam0);
	}
	return false;
}

bool func_1079(int iParam0)
{
	return (Global_262153 && iParam0) != 0;
}

void func_1080(int iParam0)
{
	iLocal_14292 = iParam0;
}

void func_1081()
{
	if (Local_1685[iLocal_71]->f_3 == -1)
	{
		func_637(64);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_614(Local_1685[iLocal_71]->f_3, iVar0))
			{
			}
			else
			{
				func_1447(iVar0);
			}
			iVar0++;
		}
	}
}

bool func_1082(int iParam0)
{
	return is_entity_playing_anim(Global_34, "mech_inventory@binoculars", func_1448(iParam0), 1);
}

void func_1083(bool bParam0)
{
	if (bParam0)
	{
		func_59(106);
	}
	else
	{
		func_385(106);
	}
}

void func_1084()
{
	if (_is_app_running(29649618) || _is_app_active(29649618))
	{
		_close_app_by_hash_immediate(29649618);
	}
	if (_is_app_running(-1641598689) || _is_app_active(-1641598689))
	{
		_close_app_by_hash_immediate(-1641598689);
	}
	if (func_1449())
	{
		func_1450();
	}
	if (func_1451())
	{
		func_1452();
	}
}

void func_1085(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = _uiflowblock_request(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = _uiflowblock_request(1781462046);
	}
	else
	{
		*uParam0 = _uiflowblock_request(-242590942);
	}
	uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
}

bool func_1086()
{
	if (vLocal_14263.z == -1252587237 || vLocal_14263.z == -1652801619)
	{
		if (_0x59fa676177dbe4c9(iVar14261) != 6 && _0x59fa676177dbe4c9(iVar14261) != 5)
		{
			if (!func_345(&uLocal_12887))
			{
				func_324(&uLocal_12887, 0, 0);
				return true;
			}
			else if (func_325(&uLocal_12887, 0, 0) < 6000)
			{
				return true;
			}
			else
			{
				_0xdd1232b332cbb9e7(11, 1, 1);
			}
		}
	}
	func_358(&uLocal_12887);
	return false;
}

bool func_1087()
{
	return (func_1453() && func_1454(Global_1102219->f_3520.f_17, 1500));
}

bool func_1088(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return false;
	}
	if (is_bit_set(uParam0->f_15, 0))
	{
		return true;
	}
	if (!_0xf7c180f57f85d0b8(*uParam0))
	{
		func_1455(uParam0);
		return false;
	}
	_uistatemachine_request_transition(*uParam0, uParam0->f_2);
	set_bit(&(uParam0->f_15), 0);
	return true;
}

void func_1089(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	StringCopy(&cVar0, get_player_name(iParam3), 64);
	iVar40 = func_1456(uParam0, iParam3);
	if (!is_bit_set(uParam2->f_15, 0))
	{
		return;
	}
	if (bParam4)
	{
		StringCopy(&cVar16, _create_var_string(2, "UIC_EF_TIM"), 64);
		StringCopy(&cVar41, "POS_", 16);
		StringIntConCat(&cVar41, iVar40 + 1, 16);
		StringCopy(&cVar8, _create_var_string(2, &cVar41), 64);
		if ((round((*uParam0)[iVar40]->f_7) == 88400000 || round((*uParam0)[iVar40]->f_7) == 72800000) || round((*uParam0)[iVar40]->f_7) == 86400000)
		{
			StringCopy(&cVar16, _create_var_string(2, "POS_OOT"), 64);
		}
		else
		{
			set_bit(&iVar43, 7);
			StringCopy(&cVar16, _create_var_string(10, "UIC_EF_TIM", func_1457(round((*uParam0)[iVar40]->f_7), iVar43, 0)), 64);
		}
	}
	else
	{
		iVar48 = func_1458((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar49 = func_1459((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar50 = func_1460((*uParam0)[iVar40], uParam1->f_159, uParam1->f_160);
		iVar51 = func_1461((*uParam0)[iVar40]);
		Var52 = { func_1462(iVar48, uParam1->f_159, &bVar44) };
		Var56 = { func_1463(iVar49, uParam1->f_159, uParam1->f_160, &bVar45) };
		Var60 = { func_1464(iVar50, uParam1->f_159, uParam1->f_160, &bVar46) };
		Var64 = { func_1465(&bVar47) };
		if (!is_string_null_or_empty(&Var52))
		{
			if (bVar44)
			{
				IntToString(&cVar68, iVar48, 32);
				StringConCat(&cVar68, " ", 32);
				StringConCat(&cVar68, &Var52, 32);
				StringCopy(&cVar8, _create_var_string(10, "LITERAL_STRING", &cVar68), 64);
			}
			else
			{
				cVar68 = { Var52 };
				StringCopy(&cVar8, _create_var_string(2, &cVar68, iVar48), 64);
			}
		}
		if (!is_string_null_or_empty(&Var56))
		{
			if (bVar45)
			{
				IntToString(&cVar72, iVar49, 32);
				StringConCat(&cVar72, " ", 32);
				StringConCat(&cVar72, &Var56, 32);
				StringCopy(&cVar16, _create_var_string(10, "LITERAL_STRING", &cVar72), 64);
			}
			else
			{
				cVar72 = { Var56 };
				StringCopy(&cVar16, _create_var_string(2, &cVar72, iVar49), 64);
			}
		}
		if (!is_string_null_or_empty(&Var60))
		{
			if (bVar46)
			{
				IntToString(&cVar76, iVar50, 32);
				StringConCat(&cVar76, " ", 32);
				StringConCat(&cVar76, &Var60, 32);
				StringCopy(&cVar24, _create_var_string(10, "LITERAL_STRING", &cVar76), 64);
			}
			else
			{
				cVar76 = { Var60 };
				StringCopy(&cVar24, _create_var_string(2, &cVar76, iVar50), 64);
			}
		}
		if (!is_string_null_or_empty(&Var64))
		{
			if (bVar47)
			{
				IntToString(&cVar80, iVar51, 32);
				StringConCat(&cVar80, " ", 32);
				StringConCat(&cVar80, &Var64, 32);
				StringCopy(&cVar32, _create_var_string(10, "LITERAL_STRING", &cVar80), 64);
			}
			else
			{
				cVar80 = { Var64 };
				StringCopy(&cVar32, _create_var_string(2, &cVar80, iVar51), 64);
			}
		}
	}
	func_1466(uParam2, &cVar0, "", &cVar8, &cVar16, &cVar24, &cVar32, 109029619);
	func_1098(uParam2, 1);
}

bool func_1090()
{
	if (func_30(13))
	{
		return true;
	}
	return false;
}

int func_1091()
{
	return Local_5688.f_3327;
}

bool func_1092(var uParam0, float fParam1)
{
	if (func_778(0))
	{
		if (&Local_92[iLocal_71] != -1)
		{
			if (&Local_5688.f_1163[&Local_92[iLocal_71]] == -1)
			{
				return false;
			}
			iVar0 = &Local_5688.f_1163[&Local_92[iLocal_71]];
			*uParam0 = { Global_3145858->f_38736[iVar0]->f_1 };
			*fParam1 = Global_3145858->f_38736[iVar0]->f_4;
			return true;
		}
	}
	iVar1 = func_1205(Local_1685[iLocal_71]->f_3);
	if (func_1033(uParam0, fParam1, iVar1, -1, 0) != -1)
	{
		return true;
	}
	iVar2 = Local_1685[iLocal_71]->f_45;
	*uParam0 = { Global_3145858->f_38736[iVar2]->f_1 };
	*fParam1 = Global_3145858->f_38736[iVar2]->f_4;
	return true;
}

void func_1093()
{
	Local_1685[iLocal_71]->f_13 = 0;
	clear_bit(&iLocal_57, 7);
	clear_bit(&(Local_1685[iLocal_71]->f_2), 19);
	clear_bit(&(Local_1685[iLocal_71]->f_2), 13);
	clear_bit(&(Local_1685[iLocal_71]->f_2), 16);
	clear_bit(&(Local_1685[iLocal_71]->f_2), 15);
	clear_bit(&(Local_1685[iLocal_71]->f_2), 21);
	clear_bit(&iLocal_57, 22);
	clear_bit(&iLocal_57, 13);
	clear_bit(&iLocal_57, 19);
	clear_bit(&iLocal_57, 21);
	clear_bit(&iLocal_57, 24);
	clear_bit(&iLocal_57, 25);
	clear_bit(&iLocal_57, 26);
	clear_bit(&iLocal_57, 27);
	clear_bit(&iLocal_57, 29);
	clear_bit(&iLocal_57, 30);
	clear_bit(&iLocal_58, 0);
	clear_bit(&iLocal_58, 3);
	clear_bit(&iLocal_58, 4);
	clear_bit(&iLocal_58, 7);
	clear_bit(&iLocal_58, 10);
	clear_bit(&iLocal_58, 17);
	clear_bit(&iLocal_60, 13);
	clear_bit(&iLocal_60, 19);
	func_1467();
	func_1468();
	func_1172(0);
	iLocal_15663 = 0;
	iLocal_15664 = 0;
	iLocal_15665 = 0;
	iLocal_15666 = 0;
	iLocal_15629 = 0;
	vLocal_15630 = { 0f, 0f, 0f };
	vLocal_15633 = { 0f, 0f, 0f };
	func_756();
	if (_does_volume_exist(iVar12175))
	{
		_delete_volume(iVar12175);
	}
	if (_does_volume_exist(iVar12176))
	{
		_delete_volume(iVar12176);
	}
	if (_does_volume_exist(iVar15641))
	{
		_delete_volume(iVar15641);
	}
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_4834 - 1))
	{
		if (_does_volume_exist(&(iLocal_12144[iVar0])))
		{
			_delete_volume(&(iLocal_12144[iVar0]));
		}
		if (_does_volume_exist(&(iLocal_12111[iVar0])))
		{
			_delete_volume(&(iLocal_12111[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_6822)
	{
		if (does_blip_exist(&(iLocal_12315[iVar0])))
		{
			remove_blip(iLocal_12315[iVar0]);
		}
		iVar0++;
	}
	func_358(&(Local_1685[iLocal_70]->f_39));
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_6822)
	{
		if (&Local_5688.f_2684[iVar0] == 151 || &iLocal_11597[iVar0] == &Local_5688.f_2684[iVar0])
		{
		}
		else if (!does_pickup_exist(&(uLocal_11396[iVar0])))
		{
		}
		else
		{
			func_467(&(uLocal_11396[iVar0]), iVar0);
		}
		iVar0++;
	}
	_0xdd1232b332cbb9e7(7, 1, 1);
}

void func_1094(bool bParam0)
{
	func_1296();
	if (Global_1139381->f_4779 != 0)
	{
		func_1295(25, Global_1139381->f_4779.f_4, 0, 0, 0);
	}
	else if (bParam0)
	{
		func_1469(&(Global_1952637->f_1675), Global_34, 1, -1, 1, 1, 1, 1);
	}
	else
	{
		func_1295(2, 0, 2, 0, 0);
	}
}

bool func_1095()
{
	if (func_30(13))
	{
		return true;
	}
	if (!bLocal_73 || bLocal_76)
	{
		return true;
	}
	if (func_91(255))
	{
		return true;
	}
	return false;
}

void func_1096(bool bParam0)
{
	if (func_38(iLocal_71))
	{
		return;
	}
	if (is_bit_set(iLocal_58, 8) || bParam0)
	{
		if (!is_ped_injured(iLocal_81) && func_1470(255))
		{
			Var0.f_4 = 3;
			Var0.f_8 = -1;
			Var0.f_9 = -1;
			Var0.f_10 = -1;
			Var0.f_11 = 1;
			Var0.f_42.f_1 = -1;
			Var0.f_42.f_3 = -1082130432;
			Var0.f_42.f_4 = 2;
			Var0.f_42.f_5 = -1082130432;
			Var0.f_42.f_7 = -1082130432;
			Var0.f_42.f_9 = -1082130432;
			Var0.f_42.f_11 = -1082130432;
			Var0.f_54.f_2 = -1;
			Var0.f_54.f_5 = -1;
			Var0 = { func_954(1, 0) };
			func_1101(&Var0, 1);
			clear_bit(&iLocal_58, 8);
		}
	}
	if (bLocal_73)
	{
		if (is_bit_set(iLocal_57, 14) || bParam0)
		{
			if (is_bit_set(Local_5688.f_24.f_4, 0))
			{
				func_196(iLocal_81, 1);
				_0x6569f31a01b4c097(iLocal_81, 11, 1);
			}
			if (!func_31(58))
			{
				_0x6569f31a01b4c097(iLocal_81, 18, 1);
			}
			clear_bit(&(Local_1685[iLocal_71]->f_2), 21);
			set_bit(&iLocal_58, 5);
			set_bit(&Local_14319, 0);
			if (is_bit_set(Local_1685[iLocal_71]->f_2, 10))
			{
				clear_bit(&(Local_1685[iLocal_71]->f_2), 10);
			}
			if (!func_688(255))
			{
				func_324(&uLocal_12879, 0, 0);
			}
			clear_bit(&iLocal_57, 14);
			if (!func_30(2))
			{
				set_ped_drops_weapons_when_dead(iLocal_81, true);
			}
			else
			{
				set_ped_drops_weapons_when_dead(iLocal_81, false);
			}
			if (func_31(73))
			{
				set_ped_config_flag(iLocal_81, 361, true);
			}
			if (func_31(78))
			{
				set_ped_config_flag(iLocal_81, 567, true);
			}
		}
	}
	else
	{
		if (func_1471())
		{
			func_185(1);
		}
		else
		{
			func_185(0);
		}
		if (!is_bit_set(iLocal_57, 14))
		{
			func_1472();
			func_1468();
			if (Local_1685[iLocal_71]->f_32 > 0)
			{
				Local_1685[iLocal_71]->f_32 = (Local_1685[iLocal_71]->f_32 - 1);
			}
			if (is_bit_set(Local_5688.f_24.f_4, 0))
			{
				func_1473();
			}
			if (!func_168() && !func_586())
			{
				set_bit(&(Local_1685[iLocal_71]->f_2), 21);
			}
			func_689();
			func_171(iLocal_81, &Local_15995, 0);
			set_bit(&iLocal_57, 14);
			set_bit(&iLocal_58, 8);
		}
	}
}

void func_1097(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (does_cam_exist(uParam0[iVar0]))
		{
			destroy_cam(uParam0[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (_0x23e33cb9f4a3f547(uParam0->f_20, "LIVE"))
		{
			_0xae6ada8fe7e84acc(uParam0->f_20, "LIVE");
		}
		if (_is_anim_scene_started(uParam0->f_20, false))
		{
			abort_anim_scene(uParam0->f_20, false);
		}
		reset_anim_scene(uParam0->f_20, 0);
		_delete_anim_scene(uParam0->f_20);
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	func_358(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
	func_358(&uLocal_16057);
}

void func_1098(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_11))
	{
		_databinding_write_data_bool(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = _databinding_add_data_bool(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

void func_1099(var uParam0)
{
	if (!is_bit_set(uParam0->f_15, 0))
	{
		return;
	}
	if (!_uistatemachine_exists(*uParam0))
	{
		return;
	}
	if (!_0xf7c180f57f85d0b8(763722418))
	{
		return;
	}
	_uistatemachine_request_transition(*uParam0, 763722418);
	clear_bit(&(uParam0->f_15), 0);
}

void func_1100(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	*uParam0 = { func_530() };
	uParam0->f_8 = 0;
	uParam0->f_4 = { func_530() };
	uParam0->f_9 = 0;
	func_358(&(uParam0->f_12));
}

void func_1101(var uParam0, bool bParam1)
{
	bVar0 = uParam0->f_8 > -1;
	bVar1 = ((is_bit_set(uParam0->f_12, 0) || Global_3145858->f_60002 == 0) || Global_3145858->f_60002 == 3);
	bVar2 = is_bit_set(uParam0->f_12, 3);
	iVar3 = 1;
	if (bParam1)
	{
		if (Global_3145858->f_60002 == 3)
		{
			if (!bVar0)
			{
				func_1474(*uParam0);
				return;
			}
		}
		if (func_1475(uParam0->f_12))
		{
			remove_all_ped_weapons(*uParam0, true, true);
		}
		else
		{
			func_1474(*uParam0);
			return;
		}
		if (func_1476(uParam0->f_12))
		{
			_0x1b83c0deebcbb214(*uParam0);
		}
		else
		{
			iVar3 = 0;
		}
	}
	else
	{
		remove_all_ped_weapons(*uParam0, true, true);
		_0x1b83c0deebcbb214(*uParam0);
	}
	switch (Global_3145858->f_60002)
	{
		case 0:
			func_1477(uParam0, iVar3);
			break;
		case 1:
			if (bVar0)
			{
				func_1478(uParam0, bVar1, bParam1);
				if (bParam1 && bVar2)
				{
					func_1479(uParam0->f_9);
				}
			}
			break;
		case 2:
			if (bVar1)
			{
				func_1477(uParam0, iVar3);
			}
			if (bVar0)
			{
				func_1478(uParam0, bVar1, bParam1);
			}
			break;
		case 3:
			func_1477(uParam0, iVar3);
			if (bVar0)
			{
				func_1478(uParam0, 0, bParam1);
			}
			break;
	}
	func_1480(uParam0, bParam1, bVar1);
	if (func_1481(uParam0->f_18.f_10))
	{
		if (_0xb881ca836cc4b6d4(&(uParam0->f_18)))
		{
			if (get_ped_ammo_by_type(*uParam0, uParam0->f_18.f_10) != 0)
			{
				_0xebe46b501bc3fbcf(*uParam0, &(uParam0->f_18), uParam0->f_18.f_10);
			}
			else
			{
				uParam0->f_18.f_10 = 0;
			}
		}
	}
	if (func_1481(uParam0->f_18.f_11))
	{
		if (_0xb881ca836cc4b6d4(&(uParam0->f_18.f_4)))
		{
			if (get_ped_ammo_by_type(*uParam0, uParam0->f_18.f_11) != 0)
			{
				_0xebe46b501bc3fbcf(*uParam0, &(uParam0->f_18.f_4), uParam0->f_18.f_11);
			}
			else
			{
				uParam0->f_18.f_11 = 0;
			}
		}
	}
	_0x0a2ab7b7abc055f4(*uParam0);
	if (Global_3145858->f_60002 != 1)
	{
		func_1482(uParam0);
	}
	if (func_31(32))
	{
		func_202(uParam0->f_1, 1);
	}
	if ((!func_1483(Global_524288->f_40400) || func_424()) || func_469())
	{
		func_1484(0);
	}
	func_239(is_bit_set(uParam0->f_12, 8));
}

void func_1102(int iParam0)
{
	if (is_bit_set(Global_3145858->f_6823[iParam0]->f_13, 5))
	{
		return;
	}
	if (does_blip_exist(&(iLocal_12315[iParam0])))
	{
		return;
	}
	iLocal_12315[iParam0] = blip_add_for_pickup_placement(Global_3145858->f_6823[iParam0]->f_18, &(uLocal_11396[iParam0]));
	_blip_set_modifier(&(iLocal_12315[iParam0]), 1654237215);
	if (Global_3145858->f_6823[iParam0]->f_19 != 0)
	{
		_blip_set_modifier(&(iLocal_12315[iParam0]), Global_3145858->f_6823[iParam0]->f_19);
	}
	iVar0 = Global_3145858->f_6823[iParam0]->f_17;
	if (&Local_5688.f_2684[iParam0] != 151)
	{
		iVar0 = &Local_5688.f_2684[iParam0];
	}
	iVar1 = get_weapon_type_from_pickup_type(iVar0);
	iVar2 = func_1485(iVar1, iVar0, Global_3145858->f_6823[iParam0]->f_24);
	set_blip_sprite(&(iLocal_12315[iParam0]), iVar2, false);
	set_blip_name_from_text_file(&(iLocal_12315[iParam0]), func_1486(iVar1, iVar0, Global_3145858->f_6823[iParam0]->f_24, 149530285));
}

void func_1103()
{
	func_154(1);
	func_154(64);
	bVar2 = func_613();
	if (func_260())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (bVar2 || is_bit_set(&(Global_2359296->f_74[Local_1685[iLocal_71]->f_3]), (6 + iVar0)))
			{
				func_1447(iVar0);
			}
			iVar0++;
		}
	}
	else if (bVar2)
	{
		func_637(64);
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!Local_92[iVar1]->f_3 || func_38(iVar1))
		{
		}
		else
		{
			func_1487(Local_92[iVar1]->f_4, iVar1, func_260());
		}
		iVar1++;
	}
}

void func_1104(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar7 = (Global_3145858->f_282 - 1);
	if (func_424())
	{
		if ((Global_2097152->f_6316 - 1) > -1)
		{
			iVar7 = (Global_2097152->f_6316 - 1);
		}
	}
	func_122(0);
	bVar2 = func_31(3);
	bVar3 = ((func_1483(Global_524288->f_40400) && func_1488() == -504335712) || func_31(74));
	bVar4 = !(bParam1 && func_31(35));
	bVar5 = (func_31(77) || bParam3);
	if (bParam1)
	{
		if (func_31(34) || (bParam2 && !bVar3))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		if (!bVar2 && iParam0 > -1)
		{
			iVar6 = 0;
			while (iVar6 <= iVar7)
			{
				if (Global_3145858->f_60008 == 0 || iParam0 == iVar6)
				{
					func_1489(iVar6, &bVar1, iParam0);
				}
				iVar6++;
			}
		}
		else if (iParam0 <= -1)
		{
		}
		if (bVar3 || bVar2)
		{
			func_637(262144);
			func_206();
		}
		else if (Global_3145858->f_60008 > 0 && bVar4)
		{
			func_637(1048576);
			func_1490(to_float(Global_3145858->f_60008));
		}
		else if (!bVar1)
		{
		}
	}
	if (bParam1)
	{
		if (func_31(34) || (bParam2 && !bVar3))
		{
			func_637(4194304);
		}
		if (func_31(35))
		{
			func_637(2097152);
		}
	}
	else if (bVar5)
	{
		func_637(16777216);
	}
}

void func_1105()
{
	clear_bit(&iLocal_57, 16);
	func_1491();
}

void func_1106()
{
	if (bLocal_75)
	{
		if (is_bit_set(iLocal_57, 0))
		{
			clear_bit(&iLocal_57, 0);
		}
	}
	else if (!is_bit_set(iLocal_57, 0))
	{
		set_bit(&iLocal_57, 0);
	}
}

void func_1107()
{
	if (func_38(iLocal_71))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar2 = int_to_participantindex(iVar0);
			if (!func_683(iVar0) && iVar0 != iLocal_71)
			{
				if (network_is_participant_active(iVar2))
				{
					bVar1 = true;
				}
			}
			iVar0++;
		}
		if (!bVar1)
		{
			func_67(15);
			return;
		}
	}
	if (!is_bit_set(Local_1685[iLocal_71]->f_2, 8))
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			if ((is_bit_set(iVar673, iVar3) || !Local_92[iVar3]->f_3) || func_38(iVar3))
			{
			}
			else
			{
				if (func_683(iVar3) && iVar3 != iLocal_71)
				{
					if (!network_is_player_active(Local_92[iVar3]->f_4))
					{
					}
					else
					{
						func_1492(&(Local_12907.f_973), Local_92[iVar3]->f_4, 0);
						if (!func_260())
						{
							func_1493(Local_92[iVar3]->f_4);
							func_575(Local_92[iVar3]->f_4, Local_1685[iVar3]->f_4);
						}
						else if (Local_1685[iVar3]->f_3 == Local_1685[iLocal_71]->f_3)
						{
							func_1494(Local_92[iVar3]->f_4);
							func_575(Local_92[iVar3]->f_4, Local_1685[iVar3]->f_4);
						}
						else
						{
							func_1493(Local_92[iVar3]->f_4);
							func_575(Local_92[iVar3]->f_4, Local_1685[iVar3]->f_4);
						}
						set_bit(&uLocal_675, iVar3);
					}
					iVar3++;
				}
			}
		}
	}
}

void func_1108()
{
	if (Global_2359296->f_4834 == 0)
	{
		return;
	}
	if (is_bit_set(Local_5688.f_41, 14))
	{
		if (iVar12866 != Local_5688.f_872)
		{
			if (is_bit_set(iLocal_57, 7) && func_1495(iVar12866, Local_5688.f_872))
			{
				clear_bit(&iLocal_57, 7);
			}
			uLocal_12868 = Local_5688.f_872;
		}
	}
	if (is_bit_set(Local_5688.f_41, 21))
	{
		func_1496();
		if (Local_5688.f_2411)
		{
			func_1497();
		}
	}
	else if (func_785())
	{
		func_1498();
	}
	if (!func_257(255) && func_1499())
	{
		bVar1 = is_bit_set(Local_1685[iLocal_71]->f_2, 3);
		clear_bit(&(Local_1685[iLocal_71]->f_2), 3);
		if (!bVar1 && !is_bit_set(iLocal_58, 10))
		{
			set_bit(&iLocal_58, 10);
			func_1500();
		}
		else
		{
			clear_bit(&iLocal_58, 10);
		}
	}
	if (is_bit_set(Local_5688.f_41, 21) && !Local_5688.f_2411)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_4834 - 1))
		{
			if (func_1501(iVar0) && !is_bit_set(Local_5688.f_2410, iVar0))
			{
				func_1502(iVar0);
			}
			iVar0++;
		}
	}
	else if (func_785() || Local_5688.f_2411)
	{
		if (func_1501(iVar15627))
		{
			func_1502(iVar15627);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_4834 - 1))
		{
			if (func_1501(iVar0))
			{
				func_1502(iVar0);
			}
			iVar0++;
		}
	}
	if (func_1499())
	{
		if (!is_bit_set(Local_1685[iLocal_70]->f_2, 3))
		{
			_0x3c8f74e8fe751614();
			if (!func_345(&(Local_1685[iLocal_70]->f_39)))
			{
				if (!func_257(255))
				{
					func_701(&(Local_1685[iLocal_71]->f_39), 0, 0);
				}
			}
			else
			{
				if (func_1503() <= 0)
				{
					if (!func_257(255))
					{
						func_1504();
						return;
					}
					else
					{
						if (!is_bit_set(Local_1685[iLocal_70]->f_2, 10))
						{
							func_1123();
						}
						return;
					}
				}
				func_1505();
				if (!is_bit_set(Local_1685[iLocal_70]->f_2, 10))
				{
					func_1507(&Local_12907, func_1503(), func_1506());
				}
			}
		}
		else
		{
			if (is_bit_set(Local_5688.f_24.f_3, 7))
			{
				func_756();
			}
			if (!func_1508())
			{
				func_757();
			}
			if (func_345(&(Local_1685[iLocal_70]->f_39)))
			{
				if (!func_257(255))
				{
					func_358(&(Local_1685[iLocal_71]->f_39));
				}
			}
		}
	}
	else if (!func_257(255))
	{
		func_358(&(Local_1685[iLocal_71]->f_39));
	}
	func_1509();
	func_1510();
	if ((!func_785() && !is_bit_set(Local_5688.f_24.f_3, 30)) && !is_bit_set(Local_5688.f_41, 21))
	{
		func_1511();
	}
}

void func_1109()
{
	if (Local_1685[iLocal_71]->f_11 > 0)
	{
		func_1512();
	}
}

void func_1110()
{
	if (Global_2359296->f_5285 <= 0)
	{
		return;
	}
	vVar8 = { get_entity_coords(iLocal_81, false, false) };
	iVar7 = 0;
	while (iVar7 <= (Global_2359296->f_5285 - 1))
	{
		if (func_1513(iVar7))
		{
			iVar11 = Global_2359296->f_5286[iVar7]->f_4;
			if (iVar11 < 0)
			{
			}
			else
			{
				if (!_does_volume_exist(&(iLocal_12179[iVar7])))
				{
					iLocal_12179[iVar7] = func_1386(iVar11, 0f, 0f, 0f);
				}
				if (_0xf256a75210c5c0eb(&(iLocal_12179[iVar7]), vVar8))
				{
					if (is_bit_set(Global_2359296->f_5286[iVar7]->f_5, 28))
					{
						fVar12 = (10f * get_frame_time());
						func_1514(fVar12, iLocal_81);
					}
					if (is_bit_set(Global_2359296->f_5286[iVar7]->f_5, 29))
					{
						iVar13 = 0;
						if (get_current_ped_weapon(iLocal_81, &iVar13, true, 0, false))
						{
							_add_ammo_to_ped(iLocal_81, iVar13, 10, 752097756);
						}
					}
					if (is_bit_set(Global_2359296->f_5286[iVar7]->f_5, 30))
					{
						fVar14 = (-10f * get_frame_time());
						if ((IntToFloat(get_entity_health(iLocal_81)) + fVar14) > 0f)
						{
							func_1514(fVar14, iLocal_81);
						}
						else
						{
							func_1515(iLocal_81, 0, 0, 0);
						}
					}
					if (is_bit_set(Global_2359296->f_5286[iVar7]->f_5, 31))
					{
						Var0 = 155;
						Var0.f_1 = iLocal_79;
						Var0.f_5 = func_1355(iLocal_71, 0);
						Var0.f_6 = 1;
						uVar15 = func_986(4, 8);
						trigger_script_event(1, &Var0, 7, 49, &uVar15);
					}
				}
			}
		}
		iVar7++;
	}
}

void func_1111()
{
	func_1516();
	func_1517();
	func_1518();
	func_1519();
	func_1520();
}

void func_1112()
{
	iVar0 = iVar12864;
	while (iVar0 <= (Global_3145858->f_6822 - 1))
	{
		if (iVar2 >= 5)
		{
			return;
		}
		iVar2++;
		iLocal_12866 = iVar12864 + 1;
		bVar3 = func_1379(iVar0);
		bVar4 = does_pickup_exist(&(uLocal_11396[iVar0]));
		if (bVar3)
		{
			iVar5 = 1;
			if (is_bit_set(Local_5688.f_24.f_2, 12))
			{
				iVar5 = 0;
			}
			if (!bVar4)
			{
				if (!func_1381(iVar0, &uLocal_11396, iVar5, &uLocal_11798, 1, &(Local_5688.f_2684[iVar0]), Local_5688.f_2684[iVar0]->f_2, Local_5688.f_2684[iVar0]->f_1, func_1380(iVar0)))
				{
				}
				else
				{
					func_1102(iVar0);
				}
			}
		}
		else if (bVar4)
		{
			func_467(&(uLocal_11396[iVar0]), iVar0);
		}
		func_1521(&uLocal_11396, &uLocal_12030, iVar0);
		bVar6 = true;
		if (!bVar4 && func_410(Global_3145858->f_6823[iVar0]->f_28))
		{
			Jump @527; //curOff = 235
		}
		else
		{
			func_1522(iVar0, uLocal_11396[iVar0], iLocal_12315[iVar0], &uLocal_12038, Local_5688.f_872);
		}
		if (func_559(&uLocal_12038, iVar0))
		{
		}
		else
		{
			iVar7 = Global_3145858->f_6823[iVar0]->f_17;
			if (&Local_5688.f_2684[iVar0] != 151)
			{
				iVar7 = &Local_5688.f_2684[iVar0];
			}
			iVar8 = get_weapon_type_from_pickup_type(iVar7);
			iVar9 = Global_2359296->f_220;
			if (iVar9 > 0)
			{
				if (has_ped_got_weapon(iLocal_81, iVar8, 0, false) && func_491(iVar8))
				{
					iVar10 = get_ammo_in_ped_weapon(iLocal_81, iVar8);
					iVar1 = 0;
					while (iVar1 <= (iVar9 - 1))
					{
						iVar11 = &Global_2359296->f_221[iVar1];
						iVar12 = Global_2359296->f_221[iVar1]->f_1;
						if (((iVar8 == 0 || iVar11 == 0) || iVar11 != iVar8) || iVar12 == -1)
						{
						}
						else if (iVar10 >= iVar12)
						{
							bVar6 = false;
						}
						iVar1++;
					}
				}
			}
			if (iVar9 != 0)
			{
				_0x94f3d956bfaeae18(iLocal_79, iVar7, bVar6);
			}
			if (!is_bit_set(Global_3145858->f_6823[iVar0]->f_13, 5))
			{
				func_1523(iVar0, bVar6);
			}
		}
		iVar0++;
	}
	if (iVar12864 >= (Global_3145858->f_6822 - 1))
	{
		iLocal_12866 = 0;
	}
}

void func_1113()
{
	if (!func_1524())
	{
		if (func_700(255))
		{
			func_172(0);
		}
		set_bit(&iLocal_58, 21);
		return;
	}
	clear_bit(&iLocal_58, 21);
	if (!func_700(255))
	{
		func_172(1);
	}
	if (func_672(255))
	{
		func_1043();
		if (!is_bit_set(iLocal_57, 30))
		{
			set_bit(&iLocal_57, 30);
		}
	}
	else if (is_bit_set(iLocal_57, 30))
	{
		func_1525();
		clear_bit(&iLocal_57, 30);
	}
}

void func_1114()
{
	if (!bLocal_75)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_1526(iVar0);
		iVar0++;
	}
}

void func_1115()
{
	if (Global_2359296->f_6761 <= 0)
	{
		return;
	}
	func_1527(iVar14902);
	iLocal_14904 = iVar14902 + 1;
	if (iVar14902 >= Global_2359296->f_6761)
	{
		iLocal_14904 = 0;
	}
}

void func_1116()
{
	func_1528();
	func_1529();
	func_1530();
	func_1531();
	func_1532();
	func_1533();
	func_1534();
	if (!func_31(4))
	{
		func_1535(iLocal_81);
	}
	if (!is_bit_set(Local_5688.f_24.f_4, 9))
	{
		func_1536();
	}
	if (is_bit_set(Local_5688.f_24.f_3, 19))
	{
		func_1537(iLocal_81, is_bit_set(Local_5688.f_24.f_4, 3), is_bit_set(Local_5688.f_24.f_4, 10));
	}
	if (Local_1685[iLocal_71]->f_4 > -1)
	{
		if (is_bit_set(Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_6, 23))
		{
			set_ped_drops_weapons_when_dead(iLocal_81, false);
		}
	}
	if (!func_31(51))
	{
		_0x9f9a829c6751f3c7(iLocal_79, 53, 1);
	}
	if (Local_5688.f_3328 != -1)
	{
		func_152(Local_5688.f_3328);
	}
	func_1538(iLocal_81, &Local_15995, Local_1685[iLocal_71]->f_4);
	func_1539();
	if (!is_bit_set(iLocal_58, 16))
	{
		set_bit(&iLocal_58, 16);
		func_1540(&Local_14319, is_bit_set(Local_1685[iLocal_71]->f_2, 7));
	}
	func_1541();
}

void func_1117(struct<2> Param0)
{
	if (is_bit_set(Local_5688.f_24.f_5, 1))
	{
		func_1542();
	}
	if (is_bit_set(Local_5688.f_24.f_5, 7))
	{
		func_1543();
	}
	if (is_bit_set(Local_5688.f_24.f_5, 3))
	{
		func_1544();
	}
	if (is_bit_set(Local_5688.f_24.f_5, 5))
	{
		func_1545(Param0);
	}
	if (is_bit_set(Local_5688.f_24.f_5, 2))
	{
		func_1546();
	}
}

void func_1118()
{
	if (Global_3145858->f_18726 == 0)
	{
		return;
	}
	if (iVar15457 >= Global_3145858->f_18726)
	{
		iLocal_15459 = 0;
	}
	if (func_466(iVar15457))
	{
		func_1547(iVar15457);
	}
	else
	{
		func_1548(iVar15457);
	}
	iLocal_15459 = iVar15457 + 1;
}

void func_1119()
{
	func_1549();
	func_1550();
	func_1551();
}

void func_1120()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		func_1552(iVar0);
		iVar0++;
	}
	func_1553();
	func_1554(&iLocal_81, &Local_15723);
}

void func_1121()
{
	if (func_14() && func_31(5))
	{
		if (is_control_just_pressed(2, 1710877787))
		{
			func_324(&uLocal_12875, 0, 0);
			iLocal_14346 = iVar14344 + 1;
			func_1555();
		}
		if (is_control_just_pressed(2, -1384133541))
		{
			func_324(&uLocal_12875, 0, 0);
			iLocal_14346 = (iVar14344 - 1);
			func_1555();
		}
		if (func_345(&uLocal_12875))
		{
			if (func_325(&uLocal_12875, 0, 0) > Global_2892896->f_22 * 1000)
			{
				func_324(&uLocal_12875, 0, 0);
				func_1555();
				iLocal_14346 = iVar14344 + 1;
			}
		}
		else
		{
			func_324(&uLocal_12875, 0, 0);
		}
	}
}

void func_1122()
{
	if (func_475(64))
	{
		func_476(64);
	}
}

void func_1123()
{
	if (!func_475(64))
	{
		func_997(64);
	}
}

bool func_1124(int iParam0)
{
	iVar0 = int_to_participantindex(iParam0);
	if (func_260())
	{
		return func_370(Local_1685[iParam0]->f_3);
	}
	else if (Local_5688.f_1120 == iVar0)
	{
		return true;
	}
	return false;
}

float func_1125(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, bool bParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16, float fParam17, float fParam18, float fParam19, float fParam20, float fParam21, float fParam22, float fParam23, float fParam24, float fParam25, float fParam26, float fParam27, int iParam28, int iParam29, int iParam30, int iParam31, float fParam32, int iParam33, int iParam34)
{
	fVar0 = 0f;
	if (Global_3145858->f_51906 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam0) * Global_3145858->f_51906));
	}
	if (Global_3145858->f_51906.f_1 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam1) * Global_3145858->f_51906.f_1));
	}
	if (Global_3145858->f_51906.f_2 > 0f)
	{
		fVar1 = (fParam3 / fParam2);
		fVar0 = (fVar0 + (fVar1 * Global_3145858->f_51906.f_2));
	}
	if (Global_3145858->f_51906.f_3 > 0f)
	{
		fVar0 = (fVar0 + (fParam4 * Global_3145858->f_51906.f_3));
	}
	if (Global_3145858->f_51906.f_4 > 0f)
	{
		fVar0 = (fVar0 + (fParam5 * Global_3145858->f_51906.f_4));
	}
	if (Global_3145858->f_51906.f_5 > 0f)
	{
		fVar0 = (fVar0 + (fParam6 * Global_3145858->f_51906.f_5));
	}
	if (Global_3145858->f_51906.f_7 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam7) * Global_3145858->f_51906.f_7));
	}
	if (Global_3145858->f_51906.f_8 > 0f)
	{
		fVar2 = to_float(iParam8);
		fVar3 = to_float(iParam7);
		fVar4 = (fVar3 / fVar2);
		fVar0 = (fVar0 + (fVar4 * Global_3145858->f_51906.f_8));
	}
	if (Global_3145858->f_51906.f_9 > 0f)
	{
		fVar0 = (fVar0 + (fParam10 * Global_3145858->f_51906.f_9));
	}
	if (Global_3145858->f_51906.f_10 > 0f)
	{
		fVar0 = (fVar0 + (fParam11 * Global_3145858->f_51906.f_10));
	}
	if (Global_3145858->f_51906.f_11 > 0f)
	{
		fVar0 = (fVar0 + (fParam12 * Global_3145858->f_51906.f_11));
	}
	if (Global_3145858->f_51906.f_12 > 0f)
	{
		fVar0 = (fVar0 + (fParam13 * Global_3145858->f_51906.f_12));
	}
	if (Global_3145858->f_51906.f_13 > 0f)
	{
		fVar0 = (fVar0 + (fParam14 * Global_3145858->f_51906.f_13));
	}
	if (Global_3145858->f_51906.f_14 > 0f)
	{
		fVar0 = (fVar0 + (fParam15 * Global_3145858->f_51906.f_14));
	}
	if (Global_3145858->f_51906.f_15 > 0f)
	{
		fVar0 = (fVar0 + (fParam16 * Global_3145858->f_51906.f_15));
	}
	if (Global_3145858->f_51906.f_16 > 0f)
	{
		fVar0 = (fVar0 + (fParam17 * Global_3145858->f_51906.f_16));
	}
	if (Global_3145858->f_51906.f_17 > 0f)
	{
		fVar0 = (fVar0 + (fParam18 * Global_3145858->f_51906.f_17));
	}
	if (Global_3145858->f_51906.f_18 > 0f)
	{
		fVar0 = (fVar0 + (fParam19 * Global_3145858->f_51906.f_18));
	}
	if (Global_3145858->f_51906.f_19 > 0f)
	{
		fVar0 = (fVar0 + (fParam20 * Global_3145858->f_51906.f_19));
	}
	if (Global_3145858->f_51906.f_20 > 0f)
	{
		fVar0 = (fVar0 + (fParam21 * Global_3145858->f_51906.f_20));
	}
	if (Global_3145858->f_51906.f_21 > 0f)
	{
		fVar0 = (fVar0 + (fParam22 * Global_3145858->f_51906.f_21));
	}
	if (Global_3145858->f_51906.f_22 > 0f)
	{
		fVar0 = (fVar0 + (fParam23 * Global_3145858->f_51906.f_22));
	}
	if (Global_3145858->f_51906.f_23 > 0f)
	{
		fVar0 = (fVar0 + (fParam24 * Global_3145858->f_51906.f_23));
	}
	if (Global_3145858->f_51906.f_24 > 0f)
	{
		fVar0 = (fVar0 + (fParam25 * Global_3145858->f_51906.f_24));
	}
	if (Global_3145858->f_51906.f_25 > 0f)
	{
		fVar0 = (fVar0 + (fParam26 * Global_3145858->f_51906.f_25));
	}
	if (Global_3145858->f_51906.f_26 > 0f)
	{
		fVar0 = (fVar0 + (fParam27 * Global_3145858->f_51906.f_26));
	}
	if (Global_3145858->f_51906.f_31 > 0f)
	{
		fVar0 = (fVar0 + (to_float(iParam28) * Global_3145858->f_51906.f_31));
	}
	if (Global_3145858->f_51906.f_29 > 0f)
	{
		fVar0 = (IntToFloat(iParam30) * Global_3145858->f_51906.f_29);
	}
	if (Global_3145858->f_51906.f_30 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam29) * Global_3145858->f_51906.f_30));
	}
	if (Global_3145858->f_51906.f_28 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam34) * Global_3145858->f_51906.f_28));
	}
	if ((Global_3145858->f_51906.f_33 > 0f && fParam22 > 0f) && Global_2097152->f_30 > 0f)
	{
		fVar5 = (Global_2097152->f_30 + 2000f);
		fVar6 = (Global_2097152->f_30 * 0.9f);
		fVar7 = func_1401(fParam22, fVar6, fVar5);
		fVar8 = ((fVar5 - fVar7) / (fVar5 - fVar6));
		fVar0 = (fVar0 + (fVar8 * Global_3145858->f_51906.f_33));
	}
	if (Global_3145858->f_51906.f_34 > 0f)
	{
		fVar9 = (fParam22 / (to_float(iParam31) / 1000f));
		fVar10 = func_1401(fVar9, 0f, 15f);
		fVar11 = (fVar10 / 15f);
		fVar0 = (fVar0 + (fVar11 * Global_3145858->f_51906.f_34));
	}
	if (Global_3145858->f_51906.f_32 > 0f)
	{
		fVar12 = (fParam32 / 10000f);
		fVar0 = (fVar0 + (fVar12 * Global_3145858->f_51906.f_32));
	}
	if (Global_3145858->f_51906.f_27 > 0f)
	{
		fVar0 = (fVar0 + (IntToFloat(iParam33) * Global_3145858->f_51906.f_27));
	}
	if (Global_3145858->f_51906.f_6 > 0f)
	{
		if (bParam9)
		{
			fVar0 = (fVar0 + Global_3145858->f_51906.f_6);
		}
	}
	return fVar0;
}

void func_1126(int iParam0, int iParam1, var uParam2, var uParam3)
{
	*Local_5688.f_2415[iParam0] = { Local_92[iParam1]->f_10 };
	MemCopy(&(Local_5688.f_2415[iParam0]->f_8), {func_1556(Local_1685[iParam1]->f_41, 0)}, 8);
	Local_5688.f_2415[iParam0]->f_16 = Local_1685[iParam1]->f_3;
	Local_5688.f_2415[iParam0]->f_17 = func_576(Local_1685[iParam1]->f_3);
	(*uParam3)[iParam0] = uParam2;
}

bool func_1127(int iParam0)
{
	switch (iParam0)
	{
		case -1652801619:
		case -1252587237:
		case 1121928263:
		case 1261477126:
			return true;
		default:
			break;
	}
	return false;
}

void func_1128(var uParam0, var uParam1)
{
	if (uParam0->f_2 == 2 && uParam0->f_897 != *uParam1)
	{
		func_1557(uParam0, 3);
	}
	uParam0->f_897 = { *uParam1 };
	func_1558(&(uParam0->f_969));
	if (*uParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_897.f_1)
	{
		if (&uParam0->f_897.f_1[iVar0] == 0)
		{
		}
		else
		{
			func_560(&(uParam0->f_969), func_1559(&(uParam0->f_897.f_1[iVar0]), 1));
		}
		iVar0++;
	}
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 598430796;
		case 1:
			return 690901814;
		case 3:
			return 2083323686;
			Jump @237; //curOff = 124
			return 474191950;
			Jump @237; //curOff = 135
			return 128623374;
			Jump @237; //curOff = 146
			return -993263478;
			Jump @237; //curOff = 157
			return 1344742130;
			Jump @237; //curOff = 168
			return 537169871;
			Jump @237; //curOff = 179
			return -1763610107;
			Jump @237; //curOff = 190
			return 68203906;
			Jump @237; //curOff = 201
			return 253418738;
			Jump @237; //curOff = 212
			return 433996714;
			Jump @237; //curOff = 223
			return 999578278;
			return 0;
		}

bool func_1130(int iParam0)
{
	return iParam0 != 0;
}

bool func_1131()
{
	return func_1130(_0xc17f69e1418cd11f(3));
}

bool func_1132(var uParam0, int iParam1)
{
	if (is_entity_in_water(*iParam1))
	{
		get_water_height_no_waves(get_entity_coords(*iParam1, true, false), &fVar0);
	}
	if (is_ped_falling(*iParam1))
	{
		return false;
	}
	else if (!is_entity_visible(*iParam1))
	{
		return false;
	}
	else if (is_entity_in_air(*iParam1, 1))
	{
		return false;
	}
	else if (fVar0 > 0.25f)
	{
		return false;
	}
	else if (is_ped_ragdoll(*iParam1))
	{
		return false;
	}
	else if (is_ped_climbing(*iParam1))
	{
		return false;
	}
	else if (_0x84d0bf2b21862059(*iParam1))
	{
		return false;
	}
	else if (is_ped_getting_up(*iParam1))
	{
		return false;
	}
	else if (_get_ped_crouch_movement(*iParam1))
	{
		return false;
	}
	else if (Global_1913694->f_1582 || Global_1913694->f_1581)
	{
		return false;
	}
	else if (is_ped_in_cover(*iParam1, 0, 0))
	{
		return false;
	}
	else if (func_1560(iParam1))
	{
		return false;
	}
	else if (is_ped_going_into_cover(*iParam1))
	{
		return false;
	}
	else if (is_ped_aiming_from_cover(*iParam1))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(*iParam1, false) && !func_1133(iParam1))
	{
		return false;
	}
	else if (_0x2311f15d971aa680(*iParam1) != -1)
	{
		return false;
	}
	else if (func_1561(iParam1))
	{
		return false;
	}
	else if (_0xa24c1d341c6e0d53(1, 0, 0) && !is_bit_set(uParam0->f_8, 18))
	{
		return false;
	}
	else if (_is_ped_hogtying(*iParam1))
	{
		return false;
	}
	else if (_is_ped_hogtied(*iParam1))
	{
		return false;
	}
	else if (is_ped_on_vehicle(*iParam1, false))
	{
		return false;
	}
	else if (!is_entity_on_screen(*iParam1))
	{
		return false;
	}
	else if (Global_1102219->f_26.f_3337 != 0)
	{
		return false;
	}
	else if (func_830(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	return true;
}

bool func_1133(int iParam0)
{
	if (is_ped_in_any_vehicle(*iParam0, false) || is_ped_on_vehicle(*iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*iParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 742064790)
		{
			iLocal_16061 = func_1562();
			return true;
		}
	}
	return false;
}

void func_1134(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1135(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (uParam0->f_12 == -1)
	{
		if (bParam3)
		{
			uParam0->f_12 = (get_game_timer() % 2);
		}
		else if (!bParam2 || !_0xcb690f680a3ea971(*iParam1, 6))
		{
			if (get_random_int_in_range(0, 10) < 5)
			{
				uParam0->f_12 = 0;
			}
			else
			{
				uParam0->f_12 = 2;
			}
		}
		else
		{
			uParam0->f_12 = (get_game_timer() % 4);
		}
		if (func_1136(iParam1))
		{
			uParam0->f_12 = 0;
		}
		if (iParam4 >= 0)
		{
			uParam0->f_12 = iParam4;
		}
	}
	bVar10 = false;
	if (!bParam2)
	{
		bVar10 = true;
	}
	else if (!_0xcb690f680a3ea971(*iParam1, 6))
	{
		bVar10 = true;
	}
	func_1563(uParam0->f_12, &vVar0, &vVar3, &vVar6, &uVar9, _0xdc44f405a6b98d03(*iParam1, 0), is_ped_male(*iParam1), bVar10, bParam3);
	vVar11 = { get_offset_from_entity_in_world_coords(*iParam1, vVar0) };
	iVar14 = func_1564(uParam0, iParam1, vVar11, get_entity_coords(*iParam1, true, false));
	if (iVar14 == 1)
	{
		func_1565(uParam0, iParam1, vVar0, vVar3, vVar6, uVar9);
	}
	else
	{
		uParam0->f_12 = -1;
	}
	return iVar14;
}

bool func_1136(int iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return false;
	}
	if (get_current_ped_weapon(*iParam0, &iVar0, true, 0, false))
	{
		return (_is_weapon_pistol(iVar0) || _is_weapon_revolver(iVar0));
	}
	return false;
}

void func_1137(var uParam0)
{
	set_cam_coord(*uParam0, get_gameplay_cam_coord());
	set_cam_rot(*uParam0, get_gameplay_cam_rot(2), 2);
	set_cam_fov(*uParam0, get_gameplay_cam_fov());
}

void func_1138(int iParam0, var uParam1)
{
	if (!_0xcb690f680a3ea971(*iParam0, 6))
	{
		return;
	}
	if (_is_ped_hogtying(*iParam0) || _is_ped_hogtied(*iParam0))
	{
		return;
	}
	clear_ped_tasks_immediately(*iParam0, false, true);
	StringCopy(&cVar29, "Camera", 16);
	if (uParam1->f_12 > 0)
	{
		StringConCat(&cVar29, "_", 16);
		StringIntConCat(&cVar29, uParam1->f_12, 16);
	}
	_get_anim_scene_entity_matrix(uParam1->f_20, &cVar29, &Var17, false, "LIVE", 2);
	uParam1->f_13.f_1 = (uParam1->f_13.f_1 + 0.165f);
	Var0.f_1 = { func_1566(Var17, Var17.f_3, uParam1->f_13) };
	Var0.f_4 = 10000;
	Var0.f_6 = 1;
	Var0.f_7 = 1;
	task_shoot_with_weapon(*iParam0, &Var0);
}

bool func_1139(int iParam0, int iParam1)
{
	iVar0 = func_1567(iParam1);
	iVar1 = func_1567(iParam0);
	if (iVar0 == -1 || iVar1 == -1)
	{
		return false;
	}
	if (iVar0 == iVar1)
	{
		return false;
	}
	return iVar0 > (iVar1 - 1);
}

void func_1140(int* iParam0)
{
	if (!is_bit_set(*iParam0, 2))
	{
		return;
	}
	if (!func_345(&(iParam0->f_3)) || func_325(&(iParam0->f_3), 0, 0) > 5000)
	{
		bVar0 = true;
		set_bit(iParam0, 0);
		func_324(&(iParam0->f_3), 0, 0);
		iVar1 = func_1568(iParam0);
		if (iVar1 != -1)
		{
			iParam0->f_5 = iVar1;
			bVar0 = iVar1 == iParam0->f_9;
		}
		if (bVar0)
		{
			iParam0->f_9 = -1;
			func_358(&(iParam0->f_3));
			clear_bit(iParam0, 2);
		}
	}
}

bool func_1141()
{
	if (func_260())
	{
		bVar0 = func_370(Local_1685[iVar16017]->f_3);
	}
	else if (Local_5688.f_1130 == &Local_92[iVar16017])
	{
		bVar0 = true;
	}
	bVar1 = iVar16017 == iLocal_70;
	bVar2 = func_38(iLocal_71);
	if (Local_92[iVar16017]->f_3 && !func_38(iVar16017))
	{
		func_1569(iVar16017, bVar0, 0, 0, bVar1, bVar2, 0, func_586());
	}
	func_1570(1168300822);
	uLocal_16019 = iVar16017 + 1;
	if (iVar16017 < 32)
	{
		return false;
	}
	return true;
}

void func_1142()
{
	if (!func_1571(iLocal_71, 0))
	{
		Global_1048684->f_1 = { Local_92[iLocal_70]->f_10 };
		Global_1048684->f_19 = iLocal_78;
		Global_1048684->f_18 = iLocal_80;
		if (iLocal_82 == -1 || !network_is_player_active(iLocal_78))
		{
			Global_1048684->f_17 = 1105014447;
			Global_1048684->f_390 = { get_entity_coords(iLocal_80, true, false) };
			func_660(17);
		}
		else
		{
			Global_1048684->f_390 = { get_entity_coords(iLocal_80, true, false) };
		}
	}
	else
	{
		StringCopy(&(Global_1048684->f_1), get_player_name(iLocal_79), 64);
		Global_1048684->f_390 = { get_entity_coords(iLocal_81, true, false) };
		Global_1048684->f_18 = iLocal_81;
		Global_1048684->f_19 = iLocal_79;
	}
	if (func_260())
	{
		if (Local_5688.f_1132 != -1)
		{
			Global_1048684->f_9 = { *(*Global_1050984)[Local_5688.f_1132] };
			Global_1048684->f_17 = func_576(Local_5688.f_1132);
		}
	}
	else
	{
		Global_1048684->f_9 = { Local_5688.f_1122 };
		bVar0 = are_strings_equal(&(Global_1048684->f_9), &(Global_1048684->f_1));
		Global_1048684->f_17 = func_262(0, 0, bVar0);
	}
	Global_1048684->f_20 = Local_1685[iLocal_70]->f_3;
	Global_1048684->f_21 = _get_prev_weather_type_hash_name();
	Global_1048684->f_471 = { func_1572(-1, Local_1685[iLocal_70]->f_3) };
}

void func_1143(int iParam0)
{
	Global_262152 = iParam0;
}

int func_1144(int iParam0, int iParam1)
{
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = iParam1;
	if ((*Global_1145091)[iVar1]->f_23.f_5 != 0 && (*Global_1145091)[iVar1]->f_23.f_5 != &Global_1952637->f_83[0])
	{
		_set_ped_component_enabled(iParam0, (*Global_1145091)[iVar1]->f_23.f_5, false, true, false);
		bVar0 = true;
	}
	if ((*Global_1145091)[iVar1]->f_23.f_8 != 0 && (*Global_1145091)[iVar1]->f_23.f_8 != &Global_1952637->f_83[2])
	{
		_set_ped_component_enabled(iParam0, (*Global_1145091)[iVar1]->f_23.f_8, false, true, false);
		bVar0 = true;
	}
	if ((*Global_1145091)[iVar1]->f_23.f_7 != 0 && (*Global_1145091)[iVar1]->f_23.f_7 != &Global_1952637->f_83[1])
	{
		_set_ped_component_enabled(iParam0, (*Global_1145091)[iVar1]->f_23.f_7, false, true, false);
		bVar0 = true;
	}
	if ((*Global_1145091)[iVar1]->f_23.f_9 != 0 && (*Global_1145091)[iVar1]->f_23.f_9 != &Global_1952637->f_83[3])
	{
		_set_ped_component_enabled(iParam0, (*Global_1145091)[iVar1]->f_23.f_9, false, true, false);
		bVar0 = true;
	}
	if ((*Global_1145091)[iVar1]->f_23.f_6 != 0 && (*Global_1145091)[iVar1]->f_23.f_6 != &Global_1952637->f_83[4])
	{
		_set_ped_component_enabled(iParam0, (*Global_1145091)[iVar1]->f_23.f_6, false, true, false);
		bVar0 = true;
	}
	if (bVar0)
	{
		_0x704c908e9c405136(iParam0);
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
	return 1;
}

void func_1145()
{
	if (Local_5688.f_2390 == 28)
	{
		Local_5688.f_2390 = func_1573(0, 0);
	}
	if (!is_bit_set(Local_5688.f_41, 16))
	{
		bVar1 = true;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_92[iVar0]->f_3)
			{
				if (!is_bit_set(Local_1685[iVar0]->f_2, 14))
				{
					bVar1 = false;
				}
				else
				{
					iVar0++;
				}
				if (bVar1)
				{
					set_bit(&(Local_5688.f_41), 16);
				}
			}
		}
	}
}

bool func_1146(int iParam0)
{
	return (*Global_263042)[iParam0]->f_1.f_55.f_4;
}

bool func_1147()
{
	iVar12 = 0;
	while (iVar12 < 32)
	{
		iVar14 = int_to_participantindex(iVar12);
		if (network_is_participant_active(iVar14))
		{
			if (!func_38(iVar12))
			{
				if (func_260())
				{
					uVar0[Local_1685[iVar12]->f_3] = &uVar0[Local_1685[iVar12]->f_3] + 1;
					set_bit(&iVar10, Local_1685[iVar12]->f_3);
				}
				else
				{
					iVar9++;
				}
			}
		}
		iVar12++;
	}
	if (!func_260())
	{
		if (iVar9 < Global_3145858->f_195)
		{
			return false;
		}
	}
	else
	{
		iVar11 = 0;
		while (iVar11 <= 7)
		{
			if (is_bit_set(iVar10, iVar11))
			{
				if (&uVar0[iVar11] < &Global_2359296->f_27[iVar11])
				{
					return false;
				}
				iVar13++;
			}
			iVar11++;
		}
		if (iVar13 <= 1)
		{
			return false;
		}
	}
	return true;
}

void func_1148()
{
	(*Global_263042)[network_player_id_to_int()]->f_1.f_55.f_1++;
}

void func_1149(var uParam0, int iParam1)
{
	uParam0->f_13 = iParam1;
	*uParam0 = 3;
	uParam0->f_8 = func_803(iLocal_71);
	uParam0->f_4 = func_1574();
	uParam0->f_2 = &Global_1049275;
}

void func_1150(var uParam0)
{
	Var0.f_1 = -1082130432;
	Var0.f_2 = -1082130432;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1082130432;
	Var0.f_5 = -1082130432;
	Var0.f_14 = 255;
	iVar23 = 0;
	while (iVar23 <= 31)
	{
		*(*uParam0)[iVar23] = { Var0 };
		iVar23++;
	}
}

void func_1151(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam1)[iVar0]->f_14 != 255)
		{
			if (bParam4)
			{
				iVar1 = func_1575(&((*uParam1)[iVar0]->f_14), &iVar2);
			}
			else
			{
				iVar1 = func_1576(&iVar2);
			}
			if (iVar1 == -1)
			{
			}
			else
			{
				(*uParam0)[iVar1]->f_14 = { (*uParam1)[iVar0]->f_14 };
				(*uParam0)[iVar1] = uParam1[iVar0];
				func_1577(&((*uParam0)[iVar1]->f_1), (*uParam1)[iVar0]->f_1, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_2), (*uParam1)[iVar0]->f_2, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_3), (*uParam1)[iVar0]->f_3, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_4), (*uParam1)[iVar0]->f_4, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_5), (*uParam1)[iVar0]->f_5, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_7), (*uParam1)[iVar0]->f_7, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_8), (*uParam1)[iVar0]->f_8, bParam4);
				func_1577(&((*uParam0)[iVar1]->f_9), (*uParam1)[iVar0]->f_9, bParam4);
				(*uParam0)[iVar1]->f_12 = ((*uParam0)[iVar1]->f_12 + (*uParam1)[iVar0]->f_12);
				(*uParam0)[iVar1]->f_11 = (*uParam1)[iVar0]->f_11;
				(*uParam0)[iVar1]->f_6 = (*uParam1)[iVar0]->f_6;
			}
		}
		iVar0++;
	}
	func_1578(uParam0, uParam2);
	*uParam3 = 1;
}

void func_1152(var uParam0, var uParam1, var uParam2, int iParam3)
{
	Global_1050050->f_1 = { *uParam0 };
	Global_1050050->f_12 = func_1579();
	Global_1050050->f_13 = uParam1;
	Global_1050050->f_14 = uParam2;
	Global_1050050->f_24 = iParam3;
}

Vector3 func_1153()
{
	return Global_265377->f_124517.f_71.f_27;
}

int func_1154(vector3 vParam0)
{
	iVar0 = network_player_id_to_int();
	if (Global_263042[iVar0] != 9)
	{
		return 0;
	}
	if (func_53(player_id(), 32))
	{
		return 0;
	}
	MemCopy(&uVar1, {func_1580()}, 8);
	iVar9 = get_hash_key(&vParam0);
	if (func_1581())
	{
		if (iVar9 == get_hash_key(&uVar1))
		{
			return 1;
		}
		return 0;
	}
	if (is_string_null_or_empty(&vParam0))
	{
		return 0;
	}
	if (func_1582() != iVar9)
	{
		func_1583();
		func_1584();
		func_101(4);
	}
	else if (!func_1585(0, 0))
	{
		return 0;
	}
	func_1586(vParam0);
	return 1;
}

bool func_1155(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		*uParam0 = -1199438720;
		return true;
	}
	*uParam0 = 0;
	_0x4fcbcc0584cd08e9(1852874750);
	if (_0xca1f0b5103936891(1852874750))
	{
		*uParam0 = _0x8ba3d7b1e83ef803(1852874750);
		if (*uParam0 == 0)
		{
			*uParam0 = -1199438720;
		}
		func_1587(*uParam0);
		return true;
	}
	return false;
}

bool func_1156()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			if (!func_38(iVar0))
			{
				if (Local_1685[iVar0]->f_41 == 0)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_1157(int iParam0)
{
	Global_1051113 = iParam0;
}

bool func_1158(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	Var0 = { func_873(iParam0) };
	if (!func_454(Var0))
	{
		return true;
	}
	if (!func_1588(iParam0))
	{
		if (Global_1900736->f_69 <= 0)
		{
			Global_1900736->f_69 = absi(get_cloud_time_as_int());
		}
		else if (absi((Global_1900736->f_69 - get_cloud_time_as_int())) >= Global_1901947->f_677.f_1)
		{
			func_808(22, -1);
		}
		return false;
	}
	else if (Global_1900736->f_69 != 0)
	{
		Global_1900736->f_69 = 0;
	}
	func_1589(get_cloud_time_as_int());
	func_1590(iParam0, 1);
	if (func_1419(iParam0, &iVar2))
	{
		func_556(func_829(-1892463704, iVar2), 1);
		Var3 = { func_829(1671659657, iVar2) };
		stat_id_set_to_posse_id(&Var3);
		iVar5 = 0;
		Var6 = { func_555(-1048906573) };
		if (_0x302e71c1d9ee75b9(&Var6, func_27(Var0), &iVar5) && iVar5 == 0)
		{
			func_556(func_829(909949304, iVar2), 1);
		}
	}
	if (!func_1416(iParam0))
	{
		func_175(0);
	}
	func_86();
	func_1591(iParam0);
	func_876(iParam0);
	func_877(0);
	func_1593(func_1592(iParam0));
	func_1594(Var0, 1, 1, 0, 1);
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	return true;
}

void func_1159(int iParam0)
{
	MemCopy(&uVar0, {(*Global_1835011)[iParam0]->f_4}, 3);
	if ((func_844() != -1 && !is_string_null_or_empty(&uVar0)) && is_thread_active((*Global_1835011)[iParam0]->f_8, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_8);
	}
}

int func_1160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 12000;
		case 2:
			return 12000;
		default:
			break;
	}
	return -1;
}

char* func_1161(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Round_End_Timer";
		case 2:
			return "Match_End_Timer";
		default:
			break;
	}
	return "";
}

int func_1162()
{
	return Local_5688.f_3292;
}

bool func_1163()
{
	if (func_260())
	{
		return func_1595();
	}
	else
	{
		return func_1596();
	}
	return false;
}

void func_1164(var uParam0, var uParam1)
{
	if (!func_1597(uParam0, uParam1))
	{
		return;
	}
	if (network_is_host_of_this_script() && !is_bit_set(uParam0->f_7, 1))
	{
		func_1598(uParam0);
	}
	if (!is_bit_set(uParam0->f_7, 1))
	{
		return;
	}
	func_1599(uParam0, &iVar0, &iVar1, &iVar2);
	func_1600(uParam0, uParam1);
	iVar3 = 0;
	if (uParam0->f_6 > -1)
	{
		iVar3 = uParam0->f_6;
	}
	else if (is_bit_set(uParam0->f_7, 3))
	{
		iVar3 = 30000;
	}
	switch (uParam0->f_8)
	{
		case 0:
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), true);
			break;
		case 1:
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), false);
			break;
		case 2:
			bVar4 = func_1601(iVar0, iVar1, iVar2);
			_network_clock_time_override_2(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1), bVar4);
			break;
		case 3:
			_network_clock_time_override(iVar0, iVar1, iVar2, iVar3, !is_bit_set(uParam1->f_5, 1));
			break;
	}
	set_bit(&(uParam1->f_5), 0);
}

void func_1165(var uParam0, var uParam1)
{
	if (uParam1->f_1 != uParam0->f_1 || (*uParam0 == 2 && uParam0->f_1 == 0))
	{
		switch (*uParam0)
		{
			case 0:
				return;
			case 1:
				break;
			case 2:
				return;
			default:
				if (uParam0->f_1 == 0)
				{
				}
				else
				{
					iVar0 = func_1602(uParam0->f_1);
					if (*uParam1 == 0 || uParam0->f_2 == 0)
					{
						_set_weather_type(iVar0, true, true, false, 0f, false);
					}
					else
					{
						_set_weather_type(iVar0, false, true, true, (to_float(uParam0->f_2) / 1000f), false);
					}
					func_523(1);
				}
				break;
		}
		*uParam1 = *uParam0;
		uParam1->f_1 = uParam0->f_1;
	}
}

char* func_1166(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_3145858->f_51793)))
	{
		if (iParam0 >= 0 && iParam0 <= 23)
		{
			sVar0 = func_1603(iParam0);
		}
		else if (iParam0 >= 40001 && iParam0 < 40001 + 16)
		{
			iVar1 = (iParam0 - 40001);
			sVar0 = func_1604(*Global_3145858->f_51797[iVar1]);
		}
		else
		{
			sVar0 = "MC_SILENT";
		}
	}
	else
	{
		sVar0 = func_1603(iParam0);
	}
	return sVar0;
}

void func_1167(int* iParam0, int iParam1)
{
	if (iParam0->f_6 != iParam1)
	{
		iParam0->f_6 = iParam1;
		func_324(&(iParam0->f_1), 0, 0);
		set_bit(iParam0, 0);
	}
}

void func_1168(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_participantindex(iVar0);
		if (network_is_participant_active(iVar1))
		{
			iVar2 = network_get_player_index(iVar1);
			(*uParam0)[get_unique_int_for_player(iVar2)] = iVar2;
		}
		iVar0++;
	}
}

int func_1169(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (bParam2)
		{
			return func_1605();
		}
		else
		{
			return func_751();
		}
	}
	switch (iParam0)
	{
		case 0:
			return -1926234334;
		case 1:
			return -324452845;
		case 2:
			return 978868600;
		case 3:
			return 1209431284;
		case 4:
			return 364744771;
		case 5:
			return -1581930451;
		case 6:
			return -210318418;
		case 7:
			return 1782892786;
		default:
			break;
	}
	return 2087220824;
}

bool func_1170(int iParam0)
{
	iVar0 = 6;
	if (func_1130(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_1171()
{
	func_1606();
	func_463(0);
	if (!func_1607())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
}

void func_1172(int iParam0)
{
	Local_1685[iLocal_71]->f_1 = iParam0;
}

bool func_1173()
{
	return func_984(iLocal_71);
}

void func_1174(bool bParam0, bool bParam1)
{
	Var0.f_5 = 255;
	func_151(&uLocal_12894);
	if (bParam1)
	{
		func_679(65416881, &Var0, 1);
		return;
	}
	if (bParam0)
	{
		set_bit(&iLocal_57, 22);
		func_679(1516470724, &Var0, 1);
		func_1608();
	}
	else
	{
		func_679(65416881, &Var0, 1);
		clear_bit(&iLocal_60, 3);
		clear_entity_last_damage_entity(iLocal_81);
		if (func_586())
		{
			func_1608();
			if (func_1609())
			{
				func_1504();
			}
		}
		else if (!bLocal_73)
		{
			set_bit(&(Local_1685[iLocal_71]->f_2), 21);
		}
		else
		{
			func_1608();
		}
	}
}

void func_1175()
{
	if (func_1610(iVar15639))
	{
		func_1046(1);
	}
}

void func_1176(int iParam0, bool bParam1, bool bParam2)
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
		if (Global_34 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

void func_1177()
{
	if (!func_91(255))
	{
		if (func_1611(255))
		{
			func_100(0);
		}
		func_657(func_1612(), func_1052(), 0, 0);
		set_bit(&(Local_1685[iLocal_71]->f_2), 3);
	}
	else
	{
		func_96(7);
	}
}

void func_1178(var uParam0, struct<2> Param1, bool bParam3)
{
	func_1613(uParam0, 84);
	if (!func_913(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_252(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if (((((((((((((((((((_get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Mission_Controller")) <= 0 && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Race_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("FM_Deathmatch_Controller")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("mp_intro")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_archery")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_challenges")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_condor_egg")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_dead_drop")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_escaped_convicts")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_golden_hat")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_hot_property")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_castle")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_king_of_the_rails")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_round_up")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_supply_train")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_treasure_hunt")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wreckage")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_animal_tagging")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_wildlife_photographer")) <= 0) && _get_number_of_references_of_script_with_name_hash(get_hash_key("fme_protect_legendary_animal")) <= 0)
	{
		return;
	}
	if (Global_1139381->f_4796)
	{
		func_496(&(Global_1139381->f_4796), 1);
	}
	func_927(&(Global_1139381->f_4796));
	func_1614(uParam0);
	func_1615();
	func_915(0);
	Global_1139381->f_4796 = { *uParam0 };
	Global_1139381->f_4796.f_13 = { Param1 };
	Global_1139381->f_4796 = 1;
	if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[0]))
	{
		Var1 = { func_1616(0, 1, 0, -1) };
	}
	func_1620(&(Global_1139381->f_4796), func_1617(&Var1, 0), func_1618(&Var1, 0), -882137232, func_1619(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_1301(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_918();
		}
	}
	if (bParam3)
	{
		if (func_1292(0) != 3)
		{
			func_925(1, uParam0->f_57);
			func_250(16777216);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1139381->f_4796.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_1621(&Var5);
		if (!func_373(115, 255))
		{
			func_1622();
		}
	}
	if (uParam0->f_3)
	{
		func_1623(uParam0);
		func_1624();
		func_1625(0);
	}
	if (uParam0->f_6)
	{
		func_1625(3);
	}
	if (uParam0->f_4)
	{
		func_1625(1);
		func_1626(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_1627(uParam0->f_25.f_3, 1);
		func_1628(uParam0->f_25.f_4, 1);
		func_1629(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_1630();
	}
	if (uParam0->f_5)
	{
		func_1625(2);
		func_1631(0, uParam0->f_25.f_6, 1);
		func_1631(2, uParam0->f_25.f_7, 1);
		func_1631(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_1625(4);
	}
	if (uParam0->f_12)
	{
		func_1625(5);
		func_1632(&(uParam0->f_34[0]), uParam0->f_34[0]->f_1, 0);
		func_1632(&(uParam0->f_34[1]), uParam0->f_34[1]->f_1, 1);
		func_1632(&(uParam0->f_34[2]), uParam0->f_34[2]->f_1, 2);
		func_1632(&(uParam0->f_34[3]), uParam0->f_34[3]->f_1, 3);
		func_1633();
	}
	if (uParam0->f_8)
	{
		func_1625(6);
		func_922(Global_1956200->f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_922(Global_1956200->f_1549);
	}
	else if (bParam3)
	{
		func_922(Global_1956200->f_1549);
	}
}

bool func_1179(int iParam0)
{
	return func_373(43, iParam0);
}

bool func_1180()
{
	if (func_448(44))
	{
		func_385(43);
		return true;
	}
	return false;
}

void func_1181(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1409(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

int func_1182(char* sParam0, int iParam1, int iParam2)
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
	iVar2 = func_1634(iParam1, iParam2);
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
					iVar10 = func_1635(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1636(iParam1, iParam2, 0);
						return 1;
					}
					func_1637(iParam1, iParam2, iVar1);
					func_1636(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1638(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1636(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1636(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1636(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1638(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1636(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_1636(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1638(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1636(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1183(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = func_1634(iParam0, iParam1);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1637(iParam0, iParam1, 0);
			func_1636(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1638(iParam0, iParam1);
			if (iVar2 != 0)
			{
				texture_download_release(iVar2);
			}
			func_1636(iParam0, iParam1, 0);
			break;
	}
}

void func_1184(var uParam0)
{
	if (uParam0->f_894 || uParam0->f_897 == 0)
	{
		uParam0->f_879 = 1;
		if (uParam0->f_2 == 2)
		{
			func_1557(uParam0, 3);
		}
	}
	else
	{
		uParam0->f_879 = 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (_uiflowblock_is_loaded(*uParam0) && !uParam0->f_879)
			{
				func_1557(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_897 != 0)
			{
				_uiflowblock_enter(*uParam0, func_1639(uParam0->f_897));
				if (!_uistatemachine_exists(1546991729))
				{
					_uistatemachine_create(1546991729, *uParam0);
				}
			}
			func_713(9);
			func_1640(uParam0);
			func_1641(uParam0);
			switch (uParam0->f_897)
			{
				case 456605338:
					func_1642(uParam0);
					break;
				case 1083726117:
				case 2091842205:
					func_1643(uParam0);
					break;
				case 1375802800:
					func_1644(uParam0);
					break;
				case -1838730762:
					func_1645(uParam0);
					break;
				case -1220700382:
					func_1646(uParam0);
					break;
				case 1174457346:
					func_1647(uParam0);
					break;
				case 593332131:
					func_1648(uParam0);
					break;
				case -2146584:
					func_1649(uParam0);
					break;
				case 344700063:
				case 1485013169:
					func_1650(uParam0);
					break;
				case 1936484400:
					func_1651(uParam0);
					break;
				case 1835758938:
					func_1652(uParam0);
					break;
				case -438934027:
					func_1653(uParam0);
					break;
				case 244605310:
					func_1654(uParam0);
					break;
				case 615217735:
					func_1655(uParam0);
					break;
				case 1117913623:
				case 1928276294:
					func_1656(uParam0);
					break;
				case -699819638:
					func_1657(uParam0);
					break;
				case 283413025:
					func_1658(uParam0);
					break;
				case 1443986063:
					func_1659(uParam0);
					break;
				case -818658900:
					func_1660(uParam0);
					break;
			}
			func_1557(uParam0, 2);
			break;
		case 2:
			func_1661(uParam0);
			switch (uParam0->f_897)
			{
				case 456605338:
					func_1662(uParam0);
					break;
				case 2091842205:
					func_1663(uParam0);
					break;
				case 1083726117:
					func_1664(uParam0);
					break;
				case 1375802800:
					func_1665(uParam0);
					break;
				case -699819638:
					func_1666(uParam0);
					break;
				case -1838730762:
					func_1667(uParam0);
					break;
				case -1220700382:
					func_1668(uParam0);
					break;
				case 1174457346:
					func_1669(uParam0);
					break;
				case 593332131:
				case 1443986063:
					func_1670(uParam0);
					break;
				case -2146584:
					func_1671(uParam0);
					break;
				case 344700063:
					func_1672(uParam0);
					break;
				case -438934027:
					func_1673(uParam0);
					break;
				case 1835758938:
				case 1936484400:
					func_1674(uParam0);
					break;
				case 1117913623:
					func_1675(uParam0);
					break;
				case 1928276294:
					func_1676(uParam0);
					break;
				case 244605310:
					func_1677(uParam0);
					break;
				case 283413025:
					func_1678(uParam0);
					break;
				case 615217735:
					func_1679(uParam0);
					break;
				case -818658900:
					func_1680(uParam0);
					break;
			}
			break;
		case 3:
			if (_uistatemachine_exists(1546991729) && _0xf7c180f57f85d0b8(1546991729))
			{
				_databinding_write_data_bool(&(uParam0->f_12[3]), false);
				func_1681(uParam0);
				func_1641(uParam0);
				func_712(9, 0);
				_0x6b9fe4f0ba521a19(1546991729, 0);
				func_1557(uParam0, 4);
			}
			else
			{
				func_1557(uParam0, 0);
			}
			break;
		case 4:
			if (!_0x11e73195e735b25b(1546991729))
			{
				if (_uistatemachine_exists(1546991729))
				{
					_uistatemachine_destroy(1546991729);
				}
				func_1557(uParam0, 0);
			}
			break;
		case 5:
			func_1681(uParam0);
			func_1274(uParam0);
			break;
	}
}

void func_1185(var uParam0)
{
	sVar0 = "Out_of_Bounds";
	sVar1 = "RDRO_Countdown_Sounds";
	if ((((((((((((_is_app_running(29649618) && _0x96fd694fe5be55dc(29649618) != 1271225230) || _is_app_running(2066271527)) || _is_app_running(683057487)) || _is_app_running(-1318692639)) || _is_app_running(-779472066)) || _is_app_running(-1379742803)) || _is_app_running(1916894743)) || _is_app_running(-1641598689)) || _is_app_running(1037810546)) || _is_app_running(-605293197)) || _is_app_running(347537322)) || _is_app_running(-479097442))
	{
		bVar2 = true;
	}
	if (uParam0->f_882 == 0)
	{
		if (uParam0->f_894 && !bVar2)
		{
			func_1682(uParam0, 1);
		}
	}
	if (uParam0->f_882 == 1)
	{
		_databinding_write_data_bool(&(uParam0->f_12[33]), true);
		animpostfx_play("MP_OutofAreaDirectional");
		_0x6339c1ea3979b5f7("default", "out_of_bounds_scenes");
		_hide_hud_component(-2124237476);
		func_1683(4);
		func_1500();
		Var3 = { *uParam0->f_379[uParam0->f_883] };
		if (uParam0->f_895 < 0)
		{
			iVar18 = (Var3.f_4 / 1000);
			uParam0->f_895 = get_sound_id();
			_0xce5d0ffe83939af1(uParam0->f_895, sVar0, sVar1, 1);
			_0x503703ec1781b7d6(uParam0->f_895, "Time", to_float(iVar18));
		}
		func_1682(uParam0, 2);
	}
	if (uParam0->f_882 == 2)
	{
		Var19 = { *uParam0->f_379[uParam0->f_883] };
		_databinding_write_data_string(&(uParam0->f_12[34]), _create_var_string(2, "UI_L_ONEPAR", (Var19.f_4 / 1000)));
		_0x981c7d863980fa51();
		_0x735762e8d7573e42(1, uParam0->f_896, 2.5f);
		if (!uParam0->f_894 || bVar2)
		{
			func_1682(uParam0, 3);
		}
	}
	if (uParam0->f_882 == 3)
	{
		_databinding_write_data_bool(&(uParam0->f_12[33]), false);
		func_1684();
		_0x9428447ded71fc7e("out_of_bounds_scenes");
		_0x3210bcb36af7621b(uParam0->f_895);
		uParam0->f_895 = -1;
		_0xc5cb91d65852ed7e("MP_OutofAreaDirectional");
		_display_hud_component(-2124237476);
		func_1275(4);
		_0x981c7d863980fa51();
		uParam0->f_896 = 0;
		func_1682(uParam0, 0);
	}
}

int func_1186(vector3 vParam0, vector3 vParam3)
{
	return func_1685(vParam0, vParam3, 0f, 0f, 0f);
}

char* func_1187(float fParam0)
{
	if (fParam0 == 0f)
	{
		return "zero";
	}
	else if (fParam0 < 0.33333f)
	{
		return "low";
	}
	else if (fParam0 < 0.66666f)
	{
		return "medium";
	}
	return "high";
}

void func_1188(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1189(int iParam0)
{
	return func_1686(func_1061(), iParam0);
}

int func_1190(int iParam0)
{
	uVar3 = func_1061();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&uVar3, iVar1))
		{
		}
		else
		{
			if (func_1063(iVar1) == -1)
			{
				iVar2 = func_1062(iVar1);
			}
			else
			{
				iVar2 = func_1063(iVar1);
			}
			if (iVar2 == iParam0)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_1191()
{
	uVar2 = func_1061();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!_0x72b2e00c9bac6789(&uVar2, iVar0))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1192()
{
	iVar0 = 344970;
	return iVar0;
}

int func_1193()
{
	return Global_3145858->f_452;
}

int func_1194()
{
	if (Global_3145858->f_36479 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= (Global_3145858->f_36479 - 1))
		{
			iVar0 = (iVar0 + _0x635423d55ca84fc8(Global_3145858->f_36480[iVar1]->f_1));
			iVar1++;
		}
	}
	return (Global_3145858->f_13424 + iVar0);
}

int func_1195()
{
	iVar0 = (Global_2359296->f_458 + Global_3145858->f_32695);
	if (iVar0 > 60)
	{
		iVar0 = 60;
	}
	return iVar0;
}

void func_1196(int iParam0)
{
	if (Local_5688.f_40 != iParam0)
	{
		Local_5688.f_40 = iParam0;
	}
}

bool func_1197()
{
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_37245)
	{
		if (Global_3145858->f_37246[iVar0]->f_1 == 0)
		{
		}
		else
		{
			func_963(Global_3145858->f_37246[iVar0]->f_1, 1, 1);
			func_1687(Global_3145858->f_37246[iVar0]->f_1);
			func_1688(iVar0);
		}
		iVar0++;
	}
	return true;
}

bool func_1198()
{
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_36479 - 1))
	{
		if (Global_3145858->f_36480[iVar0]->f_1 == 0 || func_410(Global_3145858->f_36480[iVar0]->f_4))
		{
		}
		else if (is_bit_set(Local_5688.f_1284.f_2, iVar0))
		{
		}
		else if (network_does_network_id_exist(&(Local_5688.f_52.f_108[iVar0])))
		{
			if (!_0xbd3c4a2ed509205e(net_to_veh(&(Local_5688.f_52.f_108[iVar0]))))
			{
				bVar2 = false;
			}
		}
		else if (!func_862(Global_3145858->f_36480[iVar0]->f_1))
		{
			bVar2 = false;
		}
		else if (bVar3)
		{
			bVar2 = false;
		}
		else if (!func_1689(Local_5688.f_52.f_108[iVar0], Global_3145858->f_36480[iVar0]->f_1, Global_3145858->f_36480[iVar0]->f_4, is_bit_set(Global_3145858->f_36480[iVar0]->f_7, 1), is_bit_set(Global_3145858->f_36480[iVar0]->f_7, 4), 1, !is_bit_set(Global_3145858->f_36480[iVar0]->f_7, 20), 0))
		{
			bVar2 = false;
		}
		else
		{
			iVar4 = net_to_veh(&(Local_5688.f_52.f_108[iVar0]));
			if (!does_entity_exist(iVar4))
			{
				bVar2 = false;
			}
			else
			{
				func_1690(iVar0, net_to_veh(&(Local_5688.f_52.f_108[iVar0])));
				iVar1 = 0;
				while (iVar1 < _0x635423d55ca84fc8(Global_3145858->f_36480[iVar0]->f_1))
				{
					iVar5 = get_train_carriage(iVar4, iVar1);
					if (!does_entity_exist(iVar5))
					{
						bVar2 = false;
					}
					iVar1++;
				}
				if (!bVar2)
				{
				}
				else
				{
					bVar3 = true;
				}
			}
		}
		iVar0++;
	}
	return bVar2;
}

bool func_1199()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_13424 - 1))
	{
		if (Global_3145858->f_13425[iVar0]->f_66 == 0 || func_410(Global_3145858->f_13425[iVar0]->f_55))
		{
		}
		else if (is_bit_set(Local_5688.f_1284, iVar0))
		{
		}
		else if (network_does_network_id_exist(&(Local_5688.f_52.f_33[iVar0])))
		{
			if (func_1691(&(Local_5688.f_52.f_54[iVar0]), iVar0))
			{
			}
			else
			{
				if (func_1256(iVar0))
				{
					if (network_has_control_of_network_id(&(Local_5688.f_52.f_33[iVar0])))
					{
						if (!bVar2 && func_1692(net_to_veh(&(Local_5688.f_52.f_33[iVar0])), iVar0, 1, 0))
						{
							bVar2 = true;
						}
					}
					else
					{
						network_request_control_of_network_id(&(Local_5688.f_52.f_33[iVar0]));
					}
				}
				iVar1 = 0;
				Jump @402; //curOff = 218
				if (!func_863(iVar0))
				{
					iVar1 = 0;
				}
				else if (bVar2)
				{
					iVar1 = 0;
				}
				else if (!func_1693(Local_5688.f_52.f_33[iVar0], Global_3145858->f_13425[iVar0]->f_66, Global_3145858->f_13425[iVar0]->f_55, Global_3145858->f_13425[iVar0]->f_58, 1, is_bit_set(Global_3145858->f_13425[iVar0]->f_11, 0), 0, func_978(Global_3145858->f_13425[iVar0]->f_66)))
				{
					iVar1 = 0;
				}
				else
				{
					func_1694(net_to_veh(&(Local_5688.f_52.f_33[iVar0])), iVar0, 1);
					func_1695(net_to_veh(&(Local_5688.f_52.f_33[iVar0])), iVar0);
					bVar2 = true;
				}
			}
			iVar0++;
			return iVar1;
		}
	}
}

bool func_1200()
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_452)
	{
		if (Global_3145858->f_453[iVar0]->f_43 == 0 || func_410(Global_3145858->f_453[iVar0]->f_16))
		{
		}
		else if (network_does_network_id_exist(&(Local_5688.f_52.f_75[iVar0])))
		{
			if (!is_bit_set(Local_5688.f_406, iVar0))
			{
			}
			else
			{
				iVar1 = net_to_ped(&(Local_5688.f_52.f_75[iVar0]));
				if (!_0xa0bc8faed8cfeb3c(iVar1))
				{
					iVar2 = 0;
				}
				else
				{
					func_1696(iVar1, &(Global_3145858->f_453[iVar0]->f_165), Global_3145858->f_453[iVar0]->f_45, 0);
					clear_bit(&(Local_5688.f_406), iVar0);
					Jump @320; //curOff = 184
					if (!func_864(Global_3145858->f_453[iVar0]->f_43))
					{
						iVar2 = 0;
					}
					else if (bVar3)
					{
						iVar2 = 0;
					}
					else if (!func_1697(Local_5688.f_52.f_75[iVar0], Global_3145858->f_453[iVar0]->f_43, Global_3145858->f_453[iVar0]->f_16, Global_3145858->f_453[iVar0]->f_19, 1, 0, 1, 1, 1))
					{
						iVar2 = 0;
					}
					else
					{
						func_1698(net_to_ped(&(Local_5688.f_52.f_75[iVar0])), iVar0);
						bVar3 = true;
					}
				}
			}
			iVar0++;
			return iVar2;
		}
	}
}

bool func_1201()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_458 - 1))
	{
		if (Global_2359296->f_459[iVar0]->f_1 == 0 || !func_865(iVar0))
		{
		}
		else if (network_does_network_id_exist(&(Local_5688.f_52.f_111[iVar0])))
		{
		}
		else if (!func_864(Global_2359296->f_459[iVar0]->f_1))
		{
			iVar1 = 0;
		}
		else if (bVar2)
		{
			iVar1 = 0;
		}
		else if (!func_1699(iVar0, 0))
		{
			iVar1 = 0;
		}
		else
		{
			bVar2 = true;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1202(var uParam0, int iParam1, int iParam2)
{
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Global_3145858->f_18726)
	{
		Stack.Push(((!func_466(iVar0) || Global_3145858->f_18727[iVar0]->f_8 == 0) || network_does_network_id_exist(uParam0[iVar0])));
		Stack.Push(iVar0);
		Call_Loc(iParam1);
		if (StackVal || !StackVal)
		{
		}
		else
		{
			iVar1 = Global_3145858->f_18727[iVar0]->f_8;
			if (!is_model_valid(iVar1))
			{
				iVar1 = 207132841;
			}
			if (!func_864(iVar1))
			{
				iVar2 = 0;
			}
			else if (bVar3)
			{
				iVar2 = 0;
			}
			else if (!func_985((*uParam0)[iVar0], iVar1, Global_3145858->f_18727[iVar0]->f_1, 1, 0))
			{
				iVar2 = 0;
			}
			else
			{
				iVar5 = net_to_obj(uParam0[iVar0]);
				bVar4 = func_1700(Global_3145858->f_18727[iVar0]);
				func_1378(iVar5, iVar0, iParam2, 1, bVar4);
				bVar3 = true;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_1203(int iParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_1033(&uVar2, &uVar5, iParam0, iVar0, 0);
		if (iVar1 == -1)
		{
		}
		else
		{
			(*uParam2)[*uParam1] = iVar1;
			*uParam1++;
			iVar0++;
		}
	}
}

int func_1204(int iParam0)
{
	iVar0 = iParam0;
	if ((!func_30(7) && func_51()) && func_260())
	{
		iVar1 = (*Global_263042)[iLocal_72]->f_1.f_55;
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				iVar0++;
				if (iVar0 >= Global_2359296->f_26)
				{
					iVar0 = 0;
				}
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_1205(int iParam0)
{
	iVar0 = func_1204(iParam0);
	if ((!func_30(7) && func_680()) && func_260())
	{
		iVar1 = Local_5688.f_3293;
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				iVar0++;
				if (iVar0 >= Global_2359296->f_26)
				{
					iVar0 = 0;
				}
				iVar2++;
			}
		}
	}
	return iVar0;
}

void func_1206()
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_4834 - 1))
	{
		if (!func_1501(iVar0))
		{
		}
		else if (is_bit_set(Local_5688.f_2410, iVar0))
		{
		}
		else if (is_bit_set(Global_2359296->f_4836[iVar0]->f_4, 0))
		{
		}
		else
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		Local_5688.f_2412 = 0;
		return;
	}
	iVar35 = get_random_int_in_range(1000, iVar1 + 1 * 1000);
	iVar36 = (floor((to_float(iVar35) / 1000f)) - 1);
	Local_5688.f_2412 = &iVar2[iVar36];
}

void func_1207(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_4834 - 1))
	{
		if (iVar0 == Local_5688.f_2412)
		{
		}
		else if (is_bit_set(Local_5688.f_2410, iVar0))
		{
		}
		else if (!func_1501(iVar0))
		{
			set_bit(&(Local_5688.f_2410), iVar0);
		}
		else
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 <= 0)
	{
		return;
	}
	if (iParam0 > iVar1)
	{
		iParam0 = iVar1;
	}
	iVar35 = 0;
	while (iVar35 <= (iParam0 - 1))
	{
		func_1701(&iVar2, &iVar1);
		iVar35++;
	}
}

void func_1208(int iParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_4834 - 1))
	{
		if (is_bit_set(Local_5688.f_2410, iVar0))
		{
		}
		else if (!func_1501(iVar0))
		{
			set_bit(&(Local_5688.f_2410), iVar0);
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= (iParam0 - 1))
	{
		if (iVar1 == 1)
		{
		}
		else
		{
			iVar3 = func_1702();
			if (iVar3 > -1)
			{
				set_bit(&(Local_5688.f_2409), iVar3);
				iVar1 = (iVar1 - 1);
			}
			iVar2++;
		}
	}
}

void func_1209()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_5688.f_1163[iVar0] = -1;
		iVar0++;
	}
}

bool func_1210()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3 || func_38(iVar0))
		{
		}
		else if (func_737(iVar0) <= 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1211()
{
	iVar0 = 0;
	while (iVar0 <= (Local_5688.f_857 - 1))
	{
		Local_5688.f_912[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_5688.f_1086[iVar0] = 0;
		iVar0++;
	}
	func_1703();
	func_1225(0);
	func_1704();
	clear_bit(&(Local_5688.f_41), 9);
	clear_bit(&(Local_5688.f_41), 7);
	clear_bit(&(Local_5688.f_41), 24);
	func_358(&(Local_5688.f_2400));
	Local_5688.f_2402 = 0;
	Local_5688.f_2412 = -1;
	Local_5688.f_2410 = 0;
	Local_5688.f_2409 = 0;
	Local_5688.f_2411 = 0;
	Local_5688.f_2413 = 0;
	Local_5688.f_2403 = { 0f, 0f, 0f };
	Local_5688.f_2406 = { 0f, 0f, 0f };
}

bool func_1212()
{
	if (Global_2359296->f_56 > 0)
	{
		if (Local_5688.f_3293 >= Global_2359296->f_56)
		{
			return true;
		}
	}
	if (Global_2359296->f_57 > 0)
	{
		if (func_1705())
		{
			return true;
		}
	}
	return false;
}

bool func_1213()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3 || func_38(iVar0))
		{
		}
		else if (func_737(iVar0) != 12)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1214(var uParam0)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= (Global_3145858->f_6822 - 1))
	{
		if (!does_pickup_exist(uParam0[iVar1]))
		{
		}
		else if (!network_has_control_of_pickup_placement(uParam0[iVar1]))
		{
			network_request_control_of_pickup_placement(uParam0[iVar1]);
			iVar0 = 0;
		}
		else
		{
			force_pickup_regenerate(uParam0[iVar1]);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1215()
{
	switch (Local_5688.f_1119)
	{
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1216()
{
	iVar0 = Global_2359296->f_57;
	if (!func_260())
	{
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (!Local_92[iVar1]->f_3 || func_38(iVar1))
			{
			}
			else
			{
				iVar2 = &Local_92[iVar1];
				if (&Local_5688.f_3294[iVar2] < iVar0)
				{
				}
				else
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= (Local_5688.f_857 - 1))
		{
			if (&Local_5688.f_1564[iVar3] <= 0)
			{
			}
			else if (&Local_5688.f_3294[iVar3] < iVar0)
			{
			}
			else
			{
				return true;
			}
			iVar3++;
		}
	}
	return false;
}

bool func_1217()
{
	iVar0 = (Global_2359296->f_56 - Local_5688.f_3293);
	iVar2 = -1;
	if (!func_260())
	{
		iVar3 = 0;
		while (iVar3 <= 31)
		{
			if (!Local_92[iVar3]->f_3 || func_38(iVar3))
			{
			}
			else
			{
				iVar4 = &Local_92[iVar3];
				if (&Local_5688.f_3294[iVar4] > iVar2)
				{
					if (iVar2 != -1)
					{
						iVar1 = (&Local_5688.f_3294[iVar4] - iVar2);
					}
					else
					{
						iVar1 = &Local_5688.f_3294[iVar4];
					}
					iVar2 = &Local_5688.f_3294[iVar4];
				}
				else if ((&Local_5688.f_3294[iVar4] - iVar2) < iVar1)
				{
					iVar1 = (&Local_5688.f_3294[iVar4] - iVar2);
				}
			}
			iVar3++;
		}
	}
	else
	{
		iVar5 = 0;
		while (iVar5 <= (Local_5688.f_857 - 1))
		{
			if (&Local_5688.f_1564[iVar5] <= 0)
			{
			}
			else if (&Local_5688.f_3294[iVar5] > iVar2)
			{
				if (iVar2 != -1)
				{
					iVar1 = (&Local_5688.f_3294[iVar5] - iVar2);
				}
				else
				{
					iVar1 = &Local_5688.f_3294[iVar5];
				}
				iVar2 = &Local_5688.f_3294[iVar5];
			}
			else if ((&Local_5688.f_3294[iVar5] - iVar2) < iVar1)
			{
				iVar1 = (&Local_5688.f_3294[iVar5] - iVar2);
			}
			iVar5++;
		}
	}
	if (iVar1 > iVar0)
	{
		return true;
	}
	return false;
}

int func_1218()
{
	iVar1 = 99999999;
	iVar2 = 255;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3)
		{
		}
		else if (Local_1685[iVar0]->f_6 <= 0)
		{
		}
		else
		{
			iVar3 = get_time_difference(Local_1685[iVar0]->f_37, get_network_time_accurate());
			if (iVar3 < iVar1)
			{
				iVar2 = Local_92[iVar0]->f_4;
				iVar1 = iVar3;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1219(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam1 == -1)
	{
		return true;
	}
	*iParam2 = 1866839375;
	if (bParam3)
	{
		iVar0 = &Local_92[iParam0];
		iVar1 = &Local_92[iParam1];
		if (&Local_5688.f_3294[iVar0] > &Local_5688.f_3294[iVar1])
		{
			if (bParam4)
			{
			}
			return true;
		}
		else if (&Local_5688.f_3294[iVar0] < &Local_5688.f_3294[iVar1])
		{
			if (bParam4)
			{
			}
			return false;
		}
	}
	if (func_981() == 2)
	{
		if (!func_234())
		{
			bVar2 = (Local_92[iParam0]->f_7 && !is_bit_set(Local_1685[iParam0]->f_2, 19));
			bVar3 = (Local_92[iParam1]->f_7 && !is_bit_set(Local_1685[iParam1]->f_2, 19));
			if (bVar2 && !bVar3)
			{
				if (bParam4)
				{
				}
				return true;
			}
			else if (!bVar2 && bVar3)
			{
				if (bParam4)
				{
				}
				return false;
			}
			if (bVar2)
			{
				bVar4 = is_bit_set(Local_1685[iParam0]->f_2, 3);
				bVar5 = is_bit_set(Local_1685[iParam1]->f_2, 3);
				if (bVar4 && !bVar5)
				{
					if (bParam4)
					{
					}
					return true;
				}
				else if (!bVar4 && bVar5)
				{
					if (bParam4)
					{
					}
					return false;
				}
			}
		}
	}
	else if (!func_234())
	{
		bVar6 = is_bit_set(Local_1685[iParam0]->f_2, 19);
		bVar7 = is_bit_set(Local_1685[iParam1]->f_2, 19);
		if (!bVar6 && bVar7)
		{
			if (bParam4)
			{
			}
			return true;
		}
		else if (bVar6 && !bVar7)
		{
			if (bParam4)
			{
			}
			return false;
		}
	}
	iVar8 = func_1355(iParam0, bParam3);
	iVar9 = func_1355(iParam1, bParam3);
	if (iVar8 > iVar9)
	{
		if (bParam4)
		{
		}
		return true;
	}
	else if (iVar8 < iVar9)
	{
		if (bParam4)
		{
		}
		return false;
	}
	*iParam2 = -1901798505;
	if (Local_1685[iParam0]->f_7 < Local_1685[iParam1]->f_7)
	{
		if (bParam4)
		{
		}
		return true;
	}
	else if (Local_1685[iParam0]->f_7 > Local_1685[iParam1]->f_7)
	{
		if (bParam4)
		{
		}
		return false;
	}
	*iParam2 = -1891006284;
	if (Local_1685[iParam0]->f_36)
	{
		if (bParam4)
		{
		}
		return true;
	}
	else if (Local_1685[iParam1]->f_36)
	{
		if (bParam4)
		{
		}
		return false;
	}
	*iParam2 = 375301172;
	if (func_1706(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_1220(int iParam0, int iParam1)
{
	func_1707(iParam0);
	func_1708(iParam0);
	func_860(iParam1);
}

void func_1221()
{
	if (func_14())
	{
		if (Global_2892896->f_23 > 0)
		{
			Local_5688.f_868 = Global_2892896->f_23;
			Local_5688.f_872 = Global_2892896->f_23;
			Local_5688.f_870 = Global_2892896->f_23;
			Local_5688.f_874 = Global_2892896->f_23;
			Local_5688.f_873 = Global_2892896->f_23;
			if (Global_2892896->f_24 > 0)
			{
				Local_5688.f_869 = Global_2892896->f_24;
				Local_5688.f_871 = Global_2892896->f_24;
			}
			return;
		}
	}
	if (!func_1709())
	{
		if (func_1710())
		{
			func_1711();
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_38(iVar0))
		{
		}
		else if (!Local_92[iVar0]->f_3)
		{
		}
		else
		{
			iVar1++;
			if (func_1571(iVar0, 0))
			{
				iVar3++;
				if (Global_2359296->f_14974 == 1)
				{
					if (!is_bit_set(Local_1685[iVar0]->f_2, 17))
					{
						iVar2++;
					}
				}
				else if (Global_2359296->f_14974 == 2)
				{
					iVar2++;
				}
				else if (Local_92[iVar0]->f_7)
				{
					iVar2++;
				}
				else if (is_bit_set(Local_1685[iVar0]->f_2, 21) && func_168())
				{
					iVar2++;
				}
			}
			if (!func_260())
			{
			}
			else
			{
				iVar4 = Local_92[iVar0]->f_1;
				if (iVar4 < 0 || iVar4 >= 8)
				{
				}
				else
				{
					iVar42[iVar4] = 1;
					uVar5[iVar4] = &uVar5[iVar4] + 1;
					if (!Local_92[iVar0]->f_7 || _0xb655db7582aec805(Local_92[iVar0]->f_6))
					{
						uVar23[iVar4] = &uVar23[iVar4] + 1;
					}
					if (func_1571(iVar0, 0))
					{
						uVar14[iVar4] = &uVar14[iVar4] + 1;
						if (Local_5688.f_24 == -1918441640)
						{
							if (Local_92[iVar0]->f_7)
							{
								iVar51[iVar4] = 1;
								uVar32[iVar4] = &uVar32[iVar4] + 1;
							}
						}
						else if (Local_92[iVar0]->f_7)
						{
							iVar51[iVar4] = 1;
							uVar32[iVar4] = &uVar32[iVar4] + 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_5688.f_868 != iVar1)
	{
		Local_5688.f_868 = iVar1;
	}
	if (Local_5688.f_868 > Local_5688.f_872)
	{
		Local_5688.f_872 = iVar1;
	}
	if (Local_5688.f_870 != iVar2)
	{
		Local_5688.f_870 = iVar2;
	}
	if (Local_5688.f_870 > Local_5688.f_874)
	{
		Local_5688.f_874 = iVar2;
	}
	if (iVar3 > Local_5688.f_873)
	{
		Local_5688.f_873 = iVar3;
	}
	Local_5688.f_2.f_3 = Local_5688.f_873;
	if (func_260())
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar4 = 0;
		while (iVar4 <= 7)
		{
			if (&iVar42[iVar4])
			{
				iVar1++;
				uVar41 = iVar4 + 1;
			}
			if (&iVar51[iVar4])
			{
				iVar2++;
			}
			iVar4++;
		}
		Local_5688.f_869 = iVar1;
		Local_5688.f_871 = iVar2;
		Local_5688.f_875 = uVar41;
		iVar4 = 0;
		while (iVar4 <= 7)
		{
			if (&Local_5688.f_1564[iVar4] > &Local_5688.f_1573[iVar4])
			{
				Local_5688.f_1573[iVar4] = &Local_5688.f_1564[iVar4];
			}
			if (&Local_5688.f_1582[iVar4] != &uVar5[iVar4])
			{
				Local_5688.f_1582[iVar4] = &uVar5[iVar4];
			}
			if (&Local_5688.f_1564[iVar4] != &uVar14[iVar4])
			{
				Local_5688.f_1564[iVar4] = &uVar14[iVar4];
			}
			if (&Local_5688.f_1591[iVar4] != &uVar23[iVar4])
			{
				Local_5688.f_1591[iVar4] = &uVar23[iVar4];
			}
			if (&Local_5688.f_1600[iVar4] != &uVar32[iVar4])
			{
				Local_5688.f_1600[iVar4] = &uVar32[iVar4];
				if (&Local_5688.f_1600[iVar4] == 0)
				{
					Local_5688.f_1609[iVar4] = func_742();
				}
			}
			iVar4++;
		}
	}
	if (!func_1224())
	{
		func_1712();
	}
}

void func_1222()
{
	iVar2 = -1;
	iVar3 = -1;
	if (func_260())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!is_bit_set(Local_1685[iVar0]->f_2, 18) || is_bit_set(Local_1685[iVar0]->f_2, 8))
			{
			}
			else
			{
				func_1368(iVar0, -1);
				if (!is_bit_set(Local_5688.f_24.f_3, 9) || !Local_92[iVar0]->f_3)
				{
				}
				else if (func_1219(iVar0, iVar3, &iVar4, 0, 0))
				{
					iVar3 = iVar0;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (&Local_5688.f_1582[iVar0] <= 0)
			{
			}
			else if (iVar2 == -1)
			{
				iVar2 = iVar0;
			}
			else if (func_1354(iVar0, 0) > func_1354(iVar2, 0))
			{
				iVar2 = iVar0;
			}
			else if (func_1354(iVar0, 0) == func_1354(iVar2, 0))
			{
				if (&Local_5688.f_885[iVar0] < &Local_5688.f_885[iVar2])
				{
					iVar2 = iVar0;
				}
				else if (&Local_5688.f_885[iVar0] == &Local_5688.f_885[iVar2])
				{
					iVar1 = 0;
					while (iVar1 <= 31)
					{
						if (Local_1685[iVar1]->f_36 && Local_1685[iVar1]->f_3 == iVar0)
						{
							iVar2 = iVar0;
						}
						iVar1++;
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!is_bit_set(Local_1685[iVar0]->f_2, 18) || is_bit_set(Local_1685[iVar0]->f_2, 8))
			{
			}
			else
			{
				func_1368(iVar0, -1);
				if (!Local_92[iVar0]->f_3)
				{
				}
				else if (func_1219(iVar0, iVar2, &iVar4, 0, 0))
				{
					iVar2 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar2 != -1 && Local_5688.f_2389 != func_1355(iVar2, 0))
		{
			Local_5688.f_2389 = func_1355(iVar2, 0);
		}
		func_860(iVar4);
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (func_168())
	{
		if (func_593())
		{
			func_1713();
			func_1225(6);
			return;
		}
		if (!func_593())
		{
			if (func_981() == 1 || func_981() == 0)
			{
				if (func_260())
				{
					if (Local_5688.f_871 < 2)
					{
						iVar0 = 0;
						while (iVar0 < 32)
						{
							if (func_1571(iVar0, 0) && Local_92[iVar0]->f_7)
							{
								func_595(iVar0, 1866839375);
								func_1713();
								func_1225(6);
								iVar2 = Local_92[iVar0]->f_1;
							}
							iVar0++;
						}
					}
				}
				else if (Local_5688.f_870 < 2)
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (func_1571(iVar0, 0) && Local_92[iVar0]->f_7)
						{
							func_1220(iVar0, 1866839375);
							func_596(iVar0);
							func_597(iVar0);
						}
						iVar0++;
					}
				}
			}
		}
	}
	if (!func_1224())
	{
		return;
	}
	if (is_bit_set(Local_5688.f_24.f_3, 9) && func_260())
	{
		if (iVar3 != -1)
		{
			func_1220(iVar3, 1866839375);
		}
	}
	switch (func_981())
	{
		case 0:
		case 1:
			if (func_260())
			{
				Local_5688.f_1132 = iVar2;
				if (Global_3145858->f_284 > 0)
				{
					if (func_1354(iVar2, 0) >= Global_3145858->f_284)
					{
						func_1225(5);
					}
				}
			}
			else
			{
				func_1220(iVar2, 1866839375);
				if (Global_3145858->f_284 > 0)
				{
					if (func_1355(iVar2, 0) >= Global_3145858->f_284)
					{
						func_1225(5);
					}
				}
			}
			break;
		case 2:
			if (func_260())
			{
				if (Local_5688.f_871 < 2)
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						if (func_1571(iVar0, 0) && Local_92[iVar0]->f_7)
						{
							func_1714(iVar0);
						}
						iVar0++;
					}
					if (!func_14())
					{
						func_1225(7);
					}
				}
			}
			else if (Local_5688.f_870 >= 2)
			{
				func_1220(iVar2, 1866839375);
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 32)
				{
					if (func_1571(iVar0, 0))
					{
						if (func_30(24))
						{
							if (Local_92[iVar0]->f_3 && !is_bit_set(Local_1685[iVar0]->f_2, 17))
							{
								func_1220(iVar0, 1866839375);
							}
						}
						else if (Local_92[iVar0]->f_7)
						{
							if (func_168())
							{
								func_596(iVar0);
								func_597(iVar0);
							}
							func_1220(iVar0, 1866839375);
						}
					}
					iVar0++;
				}
				if (!func_14())
				{
					if (func_168())
					{
						func_1225(6);
					}
					else
					{
						func_1225(8);
					}
				}
			}
			break;
	}
}

void func_1223()
{
	iVar0 = func_738();
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_1715(iVar0))
	{
		return;
	}
	func_1716();
}

bool func_1224()
{
	return is_bit_set(Local_5688.f_41, 7);
}

void func_1225(int iParam0)
{
	Local_5688.f_1119 = iParam0;
}

void func_1226(int iParam0)
{
	if (!is_bit_set(Local_1685[iParam0]->f_2, 5) && !func_683(iParam0))
	{
		return;
	}
	iVar0 = int_to_participantindex(iParam0);
	if (!network_is_participant_active(iVar0))
	{
		return;
	}
	iVar1 = network_get_player_index(iVar0);
	iVar2 = get_unique_int_for_player(iVar1);
	if (iVar2 == -1)
	{
		return;
	}
	if (!func_1717(iParam0, iVar2))
	{
		return;
	}
	if (is_bit_set(Local_1685[iParam0]->f_2, 6))
	{
		if (&Local_5688.f_1196[iVar2] == -1)
		{
			clear_bit(&(Local_5688.f_1229), iVar2);
			Local_5688.f_1196[iVar2] = func_1010(-1);
		}
	}
	else if (is_bit_set(Local_1685[iParam0]->f_2, 5))
	{
		if (is_bit_set(Local_1685[iParam0]->f_2, 9))
		{
			set_bit(&(Local_5688.f_1229), iVar2);
		}
	}
	else if (is_bit_set(Local_5688.f_1229, iVar2))
	{
		Local_5688.f_1196[iVar2] = -1;
		clear_bit(&(Local_5688.f_1229), iVar2);
		func_1157(1);
	}
}

bool func_1227()
{
	if (func_680() && !is_bit_set(Local_5688.f_41, 29))
	{
		return false;
	}
	if ((func_168() || func_1718()) || func_1719())
	{
		return true;
	}
	return false;
}

bool func_1228()
{
	if (!is_bit_set(Local_5688.f_41, 20))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (((*Global_263042)[iVar0]->f_1.f_55 > 0 && Local_3702[iVar0]) // PointerArith)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1229(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, int iParam13, struct<8> Param14, int iParam22, bool bParam23)
{
	if (iParam22 < 0 || iParam22 >= 32)
	{
		return;
	}
	func_1720(&((*uParam0)[iParam22]->f_14), iParam1, Param14);
	(*uParam0)[iParam22] = uParam2;
	func_1721(&((*uParam0)[iParam22]->f_1), to_float(iParam3));
	func_1721(&((*uParam0)[iParam22]->f_2), to_float(iParam4));
	func_1721(&((*uParam0)[iParam22]->f_3), to_float(iParam5));
	func_1721(&((*uParam0)[iParam22]->f_4), to_float(iParam6));
	func_1721(&((*uParam0)[iParam22]->f_5), to_float(iParam7));
	func_1721(&((*uParam0)[iParam22]->f_6), to_float(iParam8));
	func_1721(&((*uParam0)[iParam22]->f_7), to_float(iParam9));
	func_1721(&((*uParam0)[iParam22]->f_8), to_float(iParam10));
	func_1721(&((*uParam0)[iParam22]->f_9), to_float(iParam11));
	func_1722(uParam0, iParam22, bParam12, bParam23);
	(*uParam0)[iParam22]->f_11 = iParam13;
	if (iParam13 != 0)
	{
	}
}

void func_1230(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, struct<8> Param13, int iParam21, bool bParam22)
{
	if (iParam21 < 0 || iParam21 >= 32)
	{
		return;
	}
	func_1720(&((*uParam0)[iParam21]->f_14), iParam1, Param13);
	(*uParam0)[iParam21] = uParam2;
	func_1721(&((*uParam0)[iParam21]->f_1), to_float(iParam3));
	func_1721(&((*uParam0)[iParam21]->f_2), to_float(iParam4));
	func_1721(&((*uParam0)[iParam21]->f_3), to_float(iParam5));
	func_1721(&((*uParam0)[iParam21]->f_4), to_float(iParam6));
	func_1721(&((*uParam0)[iParam21]->f_5), to_float(iParam7));
	func_1721(&((*uParam0)[iParam21]->f_6), to_float(iParam8));
	func_1721(&((*uParam0)[iParam21]->f_7), to_float(iParam9));
	func_1721(&((*uParam0)[iParam21]->f_8), to_float(iParam10));
	func_1722(uParam0, iParam21, bParam11, bParam22);
	(*uParam0)[iParam21]->f_11 = iParam12;
	if (iParam12 != 0)
	{
	}
}

void func_1231(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*(*uParam1)[iVar0] = { *(*uParam0)[iVar0] };
		(*uParam1)[iVar0]->f_14 = (*uParam0)[iVar0]->f_14;
		(*uParam1)[iVar0]->f_14.f_1 = { (*uParam0)[iVar0]->f_14.f_1 };
		iVar0++;
	}
	if (bParam3)
	{
		func_1723(uParam1, uParam2);
	}
	else
	{
		func_1578(uParam1, uParam2);
	}
}

int func_1232()
{
	return -171876066;
}

Vector3 func_1233(int iParam0, bool bParam1)
{
	iVar0 = Local_5688.f_568[iParam0]->f_1;
	vVar1 = { get_entity_coords(iLocal_81, true, false) };
	iVar4 = 0;
	iVar115 = 0;
	while (iVar115 < Global_3145858->f_38735)
	{
		if (get_distance_between_coords(vVar1, Global_3145858->f_38736[iVar115]->f_1, true) > 5f && (!bParam1 || is_bit_set(&(Global_3145858->f_38736[iVar115]->f_6[iVar0]), 0)))
		{
			iVar5[iVar4] = iVar115;
			iVar4++;
		}
		iVar115++;
	}
	if (iVar4 == 0)
	{
		return Global_3145858->f_38736[iParam0]->f_1;
	}
	iVar116 = get_random_int_in_range(0, iVar4);
	return Global_3145858->f_38736[&iVar5[iVar116]]->f_1;
}

int func_1234(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1724(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1235(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_ped_combat_range(iParam1, 2);
	set_ped_combat_movement(iParam1, 2);
	set_ped_combat_attributes(iParam1, 28, true);
	set_ped_combat_attributes(iParam1, 50, true);
	set_ped_drops_weapons_when_dead(iParam1, false);
	set_ped_flee_attributes(iParam1, 32768, false);
	set_ped_flee_attributes(iParam1, 16384, true);
	set_ped_flee_attributes(iParam1, 512, true);
	set_ped_flee_attributes(iParam1, 1024, true);
	set_ped_combat_attributes(iParam1, 5, true);
	set_ped_combat_attributes(iParam1, 17, false);
	set_ped_combat_attributes(iParam1, 14, false);
	set_ped_combat_attributes(iParam1, 58, true);
	set_ped_combat_attributes(iParam1, 46, true);
	set_ped_config_flag(iParam1, 225, false);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	func_1725(iParam0, iParam1, iParam2);
	iVar2 = &Global_2892896->f_25[iParam2];
	if (iVar2 != -1)
	{
		iVar1 = Global_3145858->f_49704[iVar2]->f_26;
	}
	if (iVar1 >= 0)
	{
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			vVar3 = { func_1726(iVar1, iVar0) };
			give_delayed_weapon_to_ped(iParam1, vVar3.x, vVar3.y, true, 752097756);
			if (iVar0 == 0)
			{
				set_current_ped_weapon(iParam1, vVar3.x, true, 0, false, false);
			}
			iVar0++;
		}
	}
	else
	{
		give_delayed_weapon_to_ped(iParam1, 379542007, 25000, true, 752097756);
		give_delayed_weapon_to_ped(iParam1, -183018591, 25000, true, 752097756);
		set_current_ped_weapon(iParam1, -183018591, true, 0, false, false);
	}
	bVar7 = false;
	iVar8 = 0;
	if (Global_3145858->f_49703 > 0 && iVar2 > -1)
	{
		iVar10 = &Global_3145858->f_49704[iVar2]->f_8[iParam2];
		if (iVar10 >= 0)
		{
			iVar9 = &Global_2359296->f_443[iVar10];
			if (iVar9 != 0 && iVar9 != -1217346486)
			{
				iVar8 = func_1727(iParam2);
			}
			else
			{
				bVar7 = true;
			}
		}
		else
		{
			bVar7 = true;
		}
	}
	else
	{
		bVar7 = true;
	}
	if (bVar7)
	{
		iVar9 = func_1728(get_random_int_in_range(1, 31), 1);
	}
	iVar11 = 2026485318;
	if (iParam3 == -1481695040)
	{
		iVar11 = 24043185;
	}
	if (!func_1729(iVar9, &iVar6, &iParam3, iVar11))
	{
	}
	_set_ped_body_component(iParam1, -230463833);
	func_1730(iParam1, iVar6, iVar8);
}

bool func_1236(int iParam0, int iParam1)
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

void func_1237(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_1238(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_1239()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_1240(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_1241(int iParam0)
{
	iVar0 = 0;
	while (iParam0 <= (RDR_LOCAL_LOAD_S - 1))
	{
		iVar0++;
	}
}

void func_1242()
{
	Global_1297047->f_374.f_29 = 1;
}

void func_1243(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_1731(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2011 < 20)
	{
		Global_1293346->f_2011++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2011.f_1[iVar0] = { *(Global_1293346->f_2011.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1293346->f_2011.f_1[(Global_1293346->f_2011 - 1)]) = { Var1 };
}

int func_1244(var uParam0)
{
	Var0 = Global_1071686->f_23887.f_366.f_4085;
	Var0.f_2 = 1593794963;
	Var0.f_3 = uParam0;
	return _datafile_get_num_nodes(&Var0);
}

bool func_1245(var uParam0, int iParam1, var uParam2, int iParam3)
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
		_datafile_get_float(iParam3, &Var0);
		return true;
	}
	return false;
}

bool func_1246(vector3 vParam0, var uParam3, int iParam4)
{
	uVar0 = &Global_1071686->f_23887.f_366[func_1732(vParam0)];
	iVar1 = func_1244(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = get_random_int_in_range(0, iVar1);
		if (func_1245(uVar0, iVar2, uParam3, iParam4))
		{
			return true;
		}
	}
	return false;
}

void func_1247(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, float fParam8, float fParam9, bool bParam10, int iParam11, float fParam12, int iParam13)
{
	if (func_372(255) == 4)
	{
		return;
	}
	if (func_410(vParam0))
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
		func_95(0, 0, 0, 1);
	}
	func_59(0);
	func_59(3);
	Global_1102219->f_3919 = iParam11;
	Global_1102219->f_3920 = fParam12;
	Global_1102219->f_3921 = iParam13;
	func_838(&(Global_1102219->f_3849));
	Global_1102219->f_3849 = iParam3;
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
	func_839(&(Global_1102219->f_3888));
	Global_1102219->f_3888.f_6 = { vParam4 };
	Global_1102219->f_3888 = iParam7;
	Global_1102219->f_3888.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_840(Global_1102219->f_3849, 36);
	func_841(Global_1102219->f_3888, 36);
}

char* func_1248(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1249()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (&Global_2359296->f_59[0] != iVar0)
		{
			if (&Global_3145858->f_36563[iVar0] == 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_1250(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_3145858->f_36563[iParam1]->f_64), sParam0, 32);
	Global_3145858->f_36563[iParam1] = iParam2;
}

void func_1251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_3145858->f_36563[iParam1]->f_1[iParam2] = iParam0;
	Global_3145858->f_36563[iParam1]->f_1[iParam2]->f_1 = iParam3;
	Global_3145858->f_36563[iParam1]->f_1[iParam2]->f_2 = iParam4;
}

void func_1252(var uParam0)
{
	iVar0 = func_1733();
	*uParam0 = &Global_3145858->f_241[iVar0];
	uParam0->f_1 = Global_3145858->f_241[iVar0]->f_1;
	if (*uParam0 == 2)
	{
		uParam0->f_1 = func_1253();
		*uParam0 = 3;
	}
	uParam0->f_3 = Global_3145858->f_241[iVar0]->f_2;
	uParam0->f_4 = Global_3145858->f_241[iVar0]->f_3;
	uParam0->f_5 = 0;
}

int func_1253()
{
	iVar0 = _0x1359c181bc625503();
	iVar0 = func_1602(iVar0);
	if (iVar0 == 0)
	{
		iVar1 = 0;
		iVar2 = 22;
		iVar3 = get_random_int_in_range(iVar1 * 1000, iVar2 * 1000);
		iVar4 = floor((to_float(iVar3) / 1000f));
		iVar0 = func_1734(iVar4, 1);
		if (iVar0 == 1679686673)
		{
			iVar0 = 603685163;
		}
		if (iVar0 == 0 || iVar0 == -1439599467)
		{
			iVar0 = 1632247697;
		}
	}
	return iVar0;
}

void func_1254(int iParam0, var uParam1, int iParam2)
{
	if (Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_1 <= 0)
	{
		return;
	}
	if (is_bit_set(&(Global_3145858->f_59128[iParam0]->f_2[iParam2]), 0))
	{
		fVar0 = get_random_float_in_range(0f, 1f);
		fVar2 = 0f;
		iVar1 = 0;
		while (iVar1 <= (Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_1 - 1))
		{
			if (fVar0 > (&Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_30[iVar1] + fVar2))
			{
				fVar2 = (fVar2 + &Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_30[iVar1]);
			}
			else
			{
				func_1735(iParam0, uParam1, iParam2, iVar1);
			}
			else
			{
				iVar1++;
			}
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= (Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_1 - 1))
		{
			fVar3 = get_random_float_in_range(0f, 1f);
			if (fVar3 > &Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_30[iVar4])
			{
			}
			else
			{
				func_1735(iParam0, uParam1, iParam2, iVar4);
			}
			iVar4++;
		}
	}
}

int func_1255(int iParam0, int iParam1)
{
	if (Global_3145858->f_59128[iParam0]->f_2[iParam1]->f_1 <= 0)
	{
		return 0;
	}
	if (is_bit_set(&(Global_3145858->f_59128[iParam0]->f_2[iParam1]), 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_59128[iParam0]->f_2[iParam1]->f_1 - 1))
		{
			iVar1 = func_1736(iParam0, iParam1, iVar0);
			if (iVar1 > iVar2)
			{
				iVar2 = iVar1;
			}
			iVar0++;
		}
		return iVar2;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 <= (Global_3145858->f_59128[iParam0]->f_2[iParam1]->f_1 - 1))
		{
			iVar4 = func_1736(iParam0, iParam1, iVar3);
			iVar5 = (iVar5 + iVar4);
			iVar3++;
		}
		return iVar5;
	}
	return 0;
}

bool func_1256(int iParam0)
{
	if (func_1257(iParam0) != -1)
	{
		return true;
	}
	return false;
}

int func_1257(int iParam0)
{
	iVar0 = Global_3145858->f_13425[iParam0]->f_66;
	if (is_bit_set(Global_3145858->f_13425[iParam0]->f_11, 3))
	{
		if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -470710181;
		}
	}
	else if (is_bit_set(Global_3145858->f_13425[iParam0]->f_12, 3))
	{
		if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -375149463;
		}
	}
	else if (is_bit_set(Global_3145858->f_13425[iParam0]->f_12, 4))
	{
		if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -1925724586;
		}
	}
	else if (is_bit_set(Global_3145858->f_13425[iParam0]->f_13, 7))
	{
		if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -1453861154;
		}
	}
	else if (is_bit_set(Global_3145858->f_13425[iParam0]->f_13, 11))
	{
		if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -452805127;
		}
	}
	else if (is_bit_set(Global_3145858->f_13425[iParam0]->f_10, 27))
	{
		if (iVar0 == 1596452133)
		{
			return -915028635;
		}
		else if (iVar0 == -923856480)
		{
			return 909373990;
		}
		else if (iVar0 == -1278978750)
		{
			return -1765601280;
		}
		else if (iVar0 == 219205323)
		{
			return 577778056;
		}
		else if (iVar0 == 1761016051)
		{
			return -2023241583;
		}
		else if (iVar0 == -1544786211)
		{
			return -792529918;
		}
		else if (iVar0 == 703203753)
		{
			return -871754910;
		}
		else if (iVar0 == 2109471093)
		{
			return -1143560556;
		}
		else if (iVar0 == 1745694728)
		{
			return -34248533;
		}
		else if (iVar0 == -999004291)
		{
			return -779816628;
		}
		else if (iVar0 == -1426151250)
		{
			return 1162115047;
		}
		else if (iVar0 == 1679976349)
		{
			return -236903710;
		}
		else if (iVar0 == -1758092337 || iVar0 == 1172094279)
		{
			return -157591395;
		}
	}
	return -1;
}

bool func_1258(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	_request_propset(iParam0);
	return _has_propset_loaded(iParam0);
}

void func_1259()
{
}

var func_1260()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_1261(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_1737()] = { Param0 };
			func_1738((func_1737() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_1739()] = { Param0 };
			func_1740((func_1739() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

int func_1262(struct<2> Param0)
{
	if (Global_1071686->f_19550 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_770(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1071686->f_19550 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_770(*Global_1071686->f_19550.f_1[iVar8], &vVar3);
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

int func_1263(int iParam0)
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

void func_1264(struct<2> Param0, var uParam2)
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
	switch (func_887(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1741(func_872(Param0));
			iVar5 = func_1742(iVar4);
			if (!func_1743(iVar5, 0))
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

int func_1265(struct<2> Param0)
{
	iVar0 = func_1262(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1744(iVar0);
}

int func_1266(struct<2> Param0, int iParam2)
{
	if (Global_1071686->f_19550 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_770(Param0, &vVar0))
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
		func_770(*Global_1071686->f_19550.f_1[iVar9], &vVar3);
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
			func_1745(iVar9);
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

void func_1267()
{
	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1071686->f_19550)
	{
		if (func_770(*Global_1071686->f_19550.f_1[iVar0], &vVar1))
		{
		}
		iVar0++;
	}
}

int func_1268(int iParam0, int iParam1)
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

void func_1269(char[12] cParam0)
{
	Global_1939161->f_75.f_67 = { cParam0 };
}

void func_1270()
{
	StringCopy(&(Global_1939161->f_75.f_67), "", 24);
}

bool func_1271(int iParam0)
{
	iVar0 = func_458(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1746(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_1747(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_1272(struct<2> Param0)
{
	if (!func_252(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_882(*Global_1900736->f_1[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1273(int iParam0)
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
		func_105(Global_1900736->f_1[0]);
		return 1;
	}
	func_105(Global_1900736->f_1[iParam0]);
	Global_1900736->f_66 = (Global_1900736->f_66 - 1);
	func_1748(iParam0, Global_1900736->f_66);
	return 1;
}

void func_1274(var uParam0)
{
	if (_uistatemachine_exists(1546991729))
	{
		_uistatemachine_destroy(1546991729);
	}
	if (_uiflowblock_is_loaded(*uParam0))
	{
		_uiflowblock_release(uParam0);
	}
}

void func_1275(int iParam0)
{
	if (func_527(&Global_1903131, iParam0))
	{
		func_870(Global_1903131, iParam0);
	}
}

bool func_1276(int iParam0)
{
	return func_830(&(Global_1956200->f_1753), iParam0, 1);
}

int func_1277(int iParam0)
{
	if (func_843(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1278(int iParam0)
{
	if (func_391(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1279(int iParam0)
{
	Global_1956200->f_1710.f_1 = 0f;
	Global_1956200->f_1710 = iParam0;
}

void func_1280(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!is_entity_dead(Global_1296859->f_8))
		{
			set_player_targeting_mode(iParam1);
		}
	}
	else if (iParam0 == 1)
	{
		if (!is_entity_dead(Global_1296859->f_8))
		{
			_0x19b4f71703902238(iParam1);
		}
	}
}

int func_1281(int iParam0, int iParam1)
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

int func_1282(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (func_1749(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1750(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1751(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1752(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_905(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1753(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1754(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_1283(int iParam0)
{
	iVar0 = func_1284(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1284(int iParam0, int iParam1)
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

int func_1285(int iParam0, int iParam1)
{
	iVar0 = func_1755(iParam0);
	iVar1 = &Global_1296859;
	iVar2 = func_1288(iParam1, 1);
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

int func_1286(int iParam0, int iParam1, int iParam2)
{
	if (!func_904(iParam1))
	{
		return 0;
	}
	if (!func_1756(iParam0))
	{
		return 0;
	}
	iVar0 = func_1288(iParam0, 1);
	func_1757(iParam0, iParam1, iParam2);
	if (func_1758(*Global_1146212->f_35859.f_3116[iVar0]) && func_1759(iParam0, Global_1146212->f_35859.f_3116[iVar0]->f_4))
	{
		vVar1 = { func_1760(Global_1146212->f_35859.f_3116[iVar0]->f_4) };
		if (func_1761(vVar1))
		{
			if (func_1762(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1763(Global_1146212->f_35859.f_3116[iVar0]->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1764(Global_1146212->f_35859.f_3116[iVar0]->f_4);
			}
		}
		else
		{
			func_1764(Global_1146212->f_35859.f_3116[iVar0]->f_4);
		}
	}
	return 1;
}

void func_1287(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1288(int iParam0, int iParam1)
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

void func_1289(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = (Global_1146212->f_35859.f_3116[iParam0]->f_29 + iParam1);
}

void func_1290(int iParam0, int iParam1)
{
	Global_1146212->f_35859.f_3116[iParam0]->f_29 = iParam1;
}

void func_1291(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0]->f_1 = 0;
		iVar0++;
	}
}

int func_1292(bool bParam0)
{
	if (func_844() == -1)
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

bool func_1293(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1294(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_1295(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_250(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1765(Var0);
}

void func_1296()
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
	func_161(32768);
	func_1766(1108822547, 8, 6);
}

void func_1297(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_1298(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_1299(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1767(iVar0, iParam0))
		{
			func_1768(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1300(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_1769(Global_1952637->f_2843);
		func_1770(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_1771(iParam3))
	{
		func_1772(0);
	}
	if (func_1294(32768))
	{
		func_1773(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_1774(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1774(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1295(2, 0, iVar0, 0, 0);
		func_1295(4, 0, 0, 0, 0);
		func_1295(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_1295(2, 0, iVar0, iParam0, 0);
	}
	func_1775();
}

bool func_1301(int iParam0, bool bParam1)
{
	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1139381->f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1139381->f_3876.f_706.f_1 = 0;
	Global_1139381->f_3876.f_706.f_2 = 1613014828;
	Global_1139381->f_3876.f_706.f_3 = iParam0;
	Global_1139381->f_3876.f_706.f_4 = 0;
	if (!_0x603ac35fd4602c76(Global_1139381->f_3876.f_706))
	{
		Global_1139381->f_3876.f_706 = Global_1139381->f_2;
	}
	if (!_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
	{
		return false;
	}
	Global_1139381->f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_1776(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1139381->f_3876.f_706.f_4 = iVar1;
				Global_1139381->f_3876.f_706.f_2 = -239316549;
				if (_datafile_get_data_node_index(&uVar0, &(Global_1139381->f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_1777(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1139381->f_3876.f_706.f_2 = 1242520881;
					if (_datafile_get_bool(&bVar3, &(Global_1139381->f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1139381->f_3876.f_2[func_1778(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_1302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1779((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1303()
{
	func_1780(0);
	func_1780(1);
	func_1780(2);
	func_1780(3);
}

void func_1304()
{
	func_1781(0);
	func_1781(1);
	func_1781(2);
	func_1781(3);
}

float func_1305(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1782(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_6[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_6[iParam0]);
		default:
			break;
	}
	return -1f;
}

void func_1306()
{
	if (func_1276(2))
	{
		func_899(0);
	}
	else
	{
		func_899(1);
	}
	func_1783(1);
	_0x7146cf430965927c(15, true);
	_0x7146cf430965927c(16, true);
}

void func_1307()
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_1784(iVar1, 2);
		func_1785(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_1308(var uParam0, int iParam1)
{
	iVar0 = func_1786(2);
	iVar2 = iVar0;
	iVar3 = -1;
	if (func_1787())
	{
		func_1788(iParam1);
		return;
	}
	_0x7ff72de061df55e2(iParam1, 0, to_float(iVar0));
	if (func_844() == 0)
	{
		iVar1 = round(_0x89bfdf6d53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	set_entity_max_health(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = get_entity_max_health(iParam1, true);
			func_1789(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1789(iVar3, 0);
			}
			else
			{
				iVar3 = get_entity_max_health(iParam1, true);
				func_1789(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1309(var uParam0, int iParam1)
{
	if (func_1787())
	{
		return;
	}
	iVar0 = func_1790(2);
	fVar1 = -1f;
	_0x7ff72de061df55e2(iParam1, 1, to_float(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = _get_ped_max_stamina(iParam1);
			func_1791(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1791(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1791(fVar1, 0);
			}
			else
			{
				fVar1 = _get_ped_max_stamina(iParam1);
				func_1791(fVar1, 0);
			}
			break;
	}
}

void func_1310(var uParam0, int iParam1)
{
	if (func_1787())
	{
		return;
	}
	iVar0 = player_id();
	iVar1 = func_1792(2);
	fVar2 = -1f;
	_0x7ff72de061df55e2(iParam1, 2, to_float(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1794(func_1793());
			break;
		case 0:
			fVar2 = _0x029884fb65821b07(iVar0);
			func_1794(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1794(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1794(fVar2);
			}
			else
			{
				fVar2 = _0x029884fb65821b07(iVar0);
				func_1794(fVar2);
			}
			break;
	}
	func_920(0f);
}

void func_1311(var uParam0)
{
	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1795(iVar1))
		{
			iVar2 = func_1796(iVar1);
			fVar0 = func_1797(uParam0, iVar2);
			func_1798(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1799();
}

void func_1312()
{
	if (Global_1956200->f_1431.f_108.f_1 != 0f)
	{
		func_1800(0, Global_1956200->f_1431.f_108.f_1, 0, 0);
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_3 != 0f)
	{
		func_1800(1, Global_1956200->f_1431.f_108.f_3, 0, 0);
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_2 != 0f)
	{
		func_1800(2, Global_1956200->f_1431.f_108.f_2, 0, 0);
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_4 != 0f)
	{
		func_1800(19, Global_1956200->f_1431.f_108.f_4, 0, 0);
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_6 != 0f)
	{
		func_1800(18, Global_1956200->f_1431.f_108.f_6, 0, 0);
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (Global_1956200->f_1431.f_108.f_5 != 0f)
	{
		func_1800(20, Global_1956200->f_1431.f_108.f_5, 0, 0);
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	func_1801();
}

void func_1313(int iParam0)
{
	Global_1956200->f_1431.f_3 = iParam0;
}

void func_1314(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1315(var uParam0)
{
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_1316(var uParam0)
{
	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_1317(var uParam0)
{
	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_1318(var uParam0)
{
	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_1319(var uParam0)
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
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_1320(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1321(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1322(var uParam0)
{
	*uParam0 = { vVar0 };
}

void func_1323(var uParam0)
{
	*uParam0 = uVar0;
}

bool func_1324(int iParam0)
{
	if (func_1802(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_1803(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

void func_1325(int iParam0)
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
	func_1804(iVar0);
	_0x51951de06c0d1c40(iParam0, 0);
	Global_1071686->f_21416.f_1[iVar0] = 0;
}

int func_1326(int iParam0)
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

int func_1327(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_1805())
	{
		return 636925055;
	}
	return -963477619;
}

int func_1328(int iParam0, bool bParam1)
{
	iVar0 = floor(func_1806(iParam0, bParam1));
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

bool func_1329(int iParam0, bool bParam1)
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

bool func_1330(int iParam0, bool bParam1)
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
	if (func_1807(iParam0))
	{
		return true;
	}
	return !func_1329(iParam0, 0);
}

bool func_1331(int iParam0, bool bParam1)
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
	if (func_1802(iParam0))
	{
		return false;
	}
	if (func_1807(iParam0))
	{
		return false;
	}
	if (func_1808(iParam0))
	{
		return true;
	}
	return func_1809(iParam0);
}

int func_1332(int iParam0, int iParam1)
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

void func_1333()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1071686->f_21416.f_1[iVar0] = 0;
		iVar0++;
	}
}

bool func_1334(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

void func_1335(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		func_1810(iParam0);
	}
}

void func_1336(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		func_1811(iParam0);
	}
}

void func_1337(char* sParam0)
{
	if (!_0x5ac0944c156e5f44(sParam0))
	{
		_0x7c334ff4d9215912(sParam0);
	}
}

void func_1338(char* sParam0)
{
	if (_0x5ac0944c156e5f44(sParam0))
	{
		_0x527b97c203bb8606(sParam0);
	}
}

void func_1339(int iParam0)
{
	if (!_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdfea23ec90113657(iParam0);
	}
}

void func_1340(int iParam0)
{
	if (_0xde9bad3292aa6d5e(iParam0))
	{
		_0xdd0bc0edcb2162f6(iParam0);
	}
}

var func_1341()
{
	return Global_265377->f_124517.f_71.f_36;
}

int func_1342()
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_bit_set(Global_3145858->f_57980[iVar0]->f_101, 0))
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar13 = get_random_int_in_range(0, iVar1);
	return &(iVar2[iVar13]);
}

int func_1343(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			if (&Global_3145858->f_57980[iVar0]->f_3[iVar1] == iParam0)
			{
				return iVar0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_26;
}

struct<12> func_1344(bool bParam0)
{
	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	if (!bParam0)
	{
		Var0 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_41;
		Var0.f_1 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_42;
		Var0.f_4 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_43;
		Var0.f_5 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_44;
		Var0.f_8 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_45;
		Var0.f_9 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_46;
		Var0.f_2 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_47;
		Var0.f_3 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_48;
		Var0.f_6 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_49;
		Var0.f_7 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_50;
		Var0.f_10 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_51;
		Var0.f_11 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_52;
	}
	else
	{
		if (Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_53 == 2)
		{
			iVar12 = get_entity_health(iLocal_81);
			Var0 = 3;
			Var0.f_1 = iVar12;
		}
		else
		{
			Var0 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_53;
			Var0.f_1 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_54;
		}
		Var0.f_4 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_55;
		Var0.f_5 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_56;
		Var0.f_8 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_57;
		Var0.f_9 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_58;
		Var0.f_2 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_59;
		Var0.f_3 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_60;
		Var0.f_6 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_61;
		Var0.f_7 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_62;
		Var0.f_10 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_63;
		Var0.f_11 = Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_64;
	}
	return Var0;
}

int func_1345(var uParam0)
{
	if (*uParam0 < 0 || *uParam0 >= 12)
	{
		return 0;
	}
	if (func_950())
	{
		uVar0 = &Global_524288->f_135748[*uParam0];
	}
	else if (func_469())
	{
		uVar0 = &Global_2359296->f_443[*uParam0];
	}
	else if (func_424())
	{
		uVar0 = &Global_2097152->f_6414[*uParam0];
	}
	return uVar0;
}

void func_1346(var uParam0, var uParam1, var uParam2)
{
	bVar0 = (uParam0->f_2 > -1 && uParam0->f_2 < 8);
	if (uParam0->f_3 < 0 || uParam0->f_3 >= 18)
	{
		uParam0->f_3 = 0;
	}
	Var1 = { *Global_3145858->f_49704[uParam0->f_3] };
	if (func_1812())
	{
		func_182(1, 1);
	}
	func_385(117);
	func_183(1);
	Var117.f_13 = -1;
	Var117.f_13.f_1 = -1;
	Var117.f_16.f_3 = 1;
	Var117.f_21 = 1;
	Var117.f_22 = 1;
	Var117.f_22.f_1 = -1082130432;
	Var117.f_22.f_2 = 1;
	Var117.f_25 = -1;
	Var117.f_25.f_1 = -1;
	Var117.f_25.f_2 = -1;
	Var117.f_25.f_3 = -1;
	Var117.f_25.f_4 = -1;
	Var117.f_25.f_5 = -1;
	Var117.f_25.f_6 = -1;
	Var117.f_25.f_7 = -1;
	Var117.f_25.f_8 = -1;
	Var117.f_34 = 4;
	Var117.f_34.f_1.f_1 = -1;
	Var117.f_34.f_1.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	func_927(&Var117);
	if (func_1813(&Var1))
	{
		func_1814(&(Var1.f_32), &(Var1.f_34), &(Var1.f_36));
		func_1815(&Var117, Var1.f_31, Var1.f_32, Var1.f_33, Var1.f_34, Var1.f_35, Var1.f_36);
	}
	if (func_1816(&Var1))
	{
		if (Var1.f_37 == -1)
		{
			iVar175 = -1;
		}
		else if (Var1.f_37 == 0)
		{
			iVar175 = -2;
		}
		else
		{
			iVar175 = Var1.f_37;
		}
		if (Var1.f_38 == -1)
		{
			iVar176 = -1;
		}
		else if (Var1.f_38 == 0)
		{
			iVar176 = -2;
		}
		else
		{
			iVar176 = Var1.f_38;
		}
		if (Var1.f_39 == -1)
		{
			iVar177 = -1;
		}
		else if (Var1.f_39 == 0)
		{
			iVar177 = -2;
		}
		else
		{
			iVar177 = Var1.f_39;
		}
		func_1817(&Var117, iVar175, iVar176, iVar177);
	}
	if (func_1818(&Var1))
	{
		func_1819(&Var117, 1);
	}
	func_1820(&Var117, uParam0->f_42, Var1.f_65);
	if (is_bit_set(Var1.f_5, 22))
	{
		func_1821(&Var117, 0);
	}
	if (bVar0)
	{
		if (uParam0->f_13 != -1000 || Var1.f_109 != 0)
		{
			fVar178 = func_1822(uParam0->f_13 == -2000, -1f, (to_float(uParam0->f_13) / 1000f));
			if (Var1.f_109 != 0)
			{
				fVar178 = to_float(Var1.f_109);
			}
			func_1823(&Var117, fVar178);
		}
	}
	bVar179 = is_bit_set(uParam0->f_12, 7);
	if (func_1824(&Var1, bVar179))
	{
		func_1825(&Var117, &(Var1.f_73[0]), &(Var1.f_78[0]), &(Var1.f_73[1]), &(Var1.f_78[1]), &(Var1.f_73[2]), &(Var1.f_78[2]), &(Var1.f_73[3]), &(Var1.f_78[3]), !bVar179);
	}
	func_1826(&Var117, &(uParam0->f_54), uParam2, &(uParam0->f_1));
	if (bVar0 && !is_string_null_or_empty(&(uParam0->f_14)))
	{
		func_1827(&Var117, 1476714553, 0, 0);
	}
	else
	{
		func_1827(&Var117, 493038497, 0, 0);
	}
	func_1828(&Var117, Global_3145858->f_60002 == 3);
	func_1829(&Var117, *uParam1, uParam0->f_11, 1);
	if (uParam0->f_9 != -1)
	{
		func_1830(uParam0->f_9);
	}
	func_1831();
	func_1832();
	func_1833(uParam0->f_1, *uParam0);
}

void func_1347(var uParam0, var uParam1)
{
	bVar0 = (uParam0->f_2 > -1 && uParam0->f_2 < 8);
	if (uParam0->f_3 < 0 || uParam0->f_3 >= 18)
	{
		uParam0->f_3 = 0;
	}
	Var1 = { *Global_3145858->f_49704[uParam0->f_3] };
	Var117.f_13 = -1;
	Var117.f_13.f_1 = -1;
	Var117.f_16.f_3 = 1;
	Var117.f_21 = 1;
	Var117.f_22 = 1;
	Var117.f_22.f_1 = -1082130432;
	Var117.f_22.f_2 = 1;
	Var117.f_25 = -1;
	Var117.f_25.f_1 = -1;
	Var117.f_25.f_2 = -1;
	Var117.f_25.f_3 = -1;
	Var117.f_25.f_4 = -1;
	Var117.f_25.f_5 = -1;
	Var117.f_25.f_6 = -1;
	Var117.f_25.f_7 = -1;
	Var117.f_25.f_8 = -1;
	Var117.f_34 = 4;
	Var117.f_34.f_1.f_1 = -1;
	Var117.f_34.f_1.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_1 = -1;
	Var117.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	func_927(&Var117);
	func_1814(&(Var1.f_32), &(Var1.f_34), &(Var1.f_36));
	func_1834(Var1.f_31, Var1.f_32, Var1.f_33, Var1.f_34, Var1.f_35, Var1.f_36);
	func_1835(&Var1, &(uParam0->f_42), *uParam0);
	if (func_1816(&Var1))
	{
		if (Var1.f_37 == -1)
		{
			iVar175 = -1;
		}
		else if (Var1.f_37 == 0)
		{
			iVar175 = -2;
		}
		else
		{
			iVar175 = Var1.f_37;
		}
		if (Var1.f_38 == -1)
		{
			iVar176 = -1;
		}
		else if (Var1.f_38 == 0)
		{
			iVar176 = -2;
		}
		else
		{
			iVar176 = Var1.f_38;
		}
		if (Var1.f_39 == -1)
		{
			iVar177 = -1;
		}
		else if (Var1.f_39 == 0)
		{
			iVar177 = -2;
		}
		else
		{
			iVar177 = Var1.f_39;
		}
		func_1836(iVar175, iVar176, iVar177);
	}
	bVar178 = func_1818(&Var1);
	func_1837(bVar178);
	func_1440(uParam0->f_42, Var1.f_65);
	bVar179 = !is_bit_set(Var1.f_5, 22);
	func_1838(&Var117, bVar179);
	if (bVar0)
	{
		if (uParam0->f_13 != -1000 || Var1.f_109 != 0)
		{
			fVar180 = func_1822(uParam0->f_13 == -2000, -1f, (to_float(uParam0->f_13) / 1000f));
			if (Var1.f_109 != 0)
			{
				fVar180 = to_float(Var1.f_109);
			}
			func_1839(&Var117, fVar180);
		}
	}
	bVar181 = is_bit_set(uParam0->f_12, 7);
	if (func_359())
	{
		bVar181 = true;
	}
	if (func_1824(&Var1, bVar181))
	{
		func_1840(&(Var1.f_73[0]), &(Var1.f_78[0]), &(Var1.f_73[1]), &(Var1.f_78[1]), &(Var1.f_73[2]), &(Var1.f_78[2]), &(Var1.f_73[3]), &(Var1.f_78[3]), !bVar181);
	}
	func_1841(&(uParam0->f_54), uParam1, &(uParam0->f_1));
	if (uParam0->f_9 != -1)
	{
		func_1830(uParam0->f_9);
	}
}

void func_1348(int iParam0)
{
	if (Global_1071686->f_21952.f_581 != iParam0)
	{
		Global_1071686->f_21952.f_581 = iParam0;
	}
}

int func_1349(char* sParam0, var uParam1, bool bParam2, int iParam3)
{
	iVar0 = get_length_of_literal_string(sParam0);
	if (iParam3 >= iVar0)
	{
		return 0;
	}
	Var1 = { *sParam0 };
	iVar17 = -1;
	iVar19 = iParam3;
	while (iVar19 <= (iVar0 - 1))
	{
		if (are_strings_equal(_get_text_substring(&Var1, iVar19, iVar19 + 1), "#"))
		{
			iVar17 = 0;
			while (iVar17 < 32)
			{
				if (func_1842(&Var1, iVar17, iVar19, uParam1, bParam2))
				{
					bVar18 = true;
				}
				else
				{
					iVar17++;
				}
			}
		}
		if (bVar18)
		{
		}
		else
		{
			iVar19++;
		}
	}
	if (!are_strings_equal(&Var1, sParam0))
	{
		*sParam0 = { Var1 };
		func_1349(sParam0, uParam1, bParam2, iVar19);
		return 1;
	}
	return 0;
}

void func_1350(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5, int iParam6)
{
	*iParam6 = 0;
	iVar0 = &Global_3145858->f_51943[iParam0]->f_5[0];
	iVar1 = &Global_3145858->f_51943[iParam0]->f_5[1];
	if (iVar0 != -1)
	{
		*sParam2 = { *Global_3145858->f_52528[iVar0] };
		*bParam4 = func_1351(iVar0);
		*iParam6++;
	}
	if (iVar1 != -1)
	{
		if (*iParam6 == 0)
		{
			*sParam2 = { *Global_3145858->f_52528[iVar1] };
			*bParam4 = func_1351(iVar1);
		}
		else
		{
			*sParam3 = { *Global_3145858->f_52528[iVar1] };
			*bParam5 = func_1351(iVar1);
		}
		*iParam6++;
	}
	if ((iVar0 != -1 && is_bit_set(Global_3145858->f_52528[iVar0]->f_16, 1)) && !*bParam4)
	{
		func_1349(sParam2, uParam1, &uVar2, 0);
	}
	if ((iVar1 != -1 && is_bit_set(Global_3145858->f_52528[iVar1]->f_16, 1)) && !*bParam5)
	{
		func_1349(sParam3, uParam1, &uVar2, 0);
	}
}

bool func_1351(int iParam0)
{
	return func_1843(Global_3145858->f_52528[iParam0]->f_17, 0);
}

void func_1352(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_437(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1844() || bParam6)
	{
		func_1845(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1002(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1002(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1846(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_868(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_1847(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1000(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_1848(iParam0, 474910316))
	{
		sVar17 = func_1849(iParam0);
		if (!is_string_null_or_empty(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (_item_database_is_overpowered_item(iParam0))
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
	if (func_1848(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_1850(iParam0))
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
	iVar18 = func_1003(iParam0);
	if ((func_1851(iVar12) && func_1848(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1852(iParam0);
	}
	else if (func_868(iParam0) == -1037537535)
	{
		iVar19 = func_1853(iParam0);
		if (func_437(iVar19, 0))
		{
			iVar18 = func_1003(iVar19);
		}
	}
	if (func_1854(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_1855(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_547(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_1856(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_1857(iParam0, &cVar22))
		{
			sVar21 = func_577(func_967(cVar22), 109029619);
		}
	}
	func_1004(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

bool func_1353(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_488(Global_1291071[iParam0], iParam1);
}

int func_1354(int iParam0, bool bParam1)
{
	if (bParam1 || !func_680())
	{
		return &(Local_5688.f_876[iParam0]);
	}
	return &(Local_5688.f_912[iParam0]);
}

int func_1355(int iParam0, bool bParam1)
{
	if (bParam1 || !func_680())
	{
		return Local_1685[iParam0]->f_5;
	}
	return Local_1685[iParam0]->f_13;
}

float func_1356(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_1357()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (&Local_5688.f_876[iVar0] >= iVar1)
		{
			iVar1 = &Local_5688.f_876[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1358()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_92[iVar0]->f_3)
		{
			if (func_1355(iVar0, 0) != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

var func_1359(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1858() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1859());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1859());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1859());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1860(get_player_team(iVar5)));
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
			if (func_634(iVar2))
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
				if (iVar9 & 8192 != 0 && func_372(iVar2) != 1)
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
					if (!func_1324(iVar10))
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

bool func_1360(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

void func_1361(int iParam0)
{
	StringCopy(&cVar0, "DMC_HUD_KL_SC_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	if (iVar14239 != 0)
	{
		if (func_759(iVar14238))
		{
			_0x2f901291ef177b02(iVar14238, 0);
		}
	}
	func_1861(&uLocal_14241, "", _create_var_string(2, &cVar0), -2, 1105014447, 0);
}

bool func_1362(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return Local_5688.f_2521[iParam0][iParam1] != 255;
}

void func_1363(int iParam0, int iParam1)
{
	Local_1685[iLocal_71]->f_47[iParam1] = iParam0;
}

void func_1364(int iParam0)
{
	Local_1685[iLocal_71]->f_46 = iParam0;
}

int func_1365(var uParam0, struct<21> Param1)
{
	if (!func_1862(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

int func_1366(int iParam0)
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

void func_1367(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_1368(int iParam0, int iParam1)
{
	iVar0 = Local_1685[iParam0]->f_3;
	if (iParam1 == -1)
	{
		iParam1 = &Local_92[iParam0];
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (&Local_5688.f_921[iParam1] != Local_1685[iParam0]->f_5)
	{
		iVar1 = (&Local_5688.f_921[iParam1] - Local_1685[iParam0]->f_5);
		Local_5688.f_921[iParam1] = Local_1685[iParam0]->f_5;
		func_1863(iVar0, iVar1);
	}
	if (func_680() && !func_646())
	{
		if (&Local_5688.f_1086[iParam1] != Local_1685[iParam0]->f_13)
		{
			iVar1 = (&Local_5688.f_1086[iParam1] - Local_1685[iParam0]->f_13);
			Local_5688.f_1086[iParam1] = Local_1685[iParam0]->f_13;
			func_1864(iVar0, iVar1);
		}
	}
	if (&Local_5688.f_954[iParam1] < Local_1685[iParam0]->f_6)
	{
		iVar1 = (&Local_5688.f_954[iParam1] - Local_1685[iParam0]->f_6);
		func_1865(iParam1, iVar1);
		func_1866(iVar0, iVar1);
	}
	if (&Local_5688.f_987[iParam1] < Local_1685[iParam0]->f_7)
	{
		iVar1 = (&Local_5688.f_987[iParam1] - Local_1685[iParam0]->f_7);
		func_1867(iParam1, iVar1);
		func_1868(iVar0, iVar1);
	}
	if (is_bit_set(Local_5688.f_24.f_5, 10))
	{
		if (&Local_5688.f_1053[iParam1] < Local_1685[iParam0]->f_8)
		{
			iVar1 = (&Local_5688.f_1053[iParam1] - Local_1685[iParam0]->f_8);
			func_1869(iParam1, iVar1);
		}
	}
	if (&Local_5688.f_1020[iParam1] < Local_1685[iParam0]->f_9)
	{
		iVar1 = (&Local_5688.f_1020[iParam1] - Local_1685[iParam0]->f_9);
		func_1870(iParam1, iVar1);
		func_1871(iVar0, iVar1);
	}
}

void func_1369(int iParam0, int iParam1)
{
	if (func_1362(iParam0, iParam1))
	{
		(*Local_5688.f_2521[iParam0])[iParam1] = 255;
	}
}

void func_1370(int iParam0)
{
	set_bit(&(Local_5688.f_3291), iParam0);
	set_bit(&(Local_9759.f_741), iParam0);
}

bool func_1371(int iParam0)
{
	if (Global_3145858->f_285 != 0 && (Global_3145858->f_285 - func_742()) < iParam0)
	{
		return true;
	}
	return false;
}

int func_1372(int iParam0)
{
	iVar11 = 32;
	iVar12 = 1983;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!Local_92[iVar0]->f_3)
		{
		}
		else if (Local_92[iVar0]->f_1 > -1 && Local_92[iVar0]->f_1 < 8)
		{
			uVar2[Local_92[iVar0]->f_1] = &uVar2[Local_92[iVar0]->f_1] + 1;
		}
		else if ((&Local_92[iVar0] != -1 && &Local_5688.f_1196[&Local_92[iVar0]] > -1) && &Local_5688.f_1196[&Local_92[iVar0]] < 8)
		{
			uVar2[&Local_5688.f_1196[&Local_92[iVar0]]] = &uVar2[&Local_5688.f_1196[&Local_92[iVar0]]] + 1;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (&uVar2[iVar1] > 0)
		{
			if (&uVar2[iVar1] < &Global_2359296->f_36[iVar1])
			{
				if (&uVar2[iVar1] < iVar11)
				{
					iVar11 = &uVar2[iVar1];
					iVar12 = iVar1;
				}
				else if (&uVar2[iVar1] == iVar11)
				{
					if (iVar12 < 8)
					{
						if (&Local_5688.f_876[iVar1] < &Local_5688.f_876[iVar12])
						{
							iVar12 = iVar1;
						}
						else if (iParam0 != -1 && iParam0 == iVar1)
						{
							iVar12 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar12;
}

void func_1373(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1374(var uParam0)
{
	if (!func_1872(&(uParam0->f_1), 1))
	{
		*uParam0 = _0xd97d8d905f1562f2(-454606549);
		func_1873(&(uParam0->f_1), 1);
	}
	if (!func_1874(uParam0))
	{
		return 0;
	}
	if (!func_1872(&(uParam0->f_1), 2))
	{
		func_1875(uParam0);
		func_1873(&(uParam0->f_1), 2);
	}
	return 1;
}

bool func_1375(int iParam0)
{
	if (!is_bit_set(iVar16019, iParam0))
	{
		iVar0 = func_505(iParam0);
		request_named_ptfx_asset(iVar0);
		if (!has_named_ptfx_asset_loaded(iVar0))
		{
			return false;
		}
		set_bit(&uLocal_16022, iParam0);
	}
	return true;
}

int func_1376()
{
	iVar0 = 1;
	if (func_504())
	{
		if (!is_bit_set(iVar16021, 0))
		{
			_0x5199405eabfbd7f0("MP_SuddenDeath");
			set_bit(&uLocal_16023, 0);
		}
		if (_0xbf2dd155b2adcd0a("MP_SuddenDeath"))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_1377(int iParam0)
{
	switch (iParam0)
	{
		case -1773771702:
		case -1400017352:
		case -965956337:
		case -443425498:
		case -281129686:
		case 261622973:
		case 1811008981:
			return true;
		default:
			break;
	}
	return false;
}

void func_1378(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = true;
	bVar7 = false;
	bVar8 = false;
	set_entity_coords(iParam0, Global_3145858->f_18727[iParam1]->f_1, true, false, true, true);
	if (!func_410(Global_3145858->f_18727[iParam1]->f_4))
	{
		set_entity_rotation(iParam0, Global_3145858->f_18727[iParam1]->f_4, 2, true);
	}
	else
	{
		set_entity_heading(iParam0, Global_3145858->f_18727[iParam1]->f_7);
	}
	set_entity_visible(iParam0, bParam3);
	bVar8 = is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 17);
	if (func_466(iParam1))
	{
		_0x581edbe56e8d62c9(iParam0, bVar8);
	}
	else
	{
		set_object_targettable(iParam0, bVar8);
	}
	_set_pickup_object_glow_enabled(iParam0, is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 20));
	if (Global_3145858->f_18727[iParam1]->f_71 != -1)
	{
		set_entity_lod_dist(iParam0, Global_3145858->f_18727[iParam1]->f_71);
	}
	else if (func_1876(Global_3145858->f_18727[iParam1]->f_8) != -1)
	{
		set_entity_lod_dist(iParam0, func_1876(Global_3145858->f_18727[iParam1]->f_8));
	}
	if (Global_3145858->f_18727[iParam1]->f_9 != 0)
	{
		_set_object_texture_variation(iParam0, Global_3145858->f_18727[iParam1]->f_9);
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 11))
	{
		_0x98d2d9c053a1f449(iParam0, 1);
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 21))
	{
		_0xe1c708ba4885796b(iParam0, 1);
	}
	_set_object_can_climb_on(iParam0, true);
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 18))
	{
		bVar5 = false;
		bVar7 = true;
		bVar6 = false;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar0 = false;
	}
	else if (bVar8)
	{
		bVar5 = false;
		if (!func_1877(iParam0))
		{
			bVar1 = false;
			bVar2 = false;
			bVar3 = false;
			bVar4 = false;
		}
		bVar0 = false;
	}
	if (func_1878(iParam0))
	{
		bVar5 = false;
		bVar7 = true;
		bVar6 = true;
		bVar1 = false;
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar0 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 4))
	{
		bVar2 = false;
		bVar5 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 28))
	{
		bVar1 = false;
		bVar2 = false;
		bVar5 = false;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 13))
	{
		bVar0 = true;
	}
	if (is_bit_set(Global_3145858->f_18727[iParam1]->f_19, 27))
	{
		bParam4 = true;
	}
	set_entity_can_be_damaged(iParam0, bVar7);
	freeze_entity_position(iParam0, bVar6);
	if (bParam4)
	{
		bVar0 = true;
		bVar1 = true;
		bVar2 = true;
		bVar3 = true;
		bVar4 = true;
		bVar5 = true;
	}
	set_entity_invincible(iParam0, bVar5);
	func_1879(iParam0, bVar0, bVar1, bVar2, bVar3, bVar4, 0, 0, 0, 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(iParam2);
}

bool func_1379(int iParam0)
{
	if (func_559(&(Local_5688.f_1284.f_3), iParam0))
	{
		return false;
	}
	if (Global_3145858->f_6823[iParam0]->f_12 > 0)
	{
		if (func_345(&(Local_5688.f_1154)))
		{
			if (func_742() < Global_3145858->f_6823[iParam0]->f_12 * 1000)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else if (Global_3145858->f_6823[iParam0]->f_12 == -1)
	{
		return false;
	}
	if (Global_3145858->f_6823[iParam0]->f_31 != 0)
	{
		iVar0 = Global_3145858->f_6823[iParam0]->f_26;
		switch (Global_3145858->f_6823[iParam0]->f_31)
		{
			case 1135537454:
				if (!network_does_network_id_exist(&(Local_5688.f_52.f_33[iVar0])))
				{
					return false;
				}
				break;
			case 465509728:
				if (!network_does_network_id_exist(&(Local_5688.f_52.f_108[iVar0])))
				{
					return false;
				}
				break;
		}
	}
	return true;
}

int func_1380(int iParam0)
{
	iVar0 = 0;
	if (Global_3145858->f_6823[iParam0]->f_31 != 0)
	{
		iVar1 = Global_3145858->f_6823[iParam0]->f_26;
		switch (Global_3145858->f_6823[iParam0]->f_31)
		{
			case 1135537454:
				if (network_does_network_id_exist(&(Local_5688.f_52.f_33[iVar1])))
				{
					iVar0 = net_to_ent(&(Local_5688.f_52.f_33[iVar1]));
				}
				break;
			case 465509728:
				if (network_does_network_id_exist(&(Local_5688.f_52.f_108[iVar1])))
				{
					iVar0 = net_to_ent(&(Local_5688.f_52.f_108[iVar1]));
				}
				break;
		}
	}
	return iVar0;
}

bool func_1381(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	bVar0 = false;
	Var1 = { *Global_3145858->f_6823[iParam0] };
	if (does_pickup_exist(uParam1[iParam0]) || !bParam4)
	{
		bVar0 = true;
		return bVar0;
	}
	iVar34 = Var1.f_17;
	iVar35 = Var1.f_8;
	iVar36 = Var1.f_10;
	if (iParam5 != 151)
	{
		iVar34 = iParam5;
		iVar35 = iParam6;
		iVar36 = iParam7;
	}
	if (!_is_pickup_type_valid(iVar34))
	{
		bVar0 = true;
		return bVar0;
	}
	iVar38 = 0;
	iVar39 = 0;
	if (iVar36 != 0 && func_1880(get_weapon_type_from_pickup_type(iVar34)))
	{
		iVar39 = iVar36;
		_0x23fb9faca28779c1(player_ped_id(), get_weapon_type_from_pickup_type(iVar34), iVar36);
	}
	if (!func_410(Var1.f_1))
	{
		if (is_bit_set(Var1.f_13, 15))
		{
			if (!func_1881((*uParam3)[iParam0], Var1.f_1, Var1.f_4))
			{
				return false;
			}
		}
		func_1882(&iVar37, Var1, iParam2);
		vVar40 = { Var1.f_1 };
		if (does_entity_exist(iParam8))
		{
			vVar40 = { get_offset_from_entity_in_world_coords(iParam8, Var1.f_28) };
		}
		vVar43 = { func_1883(is_bit_set(Var1.f_13, 15)) };
		iVar46 = 1;
		iVar47 = get_weapon_type_from_pickup_type(iVar34);
		if (func_1884(iVar34))
		{
			iVar47 = _0x44b09a23d728045a(iVar34);
		}
		if (func_491(iVar47) || func_1293(iVar47))
		{
			iVar46 = func_1885(iVar34, iVar35, Var1.f_9);
		}
		fVar48 = Global_3145858->f_6823[iParam0]->f_32;
		if (func_1886(iVar34))
		{
			iVar38 = func_1887(iVar34, Var1.f_24);
			request_model(iVar38, false);
			if (has_model_loaded(iVar38))
			{
				(*uParam1)[iParam0] = create_pickup_rotate(iVar34, vVar40 + vVar43, func_1888(Var1), iVar37, iVar46, 2, false, iVar38, iVar39, fVar48, iParam8);
				bVar0 = true;
			}
		}
		else
		{
			(*uParam1)[iParam0] = create_pickup_rotate(iVar34, vVar40 + vVar43, func_1888(Var1), iVar37, iVar46, 2, false, iVar38, iVar39, fVar48, iParam8);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		iVar49 = Var1.f_11 * 1000;
		if (Var1.f_11 == -1)
		{
			iVar49 = 86400000;
		}
		set_pickup_regeneration_time(uParam1[iParam0], iVar49);
		set_pickup_not_lootable(uParam1[iParam0], 1);
		if (func_31(37) || (!func_1889(Var1) && does_pickup_object_exist(uParam1[iParam0])))
		{
			set_entity_rotation(get_pickup_object(uParam1[iParam0]), func_1888(Var1), 2, true);
		}
		if (func_31(69))
		{
			block_pickup_placement_light(uParam1[iParam0], 1);
		}
	}
	return bVar0;
}

void func_1382(int iParam0)
{
	if (&Local_5688.f_2684[iParam0] != 151)
	{
		iVar0 = &Local_5688.f_2684[iParam0];
	}
	else
	{
		iVar0 = Global_3145858->f_6823[iParam0]->f_17;
	}
	if (iVar0 == &iLocal_11597[iParam0])
	{
		return;
	}
	iLocal_11597[iParam0] = iVar0;
}

void func_1383(vector3 vParam0, int iParam3, int iParam4, int iParam5, float fParam6)
{
	get_model_dimensions(iParam3, &uVar1, &Var4);
	iVar0 = -1;
	fVar7 = func_1822(Var4.f_1 > Var4, Var4.f_1, Var4);
	fVar7 = (fVar7 + fParam6);
	if (fVar7 < 2f)
	{
		fVar7 = 2f;
	}
	*iParam4 = _0xfa50f79257745e74(vParam0, fVar7, iParam5, iVar0, 0);
}

bool func_1384(int iParam0)
{
	return Global_2359296->f_5286[iParam0]->f_3 == 0;
}

bool func_1385(int iParam0)
{
	return Global_2359296->f_5286[iParam0]->f_3 == 3;
}

int func_1386(int iParam0, vector3 vParam1)
{
	if (iParam0 < 0 || iParam0 >= 65)
	{
		return 0;
	}
	if (Global_3145858->f_34781[iParam0]->f_13 > -1)
	{
		iVar1 = Global_3145858->f_34781[iParam0]->f_13;
		if (Global_3145858->f_36343[iVar1]->f_12 > 0)
		{
			iVar0 = _create_volume_aggregate();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				iVar3 = &Global_3145858->f_36343[iVar1]->f_1[iVar2];
				if (iVar3 == -1)
				{
				}
				else if (func_410(vParam1))
				{
					_0x12fcaa23f2320422(iVar0, Global_3145858->f_34781[iVar3]->f_3, Global_3145858->f_34781[iVar3]->f_3.f_1, Global_3145858->f_34781[iVar3]->f_3.f_4, Global_3145858->f_34781[iVar3]->f_3.f_7);
				}
				else
				{
					_0x12fcaa23f2320422(iVar0, Global_3145858->f_34781[iVar3]->f_3, Global_3145858->f_34781[iVar3]->f_3.f_1, Global_3145858->f_34781[iVar3]->f_3.f_4, vParam1);
				}
				iVar2++;
			}
		}
	}
	else if (func_410(vParam1))
	{
		iVar0 = _create_volume_by_hash(Global_3145858->f_34781[iParam0]->f_3, Global_3145858->f_34781[iParam0]->f_3.f_1, Global_3145858->f_34781[iParam0]->f_3.f_4, Global_3145858->f_34781[iParam0]->f_3.f_7);
	}
	else
	{
		iVar0 = _create_volume_by_hash(Global_3145858->f_34781[iParam0]->f_3, Global_3145858->f_34781[iParam0]->f_3.f_1, Global_3145858->f_34781[iParam0]->f_3.f_4, vParam1);
	}
	return iVar0;
}

bool func_1387(int iParam0)
{
	return Global_2359296->f_5286[iParam0]->f_3 == 2;
}

bool func_1388(var uParam0, int iParam1)
{
	if (_does_scenario_point_exist(*uParam0))
	{
		return true;
	}
	_request_scenario_type(Global_3145858->f_37518[iParam1]->f_1, 15, 0, 0);
	if (!_has_scenario_type_loaded(Global_3145858->f_37518[iParam1]->f_1, false))
	{
		return false;
	}
	*uParam0 = create_scenario_point(Global_3145858->f_37518[iParam1]->f_1, Global_3145858->f_37518[iParam1]->f_2, Global_3145858->f_37518[iParam1]->f_5, 0, 0, 0);
	iVar0 = func_1890(Global_3145858->f_37518[iParam1]->f_1);
	if (iVar0 != 0)
	{
		iVar1 = func_1891(iVar0, Global_3145858->f_37518[iParam1]->f_2);
		if (iVar1 != -1)
		{
			func_1892(iVar1, 0);
		}
	}
	return true;
}

Vector3 func_1389(bool bParam0)
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1893(iVar0, bParam0))
		{
		}
		else if (func_410(Global_3145858->f_38736[iVar0]->f_1))
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

Vector3 func_1390()
{
	if (Global_3145858->f_38735 == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (!func_1894(iVar0))
		{
		}
		else if (func_410(Global_3145858->f_38736[iVar0]->f_1))
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

Vector3 func_1391(bool bParam0)
{
	if (bParam0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_410(*Global_2097152->f_6035[iVar0]))
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

int func_1392()
{
	func_1168(&uVar2);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&uVar2[iVar0] != 255)
		{
			if (&uVar2[iVar0] == iLocal_79)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

void func_1393(int iParam0)
{
	if (!Global_1071686->f_3)
	{
		return;
	}
	if (!network_is_in_session())
	{
		return;
	}
	if (!func_527(Global_1197355[network_player_id_to_int()], iParam0))
	{
		func_387((*Global_1197355)[network_player_id_to_int()], iParam0);
		Global_1051252->f_45.f_1 = 1;
	}
}

void func_1394(int iParam0)
{
	if (func_844() == -1)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	func_939(&((*Global_1197355)[iVar0]->f_4), iParam0, 1, 30, 1, 7);
}

void func_1395(int iParam0)
{
	if (func_844() == -1)
	{
		return;
	}
	iVar0 = network_player_id_to_int();
	func_939(&((*Global_1197355)[iVar0]->f_4), iParam0, 0, 30, 1, 7);
}

int func_1396(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = func_831();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 623901053;
	}
	return func_1895(get_unique_int_for_player(&(Global_1296859->f_154[iParam0])));
}

int func_1397()
{
	return get_ped_relationship_group_hash(player_ped_id());
}

bool func_1398(int iParam0)
{
	return func_373(48, iParam0);
}

bool func_1399()
{
	if (is_bit_set(iLocal_57, 7))
	{
		if (iVar1672 == -1 || is_bit_set(Global_2359296->f_5512[iVar1672]->f_102, 1))
		{
			func_1896();
		}
		return true;
	}
	func_225(&uLocal_1037);
	if (_does_volume_exist(iVar1667))
	{
		_delete_volume(iVar1667);
	}
	if (iVar1672 == -1)
	{
		if (!func_1897())
		{
			return false;
		}
	}
	else if (!func_1898(iVar1672))
	{
		return false;
	}
	set_bit(&iLocal_57, 7);
	return true;
}

int func_1400()
{
	return Global_1102219->f_3911;
}

float func_1401(float fParam0, float fParam1, float fParam2)
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

void func_1402(float fParam0)
{
	func_1899(1, Global_2359296->f_6543, fParam0);
	func_1899(2, Global_2359296->f_6544, fParam0);
	func_1899(3, Global_2359296->f_6545, fParam0);
	func_1899(4, Global_2359296->f_6546, fParam0);
	func_1899(5, Global_2359296->f_6547, fParam0);
	func_1899(6, Global_2359296->f_6548, fParam0);
	func_1899(7, Global_2359296->f_6549, fParam0);
	func_1899(8, Global_2359296->f_6550, fParam0);
	func_1899(11, Global_2359296->f_6553, fParam0);
	func_1899(12, Global_2359296->f_6554, fParam0);
	func_1899(13, Global_2359296->f_6555, fParam0);
	if (func_260())
	{
		func_1899(9, Global_2359296->f_6551, fParam0);
		func_1899(10, Global_2359296->f_6552, fParam0);
	}
}

void func_1403(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1900(uParam0);
	}
	func_1901(uParam0);
}

void func_1404(var uParam0)
{
	if (!func_1398(255))
	{
		return;
	}
	func_1902(uParam0, &Var0, &Var30);
	func_1903(Var0, Var30, 0, 0, 1);
}

void func_1405()
{
	if (_does_volume_exist(iVar1668))
	{
		func_1904(&uLocal_1037, iVar1668);
		_delete_volume(iVar1668);
	}
}

void func_1406()
{
	Global_1071686->f_28352 = 1;
}

Vector3 func_1407(bool bParam0, vector3 vParam1)
{
	if (!func_410(Global_3145858->f_199))
	{
		return Global_3145858->f_199;
	}
	if (!bParam0)
	{
		if (!func_410(vParam1))
		{
			return vParam1 + Vector(5f, 0f, 0f);
		}
	}
	return Global_3145858->f_196 + Vector(5f, 0f, 0f);
}

void func_1408(vector3 vParam0, vector3 vParam3)
{
	bVar0 = false;
	if (!does_entity_exist(Global_1102219->f_26.f_3344))
	{
		bVar0 = true;
	}
	else if (!func_268(get_entity_coords(Global_1102219->f_26.f_3344, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1102219->f_26.f_3348 = { vParam0 };
		Global_1102219->f_26.f_3354 = { vParam3 };
		Global_1102219->f_26.f_3345 = 1;
		request_model(-861544272, false);
	}
}

void func_1409(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_1905(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_1905(vVar0);
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
				func_1906(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1905(vVar0);
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
					func_1906(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

void func_1410(int iParam0)
{
	func_387(&(Global_1071686->f_23887.f_4), iParam0);
}

void func_1411(int iParam0, int iParam1)
{
	iVar0 = Local_1685[iParam0]->f_3;
	if (iVar0 < 0 || iVar0 >= 8)
	{
		if (func_260())
		{
			return;
		}
		iVar0 = 0;
	}
	bVar1 = &Local_5688.f_858[iVar0] == true;
	func_1907(395262693, iVar0, Local_1685[iParam0]->f_4, bVar1, iParam1);
}

void func_1412(int iParam0)
{
	if (Global_1102219->f_26.f_3342 == iParam0)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		Global_1102219->f_26.f_3342 = 0;
		return;
	}
	if (iParam0 == func_1908(player_ped_id()))
	{
		if (does_entity_exist(Global_1102219->f_26.f_3344))
		{
			iParam0 = Global_1102219->f_26.f_3344;
		}
	}
	Global_1102219->f_26.f_3342 = iParam0;
}

void func_1413(int iParam0)
{
	Global_1102219->f_26.f_3 = iParam0;
}

bool func_1414(struct<2> Param0)
{
	return func_878(Param0) == 0;
}

void func_1415(struct<2> Param0, bool bParam2)
{
	if (!func_252(Param0))
	{
		return;
	}
	if (!func_1414(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1909(Param0);
	}
	func_880(Param0, 1);
	bParam2 = bParam2;
}

bool func_1416(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_1417(int iParam0, bool bParam1)
{
	iVar0 = func_888((*Global_1835011)[iParam0]->f_1);
	if (!func_1910(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_1911(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_875(func_874(4, iParam0), 0);
		func_455((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_876(iParam0);
}

bool func_1418(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_1419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 13:
			*iParam1 = 622326403;
			return true;
		case 14:
			*iParam1 = 384587308;
			return true;
		case 15:
			*iParam1 = 968661964;
			return true;
		case 16:
			*iParam1 = 49496744;
			return true;
		case 17:
			*iParam1 = 1495592714;
			return true;
		case 18:
			*iParam1 = 2125588482;
			return true;
		case 19:
			*iParam1 = 1866942769;
			return true;
		case 21:
			*iParam1 = 661064591;
			return true;
		case 22:
			*iParam1 = 1311562014;
			return true;
		case 23:
			*iParam1 = 1435506115;
			return true;
		case 24:
			*iParam1 = 1709487724;
			return true;
		case 20:
			*iParam1 = 757099750;
			return true;
		case 25:
			*iParam1 = 392315242;
			return true;
		default:
			break;
	}
	return false;
}

void func_1420(struct<2> Param0)
{
	if (func_27(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_27(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_27(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_1424(Param0, &Var0))
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

int func_1421(struct<2> Param0, int iParam2)
{
	iVar0 = func_1272(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_1912(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_1748(iVar0, iParam2);
	return iParam2;
}

bool func_1422(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_1423(struct<2> Param0, int iParam2)
{
	if (!func_252(Param0))
	{
		return 0;
	}
	iVar0 = func_1272(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1913(Param0, func_881(0), iParam2))
	{
		func_880(func_881(0), 3);
		func_880(func_881(iVar0), 4);
		return 0;
	}
	func_1748(iVar0, 0);
	func_880(func_881(0), 3);
	func_880(func_881(1), 4);
	return 1;
}

bool func_1424(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_770(Param0, &vVar0);
	if (func_1914(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_1425(bool bParam0)
{
	add_relationship_group("HatePlayer_LikeAllAI", &uLocal_15557);
	if (!bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&cVar1, "DMC_Team_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		add_relationship_group(&cVar1, uLocal_83[iVar0]);
		iVar0++;
	}
}

void func_1426()
{
	func_1915(6, -1158905413);
	func_1915(6, 358397622);
	func_1915(6, 65999835);
	func_1915(6, 814443795);
	func_1915(6, 519621102);
	func_1915(6, -1628223003);
	func_1915(6, 1278256225);
	func_1915(6, 2038628101);
	func_1915(6, 1742494648);
	func_1915(6, -1010166918);
	func_1915(6, 660170868);
	func_1915(6, -1278312096);
	func_1915(6, -509158128);
	func_1915(6, -226656579);
	func_1915(6, 2115868159);
	func_1915(6, 1495813101);
	func_1915(6, 1197385818);
	func_1915(6, 1015780020);
	func_1915(6, -1286733825);
	func_1915(6, -1670393277);
	func_1915(6, -415733461);
	func_1915(6, -1207924036);
	func_1915(6, 497702414);
	func_1915(6, 719188085);
	func_1915(6, 43753457);
	func_1915(6, 771290791);
	func_1915(6, 20356387);
	func_1915(6, 309149584);
	func_1915(6, 1613781781);
	func_1915(6, 1693607065);
	func_1915(6, 1132176120);
	func_1915(6, 869270437);
}

int func_1427(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1862763509;
		case 1:
			return -1976316465;
		case 2:
			return 841021282;
		case 3:
			return -350651841;
		case 4:
			return 707888648;
		case 5:
			return 623901053;
		case 6:
			return 1269650476;
		case 7:
			return -1538724068;
		case 8:
			return 1391706777;
		case 9:
			return -401180987;
		case 10:
			return -1247684992;
		case 11:
			return -767591988;
		case 12:
			return -989642646;
		case 13:
			return -1683752762;
		case 14:
			return 543319108;
		case 15:
			return -886193798;
		case 16:
			return 106566339;
		case 17:
			return -50399569;
		case 18:
			return 1622308690;
		case 19:
			return 1222652248;
		case 20:
			return -350226955;
		case 21:
			return 1030835986;
		case 22:
			return -1856989775;
		case 23:
			return -1535431934;
		case 24:
			return -1448293989;
		case 25:
			return 266218800;
		case 26:
			return 555364152;
		case 27:
			return -1663301869;
		case 28:
			return -1996978098;
		case 29:
			return 1078461828;
		case 30:
			return 1986610512;
		case 31:
			return 889541022;
		case 32:
			return -319516747;
		case 33:
			return -1329647920;
		case 34:
			return -225988669;
		case 35:
			return -1694487418;
		case 36:
			return 1878159675;
		case 37:
			return -1505548114;
		case 38:
			return 1856892754;
		case 39:
			return 1609284507;
		case 40:
			return 747813878;
		case 41:
			return -40378879;
		case 42:
			return -415798358;
		case 43:
			return 1733741057;
		case 44:
			return 886389029;
		case 45:
			return -2003007004;
		case 46:
			return 1965820175;
		case 47:
			return -1164995627;
		case 48:
			return -1406404850;
		case 49:
			return 892340488;
		case 50:
			return 570352286;
		case 51:
			return 1809249877;
		case 52:
			return 1185197041;
		case 53:
			return -1901478918;
		case 54:
			return 2097877918;
		case 55:
			return -1158905413;
		case 56:
			return 358397622;
		case 57:
			return 65999835;
		case 58:
			return 814443795;
		case 59:
			return 519621102;
		case 60:
			return -1628223003;
		case 61:
			return 1278256225;
		case 62:
			return 2038628101;
		case 63:
			return 1742494648;
		case 64:
			return -1010166918;
		case 65:
			return 660170868;
		case 66:
			return -1278312096;
		case 67:
			return -509158128;
		case 68:
			return -226656579;
		case 69:
			return 2115868159;
		case 70:
			return 1495813101;
		case 71:
			return 1197385818;
		case 72:
			return 1015780020;
		case 73:
			return -1286733825;
		case 74:
			return -1670393277;
		case 75:
			return -415733461;
		case 76:
			return -1207924036;
		case 77:
			return 497702414;
		case 78:
			return 719188085;
		case 79:
			return 43753457;
		case 80:
			return 771290791;
		case 81:
			return 20356387;
		case 82:
			return 309149584;
		case 83:
			return 1613781781;
		case 84:
			return 1693607065;
		case 85:
			return 1132176120;
		case 86:
			return 869270437;
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

bool func_1428(int iParam0, int iParam1)
{
	return func_1916(iParam0, iParam1) > 0;
}

bool func_1429(vector3 vParam0, float fParam3)
{
	if (func_410(vParam0))
	{
		return false;
	}
	if (func_372(255) == 4)
	{
		return false;
	}
	if (func_373(4, 255))
	{
	}
	func_59(4);
	func_832(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = fParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_833(Global_1102219->f_3879, 36);
	return true;
}

void func_1430(int iParam0)
{
	func_1917(iParam0, 0, 100);
	func_1917(iParam0, 1, 100);
}

int func_1431(int iParam0, var uParam1)
{
	uParam1->f_10 = func_1918(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_410(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1919();
	if (*uParam1)
	{
		if (bVar0)
		{
			if (func_1920(5))
			{
				func_1921(5);
				func_1922(5);
				func_1923(0);
				func_1924(0);
			}
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1432(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1925(iVar1))
	{
		bVar3 = true;
		if (func_1926(iVar1))
		{
			bVar4 = true;
		}
		if (func_1927(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_1928(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1920(0) && func_1920(1))
			{
				func_1929(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1930())
			{
				func_1931();
			}
			func_1923(0);
			func_1924(0);
			func_1932(uParam1->f_6);
		}
	}
	if (!func_1925(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1933(uParam1->f_10) == 0 || func_1934(uParam1->f_10) == 0) || func_1935(uParam1->f_10) == 0)
			{
				func_1936(uParam1->f_10);
			}
			func_1937(uParam1->f_10);
			func_1938(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1432(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_1925(iVar1))
	{
		bVar3 = true;
		if (func_1926(iVar1))
		{
			bVar4 = true;
		}
		if (func_1927(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_410(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1939(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_1940(uParam1->f_10) };
			Var10 = { func_1941() };
			func_1942(iVar2, &Var8, &Var10, 0, 1);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_1943(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1944(uParam1->f_10);
		if (uParam1->f_2 && !func_410(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_1945(uParam1->f_10);
	if (func_1943(uParam1->f_10))
	{
		iVar18 = func_1946(uParam1->f_10);
		iVar19 = get_id_of_this_thread();
		if (iVar18 != iVar19)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_1432(int iParam0)
{
	iParam0 = func_1918(iParam0);
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

void func_1433(int iParam0, vector3 vParam1)
{
	if (does_entity_exist(iParam0))
	{
		vVar0 = { vParam1 };
		if (get_ground_z_for_3d_coord(vVar0, &(vVar0.f_2), false))
		{
			set_entity_coords(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			set_entity_coords(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_1434()
{
	if (!is_entity_visible(iLocal_81))
	{
		set_entity_visible(iLocal_81, true);
	}
	set_player_invincible(iLocal_79, false);
	set_ped_can_be_targetted(iLocal_81, true);
	func_149(iLocal_81);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		set_ped_can_be_targetted_by_team(iLocal_81, iVar0, true);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = int_to_participantindex(iVar1);
		if (network_is_participant_active(iVar2))
		{
			iVar3 = network_get_player_index(iVar2);
			set_ped_can_be_targetted_by_player(iLocal_81, iVar3, true);
		}
		iVar1++;
	}
	if (func_260())
	{
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if (iVar0 != Local_1685[iLocal_71]->f_3)
			{
				set_ped_can_be_targetted_by_team(iLocal_81, iVar0, true);
			}
			else
			{
				set_ped_can_be_targetted_by_team(iLocal_81, iVar0, false);
			}
			iVar0++;
		}
	}
	else
	{
		set_ped_can_be_targetted_by_team(iLocal_81, 0, true);
	}
}

void func_1435(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0) && !is_ped_injured(iParam0))
		{
			set_ped_config_flag(iParam0, 265, true);
			set_ped_max_time_underwater(iParam0, -1f);
			set_ped_config_flag(iParam0, 267, true);
		}
	}
}

void func_1436(int iParam0)
{
	if (decor_is_registered_as_type("TeamId", 3))
	{
		if (!decor_exist_on(get_player_ped_script_index(player_id()), "TeamId"))
		{
			decor_set_int(get_player_ped_script_index(player_id()), "TeamId", iParam0);
		}
	}
}

void func_1437(int iParam0)
{
	if (network_is_game_in_progress())
	{
		if (func_260())
		{
			set_ped_relationship_group_hash(iLocal_81, func_147(iParam0));
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (iVar0 != iParam0)
				{
					set_ped_can_be_targetted_by_team(iLocal_81, iVar0, true);
				}
				else
				{
					set_ped_can_be_targetted_by_team(iLocal_81, iVar0, false);
				}
				iVar0++;
			}
		}
		else
		{
			set_ped_can_be_targetted_by_team(iLocal_81, 0, true);
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!Local_92[iVar0]->f_3 || func_38(iVar0))
			{
			}
			else
			{
				iVar1 = Local_92[iVar0]->f_4;
				if (!func_260())
				{
					func_1493(iVar1);
				}
				else if (Local_1685[iVar0]->f_3 == iParam0)
				{
					func_1494(iVar1);
				}
				else
				{
					func_1493(iVar1);
				}
			}
			iVar0++;
		}
	}
}

void func_1438(var uParam0)
{
	bVar2 = true;
	if (Global_3145858->f_60002 != 3)
	{
		if (is_bit_set(uParam0->f_12, 4) || Global_3145858->f_60002 == 0)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	bVar1 = func_31(9);
	if (bVar0 || bVar2)
	{
		_0x644ccb76a76cfbd6(0, 0, bVar0, bVar2, 0, 1);
		if (bVar0)
		{
			func_1947(1);
			func_1948(1);
			if (!bVar1)
			{
				func_1949(1);
			}
			else
			{
				func_1950();
			}
		}
	}
	func_1951(1);
	func_1952(uParam0->f_9);
}

bool func_1439(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		iVar0 = func_1953(iParam0, 0, 1, 0);
		if (iVar0 != 0 && iVar0 != -1569615261)
		{
			_0x5230d3f6ee56cfe6(iParam0, 0);
			return true;
		}
	}
	return false;
}

void func_1440(struct<12> Param0, var uParam12)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1820(&(Global_1139381->f_4796), Param0, uParam12);
}

void func_1441()
{
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (iVar0 < 0 || iVar0 >= 8)
	{
		iVar0 = 0;
	}
	if (is_bit_set(&(Global_2359296->f_74[iVar0]), 3))
	{
		iVar1 |= 1024;
	}
	if (!is_bit_set(&(Global_2359296->f_74[iVar0]), 4))
	{
		iVar1 |= 2048;
	}
	if (is_bit_set(&(Global_2359296->f_74[iVar0]), 18))
	{
		if (!is_bit_set(&(Global_2359296->f_74[iVar0]), 16))
		{
			iVar1 |= 1;
		}
	}
	func_180(!is_bit_set(&(Global_2359296->f_74[iVar0]), 3));
	if (iVar1 != iVar2)
	{
		func_1954(iVar1, 1);
	}
}

void func_1442()
{
	if (func_31(23))
	{
		func_1955(635643758);
	}
}

void func_1443()
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar0 != iLocal_71)
		{
			if (Local_92[iVar0]->f_3)
			{
				iVar1 = Local_92[iVar0]->f_6;
				if (does_entity_exist(iVar1))
				{
					if (func_260())
					{
						if (func_614(Local_1685[iLocal_71]->f_3, Local_1685[iVar0]->f_3))
						{
							add_entity_to_audio_mix_group(iVar1, "RDRO_Friendly_Player_Mixgroup", 0f);
						}
						else
						{
							add_entity_to_audio_mix_group(iVar1, "RDRO_Enemy_Player_Mixgroup", 0f);
						}
					}
					else
					{
						add_entity_to_audio_mix_group(iVar1, "RDRO_Enemy_Player_Mixgroup", 0f);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1444(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1956(iParam0, iParam2);
	_0x78b3d19af6391a55(iParam1, sVar0);
}

void func_1445()
{
	if (func_31(70))
	{
		start_audio_scene("rdro_disable_Cornwall_Kerosene_And_Tar_Ambience_Scene");
	}
}

void func_1446(int iParam0, int iParam1)
{
	func_1957(iParam0, iParam1);
	iVar0 = _inventory_get_ped_inventory_id(iParam1);
	bVar2 = false;
	Var3 = { func_530() };
	Var7 = { func_530() };
	Var11.f_9 = -1591664384;
	Var33.f_9 = -1591664384;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		_copy_memory(&Var11, &Var33, 22);
		Var55 = { func_1958(iVar1, iVar0) };
		if (_0xb881ca836cc4b6d4(&Var55))
		{
			if (!_0x025a1b1fb03fbf61(iVar0, &Var55, &Var11, 22, 1))
			{
			}
			else if (Var11.f_4 == -1569615261)
			{
			}
			else
			{
				if (iVar1 == 0 || (!bVar2 && iVar1 == 5))
				{
					Var3 = { Var55 };
					bVar2 = true;
					Jump @235; //curOff = 182
				}
				else if (iVar1 == 1)
				{
					set_ped_combat_attributes(iParam1, 116, true);
					Var7 = { Var55 };
				}
				else
				{
					_0x12fb95fe3d579238(iParam1, &Var55, 1, iVar1, 0, 0);
					Var55 = { func_530() };
				}
			}
			iVar1++;
			if (_0xb881ca836cc4b6d4(&Var3))
			{
				_0x12fb95fe3d579238(iParam1, &Var3, 1, 0, 0, 0);
			}
			if (_0xb881ca836cc4b6d4(&Var7))
			{
				_0x12fb95fe3d579238(iParam1, &Var7, 1, 1, 0, 0);
			}
		}
	}
}

void func_1447(int iParam0)
{
	func_1959(func_482(), iParam0);
}

char* func_1448(int iParam0)
{
	if (!func_1960(iParam0))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 1:
			sVar0 = "enter_2_hold";
			break;
		case 2:
			sVar0 = "hold";
			break;
		case 3:
			sVar0 = "hold_2_look";
			break;
		case 4:
			sVar0 = "look";
			break;
		case 5:
			sVar0 = "look_2_hold";
			break;
		case 6:
			sVar0 = "hold_2_exit";
			break;
	}
	return sVar0;
}

bool func_1449()
{
	return Global_1896738->f_382;
}

void func_1450()
{
	func_1961(0);
}

bool func_1451()
{
	return Global_1940311->f_1;
}

void func_1452()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

bool func_1453()
{
	return func_475(4096);
}

bool func_1454(int iParam0, int iParam1)
{
	return absi((_get_system_time() - iParam0)) >= iParam1;
}

int func_1455(var uParam0)
{
	if (!_uiflowblock_is_loaded(*uParam0))
	{
		return 0;
	}
	_uiflowblock_enter(*uParam0, uParam0->f_1);
	if (!_uistatemachine_exists(*uParam0))
	{
		_uistatemachine_create(*uParam0, *uParam0);
	}
	return 1;
}

int func_1456(var uParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return 0;
	}
	sVar1 = get_player_name(iParam1);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((*uParam0)[iVar0]->f_14 == iParam1 || are_strings_equal(&((*uParam0)[iVar0]->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

char* func_1457(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1962(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	else if ((is_bit_set(iParam1, 3) || is_bit_set(iParam1, 4)) || is_bit_set(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return _get_label_text("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return _get_label_text("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return _get_label_text("POS_ELIM");
		}
		else if (iParam0 == round(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1962(iParam0, 1, 2, is_bit_set(iParam1, 12), 0, 0);
		}
	}
	if (is_bit_set(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_1962(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1963(&cVar0);
}

int func_1458(var uParam0, int iParam1, var uParam2)
{
	fVar0 = uParam0->f_1;
	if (func_244())
	{
		func_1964(uParam0, 0);
	}
	else if (is_bit_set(iParam1, 19))
	{
		fVar0 = uParam0->f_6;
	}
	return round(fVar0);
}

int func_1459(var uParam0, int iParam1, int iParam2)
{
	fVar0 = uParam0->f_2;
	if (func_244())
	{
		func_1964(uParam0, 1);
	}
	else
	{
		if (is_bit_set(iParam1, 19))
		{
			fVar0 = uParam0->f_1;
		}
		if (is_bit_set(iParam2, 2))
		{
			fVar0 = uParam0->f_5;
		}
	}
	return round(fVar0);
}

int func_1460(var uParam0, int iParam1, int iParam2)
{
	fVar0 = uParam0->f_2;
	if (func_244())
	{
		func_1964(uParam0, 2);
	}
	else if (is_bit_set(iParam1, 19) || is_bit_set(iParam2, 5))
	{
		fVar0 = uParam0->f_5;
	}
	return round(fVar0);
}

int func_1461(var uParam0)
{
	fVar0 = uParam0->f_2;
	if (func_244())
	{
		func_1964(uParam0, 3);
	}
	return round(fVar0);
}

struct<4> func_1462(int iParam0, int iParam1, bool bParam2)
{
	if (func_244())
	{
		MemCopy(&cVar0, {func_1965(0, bParam2)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_BOUS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_BOUP", 32);
			}
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_KILLS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_KILLP", 32);
		}
	}
	return cVar0;
}

struct<4> func_1463(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_244())
	{
		MemCopy(&cVar0, {func_1965(1, bParam3)}, 4);
	}
	else
	{
		bVar4 = IntToFloat(iParam0) == 1f;
		if (is_bit_set(iParam2, 1) || is_bit_set(iParam2, 2))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_DELIVS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_DELIVP", 32);
			}
		}
		else if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_KILLS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_KILLP", 32);
			}
		}
		else if (is_bit_set(iParam1, 20))
		{
			StringCopy(&cVar0, "UIC_EF_ACC", 32);
		}
		else if (bVar4)
		{
			StringCopy(&cVar0, "UIC_EF_DEATHS", 32);
		}
		else
		{
			StringCopy(&cVar0, "UIC_EF_DEATHP", 32);
		}
	}
	return cVar0;
}

struct<4> func_1464(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_244())
	{
		MemCopy(&cVar0, {func_1965(2, bParam3)}, 4);
	}
	else
	{
		bVar4 = iParam0 == true;
		if (is_bit_set(iParam2, 5))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_PNTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_PNTP", 32);
			}
		}
		else if (is_bit_set(iParam1, 19))
		{
			if (bVar4)
			{
				StringCopy(&cVar0, "UIC_EF_CAPTS", 32);
			}
			else
			{
				StringCopy(&cVar0, "UIC_EF_CAPTP", 32);
			}
		}
	}
	return cVar0;
}

struct<4> func_1465(bool bParam0)
{
	if (func_244())
	{
		MemCopy(&Var0, {func_1965(3, bParam0)}, 4);
	}
	return Var0;
}

void func_1466(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!_databinding_is_data_id_valid(uParam0->f_3))
	{
		uParam0->f_3 = _databinding_add_data_container_from_path("", "transitionData");
	}
	if (_databinding_is_data_id_valid(uParam0->f_4))
	{
		_databinding_write_data_string(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = _databinding_add_data_string(uParam0->f_3, "gamerTag", sParam1);
	}
	if (_databinding_is_data_id_valid(uParam0->f_5))
	{
		_databinding_write_data_string(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = _databinding_add_data_string(uParam0->f_3, "teamName", sParam2);
	}
	if (_databinding_is_data_id_valid(uParam0->f_12))
	{
		_databinding_write_data_int(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = _databinding_add_data_int(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[0])))
	{
		_databinding_write_data_string(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = _databinding_add_data_string(uParam0->f_3, "info0", sParam3);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[1])))
	{
		_databinding_write_data_string(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = _databinding_add_data_string(uParam0->f_3, "info1", sParam4);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[2])))
	{
		_databinding_write_data_string(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = _databinding_add_data_string(uParam0->f_3, "info2", sParam5);
	}
	if (_databinding_is_data_id_valid(&(uParam0->f_6[3])))
	{
		_databinding_write_data_string(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = _databinding_add_data_string(uParam0->f_3, "info3", sParam6);
	}
}

void func_1467()
{
	if (is_bit_set(Local_1685[iLocal_71]->f_2, 17))
	{
		clear_bit(&(Local_1685[iLocal_71]->f_2), 17);
	}
	func_1966();
}

void func_1468()
{
	if (is_bit_set(Local_1685[iLocal_71]->f_2, 16))
	{
		_set_blip_flash_style(get_main_player_blip_id(), -1203075151);
		clear_bit(&iLocal_57, 12);
		func_154(1);
		clear_bit(&(Local_1685[iLocal_71]->f_2), 16);
	}
}

void func_1469(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_1967(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_1294(32768) && func_1968(1108822547, 8)) && func_1969(10, iParam3))
	{
		func_1970(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_1971(iVar2, 1);
		if (func_1968(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_1969(iVar0, iParam3))
		{
		}
		else if ((func_1968(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_1968(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_1972(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_1973(iVar2, 1, 6);
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
					func_1972(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_1968(iVar2, 1))
					{
						func_1766(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_1974(uParam0->f_1[iVar0], iParam1);
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

bool func_1470(int iParam0)
{
	iVar0 = func_1975(iParam0);
	if (((iVar0 > 10 && iVar0 <= 22) || iVar0 == 5) || iVar0 == 1)
	{
		return true;
	}
	return false;
}

bool func_1471()
{
	if (is_bit_set(iLocal_58, 21))
	{
		return false;
	}
	if (is_bit_set(Local_5688.f_24.f_5, 5) && !is_bit_set(Global_2359296->f_160, 15))
	{
		if (!func_1976())
		{
			return false;
		}
	}
	if (is_bit_set(Global_3145858->f_49704[Local_1685[iLocal_71]->f_4]->f_6, 1))
	{
		return true;
	}
	if (is_bit_set(Local_5688.f_24.f_3, 15))
	{
		return true;
	}
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (!func_260() || iVar0 == -1)
	{
		iVar0 = 0;
	}
	if (is_bit_set(&(Global_2359296->f_162[iVar0]), 1))
	{
		return true;
	}
	return false;
}

void func_1472()
{
	_0x6d85126f6ccf02c9(10, 7, 1);
	_0xdd1232b332cbb9e7(10, 1, 0);
	if (func_1610(iVar15639))
	{
		func_1046(1);
	}
}

void func_1473()
{
	func_1977(iLocal_81, Global_2359296->f_4181);
}

void func_1474(int iParam0)
{
	iVar0 = _0xda37a053c1522f5d(iParam0, 1, 0, 1);
	if (get_ammo_in_ped_weapon(iParam0, iVar0) != 0)
	{
		return;
	}
	iVar1 = get_max_ammo_in_clip(iParam0, iVar0, true);
	_add_ammo_to_ped(iParam0, iVar0, iVar1, 752097756);
	Var2 = { func_1978(0) };
	Var6 = { func_1979(iVar0, Var2, -1591664384, 0) };
	_0xdf4a3404d022adde(iParam0, &Var6, -1);
}

bool func_1475(int iParam0)
{
	if (Global_3145858->f_60002 == 0 || Global_3145858->f_60002 == 3)
	{
		return true;
	}
	if (is_bit_set(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1476(int iParam0)
{
	if (Global_3145858->f_60002 == 0 || Global_3145858->f_60002 == 3)
	{
		return true;
	}
	if (is_bit_set(iParam0, 3))
	{
		return false;
	}
	return true;
}

void func_1477(var uParam0, int iParam1)
{
	_0x644ccb76a76cfbd6(0, iParam1, false, false, 0, 1);
	if (func_1980())
	{
		bVar0 = true;
		if (Global_3145858->f_60002 == 3)
		{
			bVar0 = false;
			_0x644ccb76a76cfbd6(1, 0, false, false, 0, 1);
		}
		func_1981(uParam0, bVar0);
	}
	else
	{
		_0x644ccb76a76cfbd6(1, 0, false, false, 0, 1);
		_0xc395355843be134b(*uParam0);
	}
	func_1982(uParam0);
	func_1474(*uParam0);
}

void func_1478(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0->f_8;
	if (iVar0 == -1)
	{
		return;
	}
	Var10.f_7 = 752097756;
	Var10.f_8 = 1056964608;
	Var10.f_9 = 1065353216;
	if (iVar0 == -2)
	{
		Var1 = -1569615261;
		return;
	}
	iVar26 = 0;
	while (iVar26 < 16)
	{
		Var1 = &Global_3145858->f_57980[iVar0]->f_3[iVar26];
		Var1.f_1 = Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_3;
		if (Var1 == 0)
		{
		}
		else if (is_bit_set(Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_4, 0) || (func_1983(Var1, func_530()) && bParam1))
		{
		}
		else
		{
			if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 > 0)
			{
				_0xe133c1ec5300f740(uParam0->f_1, _get_ammo_type_for_weapon(Var1), Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2);
			}
			if (func_469())
			{
				if (Global_2359296->f_6686 != 0 && &Global_3145858->f_57980[iVar0]->f_3[iVar26] == Global_2359296->f_6686)
				{
					if (uParam0->f_10 != -1)
					{
						Var1.f_1 = uParam0->f_10;
					}
				}
			}
			if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 == 0)
			{
				func_1984(uParam0, Var1, &(Var1.f_1));
			}
			if (Var1.f_1 == 0)
			{
			}
			else if (Var1.f_1 == -1)
			{
				if (func_491(Var1))
				{
					set_ped_infinite_ammo(*uParam0, true, Var1);
				}
			}
			else if (Var1.f_1 == -2)
			{
				get_max_ammo(*uParam0, &(Var1.f_1), Var1);
				if (Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2 > 0)
				{
					Var1.f_1 = Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_2;
				}
			}
			bVar27 = Global_3145858->f_57980[iVar0]->f_100 == Var1;
			if (bParam2)
			{
				if (is_bit_set(uParam0->f_12, 1))
				{
					bVar27 = false;
					if (uParam0->f_18.f_8 == Var1)
					{
						bVar27 = true;
					}
				}
			}
			iVar28 = _get_ammo_type_for_weapon(Var1);
			Var10.f_4 = Var1;
			Var10.f_12 = 1;
			bVar33 = false;
			if (bParam1)
			{
				iVar34 = 0;
				if (is_bit_set(Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_4, 1))
				{
					iVar34 = get_weapontype_group(Var1);
				}
				Var35 = { func_530() };
				if (func_1985(&Var1, &Var35, iVar34))
				{
					bVar33 = true;
					Var29 = { Var35 };
				}
			}
			_0xcc9c4393523833e2(*uParam0, Var1, iVar28);
			if (!bVar33)
			{
				_give_weapon_to_ped(*uParam0, &Var10, &Var4);
				Var29 = { Var4 };
			}
			if (&Global_1051130 == Var1 || &Global_1051131 == Var1)
			{
				if (&Global_1051130 == Var1)
				{
					Var39 = { Var29 };
				}
				if (&Global_1051131 == Var1)
				{
					Var43 = { Var29 };
				}
				_0xec1f85da51d3d6c4(*uParam0, &Var39, &Var43);
			}
			func_1986(iVar28, Var1.f_1, 752097756);
			func_499(Var1, Global_3145858->f_57980[iVar0]->f_3[iVar26]->f_1, &(uParam0->f_1));
			Var47 = { func_1978(0) };
			Var29 = { func_1979(Var1, Var47, -1591664384, 0) };
			if (_0xb881ca836cc4b6d4(&Var29))
			{
				_0xdf4a3404d022adde(*uParam0, &Var29, -1);
			}
			_0x5c2e5e3caeeb1f58(uParam0->f_1, Var1, is_bit_set(Global_3145858->f_57980[iVar0]->f_104, iVar26));
			if (func_1481(uParam0->f_18.f_10))
			{
				_0xcc9c4393523833e2(*uParam0, Var1, uParam0->f_18.f_10);
			}
			else
			{
				_0xcc9c4393523833e2(*uParam0, Var1, iVar28);
			}
			if (bVar27)
			{
				_0xec516fe805d2cb2d(*uParam0);
				set_current_ped_weapon(*uParam0, Var1, true, 0, false, false);
				_0x0a2ab7b7abc055f4(*uParam0);
			}
		}
		iVar26++;
	}
}

void func_1479(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		if (func_1987(&(Global_3145858->f_57852[iParam0]->f_4[iVar2])))
		{
			Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
			Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
			func_1988(Var0, Var0.f_1, 752097756);
		}
		iVar2++;
	}
}

void func_1480(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (is_bit_set(uParam0->f_12, 1) && Global_3145858->f_60002 != 1)
		{
			if (_0xb881ca836cc4b6d4(&(uParam0->f_18)))
			{
				if (_0x4823f13a21f51964(*uParam0, &(uParam0->f_18)) > 0)
				{
					bVar0 = true;
				}
			}
			if (!bVar0 || !func_1983(0, uParam0->f_18))
			{
				get_current_ped_weapon(*uParam0, &iVar1, true, 0, false);
				if (is_bit_set(uParam0->f_12, 5) && iVar1 == -1569615261)
				{
					set_current_ped_weapon(*uParam0, func_1989(uParam0), true, 0, false, false);
				}
				return;
			}
			else
			{
				_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18), 1, 0, 0, 0);
			}
			if (!_0xb881ca836cc4b6d4(&(uParam0->f_18.f_4)))
			{
				return;
			}
			_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18.f_4), 1, 1, 0, 0);
			return;
		}
	}
	else if (is_bit_set(uParam0->f_12, 1) && Global_3145858->f_60002 != 1)
	{
		bVar2 = _0xb881ca836cc4b6d4(&(uParam0->f_18));
		bVar3 = _0xb881ca836cc4b6d4(&(uParam0->f_18));
		if (bVar2 || bVar3)
		{
			if (bVar2 && func_1983(0, uParam0->f_18))
			{
				_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18), 1, 0, 0, 0);
			}
			if (!bVar3)
			{
				return;
			}
			_0x12fb95fe3d579238(*uParam0, &(uParam0->f_18.f_4), 1, 1, 0, 0);
			return;
		}
	}
	if (!bParam1)
	{
		if (func_1980())
		{
			if ((Global_3145858->f_60002 == 3 || Global_3145858->f_60002 == 0) || (Global_3145858->f_60002 == 2 && bParam2))
			{
				if (Global_1296679->f_147)
				{
					return;
				}
				bVar4 = false;
				bVar5 = false;
				if (_0xb881ca836cc4b6d4(&(Global_1296843->f_4)))
				{
					if (func_1990(Global_1296843->f_4))
					{
						Var6.f_9 = -1591664384;
						if (_0x9700e8efc4ab9089(3, &(Global_1296843->f_4), &Var6, true))
						{
							if (Var6.f_4 != -1569615261)
							{
								_0x12fb95fe3d579238(*uParam0, &(Global_1296843->f_4), 1, 0, 0, 0);
								bVar4 = true;
								bVar5 = true;
							}
						}
					}
				}
				if (_0xb881ca836cc4b6d4(Global_1296843) && func_911(-1185145312, 1, 0, 0) > 0)
				{
					if (func_1990(*Global_1296843))
					{
						Var20.f_9 = -1591664384;
						if (_0x9700e8efc4ab9089(3, Global_1296843, &Var20, true))
						{
							if (Var20.f_4 != -1569615261)
							{
								iVar34 = 1;
								if (bVar5)
								{
									iVar34 = 1;
								}
								else
								{
									iVar34 = 0;
								}
								_0x12fb95fe3d579238(*uParam0, Global_1296843, 1, iVar34, 0, 0);
								bVar4 = true;
							}
						}
					}
				}
				if (bVar4)
				{
					return;
				}
				if ((_0xb881ca836cc4b6d4(&(Global_1296679->f_4)) && _0xb881ca836cc4b6d4(Global_1296679)) && func_911(-1185145312, 1, 0, 0) > 0)
				{
					Var35.f_9 = -1591664384;
					Var49.f_9 = -1591664384;
					bVar63 = true;
					if (!_0x9700e8efc4ab9089(3, &(Global_1296679->f_4), &Var35, true))
					{
						bVar63 = false;
					}
					if (!_0x9700e8efc4ab9089(3, Global_1296679, &Var49, true))
					{
						bVar63 = false;
					}
					if (bVar63)
					{
						_0x12fb95fe3d579238(*uParam0, &(Global_1296679->f_4), 1, 0, 0, 0);
						_0x12fb95fe3d579238(*uParam0, Global_1296679, 1, 1, 0, 0);
						bVar4 = true;
					}
				}
				if (bVar4)
				{
					return;
				}
				if (is_bit_set(uParam0->f_12, 5))
				{
					iVar64 = get_best_ped_weapon(*uParam0, false, true);
					if (!_is_weapon_lasso(iVar64))
					{
						set_current_ped_weapon(*uParam0, iVar64, true, 0, false, false);
					}
				}
				return;
			}
		}
		else if (Global_3145858->f_60002 != 1)
		{
			Var65 = { func_1991(0, 3) };
			if (_0xb881ca836cc4b6d4(&Var65))
			{
				Var69.f_9 = -1591664384;
				if (_0x9700e8efc4ab9089(3, &Var65, &Var69, true))
				{
					_0x12fb95fe3d579238(*uParam0, &Var65, 1, 0, 0, 0);
					return;
				}
			}
		}
	}
	if (is_bit_set(uParam0->f_12, 5))
	{
		get_current_ped_weapon(*uParam0, &iVar83, true, 0, false);
		if (!is_bit_set(uParam0->f_12, 1) || (is_bit_set(uParam0->f_12, 1) && iVar83 == -1569615261))
		{
			iVar84 = get_best_ped_weapon(*uParam0, false, true);
			if (!_is_weapon_lasso(iVar84))
			{
				set_current_ped_weapon(*uParam0, iVar84, true, 0, false, false);
			}
		}
	}
}

bool func_1481(int iParam0)
{
	if (func_31(60))
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_1482(var uParam0)
{
	if (uParam0->f_18.f_22 != 0 || uParam0->f_18.f_23 != 0)
	{
		if (func_1983(uParam0->f_18.f_22, func_530()))
		{
			Var16 = { func_1978(0) };
			Var8 = { func_1979(uParam0->f_18.f_22, Var16, -1591664384, 0) };
		}
		if (func_1983(uParam0->f_18.f_23, func_530()))
		{
			Var20 = { func_1978(0) };
			Var12 = { func_1979(uParam0->f_18.f_23, Var20, -1591664384, 0) };
		}
		_0xec1f85da51d3d6c4(*uParam0, &Var8, &Var12);
		return;
	}
	_0xb7e52a058b07c7e2(*uParam0, &Var0, &Var4);
	if (_0xb881ca836cc4b6d4(&Var0) || _0xb881ca836cc4b6d4(&Var4))
	{
		if (func_1983(0, Var0))
		{
			bVar24 = true;
		}
		if (func_1983(0, Var4))
		{
			bVar24 = true;
		}
		if (bVar24)
		{
			return;
		}
	}
	Var0 = { func_530() };
	Var4 = { func_530() };
	_0x7b98500614c8e8b8(*uParam0, 0, &Var0);
	_0xec1f85da51d3d6c4(*uParam0, &Var0, &Var4);
}

bool func_1483(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

void func_1484(int iParam0)
{
	if (Global_1940144->f_16 == iParam0 && !Global_1940144->f_17)
	{
		return;
	}
	Global_1940144->f_16 = iParam0;
	Global_1940144->f_17 = 0;
	Var3.f_9 = -1591664384;
	if (func_909("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		Var17.f_3 = -1;
		Var17.f_12 = 4;
		Var17.f_17 = 4;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_910(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_1992(Var3.f_4))
			{
			}
			else if (!func_1848(Var3.f_4, 1194584906) && _0x0c093c1787f18519(Var3.f_4, &Var17))
			{
				_0x227522fd59ddb7e8(func_1292(0), &Var3, iParam0);
			}
			iVar2++;
		}
		func_912(iVar0);
	}
}

int func_1485(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 738282662 || iParam1 == -1888453608)
	{
		return func_1993(iParam2, iParam1);
	}
	switch (iParam0)
	{
		case -1774451313:
		case -1448818329:
		case -618550132:
		case -295349450:
		case -164645981:
		case 165751297:
		case 680856689:
		case 710736342:
		case 1742487518:
		case 1953585457:
			return 501323084;
		case -2055158210:
		case 34411519:
		case 127400949:
		case 379542007:
		case 1529685685:
		case 1681219929:
		case 1701864918:
		case 1950175060:
		case 2075992054:
			return -1052367340;
		case -1783478894:
		case -1471716628:
		case -1330115686:
		case -570967010:
		case -183018591:
		case 218444191:
		case 1676963302:
		case 1905553950:
		case 1999408598:
			return -995686252;
		case -506285289:
		case 1402226560:
			return -1634577211;
		case -1878508229:
		case 392538360:
		case 834124286:
		case 1674213418:
		case 1838922096:
		case 1845102363:
			return -1796682476;
		case -2002235300:
		case 115405099:
		case 954660191:
			return -132369645;
		case -1504859554:
			return 1125369187;
		case -577893115:
		case 1885857703:
			return 526225529;
		case -764310200:
			return 908365526;
		case -1511427369:
		case 2133046983:
			return 1480984695;
		case 204375141:
		case 230530039:
			return 1451797164;
		case 1698907612:
			return 1654787099;
		case -680302000:
		case 2055893578:
		default:
			break;
	}
	return 549686661;
}

char* func_1486(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == 738282662 || iParam1 == -1888453608)
	{
		return func_1994(iParam2, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 165751297:
			return "UGC_BLIP_HATCHE";
		case -618550132:
			return "UGC_BLIP_KNIFE";
		case -164645981:
			return "UGC_BLIP_LANTER";
		case 680856689:
			return "UGC_BLIP_MACHET";
		case -1774451313:
			return "UGC_BLIP_MACHET";
		case 1953585457:
			return "UGC_BLIP_MACHET";
		case 1742487518:
			return "UGC_BLIP_TORCH";
		case -2055158210:
			return "UGC_BLIP_MAUSER";
		case 1701864918:
			return "UGC_BLIP_SEMIAU";
		case 34411519:
			return "UGC_BLIP_VOLCAN";
		case 379542007:
			return "UGC_BLIP_CATTLE";
		case 127400949:
			return "UGC_BLIP_DOUACT";
		case 2075992054:
			return "UGC_BLIP_SCHOFI";
		case 1529685685:
			return "UGC_BLIP_LEMAT";
		case 1999408598:
			return "UGC_BLIP_BOLTAC";
		case 1676963302:
			return "UGC_BLIP_SPRFIE";
		case -570967010:
			return "UGC_BLIP_VARMIN";
		case -183018591:
			return "UGC_BLIP_CARBIN";
		case -1783478894:
			return "UGC_BLIP_HENRY";
		case -1471716628:
			return "UGC_BLIP_WINNY";
		case 1905553950:
			return "UGC_BLIP_EVANS";
		case 1402226560:
			return "UGC_BLIP_CARCAN";
		case -506285289:
			return "UGC_BLIP_ROLLBL";
		case 834124286:
			return "UGC_BLIP_PUMP";
		case 1845102363:
			return "UGC_BLIP_DOUBAR";
		case 1674213418:
			return "UGC_BLIP_REPEAT";
		case 392538360:
			return "UGC_BLIP_SAWOFF";
		case 1838922096:
			return "UGC_BLIP_SEMAUT";
		case -2002235300:
			return "UGC_BLIP_BOW";
		case 115405099:
			return "UGC_BLIP_BOW_IMPROVED";
		case -1504859554:
			return "UGC_BLIP_DYNAMI";
		case 1885857703:
			return "UGC_BLIP_MOLOTO";
		case -577893115:
			return "UGC_BLIP_MOLOTO";
		case -764310200:
			return "UGC_BLIP_THRKNI";
		case -1511427369:
			return "UGC_BLIP_TOMAHA";
		case 2133046983:
			return "UGC_BLIP_ATOMHA";
		case 204375141:
			return "UGC_BLIP_GINELI";
		case 230530039:
			return "UGC_BLIP_MEDICI";
		case 2055893578:
			return "UGC_BLIP_LASSO";
		case 1698907612:
			return "UGC_BLIP_MOONSHINE";
		default:
			break;
	}
	return "BLIP_MP_WEAPON";
}

void func_1487(int iParam0, int iParam1, bool bParam2)
{
	func_143(iParam0);
	if (Global_2359296->f_71 != 0)
	{
		func_140(iParam0);
	}
	if (Global_2359296->f_72 != 0)
	{
		func_143(iParam0);
	}
	if (bParam2)
	{
		func_974(iParam0, func_753(Local_1685[iParam1]->f_3));
	}
	else
	{
		func_974(iParam0, func_751());
	}
}

int func_1488()
{
	if (_get_number_of_references_of_script_with_name_hash(-1307215916) > 0 || _get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		return -504335712;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-947293544) > 0 || _get_number_of_references_of_script_with_name_hash(-814065802) > 0)
	{
		return -933924539;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-2041850076) > 0 || _get_number_of_references_of_script_with_name_hash(-701235215) > 0)
	{
		return 395262693;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-1909886917) > 0)
	{
		return -504335712;
	}
	return 371211549;
}

void func_1489(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 >= 8 || iParam2 < 0)
	{
		return;
	}
	if (is_bit_set(&(Global_3145858->f_60009[iParam2]), (0 + iParam0)) || iParam2 == iParam0)
	{
		func_1995(iParam0);
		*bParam1 = 1;
	}
	else
	{
		func_474(iParam0);
	}
}

void func_1490(float fParam0)
{
	if (Global_1071686->f_22961 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1071686->f_22961 = fParam0;
		}
	}
}

void func_1491()
{
	if (is_bit_set(iLocal_58, 11))
	{
		return;
	}
	if (!func_257(255))
	{
		return;
	}
	set_bit(&iLocal_58, 11);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_92[iVar0]->f_3)
		{
			func_575(Local_92[iVar0]->f_4, Local_1685[iVar0]->f_4);
		}
		iVar0++;
	}
}

void func_1492(var uParam0, int iParam1, int iParam2)
{
	iVar0 = iParam1;
	set_bit(&iVar1, iVar0);
	func_1181(uParam0, iVar1, iParam2);
}

void func_1493(int iParam0)
{
	_0x31010318ba9897ac(&(Global_1071686->f_28345), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_1809(iParam0))
	{
		func_1996(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1494(int iParam0)
{
	_0xd426e2e3288469d6(&(Global_1071686->f_28345), iParam0);
	_0x31010318ba9897ac(&(Global_1071686->f_28346), iParam0);
	_0xd426e2e3288469d6(&(Global_1071686->f_28347), iParam0);
	if (!func_1324(iParam0))
	{
		func_1803(iParam0);
	}
}

bool func_1495(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_2359296->f_4834 - 1))
	{
		iVar1 = -1;
		if (Global_2359296->f_4836[iVar0]->f_6 > 0)
		{
			iVar1 = Global_2359296->f_4836[iVar0]->f_6;
		}
		if (iVar1 != -1)
		{
			if (iParam0 < iVar1 && iParam1 >= iVar1)
			{
				return true;
			}
			if (iParam0 >= iVar1 && iParam1 < iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1496()
{
	if (Global_2359296->f_4834 <= 1)
	{
		return;
	}
	if (bLocal_75)
	{
		if (!Local_5688.f_2411)
		{
			func_1997();
		}
	}
	func_1998();
	if (Local_5688.f_2411)
	{
		return;
	}
	if (!func_1499())
	{
		if (does_blip_exist(iVar12816))
		{
			remove_blip(&iLocal_12818);
		}
		return;
	}
	vVar0 = { get_entity_coords(iLocal_80, true, false) };
	iVar3 = -1;
	fVar7 = 1E+09f;
	iVar9 = 0;
	while (iVar9 < Global_2359296->f_4834)
	{
		if (is_bit_set(Local_5688.f_2410, iVar9))
		{
		}
		else if (is_bit_set(Local_5688.f_2409, iVar9))
		{
		}
		else
		{
			if (is_bit_set(Local_5688.f_24.f_3, 30))
			{
				iVar8 = &iLocal_12144[iVar9];
			}
			else
			{
				iVar8 = &iLocal_12111[iVar9];
			}
			if (!_does_volume_exist(iVar8))
			{
			}
			else
			{
				fVar10 = vdist2(vVar0, _0xf70f00013a62f866(iVar8));
				if (fVar10 < fVar7)
				{
					fVar7 = fVar10;
					iVar3 = iVar9;
					vVar4 = { _0xf70f00013a62f866(iVar8) };
				}
			}
		}
		iVar9++;
	}
	if (!is_bit_set(Local_1685[iLocal_70]->f_2, 3))
	{
		if (iVar3 > -1 && !func_410(vVar4))
		{
			func_1999(vVar4);
		}
	}
	else
	{
		func_2000();
	}
}

void func_1497()
{
	if (bLocal_75)
	{
		func_2001();
	}
	func_2002();
}

void func_1498()
{
	if (bLocal_75)
	{
		func_2003();
	}
	if (Local_5688.f_2402 == iVar15627)
	{
		return;
	}
	if (_does_volume_exist(&(iLocal_12111[Local_5688.f_2402])))
	{
		iLocal_15629 = Local_5688.f_2402;
		func_2004();
	}
	else
	{
		iLocal_12111[Local_5688.f_2402] = func_1386(Global_2359296->f_4836[Local_5688.f_2402]->f_3, 0f, 0f, 0f);
	}
}

bool func_1499()
{
	if (func_38(iLocal_70))
	{
		return false;
	}
	if (is_bit_set(Local_1685[iLocal_70]->f_2, 0))
	{
		return false;
	}
	if (is_entity_dead(iLocal_80))
	{
		return false;
	}
	if (func_672(iLocal_78))
	{
		return false;
	}
	return true;
}

void func_1500()
{
	play_sound_frontend("OOB_start", "RDRO_Out_Of_Bounds_Sounds", true, 0);
}

bool func_1501(int iParam0)
{
	if (!func_2005(iParam0))
	{
		return false;
	}
	if (Global_2359296->f_4835 > 0 && Local_5688.f_2414 != -1)
	{
		if (!is_bit_set(Global_2359296->f_4836[iParam0]->f_13, Local_5688.f_2414))
		{
			return false;
		}
	}
	return true;
}

void func_1502(int iParam0)
{
	iVar0 = Global_2359296->f_4836[iParam0]->f_3;
	if (iVar0 < 0)
	{
		return;
	}
	bVar1 = (is_bit_set(Local_5688.f_24.f_3, 30) && !Local_5688.f_2411);
	if (func_586() && is_bit_set(Local_5688.f_24.f_2, 11))
	{
		vVar2 = { Global_3145858->f_34781[iVar0]->f_3.f_7 };
		vVar5 = { (vVar2.x / 2f), (vVar2.y / 2f), (vVar2.z / 2f) };
		if (Local_5688.f_872 > 2)
		{
			fVar8 = ((to_float(Local_5688.f_870) - 2f) / (to_float(Local_5688.f_872) - 2f));
		}
		else
		{
			fVar8 = 0f;
		}
		*vLocal_14353[iParam0] = { func_2006(vVar5, vVar2, fVar8) };
		if (!bVar1)
		{
			if (!func_268(*vLocal_14353[iParam0], *vLocal_14905[iParam0]))
			{
				_delete_volume(&(iLocal_12111[iParam0]));
				if (does_blip_exist(&(uLocal_12249[iParam0])))
				{
					remove_blip(uLocal_12249[iParam0]);
				}
			}
		}
		else if (!func_268(*vLocal_14353[iParam0], *vLocal_14905[iParam0]))
		{
			_delete_volume(iVar12174);
			if (does_blip_exist(iVar12244))
			{
				remove_blip(&uLocal_12247);
			}
		}
	}
	if (!bVar1)
	{
		if (!_does_volume_exist(&(iLocal_12111[iParam0])))
		{
			if (func_586() && is_bit_set(Local_5688.f_24.f_2, 11))
			{
				iLocal_12111[iParam0] = func_1386(iVar0, *vLocal_14353[iParam0]);
				*vLocal_14905[iParam0] = { *vLocal_14353[iParam0] };
			}
			else
			{
				iLocal_12111[iParam0] = func_1386(iVar0, 0f, 0f, 0f);
			}
		}
	}
	else if (!_does_volume_exist(iVar12174))
	{
		if (func_586() && is_bit_set(Local_5688.f_24.f_2, 11))
		{
			iLocal_12177 = func_2007(*vLocal_14353[iParam0]);
			*vLocal_14905[iParam0] = { *vLocal_14353[iParam0] };
		}
		else
		{
			iLocal_12177 = func_2007(0f, 0f, 0f);
		}
	}
	if (func_257(255) || !func_1499())
	{
		return;
	}
	if (_does_volume_exist(&(iLocal_12111[iParam0])))
	{
		if (_0xf256a75210c5c0eb(&(iLocal_12111[iParam0]), get_entity_coords(iLocal_81, false, false)))
		{
			set_bit(&(Local_1685[iLocal_71]->f_2), 3);
		}
	}
	if (bVar1)
	{
		if (_0xf256a75210c5c0eb(iVar12174, get_entity_coords(iLocal_81, false, false)))
		{
			set_bit(&(Local_1685[iLocal_71]->f_2), 3);
		}
	}
}

int func_1503()
{
	iVar0 = Global_2359296->f_6577 * 1000;
	if (func_168() && Global_2359296->f_6578 > -1)
	{
		iVar0 = Global_2359296->f_6578 * 1000;
	}
	iVar1 = (iVar0 - func_325(&(Local_1685[iLocal_70]->f_39), 0, 0)) + 1000;
	iVar2 = func_738();
	if (iVar2 > 0)
	{
		iVar3 = (iVar2 - func_742());
		if (iVar1 > iVar3)
		{
			iVar1 = iVar3;
		}
	}
	return iVar1;
}

void func_1504()
{
	if (is_bit_set(Local_1685[iLocal_70]->f_2, 10) && !bLocal_73)
	{
		return;
	}
	set_player_invincible(iLocal_79, false);
	if (_0x083d497d57b7400f(iLocal_81))
	{
		freeze_entity_position(iLocal_81, false);
	}
	func_1123();
	func_1515(iLocal_81, 0, 0, 0);
	if (!is_bit_set(Local_1685[iLocal_71]->f_2, 10))
	{
		func_2008();
		set_bit(&(Local_1685[iLocal_71]->f_2), 10);
	}
}

void func_1505()
{
	if (func_785())
	{
		if (!does_blip_exist(&(uLocal_12249[iVar15627])))
		{
			if (Global_2359296->f_69 != 0)
			{
				uLocal_12249[iVar15627] = _0xa6ef0c54a3443e70(Global_2359296->f_69, &(iLocal_12111[iVar15627]));
			}
			else
			{
				uLocal_12249[iVar15627] = _0xa6ef0c54a3443e70(408396114, &(iLocal_12111[iVar15627]));
			}
			_blip_set_modifier(&(uLocal_12249[iVar15627]), -1568584505);
		}
	}
	else if (!is_bit_set(Local_5688.f_24.f_3, 30))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!_does_volume_exist(&(iLocal_12111[iVar0])))
			{
			}
			else if (!does_blip_exist(&(uLocal_12249[iVar0])))
			{
				if (Global_2359296->f_69 != 0)
				{
					uLocal_12249[iVar0] = _0xa6ef0c54a3443e70(Global_2359296->f_69, &(iLocal_12111[iVar0]));
				}
				else
				{
					uLocal_12249[iVar0] = _0xa6ef0c54a3443e70(408396114, &(iLocal_12111[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_2009(0);
	}
}

var func_1506()
{
	if (Local_5688.f_2411)
	{
		return &(iLocal_12111[Local_5688.f_2402]);
	}
	fVar0 = 0f;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < Global_2359296->f_4834)
	{
		if (((Global_2359296->f_4836[iVar2]->f_3 == -1 || func_410(func_2010(Global_2359296->f_4836[iVar2]->f_3))) || !func_1501(iVar2)) || (!_does_volume_exist(&(iLocal_12144[iVar2])) && is_bit_set(Local_5688.f_24.f_3, 30)))
		{
		}
		else if (Global_3145858->f_34781[Global_2359296->f_4836[iVar2]->f_3]->f_3.f_7 > fVar0)
		{
			fVar0 = Global_3145858->f_34781[Global_2359296->f_4836[iVar2]->f_3]->f_3.f_7;
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (is_bit_set(Local_5688.f_24.f_3, 30))
	{
		return &(iLocal_12144[iVar1]);
	}
	return &(iLocal_12111[iVar1]);
}

void func_1507(var uParam0, int iParam1, var uParam2)
{
	func_2011(uParam0, -1329294210, iParam1, -1, "MC_TIMEOB", 0, 0, 109029619, 109029619);
	uParam0->f_896 = uParam2;
}

bool func_1508()
{
	vVar2 = { func_2012(iLocal_78) };
	iVar5 = 0;
	while (iVar5 < Global_2359296->f_4834)
	{
		if (is_bit_set(Local_5688.f_2410, iVar5))
		{
		}
		else if (is_bit_set(Local_5688.f_2409, iVar5))
		{
			if (_does_volume_exist(&(iLocal_12111[iVar5])) && _0xf256a75210c5c0eb(&(iLocal_12111[iVar5]), vVar2))
			{
				bVar0 = true;
			}
		}
		else
		{
			if (is_bit_set(Local_5688.f_24.f_3, 30))
			{
				iVar6 = &iLocal_12144[iVar5];
			}
			else
			{
				iVar6 = &iLocal_12111[iVar5];
			}
			if (!_does_volume_exist(iVar6))
			{
			}
			else if (_0xf256a75210c5c0eb(iVar6, vVar2))
			{
				bVar1 = true;
			}
		}
		iVar5++;
	}
	if (bVar0 && !bVar1)
	{
		return true;
	}
	return false;
}

void func_1509()
{
	if (is_bit_set(Local_5688.f_24.f_3, 7))
	{
		return;
	}
	if (func_785())
	{
		func_2013(iVar15627, 0);
		return;
	}
	if (!is_bit_set(Local_5688.f_24.f_3, 30))
	{
		func_2014(0);
	}
	else if (!Local_5688.f_2411)
	{
		func_2009(0);
	}
	else if (iVar15627 != -1)
	{
		func_2013(iVar15627, 0);
	}
}

void func_1510()
{
	if (&Global_2359296->f_6648[Local_5688.f_2402] <= 0)
	{
		return;
	}
	if (func_2015() > Global_2359296->f_6576 * 1000)
	{
		return;
	}
	if (iVar15627 + 1 >= Global_2359296->f_4834)
	{
		return;
	}
	iVar0 = (Global_2359296->f_4836[iVar15627 + 1])->f_3;
	iLocal_15643 = func_1386(iVar0, 0f, 0f, 0f);
	if (_does_volume_exist(iVar15641))
	{
		if (Global_2359296->f_69 != 0)
		{
			uLocal_15642 = _0xa6ef0c54a3443e70(Global_2359296->f_69, iVar15641);
		}
		else
		{
			uLocal_15642 = _0xa6ef0c54a3443e70(408396114, iVar15641);
		}
		if (does_blip_exist(&(uLocal_12249[iVar15627])))
		{
			_blip_set_modifier(&(uLocal_12249[iVar15627]), -1186550032);
		}
		set_bit(&iLocal_57, 13);
	}
	if (!is_bit_set(Local_5688.f_24.f_3, 25))
	{
		_0xdd1232b332cbb9e7(12, 1, 0);
		sVar1 = _create_var_string(2, "EXC_SHRINK", Global_2359296->f_6576);
		func_564(sVar1, 1105014447, 4000, 0, 0, 0, 1);
	}
}

void func_1511()
{
	if (!is_bit_set(Local_1685[iLocal_70]->f_2, 3))
	{
		iVar0 = func_2016();
		if (iVar0 > -1)
		{
			vVar1 = { _0xf70f00013a62f866(&(iLocal_12111[iVar0])) };
		}
		else
		{
			vVar1 = { 0f, 0f, 0f };
		}
		func_1999(vVar1);
	}
	else
	{
		func_2000();
	}
}

void func_1512()
{
	if (Local_1685[iLocal_71]->f_11 > 10)
	{
	}
}

bool func_1513(int iParam0)
{
	return Global_2359296->f_5286[iParam0]->f_3 == 1;
}

void func_1514(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_0x835f131e7dc8f97a(iParam1, fParam0, 0, 0);
}

void func_1515(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x083d497d57b7400f(Global_1296859->f_8))
	{
		return;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		if (bParam2)
		{
			disable_ped_pain_audio(Global_1296859->f_8, true);
		}
		if (bParam3)
		{
			set_ped_config_flag(Global_1296859->f_8, 243, true);
		}
		Var0 = player_ped_id();
		Var0.f_1 = iParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_2017(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), iParam0, iParam1);
	}
}

void func_1516()
{
	if (func_2018())
	{
		return;
	}
	func_2019();
	func_2020();
}

void func_1517()
{
	func_2021();
	func_2022();
}

void func_1518()
{
	if (is_bit_set(Local_5688.f_24.f_5, 1))
	{
		func_2023();
	}
	func_2024(iVar15767);
	iLocal_15769 = iVar15767 + 1;
	if (iVar15767 >= Global_3145858->f_36479)
	{
		iLocal_15769 = 0;
	}
	func_2025(iVar15768);
	iLocal_15770 = iVar15768 + 1;
	if (iVar15768 >= Global_3145858->f_13424)
	{
		iLocal_15770 = 0;
	}
	func_2026(iVar15769);
	iLocal_15771 = iVar15769 + 1;
	if (iVar15769 >= Global_3145858->f_18726)
	{
		iLocal_15771 = 0;
	}
	func_2027(iVar15770);
	iLocal_15772 = iVar15770 + 1;
	if (iVar15770 >= Global_2359296->f_458)
	{
		iLocal_15772 = 0;
	}
	func_2028(iVar15771);
	iLocal_15773 = iVar15771 + 1;
	if (iVar15771 >= Global_3145858->f_452)
	{
		iLocal_15773 = 0;
	}
	if (func_14() && func_30(0))
	{
		bVar1 = true;
	}
	iVar0 = iVar15774;
	while (iVar0 <= 31)
	{
		if (iVar2 >= 5)
		{
		}
		else
		{
			iLocal_15776 = iVar15774 + 1;
			iVar2++;
			if (bVar1 && iVar0 != iLocal_71)
			{
				func_2029(iVar0);
			}
			func_2030(iVar0);
			iVar0++;
		}
	}
	if (iVar15774 >= 31)
	{
		iLocal_15776 = 0;
	}
	func_2031();
	if (func_168() && func_592(iLocal_70) == 6)
	{
		func_2032();
	}
	func_2033();
	func_2034();
}

void func_1519()
{
	if (is_bit_set(Local_5688.f_24.f_5, 2))
	{
		func_2035();
		if (iLocal_71 > -1)
		{
			if (!func_168())
			{
				iVar0 = func_2036();
				if (Local_1685[iLocal_71]->f_12 != iVar0)
				{
					Local_1685[iLocal_71]->f_12 = iVar0;
					func_82();
				}
				if (Local_92[iLocal_71]->f_3)
				{
					if (Local_1685[iLocal_71]->f_12 >= 0)
					{
						iVar1 = func_2037(Local_1685[iLocal_71]->f_12);
						if (iVar1 != 0)
						{
							func_1348(iVar1);
						}
					}
				}
			}
			else
			{
				func_82();
			}
		}
	}
}

void func_1520()
{
	switch (iVar12902)
	{
		case 0:
			if (!func_2038(&Local_12907))
			{
				return;
			}
			if (!func_2039(&Local_12907))
			{
				return;
			}
			if (func_31(11))
			{
				set_bit(&(Local_13917.f_159), 5);
			}
			if (is_bit_set(Local_5688.f_24.f_5, 2))
			{
				set_bit(&(Local_13917.f_159), 8);
			}
			if (func_31(50))
			{
				set_bit(&(Local_13917.f_159), 20);
			}
			func_758();
			func_2040(1);
			break;
		case 1:
			if (!func_12())
			{
				return;
			}
			func_2041();
			func_2040(2);
			break;
		case 2:
			func_2042();
			func_2043(&Local_12907);
			break;
	}
}

void func_1521(var uParam0, var uParam1, int iParam2)
{
	if (!does_pickup_exist(uParam0[iParam2]))
	{
		func_854(uParam1, iParam2);
		return;
	}
	if (!does_pickup_object_exist(uParam0[iParam2]))
	{
		func_854(uParam1, iParam2);
		return;
	}
	iVar0 = get_pickup_object(uParam0[iParam2]);
	if (!does_entity_exist(iVar0))
	{
		func_854(uParam1, iParam2);
		return;
	}
	if (!func_559(uParam1, iParam2))
	{
		if (is_bit_set(Global_3145858->f_6823[iParam2]->f_13, 12) && !func_31(36))
		{
			_set_pickup_object_glow_enabled(iVar0, true);
		}
		if (!is_bit_set(Global_3145858->f_6823[iParam2]->f_13, 19) && !func_31(69))
		{
			set_pickup_particle_fx_spawn(uParam0[iParam2], "scr_mp_item_pickup_spawn");
			set_pickup_particle_fx_highlight(uParam0[iParam2], "scr_mp_item_pickup_highlight");
		}
		func_560(uParam1, iParam2);
	}
}

void func_1522(int iParam0, var uParam1, int* iParam2, var uParam3, int iParam4)
{
	if (Global_3145858->f_6823[iParam0]->f_23 == 0)
	{
		return;
	}
	if (func_559(uParam3, iParam0))
	{
		return;
	}
	if (does_blip_exist(*iParam2))
	{
		if (!func_2044(iParam0, iParam4))
		{
			func_2045(uParam1, iParam0);
			remove_blip(iParam2);
			func_560(uParam3, iParam0);
		}
	}
}

void func_1523(int iParam0, bool bParam1)
{
	if (!does_pickup_object_exist(&(uLocal_11396[iParam0])))
	{
		return;
	}
	vVar0 = { Global_3145858->f_6823[iParam0]->f_1 };
	if (Global_3145858->f_6823[iParam0]->f_12 != 0)
	{
		if (func_742() < Global_3145858->f_6823[iParam0]->f_12 * 1000)
		{
			return;
		}
	}
	iVar3 = Global_3145858->f_6823[iParam0]->f_17;
	if (&Local_5688.f_2684[iParam0] != 151)
	{
		iVar3 = &Local_5688.f_2684[iParam0];
	}
	if (iVar3 == 151)
	{
		return;
	}
	iVar4 = get_weapon_type_from_pickup_type(iVar3);
	if (iVar3 == -1888453608)
	{
		if (func_2046(iLocal_79))
		{
			bParam1 = false;
		}
	}
	else if (func_438(iVar4))
	{
		get_max_ammo(iLocal_81, &iVar5, iVar4);
		if (_0xf29a186ed428b552(iLocal_81, iVar4) && iVar5 == get_ammo_in_ped_weapon(iLocal_81, iVar4))
		{
			bParam1 = false;
		}
	}
	func_2047(iParam0, !bParam1);
	if (is_bit_set(Global_3145858->f_6823[iParam0]->f_13, 18) && iLocal_82 == -1)
	{
		if (_blip_set_modifier(&(iLocal_12315[iParam0]), -1948122265))
		{
		}
		func_2048(iParam0, 0);
	}
	else
	{
		if (Global_3145858->f_6823[iParam0]->f_20 == -1)
		{
			iVar6 = 10000;
		}
		else
		{
			iVar6 = Global_3145858->f_6823[iParam0]->f_20;
		}
		if (is_bit_set(Global_3145858->f_6823[iParam0]->f_13, 18))
		{
			if (Global_3145858->f_6823[iParam0]->f_20 == -1)
			{
				iVar6 = 4000;
			}
			if (_set_blip_flash_style(&(iLocal_12315[iParam0]), -1948122265))
			{
			}
		}
		if (iVar6 >= 0 || is_bit_set(Local_5688.f_24.f_5, 1))
		{
			vVar7 = { get_entity_coords(iLocal_80, true, false) };
			fVar10 = absf(get_distance_between_coords(vVar7, vVar0, false));
			if (iVar6 >= 0)
			{
				if (fVar10 > IntToFloat(iVar6))
				{
					if (does_blip_exist(&(iLocal_12315[iParam0])))
					{
						func_2048(iParam0, 1);
					}
				}
				else
				{
					func_2048(iParam0, 0);
				}
			}
			if (is_bit_set(Local_5688.f_24.f_5, 1))
			{
				func_2049(iParam0, fVar10);
			}
		}
	}
	if (!is_bit_set(Local_5688.f_24.f_4, 17))
	{
		if (!func_2050(vVar0))
		{
			func_2048(iParam0, 1);
		}
	}
	if (is_bit_set(Local_5688.f_24.f_5, 4) && is_bit_set(Local_5688.f_24.f_4, 1))
	{
		if (Local_92[iLocal_70]->f_7)
		{
			iVar11 = -1569615261;
			get_current_ped_weapon(iLocal_80, &iVar11, true, 0, false);
			if (func_580(iLocal_80))
			{
				iVar11 = func_581(func_622(iLocal_80));
			}
			iVar12 = round(func_987(iVar11));
			iVar13 = round(func_987(iVar4));
			if (iVar13 > iVar12)
			{
				func_2051(iParam0, 1);
			}
			else
			{
				func_2051(iParam0, 0);
			}
		}
	}
}

bool func_1524()
{
	if (bLocal_73)
	{
		func_623();
	}
	bVar0 = true;
	if (func_38(iLocal_71))
	{
		set_bit(&iLocal_57, 10);
		return false;
	}
	if (func_168())
	{
		if (func_592(iLocal_71) <= 1)
		{
			return false;
		}
		if (!is_bit_set(Local_1685[iLocal_71]->f_2, 21))
		{
			func_2052();
			if ((func_586() && !bLocal_73) && !is_bit_set(iLocal_57, 21))
			{
				if (!func_2053())
				{
					func_92(1);
					set_bit(&iLocal_57, 21);
				}
			}
			return false;
		}
		else
		{
			set_bit(&iLocal_57, 21);
			func_1467();
			return true;
		}
	}
	else if (func_586() && !func_30(25))
	{
		bVar0 = false;
		if (!bLocal_73 && !is_bit_set(iLocal_57, 21))
		{
			if (!func_2053())
			{
				func_92(1);
				set_bit(&iLocal_57, 21);
			}
		}
	}
	else if ((func_2054() != -1 && func_2054() <= 0) && !func_30(25))
	{
		bVar0 = false;
	}
	else if (is_bit_set(Local_1685[iLocal_71]->f_2, 17))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		if (!func_14())
		{
			if (!is_bit_set(iLocal_57, 21))
			{
				func_2055();
			}
		}
		else if (func_2056())
		{
			Global_2892896->f_9 = 1;
			func_2057();
		}
	}
	else
	{
		func_1966();
	}
	return bVar0;
}

void func_1525()
{
	func_1044();
	func_1072(0);
	func_685();
	Var0.f_5 = 255;
	Var0.f_1 = Local_1685[iLocal_71]->f_3;
	func_679(521265402, &Var0, 0);
	func_956(Local_1685[iLocal_71]->f_4);
}

void func_1526(int iParam0)
{
	if (!Local_92[iParam0]->f_3)
	{
		return;
	}
	if (Local_1685[iParam0]->f_50 != -1 && !func_559(&(Local_5688.f_1747), Local_1685[iParam0]->f_50))
	{
		if (!func_559(&(Local_1685[iParam0]->f_51), Local_1685[iParam0]->f_50))
		{
			if (&Local_5688.f_1619[Local_1685[iParam0]->f_50] == func_394())
			{
				Local_5688.f_1619[Local_1685[iParam0]->f_50] = Local_92[iParam0]->f_2;
			}
		}
		else if (&Local_5688.f_1619[Local_1685[iParam0]->f_50] == Local_92[iParam0]->f_2)
		{
			Local_5688.f_1619[Local_1685[iParam0]->f_50] = func_394();
		}
	}
	if (is_bit_set(Local_5688.f_41, 22))
	{
		func_2058(iParam0);
	}
}

void func_1527(int iParam0)
{
	if (func_261() >= 3)
	{
		return;
	}
	if (!func_2059(iParam0))
	{
		if (func_2060(iParam0))
		{
			if (func_2061(iParam0) || func_2062(iParam0))
			{
				if (func_2063(iParam0))
				{
					func_2064(iParam0);
				}
				iVar1 = func_558(0, Local_1685[iLocal_70]->f_3);
				if (Global_2359296->f_6762[iParam0]->f_44 == 0 || is_bit_set(Global_2359296->f_6762[iParam0]->f_44, iVar1))
				{
					bVar0 = true;
				}
			}
			if (func_2065(iParam0))
			{
				bVar0 = true;
			}
		}
		else if (func_2065(iParam0) || func_2062(iParam0))
		{
			bVar0 = true;
		}
	}
	else
	{
		func_358(Local_14626[iParam0]);
		if (func_345(Local_14765[iParam0]))
		{
			func_2066(iParam0);
		}
		if (func_2067(iParam0))
		{
			func_854(&uLocal_14618, iParam0);
			func_854(&uLocal_14598, iParam0);
			func_854(&uLocal_14614, iParam0);
			func_358(Local_14765[iParam0]);
		}
	}
	if (bVar0)
	{
		func_2068(iParam0);
	}
	else
	{
		func_2069(iParam0);
	}
	if (bLocal_75)
	{
		func_2070(iParam0);
	}
}

void func_1528()
{
	if (is_bit_set(&Global_1051132, 0) || is_bit_set(&Global_1051132, 1))
	{
		clear_bit(Global_1051132, 0);
		clear_bit(Global_1051132, 1);
	}
}

void func_1529()
{
	if (!func_31(31))
	{
		func_2071(250);
	}
}

void func_1530()
{
}

void func_1531()
{
	if (func_53(iLocal_79, 1024) || func_91(255))
	{
		if (iVar15775 != iLocal_70 && iLocal_70 != iLocal_71)
		{
			iLocal_15777 = iLocal_70;
			iVar0 = Local_1685[iLocal_71]->f_3;
			if ((!func_31(40) && !func_53(iLocal_79, 1024)) || (func_31(41) && func_53(iLocal_79, 1024)))
			{
				iVar0 = Local_1685[iLocal_70]->f_3;
			}
			func_1104(iVar0, 1, func_53(iLocal_79, 1024), 0);
		}
	}
}

void func_1532()
{
	if (func_257(255) || !bLocal_73)
	{
		return;
	}
	iVar0 = Local_1685[iLocal_71]->f_3;
	if (!func_260())
	{
		if (!is_bit_set(Local_5688.f_24.f_3, 3))
		{
			return;
		}
	}
	else if (!is_bit_set(&(Global_2359296->f_162[iVar0]), 0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iLocal_81, true, false) };
	iVar4 = 255;
	fVar5 = 1E+09f;
	iVar6 = func_394();
	bVar7 = is_bit_set(Local_5688.f_24.f_3, 6);
	iVar8 = 0;
	while (iVar8 <= 31)
	{
		if (iVar8 == iLocal_71)
		{
		}
		else if (!func_1571(iVar8, 0))
		{
		}
		else if (is_bit_set(Local_5688.f_24.f_3, 28))
		{
			if (Local_92[iVar8]->f_8)
			{
			}
			else if (!Local_92[iVar8]->f_7)
			{
			}
			else
			{
				fVar9 = vdist2(vVar1, func_2012(Local_92[iVar8]->f_4));
				if (fVar9 < fVar5)
				{
					iVar6 = Local_92[iVar8]->f_2;
					iVar4 = iVar8;
					fVar5 = fVar9;
				}
			}
			iVar8++;
			if (iVar6 != func_394())
			{
				fVar10 = func_2072();
				fVar11 = (fVar10 * fVar10);
				if (!func_345(Local_15564[iVar4]))
				{
					if (fVar5 < fVar11)
					{
						func_701(Local_15564[iVar4], 0, 0);
						clear_bit(&iLocal_57, 29);
					}
				}
				else if (fVar5 < fVar11)
				{
					if (!bVar7 || (bVar7 && !is_bit_set(iLocal_57, 29)))
					{
						if (is_bit_set(Local_5688.f_24.f_3, 5))
						{
							iVar12 = 1000;
						}
						else
						{
							iVar12 = round((10f * fVar5));
							iVar12 = func_1060(iVar12, 200, 1500);
						}
						if (func_760(Local_15564[iVar4], iVar12, 0))
						{
							set_pad_shake(0, 100, 200);
							func_324(Local_15564[iVar4], 0, 0);
							set_bit(&iLocal_57, 29);
						}
					}
				}
				else
				{
					func_358(Local_15564[iVar4]);
				}
			}
		}
	}
}

void func_1533()
{
	if (is_bit_set(iLocal_58, 5))
	{
		if (func_1439(iLocal_81))
		{
			clear_bit(&iLocal_58, 5);
		}
	}
	if (func_31(7))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_92[iVar0]->f_3 && network_is_player_active(Local_92[iVar0]->f_4))
			{
				_0xc3abcfbc7d74afa5(Local_92[iVar0]->f_6, 7, 1);
			}
			iVar0++;
		}
	}
}

void func_1534()
{
	if (!is_ped_injured(iLocal_81) && _0xb655db7582aec805(iLocal_81))
	{
		bLocal_76 = true;
	}
	else
	{
		bLocal_76 = false;
	}
	if (func_260())
	{
		iVar0 = Local_92[iLocal_71]->f_1;
		if (iVar0 < 0 || iVar0 >= 8)
		{
			iVar0 = 0;
		}
		if (is_bit_set(&(Global_2359296->f_74[iVar0]), 17))
		{
			if (bLocal_76)
			{
				if (func_2073(iVar0))
				{
					func_1515(iLocal_81, 0, 0, 0);
				}
			}
		}
	}
}

void func_1535(int iParam0)
{
	_0xc3abcfbc7d74afa5(iParam0, 0, 1);
}

void func_1536()
{
	func_387(&(Global_1071686->f_22973.f_3), 64);
}

void func_1537(int iParam0, bool bParam1, bool bParam2)
{
	if (is_ped_injured(iParam0))
	{
		return;
	}
	bVar0 = false;
	bVar1 = true;
	bVar2 = _0xcb690f680a3ea971(iParam0, 7);
	if (bParam1)
	{
		if (bVar2)
		{
			bVar1 = false;
			if (bVar0)
			{
			}
		}
	}
	if (bParam2)
	{
		if (_0xcb690f680a3ea971(iParam0, 1))
		{
			bVar1 = true;
			bVar2 = false;
			if (bVar0)
			{
			}
		}
	}
	_0xbe711b14a159e84f(iParam0, (!bVar2 && bVar1));
	if (bVar0)
	{
	}
}

void func_1538(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 > -1 && iParam2 < 18)
	{
		if (is_bit_set(Global_3145858->f_49704[iParam2]->f_7, 1))
		{
			return;
		}
	}
	if (!func_345(&(uParam1->f_12)))
	{
		func_324(&(uParam1->f_12), 0, 0);
	}
	if (func_325(&(uParam1->f_12), 0, 0) < 2000)
	{
		return;
	}
	if ((((is_ped_injured(iParam0) || _0x3bdfcf25b58b0415(iParam0)) || func_672(255)) || _0xb655db7582aec805(iParam0)) || func_2074(iParam0, 0))
	{
		return;
	}
	Var0 = { func_1991(0, 3) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		if (!_0x4c543d5dfcd2dafd(&Var0, uParam1))
		{
			*uParam1 = { Var0 };
			Var4.f_9 = -1591664384;
			if (_0x9700e8efc4ab9089(3, uParam1, &Var4, true))
			{
				uParam1->f_8 = Var4.f_4;
			}
		}
	}
	else
	{
		*uParam1 = { func_530() };
		uParam1->f_8 = 0;
	}
	Var18 = { func_1991(1, 3) };
	if (_0xb881ca836cc4b6d4(&Var18))
	{
		if (!_0x4c543d5dfcd2dafd(&Var18, &(uParam1->f_4)))
		{
			uParam1->f_4 = { Var18 };
			Var22.f_9 = -1591664384;
			if (_0x9700e8efc4ab9089(3, &(uParam1->f_4), &Var22, true))
			{
				uParam1->f_9 = Var22.f_4;
			}
		}
	}
	else
	{
		uParam1->f_4 = { func_530() };
		uParam1->f_9 = 0;
	}
	if (_0xb881ca836cc4b6d4(uParam1))
	{
		iVar36 = _0xaf9d167a5656d6a6(iParam0, uParam1);
		if (iVar36 != uParam1->f_10)
		{
			uParam1->f_10 = iVar36;
		}
	}
	if (_0xb881ca836cc4b6d4(&(uParam1->f_4)))
	{
		iVar37 = _0xaf9d167a5656d6a6(iParam0, &(uParam1->f_4));
		if (iVar37 != uParam1->f_11)
		{
			uParam1->f_11 = iVar37;
		}
	}
	func_324(&(uParam1->f_12), 0, 0);
}

void func_1539()
{
	func_2075();
}

void func_1540(int* iParam0, bool bParam1)
{
	bVar0 = true;
	if (bParam1 && !is_string_null_or_empty(&(Global_3145858->f_51862)))
	{
		func_718(iParam0, func_2076(Global_3145858->f_51862), 0);
		trigger_music_event(func_1604(Global_3145858->f_51862));
		bVar0 = func_2077(&(Global_3145858->f_51862));
	}
	else if (!is_string_null_or_empty(&(Global_3145858->f_51793)))
	{
		func_718(iParam0, func_2076(Global_3145858->f_51793), 0);
		trigger_music_event(func_1604(Global_3145858->f_51793));
		bVar0 = func_2077(&(Global_3145858->f_51793));
	}
	if (func_31(57))
	{
		set_audio_flag("MusicIgnoreDeathArrest", true);
	}
	if (func_31(72))
	{
		set_audio_flag("MusicIgnoreScreenFade", true);
	}
	func_2078(iParam0);
	if (bVar0)
	{
		set_bit(iParam0, 0);
	}
}

void func_1541()
{
	iVar0 = Local_1685[iLocal_71]->f_4;
	if (is_entity_dead(iLocal_81))
	{
		if (is_bit_set(iLocal_58, 18) && !is_bit_set(iLocal_58, 19))
		{
			disable_attribute_overpower(iLocal_81, 1);
			set_bit(&iLocal_58, 19);
		}
	}
	if (iVar0 < 0 || iVar0 >= 18)
	{
		return;
	}
	if (Global_3145858->f_49704[iVar0]->f_106 == 0 || is_bit_set(iLocal_58, 18))
	{
		return;
	}
	if (Local_1685[iLocal_71]->f_6 >= Global_3145858->f_49704[iVar0]->f_106)
	{
		func_1791(_get_ped_max_stamina(iLocal_81), iLocal_81);
		iVar1 = Global_3145858->f_49704[iVar0]->f_106.f_2 * 1000;
		enable_attribute_overpower(iLocal_81, 1, to_float(iVar1), 1);
		set_bit(&iLocal_58, 18);
	}
}

void func_1542()
{
	if (bLocal_75)
	{
		set_bit(&(Local_5688.f_41), 18);
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			func_2079(iVar0);
			func_2080(iVar0);
			iVar0++;
		}
	}
	func_2081();
	if (&Local_5688.f_2618[&Local_92[iLocal_70]] != 0)
	{
		func_2082();
		func_2083();
	}
}

void func_1543()
{
	if (bLocal_75)
	{
		func_2084();
	}
	func_2085();
}

void func_1544()
{
	if (!is_bit_set(Local_5688.f_24.f_5, 3))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_does_network_id_exist(&(Local_5688.f_407[iVar0])))
		{
			iVar1 = Local_5688.f_407[iVar0]->f_4;
			if (!Local_5688.f_407[iVar0]->f_3)
			{
				iVar2 = get_time_difference(Local_5688.f_407[iVar0]->f_1, get_network_time_accurate());
				if (iVar2 >= Global_2359296->f_6560 * 1000)
				{
					if (does_blip_exist(&(iLocal_12282[iVar0])))
					{
						remove_blip(iLocal_12282[iVar0]);
					}
					if (bLocal_75)
					{
						if (network_has_control_of_network_id(&(Local_5688.f_407[iVar0])))
						{
							func_129(Local_5688.f_407[iVar0], 0);
						}
						else
						{
							Local_5688.f_407[iVar0]->f_3 = 1;
							network_request_control_of_network_id(&(Local_5688.f_407[iVar0]));
						}
					}
				}
				else
				{
					fVar3 = (1f - (to_float(iVar2) / to_float(Global_2359296->f_6560 * 1000)));
					iVar4 = net_to_obj(&(Local_5688.f_407[iVar0]));
					vVar5 = { get_entity_coords(iVar4, true, false) };
					if (get_player_team(iLocal_79) == Local_5688.f_407[iVar0]->f_2)
					{
						iVar8 = round((80f * fVar3));
						if (!does_blip_exist(&(iLocal_12282[iVar0])))
						{
							iLocal_12282[iVar0] = _blip_add_for_coord(-2086635932, vVar5);
						}
					}
					else
					{
						iVar8 = round((60f * fVar3));
						if (!does_blip_exist(&(iLocal_12282[iVar0])))
						{
							iLocal_12282[iVar0] = _blip_add_for_coord(1877557666, vVar5);
						}
					}
					_draw_marker(-1795314153, vVar5, 0f, 0f, 0f, 0f, 0f, 0f, 0.4f, 0.4f, 1.25f, 255, 255, 0, iVar8, false, false, 2, false, 0, 0, false);
					if (bLocal_75)
					{
						iVar9 = get_player_ped(iVar1);
						iVar10 = int_to_playerindex(get_nearest_player_to_entity(iVar4, iVar9, 3));
						iVar11 = -1;
						if (Local_5688.f_857 > 1)
						{
							iVar12 = network_get_participant_index(iVar1);
							if (iVar12 >= 0 && iVar12 < 32)
							{
								iVar11 = Local_92[iVar12]->f_1;
							}
						}
						if (func_255(iVar10))
						{
							iVar13 = network_get_participant_index(iVar10);
							if (iVar13 >= 0 && iVar13 < 32)
							{
								if (iVar11 == -1 || iVar11 != Local_92[iVar13]->f_1)
								{
									if (!is_ped_dead_or_dying(Local_92[iVar13]->f_6, true))
									{
										vVar14 = { get_entity_coords(Local_92[iVar13]->f_6, true, false) };
										if (vdist2(vVar5, vVar14) < 4f)
										{
											iVar18 = func_1060(round((10f * fVar3)), 1, 10);
											if (Local_92[iVar13]->f_1 == Local_5688.f_407[iVar0]->f_2)
											{
												iVar17 = 1;
												if (Local_5688.f_857 > 1)
												{
													Local_5688.f_876[Local_5688.f_407[iVar0]->f_2] = (&Local_5688.f_876[Local_5688.f_407[iVar0]->f_2] + iVar18);
												}
											}
											func_2086(iVar13, iVar18, iVar17);
											if (does_blip_exist(&(iLocal_12282[iVar0])))
											{
												remove_blip(iLocal_12282[iVar0]);
											}
											if (network_has_control_of_entity(iVar4))
											{
												func_129(Local_5688.f_407[iVar0], 0);
											}
											else
											{
												Local_5688.f_407[iVar0]->f_3 = 1;
												network_request_control_of_entity(iVar4);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(&(iLocal_12282[iVar0])))
				{
					remove_blip(iLocal_12282[iVar0]);
				}
				if (bLocal_75)
				{
					if (network_has_control_of_network_id(&(Local_5688.f_407[iVar0])))
					{
						func_129(Local_5688.f_407[iVar0], 0);
						Local_5688.f_407[iVar0]->f_3 = 0;
					}
					else
					{
						network_request_control_of_network_id(&(Local_5688.f_407[iVar0]));
					}
				}
			}
		}
		else if (does_blip_exist(&(iLocal_12282[iVar0])))
		{
			remove_blip(iLocal_12282[iVar0]);
		}
		iVar0++;
	}
}

void func_1545(struct<2> Param0)
{
	bVar0 = func_168();
	func_2087(Param0, bVar0);
	if (bVar0)
	{
		return;
	}
	if (bLocal_75)
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			func_2088(iVar1);
			iVar1++;
		}
	}
	func_2089();
	func_2090();
	func_2091();
	func_2092();
}

void func_1546()
{
	if (iLocal_70 > -1 && iLocal_70 < 32)
	{
		if (!func_260())
		{
			if (Local_92[iLocal_70]->f_7)
			{
				func_2093();
			}
		}
	}
}

void func_1547(int iParam0)
{
	if (!network_does_network_id_exist(&(Local_5688.f_52.f_172[iParam0])))
	{
		if (bLocal_75)
		{
			func_2094(iParam0);
		}
		return;
	}
	iVar0 = net_to_obj(&(Local_5688.f_52.f_172[iParam0]));
	if (is_entity_dead(iVar0) || has_object_been_broken(iVar0))
	{
		if (bLocal_75)
		{
			func_2095(iParam0);
		}
		return;
	}
}

void func_1548(int iParam0)
{
	if (!does_entity_exist(&(uLocal_11245[iParam0])))
	{
		func_2096(iParam0);
		return;
	}
	if (is_entity_dead(&(uLocal_11245[iParam0])) || has_object_been_broken(&(uLocal_11245[iParam0])))
	{
		func_2097(iParam0);
		return;
	}
}

void func_1549()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_36479 - 1))
	{
		if (bLocal_75)
		{
			iVar2 = net_to_veh(&(Local_5688.f_52.f_108[iVar0]));
			if (!func_2098(iVar0, iVar2))
			{
				if (!network_does_network_id_exist(&(Local_5688.f_52.f_108[iVar0])))
				{
					if (func_862(Global_3145858->f_36480[iVar0]->f_1) && !is_bit_set(Local_5688.f_1284.f_2, iVar0))
					{
						if (func_2099(iVar0))
						{
							func_470(Global_3145858->f_36480[iVar0]->f_1);
						}
					}
				}
				else
				{
					iVar1 = 0;
					while (iVar1 <= (Global_2359296->f_4834 - 1))
					{
						if ((is_bit_set(Global_2359296->f_4836[iVar1]->f_4, 27) && is_bit_set(Global_2359296->f_4836[iVar1]->f_5, func_2100(iVar0))) && Global_2359296->f_4836[iVar1]->f_3 != -1)
						{
							if (!_does_volume_exist(&(iLocal_12111[iVar1])))
							{
								iLocal_12111[iVar1] = func_1386(Global_2359296->f_4836[iVar1]->f_3, 0f, 0f, 0f);
							}
							iVar3 = net_to_ent(&(Local_5688.f_52.f_108[iVar0]));
							if (_0xf256a75210c5c0eb(&(iLocal_12111[iVar1]), get_entity_coords(iVar3, true, false)))
							{
								if (is_bit_set(Global_2359296->f_4836[iVar1]->f_5, 4))
								{
									set_train_cruise_speed(iVar2, 0f);
								}
								else if (is_bit_set(Global_2359296->f_4836[iVar1]->f_5, 5))
								{
									func_133(Local_5688.f_52.f_108[iVar0], 0);
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		func_2101(iVar0);
		func_2102(iVar0);
		iVar0++;
	}
}

void func_1550()
{
	iVar0 = 0;
	while (iVar0 <= (Local_5688.f_1521 - 1))
	{
		iVar1 = &Local_5688.f_1510[iVar0];
		if (iVar1 < 0 || iVar1 >= 10)
		{
		}
		else if (network_does_network_id_exist(&(Local_5688.f_52.f_33[iVar1])))
		{
			if (func_2103(Global_3145858->f_13425[iVar1]->f_66))
			{
				func_2104(net_to_veh(&(Local_5688.f_52.f_33[iVar1])), Global_3145858->f_13425[iVar1]);
			}
		}
		iVar0++;
	}
}

void func_1551()
{
	if (is_bit_set(Local_5688.f_41, 22))
	{
		if (bLocal_75)
		{
			func_2105(iVar15554);
			iLocal_15556 = iVar15554 + 1;
			if (iVar15554 >= 5)
			{
				iLocal_15556 = 0;
			}
		}
		func_2106(iVar15773);
	}
	func_2107(iVar15773);
	iLocal_15775 = iVar15773 + 1;
	if (iVar15773 >= Global_3145858->f_13424)
	{
		iLocal_15775 = 0;
	}
}

void func_1552(int iParam0)
{
	if (!network_does_network_id_exist(&(Local_5688.f_52.f_111[iParam0])))
	{
		if (Local_1685[iLocal_71]->f_50 == iParam0)
		{
			func_2108();
		}
		func_358(Local_14476[iParam0]);
		if (bLocal_75)
		{
			Local_5688.f_1619[iParam0] = func_394();
			func_854(&(Local_5688.f_1747), iParam0);
			func_854(&(Local_5688.f_1741), iParam0);
			if (func_559(&(Local_5688.f_1744), iParam0))
			{
				if (func_2109(iParam0))
				{
					func_854(&(Local_5688.f_1744), iParam0);
				}
			}
		}
		return;
	}
	iVar0 = net_to_obj(&(Local_5688.f_52.f_111[iParam0]));
	if (is_entity_dead(iVar0))
	{
		if (Local_1685[iLocal_71]->f_50 == iParam0)
		{
			func_2108();
		}
		func_358(Local_14476[iParam0]);
		if (bLocal_75)
		{
			Local_5688.f_1619[iParam0] = func_394();
			func_854(&(Local_5688.f_1747), iParam0);
			func_854(&(Local_5688.f_1741), iParam0);
			if (network_has_control_of_network_id(&(Local_5688.f_52.f_111[iParam0])))
			{
				func_129(Local_5688.f_52.f_111[iParam0], 0);
			}
			else
			{
				network_request_control_of_network_id(&(Local_5688.f_52.f_111[iParam0]));
			}
		}
		return;
	}
	if (func_559(&(Local_5688.f_1741), iParam0))
	{
		if (Local_1685[iLocal_71]->f_50 == iParam0)
		{
			func_2108();
		}
		if (network_has_control_of_network_id(&(Local_5688.f_52.f_111[iParam0])))
		{
			if (is_entity_attached_to_any_ped(iVar0))
			{
				func_2110(iVar0);
				func_2111(iVar0, 1, 1);
			}
			if (bLocal_75)
			{
				Local_5688.f_1619[iParam0] = func_394();
				func_129(Local_5688.f_52.f_111[iParam0], 0);
				func_854(&(Local_5688.f_1741), iParam0);
			}
		}
		else if (bLocal_75)
		{
			if (!is_entity_attached_to_any_ped(iVar0))
			{
				network_request_control_of_network_id(&(Local_5688.f_52.f_111[iParam0]));
			}
		}
		return;
	}
	if (bLocal_75)
	{
		if (is_entity_attached_to_any_ped(iVar0))
		{
			if (&Local_5688.f_1680[iParam0] == 255)
			{
				iVar1 = get_entity_attached_to(iVar0);
				iVar2 = func_2112(iVar1);
				Local_5688.f_1680[iParam0] = iVar2;
			}
		}
		else
		{
			Local_5688.f_1680[iParam0] = 255;
		}
	}
	if (network_has_control_of_network_id(&(Local_5688.f_52.f_111[iParam0])))
	{
		if (is_bit_set(Global_2359296->f_459[iParam0]->f_10, 9))
		{
			if (!is_entity_attached_to_any_ped(iVar0))
			{
				if (!func_2113(iVar0))
				{
					func_2114(iVar0, iParam0, 1);
				}
			}
		}
	}
	if ((bLocal_75 && func_559(&(Local_5688.f_1747), iParam0)) && Global_2359296->f_459[iParam0]->f_54 > 0)
	{
		if (!func_345(Local_5688.f_1750[iParam0]))
		{
			func_324(Local_5688.f_1750[iParam0], 0, 0);
		}
		else if (func_325(Local_5688.f_1750[iParam0], 0, 0) >= Global_2359296->f_459[iParam0]->f_54)
		{
			func_2115(iParam0);
			func_358(Local_5688.f_1750[iParam0]);
		}
	}
	if (Local_1685[iLocal_71]->f_50 == iParam0)
	{
		if (!func_559(&(Local_1685[iLocal_71]->f_51), iParam0))
		{
			if (func_2116(iParam0))
			{
				if (iLocal_82 != -1)
				{
					func_560(&(Local_1685[iLocal_71]->f_51), iParam0);
				}
				if (!bLocal_74)
				{
					func_560(&(Local_1685[iLocal_71]->f_51), iParam0);
				}
				else if (func_1356(iLocal_81, iVar0, 1, 1) >= 5f)
				{
					func_560(&(Local_1685[iLocal_71]->f_51), iParam0);
				}
			}
		}
		else if (&Local_5688.f_1619[iParam0] == func_394())
		{
			func_2108();
		}
	}
	if (iLocal_82 != -1)
	{
		return;
	}
	if (func_345(Local_14476[iParam0]))
	{
		func_574(iParam0);
	}
	switch (Global_2359296->f_459[iParam0]->f_11)
	{
		case 1141570454:
			func_2117(iParam0, iVar0);
			break;
	}
}

void func_1553()
{
	if (is_bit_set(iVar15721, 7))
	{
		if (!is_bit_set(Local_15723.f_1, 7))
		{
			Var0.f_2 = -1;
			Var0.f_5 = -1;
			if (!is_bit_set(Global_2359296->f_160, 12))
			{
				Var0 = 160396598;
			}
			else
			{
				Var0 = -1369841721;
			}
			Var0.f_4 = 1;
			Var0.f_3 = Local_1685[iLocal_71]->f_3;
			Var0.f_4 = func_31(12);
			if (func_31(12))
			{
				Var0.f_4 = 1;
				Var0.f_3 = Local_1685[iLocal_71]->f_3;
			}
			func_1841(&Var0, &(Local_12907.f_973), &iLocal_79);
			func_2118();
			set_bit(&(Local_15723.f_1), 7);
		}
		else if (!is_bit_set(iLocal_58, 6))
		{
			if (Global_1146212->f_21645[22]->f_208)
			{
				set_bit(&iLocal_58, 6);
			}
		}
		else if ((is_bit_set(iLocal_58, 6) && bLocal_73) && Global_1956200->f_1715 >= 175f)
		{
			func_2119(&(Local_12907.f_973), &iLocal_79);
			clear_bit(&iLocal_58, 6);
			func_2118();
		}
	}
}

void func_1554(int iParam0, int* iParam1)
{
	if (*iParam1 == 0)
	{
		return;
	}
	if (is_bit_set(*iParam1, 3))
	{
		iVar0 = _0x849bd6c6314793d0(*iParam0);
		if (is_ped_on_mount(*iParam0))
		{
			iVar1 = get_ped_index_from_entity_index(iVar0);
			func_1917(iVar1, 1, 100);
			func_2120(1, 1f, 0);
		}
		else if (is_ped_in_any_vehicle(*iParam0, false))
		{
			iVar2 = get_vehicle_ped_is_in(*iParam0, false);
			if (is_vehicle_driveable(iVar2, false, false))
			{
				if (_is_draft_vehicle(iVar2))
				{
					if (_0xa19447d83294e29f(iVar2, &uVar3, &uVar4))
					{
						iVar5 = 0;
						while (iVar5 < 6)
						{
							iVar6 = iVar5;
							iVar7 = _get_ped_in_draft_seat(iVar2, iVar6);
							if (does_entity_exist(iVar7))
							{
								func_1917(iVar7, 1, 100);
								func_2120(1, 1f, 0);
							}
							iVar5++;
						}
					}
				}
				else
				{
					func_1800(1, 1f, 1, 1);
				}
			}
		}
		clear_bit(iParam1, 3);
	}
	else if (is_bit_set(*iParam1, 6))
	{
		func_1988(-1185145312, 1, 752097756);
		_0x83b8d50eb9446bba(*iParam0, 1);
		func_621(-1185145312, 1, -1, 0);
		clear_bit(iParam1, 6);
	}
}

void func_1555()
{
	Var0 = -1;
	Var0.f_6 = 8;
	Var0.f_15 = 8;
	Var0.f_24 = 8;
	Var0.f_33 = 8;
	Var0.f_42.f_1 = 10;
	Var0.f_54 = 8;
	if (iVar14344 >= &uLocal_1675[Global_2892896->f_13])
	{
		iLocal_14346 = 0;
	}
	if (iVar14344 < 0)
	{
		iLocal_14346 = (&uLocal_1675[Global_2892896->f_13] - 1);
	}
	if (is_bit_set(Global_2892896->f_15, 2))
	{
		Var0 = { func_2121(Global_2892896->f_13, iVar14344, 1) };
	}
	else
	{
		Var0 = { func_2122(Global_2892896->f_13, iVar14344, 1) };
	}
	if (!func_410(Var0.f_1))
	{
		func_2123(iLocal_81, Var0.f_1, Var0.f_4, 2, 1073741824);
	}
}

struct<4> func_1556(int iParam0, bool bParam1)
{
	if (iParam0 != 0)
	{
		StringCopy(&cVar0, _0xb112b9262ec29c20(1852874750, iParam0), 32);
	}
	if (bParam1)
	{
	}
	return cVar0;
}

void func_1557(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

void func_1558(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_1559(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2039501127:
			return 2;
		case -1890923540:
			return 69;
		case -1698389833:
			return 70;
		case -1540158808:
			return 73;
		case -1533983348:
			return 19;
		case -1501015261:
			return 57;
		case -1458496107:
			return 24;
		case -1438502509:
			return 12;
		case -1329294210:
			return 4;
		case -1321090275:
			return 15;
		case -1312722280:
			return 17;
		case -1308798499:
			return 10;
		case -1307589538:
			return 22;
		case -1277875962:
			return 28;
		case -1257079286:
			return 64;
		case -1221619492:
			return 63;
		case -1219452364:
			return 58;
		case -992645810:
			return 18;
		case -950801774:
			return 7;
		case -939910718:
			return 36;
		case -878696721:
			return 52;
		case -843335391:
			return 9;
		case -821494676:
			return 74;
		case -802866321:
			return 1;
		case -713787803:
			return 13;
		case -703795840:
			return 78;
		case -687714247:
			return 50;
		case -666550357:
			return 60;
		case -655468511:
			return 56;
		case -638016860:
			return 26;
		case -615934178:
			return 76;
		case -614515457:
			return 25;
		case -580272278:
			return 79;
		case -520308917:
			return 43;
		case -464093109:
			return 65;
		case -350176926:
			return 77;
		case -301326588:
			return 11;
		case -156881965:
			return 20;
		case -152594716:
			return 41;
		case -85973785:
			return 38;
		case -58731503:
			return 29;
		case 0:
			return 0;
		case 63218849:
			return 46;
		case 149540493:
			return 54;
		case 206509498:
			return 5;
		case 243900865:
			return 80;
		case 279823206:
			return 42;
		case 300973492:
			return 75;
		case 307335450:
			return 16;
		case 312878349:
			return 30;
		case 321607379:
			return 40;
		case 354637832:
			return 27;
		case 361976649:
			return 51;
		case 460855531:
			return 68;
		case 479779912:
			return 72;
		case 607449742:
			return 71;
		case 650587855:
			return 61;
		case 756696646:
			return 3;
		case 764304959:
			return 59;
		case 786066588:
			return 35;
		case 810310130:
			return 45;
		case 833685806:
			return 14;
		case 866669490:
			return 66;
		case 988196598:
			return 62;
		case 1036683068:
			return 33;
		case 1129169015:
			return 39;
		case 1130424855:
			return 47;
		case 1179535804:
			return 6;
		case 1217805983:
			return 34;
		case 1315487827:
			return 8;
		case 1379907684:
			return 23;
		case 1380454690:
			return 31;
		case 1413392437:
			return 53;
		case 1609644258:
			return 21;
		case 1668754447:
			return 48;
		case 1776048844:
			return 55;
		case 1885194679:
			return 67;
		case 1894655054:
			return 44;
		case 1932263154:
			return 32;
		case 2001915594:
			return 37;
		case 2058416949:
			return 49;
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

bool func_1560(int iParam0)
{
	if ((!is_ped_dead_or_dying(*iParam0, true) && !is_ped_injured(*iParam0)) && !_0xb655db7582aec805(*iParam0))
	{
		return false;
	}
	return true;
}

bool func_1561(int iParam0)
{
	if (is_ped_in_any_vehicle(*iParam0, false) || is_ped_on_vehicle(*iParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*iParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 749266870 || iVar1 == -1552059402)
		{
			return true;
		}
	}
	return false;
}

int func_1562()
{
	iVar0 = get_random_int_in_range(0, 100);
	if (iVar0 < 33)
	{
		return 320243264;
	}
	else if (iVar0 < 66)
	{
		return -1561793977;
	}
	return 137506481;
}

void func_1563(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (bParam6)
	{
		if (bParam7)
		{
			if (!bParam8)
			{
				*uParam1 = { -0.0861f, 0.9336f, 0.5056f };
				*uParam2 = { 0.7282f, -1.9538f, 0.4905f };
				*uParam4 = 36.9924f;
			}
			else
			{
				*uParam1 = { -0.0238f, 0.5454f, 0.5883f };
				*uParam2 = { 0.755f, -2.3332f, 0.2612f };
				*uParam4 = 51.282f;
			}
		}
		else if (!bParam8)
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1.0378f, 0.7922f, 0.4744f };
					*uParam2 = { 1.7461f, -0.3213f, 0.3705f };
					*uParam3 = { -0.38f, 0f, -0.03f };
					*uParam4 = 37.0064f;
					break;
				case 1:
					*uParam1 = { -1.1623f, -0.1462f, 0.4814f };
					*uParam2 = { 1.4643f, 1.2992f, 0.3775f };
					*uParam3 = { -1f, 0.58f, -0.06f };
					*uParam4 = 37.0064f;
					break;
				case 2:
					*uParam1 = { -0.4398f, 1.287f, 0.4791f };
					*uParam2 = { 0.1169f, -1.6592f, 0.3818f };
					*uParam3 = { 0.44f, 0.14f, -0.02f };
					*uParam4 = 37.0064f;
					break;
				default:
					*uParam1 = { 0.4476f, 1.2324f, 0.4858f };
					*uParam2 = { -1.2264f, -1.255f, 0.3854f };
					*uParam3 = { 0.56f, 0.9f, -0.04f };
					*uParam4 = 37.0064f;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -0.5886f, 0.4554f, 0.6384f };
					*uParam2 = { 2.2954f, -0.1135f, 0.0391f };
					*uParam3 = { -0.22f, 0.03f, -0.05f };
					*uParam4 = 51.1841f;
					break;
				default:
					*uParam1 = { -0.1795f, 0.7041f, 0.6043f };
					*uParam2 = { 0.0136f, -2.2759f, 0.3181f };
					*uParam3 = { 0.28f, -0.03f, -0.055f };
					*uParam4 = 51.1841f;
					break;
			}
		}
	}
	else if (bParam7)
	{
		if (!bParam8)
		{
			*uParam1 = { -0.2081f, 0.9637f, 0.3846f };
			*uParam2 = { 0.8601f, -1.8387f, 0.3133f };
			*uParam4 = 36.9709f;
		}
		else
		{
			*uParam1 = { -0.098f, 0.5713f, 0.4475f };
			*uParam2 = { 1.0332f, -2.1964f, 0.2015f };
			*uParam4 = 51.1874f;
		}
	}
	else if (!bParam8)
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.9423f, 0.8115f, 0.3073f };
				*uParam2 = { 1.7998f, -0.4052f, 0.3282f };
				*uParam3 = { -0.95f, -1.64f, -0.284f };
				*uParam4 = 37f;
				break;
			case 1:
				*uParam1 = { -1.1357f, -0.0544f, 0.3064f };
				*uParam2 = { 1.5686f, 1.2432f, 0.3634f };
				*uParam3 = { -0.75f, 0.75f, 0.03f };
				*uParam4 = 37f;
				break;
			case 2:
				*uParam1 = { -0.3074f, 1.2852f, 0.4028f };
				*uParam2 = { -0.2246f, -1.7076f, 0.2109f };
				*uParam3 = { 0.78f, 0f, -0.05f };
				*uParam4 = 37f;
				break;
			default:
				*uParam1 = { 0.4682f, 1.2259f, 0.4098f };
				*uParam2 = { -1.3971f, -1.1144f, 0.1998f };
				*uParam3 = { 0.76f, 0.86f, -0.05f };
				*uParam4 = 37f;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				*uParam1 = { -0.517f, 0.4743f, 0.4414f };
				*uParam2 = { 2.3308f, -0.4514f, 0.2602f };
				*uParam3 = { -0.25f, 0.03f, -0.02f };
				*uParam4 = 52f;
				break;
			default:
				*uParam1 = { -0.1382f, 0.6743f, 0.4704f };
				*uParam2 = { -0.167f, -2.3107f, 0.1718f };
				*uParam3 = { 0.16f, 0.03f, -0.03f };
				*uParam4 = 52f;
				break;
		}
	}
	if (bParam5)
	{
		uParam1->f_1 = 3.2f;
	}
}

int func_1564(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	if (uParam0->f_7 == 0)
	{
		func_2124(uParam0, vParam2, vParam5, iParam1, 0.3f, 1, 0);
	}
	else
	{
		iVar8 = get_shape_test_result(uParam0->f_7, &iVar0, &uVar1, &uVar4, &uVar7);
		switch (iVar8)
		{
			case 2:
				uParam0->f_7 = 0;
				if (iVar0 == 0)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			case 0:
				uParam0->f_7 = 0;
				break;
		}
	}
	return 0;
}

void func_1565(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, float fParam11)
{
	uParam0->f_7 = 0;
	if (!does_cam_exist(uParam0[0]))
	{
		(*uParam0)[0] = create_camera(26379945, false);
	}
	set_cam_affects_aiming(uParam0[0], false);
	stop_cam_pointing(uParam0[0]);
	set_cam_coord(uParam0[0], get_offset_from_entity_in_world_coords(*iParam1, vParam2));
	point_cam_at_coord(uParam0[0], get_offset_from_entity_in_world_coords(*iParam1, vParam5));
	set_cam_fov(uParam0[0], fParam11);
	shake_cam(uParam0[0], func_2125(3), 0.45f);
	set_cam_near_clip(uParam0[0], 0.15f);
	_0x9b1fc259187c97c0("player_outro");
	uParam0->f_13 = { vParam8 };
	uParam0->f_17 = 1;
}

Vector3 func_1566(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	func_2126(&vParam6, vParam3);
	return vParam0 + vParam6;
}

int func_1567(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 11:
		case 13:
		case 15:
			return 3;
		case 0:
		case 10:
		case 12:
		case 14:
			return 2;
		case 4:
			return 1;
		case 2:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_1568(int* iParam0)
{
	switch (iParam0->f_5)
	{
		case 1:
			return 0;
		case 11:
			return 10;
		case 13:
			return 12;
		case 15:
			return 14;
		case 0:
		case 10:
		case 12:
		case 14:
			return 4;
		case 4:
			return 2;
		case 2:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1569(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	iVar0 = network_get_player_index(int_to_participantindex(iParam0));
	iVar1 = get_player_ped(iVar0);
	vVar2.x = (&Global_1049266 + (0.35f * IntToFloat(Global_1048684->f_376)));
	vVar2.f_1 = (Global_1049266->f_1 + IntToFloat((Global_1048684->f_376 % 4)));
	vVar2.f_2 = Global_1049266->f_2;
	StringCopy(&(Global_1048684->f_22[Global_1048684->f_376]->f_1), get_player_name(iVar0), 64);
	Global_1048684->f_22[Global_1048684->f_376]->f_9 = bParam1;
	if (bParam4)
	{
		Global_1048684->f_466 = bParam1;
	}
	if (bParam7)
	{
		Global_1048684->f_468 = bParam7;
	}
	Global_1048684->f_467 = bParam5;
	if (!is_ped_injured(iVar1))
	{
	}
	if (!bParam2)
	{
		Global_1048684->f_22[Global_1048684->f_376] = clone_ped(iVar1, 0f, true, true);
	}
	if (does_entity_exist(iParam3))
	{
		Global_1048684->f_343[Global_1048684->f_376] = clone_ped(iParam3, 0f, false, true);
		set_entity_visible(&(Global_1048684->f_343[Global_1048684->f_376]), false);
		_set_entity_coords_and_heading(&(Global_1048684->f_343[Global_1048684->f_376]), vVar2, 0f, true, false, true);
		freeze_entity_position(&(Global_1048684->f_343[Global_1048684->f_376]), true);
	}
	if (is_ped_male(&(Global_1048684->f_22[Global_1048684->f_376])))
	{
		_0xa2f8b3b5fedfc100(&(Global_1048684->f_22[Global_1048684->f_376]), -420925418);
	}
	else
	{
		_0xa2f8b3b5fedfc100(&(Global_1048684->f_22[Global_1048684->f_376]), 697508196);
	}
	if (is_ped_dead_or_dying(&(Global_1048684->f_22[Global_1048684->f_376]), true))
	{
		resurrect_ped(&(Global_1048684->f_22[Global_1048684->f_376]));
	}
	if (is_ped_injured(&(Global_1048684->f_22[Global_1048684->f_376])))
	{
		revive_injured_ped(&(Global_1048684->f_22[Global_1048684->f_376]));
	}
	set_entity_invincible(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	clear_ped_tasks_immediately(&(Global_1048684->f_22[Global_1048684->f_376]), false, true);
	clear_ped_secondary_task(&(Global_1048684->f_22[Global_1048684->f_376]));
	set_blocking_of_non_temporary_events(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	set_entity_visible(&(Global_1048684->f_22[Global_1048684->f_376]), false);
	_set_entity_health(&(Global_1048684->f_22[Global_1048684->f_376]), 500, 0);
	_set_entity_coords_and_heading(&(Global_1048684->f_22[Global_1048684->f_376]), vVar2, 0f, true, false, true);
	freeze_entity_position(&(Global_1048684->f_22[Global_1048684->f_376]), true);
	Global_1048684->f_376++;
}

void func_1570(int iParam0)
{
	Global_1048684->f_470 = iParam0;
}

bool func_1571(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 == 255)
	{
		return false;
	}
	if (!Local_92[iParam0]->f_3)
	{
		return false;
	}
	if (func_38(iParam0))
	{
		return false;
	}
	if (!is_bit_set(Local_1685[iParam0]->f_2, 18) || is_bit_set(Local_1685[iParam0]->f_2, 0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (is_bit_set(Local_1685[iParam0]->f_2, 19))
		{
			return false;
		}
	}
	if (func_90(Local_92[iParam0]->f_4))
	{
		return false;
	}
	return true;
}

struct<4> func_1572(int iParam0, int iParam1)
{
	StringCopy(&cVar0, "MP_CELEB_SCREEN_MUSIC", 32);
	if (are_strings_equal(&(Global_3145858->f_51886), "MP_ADV_PH_PREDATORS_OUTRO_OS"))
	{
		cVar0 = { Global_3145858->f_51886 };
		if (iParam0 == 1)
		{
			StringCopy(&cVar0, "MP_ADV_PH_HUNTED_OUTRO_OS", 32);
		}
	}
	else if (are_strings_equal(&(Global_3145858->f_51886), "MP_FEAR_OUTRO_OS_TEAM1"))
	{
		cVar0 = { Global_3145858->f_51886 };
		if (iParam1 == iParam0)
		{
			StringCopy(&cVar0, "MP_FEAR_OUTRO_OS_TEAM2", 32);
		}
	}
	return cVar0;
}

int func_1573(bool bParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1048684->f_376 - 1))
	{
		if (Global_1048684->f_22[iVar0]->f_9)
		{
			iVar1++;
		}
		else
		{
			iVar2++;
		}
		iVar3 = get_random_int_in_range(0, 1000);
		iVar0++;
	}
	if (iParam1 != 0)
	{
		return iParam1;
	}
	else if (!bParam0)
	{
		if (iVar1 == 1)
		{
			return 0;
		}
		else if (iVar1 <= 4)
		{
			if (iVar3 < 250)
			{
				return 1;
			}
			else if (iVar3 < 500)
			{
				return 2;
			}
			else if (iVar3 < 700)
			{
				return 3;
			}
			else
			{
				return 4;
			}
		}
		else if (iVar1 <= 7 && iVar2 <= 1)
		{
			return 5;
		}
		else if (iVar1 <= 8)
		{
			if (iVar3 < 125)
			{
				return 6;
			}
			else if (iVar3 < 250)
			{
				return 7;
			}
			else if (iVar3 < 375)
			{
				return 9;
			}
			else if (iVar3 < 500)
			{
				return 13;
			}
			else if (iVar3 < 750)
			{
				return 14;
			}
			else
			{
				return 12;
			}
		}
		else if (iVar1 <= 16)
		{
			if (iVar3 < 250)
			{
				return 8;
			}
			else if (iVar3 < 500)
			{
				return 13;
			}
			else if (iVar3 < 750)
			{
				return 14;
			}
			else
			{
				return 12;
			}
		}
	}
	else
	{
		return 20;
	}
	return 28;
}

var func_1574()
{
	iVar2 = func_803(iLocal_71);
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar0 != iLocal_71 && Local_92[iVar0]->f_3)
		{
			if (func_803(iVar0) > iVar2)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1 + 1;
}

int func_1575(var uParam0, int* iParam1)
{
	if (*uParam0 == 255)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		sVar1 = get_player_name(*uParam0);
		if (Global_1050050->f_101[iVar0]->f_14 == *uParam0 || are_strings_equal(&(Global_1050050->f_101[iVar0]->f_14.f_1), sVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return func_1576(iParam1);
}

int func_1576(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1050050->f_101[iVar0]->f_14 == 255 && !is_bit_set(*iParam0, iVar0))
		{
			set_bit(iParam0, iVar0);
			return iVar0;
		}
		else if (!network_is_player_active(Global_1050050->f_101[iVar0]->f_14) && !is_bit_set(*iParam0, iVar0))
		{
			set_bit(iParam0, iVar0);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1577(var uParam0, float fParam1, bool bParam2)
{
	if (!bParam2)
	{
		*uParam0 = 0f;
	}
	*uParam0 = (*uParam0 + fParam1);
}

void func_1578(var uParam0, var uParam1)
{
	uVar0 = func_2127(uParam0);
	_0x7e300b5b86ab1d1a(uParam0, uVar0, 23, uParam1[0], &(uParam1->f_10[0]), &(uParam1->f_5[0]), uParam1[1], &(uParam1->f_10[1]), &(uParam1->f_5[1]), uParam1[2], &(uParam1->f_10[2]), &(uParam1->f_5[2]), uParam1[3], &(uParam1->f_10[3]), &(uParam1->f_5[3]));
}

int func_1579()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

Vector3 func_1580()
{
	return Global_265377->f_124517.f_136;
}

bool func_1581()
{
	return func_53(get_player_index(), 256);
}

int func_1582()
{
	return Global_265377->f_124517.f_71.f_16;
}

void func_1583()
{
	Var0 = { Global_265377->f_124517 };
	func_2128(&(Global_265377->f_124517));
	Var69.f_1 = 5;
	Var69.f_3.f_2 = -504335712;
	Var69.f_3.f_4 = 3;
	Var69.f_63.f_5 = -1;
	Global_265377->f_124517 = { Var69 };
	Global_265377->f_124517.f_3 = { Var0.f_3 };
	Global_265377->f_124517.f_28 = Var0.f_28;
	Global_265377->f_124517.f_63 = { Var0.f_63 };
}

void func_1584()
{
	Global_265377->f_124517.f_28 = 0;
}

bool func_1585(bool bParam0, int iParam1)
{
	iVar0 = network_player_id_to_int();
	if (func_2129((*Global_263042)[iVar0]->f_1.f_53))
	{
		return true;
	}
	uVar1 = func_2130((*Global_263042)[iVar0]->f_1.f_18, (*Global_263042)[iVar0]->f_1.f_17);
	iVar2 = count_player_bits(&uVar1);
	iVar4 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar5 = int_to_playerindex(iVar3);
		if (!network_is_player_active(iVar5))
		{
		}
		else if (!_0x72b2e00c9bac6789(&uVar1, iVar3))
		{
		}
		else if (func_53(iVar5, 1024))
		{
			iVar4++;
		}
		iVar3++;
	}
	iVar2 = (iVar2 - iVar4);
	if ((*Global_263042)[iVar0]->f_1.f_21.f_2 == -504335712 && func_1483(Global_524288->f_40400))
	{
		if (iParam1 > 0 && bParam0)
		{
			if ((iVar2 + iParam1) < (*Global_263042)[iVar0]->f_1.f_32)
			{
				func_2131(131072);
				func_303(1024);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	if ((*Global_263042)[iVar0]->f_1.f_32 > iVar2)
	{
		func_2131(131072);
		func_303(1024);
		return false;
	}
	if ((*Global_263042)[iVar0]->f_1.f_21.f_2 == -504335712 && func_1483(Global_524288->f_40400))
	{
		if (!(func_951(58) || func_951(66)) || (&Global_1048596 == 0 && !bParam0))
		{
			iVar3 = 0;
			while (iVar3 < 8)
			{
				if (&Global_524288->f_35351[iVar3] > Global_262155->f_163.f_7[iVar3]->f_1)
				{
					func_2131(131072);
					func_303(1024);
					return false;
				}
				iVar3++;
			}
		}
		else if (!bParam0 && !func_951(66))
		{
			if (!func_2132(&Global_1048596))
			{
				func_2131(131072);
				func_303(1024);
				return false;
			}
		}
		else if (!func_2133(&Global_1048596, iVar2))
		{
			func_2131(131072);
			func_303(1024);
			return false;
		}
	}
	return true;
}

void func_1586(vector3 vParam0)
{
	Global_265377->f_124517.f_136 = { vParam0 };
	func_2131(256);
}

void func_1587(int iParam0)
{
	switch (iParam0)
	{
		case -1928147756:
			func_556(func_829(-1892463704, -1928147756), 1);
			break;
		case -1058316279:
			func_556(func_829(-1892463704, -1058316279), 1);
			break;
		case -1581191600:
			func_556(func_829(-1892463704, -1581191600), 1);
			break;
		case 1530063285:
			func_556(func_829(-1892463704, 1530063285), 1);
			break;
		case 1399046085:
			func_556(func_829(-1892463704, 1399046085), 1);
			break;
		case 707056726:
			func_556(func_829(-1892463704, 707056726), 1);
			break;
		case 1722821502:
			func_556(func_829(-1892463704, 1722821502), 1);
			break;
		case -1625925065:
			func_556(func_829(-1892463704, -1625925065), 1);
			break;
		case -2026537663:
			func_556(func_829(-1892463704, -2026537663), 1);
			break;
		case 769276093:
			func_556(func_829(-1892463704, 769276093), 1);
			break;
		case -737967266:
			func_556(func_829(-1892463704, -737967266), 1);
			break;
		case -1110567953:
			func_556(func_829(-1892463704, -1110567953), 1);
			break;
		case -614717889:
			func_556(func_829(-1892463704, -614717889), 1);
			break;
		case -840899846:
			func_556(func_829(-1892463704, -840899846), 1);
			break;
		case -808084283:
			func_556(func_829(-1892463704, -808084283), 1);
			break;
		case 1801427726:
			func_556(func_829(-1892463704, 1801427726), 1);
			break;
		case -663251240:
			func_556(func_829(-1892463704, -663251240), 1);
			break;
		case 1763467984:
			func_556(func_829(-1892463704, 1763467984), 1);
			break;
		case 1797448669:
			func_556(func_829(-1892463704, 1797448669), 1);
			break;
		case 2049553553:
			func_556(func_829(-1892463704, 2049553553), 1);
			break;
		case -1191741868:
			func_556(func_829(-1892463704, -1191741868), 1);
			break;
		case -311722996:
			func_556(func_829(-1892463704, -311722996), 1);
			break;
		case 679801275:
			func_556(func_829(-1892463704, 679801275), 1);
			break;
		case -716072558:
			func_556(func_829(-1892463704, -716072558), 1);
			break;
		case -2077539676:
			func_556(func_829(-1892463704, -2077539676), 1);
			break;
		case 1150823022:
			func_556(func_829(-1892463704, 1150823022), 1);
			break;
		case 1015500476:
			func_556(func_829(-1892463704, 1015500476), 1);
			break;
		case 2134225326:
			func_556(func_829(-1892463704, 2134225326), 1);
			break;
		case -1132137047:
			func_556(func_829(-1892463704, -1132137047), 1);
			break;
		case -1851633148:
			func_556(func_829(-1892463704, -1851633148), 1);
			break;
		case 1251710716:
			func_556(func_829(-1892463704, 1251710716), 1);
			break;
		case 1728764840:
			func_556(func_829(-1892463704, 1728764840), 1);
			break;
		case 299170259:
			func_556(func_829(-1892463704, 299170259), 1);
			break;
		case -1085170826:
			func_556(func_829(-1892463704, -1085170826), 1);
			break;
		case -318321726:
			func_556(func_829(-1892463704, -318321726), 1);
			break;
		case 1054743401:
			func_556(func_829(-1892463704, 1054743401), 1);
			break;
		case -1008746630:
			func_556(func_829(-1892463704, -1008746630), 1);
			break;
		case -68117845:
			func_556(func_829(-1892463704, -68117845), 1);
			break;
		case -776864312:
			func_556(func_829(-1892463704, -776864312), 1);
			break;
		case -1792457046:
			func_556(func_829(-1892463704, -1792457046), 1);
			break;
		case -1208920672:
			func_556(func_829(-1892463704, -1208920672), 1);
			break;
		case -716088422:
			func_556(func_829(-1892463704, -716088422), 1);
			break;
		case 553641561:
			func_556(func_829(-1892463704, 553641561), 1);
			break;
		case -517030668:
			func_556(func_829(-1892463704, -517030668), 1);
			break;
		case -1296221679:
			func_556(func_829(-1892463704, -1296221679), 1);
			break;
		case -1387569989:
			func_556(func_829(-1892463704, -1387569989), 1);
			break;
		case -933688330:
			func_556(func_829(-1892463704, -933688330), 1);
			break;
		case 1196791162:
			func_556(func_829(-1892463704, 1196791162), 1);
			break;
		case -601057408:
			func_556(func_829(-1892463704, -601057408), 1);
			break;
		case 1573191414:
			func_556(func_829(-1892463704, 1573191414), 1);
			break;
		case 2033486435:
			func_556(func_829(-1892463704, 2033486435), 1);
			break;
		case 1645000405:
			func_556(func_829(-1892463704, 1645000405), 1);
			break;
		case -1197085363:
			func_556(func_829(-1892463704, -1197085363), 1);
			break;
		case -1179304729:
			func_556(func_829(-1892463704, -1179304729), 1);
			break;
		case 195014139:
			func_556(func_829(-1892463704, 195014139), 1);
			break;
		case 999882722:
			func_556(func_829(-1892463704, 999882722), 1);
			break;
		case -512460250:
			func_556(func_829(-1892463704, -512460250), 1);
			break;
		case 1057455349:
			func_556(func_829(-1892463704, 1057455349), 1);
			break;
		case 1453781476:
			func_556(func_829(-1892463704, 1453781476), 1);
			break;
		case 223181639:
			func_556(func_829(-1892463704, 223181639), 1);
			break;
		case 2076532901:
			func_556(func_829(-1892463704, 2076532901), 1);
			break;
		case 966194332:
			func_556(func_829(-1892463704, 966194332), 1);
			break;
		case -711431897:
			func_556(func_829(-1892463704, -711431897), 1);
			break;
		case -677165568:
			func_556(func_829(-1892463704, -677165568), 1);
			break;
		case 1471375922:
			func_556(func_829(-1892463704, 1471375922), 1);
			break;
		case -662385272:
			func_556(func_829(-1892463704, -662385272), 1);
			break;
		case 409276899:
			func_556(func_829(-1892463704, 409276899), 1);
			break;
		case -1199438720:
			func_556(func_829(-1892463704, -1199438720), 1);
			break;
	}
}

bool func_1588(int iParam0)
{
	if (!func_2134(iParam0))
	{
		if (_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
		{
			iVar0 = func_874(4, iParam0);
			if (iVar0 != 0)
			{
				func_875(iVar0, 0);
			}
		}
		return true;
	}
	iVar1 = func_874(2, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar1))
	{
		iVar1 = func_874(3, iParam0);
	}
	if (!func_2135((*Global_1835011)[iParam0]->f_32) && iVar1 == 0)
	{
		return true;
	}
	if ((_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3)) || !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (!func_2136((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = func_875(iVar1, 0);
		}
		else
		{
			switch (func_2137((*Global_1835011)[iParam0]->f_32, 0))
			{
				case 0:
					break;
				case 2:
					if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
					{
						return true;
					}
					break;
			}
		}
		return false;
	}
	return true;
}

void func_1589(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_1590(int iParam0, bool bParam1)
{
	if (!func_2134(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 13:
			if (bParam1)
			{
				if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(682499315, 0, 0)))
				{
					_0x7c32191d9fb2bdea(_0x8e84119a23c16623(682499315, 0, 0));
				}
			}
			break;
		case 16:
			if (!_0x354f689c4ffaab37(_0x8e84119a23c16623(-413671895, 0, 0)))
			{
				_0x7c32191d9fb2bdea(_0x8e84119a23c16623(-413671895, 0, 0));
			}
			break;
	}
}

void func_1591(int iParam0)
{
	if (!func_2138(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_2139(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

int func_1592(int iParam0)
{
	switch (func_2140(iParam0))
	{
		case 6:
		case 7:
		case 8:
		case 9:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1593(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	Global_1878407->f_7 = 0f;
	func_2141(iParam0);
}

void func_1594(struct<2> Param0, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_252(Param0))
	{
		return;
	}
	if (!func_454(Param0) && !func_453(Param0))
	{
		return;
	}
	if (bParam2)
	{
		*Global_1900869 = { Param0 };
		Global_1900871 = get_game_timer();
	}
	if (func_878(Param0) == 4)
	{
		if (!func_878(Param0) == 5 && !func_878(Param0) == 6)
		{
			func_880(Param0, 5);
			func_886(Param0);
		}
		return;
	}
	if (func_878(Param0) == 3)
	{
		func_243(1, -1706799532);
	}
	else if (func_878(Param0) == 4)
	{
		func_243(0, -1706799532);
	}
	if (!func_878(Param0) == 0)
	{
		if (_0x01f4d242765c6b24(func_27(Param0)))
		{
			iVar0 = 0;
			func_879(Param0, iVar0, 0, 255, 0);
		}
	}
	if (func_882(func_881(0), Param0))
	{
		func_71(1);
		func_884(0);
		func_885(1);
	}
	func_880(Param0, 0);
	func_886(Param0);
	func_885(1);
	Global_1051252->f_45.f_1 = 1;
	iVar1 = func_887(Param0);
	if (iVar1 != 2 && iVar1 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_1595()
{
	iVar1 = -1;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_5688.f_857 - 1))
	{
		if (&Local_5688.f_1582[iVar0] <= 0)
		{
		}
		else if (func_981() == 2)
		{
			if (iVar1 == -1)
			{
				iVar1 = iVar0;
			}
			else
			{
				if (&Local_5688.f_1600[iVar0] > 0)
				{
					if (&Local_5688.f_1600[iVar1] > 0)
					{
						iVar3 = 1;
						Jump @198; //curOff = 96
					}
					else
					{
						iVar1 = iVar0;
						iVar3 = 0;
					}
				}
				else if (&Local_5688.f_1600[iVar1] <= 0)
				{
					iVar3 = 1;
				}
				Jump @189; //curOff = 129
				if (iVar1 == -1 || func_1354(iVar0, 0) > iVar2)
				{
					iVar1 = iVar0;
					iVar2 = func_1354(iVar0, 0);
					iVar3 = 0;
				}
				else if (func_1354(iVar0, 0) == iVar2)
				{
					iVar3 = 1;
				}
			}
			iVar0++;
			return iVar3;
		}
	}
}

int func_1596()
{
	iVar1 = -1;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!func_1571(iVar0, 1))
		{
		}
		else if (func_981() == 2)
		{
			if (iVar1 == -1)
			{
				iVar1 = iVar0;
			}
			else
			{
				if (Local_92[iVar0]->f_7 && !is_bit_set(Local_1685[iVar0]->f_2, 19))
				{
					if (Local_92[iVar1]->f_7 && !is_bit_set(Local_1685[iVar1]->f_2, 19))
					{
						iVar3 = 1;
						Jump @244; //curOff = 123
					}
					else
					{
						iVar1 = iVar0;
						iVar3 = 0;
					}
				}
				else if (!Local_92[iVar1]->f_7 || is_bit_set(Local_1685[iVar1]->f_2, 19))
				{
					iVar3 = 1;
				}
				Jump @235; //curOff = 175
				if (iVar1 == -1 || func_1355(iVar0, 0) > iVar2)
				{
					iVar1 = iVar0;
					iVar2 = func_1355(iVar0, 0);
					iVar3 = 0;
				}
				else if (func_1355(iVar0, 0) == iVar2)
				{
					iVar3 = 1;
				}
			}
			iVar0++;
			return iVar3;
		}
	}
}

bool func_1597(var uParam0, var uParam1)
{
	if ((is_bit_set(uParam0->f_7, 2) && !is_bit_set(uParam0->f_7, 1)) && uParam0->f_3 == -1)
	{
		return false;
	}
	if (is_bit_set(uParam1->f_5, 0) && !func_2142(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

void func_1598(var uParam0)
{
	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_4;
	iVar2 = uParam0->f_5;
	if (iVar0 == -1)
	{
		network_get_global_multiplayer_clock(&iVar3, &iVar4, &iVar5);
		func_2143(uParam0, iVar3, iVar4, iVar5);
	}
	else
	{
		func_2143(uParam0, iVar0, iVar1, iVar2);
	}
	set_bit(&(uParam0->f_7), 1);
}

void func_1599(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!is_bit_set(uParam0->f_7, 2))
	{
		*iParam1 = uParam0->f_3;
		*iParam2 = uParam0->f_4;
		*iParam3 = uParam0->f_5;
	}
	else
	{
		network_get_global_multiplayer_clock(&iVar0, &iVar1, &iVar2);
		*iParam1 = (iVar0 + uParam0->f_3);
		*iParam2 = (iVar1 + uParam0->f_4);
		*iParam3 = (iVar2 + uParam0->f_5);
		func_2144(iParam1, iParam2, iParam3);
	}
}

void func_1600(var uParam0, var uParam1)
{
	if (!func_2142(uParam0, uParam1))
	{
		return;
	}
	if (is_bit_set(uParam0->f_7, 2))
	{
		set_bit(&(uParam1->f_5), 1);
	}
	else
	{
		clear_bit(&(uParam1->f_5), 1);
	}
	uParam1->f_2 = uParam0->f_3;
	uParam1->f_3 = uParam0->f_4;
	uParam1->f_4 = uParam0->f_5;
}

int func_1601(int iParam0, int iParam1, int iParam2)
{
	iVar0 = ((iParam0 * 3600 + iParam1 * 60) + iParam2);
	iVar1 = ((get_clock_hours() * 3600 + get_clock_minutes() * 60) + get_clock_seconds());
	if (iVar0 >= iVar1)
	{
		iVar2 = (iVar0 - iVar1);
	}
	else
	{
		iVar2 = ((iVar0 + 86400) - iVar1);
	}
	if (iVar1 >= iVar0)
	{
		iVar3 = (iVar1 - iVar0);
	}
	else
	{
		iVar3 = ((iVar1 + 86400) - iVar0);
	}
	if (iVar2 <= iVar3)
	{
		return 1;
	}
	return 0;
}

int func_1602(int iParam0)
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

char* func_1603(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return "MC_ATTACKING";
		case 17:
			return "MC_ATTACKING_COMBAT";
		case 18:
			return "MC_DELIVERING";
		case 19:
			return "MC_DELIVERING_COMBAT";
		case 20:
			return "MC_SUSPENSE_LOW";
		case 21:
			return "MC_SUSPENSE_HIGH";
		case 22:
			return "MC_SUDDEN_DEATH";
		case 0:
			return "MC_ACTION_LOW";
		case 1:
			return "MC_ACTION_HIGH";
		case 2:
			return "MC_IDLE_LOW";
		case 3:
			return "MC_IDLE_HIGH";
		case 4:
			return "MC_SUSPENSE_LOW";
		case 5:
			return "MC_SUSPENSE_HIGH";
		case 6:
			return "MC_FAIL";
		case 7:
			return "MC_SILENT";
		case 23:
			return "MC_MUSIC_STOP";
		case 8:
			return "MUSIC_DYNAMIC";
		case 9:
			return "MUSIC_DYNAMIC_HIGH";
		case 10:
			return "MC_ATTACKING";
		case 11:
			return "MC_ATTACKING_COMBAT";
		case 12:
			return "MC_DEFENDING";
		case 13:
			return "MC_DEFENDING_COMBAT";
		case 14:
			return "MC_DELIVERING";
		case 15:
			return "MC_DELIVERING_COMBAT";
		default:
			break;
	}
	return "MC_IDLE_LOW";
}

char* func_1604(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

int func_1605()
{
	return 500408427;
}

void func_1606()
{
	if (!func_2145())
	{
	}
	if (func_2146())
	{
		Var0.f_1 = func_2147();
		iVar2 = _0x4e88a65968a55c78(&Var0, 1);
		if (func_1130(iVar2))
		{
			_0x2f901291ef177b02(iVar2, 0);
		}
	}
}

bool func_1607()
{
	return func_1130(_0xc17f69e1418cd11f(4));
}

void func_1608()
{
	if (func_257(255))
	{
		return;
	}
	if (!is_bit_set(iLocal_57, 22))
	{
		if (!func_586())
		{
			if (is_ped_dead_or_dying(iLocal_81, true))
			{
				resurrect_ped(iLocal_81);
			}
			if (_is_ped_hogtied(iLocal_81))
			{
				_0x79559bad83ccd038(iLocal_81, 8, 141883402, 0, 0, 1090519040);
			}
			if (_0xb655db7582aec805(iLocal_81))
			{
				_0xf6262491c7704a63(iLocal_81, 0);
			}
		}
		if ((_0x7ee3a8660f38797e(iLocal_81) || _0x57779b55b83e2bea(iLocal_81)) || _0x3bdfcf25b58b0415(iLocal_81))
		{
			_0x789dabd18e9024db(iLocal_81, 4096, 1);
		}
		if (!is_entity_visible(iLocal_81))
		{
			set_entity_visible(iLocal_81, true);
		}
		_0x64ff4bf9af59e139(iLocal_79, 1);
	}
	else if (_0x0e99e3bf11bb6367(iLocal_81))
	{
		iVar0 = _0xd0b7aeb56229d317(iLocal_81);
		if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_ped_a_player(iVar0))
		{
			func_58(0, 2);
			_0x789dabd18e9024db(iLocal_81, 32768, 1);
			clear_ped_tasks(iLocal_81, 1, 0);
		}
	}
}

bool func_1609()
{
	if (!is_bit_set(Local_1685[iLocal_71]->f_2, 3))
	{
		return true;
	}
	if (func_1508())
	{
		iVar0 = func_325(&(Local_5688.f_2400), 0, 0);
		iVar1 = Global_2359296->f_6579 * 1000;
		if (is_bit_set(Local_5688.f_41, 21))
		{
			if (!Local_5688.f_2411)
			{
				if (&Global_2359296->f_6580[Local_5688.f_2413] > 0)
				{
					iVar1 = &Global_2359296->f_6580[Local_5688.f_2413] * 1000;
				}
			}
			else if (&Global_2359296->f_6648[Local_5688.f_2402] > 0)
			{
				iVar1 = &Global_2359296->f_6648[Local_5688.f_2402] * 1000;
			}
		}
		else if (func_785())
		{
			if (&Global_2359296->f_6648[Local_5688.f_2402] > 0)
			{
				iVar1 = &Global_2359296->f_6648[Local_5688.f_2402] * 1000;
			}
		}
		if ((iVar1 - iVar0) < 1000)
		{
			return true;
		}
	}
	return false;
}

bool func_1610(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

bool func_1611(int iParam0)
{
	return func_373(29, iParam0);
}

int func_1612()
{
	if (func_30(4))
	{
		set_bit(&iLocal_57, 17);
		return 12;
	}
	return 7;
}

void func_1613(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_2148(&(uParam0->f_16), 84);
	}
}

void func_1614(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_1819(uParam0, 1);
	}
}

void func_1615()
{
	func_2149();
	func_2150();
	func_920(_0xdf66a37936d5f3d9(player_id()));
}

struct<4> func_1616(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_2151(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_2152() };
		if (func_2153() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_2154(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_2155(player_id());
	}
	bVar33 = func_31(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_2156(iParam3, 0);
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
			return func_530();
		}
		if (!func_2157(&Var0, 0))
		{
			Var35 = { func_2158(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_1617(var uParam0, int iParam1)
{
	func_2159(uParam0, iParam1, 0);
	return Global_1904087->f_11;
}

var func_1618(var uParam0, int iParam1)
{
	func_2159(uParam0, iParam1, 0);
	return Global_1904087->f_22;
}

int func_1619(var uParam0, int iParam1)
{
	if (!func_2159(uParam0, iParam1, 1))
	{
	}
	if (!func_2160(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_2161(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

void func_1620(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = iParam4;
}

int func_1621(int iParam0)
{
	if (!func_1294(32))
	{
		func_2162(&(Global_1952637->f_2365));
		func_250(32);
	}
	if (iParam0->f_1 == 0)
	{
		if (!func_2163(*iParam0))
		{
			if (func_1294(32))
			{
				func_916(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1298(&(Global_1952637->f_2365));
		if (!func_2164(&(Global_1952637->f_1556), *iParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_1294(32))
			{
				func_916(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_1297(&(Global_1952637->f_1556));
	}
	func_1295(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *iParam0;
	Global_1139381->f_4779 = iParam0->f_1;
	func_1295(30, 0, 0, 0, 0);
	func_1295(27, 0, 0, 0, 0);
	func_1295(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return 1;
}

void func_1622()
{
	func_59(121);
}

void func_1623(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_2165(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_2165(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_2165(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_1786(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_1792(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_1790(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_1624()
{
	func_2166();
}

int func_1625(int iParam0)
{
	if (func_391(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1626(int iParam0, int iParam1, int iParam2)
{
	func_2167(0, iParam0);
	func_2167(2, iParam1);
	func_2167(1, iParam2);
	iVar0 = func_2168(iParam0);
	func_2169(0, iVar0);
	iVar0 = func_2168(iParam1);
	func_2169(2, iVar0);
	iVar0 = func_2168(iParam2);
	func_2169(1, iVar0);
}

void func_1627(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1782(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136 = iParam0;
			break;
	}
}

void func_1628(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1782(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_1 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_1 = iParam0;
			break;
	}
}

void func_1629(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1782(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1956200->f_1546.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1956200->f_1546.f_2 = iParam0;
			break;
		case 1:
			Global_1956200->f_1565.f_136.f_2 = iParam0;
			break;
	}
}

void func_1630()
{
	func_2167(0, func_2165(0, 0));
	func_2167(2, func_2165(2, 0));
	func_2167(1, func_2165(1, 0));
	fVar0 = func_1784(0, 0);
	func_2169(0, floor(fVar0));
	fVar0 = func_1784(2, 0);
	func_2169(2, floor(fVar0));
	fVar0 = func_1784(1, 0);
	func_2169(1, floor(fVar0));
}

void func_1631(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1782(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_81 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_83 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1956200->f_1431.f_82 = uParam1;
			}
			else
			{
				Global_1956200->f_1565.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_1632(int iParam0, var uParam1, int iParam2)
{
	vVar0.f_1 = -1;
	if (!func_2170(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*Global_1139381->f_4796.f_34[iParam2] = { vVar0 };
}

void func_1633()
{
	func_2171();
	func_2172();
}

int func_1634(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_1635(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1636(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_1637(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_1638(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

int func_1639(int iParam0)
{
	switch (iParam0)
	{
		case 456605338:
			return 1133052843;
		case -1838730762:
			return -202313910;
		case 2091842205:
			return 756032181;
		case 1083726117:
			return 1391354145;
		case 1174457346:
			return -276645137;
		case 593332131:
			return 1059823321;
		case 1443986063:
			return 1059823321;
		case 1936484400:
			return 774310187;
		case -2146584:
			return 138141760;
		case 1117913623:
		case 1928276294:
			return 418594230;
		case -1220700382:
		case -699819638:
		case 1375802800:
			return -867319305;
		case 344700063:
		case 1485013169:
			return -1700692449;
		case -438934027:
		case 1835758938:
			return -1148732570;
		case 244605310:
		case 283413025:
		case 615217735:
			return 2042296464;
		case -818658900:
			return -98377599;
		default:
			break;
	}
	return -1;
}

void func_1640(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
	func_2174(uParam0, 19, &Var0);
	func_2174(uParam0, 20, &Var0);
	func_2174(uParam0, 21, &Var0);
	func_2174(uParam0, 22, &Var0);
	func_2174(uParam0, 23, &Var0);
	func_2174(uParam0, 24, &Var0);
	func_2174(uParam0, 27, &Var0);
	func_2174(uParam0, 28, &Var0);
	func_2174(uParam0, 29, &Var0);
	func_2174(uParam0, 30, &Var0);
	func_2174(uParam0, 31, &Var0);
	func_2174(uParam0, 32, &Var0);
	_databinding_write_data_bool(&(uParam0->f_12[3]), false);
	_databinding_write_data_bool(&(uParam0->f_12[2]), false);
	_databinding_write_data_bool(&(uParam0->f_12[16]), false);
	_databinding_write_data_string(&(uParam0->f_12[0]), "00:00");
	_databinding_write_data_string(&(uParam0->f_12[4]), "0");
	_databinding_write_data_string(&(uParam0->f_12[7]), "0");
}

void func_1641(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), "");
		_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), "");
		iVar0++;
	}
}

void func_1642(var uParam0)
{
}

void func_1643(var uParam0)
{
}

void func_1644(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_A", 128);
	StringCopy(&(Var0.f_31), "rpg_textures", 64);
	StringCopy(&(Var0.f_39), "rpg_agitation", 64);
	func_2174(uParam0, 17, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_B", 128);
	func_2174(uParam0, 18, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_C", 128);
	func_2174(uParam0, 19, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_D", 128);
	func_2174(uParam0, 20, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE_E", 128);
	func_2174(uParam0, 21, &Var0);
}

void func_1645(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
}

void func_1646(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
	func_2174(uParam0, 19, &Var0);
	func_2174(uParam0, 20, &Var0);
	func_2174(uParam0, 21, &Var0);
	func_2174(uParam0, 22, &Var0);
}

void func_1647(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	func_2174(uParam0, 17, &Var0);
}

void func_1648(var uParam0)
{
}

void func_1649(var uParam0)
{
	_databinding_write_data_string(&(uParam0->f_12[0]), "00:00.00");
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	Var0.f_2 = -2028925062;
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PLAYLIST_RACES", 128);
	Var0.f_30 = 1475463663;
	func_2174(uParam0, 17, &Var0);
}

void func_1650(var uParam0)
{
	uParam0->f_12[0] = _databinding_add_data_string(uParam0->f_11, "timerString", "00:00");
	uParam0->f_12[1] = _databinding_add_data_bool(uParam0->f_11, "isTimerLow", false);
	uParam0->f_12[2] = _databinding_add_data_bool(uParam0->f_11, "isVisible", false);
	uVar0 = _databinding_add_data_container(uParam0->f_11, "countDownTimer");
	uParam0->f_12[10] = _databinding_add_data_bool(uVar0, "isVisible", false);
}

void func_1651(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	Var0.f_2 = -2028925062;
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PLAYLIST_RACES", 128);
	Var0.f_30 = 1475463663;
	func_2174(uParam0, 19, &Var0);
}

void func_1652(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "generic_textures", 64);
	StringCopy(&(Var0.f_14), "TEMP_PEDSHOT", 128);
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
}

void func_1653(var uParam0)
{
}

void func_1654(var uParam0)
{
}

void func_1655(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_BASE", 128);
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
	func_2174(uParam0, 19, &Var0);
	func_2174(uParam0, 20, &Var0);
	func_2174(uParam0, 21, &Var0);
	func_2174(uParam0, 22, &Var0);
	func_2174(uParam0, 23, &Var0);
	func_2174(uParam0, 24, &Var0);
}

void func_1656(var uParam0)
{
}

void func_1657(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_MARKED_FOR_DEATH", 128);
	func_2174(uParam0, 17, &Var0);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_HUNTER", 128);
	func_2174(uParam0, 18, &Var0);
}

void func_1658(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	iVar67 = func_2175(uParam0->f_897.f_63, 1);
	switch (iVar67)
	{
		case 1762860161:
			StringCopy(&(Var0.f_6), "blips_mp", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_VIP", 128);
			break;
		case -1304077851:
			StringCopy(&(Var0.f_6), "blips", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_WAGON", 128);
			break;
		case 1568280029:
			StringCopy(&(Var0.f_6), "blips", 64);
			StringCopy(&(Var0.f_14), "BLIP_AMBIENT_HORSE", 128);
			break;
	}
	func_2174(uParam0, 17, &Var0);
	func_2174(uParam0, 18, &Var0);
	func_2174(uParam0, 19, &Var0);
	func_2174(uParam0, 20, &Var0);
	func_2174(uParam0, 21, &Var0);
	func_2174(uParam0, 22, &Var0);
	func_2174(uParam0, 23, &Var0);
	func_2174(uParam0, 24, &Var0);
}

void func_1659(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_AMBIENT_MARKED_FOR_DEATH", 128);
	func_2174(uParam0, 17, &Var0);
}

void func_1660(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	func_2173(&Var0);
	StringCopy(&(Var0.f_6), "blips_mp", 64);
	StringCopy(&(Var0.f_14), "BLIP_MP_PREDATOR_HUNT_MASK", 128);
	func_2174(uParam0, 19, &Var0);
	func_2174(uParam0, 20, &Var0);
	func_2174(uParam0, 21, &Var0);
	func_2174(uParam0, 22, &Var0);
	func_2174(uParam0, 23, &Var0);
	func_2174(uParam0, 24, &Var0);
	func_2174(uParam0, 25, &Var0);
	func_2174(uParam0, 26, &Var0);
}

void func_1661(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (&uParam0->f_379.f_489[iVar0] == -1)
		{
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), "");
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), "");
		}
		else
		{
			iVar1 = &uParam0->f_379.f_489[iVar0];
			iVar2 = uParam0->f_379[iVar1]->f_4;
			bVar3 = uParam0->f_379[iVar1]->f_14 & 12 > 0;
			iVar4 = floor(uParam0->f_379[iVar1]->f_5);
			bVar5 = uParam0->f_379[iVar1]->f_14 & 64 > 0;
			bVar6 = uParam0->f_379[iVar1]->f_14 & 2 > 0;
			StringCopy(&cVar7, uParam0->f_379[iVar1]->f_8, 32);
			Var11 = { func_2176(iVar2, bVar5, bVar3, iVar4) };
			if (!bVar6)
			{
				StringCopy(&cVar7, _create_var_string(2, &cVar7), 32);
			}
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[0]), &cVar7);
			_databinding_write_data_string(&(uParam0->f_370[iVar0]->f_1[1]), &Var11);
		}
		iVar0++;
	}
}

void func_1662(var uParam0)
{
	iVar8 = 0;
	while (iVar8 < 3)
	{
		iVar9 = &uParam0->f_379.f_438[iVar8];
		if (iVar9 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar9]->f_4;
			bVar1 = uParam0->f_379[iVar9]->f_14 & 12 > 0;
			iVar5 = floor(uParam0->f_379[iVar9]->f_5);
			bVar2 = uParam0->f_379[iVar9]->f_14 & 64 > 0;
			Var6 = { func_2176(iVar0, bVar2, bVar1, iVar5) };
			bVar3 = uParam0->f_379[iVar9]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar9]->f_14 & 512 > 0;
			switch (iVar8)
			{
				case 0:
					if (!bVar4)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar9]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar9]->f_2);
					func_2178(uParam0, 8);
					break;
			}
		}
		iVar8++;
	}
}

void func_1663(var uParam0)
{
	iVar1 = uParam0->f_897.f_63;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar5 = &uParam0->f_379.f_438[iVar4];
		if (iVar5 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[16]), true);
			bVar2 = uParam0->f_379[iVar5]->f_14 & 256 > 0;
			bVar3 = uParam0->f_379[iVar5]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar5]->f_4;
			switch (iVar4)
			{
				case 0:
					if (!bVar3)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar2, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_int(&(uParam0->f_12[12]), func_2179(iVar0, iVar1));
					_databinding_write_data_hash_string(&(uParam0->f_12[13]), uParam0->f_379[iVar5]->f_2);
					break;
				case 2:
					_databinding_write_data_int(&(uParam0->f_12[14]), func_2179(iVar0, iVar1));
					_databinding_write_data_hash_string(&(uParam0->f_12[15]), uParam0->f_379[iVar5]->f_2);
					break;
			}
		}
		iVar4++;
	}
}

void func_1664(var uParam0)
{
	iVar2 = uParam0->f_897.f_63;
	iVar9 = 0;
	while (iVar9 < 5)
	{
		iVar10 = &uParam0->f_379.f_438[iVar9];
		if (iVar10 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[16]), true);
			bVar3 = uParam0->f_379[iVar10]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar10]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar10]->f_4;
			bVar6 = uParam0->f_379[iVar10]->f_14 & 12 > 0;
			iVar1 = floor(uParam0->f_379[iVar10]->f_5);
			bVar5 = uParam0->f_379[iVar10]->f_14 & 64 > 0;
			bVar3 = uParam0->f_379[iVar10]->f_14 & 256 > 0;
			Var7 = { func_2176(iVar0, bVar5, bVar6, iVar1) };
			switch (iVar9)
			{
				case 0:
					if (!bVar4)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var7);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar10]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var7);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar10]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					_databinding_write_data_int(&(uParam0->f_12[12]), func_2179(iVar0, iVar2));
					_databinding_write_data_hash_string(&(uParam0->f_12[13]), uParam0->f_379[iVar10]->f_2);
					break;
				case 4:
					_databinding_write_data_int(&(uParam0->f_12[14]), func_2179(iVar0, iVar2));
					_databinding_write_data_hash_string(&(uParam0->f_12[15]), uParam0->f_379[iVar10]->f_2);
					break;
			}
		}
		iVar9++;
	}
}

void func_1665(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar76 != 666)
			{
				iVar0 = uParam0->f_379[iVar76]->f_4;
				bVar1 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
				iVar7 = floor(uParam0->f_379[iVar76]->f_5);
				bVar2 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
				Var5 = { func_2176(iVar0, bVar2, bVar1, iVar7) };
				bVar3 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
				bVar4 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			}
			switch (iVar75)
			{
				case 0:
					if (!bVar4)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var5);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var5);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					iVar77 = 0;
					while (iVar77 < 6)
					{
						if (iVar77 < &uParam0->f_379.f_228[3])
						{
							func_2180(uParam0, (*uParam0->f_379.f_233[3])[iVar77], &Var8);
							func_2174(uParam0, (17 + iVar77), &Var8);
						}
						else
						{
							func_2173(&Var8);
							func_2174(uParam0, (17 + iVar77), &Var8);
						}
						iVar77++;
					}
					break;
			}
		}
		iVar75++;
	}
}

void func_1666(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 5)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar76]->f_4;
			bVar2 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
			iVar1 = floor(uParam0->f_379[iVar76]->f_5);
			bVar3 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
			bVar4 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
			bVar5 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			Var6 = { func_2176(iVar0, bVar3, bVar2, iVar1) };
			switch (iVar75)
			{
				case 0:
					if (!bVar5)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar4, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					func_2180(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2174(uParam0, 17, &Var8);
					break;
				case 4:
					func_2180(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2174(uParam0, 18, &Var8);
					break;
			}
		}
		iVar75++;
	}
}

void func_1667(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 3)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar71 != 666)
			{
				iVar0 = uParam0->f_379[iVar71]->f_4;
				bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
				bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			}
			iVar72 = 0;
			switch (iVar70)
			{
				case 0:
					if (!bVar2)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar1, 3, 0, 0, 1));
					break;
				case 1:
					iVar72 = 0;
					while (iVar72 < 4)
					{
						if (iVar72 < &uParam0->f_379.f_228[1])
						{
							if (iVar72 == 0)
							{
								iVar73 = 17;
							}
							else
							{
								iVar73 = (27 + (iVar72 - 1));
							}
							func_2180(uParam0, (*uParam0->f_379.f_233[1])[iVar72], &Var3);
							func_2174(uParam0, iVar73, &Var3);
						}
						else
						{
							func_2173(&Var3);
							func_2174(uParam0, (27 + (iVar72 - 1)), &Var3);
						}
						iVar72++;
					}
					break;
				case 2:
					iVar72 = 0;
					while (iVar72 < 4)
					{
						if (iVar72 < &uParam0->f_379.f_228[2])
						{
							if (iVar72 == 0)
							{
								iVar74 = 18;
							}
							else
							{
								iVar74 = (30 + (iVar72 - 1));
							}
							func_2180(uParam0, (*uParam0->f_379.f_233[2])[iVar72], &Var3);
							func_2174(uParam0, iVar74, &Var3);
						}
						else
						{
							func_2173(&Var3);
							func_2174(uParam0, (30 + (iVar72 - 1)), &Var3);
						}
						iVar72++;
					}
					break;
			}
		}
		iVar70++;
	}
}

void func_1668(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			if (iVar76 != 666)
			{
				bVar4 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
				bVar3 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
				bVar2 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
				bVar5 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
				iVar0 = uParam0->f_379[iVar76]->f_4;
				iVar1 = floor(uParam0->f_379[iVar76]->f_5);
				Var6 = { func_2176(iVar0, bVar5, bVar4, iVar1) };
			}
			switch (iVar75)
			{
				case 0:
					if (!bVar3)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar2, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					iVar77 = 0;
					while (iVar77 < 10)
					{
						if (iVar77 < &uParam0->f_379.f_228[3])
						{
							func_2180(uParam0, (*uParam0->f_379.f_233[3])[iVar77], &Var8);
							Var8.f_1 = 0;
							func_2174(uParam0, (17 + iVar77), &Var8);
						}
						else
						{
							func_2173(&Var8);
							func_2174(uParam0, (17 + iVar77), &Var8);
						}
						iVar77++;
					}
					break;
			}
		}
		iVar75++;
	}
}

void func_1669(var uParam0)
{
	Var2.f_2 = 109029619;
	Var2.f_5 = -1082130432;
	Var2.f_30 = 109029619;
	Var2.f_47 = 109029619;
	iVar69 = 0;
	while (iVar69 < 3)
	{
		iVar70 = &uParam0->f_379.f_438[iVar69];
		if (iVar70 < 0)
		{
			if (iVar69 == 1)
			{
				func_2173(&Var2);
				func_2174(uParam0, 17, &Var2);
			}
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			bVar0 = uParam0->f_379[iVar70]->f_14 & 256 > 0;
			bVar1 = uParam0->f_379[iVar70]->f_14 & 512 > 0;
			switch (iVar69)
			{
				case 0:
					if (!bVar1)
					{
						func_2177(uParam0, uParam0->f_379[iVar70]->f_4);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(uParam0->f_379[iVar70]->f_4, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					func_2180(uParam0, uParam0->f_379.f_438[iVar69], &Var2);
					func_2174(uParam0, 17, &Var2);
					break;
			}
		}
		iVar69++;
	}
}

void func_1670(var uParam0)
{
	Var8.f_2 = 109029619;
	Var8.f_5 = -1082130432;
	Var8.f_30 = 109029619;
	Var8.f_47 = 109029619;
	iVar75 = 0;
	while (iVar75 < 4)
	{
		iVar76 = &uParam0->f_379.f_438[iVar75];
		if (iVar76 < 0)
		{
			if (iVar75 == 3)
			{
				func_2173(&Var8);
				func_2174(uParam0, 17, &Var8);
			}
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar76]->f_4;
			bVar1 = uParam0->f_379[iVar76]->f_14 & 12 > 0;
			iVar5 = floor(uParam0->f_379[iVar76]->f_5);
			bVar2 = uParam0->f_379[iVar76]->f_14 & 64 > 0;
			Var6 = { func_2176(iVar0, bVar2, bVar1, iVar5) };
			bVar3 = uParam0->f_379[iVar76]->f_14 & 256 > 0;
			bVar4 = uParam0->f_379[iVar76]->f_14 & 512 > 0;
			switch (iVar75)
			{
				case 0:
					if (!bVar4)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar3, 3, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var6);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar76]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					func_2180(uParam0, uParam0->f_379.f_438[iVar75], &Var8);
					func_2174(uParam0, 17, &Var8);
					break;
			}
		}
		iVar75++;
	}
}

void func_1671(var uParam0)
{
	Var6.f_2 = 109029619;
	Var6.f_5 = -1082130432;
	Var6.f_30 = 109029619;
	Var6.f_47 = 109029619;
	iVar73 = 0;
	while (iVar73 < 4)
	{
		iVar74 = &uParam0->f_379.f_438[iVar73];
		if (iVar74 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar74]->f_4;
			bVar1 = uParam0->f_379[iVar74]->f_14 & 12 > 0;
			bVar2 = uParam0->f_379[iVar74]->f_14 & 64 > 0;
			iVar3 = floor(uParam0->f_379[iVar74]->f_5);
			Var4 = { func_2176(iVar0, bVar2, bVar1, iVar3) };
			switch (iVar73)
			{
				case 0:
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, 1, 2, 0, 0, 1));
					break;
				case 1:
					_databinding_write_data_string(&(uParam0->f_12[4]), &Var4);
					_databinding_write_data_hash_string(&(uParam0->f_12[6]), uParam0->f_379[iVar74]->f_2);
					func_2178(uParam0, 5);
					break;
				case 2:
					_databinding_write_data_string(&(uParam0->f_12[7]), &Var4);
					_databinding_write_data_hash_string(&(uParam0->f_12[9]), uParam0->f_379[iVar74]->f_2);
					func_2178(uParam0, 8);
					break;
				case 3:
					func_2180(uParam0, uParam0->f_379.f_438[iVar73], &Var6);
					func_2174(uParam0, 17, &Var6);
					break;
			}
		}
		iVar73++;
	}
}

void func_1672(var uParam0)
{
	iVar3 = 0;
	while (iVar3 < 1)
	{
		iVar4 = &uParam0->f_379.f_438[iVar3];
		if (iVar4 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar4]->f_4;
			bVar1 = uParam0->f_379[iVar4]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar4]->f_14 & 512 > 0;
			switch (iVar3)
			{
				case 0:
					if (!bVar2)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar1, 3, 0, 0, 1));
					break;
			}
		}
		iVar3++;
	}
}

void func_1673(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 5)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			iVar0 = uParam0->f_379[iVar71]->f_4;
			bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			switch (iVar70)
			{
				case 0:
					if (!bVar2)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar1, 3, 0, 0, 1));
					break;
				case 1:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 17, &Var3);
					break;
				case 2:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 18, &Var3);
					break;
				case 3:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 19, &Var3);
					break;
				case 4:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 20, &Var3);
					break;
			}
		}
		iVar70++;
	}
}

void func_1674(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar70 = 0;
	while (iVar70 < 4)
	{
		iVar71 = &uParam0->f_379.f_438[iVar70];
		if (iVar71 < 0)
		{
		}
		else
		{
			bVar1 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
			bVar2 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			iVar0 = uParam0->f_379[iVar71]->f_4;
			switch (iVar70)
			{
				case 0:
					_databinding_write_data_bool(&(uParam0->f_12[2]), true);
					if (!bVar2)
					{
						func_2177(uParam0, iVar0);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar0, bVar1, 2, 0, 0, 1));
					break;
				case 1:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 17, &Var3);
					break;
				case 2:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 18, &Var3);
					break;
				case 3:
					func_2180(uParam0, uParam0->f_379.f_438[iVar70], &Var3);
					func_2174(uParam0, 19, &Var3);
					break;
			}
		}
		iVar70++;
	}
}

void func_1675(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 1)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				iVar69 = 0;
				while (iVar69 < 4)
				{
					if (iVar69 < &uParam0->f_379.f_228[0])
					{
						func_2180(uParam0, (*uParam0->f_379.f_233[0])[iVar69], &Var0);
						func_2174(uParam0, (17 + iVar69), &Var0);
					}
					else
					{
						func_2173(&Var0);
						func_2174(uParam0, (17 + iVar69), &Var0);
					}
					iVar69++;
				}
				break;
		}
		iVar67++;
	}
}

void func_1676(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 2)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				func_2180(uParam0, uParam0->f_379.f_438[iVar67], &Var0);
				func_2174(uParam0, 17, &Var0);
				break;
			case 1:
				func_2180(uParam0, uParam0->f_379.f_438[iVar67], &Var0);
				func_2174(uParam0, 18, &Var0);
				break;
		}
		iVar67++;
	}
}

void func_1677(var uParam0)
{
	Var3.f_2 = 109029619;
	Var3.f_5 = -1082130432;
	Var3.f_30 = 109029619;
	Var3.f_47 = 109029619;
	iVar71 = 0;
	while (iVar71 < 2)
	{
		iVar72 = &uParam0->f_379.f_438[iVar71];
		if (iVar72 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar72 != 666)
			{
				iVar2 = uParam0->f_379[iVar72]->f_4;
				bVar0 = uParam0->f_379[iVar72]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar72]->f_14 & 512 > 0;
			}
			switch (iVar71)
			{
				case 0:
					if (!bVar1)
					{
						func_2177(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					iVar73 = 0;
					while (iVar73 < 10)
					{
						if (func_2181(&(uParam0->f_379.f_228[1]), iVar73))
						{
							func_2180(uParam0, (*uParam0->f_379.f_233[1])[iVar70], &Var3);
							func_2174(uParam0, (17 + iVar73), &Var3);
							iVar70++;
						}
						else
						{
							func_2173(&Var3);
							func_2174(uParam0, (17 + iVar73), &Var3);
						}
						iVar73++;
					}
					break;
			}
		}
		iVar71++;
	}
}

void func_1678(var uParam0)
{
	Var0.f_2 = 109029619;
	Var0.f_5 = -1082130432;
	Var0.f_30 = 109029619;
	Var0.f_47 = 109029619;
	iVar67 = 0;
	while (iVar67 < 1)
	{
		iVar68 = &uParam0->f_379.f_438[iVar67];
		if (iVar68 < 0)
		{
			return;
		}
		switch (iVar67)
		{
			case 0:
				iVar69 = 0;
				while (iVar69 < 8)
				{
					if (iVar69 < &uParam0->f_379.f_228[0])
					{
						func_2180(uParam0, (*uParam0->f_379.f_233[0])[iVar69], &Var0);
						func_2174(uParam0, (17 + iVar69), &Var0);
					}
					else
					{
						func_2173(&Var0);
						func_2174(uParam0, (17 + iVar69), &Var0);
					}
					iVar69++;
				}
				break;
		}
		iVar67++;
	}
}

void func_1679(var uParam0)
{
	Var4.f_2 = 109029619;
	Var4.f_5 = -1082130432;
	Var4.f_30 = 109029619;
	Var4.f_47 = 109029619;
	iVar3 = 0;
	while (iVar3 < 2)
	{
		iVar72 = &uParam0->f_379.f_438[iVar3];
		if (iVar72 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar72 != 666)
			{
				iVar2 = uParam0->f_379[iVar72]->f_4;
				bVar0 = uParam0->f_379[iVar72]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar72]->f_14 & 512 > 0;
			}
			switch (iVar3)
			{
				case 0:
					if (!bVar1)
					{
						func_2177(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					iVar73 = 0;
					while (iVar73 < 10)
					{
						if (func_2181(&(uParam0->f_379.f_228[1]), iVar73))
						{
							func_2180(uParam0, (*uParam0->f_379.f_233[1])[iVar71], &Var4);
							func_2174(uParam0, (17 + iVar73), &Var4);
							iVar71++;
						}
						else
						{
							func_2173(&Var4);
							func_2174(uParam0, (17 + iVar73), &Var4);
						}
						iVar73++;
					}
					break;
			}
		}
		iVar3++;
	}
}

void func_1680(var uParam0)
{
	Var4.f_2 = 109029619;
	Var4.f_5 = -1082130432;
	Var4.f_30 = 109029619;
	Var4.f_47 = 109029619;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar71 = &uParam0->f_379.f_438[iVar3];
		if (iVar71 < 0)
		{
		}
		else
		{
			_databinding_write_data_bool(&(uParam0->f_12[2]), true);
			_databinding_write_data_bool(&(uParam0->f_12[3]), true);
			if (iVar71 != 666)
			{
				iVar2 = uParam0->f_379[iVar71]->f_4;
				bVar0 = uParam0->f_379[iVar71]->f_14 & 256 > 0;
				bVar1 = uParam0->f_379[iVar71]->f_14 & 512 > 0;
			}
			switch (iVar3)
			{
				case 0:
					if (!bVar1)
					{
						func_2177(uParam0, iVar2);
					}
					_databinding_write_data_string(&(uParam0->f_12[0]), func_1962(iVar2, bVar0, 3, 0, 0, 1));
					break;
				case 1:
					func_2180(uParam0, uParam0->f_379.f_438[iVar3], &Var4);
					func_2174(uParam0, 17, &Var4);
					break;
				case 2:
					func_2180(uParam0, uParam0->f_379.f_438[iVar3], &Var4);
					func_2174(uParam0, 18, &Var4);
					break;
				case 3:
					iVar72 = 0;
					while (iVar72 < 10)
					{
						if (iVar72 < &uParam0->f_379.f_228[3])
						{
							func_2180(uParam0, (*uParam0->f_379.f_233[3])[iVar72], &Var4);
							Var4.f_1 = 0;
							func_2174(uParam0, (19 + iVar72), &Var4);
						}
						else
						{
							func_2173(&Var4);
							func_2174(uParam0, (19 + iVar72), &Var4);
						}
						iVar72++;
					}
					break;
			}
		}
		iVar3++;
	}
}

void func_1681(var uParam0)
{
	if (uParam0->f_880 > -1)
	{
		if (!_0x84848e1c0fc67dbb(uParam0->f_880))
		{
			_0x3210bcb36af7621b(uParam0->f_880);
		}
		release_sound_id(uParam0->f_880);
		uParam0->f_880 = -1;
	}
}

void func_1682(var uParam0, int iParam1)
{
	if (uParam0->f_882 == iParam1)
	{
		return;
	}
	uParam0->f_882 = iParam1;
}

void func_1683(int iParam0)
{
	if (!func_527(&Global_1903131, iParam0))
	{
		func_387(Global_1903131, iParam0);
	}
}

void func_1684()
{
	play_sound_frontend("OOB_return", "RDRO_Out_Of_Bounds_Sounds", true, 0);
}

int func_1685(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vVar1 = { vParam0 + vParam3 / Vector(2f, 2f, 2f) };
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { absf(vVar4.x), absf(vVar4.y), absf(vVar4.z) };
	iVar0 = _create_volume_box(vVar1, vParam6, vVar4);
	return iVar0;
}

int func_1686(var uParam0, int iParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!_0x72b2e00c9bac6789(&uParam0, iVar0))
		{
		}
		else
		{
			if (!&Global_1296859->f_22[iVar0])
			{
				return 0;
			}
			if (!((*Global_263042)[iVar0]->f_68 && iParam1) != 0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_1687(int iParam0)
{
	if (!func_941(iParam0))
	{
		return;
	}
	if (_0x4f89dad4156ba145(iParam0))
	{
		return;
	}
	_0x985767f5fa45bc44(iParam0);
}

void func_1688(int iParam0)
{
	func_276(iParam0, Global_3145858->f_37246[iParam0]->f_2, Global_3145858->f_37246[iParam0]->f_7);
}

bool func_1689(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!can_register_mission_vehicles(_0x635423d55ca84fc8(iParam1)))
	{
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (bParam7)
	{
		iVar1 = _0x635423d55ca84fc8(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			if (!func_864(_0x8df5f6a19f99f0d5(iParam1, iVar0)))
			{
				bVar2 = true;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return false;
		}
	}
	iVar3 = _create_mission_train(iParam1, vParam2, bParam5, bParam6, true, bParam8);
	if (!does_entity_exist(iVar3))
	{
		return false;
	}
	_0x06a09a6e0c6d2a84(iVar3, 0);
	*uParam0 = veh_to_net(iVar3);
	if (!network_does_network_id_exist(*uParam0))
	{
		return false;
	}
	if (bParam9)
	{
		_network_set_entity_invisible_to_network(iVar3, true);
	}
	else
	{
		set_network_id_exists_on_all_machines(*uParam0, true);
	}
	return true;
}

void func_1690(int iParam0, int iParam1)
{
	set_train_cruise_speed(iParam1, Global_3145858->f_36480[iParam0]->f_8);
	set_train_speed(iParam1, Global_3145858->f_36480[iParam0]->f_8);
	_0xdd100ce1ebbf37e3(iParam1, is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 3));
	_0x4182c037aa1f0091(iParam1, is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 2));
	_0x1a861f899ebbe17c(iParam1, is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 12));
	set_vehicle_is_considered_by_player(iParam1, is_bit_set(Global_3145858->f_36480[iParam0]->f_7, 6));
	func_2182(iParam1, iParam0);
}

bool func_1691(int iParam0, int iParam1)
{
	if (func_1256(iParam1) && !network_does_network_id_exist(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1692(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1256(iParam1))
	{
		return false;
	}
	if (network_does_network_id_exist(&(Local_5688.f_52.f_54[iParam1])))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (bParam3 && is_bit_set(iLocal_57, 16))
	{
		return false;
	}
	iVar0 = func_1257(iParam1);
	if (!func_2183(Local_5688.f_52.f_54[iParam1], iVar0, iParam0, 0f, 0f, 0f, 0, 0, 1, 1))
	{
		return false;
	}
	func_2184(iParam0, iParam1);
	iVar1 = _0xd08066e00d26c448(&(Local_5688.f_52.f_54[iParam1]));
	_0x9d096a5bd02f953e(iVar1, iParam2);
	if (bParam3)
	{
		set_bit(&iLocal_57, 16);
	}
	return true;
}

bool func_1693(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_864(iParam1))
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
	if (func_2185(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_2186(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(-950361972, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && _0xb9d5bdda88e1bb66(iParam1))
	{
		*uParam0 = veh_to_net(_create_draft_vehicle(iParam1, vParam2, bParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = veh_to_net(create_vehicle(iParam1, vParam2, bParam5, true, bParam6, bParam7, bParam9));
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

void func_1694(int iParam0, int iParam1, bool bParam2)
{
	if (func_2187(Global_3145858->f_13425[iParam1]->f_66))
	{
		_0xbdda0c290c228159(iParam0, -1193642378, Global_3145858->f_13425[iParam1]->f_255);
	}
	if (is_bit_set(Global_3145858->f_13425[iParam1]->f_11, 31))
	{
		freeze_entity_position(iParam0, true);
	}
	set_entity_visible(iParam0, bParam2);
	if (is_this_model_a_boat(Global_3145858->f_13425[iParam1]->f_66))
	{
		if (is_bit_set(Global_3145858->f_13425[iParam1]->f_11, 28))
		{
			set_vehicle_on_ground_properly(iParam0, 0f);
			set_boat_anchor(iParam0, true);
			_0x75b49acd73617437(iParam0, true);
			_set_boat_anchor_buoyancy_coefficient(iParam0, 99999.9f);
		}
		_set_boat_frozen_when_anchored(iParam0, is_bit_set(Global_3145858->f_13425[iParam1]->f_11, 19), 1);
	}
	if (func_2103(Global_3145858->f_13425[iParam1]->f_66))
	{
		if (Global_3145858->f_13425[iParam1]->f_256 > 0f || Global_3145858->f_13425[iParam1]->f_257 > 0f)
		{
			if (Local_5688.f_1521 < 10)
			{
				Local_5688.f_1510[Local_5688.f_1521] = iParam1;
				Local_5688.f_1521++;
			}
		}
	}
}

void func_1695(int iParam0, int iParam1)
{
	if (func_2188(&iVar0, iParam1))
	{
		vVar1 = { Global_3145858->f_13425[iParam1]->f_168 };
		vVar4 = { get_offset_from_entity_in_world_coords(iVar0, vVar1) };
		fVar7 = Global_3145858->f_13425[iParam1]->f_58;
		fVar7 = (fVar7 - get_entity_heading(iVar0));
		set_entity_coords(iParam0, vVar4, true, false, true, true);
		attach_entity_to_entity_physically(iParam0, iVar0, 0, 0, vVar1, 0f, 0f, 0f, 0f, 0f, fVar7, -1f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
	}
}

void func_1696(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	func_2189(uParam1, &uVar0);
	if (!bParam3)
	{
		func_2190(uParam1, &Var2, iParam2);
		Var2 = func_2191(uParam1->f_4);
		Var2.f_4 = func_2192(uParam1->f_5);
		Var2.f_5 = func_2193(uParam1->f_6);
	}
	if (iParam2 == -1 && !bParam3)
	{
		Var2 = func_2191(-1);
		Var2.f_4 = func_2192(-1);
		Var2.f_5 = func_2193(-1);
	}
	func_1942(iParam0, &uVar0, &Var2, 0, 1);
	if (!bParam3)
	{
		iVar10 = 0;
		while (iVar10 <= (2 - 1))
		{
			iVar11 = iVar10;
			func_2194(iParam0, *uParam1->f_10[iVar11], iVar11);
			iVar10++;
		}
	}
}

bool func_1697(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_864(iParam1))
	{
		return false;
	}
	iVar0 = func_2195(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

void func_1698(int iParam0, int iParam1)
{
	func_2196(iParam0, iParam1, 1);
	if (func_2197(iParam0))
	{
		set_bit(&(Local_5688.f_406), iParam1);
	}
}

bool func_1699(int iParam0, bool bParam1)
{
	if (bParam1 && is_bit_set(iLocal_57, 16))
	{
		return false;
	}
	iVar2 = Global_2359296->f_459[iParam0]->f_1;
	vVar3 = { Global_2359296->f_459[iParam0]->f_2 };
	if (Global_2359296->f_459[iParam0]->f_11 == 0 && _0x5affa9ddc87846f8(iVar2))
	{
		if (!func_985(&iVar0, iVar2, vVar3, 1, 0))
		{
			return false;
		}
		iVar1 = net_to_obj(iVar0);
		task_carriable(iVar1, -2141086268, 0, 0, 0);
		_0x18ff3110cf47115d(iVar1, 2, true);
		_0x18ff3110cf47115d(iVar1, 11, true);
		_0x18ff3110cf47115d(iVar1, 4, true);
		if (!is_bit_set(Global_2359296->f_459[iParam0]->f_10, 10))
		{
			_set_pickup_object_glow_enabled(iVar1, true);
		}
		func_2114(iVar1, iParam0, 0);
	}
	else if (Global_2359296->f_459[iParam0]->f_11 == 0 && _0x20135af9c10d2a3d(iVar2))
	{
		if (!_0xf0460c7bf80011ea(1))
		{
			return false;
		}
		iVar1 = create_portable_pickup(-2136239332, vVar3, true, iVar2);
		iVar0 = obj_to_net(iVar1);
		if (!is_bit_set(Global_2359296->f_459[iParam0]->f_10, 10))
		{
			_set_pickup_object_glow_enabled(iVar1, true);
		}
		set_network_id_exists_on_all_machines(iVar0, true);
		func_2114(iVar1, iParam0, 0);
	}
	else
	{
		if (!func_985(&iVar0, iVar2, vVar3, 1, 0))
		{
			return false;
		}
		iVar1 = net_to_obj(iVar0);
		func_2198(iVar1, iParam0);
		if (is_bit_set(Local_5688.f_24.f_2, 0))
		{
			use_particle_fx_asset("scr_dm_ht");
			start_networked_particle_fx_non_looped_on_entity("scr_mp_chest_spawn_smoke", iVar1, func_2199(), func_2199(), 1f, false, false, false);
		}
	}
	Local_5688.f_52.f_111[iParam0] = iVar0;
	if (bParam1)
	{
		set_bit(&iLocal_57, 16);
	}
	return true;
}

int func_1700(var uParam0)
{
	if (uParam0->f_80 != -1 && uParam0->f_81 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1701(int iParam0, int iParam1)
{
	iVar33 = *iParam1;
	iVar34 = 0;
	while (iVar34 <= (*iParam1 - 1))
	{
		uVar0[iVar34] = iParam0[iVar34];
		iVar34++;
	}
	iVar34 = 0;
	while (iVar34 <= (*iParam1 - 1))
	{
		iVar35 = get_random_int_in_range(1000, iVar33 + 1 * 1000);
		iVar36 = (floor((to_float(iVar35) / 1000f)) - 1);
		iVar37 = &uVar0[iVar36];
		if (!func_2200(iVar37, *iParam1))
		{
			func_2201(iVar36, &uVar0, &iVar33);
		}
		else
		{
			iVar39 = -1;
			iVar38 = 0;
			while (iVar38 <= (*iParam1 - 1))
			{
				if (iParam0[iVar38] == iVar37)
				{
					iVar39 = iVar38;
				}
				else
				{
					iVar38++;
				}
			}
			if (iVar39 == -1)
			{
			}
			else
			{
				set_bit(&(Local_5688.f_2409), iVar37);
				func_2201(iVar39, iParam0, iParam1);
				return;
			}
		}
		iVar34++;
	}
}

int func_1702()
{
	iVar0 = -1;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 <= (Global_2359296->f_4834 - 1))
	{
		if (is_bit_set(Local_5688.f_2410, iVar1) || is_bit_set(Local_5688.f_2409, iVar1))
		{
		}
		else
		{
			iVar37 = Global_2359296->f_4836[iVar1]->f_7;
			if (iVar37 > iVar2)
			{
				iVar2 = iVar37;
				iVar3[0] = iVar1;
				iVar36 = 1;
			}
			else if (iVar37 == iVar2)
			{
				iVar3[iVar36] = iVar1;
				iVar36++;
			}
		}
		iVar1++;
	}
	if (iVar36 == 1)
	{
		iVar0 = &iVar3[0];
	}
	else if (iVar36 > 1)
	{
		iVar38 = get_random_int_in_range(1000, iVar36 + 1 * 1000);
		iVar39 = (floor((to_float(iVar38) / 1000f)) - 1);
		iVar0 = &iVar3[iVar39];
	}
	return iVar0;
}

void func_1703()
{
	Local_5688.f_3292 = 0;
}

void func_1704()
{
	Local_5688.f_1130 = -1;
	Local_5688.f_1132 = -1;
	Local_5688.f_1120 = 255;
	StringCopy(&(Local_5688.f_1122), "", 64);
	Local_5688.f_1121 = 255;
	Local_5688.f_1131 = -1;
	Local_5688.f_1133 = -1;
	Local_5688.f_1134 = 0;
}

bool func_1705()
{
	iVar0 = Global_2359296->f_57;
	iVar1 = (iVar0 - 1);
	if (!func_260())
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (!Local_92[iVar2]->f_3 || func_38(iVar2))
			{
			}
			else
			{
				iVar3 = &Local_92[iVar2];
				if (&Local_5688.f_3294[iVar3] < iVar1)
				{
					return false;
				}
			}
			iVar2++;
		}
		return true;
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= (Local_5688.f_857 - 1))
		{
			if (&Local_5688.f_1564[iVar4] <= 0)
			{
			}
			else if (&Local_5688.f_3294[iVar4] < iVar1)
			{
				return false;
			}
			iVar4++;
		}
		return true;
	}
	return false;
}

bool func_1706(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_10501[iVar0]->f_14 == Local_92[iParam0]->f_4)
		{
			iVar2 = iVar0;
		}
		else if (Local_10501[iVar0]->f_14 == Local_92[iParam1]->f_4)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar2 < iVar1)
	{
		return true;
	}
	return false;
}

void func_1707(int iParam0)
{
	Local_5688.f_1120 = Local_92[iParam0]->f_2;
	Local_5688.f_1122 = { Local_92[iParam0]->f_10 };
}

void func_1708(int iParam0)
{
	Local_5688.f_1130 = &Local_92[iParam0];
}

bool func_1709()
{
	return is_bit_set(Local_5688.f_41, 24);
}

bool func_1710()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!Local_92[iVar0]->f_3 || func_38(iVar0))
		{
		}
		else
		{
			if (!is_bit_set(Local_1685[iVar0]->f_2, 18))
			{
				return false;
			}
			if (!Local_92[iVar0]->f_5)
			{
				return false;
			}
			else if (is_bit_set(Local_1685[iVar0]->f_2, 17))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1711()
{
	set_bit(&(Local_5688.f_41), 24);
}

void func_1712()
{
	set_bit(&(Local_5688.f_41), 7);
}

void func_1713()
{
	if (func_260())
	{
		if (func_982())
		{
			Local_5688.f_1132 = Local_5688.f_1133;
			return;
		}
	}
	if (func_983())
	{
		Local_5688.f_1130 = Local_5688.f_1131;
		Local_5688.f_1120 = Local_5688.f_1121;
	}
}

void func_1714(int iParam0)
{
	Local_5688.f_1132 = Local_92[iParam0]->f_1;
}

bool func_1715(int iParam0)
{
	iVar0 = func_742();
	if (iVar0 > iParam0)
	{
		return true;
	}
	return false;
}

void func_1716()
{
	if (!func_492())
	{
		if (func_1163())
		{
			func_2202();
		}
		func_1225(4);
		return;
	}
	if (!func_345(&uLocal_12881))
	{
		func_324(&uLocal_12881, 0, 0);
		return;
	}
	if (!func_760(&uLocal_12881, 500, 0))
	{
		return;
	}
	if (func_168())
	{
		if (func_1163())
		{
			func_2202();
		}
		func_1225(4);
		return;
	}
	if (func_586())
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_1163();
	}
	if (bVar0)
	{
		func_1703();
		func_2203();
	}
	else
	{
		func_1225(4);
	}
}

bool func_1717(int iParam0, int iParam1)
{
	if (&iLocal_776[iParam1] != -1)
	{
		return false;
	}
	if (func_633(iParam1))
	{
		return false;
	}
	if (!is_bit_set(Local_5688.f_1263, iParam1))
	{
		return false;
	}
	iVar0 = int_to_participantindex(iParam0);
	if (&Local_5688.f_1230[iParam1] != iVar0)
	{
		return false;
	}
	return true;
}

bool func_1718()
{
	if (Global_3145858->f_284 > 0)
	{
		iVar1 = floor(((to_float(Global_3145858->f_284) / 100f) * 75f));
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (func_1355(iVar0, 0) >= iVar1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1719()
{
	if (Global_3145858->f_285 != 0)
	{
		iVar0 = Global_3145858->f_285;
		iVar0 = (iVar0 / 100) * 75;
		if (func_742() > iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1720(var uParam0, int iParam1, struct<8> Param2)
{
	if (*uParam0 != *iParam1)
	{
		*uParam0 = *iParam1;
		func_1157(1);
	}
	if (!are_strings_equal(&(uParam0->f_1), &Param2) && !is_string_null_or_empty(&Param2))
	{
		uParam0->f_1 = { Param2 };
		func_1157(1);
	}
}

void func_1721(var uParam0, float fParam1)
{
	if (*uParam0 != fParam1)
	{
		*uParam0 = fParam1;
		func_1157(1);
	}
}

void func_1722(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 2;
	}
	else if (bParam3)
	{
		iVar0 = 1;
	}
	if ((*uParam0)[iParam1]->f_10 != iVar0)
	{
		(*uParam0)[iParam1]->f_10 = iVar0;
		func_1157(1);
	}
}

void func_1723(var uParam0, var uParam1)
{
	func_1578(uParam0, uParam1);
}

void func_1724(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
			func_2204(iParam0, 0, 1);
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
			func_2205(iParam0, 0);
			bVar0 = true;
		}
		func_2206(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1725(int iParam0, int iParam1, int iParam2)
{
	func_1425(func_260());
	if (func_260())
	{
		if (get_ped_relationship_group_hash(iParam1) != func_147(iParam2))
		{
			set_ped_relationship_group_hash(iParam1, func_147(iParam2));
			if (Local_5688.f_568[iParam0]->f_1 == Local_1685[iLocal_71]->f_3)
			{
				if (is_bit_set(&(Global_2359296->f_74[Local_1685[iLocal_71]->f_3]), 0))
				{
					set_ped_can_be_targetted(iParam1, true);
				}
				else
				{
					set_ped_can_be_targetted(iParam1, false);
				}
			}
			else
			{
				set_ped_can_be_targetted(iParam1, true);
			}
		}
	}
	else if (get_ped_relationship_group_hash(iParam1) != func_2207(iParam0))
	{
		set_ped_relationship_group_hash(iParam1, func_2207(iParam0));
		set_ped_can_be_targetted(iParam1, true);
	}
}

Vector3 func_1726(int iParam0, int iParam1)
{
	vVar0.x = &Global_3145858->f_57980[iParam0]->f_3[iParam1];
	iVar3 = Global_3145858->f_57980[iParam0]->f_3[iParam1]->f_3;
	if (iVar3 == -1)
	{
		vVar0.f_1 = -1;
	}
	else if (iVar3 == -2)
	{
		vVar0.f_1 = 0;
	}
	else
	{
		if (iVar3 == 0)
		{
			iVar3 = 2;
		}
		vVar0.f_1 = (get_max_ammo_in_clip(iLocal_81, vVar0.x, true) * iVar3);
	}
	return vVar0;
}

int func_1727(int iParam0)
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

int func_1728(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -512310598;
		case 2:
			return -273652689;
		case 3:
			return 240043260;
		case 4:
			return -1726449085;
		case 5:
			return -630290199;
		case 6:
			return -1899158261;
		case 7:
			return 1161436106;
		case 8:
			return -1356044053;
		case 9:
			return 1162603881;
		case 10:
			return -195591998;
		case 11:
			return -1708466388;
		case 12:
			return 1812426623;
		case 13:
			return -2134370571;
		case 14:
			return -821459456;
		case 15:
			return -811649290;
		case 16:
			return 492126343;
		case 17:
			return -1915012460;
		case 18:
			return 70946373;
		case 19:
			return 1690199860;
		case 20:
			return -795906647;
		case 21:
			return 1905099953;
		case 22:
			return 1834964020;
		case 23:
			return 160396598;
		case 24:
			return -1369841721;
		case 25:
			return 2623192;
		case 26:
			return -1315230160;
		case 27:
			return 1097033514;
		case 28:
			return -2074263068;
		case 29:
			return -1194356600;
		case 30:
			return 1529593823;
		case 31:
			return -1217346486;
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

bool func_1729(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var35 = 717890880;
	Var35.f_1 = -428847177;
	Var35.f_2 = 459292749;
	Var35.f_3 = 1;
	Var35.f_4 = iParam0;
	_0x91ded5dd64bb2691(&Var35);
	if (iParam3 == 0)
	{
		iParam3 = func_2208();
	}
	iVar42 = func_2209(iParam3 == 24043185, 1830115867, 472588819);
	iVar43 = func_2209(iParam3 == 24043185, 40357956, -1830132248);
	while (_0xed4413cee1bf142c(&Var35))
	{
		if (_0x44b3a36933ac009c(&iVar0, &Var35, iVar42))
		{
			if (iVar2 >= 15)
			{
				return false;
			}
			iVar3[iVar2] = iVar0;
			iVar19[iVar2] = 0;
			if (_0x44b3a36933ac009c(&iVar0, &Var35, iVar43))
			{
				iVar19[iVar2] = iVar0;
			}
			iVar2++;
		}
	}
	iVar1 = get_random_int_in_range(0, iVar2);
	*iParam1 = &iVar3[iVar1];
	*iParam2 = &iVar19[iVar1];
	return true;
}

void func_1730(int iParam0, int iParam1, int iParam2)
{
	_set_ped_body_component(iParam0, iParam1);
	if (iParam2 != 0)
	{
		func_1295(7, iParam2, 0, iParam0, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_1731(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1732(vector3 vParam0)
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

int func_1733()
{
	bVar0 = func_2210();
	if (!bVar0)
	{
		fVar1 = (1f / to_float(Global_3145858->f_240));
	}
	fVar2 = get_random_float_in_range(0f, 1f);
	fVar3 = 0f;
	iVar4 = 0;
	while (iVar4 <= (Global_3145858->f_240 - 1))
	{
		if (bVar0)
		{
			fVar1 = Global_3145858->f_241[iVar4]->f_4;
		}
		if (fVar2 > (fVar3 + fVar1))
		{
			fVar3 = (fVar3 + fVar1);
		}
		else
		{
			return iVar4;
		}
		iVar4++;
	}
	return 0;
}

int func_1734(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 669657108;
		case 1:
			return 821931868;
		case 2:
			return -1721991356;
		case 3:
			return -702816767;
		case 4:
			return 2137137442;
		case 5:
			return 1974067816;
		case 6:
			return -173507739;
		case 7:
			return 839715153;
		case 8:
			return 1500834021;
		case 9:
			return -1148613331;
		case 10:
			return 433385945;
		case 11:
			return 1420204096;
		case 12:
			return -1317052143;
		case 13:
			return -416908843;
		case 14:
			return 212278652;
		case 15:
			return -273223690;
		case 16:
			return 1679686673;
		case 17:
			return 603685163;
		case 18:
			return 1632247697;
		case 19:
			return -1233681761;
		case 20:
			return 2082228755;
		case 21:
			return 725623432;
		case 22:
			return 0;
		case 23:
			return -1439599467;
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

void func_1735(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	Var1 = { *Global_3145858->f_59128[iParam0]->f_2[iParam2]->f_2[iParam3] };
	if (Var1.f_5 != 0)
	{
		if (!func_2211(Var1.f_5, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (Var1.f_6 != 0)
		{
			func_2212(uParam1, Var1.f_6, Var1.f_8, Var1.f_7);
		}
		return;
	}
	switch (Var1)
	{
		case 0:
			break;
		case -2146195739:
		case -2102598896:
		case -2001419676:
		case -1789546657:
		case -1014417162:
		case -315804721:
		case 49341937:
		case 303004584:
		case 492771412:
		case 781349465:
		case 1327275958:
		case 1478419397:
		case 1502610788:
		case 1665048342:
			if (is_bit_set(Var1.f_1, 0))
			{
				iVar10 = 0;
				while (iVar10 <= (Var1.f_4 - 1))
				{
					func_2212(uParam1, func_2213(Var1), 1, 0);
					iVar10++;
				}
			}
			else
			{
				func_2212(uParam1, func_2213(Var1), Var1.f_4, 0);
			}
			break;
		case 63426679:
			if (Var1.f_2 != 0)
			{
				func_2212(uParam1, Var1.f_2, Var1.f_4, Var1.f_3);
			}
			break;
		case -2049272656:
			iVar12 = func_2214(&iVar11);
			if (iVar12 != 0 && iVar11 > 0)
			{
				func_2212(uParam1, iVar12, (Var1.f_4 * iVar11), 0);
			}
			break;
		default:
			break;
	}
}

int func_1736(int iParam0, int iParam1, int iParam2)
{
	Var1 = { *Global_3145858->f_59128[iParam0]->f_2[iParam1]->f_2[iParam2] };
	if (func_857(Var1.f_6) != 151)
	{
		if (Var1.f_5 != 0)
		{
			iVar0 = 1;
		}
	}
	switch (Var1)
	{
		case -2049272656:
		case -2001419676:
		case 0:
		case 49341937:
		case 492771412:
		case 1665048342:
			iVar10 = 0;
			break;
		case 63426679:
			if (func_857(Var1.f_2) != 151)
			{
				iVar10 = 1;
			}
			break;
		case -2146195739:
		case -2102598896:
		case -1789546657:
		case -1014417162:
		case -315804721:
		case 303004584:
		case 781349465:
		case 1327275958:
		case 1478419397:
		case 1502610788:
			iVar10 = 1;
			break;
	}
	if (iVar0 > iVar10)
	{
		return iVar0;
	}
	return iVar10;
}

int func_1737()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_1738(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_1739()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_1740(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

int func_1741(int iParam0)
{
	iVar0 = -1;
	if (func_2215(&Var1, iParam0))
	{
		iVar0 = ((func_2216() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1742(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1743(int iParam0, int iParam1)
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

int func_1744(int iParam0)
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

int func_1745(int iParam0)
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

bool func_1746(int iParam0)
{
	iVar0 = func_2217(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1747(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

void func_1748(int iParam0, int iParam1)
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
			func_2218((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_2218(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_252(*Global_1900736->f_1[0]))
	{
		func_880(*Global_1900736->f_1[0], 3);
	}
}

bool func_1749(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_1750(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1751(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1752(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1753(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1754(int iParam0)
{
	iVar0 = func_1281(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

int func_1755(int iParam0)
{
	if (func_1749(iParam0))
	{
		return (func_1282(iParam0) % 32);
	}
	return &Global_1296859;
}

bool func_1756(int iParam0)
{
	iVar0 = func_1288(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_1757(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1281(iParam1, 1);
	iVar1 = func_1288(iParam0, 1);
	iVar2 = func_1284(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_2219(iVar3, 1);
		if (!func_2220(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = (&Global_1146212->f_2169[iVar5]->f_1[iVar1] - 1);
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 - func_2221(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2222(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2223(iVar6))
		{
		}
		else
		{
			iVar8 = func_2224(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = (Global_1146212->f_21645[iVar8][iVar1] - 1);
			if (Global_1146212->f_21645[iVar8][iVar1] <= 0)
			{
				_0xb909149f2bb5f6da(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			}
			if (!_0x80e9c316ef84dd81(&(Global_1146212->f_21645[iVar8]->f_200)))
			{
				Global_1146212->f_21645[iVar8]->f_208 = 0;
				func_2225(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_1758(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1759(int iParam0, int iParam1)
{
	if (!func_1756(iParam0))
	{
		return false;
	}
	if (!func_2226(iParam1))
	{
		return false;
	}
	iVar0 = func_2227(iParam1, 1);
	return &Global_1146212->f_35859.f_9286[iVar0] == iParam0;
}

Vector3 func_1760(int iParam0)
{
	iVar0 = func_2228(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *Global_1146212->f_35859.f_9503[iVar0];
}

bool func_1761(vector3 vParam0)
{
	if (!func_1756(vParam0.x))
	{
		return false;
	}
	if (!func_904(vParam0.y))
	{
		return false;
	}
	if (!func_2229(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1762(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1281(iParam1, 1);
	iVar1 = func_1288(iParam0, 1);
	iVar2 = func_1284(&(Global_1146212->f_35859.f_919[iVar0]), 1);
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
		iVar5 = func_2219(iVar3, 1);
		if (!func_2220(iVar3))
		{
		}
		else
		{
			Global_1146212->f_2169[iVar5]->f_1[iVar1] = &Global_1146212->f_2169[iVar5]->f_1[iVar1] + 1;
			Global_1146212->f_2169[iVar5]->f_201 = (Global_1146212->f_2169[iVar5]->f_201 + func_2221(Global_1146212->f_35859.f_3116[iVar1]->f_6[iVar4]));
			func_2230(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1146212->f_35859.f_3116[iVar1]->f_28)
	{
		iVar6 = &Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7];
		if (!func_2223(iVar6))
		{
		}
		else if (!func_2231(Global_1146212->f_35859.f_3116[iVar1]->f_17[iVar7]))
		{
		}
		else
		{
			iVar8 = func_2224(iVar6, 1);
			(*Global_1146212->f_21645[iVar8])[iVar1] = Global_1146212->f_21645[iVar8][iVar1] + 1;
			_0xe84aac1b22a73e99(&(Global_1146212->f_21645[iVar8]->f_200), iVar1);
			if (!Global_1146212->f_21645[iVar8]->f_208)
			{
				Global_1146212->f_21645[iVar8]->f_208 = 1;
				func_2232(iVar6);
			}
		}
		iVar7++;
	}
	func_2233(Global_1146212->f_35859.f_3116[iVar1]->f_2);
	return true;
}

void func_1763(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_2226(iParam0))
	{
		return;
	}
	iVar0 = func_2227(iParam0, 1);
	if (!func_1756(iParam1))
	{
		return;
	}
	if (!func_904(iParam2))
	{
		return;
	}
	if (!func_2229(iParam3))
	{
		return;
	}
	Global_1146212->f_35859.f_9286[iVar0] = iParam1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = iParam2;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = iParam3;
}

void func_1764(int iParam0)
{
	if (!func_2226(iParam0))
	{
		return;
	}
	iVar0 = func_2227(iParam0, 1);
	Global_1146212->f_35859.f_9286[iVar0] = -1;
	Global_1146212->f_35859.f_9286[iVar0]->f_1 = 0;
	Global_1146212->f_35859.f_9286[iVar0]->f_2 = -1;
}

void func_1765(struct<4> Param0)
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
			if (func_2234(Param0))
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
			func_2235(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_250(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_2234(Param0))
			{
				return;
			}
			func_2235(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_250(8);
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
			if (func_2234(Param0))
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
			func_2235(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_250(8);
			break;
			break;
	}
}

void func_1766(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 && iParam1));
}

bool func_1767(int iParam0, int iParam1)
{
	return (Global_1952637->f_83[iParam0]->f_11 && iParam1) != 0;
}

void func_1768(int iParam0, int iParam1, int iParam2)
{
	Global_1952637->f_83[iParam0]->f_11 = (Global_1952637->f_83[iParam0]->f_11 - (Global_1952637->f_83[iParam0]->f_11 && iParam1));
}

int func_1769(int iParam0)
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
	iVar0 = func_2236(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_2237(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_2238(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_1770(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_2239(iVar0, 1);
		if (!func_1968(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_2240(iVar0, 0);
				func_2241(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_1766(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_1771(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_2242(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return 0;
	}
	if (func_1848(iVar0, -166674229))
	{
		return 0;
	}
	return func_2243(iParam0);
}

int func_1772(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_2239(iVar0, 1);
		if (func_1968(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_2244(iVar0) == -1)
			{
				func_2240(iVar0, 0);
				func_2241(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_1973(iVar2, 2, 6);
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

void func_1773(int iParam0)
{
	func_1973(iParam0, 8, 6);
}

int func_1774(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_2245(&(Global_1952637->f_1058), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_2246(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_2247(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_2248(uParam3, iParam1);
	bVar2 = func_2249(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_2250(uParam2, uParam3, iParam1);
		}
		else
		{
			func_2251(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_2252(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return 0;
		}
		func_2253(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_2254(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_2252(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return 1;
}

void func_1775()
{
	Global_1952637->f_1057 = 0;
}

int func_1776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return 1723535349;
		case 59:
			return -1393798041;
		case 60:
			return 905156700;
		case 61:
			return 151445061;
		case 62:
			return -1983943039;
		case 63:
			return 2021695109;
		case 64:
			return -2086327823;
		case 65:
			return 1623086000;
		case 66:
			return 796310207;
		case 67:
			return -1575244427;
		case 68:
			return -1930399868;
		case 69:
			return 353568324;
		case 70:
			return -469672732;
		case 71:
			return 1717813521;
		case 72:
			return 941437279;
		case 73:
			return -162385832;
		case 74:
			return -892848695;
		case 75:
			return -355092128;
		case 76:
			return 946732137;
		case 77:
			return -79139194;
		case 78:
			return 1382158532;
		case 79:
			return -379874384;
		case 80:
			return 2018657739;
		case 81:
			return 1427070667;
		case 82:
			return -682435976;
		case 83:
			return 1232224440;
		case 84:
			return 1889309476;
		case 85:
			return 1918774327;
		case 86:
			return -32613857;
		case 87:
			return 5611246;
		case 88:
			return 2078792148;
		case 89:
			return 630308764;
		case 90:
			return 1398164246;
		case 91:
			return 2002140369;
		case 92:
			return -1777144780;
		case 93:
			return -1098645728;
		case 94:
			return 640330073;
		case 95:
			return -1330378740;
		case 96:
			return -71551190;
		case 97:
			return 1248971179;
		case 98:
			return -2076515520;
		case 99:
			return 1872332830;
		case 100:
			return -326224139;
		case 101:
			return -2062348046;
		case 102:
			return -1924130593;
		case 103:
			return -29468993;
		case 104:
			return 669386338;
		case 105:
			return -479797100;
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

void func_1777(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_1778(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_2255(iParam0);
	}
	Global_1139381->f_3876.f_2[func_1778(iParam0, 1)] = bParam1;
}

int func_1778(int iParam0, int iParam1)
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

void func_1779(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1780(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2256(&(Global_1139381->f_4796.f_34[iParam0]), &Var0, 2, -1);
	func_2257(&Var0, iParam0, 0);
}

void func_1781(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_2259(func_2258(iParam0, 1), &Var0, 0, -1);
	func_2260(Var0, iParam0, 0);
}

int func_1782(int iParam0)
{
	return func_2262(func_2261(iParam0));
}

void func_1783(bool bParam0)
{
	if (bParam0)
	{
		if (func_1276(1))
		{
			func_1277(1);
		}
	}
	else if (!func_1276(1))
	{
		func_1278(1);
	}
}

float func_1784(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1782(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1956200->f_1431.f_26[iParam0]);
		case 1:
			return &(Global_1956200->f_1565.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

int func_1785(int iParam0, float fParam1, int iParam2)
{
	if (!func_2263(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1782(2);
	}
	func_2264(iParam0, fParam1, iParam2);
	if (!is_entity_dead(Global_1296859->f_8))
	{
		set_attribute_points(Global_1296859->f_8, iParam0, floor(fParam1));
	}
	return 1;
}

int func_1786(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1782(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546;
		case 1:
			return Global_1956200->f_1565.f_136;
		default:
			break;
	}
	return -1;
}

bool func_1787()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

void func_1788(int iParam0)
{
	iVar0 = 100;
	switch (func_2208())
	{
		case -1940918681:
		case 1973311174:
			iVar0 = 100;
			break;
		case -1009665394:
		case 1237752161:
			iVar0 = 18;
			break;
	}
	_0x7ff72de061df55e2(iParam0, 0, 1f);
	set_entity_max_health(iParam0, iVar0);
}

void func_1789(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	_set_entity_health(iParam1, iParam0, 0);
}

int func_1790(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1782(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_2;
		case 1:
			return Global_1956200->f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_1791(float fParam0, int iParam1)
{
	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1296859->f_8;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - _get_ped_stamina(iParam1));
	_charge_ped_stamina(iParam1, fVar0);
}

int func_1792(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1782(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956200->f_1546.f_1;
		case 1:
			return Global_1956200->f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

float func_1793()
{
	return Global_1956200->f_1561.f_3;
}

void func_1794(float fParam0)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	if (!does_entity_exist(iVar1))
	{
		return;
	}
	if (_0xb16223cb7da965f0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - _0xdf66a37936d5f3d9(iVar0));
	func_2265(fVar2, 0, 1);
}

bool func_1795(int iParam0)
{
	return func_2266(iParam0);
}

int func_1796(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1797(var uParam0, int iParam1)
{
	iVar1 = func_2267(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1305(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1305(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return to_float(100);
		case 3:
			return func_2268(uParam0, iParam1);
	}
	return -1f;
}

void func_1798(int iParam0, float fParam1)
{
	func_2269(iParam0, fParam1);
	func_2270(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1799()
{
	func_2271();
	func_2272();
	func_2273();
	func_2274();
}

int func_1800(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(player_ped_id()))
	{
		return 0;
	}
	return func_2275(iParam0, fParam1, bParam2, bParam3);
}

void func_1801()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

bool func_1802(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

void func_1803(int iParam0)
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
		func_1325(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_1804(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

void func_1804(int iParam0)
{
	if (Global_1071686->f_21416.f_1[iParam0]->f_1 != 0)
	{
		Global_1071686->f_21416.f_1[iParam0]->f_2 = 0;
		Global_1071686->f_21416.f_1[iParam0]->f_1 = 0;
	}
}

bool func_1805()
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
	if (!func_252(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_1806(int iParam0, bool bParam1)
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

bool func_1807(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1808(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1809(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_1325(iParam0);
		return false;
	}
	if (func_1808(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_1996(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

int func_1810(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_2276())
	{
		return 0;
	}
	_request_imap(iParam0);
	return 0;
}

int func_1811(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_2276())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

bool func_1812()
{
	return Global_1139381->f_4796;
}

bool func_1813(var uParam0)
{
	if (((((uParam0->f_31 != -1 || uParam0->f_32 != -1) || uParam0->f_33 != -1) || uParam0->f_34 != -1) || uParam0->f_35 != -1) || uParam0->f_36 != -1)
	{
		return true;
	}
	return false;
}

void func_1814(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 > 200)
	{
		*uParam0 = 200;
	}
	if (*uParam1 > 200)
	{
		*uParam1 = 200;
	}
	if (*uParam2 > 200)
	{
		*uParam2 = 200;
	}
}

void func_1815(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6)
{
	func_2277(uParam0, iParam1);
	func_2278(uParam0, iParam3);
	func_2279(uParam0, iParam5);
	func_2280(uParam0, uParam2);
	func_2281(uParam0, uParam4);
	func_2282(uParam0, uParam6);
}

bool func_1816(var uParam0)
{
	if ((uParam0->f_37 != 0 || uParam0->f_38 != 0) || uParam0->f_39 != 0)
	{
		return true;
	}
	return false;
}

void func_1817(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -2)
	{
		iParam1 = func_2283(0, 0);
	}
	func_2284(uParam0, iParam1);
	if (iParam2 == -2)
	{
		iParam2 = func_2283(2, 0);
	}
	func_2285(uParam0, iParam2);
	if (iParam3 == -2)
	{
		iParam3 = func_2283(1, 0);
	}
	func_2286(uParam0, iParam3);
}

bool func_1818(var uParam0)
{
	if (is_bit_set(uParam0->f_6, 29))
	{
		return true;
	}
	return false;
}

void func_1819(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_2261(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_2287(uParam0);
}

void func_1820(var uParam0, struct<12> Param1, var uParam13)
{
	Global_1956200->f_1565.f_117.f_12 = uParam13;
	func_2288(&(Global_1956200->f_1565.f_117), Param1, Param1.f_1);
	func_2289(&(Global_1956200->f_1565.f_117), Param1.f_2, Param1.f_3);
	func_2290(&(Global_1956200->f_1565.f_117), Param1.f_4, Param1.f_5);
	func_2291(&(Global_1956200->f_1565.f_117), Param1.f_6, Param1.f_7);
	func_2292(&(Global_1956200->f_1565.f_117), Param1.f_8, Param1.f_9);
	func_2293(&(Global_1956200->f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_2287(uParam0);
}

void func_1821(var uParam0, bool bParam1)
{
	uParam0->f_22 = bParam1;
	func_2287(uParam0);
}

float func_1822(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1823(var uParam0, float fParam1)
{
	uParam0->f_22.f_1 = fParam1;
	uParam0->f_22.f_2 = 1;
	uParam0->f_6 = 1;
	func_2287(uParam0);
}

bool func_1824(var uParam0, bool bParam1)
{
	if (func_403() == 2094371892)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_73[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1825(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6, int iParam7, var uParam8, bool bParam9)
{
	func_2294(uParam0, 0, iParam1, uParam2, bParam9);
	func_2294(uParam0, 1, iParam3, uParam4, bParam9);
	func_2294(uParam0, 2, iParam5, uParam6, bParam9);
	func_2294(uParam0, 3, iParam7, uParam8, bParam9);
	func_2287(uParam0);
}

void func_1826(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = func_2208();
	iVar3 = 0;
	iVar4 = uParam1->f_2;
	iVar5 = func_2295(uParam1);
	if (func_2296())
	{
		iVar0 = func_2297(255);
		iVar1 = func_2298(255);
		func_2299(uParam0, iVar2, iVar0, 0);
		func_2300(uParam0, iVar1, iVar5, 0, 1, 1, 0);
		func_2301(iVar3, iVar1, iVar4, 0);
		func_1492(uParam2, *uParam3, 1);
		return;
	}
	iVar3 = *uParam1;
	if (func_2302())
	{
		iVar3 = func_2303();
		iVar1 = func_2304();
		iVar4 = func_2305();
	}
	if (!func_2306(iVar3))
	{
		return;
	}
	func_2307(iVar3, &iVar1, &iVar0, iVar5, iVar2, iVar4);
	func_2299(uParam0, iVar2, iVar0, 0);
	func_2300(uParam0, iVar1, iVar5, 0, 1, 1, iVar3);
	func_2301(iVar3, iVar1, iVar4, 0);
	func_1492(uParam2, *uParam3, 1);
}

void func_1827(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_1828(var uParam0, bool bParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = bParam1;
}

void func_1829(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_1178(uParam0, Param1, iParam4);
		func_385(115);
	}
	else
	{
		Global_1139381->f_4854 = { *uParam0 };
		Global_1139381->f_4854.f_13 = { Param1 };
		func_59(115);
	}
}

void func_1830(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
		Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
		if (Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == 0 || Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == -151176215)
		{
			if (&Global_3145858->f_57852[iParam0]->f_4[iVar2] == -160924582)
			{
				Var3 = -160924582;
				Var3.f_1 = 1;
				func_2308(Var3, Var3.f_1, 0, 1, 0, 0, 752097756, 0);
			}
			else if (&Global_3145858->f_57852[iParam0]->f_4[iVar2] == 1652431022)
			{
				Var3 = 1652431022;
				Var3.f_1 = 1;
				func_2308(Var3, Var3.f_1, 0, 1, 0, 0, 752097756, 0);
			}
			else if (func_1987(Var0))
			{
				_0x3b7b7908b7adfb4b(player_ped_id(), Var0);
				func_1986(Var0, Var0.f_1, 752097756);
			}
			else
			{
				func_1988(Var0, Var0.f_1, 752097756);
			}
		}
		iVar2++;
	}
}

void func_1831()
{
	iVar0 = 1;
	_0x644ccb76a76cfbd6(0, 0, false, false, iVar0, 1);
}

void func_1832()
{
	Var2 = { func_2309(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_2310(&Var2, &iVar0, &iVar1, 1))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var17.f_10 = -1;
	Var41.f_9 = -1591664384;
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_2311(iVar16, iVar0, iVar1, 2, &Var17, 1))
		{
		}
		else if (!func_2312(Var17.f_5, &Var41, 0, 1, -1))
		{
			_0x3112adb9d5f3426b(&(Var17.f_5), 1);
		}
		else
		{
			_0x3112adb9d5f3426b(&Var17, 1);
		}
		iVar16++;
	}
	func_912(iVar0);
}

void func_1833(var uParam0, int iParam1)
{
	if (func_359())
	{
		_0xe133c1ec5300f740(uParam0, 1681219929, Global_1901947->f_827.f_3);
		_0xe133c1ec5300f740(uParam0, -1330115686, Global_1901947->f_827.f_5);
		_0xe133c1ec5300f740(uParam0, 218444191, Global_1901947->f_827.f_4);
		_0xe133c1ec5300f740(uParam0, 2113196069, Global_1901947->f_827.f_4);
		_0xe133c1ec5300f740(uParam0, 1950175060, Global_1901947->f_827.f_2);
		_0xe133c1ec5300f740(uParam0, -1878508229, Global_1901947->f_827.f_6);
		_0xe133c1ec5300f740(uParam0, -1639263599, Global_1901947->f_827.f_7);
		_0xe133c1ec5300f740(uParam0, 480079517, Global_1901947->f_827.f_7);
		_0xe133c1ec5300f740(uParam0, 1235846615, Global_1901947->f_827.f_7);
		set_ped_config_flag(iParam1, 169, true);
		set_ped_config_flag(iParam1, 340, true);
		set_ped_config_flag(iParam1, 26, true);
	}
}

void func_1834(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	if (_inventory_get_ped_inventory_id(Global_1296859->f_8) != 3)
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_25 = uParam0;
	Var0.f_25.f_2 = uParam4;
	Var0.f_25.f_1 = uParam2;
	Var0.f_25.f_3 = uParam1;
	Var0.f_25.f_5 = uParam5;
	Var0.f_25.f_4 = uParam3;
	if (Var0.f_25 == -1)
	{
		Var0.f_25 = func_2165(0, 0);
	}
	else if (Var0.f_25 < 1)
	{
		Var0.f_25 = 1;
	}
	else if (Var0.f_25 > 10)
	{
		Var0.f_25 = 10;
	}
	if (Var0.f_25.f_1 == -1)
	{
		Var0.f_25.f_1 = func_2165(2, 0);
	}
	else if (Var0.f_25.f_1 < 1)
	{
		Var0.f_25.f_1 = 1;
	}
	else if (Var0.f_25.f_1 > 10)
	{
		Var0.f_25.f_1 = 10;
	}
	if (Var0.f_25.f_2 == -1)
	{
		Var0.f_25.f_2 = func_2165(1, 0);
	}
	else if (Var0.f_25.f_2 < 1)
	{
		Var0.f_25.f_2 = 1;
	}
	else if (Var0.f_25.f_2 > 10)
	{
		Var0.f_25.f_2 = 10;
	}
	if (Var0.f_25.f_3 == -1)
	{
		Var0.f_25.f_3 = func_1786(0);
	}
	else if (Var0.f_25.f_3 < 1)
	{
		Var0.f_25.f_3 = 1;
	}
	else if (Var0.f_25.f_3 > 200)
	{
		Var0.f_25.f_3 = 200;
	}
	if (Var0.f_25.f_4 == -1)
	{
		Var0.f_25.f_4 = func_1792(0);
	}
	else if (Var0.f_25.f_4 < 1)
	{
		Var0.f_25.f_4 = 1;
	}
	else if (Var0.f_25.f_4 > 200)
	{
		Var0.f_25.f_4 = 200;
	}
	if (Var0.f_25.f_5 == -1)
	{
		Var0.f_25.f_5 = func_1790(0);
	}
	else if (Var0.f_25.f_5 < 1)
	{
		Var0.f_25.f_5 = 1;
	}
	else if (Var0.f_25.f_5 > 200)
	{
		Var0.f_25.f_5 = 200;
	}
	func_2313(Var0.f_25);
	func_2314(Var0.f_25.f_1);
	func_2315(Var0.f_25.f_2);
	func_2316(Var0.f_25.f_3);
	func_2317(Var0.f_25.f_4);
	func_2318(Var0.f_25.f_5);
}

void func_1835(var uParam0, var uParam1, int iParam2)
{
	if ((uParam0->f_31 > -1 || uParam0->f_33 > -1) || uParam0->f_35 > -1)
	{
		func_1625(1);
		func_1626(uParam0->f_31, uParam0->f_33, uParam0->f_35);
		func_1627(uParam0->f_32, 2);
		func_1308(uParam1, iParam2);
		func_1310(uParam1, iParam2);
		func_1309(uParam1, iParam2);
		if (uParam0->f_31 > -1)
		{
			func_2319(0, 0, 0);
		}
		if (uParam0->f_35 > -1)
		{
			func_2319(1, 0, 0);
		}
		if (uParam0->f_33 > -1)
		{
			func_2319(2, 0, 0);
		}
	}
	else
	{
		func_2320(1);
	}
}

void func_1836(int iParam0, int iParam1, int iParam2)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	if (iParam0 == -2)
	{
		iParam0 = func_2283(0, 0);
	}
	func_2321(iParam0);
	if (iParam1 == -2)
	{
		iParam1 = func_2283(2, 0);
	}
	func_2322(iParam1);
	if (iParam2 == -2)
	{
		iParam2 = func_2283(1, 0);
	}
	func_2323(iParam2);
}

void func_1837(bool bParam0)
{
	if (!bParam0 && func_2261(2))
	{
		return;
	}
	func_1819(&(Global_1139381->f_4796), bParam0);
	if (bParam0)
	{
		func_1625(4);
	}
	else
	{
		func_2320(4);
	}
}

void func_1838(var uParam0, bool bParam1)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1821(uParam0, bParam1);
}

void func_1839(var uParam0, float fParam1)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1823(uParam0, fParam1);
}

void func_1840(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, bool bParam8)
{
	if (!Global_1139381->f_4796)
	{
		return;
	}
	func_1825(&(Global_1139381->f_4796), iParam0, uParam1, iParam2, uParam3, iParam4, uParam5, iParam6, uParam7, bParam8);
	func_1625(5);
	func_1632(&(Global_1139381->f_4796.f_34[0]), Global_1139381->f_4796.f_34[0]->f_1, 0);
	func_1632(&(Global_1139381->f_4796.f_34[1]), Global_1139381->f_4796.f_34[1]->f_1, 1);
	func_1632(&(Global_1139381->f_4796.f_34[2]), Global_1139381->f_4796.f_34[2]->f_1, 2);
	func_1632(&(Global_1139381->f_4796.f_34[3]), Global_1139381->f_4796.f_34[3]->f_1, 3);
	func_1633();
}

void func_1841(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_2297(255);
	iVar1 = func_2208();
	iVar2 = 0;
	iVar3 = uParam0->f_2;
	iVar4 = uParam0->f_1;
	iVar5 = func_2295(uParam0);
	if (!func_2306(*uParam0))
	{
		func_2324();
		func_2325();
		func_188();
		func_1492(uParam1, *iParam2, 1);
		return;
	}
	if (func_2302())
	{
		if (func_2303() == *uParam0)
		{
			return;
		}
		if (func_2326())
		{
			return;
		}
	}
	iVar2 = *uParam0;
	func_2307(iVar2, &iVar4, &iVar0, iVar5, iVar1, iVar3);
	func_2327(iVar1, iVar0, 0);
	func_2328(iVar4, iVar5, 0);
	func_2325();
	func_2301(iVar2, iVar4, iVar3, uParam0->f_6);
	func_1492(uParam1, *iParam2, 1);
}

bool func_1842(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0 = { *uParam0 };
	StringCopy(&cVar16, func_2329(iParam1), 24);
	iVar19 = get_length_of_literal_string(&cVar16);
	if (are_strings_equal(_get_text_substring(&Var0, iParam2, (iParam2 + iVar19)), &cVar16))
	{
		Var20 = { func_2330(iParam1, uParam3, bParam4) };
		*uParam0 = { func_2331(Var0, iVar19, iParam2, Var20) };
		return true;
	}
	return false;
}

bool func_1843(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

bool func_1844()
{
	return !&Global_1913504;
}

void func_1845(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 0;
	while (iVar0 < Global_1913504->f_3)
	{
		if ((((&Global_1913504->f_4[iVar0] == iParam0 && Global_1913504->f_4[iVar0]->f_2 == bParam2) && Global_1913504->f_4[iVar0]->f_3 == bParam3) && Global_1913504->f_4[iVar0]->f_4 == bParam4) && Global_1913504->f_4[iVar0]->f_5 == bParam5)
		{
			Global_1913504->f_4[iVar0]->f_1 = (Global_1913504->f_4[iVar0]->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913504->f_3 < 19)
	{
		Global_1913504->f_4[Global_1913504->f_3] = iParam0;
		Global_1913504->f_4[Global_1913504->f_3]->f_1 = iParam1;
		Global_1913504->f_4[Global_1913504->f_3]->f_2 = bParam2;
		Global_1913504->f_4[Global_1913504->f_3]->f_3 = bParam3;
		Global_1913504->f_4[Global_1913504->f_3]->f_4 = bParam4;
		Global_1913504->f_4[Global_1913504->f_3]->f_5 = bParam5;
		Global_1913504->f_3++;
	}
}

bool func_1846(int iParam0, int iParam1)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

int func_1847(int iParam0)
{
	if (!func_437(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1848(int iParam0, int iParam1)
{
	if (!func_437(iParam0, 0))
	{
		return func_2333(func_2332(iParam0), iParam1);
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

char* func_1849(int iParam0)
{
	if (func_1848(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1848(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1848(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1848(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1848(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1848(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1848(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1848(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_1848(iParam0, -352095726) || func_1848(iParam0, -2014783736)) || func_1848(iParam0, -545064757)) || func_1848(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_1850(int iParam0)
{
	if (func_1848(iParam0, -189374246))
	{
		if (((func_2334(iParam0, -1305775593) || func_2334(iParam0, 1384151091)) || func_2334(iParam0, 2075388272)) || func_2334(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_1848(iParam0, -753854379) || func_1848(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_1851(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_1852(int iParam0)
{
	if (!func_437(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35]->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35] != 0)
				{
					return &(Var0.f_18[iVar35]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_1853(int iParam0)
{
	iVar0 = func_2335(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_2336(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_2337(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_2338(iVar14))
			{
				func_2339(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_2339(iVar11);
	}
	return 0;
}

bool func_1854(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, -949239683))
	{
		return true;
	}
	return false;
}

int func_1855(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_437(iParam0, 0) && !func_2340(func_2332(iParam0), 2))
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

int func_1856(int iParam0, int iParam1)
{
	iVar0 = func_2341(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_1857(int iParam0, char* sParam1)
{
	if (!func_437(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_2342(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_2343(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_2344(iParam0), 128);
	if (is_string_null_or_empty(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + get_length_of_literal_string(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

int func_1858()
{
	return Global_1051252->f_12;
}

char* func_1859()
{
	return "unnamed";
}

int func_1860(int iParam0)
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

void func_1861(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!is_string_null_or_empty(sParam1))
	{
		*iParam0 = func_566(sParam1, sParam2, iParam3, 0, 0, 0, bParam5, bParam5);
	}
	else
	{
		*iParam0 = func_564(sParam2, iParam4, iParam3, 0, 0, 0, bParam5);
	}
}

bool func_1862(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

void func_1863(int iParam0, int iParam1)
{
	if (iParam0 >= 8 || iParam0 < 0)
	{
		return;
	}
	Local_5688.f_876[iParam0] = (&Local_5688.f_876[iParam0] + iParam1);
}

void func_1864(int iParam0, int iParam1)
{
	if (iParam0 >= 8 || iParam0 < 0)
	{
		return;
	}
	Local_5688.f_912[iParam0] = (&Local_5688.f_912[iParam0] + iParam1);
}

void func_1865(int iParam0, int iParam1)
{
	Local_5688.f_954[iParam0] = (&Local_5688.f_954[iParam0] + iParam1);
}

void func_1866(int iParam0, int iParam1)
{
	if (iParam0 >= 8 || iParam0 < 0)
	{
		return;
	}
	Local_5688.f_894[iParam0] = (&Local_5688.f_894[iParam0] + iParam1);
}

void func_1867(int iParam0, int iParam1)
{
	Local_5688.f_987[iParam0] = (&Local_5688.f_987[iParam0] + iParam1);
}

void func_1868(int iParam0, int iParam1)
{
	if (iParam0 >= 8 || iParam0 < 0)
	{
		return;
	}
	Local_5688.f_885[iParam0] = (&Local_5688.f_885[iParam0] + iParam1);
}

void func_1869(int iParam0, int iParam1)
{
	Local_5688.f_1053[iParam0] = (&Local_5688.f_1053[iParam0] + iParam1);
}

void func_1870(int iParam0, int iParam1)
{
	Local_5688.f_1020[iParam0] = (&Local_5688.f_1020[iParam0] + iParam1);
}

void func_1871(int iParam0, int iParam1)
{
	if (iParam0 >= 8 || iParam0 < 0)
	{
		return;
	}
	Local_5688.f_903[iParam0] = (&Local_5688.f_903[iParam0] + iParam1);
}

bool func_1872(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1873(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1874(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!_0x7907969497ea92f5(*uParam0))
	{
		return false;
	}
	if (!_0x603ac35fd4602c76(*uParam0))
	{
		return false;
	}
	return true;
}

void func_1875(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		iVar1 = func_2345(iVar0, 1);
		_datafile_register_query(*uParam0, iVar1, func_2346(iVar1));
		iVar0++;
	}
}

int func_1876(int iParam0)
{
	switch (iParam0)
	{
		case 985101275:
			return 150;
		case 228889374:
			return 300;
		case 1067902278:
			return 300;
		default:
			break;
	}
	return -1;
}

int func_1877(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	return func_2347(iVar0);
}

int func_1878(int iParam0)
{
	iVar0 = get_entity_model(iParam0);
	return func_2348(iVar0);
}

void func_1879(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam1)
	{
		iVar0 |= 1;
	}
	if (bParam9)
	{
		iVar0 |= 128;
	}
	if (bParam2)
	{
		iVar0 |= 2;
	}
	if (bParam3)
	{
		iVar0 |= 4;
	}
	if (bParam4)
	{
		iVar0 |= 8;
	}
	if (bParam5)
	{
		iVar0 |= 16;
	}
	if (bParam6)
	{
		iVar0 |= 32;
	}
	if (bParam7)
	{
		iVar0 |= 64;
	}
	set_entity_proofs(iParam0, iVar0, false);
	if (bParam8 && is_entity_a_ped(iParam0))
	{
		set_ped_config_flag(_0x3ffb15534067dcd4(iParam0), 263, true);
	}
}

bool func_1880(int iParam0)
{
	if (func_2349(iParam0) > 1)
	{
		return true;
	}
	return false;
}

bool func_1881(var uParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(*uParam0))
	{
		return true;
	}
	request_model(-2104632348, false);
	if (has_model_loaded(-2104632348))
	{
		*uParam0 = create_object(-2104632348, vParam1, false, false, false, false, true);
		set_entity_heading(*uParam0, fParam4);
		return true;
	}
	return false;
}

void func_1882(int iParam0, struct<33> Param1, int iParam34)
{
	iVar0 = 8913159;
	if (func_424() || func_31(69))
	{
		iVar0 |= 8;
	}
	if (is_bit_set(Param1.f_13, 0) || func_1889(Param1))
	{
		iVar0 |= 512;
	}
	else if (is_bit_set(Param1.f_13, 11))
	{
		iVar0 |= 1024;
	}
	if (is_bit_set(Param1.f_13, 4) || iParam34 & 2 > 0)
	{
		iVar0 |= 65536;
	}
	if (iParam34 & 4 > 0)
	{
		iVar0 |= 131072;
	}
	if (is_bit_set(Param1.f_13, 9) || iParam34 & 1 > 0)
	{
		iVar0 |= 262144;
	}
	if (is_bit_set(Param1.f_13, 10) || func_424())
	{
		iVar0 |= 16384;
	}
	if (is_bit_set(Param1.f_13, 14))
	{
		iVar0 |= 16;
		iVar0 |= 8;
	}
	if (is_bit_set(Param1.f_13, 3))
	{
		if (!is_bit_set(Param1.f_13, 20))
		{
			iVar0 |= 4194304;
		}
	}
	if (func_469())
	{
		if (is_bit_set(Global_2359296->f_159, 19))
		{
			if (!is_bit_set(Global_2359296->f_160, 19) && !is_bit_set(Param1.f_13, 20))
			{
				iVar0 |= 4194304;
			}
		}
	}
	if (is_bit_set(Param1.f_13, 21))
	{
		iVar0 |= 128;
	}
	*iParam0 = iVar0;
}

Vector3 func_1883(bool bParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (bParam0)
	{
		vVar0 = { 0f, 0f, 1.2f };
	}
	return vVar0;
}

bool func_1884(int iParam0)
{
	switch (iParam0)
	{
		case -457363514:
		case -316827687:
		case 497466042:
		case 544828034:
		case 1979271852:
		case 2012476125:
			return true;
	}
	return false;
}

int func_1885(int iParam0, int iParam1, int iParam2)
{
	iVar0 = get_weapon_type_from_pickup_type(iParam0);
	if (func_1884(iParam0))
	{
		iVar0 = _get_weapon_type_from_ammo_type(_0x44b09a23d728045a(iParam0));
	}
	if (iParam2 != 0)
	{
		get_max_ammo(player_ped_id(), &iVar1, iVar0);
		if (iParam2 > iVar1)
		{
			return iVar1;
		}
		return iParam2;
	}
	if (iVar0 != 0)
	{
		if (iVar0 == 1676963302)
		{
			iVar2 = 2;
		}
		else
		{
			iVar2 = _get_weapon_clip_size(iVar0);
		}
		return (iVar2 * iParam1);
	}
	switch (iParam0)
	{
		case -1888453608:
			return 500;
		case 738282662:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1886(int iParam0)
{
	switch (iParam0)
	{
		case -1888453608:
		case -31919185:
		case 738282662:
			return true;
	}
	if (func_424() || func_31(69))
	{
		return true;
	}
	return false;
}

int func_1887(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1888453608:
			return -236946344;
		case -31919185:
			return 178323656;
		case -2136239332:
			return -1657165379;
		case 738282662:
			switch (iParam1)
			{
				case 0:
					return 178323656;
				case 1:
					return 291474213;
				case 2:
					return 1547041634;
				case 3:
					return 888737253;
				case 4:
					return -394012119;
				case 5:
					return -297456495;
				case 6:
					return 70776250;
				default:
					break;
			}
			return 0;
	}
	if (func_424() || func_31(69))
	{
		return func_2350(iParam0);
	}
	return 0;
}

Vector3 func_1888(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	if (!is_bit_set(Param0.f_13, 17))
	{
		return 0f, 0f, Param0.f_4;
	}
	return Param0.f_5;
}

bool func_1889(struct<18> Param0, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)
{
	if (Param0.f_17 == -1888453608)
	{
		if (!is_bit_set(Param0.f_13, 14))
		{
			if (!func_31(38))
			{
				return true;
			}
		}
	}
	else if (!func_31(37))
	{
		return true;
	}
	return false;
}

int func_1890(int iParam0)
{
	switch (iParam0)
	{
		case 737977713:
			return 2;
		case 1135998270:
			return 3;
		case -1789866539:
			return 4;
		case 1831047706:
			return 5;
		case 1246310848:
			return 6;
		case 1108217698:
			return 7;
		case -937226192:
			return 8;
		case 25318363:
			return 11;
		case -1327059943:
			return 12;
		case 1881560238:
			return 13;
		case -224542060:
			return 15;
		case -2035654710:
			return 16;
		case -1138127439:
			return 18;
		case 1537662162:
			return 19;
		case -1878803090:
			return 20;
		case -1109336222:
			return 21;
		case -1835516139:
			return 24;
		case -792704004:
			return 27;
		case 1302078710:
			return 28;
		case 771327210:
			return 29;
		case 1686632448:
			return 30;
		case 1838169307:
			return 32;
		case -476352109:
			return 34;
		case -1735213851:
			return 35;
		case -267118527:
			return 38;
		case -988677954:
			return 39;
		case 37520335:
			return 49;
		case 1571524038:
			return 50;
		case 620095944:
			return 51;
		case -969856216:
			return 52;
		case -1747066226:
			return 53;
		case 1224013164:
			return 1;
		case 731982681:
			return 9;
		case -327573307:
			return 10;
		case 1122160964:
			return 14;
		case -1655947628:
			return 17;
		case 1421921491:
			return 22;
		case 1944090963:
			return 23;
		case -1253780595:
			return 25;
		case -1943395999:
			return 26;
		case -537792622:
			return 31;
		case -1275884820:
			return 33;
		case -1850722156:
			return 36;
		case -389213546:
			return 37;
		case 2017118308:
			return 40;
		case 18267955:
			return 42;
		case -1884795646:
			return 43;
		case -2012396119:
			return 41;
		case -927747820:
			return 44;
		case 117748712:
			return 45;
		case 1506833252:
			return 46;
		case -1522071438:
			return 47;
		case -344807332:
			return 48;
		default:
			break;
	}
	return 0;
}

int func_1891(int iParam0, vector3 vParam1)
{
	if (func_410(vParam1))
	{
		return -1;
	}
	fVar1 = 25f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 500)
	{
		if (!func_2351(iVar3))
		{
			return iVar2;
		}
		else if (func_2352(iVar3) != iParam0)
		{
			Jump @108; //curOff = 70
		}
		else
		{
			fVar0 = func_2354(vParam1, func_2353(iVar3));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				iVar2 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_1892(int iParam0, bool bParam1)
{
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_2355(iParam0, iVar0))
		{
			func_2356(iParam0, iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_2357(iParam0, 1);
	}
}

bool func_1893(int iParam0, bool bParam1)
{
	iVar1 = -1;
	bVar2 = func_53(get_player_index(), 128);
	if (Global_3145858->f_282 == 1 || (func_31(25) && !bVar2))
	{
		iVar1 = 0;
	}
	else if ((!bParam1 && func_1483(Global_524288->f_40400)) && bVar2)
	{
		iVar1 = func_1032();
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
			if ((func_1483(Global_524288->f_40400) && bVar2) && func_2358(iVar0) != -1)
			{
				if (!is_bit_set(&(Global_3145858->f_38736[iParam0]->f_15[iVar0]), func_2358(iVar0)))
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

bool func_1894(int iParam0)
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

int func_1895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1158905413;
		case 1:
			return 358397622;
		case 2:
			return 65999835;
		case 3:
			return 814443795;
		case 4:
			return 519621102;
		case 5:
			return -1628223003;
		case 6:
			return 1278256225;
		case 7:
			return 2038628101;
		case 8:
			return 1742494648;
		case 9:
			return -1010166918;
		case 10:
			return 660170868;
		case 11:
			return -1278312096;
		case 12:
			return -509158128;
		case 13:
			return -226656579;
		case 14:
			return 2115868159;
		case 15:
			return 1495813101;
		case 16:
			return 1197385818;
		case 17:
			return 1015780020;
		case 18:
			return -1286733825;
		case 19:
			return -1670393277;
		case 20:
			return -415733461;
		case 21:
			return -1207924036;
		case 22:
			return 497702414;
		case 23:
			return 719188085;
		case 24:
			return 43753457;
		case 25:
			return 771290791;
		case 26:
			return 20356387;
		case 27:
			return 309149584;
		case 28:
			return 1613781781;
		case 29:
			return 1693607065;
		case 30:
			return 1132176120;
		case 31:
			return 869270437;
		default:
			break;
	}
	return 623901053;
}

void func_1896()
{
	if (!_does_volume_exist(iVar1668))
	{
		vVar0 = { get_entity_coords(iLocal_81, false, false) };
		iLocal_1670 = func_2359(vVar0, 200f);
		func_2360(iVar1668, 1, &uLocal_1037, 1, 1065353216, 0, 1, 2);
	}
}

bool func_1897()
{
	iVar0 = 0;
	while (iVar0 <= (Global_3145858->f_38735 - 1))
	{
		if (func_2361(iVar0, iVar1))
		{
			iVar2[iVar1] = iVar0;
			iVar1++;
			vVar134 = { Global_3145858->f_38736[iVar0]->f_1 };
			func_2362(vVar134, &uLocal_1037, Global_3145858->f_38736[iVar0]->f_4);
			vVar131 = { (vVar131.x + vVar134.x), (vVar131.y + vVar134.y), (vVar131.z + vVar134.z) };
		}
		iVar0++;
	}
	func_2363(vVar131, iVar1, &iVar2);
	if (iVar1 > 0)
	{
		func_2364(0, 1, &uLocal_1037, 0, 1f);
		iVar137 = &iVar2[get_random_int_in_range(0, iVar1)];
	}
	else
	{
		iVar137 = get_random_int_in_range(0, Global_3145858->f_38735);
	}
	func_2365(Global_3145858->f_38736[iVar137]->f_1, &uLocal_1037);
	func_1402(0);
	func_2366();
	func_1896();
	return true;
}

bool func_1898(int iParam0)
{
	if (!is_bit_set(Global_2359296->f_5512[iParam0]->f_102, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Global_3145858->f_38735 - 1))
		{
			if (func_2361(iVar0, iVar1))
			{
				iVar1++;
				func_2362(Global_3145858->f_38736[iVar0]->f_1, &uLocal_1037, Global_3145858->f_38736[iVar0]->f_4);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		if (Global_2359296->f_5512[iParam0]->f_3[iVar0]->f_1 != 0f && &Global_2359296->f_5512[iParam0]->f_3[iVar0] > -1)
		{
			iVar2 = func_1386(&(Global_2359296->f_5512[iParam0]->f_3[iVar0]), 0f, 0f, 0f);
			iVar3 = 0;
			if (is_bit_set(Global_2359296->f_5512[iParam0]->f_102, 0))
			{
				iVar3 = 1;
			}
			iVar4 = func_2367(iVar2, Global_2359296->f_5512[iParam0]->f_3[iVar0]->f_1, &uLocal_1037, is_bit_set(Global_2359296->f_5512[iParam0]->f_68, iVar0), is_bit_set(Global_2359296->f_5512[iParam0]->f_69, iVar0), iVar3, 0);
			if (iVar4 == -1)
			{
				return false;
			}
		}
		iVar0++;
	}
	switch (Global_2359296->f_5512[iParam0]->f_70)
	{
		case 0:
			if (Global_2359296->f_5512[iParam0]->f_70.f_1 != 0f)
			{
				func_2368(Global_2359296->f_5512[iParam0]->f_70.f_1, &uLocal_1037);
			}
			break;
		case 1:
			if (!func_410(Global_2359296->f_5512[iParam0]->f_70.f_2))
			{
				func_2369(Global_2359296->f_5512[iParam0]->f_70.f_2, &uLocal_1037);
			}
			break;
		case 2:
			func_2370(Global_2359296->f_5512[iParam0]->f_70.f_6, Global_2359296->f_5512[iParam0]->f_70.f_5);
			break;
	}
	func_2365(Global_2359296->f_5512[iParam0]->f_77, &uLocal_1037);
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (&Global_2359296->f_5512[iParam0]->f_82[iVar0] != 0f)
		{
			func_2371(iVar0, &(Global_2359296->f_5512[iParam0]->f_82[iVar0]), &uLocal_1037);
		}
		iVar0++;
	}
	if (Global_2359296->f_5512[iParam0]->f_99 != -1f)
	{
		func_2372(&uLocal_1037, Global_2359296->f_5512[iParam0]->f_99);
	}
	if (Global_2359296->f_5512[iParam0]->f_100 != -1f)
	{
		func_2373(&uLocal_1037, Global_2359296->f_5512[iParam0]->f_100);
	}
	if (is_bit_set(Global_2359296->f_5512[iParam0]->f_102, 1))
	{
		func_1896();
	}
	return true;
}

void func_1899(int iParam0, float fParam1, float fParam2)
{
	if (fParam1 != 0f)
	{
		bVar0 = true;
		fVar1 = absf(fParam1);
		if (fParam1 < 0f)
		{
			bVar0 = false;
		}
		if (fParam2 != 0f)
		{
			fVar1 = func_1401((fVar1 - fParam2), 0f, 1f);
		}
		func_2364(iParam0, bVar0, &uLocal_1037, 0, fVar1);
	}
}

void func_1900(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_9 - 1))
	{
		if (!_does_volume_exist(&(uParam0->f_10[iVar0])))
		{
		}
		else if (!is_bit_set(uParam0->f_91, iVar0) || uParam0->f_10[iVar0]->f_1 == 0f)
		{
		}
		else
		{
			vVar1 = { _0x3e2a25b2416dd67e(&(uParam0->f_10[iVar0])) };
			if (!func_2374(vVar1))
			{
				fVar4 = 1.25f;
				if (uParam0->f_10[iVar0]->f_1 < 0f)
				{
					fVar4 = 0.75f;
				}
				vVar5 = { vVar1 * Vector(fVar4, fVar4, fVar4) };
				if (!func_2374(vVar5))
				{
					if (!_0xa46e98bdc407e23d(&(uParam0->f_10[iVar0]), vVar5))
					{
					}
				}
			}
			if (absf(uParam0->f_10[iVar0]->f_1) != 10f)
			{
				func_2375(&(uParam0->f_10[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

void func_1901(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (&uParam0->f_608[iVar0] != 0f && absf(&(uParam0->f_608[iVar0])) != 10f)
		{
			func_2375(uParam0->f_608[iVar0]);
		}
		iVar0++;
	}
}

void func_1902(var uParam0, var uParam1, var uParam2)
{
	bVar0 = (func_373(66, 255) || func_373(65, 255));
	bVar1 = (func_373(70, 255) || func_373(71, 255));
	if (is_bit_set(uParam0->f_624, 0))
	{
		uParam1->f_29 = 1;
	}
	else if (is_bit_set(uParam0->f_624, 1))
	{
		uParam1->f_29 = 0;
	}
	else
	{
		uParam1->f_29 = bVar1;
	}
	*uParam1 = { *uParam0 };
	*uParam2 = { *uParam1 };
	uParam2->f_6 = { uParam0->f_6 };
	if (func_410(uParam0->f_6))
	{
		bVar2 = true;
	}
	iVar4 = 0;
	while (iVar4 <= (uParam0->f_9 - 1))
	{
		if (_does_volume_exist(&(uParam0->f_10[iVar4])) && uParam0->f_10[iVar4]->f_1 != 0f)
		{
			bVar7 = true;
			fVar5 = absf(uParam0->f_10[iVar4]->f_1);
			bVar6 = uParam0->f_10[iVar4]->f_1 > 0f;
			if (bVar2 && bVar6)
			{
				uParam2->f_6 = { _0xf70f00013a62f866(&(uParam0->f_10[iVar4])) };
				bVar2 = false;
			}
			if (fVar5 == 10f)
			{
				_0x405ddefb1f531b18(&(uParam0->f_10[iVar4]), bVar6, uParam0->f_10[iVar4]->f_3, uParam0->f_10[iVar4]->f_4);
			}
			else
			{
				if (uParam0->f_10[iVar4]->f_2 != 0f)
				{
					fVar5 = (fVar5 + uParam0->f_10[iVar4]->f_2);
					fVar5 = func_1401(fVar5, 0f, 1f);
				}
				_0x13f592fc3bf0ea84(&(uParam0->f_10[iVar4]), bVar6, fVar5, uParam0->f_10[iVar4]->f_3, uParam0->f_10[iVar4]->f_4);
			}
		}
		iVar4++;
	}
	if (bVar7)
	{
		fVar8 = 1f;
		iVar15 = 0;
		if (bVar0)
		{
			if (func_326(43))
			{
				iVar15 = Global_1291734->f_11.f_78.f_11;
			}
			if (iVar15 == 0)
			{
				iVar15 = Global_1904087->f_11;
			}
			if (iVar15 == 0)
			{
				iVar15 = func_2376();
			}
		}
		else if (bVar1)
		{
			iVar15 = Global_1102219->f_3802;
		}
		if (iVar15 != 0)
		{
			get_model_dimensions(iVar15, &vVar9, &vVar12);
			if (func_410(vVar9) || func_410(vVar12))
			{
			}
			else
			{
				fVar8 = ((vVar12.z - vVar9.z) / 2f);
			}
		}
		_0x59577799f6ae2f34(fVar8);
	}
	iVar4 = 0;
	while (iVar4 <= (uParam0->f_93 - 1))
	{
		if (!func_410(*uParam0->f_94[iVar4]))
		{
			if (bVar2)
			{
				uParam2->f_6 = { *uParam0->f_94[iVar4] };
				bVar2 = false;
			}
			_0xfd1ac0b3858f224c(*uParam0->f_94[iVar4], &(uParam0->f_479[iVar4]));
			bVar3 = true;
		}
		iVar4++;
	}
	if (is_bit_set(uParam0->f_624, 4))
	{
		if (does_entity_exist(uParam0->f_625))
		{
			if (is_entity_a_vehicle(uParam0->f_625))
			{
				iVar16 = get_vehicle_index_from_entity_index(uParam0->f_625);
				if (!is_this_model_a_train(get_entity_model(uParam0->f_625)))
				{
					func_2377(iVar16, 1, 0, 0);
				}
				else
				{
					iVar17 = _0x60b7d1dcc312697d(iVar16);
					iVar18 = get_random_int_in_range(0, iVar17);
					func_2378(iVar16, iVar18, 1, 0, 0);
				}
			}
		}
	}
	iVar4 = 0;
	while (iVar4 <= 14)
	{
		if (&uParam0->f_608[iVar4] != 0f)
		{
			fVar5 = absf(&(uParam0->f_608[iVar4]));
			bVar6 = &uParam0->f_608[iVar4] > 0f;
			iVar19 = func_2379(iVar4);
			if (fVar5 == 10f)
			{
				_0x44d59ec597bbf348(iVar19, bVar6);
			}
			else
			{
				_0xeb6027fd1b4600d5(iVar19, bVar6, fVar5);
			}
		}
		else if (bVar3 && iVar4 == 0)
		{
			iVar21 = 0;
			while (iVar21 <= (uParam0->f_9 - 1))
			{
				if (_does_volume_exist(&(uParam0->f_10[iVar21])) && uParam0->f_10[iVar21]->f_1 == 10f)
				{
					bVar20 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (bVar20)
			{
				_0xeb6027fd1b4600d5(5, true, 0.3f);
			}
			else
			{
				_0x44d59ec597bbf348(5, true);
			}
		}
		iVar4++;
	}
	if (uParam0->f_626 >= 0f)
	{
		_0x0608326f7b98c08d(-1741123096, uParam0->f_626);
	}
	else
	{
		_0x5d3c528b7a7df836(-1741123096);
	}
	if (uParam0->f_631 >= 0f)
	{
		_0x0608326f7b98c08d(1593630490, uParam0->f_631);
	}
	else
	{
		_0x5d3c528b7a7df836(1593630490);
	}
	if (uParam0->f_627 != -1f)
	{
		_0x0608326f7b98c08d(-869194337, uParam0->f_627);
	}
	else
	{
		_0x5d3c528b7a7df836(-869194337);
	}
	if (uParam0->f_628 != -1f)
	{
		_0x0608326f7b98c08d(493630969, uParam0->f_628);
	}
	else
	{
		_0x5d3c528b7a7df836(493630969);
	}
	if (uParam0->f_629 != -1f)
	{
		_0x0608326f7b98c08d(1062828826, uParam0->f_629);
	}
	else
	{
		_0x5d3c528b7a7df836(1062828826);
	}
	if (uParam0->f_630 != -1f)
	{
		_0x0608326f7b98c08d(-733639455, uParam0->f_630);
	}
	else
	{
		_0x5d3c528b7a7df836(-733639455);
	}
	if (is_bit_set(uParam0->f_624, 3))
	{
		_0xf94a0d5b254375df(32);
	}
	else
	{
		_0x6cee2e30021daec6();
	}
	if (bVar2)
	{
		vVar22 = { get_entity_coords(player_ped_id(), false, false) };
		uParam2->f_6 = { vVar22 };
	}
}

int func_1903(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_1398(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_838(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_839(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_840(Global_1102219->f_3849, 36);
		func_841(Global_1102219->f_3888, 36);
		func_385(48);
		return 1;
	}
	return 0;
}

void func_1904(var uParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_9 - 1))
	{
		if (!bVar1)
		{
			if (_does_volume_exist(&(uParam0->f_10[iVar0])) && &uParam0->f_10[iVar0] == iParam1)
			{
				*uParam0->f_10[iVar0] = { Var2 };
				clear_bit(&(uParam0->f_91), iVar0);
				clear_bit(&(uParam0->f_92), iVar0);
				bVar1 = true;
			}
		}
		else
		{
			*(uParam0->f_10[(iVar0 - 1)]) = { *uParam0->f_10[iVar0] };
			if (is_bit_set(uParam0->f_91, iVar0))
			{
				set_bit(&(uParam0->f_91), (iVar0 - 1));
			}
			if (is_bit_set(uParam0->f_92, iVar0))
			{
				set_bit(&(uParam0->f_92), (iVar0 - 1));
			}
			*uParam0->f_10[iVar0] = { Var2 };
			clear_bit(&(uParam0->f_91), iVar0);
			clear_bit(&(uParam0->f_92), iVar0);
		}
		iVar0++;
	}
	if (bVar1)
	{
		uParam0->f_9 = (uParam0->f_9 - 1);
	}
}

void func_1905(vector3 vParam0)
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

void func_1906(var uParam0, var uParam1)
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

void func_1907(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 == -504335712)
	{
		if (iParam2 > -1 && is_bit_set(Global_3145858->f_49704[iParam2]->f_5, 20))
		{
			if (!is_string_null_or_empty((*Global_3145728)[iParam2]))
			{
				return;
			}
			MemCopy((*Global_3145728)[iParam2], {*Global_3145858->f_49704[iParam2]}, 8);
			Global_3145728->f_129 = 1;
			return;
		}
	}
	if (!is_string_null_or_empty((*Global_3145728)[iParam1]))
	{
		return;
	}
	iVar0 = 255;
	if (func_2380(iParam1, &iVar0))
	{
		StringCopy((*Global_3145728)[iParam1], func_2381(_0x901e0dc25080c8b9(iVar0), 0, 0), 64);
	}
	else if (func_2382(iParam1))
	{
		*(*Global_3145728)[iParam1] = { func_2383(iParam1) };
	}
	else if (bParam3)
	{
		StringCopy((*Global_3145728)[iParam1], get_player_name(iParam4), 64);
	}
	else
	{
		*(*Global_3145728)[iParam1] = { func_2384(iParam0, iParam1, 1, 0) };
	}
	*(*Global_1050984)[iParam1] = { *(*Global_3145728)[iParam1] };
}

int func_1908(int iParam0)
{
	return iParam0;
}

void func_1909(struct<2> Param0)
{
	if (func_27(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_27(Param0)))
	{
		_0x99230691875fc218(func_887(Param0), func_27(Param0), Global_35);
	}
}

bool func_1910(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_1911(int iParam0, int iParam1)
{
	return (func_1910(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

void func_1912(struct<2> Param0, int iParam2)
{
	if (!func_252(Param0))
	{
		func_105(Global_1900736->f_1[iParam2]);
	}
	else
	{
		*Global_1900736->f_1[iParam2] = { Param0 };
	}
	func_2385(Param0, 0, 1, -1);
}

bool func_1913(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	if (!func_252(Param0))
	{
		return false;
	}
	if (!func_252(Param2))
	{
		return true;
	}
	iVar0 = func_887(Param0);
	iVar1 = func_887(Param2);
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

bool func_1914(int iParam0, var uParam1, var uParam2)
{
	if (!func_2386(iParam0))
	{
		return false;
	}
	if (func_2387(iParam0, uParam1, &uVar0))
	{
		func_2388(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1915(int iParam0, int iParam1)
{
	set_relationship_between_groups(iParam0, iParam1, -1158905413);
	set_relationship_between_groups(iParam0, iParam1, 358397622);
	set_relationship_between_groups(iParam0, iParam1, 65999835);
	set_relationship_between_groups(iParam0, iParam1, 814443795);
	set_relationship_between_groups(iParam0, iParam1, 519621102);
	set_relationship_between_groups(iParam0, iParam1, -1628223003);
	set_relationship_between_groups(iParam0, iParam1, 1278256225);
	set_relationship_between_groups(iParam0, iParam1, 2038628101);
	set_relationship_between_groups(iParam0, iParam1, 1742494648);
	set_relationship_between_groups(iParam0, iParam1, -1010166918);
	set_relationship_between_groups(iParam0, iParam1, 660170868);
	set_relationship_between_groups(iParam0, iParam1, -1278312096);
	set_relationship_between_groups(iParam0, iParam1, -509158128);
	set_relationship_between_groups(iParam0, iParam1, -226656579);
	set_relationship_between_groups(iParam0, iParam1, 2115868159);
	set_relationship_between_groups(iParam0, iParam1, 1495813101);
	set_relationship_between_groups(iParam0, iParam1, 1197385818);
	set_relationship_between_groups(iParam0, iParam1, 1015780020);
	set_relationship_between_groups(iParam0, iParam1, -1286733825);
	set_relationship_between_groups(iParam0, iParam1, -1670393277);
	set_relationship_between_groups(iParam0, iParam1, -415733461);
	set_relationship_between_groups(iParam0, iParam1, -1207924036);
	set_relationship_between_groups(iParam0, iParam1, 497702414);
	set_relationship_between_groups(iParam0, iParam1, 719188085);
	set_relationship_between_groups(iParam0, iParam1, 43753457);
	set_relationship_between_groups(iParam0, iParam1, 771290791);
	set_relationship_between_groups(iParam0, iParam1, 20356387);
	set_relationship_between_groups(iParam0, iParam1, 309149584);
	set_relationship_between_groups(iParam0, iParam1, 1613781781);
	set_relationship_between_groups(iParam0, iParam1, 1693607065);
	set_relationship_between_groups(iParam0, iParam1, 1132176120);
	set_relationship_between_groups(iParam0, iParam1, 869270437);
}

int func_1916(int iParam0, int iParam1)
{
	if (iParam0 <= -1 || iParam0 >= 6)
	{
		return 0;
	}
	if (iParam1 <= -1 || iParam1 >= 16)
	{
		return 0;
	}
	if (iParam1 == 15)
	{
		return &(Global_1291734->f_872.f_4[iParam0]);
	}
	if (!func_2389(iParam0, &iVar1, &uVar2))
	{
		return 0;
	}
	iVar0 = (iParam1 - iVar1);
	return &(Global_1291734->f_872.f_4[iParam0]->f_1[iVar0]);
}

void func_1917(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_1060(iParam2, 0, 100);
	if (func_2390(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

int func_1918(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_1919()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

bool func_1920(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1935(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1921(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1925(iParam0))
	{
		return;
	}
	iVar0 = func_1432(iParam0);
	func_2391(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_2392(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_2393(iParam0, 0);
	func_2394(iParam0);
}

void func_1922(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_39.f_281.f_1[iParam0], "", 64);
	Global_39.f_281.f_1[iParam0]->f_8 = 0;
	Global_39.f_281.f_1[iParam0]->f_9 = 0;
	Global_39.f_281.f_1[iParam0]->f_10 = 0;
	Global_39.f_281.f_1[iParam0]->f_11 = 0;
	Global_39.f_281.f_1[iParam0]->f_12 = -1;
	Global_39.f_281.f_1[iParam0]->f_13 = -15;
	Global_39.f_281.f_1[iParam0]->f_14 = 0;
	func_2395(&Var0);
	func_2396(iParam0, Var0);
	func_2397(&(Global_39.f_281.f_1[iParam0]->f_15));
	func_2398(&(Global_39.f_281.f_1[iParam0]->f_382));
	func_2399(&(Global_39.f_281.f_1[iParam0]->f_398));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2400(iVar2, Global_39.f_281.f_1[iParam0]->f_422[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2401(iVar3, Global_39.f_281.f_1[iParam0]->f_431[iVar3]);
		iVar3++;
	}
	func_2402(&(Global_39.f_281.f_1[iParam0]->f_444));
	func_2403(&(Global_39.f_281.f_1[iParam0]->f_446));
	func_2404(&(Global_39.f_281.f_1[iParam0]->f_449));
	Global_39.f_281.f_1[iParam0]->f_451 = { 0f, 0f, 0f };
	Global_39.f_281.f_1[iParam0]->f_454 = 0f;
	Global_39.f_281.f_1[iParam0]->f_455 = -1;
	Global_39.f_281.f_1[iParam0]->f_456 = -1;
	Global_39.f_281.f_1[iParam0]->f_457 = 0;
	Global_39.f_281.f_1[iParam0]->f_458 = 0;
	Global_39.f_281.f_1[iParam0]->f_459 = 0;
	(*Global_1903136)[iParam0] = 0;
	(*Global_1903136)[iParam0]->f_1 = 0;
	(*Global_1903136)[iParam0]->f_2 = 0;
	(*Global_1903136)[iParam0]->f_3 = 0;
	(*Global_1903136)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_22 = 0f;
	(*Global_1903136)[iParam0]->f_23 = 0;
	(*Global_1903136)[iParam0]->f_24 = 0;
	if (does_blip_exist((*Global_1903136)[iParam0]->f_25))
	{
		remove_blip(&((*Global_1903136)[iParam0]->f_25));
	}
	(*Global_1903136)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1903136)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1903136)[iParam0]->f_26));
	}
	(*Global_1903136)[iParam0]->f_26 = 0;
	(*Global_1903136)[iParam0]->f_27 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_30 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_33 = 0f;
	(*Global_1903136)[iParam0]->f_34 = 0;
	(*Global_1903136)[iParam0]->f_35 = 0;
	(*Global_1903136)[iParam0]->f_36 = 0;
	(*Global_1903136)[iParam0]->f_37 = { 0f, 0f, 0f };
	(*Global_1903136)[iParam0]->f_40 = 0;
	(*Global_1903136)[iParam0]->f_41 = 0;
	(*Global_1903136)[iParam0]->f_42 = -1;
}

void func_1923(int iParam0)
{
	Global_39.f_281.f_3222 = iParam0;
}

void func_1924(int iParam0)
{
	Global_39.f_281.f_3222.f_1 = iParam0;
}

bool func_1925(int iParam0)
{
	iParam0 = func_1918(iParam0);
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

bool func_1926(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1925(iParam0))
	{
		return false;
	}
	iVar0 = func_1432(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1927(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1925(iParam0))
	{
		return false;
	}
	iVar0 = func_1432(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_1928(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1925(iParam0))
	{
		return;
	}
	iVar0 = func_1432(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_1929(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_2405(iParam0);
	func_2405(iParam0);
	func_2406(iParam0, iParam1);
	func_2407(iParam0, iParam1);
	func_2408(iParam0, iParam1);
	iVar1 = func_1432(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			_0x227b06324234fb09(iVar0, iVar1);
		}
	}
	iVar2 = func_1432(iParam1);
	if (does_entity_exist(iVar2))
	{
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar2);
		}
		else if (iParam1 == 1)
		{
			_0x227b06324234fb09(iVar0, iVar2);
		}
	}
	func_2409();
}

bool func_1930()
{
	iVar0 = func_2410();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1931()
{
	iVar0 = func_2410();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2411(0);
}

void func_1932(vector3 vParam0)
{
	Global_39.f_281.f_3222.f_19 = { vParam0 };
}

int func_1933(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_9;
}

int func_1934(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_8;
}

int func_1935(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_39.f_281.f_1[iParam0]->f_14;
}

void func_1936(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_2412(&uVar0, &uVar1, &uVar2);
	func_2413(iParam0, uVar0);
	func_2414(iParam0, uVar1);
	func_2415(iParam0, uVar2);
	func_2416(iParam0, 1);
	func_2417(iParam0, 1);
}

void func_1937(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_2418(iParam0, 1);
}

void func_1938(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_19 = { vParam1 };
	(*Global_1903136)[iParam0]->f_22 = uParam4;
}

bool func_1939(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_2419(iParam0, 1);
}

struct<2> func_1940(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2420(iParam0, &uVar2))
	{
	}
	if (!func_2421(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<8> func_1941()
{
	if (func_2422(802754820, &uVar8))
	{
		Var0.f_6 = uVar8;
	}
	if (func_2422(-1886147520, &uVar9))
	{
		Var0.f_7 = uVar9;
	}
	if (func_2422(-997150586, &uVar10))
	{
		Var0.f_4 = uVar10;
	}
	if (func_2422(-1189569496, &uVar11))
	{
		Var0 = uVar11;
	}
	if (func_2422(325139909, &uVar12))
	{
		Var0.f_2 = uVar12;
	}
	if (func_2422(1310070322, &uVar13))
	{
		Var0.f_5 = uVar13;
	}
	if (func_2422(986998820, &uVar14))
	{
		Var0.f_3 = uVar14;
	}
	if (func_2422(-415648720, &uVar15))
	{
		Var0.f_1 = uVar15;
	}
	return Var0;
}

void func_1942(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	func_2423(iParam0);
	func_2424(iParam0, uParam1);
	func_2425(iParam0);
	func_2426(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2427(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		_update_ped_variation(iParam0, false, true, true, true, true);
	}
}

bool func_1943(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1903136)[iParam0]->f_2;
}

void func_1944(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1903136)[iParam0]->f_2 = 1;
	(*Global_1903136)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_1945(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1946(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_2394(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_2394(iParam0);
	}
}

int func_1946(int iParam0)
{
	iParam0 = func_1918(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1903136)[iParam0]->f_3;
}

void func_1947(int iParam0)
{
	Var0 = { func_2428(1) };
	_0x3112adb9d5f3426b(&Var0, iParam0);
}

void func_1948(int iParam0)
{
	Var0 = { func_1979(889965687, func_2429(1), 1034665895, 1) };
	_0x3112adb9d5f3426b(&Var0, iParam0);
	func_1295(27, 0, 2, 0, 0);
}

void func_1949(int iParam0)
{
	func_1951(1);
	Var0 = { func_1979(273608212, func_2429(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

void func_1950()
{
	func_2431(-252071901, func_2430(-252071901, 0), 1, -142743235);
}

void func_1951(int iParam0)
{
	Var0 = { func_1979(-1295114026, func_2429(1), 1784584921, 1) };
	if (_0xb881ca836cc4b6d4(&Var0))
	{
		_0x3112adb9d5f3426b(&Var0, iParam0);
	}
}

void func_1952(int iParam0)
{
	if (iParam0 < 0)
	{
		return;
	}
	Var0.f_1 = 1;
	iVar2 = 0;
	while (iVar2 < Global_3145858->f_57852[iParam0]->f_3)
	{
		Var0 = &Global_3145858->f_57852[iParam0]->f_4[iVar2];
		Var0.f_1 = Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_1;
		if (Global_3145858->f_57852[iParam0]->f_4[iVar2]->f_2 == -244725740)
		{
			func_2431(Var0, Var0.f_1, 1, -142743235);
		}
		iVar2++;
	}
}

int func_1953(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_1954(int iParam0, bool bParam1)
{
	if (!func_448(109))
	{
		return;
	}
	Global_1102219->f_3671 = iParam0;
	if (!Global_1296859->f_12 && bParam1)
	{
		func_495(16);
	}
}

void func_1955(int iParam0)
{
	Global_1913694->f_1585 = iParam0;
}

char* func_1956(int iParam0, int iParam1)
{
	if (is_ped_male(iParam1))
	{
		bVar1 = true;
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "STANDARD_PLAYER_PED_DAMAGE_MP";
			if (!bVar1)
			{
				sVar0 = "STANDARD_FEMALE_PLAYER_PED_DAMAGE_MP";
			}
			break;
		case 1:
			sVar0 = "STANDARD_PED_DAMAGE";
			if (!bVar1)
			{
				sVar0 = "STANDARD_FEMALE_PED_DAMAGE";
			}
			break;
	}
	return sVar0;
}

void func_1957(int iParam0, int iParam1)
{
	iVar0 = _inventory_get_ped_inventory_id(iParam0);
	iVar1 = _inventory_get_ped_inventory_id(iParam1);
	if (!_0x886dfd3e185c8a89(iVar0, &uVar6, 923904168, -740156546, &uVar2))
	{
	}
	_0xc04f47d488ef9eba(iVar0, iVar1, &uVar2, 0);
}

struct<4> func_1958(int iParam0, int iParam1)
{
	Var3.f_9 = -1591664384;
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_7 = -1;
	Var17.f_8 = -1;
	Var17.f_13 = -1;
	Var17.f_8 = -427144552;
	iVar0 = _0x640f890c3e5a3ffd(iParam1, &Var17, &iVar1);
	if (iVar0 == -1)
	{
		return func_530();
	}
	if (iVar1 <= 0)
	{
		_0x42a2f33a1942e865(iVar0);
		return func_530();
	}
	Var31.f_9 = -1591664384;
	Var53.f_9 = -1591664384;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (_0x82fa24c3d3fcd9b7(iVar0, iVar2, &Var3))
		{
			if (Var3.f_4 != -1569615261)
			{
				Var31 = { Var53 };
				if (_0x025a1b1fb03fbf61(iParam1, &Var3, &Var31, 22, 1))
				{
					if (Var31.f_14 == iParam0)
					{
						_0x42a2f33a1942e865(iVar0);
						return Var3;
					}
				}
			}
		}
		iVar2++;
	}
	_0x42a2f33a1942e865(iVar0);
	return func_530();
}

void func_1959(char* sParam0, int iParam1)
{
	if (decor_exist_on(player_ped_id(), sParam0))
	{
		iVar0 = decor_get_int(player_ped_id(), sParam0);
	}
	if (!is_bit_set(iVar0, iParam1))
	{
		set_bit(&iVar0, iParam1);
		decor_set_int(player_ped_id(), sParam0, iVar0);
	}
}

bool func_1960(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 7);
}

void func_1961(bool bParam0)
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

char* func_1962(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_1060((iVar5 / 60), 0, 180);
	iVar7 = func_1060((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

char* func_1963(char* sParam0)
{
	return _0xd8402b858f4ddd88(sParam0, get_length_of_literal_string(sParam0));
}

int func_1964(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return round(uParam0->f_5);
		case 1:
			return round(uParam0->f_6);
		case 2:
			return round(uParam0->f_7);
		case 3:
			return round(uParam0->f_8);
		default:
			break;
	}
	return 0;
}

struct<16> func_1965(int iParam0, bool bParam1)
{
	StringCopy(&cVar0, "", 128);
	if (Global_3145858->f_61357[iParam0]->f_1 > -1)
	{
		*bParam1 = !func_1351(Global_3145858->f_61357[iParam0]->f_1);
		return *Global_3145858->f_52528[Global_3145858->f_61357[iParam0]->f_1];
	}
	return cVar0;
}

void func_1966()
{
	if (is_bit_set(iLocal_57, 10))
	{
		func_96(2);
		clear_bit(&iLocal_57, 10);
	}
}

void func_1967(int iParam0, var uParam1, int iParam2, int iParam3)
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

bool func_1968(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 && iParam1) != 0;
}

bool func_1969(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_1970(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_1968(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_1972(iParam0, iVar0, 0);
			func_1973(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_1766(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

int func_1971(int iParam0, int iParam1)
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

void func_1972(int iParam0, int iParam1, bool bParam2)
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

void func_1973(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1971(iParam0, 1)])->f_11 || iParam1);
}

void func_1974(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

int func_1975(int iParam0)
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

bool func_1976()
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Local_5688.f_2663[iVar0] == iLocal_79)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1977(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	Var0 = { func_856(iParam1) };
	if (Var0 <= 0)
	{
		return;
	}
	iVar32 = func_2432(iParam0);
	Var33.f_1 = 10;
	Var33.f_12 = 10;
	Var33 = Var0;
	iVar56 = 0;
	while (iVar56 <= (Var0 - 1))
	{
		Var33.f_1[iVar56] = &Var0.f_1[iVar56];
		Var33.f_12[iVar56] = Var0.f_1[iVar56]->f_1;
		iVar56++;
	}
	iVar57 = 10;
	_0xa88e215ceb0435c0(iParam0, &Var33, iVar32, iVar57, 3, 0);
}

struct<4> func_1978(bool bParam0)
{
	iVar0 = func_1292(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_1979(923904168, func_2429(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_1979(923904168, func_2429(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_1979(923904168, func_2429(bParam0), -740156546, 0);
}

struct<4> func_1979(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_437(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1292(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1980()
{
	if (is_bit_set(Global_3145858->f_226, 23))
	{
		return false;
	}
	if (!Global_1296679->f_146)
	{
		return false;
	}
	return true;
}

void func_1981(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (_0xb881ca836cc4b6d4(&(Global_1296679->f_8)))
	{
		if (bParam1)
		{
			_0x3112adb9d5f3426b(&(Global_1296679->f_8), 1);
		}
		if (_0x9700e8efc4ab9089(3, &(Global_1296679->f_8), &Var0, true))
		{
			if (_is_weapon_bow(Var0.f_4))
			{
				iVar14 = 7;
			}
			else
			{
				iVar14 = 9;
			}
			_0x12fb95fe3d579238(*uParam0, &(Global_1296679->f_8), 1, iVar14, 0, 0);
		}
	}
	if (_0xb881ca836cc4b6d4(&(Global_1296679->f_12)))
	{
		if (bParam1)
		{
			_0x3112adb9d5f3426b(&(Global_1296679->f_12), 1);
		}
		if (_0x9700e8efc4ab9089(3, &(Global_1296679->f_12), &Var0, true))
		{
			if (_is_weapon_bow(Var0.f_4))
			{
				iVar14 = 8;
			}
			else
			{
				iVar14 = 10;
			}
			_0x12fb95fe3d579238(*uParam0, &(Global_1296679->f_12), 1, iVar14, 0, 0);
		}
	}
	if (_0xb881ca836cc4b6d4(&(Global_1296679->f_4)))
	{
		if (bParam1)
		{
			_0x3112adb9d5f3426b(&(Global_1296679->f_4), 1);
		}
		iVar14 = 2;
		_0x12fb95fe3d579238(*uParam0, &(Global_1296679->f_4), 1, iVar14, 0, 0);
	}
	if (_0xb881ca836cc4b6d4(Global_1296679))
	{
		if (bParam1)
		{
			_0x3112adb9d5f3426b(Global_1296679, 1);
		}
		if (func_911(-1185145312, 1, 0, 0) > 0)
		{
			iVar14 = 3;
		}
		else
		{
			iVar14 = 2;
		}
		_0x12fb95fe3d579238(*uParam0, Global_1296679, 1, iVar14, 0, 0);
	}
	iVar15 = 0;
	while (iVar15 <= 22)
	{
		if (_0xb881ca836cc4b6d4(Global_1296679->f_53[iVar15]))
		{
			if (bParam1)
			{
				_0x3112adb9d5f3426b(Global_1296679->f_53[iVar15], 1);
			}
			if (_0x9700e8efc4ab9089(3, Global_1296679->f_53[iVar15], &Var0, true))
			{
				if (_is_weapon_knife(Var0.f_4))
				{
					iVar14 = 4;
				}
				else if (Var0.f_4 == 1953585457)
				{
					iVar14 = 13;
				}
				else
				{
					iVar14 = -1;
				}
				_0x12fb95fe3d579238(*uParam0, Global_1296679->f_53[iVar15], 1, iVar14, 0, 0);
			}
		}
		iVar15++;
	}
	iVar15 = 0;
	while (iVar15 <= 8)
	{
		if (_0xb881ca836cc4b6d4(Global_1296679->f_16[iVar15]))
		{
			if (bParam1)
			{
				_0x3112adb9d5f3426b(Global_1296679->f_16[iVar15], 1);
			}
			if (_0x9700e8efc4ab9089(3, Global_1296679->f_16[iVar15], &Var0, true))
			{
				if (_is_weapon_lasso(Var0.f_4))
				{
					iVar14 = 5;
				}
				else
				{
					iVar14 = -1;
				}
				_0x12fb95fe3d579238(*uParam0, Global_1296679->f_16[iVar15], 1, iVar14, 0, 0);
			}
		}
		iVar15++;
	}
}

void func_1982(var uParam0)
{
	Var3.f_9 = -1591664384;
	if (!func_909("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_910(&Var3, iVar2, iVar0, iVar1))
		{
		}
		else if (!func_437(Var3.f_4, 0))
		{
		}
		else if (func_2433(Var3.f_4, uParam0->f_8))
		{
			_0x51c3b71591811485(*uParam0, &Var3, -142743235);
		}
		else
		{
			func_2434(Var3, 3);
		}
		iVar2++;
	}
	func_912(iVar0);
}

bool func_1983(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	Var3.f_9 = -1591664384;
	if (func_909("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_910(&Var3, iVar2, iVar0, iVar1))
			{
				if (Var3.f_4 == iParam0 || (_0xb881ca836cc4b6d4(&uParam1) && _0x4c543d5dfcd2dafd(&uParam1, &Var3)))
				{
					func_912(iVar0);
					return true;
				}
			}
			iVar2++;
		}
	}
	func_912(iVar0);
	return false;
}

void func_1984(var uParam0, int iParam1, var uParam2)
{
	iVar0 = -1;
	get_max_ammo(*uParam0, &iVar0, iParam1);
	if (*uParam2 > iVar0)
	{
		*uParam2 = iVar0;
	}
}

bool func_1985(int iParam0, var uParam1, int iParam2)
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
	Var16.f_9 = -1591664384;
	Var30.f_9 = -1591664384;
	iVar44 = 0;
	if (iParam2 == 0)
	{
		Var0 = *iParam0;
	}
	else
	{
		Var0.f_8 = -427144552;
	}
	iVar14 = _0x640f890c3e5a3ffd(2, &Var0, &iVar15);
	if (iVar14 == -1)
	{
		return false;
	}
	if (iVar15 <= 0)
	{
		_0x42a2f33a1942e865(iVar14);
		return false;
	}
	iVar44 = 0;
	while (iVar44 <= (iVar15 - 1))
	{
		Var16 = { Var30 };
		if (_0x82fa24c3d3fcd9b7(iVar14, iVar44, &Var16) && ((Var16.f_4 == *iParam0 && iParam2 == 0) || (Var16.f_4 != *iParam0 && get_weapontype_group(Var16.f_4) == iParam2)))
		{
			_0x3112adb9d5f3426b(&Var16, 0);
			_give_weapon_to_ped_2(player_ped_id(), Var16.f_4, 0, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			func_2434(Var16, 3);
			_0x42a2f33a1942e865(iVar14);
			*iParam0 = Var16.f_4;
			*uParam1 = { Var16 };
			return true;
		}
		iVar44++;
	}
	_0x42a2f33a1942e865(iVar14);
	return false;
}

bool func_1986(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1293(iParam0))
	{
		return false;
	}
	if (!func_2435(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_1987(int iParam0)
{
	return func_868(iParam0) == 307971639;
}

int func_1988(int iParam0, int iParam1, int iParam2)
{
	if (!func_437(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_2436(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_2437(iParam0, iParam1, iParam2);
	}
	Var1 = { func_2438(iParam0, 0, 1) };
	Var6 = { func_1979(iParam0, Var1, Var1.f_4, 0) };
	return func_2439(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_1989(var uParam0)
{
	iVar0 = get_best_ped_weapon(*uParam0, false, true);
	if (!_is_weapon_lasso(iVar0))
	{
		return iVar0;
	}
	return -1569615261;
}

bool func_1990(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (((_0x4c543d5dfcd2dafd(&(Global_1296679->f_8), &uParam0) || _0x4c543d5dfcd2dafd(&(Global_1296679->f_12), &uParam0)) || _0x4c543d5dfcd2dafd(Global_1296679, &uParam0)) || _0x4c543d5dfcd2dafd(&(Global_1296679->f_4), &uParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (_0x4c543d5dfcd2dafd(Global_1296679->f_53[iVar0], &uParam0))
		{
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (_0x4c543d5dfcd2dafd(Global_1296679->f_16[iVar0], &uParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_1991(int iParam0, int iParam1)
{
	Var3.f_9 = -1591664384;
	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_7 = -1;
	Var17.f_8 = -1;
	Var17.f_13 = -1;
	Var17.f_8 = -427144552;
	iVar0 = _0x640f890c3e5a3ffd(iParam1, &Var17, &iVar1);
	if (iVar0 == -1)
	{
		return func_530();
	}
	if (iVar1 <= 0)
	{
		_0x42a2f33a1942e865(iVar0);
		return func_530();
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (_0x82fa24c3d3fcd9b7(iVar0, iVar2, &Var3))
		{
			if (Var3.f_4 != -1569615261)
			{
				iVar31 = func_2440(Var3, iParam1);
				if (iVar31 == iParam0)
				{
					_0x42a2f33a1942e865(iVar0);
					return Var3;
				}
			}
		}
		iVar2++;
	}
	_0x42a2f33a1942e865(iVar0);
	return func_530();
}

bool func_1992(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_1993(int iParam0, int iParam1)
{
	if (iParam1 == 738282662)
	{
		switch (iParam0)
		{
			case 0:
				return 1595806706;
			case 1:
				return 1595806706;
			case 2:
				return 1595806706;
			case 3:
				return -1018697504;
			case 4:
				return -1747825963;
			case 5:
				return -984192463;
			case 6:
				return -984192463;
			default:
				break;
		}
		return 549686661;
	}
	switch (iParam1)
	{
		case -1888453608:
			return 1451797164;
		default:
			break;
	}
	return 549686661;
}

char* func_1994(int iParam0, int iParam1, int iParam2)
{
	bVar0 = iParam2 == 628988510;
	if (iParam1 == 738282662)
	{
		switch (iParam0)
		{
			case 0:
				return "UGC_BLIP_SMAGCA";
			case 1:
				return "UGC_BLIP_MEDGCA";
			case 2:
				return "UGC_BLIP_LARGCA";
			case 3:
				return func_1002(bVar0, "UGC_BLIP_COCCHE", "UGC_BLIP_SPEBOO");
			case 4:
				return "UGC_BLIP_WANPOS";
			case 5:
				return "UGC_BLIP_SCEBLO";
			case 6:
				return "UGC_BLIP_OFFHOL";
			default:
				break;
		}
		return "BLIP_MP_WEAPON";
	}
	switch (iParam1)
	{
		case -1888453608:
			return "UGC_BLIP_HEALTH";
		default:
			break;
	}
	return "BLIP_MP_WEAPON";
}

void func_1995(int iParam0)
{
	func_1959(func_896(), iParam0);
}

void func_1996(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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
	if (func_2441(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] != 2)
	{
		if (!&Global_1296859->f_22[iVar0])
		{
			func_1325(iParam0);
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
						func_1996(iVar3, iParam1, 0, 1, 0, 0);
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
			func_2442(&Var6, uVar4);
		}
	}
}

void func_1997()
{
	if (!func_345(&(Local_5688.f_2400)))
	{
		func_784();
		return;
	}
	iVar0 = Global_2359296->f_6579 * 1000;
	if (&Global_2359296->f_6580[Local_5688.f_2413] > 0)
	{
		iVar0 = &Global_2359296->f_6580[Local_5688.f_2413] * 1000;
	}
	if (func_325(&(Local_5688.f_2400), 0, 0) < iVar0)
	{
		return;
	}
	Local_5688.f_2410 = Local_5688.f_2409;
	if (func_2443() > 1)
	{
		func_358(&(Local_5688.f_2400));
	}
	else
	{
		Local_5688.f_2411 = 1;
		iVar1 = 0;
		while (iVar1 <= (Global_2359296->f_4834 - 1))
		{
			if (!is_bit_set(Local_5688.f_2410, iVar1) && func_1501(iVar1))
			{
				Local_5688.f_2402 = iVar1;
				if (Global_2359296->f_4836[iVar1]->f_3 > -1)
				{
					Local_5688.f_2403 = { Global_3145858->f_34781[Global_2359296->f_4836[iVar1]->f_3]->f_3.f_7 };
				}
				if (Global_2359296->f_6681 == -1f && Global_2359296->f_6682 == -1f)
				{
					func_358(&(Local_5688.f_2400));
				}
				else
				{
					fVar2 = (Local_5688.f_2403 - Global_2359296->f_6681);
					fVar3 = (Local_5688.f_2403.f_1 - Global_2359296->f_6682);
					if (fVar2 > 0f && fVar3 > 0f)
					{
						vVar4 = { fVar2, fVar3, Local_5688.f_2403.f_2 };
						Local_5688.f_2406 = { vVar4 };
						func_324(&(Local_5688.f_2400), 0, 0);
					}
					else
					{
						Local_5688.f_2406 = { 0f, 0f, 0f };
						func_358(&(Local_5688.f_2400));
					}
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (Local_5688.f_2413 < 31)
	{
		Local_5688.f_2413++;
	}
	if (!Local_5688.f_2411)
	{
		func_784();
	}
}

void func_1998()
{
	if (iVar15661 == 0)
	{
		if (!is_bit_set(iLocal_58, 3))
		{
			if (!func_2444())
			{
				return;
			}
			else
			{
				set_bit(&iLocal_58, 3);
			}
		}
	}
	if (bVar15663)
	{
		if (!bVar15664)
		{
			if (func_1508())
			{
				_0xbd62d98799a3daf0(iVar12245, 247736897);
				_blip_set_modifier(iVar12245, 231194138);
				iLocal_15666 = 1;
			}
		}
		else if (!func_1508())
		{
			_0xbd62d98799a3daf0(iVar12245, -1761638621);
			_set_blip_flash_style(iVar12245, 231194138);
			iLocal_15666 = 0;
		}
	}
	if (iVar15661 != Local_5688.f_2410)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_2359296->f_4834 - 1))
		{
			if (is_bit_set(Local_5688.f_2410, iVar0) && !is_bit_set(iVar15661, iVar0))
			{
				func_2445(iVar0);
				set_bit(&iLocal_15663, iVar0);
			}
			iVar0++;
		}
		if (does_blip_exist(iVar12246))
		{
			remove_blip(&uLocal_12248);
		}
		iLocal_15665 = 0;
		iLocal_15666 = 0;
		_0xbd62d98799a3daf0(iVar12245, func_2446(0));
		if (_does_volume_exist(iVar12176))
		{
			_delete_volume(iVar12176);
		}
		func_2004();
	}
	if (iVar15662 != Local_5688.f_2409)
	{
		if (is_bit_set(Local_5688.f_24.f_3, 30))
		{
			if (_does_volume_exist(iVar12176))
			{
				_delete_volume(iVar12176);
			}
			iLocal_12178 = _create_volume_aggregate();
			iVar1 = 0;
			while (iVar1 <= (Global_2359296->f_4834 - 1))
			{
				if (is_bit_set(Local_5688.f_2409, iVar1) && !is_bit_set(iVar15662, iVar1))
				{
					if (_does_volume_exist(iVar12175))
					{
						if (_does_volume_exist(&(iLocal_12144[iVar1])))
						{
							_0xf92fa8890dececf6(iVar12175, &(iLocal_12144[iVar1]));
						}
					}
					else
					{
						iLocal_12177 = func_2007(0f, 0f, 0f);
					}
					if (_does_volume_exist(&(iLocal_12144[iVar1])))
					{
						_0x6e0d3c3f828da773(iVar12176, &(iLocal_12144[iVar1]));
					}
					iLocal_12111[iVar1] = func_1386(Global_2359296->f_4836[iVar1]->f_3, 0f, 0f, 0f);
				}
				iVar1++;
			}
			if (is_bit_set(Local_5688.f_24.f_3, 30))
			{
				func_2447();
			}
			func_2448(0);
			clear_bit(&iLocal_57, 13);
		}
		iLocal_15664 = Local_5688.f_2409;
	}
	if (!Local_5688.f_2411 && &Local_1685[iLocal_70] == 6)
	{
		func_2449();
	}
}

void func_1999(vector3 vParam0)
{
	if (does_blip_exist(iVar12813))
	{
		if (func_257(255))
		{
			_set_blip_flash_style(iVar12813, -1878373110);
		}
		if (!func_2450(get_blip_coords(iVar12813), vParam0, 1056964608, 1))
		{
			remove_blip(&iLocal_12818);
		}
	}
	if (!does_blip_exist(iVar12813))
	{
		iLocal_12818 = _blip_add_for_coord(408396114, vParam0);
		_blip_set_modifier(iVar12813, 231194138);
		if (is_bit_set(Global_2359296->f_160, 21))
		{
			_blip_set_modifier(iVar12813, 313075017);
		}
		if (!is_bit_set(Local_5688.f_24.f_4, 8))
		{
			if (!func_257(255))
			{
				_blip_set_modifier(iVar12813, -1878373110);
			}
		}
		if (func_30(21))
		{
			set_blip_name_from_text_file(iVar12813, "OOB_PA_BLIP");
		}
		else
		{
			set_blip_name_from_text_file(iVar12813, "OOB_PAS_BLIP");
		}
	}
}

void func_2000()
{
	if (does_blip_exist(iVar12816))
	{
		remove_blip(&iLocal_12818);
	}
}

void func_2001()
{
	if (Global_2359296->f_6681 == -1f && Global_2359296->f_6682 == -1f)
	{
		return;
	}
	if (!func_345(&(Local_5688.f_2400)))
	{
		return;
	}
	if (&Global_2359296->f_6648[Local_5688.f_2402] > 0)
	{
		iVar0 = &Global_2359296->f_6648[Local_5688.f_2402] * 1000;
	}
	else
	{
		iVar0 = Global_2359296->f_6579 * 1000;
	}
	if (!func_760(&(Local_5688.f_2400), iVar0, 0))
	{
		return;
	}
	if (!func_410(Local_5688.f_2406))
	{
		Local_5688.f_2403 = { Local_5688.f_2406 };
		fVar1 = (Local_5688.f_2403 - Global_2359296->f_6681);
		fVar2 = (Local_5688.f_2403.f_1 - Global_2359296->f_6682);
		if (fVar1 > 0f && fVar2 > 0f)
		{
			vVar3 = { fVar1, fVar2, Local_5688.f_2403.f_2 };
			Local_5688.f_2406 = { vVar3 };
			func_324(&(Local_5688.f_2400), 0, 0);
		}
		else
		{
			Local_5688.f_2406 = { 0f, 0f, 0f };
			func_358(&(Local_5688.f_2400));
		}
	}
	else
	{
		func_358(&(Local_5688.f_2400));
	}
}

void func_2002()
{
	if (is_bit_set(Local_5688.f_24.f_3, 30))
	{