void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(&Local_1675);
	func_2(&uScriptParam_0);
	while (!func_3(&Local_1643, &Local_1675))
	{
		Local_1675.f_152 = participant_id();
		Local_1675.f_152.f_2 = player_id();
		Local_1675.f_152.f_3 = network_player_id_to_int();
		Local_1675.f_152.f_4 = player_ped_id();
		if (does_entity_exist(Local_1675.f_152.f_4))
		{
			Local_1675.f_152.f_5 = { get_entity_coords(Local_1675.f_152.f_4, true, false) };
		}
		iVar0 = get_network_time_accurate();
		Local_1675.f_152.f_15 = get_time_difference(Local_1675.f_152.f_14, iVar0);
		if (Local_1675.f_152.f_15 < 0)
		{
			Local_1675.f_152.f_15 = (Local_1675.f_152.f_15 * -1);
		}
		Local_1675.f_152.f_14 = iVar0;
		Local_1675.f_152.f_16++;
		Local_1675.f_152.f_16 = (Local_1675.f_152.f_16 % 2);
		if (network_is_host_of_this_script())
		{
			func_4(&uLocal_1584, &Local_1643, &Local_1675, &uScriptParam_0);
		}
		func_5(&uLocal_1584, &Local_1643, &Local_1675);
		func_6(&Local_1675);
		wait(0);
	}
	func_7(&uLocal_1584, &Local_1643, &Local_1675);
	while (!_0x380ffa15b72408fb(1440))
	{
		wait(0);
	}
	func_8();
}

void func_1(var uParam0)
{
	func_9(12);
	func_18(uParam0, 2028, 2037, 2069, 2197, 2028, 4849, 7949, 7957, 9056, 2, 40);
	func_20(uParam0, 0, 7949, 9395, 1);
	func_20(uParam0, 1, 7949, 11900, 0);
	func_20(uParam0, 2, 7949, 14179, 0);
	func_20(uParam0, 3, 7949, 14869, 0);
	func_20(uParam0, 4, 7949, 16181, 0);
	func_20(uParam0, 5, 7949, 17722, 0);
	func_20(uParam0, 6, 7949, 19283, 0);
	func_20(uParam0, 7, 7949, 19919, 0);
	func_20(uParam0, 8, 7949, 20477, 0);
	func_20(uParam0, 9, 7949, 21109, 0);
	func_20(uParam0, 10, 7949, 23817, 0);
	func_20(uParam0, 11, 7949, 24910, 0);
	func_20(uParam0, 12, 7949, 25616, 0);
	func_20(uParam0, 13, 7949, 26074, 0);
	func_34(&(uParam0->f_152), 64);
}

void func_2(var uParam0)
{
	Local_1675.f_16 = get_hash_of_this_script_name();
	Local_1675.f_152.f_8 = *uParam0;
	Local_1675.f_152.f_9 = { func_35(Local_1675.f_152.f_8) };
	func_36(2, -1);
	func_37();
	if (func_38())
	{
		func_8();
	}
	network_register_host_broadcast_variables(&uLocal_1584, 59, 46);
	func_39(_0xba24095ea96dfe17(&uLocal_1584), 59, "m_NSMFrameworkHostData");
	network_register_player_broadcast_variables(&Local_1643, 11, 47);
	func_40(_0x690806bc83bc8ca2(Local_1643[0]), 11, "m_NSMFrameworkClientData.sRuntimeData");
	network_register_player_broadcast_variables(&(Local_1643.f_11), 21, 48);
	func_40(_0x690806bc83bc8ca2(Local_1643.f_11[0]), 21, "m_NSMFrameworkClientData.sMissionData");
	func_42(func_41(&(Local_1675.f_152), 64));
	set_this_script_can_remove_blips_created_by_any_script(true);
	set_this_script_can_be_paused(false);
	register_script_with_audio(1);
	if (func_43(16, 255))
	{
		func_44(&uLocal_1584, 4);
	}
}

bool func_3(var uParam0, var uParam1)
{
	if (func_45(0, 0))
	{
		return true;
	}
	uParam1->f_152.f_1 = participant_id_to_int();
	if (uParam0[uParam1->f_152.f_1] >= 7)
	{
		return true;
	}
	if (uParam1->f_152.f_326 & 1 != 0)
	{
		return true;
	}
	if (uParam1->f_152.f_326 & 128 != 0)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam2->f_152.f_11 = uParam0->f_2;
	switch (*uParam0)
	{
		case 0:
			func_46(uParam0, uParam1, uParam2, uParam3);
			break;
		case 1:
			func_47(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_48(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_49(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_50(uParam0, uParam1);
			break;
		case 5:
			func_51(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_52(uParam0, uParam1, uParam2);
			break;
		case 7:
			break;
		default:
			func_53(uParam0, 0);
			break;
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	uParam2->f_152.f_11 = uParam0->f_2;
	switch (uParam1[uParam2->f_152.f_1])
	{
		case 0:
			func_54(uParam0, uParam1, uParam2);
			break;
		case 1:
			func_55(uParam0, uParam1, uParam2);
			break;
		case 2:
			func_56(uParam0, uParam1, uParam2);
			break;
		case 3:
			func_57(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_58(uParam0, uParam1, uParam2);
			break;
		case 5:
			func_59(uParam0, uParam1, uParam2);
			break;
		case 6:
			func_60(uParam0, uParam1, uParam2);
			break;
		case 7:
			break;
		default:
			func_61(uParam1, uParam2, 0);
			break;
	}
	if (uParam2->f_152.f_326 & 64 != 0)
	{
		_0x236905c700fdb54d();
	}
	uParam2->f_152.f_326 = (uParam2->f_152.f_326 - uParam2->f_152.f_326 & 8);
	uParam2->f_152.f_326 = (uParam2->f_152.f_326 - uParam2->f_152.f_326 & 16);
}

void func_6(var uParam0)
{
	switch (uParam0->f_71)
	{
		case 0:
			func_62(uParam0, 1);
			break;
		case 1:
			if (!func_41(&(uParam0->f_152), 4))
			{
				return;
			}
			if (_0x3cf46f55c6585590())
			{
				return;
			}
			if (!_0x1840f3b30ed0105f(uParam0->f_152.f_380))
			{
				return;
			}
			func_62(uParam0, 2);
			break;
		case 2:
			if (_0x3cf46f55c6585590())
			{
				if (!_0x1431540bca1a1bd2())
				{
					return;
				}
			}
			func_63(&(uParam0->f_152), 4);
			func_62(uParam0, 1);
			break;
	}
}

void func_7(var uParam0, var uParam1, var uParam2)
{
	func_64(&(uParam0->f_7), &(uParam1->f_11), &(uParam2->f_152));
	func_65(&(uParam1->f_11), uParam2, 1);
	func_66(&(uParam2->f_152), 1);
	func_67(uParam2, 0);
	func_68(1, 2);
	set_everyone_ignore_player(uParam2->f_152.f_2, false);
	if (func_69(uParam2, 4))
	{
		_0x9428447ded71fc7e("RDRO_Death_Fail_Respawn_Scenes");
	}
	if (uParam2->f_63 != 0)
	{
		_0x00a15b94cba4f76f(uParam2->f_63);
		uParam2->f_63 = 0;
	}
	func_70();
	func_71(&(uParam2->f_152));
	func_72(&(uParam2->f_152));
	func_73(&(uParam2->f_152));
	func_74(&(uParam2->f_152));
	func_75(&(uParam2->f_19));
	_text_database_delete("UIC");
	if (_uiflowblock_is_loaded(uParam2->f_66))
	{
		_uiflowblock_release(&(uParam2->f_66));
	}
	if (uParam2->f_69 != -1)
	{
		release_sound_id(uParam2->f_69);
	}
	_0x531a78d6bf27014b(func_76());
	bVar1 = false;
	while (!bVar1)
	{
		bVar1 = true;
		if (iVar0 < 11)
		{
			bVar1 = false;
			func_77(&(uParam2->f_152), iVar0);
		}
		if (iVar0 < 4)
		{
			bVar1 = false;
			func_78(&(uParam2->f_152), iVar0);
		}
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_79(&(uParam2->f_152), iVar0, 1);
		}
		if (iVar0 < 14)
		{
			bVar1 = false;
			func_80(&(uParam2->f_152), iVar0);
		}
		if (iVar0 < 5)
		{
			bVar1 = false;
			func_81(&(uParam2->f_152), iVar0);
		}
		if (iVar0 < 7)
		{
			bVar1 = false;
			func_82(&(uParam0->f_7), &(uParam2->f_152), iVar0);
		}
		if (iVar0 < 1)
		{
			bVar1 = false;
			func_83(&(uParam2->f_152), iVar0);
		}
		iVar0++;
	}
	func_84(16);
	func_85(0);
	func_86(0);
	if (func_87(uParam0, 32))
	{
		func_88(uParam2->f_18, uParam0->f_6);
	}
	else if (func_41(&(uParam2->f_152), 1))
	{
		if (func_41(&(uParam2->f_152), 2))
		{
			func_88(0, -1);
		}
		else if (uParam2->f_152.f_381 != -1)
		{
			func_88(uParam2->f_152.f_381, uParam2->f_152.f_382);
		}
		else
		{
			func_88(uParam2->f_18, uParam2->f_152.f_382);
		}
	}
}

void func_8()
{
	terminate_this_thread();
}

void func_9(int iParam0)
{
	iVar0 = 0;
	if (func_89() != -1)
	{
		iVar0 = 1;
	}
	Global_1900688->f_1 = 2;
	Global_1900688->f_2 = 0;
	Global_1900688->f_3 = iParam0;
	Global_1900688->f_7 = iVar0;
	func_90(Global_1900688->f_7, Global_1900688->f_3);
}

int func_10(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

int func_11(var uParam0, var uParam1, var uParam2)
{
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			break;
	}
	return 1;
}

int func_12(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_2 == -1)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < 14)
		{
			if (_0xfbe782b3165ac8ec(func_91(iVar1)))
			{
			}
			else
			{
				iVar0 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
		if (_get_number_of_references_of_script_with_name_hash(-1455024014) > 0)
		{
			iVar0 = 0;
		}
		else if (func_92(uParam2->f_8))
		{
			iVar0 = 13;
		}
		if (iVar0 > 0)
		{
			func_44(uParam0, 64);
		}
		else
		{
			func_93(uParam0, 4);
		}
		func_94(uParam0, iVar0);
	}
	return 1;
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	bVar1 = true;
	func_95(uParam2->f_384.f_317, 1);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (uParam2->f_1348.f_15 == 0)
			{
				if (!add_relationship_group("MPINTRO_FRIEND_REL", &(uParam2->f_1348.f_15)))
				{
					return 0;
				}
			}
			if (uParam2->f_1348.f_16 == 0)
			{
				if (!add_relationship_group("MPINTRO_ENEMY_REL", &(uParam2->f_1348.f_16)))
				{
					return 0;
				}
			}
			iVar3 = get_ped_relationship_group_hash(uParam2->f_4);
			set_relationship_between_groups(2, iVar3, uParam2->f_1348.f_15);
			set_relationship_between_groups(2, uParam2->f_1348.f_15, iVar3);
			set_relationship_between_groups(2, uParam2->f_1348.f_15, -1976316465);
			set_relationship_between_groups(2, uParam2->f_1348.f_15, 841021282);
			_0x9629faf6460d35cb(uParam2->f_1348.f_15, 0);
			_0x9629faf6460d35cb(uParam2->f_1348.f_16, 0);
			uParam2->f_1348.f_3 = func_96(uParam2->f_8);
			uParam2->f_1348.f_4 = func_97(uParam2->f_1348.f_3);
			uParam2->f_1348.f_5 = func_98(uParam2->f_1348.f_3);
			uParam2->f_4808.f_81.f_1 = uParam2->f_1348.f_5;
			func_99(4);
			func_100();
			func_101(0);
			func_102();
			if (func_103())
			{
				func_104();
			}
			func_105(1);
			func_106(1);
			_0x160825dadf1b04b3();
			_text_database_request("MPINTRO");
			_text_database_request("MPINTAU");
			request_anim_dict(func_107());
			func_108(881353596, 0);
			func_109(0);
			func_110(-2101264851);
			func_111(uParam2, 0, -1916939610, 4419);
			func_111(uParam2, 1, -1783311098, 4420);
			func_111(uParam2, 2, 2138783923, 4421);
			func_112(uParam2, 11);
			func_113(uParam2, 65536);
			func_114(&(uParam2->f_1348.f_3194), uParam2->f_2);
			func_115(0);
			func_116(uParam1, uParam2, 1);
			break;
		case 1:
			uParam2->f_384.f_317 = Global_1071686->f_28341.f_3;
			if (uParam2->f_384.f_317 == 0)
			{
				func_117(uParam2, 4003, -1);
				return 0;
			}
			func_116(uParam1, uParam2, 2);
			break;
		case 2:
			iVar0 = uParam2->f_383;
			if (func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (!_0x603ac35fd4602c76(&(uParam2->f_24.f_5[iVar0])))
				{
					return 0;
				}
				func_119(uParam2, iVar0);
				uParam2->f_383++;
				if (uParam2->f_383 >= 3)
				{
					func_116(uParam1, uParam2, 3);
				}
			}
			else
			{
				uParam2->f_24.f_5[iVar0] = _0xd97d8d905f1562f2(func_120(uParam2, iVar0));
				uParam2->f_383++;
				if (uParam2->f_383 >= 3)
				{
					uParam2->f_383 = 0;
					func_121(uParam1, uParam2, 2);
				}
			}
			break;
		case 3:
			func_122(uParam2, 0);
			if (func_123() == 2026485318)
			{
				uParam2->f_384 = 1079424170;
				uParam2->f_384.f_1 = 409884964;
			}
			else if (func_123() == 24043185)
			{
				uParam2->f_384 = 963122449;
				uParam2->f_384.f_1 = -282247263;
			}
			else
			{
				func_117(uParam2, 4004, -1);
				return 0;
			}
			func_122(uParam2, 1);
			uParam2->f_1348.f_7 = func_124(uParam2->f_1348.f_3);
			if (uParam2->f_1348.f_7 == -1)
			{
				func_117(uParam2, 4005, -1);
				return 0;
			}
			uParam2->f_1348.f_8 = func_125(uParam2->f_1348.f_3);
			if (uParam2->f_1348.f_8 == 0)
			{
				func_117(uParam2, 4006, -1);
				return 0;
			}
			uParam2->f_1348.f_10 = func_126(uParam2->f_384.f_317);
			if (uParam2->f_1348.f_10 == 0)
			{
				func_117(uParam2, 4007, -1);
				return 0;
			}
			uParam2->f_1348.f_11 = func_127(uParam2->f_1348.f_10);
			if (uParam2->f_1348.f_11 == 0)
			{
				func_117(uParam2, 4008, -1);
				return 0;
			}
			uParam2->f_1348.f_12 = { func_128(uParam2->f_1348.f_11) };
			if (uParam2->f_1348.f_12.f_2 == 0)
			{
				func_117(uParam2, 4009, -1);
				return 0;
			}
			func_129();
			func_130();
			func_131(0, uParam2->f_1348.f_12);
			uParam2->f_1348.f_144 = func_132(uParam2->f_1348.f_3);
			if (uParam2->f_1348.f_144 == -1)
			{
				func_117(uParam2, 4010, -1);
				return 0;
			}
			uParam2->f_4926.f_251 = func_133(uParam2, 1641491606, 0, 0);
			uParam2->f_4926.f_252 = func_134(14, uParam2->f_4926.f_251);
			uParam2->f_4926.f_254 = func_133(uParam2, 98601888, 0, 0);
			uParam2->f_4926.f_255 = func_134(13, uParam2->f_4926.f_254);
			_copy_memory(&(uParam2->f_1348.f_37), (*Global_1116202)[uParam2->f_4926.f_252], 42);
			_copy_memory(&(uParam2->f_1348.f_114), Global_1109804->f_260.f_4368[uParam2->f_4926.f_252], 10);
			func_135((*Global_1116202)[uParam2->f_4926.f_252]);
			func_136(Global_1109804->f_260.f_4368[uParam2->f_4926.f_252]);
			_copy_memory(&(uParam2->f_1348.f_79), (*Global_1118808)[uParam2->f_4926.f_255], 35);
			_copy_memory(&(uParam2->f_1348.f_124), Global_1109804->f_260.f_4989[uParam2->f_4926.f_255], 13);
			func_137((*Global_1118808)[uParam2->f_4926.f_255]);
			func_138(Global_1109804->f_260.f_4989[uParam2->f_4926.f_255]);
			func_112(uParam2, 14);
			uParam2->f_4926.f_258 = func_133(uParam2, 661562258, 0, 0);
			Var4 = { func_139(uParam2->f_4926.f_258, 0, -1, -1) };
			uParam2->f_1348.f_137 = { func_140(Var4.f_3, Var4) };
			uParam2->f_4926.f_259 = { func_141(64445474, uParam2->f_4926.f_258) };
			uParam2->f_1348.f_139 = -1;
			uParam2->f_1348.f_143 = func_142(uParam2->f_1348.f_3);
			if (uParam2->f_1348.f_143 == 0)
			{
				func_117(uParam2, 4011, -1);
				return 0;
			}
			func_122(uParam2, 2);
			iVar37 = func_143(uParam2, 1279887153, 0, 0);
			iVar38 = 0;
			while (iVar38 < iVar37)
			{
				iVar39 = func_133(uParam2, -605472206, iVar38, 0);
				if (uParam2->f_4926.f_251 == iVar39)
				{
					uParam2->f_4926.f_253 = iVar38;
				}
				else
				{
					iVar38++;
				}
			}
			if (!func_144(&(uParam2->f_24), &(uParam2->f_24.f_5[2])))
			{
				func_117(uParam2, 4012, -1);
				return 0;
			}
			if (!func_145(uParam2->f_24, uParam2->f_4926.f_253, &(uParam2->f_4926.f_252)))
			{
				func_117(uParam2, 4013, -1);
				return 0;
			}
			func_122(uParam2, 2);
			iVar37 = func_143(uParam2, 1836615074, 0, 0);
			iVar38 = 0;
			while (iVar38 < iVar37)
			{
				iVar39 = func_133(uParam2, 367011945, iVar38, 0);
				if (uParam2->f_4926.f_254 == iVar39)
				{
					uParam2->f_4926.f_256 = iVar38;
				}
				else
				{
					iVar38++;
				}
			}
			if (!func_146(&(uParam2->f_24), &(uParam2->f_24.f_5[2])))
			{
				func_117(uParam2, 4014, -1);
				return 0;
			}
			if (!func_147(uParam2->f_24, uParam2->f_4926.f_256, &(uParam2->f_4926.f_255), uParam2->f_4926.f_251))
			{
				func_117(uParam2, 4015, -1);
				return 0;
			}
			func_116(uParam1, uParam2, 4);
			break;
		case 4:
			func_122(uParam2, 0);
			func_122(uParam2, 1);
			if (!func_148(uParam2, 263280777, 0, 0))
			{
				func_117(uParam2, 4404, -1);
				return 0;
			}
			if (uParam2->f_383 < 6)
			{
				bVar1 = false;
				func_149(uParam2, uParam2->f_383);
			}
			if (uParam2->f_383 < 3)
			{
				bVar1 = false;
				iVar2 = func_150(uParam2->f_383);
				uParam2->f_4926.f_178[uParam2->f_383] = func_151(uParam2, -513915388, iVar2, 0);
			}
			if (uParam2->f_383 < func_143(uParam2, -1704603418, 0, 0))
			{
				bVar1 = false;
				func_152(uParam2, uParam2->f_383);
			}
			if (uParam2->f_383 < func_143(uParam2, 296570933, 0, 0))
			{
				bVar1 = false;
				if (!func_153(uParam2, func_133(uParam2, 1294202201, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_154(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, -1158229860, 0, 0))
			{
				bVar1 = false;
				if (!func_155(uParam2, func_133(uParam2, -537413059, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_156(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, -823434583, 0, 0))
			{
				bVar1 = false;
				if (!func_157(uParam2, func_133(uParam2, 1909274527, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_158(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, 1357611604, 0, 0))
			{
				bVar1 = false;
				if (!func_159(uParam2, func_133(uParam2, -138435977, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_160(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, -1399703090, 0, 0))
			{
				bVar1 = false;
				if (!func_161(uParam2, func_133(uParam2, -165566174, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_162(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, -2142323684, 0, 0))
			{
				bVar1 = false;
				if (!func_163(uParam2, func_133(uParam2, -1475909150, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_164(uParam2->f_383), -1);
					return 0;
				}
			}
			if (uParam2->f_383 < func_143(uParam2, 257550969, 0, 0))
			{
				bVar1 = false;
				if (!func_165(uParam2, func_133(uParam2, 86633837, uParam2->f_383, 0)))
				{
					func_117(uParam2, func_166(uParam2->f_383), -1);
					return 0;
				}
			}
			func_122(uParam2, 2);
			uParam2->f_383++;
			if (bVar1)
			{
				func_116(uParam1, uParam2, 5);
			}
			break;
		case 5:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				uParam0->f_20.f_12++;
				reserve_network_mission_objects(uParam0->f_20.f_12);
				func_121(uParam1, uParam2, 2);
				return 0;
			}
			if (!_text_database_has_loaded("MPINTRO"))
			{
				bVar1 = false;
			}
			if (!_text_database_has_loaded("MPINTAU"))
			{
				bVar1 = false;
			}
			if (!has_anim_dict_loaded(func_107()))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_116(uParam1, uParam2, 7);
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

int func_14(var uParam0, var uParam1, var uParam2)
{
	bVar2 = true;
	bVar3 = false;
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (_network_is_player_index_valid(uParam2->f_2) && !is_player_dead(uParam2->f_2))
			{
				set_everyone_ignore_player(uParam2->f_2, false);
				set_player_forced_aim(uParam2->f_2, false, 0, -1, false);
			}
			if (does_entity_exist(uParam2->f_4))
			{
				_set_ped_infinite_ammo_clip(uParam2->f_4, false);
			}
			func_73(uParam2);
			func_112(uParam2, 0);
			func_112(uParam2, 1);
			func_112(uParam2, 2);
			func_167(uParam2, 3);
			func_167(uParam2, 4);
			func_167(uParam2, 5);
			if (_0xa2cac9def0195e6f(1))
			{
				_0x36559148b78853b3(1, 1, 0);
			}
			func_168(uParam2->f_5);
			func_169(uParam2);
			func_170(uParam2);
			func_171();
			render_script_cams(false, false, 3000, true, false, 0);
			_set_scenario_type_enabled_hash(-1245423146, true);
			if (_is_any_app_running())
			{
				_close_all_apps();
			}
			if (uParam2->f_12 <= 5)
			{
				func_112(uParam2, 11);
			}
			else
			{
				func_167(uParam2, 11);
			}
			if (uParam2->f_12 <= 9)
			{
				func_95(uParam2->f_384.f_317, 1);
			}
			else
			{
				func_172(uParam2->f_384.f_317);
			}
			if (is_thread_active(uParam2->f_1348.f_36, false))
			{
				_0x7de4643157ad646c(uParam2->f_1348.f_36);
			}
			if (func_103())
			{
				func_104();
			}
			func_100();
			func_167(uParam2, 17);
			func_167(uParam2, 16);
			func_167(uParam2, 56);
			func_167(uParam2, 40);
			func_173(uParam2);
			func_167(uParam2, 23);
			func_167(uParam2, 24);
			func_167(uParam2, 26);
			func_167(uParam2, 25);
			func_167(uParam2, 57);
			func_174(uParam2->f_1348.f_7);
			func_175(uParam2->f_1348.f_7, 0, 1);
			func_176(&(uParam2->f_1348.f_371), 0);
			_0x597f571ddee3ffac(0);
			func_177(0, 0);
			set_ped_can_use_auto_conversation_lookat(uParam2->f_4, true);
			_0x4f806a6cfed89468(uParam2->f_4, 1);
			func_178(uParam2, 1);
			func_179(2);
			func_179(4);
			func_180();
			func_181(1);
			if (is_thread_active(uParam2->f_4808.f_81, false))
			{
				_0x7de4643157ad646c(uParam2->f_4808.f_81);
			}
			func_182(1);
			func_183(uParam2, 0, 1);
			func_184();
			if (func_185(uParam2->f_2, 0))
			{
				func_186();
			}
			func_187(&(uParam2->f_1348.f_148));
			func_187(&(uParam2->f_1348.f_151));
			func_188(4);
			_0x154340e87d8cc178(879737745);
			func_189(uParam2);
			_0x55f37f5f3f2475e1();
			_0x062b4a4a3396351d(uParam2->f_2);
			render_script_cams(false, false, 3000, true, false, 0);
			func_190(0);
			func_191(0);
			func_192(&(uParam2->f_1348.f_3243));
			end_srl();
			func_108(881353596, 0);
			func_193(&(uParam2->f_1348.f_3194), uParam2->f_2);
			func_194(uParam2);
			func_116(uParam1, uParam2, 8);
			break;
		case 8:
			iVar7 = uParam2->f_383;
			if (iVar7 < uParam2->f_12)
			{
				if (func_195(uParam2, iVar7))
				{
					uParam2->f_383++;
				}
				return 0;
			}
			if (func_196(uParam2))
			{
				return 0;
			}
			func_116(uParam1, uParam2, 9);
			break;
		case 9:
			if (uParam2->f_383 < 6)
			{
				bVar2 = false;
				func_197(uParam0, uParam2->f_383, 1);
			}
			if (uParam2->f_383 < 3)
			{
				bVar2 = false;
				func_198(uParam0, uParam2->f_383, 1);
			}
			if (uParam2->f_383 < 9)
			{
				bVar2 = false;
				func_199(uParam0, uParam2->f_383, 1);
			}
			if (uParam2->f_383 < 1)
			{
				bVar2 = false;
				func_200(uParam0, uParam2->f_383, 1);
			}
			if (uParam2->f_383 < 1)
			{
				bVar2 = false;
				func_79(uParam2, uParam2->f_383, 1);
			}
			if (uParam2->f_383 < 14)
			{
				bVar2 = false;
				func_80(uParam2, uParam2->f_383);
			}
			if (uParam2->f_383 < 5)
			{
				bVar2 = false;
				func_81(uParam2, uParam2->f_383);
			}
			if (uParam2->f_383 < 7)
			{
				bVar2 = false;
				func_201(uParam0, uParam1, uParam2, uParam2->f_383);
			}
			if (uParam2->f_383 < 23)
			{
				bVar2 = false;
				func_202(uParam0, uParam2->f_383);
			}
			if (uParam2->f_383 < 1)
			{
				func_203(uParam2, uParam2->f_383);
			}
			uParam2->f_383++;
			if (bVar2)
			{
				func_116(uParam1, uParam2, 10);
			}
			break;
		case 10:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_204(&(uParam2->f_1348.f_17));
				if (!func_205(uParam2, uParam2->f_12))
				{
					func_117(uParam2, 4058, -1);
					return 0;
				}
				if (!func_206(uParam2, 1862763509, &(uParam2->f_1348.f_17)))
				{
					if (func_133(uParam2, 834889128, 1862763509, 0) != -1006371048)
					{
						func_117(uParam2, 4059, -1);
						return 0;
					}
					uParam2->f_1348.f_17.f_5 = { func_207(uParam2, -1731752235, -1006371048, 0) };
					uParam2->f_1348.f_17.f_8 = func_208(uParam2, 1054609211, -1006371048, 0);
					if (func_209(uParam2->f_1348.f_17.f_5))
					{
						func_117(uParam2, 4060, -1);
						return 0;
					}
					func_210(1, 0);
				}
				func_121(uParam1, uParam2, 2);
			}
			if (uParam2->f_1348.f_17.f_3 > -1 && uParam2->f_1348.f_17.f_3 < 3)
			{
				Var8 = &uParam2->f_4926.f_178[uParam2->f_1348.f_17.f_3];
				Var8.f_1 = { uParam2->f_1348.f_17.f_5 };
				Var8.f_4 = uParam2->f_1348.f_17.f_8;
				if (!func_211(uParam0, uParam2->f_1348.f_17.f_3, &Var8))
				{
					return 0;
				}
				iVar0 = func_212(uParam0, uParam2->f_1348.f_17.f_3);
				freeze_entity_position(iVar0, true);
				func_213(iVar0, uParam2->f_1348.f_17.f_4, 1);
			}
			func_214(1);
			func_215();
			func_216(0);
			if (func_217(255))
			{
				func_218(1);
				if (func_219(255))
				{
					func_220(3, 0, 0, 0);
				}
				func_116(uParam1, uParam2, 11);
			}
			else
			{
				func_218(1);
				func_221(uParam2->f_1348.f_17.f_5, uParam2->f_1348.f_17.f_8, 1);
				func_116(uParam1, uParam2, 12);
			}
			break;
		case 11:
			if (!func_222(uParam2->f_3))
			{
				return 0;
			}
			if (!func_223(uParam2->f_1348.f_17.f_5, uParam2->f_1348.f_17.f_8, 0f, 0f, 0f, 0))
			{
				return 0;
			}
			if (does_entity_exist(uParam2->f_4))
			{
				func_224(uParam2->f_4);
				iVar6 = _0x1f714e7a9dadfc42(uParam2->f_4);
				if (does_entity_exist(iVar6))
				{
					if (!is_entity_a_mission_entity(iVar6))
					{
						set_entity_as_mission_entity(iVar6, true, false);
					}
					delete_entity(&iVar6);
				}
			}
			func_116(uParam1, uParam2, 12);
			break;
		case 12:
			if (func_217(255))
			{
				return 0;
			}
			if (uParam2->f_1348.f_17.f_3 > -1 && uParam2->f_1348.f_17.f_3 < 3)
			{
				if (!func_225(uParam0, uParam2->f_1348.f_17.f_3, &iVar0))
				{
					if (network_request_control_of_entity(iVar0))
					{
					}
					return 0;
				}
				if (!_0x9587913b9e772d29(iVar0, 0))
				{
					request_collision_at_coord(uParam2->f_1348.f_17.f_5);
					return 0;
				}
				freeze_entity_position(iVar0, false);
			}
			func_116(uParam1, uParam2, 13);
			break;
		case 13:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_226(uParam2, 2);
				func_226(uParam2, 1);
				if (uParam2->f_12 <= 0)
				{
					func_227(uParam2->f_4, uParam2->f_384, 1, 0, 0);
				}
				else if (uParam2->f_12 <= 3)
				{
					func_227(uParam2->f_4, uParam2->f_384.f_1, 1, 0, 0);
				}
				else
				{
					if (!func_228(uParam2, 1, 1))
					{
						return 0;
					}
					func_229(uParam2->f_4, 0, 1, 0);
				}
				func_121(uParam1, uParam2, 2);
				return 0;
			}
			if (!func_230(uParam2, 1681219929, 36, 1))
			{
				bVar2 = false;
			}
			if (!func_230(uParam2, -1330115686, 28, 2))
			{
				bVar2 = false;
			}
			if (func_231())
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				func_116(uParam1, uParam2, 14);
			}
			break;
		case 14:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (!func_232(uParam2))
				{
					return 0;
				}
				func_121(uParam1, uParam2, 2);
			}
			if (uParam2->f_12 >= 5 && uParam2->f_12 <= 8)
			{
				if (!func_233(uParam2))
				{
					return 0;
				}
				func_234(0, 1);
			}
			func_116(uParam1, uParam2, 15);
			break;
		case 15:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (func_235(1717788883) != -1)
				{
					return 0;
				}
				if (_get_number_of_references_of_script_with_name_hash(-230235335) > 0)
				{
					return 0;
				}
				func_121(uParam1, uParam2, 2);
			}
			if (uParam2->f_12 > 6 && uParam2->f_12 < 11)
			{
				if (uParam2->f_12 > 8)
				{
					bVar3 = true;
				}
				if (!func_236(uParam2, bVar3))
				{
					if (!func_237(&(uParam2->f_1348.f_151)))
					{
						func_238(&(uParam2->f_1348.f_151), 0);
					}
					if (func_239(&(uParam2->f_1348.f_151), 20f))
					{
						func_167(uParam2, 19);
						func_187(&(uParam2->f_1348.f_151));
					}
					return 0;
				}
			}
			func_187(&(uParam2->f_1348.f_151));
			func_116(uParam1, uParam2, 16);
			break;
		case 16:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_240(uParam2);
				func_241(uParam2);
				func_121(uParam1, uParam2, 2);
			}
			if (!func_242(uParam0, uParam2, uParam2->f_12, 1, 1, 1))
			{
				return 0;
			}
			if (func_185(uParam2->f_2, 0))
			{
				return 0;
			}
			if (uParam2->f_12 >= 1)
			{
				iVar0 = func_212(uParam0, 0);
				if (does_entity_exist(iVar0))
				{
					set_vehicle_doors_locked(iVar0, 1);
					set_vehicle_door_open(iVar0, 1, true, true);
					set_vehicle_door_open(iVar0, 3, true, true);
				}
			}
			func_116(uParam1, uParam2, 17);
			break;
		case 17:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (uParam2->f_12 <= 5)
				{
					func_243(uParam2, 0);
				}
				else
				{
					func_243(uParam2, 1);
				}
				if (does_entity_exist(_0xf49f14462f0ae27c(uParam2->f_2)))
				{
					func_244(_0xf49f14462f0ae27c(uParam2->f_2));
				}
				func_245(uParam0, uParam2);
				func_246(uParam0, uParam2);
				func_247(&(uParam2->f_4808.f_86));
				func_121(uParam1, uParam2, 2);
			}
			if (!func_205(uParam2, uParam2->f_12))
			{
				func_117(uParam2, 4061, -1);
				return 0;
			}
			if (uParam2->f_383 < func_143(uParam2, 1264015228, 0, 0))
			{
				bVar2 = false;
				iVar4 = func_133(uParam2, 995627660, uParam2->f_383, 0);
				if (iVar4 == 1862763509)
				{
					iVar1 = uParam2->f_4;
				}
				else if (iVar4 == -1006371048)
				{
					iVar1 = _0xf49f14462f0ae27c(uParam2->f_2);
				}
				else
				{
					iVar1 = func_249(uParam0, func_248(iVar4));
				}
				if (does_entity_exist(iVar1))
				{
					iVar5 = func_250(func_133(uParam2, -880605302, iVar4, 0));
					if (func_251(uParam2, 61))
					{
						if ((iVar4 == -1006371048 && iVar5 == 0) || (iVar4 == -1006371048 && iVar5 == 1))
						{
							iVar5 = uParam2->f_1348.f_3458;
						}
						else if ((iVar4 == -1703925284 && iVar5 == 1) || (iVar4 == -1703925284 && iVar5 == 0))
						{
							iVar5 = uParam2->f_1348.f_3459;
						}
					}
					if (iVar5 != -1)
					{
						func_252(uParam0, uParam2, iVar5);
						if (func_253(uParam2, iVar1, -76381094, iVar5))
						{
							func_254(uParam2);
						}
					}
				}
			}
			if (uParam2->f_12 >= 2)
			{
				func_255(uParam2);
			}
			uParam2->f_383++;
			if (bVar2)
			{
				func_167(uParam2, 0);
				func_116(uParam1, uParam2, 18);
			}
			break;
		case 18:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				_0x4759cc730f947c81();
				_0x1ff00db43026b12f();
				func_121(uParam1, uParam2, 2);
			}
			if (!_0x2701d01d5e18fc31())
			{
				bVar2 = false;
			}
			if (!_0x0ee3f0d7feccc54f())
			{
				bVar2 = false;
			}
			if (func_256())
			{
				bVar2 = false;
			}
			if (bVar2)
			{
				func_116(uParam1, uParam2, 19);
			}
			break;
		case 19:
			func_257(4);
			if (uParam2->f_12 >= 8 && uParam2->f_12 <= 10)
			{
				func_258(uParam2->f_384.f_317);
			}
			func_167(uParam2, 1);
			func_167(uParam2, 2);
			func_190(1);
			func_259(&(uParam2->f_1348.f_3194), uParam2->f_2);
			return 1;
	}
	return 0;
}

void func_15(var uParam0, var uParam1, var uParam2)
{
}

void func_16(var uParam0, var uParam1, var uParam2)
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		_0x7de4643157ad646c(get_id_of_this_thread());
	}
	func_260();
	func_261(8);
	_0x3c8f74e8fe751614();
	func_262(1);
	disable_control_action(0, -8320552, false);
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	bVar0 = is_ped_in_combat(uParam2->f_4, 0);
	if (uParam2->f_327 == -940387254)
	{
		func_263(250);
	}
	if (does_entity_exist(uParam2->f_4))
	{
		set_ped_reset_flag(uParam2->f_4, 49, true);
		set_ped_reset_flag(uParam2->f_4, 187, true);
	}
	if (func_118((*uParam1)[uParam2->f_1], 4))
	{
		func_170(uParam2);
	}
	if (_network_is_player_index_valid(uParam2->f_2))
	{
		set_all_random_peds_flee_this_frame(uParam2->f_2);
	}
	if (does_blip_exist(&(uParam2->f_41.f_11[1])))
	{
		func_264(0);
	}
	else
	{
		func_264(1);
	}
	if (_0x8f4f050054005c27(&(uParam2->f_1348), 11))
	{
		func_265(uParam2, 1);
		func_266(1);
		func_267(0);
		func_264(0);
		func_268(0);
		func_101(0);
		if (does_entity_exist(uParam2->f_4))
		{
			set_ped_config_flag(uParam2->f_4, 366, true);
			set_ped_reset_flag(uParam2->f_4, 195, true);
			_0x6569f31a01b4c097(uParam2->f_4, 2, 0);
			_0x6569f31a01b4c097(uParam2->f_4, 3, 0);
			_0x18ff3110cf47115d(uParam2->f_4, 9, false);
		}
		_0xf45e46deecf7df6e(24576, 0, 0, -1, -1);
		if (!_0x8f4f050054005c27(&(uParam2->f_1348), 13))
		{
			_0xc6dcc2a3a8825c85(1);
			func_112(uParam2, 13);
		}
	}
	else
	{
		func_265(uParam2, 0);
		func_267(1);
		func_264(1);
		func_268(1);
		func_101(1);
		if (does_entity_exist(uParam2->f_4))
		{
			set_ped_config_flag(uParam2->f_4, 366, false);
			_0x6569f31a01b4c097(uParam2->f_4, 2, 1);
			_0x6569f31a01b4c097(uParam2->f_4, 3, 1);
			_0x18ff3110cf47115d(uParam2->f_4, 9, true);
		}
		if (_0x8f4f050054005c27(&(uParam2->f_1348), 13))
		{
			_0xbc90bdf4e5228ea1();
			func_167(uParam2, 13);
		}
		func_269(uParam2);
	}
	if (_0x8f4f050054005c27(&(uParam2->f_1348), 12))
	{
		disable_control_action(0, -822242784, false);
	}
	func_252(uParam0, uParam2, uParam2->f_1348.f_35);
	uParam2->f_1348.f_35++;
	uParam2->f_1348.f_35 = (uParam2->f_1348.f_35 % 5);
	if (!func_251(uParam2, 0))
	{
		func_270(uParam0, uParam2);
		func_271(uParam0, uParam2);
		func_254(uParam2);
	}
	func_272(uParam0, uParam1, uParam2);
	func_273(uParam0, uParam2);
	if (func_274((*Global_1134390)[uParam2->f_3]->f_38.f_3))
	{
		func_275((*Global_1134390)[uParam2->f_3]->f_38.f_3, 8);
		func_275((*Global_1134390)[uParam2->f_3]->f_38.f_3, 64);
	}
	if (!func_276(uParam2->f_4, 0, 1))
	{
		if (func_277(uParam2, uParam2->f_4, 3, 0))
		{
			set_ped_max_move_blend_ratio(uParam2->f_4, 1.5f);
			func_278(0);
		}
	}
	if (uParam2->f_12 <= 12)
	{
		if (get_ped_config_flag(uParam2->f_4, 366, true) == 0)
		{
			set_ped_config_flag(uParam2->f_4, 366, true);
		}
	}
	else if (get_ped_config_flag(uParam2->f_4, 366, true) == 1)
	{
		set_ped_config_flag(uParam2->f_4, 366, false);
	}
	if (uParam2->f_12 >= 5 && uParam2->f_12 <= 8)
	{
		if (is_control_pressed(0, -1404316431))
		{
			func_279(uParam2);
		}
	}
	if (uParam2->f_12 >= 7 && uParam2->f_12 <= 9)
	{
		if (func_281(func_280(uParam2->f_1348.f_3)) && _is_imap_active_2(uParam2->f_1348.f_143))
		{
			func_282(uParam2, 0, 1176979326, *uParam2->f_4926[3]);
			if (!does_entity_exist(uParam2->f_1348.f_158[0]->f_1))
			{
			}
		}
	}
	else
	{
		func_203(uParam2, 0);
	}
	if (func_283(Global_1893587->f_2) == 1 && !bVar0)
	{
		if (!_0xb346c85d49cc998e(uParam2->f_4, 1))
		{
			_0xb8de69d9473b7593(uParam2->f_4, 1);
		}
	}
	else if (_0xb346c85d49cc998e(uParam2->f_4, 1))
	{
		_0x949b2f9ed2917f5d(uParam2->f_4, 1);
	}
	func_284(uParam2, 5);
	func_284(uParam2, 13);
	func_285(uParam2, &(uParam2->f_384.f_318));
	if (uParam2->f_12 <= 10)
	{
		func_286(1);
	}
	if (uParam2->f_17)
	{
		if (func_287(&(uParam2->f_1348.f_3194), uParam2->f_2, uParam2->f_4))
		{
			func_288(uParam2);
		}
		if (func_289(uParam2->f_1348.f_3194.f_43))
		{
			func_290(uParam2);
		}
	}
	func_291();
	func_292(uParam2);
}

int func_17(var uParam0, var uParam1, var uParam2)
{
	if (func_251(uParam2, 22))
	{
		if (uParam2->f_1348.f_139 != -1)
		{
			func_293(uParam2->f_1348.f_139);
		}
		if (_get_number_of_references_of_script_with_name_hash(-230235335) == 0)
		{
			if (func_289(_0xc17f69e1418cd11f(11)))
			{
			}
			else
			{
				return 1;
			}
		}
	}
	else if (func_118((*uParam1)[uParam2->f_1], 8))
	{
		if (uParam2->f_1348.f_32 == 1)
		{
			if (_0x354f689c4ffaab37(-448983936))
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
		else
		{
			return 4;
		}
	}
	else if (func_251(uParam2, 23))
	{
		if (absi(get_time_difference(uParam2->f_1348.f_147, uParam2->f_14)) > 3000)
		{
			return 8;
		}
	}
	else if (func_251(uParam2, 25))
	{
		return 6;
	}
	else if (func_251(uParam2, 26))
	{
		return 7;
	}
	else if (uParam2->f_327 == -940387254)
	{
		if (is_entity_dead(uParam2->f_4))
		{
			return 0;
		}
		if (func_251(uParam2, 24))
		{
			return 5;
		}
	}
	return -1;
}

void func_18(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	uParam0->f_72 = iParam1;
	uParam0->f_73 = iParam2;
	uParam0->f_74 = iParam3;
	uParam0->f_75 = iParam4;
	uParam0->f_76 = iParam5;
	uParam0->f_77 = iParam6;
	uParam0->f_78 = iParam7;
	uParam0->f_79 = iParam8;
	uParam0->f_80 = iParam9;
	uParam0->f_17 = iParam10;
	uParam0->f_18 = iParam11;
}

int func_19(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 1, 0, 1, 0);
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_4 = -1;
	func_294(uParam0, uParam2);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			set_everyone_ignore_player(uParam2->f_2, true);
			_0x2161278c6322f740(10208, 0, 0, -1, -1, 0);
			func_167(uParam2, 60);
			_0xfb0e622b401884d3(-1306897787);
			func_295(uParam2, -625508879);
			func_295(uParam2, -1265179653);
			func_116(uParam1, uParam2, 20);
			break;
		case 20:
			if (!func_296(uParam2->f_3, 0))
			{
				return 0;
			}
			if (!request_script_audio_bank("Hammer_Sledgehammer_PickAxe"))
			{
				return 0;
			}
			if (!request_script_audio_bank("Rake"))
			{
				return 0;
			}
			if (!func_297(0))
			{
				return 0;
			}
			if (func_298(uParam2->f_8))
			{
				if (!func_299(uParam2->f_8, 1))
				{
					return 0;
				}
			}
			func_122(uParam2, 1);
			if (!func_148(uParam2, 263280777, 0, 0))
			{
				func_117(uParam2, 4062, -1);
				return 0;
			}
			iVar18 = 0;
			while (iVar18 < 6)
			{
				func_149(uParam2, iVar18);
				iVar18++;
			}
			if (func_123() == 2026485318)
			{
				uParam2->f_384 = 1079424170;
				uParam2->f_384.f_1 = 409884964;
			}
			else if (func_123() == 24043185)
			{
				uParam2->f_384 = 963122449;
				uParam2->f_384.f_1 = -282247263;
			}
			else
			{
				func_117(uParam2, 4063, -1);
				return 0;
			}
			func_190(0);
			func_184();
			func_116(uParam1, uParam2, 21);
			break;
		case 21:
			func_300(uParam2);
			if (func_217(255))
			{
				return 0;
			}
			if (!func_205(uParam2, 0))
			{
				func_117(uParam2, 4064, -1);
				return 0;
			}
			if (!func_206(uParam2, 1862763509, &Var0))
			{
				func_117(uParam2, 4065, -1);
				return 0;
			}
			func_191(1);
			func_218(1);
			func_214(1);
			func_221(Var0.f_5, Var0.f_8, 1);
			func_215();
			func_301(uParam2);
			func_116(uParam1, uParam2, 22);
			break;
		case 22:
			func_300(uParam2);
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (func_217(255))
				{
					return 0;
				}
				if (_is_imap_active(183712523))
				{
					func_302(183712523);
				}
				if (_is_imap_active(-1699673416))
				{
					func_302(-1699673416);
				}
				if (_is_imap_active(1679934574))
				{
					func_302(1679934574);
				}
				func_121(uParam1, uParam2, 2);
			}
			if (!func_304(uParam0, uParam2, 0, "cutscene@MPINTRO_INT", func_303(uParam2->f_1348.f_3), 2, 0, 0, 0))
			{
				if ((_does_anim_scene_exist(&(uParam2->f_249.f_62[0])) && !_is_anim_scene_loading(&(uParam2->f_249.f_62[0]), true)) && !_is_anim_scene_loaded(&(uParam2->f_249.f_62[0]), true, false))
				{
					freeze_entity_position(uParam2->f_4, false);
					set_ped_can_use_auto_conversation_lookat(uParam2->f_4, true);
					_0x4f806a6cfed89468(uParam2->f_4, 0);
					if (func_123() == 2026485318)
					{
						func_305(uParam0, uParam2, 0, "mp_player_m_1", uParam2->f_4, 0);
						func_306(uParam0, uParam2, 0, "IsMale", 1);
					}
					else
					{
						func_305(uParam0, uParam2, 0, "mp_player_f_1", uParam2->f_4, 0);
						func_306(uParam0, uParam2, 0, "IsMale", 0);
					}
					load_anim_scene(&(uParam2->f_249.f_62[0]));
				}
				return 0;
			}
			if (_is_loading_screen_active())
			{
				shutdown_loading_screen();
				return 0;
			}
			if (func_307(uParam0, uParam1, uParam2, 0, 1))
			{
				func_308(uParam2);
				func_116(uParam1, uParam2, 23);
			}
			break;
		case 23:
			func_309(1, 0, 1);
			disable_frontend_this_frame();
			_0x2804658eb7d8a50b(4, 621422181);
			func_310(2000);
			if (!func_311(uParam0, uParam2, 0, "MPINTRO_INT_P1_T04_Shot_1") || has_anim_event_fired(uParam2->f_4, -686294103))
			{
				func_312(uParam2);
			}
			func_313(uParam2);
			if (!func_304(uParam0, uParam2, 1, "cutscene@MPINTRO_BINK", "MultiStart", 16386, 0, 1, 0))
			{
			}
			else if (func_314(uParam0, uParam2, 0, 0.98f))
			{
				release_named_script_audio_bank("Hammer_Sledgehammer_PickAxe");
				release_named_script_audio_bank("Rake");
				if (!func_205(uParam2, 1))
				{
					func_117(uParam2, 4422, -1);
					return 0;
				}
				if (!func_206(uParam2, 1862763509, &Var0))
				{
					func_117(uParam2, 4422, -1);
					return 0;
				}
				func_315(uParam0, uParam2, 1, Var0.f_5, 0f, 0f, 0f, 2);
				if (func_307(uParam0, uParam1, uParam2, 1, 0))
				{
					func_316(uParam2);
					func_201(uParam0, uParam1, uParam2, 0);
					func_116(uParam1, uParam2, 24);
				}
			}
			break;
		case 24:
			func_309(1, 0, 1);
			disable_frontend_this_frame();
			_0x2804658eb7d8a50b(4, 621422181);
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				if (func_217(255))
				{
					return 0;
				}
				func_191(1);
				func_218(1);
				if (!func_205(uParam2, 1))
				{
					func_117(uParam2, 4066, -1);
					return 0;
				}
				if (!func_206(uParam2, 1862763509, &Var0))
				{
					func_117(uParam2, 4067, -1);
					return 0;
				}
				func_221(Var0.f_5, Var0.f_8, 1);
				func_215();
				func_121(uParam1, uParam2, 2);
			}
			func_317(uParam2);
			if (!func_304(uParam0, uParam2, 2, "cutscene@MPINTRO_INT2", func_318(uParam2->f_1348.f_3), 0, 0, 1, 0))
			{
			}
			else if (func_217(255))
			{
			}
			else if (func_314(uParam0, uParam2, 1, 0.98f))
			{
				func_319(uParam2);
				if (func_123() == 2026485318)
				{
					func_305(uParam0, uParam2, 2, "mp_player_m_1", uParam2->f_4, 0);
					func_320(uParam0, uParam2, 2, "Prisoner_F_1", 1);
					func_320(uParam0, uParam2, 2, "Prisoner_F_2", 1);
					func_320(uParam0, uParam2, 2, "Prisoner_F_3", 1);
				}
				else
				{
					func_305(uParam0, uParam2, 2, "mp_player_f_1", uParam2->f_4, 0);
					func_320(uParam0, uParam2, 2, "Prisoner_M_1", 1);
					func_320(uParam0, uParam2, 2, "Prisoner_M_2", 1);
					func_320(uParam0, uParam2, 2, "Prisoner_M_3", 1);
				}
				iVar19 = func_212(uParam0, 0);
				func_305(uParam0, uParam2, 2, "wagonprison01x", iVar19, 0);
				iVar19 = func_212(uParam0, 1);
				func_305(uParam0, uParam2, 2, "COACH2", iVar19, 0);
				iVar19 = func_249(uParam0, 1);
				func_305(uParam0, uParam2, 2, "HORLEY", iVar19, 0);
				if (func_307(uParam0, uParam1, uParam2, 2, 0))
				{
					func_191(1);
					func_201(uParam0, uParam1, uParam2, 1);
					if (func_123() == 2026485318)
					{
						uParam2->f_1348.f_3457 = 1644960709;
						iVar21 = 409884964;
					}
					else
					{
						uParam2->f_1348.f_3457 = 237932673;
						iVar21 = -282247263;
					}
					func_321(get_player_ped(player_id()), iVar21, &(uParam2->f_1348.f_3243), 1);
					iVar19 = func_322(uParam0, uParam2, 2, "HENCHMAN", 0);
					if (does_entity_exist(iVar19))
					{
						func_323(get_ped_index_from_entity_index(iVar19), 379542007, 1, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					iVar19 = func_322(uParam0, uParam2, 2, "WENT", 0);
					if (does_entity_exist(iVar19))
					{
						func_323(get_ped_index_from_entity_index(iVar19), 379542007, 1, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
					}
					func_116(uParam1, uParam2, 25);
				}
			}
			break;
		case 25:
			func_309(1, 0, 1);
			disable_frontend_this_frame();
			_0x2804658eb7d8a50b(4, 621422181);
			if (func_324(uParam0, uParam2, 2, "HORLEY"))
			{
				func_205(uParam2, 1);
				func_206(uParam2, 1905310431, &Var9);
				func_325(uParam0, 1, &Var9);
			}
			fVar20 = func_326(uParam0, uParam2, 2);
			if (has_anim_event_fired(uParam2->f_4, -838751895))
			{
				if (!_0x354f689c4ffaab37(-1306897787))
				{
					_0x7c32191d9fb2bdea(-1306897787);
				}
			}
			if (fVar20 >= 0.7f && func_327(&(uParam2->f_384.f_318), 0, 1))
			{
				if (!func_251(uParam2, 60))
				{
					func_328(uParam2->f_4, uParam2->f_1348.f_3457, 0, -207860920, 0, 1, 0, 1, 0, 1, 1);
					set_current_ped_weapon(uParam2->f_4, -183018591, true, 1, false, false);
					_0x5230d3f6ee56cfe6(uParam2->f_4, 1);
					func_112(uParam2, 60);
				}
				_0x4f806a6cfed89468(uParam2->f_4, 0);
			}
			if (has_anim_event_fired(uParam2->f_4, 696338061))
			{
				_0x4f806a6cfed89468(uParam2->f_4, 1);
				func_329(&(Global_1952637->f_1675), uParam2->f_4, 26, 1, 1);
				func_116(uParam1, uParam2, 26);
			}
			break;
		case 26:
			func_309(1, 0, 1);
			disable_frontend_this_frame();
			if (!func_327(&(uParam2->f_384.f_318), 0, 1))
			{
				func_183(uParam2, 1, 1);
				func_330(0);
				return 0;
			}
			if (!func_331(uParam2, 1))
			{
				return 0;
			}
			if (!func_314(uParam0, uParam2, 2, -1082130432))
			{
				return 0;
			}
			func_332(uParam2, -625508879);
			func_332(uParam2, -1265179653);
			set_current_ped_weapon(uParam2->f_4, -183018591, true, 1, false, false);
			_0x5230d3f6ee56cfe6(uParam2->f_4, 1);
			_0x4f806a6cfed89468(uParam2->f_4, 1);
			_0x2208438012482a1a(uParam2->f_4, false, false);
			func_333(uParam2, 1);
			func_190(1);
			func_183(uParam2, 0, 1);
			func_191(0);
			func_192(&(uParam2->f_1348.f_3243));
			_network_clock_time_override(18, 30, 0, 0, false);
			return 1;
	}
	return 0;
}

void func_20(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return;
	}
	uParam0->f_81[iParam1] = func_334(0, (iParam1 - 1));
	uParam0->f_81[iParam1]->f_1 = func_335(14, iParam1 + 1);
	uParam0->f_81[iParam1]->f_2 = iParam2;
	uParam0->f_81[iParam1]->f_3 = iParam3;
	uParam0->f_81[iParam1]->f_4 = iParam4;
}

bool func_21(var uParam0, var uParam1, var uParam2)
{
	iVar0 = _0xf49f14462f0ae27c(uParam2->f_2);
	iVar1 = func_249(uParam0, 5);
	iVar2 = func_249(uParam0, 1);
	vVar3 = { get_entity_coords(iVar2, true, false) };
	iVar6 = func_249(uParam0, 0);
	vVar7 = { get_entity_coords(iVar6, true, false) };
	func_242(uParam0, uParam2, 2, 0, 0, 0);
	func_294(uParam0, uParam2);
	bVar10 = false;
	if (func_331(uParam2, 2))
	{
		bVar10 = func_336(uParam0, uParam2);
	}
	if (bVar10)
	{
		func_337(uParam0, uParam1, uParam2);
	}
	if ((func_276(iVar2, iVar1, 1) && !func_276(uParam2->f_4, iVar0, 1)) && uParam1[uParam2->f_1] < 35)
	{
		if (!func_251(uParam2, 38))
		{
			task_look_at_entity(iVar2, uParam2->f_4, -1, 0, 51, 0);
			func_112(uParam2, 38);
		}
	}
	else if (func_251(uParam2, 38))
	{
		task_clear_look_at(iVar2);
		func_167(uParam2, 38);
	}
	if (func_338(uParam2->f_5, vVar7) < 6f)
	{
		return func_327(&(uParam2->f_384.f_318), 1, 0);
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_179(2);
				func_179(4);
				func_243(uParam2, 1);
				func_167(uParam2, 27);
				func_167(uParam2, 61);
				func_121(uParam1, uParam2, 2);
			}
			if (func_339(uParam0, uParam1, uParam2, 31))
			{
				_0x3a9a281ff71249e9("RespawnPulseMP01", 500);
			}
			break;
		case 31:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_340(uParam0, uParam2, 2);
				if (func_341(uParam2, -705748782, 10000, 0, 0))
				{
					func_121(uParam1, uParam2, 2);
				}
			}
			else if (is_control_pressed(0, -1404316431))
			{
				func_279(uParam2);
			}
			func_333(uParam2, 2);
			func_342(uParam0, uParam1, uParam2);
			func_343(uParam2, -162568002, -1, 0, 0);
			if (func_338(vVar3, get_entity_coords(iVar1, true, false)) < 8.5f && func_338(vVar3, uParam2->f_5) < 8.5f)
			{
				func_116(uParam1, uParam2, 32);
			}
			if (func_344(uParam2->f_4, iVar0) || func_276(uParam2->f_4, iVar0, 1))
			{
				func_116(uParam1, uParam2, 32);
			}
			if (func_344(iVar2, iVar1) || func_276(iVar2, iVar1, 1))
			{
				func_116(uParam1, uParam2, 32);
			}
			break;
		case 32:
			if (is_control_pressed(0, -1404316431))
			{
				func_279(uParam2);
			}
			func_345(uParam0, uParam1, uParam2);
			func_243(uParam2, 1);
			if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
			{
				func_112(uParam2, 24);
			}
			if (func_346(uParam2->f_4, iVar0, 4f, 1, 1))
			{
				func_343(uParam2, 61449967, -1, 0, 0);
			}
			else
			{
				func_343(uParam2, -1833441146, -1, 0, 0);
			}
			if (!func_344(uParam2->f_4, iVar0) && !func_276(uParam2->f_4, iVar0, 1))
			{
				func_347(uParam0, uParam1, uParam2, 1, 1, 1, 0);
				return false;
			}
			func_340(uParam0, uParam2, 3);
			func_348(uParam2);
			_0xac22aa6df4d1c1de(uParam2->f_2, iVar2, -1082130432, -1082130432, 4, 2, 0);
			_0x9bbeaf8b0c007f1e(iVar2, 0);
			_0xdd33a82352c4652f(uParam2->f_2, iVar2, 0);
			func_349(uParam2, 0);
			func_116(uParam1, uParam2, 33);
			break;
		case 33:
			func_350(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_243(uParam2, 1);
				func_121(uParam1, uParam2, 2);
			}
			if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
			{
				func_112(uParam2, 24);
			}
			func_333(uParam2, 4);
			if (func_344(uParam2->f_4, iVar0) || func_276(uParam2->f_4, iVar0, 1))
			{
				func_348(uParam2);
				func_351(uParam0, uParam2);
				func_342(uParam0, uParam1, uParam2);
				func_77(uParam2, 1);
				if (_0x354f689c4ffaab37(-448983936))
				{
					func_343(uParam2, 1570802510, -1, 0, 0);
				}
				else
				{
					func_343(uParam2, -162568002, -1, 0, 0);
				}
				if (func_352(uParam0, 18))
				{
					func_255(uParam2);
				}
				func_353(iVar2, 1, 4, 3);
			}
			else
			{
				func_347(uParam0, uParam1, uParam2, 1, 1, 1, 0);
				func_345(uParam0, uParam1, uParam2);
				func_343(uParam2, -1290837005, -1, 0, 0);
				func_354(iVar2, 1);
			}
			if (func_338(uParam2->f_5, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1) < 20f)
			{
				func_340(uParam0, uParam2, 4);
				func_345(uParam0, uParam1, uParam2);
				func_77(uParam2, 1);
				func_71(uParam2);
				_0x9bbeaf8b0c007f1e(iVar2, 1);
				func_354(iVar2, 1);
				func_116(uParam1, uParam2, 34);
			}
			break;
		case 34:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_341(uParam2, 598361127, 10000, 0, 0);
				func_355(uParam0, uParam2);
				func_121(uParam1, uParam2, 2);
			}
			func_350(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (func_237(&(uParam2->f_1348.f_148)))
			{
				func_187(&(uParam2->f_1348.f_148));
			}
			if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
			{
				func_112(uParam2, 24);
			}
			if (func_276(uParam2->f_4, iVar0, 1))
			{
				if (!func_356(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 4f, 1, 1))
				{
					func_343(uParam2, -1845826657, -1, 0, 0);
				}
				else
				{
					_0x8910c24b7e0046ec();
					func_343(uParam2, 118415834, -1, 0, 0);
				}
				func_347(uParam0, uParam1, uParam2, 3, 1, 1, 0);
				func_357(uParam2, 3, 1);
				func_77(uParam2, 1);
				if (!func_358(&(uParam2->f_41.f_66[1])))
				{
					func_359(uParam2, 1, "HORSE_HITCH_P", -1453452184, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 4f, 2, 0, 0, 4, 570, 4000, 10, 1073741824, 0);
					if (func_358(&(uParam2->f_41.f_66[1])))
					{
						func_360(&(uParam2->f_41.f_66[1]), "MPINTRO_UCID_HORSE_HITCH");
						func_361(&(uParam2->f_41.f_66[1]), 1);
						func_362(&(uParam2->f_41.f_66[1]), 1);
						func_363(&(uParam2->f_41.f_66[1]), 0, 1);
					}
				}
				enable_control_action(0, -1453452184, true);
				if (func_364(&(uParam2->f_41.f_66[1]), 1))
				{
					func_72(uParam2);
					func_77(uParam2, 3);
					func_78(uParam2, 1);
					func_187(&(uParam2->f_1348.f_148));
					func_116(uParam1, uParam2, 35);
				}
			}
			else
			{
				func_343(uParam2, -1290837005, -1, 0, 0);
				func_347(uParam0, uParam1, uParam2, 1, 1, 1, 0);
				func_357(uParam2, 1, 1);
				func_77(uParam2, 3);
				func_78(uParam2, 1);
			}
			break;
		case 35:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			func_355(uParam0, uParam2);
			func_333(uParam2, 8);
			func_350(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
			if (does_entity_exist(iVar2))
			{
				set_ped_can_use_auto_conversation_lookat(iVar2, false);
			}
			func_238(&(uParam2->f_1348.f_148), 0);
			if (!func_239(&(uParam2->f_1348.f_148), 6.5f) && !func_366(uParam1, uParam2, uParam2->f_1348.f_3458, 131072, 34))
			{
				return false;
			}
			if (is_ped_on_mount(uParam2->f_4))
			{
				if (!func_367(uParam2->f_4, 501393341))
				{
					clear_ped_tasks(uParam2->f_4, 1, 0);
					task_dismount_animal(uParam2->f_4, 0, 0, 0, 0, 0);
				}
				return false;
			}
			_disable_first_person_cam_this_frame();
			_0x77d65669a05d1a1a();
			func_368(10, 0, 0);
			func_369(uParam0, uParam2, 11, 1);
			func_243(uParam2, 0);
			_0x2804658eb7d8a50b(4, 621422181);
			task_follow_to_offset_of_entity(uParam2->f_4, iVar2, -1.2f, -1.25f, 0f, 1f, -1, 1036831949, 1, 1, 0, 0, 1);
			func_116(uParam1, uParam2, 36);
			break;
		case 36:
			_disable_first_person_cam_this_frame();
			_0x77d65669a05d1a1a();
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			_0x2804658eb7d8a50b(4, 621422181);
			if (does_entity_exist(iVar2))
			{
				set_ped_can_use_auto_conversation_lookat(iVar2, false);
			}
			if (!func_352(uParam0, 11))
			{
			}
			else if (bVar10)
			{
				return func_327(&(uParam2->f_384.f_318), 1, 0);
			}
			break;
	}
	return false;
}

bool func_22(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 3, 0, 0, 0);
	iVar1 = func_249(uParam0, 1);
	_0x2804658eb7d8a50b(4, 621422181);
	func_294(uParam0, uParam2);
	func_309(1, 0, 1);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_190(0);
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_243(uParam2, 0);
				if (does_entity_exist(iVar1))
				{
					set_ped_can_use_auto_conversation_lookat(iVar1, true);
				}
				func_201(uParam0, uParam1, uParam2, 2);
				_0xfb0e622b401884d3(659548826);
				func_121(uParam1, uParam2, 2);
			}
			bVar2 = func_337(uParam0, uParam1, uParam2);
			if (func_336(uParam0, uParam2))
			{
				if (!bVar2)
				{
					return false;
				}
				if (_is_loading_screen_active())
				{
					shutdown_loading_screen();
					return false;
				}
				if (uParam2->f_1348.f_3 != 1)
				{
					func_315(uParam0, uParam2, 3, *uParam2->f_4926[4], uParam2->f_4926[4]->f_3, 2);
				}
				iVar0 = func_370(uParam0, 3);
				func_305(uParam0, uParam2, 3, "p_chairdesk02x", iVar0, 0);
				iVar0 = func_370(uParam0, 5);
				func_305(uParam0, uParam2, 3, "p_chairwhite01x", iVar0, 0);
				iVar0 = func_370(uParam0, 1);
				func_305(uParam0, uParam2, 3, "p_journalset02x", iVar0, 0);
				if (is_ped_male(uParam2->f_4))
				{
					func_305(uParam0, uParam2, 3, "mp_player_m_1", uParam2->f_4, 0);
				}
				else
				{
					func_305(uParam0, uParam2, 3, "mp_player_f_1", uParam2->f_4, 0);
				}
				iVar0 = func_370(uParam0, 0);
				func_305(uParam0, uParam2, 3, "p_pen01x", iVar0, 0);
				iVar0 = func_249(uParam0, 3);
				func_305(uParam0, uParam2, 3, "Camp_Cook", iVar0, 0);
				iVar0 = func_249(uParam0, 0);
				func_305(uParam0, uParam2, 3, "JESSICA", iVar0, 0);
				iVar0 = func_249(uParam0, 1);
				func_305(uParam0, uParam2, 3, "HORLEY", iVar0, 0);
				if (func_307(uParam0, uParam1, uParam2, 3, 1))
				{
					func_371(uParam2);
					func_340(uParam0, uParam2, 0);
					func_77(uParam2, 0);
					func_77(uParam2, 3);
					func_201(uParam0, uParam1, uParam2, 4);
					func_167(uParam2, 40);
					func_193(&(uParam2->f_1348.f_3194), uParam2->f_2);
					func_372(uParam2->f_4, 0);
					func_373(uParam0, uParam1, uParam2, 37);
				}
			}
			break;
		case 37:
			func_178(uParam2, 0);
			func_310(2000);
			iVar0 = func_249(uParam0, 0);
			if (has_anim_event_fired(iVar0, 260794798))
			{
				if (!_0x354f689c4ffaab37(659548826))
				{
					_0x7c32191d9fb2bdea(659548826);
				}
			}
			if (func_314(uParam0, uParam2, 3, 0.98f))
			{
				func_116(uParam1, uParam2, 38);
			}
			break;
		case 38:
			return func_327(&(uParam2->f_384.f_318), 2, 0);
	}
	return false;
}

int func_23(var uParam0, var uParam1, var uParam2)
{
	bVar2 = false;
	if (func_242(uParam0, uParam2, 4, 0, 0, 0))
	{
		bVar2 = func_374(uParam0, uParam2);
	}
	func_178(uParam2, 0);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_190(0);
			func_193(&(uParam2->f_1348.f_3194), uParam2->f_2);
			func_167(uParam2, 62);
			if (!func_375(0))
			{
				_0x597f571ddee3ffac(1);
				func_177(1, 0);
				return 0;
			}
			if (!func_376(uParam2))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < uParam2->f_384.f_211)
			{
				if (func_377(&(uParam2->f_384.f_10[iVar0]), 1, 1, 0, 0, 752097756, 0, 0, 0, 0))
				{
				}
				iVar0++;
			}
			func_328(uParam2->f_4, &(Global_1952637->f_83[16]), 0, 1250092473, 0, 1, 0, 0, 1, 1, 1);
			func_328(uParam2->f_4, &(Global_1952637->f_83[34]), 0, 788010710, 0, 1, 0, 0, 1, 1, 1);
			func_328(uParam2->f_4, &(Global_1952637->f_83[36]), 0, -1944638739, 0, 1, 0, 0, 1, 1, 1);
			iVar0 = 0;
			while (iVar0 < uParam2->f_384.f_263)
			{
				iVar1 = func_378(&(uParam2->f_384.f_212[iVar0]));
				if (iVar1 == -358215195)
				{
					func_117(uParam2, 4070, -1);
				}
				else if (!func_328(uParam2->f_4, &(uParam2->f_384.f_212[iVar0]), 0, iVar1, 0, 1, 0, 0, 1, 1, 1))
				{
					func_117(uParam2, 4071, -1);
				}
				iVar0++;
			}
			func_379(2, 0, 0, 0, 0);
			func_116(uParam1, uParam2, 39);
			break;
		case 39:
			if (!_0xa0bc8faed8cfeb3c(uParam2->f_4))
			{
				return 0;
			}
			uParam2->f_1348.f_353 = uParam2->f_4;
			uParam2->f_1348.f_353.f_6 = { *uParam2->f_4926[0] };
			uParam2->f_1348.f_353.f_9 = uParam2->f_4926[0]->f_6;
			uParam2->f_1348.f_353.f_10 = { *uParam2->f_4926[0] };
			uParam2->f_1348.f_353.f_13 = uParam2->f_4926[0]->f_6;
			uParam2->f_1348.f_353.f_1 = -1329576073;
			uParam2->f_1348.f_353.f_17 = -365265320;
			uParam2->f_1348.f_353.f_15 = 0;
			uParam2->f_1348.f_353.f_16 = 1;
			func_380(&(uParam2->f_1348.f_353), &(uParam2->f_1348.f_371.f_2506), 0);
			func_72(uParam2);
			func_73(uParam2);
			if (is_pause_menu_active())
			{
				set_frontend_active(false);
			}
			func_116(uParam1, uParam2, 40);
			break;
		case 40:
			_0xc9caeaeec1256e54(559258637);
			func_374(uParam0, uParam2);
			func_381(&(uParam2->f_1348.f_371), 1);
			if (is_bit_set(uParam2->f_1348.f_371.f_2506.f_17, 5))
			{
				func_310(2000);
				func_201(uParam0, uParam1, uParam2, 3);
				_0xc9caeaeec1256e54(559258637);
				if (func_251(uParam2, 62))
				{
					func_343(uParam2, 2092964879, -1, 0, 0);
				}
				else
				{
					func_343(uParam2, 290354902, -1, 0, 0);
					if ((((is_control_just_pressed(2, -1860390754) || is_control_just_pressed(2, 1141111167)) || is_control_just_pressed(2, -1384133541)) || is_control_just_pressed(2, 1138488863)) || is_control_just_pressed(2, -69749786))
					{
						func_112(uParam2, 62);
					}
				}
			}
			else
			{
				func_72(uParam2);
			}
			if (func_382(&(uParam2->f_1348.f_371), 1))
			{
				return 0;
			}
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			func_383(-180f, 0);
			_0x597f571ddee3ffac(0);
			func_177(0, 0);
			func_384();
			func_187(&(uParam2->f_1348.f_148));
			func_72(uParam2);
			func_116(uParam1, uParam2, 42);
			break;
		case 42:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			disable_all_control_actions(0);
			func_374(uParam0, uParam2);
			func_238(&(uParam2->f_1348.f_148), 0);
			if (!func_239(&(uParam2->f_1348.f_148), 1.15f))
			{
				return 0;
			}
			if (!func_367(uParam2->f_4, 2028736502))
			{
				task_go_straight_to_coord_relative_to_entity(uParam2->f_4, func_249(uParam0, 0), 0f, 0f, 0f, 1f, 20000, 0);
				_0x2208438012482a1a(uParam2->f_4, false, false);
			}
			if (!func_385(uParam2))
			{
				return 0;
			}
			if (!func_327(&(uParam2->f_384.f_318), 3, 1))
			{
				return 0;
			}
			if (!func_228(uParam2, 0, 0))
			{
				return 0;
			}
			func_386(&(uParam2->f_1348.f_148));
			func_116(uParam1, uParam2, 43);
			break;
		case 43:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			disable_all_control_actions(0);
			func_374(uParam0, uParam2);
			if (func_231())
			{
				return 0;
			}
			if (func_375(0))
			{
				return 0;
			}
			if (!bVar2)
			{
				return 0;
			}
			if (!func_239(&(uParam2->f_1348.f_148), 1.85f) && is_entity_on_screen(uParam2->f_4))
			{
				return 0;
			}
			func_379(27, 0, 0, 0, 0);
			Var3.f_1 = 0;
			Var3 = 0;
			func_387(&Var3);
			return 1;
	}
	return 0;
}

int func_24(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 5, 0, 0, 0);
	func_309(1, 0, 1);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			_0x2804658eb7d8a50b(4, 621422181);
			func_190(0);
			func_178(uParam2, 0);
			if (func_374(uParam0, uParam2))
			{
				if (_is_loading_screen_active())
				{
					shutdown_loading_screen();
					return 0;
				}
				if (uParam2->f_1348.f_3 != 1)
				{
					func_315(uParam0, uParam2, 5, *uParam2->f_4926[4], uParam2->f_4926[4]->f_3, 2);
				}
				iVar0 = func_370(uParam0, 7);
				func_305(uParam0, uParam2, 5, "p_umbrellanbx03x", iVar0, 0);
				iVar0 = func_370(uParam0, 1);
				func_305(uParam0, uParam2, 5, "p_journalset02x", iVar0, 0);
				iVar0 = func_370(uParam0, 2);
				func_305(uParam0, uParam2, 5, "P_DESK10x", iVar0, 0);
				iVar0 = func_370(uParam0, 3);
				func_305(uParam0, uParam2, 5, "p_chairdesk02x", iVar0, 0);
				iVar0 = func_370(uParam0, 5);
				func_305(uParam0, uParam2, 5, "p_chair02x^1", iVar0, 0);
				iVar0 = func_370(uParam0, 4);
				func_305(uParam0, uParam2, 5, "p_chair02x", iVar0, 0);
				iVar0 = func_370(uParam0, 6);
				func_305(uParam0, uParam2, 5, "p_bistrochair01x", iVar0, 0);
				if (is_ped_male(uParam2->f_4))
				{
					func_305(uParam0, uParam2, 5, "mp_player_m_1", uParam2->f_4, 0);
				}
				else
				{
					func_305(uParam0, uParam2, 5, "mp_player_f_1", uParam2->f_4, 0);
				}
				iVar0 = func_370(uParam0, 0);
				func_305(uParam0, uParam2, 5, "p_pen01x", iVar0, 0);
				iVar0 = func_249(uParam0, 0);
				func_305(uParam0, uParam2, 5, "JESSICA", iVar0, 0);
				iVar0 = func_249(uParam0, 2);
				func_305(uParam0, uParam2, 5, "JB_Cripps", iVar0, 0);
				iVar0 = func_249(uParam0, 1);
				func_305(uParam0, uParam2, 5, "HORLEY", iVar0, 0);
				iVar0 = func_249(uParam0, 3);
				func_305(uParam0, uParam2, 5, "Camp_Cook", iVar0, 0);
				func_306(uParam0, uParam2, 5, "ExitLoop", 0);
				if (func_307(uParam0, uParam1, uParam2, 5, 1))
				{
					func_193(&(uParam2->f_1348.f_3194), uParam2->f_2);
					func_373(uParam0, uParam1, uParam2, 44);
				}
			}
			break;
		case 44:
			_0x2804658eb7d8a50b(4, 621422181);
			func_310(2000);
			func_178(uParam2, 0);
			if (func_311(uParam0, uParam2, 5, "MPINTRO_MCS2_P3_T07_Shot_2"))
			{
				func_388(&(uParam2->f_1348.f_371.f_2506.f_2));
				func_389();
				func_390(&(Global_1940144->f_86[3]), 6, 1);
				if (is_pause_menu_active())
				{
					set_frontend_active(false);
				}
				func_116(uParam1, uParam2, 45);
			}
			break;
		case 45:
			func_391();
			disable_all_control_actions(0);
			enable_control_action(0, -2131587435, true);
			enable_control_action(0, -1860390754, true);
			enable_control_action(0, 1141111167, true);
			enable_control_action(0, -1384133541, true);
			enable_control_action(0, 1710877787, true);
			enable_control_action(0, 1138488863, true);
			enable_control_action(0, 814057702, true);
			enable_control_action(2, -1929387871, true);
			enable_control_action(2, 2014399155, true);
			enable_control_action(2, -2021715929, true);
			enable_control_action(2, 146634124, true);
			enable_control_action(2, -944425974, true);
			enable_control_action(2, 359624985, true);
			enable_control_action(2, 285921746, true);
			enable_control_action(2, -875187602, true);
			_0xc9caeaeec1256e54(-365265320);
			func_178(uParam2, 0);
			if ((((func_185(uParam2->f_2, 0) || func_392()) || func_393(512)) || Global_1132288->f_2019 == 12) || Global_1132288->f_2019 == 20)
			{
				func_72(uParam2);
				func_71(uParam2);
				func_100();
				if (func_103())
				{
					func_104();
				}
				_display_hud_component(-523411361);
				func_306(uParam0, uParam2, 5, "ExitLoop", 1);
				func_116(uParam1, uParam2, 46);
			}
			else if (!func_103())
			{
				func_343(uParam2, -1867447760, 0, 5, 0);
				func_341(uParam2, 1704396426, -1, 0, 0);
			}
			else if (Global_1940311->f_1433 == 0)
			{
				func_343(uParam2, -1557445635, 1, 5, 0);
				func_71(uParam2);
			}
			else if (Global_1940311->f_1433 == 55)
			{
				func_343(uParam2, 1534115229, 1, 5, 0);
				func_71(uParam2);
			}
			else if (Global_1940311->f_1433 == 39)
			{
				func_343(uParam2, 1188637657, 2, 5, 0);
				func_71(uParam2);
			}
			else if (Global_1940311->f_1433 == 42)
			{
				func_343(uParam2, -1621575725, 3, 5, 0);
				func_71(uParam2);
			}
			else if (Global_1940311->f_1433 == 40)
			{
				func_343(uParam2, -1005835680, 4, 5, _create_var_string(10, "MPINTRO_OBJ_SETUP_CAMP_SELECT_LOCATION", func_394(uParam2->f_1348.f_12.f_1, 0)));
				func_71(uParam2);
			}
			break;
		case 46:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			_0xc9caeaeec1256e54(724769646);
			_0x2804658eb7d8a50b(4, 621422181);
			func_337(uParam0, uParam1, uParam2);
			if ((is_ped_male(uParam2->f_4) && func_324(uParam0, uParam2, 5, "mp_player_m_1")) || func_324(uParam0, uParam2, 5, "mp_player_f_1"))
			{
				func_395(uParam2->f_2, -668482597, 2500, 0, 1, 1, 0, 0, 0);
			}
			if (func_314(uParam0, uParam2, 5, -1082130432))
			{
				iVar1 = func_249(uParam0, 1);
				iVar2 = func_249(uParam0, 2);
				func_178(uParam2, 1);
				func_396(uParam2, iVar1, 3, -1, 0);
				if (!func_397(&iVar2, &uVar3, get_entity_coords(iVar2, true, false), -1426662425, 10f, -1, 1))
				{
					return 0;
				}
				func_340(uParam0, uParam2, 5);
				func_116(uParam1, uParam2, 47);
			}
			break;
		case 47:
			func_365(uParam2, -1, -1, 0, 17, 1, 1);
			if (func_327(&(uParam2->f_384.f_318), 4, 0))
			{
				if (!_0x354f689c4ffaab37(1684694064))
				{
					_0x7c32191d9fb2bdea(1684694064);
				}
				return 1;
			}
			break;
	}
	return 0;
}

bool func_25(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 6, 0, 0, 0);
	if (func_276(uParam2->f_4, _0xf49f14462f0ae27c(uParam2->f_2), 0) && func_398(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, cos((160f / 2f))))
	{
		func_350(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
	}
	func_294(uParam0, uParam2);
	if (!does_entity_exist(iVar0))
	{
		iVar0 = func_249(uParam0, 0);
	}
	bVar1 = func_337(uParam0, uParam1, uParam2);
	if (func_251(uParam2, 57))
	{
		iVar2 = get_mount(uParam2->f_4);
		if (does_entity_exist(iVar2))
		{
			set_ped_reset_flag(iVar2, 6, true);
		}
	}
	iVar3 = _0xf49f14462f0ae27c(uParam2->f_2);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_233(uParam2))
			{
				return false;
			}
			if (!bVar1)
			{
				return false;
			}
			if (func_339(uParam0, uParam1, uParam2, 48))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (!_0x354f689c4ffaab37(659548826))
				{
					_0x7c32191d9fb2bdea(659548826);
				}
				func_190(1);
				func_340(uParam0, uParam2, 5);
				func_333(uParam2, 16);
				_uitutorial_set_rpg_icon_visibility(6, 2);
				_uitutorial_set_rpg_icon_visibility(7, 2);
				_uitutorial_set_rpg_icon_visibility(8, 2);
				_uitutorial_set_rpg_icon_visibility(9, 2);
				_uitutorial_set_rpg_icon_visibility(4, 2);
				_uitutorial_set_rpg_icon_visibility(5, 2);
				_uitutorial_set_rpg_icon_visibility(0, 2);
				_uitutorial_set_rpg_icon_visibility(1, 2);
				func_112(uParam2, 57);
				func_167(uParam2, 11);
				func_243(uParam2, 1);
				func_343(uParam2, -1290837005, -1, 0, 0);
				func_347(uParam0, uParam1, uParam2, 1, 0, 1, 0);
				func_201(uParam0, uParam1, uParam2, 5);
				func_259(&(uParam2->f_1348.f_3194), uParam2->f_2);
			}
			break;
		case 48:
			if (uParam2->f_41.f_71 < 10)
			{
				if (func_277(uParam2, uParam2->f_4, 2, 0))
				{
					func_349(uParam2, 9);
				}
			}
			switch (uParam2->f_41.f_71)
			{
				case 0:
					if (!func_289(_0xc17f69e1418cd11f(1)) && absi(get_time_difference(uParam2->f_13, uParam2->f_14)) > 2000)
					{
						if (func_341(uParam2, -1888026740, 10000, 0, 0))
						{
							func_349(uParam2, 1);
						}
					}
					break;
				case 1:
					if (func_399(uParam2) > 2.5f)
					{
						func_369(uParam0, uParam2, 13, 1);
					}
					if (!func_400(uParam2) && !func_251(uParam2, 35))
					{
						if (func_341(uParam2, 2080129611, 10000, 0, 0))
						{
							func_112(uParam2, 35);
						}
					}
					if (func_276(uParam2->f_4, iVar3, 1))
					{
						func_77(uParam2, 1);
						func_369(uParam0, uParam2, 13, 1);
						func_333(uParam2, 32);
						if (func_251(uParam2, 35))
						{
							func_349(uParam2, 12);
						}
						else
						{
							func_349(uParam2, 11);
						}
					}
					else
					{
						func_343(uParam2, -1290837005, -1, 0, 0);
						func_347(uParam0, uParam1, uParam2, 1, 0, 1, 0);
					}
					break;
				case 11:
					if (!func_400(uParam2))
					{
						if (func_341(uParam2, 2080129611, 10000, 0, 0))
						{
							func_112(uParam2, 35);
							func_349(uParam2, 12);
						}
					}
					break;
				case 12:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 2);
					}
					break;
				case 2:
					if (func_399(uParam2) > 10f && func_352(uParam0, 13))
					{
						if (func_341(uParam2, 2072273840, 10000, 0, 0))
						{
							func_349(uParam2, 3);
						}
					}
					break;
				case 3:
					if (func_399(uParam2) > 0.5f)
					{
						_uitutorial_set_rpg_icon_visibility(6, 3);
						_uitutorial_set_rpg_icon_visibility(7, 3);
						func_349(uParam2, 4);
					}
					break;
				case 4:
					if (!func_400(uParam2))
					{
						_uitutorial_set_rpg_icon_visibility(6, 1);
						_uitutorial_set_rpg_icon_visibility(7, 1);
						func_349(uParam2, 5);
					}
					break;
				case 5:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, 699640523, 10000, 0, 0))
						{
							func_349(uParam2, 6);
						}
					}
					break;
				case 6:
					if (func_399(uParam2) > 0.5f)
					{
						_uitutorial_set_rpg_icon_visibility(8, 3);
						_uitutorial_set_rpg_icon_visibility(9, 3);
						func_167(uParam2, 57);
						func_349(uParam2, 7);
					}
					break;
				case 7:
					if (!func_400(uParam2))
					{
						_uitutorial_set_rpg_icon_visibility(8, 1);
						_uitutorial_set_rpg_icon_visibility(9, 1);
						func_349(uParam2, 8);
					}
					break;
				case 8:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, 380246959, 10000, 0, 0))
						{
							func_349(uParam2, 9);
						}
					}
					break;
				case 9:
					if (!func_400(uParam2))
					{
						_uitutorial_set_rpg_icon_visibility(6, 1);
						_uitutorial_set_rpg_icon_visibility(7, 1);
						_uitutorial_set_rpg_icon_visibility(8, 1);
						_uitutorial_set_rpg_icon_visibility(9, 1);
						_uitutorial_set_rpg_icon_visibility(4, 1);
						_uitutorial_set_rpg_icon_visibility(5, 1);
						_uitutorial_set_rpg_icon_visibility(0, 1);
						_uitutorial_set_rpg_icon_visibility(1, 1);
						func_349(uParam2, 10);
					}
					break;
				case 10:
					if (func_402(func_401(uParam2->f_2)))
					{
						if (func_399(uParam2) > 30f)
						{
							if (!func_352(uParam0, 14))
							{
								func_369(uParam0, uParam2, 14, 1);
							}
							else
							{
								func_202(uParam0, 14);
								func_403(uParam2);
							}
						}
					}
					if (func_277(uParam2, uParam2->f_4, 2, 0))
					{
						func_343(uParam2, 1235669471, -1, 0, 0);
						func_349(uParam2, 31);
					}
					break;
			}
			if (uParam2->f_41.f_71 > 1)
			{
				switch (uParam2->f_1348.f_3)
				{
					case 0:
						iVar4 = -341563288;
						break;
					case 1:
						iVar4 = 1237950153;
						break;
					case 2:
						iVar4 = -1098895463;
						break;
					default:
						iVar4 = -525719207;
						break;
				}
				func_343(uParam2, iVar4, -1, 0, 0);
				func_347(uParam0, uParam1, uParam2, 5, 1, 1, 1);
			}
			if (!func_331(uParam2, 6))
			{
				return false;
			}
			if (!func_277(uParam2, uParam2->f_4, 2, 0))
			{
				return false;
			}
			return func_327(&(uParam2->f_384.f_318), 5, 0);
	}
	return false;
}

bool func_26(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 7, 0, 0, 0);
	func_350(uParam2->f_4, uParam2->f_4926.f_210[uParam2->f_1348.f_3458]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_233(uParam2))
			{
				return false;
			}
			func_77(uParam2, 5);
			if (func_339(uParam0, uParam1, uParam2, 49))
			{
				func_347(uParam0, uParam1, uParam2, 6, 1, 1, 0);
				func_201(uParam0, uParam1, uParam2, 4);
				func_167(uParam2, 40);
				if (func_341(uParam2, -1012521738, 10000, &(Global_1109804->f_260.f_4989[uParam2->f_4926.f_255]->f_6[1]), Global_1109804->f_260.f_4989[uParam2->f_4926.f_255]->f_6[1]->f_1))
				{
					_blip_set_modifier(uParam2->f_41.f_3, -401963276);
					_blip_set_modifier(uParam2->f_41.f_3, 231194138);
					_blip_set_modifier(uParam2->f_41.f_3, 580546400);
				}
			}
			break;
		case 49:
			func_404(0, 1);
			func_333(uParam2, 64);
			if (func_251(uParam2, 17))
			{
				func_71(uParam2);
				func_77(uParam2, 6);
				func_193(&(uParam2->f_1348.f_3194), uParam2->f_2);
			}
			else if (func_277(uParam2, uParam2->f_4, 1, 1))
			{
				if (get_player_target_entity(uParam2->f_2, &iVar0) && is_entity_a_ped(iVar0))
				{
					iVar1 = get_ped_index_from_entity_index(iVar0);
				}
				if (does_entity_exist(iVar1) && func_405(iVar1))
				{
					func_343(uParam2, 415602832, 2, 3, 0);
				}
				else if (func_406(0, 4))
				{
					func_343(uParam2, 377339543, 1, 3, 0);
				}
				else
				{
					func_343(uParam2, 1496013030, 0, 3, 0);
				}
			}
			else
			{
				func_343(uParam2, 1235669471, -1, 0, 0);
				func_347(uParam0, uParam1, uParam2, 6, 1, 1, 0);
				if (is_ped_on_mount(uParam2->f_4))
				{
					_0x8910c24b7e0046ec();
				}
			}
			if (func_407(uParam2))
			{
				func_234(0, 1);
				func_71(uParam2);
				func_72(uParam2);
				func_77(uParam2, 5);
				func_77(uParam2, 6);
				func_116(uParam1, uParam2, 50);
			}
			break;
		case 50:
			if (func_408() != -1 && func_409() == 4)
			{
			}
			else
			{
				return false;
			}
			if (!func_331(uParam2, 7))
			{
				return false;
			}
			return func_327(&(uParam2->f_384.f_318), 6, 0);
	}
	return false;
}

bool func_27(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 8, 0, 0, 0);
	if (func_251(uParam2, 57))
	{
		iVar0 = get_mount(uParam2->f_4);
		if (does_entity_exist(iVar0))
		{
			set_ped_reset_flag(iVar0, 6, true);
		}
	}
	if (func_277(uParam2, uParam2->f_4, 8, 0))
	{
		func_343(uParam2, -616986442, -1, 0, 0);
		if (!func_237(&(uParam2->f_1348.f_155)))
		{
			func_238(&(uParam2->f_1348.f_155), 0);
		}
		if ((!uParam2->f_1348.f_154 && func_410(&(uParam2->f_1348.f_155)) > 60f) || func_410(&(uParam2->f_1348.f_155)) > 30f)
		{
			uParam2->f_1348.f_154 = 1;
			allow_sonar_blips(true);
			force_sonar_blips_this_frame();
			vVar1 = { *uParam2->f_4926[3] };
			trigger_sonar_blip(104598867, vVar1);
			func_386(&(uParam2->f_1348.f_155));
		}
	}
	else
	{
		if (func_237(&(uParam2->f_1348.f_155)))
		{
			func_187(&(uParam2->f_1348.f_155));
		}
		func_343(uParam2, 1947522828, -1, 0, func_411(uParam2->f_1348.f_3));
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!is_screen_faded_in() && uParam2->f_41.f_71 != 21)
			{
				func_349(uParam2, 21);
			}
			if (func_339(uParam0, uParam1, uParam2, 51))
			{
				func_259(&(uParam2->f_1348.f_3194), uParam2->f_2);
			}
			break;
		case 51:
			func_347(uParam0, uParam1, uParam2, 7, 0, 1, 1);
			if (!func_277(uParam2, uParam2->f_4, 1, 0))
			{
				func_333(uParam2, 128);
			}
			func_412(uParam2);
			if (!func_331(uParam2, 8))
			{
			}
			else if ((func_277(uParam2, uParam2->f_4, 9, 0) || func_251(uParam2, 21)) || func_251(uParam2, 20))
			{
				func_77(uParam2, 7);
				func_72(uParam2);
				if (uParam2->f_41.f_71 <= 10)
				{
					func_349(uParam2, 10);
				}
				func_116(uParam1, uParam2, 52);
			}
			break;
		case 52:
			uParam2->f_1348.f_3242 = uParam2->f_41.f_71;
			return func_327(&(uParam2->f_384.f_318), 7, 0);
	}
	return false;
}

bool func_28(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 9, 0, 0, 0);
	if (uParam1[uParam2->f_1] != 0)
	{
		if (func_118((*uParam1)[uParam2->f_1], 4))
		{
			func_413(uParam2->f_1348.f_139);
		}
		else
		{
			func_414(uParam2->f_1348.f_139);
		}
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (func_339(uParam0, uParam1, uParam2, 53))
			{
				_uitutorial_set_rpg_icon_visibility(4, 0);
				_uitutorial_set_rpg_icon_visibility(5, 0);
				_uitutorial_set_rpg_icon_visibility(0, 0);
				_uitutorial_set_rpg_icon_visibility(1, 0);
				_uitutorial_set_rpg_icon_visibility(6, 0);
				_uitutorial_set_rpg_icon_visibility(7, 0);
				_uitutorial_set_rpg_icon_visibility(8, 0);
				_uitutorial_set_rpg_icon_visibility(9, 0);
			}
			break;
		case 53:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_258(uParam2->f_384.f_317);
				if (!func_251(uParam2, 41))
				{
					func_112(uParam2, 41);
				}
				if (!func_400(uParam2))
				{
					if (func_341(uParam2, -439473285, 10000, 0, 0))
					{
						func_349(uParam2, 11);
						func_121(uParam1, uParam2, 2);
					}
				}
			}
			if (func_118((*uParam1)[uParam2->f_1], 2) && !func_400(uParam2))
			{
				func_412(uParam2);
			}
			func_333(uParam2, 256);
			if (func_415(uParam2))
			{
				if ((uParam2->f_41 != -439473285 && func_400(uParam2)) && !func_118((*uParam1)[uParam2->f_1], 2))
				{
					func_341(uParam2, -439473285, 10000, 0, 0);
					if (uParam2->f_41.f_71 <= 10)
					{
						func_349(uParam2, 11);
					}
					func_121(uParam1, uParam2, 2);
				}
				func_121(uParam1, uParam2, 2);
				func_116(uParam1, uParam2, 54);
			}
			else if (_get_number_of_references_of_script_with_name_hash(-230235335) == 0)
			{
				func_112(uParam2, 22);
			}
			break;
		case 54:
			func_412(uParam2);
			func_333(uParam2, 512);
			if (func_251(uParam2, 21))
			{
				func_347(uParam0, uParam1, uParam2, 8, 1, 1, 0);
				func_343(uParam2, -529540586, -1, 0, 0);
				func_116(uParam1, uParam2, 55);
			}
			else if (_get_number_of_references_of_script_with_name_hash(-230235335) == 0)
			{
				func_112(uParam2, 22);
			}
			break;
		case 55:
			func_333(uParam2, 1024);
			if (func_289(_0xc17f69e1418cd11f(11)))
			{
				return false;
			}
			if (!func_331(uParam2, 9))
			{
				return false;
			}
			if (func_251(uParam2, 42))
			{
				return func_327(&(uParam2->f_384.f_318), 8, 1);
			}
			break;
	}
	return false;
}

int func_29(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 10, 0, 0, 0);
	iVar0 = func_249(uParam0, 4);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_112(uParam2, 41);
			if (func_251(uParam2, 42))
			{
				func_413(uParam2->f_1348.f_139);
				func_167(uParam2, 53);
				func_167(uParam2, 48);
				func_167(uParam2, 47);
				func_347(uParam0, uParam1, uParam2, 8, 1, 1, 0);
				func_343(uParam2, -529540586, -1, 0, 0);
				func_80(uParam2, 12);
				func_108(881353596, 0);
				func_339(uParam0, uParam1, uParam2, 56);
			}
			break;
		case 56:
			func_333(uParam2, 1024);
			if (((func_416(uParam2->f_4, &(uParam2->f_164[11]), 0, 1) || func_338(get_entity_coords(iVar0, true, false), uParam2->f_5) <= uParam2->f_4808.f_35.f_42) || _0x9c81338b2e62ce0a(uParam2->f_2, iVar0, 1000)) || (func_416(uParam2->f_4, &(uParam2->f_164[10]), 0, 1) && is_ped_shooting(uParam2->f_4)))
			{
				func_77(uParam2, 8);
				func_72(uParam2);
				func_112(uParam2, 43);
				func_116(uParam1, uParam2, 57);
			}
			else
			{
				func_347(uParam0, uParam1, uParam2, 8, 1, 1, 0);
				func_343(uParam2, -529540586, -1, 0, 0);
			}
			break;
		case 57:
			func_417();
			func_347(uParam0, uParam1, uParam2, 9, 1, 1, 0);
			if (!func_251(uParam2, 44))
			{
				return 0;
			}
			if (func_338(get_entity_coords(iVar0, true, false), uParam2->f_5) <= uParam2->f_4808.f_35.f_42)
			{
				func_72(uParam2);
				func_343(uParam2, 900459494, -1, 0, 0);
				func_112(uParam2, 45);
				func_116(uParam1, uParam2, 58);
			}
			else
			{
				func_343(uParam2, -1608091647, -1, 0, 0);
			}
			if ((does_entity_exist(iVar0) && !func_418(iVar0, 0)) || (is_ped_performing_melee_action(iVar0, 32768, 0) && is_ped_performing_melee_action(uParam2->f_4, 1024, 0)))
			{
				func_77(uParam2, 9);
				func_72(uParam2);
				func_347(uParam0, uParam1, uParam2, 2, 1, 1, 0);
				func_343(uParam2, 1799997975, -1, 0, 0);
				func_419(uParam0, uParam2);
				if (!func_418(iVar0, 0))
				{
					func_112(uParam2, 51);
					func_420(uParam2, 13);
				}
				func_116(uParam1, uParam2, 62);
			}
			break;
		case 58:
			func_417();
			func_341(uParam2, 826883680, -1, 0, 0);
			func_343(uParam2, -1211200067, -1, 0, 0);
			if (func_251(uParam2, 46))
			{
				func_116(uParam1, uParam2, 59);
			}
			else if (((does_entity_exist(iVar0) && !func_418(iVar0, 0)) || func_251(uParam2, 47)) || (is_ped_performing_melee_action(iVar0, 32768, 0) && is_ped_performing_melee_action(uParam2->f_4, 1024, 0)))
			{
				clear_entity_last_damage_entity(iVar0);
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam2->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam2->f_4808.f_35.f_30), 1, 1);
				func_77(uParam2, 9);
				func_72(uParam2);
				func_347(uParam0, uParam1, uParam2, 2, 1, 1, 0);
				func_343(uParam2, 1799997975, -1, 0, 0);
				func_419(uParam0, uParam2);
				if (!func_418(iVar0, 0))
				{
					func_112(uParam2, 51);
					func_420(uParam2, 13);
				}
				func_116(uParam1, uParam2, 62);
			}
			break;
		case 59:
			if (func_251(uParam2, 48))
			{
				func_116(uParam1, uParam2, 60);
			}
			else if (((does_entity_exist(iVar0) && !func_418(iVar0, 0)) || func_251(uParam2, 47)) || (is_ped_performing_melee_action(iVar0, 32768, 0) && is_ped_performing_melee_action(uParam2->f_4, 1024, 0)))
			{
				clear_entity_last_damage_entity(iVar0);
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam2->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam2->f_4808.f_35.f_30), 1, 1);
				func_77(uParam2, 9);
				func_72(uParam2);
				func_347(uParam0, uParam1, uParam2, 2, 1, 1, 0);
				func_343(uParam2, 1799997975, -1, 0, 0);
				func_419(uParam0, uParam2);
				if (!func_418(iVar0, 0))
				{
					func_112(uParam2, 51);
					func_420(uParam2, 13);
				}
				func_116(uParam1, uParam2, 62);
			}
			break;
		case 60:
			if (!func_251(uParam2, 49))
			{
				return 0;
			}
			func_341(uParam2, 826883680, -1, 0, 0);
			func_343(uParam2, 657649474, -1, 0, 0);
			func_422();
			if (!func_251(uParam2, 48))
			{
				func_423(uParam0, uParam2);
			}
			if (func_251(uParam2, 47) && func_356(uParam2->f_4, uParam2->f_1348.f_344, 2.5f, 1, 1))
			{
				func_238(&(uParam2->f_1348.f_347), 0);
			}
			iVar1 = func_370(uParam0, 8);
			if (((func_424(uParam2->f_4, iVar1) || (func_356(uParam2->f_4, uParam2->f_1348.f_344, 2f, 1, 1) && func_239(&(uParam2->f_1348.f_347), 4f))) && func_251(uParam2, 47)) && !func_251(uParam2, 48))
			{
				func_112(uParam2, 48);
				func_77(uParam2, 2);
				func_72(uParam2);
				func_199(uParam0, 8, 1);
				func_425(uParam2->f_384.f_317, 1, 0, 0, 1, 0, 0);
			}
			if (func_251(uParam2, 51) || func_251(uParam2, 50))
			{
				func_78(uParam2, 3);
				func_78(uParam2, 2);
				func_71(uParam2);
				func_72(uParam2);
				func_116(uParam1, uParam2, 61);
			}
			else if ((does_entity_exist(iVar0) && !func_418(iVar0, 0)) || (is_ped_performing_melee_action(iVar0, 32768, 0) && is_ped_performing_melee_action(uParam2->f_4, 1024, 0)))
			{
				clear_entity_last_damage_entity(iVar0);
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam2->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam2->f_4808.f_35.f_30), 1, 1);
				func_77(uParam2, 9);
				func_72(uParam2);
				func_347(uParam0, uParam1, uParam2, 2, 1, 1, 0);
				func_343(uParam2, 1799997975, -1, 0, 0);
				func_419(uParam0, uParam2);
				if (!func_418(iVar0, 0))
				{
					func_112(uParam2, 51);
					func_420(uParam2, 13);
				}
				func_116(uParam1, uParam2, 62);
			}
			break;
		case 61:
			func_333(uParam2, 2048);
			if (!func_251(uParam2, 52))
			{
				return 0;
			}
			if (func_251(uParam2, 50) && !func_251(uParam2, 53))
			{
				func_426(-682435976, 0, 0);
				func_112(uParam2, 53);
				return 0;
			}
			else if (func_251(uParam2, 51) && !func_251(uParam2, 53))
			{
				func_426(-1034424695, 0, 0);
				func_112(uParam2, 53);
				return 0;
			}
			else if (!func_251(uParam2, 53))
			{
				func_117(uParam2, 4069, -1);
				return 0;
			}
			func_427(get_game_timer() + 5000, 1);
			if (!func_251(uParam2, 48))
			{
				func_425(uParam2->f_384.f_317, 1, 0, 0, 1, 0, 0);
			}
			func_116(uParam1, uParam2, 64);
			break;
		case 62:
			func_333(uParam2, 2048);
			iVar1 = func_370(uParam0, 8);
			if (!func_251(uParam2, 48))
			{
				func_423(uParam0, uParam2);
				if (does_entity_exist(iVar1))
				{
					activate_physics(iVar1);
				}
			}
			if (func_251(uParam2, 47) && func_356(uParam2->f_4, uParam2->f_1348.f_344, 2.5f, 1, 1))
			{
				func_238(&(uParam2->f_1348.f_347), 0);
			}
			if (((func_424(uParam2->f_4, iVar1) || (func_356(uParam2->f_4, uParam2->f_1348.f_344, 2f, 1, 1) && func_239(&(uParam2->f_1348.f_347), 4f))) && func_251(uParam2, 47)) && !func_251(uParam2, 48))
			{
				func_112(uParam2, 48);
				func_77(uParam2, 2);
				func_72(uParam2);
				func_199(uParam0, 8, 1);
				func_425(uParam2->f_384.f_317, 1, 0, 0, 1, 0, 0);
			}
			if ((does_entity_exist(iVar0) && is_entity_dead(iVar0)) && !func_251(uParam2, 51))
			{
				func_112(uParam2, 51);
				func_112(uParam2, 52);
				return 0;
			}
			else if ((func_251(uParam2, 51) || func_251(uParam2, 50)) && !func_251(uParam2, 52))
			{
				func_112(uParam2, 52);
				return 0;
			}
			if (!func_251(uParam2, 52))
			{
				return 0;
			}
			if (func_251(uParam2, 50) && !func_251(uParam2, 53))
			{
				func_426(-682435976, 0, 0);
				func_112(uParam2, 53);
				return 0;
			}
			else if (func_251(uParam2, 51) && !func_251(uParam2, 53))
			{
				func_426(-1034424695, 0, 0);
				func_112(uParam2, 53);
				return 0;
			}
			else if (!func_251(uParam2, 53))
			{
				return 0;
			}
			func_427(get_game_timer() + 5000, 1);
			func_116(uParam1, uParam2, 63);
			break;
		case 63:
			if (func_251(uParam2, 48))
			{
				func_77(uParam2, 2);
				func_72(uParam2);
				func_199(uParam0, 8, 1);
				func_116(uParam1, uParam2, 64);
			}
			if (!func_251(uParam2, 48))
			{
				func_423(uParam0, uParam2);
			}
			if (func_356(uParam2->f_4, uParam2->f_1348.f_344, 2.5f, 1, 1))
			{
				func_238(&(uParam2->f_1348.f_347), 0);
			}
			iVar1 = func_370(uParam0, 8);
			if (does_entity_exist(iVar1))
			{
				activate_physics(iVar1);
			}
			if ((func_424(uParam2->f_4, iVar1) || (func_356(uParam2->f_4, uParam2->f_1348.f_344, 2f, 1, 1) && func_239(&(uParam2->f_1348.f_347), 4f))) && !func_251(uParam2, 48))
			{
				func_112(uParam2, 48);
				func_77(uParam2, 2);
				func_72(uParam2);
				func_199(uParam0, 8, 1);
				func_425(uParam2->f_384.f_317, 1, 0, 0, 1, 0, 0);
				func_116(uParam1, uParam2, 64);
			}
			break;
		case 64:
			if (!func_327(&(uParam2->f_384.f_318), 9, 1))
			{
				return 0;
			}
			if (!func_331(uParam2, 10))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_30(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 11, 0, 0, 0);
	if (!func_327(&(uParam2->f_384.f_318), 9, 1))
	{
		func_330(0);
	}
	if (func_428())
	{
		func_429(uParam2);
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			func_80(uParam2, 13);
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_258(uParam2->f_384.f_317);
				func_172(uParam2->f_384.f_317);
				func_77(uParam2, 9);
				Var0.f_3 = 7;
				_0x49f3241c28ebbfbc(0);
				_0x183672fe838a661b(&Var0);
				_0x38c0c9cae1544500(879737745);
				_set_scenario_type_enabled_hash(-1245423146, false);
				func_121(uParam1, uParam2, 2);
			}
			func_339(uParam0, uParam1, uParam2, 65);
			break;
		case 65:
			if (!func_118((*uParam1)[uParam2->f_1], 2))
			{
				func_341(uParam2, -1292511688, -1, 0, 0);
				func_121(uParam1, uParam2, 2);
			}
			if (func_430())
			{
				func_71(uParam2);
				func_72(uParam2);
			}
			else if (func_431())
			{
				if (does_entity_exist(_get_first_entity_ped_is_carrying(uParam2->f_4)))
				{
					func_341(uParam2, 1896376843, -1, 0, 0);
				}
				else
				{
					func_71(uParam2);
				}
				func_343(uParam2, 318815968, 1, 2, 0);
			}
			else
			{
				if (func_432(uParam2, 1896376843))
				{
					func_71(uParam2);
				}
				if (_is_using_keyboard(0))
				{
					func_343(uParam2, 1209895179, 0, 2, 0);
				}
				else
				{
					func_343(uParam2, 222029040, 0, 2, 0);
				}
			}
			if ((func_433(uParam2->f_384.f_317) && Global_1211392->f_1.f_20 >= 2) || func_356(uParam2->f_4, Global_1211392->f_1.f_37, 30f, 1, 1))
			{
				if (func_356(uParam2->f_4, Global_1211392->f_1.f_37, 30f, 1, 1) && !(func_433(uParam2->f_384.f_317) && Global_1211392->f_1.f_20 >= 2))
				{
					func_434(uParam2->f_384.f_317);
				}
				func_71(uParam2);
				_set_scenario_type_enabled_hash(-1245423146, true);
				func_116(uParam1, uParam2, 66);
			}
			break;
		case 66:
			if (_does_scenario_point_exist(_0xd04241bbf6d03a5e(uParam2->f_4)) && func_356(uParam2->f_4, Global_1211392->f_1.f_37, 30f, 1, 1))
			{
				func_116(uParam1, uParam2, 67);
			}
			else if (func_435(2))
			{
				func_343(uParam2, 556799993, -1, 0, 0);
				func_333(uParam2, 4096);
			}
			else
			{
				func_343(uParam2, -1457437565, -1, 0, 0);
				func_333(uParam2, 2048);
			}
			switch (uParam2->f_41.f_71)
			{
				case 0:
					if (Global_1211392->f_1.f_21 > 0 && !func_400(uParam2))
					{
						if (func_341(uParam2, -418232229, 10000, 0, 0))
						{
							func_349(uParam2, 1);
						}
					}
					break;
				case 1:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 2);
					}
					break;
				case 2:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, -1047964239, 10000, 0, 0))
						{
							func_349(uParam2, 3);
						}
					}
					break;
				case 3:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 4);
					}
					break;
				case 4:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, 1483046429, 10000, 0, 0))
						{
							func_349(uParam2, 5);
						}
					}
					break;
			}
			break;
		case 67:
			func_333(uParam2, 8192);
			if (func_433(uParam2->f_384.f_317))
			{
				func_343(uParam2, 556799993, -1, 0, 0);
			}
			else if (_does_scenario_point_exist(_0xd04241bbf6d03a5e(uParam2->f_4)) && func_356(uParam2->f_4, Global_1211392->f_1.f_37, 30f, 1, 1))
			{
				func_72(uParam2);
			}
			else
			{
				func_175(uParam2->f_1348.f_144, 1, 0);
				func_116(uParam1, uParam2, 68);
			}
			break;
		case 68:
			func_72(uParam2);
			if (!func_327(&(uParam2->f_384.f_318), 10, 0))
			{
				return 0;
			}
			if (!func_331(uParam2, 11))
			{
				return 0;
			}
			_0x154340e87d8cc178(879737745);
			return 1;
	}
	return 0;
}

int func_31(var uParam0, var uParam1, var uParam2)
{
	set_all_random_peds_flee_this_frame(uParam2->f_2);
	func_242(uParam0, uParam2, 12, 0, 0, 0);
	if (!func_327(&(uParam2->f_384.f_318), 10, 1) || _cashinventory_is_session_ready() == 0)
	{
		func_330(0);
	}
	if (func_428())
	{
		func_429(uParam2);
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			set_everyone_ignore_player(uParam2->f_2, true);
			if (func_339(uParam0, uParam1, uParam2, 69))
			{
				func_349(uParam2, 0);
				func_436(300, 1000);
				func_425(-113874881, 1, 0, 0, 1, 0, 0);
				func_425(1478239863, 1, 0, 0, 1, 0, 0);
				func_425(1918257218, 1, 0, 0, 1, 0, 0);
				func_425(1301922967, 1, 0, 0, 1, 0, 0);
				func_425(1681219929, 136, 0, 0, 1, 0, 0);
				func_425(-1330115686, 128, 0, 0, 1, 0, 0);
				func_437(5, 0);
			}
			break;
		case 69:
			switch (uParam2->f_41.f_71)
			{
				case 0:
					if (func_341(uParam2, -2009664424, 10000, 0, 0))
					{
						func_349(uParam2, 1);
					}
					break;
				case 1:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 2);
					}
					break;
				case 2:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, -1152819248, 10000, 0, 0))
						{
							func_349(uParam2, 3);
						}
					}
					break;
				case 3:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 4);
					}
					break;
				case 4:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, 920290437, 10000, 0, 0))
						{
							func_349(uParam2, 5);
						}
					}
					break;
				case 5:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 6);
					}
					break;
				case 6:
					if (func_399(uParam2) > 0.5f)
					{
						if (func_341(uParam2, -335997892, 10000, 0, 0))
						{
							func_349(uParam2, 31);
						}
					}
					break;
				case 31:
					func_116(uParam1, uParam2, 70);
					break;
			}
			break;
		case 70:
			if (func_438() || is_control_pressed(0, -1404316431))
			{
				func_343(uParam2, -1756559929, 1, 2, 0);
			}
			else
			{
				func_343(uParam2, -499538564, 0, 2, 0);
			}
			if (!func_439() && func_440(0, 1) != 0)
			{
				func_72(uParam2);
				func_71(uParam2);
				func_286(0);
				func_116(uParam1, uParam2, 71);
			}
			break;
		case 71:
			if (!func_327(&(uParam2->f_384.f_318), 11, 0))
			{
				return 0;
			}
			if (!func_331(uParam2, 12))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

int func_32(var uParam0, var uParam1, var uParam2)
{
	func_242(uParam0, uParam2, 13, 0, 0, 0);
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_441(uParam2))
			{
				return 0;
			}
			func_339(uParam0, uParam1, uParam2, 72);
			break;
		case 72:
			func_333(uParam2, 16384);
			func_343(uParam2, 1825494327, -1, 0, 0);
			func_347(uParam0, uParam1, uParam2, 10, 1, 1, 1);
			switch (uParam2->f_41.f_71)
			{
				case 0:
					if (func_341(uParam2, -319164194, 10000, 0, 0))
					{
						func_349(uParam2, 2);
					}
					break;
				case 2:
					if (!func_400(uParam2))
					{
						func_349(uParam2, 3);
					}
					break;
				case 3:
					if (func_341(uParam2, 2118793063, 10000, 0, 0))
					{
						_uitutorial_set_rpg_icon_visibility(2, 3);
						_uitutorial_set_rpg_icon_visibility(3, 3);
						func_349(uParam2, 4);
					}
					break;
				case 4:
					if (!func_400(uParam2))
					{
						_uitutorial_set_rpg_icon_visibility(2, 0);
						_uitutorial_set_rpg_icon_visibility(3, 0);
						func_349(uParam2, 5);
					}
					break;
				case 5:
					if (func_399(uParam2) > 5f)
					{
						if (func_341(uParam2, -2035994474, 10000, 221316808, 1673015813))
						{
							_blip_set_modifier(uParam2->f_41.f_3, -401963276);
							func_349(uParam2, 6);
						}
					}
					break;
			}
			if (func_338(uParam2->f_5, (*Global_1835011)[uParam2->f_1348.f_5]->f_19) < 45f)
			{
				func_72(uParam2);
				func_116(uParam1, uParam2, 73);
			}
			break;
		case 73:
			_0x8910c24b7e0046ec();
			if (!func_327(&(uParam2->f_384.f_318), 12, 1))
			{
				return 0;
			}
			if (!func_331(uParam2, 13))
			{
				return 0;
			}
			func_442();
			return 1;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, var uParam2)
{
	if (func_443(uParam2, (*Global_1835011)[uParam2->f_1348.f_5]->f_19, 10f))
	{
		_0x9f9a829c6751f3c7(uParam2->f_2, 28, 1);
	}
	if (func_251(uParam2, 56))
	{
		if (func_217(255))
		{
		}
		else if (!func_444(uParam2))
		{
		}
		else
		{
			func_167(uParam2, 56);
		}
	}
	else if (func_118((*uParam1)[uParam2->f_1], 1))
	{
		if (!is_thread_active(uParam2->f_4808.f_81, false))
		{
			func_112(uParam2, 56);
		}
	}
	switch (uParam1[uParam2->f_1])
	{
		case 0:
			if (!func_444(uParam2))
			{
				return 0;
			}
			func_339(uParam0, uParam1, uParam2, 74);
			break;
		case 74:
			func_333(uParam2, 32768);
			func_347(uParam0, uParam1, uParam2, 10, 1, 1, 1);
			if (func_445())
			{
				func_72(uParam2);
			}
			else
			{
				func_343(uParam2, 1825494327, -1, 0, 0);
			}
			if (func_446())
			{
				func_72(uParam2);
				func_183(uParam2, 1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	if (func_41(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_326 = (uParam0->f_326 || iParam1);
}

struct<2> func_35(int iParam0)
{
	if (!func_447(iParam0))
	{
		return func_448();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_36(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_8();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_37()
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
		if (func_89() == 0)
		{
			if (func_449())
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

bool func_38()
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

int func_39(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_40(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_41(var uParam0, int iParam1)
{
	return (uParam0->f_326 && iParam1) != 0;
}

void func_42(bool bParam0)
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

bool func_43(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_44(var uParam0, int iParam1)
{
	if (func_87(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_45(bool bParam0, bool bParam1)
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

void func_46(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (!network_is_player_connected(iVar2))
		{
		}
		else if (!network_is_player_a_participant(iVar2))
		{
			bVar0 = false;
		}
		else
		{
			iVar3 = network_get_participant_index(iVar2);
			if (!network_is_participant_active(iVar3))
			{
				bVar0 = false;
			}
			else if (!func_450((*uParam1)[iVar3], 1))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return;
	}
	uParam0->f_3 = *uParam3;
	if (func_451(uParam2, 4))
	{
		_0x31010318ba9897ac(&uVar4, uParam2->f_152.f_3);
		if (func_452() == 109)
		{
			func_53(uParam0, 3);
		}
		else if (_0x277865a734918ae6() && network_get_num_connected_players() == 1)
		{
			func_53(uParam0, 3);
		}
		else if (_0xe404bff0aba23cdc(&uVar4))
		{
			func_53(uParam0, 1);
		}
		else
		{
			func_117(&(uParam2->f_152), 2001, -1);
		}
	}
	else if (_0x277865a734918ae6())
	{
		func_53(uParam0, 3);
	}
	else if (network_session_is_private())
	{
		func_53(uParam0, 3);
	}
	else
	{
		func_53(uParam0, 1);
	}
}

void func_47(var uParam0, var uParam1, var uParam2)
{
	if (!network_is_player_active(uParam0->f_4) || !network_is_player_a_participant(uParam0->f_4))
	{
		uParam0->f_4 = 255;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!func_453(iVar0, &uVar1, &uVar2))
			{
			}
			else if (func_450((*uParam1)[iVar0], 2))
			{
			}
			else
			{
				uParam0->f_4 = uVar2;
			}
			else
			{
				iVar0++;
			}
		}
		if (uParam0->f_4 == 255)
		{
			func_454(uParam0, 2000);
			func_53(uParam0, 7);
			return;
		}
	}
	iVar0 = network_get_participant_index(uParam0->f_4);
	if (func_450((*uParam1)[iVar0], 4))
	{
		if (func_451(uParam2, 4))
		{
			if (network_get_num_participants() > 1)
			{
				return;
			}
		}
		if (_0x277865a734918ae6())
		{
			func_53(uParam0, 3);
		}
		else
		{
			uParam0->f_4 = 255;
		}
	}
	else if (func_450((*uParam1)[iVar0], 2))
	{
		uParam0->f_4 = 255;
	}
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_72);
	if (!StackVal)
	{
		return;
	}
	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (!func_453(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 2)
			{
				bVar0 = false;
			}
			if (!func_450((*uParam1)[iVar3], 8))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	func_94(uParam0, -1);
	func_53(uParam0, 3);
}

void func_49(var uParam0, var uParam1, var uParam2)
{
	bVar0 = true;
	Stack.Push(uParam0);
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_74);
	if (!StackVal)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (!func_453(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 3)
			{
				bVar0 = false;
			}
			if (!func_450((*uParam1)[iVar3], 16))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_451(uParam2, 1))
	{
		func_44(uParam0, 4);
	}
	if (func_87(uParam0, 64))
	{
		func_44(uParam0, 4);
	}
	if (func_87(uParam0, 4))
	{
		func_53(uParam0, 5);
	}
	else
	{
		func_53(uParam0, 6);
	}
	func_44(uParam0, 4);
}

void func_50(var uParam0, var uParam1)
{
	bVar3 = true;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (!func_453(iVar2, &uVar0, &uVar1))
		{
		}
		else
		{
			if (uParam1[iVar2] != 4)
			{
				bVar3 = false;
			}
			if ((*uParam1)[iVar2]->f_2 != 4)
			{
				bVar3 = false;
			}
			if (func_450((*uParam1)[iVar2], 256))
			{
			}
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return;
	}
	func_53(uParam0, 5);
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_78);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_76);
	if (!StackVal)
	{
		return;
	}
	bVar0 = true;
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (!func_453(iVar3, &uVar1, &uVar2))
		{
		}
		else
		{
			if (uParam1[iVar3] != 5)
			{
				bVar0 = false;
			}
			if (!func_450((*uParam1)[iVar3], 64))
			{
				bVar0 = false;
			}
		}
		iVar3++;
	}
	if (!bVar0)
	{
		return;
	}
	func_53(uParam0, 6);
}

void func_52(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_78);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_81[uParam0->f_2]->f_2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_80);
	uParam0->f_5 = StackVal;
	if (uParam0->f_5 != -1)
	{
		func_53(uParam0, 4);
		return;
	}
	iVar4 = 255;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_453(iVar0, &uVar5, &iVar6))
		{
		}
		else
		{
			_0x1bdb5a07307f6929(&uVar1, iVar0);
			if (uParam1[iVar0] != 6)
			{
			}
			else
			{
				switch ((*uParam1)[iVar0]->f_3)
				{
					case 0:
						if ((*uParam1)[iVar0]->f_4 == uParam0->f_2)
						{
							if (func_450((*uParam1)[iVar0], 128))
							{
								_0x1bdb5a07307f6929(&uVar3, iVar0);
							}
							else if (func_450((*uParam1)[iVar0], 512))
							{
								iVar4 = iVar6;
							}
						}
						break;
					case 1:
						break;
					case 2:
						break;
					case 3:
						_0x1bdb5a07307f6929(&uVar2, iVar0);
						break;
					default:
						break;
				}
			}
		}
		iVar0++;
	}
	_0x42a429cdfed6d99d(&uVar1, &uVar2, &uVar7);
	if (!_0xa88e1d7fa1e20080(&uVar7))
	{
		func_94(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
		func_53(uParam0, 5);
		return;
	}
	_0x42a429cdfed6d99d(&uVar1, &uVar3, &uVar7);
	if (!_0xa88e1d7fa1e20080(&uVar7))
	{
		if (uParam2->f_81[uParam0->f_2]->f_1 == 14)
		{
			func_53(uParam0, 7);
		}
		else
		{
			func_94(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
			if (func_455(uParam2, uParam0->f_2, 1))
			{
				func_53(uParam0, 5);
			}
		}
		return;
	}
	if (iVar4 != 255)
	{
		func_94(uParam0, uParam2->f_81[uParam0->f_2]->f_1);
		func_53(uParam0, 5);
		return;
	}
}

void func_53(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_93(uParam0, 8);
	func_456(&(uParam0->f_7), 0);
}

void func_54(var uParam0, var uParam1, var uParam2)
{
	if (!func_457(uParam2->f_152.f_3))
	{
		func_458(uParam2, 16);
	}
	if (func_69(uParam2, 16))
	{
		if (func_217(255))
		{
			return;
		}
		func_459(uParam2, 16);
	}
	if (!_text_database_has_loaded("UIC"))
	{
		_text_database_request("UIC");
		return;
	}
	if (uParam2->f_66 == 0)
	{
		uParam2->f_66 = _uiflowblock_request(-1536154840);
	}
	if (!_uiflowblock_is_loaded(uParam2->f_66))
	{
		return;
	}
	func_460(uParam1, &(uParam2->f_152), 1);
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = _databinding_add_data_container_from_path("", "centralInfoDatastore");
	uParam2->f_67 = _databinding_add_data_bool(iVar0, "isVisible", false);
	iVar0 = _databinding_add_data_container_from_path("", "MPCountdown");
	uParam2->f_68 = _databinding_add_data_string(iVar0, "Timer", "");
	func_61(uParam1, uParam2, 1);
}

void func_55(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 == 7)
	{
		func_61(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 > 1)
	{
		func_61(uParam1, uParam2, 3);
		return;
	}
	if (!func_451(uParam2, 4))
	{
		if (uParam2->f_152.f_2 != uParam0->f_4)
		{
			return;
		}
	}
	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_10.f_2 = 1;
			uParam2->f_10 = -2;
			uParam2->f_10.f_4 = 2;
			if (func_451(uParam2, 4))
			{
				_0x31010318ba9897ac(&uVar0, uParam2->f_152.f_3);
				uParam2->f_10.f_1 = uVar0;
			}
			else
			{
				uParam2->f_10.f_1 = func_461(4, 8);
			}
			func_462(uParam2, 1);
			break;
		case 1:
			if (!func_463(uParam2->f_10))
			{
				return;
			}
			func_462(uParam2, 2);
			break;
		case 2:
			if (func_464())
			{
				return;
			}
			if (_0x277865a734918ae6())
			{
				func_460(uParam1, &(uParam2->f_152), 4);
				func_462(uParam2, 3);
			}
			else
			{
				uParam2->f_2++;
				if (uParam2->f_2 >= 3)
				{
					func_460(uParam1, &(uParam2->f_152), 2);
					func_462(uParam2, 3);
				}
				else
				{
					func_462(uParam2, 1);
				}
			}
			break;
		case 3:
			break;
		default:
			func_462(uParam2, 0);
			break;
	}
}

void func_56(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_73);
	if (!StackVal)
	{
		return;
	}
	func_460(uParam1, &(uParam2->f_152), 8);
	if (*uParam0 <= 2)
	{
		return;
	}
	func_465(uParam1, &(uParam2->f_152), 8);
	func_466(uParam1, uParam2, -1);
	uParam2->f_152.f_8 = -1;
	func_467(&(uParam2->f_152.f_9));
	func_61(uParam1, uParam2, 3);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
	if (!func_450((*uParam1)[uParam2->f_152.f_1], 16))
	{
		Stack.Push(&(uParam0->f_7));
		Stack.Push(&(uParam1->f_11));
		Stack.Push(&(uParam2->f_152));
		Call_Loc(uParam2->f_75);
		if (!StackVal)
		{
			return;
		}
		func_460(uParam1, &(uParam2->f_152), 16);
	}
	if (*uParam0 <= 3)
	{
		return;
	}
	func_85(1);
	func_468(&(Local_1675.f_152));
	func_465(uParam1, &(uParam2->f_152), 16);
	uParam2->f_152.f_8 = uParam0->f_3;
	uParam2->f_152.f_9 = { func_469(uParam2->f_152.f_8) };
	func_466(uParam1, uParam2, uParam0->f_2);
	if (*uParam0 == 6)
	{
		if ((*uParam1)[uParam2->f_152.f_1]->f_4 == uParam0->f_2)
		{
			func_61(uParam1, uParam2, 6);
		}
		else
		{
			func_61(uParam1, uParam2, 5);
		}
	}
	else
	{
		func_61(uParam1, uParam2, 5);
	}
}

void func_58(var uParam0, var uParam1, var uParam2)
{
	_0x55f37f5f3f2475e1();
	_set_bounty_for_player(uParam2->f_152.f_2, 0);
	set_pad_shake(0, 0, 0);
	_0x2804658eb7d8a50b(4, 197823934);
	bVar4 = false;
	if (*uParam0 == 7)
	{
		if (_network_is_player_index_valid(uParam2->f_152.f_2))
		{
			set_everyone_ignore_player(uParam2->f_152.f_2, false);
		}
		func_61(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 > 4)
	{
		func_465(uParam1, &(uParam2->f_152), 256);
		func_470(uParam1, &(uParam2->f_152), 0);
		func_471(uParam1, &(uParam2->f_152), 0);
		if (_network_is_player_index_valid(uParam2->f_152.f_2))
		{
			set_everyone_ignore_player(uParam2->f_152.f_2, false);
		}
		func_466(uParam1, uParam2, uParam0->f_2);
		func_61(uParam1, uParam2, *uParam0);
		return;
	}
	switch ((*uParam1)[uParam2->f_152.f_1]->f_2)
	{
		case 0:
			disable_all_control_actions(0);
			_0xc9caeaeec1256e54(-365265320);
			func_472(Local_1675.f_152.f_9, 1, 0, 255, 0);
			uParam2->f_43 = uParam2->f_152.f_14;
			func_182(1);
			func_473(&(uParam1->f_11), uParam2, 0);
			func_72(&(uParam2->f_152));
			func_71(&(uParam2->f_152));
			func_170(&(uParam2->f_152));
			if (_network_is_player_index_valid(uParam2->f_152.f_2))
			{
				set_everyone_ignore_player(uParam2->f_152.f_2, true);
			}
			_close_all_apps();
			func_68(0, 8);
			task_stand_still(uParam2->f_152.f_4, -1);
			if (uParam0->f_5 == 0 || is_entity_dead(uParam2->f_152.f_4))
			{
				func_470(uParam1, &(uParam2->f_152), 2);
			}
			else
			{
				func_470(uParam1, &(uParam2->f_152), 1);
			}
			break;
		case 1:
			_0xc9caeaeec1256e54(-365265320);
			_disable_first_person_cam_this_frame_2();
			if (func_474(&(uParam2->f_19), &(uParam2->f_152.f_4), 0, 0))
			{
				if (((uParam2->f_19.f_20 != -1 && !_is_anim_scene_started(uParam2->f_19.f_20, false)) && !uParam2->f_19.f_16) && !func_219(255))
				{
					start_anim_scene(uParam2->f_19.f_20);
				}
				else
				{
					func_67(uParam2, 1);
				}
				iVar5 = get_mount(uParam2->f_152.f_4);
				if (does_entity_exist(iVar5))
				{
					clear_ped_tasks(iVar5, 1, 0);
					task_stand_still(iVar5, -1);
				}
				func_470(uParam1, &(uParam2->f_152), 2);
			}
			else
			{
				uParam2->f_43 = uParam2->f_152.f_14;
			}
			break;
		case 2:
			_0xc9caeaeec1256e54(-365265320);
			_disable_first_person_cam_this_frame_2();
			if (absi(get_time_difference(uParam2->f_43, uParam2->f_152.f_14)) < 4000)
			{
				return;
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(2000);
				}
				return;
			}
			func_68(1, 2);
			if (_is_any_app_running())
			{
				_close_all_apps_immediate();
			}
			uParam2->f_44 = "DEATH_FAIL_RESPAWN_SOUNDS";
			uParam2->f_44.f_1 = "TITLE_SCREEN_ENTER";
			uParam2->f_44.f_3 = func_475();
			uParam2->f_44.f_3.f_3 = 1;
			if (func_451(uParam2, 2))
			{
				uParam2->f_44.f_11 = 0;
			}
			else
			{
				uParam2->f_44.f_11 = func_476();
			}
			uParam2->f_44.f_11.f_3 = 1;
			uParam2->f_44.f_15 = 0;
			uParam2->f_44.f_7.f_3 = 1;
			uParam2->f_44.f_7 = 1638299023;
			uParam2->f_63 = func_479(&(uParam2->f_44), func_477(uParam0->f_5), func_478(uParam0->f_5), 0, 1);
			if (uParam2->f_152.f_158.f_2 != 0)
			{
				func_333(&(uParam2->f_152), uParam2->f_152.f_158.f_2);
			}
			else
			{
				play_sound_frontend("TITLE_SCREEN_ENTER", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
			}
			_0x6339c1ea3979b5f7("Title_Screen", "RDRO_Death_Fail_Respawn_Scenes");
			func_458(uParam2, 4);
			func_470(uParam1, &(uParam2->f_152), 3);
			break;
		case 3:
			if (func_480(uParam2->f_63))
			{
				func_310(0);
			}
			_uiprompt_enable_prompt_type_this_frame(0);
			while (_event_manager_is_event_pending(-1933804684))
			{
				if (func_481(uParam2, &vVar0))
				{
					switch (vVar0.z)
					{
						case 2074623703:
							func_460(uParam1, &(uParam2->f_152), 256);
							bVar4 = true;
							break;
						case 1400745903:
							func_482(&(uParam2->f_152));
							bVar4 = true;
							break;
					}
				}
				_event_manager_pop_event(-1933804684);
				if (bVar4)
				{
					_0x6035e8fbca32ac5e();
					_uiprompt_disable_prompts_this_frame();
					func_470(uParam1, &(uParam2->f_152), 4);
				}
			else
			{
				}
			}
			break;
		case 4:
			disable_all_control_actions(0);
			disable_all_control_actions(2);
			_0xc9caeaeec1256e54(-1679307491);
			_0x6035e8fbca32ac5e();
			_uiprompt_disable_prompts_this_frame();
			break;
		default:
			func_470(uParam1, &(uParam2->f_152), 0);
			break;
	}
}

void func_59(var uParam0, var uParam1, var uParam2)
{
	disable_all_control_actions(0);
	disable_all_control_actions(2);
	_uiprompt_disable_prompts_this_frame();
	func_483(uParam0, uParam1, uParam2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_79);
	if (!is_screen_faded_out())
	{
		if (is_entity_dead(uParam2->f_152.f_4) && func_219(255))
		{
		}
		else if (func_217(255))
		{
			func_218(1);
			return;
		}
		if (!is_screen_fading_out())
		{
			do_screen_fade_out(2000);
		}
		return;
	}
	if (!func_69(uParam2, 2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		func_67(uParam2, 0);
		func_70();
		if (uParam2->f_63 != 0)
		{
			_0x00a15b94cba4f76f(uParam2->f_63);
			uParam2->f_63 = 0;
		}
		_0x9428447ded71fc7e("Title_Screen");
		func_71(&(uParam2->f_152));
		func_72(&(uParam2->f_152));
		func_73(&(uParam2->f_152));
		func_473(&(uParam1->f_11), uParam2, 1);
		bVar1 = false;
		while (!bVar1)
		{
			bVar1 = true;
			if (iVar0 < 11)
			{
				bVar1 = false;
				func_77(&(uParam2->f_152), iVar0);
			}
			if (iVar0 < 4)
			{
				bVar1 = false;
				func_78(&(uParam2->f_152), iVar0);
			}
			iVar0++;
		}
		func_75(&(uParam2->f_19));
		func_458(uParam2, 2);
	}
	if ((*uParam1)[uParam2->f_152.f_1]->f_4 != uParam0->f_2)
	{
		func_466(uParam1, uParam2, uParam0->f_2);
	}
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_77);
	if (!StackVal)
	{
		return;
	}
	func_460(uParam1, &(uParam2->f_152), 64);
	if (*uParam0 <= 5)
	{
		return;
	}
	func_465(uParam1, &(uParam2->f_152), 64);
	func_465(uParam1, &(uParam2->f_152), 512);
	func_459(uParam2, 2);
	if (func_69(uParam2, 4))
	{
		_0x9428447ded71fc7e("RDRO_Death_Fail_Respawn_Scenes");
		func_459(uParam2, 4);
	}
	func_34(&(uParam2->f_152), 256);
	func_471(uParam1, &(uParam2->f_152), 0);
	func_61(uParam1, uParam2, 6);
}

void func_60(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 == 7)
	{
		func_484();
		func_61(uParam1, uParam2, 7);
		return;
	}
	else if (*uParam0 < 6)
	{
		func_484();
		func_466(uParam1, uParam2, uParam0->f_2);
		func_61(uParam1, uParam2, *uParam0);
		return;
	}
	func_483(uParam0, uParam1, uParam2);
	Stack.Push(&(uParam0->f_7));
	Stack.Push(&(uParam1->f_11));
	Stack.Push(&(uParam2->f_152));
	Call_Loc(uParam2->f_79);
	switch ((*uParam1)[uParam2->f_152.f_1]->f_3)
	{
		case 0:
			if (func_485(255))
			{
				func_465(uParam1, &(uParam2->f_152), 128);
				func_471(uParam1, &(uParam2->f_152), 1);
				return;
			}
			func_486(&(uParam1->f_11), uParam2);
			if (func_222(uParam2->f_152.f_3))
			{
				func_487(uParam2);
			}
			if (uParam0->f_2 != (*uParam1)[uParam2->f_152.f_1]->f_4)
			{
				func_484();
				func_466(uParam1, uParam2, uParam0->f_2);
			}
			Stack.Push(&(uParam0->f_7));
			Stack.Push(&(uParam1->f_11));
			Stack.Push(&(uParam2->f_152));
			Call_Loc(uParam2->f_81[(*uParam1)[uParam2->f_152.f_1]->f_4]->f_3);
			if (StackVal)
			{
				func_460(uParam1, &(uParam2->f_152), 128);
				func_70();
			}
			else if (!func_450((*uParam1)[uParam2->f_152.f_1], 512) && func_455(uParam2, (*uParam1)[uParam2->f_152.f_1]->f_4, 2))
			{
				if (!is_screen_faded_out() && !is_screen_fading_out())
				{
					_uiprompt_enable_prompt_type_this_frame(6);
					enable_control_action(0, -842734359, true);
				}
				if (func_488(1, 0))
				{
					func_460(uParam1, &(uParam2->f_152), 512);
				}
			}
			else
			{
				func_70();
			}
			break;
		case 1:
			func_489();
			func_471(uParam1, &(uParam2->f_152), 2);
			break;
		case 2:
			if (func_490(255))
			{
				return;
			}
			func_471(uParam1, &(uParam2->f_152), 3);
			break;
		case 3:
			if (*uParam0 == 5)
			{
				func_466(uParam1, uParam2, uParam0->f_2);
				func_61(uParam1, uParam2, *uParam0);
			}
			break;
		default:
			break;
	}
}

void func_61(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_152.f_1] = iParam2;
	if (uParam0[uParam1->f_152.f_1] == 6)
	{
		uParam1->f_152.f_17 = 1;
	}
	else
	{
		uParam1->f_152.f_17 = 0;
	}
	func_116(&(uParam0->f_11), &(uParam1->f_152), 0);
}

void func_62(var uParam0, int iParam1)
{
	uParam0->f_71 = iParam1;
}

void func_63(var uParam0, int iParam1)
{
	if (!func_41(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_326 = (uParam0->f_326 - (uParam0->f_326 && iParam1));
}

void func_64(var uParam0, var uParam1, var uParam2)
{
	func_286(0);
	_set_scenario_type_enabled_hash(-1245423146, true);
	func_491();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_203(uParam2, iVar0);
		iVar0++;
	}
	func_404(0, 1);
	func_492(uParam2);
	func_173(uParam2);
	func_172(uParam2->f_384.f_317);
	func_171();
	if (_network_is_player_index_valid(uParam2->f_2))
	{
		set_everyone_ignore_player(uParam2->f_2, false);
		if (does_entity_exist(uParam2->f_4) && !is_entity_dead(uParam2->f_4))
		{
			set_player_forced_aim(uParam2->f_2, false, 0, -1, false);
		}
	}
	func_101(1);
	if (does_entity_exist(uParam2->f_4))
	{
		set_ped_infinite_ammo(uParam2->f_4, false, 0);
		_0x641351e9ad103890(uParam2->f_4, 0);
	}
	func_184();
	func_493(4);
	func_389();
	func_494();
	func_130();
	func_495(0);
	func_174(uParam2->f_1348.f_7);
	func_175(uParam2->f_1348.f_7, 0, 1);
	if (is_thread_active(uParam2->f_4808.f_81, false))
	{
		_0x7de4643157ad646c(uParam2->f_4808.f_81);
	}
	func_257(4);
	clear_bit(&(Global_1957959->f_1), 5);
	func_496(1);
	func_497(1);
	func_109(1);
	func_267(1);
	func_264(1);
	func_268(1);
	func_115(1);
	func_262(0);
	func_498(0);
	func_191(0);
	if (func_499())
	{
		func_500(1, 1);
	}
	func_501(-2101264851);
	clear_gps_flags();
	end_srl();
	if (network_is_clock_time_overridden())
	{
		_0x65f040d91001ed4b(0);
	}
	_0x0e71c80fa4ec8147("MISTY", false);
	clear_override_weather();
	func_167(uParam2, 58);
	if (func_251(uParam2, 13))
	{
		_0xbc90bdf4e5228ea1();
	}
	func_122(uParam2, 1);
	if (!func_148(uParam2, 263280777, 0, 0))
	{
		return;
	}
	iVar1 = func_143(uParam2, -1704603418, 0, 0);
	iVar6 = 0;
	while (iVar6 < iVar1)
	{
		vVar2 = { func_207(uParam2, 231383926, iVar6, 0) };
		fVar5 = func_208(uParam2, 793218650, iVar6, 0);
		func_502(vVar2, fVar5, 5);
		iVar6++;
	}
	bVar7 = false;
	if (network_is_game_in_progress())
	{
		if (!func_503(uParam2->f_8))
		{
			bVar7 = true;
		}
		else if (!func_446())
		{
			bVar7 = true;
		}
	}
	if (!func_297(0))
	{
		bVar7 = false;
	}
	if (bVar7)
	{
		do_screen_fade_out(0);
		func_333(uParam2, 65536);
		if (func_504() == 2)
		{
		}
		else
		{
			func_88(0, -1);
		}
	}
}

void func_65(var uParam0, var uParam1, bool bParam2)
{
	func_505(uParam0, &(uParam1->f_152), 4);
	func_505(uParam0, &(uParam1->f_152), 8);
	if (bParam2)
	{
		if (animpostfx_is_running(func_506()))
		{
			_0xc5cb91d65852ed7e(func_506());
		}
	}
	if (does_blip_exist(uParam1->f_65))
	{
		remove_blip(&(uParam1->f_65));
	}
	uParam1->f_70 = 0;
	if (uParam1->f_152.f_41.f_9 != 0)
	{
		_0x2f901291ef177b02(uParam1->f_152.f_41.f_9, 0);
		uParam1->f_152.f_41.f_9 = 0;
	}
	func_507(uParam1);
	func_508(4);
	if (func_69(uParam1, 32))
	{
		func_509();
		_0x9428447ded71fc7e("out_of_bounds_scenes");
		if (uParam1->f_69 != -1)
		{
			_0x3210bcb36af7621b(uParam1->f_69);
		}
		func_459(uParam1, 32);
	}
}

void func_66(var uParam0, bool bParam1)
{
	if (!_does_volume_exist(uParam0->f_377))
	{
		return;
	}
	_0x869a7015bd4606e9(uParam0->f_377);
	if (bParam1)
	{
		func_510(uParam0->f_377);
	}
	uParam0->f_377 = 0;
	func_511(&(uParam0->f_377));
}

void func_67(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_69(uParam0, 8))
		{
			toggle_paused_renderphases(false);
			func_458(uParam0, 8);
		}
	}
	else if (func_69(uParam0, 8))
	{
		toggle_paused_renderphases(true);
		func_459(uParam0, 8);
	}
}

void func_68(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		func_512(iParam1);
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
	func_513(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

bool func_69(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_70()
{
	if (func_358(Global_26539))
	{
		func_421(&Global_26539, 0, 0);
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_41.f_1 == 0)
	{
		return;
	}
	if (func_289(uParam0->f_41.f_1))
	{
		_0x2f901291ef177b02(uParam0->f_41.f_1, 0);
	}
	if (does_blip_exist(uParam0->f_41.f_3))
	{
		remove_blip(&(uParam0->f_41.f_3));
	}
	uParam0->f_41 = 0;
	uParam0->f_41.f_1 = 0;
}

void func_72(var uParam0)
{
	if (uParam0->f_41.f_4 == 0)
	{
		return;
	}
	if (func_289(uParam0->f_41.f_5))
	{
		_0x2f901291ef177b02(uParam0->f_41.f_5, 0);
	}
	uParam0->f_41.f_7 = 0;
	uParam0->f_41.f_8 = -1;
	func_514();
	uParam0->f_41.f_4 = 0;
	uParam0->f_41.f_5 = 0;
}

void func_73(var uParam0)
{
	func_515(uParam0, 0);
}

void func_74(var uParam0)
{
	if (uParam0->f_249.f_42.f_15)
	{
		_0x7c907e8a725e5fd2(false);
		end_srl();
	}
	func_516(uParam0);
	func_517(uParam0);
	func_518(&(uParam0->f_249.f_42));
}

void func_75(var uParam0)
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
	func_519(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
	func_519(&uLocal_1579);
}

char* func_76()
{
	return "RDRO_Countdown_Sounds";
}

void func_77(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 11)
	{
		return;
	}
	if (!does_blip_exist(&(uParam0->f_41.f_11[iParam1])))
	{
		return;
	}
	if (uParam0->f_41.f_23 == iParam1)
	{
		clear_gps_multi_route();
		uParam0->f_41.f_23 = -1;
		iVar0 = 0;
		while (iVar0 < uParam0->f_41.f_65)
		{
			_0x4bdebea5702b97a9(*uParam0->f_41.f_24[uParam0->f_41.f_65], uParam0->f_41.f_24[uParam0->f_41.f_65]->f_3, 1, 1);
			iVar0++;
		}
		uParam0->f_41.f_65 = 0;
		clear_gps_flags();
	}
	remove_blip(uParam0->f_41.f_11[iParam1]);
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 4)
	{
		return;
	}
	func_421(uParam0->f_41.f_66[iParam1], 1, 1);
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	if (func_520(uParam0->f_33[iParam1]))
	{
		_0x9cf1836c03fb67a2(uParam0->f_33[iParam1], iParam2);
	}
	uParam0->f_33[iParam1] = -1;
}

void func_80(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return;
	}
	if (_does_volume_exist(&(uParam0->f_164[iParam1])))
	{
		if (uParam0->f_164[iParam1]->f_2)
		{
			_0x74c2b3dc0b294102(&(uParam0->f_164[iParam1]));
		}
		if (uParam0->f_164[iParam1]->f_3)
		{
			_0xa1cfb35069d23c23(&(uParam0->f_164[iParam1]));
		}
		if (_0x91a5f9cbebb9d936(uParam0->f_164[iParam1]->f_4))
		{
			remove_scenario_blocking_area(uParam0->f_164[iParam1]->f_4, false);
		}
		if (uParam0->f_164[iParam1]->f_1 == -372365539)
		{
			func_521(&(uParam0->f_164[iParam1]), &(uParam0->f_164[iParam1]->f_5));
		}
		_delete_volume(&(uParam0->f_164[iParam1]));
		func_522(uParam0->f_164[iParam1]);
	}
}

void func_81(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 5)
	{
		return;
	}
	if (_does_scenario_point_exist(&(uParam0->f_35[iParam1])))
	{
		_delete_scenario_point(&(uParam0->f_35[iParam1]));
	}
}

void func_82(var uParam0, var uParam1, int iParam2)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_37[iParam2])) && !network_has_control_of_network_id(&(uParam0->f_37[iParam2])))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	_delete_anim_scene(iVar0);
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	func_524(uParam0, iParam1);
	func_525(uParam0->f_158.f_3[iParam1]);
}

void func_84(int iParam0)
{
	Global_1102219->f_3 = (Global_1102219->f_3 - (Global_1102219->f_3 && iParam0));
}

void func_85(bool bParam0)
{
	if (bParam0)
	{
		func_526(49);
	}
	else
	{
		func_527(49);
	}
}

void func_86(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_88(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_528(iParam0, iParam1);
	}
	func_529(4);
	func_530();
	func_531(1);
}

int func_89()
{
	return Global_1572887->f_13;
}

void func_90(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1483568602;
		case 1:
			return -1644988688;
		case 2:
			return 1800180131;
		case 3:
			return -898347023;
		case 4:
			return -675091826;
		case 5:
			return 1391321318;
		case 6:
			return 609813437;
		case 7:
			return 1063008707;
		case 8:
			return 908403613;
		case 9:
			return 734662375;
		case 10:
			return -1696699118;
		case 11:
			return -136042720;
		case 12:
			return -433421395;
		case 13:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_92(int iParam0)
{
	return (iParam0 >= 9 && iParam0 <= 12);
}

void func_93(var uParam0, int iParam1)
{
	if (!func_87(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_94(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_532(&(uParam0->f_7), 1);
	func_532(&(uParam0->f_7), 4);
	func_456(&(uParam0->f_7), 0);
}

void func_95(int iParam0, int iParam1)
{
	if (Global_1940311->f_14.f_16 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_14.f_16)
	{
		if (&Global_1940311->f_14[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar1 = get_id_of_this_thread();
	Global_1940311->f_14[Global_1940311->f_14.f_16] = iParam0;
	Global_1940311->f_14[Global_1940311->f_14.f_16]->f_1 = iParam1;
	Global_1940311->f_14[Global_1940311->f_14.f_16]->f_2 = iVar1;
	Global_1940311->f_14.f_16++;
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1071686->f_28341.f_2;
		case 1:
		case 5:
		case 9:
			return 0;
		case 2:
		case 6:
		case 10:
			return 1;
		case 3:
		case 7:
		case 11:
			return 2;
		case 4:
		case 8:
		case 12:
			return 3;
		default:
			break;
	}
	return -1;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2046780049;
		case 1:
			return 459833523;
		case 2:
			return 1053078005;
		case 3:
			return -1524959147;
		default:
			break;
	}
	return 0;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		default:
			break;
	}
	return -1;
}

void func_99(int iParam0)
{
	if (!func_393(iParam0))
	{
		func_533(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_100()
{
	if (!func_393(2))
	{
		func_99(2);
	}
}

void func_101(bool bParam0)
{
	iVar0 = player_id();
	if (bParam0)
	{
		if (func_534(2))
		{
			func_535(2);
		}
		if (_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_534(2))
		{
			func_536(2);
		}
		if (!_0x6614f9039bd31931(iVar0, 34, 0))
		{
			_0x0751d461f06e41ce(iVar0, 34, 0, 1);
		}
	}
	_0xa63fcad3a6fec6d2(iVar0, bParam0);
	_0x7146cf430965927c(27, bParam0);
}

void func_102()
{
	_0xd3f943b88f55376a(-173507739);
	_0xd3f943b88f55376a(1632247697);
	_0xd3f943b88f55376a(821931868);
	_0xd3f943b88f55376a(-1148613331);
	_0xd3f943b88f55376a(-1233681761);
	_0xd3f943b88f55376a(603685163);
	_0xd3f943b88f55376a(1679686673);
	_0x2916b30dc6c41179(2082228755);
	_0x2916b30dc6c41179(839715153);
	_0x2916b30dc6c41179(-1721991356);
	_0x2916b30dc6c41179(1420204096);
	_0x2916b30dc6c41179(1974067816);
	_0x2916b30dc6c41179(212278652);
	_0x2916b30dc6c41179(669657108);
	_0x2916b30dc6c41179(725623432);
	_0x2916b30dc6c41179(2137137442);
	_0x2916b30dc6c41179(-1317052143);
	_0x2916b30dc6c41179(1500834021);
	_0x2916b30dc6c41179(-702816767);
	_0x2916b30dc6c41179(433385945);
	_0x2916b30dc6c41179(-416908843);
	_0x2916b30dc6c41179(-273223690);
}

bool func_103()
{
	return Global_1896738->f_382;
}

void func_104()
{
	func_537(0);
}

void func_105(bool bParam0)
{
	iVar1 = func_334(0, (Global_1296543->f_43 - 1));
	iVar0 = iVar1;
	while (iVar0 >= 0)
	{
		if (Global_1296543[iVar0] != get_id_of_this_thread())
		{
			if (bParam0)
			{
			}
			else
			{
				func_538(iVar0);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_106(int iParam0)
{
	Global_17352 = iParam0;
}

char* func_107()
{
	return "script_re@consequence@kidnap_victim_thanks";
}

bool func_108(int iParam0, bool bParam1)
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
		iVar2 = func_539(iVar4, 1);
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
				func_540(iVar2, bVar3, bParam1);
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
					(Global_1139381->f_3876.f_2[func_541(iVar2, 1)])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_109(bool bParam0)
{
	func_542(57, !bParam0);
}

void func_110(int iParam0)
{
	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_111(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 <= -1 || iParam1 >= 3)
	{
		return;
	}
	uParam0->f_1348.f_176[iParam1] = iParam2;
	uParam0->f_1348.f_176[iParam1]->f_46 = iParam3;
}

void func_112(var uParam0, int iParam1)
{
	_0xe84aac1b22a73e99(&(uParam0->f_1348), iParam1);
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_158.f_2 = iParam1;
}

void func_114(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_544((*uParam0)[iVar0]);
		(*uParam0)[iVar0] = func_545(iVar0);
		(*uParam0)[iVar0]->f_1 = func_546(iVar0);
		iVar0++;
	}
	if (func_289(uParam0->f_43))
	{
		_0x2f901291ef177b02(uParam0->f_43, 0);
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 0;
	_0x062b4a4a3396351d(uParam1);
	_0xbcc6dc59e32a2bdc(uParam1);
}

void func_115(bool bParam0)
{
	_set_scenario_type_enabled_hash(-1837026863, bParam0);
	_set_scenario_type_enabled_hash(-414211333, bParam0);
}

void func_116(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1] = iParam2;
	uParam1->f_383 = 0;
	func_505(uParam0, uParam1, 2);
	uParam1->f_13 = uParam1->f_14;
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	if (func_41(uParam0, 1))
	{
		return;
	}
	func_34(uParam0, 1);
	uParam0->f_381 = iParam2;
	uParam0->f_382 = iParam1;
}

bool func_118(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_119(var uParam0, int iParam1)
{
	uVar0 = &uParam0->f_24.f_5[iParam1];
	switch (iParam1)
	{
		case 0:
			_datafile_register_query(uVar0, -1276103496, "MP_INTRO_DATA/CLOTHING_DATA/PLAYER_TYPE(id=%x)/OUTFIT(%i)");
			_datafile_register_query(uVar0, -534124480, "MP_INTRO_DATA/CLOTHING_DATA/PLAYER_TYPE(id=%x)/OUTFIT(id=%x)");
			_datafile_register_query(uVar0, 991793557, "MP_INTRO_DATA/CLOTHING_DATA/PLAYER_TYPE(id=%x)/OUTFIT(%i):id");
			_datafile_register_query(uVar0, 970319841, "STYLE(%i)");
			_datafile_register_query(uVar0, 1587430056, "STYLE(%i):id");
			_datafile_register_query(uVar0, 250639725, "STYLE(id=%x)/ITEM(%i)");
			_datafile_register_query(uVar0, 306103532, "STYLE(id=%x)/ITEM(%i):id");
			_datafile_register_query(uVar0, 1799303913, "STYLE(id=%x)/ITEM(%i):cond");
			_datafile_register_query(uVar0, 1725258056, "STYLE(id=%x)/ITEM(%i):item_set");
			_datafile_register_query(uVar0, 763914871, "MP_INTRO_DATA/CLOTHING_DATA/ITEM_GROUPS/ITEM_SET(id=%x)");
			_datafile_register_query(uVar0, -957809402, "ITEM(%i)");
			_datafile_register_query(uVar0, -1589267693, "ITEM(%i):id");
			_datafile_register_query(uVar0, 878554398, "ITEM(%i):cond");
			break;
		case 1:
			_datafile_register_query(uVar0, 263280777, "MPI_LOCATION_DATA");
			_datafile_register_query(uVar0, 1641491606, "MPI_LOCATION_DATA/GUN_FOR_HIRE:location");
			_datafile_register_query(uVar0, 98601888, "MPI_LOCATION_DATA/GUN_FOR_HIRE:mission_giver");
			_datafile_register_query(uVar0, 661562258, "MPI_LOCATION_DATA/GUN_FOR_HIRE:fetch_mission");
			_datafile_register_query(uVar0, 1438132447, "PED_DATA/PLAYER(id=%x)/PED(id=%x):model");
			_datafile_register_query(uVar0, -2082099332, "PED_DATA/PLAYER(id=%x)/PED(id=%x):gender");
			_datafile_register_query(uVar0, 1998108528, "PED_DATA/PLAYER(id=%x)/PED(id=%x):outfit");
			_datafile_register_query(uVar0, -513915388, "VEHICLE_DATA/VEHICLE(id=%x):model");
			_datafile_register_query(uVar0, -1704603418, "ROAD_NODES/ROAD(%i)");
			_datafile_register_query(uVar0, 231383926, "ROAD_NODES/ROAD(%i):position");
			_datafile_register_query(uVar0, 793218650, "ROAD_NODES/ROAD(%i):radius");
			_datafile_register_query(uVar0, 296570933, "WAYPOINT_RECORDING_DATA/WAYPOINT(%i)");
			_datafile_register_query(uVar0, 1294202201, "WAYPOINT_RECORDING_DATA/WAYPOINT(%i):id");
			_datafile_register_query(uVar0, 335656064, "WAYPOINT_RECORDING_DATA/WAYPOINT(id=%x):name");
			_datafile_register_query(uVar0, 942596887, "WAYPOINT_RECORDING_DATA/WAYPOINT(id=%x):lead_distance");
			_datafile_register_query(uVar0, -965153665, "WAYPOINT_RECORDING_DATA/WAYPOINT(id=%x):override_mbr");
			_datafile_register_query(uVar0, -2061090544, "WAYPOINT_RECORDING_DATA/WAYPOINT(id=%x):rubberband_start");
			_datafile_register_query(uVar0, -704533355, "WAYPOINT_RECORDING_DATA/WAYPOINT(id=%x):rubberband_end");
			_datafile_register_query(uVar0, -1216470460, "WORLD_STATE_DATA/WORLD_STATE(%i)");
			_datafile_register_query(uVar0, 542060787, "WORLD_STATE_DATA/WORLD_STATE(%i):id");
			_datafile_register_query(uVar0, -1158229860, "PROP_DATA/PROP(%i)");
			_datafile_register_query(uVar0, -537413059, "PROP_DATA/PROP(%i):id");
			_datafile_register_query(uVar0, 39733166, "PROP_DATA/PROP(id=%x):model");
			_datafile_register_query(uVar0, 830843561, "PROP_DATA/PROP(id=%x):position");
			_datafile_register_query(uVar0, 140995456, "PROP_DATA/PROP(id=%x):rotation");
			_datafile_register_query(uVar0, 1214591398, "PROP_DATA/PROP(id=%x):ground_snap");
			_datafile_register_query(uVar0, 1762833371, "PROP_DATA/PROP(id=%x):conflicting");
			_datafile_register_query(uVar0, -1184017109, "PROP_DATA/PROP(id=%x):player");
			_datafile_register_query(uVar0, -823434583, "PROP_SET_DATA/PROP_SET(%i)");
			_datafile_register_query(uVar0, 1909274527, "PROP_SET_DATA/PROP_SET(%i):id");
			_datafile_register_query(uVar0, -532114838, "PROP_SET_DATA/PROP_SET(id=%x):name");
			_datafile_register_query(uVar0, 37212565, "PROP_SET_DATA/PROP_SET(id=%x):position");
			_datafile_register_query(uVar0, 1893349933, "PROP_SET_DATA/PROP_SET(id=%x):heading");
			_datafile_register_query(uVar0, 1927803461, "PROP_SET_DATA/PROP_SET(id=%x):placement");
			_datafile_register_query(uVar0, -948696493, "PROP_SET_DATA/PROP_SET(id=%x):z_probe");
			_datafile_register_query(uVar0, 1357611604, "VEG_MOD_DATA/VEG_MOD(%i)");
			_datafile_register_query(uVar0, -138435977, "VEG_MOD_DATA/VEG_MOD(%i):id");
			_datafile_register_query(uVar0, -376648189, "VEG_MOD_DATA/VEG_MOD(id=%x):volume");
			_datafile_register_query(uVar0, 1873078293, "VEG_MOD_DATA/VEG_MOD(id=%x):center");
			_datafile_register_query(uVar0, 1033353573, "VEG_MOD_DATA/VEG_MOD(id=%x):radius");
			_datafile_register_query(uVar0, -2041268969, "VEG_MOD_DATA/VEG_MOD(id=%x):type");
			_datafile_register_query(uVar0, -1351512558, "VEG_MOD_DATA/VEG_MOD(id=%x):debris");
			_datafile_register_query(uVar0, 516963307, "VEG_MOD_DATA/VEG_MOD(id=%x):grass");
			_datafile_register_query(uVar0, -1823931075, "VEG_MOD_DATA/VEG_MOD(id=%x):bushes");
			_datafile_register_query(uVar0, -412346707, "VEG_MOD_DATA/VEG_MOD(id=%x):weeds");
			_datafile_register_query(uVar0, -1370084653, "VEG_MOD_DATA/VEG_MOD(id=%x):flowers");
			_datafile_register_query(uVar0, 1883380649, "VEG_MOD_DATA/VEG_MOD(id=%x):saplings");
			_datafile_register_query(uVar0, 1328003222, "VEG_MOD_DATA/VEG_MOD(id=%x):long_grass");
			_datafile_register_query(uVar0, -1736602973, "VEG_MOD_DATA/VEG_MOD(id=%x):attach_prop_set");
			_datafile_register_query(uVar0, -1399703090, "SCENARIO_DATA/SCENARIO(%i)");
			_datafile_register_query(uVar0, -165566174, "SCENARIO_DATA/SCENARIO(%i):id");
			_datafile_register_query(uVar0, -1992147682, "SCENARIO_DATA/SCENARIO(id=%x):name");
			_datafile_register_query(uVar0, -413127877, "SCENARIO_DATA/SCENARIO(id=%x):position");
			_datafile_register_query(uVar0, -552378443, "SCENARIO_DATA/SCENARIO(id=%x):direction");
			_datafile_register_query(uVar0, -218659319, "SCENARIO_DATA/SCENARIO(id=%x):prop");
			_datafile_register_query(uVar0, -1350080652, "SCENARIO_DATA/SCENARIO(id=%x):player");
			_datafile_register_query(uVar0, 107433388, "SCENARIO_DATA/SCENARIO(id=%x):ped");
			_datafile_register_query(uVar0, 1086629639, "MPI_LOCATION_DATA/VOLUME_DATA/VOLUME(id=%x)");
			_datafile_register_query(uVar0, -1215365649, ":category");
			_datafile_register_query(uVar0, 1361100711, ":ambient_avoidance");
			_datafile_register_query(uVar0, -1401111665, ":ambient_no_spawn");
			_datafile_register_query(uVar0, -954847066, ":scenario_block_player");
			_datafile_register_query(uVar0, 1872606369, ":scenario_block_ped");
			_datafile_register_query(uVar0, 322471868, "COMPONENT(%i)");
			_datafile_register_query(uVar0, 1738859957, "COMPONENT(%i):type");
			_datafile_register_query(uVar0, -1776787386, "COMPONENT(%i):position");
			_datafile_register_query(uVar0, -1213132344, "COMPONENT(%i):rotation");
			_datafile_register_query(uVar0, -2082996750, "COMPONENT(%i):scale");
			_datafile_register_query(uVar0, 1930071043, ":anti_grief_blocks_player");
			_datafile_register_query(uVar0, 1367400434, ":anti_grief_blocks_horse");
			_datafile_register_query(uVar0, 582098196, ":wnt_focus");
			_datafile_register_query(uVar0, -2142323684, "STAGE_DIRECTION_DATA/STAGE_DIRECTION(%i)");
			_datafile_register_query(uVar0, -1475909150, "STAGE_DIRECTION_DATA/STAGE_DIRECTION(%i):id");
			_datafile_register_query(uVar0, 2118059700, "STAGE_DIRECTION_DATA/STAGE_DIRECTION(id=%x):position");
			_datafile_register_query(uVar0, -1251356545, "STAGE_DIRECTION_DATA/STAGE_DIRECTION(id=%x):heading");
			_datafile_register_query(uVar0, -870471284, "STAGE_DIRECTION_DATA/STAGE_DIRECTION(id=%x):rotation");
			_datafile_register_query(uVar0, 257550969, "CAMERA_SHOT_DATA/CAMERA_SHOT(%i)");
			_datafile_register_query(uVar0, 86633837, "CAMERA_SHOT_DATA/CAMERA_SHOT(%i):id");
			_datafile_register_query(uVar0, 1260598746, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):length");
			_datafile_register_query(uVar0, 1543691247, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x):help");
			_datafile_register_query(uVar0, -1977481556, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:start");
			_datafile_register_query(uVar0, 1085735185, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:end");
			_datafile_register_query(uVar0, -118865683, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_POSITION:graph");
			_datafile_register_query(uVar0, 159027336, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:start");
			_datafile_register_query(uVar0, -1814915510, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:end");
			_datafile_register_query(uVar0, -2103869977, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_ROTATION:graph");
			_datafile_register_query(uVar0, 1194656552, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_FOV:start");
			_datafile_register_query(uVar0, -150438210, "CAMERA_SHOT_DATA/CAMERA_SHOT(id=%x)/CAM_FOV:end");
			_datafile_register_query(uVar0, -296423915, "MPI_LOCATION_DATA/CAMERA_SHOT_SEQUENCE_DATA/CAMERA_SHOT_SEQUENCE(id=%x)");
			_datafile_register_query(uVar0, -355955947, ":streaming_request_list");
			_datafile_register_query(uVar0, 1832514760, "CAMERA_SHOT(%i)");
			_datafile_register_query(uVar0, 1524166758, "CAMERA_SHOT(%i):id");
			_datafile_register_query(uVar0, -757926384, "MPI_LOCATION_DATA/BOUNDARY_DATA/BOUNDARY(id=%x):ped");
			_datafile_register_query(uVar0, -305053920, "MPI_LOCATION_DATA/BOUNDARY_DATA/BOUNDARY(id=%x):volume");
			_datafile_register_query(uVar0, -1346868298, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x):mode");
			_datafile_register_query(uVar0, 778725653, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/HEADING:entity");
			_datafile_register_query(uVar0, -1215561529, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/HEADING:position");
			_datafile_register_query(uVar0, -1581601680, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/HEADING:heading");
			_datafile_register_query(uVar0, 1894780099, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/LOCATION:position");
			_datafile_register_query(uVar0, 914581656, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/LOCATION:min_radius");
			_datafile_register_query(uVar0, 256145798, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/LOCATION:max_radius");
			_datafile_register_query(uVar0, -505199224, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/LOCATION:fallback");
			_datafile_register_query(uVar0, -1731140266, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/SETTINGS:on_horse");
			_datafile_register_query(uVar0, 1032837903, "MPI_LOCATION_DATA/RESPAWN_CONFIG_DATA/RESPAWN_CONFIG(id=%x)/SETTINGS:with_horse");
			_datafile_register_query(uVar0, 2016780707, "MPI_LOCATION_DATA/ANIM_SCENE_DATA/ANIM_SCENE(id=%x)");
			_datafile_register_query(uVar0, -839782836, "MPI_LOCATION_DATA/BLIP_DATA/BLIP(id=%x)");
			_datafile_register_query(uVar0, -1521558844, "GPS_POINT_DATA:color");
			_datafile_register_query(uVar0, 44928024, "GPS_POINT_DATA:on_foot");
			_datafile_register_query(uVar0, -1485734414, "GPS_POINT_DATA:in_vehicle");
			_datafile_register_query(uVar0, -77339266, "GPS_POINT_DATA/GPS_POINT(%i)");
			_datafile_register_query(uVar0, 1302794186, "GPS_POINT_DATA/GPS_POINT(%i):position");
			_datafile_register_query(uVar0, -2039919571, "GPS_POINT_DATA/GPS_POINT(%i):straight_line");
			_datafile_register_query(uVar0, 1044912895, "MPI_LOCATION_DATA/STAGE_DATA/STAGE(id=%x)");
			_datafile_register_query(uVar0, 1478421962, ":boundary");
			_datafile_register_query(uVar0, -1854440291, ":respawn");
			_datafile_register_query(uVar0, 1264015228, "PED_DATA/PED(%i)");
			_datafile_register_query(uVar0, 995627660, "PED_DATA/PED(%i):id");
			_datafile_register_query(uVar0, 834889128, "PED_DATA/PED(id=%x):mount");
			_datafile_register_query(uVar0, -1498016323, "PED_DATA/PED(id=%x):vehicle");
			_datafile_register_query(uVar0, -1955134669, "PED_DATA/PED(id=%x):seat");
			_datafile_register_query(uVar0, -880605302, "PED_DATA/PED(id=%x):scenario");
			_datafile_register_query(uVar0, -205434160, "PED_DATA/PED(id=%x):stage_direction");
			_datafile_register_query(uVar0, -1731752235, "PED_DATA/PED(id=%x):position");
			_datafile_register_query(uVar0, 1054609211, "PED_DATA/PED(id=%x):heading");
			_datafile_register_query(uVar0, -1403000387, "PED_DATA/PED(id=%x):force_placement");
			_datafile_register_query(uVar0, -1624024105, "VEHICLE_DATA/VEHICLE(%i)");
			_datafile_register_query(uVar0, -1431424055, "VEHICLE_DATA/VEHICLE(%i):id");
			_datafile_register_query(uVar0, -393453621, "VEHICLE_DATA/VEHICLE(id=%x):stage_direction");
			_datafile_register_query(uVar0, -1814448663, "VEHICLE_DATA/VEHICLE(id=%x):position");
			_datafile_register_query(uVar0, 708105482, "VEHICLE_DATA/VEHICLE(id=%x):heading");
			_datafile_register_query(uVar0, -1049132473, "VEHICLE_DATA/VEHICLE(id=%x):force_placement");
			_datafile_register_query(uVar0, -795199841, "VEHICLE_DATA/VEHICLE(id=%x):draft_pop_group");
			_datafile_register_query(uVar0, 428314976, "VEHICLE_DATA/VEHICLE(id=%x):draft_random_seed");
			_datafile_register_query(uVar0, -238195629, "VEHICLE_DATA/VEHICLE(id=%x):spawn_without_horses");
			_datafile_register_query(uVar0, -15724930, "PROP_DATA/PROP(id=%x):stage_direction");
			_datafile_register_query(uVar0, 1854074362, "PROP_DATA/PROP(id=%x):position");
			_datafile_register_query(uVar0, -1668582337, "PROP_DATA/PROP(id=%x):rotation");
			_datafile_register_query(uVar0, -1945641171, "PROP_DATA/PROP(id=%x):ground_snap");
			_datafile_register_query(uVar0, 1633794952, "PROP_DATA/PROP(id=%x):force_placement");
			_datafile_register_query(uVar0, -363924619, "VOLUME_DATA/VOLUME(%i)");
			_datafile_register_query(uVar0, 385829566, "VOLUME_DATA/VOLUME(%i):id");
			break;
		case 2:
			_datafile_register_query(uVar0, 1279887153, "Gun_for_Hire/Locations/Location(%i)");
			_datafile_register_query(uVar0, -605472206, "Gun_for_Hire/Locations/Location(%i):location");
			_datafile_register_query(uVar0, 1836615074, "Gun_for_Hire/Mission_Givers/Mission_Giver(%i)");
			_datafile_register_query(uVar0, 367011945, "Gun_for_Hire/Mission_Givers/Mission_Giver(%i):giver");
			func_547(uVar0);
			_datafile_register_query(uVar0, 2066263208, "Gun_For_Hire_Peds/Mission_Giver(location=%x):position");
			_datafile_register_query(uVar0, 2108953056, "Gun_For_Hire_Peds/Mission_Giver(location=%x):blip_sprite");
			_datafile_register_query(uVar0, 163622889, "Gun_For_Hire_Peds/Mission_Giver(location=%x)/mission_giver_data:mission_giver_name");
			_datafile_register_query(uVar0, -921109151, "Gun_For_Hire_Peds/Mission_Giver(location=%x)/mission_giver_data:blip_style_close");
			break;
		default:
			break;
	}
}

int func_120(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 713435792;
		case 1:
			switch (uParam0->f_1348.f_3)
			{
				case 0:
					return 1908429953;
				case 1:
					return -427748210;
				case 2:
					return -2097358648;
				case 3:
					return -325022346;
				default:
					break;
			}
			break;
		case 2:
			return 1922501359;
	}
	return 0;
}

void func_121(var uParam0, var uParam1, int iParam2)
{
	if (func_118((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 || iParam2);
}

void func_122(var uParam0, int iParam1)
{
	uParam0->f_24 = &uParam0->f_24.f_5[iParam1];
	uParam0->f_24.f_1 = 0;
	uParam0->f_24.f_2 = 0;
	uParam0->f_24.f_3 = 0;
	uParam0->f_24.f_4 = 0;
}

int func_123()
{
	return Global_1952637->f_1;
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2113625508;
		case 1:
			return 1549124796;
		case 2:
			return -502473159;
		case 3:
			return 229371495;
		default:
			break;
	}
	return -1;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -716370751;
		case 1:
			return -2053832767;
		case 2:
			return 372806894;
		case 3:
			return -1534577778;
		default:
			break;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 451529179:
			return -897763770;
		case -934992753:
			return 338217376;
		case -841961450:
			return 105786859;
		case 612720002:
			return 1316044336;
		case 847313273:
			return 950014606;
		case -737921038:
			return 1760058211;
		case -1069379473:
			return 2048851408;
		case -148898263:
			return 56102980;
		case -447391084:
			return -1601090892;
		case -1640936415:
			return -1345066695;
		case -862160776:
			return 1639999212;
		case -1100096485:
			return 1332920913;
		case -863930314:
			return 2131468674;
		case -1094001463:
			return 59943546;
		case -1577213137:
			return 701691642;
		case 640288085:
			return -186280544;
		case -1809751726:
			return 111917356;
		case 1236716654:
			return 1483332779;
		case 931276805:
			return 820514216;
		case 1855821387:
			return 1118581040;
		default:
			break;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case -897763770:
			return -77467964;
		case 338217376:
			return -347456896;
		case 105786859:
			return 1714368580;
		case 1316044336:
			return -77467964;
		case 950014606:
			return -1937764094;
		case 1760058211:
			return -561662774;
		case 2048851408:
			return -1066371548;
		case 56102980:
			return 292264021;
		case -1601090892:
			return -561662774;
		case -1345066695:
			return -561662774;
		case 1639999212:
			return 492784758;
		case 1332920913:
			return 2103020653;
		case 2131468674:
			return -264965602;
		case 59943546:
			return 1458683810;
		case 701691642:
			return 683467233;
		case -186280544:
			return -1293037363;
		case 111917356:
			return 393648601;
		case 1483332779:
			return 1160836429;
		case 820514216:
			return 681917494;
		case 1118581040:
			return -1293037363;
		default:
			break;
	}
	return 0;
}

Vector3 func_128(var uParam0)
{
	iVar4 = 0;
	while (iVar4 <= 12)
	{
		iVar3 = func_548(iVar4, 1);
		if (!func_549(iVar3))
		{
		}
		else
		{
			vVar0.f_1 = iVar3;
			if (func_550(iVar3, uParam0))
			{
				vVar0.f_2 = func_551(uParam0, vVar0);
				return vVar0;
			}
		}
		iVar4++;
	}
	vVar0.f_2 = 0;
	return vVar0;
}

void func_129()
{
	if (!func_393(32))
	{
		func_99(32);
	}
}

void func_130()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_552(iVar0);
		iVar0++;
	}
}

int func_131(int iParam0, vector3 vParam1)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return 0;
	}
	if (vParam1.z == 0)
	{
		return 0;
	}
	if (func_553(iParam0) != vParam1.z)
	{
		Global_1132288->f_2020[iParam0] = vParam1.z;
	}
	return 1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1848799275;
		case 1:
			return -1906892166;
		case 2:
			return 1866434585;
		case 3:
			return 1812677765;
		default:
			break;
	}
	return -1;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_hash(&uVar0, &(uParam0->f_24)))
	{
		return 0;
	}
	return uVar0;
}

int func_134(int iParam0, int iParam1)
{
	if (func_554(iParam0, iParam1, &Var0))
	{
		return Var0.f_1;
	}
	return -1;
}

void func_135(var uParam0)
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 3;
	Var0.f_7.f_5 = 7;
	Var0.f_7.f_27 = 7;
	*uParam0 = { Var0 };
}

void func_136(var uParam0)
{
	Var0.f_1 = 2;
	Var0.f_8 = -1;
	_copy_memory(uParam0, &Var0, 10);
}

void func_137(var uParam0)
{
	Var0.f_2 = 3;
	Var0.f_13 = 2;
	Var0.f_16 = -1;
	Var0.f_16.f_1 = -1;
	Var0.f_18 = 5;
	Var0.f_18.f_1.f_1 = -1;
	Var0.f_18.f_1.f_3.f_1 = -1;
	Var0.f_18.f_1.f_3.f_3.f_1 = -1;
	Var0.f_18.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_18.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_138(var uParam0)
{
	Var0.f_1 = 493038497;
	Var0.f_2 = -1;
	Var0.f_6 = 2;
	_copy_memory(uParam0, &Var0, 13);
}

struct<33> func_139(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_555(4, uParam0, &Var0))
	{
	}
	return Var0;
}

struct<2> func_140(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636), func_556(iParam1));
			break;
		case 3:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_602), func_556(iParam1));
			break;
		case 4:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_2104), func_556(iParam1));
			break;
		case 5:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_12606), func_556(iParam1));
			break;
		case 6:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_12908), func_556(iParam1));
			break;
		case 7:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_15910), func_556(iParam1));
			break;
		case 8:
			Var0.f_1 = func_557(iParam0, &(Global_1071686->f_636.f_16512), func_556(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_448();
	}
	return Var0;
}

Vector3 func_141(int iParam0, var uParam1)
{
	if (func_558(&Var3, iParam0) && func_559(&Var3, uParam1))
	{
		func_560(Var3, 1702777600, &vVar0, 1);
	}
	return vVar0;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2024941402;
		case 1:
			return -50297425;
		case 2:
			return 536714458;
		case 3:
			return 2068117822;
		default:
			break;
	}
	return 0;
}

int func_143(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	return _datafile_get_num_nodes(&(uParam0->f_24));
}

bool func_144(var uParam0, var uParam1)
{
	if (!func_561(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = 466723622;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_145(struct<5> Param0, var uParam5, var uParam6)
{
	if (!func_562(&Param0, uParam5))
	{
		return false;
	}
	if (!func_563(Param0, uParam5, uParam6))
	{
		return false;
	}
	iVar0 = func_564(*uParam6);
	if (!func_565(*uParam6, 2))
	{
		func_566(*uParam6, Param0);
		func_567(Param0, *uParam6);
	}
	if (!func_568(iVar0))
	{
		func_569(Param0, *uParam6);
	}
	return true;
}

bool func_146(var uParam0, var uParam1)
{
	if (!func_561(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -155807419;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_147(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	if (!func_570(&Param0, uParam5))
	{
		return false;
	}
	if (!func_571(Param0, uParam5, uParam6))
	{
		return false;
	}
	func_572(Param0, *uParam6);
	func_573(*uParam6, Param0);
	if (!func_574(Param0, *uParam6))
	{
		return false;
	}
	if (!func_576(Param0, *uParam6, uParam5, uParam7, func_575(*uParam6)))
	{
		return false;
	}
	func_577(Param0, *uParam6);
	return true;
}

bool func_148(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	return _datafile_get_data_node_index(&(uParam0->f_24.f_1), &(uParam0->f_24));
}

void func_149(var uParam0, int iParam1)
{
	iVar0 = func_578(iParam1);
	iVar1 = 472588819;
	if (func_123() == 24043185)
	{
		iVar1 = 1830115867;
	}
	uParam0->f_4926.f_182[iParam1] = func_151(uParam0, 1438132447, iVar1, iVar0);
	iVar2 = func_133(uParam0, -2082099332, iVar1, iVar0);
	if (iVar2 == -2047168722)
	{
		if (func_123() == 2026485318)
		{
			iVar3 = 1;
		}
		else if (func_123() == 24043185)
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = 0;
		}
	}
	else if (iVar2 == 472588819)
	{
		iVar3 = 1;
	}
	else if (iVar2 == 1830115867)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 0;
	}
	uParam0->f_4926.f_182[iParam1]->f_1 = iVar3;
	uParam0->f_4926.f_182[iParam1]->f_2 = func_133(uParam0, 1998108528, iVar1, iVar0);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2068363521;
		case 1:
			return 1356430983;
		case 2:
			return -885211365;
		default:
			break;
	}
	return 0;
}

int func_151(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_133(uParam0, iParam1, iParam2, iParam3);
	return iVar0;
}

void func_152(var uParam0, int iParam1)
{
	vVar0 = { func_207(uParam0, 231383926, iParam1, 0) };
	fVar3 = func_208(uParam0, 793218650, iParam1, 0);
	func_579(vVar0, fVar3, 0, 0, 5, 1);
}

bool func_153(var uParam0, int iParam1)
{
	iVar0 = func_580(iParam1);
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return false;
	}
	*uParam0->f_4926.f_36[iVar0] = { func_581(uParam0, 335656064, iParam1, 0) };
	uParam0->f_4926.f_36[iVar0]->f_8 = func_208(uParam0, 942596887, iParam1, 0);
	if (uParam0->f_4926.f_36[iVar0]->f_8 <= 0f)
	{
		uParam0->f_4926.f_36[iVar0]->f_8 = 15f;
	}
	uParam0->f_4926.f_36[iVar0]->f_9 = func_208(uParam0, -965153665, iParam1, 0);
	if (uParam0->f_4926.f_36[iVar0]->f_9 <= 0f)
	{
		uParam0->f_4926.f_36[iVar0]->f_9 = -1f;
	}
	uParam0->f_4926.f_36[iVar0]->f_10 = func_582(uParam0, -2061090544, iParam1, 0);
	uParam0->f_4926.f_36[iVar0]->f_11 = func_582(uParam0, -704533355, iParam1, 0);
	return true;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4017;
		case 1:
			return 4018;
		case 2:
			return 4019;
		case 3:
			return 4020;
		case 4:
			return 4021;
		default:
			break;
	}
	return 4016;
}

bool func_155(var uParam0, int iParam1)
{
	iVar0 = func_583(iParam1);
	if (iVar0 <= -1 || iVar0 >= 9)
	{
		return false;
	}
	uParam0->f_4926.f_97[iVar0] = func_151(uParam0, 39733166, iParam1, 0);
	uParam0->f_4926.f_97[iVar0]->f_1 = { func_207(uParam0, 830843561, iParam1, 0) };
	uParam0->f_4926.f_97[iVar0]->f_4 = { func_207(uParam0, 140995456, iParam1, 0) };
	uParam0->f_4926.f_97[iVar0]->f_7 = func_584(uParam0, 1214591398, iParam1, 0);
	return true;
}

int func_156(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4023;
		case 1:
			return 4024;
		case 2:
			return 4025;
		case 3:
			return 4026;
		case 4:
			return 4027;
		case 5:
			return 4028;
		case 6:
			return 4029;
		case 7:
			return 4030;
		case 8:
			return 4031;
		default:
			break;
	}
	return 4022;
}

bool func_157(var uParam0, int iParam1)
{
	iVar0 = func_585(iParam1);
	if (iVar0 <= -1 || iVar0 >= 1)
	{
		return false;
	}
	uParam0->f_4926.f_170[iVar0] = func_133(uParam0, -532114838, iParam1, 0);
	if (&uParam0->f_4926.f_170[iVar0] == 0)
	{
		return false;
	}
	uParam0->f_4926.f_170[iVar0]->f_1 = { func_207(uParam0, 37212565, iParam1, 0) };
	if (func_209(uParam0->f_4926.f_170[iVar0]->f_1))
	{
		return false;
	}
	uParam0->f_4926.f_170[iVar0]->f_4 = func_208(uParam0, 1893349933, iParam1, 0);
	switch (func_133(uParam0, 1927803461, iParam1, 0))
	{
		case -421497631:
			uParam0->f_4926.f_170[iVar0]->f_5 = 0;
			break;
		case -993181231:
			uParam0->f_4926.f_170[iVar0]->f_5 = 1;
			break;
		case -1957166961:
			uParam0->f_4926.f_170[iVar0]->f_5 = 4;
			break;
		case 1615533950:
			uParam0->f_4926.f_170[iVar0]->f_5 = 5;
			break;
		case 520141149:
			uParam0->f_4926.f_170[iVar0]->f_5 = 7;
			break;
		default:
			return false;
	}
	uParam0->f_4926.f_170[iVar0]->f_6 = func_208(uParam0, -948696493, iParam1, 0);
	if (uParam0->f_4926.f_170[iVar0]->f_6 <= 0f)
	{
		uParam0->f_4926.f_170[iVar0]->f_6 = 1200f;
	}
	return true;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4033;
		default:
			break;
	}
	return 4032;
}

bool func_159(var uParam0, int iParam1)
{
	iVar0 = func_586(iParam1);
	if (iVar0 <= -1 || iVar0 >= 1)
	{
		return false;
	}
	uParam0->f_4926.f_201[iVar0] = func_133(uParam0, -376648189, iParam1, 0);
	uParam0->f_4926.f_201[iVar0]->f_1 = { func_207(uParam0, 1873078293, iParam1, 0) };
	uParam0->f_4926.f_201[iVar0]->f_4 = func_133(uParam0, -1736602973, iParam1, 0);
	if ((&uParam0->f_4926.f_201[iVar0] == 0 && func_209(uParam0->f_4926.f_201[iVar0]->f_1)) && uParam0->f_4926.f_201[iVar0]->f_4 == 0)
	{
		return false;
	}
	uParam0->f_4926.f_201[iVar0]->f_5 = func_208(uParam0, 1033353573, iParam1, 0);
	switch (func_133(uParam0, -2041268969, iParam1, 0))
	{
		case -907098195:
			uParam0->f_4926.f_201[iVar0]->f_6 = 1;
			break;
		case -1453140709:
			uParam0->f_4926.f_201[iVar0]->f_6 = 2;
			break;
		case 331632914:
			uParam0->f_4926.f_201[iVar0]->f_6 = 4;
			break;
		case 1152024837:
			uParam0->f_4926.f_201[iVar0]->f_6 = 8;
			break;
		case 1960114521:
			uParam0->f_4926.f_201[iVar0]->f_6 = 16;
			break;
		case -259577388:
			uParam0->f_4926.f_201[iVar0]->f_6 = 32;
			break;
		default:
			return false;
	}
	if (func_584(uParam0, -1351512558, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 1;
	}
	if (func_584(uParam0, 516963307, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 2;
	}
	if (func_584(uParam0, -1823931075, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 4;
	}
	if (func_584(uParam0, -412346707, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 8;
	}
	if (func_584(uParam0, -1370084653, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 16;
	}
	if (func_584(uParam0, 1883380649, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 32;
	}
	if (func_584(uParam0, 1328003222, iParam1, 0))
	{
		uParam0->f_4926.f_201[iVar0]->f_7 |= 256;
	}
	return true;
}

int func_160(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4170;
		default:
			break;
	}
	return 4169;
}

bool func_161(var uParam0, int iParam1)
{
	iVar0 = func_250(iParam1);
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return false;
	}
	uParam0->f_4926.f_210[iVar0] = func_133(uParam0, -1992147682, iParam1, 0);
	uParam0->f_4926.f_210[iVar0]->f_1 = { func_207(uParam0, -413127877, iParam1, 0) };
	uParam0->f_4926.f_210[iVar0]->f_4 = func_208(uParam0, -552378443, iParam1, 0);
	uParam0->f_4926.f_210[iVar0]->f_6 = func_133(uParam0, -218659319, iParam1, 0);
	uParam0->f_4926.f_210[iVar0]->f_7 = func_583(uParam0->f_4926.f_210[iVar0]->f_6);
	if (!func_584(uParam0, -1350080652, iParam1, 0))
	{
		func_587(&(uParam0->f_4926.f_210[iVar0]->f_5), 1);
	}
	return true;
}

int func_162(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4037;
		case 0:
			return 4038;
		case 2:
			return 4039;
		case 3:
			return 4040;
		case 4:
			return 4041;
		default:
			break;
	}
	return 4036;
}

bool func_163(var uParam0, int iParam1)
{
	iVar0 = func_588(iParam1);
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return false;
	}
	*uParam0->f_4926[iVar0] = { func_207(uParam0, 2118059700, iParam1, 0) };
	uParam0->f_4926[iVar0]->f_6 = func_208(uParam0, -1251356545, iParam1, 0);
	uParam0->f_4926[iVar0]->f_3 = { func_207(uParam0, -870471284, iParam1, 0) };
	return true;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4044;
		case 1:
			return 4045;
		case 2:
			return 4046;
		case 3:
			return 4054;
		case 4:
			return 4055;
		default:
			break;
	}
	return 4042;
}

bool func_165(var uParam0, int iParam1)
{
	iVar0 = func_589(iParam1);
	if (iVar0 <= -1 || iVar0 >= 1)
	{
		return false;
	}
	uParam0->f_249.f_4[iVar0]->f_31 = func_582(uParam0, 1260598746, iParam1, 0);
	uParam0->f_249.f_4[iVar0]->f_34 = func_133(uParam0, 1543691247, iParam1, 0);
	*uParam0->f_249.f_4[iVar0] = { func_207(uParam0, -1977481556, iParam1, 0) };
	uParam0->f_249.f_4[iVar0]->f_7 = { func_207(uParam0, 1085735185, iParam1, 0) };
	uParam0->f_249.f_4[iVar0]->f_32 = func_590(func_133(uParam0, -118865683, iParam1, 0));
	uParam0->f_249.f_4[iVar0]->f_3 = { func_207(uParam0, 159027336, iParam1, 0) };
	uParam0->f_249.f_4[iVar0]->f_10 = { func_207(uParam0, -1814915510, iParam1, 0) };
	uParam0->f_249.f_4[iVar0]->f_33 = func_590(func_133(uParam0, -2103869977, iParam1, 0));
	uParam0->f_249.f_4[iVar0]->f_6 = func_208(uParam0, 1194656552, iParam1, 0);
	uParam0->f_249.f_4[iVar0]->f_13 = func_208(uParam0, -150438210, iParam1, 0);
	return true;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4057;
		default:
			break;
	}
	return 4056;
}

void func_167(var uParam0, int iParam1)
{
	_0xb909149f2bb5f6da(&(uParam0->f_1348), iParam1);
}

void func_168(vector3 vParam0)
{
	if (func_209(vParam0))
	{
		return;
	}
	clear_area(vParam0, 100f, 2212363);
}

void func_169(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_116.f_41)
	{
		if (&uParam0->f_116[iVar0] != 0)
		{
			set_model_as_no_longer_needed(&(uParam0->f_116[iVar0]));
		}
		func_591(uParam0->f_116[iVar0]);
		iVar0++;
	}
	uParam0->f_116.f_41 = 0;
}

void func_170(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (does_blip_exist(&(uParam0->f_41.f_11[iVar0])))
		{
			remove_blip(uParam0->f_41.f_11[iVar0]);
		}
		iVar0++;
	}
	if (uParam0->f_41.f_23 != -1)
	{
		clear_gps_multi_route();
		uParam0->f_41.f_23 = -1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_41.f_65)
		{
			_0x4bdebea5702b97a9(*uParam0->f_41.f_24[uParam0->f_41.f_65], uParam0->f_41.f_24[uParam0->f_41.f_65]->f_3, 1, 1);
			iVar1++;
		}
		uParam0->f_41.f_65 = 0;
		clear_gps_flags();
	}
}

void func_171()
{
	_uitutorial_set_rpg_icon_visibility(0, 0);
	_uitutorial_set_rpg_icon_visibility(1, 0);
	_uitutorial_set_rpg_icon_visibility(2, 0);
	_uitutorial_set_rpg_icon_visibility(3, 0);
	_uitutorial_set_rpg_icon_visibility(4, 0);
	_uitutorial_set_rpg_icon_visibility(5, 0);
	_uitutorial_set_rpg_icon_visibility(6, 0);
	_uitutorial_set_rpg_icon_visibility(7, 0);
	_uitutorial_set_rpg_icon_visibility(8, 0);
	_uitutorial_set_rpg_icon_visibility(9, 0);
	_uitutorial_set_rpg_icon_visibility(10, 0);
	_uitutorial_set_rpg_icon_visibility(11, 0);
}

void func_172(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_14.f_16)
	{
		if (&Global_1940311->f_14[iVar0] == iParam0)
		{
			func_592(iVar0);
			return;
		}
		iVar0++;
	}
}

void func_173(var uParam0)
{
	func_167(uParam0, 18);
	func_167(uParam0, 19);
	func_167(uParam0, 20);
	func_167(uParam0, 21);
	func_167(uParam0, 22);
	if (uParam0->f_1348.f_139 != -1)
	{
		func_414(uParam0->f_1348.f_139);
		func_293(uParam0->f_1348.f_139);
	}
	iVar1 = func_593(64445474);
	iVar0 |= 1;
	func_594(iVar1, -1, iVar0);
	uParam0->f_1348.f_139 = -1;
}

void func_174(int iParam0)
{
	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1939655->f_65[iVar1], iVar2);
}

void func_175(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_501(1497516462);
			func_110(2016141805);
			func_110(1010885152);
			func_110(-502324015);
			break;
		case 2016141805:
			func_110(1497516462);
			func_501(2016141805);
			func_110(1010885152);
			func_110(-502324015);
			break;
		case 1010885152:
			func_110(1497516462);
			func_110(2016141805);
			func_501(1010885152);
			func_110(-502324015);
			break;
		case -502324015:
			func_110(1497516462);
			func_110(2016141805);
			func_110(1010885152);
			func_501(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_110(-538889627);
			func_110(-538880323);
			func_110(-1056767524);
			func_501(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_595();
			func_501(iParam0);
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
			func_596();
			func_501(iParam0);
			break;
		case 2019386373:
			func_110(-664252410);
			func_110(2109952320);
			func_501(2019386373);
			break;
		case -664252410:
			func_110(2019386373);
			func_110(2109952320);
			func_501(-664252410);
			break;
		case 2109952320:
			func_110(2019386373);
			func_110(-664252410);
			func_501(2109952320);
			break;
		case -1674179981:
			func_110(-1835851517);
			func_110(-1838352012);
			func_501(-1674179981);
			break;
		case -1835851517:
			func_110(-1674179981);
			func_110(-1838352012);
			func_501(-1835851517);
			break;
		case -1838352012:
			func_110(-1674179981);
			func_110(-1835851517);
			func_501(-1838352012);
			break;
		case -1717960576:
			func_110(210001842);
			func_501(-1717960576);
			break;
		case 210001842:
			func_110(-1717960576);
			func_501(210001842);
			break;
		case -150493654:
			func_110(-1271608261);
			func_110(1846061697);
			func_110(-1145519186);
			func_501(-150493654);
			break;
		case -1271608261:
			func_110(-150493654);
			func_110(1846061697);
			func_110(-1145519186);
			func_501(-1271608261);
			break;
		case 1846061697:
			func_110(-150493654);
			func_110(-1271608261);
			func_110(-1145519186);
			func_501(1846061697);
			break;
		case -1145519186:
			func_110(-150493654);
			func_110(-1271608261);
			func_110(1846061697);
			func_501(-1145519186);
			break;
		case 1766284049:
			func_110(280705402);
			func_110(1926308480);
			func_501(1766284049);
			break;
		case 280705402:
			func_110(1766284049);
			func_110(1926308480);
			func_501(280705402);
			break;
		case 1926308480:
			func_110(1766284049);
			func_110(280705402);
			func_501(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_110(439465264);
				func_501(1609506757);
			}
			else
			{
				func_110(1609506757);
				func_110(439465264);
			}
			break;
		case 439465264:
			if (func_281(1609506757))
			{
				if (bParam1)
				{
					func_501(439465264);
				}
				else
				{
					func_110(439465264);
				}
			}
			break;
		case 1822001510:
			func_110(-1612662716);
			func_501(1822001510);
			break;
		case -1612662716:
			func_110(1822001510);
			func_501(-1612662716);
			break;
		case 1306158345:
			func_110(1952610440);
			func_110(-223469678);
			func_110(-404698347);
			func_110(1517904467);
			func_501(1306158345);
			break;
		case 1952610440:
			func_110(1306158345);
			func_110(-223469678);
			func_110(-404698347);
			func_110(1517904467);
			func_501(1952610440);
			break;
		case -223469678:
			func_110(1306158345);
			func_110(1952610440);
			func_110(-404698347);
			func_110(1517904467);
			func_501(-223469678);
			break;
		case -404698347:
			func_110(1306158345);
			func_110(1952610440);
			func_110(-223469678);
			func_110(1517904467);
			func_501(-404698347);
			break;
		case 1517904467:
			func_110(1306158345);
			func_110(1952610440);
			func_110(-223469678);
			func_110(-404698347);
			func_501(1517904467);
			break;
		case 1376646519:
			func_110(931649776);
			func_110(-434590080);
			func_110(1743048395);
			func_110(449774763);
			func_501(1376646519);
			break;
		case 931649776:
			func_110(1376646519);
			func_110(-434590080);
			func_110(1743048395);
			func_110(449774763);
			func_501(931649776);
			break;
		case -434590080:
			func_110(1376646519);
			func_110(931649776);
			func_110(1743048395);
			func_110(449774763);
			func_501(-434590080);
			break;
		case 1743048395:
			func_110(1376646519);
			func_110(931649776);
			func_110(-434590080);
			func_110(449774763);
			func_501(1743048395);
			break;
		case 449774763:
			func_110(1376646519);
			func_110(931649776);
			func_110(-434590080);
			func_110(1743048395);
			func_501(449774763);
			break;
		case -1414537028:
			func_110(38162571);
			func_110(1350391819);
			func_110(54073871);
			func_501(-1414537028);
			break;
		case 38162571:
			func_110(-1414537028);
			func_110(1350391819);
			func_110(54073871);
			func_501(38162571);
			break;
		case 1350391819:
			func_110(-1414537028);
			func_110(38162571);
			func_110(54073871);
			func_501(1350391819);
			break;
		case 54073871:
			func_110(-1414537028);
			func_110(38162571);
			func_110(1350391819);
			func_501(54073871);
			break;
		case 198200492:
			func_501(198200492);
			func_110(-1124061431);
			func_110(52706132);
			func_110(-259123672);
			break;
		case -1124061431:
			func_110(198200492);
			func_501(-1124061431);
			func_110(52706132);
			func_110(-259123672);
			break;
		case 52706132:
			func_110(198200492);
			func_110(-1124061431);
			func_501(52706132);
			func_110(-259123672);
			break;
		case -259123672:
			func_110(198200492);
			func_110(-1124061431);
			func_110(52706132);
			func_501(-259123672);
			break;
		case -919512195:
			func_501(-919512195);
			func_110(-1925798111);
			func_110(420709909);
			func_110(1703426636);
			break;
		case -1925798111:
			func_501(-1925798111);
			func_110(-919512195);
			func_110(420709909);
			func_110(1703426636);
			break;
		case 420709909:
			func_501(420709909);
			func_110(-919512195);
			func_110(-1925798111);
			func_110(1703426636);
			break;
		case 1703426636:
			func_501(1703426636);
			func_110(-919512195);
			func_110(-1925798111);
			func_110(420709909);
			break;
		case -1223121209:
			func_501(-1223121209);
			func_110(630808005);
			break;
		case 630808005:
			func_501(630808005);
			func_110(-1223121209);
			break;
		case 1453909576:
			func_501(1453909576);
			func_110(1643531967);
			break;
		case 1643531967:
			func_501(1643531967);
			func_110(1453909576);
			break;
		case 0:
			func_501(0);
			func_110(473295046);
			func_110(-1738165526);
			break;
		case 473295046:
			func_501(473295046);
			func_110(0);
			func_110(-1738165526);
			break;
		case -1738165526:
			func_501(-1738165526);
			func_110(0);
			func_110(473295046);
			break;
		case 932909855:
			func_501(932909855);
			func_110(2051822093);
			break;
		case 2051822093:
			func_501(2051822093);
			func_110(932909855);
			break;
		case 405586984:
			func_501(405586984);
			func_110(1509509592);
			func_110(-959357075);
			func_110(-1311865656);
			break;
		case 1509509592:
			func_501(1509509592);
			func_110(405586984);
			func_110(-959357075);
			func_110(-1311865656);
			break;
		case -959357075:
			func_501(-959357075);
			func_110(1509509592);
			func_110(405586984);
			func_110(-1311865656);
			break;
		case -1311865656:
			func_501(-1311865656);
			func_110(1509509592);
			func_110(-959357075);
			func_110(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_501(-524145696);
			}
			else
			{
				func_110(-524145696);
			}
			func_110(1626481264);
			func_110(282809459);
			break;
		case 282809459:
			func_501(282809459);
			func_110(1626481264);
			func_110(-524145696);
			break;
		case 1626481264:
			func_501(1626481264);
			func_110(-524145696);
			func_110(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_501(885203519);
			}
			else
			{
				func_110(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_501(-1080627546);
			}
			else
			{
				func_110(-1080627546);
			}
			break;
		case -510945576:
			if (bParam1)
			{
				func_501(-510945576);
			}
			else
			{
				func_110(-510945576);
				func_597(385812466);
				func_597(-1201452352);
			}
			break;
		default:
			if (bParam1)
			{
				func_501(iParam0);
			}
			else
			{
				func_110(iParam0);
			}
			break;
	}
}

void func_176(var uParam0, bool bParam1)
{
	func_598(&(uParam0->f_2506));
	if (is_bit_set(uParam0->f_2506.f_17, 10))
	{
		clear_bit(&(uParam0->f_2506.f_17), 10);
		if (func_599(uParam0))
		{
			func_600(uParam0);
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
		func_601(&(uParam0->f_2506));
		func_602(uParam0->f_2506, 1);
		func_603(&(Global_1952637->f_1675));
		if (func_604(1048576))
		{
			func_379(27, 0, 0, 0, 0);
			func_379(34, 0, 0, 0, 0);
			func_605(0, 1);
			func_606();
			func_607(1048576);
		}
		func_608();
		clear_ped_tasks_immediately(uParam0->f_2506, false, true);
		set_entity_coords(uParam0->f_2506, uParam0->f_2506.f_24, true, false, true, true);
		set_entity_heading(uParam0->f_2506, uParam0->f_2506.f_22);
		if (!func_609(&(uParam0->f_2506), 1))
		{
			_0x9587913b9e772d29(uParam0->f_2506, 0);
		}
		func_610(1, uParam0->f_2506);
		set_gameplay_cam_relative_heading(uParam0->f_2506.f_23, 1f);
		set_gameplay_cam_relative_pitch(0f, 1f);
		_0x2208438012482a1a(uParam0->f_2506, false, false);
		set_player_control(player_id(), true, 0, false);
		_0xae6004120c18df97(uParam0->f_2506, 0, 1);
		func_611(uParam0);
		if (!bParam1)
		{
			func_388(&(uParam0->f_2506.f_2));
		}
	}
	func_612(&(uParam0->f_2506));
	if (func_604(134217728))
	{
		func_607(134217728);
	}
	uParam0->f_2506.f_10 = 1256619963;
	uParam0->f_2506.f_11 = 1256619963;
	uParam0->f_2506.f_17 = 0;
	uParam0->f_2506.f_8 = 0;
}

void func_177(int iParam0, int iParam1)
{
	_0xa6aa9f56bc6cff58(iParam0, iParam1);
	func_613(&(Global_1293346->f_12));
	func_613(&(Global_1293346->f_16));
}

void func_178(var uParam0, int iParam1)
{
	if (does_entity_exist(uParam0->f_4))
	{
		_0x67e21acc5c0c970c(uParam0->f_4, 9, iParam1);
		_0x67e21acc5c0c970c(uParam0->f_4, 10, iParam1);
		_0x67e21acc5c0c970c(uParam0->f_4, 16, iParam1);
		_0x67e21acc5c0c970c(uParam0->f_4, 18, iParam1);
	}
}

void func_179(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_1 = ((*Global_1291106)[iVar0]->f_1 - ((*Global_1291106)[iVar0]->f_1 && iParam0));
}

void func_180()
{
	if (func_614(2, 255))
	{
		return;
	}
	func_615(2);
}

void func_181(bool bParam0)
{
	if (!func_616(70))
	{
		return;
	}
	if (func_616(72))
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
	func_617(72);
}

void func_182(bool bParam0)
{
	_0xc505036a35afd01b(false);
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x4be6c13a45cca8ec(iVar1) == iVar0)
	{
		uVar2 = func_618(iVar1);
		_0xd426e2e3288469d6(&uVar2, &Global_1296859);
		func_619(uVar2);
	}
	func_620(10, bParam0, 0, 0);
}

void func_183(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_41(uParam0, 32))
		{
			func_621(1, bParam2, 0, 0, 0, 0, 0, 0, 0);
			func_34(uParam0, 32);
		}
	}
	else if (func_41(uParam0, 32))
	{
		func_621(0, bParam2, 0, 0, 0, 0, 0, 0, 0);
		func_63(uParam0, 32);
	}
}

void func_184()
{
	if (!Global_1896738->f_383)
	{
	}
	Global_1896738->f_383 = 1;
}

bool func_185(int iParam0, bool bParam1)
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
			func_622("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_274(func_623(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_622("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

int func_186()
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	func_624(2);
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = 0;
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_625();
	func_626(vVar0);
	return 1;
}

void func_187(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_188(int iParam0)
{
	if (!func_627(iParam0))
	{
		func_533(&(Global_1211392->f_1196), iParam0);
	}
}

void func_189(var uParam0)
{
	func_167(uParam0, 39);
	func_167(uParam0, 40);
}

void func_190(bool bParam0)
{
	if (bParam0)
	{
		if (is_bit_set(Global_1957959->f_1, 5))
		{
			clear_bit(&(Global_1957959->f_1), 5);
		}
	}
	else if (!is_bit_set(Global_1957959->f_1, 5))
	{
		set_bit(&(Global_1957959->f_1), 5);
	}
}

void func_191(bool bParam0)
{
	if (!bParam0)
	{
		func_527(19);
	}
	else
	{
		func_526(19);
	}
}

void func_192(var uParam0)
{
	func_628(uParam0);
}

void func_193(var uParam0, var uParam1)
{
	if (!uParam0->f_47)
	{
		return;
	}
	func_114(uParam0, uParam1);
	func_629(0);
	uParam0->f_47 = 0;
}

void func_194(var uParam0)
{
	if (((func_251(uParam0, 3) || func_251(uParam0, 4)) || func_251(uParam0, 5)) || _is_app_running(-1782489369))
	{
		_close_app_by_hash_immediate(-1782489369);
		func_167(uParam0, 3);
		func_167(uParam0, 4);
		func_167(uParam0, 5);
	}
}

bool func_195(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_301(uParam0);
			break;
		case 2:
			if (!_0x354f689c4ffaab37(659548826))
			{
				_0x7c32191d9fb2bdea(659548826);
			}
			break;
		case 3:
			if (!func_385(uParam0))
			{
				return false;
			}
			break;
		case 4:
			if (!_0x354f689c4ffaab37(1684694064))
			{
				_0x7c32191d9fb2bdea(1684694064);
			}
			break;
		case 9:
			if (!_0xfbe782b3165ac8ec(-1916939610) && !_0xfbe782b3165ac8ec(-204674428))
			{
				if (!func_630(uParam0, 0, 1, 255, 0))
				{
					return false;
				}
			}
			break;
		case 11:
			if (!func_631())
			{
				if (func_632(0))
				{
					return false;
				}
				else if (func_633(-113874881, 0, 1, 0) <= 0)
				{
				}
				else
				{
					switch (func_634(3))
					{
						case 0:
							vVar0.x = -1799662290;
							break;
						case 1:
							vVar0.x = 396773658;
							break;
						case 2:
							vVar0.x = 610102849;
							break;
						default:
							vVar0.x = 610102849;
							break;
					}
					vVar0.f_2 = 205718222;
					if (func_635(0, 1, vVar0))
					{
					}
					return false;
				}
			}
			else if (func_440(0, 1) == 0)
			{
				if (func_632(0))
				{
				}
				else
				{
					if (func_636(-880521161, 1))
					{
						vVar0.x = -1799662290;
					}
					else if (func_636(-1227171078, 1))
					{
						vVar0.x = 396773658;
					}
					else if (func_636(-494501205, 1))
					{
						vVar0.x = 610102849;
					}
					else
					{
						func_117(uParam0, 4108, -1);
						return false;
					}
					if (func_635(0, 0, vVar0))
					{
					}
				}
				return false;
			}
			break;
		case 12:
			if (!func_441(uParam0))
			{
				return false;
			}
			break;
	}
	if (!func_327(&(uParam0->f_384.f_318), iParam1, 1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 3:
			if (!func_228(uParam0, 1, 1))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_196(var uParam0)
{
	return func_41(uParam0, 4);
}

void func_197(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam1])))
	{
		iVar0 = net_to_ped(&(uParam0->f_3[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (bParam2)
			{
				if (is_ped_on_mount(iVar0))
				{
					_remove_ped_from_mount(iVar0, true, false);
				}
				iVar1 = _get_rider_of_mount(iVar0, false);
				if (does_entity_exist(iVar1))
				{
					_remove_ped_from_mount(iVar1, true, false);
				}
				delete_ped(&iVar0);
			}
			else
			{
				_0x39a2fc5af55a52b1(iVar0, -1);
				set_ped_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_3[iParam1] = 0;
	func_637(uParam0, iParam1, 0);
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 3)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		iVar0 = net_to_veh(&(uParam0->f_13[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (bParam2)
			{
				func_638(&iVar0);
				delete_vehicle(&iVar0);
			}
			else
			{
				set_vehicle_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_13[iParam1] = 0;
	func_639(uParam0, iParam1, 0);
}

void func_199(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 9)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_20[iParam1])))
	{
		iVar0 = net_to_ent(&(uParam0->f_20[iParam1]));
		if (does_entity_belong_to_this_script(iVar0, true))
		{
			if (is_entity_attached_to_any_object(iVar0))
			{
				detach_entity(iVar0, false, true);
			}
			if (bParam2)
			{
				delete_entity(&iVar0);
			}
			else
			{
				set_entity_as_no_longer_needed(&iVar0);
			}
		}
	}
	uParam0->f_20[iParam1] = 0;
	func_640(uParam0, iParam1, 0);
}

void func_200(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (network_does_network_id_exist(&(uParam0->f_33[iParam1])))
	{
		iVar0 = _0xd08066e00d26c448(&(uParam0->f_33[iParam1]));
		if (_does_propset_exist(iVar0))
		{
			if (bParam2)
			{
				_delete_propset(iVar0, true, true);
			}
			else
			{
				_set_propset_as_no_longer_needed(iVar0);
			}
		}
	}
	uParam0->f_33[iParam1] = 0;
}

void func_201(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_641(uParam1, uParam2, iParam3);
	func_82(uParam0, uParam2, iParam3);
	func_642(uParam2, iParam3);
}

void func_202(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 23)
	{
		return;
	}
	if (!_0x8f4f050054005c27(&(uParam0->f_35), iParam1))
	{
		return;
	}
	_0xb909149f2bb5f6da(&(uParam0->f_35), iParam1);
}

void func_203(var uParam0, int iParam1)
{
	if (&uParam0->f_1348.f_158[iParam1] == 0)
	{
		return;
	}
	_0xd2b9c78537ed5759(&(uParam0->f_1348.f_158[iParam1]));
	uParam0->f_1348.f_158[iParam1] = 0;
	uParam0->f_1348.f_158[iParam1]->f_1 = 0;
}

void func_204(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	_copy_memory(uParam0, &Var0, 9);
}

bool func_205(var uParam0, int iParam1)
{
	func_122(uParam0, 1);
	if (!func_148(uParam0, 1044912895, func_643(iParam1), 0))
	{
		return false;
	}
	return true;
}

bool func_206(var uParam0, int iParam1, var uParam2)
{
	uParam2->f_3 = func_644(func_133(uParam0, -1498016323, iParam1, 0));
	if (uParam2->f_3 > -1 && uParam2->f_3 < 3)
	{
		uParam2->f_4 = func_582(uParam0, -1955134669, iParam1, 0);
		iVar0 = func_150(uParam2->f_3);
		uParam2->f_5 = { func_207(uParam0, -1814448663, iVar0, 0) };
		uParam2->f_8 = func_208(uParam0, 708105482, iVar0, 0);
		return true;
	}
	uParam2->f_2 = func_248(func_133(uParam0, 834889128, iParam1, 0));
	if (uParam2->f_2 > -1 && uParam2->f_2 < 6)
	{
		iVar1 = func_578(uParam2->f_2);
		uParam2->f_5 = { func_207(uParam0, -1731752235, iVar1, 0) };
		uParam2->f_8 = func_208(uParam0, 1054609211, iVar1, 0);
		return true;
	}
	iVar2 = func_250(func_133(uParam0, -880605302, iParam1, 0));
	if (iVar2 > -1 && iVar2 < 5)
	{
		uParam2->f_5 = { uParam0->f_4926.f_210[iVar2]->f_1 };
		uParam2->f_8 = uParam0->f_4926.f_210[iVar2]->f_4;
		return true;
	}
	iVar3 = func_588(func_133(uParam0, -205434160, iParam1, 0));
	if (iVar3 > -1 && iVar3 < 5)
	{
		uParam2->f_5 = { *uParam0->f_4926[iVar3] };
		uParam2->f_8 = uParam0->f_4926[iVar3]->f_6;
		return true;
	}
	uParam2->f_5 = { func_207(uParam0, -1731752235, iParam1, 0) };
	if (!func_209(uParam2->f_5))
	{
		uParam2->f_8 = func_208(uParam0, 1054609211, iParam1, 0);
		return true;
	}
	return false;
}

Vector3 func_207(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_vector(&vVar0, &(uParam0->f_24)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_208(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_float(&uVar0, &(uParam0->f_24)))
	{
		return 0f;
	}
	return uVar0;
}

bool func_209(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_210(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_526(66);
		if (bParam1)
		{
			func_526(69);
		}
	}
	else
	{
		func_527(66);
		func_527(69);
	}
}

bool func_211(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 <= -1 || iParam1 >= 3)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		return true;
	}
	func_639(uParam0, iParam1, 1);
	if (!func_645(uParam0->f_13[iParam1], *uParam2, uParam2->f_1, uParam2->f_4, 1, uParam2->f_5, uParam2->f_6, 0))
	{
		return false;
	}
	if (uParam2->f_7 != 0)
	{
		_0x8c6d9a399126c194(net_to_veh(&(uParam0->f_13[iParam1])), uParam2->f_7);
	}
	func_646(uParam0, iParam1);
	set_model_as_no_longer_needed(*uParam2);
	return true;
}

int func_212(var uParam0, int iParam1)
{
	if (!network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		return 0;
	}
	return net_to_veh(&(uParam0->f_13[iParam1]));
}

void func_213(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_526(82);
		Global_1102219->f_3800 = iParam0;
		Global_1102219->f_3801 = uParam1;
	}
	else
	{
		func_527(82);
	}
}

void func_214(bool bParam0)
{
	if (!bParam0)
	{
		func_527(20);
	}
	else
	{
		func_526(20);
	}
}

void func_215()
{
	func_647(0, 0, 0);
	func_647(1, 0, 0);
	func_647(2, 0, 0);
}

void func_216(bool bParam0)
{
	if (!bParam0)
	{
		func_527(25);
	}
	else
	{
		func_526(25);
	}
}

bool func_217(int iParam0)
{
	return func_648(1, iParam0);
}

void func_218(bool bParam0)
{
	if (!bParam0)
	{
		func_527(18);
	}
	else
	{
		func_526(18);
	}
}

bool func_219(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_649();
	}
	return func_43(64, iParam0);
}

void func_220(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_86(iParam0);
	if (!func_650(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_651(128) && !func_652(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_653() == 4)
	{
		func_527(18);
	}
	func_654(1024);
}

void func_221(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_655(vParam0, uParam3))
	{
		func_656(1, bParam4);
	}
}

bool func_222(int iParam0)
{
	return func_648(48, iParam0);
}

bool func_223(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_222(255))
	{
		func_657(&(Global_1102219->f_3879));
		Global_1102219->f_3879.f_6 = { vParam0 };
		if (does_entity_exist(iParam7))
		{
			Global_1102219->f_3879.f_4 = iParam7;
			Global_1102219->f_3879.f_5 = 3;
		}
		else if (!func_209(vParam4))
		{
			Global_1102219->f_3879.f_1 = { vParam4 };
			Global_1102219->f_3879.f_5 = 2;
		}
		else
		{
			Global_1102219->f_3879 = fParam3;
			Global_1102219->f_3879.f_5 = 1;
		}
		func_658(Global_1102219->f_3879, 36);
		func_526(4);
		func_527(48);
		return true;
	}
	return false;
}

void func_224(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_on_mount(iParam0))
		{
			_remove_ped_from_mount(iParam0, true, false);
		}
	}
}

bool func_225(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (!network_does_network_id_exist(&(uParam0->f_13[iParam1])))
	{
		return false;
	}
	if (!network_has_control_of_network_id(&(uParam0->f_13[iParam1])))
	{
		return false;
	}
	*iParam2 = net_to_veh(&(uParam0->f_13[iParam1]));
	return true;
}

void func_226(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 3)
	{
		return;
	}
	uVar0 = &uParam0->f_1348.f_176[iParam1];
	func_659(uParam0->f_1348.f_176[iParam1]);
	uParam0->f_1348.f_176[iParam1] = uVar0;
}

int func_227(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_660();
	iVar1 = 0;
	if (!func_661(&(Global_1952637->f_1556), &bVar0, iParam1, -1, 1, 0, 0, 0, 8))
	{
		return 0;
	}
	func_663(-1, 1, 1, bParam3, 1, func_662(iParam1));
	func_379(27, 0, 0, 0, 0);
	func_379(34, 0, 0, 0, 0);
	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 2;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (bParam4)
	{
		if (bVar0)
		{
			func_664(&(Global_1952637->f_1675), iParam0, 1, 8, 1, 1, 1, 1);
		}
		else
		{
			func_664(&(Global_1952637->f_1675), iParam0, 1, -1, 1, 1, 1, 1);
		}
	}
	else if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		if (bVar0)
		{
			func_379(1, iVar1, iVar2, 0, 0);
		}
		else
		{
			func_379(1, iVar1, iVar2, 0, 0);
			func_379(4, 0, 0, 0, 0);
			func_379(5, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar2 |= 1;
		func_379(1, iVar1, iVar2, iParam0, 0);
	}
	return 1;
}

bool func_228(var uParam0, bool bParam1, bool bParam2)
{
	if (func_665(16))
	{
		if (bParam2)
		{
			if (func_196(uParam0))
			{
				return false;
			}
		}
		return true;
	}
	Var0 = { func_667(889965687, func_666(1), 1034665895, 1) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		func_117(uParam0, 4096, -1);
		return false;
	}
	bVar4 = true;
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (!func_668(uParam0, iVar5, bParam1))
		{
			bVar4 = false;
		}
		iVar5++;
	}
	if (!bVar4)
	{
		return false;
	}
	if (func_196(uParam0))
	{
		return false;
	}
	iVar5 = 0;
	while (iVar5 < 10)
	{
		if (&uParam0->f_384.f_296[iVar5] == 0)
		{
		}
		else if (!func_328(uParam0->f_4, &(uParam0->f_384.f_296[iVar5]), 0, func_669(iVar5), 0, 1, 0, 0, 1, 1, 1))
		{
			func_117(uParam0, func_670(iVar5), -1);
		}
		iVar5++;
	}
	func_379(2, 0, 0, 0, 0);
	func_379(34, 0, 0, 0, 0);
	func_379(27, 0, 0, 0, 0);
	func_671(16);
	if (!func_672(uParam0, -1343026476))
	{
		func_673(16);
	}
	return false;
}

void func_229(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_674(Global_1952637->f_2843);
		func_675(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_676(iParam3))
	{
		func_677(0);
	}
	if (func_604(32768))
	{
		func_678(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_679(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_679(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_379(2, 0, iVar0, 0, 0);
		func_379(4, 0, 0, 0, 0);
		func_379(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_379(2, 0, iVar0, iParam0, 0);
	}
	func_680();
}

bool func_230(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 <= -1 || iParam3 >= 3)
	{
		return true;
	}
	if (!func_681(iParam1, 1))
	{
		return true;
	}
	iVar0 = func_633(iParam1, 0, 0, 0);
	if (iVar0 >= iParam2)
	{
		return true;
	}
	if (!uParam0->f_1348.f_176[iParam3]->f_1)
	{
		func_682(&(uParam0->f_1348.f_176[iParam3]->f_2.f_18));
		func_684(&(uParam0->f_1348.f_176[iParam3]->f_2.f_18), func_683((iParam2 - iVar0)));
	}
	return func_630(uParam0, iParam3, 1, 255, 0);
}

bool func_231()
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

bool func_232(var uParam0)
{
	if (!is_thread_active(uParam0->f_1348.f_36, false))
	{
		return true;
	}
	if (!_0x30bed53646c86d11(uParam0->f_1348.f_36))
	{
		_0x7de4643157ad646c(uParam0->f_1348.f_36);
	}
	return false;
}

bool func_233(var uParam0)
{
	if (is_thread_active(uParam0->f_1348.f_36, false))
	{
		return true;
	}
	request_script_with_name_hash(-192136878);
	if (!has_script_with_name_hash_loaded(-192136878))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0 = 0;
	Var0.f_1 = uParam0->f_4926.f_252;
	Var0.f_2 = uParam0->f_4926.f_255;
	Var0.f_4 = -1125105727;
	Var0.f_3 = -628138157;
	Var0.f_5 = 7;
	uParam0->f_1348.f_36 = start_new_script_with_name_hash_and_args(-192136878, &Var0, 6, 6010);
	set_script_with_name_hash_as_no_longer_needed(-192136878);
	return false;
}

void func_234(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 || iParam1);
}

int func_235(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((*Global_1248240)[iVar0]->f_559 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_236(var uParam0, bool bParam1)
{
	if (!func_251(uParam0, 19))
	{
		vVar0 = -1;
		vVar0.f_1 = -1;
		vVar0.f_2 = -1;
		vVar0.f_4 = 10;
		vVar0.f_15 = 4;
		vVar0.f_15.f_5 = 4;
		vVar0.f_25 = 1;
		vVar0.f_28 = 2;
		vVar0.f_28.f_1 = -1;
		vVar0.f_28.f_1.f_1 = -1;
		vVar0.f_31 = 493038497;
		vVar0.f_31.f_1 = 493038497;
		vVar0 = { uParam0->f_1348.f_137 };
		vVar0.f_2 = func_685(64445474);
		if (!func_686(&vVar0, uParam0->f_4926.f_255, uParam0->f_4926.f_252))
		{
			func_117(uParam0, 4072, -1);
			return false;
		}
		func_112(uParam0, 19);
	}
	if (!func_407(uParam0))
	{
		return false;
	}
	if (bParam1)
	{
		func_687(uParam0->f_1348.f_139);
	}
	if (!func_688(uParam0->f_1348.f_139))
	{
		return false;
	}
	return true;
}

bool func_237(var uParam0)
{
	return func_689(*uParam0, 1);
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1 || !func_237(uParam0))
	{
		func_386(uParam0);
	}
}

bool func_239(var uParam0, float fParam1)
{
	if (!func_237(uParam0))
	{
		return false;
	}
	if (func_690(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_240(var uParam0)
{
	if (uParam0->f_1348.f_26 == 0 && uParam0->f_1348.f_27 == 0)
	{
		return;
	}
	func_169(uParam0);
	func_691(uParam0, 0);
	uParam0->f_1348.f_28 = -1;
}

void func_241(var uParam0)
{
	switch (uParam0->f_12)
	{
		case 0:
		case 1:
			_network_clock_time_override(18, 30, 0, 0, false);
			func_308(uParam0);
			break;
		default:
			_network_clock_time_override(19, 30, 0, 0, true);
			if (uParam0->f_12 < 9)
			{
				func_308(uParam0);
			}
			break;
	}
}

bool func_242(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	Var38.f_2 = -1;
	Var38.f_3 = -1;
	Var38.f_4 = -1;
	Var50 = -1612834106;
	Var50.f_1 = -1;
	Var50.f_12 = 1;
	Var50.f_13 = 1;
	Var50.f_17 = 1;
	Var50.f_18 = 1;
	Var50.f_19 = 10208;
	Var50.f_22 = -1;
	Var50.f_23 = -1;
	Var50.f_27 = 15;
	bVar81 = true;
	if (uParam1->f_1348.f_26 > 0 && iParam2 != uParam1->f_1348.f_28)
	{
		func_240(uParam1);
	}
	if (!func_205(uParam1, iParam2))
	{
		func_117(uParam1, func_692(iParam2), -1);
		return false;
	}
	switch (uParam1->f_1348.f_26)
	{
		case 0:
			uParam1->f_1348.f_28 = iParam2;
			func_691(uParam1, 1);
			break;
		case 1:
			if (uParam1->f_1348.f_27 < func_143(uParam1, 1264015228, 0, 0))
			{
				bVar81 = false;
				iVar35 = func_133(uParam1, 995627660, uParam1->f_1348.f_27, 0);
				iVar36 = func_248(iVar35);
				if (iVar36 != -1)
				{
					func_295(uParam1, &(uParam1->f_4926.f_182[iVar36]));
				}
				else if (iVar35 != 1862763509)
				{
				}
			}
			if (uParam1->f_1348.f_27 < func_143(uParam1, -1624024105, 0, 0))
			{
				bVar81 = false;
				iVar24 = func_133(uParam1, -1431424055, uParam1->f_1348.f_27, 0);
				iVar25 = func_644(iVar24);
				if (iVar25 != -1)
				{
					func_295(uParam1, &(uParam1->f_4926.f_178[iVar25]));
				}
			}
			if (uParam1->f_1348.f_27 < func_143(uParam1, -1158229860, 0, 0))
			{
				bVar81 = false;
				iVar1 = func_133(uParam1, -537413059, uParam1->f_1348.f_27, 0);
				iVar2 = func_583(iVar1);
				if (iVar2 != -1)
				{
					func_295(uParam1, &(uParam1->f_4926.f_97[iVar2]));
				}
			}
			uParam1->f_1348.f_27++;
			if (bVar81)
			{
				func_691(uParam1, 2);
			}
			break;
		case 2:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, -1216470460, 0, 0))
			{
				func_691(uParam1, 3);
				return false;
			}
			iVar0 = func_133(uParam1, 542060787, uParam1->f_1348.f_27, 0);
			func_175(iVar0, 1, 0);
			uParam1->f_1348.f_27++;
			break;
		case 3:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, -363924619, 0, 0))
			{
				func_691(uParam1, 4);
				return false;
			}
			iVar48 = func_133(uParam1, 385829566, uParam1->f_1348.f_27, 0);
			iVar49 = func_693(iVar48);
			if (iVar49 <= -1 || iVar49 >= 14)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			if (_does_volume_exist(&(uParam1->f_164[iVar49])))
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			func_122(uParam1, 1);
			if (!func_148(uParam1, 1086629639, iVar48, 0))
			{
				func_117(uParam1, func_694(iVar49), -1);
				return false;
			}
			iVar78 = func_143(uParam1, 322471868, 0, 0);
			iVar79 = 0;
			while (iVar79 < iVar78)
			{
				if (!func_695(uParam1, iVar79, &Var50))
				{
					func_117(uParam1, func_696(iVar49), -1);
					return false;
				}
				Var50.f_11 = iVar78 > 1;
				if (!func_697(uParam1, iVar49, &Var50))
				{
					func_117(uParam1, func_698(iVar49), -1);
					return false;
				}
				iVar79++;
			}
			func_699(uParam1, iVar49);
			uParam1->f_1348.f_27++;
			break;
		case 4:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, -1158229860, 0, 0))
			{
				func_691(uParam1, 5);
				return false;
			}
			iVar1 = func_133(uParam1, -537413059, uParam1->f_1348.f_27, 0);
			iVar2 = func_583(iVar1);
			if (iVar2 <= -1 || iVar2 >= 9)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			if (!func_700(uParam1, iVar1, &vVar4, &vVar7))
			{
				vVar4 = { uParam1->f_4926.f_97[iVar2]->f_1 };
				vVar7 = { uParam1->f_4926.f_97[iVar2]->f_4 };
			}
			uParam1->f_24.f_2 = -1945641171;
			uParam1->f_24.f_3 = iVar1;
			if (!_datafile_get_bool(&iVar11, &(uParam1->f_24)))
			{
				iVar11 = uParam1->f_4926.f_97[iVar2]->f_7;
			}
			if (network_does_network_id_exist(&(uParam0->f_20[iVar2])))
			{
				bVar47 = (bParam3 || func_584(uParam1, 1633794952, iVar1, 0));
				if (bVar47)
				{
					if (!func_701(uParam0, iVar2, &iVar3))
					{
						network_request_control_of_network_id(&(uParam0->f_20[iVar2]));
						return false;
					}
					set_entity_coords(iVar3, vVar4, true, false, true, true);
					set_entity_rotation(iVar3, vVar7, 2, true);
					if (func_584(uParam1, -1945641171, iVar1, 0))
					{
						_0x9587913b9e772d29(iVar3, 0);
					}
				}
			}
			else if (!func_702(uParam0, iVar2, &(uParam1->f_4926.f_97[iVar2]), vVar4, vVar7, iVar11, 1))
			{
				return false;
			}
			uParam1->f_1348.f_27++;
			break;
		case 5:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, -823434583, 0, 0))
			{
				func_691(uParam1, 6);
				return false;
			}
			iVar12 = func_133(uParam1, 1909274527, uParam1->f_1348.f_27, 0);
			iVar13 = func_585(iVar12);
			if (iVar13 <= -1 || iVar13 >= 1)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			if (!func_703(uParam0, iVar13, &(uParam1->f_4926.f_170[iVar13]), uParam1->f_4926.f_170[iVar13]->f_1, uParam1->f_4926.f_170[iVar13]->f_4, uParam1->f_4926.f_170[iVar13]->f_5, uParam1->f_4926.f_170[iVar13]->f_6))
			{
				return false;
			}
			uParam1->f_1348.f_27++;
			break;
		case 6:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, 1357611604, 0, 0))
			{
				func_691(uParam1, 7);
				return false;
			}
			iVar14 = func_133(uParam1, -138435977, uParam1->f_1348.f_27, 0);
			iVar15 = func_586(iVar14);
			if (iVar15 <= -1 || iVar15 >= 1)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			if (!func_704(uParam0, uParam1, iVar15, &uVar16))
			{
				func_117(uParam1, func_705(iVar15), -1);
				return false;
			}
			if (!func_706(uParam1, iVar15, &uVar16))
			{
				func_117(uParam1, func_707(iVar15), -1);
				return false;
			}
			uParam1->f_1348.f_27++;
			break;
		case 7:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, -1624024105, 0, 0))
			{
				func_691(uParam1, 8);
				return false;
			}
			iVar24 = func_133(uParam1, -1431424055, uParam1->f_1348.f_27, 0);
			iVar25 = func_644(iVar24);
			if (iVar25 <= -1 || iVar25 >= 3)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			if (!func_708(uParam1, iVar25, iVar24, &uVar26))
			{
				func_117(uParam1, func_709(iVar25), -1);
				return false;
			}
			if (network_does_network_id_exist(&(uParam0->f_13[iVar25])))
			{
				bVar47 = (bParam3 || func_584(uParam1, -1049132473, iVar24, 0));
				if (bVar47)
				{
					if (!func_225(uParam0, iVar25, &iVar34))
					{
						network_request_control_of_network_id(&(uParam0->f_13[iVar25]));
						return false;
					}
					if (is_ped_in_vehicle(uParam1->f_4, iVar34, false))
					{
					}
					else
					{
						_set_entity_coords_and_heading(iVar34, vVar4, fVar10, true, false, true);
						_0x9587913b9e772d29(iVar34, 0);
					}
				}
			}
			else
			{
				uParam0->f_13.f_6 = uParam0->f_20.f_12;
				if (!func_211(uParam0, iVar25, &uVar26))
				{
					return false;
				}
			}
			uParam1->f_1348.f_27++;
			break;
		case 8:
			if (uParam1->f_1348.f_27 >= func_143(uParam1, 1264015228, 0, 0))
			{
				func_691(uParam1, 9);
				return false;
			}
			iVar35 = func_133(uParam1, 995627660, uParam1->f_1348.f_27, 0);
			if (iVar35 == 1862763509)
			{
				uParam1->f_1348.f_27++;
				return false;
			}
			iVar36 = func_248(iVar35);
			if (iVar35 == -1006371048)
			{
				if (!func_206(uParam1, iVar35, &Var38))
				{
					func_117(uParam1, func_710(iParam2), -1);
					return false;
				}
				iVar37 = _0xf49f14462f0ae27c(uParam1->f_2);
				if (does_entity_exist(iVar37))
				{
					bVar47 = (bParam3 || func_584(uParam1, -1403000387, iVar35, 0));
					if (bVar47)
					{
						if (!func_711(uParam1->f_4, iVar37, 0))
						{
							if (!func_712(uParam0, &Var38, iVar37))
							{
								func_117(uParam1, func_713(iParam2), -1);
								return false;
							}
						}
					}
				}
				else if (bParam4)
				{
					iVar37 = func_714(Var38.f_5, Var38.f_8, 0, 0, 1, 100, 0, 1);
					if (!does_entity_exist(iVar37))
					{
						return false;
					}
				}
			}
			else
			{
				if (iVar36 <= -1 || iVar36 >= 6)
				{
					uParam1->f_1348.f_27++;
					return false;
				}
				if (!func_206(uParam1, iVar35, &Var38))
				{
					func_117(uParam1, func_715(iVar36, iParam2), -1);
					return false;
				}
				if (network_does_network_id_exist(&(uParam0->f_3[iVar36])))
				{
					bVar47 = (bParam3 || func_584(uParam1, -1403000387, iVar35, 0));
					if (bVar47)
					{
						if (!func_716(uParam0, iVar36, &iVar37))
						{
							network_request_control_of_network_id(&(uParam0->f_3[iVar36]));
							return false;
						}
						if (!func_712(uParam0, &Var38, iVar37))
						{
							func_117(uParam1, func_717(iVar36, iParam2), -1);
							return false;
						}
					}
				}
				else
				{
					Var38 = &uParam1->f_4926.f_182[iVar36];
					Var38.f_1 = uParam1->f_4926.f_182[iVar36]->f_1;
					if (!func_718(uParam0, uParam1, iVar36, &Var38, 1))
					{
						return false;
					}
					iVar80 = func_250(func_133(uParam1, -880605302, iVar35, 0));
					if (iVar80 > -1 && iVar80 < 5)
					{
						iVar37 = func_249(uParam0, iVar36);
						func_253(uParam1, iVar37, -76381094, iVar80);
					}
				}
			}
			uParam1->f_1348.f_27++;
			break;
		case 9:
			if (bParam5)
			{
				if (uParam1->f_1348.f_27 < func_143(uParam1, 1264015228, 0, 0))
				{
					bVar81 = false;
					iVar35 = func_133(uParam1, 995627660, uParam1->f_1348.f_27, 0);
					if (iVar35 == 1862763509)
					{
						uParam1->f_1348.f_27++;
						return false;
					}
					iVar36 = func_248(iVar35);
					if (iVar36 <= -1 || iVar36 >= 6)
					{
						uParam1->f_1348.f_27++;
						return false;
					}
					iVar37 = func_249(uParam0, iVar36);
					if (!_0xa0bc8faed8cfeb3c(iVar37))
					{
						return false;
					}
				}
				uParam1->f_1348.f_27++;
			}
			if (bVar81)
			{
				func_691(uParam1, 10);
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_243(var uParam0, bool bParam1)
{
	iVar0 = _0xf49f14462f0ae27c(uParam0->f_2);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (func_251(uParam0, 12))
	{
		if (bParam1)
		{
			_0xba8818212633500a(iVar0, 0, 0);
			set_ped_config_flag(iVar0, 301, false);
			func_719(8192);
			func_719(16384);
			func_167(uParam0, 12);
		}
	}
	else if (!bParam1)
	{
		_0xba8818212633500a(iVar0, 0, 1);
		set_ped_config_flag(iVar0, 301, true);
		func_720(8192);
		func_720(16384);
		func_112(uParam0, 12);
	}
}

void func_244(int iParam0)
{
	func_721(iParam0, 0, 100);
	func_721(iParam0, 1, 100);
}

void func_245(var uParam0, var uParam1)
{
	_0xfb0e622b401884d3(-448983936);
	func_340(uParam0, uParam1, 0);
	func_722(&(uParam1->f_4808));
}

void func_246(var uParam0, var uParam1)
{
	func_82(uParam0, uParam1, 6);
	func_167(uParam1, 41);
	func_167(uParam1, 42);
	func_167(uParam1, 43);
	func_167(uParam1, 44);
	func_167(uParam1, 45);
	func_167(uParam1, 46);
	func_167(uParam1, 48);
	func_167(uParam1, 49);
	func_167(uParam1, 50);
	func_167(uParam1, 51);
	func_167(uParam1, 52);
	func_723(&(uParam1->f_4808.f_35));
}

void func_247(var uParam0)
{
	Var0 = 10;
	Var0.f_1.f_1 = -2128726980;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -2128726980;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	*uParam0 = { Var0 };
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case -831954077:
			return 0;
		case 1905310431:
			return 1;
		case 2132950130:
			return 2;
		case -940322714:
			return 3;
		case 2047865662:
			return 4;
		case -1703925284:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_249(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return 0;
	}
	if (!network_does_network_id_exist(&(uParam0->f_3[iParam1])))
	{
		return 0;
	}
	return net_to_ped(&(uParam0->f_3[iParam1]));
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case -570702679:
			return 1;
		case 1461274070:
			return 0;
		case 171424190:
			return 2;
		case 1345238536:
			return 3;
		case 1889157432:
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_251(var uParam0, int iParam1)
{
	return _0x8f4f050054005c27(&(uParam0->f_1348), iParam1);
}

bool func_252(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 <= -1 || iParam2 >= 5)
	{
		return false;
	}
	if (_does_scenario_point_exist(&(uParam1->f_35[iParam2])))
	{
		return true;
	}
	if (&uParam1->f_4926.f_210[iParam2] == 0)
	{
		return false;
	}
	if (uParam1->f_4926.f_210[iParam2]->f_6 == 2107893685)
	{
		uParam1->f_35[iParam2] = _find_closest_active_scenario_point_of_type(uParam1->f_4926.f_210[iParam2]->f_1, &(uParam1->f_4926.f_210[iParam2]), 0.25f, 0, false);
		if (!_does_scenario_point_exist(&(uParam1->f_35[iParam2])))
		{
			return false;
		}
	}
	else if (uParam1->f_4926.f_210[iParam2]->f_7 > -1 && uParam1->f_4926.f_210[iParam2]->f_7 < 9)
	{
		if (!network_does_network_id_exist(&(uParam0->f_20[uParam1->f_4926.f_210[iParam2]->f_7])))
		{
			return false;
		}
		iVar0 = net_to_ent(&(uParam0->f_20[uParam1->f_4926.f_210[iParam2]->f_7]));
		uParam1->f_35[iParam2] = _0xd508fa229f1c4900(iVar0, get_offset_from_entity_given_world_coords(iVar0, uParam1->f_4926.f_210[iParam2]->f_1), &(uParam1->f_4926.f_210[iParam2]), 0.25f);
		if (!_does_scenario_point_exist(&(uParam1->f_35[iParam2])))
		{
			return false;
		}
		func_724(uParam1, iParam2, uParam1->f_4926.f_210[iParam2]->f_5);
	}
	else
	{
		uParam1->f_35[iParam2] = create_scenario_point(&(uParam1->f_4926.f_210[iParam2]), uParam1->f_4926.f_210[iParam2]->f_1, uParam1->f_4926.f_210[iParam2]->f_4, 0, 0, 1);
		if (!_does_scenario_point_exist(&(uParam1->f_35[iParam2])))
		{
			return false;
		}
		func_724(uParam1, iParam2, uParam1->f_4926.f_210[iParam2]->f_5);
	}
	return true;
}

bool func_253(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_4808.f_86.f_31)
	{
		if (&uParam0->f_4808.f_86[iVar0] == iParam1)
		{
			func_725(uParam0, iVar0);
		}
		else
		{
			iVar0++;
		}
	}
	if (uParam0->f_4808.f_86.f_31 >= 10)
	{
		return false;
	}
	uParam0->f_4808.f_86[uParam0->f_4808.f_86.f_31] = iParam1;
	uParam0->f_4808.f_86[uParam0->f_4808.f_86.f_31]->f_1 = iParam2;
	uParam0->f_4808.f_86[uParam0->f_4808.f_86.f_31]->f_2 = iParam3;
	uParam0->f_4808.f_86.f_31++;
	return true;
}

void func_254(var uParam0)
{
	if (uParam0->f_4808.f_86.f_31 <= 0)
	{
		return;
	}
	iVar0 = (uParam0->f_4808.f_86.f_31 - 1);
	while (iVar0 >= 0)
	{
		if (!does_entity_exist(&(uParam0->f_4808.f_86[iVar0])))
		{
			func_725(uParam0, iVar0);
		}
		else if (!_0xa0bc8faed8cfeb3c(&(uParam0->f_4808.f_86[iVar0])))
		{
		}
		else
		{
			switch (uParam0->f_4808.f_86[iVar0]->f_1)
			{
				case -76381094:
					if (func_726(uParam0, iVar0))
					{
						func_725(uParam0, iVar0);
					}
					break;
				default:
					break;
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_255(var uParam0)
{
	if (_0x354f689c4ffaab37(-448983936))
	{
		return;
	}
	if (does_blip_exist(&(uParam0->f_41.f_11[0])))
	{
		set_blip_name_from_text_file(&(uParam0->f_41.f_11[0]), "DISCOVERABLE_NAME_HORLEY_MP");
	}
	if (uParam0->f_1348.f_32 == 1)
	{
		func_727(uParam0, 2142399675);
	}
	_0x7c32191d9fb2bdea(-448983936);
}

bool func_256()
{
	return Global_1211392->f_1197 > 0;
}

void func_257(int iParam0)
{
	if (func_627(iParam0))
	{
		func_728(&(Global_1211392->f_1196), iParam0);
	}
}

void func_258(var uParam0)
{
	Var0.f_4 = 2;
	Var0.f_5 = uParam0;
	_0x31010318ba9897ac(&uVar6, player_id());
	func_729(&Var0, uVar6);
}

void func_259(var uParam0, var uParam1)
{
	if (uParam0->f_47)
	{
		return;
	}
	func_114(uParam0, uParam1);
	func_629(1);
	uParam0->f_47 = 1;
}

void func_260()
{
	Global_1904651->f_8685 = 1;
}

void func_261(int iParam0)
{
	Global_1296543->f_48 = (Global_1296543->f_48 || iParam0);
}

void func_262(bool bParam0)
{
	func_542(65, bParam0);
}

void func_263(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896738->f_3948 = get_game_timer();
	Global_1896738->f_3948.f_1 = iParam0;
}

void func_264(bool bParam0)
{
	func_542(44, !bParam0);
}

void func_265(var uParam0, bool bParam1)
{
	iVar0 = _0xf49f14462f0ae27c(uParam0->f_2);
	if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
	{
		if (get_ped_config_flag(iVar0, 412, true) != bParam1)
		{
			set_ped_config_flag(iVar0, 412, bParam1);
		}
		if (_0xea8f168a76a0b9bc(uParam0->f_2, iVar0, 5, 1) != bParam1)
		{
			_0xa3db37edf9a74635(uParam0->f_2, iVar0, 5, 1, bParam1);
		}
	}
}

void func_266(bool bParam0)
{
	if (bParam0)
	{
		func_617(1);
	}
	func_617(0);
	set_bit(&(Global_1957959->f_1), 0);
}

void func_267(bool bParam0)
{
	func_542(59, !bParam0);
}

void func_268(bool bParam0)
{
	func_542(45, !bParam0);
}

void func_269(var uParam0)
{
	bVar0 = false;
	if (func_289(uParam0->f_1348.f_145))
	{
		func_34(uParam0, 8);
		bVar0 = true;
	}
	else if (!uParam0->f_17)
	{
		bVar0 = true;
	}
	else if (func_400(uParam0))
	{
		bVar0 = true;
	}
	else if (func_289(uParam0->f_1348.f_3194.f_43))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		uParam0->f_1348.f_146 = uParam0->f_14;
		return;
	}
	if (!func_251(uParam0, 28))
	{
		if (func_730(1))
		{
			uParam0->f_1348.f_145 = func_622("TF_LOW_STAMINA_CORE_START", 10000, 0, 0, 0, 1);
			func_112(uParam0, 28);
			return;
		}
	}
	if (!func_251(uParam0, 30))
	{
		if (func_730(2))
		{
			uParam0->f_1348.f_145 = func_622("TF_MP_LOW_DEAD_EYE_CORE_START", 10000, 0, 0, 0, 1);
			func_112(uParam0, 30);
			return;
		}
	}
	if (!func_251(uParam0, 29))
	{
		if (func_730(0) && !is_entity_dead(uParam0->f_4))
		{
			uParam0->f_1348.f_145 = func_622("TF_LOW_HEALTH_CORE_START", 10000, 0, 0, 0, 1);
			func_112(uParam0, 29);
			return;
		}
	}
	if (func_251(uParam0, 37))
	{
		uParam0->f_1348.f_145 = func_622("MPINTRO_HELP_HORSE_DEAD_RESPAWN", 10000, 0, 0, 0, 1);
		func_167(uParam0, 37);
		return;
	}
	else if (_network_is_player_index_valid(uParam0->f_2) && !does_entity_exist(_0xf49f14462f0ae27c(uParam0->f_2)))
	{
		if (absi(get_time_difference(uParam0->f_1348.f_146, uParam0->f_14)) >= 30000)
		{
			uParam0->f_1348.f_145 = func_622("MPINTRO_HELP_HORSE_WHISTLE_RESPAWN", 10000, 0, 0, 0, 1);
			return;
		}
	}
	else
	{
		uParam0->f_1348.f_146 = uParam0->f_14;
	}
	if (!func_251(uParam0, 34))
	{
		if (Global_1145091[&Global_1296859] >= 2)
		{
			uParam0->f_1348.f_145 = func_622("MPINTRO_HELP_RANK_UP", 10000, 0, 0, 0, 1);
			func_112(uParam0, 34);
			return;
		}
	}
}

void func_270(var uParam0, var uParam1)
{
	if (!func_716(uParam0, 1, &iVar0))
	{
		return;
	}
	switch (uParam1->f_4808)
	{
		case 0:
			break;
		case 1:
			func_731(uParam0, uParam1, iVar0);
			break;
		case 2:
			func_732(uParam0, uParam1, iVar0);
			break;
		case 3:
			func_733(uParam0, uParam1, iVar0);
			break;
		case 4:
			func_734(uParam0, uParam1, iVar0);
			break;
		case 5:
			func_735(uParam0, uParam1, iVar0);
			break;
		default:
			break;
	}
}

void func_271(var uParam0, var uParam1)
{
	iVar0 = func_249(uParam0, 4);
	if (uParam1->f_4808.f_35 >= 1)
	{
		func_736(iVar0, &(uParam1->f_4808.f_35.f_4), 1500, uParam1->f_4);
		if (func_346(uParam1->f_4, iVar0, 8f, 1, 1))
		{
			func_736(uParam1->f_4, &(uParam1->f_1348.f_318), 1500, iVar0);
		}
	}
	func_737(uParam0, uParam1);
	switch (uParam1->f_4808.f_35)
	{
		case 0:
			if (!func_251(uParam1, 41))
			{
				return;
			}
			if (!func_304(uParam0, uParam1, 6, func_738(uParam1), "pl_Boss_Tent_Idle", 0, 0, 1, 0))
			{
				return;
			}
			if (!does_entity_exist(uParam1->f_1348.f_158[0]->f_1))
			{
				return;
			}
			if (!func_523(uParam0, uParam1, 6, &(uParam1->f_4808.f_35.f_2), &(uParam1->f_4808.f_35.f_3)))
			{
				return;
			}
			set_blocking_of_non_temporary_events(iVar0, true);
			iVar1 = func_370(uParam0, 8);
			set_can_climb_on_entity(iVar1, false);
			set_anim_scene_entity(uParam1->f_4808.f_35.f_2, "MP_map01x", iVar1, 0);
			set_anim_scene_entity(uParam1->f_4808.f_35.f_2, "p_anim_armypup02x", uParam1->f_1348.f_158[0]->f_1, 0);
			set_anim_scene_entity(uParam1->f_4808.f_35.f_2, "Gang_Boss", iVar0, 0);
			start_anim_scene(uParam1->f_4808.f_35.f_2);
			set_ped_can_be_targetted(iVar0, false);
			set_ped_drops_weapons_when_dead(iVar0, false);
			set_ped_config_flag(iVar0, 26, true);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			remove_all_ped_weapons(iVar0, true, true);
			set_ped_relationship_group_hash(iVar0, uParam1->f_1348.f_15);
			func_112(uParam1, 42);
			func_420(uParam1, 1);
			break;
		case 1:
			func_739(uParam0, uParam1, 6, "pl_Boss_Exit_Tent");
			if (!func_251(uParam1, 43))
			{
				return;
			}
			if (func_740(uParam0, uParam1, 6, "pl_Boss_Exit_Tent", 1) && func_369(uParam0, uParam1, 21, 1))
			{
				func_741(iVar0, 1);
				func_420(uParam1, 2);
			}
			break;
		case 2:
			func_739(uParam0, uParam1, 6, "pl_Boss_Stand_Idle");
			if (func_352(uParam0, 21) || func_311(uParam0, uParam1, 6, "s_Boss_Stand_Idle"))
			{
				func_368(21, 0, 0);
				func_238(&(uParam1->f_4808.f_35.f_37), 0);
				if ((func_239(&(uParam1->f_4808.f_35.f_37), 1f) || func_311(uParam0, uParam1, 6, "s_Boss_Stand_Idle")) && func_740(uParam0, uParam1, 6, "pl_Boss_Stand_Idle", 1))
				{
					if (uParam1->f_1348.f_3 == 1)
					{
						uParam1->f_4808.f_35.f_44 = _0x0eb78c2b156635b1(-1612834106, -5240.378f, -3851.364f, -3.292692f, 0f, 0f, 0f, 1f, 1f, 1.731476f);
						uParam1->f_4808.f_35.f_45 = _0x0eb78c2b156635b1(-1612834106, -5241.665f, -3850.436f, -3.292692f, 0f, 0f, 15.44693f, 1f, 1f, 1.731476f);
					}
					func_112(uParam1, 44);
					func_420(uParam1, 3);
				}
			}
			break;
		case 3:
			func_739(uParam0, uParam1, 6, "pl_Boss_Pull_Map");
			func_739(uParam0, uParam1, 6, func_742(-1));
			func_739(uParam0, uParam1, 6, func_742(0));
			func_739(uParam0, uParam1, 6, func_742(1));
			func_739(uParam0, uParam1, 6, func_742(2));
			func_739(uParam0, uParam1, 6, func_742(3));
			if (func_338(get_entity_coords(iVar0, true, false), uParam1->f_5) > uParam1->f_4808.f_35.f_42)
			{
				if (func_311(uParam0, uParam1, 6, "s_Boss_Stand_Idle"))
				{
					func_238(&(uParam1->f_4808.f_35.f_37), 0);
					if (((func_239(&(uParam1->f_4808.f_35.f_37), 3.25f) && uParam1->f_4808.f_35.f_40 >= 0) && uParam1->f_4808.f_35.f_40 <= 3) && func_740(uParam0, uParam1, 6, func_742(uParam1->f_4808.f_35.f_40), 1))
					{
						func_187(&(uParam1->f_4808.f_35.f_37));
						uParam1->f_4808.f_35.f_40++;
					}
				}
			}
			if (!func_251(uParam1, 45))
			{
				return;
			}
			if (func_740(uParam0, uParam1, 6, "pl_Boss_Pull_Map", 1) && func_369(uParam0, uParam1, 22, 1))
			{
				uParam1->f_4808.f_35.f_41 = -1;
				func_743(uParam1->f_4, &iVar0, &(uParam1->f_4808.f_35.f_29), &(uParam1->f_4808.f_35.f_30), "MPINTRO_UC_BOSS_TAKE_MAP", "MPINTRO_UC_GANG_THREATEN", uParam1->f_4808.f_35.f_42, uParam1->f_4808.f_35.f_43, -163964935, 130948705, "MPINTRO_ILO_GANG_BOSS");
				func_744(uParam1->f_4808.f_35.f_29, 0, 1, 1);
				func_363(uParam1->f_4808.f_35.f_29, 1, 1);
				func_744(uParam1->f_4808.f_35.f_30, 0, 1, 1);
				func_363(uParam1->f_4808.f_35.f_30, 1, 1);
				func_420(uParam1, 4);
			}
			break;
		case 4:
			func_739(uParam0, uParam1, 6, "pl_Boss_Give_Map");
			func_739(uParam0, uParam1, 6, "pl_Boss_Idle_Exit");
			func_238(&(uParam1->f_4808.f_35.f_37), 0);
			if (func_239(&(uParam1->f_4808.f_35.f_37), 2.1f) && !func_251(uParam1, 46))
			{
				set_entity_invincible(iVar0, false);
				set_ped_can_be_targetted(iVar0, true);
				set_ped_config_flag(iVar0, 26, false);
				set_ped_relationship_group_hash(iVar0, 1269650476);
				_0xae6004120c18df97(iVar0, 0, 1);
				_0xae6004120c18df97(iVar0, 1, 1);
				func_112(uParam1, 46);
			}
			else if (!func_251(uParam1, 46))
			{
				func_278(8);
			}
			if (is_ped_on_mount(uParam1->f_4))
			{
				uParam1->f_1348.f_343 = get_mount(uParam1->f_4);
			}
			if (((func_346(uParam1->f_4, iVar0, 6f, 1, 1) && func_745(uParam1->f_4, uParam1->f_1348.f_343, 1080033280)) && func_418(uParam1->f_1348.f_343, 0)) && func_346(uParam1->f_4, uParam1->f_1348.f_343, 3f, 1, 1))
			{
				_0x9f9a829c6751f3c7(uParam1->f_2, 28, 1);
			}
			if (!func_239(&(uParam1->f_4808.f_35.f_37), 5.35f))
			{
				if (func_346(get_player_ped(uParam1->f_2), iVar0, uParam1->f_4808.f_35.f_42, 1, 1) && (func_746(uParam1->f_2, iVar0) || is_player_free_aiming_at_entity(uParam1->f_2, iVar0)))
				{
					func_744(uParam1->f_4808.f_35.f_29, 0, 1, 1);
					func_363(uParam1->f_4808.f_35.f_29, 1, 1);
					func_744(uParam1->f_4808.f_35.f_30, func_239(&(uParam1->f_4808.f_35.f_37), 2.1f), 1, 1);
					func_363(uParam1->f_4808.f_35.f_30, 1, 1);
					if (func_358(uParam1->f_4808.f_35.f_30))
					{
						if (func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
						{
							if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))
							{
								func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
							}
							else if (is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0))
							{
								func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
							}
							else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
							{
								func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
							}
							else
							{
								func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
							}
						}
						else
						{
							func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
						}
					}
					if (func_749(uParam1->f_4808.f_35.f_30, 1))
					{
						clear_entity_last_damage_entity(iVar0);
						_0xe98d55c5983f2509(iVar0);
						func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
						func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
						set_entity_invincible(iVar0, false);
						set_ped_can_be_targetted(iVar0, true);
						set_ped_config_flag(iVar0, 26, false);
						set_ped_relationship_group_hash(iVar0, 1269650476);
						_0xae6004120c18df97(iVar0, 0, 1);
						_0xae6004120c18df97(iVar0, 1, 1);
						if (((((func_418(iVar0, 0) && !_0x3bdfcf25b58b0415(iVar0)) && !func_367(uParam1->f_4, -1073489615)) && !func_367(uParam1->f_4, -2055662961)) && !func_367(uParam1->f_4, 716706914)) && !func_367(uParam1->f_4, 242628503))
						{
							set_ped_config_flag(iVar0, 21, true);
							set_ped_config_flag(iVar0, 322, true);
							func_741(iVar0, 1);
							if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) > 0)
							{
								task_shoot_at_entity(uParam1->f_4, iVar0, 1500, 1566631136, 0);
							}
							else if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) <= 0)
							{
								task_melee(uParam1->f_4, iVar0, 1744450544, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
							}
							else if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
							{
								task_melee(uParam1->f_4, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
							}
							else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
							{
								open_sequence_task(&iVar2);
								task_swap_weapon(0, 1, 0, 0, 0);
								task_melee(0, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
								close_sequence_task(iVar2);
								task_perform_sequence(uParam1->f_4, iVar2);
								clear_sequence_task(&iVar2);
								_0x2208438012482a1a(uParam1->f_4, false, false);
							}
							else
							{
								task_aim_at_entity(uParam1->f_4, iVar0, 2500, 0, 0);
							}
						}
						uParam1->f_4808.f_35.f_41 = 1;
					}
				}
				else
				{
					if (func_751(uParam1->f_4808.f_35.f_29, 0))
					{
						func_744(uParam1->f_4808.f_35.f_29, 0, 1, 1);
						func_363(uParam1->f_4808.f_35.f_29, 0, 1);
					}
					if (func_751(uParam1->f_4808.f_35.f_30, 0))
					{
						func_744(uParam1->f_4808.f_35.f_30, 0, 1, 1);
						func_363(uParam1->f_4808.f_35.f_30, 0, 1);
					}
				}
			}
			else if (uParam1->f_4808.f_35.f_41 == -1)
			{
				uParam1->f_4808.f_35.f_41 = func_752(uParam1->f_2, iVar0, &(uParam1->f_4808.f_35.f_29), &(uParam1->f_4808.f_35.f_30), uParam1->f_4808.f_35.f_42, 0, 0);
			}
			func_739(uParam0, uParam1, 6, "pl_Boss_Map_Idle");
			if (((func_352(uParam0, 22) || func_311(uParam0, uParam1, 6, "s_Boss_Map_Idle")) || uParam1->f_4808.f_35.f_41 != -1) || (is_ped_performing_melee_action(uParam1->f_4, 32768, 0) && is_ped_performing_melee_action(iVar0, 32768, 0)))
			{
				if ((((uParam1->f_4808.f_35.f_41 != -1 || _0x3bdfcf25b58b0415(iVar0)) || (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))) || func_740(uParam0, uParam1, 6, "pl_Boss_Map_Idle", 1)) || (is_ped_performing_melee_action(uParam1->f_4, 32768, 0) && is_ped_performing_melee_action(iVar0, 32768, 0)))
				{
					func_112(uParam1, 46);
					func_187(&(uParam1->f_4808.f_35.f_37));
					func_420(uParam1, 5);
				}
			}
			break;
		case 5:
			request_waypoint_recording(uParam1->f_4926.f_36[3]);
			request_waypoint_recording(uParam1->f_4926.f_36[4]);
			func_739(uParam0, uParam1, 6, "pl_Boss_Give_Map");
			func_739(uParam0, uParam1, 6, "pl_Boss_Idle_Exit");
			if (is_ped_on_mount(uParam1->f_4))
			{
				uParam1->f_1348.f_343 = get_mount(uParam1->f_4);
			}
			if ((func_418(uParam1->f_1348.f_343, 0) && func_346(uParam1->f_1348.f_343, iVar0, 6f, 1, 1)) && func_745(uParam1->f_4, uParam1->f_1348.f_343, 1080033280))
			{
				_0x9f9a829c6751f3c7(uParam1->f_2, 28, 1);
			}
			if (func_358(uParam1->f_4808.f_35.f_30))
			{
				if (func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
				{
					if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else if (is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0))
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
					}
				}
				else
				{
					func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
				}
			}
			if (uParam1->f_4808.f_35.f_41 == -1)
			{
				uParam1->f_4808.f_35.f_41 = func_752(uParam1->f_2, iVar0, &(uParam1->f_4808.f_35.f_29), &(uParam1->f_4808.f_35.f_30), uParam1->f_4808.f_35.f_42, 0, 0);
			}
			if (uParam1->f_4808.f_35.f_41 == 0)
			{
				clear_entity_last_damage_entity(iVar0);
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
				if ((func_745(uParam1->f_4, uParam1->f_1348.f_343, 1080033280) && func_753(uParam0, uParam1)) && func_754(uParam1))
				{
					func_755(uParam0, uParam1, 6, uParam1->f_4, "mp_player_m_1", "pl_Boss_Give_Map", 1069379748, 1, 0, 20000, -1082130432);
					func_187(&(uParam1->f_4808.f_35.f_37));
					func_420(uParam1, 6);
				}
			}
			else if ((((((uParam1->f_4808.f_35.f_41 == 1 || is_entity_on_fire(iVar0)) || _0x3bdfcf25b58b0415(iVar0)) || (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))) || has_entity_been_damaged_by_entity(iVar0, uParam1->f_4, 1, 1)) || _0x9c81338b2e62ce0a(uParam1->f_2, iVar0, 1000)) || (is_ped_performing_melee_action(uParam1->f_4, 32768, 0) && is_ped_performing_melee_action(iVar0, 32768, 0)))
			{
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
				if (func_754(uParam1))
				{
					clear_entity_last_damage_entity(iVar0);
					_0xe98d55c5983f2509(iVar0);
					func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
					func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
					if ((((func_418(iVar0, 0) && !func_367(uParam1->f_4, -1073489615)) && !func_367(uParam1->f_4, -2055662961)) && !func_367(uParam1->f_4, 716706914)) && !func_367(uParam1->f_4, 242628503))
					{
						set_ped_config_flag(iVar0, 21, true);
						set_ped_config_flag(iVar0, 322, true);
						func_741(iVar0, 1);
						if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) > 0)
						{
							task_shoot_at_entity(uParam1->f_4, iVar0, 1500, 1566631136, 0);
						}
						else if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) <= 0)
						{
							task_melee(uParam1->f_4, iVar0, 1744450544, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
						}
						else if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
						{
							task_melee(uParam1->f_4, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
						}
						else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
						{
							open_sequence_task(&iVar2);
							task_swap_weapon(0, 1, 0, 0, 0);
							task_melee(0, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
							close_sequence_task(iVar2);
							task_perform_sequence(uParam1->f_4, iVar2);
							clear_sequence_task(&iVar2);
							_0x2208438012482a1a(uParam1->f_4, false, false);
						}
						else
						{
							task_aim_at_entity(uParam1->f_4, iVar0, 2500, 0, 0);
						}
					}
					func_419(uParam0, uParam1);
					func_187(&(uParam1->f_4808.f_35.f_37));
					func_420(uParam1, 11);
				}
			}
			break;
		case 6:
			if (func_756(uParam0, uParam1, 6, "mp_player_m_1") || func_311(uParam0, uParam1, 6, "s_Boss_nomap_Idle"))
			{
				set_anim_scene_entity(uParam1->f_4808.f_35.f_2, "MP_player_m_1", uParam1->f_4, 0);
				if (func_311(uParam0, uParam1, 6, "s_Boss_nomap_Idle") || func_740(uParam0, uParam1, 6, "pl_Boss_Give_Map", 1))
				{
					_0xe98d55c5983f2509(iVar0);
					func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
					func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
					func_112(uParam1, 48);
					func_420(uParam1, 7);
				}
			}
			break;
		case 7:
			func_739(uParam0, uParam1, 6, "pl_Boss_Stand_Idle");
			func_739(uParam0, uParam1, 6, "pl_Boss_Idle_Exit");
			if (func_311(uParam0, uParam1, 6, "s_Boss_nomap_Idle"))
			{
				func_199(uParam0, 8, 1);
				if (func_740(uParam0, uParam1, 6, "pl_Boss_Idle_Exit", 1))
				{
					func_425(uParam1->f_384.f_317, 1, 0, 0, 1, 0, 0);
					set_anim_scene_bool(uParam1->f_4808.f_35.f_2, "b_Breakout", true, false);
					func_199(uParam0, 8, 1);
					func_112(uParam1, 49);
					clear_entity_last_damage_entity(iVar0);
					_0xe98d55c5983f2509(iVar0);
					func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
					func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
					func_510(uParam1->f_4808.f_35.f_44);
					func_510(uParam1->f_4808.f_35.f_45);
					func_187(&(uParam1->f_4808.f_35.f_37));
					func_420(uParam1, 9);
				}
			}
			break;
		case 8:
			func_739(uParam0, uParam1, 6, "pl_Boss_Idle_Exit");
			request_waypoint_recording(uParam1->f_4926.f_36[3]);
			request_waypoint_recording(uParam1->f_4926.f_36[4]);
			if (is_ped_on_mount(uParam1->f_4))
			{
				uParam1->f_1348.f_343 = get_mount(uParam1->f_4);
			}
			if ((func_418(uParam1->f_1348.f_343, 0) && func_346(uParam1->f_1348.f_343, iVar0, 6f, 1, 1)) && func_745(uParam1->f_4, uParam1->f_1348.f_343, 1080033280))
			{
				_0x9f9a829c6751f3c7(uParam1->f_2, 28, 1);
			}
			if (func_358(uParam1->f_4808.f_35.f_30))
			{
				if (func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
				{
					if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else if (is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0))
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_KILL_GANG_BOSS", 1);
					}
					else
					{
						func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
					}
				}
				else
				{
					func_748(uParam1->f_4808.f_35.f_30, "MPINTRO_UC_GANG_THREATEN", 1);
				}
			}
			if (uParam1->f_4808.f_35.f_41 == -1)
			{
				uParam1->f_4808.f_35.f_41 = func_752(uParam1->f_2, iVar0, &(uParam1->f_4808.f_35.f_29), &(uParam1->f_4808.f_35.f_30), uParam1->f_4808.f_35.f_42, 0, 0);
			}
			if ((uParam1->f_4808.f_35.f_41 == 0 && func_753(uParam0, uParam1)) && func_754(uParam1))
			{
				if (func_740(uParam0, uParam1, 6, "pl_Boss_Idle_Exit", 1))
				{
					clear_entity_last_damage_entity(iVar0);
					_0xe98d55c5983f2509(iVar0);
					func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
					func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
					set_anim_scene_bool(uParam1->f_4808.f_35.f_2, "b_Breakout", true, false);
					func_199(uParam0, 8, 1);
					func_187(&(uParam1->f_4808.f_35.f_37));
					func_420(uParam1, 9);
				}
			}
			else if ((((((uParam1->f_4808.f_35.f_41 == 1 || _0x3bdfcf25b58b0415(iVar0)) || is_entity_on_fire(iVar0)) || (_is_ped_hogtied(iVar0) || _is_ped_lassoed(iVar0))) || has_entity_been_damaged_by_entity(iVar0, uParam1->f_4, 1, 1)) || _0x9c81338b2e62ce0a(uParam1->f_2, iVar0, 2000)) && func_754(uParam1))
			{
				clear_entity_last_damage_entity(iVar0);
				_0xe98d55c5983f2509(iVar0);
				func_421(&(uParam1->f_4808.f_35.f_29), 1, 1);
				func_421(&(uParam1->f_4808.f_35.f_30), 1, 1);
				if ((((func_418(iVar0, 0) && !func_367(uParam1->f_4, -1073489615)) && !func_367(uParam1->f_4, -2055662961)) && !func_367(uParam1->f_4, 716706914)) && !func_367(uParam1->f_4, 242628503))
				{
					set_ped_config_flag(iVar0, 21, true);
					set_ped_config_flag(iVar0, 322, true);
					func_741(iVar0, 1);
					if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) > 0)
					{
						task_shoot_at_entity(uParam1->f_4, iVar0, 1500, 1566631136, 0);
					}
					else if ((((is_player_free_aiming_at_entity(uParam1->f_2, iVar0) && !func_746(uParam1->f_2, iVar0)) && func_747(uParam1->f_4, 0, 1, 0) != -1569615261) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) <= 0)
					{
						task_melee(uParam1->f_4, iVar0, 1744450544, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
					}
					else if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578)
					{
						task_melee(uParam1->f_4, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
					}
					else if (_is_weapon_melee(_0xc71fe230a513c30f(uParam1->f_4, 0)) && func_747(uParam1->f_4, 0, 1, 0) == -1569615261)
					{
						open_sequence_task(&iVar2);
						task_swap_weapon(0, 1, 0, 0, 0);
						task_melee(0, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
						close_sequence_task(iVar2);
						task_perform_sequence(uParam1->f_4, iVar2);
						clear_sequence_task(&iVar2);
						_0x2208438012482a1a(uParam1->f_4, false, false);
					}
					else
					{
						task_aim_at_entity(uParam1->f_4, iVar0, 2500, 0, 0);
					}
				}
				func_419(uParam0, uParam1);
				func_187(&(uParam1->f_4808.f_35.f_37));
				func_420(uParam1, 11);
			}
			break;
		case 9:
			request_waypoint_recording(uParam1->f_4926.f_36[3]);
			request_waypoint_recording(uParam1->f_4926.f_36[4]);
			func_112(uParam1, 50);
			stop_ped_speaking(iVar0, true);
			set_ped_can_be_targetted(iVar0, false);
			set_ped_config_flag(iVar0, 26, true);
			set_ped_relationship_group_hash(iVar0, uParam1->f_1348.f_15);
			if (func_314(uParam0, uParam1, 6, 0.975f))
			{
				func_419(uParam0, uParam1);
				func_112(uParam1, 47);
				func_77(uParam1, 9);
				func_420(uParam1, 10);
			}
			break;
		case 11:
			func_419(uParam0, uParam1);
			func_112(uParam1, 47);
			if ((((func_418(iVar0, 0) && !func_757(iVar0, -1519143300)) && !func_757(iVar0, 242628503)) && !func_367(uParam1->f_4, 1588557457)) && !func_367(uParam1->f_4, 65267791))
			{
				task_hands_up(iVar0, -1, uParam1->f_4, -1, false);
				_0x2208438012482a1a(iVar0, false, false);
			}
			if (((((((((func_418(iVar0, 0) && !func_367(uParam1->f_4, -2055662961)) && !func_367(uParam1->f_4, 1588557457)) && !func_367(uParam1->f_4, 65267791)) && !is_ped_performing_melee_action(uParam1->f_4, 32768, 0)) && !func_251(uParam1, 52)) && (((func_758(func_747(uParam1->f_4, 0, 1, 0)) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) <= 0) && is_player_free_aiming_at_entity(uParam1->f_2, iVar0)) || _is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && func_346(uParam1->f_4, iVar0, 6f, 1, 1)) && is_control_pressed(0, 130948705))
			{
				set_ped_config_flag(uParam1->f_4, 159, true);
				set_ped_config_flag(iVar0, 21, true);
				set_ped_config_flag(iVar0, 159, true);
				func_741(iVar0, 1);
				disable_all_control_actions(0);
				set_player_control(uParam1->f_2, false, 256, false);
				clear_ped_tasks(uParam1->f_4, 1, 0);
				if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))
				{
					task_melee(uParam1->f_4, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
				}
				else
				{
					task_melee(uParam1->f_4, iVar0, 1744450544, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
				}
				_0x2208438012482a1a(uParam1->f_4, false, false);
				func_386(&(uParam1->f_4808.f_35.f_37));
				func_238(&(uParam1->f_1348.f_350), 0);
			}
			else if (func_367(uParam1->f_4, -2055662961) && !func_239(&(uParam1->f_1348.f_350), 6f))
			{
				disable_all_control_actions(0);
				if (is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, false, 256, false);
				}
			}
			func_238(&(uParam1->f_4808.f_35.f_37), 0);
			if (func_239(&(uParam1->f_4808.f_35.f_37), 3.5f))
			{
				func_420(uParam1, 10);
			}
			else if (is_entity_dead(iVar0))
			{
				if (!is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, true, 0, false);
				}
				func_112(uParam1, 51);
				func_420(uParam1, 12);
			}
			break;
		case 10:
			func_419(uParam0, uParam1);
			func_112(uParam1, 47);
			if (((((func_418(iVar0, 0) && !func_757(iVar0, 242628503)) && get_is_waypoint_recording_loaded(uParam1->f_4926.f_36[3])) && get_is_waypoint_recording_loaded(uParam1->f_4926.f_36[4])) && !func_367(uParam1->f_4, -2055662961)) && !is_ped_performing_melee_action(uParam1->f_4, 32768, 0))
			{
				iVar11 = func_759(uParam1->f_4, iVar0, 1f);
				if (iVar11 == 3)
				{
					Var3 = { *uParam1->f_4926.f_36[4] };
				}
				else if (iVar11 == 2)
				{
					Var3 = { *uParam1->f_4926.f_36[3] };
				}
				clear_ped_tasks(iVar0, 1, 0);
				open_sequence_task(&iVar2);
				task_follow_waypoint_recording(0, &Var3, 0, 9740, -1, 0, 0, -1);
				task_smart_flee_ped(0, uParam1->f_4, 300f, 360000, 0, 1077936128, 0);
				close_sequence_task(iVar2);
				task_perform_sequence(iVar0, iVar2);
				clear_sequence_task(&iVar2);
				_0x2208438012482a1a(iVar0, false, false);
				func_77(uParam1, 9);
			}
			else if ((func_418(iVar0, 0) && !func_757(iVar0, -1519143300)) && !func_757(iVar0, 242628503))
			{
				task_hands_up(iVar0, -1, uParam1->f_4, -1, false);
				_0x2208438012482a1a(iVar0, false, false);
			}
			else if (!func_757(iVar0, 242628503))
			{
			}
			if (((((((((func_418(iVar0, 0) && !func_367(uParam1->f_4, -2055662961)) && !func_367(uParam1->f_4, 1588557457)) && !func_367(uParam1->f_4, 65267791)) && !is_ped_performing_melee_action(uParam1->f_4, 32768, 0)) && !func_251(uParam1, 52)) && (((func_758(func_747(uParam1->f_4, 0, 1, 0)) && get_ammo_in_ped_weapon(uParam1->f_4, func_747(uParam1->f_4, 0, 1, 0)) <= 0) && is_player_free_aiming_at_entity(uParam1->f_2, iVar0)) || _is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))) && func_747(uParam1->f_4, 0, 1, 0) != 2055893578) && func_346(uParam1->f_4, iVar0, 6f, 1, 1)) && is_control_pressed(0, 130948705))
			{
				set_ped_config_flag(uParam1->f_4, 159, true);
				set_ped_config_flag(iVar0, 21, true);
				set_ped_config_flag(iVar0, 159, true);
				func_741(iVar0, 1);
				disable_all_control_actions(0);
				set_player_control(uParam1->f_2, false, 256, false);
				clear_ped_tasks(uParam1->f_4, 1, 0);
				if (_is_weapon_melee(func_747(uParam1->f_4, 0, 1, 0)))
				{
					task_melee(uParam1->f_4, iVar0, -1623521035, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
				}
				else
				{
					task_melee(uParam1->f_4, iVar0, 1744450544, 1, 1, func_750(func_346(uParam1->f_4, iVar0, 3f, 1, 1), 1f, (1f + 0.35f)), 0, -1082130432);
				}
				_0x2208438012482a1a(uParam1->f_4, false, false);
				func_386(&(uParam1->f_4808.f_35.f_37));
				func_238(&(uParam1->f_1348.f_350), 0);
			}
			else if (!func_251(uParam1, 52) && (func_367(uParam1->f_4, -2055662961) && !func_239(&(uParam1->f_1348.f_350), 6f)))
			{
				disable_all_control_actions(0);
				if (is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, false, 256, false);
				}
			}
			func_238(&(uParam1->f_4808.f_35.f_37), 0);
			if ((((func_338(uParam1->f_5, get_entity_coords(iVar0, true, false)) >= 15f || func_239(&(uParam1->f_4808.f_35.f_37), 5f)) || is_entity_dead(iVar0)) || _is_ped_hogtied(iVar0)) || _is_ped_lassoed(iVar0))
			{
				if (func_418(iVar0, 0))
				{
					stop_ped_speaking(iVar0, true);
					set_ped_can_be_targetted(iVar0, false);
					set_ped_config_flag(iVar0, 26, true);
					set_ped_relationship_group_hash(iVar0, uParam1->f_1348.f_15);
					func_112(uParam1, 50);
				}
				if ((func_367(uParam1->f_4, -2055662961) || is_ped_performing_melee_action(uParam1->f_4, 32768, 0)) && !func_251(uParam1, 52))
				{
					clear_ped_tasks(uParam1->f_4, 1, 0);
				}
				if (!is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, true, 0, false);
				}
				func_77(uParam1, 9);
				func_112(uParam1, 52);
			}
			if ((func_338(uParam1->f_5, get_entity_coords(iVar0, true, false)) >= 50f || _is_ped_hogtied(iVar0)) || _is_ped_lassoed(iVar0))
			{
				stop_ped_speaking(iVar0, true);
				set_ped_can_be_targetted(iVar0, false);
				set_ped_config_flag(iVar0, 26, true);
				set_ped_relationship_group_hash(iVar0, uParam1->f_1348.f_15);
				func_112(uParam1, 50);
				if (func_367(uParam1->f_4, -2055662961) || is_ped_performing_melee_action(uParam1->f_4, 32768, 0))
				{
					clear_ped_tasks(uParam1->f_4, 1, 0);
				}
				if (!is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, true, 0, false);
				}
				set_ped_keep_task(iVar0, true);
				func_420(uParam1, 13);
			}
			else if (is_entity_dead(iVar0))
			{
				func_112(uParam1, 51);
				if (func_367(uParam1->f_4, -2055662961) || is_ped_performing_melee_action(uParam1->f_4, 32768, 0))
				{
					clear_ped_tasks(uParam1->f_4, 1, 0);
				}
				if (!is_player_control_on(uParam1->f_2))
				{
					set_player_control(uParam1->f_2, true, 0, false);
				}
				func_420(uParam1, 13);
			}
			break;
		case 12:
			if (func_418(iVar0, 0) && has_entity_been_damaged_by_entity(iVar0, uParam1->f_4, 1, 1))
			{
				func_760(iVar0, 0, 0);
			}
			func_112(uParam1, 52);
			if ((is_entity_dead(iVar0) || _is_ped_hogtied(iVar0)) || _is_ped_lassoed(iVar0))
			{
				func_510(uParam1->f_4808.f_35.f_44);
				func_510(uParam1->f_4808.f_35.f_45);
				func_420(uParam1, 13);
			}
			break;
		case 13:
			iVar1 = func_370(uParam0, 8);
			if (is_entity_dead(iVar0))
			{
				if (func_346(iVar0, iVar1, 5f, 0, 1) && !func_251(uParam1, 48))
				{
					_0x18ff3110cf47115d(iVar0, 2, false);
				}
				else
				{
					_0x18ff3110cf47115d(iVar0, 2, true);
					func_197(uParam0, 4, 0);
				}
			}
			else
			{
				func_197(uParam0, 4, 0);
			}
			break;
		default:
			break;
	}
}

void func_272(var uParam0, var uParam1, var uParam2)
{
	if (func_251(uParam2, 1))
	{
		if (uParam2->f_1348.f_29 != -1)
		{
			func_761(uParam2);
			uParam2->f_1348.f_29 = -1;
		}
		return;
	}
	if (func_118((*uParam1)[uParam2->f_1], 8))
	{
		return;
	}
	if (uParam2->f_1348.f_29 != uParam2->f_12)
	{
		func_762(uParam2, uParam2->f_12);
	}
	if (uParam2->f_1348.f_30 == 0)
	{
		return;
	}
	if (_does_volume_exist(&(uParam2->f_164[0])))
	{
		return;
	}
	func_122(uParam2, 1);
	if (!func_148(uParam2, 1086629639, uParam2->f_1348.f_31, 0))
	{
		return;
	}
	Var0 = -1612834106;
	Var0.f_1 = -1;
	Var0.f_12 = 1;
	Var0.f_13 = 1;
	Var0.f_17 = 1;
	Var0.f_18 = 1;
	Var0.f_19 = 10208;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_27 = 15;
	if (uParam2->f_1348.f_32 > -1 && uParam2->f_1348.f_32 < 6)
	{
		if (!network_does_network_id_exist(&(uParam0->f_3[uParam2->f_1348.f_32])))
		{
			return;
		}
		iVar30 = func_249(uParam0, uParam2->f_1348.f_32);
		if (uParam2->f_1348.f_32 == 1)
		{
			if (_0x354f689c4ffaab37(-448983936))
			{
				iVar29 = 2142399675;
			}
			else
			{
				iVar29 = 1846008709;
			}
		}
		Var0.f_11 = 0;
		iVar28 = 1;
	}
	else
	{
		iVar28 = func_143(uParam2, 322471868, 0, 0);
		Var0.f_11 = iVar28 > 1;
		iVar29 = -403018353;
	}
	bVar31 = true;
	iVar32 = 0;
	while (iVar32 < iVar28)
	{
		if (!func_695(uParam2, iVar32, &Var0))
		{
			bVar31 = false;
		}
		else
		{
			if (does_entity_exist(iVar30))
			{
				Var0.f_2 = { get_entity_coords(iVar30, true, false) };
			}
			if (!func_697(uParam2, 0, &Var0))
			{
				bVar31 = false;
			}
			else
			{
				iVar32++;
			}
		}
	}
	if (does_entity_exist(iVar30))
	{
		_0x7c00cfc48a782dc0(&(uParam2->f_164[0]), iVar30, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (bVar31)
	{
		func_763(uParam2, &(uParam2->f_164[0]), iVar29, 0, 0);
	}
	else
	{
		func_80(uParam2, 0);
	}
}

void func_273(var uParam0, var uParam1)
{
	if (func_251(uParam1, 2))
	{
		if (uParam1->f_1348.f_33 != -1)
		{
			uParam1->f_1348.f_33 = -1;
			uParam1->f_1348.f_34 = 0;
		}
		return;
	}
	if (uParam1->f_1348.f_33 == uParam1->f_12)
	{
		return;
	}
	uParam1->f_1348.f_33 = uParam1->f_12;
	func_122(uParam1, 1);
	if (!func_205(uParam1, uParam1->f_1348.f_33))
	{
		func_117(uParam1, func_764(uParam1->f_1348.f_33), -1);
		return;
	}
	uParam1->f_1348.f_34 = func_133(uParam1, -1854440291, 0, 0);
	func_122(uParam1, 1);
	iVar0 = func_765(func_133(uParam1, -1346868298, uParam1->f_1348.f_34, 0));
	iVar2 = 0;
	if (func_584(uParam1, -1731140266, uParam1->f_1348.f_34, 0))
	{
		iVar2 |= 1;
	}
	if (func_584(uParam1, 1032837903, uParam1->f_1348.f_34, 0))
	{
		iVar2 |= 2;
	}
	iVar2 |= 4;
	switch (iVar0)
	{
		case -940387254:
			func_468(uParam1);
			break;
		case 293773700:
			func_766(uParam0, uParam1, uParam1->f_1348.f_34, &Var3);
			Var3.f_6 = { func_207(uParam1, 1894780099, uParam1->f_1348.f_34, 0) };
			func_658(Var3, 87);
			func_767(uParam1, &Var3, iVar2);
			break;
		case 23117795:
			func_766(uParam0, uParam1, uParam1->f_1348.f_34, &Var12);
			Var12.f_6.f_9 = -432403087;
			Var12.f_6.f_6 = { func_207(uParam1, 1894780099, uParam1->f_1348.f_34, 0) };
			fVar1 = func_208(uParam1, 914581656, uParam1->f_1348.f_34, 0);
			if (fVar1 >= 1f)
			{
				Var12.f_16 = 1;
				Var12.f_6 = { fVar1, fVar1, fVar1 };
			}
			Var12.f_17.f_9 = -432403087;
			Var12.f_17.f_6 = { Var12.f_6.f_6 };
			fVar1 = func_208(uParam1, 256145798, uParam1->f_1348.f_34, 0);
			Var12.f_17 = { fVar1, fVar1, fVar1 };
			Var42 = { Var12 };
			Var42.f_6 = { func_207(uParam1, -505199224, uParam1->f_1348.f_34, 0) };
			func_768(Var12, 87);
			func_769(Var42, 87);
			func_770(uParam1, &Var12, &Var42, iVar2);
			break;
		case 389920711:
			func_771(uParam1, iVar2);
			break;
		default:
			break;
	}
}

bool func_274(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_275(int iParam0, int iParam1)
{
	if (!func_274(iParam0))
	{
		return;
	}
	if (!func_772(iParam0, iParam1))
	{
		func_533((*(*Global_1134390)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

bool func_276(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = get_mount(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (does_entity_exist(iParam1))
	{
		if (iVar0 != iParam1)
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!_is_ped_getting_into_a_mount_seat(iParam0, true))
		{
			return false;
		}
	}
	return true;
}

bool func_277(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 <= -1 || iParam2 >= 14)
	{
		return false;
	}
	if (!_does_volume_exist(&(uParam0->f_164[iParam2])))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam1, &(uParam0->f_164[iParam2]), true, iParam3);
}

void func_278(int iParam0)
{
	Global_1296676 = 1;
	Global_1296676->f_2 = (Global_1296676->f_2 || iParam0);
}

int func_279(var uParam0)
{
	if (func_251(uParam0, 33))
	{
		return 1;
	}
	if (!func_251(uParam0, 33))
	{
		func_71(uParam0);
		if (func_341(uParam0, -1754791715, 10000, 0, 0))
		{
			func_112(uParam0, 33);
			return 1;
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -781631220;
		case 1:
			return 1708045337;
		case 2:
			return 1166612791;
		case 3:
			return 74872959;
		default:
			break;
	}
	return -1;
}

bool func_281(int iParam0)
{
	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_773(iVar1))
	{
		if (Global_1071686->f_19648.f_24 && !func_774(iParam0))
		{
			return false;
		}
		return (is_bit_set(&(Global_1071686->f_19648[iVar1]), iVar2) || is_bit_set(&(Global_39.f_110[iVar1]), iVar2));
	}
	return is_bit_set(&(Global_39.f_110[iVar1]), iVar2);
}

int func_282(var uParam0, int iParam1, int iParam2, vector3 vParam3)
{
	if (does_entity_exist(uParam0->f_1348.f_158[iParam1]->f_1))
	{
		return 1;
	}
	if (&uParam0->f_1348.f_158[iParam1] == 0)
	{
		uParam0->f_1348.f_158[iParam1] = _0x6f3068258a499e52(iParam2, vParam3, 15);
	}
	if (_0x1ff441d7954f8709(&(uParam0->f_1348.f_158[iParam1])))
	{
		uParam0->f_1348.f_158[iParam1]->f_1 = _0x4735e2a4bb83d9da(&(uParam0->f_1348.f_158[iParam1]));
		if (does_entity_exist(uParam0->f_1348.f_158[iParam1]->f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	return (*Global_1887339)[iParam0]->f_21;
}

void func_284(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return;
	}
	func_776(&(uParam0->f_164[iParam1]), &(uParam0->f_164[iParam1]->f_5));
}

void func_285(var uParam0, var uParam1)
{
	if (uParam1->f_645 >= 14)
	{
		return;
	}
	if (!(*uParam1)[uParam1->f_645]->f_44)
	{
		return;
	}
	if (func_777(4))
	{
		return;
	}
	iVar0 = func_91(uParam1->f_645);
	if (iVar0 == 0)
	{
		uParam1->f_645++;
		return;
	}
	iVar1 = func_778(-55206167, func_666(1), -1990194462, 1, 0, 0);
	iVar2 = func_779(uParam1->f_645);
	switch (func_781((*uParam1)[uParam1->f_645], iVar0, 1, 255, func_780(uParam1->f_645)))
	{
		case 1:
			break;
		case 2:
			if (iVar1 >= iVar2)
			{
			}
			(*uParam1)[uParam1->f_645]->f_45 = 1;
			uParam1->f_645++;
			break;
		case 3:
			func_117(uParam0, func_782(uParam1->f_645), -1);
			break;
		default:
			break;
	}
}

void func_286(bool bParam0)
{
	if (bParam0)
	{
		_uitutorial_set_rpg_icon_visibility(3, 2);
		_uitutorial_set_rpg_icon_visibility(2, 2);
		func_783(3);
	}
	else
	{
		_uitutorial_set_rpg_icon_visibility(3, 0);
		_uitutorial_set_rpg_icon_visibility(2, 0);
		func_784(3);
	}
}

bool func_287(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_47)
	{
		return false;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 14)
	{
		if (uParam0[iVar2] == 0)
		{
		}
		else
		{
			_0x785177e4d57d7389(iParam1, uParam0[iVar2], (*uParam0)[iVar2]->f_1, 0, -1);
			iVar0 = _0xc08e804c91f47c80(iParam1, uParam0[iVar2]);
			if (iVar0 > (*uParam0)[iVar2]->f_2)
			{
				uParam0->f_44 = (uParam0->f_44 + (iVar0 - (*uParam0)[iVar2]->f_2));
				(*uParam0)[iVar2]->f_2 = iVar0;
			}
			if ((*uParam0)[iVar2]->f_2 >= (*uParam0)[iVar2]->f_1)
			{
			}
		}
		iVar2++;
	}
	if (does_entity_exist(uParam0->f_46))
	{
		if (!_is_ped_hogtying(iParam2))
		{
			uParam0->f_46 = 0;
			uParam0->f_44++;
			uParam0->f_45++;
		}
	}
	else if (_is_ped_hogtying(iParam2))
	{
		uParam0->f_46 = func_785(iParam2, 0);
		if (does_entity_exist(uParam0->f_46) && !is_entity_dead(uParam0->f_46))
		{
		}
		else
		{
			uParam0->f_46 = 0;
		}
	}
	if (uParam0->f_45 >= 4)
	{
		bVar1 = true;
	}
	if (uParam0->f_43 == 0 && uParam0->f_44 > 0)
	{
		uParam0->f_43 = func_622("STORY_COOP_FAIL_LAW_WARN", 10000, 0, 0, 0, 1);
	}
	if (uParam0->f_44 > 8)
	{
		bVar1 = true;
	}
	if (func_786(iParam1, 1, 0, 1))
	{
		return true;
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

void func_288(var uParam0)
{
	if (func_251(uParam0, 23))
	{
		return;
	}
	uParam0->f_1348.f_147 = uParam0->f_14;
	func_112(uParam0, 23);
}

bool func_289(int iParam0)
{
	iVar0 = 6;
	if (func_787(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
	}
	return iVar0 != 6;
}

void func_290(var uParam0)
{
	func_71(uParam0);
	func_34(uParam0, 8);
}

void func_291()
{
	if (func_499())
	{
		return;
	}
	Var0 = { func_788(0) };
	if (!func_789(Var0))
	{
		return;
	}
	Var2.f_13 = -1;
	Var2.f_13.f_1 = -1;
	Var2.f_16.f_3 = 1;
	Var2.f_21 = 1;
	Var2.f_22 = 1;
	Var2.f_22.f_1 = -1082130432;
	Var2.f_22.f_2 = 1;
	Var2.f_25 = -1;
	Var2.f_25.f_1 = -1;
	Var2.f_25.f_2 = -1;
	Var2.f_25.f_3 = -1;
	Var2.f_25.f_4 = -1;
	Var2.f_25.f_5 = -1;
	Var2.f_25.f_6 = -1;
	Var2.f_25.f_7 = -1;
	Var2.f_25.f_8 = -1;
	Var2.f_34 = 4;
	Var2.f_34.f_1.f_1 = -1;
	Var2.f_34.f_1.f_3.f_1 = -1;
	Var2.f_34.f_1.f_3.f_3.f_1 = -1;
	Var2.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	Var60.f_1 = -1;
	Var60.f_3 = -1082130432;
	Var60.f_4 = 2;
	Var60.f_5 = -1082130432;
	Var60.f_7 = -1082130432;
	Var60.f_9 = -1082130432;
	Var60.f_11 = -1082130432;
	Var60.f_6 = 2;
	Var60.f_4 = 2;
	Var60.f_2 = 2;
	Var60 = 0;
	Var60.f_10 = 2;
	Var60.f_8 = 0;
	func_790(&Var2, Var60, 0);
	func_791(&Var2, Var0, 1, 0);
}

void func_292(var uParam0)
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if (iVar0 >= 19)
	{
		if (iVar1 >= 30 || iVar0 > 19)
		{
			_network_clock_time_override(19, 30, 0, 0, true);
		}
	}
	if (uParam0->f_12 > 9 && func_251(uParam0, 58))
	{
		_0x0e71c80fa4ec8147("MISTY", false);
		_0xce7690c0a0d1c36d(10000);
		func_167(uParam0, 58);
	}
}

void func_293(int iParam0)
{
	if (func_792(iParam0, 4194304, 255))
	{
		func_793(iParam0, 4194304);
	}
}

void func_294(var uParam0, var uParam1)
{
	iVar0 = func_249(uParam0, 1);
	if (does_entity_exist(iVar0) && has_entity_been_damaged_by_entity(uParam1->f_4, iVar0, 1, 1))
	{
		func_112(uParam1, 25);
	}
	iVar0 = func_249(uParam0, 0);
	if (does_entity_exist(iVar0) && has_entity_been_damaged_by_entity(uParam1->f_4, iVar0, 1, 1))
	{
		func_112(uParam1, 26);
	}
}

int func_295(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_116.f_41;
	iVar1 = 0;
	while (iVar1 < uParam0->f_116.f_41)
	{
		if (iParam1 == &uParam0->f_116[iVar1])
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 >= 20)
	{
		request_model(iParam1, false);
		return 0;
	}
	if (iVar0 == uParam0->f_116.f_41)
	{
		uParam0->f_116[iVar0] = iParam1;
		uParam0->f_116.f_41++;
		request_model(&(uParam0->f_116[iVar0]), false);
	}
	uParam0->f_116[iVar0]->f_1++;
	return 1;
}

bool func_296(int iParam0, int iParam1)
{
	if (func_794(iParam0))
	{
		return true;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	Global_1291734->f_1[0] = (&Global_1291734->f_1[0] - 1);
	if (&Global_1291734->f_1[0] > 0)
	{
		return false;
	}
	Global_1291734->f_1[0] = 30;
	if (_0x31dad2cd6d49546e(get_id_of_this_thread()))
	{
	}
	func_795(0, iParam0, iParam1);
	return false;
}

bool func_297(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_796(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

bool func_298(int iParam0)
{
	return (iParam0 >= 1 && iParam0 <= 4);
}

bool func_299(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if ((*Global_1835011)[iParam0]->f_51 == 0)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (func_297(iParam0))
		{
			return true;
		}
	}
	if (func_797(iParam0) > 0)
	{
		iVar0 = absi((get_cloud_time_as_int() - func_797(iParam0)));
		if (iVar0 < 60)
		{
			return false;
		}
		else
		{
			func_798(iParam0, 0);
		}
	}
	if (Global_1139381->f_4912[iParam0]->f_1 && Global_1139381->f_4912[iParam0]->f_2)
	{
		if (func_799((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = -1;
		}
		if (func_800(iParam0))
		{
			if (!func_801(iParam0))
			{
				if (func_802(iParam0) == 0)
				{
					func_803(iParam0, get_cloud_time_as_int());
					return false;
				}
				if (absi((get_cloud_time_as_int() - func_802(iParam0))) > 30)
				{
					func_804(iParam0, 1);
					func_805(iParam0, -1, 0, 1, 1, 0, 0);
					func_803(iParam0, 0);
					func_798(iParam0, get_cloud_time_as_int());
				}
				return false;
			}
		}
		func_803(iParam0, 0);
		func_798(iParam0, 0);
		return true;
	}
	func_806(iParam0);
	iVar1 = func_796(0, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (!Global_1139381->f_4912[iParam0]->f_1 || !Global_1139381->f_4912[iParam0]->f_2)
	{
		if ((*Global_1835011)[iParam0]->f_32 == -1)
		{
			(*Global_1835011)[iParam0]->f_32 = func_807(iVar1, 0);
		}
		switch (func_808((*Global_1835011)[iParam0]->f_32, 0))
		{
			case 1:
				return false;
			case 2:
				if (!Global_1139381->f_4912[iParam0]->f_2)
				{
					(*Global_1835011)[iParam0]->f_32 = -1;
				}
				break;
			case 3:
				(*Global_1835011)[iParam0]->f_32 = -1;
				break;
		}
	}
	return false;
}

void func_300(var uParam0)
{
	if (!_is_app_running(-1782489369))
	{
		_event_manager_pop_event(-1896195300);
		_launch_app_by_hash(-1782489369);
	}
}

void func_301(var uParam0)
{
	if (func_251(uParam0, 54))
	{
		return;
	}
	func_810(func_809(0));
	if (func_123() == 2026485318)
	{
		func_684(&(uParam0->f_384.f_318[0]->f_18), 617531372);
	}
	else
	{
		func_684(&(uParam0->f_384.f_318[0]->f_18), 291123060);
	}
	func_112(uParam0, 54);
}

int func_302(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		return 1;
	}
	if (func_811())
	{
		return 0;
	}
	_remove_imap(iParam0);
	return 0;
}

char* func_303(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_123() == 2026485318)
			{
				return "2A-Rhodes-Male";
			}
			else
			{
				return "2B-Rhodes-Female";
			}
			break;
		case 1:
			if (func_123() == 2026485318)
			{
				return "1A-Valentine-Male";
			}
			else
			{
				return "1B-Valentine-Female";
			}
			break;
		case 2:
			if (func_123() == 2026485318)
			{
				return "3A-Blackwater-Male";
			}
			else
			{
				return "3B-Blackwater-Female";
			}
			break;
		case 3:
			if (func_123() == 2026485318)
			{
				return "4A-Tumbleweed-Male";
			}
			else
			{
				return "4B-Tumbleweed-Female";
			}
			break;
	}
	return "";
}

bool func_304(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	func_122(uParam1, 1);
	if (iParam6 != 0)
	{
		iVar0 = iParam6;
	}
	else
	{
		iVar0 = func_812(iParam2);
	}
	if (!func_148(uParam1, 2016780707, iVar0, 0))
	{
		return false;
	}
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_4 = -1;
	switch (&uParam1->f_1348.f_161[iParam2])
	{
		case 0:
			if (func_813(uParam0, uParam1, iParam2, sParam3, iParam5, sParam4, 0, 1, bParam7))
			{
				func_814(uParam1, iParam2, 1);
			}
			break;
		case 1:
			iVar1 = func_143(uParam1, -1158229860, 0, 0);
			if (uParam1->f_1348.f_161[iParam2]->f_1 < iVar1)
			{
				iVar8 = func_133(uParam1, -537413059, uParam1->f_1348.f_161[iParam2]->f_1, 0);
				iVar9 = func_583(iVar8);
				if (iVar9 > -1 && iVar9 < 9)
				{
					if (!func_700(uParam1, iVar8, &vVar2, &vVar5))
					{
						vVar2 = { uParam1->f_4926.f_97[iVar9]->f_1 };
						vVar5 = { uParam1->f_4926.f_97[iVar9]->f_4 };
					}
					if (!func_702(uParam0, iVar9, &(uParam1->f_4926.f_97[iVar9]), vVar2, vVar5, 0, 1))
					{
						return false;
					}
				}
			}
			uParam1->f_1348.f_161[iParam2]->f_1++;
			if (uParam1->f_1348.f_161[iParam2]->f_1 >= iVar1)
			{
				func_814(uParam1, iParam2, 2);
			}
			break;
		case 2:
			iVar1 = func_143(uParam1, -1624024105, 0, 0);
			if (uParam1->f_1348.f_161[iParam2]->f_1 < iVar1)
			{
				iVar10 = func_133(uParam1, -1431424055, uParam1->f_1348.f_161[iParam2]->f_1, 0);
				iVar11 = func_644(iVar10);
				if (iVar11 > -1 && iVar11 < 3)
				{
					if (!func_708(uParam1, iVar11, iVar10, &uVar12))
					{
						vVar2 = { 1f, 1f, 1f };
					}
					if (!func_211(uParam0, iVar11, &uVar12))
					{
						return false;
					}
				}
			}
			uParam1->f_1348.f_161[iParam2]->f_1++;
			if (uParam1->f_1348.f_161[iParam2]->f_1 >= iVar1)
			{
				func_814(uParam1, iParam2, 3);
			}
			break;
		case 3:
			if (bParam8)
			{
				return false;
			}
			iVar1 = func_143(uParam1, 1264015228, 0, 0);
			if (uParam1->f_1348.f_161[iParam2]->f_1 < iVar1)
			{
				iVar20 = func_133(uParam1, 995627660, uParam1->f_1348.f_161[iParam2]->f_1, 0);
				iVar21 = func_248(iVar20);
				if (iVar20 == -1006371048)
				{
				}
				else if (iVar21 > -1 && iVar21 < 6)
				{
					Var22 = &uParam1->f_4926.f_182[iVar21];
					Var22.f_1 = uParam1->f_4926.f_182[iVar21]->f_1;
					if (!func_206(uParam1, iVar20, &Var22))
					{
						Var22.f_5 = { 1f, 1f, 1f };
					}
					if (!func_718(uParam0, uParam1, iVar21, &Var22, 1))
					{
						return false;
					}
				}
			}
			uParam1->f_1348.f_161[iParam2]->f_1++;
			if (uParam1->f_1348.f_161[iParam2]->f_1 >= iVar1)
			{
				func_814(uParam1, iParam2, 4);
			}
			break;
		case 4:
			if (func_815(uParam0, uParam1, iParam2))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_305(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (!does_entity_exist(iParam4))
	{
		return;
	}
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	set_anim_scene_entity(iVar0, sParam3, iParam4, iParam5);
}

void func_306(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	set_anim_scene_bool(iVar0, sParam3, bParam4, false);
}

bool func_307(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (!func_523(uParam0, uParam2, iParam3, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (_is_anim_scene_started(iVar0, false))
	{
		return true;
	}
	if (network_does_network_id_exist(&(uParam0->f_37[iParam3])))
	{
		if (!_is_anim_scene_loaded(iVar0, true, false))
		{
			return false;
		}
		bVar2 = false;
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if ((*uParam1)[iVar3]->f_2[iParam3] & 1 != 0)
			{
				bVar2 = true;
			}
			else
			{
				iVar3++;
			}
		}
		if (!bVar2)
		{
			return false;
		}
	}
	else if (!_is_anim_scene_loaded(iVar0, false, false))
	{
		return false;
	}
	start_anim_scene(iVar0);
	if (bParam4)
	{
		if (func_816())
		{
			func_817();
		}
		if (func_103())
		{
			func_104();
		}
		if (_is_any_app_active())
		{
			_close_all_apps();
		}
		if (is_pause_menu_active())
		{
			set_frontend_active(false);
		}
	}
	return true;
}

void func_308(var uParam0)
{
	clear_override_weather();
	_0x3373779baf7caf48("MISTY", "MISTY_MP_intro");
	_set_weather_type(1500834021, true, true, false, 0f, false);
	func_112(uParam0, 58);
}

void func_309(bool bParam0, bool bParam1, bool bParam2)
{
	Global_1071686->f_7 = 1;
	if ((Global_1296859->f_21 - Global_1071686->f_9) > 2)
	{
		if (bParam2)
		{
			func_818(20f);
		}
	}
	Global_1071686->f_9 = Global_1296859->f_21;
	if (bParam0)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = int_to_playerindex(iVar2);
		if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			iVar1 = get_player_ped(iVar0);
			if (!does_entity_exist(iVar1))
			{
			}
			else if (network_has_control_of_entity(iVar1))
			{
				set_ped_reset_flag(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_819())
	{
		_0x236905c700fdb54d();
	}
	set_ped_reset_flag(player_ped_id(), 25, true);
	_0x3c8f74e8fe751614();
	_0x634f4a0562cf19b8();
	func_263(250);
	if (bParam1)
	{
		_0x5651516d947abc53();
	}
}

bool func_310(int iParam0)
{
	if (!_0xf9e7dbb39080640b())
	{
		return false;
	}
	if (_is_loading_screen_active())
	{
		shutdown_loading_screen();
		return false;
	}
	else if (!is_screen_faded_in())
	{
		if (!is_screen_fading_in())
		{
			func_820();
			do_screen_fade_in(iParam0);
		}
		return false;
	}
	return true;
}

bool func_311(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0) || !_is_anim_scene_started(iVar0, false))
	{
		return false;
	}
	return _0x8d81e7824b7753f7(iVar0, sParam3, 1);
}

void func_312(var uParam0)
{
	if (!func_251(uParam0, 3))
	{
		if (_is_app_running(-1782489369))
		{
			if (_event_manager_is_event_pending(-1896195300))
			{
				_event_manager_pop_event(-1896195300);
				_request_uiapp_transition_by_hash(-1782489369, -1068489455);
				func_112(uParam0, 3);
			}
		}
		else
		{
			_event_manager_pop_event(-1896195300);
			_launch_app_by_hash(-1782489369);
		}
	}
}

void func_313(var uParam0)
{
	if (!_is_app_running(-1782489369) && func_251(uParam0, 3))
	{
		_event_manager_pop_event(-1896195300);
		_launch_app_by_hash(-1782489369);
	}
}

bool func_314(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &iVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (fParam3 > 0f && _get_anim_scene_progress(iVar0) >= fParam3)
	{
		return true;
	}
	if (iVar1 & 2 != 0)
	{
		if (_get_anim_scene_progress(iVar0) <= 0.99f)
		{
			return false;
		}
	}
	else if (!_is_anim_scene_finished(iVar0, false))
	{
		return false;
	}
	return true;
}

void func_315(var uParam0, var uParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	set_anim_scene_origin(iVar0, vParam3, vParam6, iParam9);
}

void func_316(var uParam0)
{
	if (!func_251(uParam0, 4))
	{
		if (_is_app_running(-1782489369))
		{
			if (_event_manager_is_event_pending(-1896195300))
			{
				_event_manager_pop_event(-1896195300);
				_request_uiapp_transition_by_hash(-1782489369, 1746074032);
				func_112(uParam0, 4);
			}
		}
		else
		{
			_event_manager_pop_event(-1896195300);
			_launch_app_by_hash(-1782489369);
		}
	}
}

void func_317(var uParam0)
{
	if (!_is_app_running(-1782489369) && func_251(uParam0, 4))
	{
		_event_manager_pop_event(-1896195300);
		_launch_app_by_hash(-1782489369);
	}
}

char* func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_123() == 2026485318)
			{
				return "2A-Rhodes-Male";
			}
			else
			{
				return "2B-Rhodes-Female";
			}
			break;
		case 1:
			if (func_123() == 2026485318)
			{
				return "1A-Valentine-Male";
			}
			else
			{
				return "1B-Valentine-Female";
			}
			break;
		case 2:
			if (func_123() == 2026485318)
			{
				return "3A-Blackwater-Male";
			}
			else
			{
				return "3B-Blackwater-Female";
			}
			break;
		case 3:
			if (func_123() == 2026485318)
			{
				return "4A-Tumbleweed-Male";
			}
			else
			{
				return "4B-Tumbleweed-Female";
			}
			break;
	}
	return "";
}

void func_319(var uParam0)
{
	if (!func_251(uParam0, 5))
	{
		if (_is_app_running(-1782489369))
		{
			if (_event_manager_is_event_pending(-1896195300))
			{
				_event_manager_pop_event(-1896195300);
				_request_uiapp_transition_by_hash(-1782489369, -1365652022);
				func_112(uParam0, 5);
			}
		}
		else
		{
			_event_manager_pop_event(-1896195300);
			_launch_app_by_hash(-1782489369);
		}
	}
}

int func_320(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return 0;
	}
	iVar2 = func_322(uParam0, uParam1, iParam2, sParam3, 1);
	if (!does_entity_exist(iVar2))
	{
		return 0;
	}
	remove_anim_scene_entity(iVar0, sParam3, iVar2);
	if (bParam4)
	{
		delete_entity(&iVar2);
	}
	return 1;
}

int func_321(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return 3;
	}
	iVar0 = func_821(iParam1);
	if (iVar0 == -1 && !func_822(iParam1, func_123()))
	{
		return 3;
	}
	if (uParam2->f_1 != 0 && func_823(uParam2, 1))
	{
		if (uParam2->f_1 == iParam1)
		{
			if (bParam3)
			{
				return func_824(iParam0, uParam2);
			}
			else
			{
				return 2;
			}
		}
		else if (uParam2->f_1 != iParam1)
		{
			func_192(uParam2);
		}
	}
	if (!func_823(uParam2, 1))
	{
		func_825(&(uParam2->f_1));
		if (!func_661(&(uParam2->f_1), &uVar1, iParam1, iVar0, 1, 0, 0, 0, 8))
		{
			return 3;
		}
		uParam2->f_1 = iParam1;
		func_826(uParam2, 1);
	}
	if (!bParam3)
	{
		return 2;
	}
	return func_824(iParam0, uParam2);
}

int func_322(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return 0;
	}
	iVar2 = _get_anim_scene_ped(iVar0, sParam3, bParam4);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	iVar2 = _get_anim_scene_object(iVar0, sParam3, bParam4);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	iVar2 = _get_anim_scene_vehicle(iVar0, sParam3, bParam4);
	if (does_entity_exist(iVar2))
	{
		return iVar2;
	}
	return 0;
}

int func_323(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_758(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_758(iVar4) && iVar4 != iVar0)
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
	if (func_89() == -1 && !func_827(iVar0))
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
				if (func_827(-183018591))
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
		if (iParam0 != Global_34 && func_758(iVar0))
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
		func_828(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_829(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_34)
	{
		if (func_830(iVar0))
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

bool func_324(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	return _0x005e6f28dd7ed58d(iVar0, sParam3);
}

bool func_325(var uParam0, int iParam1, var uParam2)
{
	if (!network_does_network_id_exist(&(uParam0->f_3[iParam1])))
	{
		return false;
	}
	if (!network_has_control_of_network_id(&(uParam0->f_3[iParam1])))
	{
		return false;
	}
	return func_712(uParam0, uParam2, net_to_ped(&(uParam0->f_3[iParam1])));
}

float func_326(var uParam0, var uParam1, int iParam2)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return 0f;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return 0f;
	}
	return _get_anim_scene_progress(iVar0);
}

bool func_327(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return false;
	}
	if (!(*uParam0)[iParam1]->f_44)
	{
		(*uParam0)[iParam1]->f_44 = 1;
	}
	if (bParam2)
	{
		if (!(*uParam0)[iParam1]->f_45)
		{
			return false;
		}
	}
	return true;
}

bool func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_831(iParam1, 1, 0) };
		iParam3 = func_832(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return false;
		}
	}
	if (!func_834(iParam1, iParam2, func_833(iParam3, 1), bParam4, 1, 0, 1))
	{
		return false;
	}
	func_835(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_836(iParam1, 0))
		{
			func_837(&(Global_1952637->f_1675.f_1[func_833(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_837(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_833(iParam3, 1)])
			{
				func_379(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_604(32768))
			{
				func_838();
				func_379(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return true;
	}
	iVar5 = func_839(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_840(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_379(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_379(19, 0, iVar5, iParam0, 0);
	}
	return true;
}

void func_329(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return;
	}
	iVar0 = func_841(iParam2, 1);
	if (func_604(32768) && iParam2 == 10)
	{
		func_842(iParam1, bParam3, 1, 0);
		return;
	}
	if (func_843(iVar0, 8))
	{
		return;
	}
	if (&uParam0->f_1[iParam2] == &Global_1952637->f_2764[iParam2] && uParam0->f_1[iParam2]->f_1 == Global_1952637->f_2764[iParam2]->f_1)
	{
		return;
	}
	Global_1952637->f_2764[iParam2] = &uParam0->f_1[iParam2];
	Global_1952637->f_2764[iParam2]->f_1 = uParam0->f_1[iParam2]->f_1;
	if ((func_843(iVar0, 6) || &uParam0->f_1[iParam2] == &Global_1952637->f_83[iParam2]) || uParam0->f_1[iParam2]->f_1 == 289238755)
	{
		if (!func_843(iVar0, 1))
		{
			func_844(iParam1, iParam2, (iVar0 != 1108822547 || (iVar0 == 1108822547 && Global_1952637->f_3467.f_1 == 0)));
			func_845(iVar0, 1, 6);
		}
	}
	else
	{
		if (func_843(iVar0, 1))
		{
			func_846(iVar0, 1, 6);
		}
		if (func_847(uParam0->f_1[iParam2], 4))
		{
			func_844(iParam1, iParam2, 1);
			func_848(uParam0->f_1[iParam2], 4, 6);
		}
		_set_ped_component_enabled(iParam1, &(uParam0->f_1[iParam2]), false, true, false);
		if (uParam0->f_1[iParam2]->f_1 != 0)
		{
			_0x66b957aac2eaaeab(iParam1, &(uParam0->f_1[iParam2]), uParam0->f_1[iParam2]->f_1, 0, 1, 1);
		}
	}
	if (bParam3)
	{
		_0xaab86462966168ce(iParam1, 1);
		_update_ped_variation(iParam1, false, true, true, true, bParam4);
	}
}

void func_330(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_331(var uParam0, int iParam1)
{
	if (uParam0->f_1348.f_28 != iParam1)
	{
		return false;
	}
	if (uParam0->f_1348.f_26 < 10)
	{
		return false;
	}
	return true;
}

int func_332(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_116.f_41)
	{
		if (iParam1 == &uParam0->f_116[iVar1])
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	uParam0->f_116[iVar0]->f_1 = (uParam0->f_116[iVar0]->f_1 - 1);
	if (uParam0->f_116[iVar0]->f_1 > 0)
	{
		return 1;
	}
	set_model_as_no_longer_needed(&(uParam0->f_116[iVar0]));
	func_591(uParam0->f_116[iVar0]);
	uParam0->f_116.f_41 = (uParam0->f_116.f_41 - 1);
	*uParam0->f_116[iVar0] = { *uParam0->f_116[uParam0->f_116.f_41] };
	func_591(uParam0->f_116[uParam0->f_116.f_41]);
	return 1;
}

int func_333(var uParam0, int iParam1)
{
	if (uParam0->f_158 == iParam1)
	{
		return 1;
	}
	if ((uParam0->f_158.f_1 && iParam1) != 0)
	{
		iVar0 = func_849(iParam1);
	}
	else
	{
		iVar0 = func_850(iParam1);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (_0x05d6195fb4d428f4(iVar0))
	{
		uParam0->f_158 = iParam1;
		uParam0->f_158.f_1 = (uParam0->f_158.f_1 || iParam1);
		return 1;
	}
	return 0;
}

int func_334(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_335(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_336(var uParam0, var uParam1)
{
	if (!func_304(uParam0, uParam1, 3, "cutscene@MPINTRO_MCS1", func_851(uParam1->f_1348.f_3), 2, 0, 1, 0))
	{
		return false;
	}
	return true;
}

int func_337(var uParam0, var uParam1, var uParam2)
{
	if (!func_304(uParam0, uParam2, 4, "script@MPSTORY@MPINTRO@MCS1@MPINTRO_MCS1_LOOPS", "pl_LOOP", 1, 0, 1, 0))
	{
		return 0;
	}
	if (!func_251(uParam2, 40))
	{
		if (uParam2->f_1348.f_3 != 1)
		{
			func_315(uParam0, uParam2, 4, *uParam2->f_4926[4], uParam2->f_4926[4]->f_3, 2);
		}
		iVar0 = func_370(uParam0, 0);
		func_305(uParam0, uParam2, 4, "p_pen01x", iVar0, 0);
		iVar0 = func_370(uParam0, 1);
		func_305(uParam0, uParam2, 4, "p_journalset02x", iVar0, 0);
		iVar0 = func_370(uParam0, 2);
		func_305(uParam0, uParam2, 4, "p_desk10x", iVar0, 0);
		iVar0 = func_370(uParam0, 3);
		func_305(uParam0, uParam2, 4, "p_chairdesk02x", iVar0, 0);
		iVar0 = func_370(uParam0, 4);
		func_305(uParam0, uParam2, 4, "p_chair02x", iVar0, 0);
		iVar0 = func_249(uParam0, 0);
		iVar1 = get_ped_index_from_entity_index(iVar0);
		func_852(uParam2, iVar1);
		clear_ped_tasks_immediately(iVar1, true, true);
		func_305(uParam0, uParam2, 4, "MP_Jessica", iVar0, 0);
		iVar0 = func_249(uParam0, 3);
		func_305(uParam0, uParam2, 4, "IG_GEN_MALE", iVar0, 0);
		func_112(uParam2, 40);
	}
	if (!func_307(uParam0, uParam1, uParam2, 4, 0))
	{
		return 0;
	}
	return 1;
}

float func_338(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_339(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_853(uParam1, uParam2, iParam3, 0))
	{
		return false;
	}
	func_854(uParam0, uParam1, uParam2);
	return true;
}

void func_340(var uParam0, var uParam1, int iParam2)
{
	func_855(uParam1, uParam1->f_4808);
	uParam1->f_4808 = iParam2;
	uParam1->f_4808.f_1 = uParam1->f_14;
	func_852(uParam1, func_249(uParam0, 1));
	func_856(uParam1, 0);
}

bool func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_41(uParam0, 8))
	{
		return false;
	}
	if (iParam1 == uParam0->f_41)
	{
		if (func_400(uParam0))
		{
			return true;
		}
		if (iParam2 != -1)
		{
			return true;
		}
	}
	uParam0->f_41 = iParam1;
	uParam0->f_41.f_2 = uParam0->f_14;
	if (iParam3 != 0 && iParam4 != 0)
	{
		uParam0->f_41.f_3 = _0x3e593df9c2962ec6(iParam4);
		set_blip_sprite(uParam0->f_41.f_3, iParam3, true);
		uParam0->f_41.f_1 = func_622(_create_var_string(0, uParam0->f_41, uParam0->f_41.f_3), iParam2, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_41.f_1 = func_622(_create_var_string(0, uParam0->f_41), iParam2, 0, 0, 0, 1);
	}
	return true;
}

void func_342(var uParam0, var uParam1, var uParam2)
{
	func_347(uParam0, uParam1, uParam2, 0, 1, 1, 0);
	func_357(uParam2, 0, 1);
}

void func_343(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	if (uParam0->f_41.f_9 != 0)
	{
		return;
	}
	if (func_41(uParam0, 16))
	{
		return;
	}
	if (uParam0->f_41.f_4 == iParam1)
	{
		if (func_289(uParam0->f_41.f_5))
		{
			return;
		}
	}
	if (iParam3 > 0)
	{
		if (uParam0->f_41.f_7 != iParam3)
		{
			uParam0->f_41.f_7 = iParam3;
			func_857(uParam0->f_41.f_7);
		}
		if (uParam0->f_41.f_8 != iParam2)
		{
			uParam0->f_41.f_8 = iParam2;
			func_858(iParam2);
		}
	}
	else if (uParam0->f_41.f_7 > 0)
	{
		uParam0->f_41.f_7 = 0;
		uParam0->f_41.f_8 = -1;
		func_514();
	}
	uParam0->f_41.f_4 = iParam1;
	if (is_string_null_or_empty(sParam4))
	{
		uParam0->f_41.f_5 = func_859(_create_var_string(0, uParam0->f_41.f_4), -1, 0, 0, 1);
	}
	else
	{
		uParam0->f_41.f_5 = func_859(sParam4, -1, 0, 0, 1);
	}
	uParam0->f_41.f_6 = uParam0->f_14;
}

bool func_344(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (_0x619e63980bfc0096(iParam0, iParam1, 0))
	{
		return true;
	}
	return false;
}

void func_345(var uParam0, var uParam1, var uParam2)
{
	func_347(uParam0, uParam1, uParam2, 0, 0, 0, 0);
	func_357(uParam2, 0, 0);
}

bool func_346(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_860(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_347(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (iParam3 <= -1 || iParam3 >= 11)
	{
		return;
	}
	if (does_blip_exist(&(uParam2->f_41.f_11[iParam3])))
	{
		return;
	}
	if (func_118((*uParam1)[uParam2->f_1], 4))
	{
		return;
	}
	func_861(uParam0, uParam1, uParam2, iParam3, bParam4, bParam5);
	iVar0 = func_862(iParam3);
	iVar1 = 0;
	func_122(uParam2, 1);
	if (func_148(uParam2, -839782836, iVar0, 0))
	{
		iVar1 = func_143(uParam2, -77339266, 0, 0);
	}
	bVar2 = false;
	if (bParam6 || iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_863(uParam2, iParam3, -1878373110, 1);
		func_863(uParam2, iParam3, 231194138, 1);
	}
	if (iVar1 > 0)
	{
		func_864(uParam2, iParam3, func_133(uParam2, -1521558844, 0, 0), func_584(uParam2, 44928024, 0, 0), func_584(uParam2, -1485734414, 0, 0));
		iVar6 = 0;
		while (iVar6 < iVar1)
		{
			vVar3 = { func_207(uParam2, 1302794186, iVar6, 0) };
			if (func_209(vVar3))
			{
			}
			else
			{
				add_point_to_gps_multi_route(vVar3, func_584(uParam2, -2039919571, iVar6, 0));
			}
			iVar6++;
		}
		set_gps_multi_route_render(true);
		set_gps_flags(128, 0f);
	}
}

int func_348(var uParam0)
{
	sVar0 = func_865(uParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return 0;
	}
	if (!_0xdd0b7c5ae58f721d(sVar0))
	{
		if (!_0x595550376b7ea230(sVar0))
		{
			_0x1b3c2d961f5fc0e1(sVar0);
		}
		if (!_0xdd0b7c5ae58f721d(sVar0))
		{
		}
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_349(var uParam0, int iParam1)
{
	uParam0->f_41.f_71 = iParam1;
	func_403(uParam0);
}

void func_350(int iParam0, vector3 vParam1, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	if (bParam4)
	{
	}
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (!is_ped_human(iParam0))
	{
		return;
	}
	if (func_866(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam5 < 0f || fParam6 < 0f) || fParam7 < 0f) || fParam8 < 0f)
	{
		return;
	}
	if (((((!fParam5 > fParam6 || !fParam5 > fParam7) || !fParam5 > fParam8) || !fParam6 > fParam7) || !fParam6 > fParam8) || !fParam7 > fParam8)
	{
		return;
	}
	iVar0 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar1 = get_vehicle_ped_is_in(iParam0, false);
	}
	fVar3 = func_867(iParam0, vParam1, 1);
	if ((fVar3 <= fParam5 && fVar3 > fParam6) && fVar3 > fParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.75f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam6 && fVar3 > fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1.5f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.25f);
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1.25f);
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (fVar3 <= fParam7)
	{
		if (bParam11)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1f);
			if (iParam9 == 1)
			{
				if (_0x33fa048675821da7(iVar0, 3))
				{
					_0x06d26a96ca1bca75(iVar0, 3, 0f, 0);
				}
			}
		}
		if (!is_entity_dead(iVar1) && _is_draft_vehicle(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar2 = _get_ped_in_draft_seat(iVar1, iVar4);
				if (!is_entity_dead(iVar2))
				{
					set_ped_max_move_blend_ratio(iVar2, 1f);
					if (iParam9 == 1)
					{
						if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
						{
							if (_0x33fa048675821da7(iVar0, 3))
							{
								_0x06d26a96ca1bca75(iVar2, 3, 0f, 0);
							}
						}
					}
					_0x0c3f0f7f92ca847c(iVar1, _0x46bf2a810679d6e6(iVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (fVar3 <= fParam8)
		{
			if (iParam0 == Global_34)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar0) && !func_868(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_868(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_351(var uParam0, var uParam1)
{
	iVar0 = _0xf49f14462f0ae27c(uParam1->f_2);
	if (!func_276(uParam1->f_4, iVar0, 1))
	{
		return;
	}
	if (is_control_pressed(0, -1404316431) && uParam1->f_41.f_71 >= 3)
	{
		func_279(uParam1);
	}
	switch (uParam1->f_41.f_71)
	{
		case 0:
			func_349(uParam1, 10);
			break;
		case 10:
			if ((func_352(uParam0, 18) || func_399(uParam1) > 4f) && !is_control_pressed(0, -1404316431))
			{
				func_349(uParam1, 1);
			}
			else if (is_control_pressed(0, -1404316431))
			{
				func_279(uParam1);
			}
			break;
		case 1:
			if (is_control_pressed(0, -1404316431))
			{
				func_279(uParam1);
			}
			else if ((func_399(uParam1) > 1f && _0x354f689c4ffaab37(-448983936)) && uParam1->f_4808.f_2 != 8)
			{
				if (func_341(uParam1, -1270687782, 10000, 0, 0))
				{
					func_349(uParam1, 2);
				}
			}
			break;
		case 2:
			if (uParam1->f_4808.f_2 == 8)
			{
				func_71(uParam1);
				func_349(uParam1, 2);
			}
			else if (!func_432(uParam1, -1270687782))
			{
				func_349(uParam1, 3);
			}
			break;
		case 3:
			if (func_399(uParam1) > 4f)
			{
				if (func_341(uParam1, -785885046, 10000, 0, 0))
				{
					func_349(uParam1, 4);
				}
			}
			break;
		case 4:
			if (!_is_using_keyboard(0))
			{
				if (func_341(uParam1, -785885046, 10000, 0, 0))
				{
					func_349(uParam1, 5);
				}
			}
			else if (func_341(uParam1, -568929928, 10000, 0, 0))
			{
				func_349(uParam1, 5);
			}
			break;
		case 5:
			if (!_is_using_keyboard(0))
			{
				func_341(uParam1, -785885046, 10000, 0, 0);
			}
			else
			{
				func_341(uParam1, -568929928, 10000, 0, 0);
			}
			if (func_399(uParam1) > 8f)
			{
				if (!_is_using_keyboard(0))
				{
					if (func_341(uParam1, 51171018, 10000, 0, 0))
					{
						func_349(uParam1, 6);
					}
				}
				else if (func_341(uParam1, 1731483716, 10000, 0, 0))
				{
					func_349(uParam1, 6);
				}
			}
			break;
		case 6:
			if (!_is_using_keyboard(0))
			{
				func_341(uParam1, 51171018, 10000, 0, 0);
			}
			else
			{
				func_341(uParam1, 1731483716, 10000, 0, 0);
			}
			if (!func_432(uParam1, 51171018) && !func_432(uParam1, 1731483716))
			{
				func_349(uParam1, 7);
			}
			break;
		case 7:
			if (func_399(uParam1) > 1.5f)
			{
				if (!_is_using_keyboard(0))
				{
					if (func_341(uParam1, 1261655414, 10000, 0, 0))
					{
						func_349(uParam1, 8);
					}
				}
				else if (func_341(uParam1, -76269218, 10000, 0, 0))
				{
					func_349(uParam1, 8);
				}
			}
			break;
		case 8:
			if (_0x74f1d22efa71fab8())
			{
				if (func_341(uParam1, 276881586, 10000, 0, 0))
				{
					func_349(uParam1, 31);
				}
			}
			break;
	}
}

bool func_352(var uParam0, int iParam1)
{
	if (!func_869(uParam0, iParam1))
	{
		return false;
	}
	return !func_870(iParam1);
}

int func_353(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = player_id();
	if (_0xe24c64d9aded2ef5(iVar0, iParam0))
	{
		return 0;
	}
	if (Global_1296543->f_43 >= 7)
	{
		return 0;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar1))
		{
			iVar2 = network_get_player_index_from_ped(iVar1);
			if (_0x72b2e00c9bac6789(&(Global_1296543->f_44), iVar2))
			{
				return 0;
			}
			_0x31010318ba9897ac(&(Global_1296543->f_44), iVar2);
			(*Global_1296543)[Global_1296543->f_43]->f_1 = iVar2;
		}
	}
	iVar3 = 0;
	while (iVar3 < Global_1296543->f_43)
	{
		if ((*Global_1296543)[iVar3]->f_3 == iParam0)
		{
			return 0;
		}
		iVar3++;
	}
	(*Global_1296543)[Global_1296543->f_43] = get_id_of_this_thread();
	func_871(iVar0, Global_1296543->f_43, iParam0, iParam1, iParam2, iParam3);
	Global_1296543->f_43++;
	return 1;
}

int func_354(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xe24c64d9aded2ef5(player_id(), iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1296543->f_43)
	{
		if ((*Global_1296543)[iVar0]->f_3 == iParam0)
		{
			if (Global_1296543[iVar0] != get_id_of_this_thread())
			{
				if (bParam1)
				{
					return 0;
				}
			}
			func_538(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_355(var uParam0, var uParam1)
{
	if (func_251(uParam1, 61))
	{
		return;
	}
	if (!func_252(uParam0, uParam1, 0))
	{
		return;
	}
	if (!func_252(uParam0, uParam1, 1))
	{
		return;
	}
	iVar0 = func_249(uParam0, 1);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { _get_scenario_point_coords(&(uParam1->f_35[0]), true) };
	vVar4 = { _get_scenario_point_coords(&(uParam1->f_35[1]), true) };
	vVar7 = { get_entity_coords(iVar0, true, false) };
	if (func_872(uParam1->f_5, vVar1, vVar7, vVar4))
	{
		uParam1->f_1348.f_3458 = 1;
		uParam1->f_1348.f_3459 = 0;
	}
	else if (func_872(uParam1->f_5, vVar4, vVar7, vVar1))
	{
		uParam1->f_1348.f_3458 = 0;
		uParam1->f_1348.f_3459 = 1;
	}
	else if (func_338(vVar7, vVar1) > func_338(vVar7, vVar4))
	{
		uParam1->f_1348.f_3458 = 0;
		uParam1->f_1348.f_3459 = 1;
	}
	else
	{
		uParam1->f_1348.f_3458 = 1;
		uParam1->f_1348.f_3459 = 0;
	}
	func_112(uParam1, 61);
}

bool func_356(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_860(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_357(var uParam0, int iParam1, bool bParam2)
{
	func_863(uParam0, iParam1, -401963276, bParam2);
	func_863(uParam0, iParam1, 231194138, bParam2);
}

bool func_358(int iParam0)
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

int func_359(var uParam0, int iParam1, char* sParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (iParam1 <= -1 || iParam1 >= 4)
	{
		return 0;
	}
	if (func_358(&(uParam0->f_41.f_66[iParam1])))
	{
		return 1;
	}
	uParam0->f_41.f_66[iParam1] = func_873(sParam2, iParam3, vParam4, fParam7, iParam8, fParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, 1704213876, 0);
	if (func_358(&(uParam0->f_41.f_66[iParam1])))
	{
		return 1;
	}
	return 0;
}

void func_360(int iParam0, char* sParam1)
{
	if (func_358(iParam0))
	{
		iVar0 = func_874(iParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_tag((*Global_1951255)[iVar0]->f_3, sParam1);
			_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
		}
	}
}

void func_361(int iParam0, bool bParam1)
{
	if (func_358(iParam0))
	{
		iVar0 = func_874(iParam0);
		if (bParam1)
		{
			func_875(iParam0, 4);
			func_876(iVar0, 1);
		}
		else
		{
			func_877(iParam0, 4);
			func_876(iVar0, 0);
		}
	}
}

void func_362(int iParam0, int iParam1)
{
	if (func_358(iParam0))
	{
		iVar0 = func_874(iParam0);
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, 10, iParam1);
			_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, 11, iParam1);
			_uiprompt_set_attribute((*Global_1951255)[iVar0]->f_3, 14, iParam1);
		}
	}
}

void func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_358(iParam0))
	{
		return;
	}
	iVar0 = func_874(iParam0);
	func_878(iVar0, bParam1);
}

bool func_364(int iParam0, bool bParam1)
{
	if (bParam1 && !func_358(iParam0))
	{
		return false;
	}
	iVar0 = func_874(iParam0);
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

void func_365(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	_0xe296208c273bd7f0(iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	func_72(uParam0);
	if (bParam6)
	{
		func_71(uParam0);
		func_34(uParam0, 24);
	}
}

bool func_366(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	disable_all_control_actions(0);
	enable_control_action(2, -668070958, true);
	enable_control_action(2, 1250966545, true);
	enable_control_action(0, -771458680, true);
	enable_control_action(0, -1450761377, true);
	enable_control_action(0, -1722177808, true);
	enable_control_action(0, -890654697, true);
	enable_control_action(0, -1700862426, true);
	enable_control_action(0, -2128083607, true);
	enable_control_action(0, -2074653976, true);
	enable_control_action(0, 1808336124, true);
	iVar0 = _0xf49f14462f0ae27c(uParam1->f_2);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (func_879(uParam1, iVar0, iParam2))
	{
		return true;
	}
	if (!func_757(uParam1->f_4, -850912737) && !get_ped_reset_flag(uParam1->f_4, 236))
	{
		task_hitch_animal(uParam1->f_4, &(uParam1->f_35[iParam2]), iParam3);
	}
	if (func_880())
	{
		func_116(uParam0, uParam1, iParam4);
	}
	if ((!func_276(uParam1->f_4, iVar0, 1) && !get_ped_reset_flag(uParam1->f_4, 236)) && !func_757(uParam1->f_4, -850912737))
	{
		func_116(uParam0, uParam1, iParam4);
	}
	return false;
}

bool func_367(int iParam0, int iParam1)
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

void func_368(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 <= -1 || iParam0 >= 23)
	{
		return;
	}
	func_882(func_881(iParam0), bParam1, bParam2);
}

bool func_369(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 <= -1 || iParam2 >= 23)
	{
		return false;
	}
	if (_0x8f4f050054005c27(&(uParam0->f_35), iParam2))
	{
		return true;
	}
	StringCopy(&cVar0, func_881(iParam2), 24);
	if (is_string_null_or_empty(&cVar0))
	{
		return false;
	}
	uVar3 = 24;
	iVar101 = 0;
	iVar102 = -1;
	if (!func_883(uParam0, uParam1, iParam2, &uVar3, &iVar101, &iVar102))
	{
		return false;
	}
	if (!func_884(&uVar3, cVar0, iVar101, iVar102, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		_0xe84aac1b22a73e99(&(uParam0->f_35), iParam2);
	}
	return true;
}

int func_370(var uParam0, int iParam1)
{
	if (!network_does_network_id_exist(&(uParam0->f_20[iParam1])))
	{
		return 0;
	}
	return net_to_ent(&(uParam0->f_20[iParam1]));
}

void func_371(var uParam0)
{
	sVar0 = func_865(uParam0);
	if (is_string_null_or_empty(sVar0))
	{
		return;
	}
	if (_0xdd0b7c5ae58f721d(sVar0))
	{
		_0x2412216fcc7b4e3e(sVar0);
	}
}

void func_372(int iParam0, int iParam1)
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

void func_373(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_116(uParam1, uParam2, iParam3);
	func_854(uParam0, uParam1, uParam2);
}

bool func_374(var uParam0, var uParam1)
{
	if (!func_304(uParam0, uParam1, 5, "cutscene@MPINTRO_MCS2", func_885(uParam1->f_1348.f_3), 0, 0, 1, 0))
	{
		return false;
	}
	return true;
}

bool func_375(bool bParam0)
{
	if (func_89() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_886(bParam0));
}

bool func_376(var uParam0)
{
	iVar0 = 472588819;
	iVar1 = func_809(0);
	if (iVar1 == 2026485318)
	{
		iVar0 = 472588819;
	}
	else if (iVar1 == 24043185)
	{
		iVar0 = 1830115867;
	}
	else
	{
		return false;
	}
	func_887(uParam0, iVar0);
	func_888(uParam0, iVar0);
	return true;
}

bool func_377(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	if (!func_890(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_891(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_892(iParam0, bParam2);
	iVar2 = 0;
	if (func_893(iParam0) == -1037537535)
	{
		if (!func_894(iParam0, 866047851) && !func_894(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_895(iParam0, 8388608) && !func_896(27))
	{
		func_897(27);
	}
	func_898(iParam0);
	if (!bVar3)
	{
		if (func_894(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_900(func_899(iParam0, 1), 0);
			if (is_weapon_valid(iVar1))
			{
				if (func_89() == -1)
				{
					func_901(iVar1);
				}
				if (func_375(0) && func_828(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_902(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_903(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_893(iParam0) == -427144552)
		{
			if (!func_904(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_893(iParam0) == 307971639 && func_905(iParam0))
		{
			if (!func_906(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_894(iParam0, -103750053))
		{
			func_908(func_907(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_908(func_909(-717883113, 2091222383), iVar0);
		}
		else if (func_894(iParam0, -121341956) && !func_894(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_910(536, 0);
			}
			if (func_894(iParam0, -2017733358) || func_894(iParam0, -1369131378))
			{
			}
		}
		else if (func_894(iParam0, -136654233))
		{
			if (func_894(iParam0, -1021472396))
			{
			}
		}
		else if (func_894(iParam0, -1466706512) && func_894(iParam0, 1147021565))
		{
			func_910(519, 0);
		}
		else if (func_894(iParam0, 1147021565) && func_894(iParam0, -524514947))
		{
		}
		else if (func_894(iParam0, 554195525))
		{
		}
		else if (func_894(iParam0, 589988438))
		{
			if (func_911())
			{
				func_912(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_894(iParam0, 787083290) && func_894(iParam0, 949916894))
		{
			func_913(iParam0);
		}
		else if (func_894(iParam0, -1718133314))
		{
			func_914(iParam0);
		}
		else if (func_894(iParam0, -1738650224))
		{
			func_915(iParam0);
		}
		else if (func_894(iParam0, -1112814642) && func_894(iParam0, 949916894))
		{
			func_916(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1940144->f_21 = 0;
		}
		else if (func_894(iParam0, 1841149704))
		{
			func_917();
		}
		else if (func_894(iParam0, -1979000645))
		{
		}
		else if (func_894(iParam0, 606799272))
		{
		}
		else if (func_894(iParam0, -1112814642) && func_894(iParam0, -1697809989))
		{
		}
		else if (func_894(iParam0, -2017733358) || func_894(iParam0, -1369131378))
		{
		}
		else if (func_894(iParam0, -1921346699))
		{
			return false;
		}
		else if (func_894(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_918(215778062, 1))
					{
						func_377(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_918(670273567, 1))
					{
						func_377(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_918(-967317137, 1))
					{
						func_377(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_918(526074061, 1))
					{
						func_377(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_918(-1045488665, 1))
					{
						func_377(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_918(471514780, 1))
					{
						func_377(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_894(iParam0, -839724752) && func_895(iParam0, 4))
		{
		}
		else if (func_894(iParam0, 1399091007))
		{
			func_919(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
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
				func_921(272, func_920(-21093309), 0);
				break;
			case 204375141:
				func_921(270, func_920(204375141), 0);
				break;
			case -417963070:
				func_921(271, func_920(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_922(685, 1934060482, 1, 1);
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
					func_922(685, 1110018439, 1, 1);
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
					func_922(685, 1408511260, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_922(685, -1228016946, 1, 1);
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
					func_922(686, -103579, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1940311->f_10903 + 60000))
				{
					func_922(686, -1531530025, 1, 1);
					Global_1940311->f_10903 = get_game_timer();
				}
				break;
			case 80178851:
				func_910(526, 0);
				break;
			case 1613651027:
				func_910(529, 0);
				break;
			case -885810591:
				break;
			case -601932535:
				if (func_896(1))
				{
					func_910(522, 0);
				}
				break;
			case -898386032:
				func_910(521, 0);
				break;
			case -2035110427:
				if (func_89() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_910(534, 0);
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
		iVar5 = iParam0;
		func_923(&iVar5);
		if (!func_903(iVar5, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_375(0))
		{
			return true;
		}
		if (func_893(iParam0) == -1037537535)
		{
			func_924(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_375(0) && !func_925())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_377(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_926(iVar2, 0);
		}
	}
	Var30 = { func_927(iParam0) };
	if (_stat_id_is_valid(&Var30))
	{
		_0x6a0184e904cdf25e(&Var30, iVar0);
	}
	func_928(iParam0);
	if (fParam6 > 0f)
	{
		if (func_894(iParam0, -839724752))
		{
			func_929(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_425(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return true;
}

int func_378(int iParam0)
{
	Var0 = { func_831(iParam0, 1, 0) };
	return func_832(Var0.f_4);
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_930(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_931(Var0);
}

void func_380(var uParam0, var uParam1, int iParam2)
{
	if (func_932(*uParam0))
	{
		return;
	}
	uParam1->f_8 = 0;
	func_933(uParam1, iParam2);
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

void func_381(var uParam0, int iParam1)
{
	if (is_bit_set(uParam0->f_2506.f_17, 11) && iParam1 == 0)
	{
		clear_bit(&(uParam0->f_2506.f_17), 11);
	}
	else if (!is_bit_set(uParam0->f_2506.f_17, 11) && iParam1 == 1)
	{
		set_bit(&(uParam0->f_2506.f_17), 11);
	}
}

bool func_382(var uParam0, bool bParam1)
{
	if (func_932(uParam0->f_2506))
	{
		func_176(uParam0, bParam1);
		return false;
	}
	uVar0 = uParam0->f_4;
	uVar1 = uParam0->f_3;
	uParam0->f_4 = 179;
	uParam0->f_3 = 20;
	if (!is_bit_set(uParam0->f_2506.f_17, 6))
	{
		if (is_bit_set(uParam0->f_2506.f_17, 7))
		{
			if (func_934(&(uParam0->f_2506)))
			{
				if (!is_bit_set(uParam0->f_2506.f_17, 8))
				{
					func_935(&(uParam0->f_2506));
				}
			}
			else if (is_bit_set(uParam0->f_2506.f_17, 8))
			{
				func_598(&(uParam0->f_2506));
			}
			if (is_bit_set(uParam0->f_2506.f_17, 8))
			{
				if (func_936(uParam0->f_2506.f_4, 1))
				{
					disable_control_action(0, -2131587435, false);
					func_937(uParam0->f_2506);
				}
				if (func_364(uParam0->f_2506.f_4, 1))
				{
					set_bit(&(uParam0->f_2506.f_17), 6);
					if (uParam0->f_2506.f_5 != 0)
					{
						_0xc9caeaeec1256e54(uParam0->f_2506.f_5);
					}
					clear_ped_tasks(uParam0->f_2506, 1, 0);
					func_937(uParam0->f_2506);
					func_598(&(uParam0->f_2506));
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
		func_937(get_player_ped(player_id()));
		if (!is_bit_set(uParam0->f_2506.f_17, 3))
		{
			func_938(&(uParam0->f_2506));
			set_bit(&(uParam0->f_2506.f_17), 3);
		}
		if (!is_bit_set(uParam0->f_2506.f_17, 2))
		{
			func_939(uParam0);
		}
		if (!is_bit_set(uParam0->f_2506.f_17, 4))
		{
			if (func_940(&(uParam0->f_2506)))
			{
				set_bit(&(uParam0->f_2506.f_17), 4);
			}
		}
		if (is_bit_set(uParam0->f_2506.f_17, 2) && is_bit_set(uParam0->f_2506.f_17, 4))
		{
			func_941(&(uParam0->f_2506));
			if (func_942(&iVar2))
			{
				func_943(iVar2, 0);
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
		if (!func_944(uParam0))
		{
			func_176(uParam0, bParam1);
			uParam0->f_4 = uVar0;
			uParam0->f_3 = uVar1;
			return false;
		}
		set_ped_reset_flag(uParam0->f_2506, 258, true);
		func_945(uParam0);
	}
	uParam0->f_4 = uVar0;
	uParam0->f_3 = uVar1;
	return true;
}

void func_383(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

void func_384()
{
	func_526(119);
}

bool func_385(var uParam0)
{
	if (!func_376(uParam0))
	{
		return false;
	}
	if (!func_251(uParam0, 55))
	{
		func_810(func_809(0));
		if (func_123() == 2026485318)
		{
			func_684(&(uParam0->f_384.f_318[3]->f_18), 617531372);
		}
		else
		{
			func_684(&(uParam0->f_384.f_318[3]->f_18), 291123060);
		}
		iVar2 = 0;
		iVar0 = 0;
		while (iVar0 < uParam0->f_384.f_211)
		{
			if (!func_946(&(uParam0->f_384.f_10[iVar0])))
			{
			}
			else
			{
				if (1882579758 == func_947(&(uParam0->f_384.f_10[iVar0])))
				{
					iVar2 = func_948(&(uParam0->f_384.f_10[iVar0]));
					if (iVar2 != 0)
					{
						iVar1 = func_949(uParam0, iVar2);
						if (iVar1 != -1)
						{
							func_684(&(uParam0->f_384.f_318[3]->f_18), uParam0->f_384.f_10[iVar1]->f_1);
						}
					}
				}
				else if (1759215194 == func_947(&(uParam0->f_384.f_10[iVar0])) && iVar2 != 0)
				{
				}
				else
				{
					func_684(&(uParam0->f_384.f_318[3]->f_18), uParam0->f_384.f_10[iVar0]->f_1);
				}
			}
			iVar0++;
		}
		if (uParam0->f_384.f_318[3]->f_18 <= 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_384.f_263)
			{
				func_684(&(uParam0->f_384.f_318[3]->f_18), uParam0->f_384.f_212[iVar0]->f_1);
				iVar0++;
			}
		}
		func_112(uParam0, 55);
	}
	return true;
}

void func_386(var uParam0)
{
	func_950(uParam0, 0f);
}

void func_387(int iParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*iParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_951(vVar0);
			break;
		case 1:
			vVar0.x = iParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_951(vVar0);
			if (!iParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = iParam0->f_1;
				Var6.f_5 = *iParam0;
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
				func_952(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(iParam0->f_2)))
				{
					return;
				}
				vVar0.x = iParam0->f_1;
				vVar0.f_2 = iParam0->f_2;
				func_951(vVar0);
				if (!iParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = iParam0->f_1;
					Var14.f_5 = *iParam0;
					Var14.f_7 = iParam0->f_2;
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
					func_952(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

void func_388(var uParam0)
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

void func_389()
{
	if (func_393(2))
	{
		func_493(2);
	}
}

void func_390(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2 && !func_358(iParam0))
	{
		return;
	}
	iVar0 = func_874(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_0xf4a5c4509bf923b1((*Global_1951255)[iVar0]->f_3, iParam1);
}

void func_391()
{
	func_953(1);
	func_953(2);
	func_953(4);
	func_953(8);
	func_953(16);
	func_953(32);
	func_953(64);
}

bool func_392()
{
	bVar0 = (((Global_1132288->f_2019 == 2 || (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 11)) || Global_1132288->f_2019 == 12) || (Global_1132288->f_2019 >= 13 && Global_1132288->f_2019 <= 19));
	return bVar0;
}

bool func_393(int iParam0)
{
	return func_954((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

char* func_394(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -682748:
				return "GC_GRIZZLIES_DIST";
			case 1357161730:
				return "GC_BAYOU_DIST";
			case 1581179681:
				return "GC_BIG_VALLEY_DIST";
			case -987049424:
				return "GC_CUMBERLAND_FOREST_DIST";
			case -1554232707:
				return "GC_GREAT_PLAINS_DIST";
			case 1538293636:
				return "GC_HEARTLANDS_DIST";
			case -1871413878:
				return "GC_ROANOKE_RIDGE_DIST";
			case 1483778247:
				return "GC_SCARLETT_MEADOWS_DIST";
			case -724534761:
				return "GC_TALL_TREES_DIST";
			case 892234183:
				return "GC_GAPTOOTH_RIDGE_DIST";
			case -1884014371:
				return "GC_RIO_BRAVO_DIST";
			case -215258135:
				return "GC_CHOLLA_SPRINGS_DIST";
			case -1992167326:
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -682748:
				return "GRIZZLIES_DIST";
			case 1357161730:
				return "BAY";
			case 1581179681:
				return "BGV";
			case -987049424:
				return "CML";
			case -1554232707:
				return "GRT";
			case 1538293636:
				return "HRT";
			case -1871413878:
				return "ROA";
			case 1483778247:
				return "SCM";
			case -724534761:
				return "TAL";
			case 892234183:
				return "GAP";
			case -1884014371:
				return "RIO";
			case -215258135:
				return "CHO";
			case -1992167326:
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

void func_395(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, float fParam6, bool bParam7, bool bParam8)
{
	if (is_entity_dead(get_player_ped(iParam0)))
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(get_player_ped(iParam0), iParam1, bParam3, iParam4, false);
	if (bParam5)
	{
		simulate_player_input_gait(iParam0, fVar0, iParam2, get_entity_heading(get_player_ped(iParam0)), bParam7, bParam8);
	}
	else
	{
		simulate_player_input_gait(iParam0, fVar0, iParam2, fParam6, bParam7, bParam8);
	}
}

bool func_396(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 <= -1 || iParam2 >= 5)
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
	if (!_does_scenario_point_exist(&(uParam0->f_35[iParam2])))
	{
		return false;
	}
	if (_0x9c54041bb66bcf9e(iParam1, &(uParam0->f_35[iParam2])))
	{
		if (is_ped_active_in_scenario(iParam1, 1))
		{
			return true;
		}
	}
	if (func_757(iParam1, -76381094))
	{
		if (_get_scenario_point_type_ped_is_using(iParam1) != _get_scenario_point_type(&(uParam0->f_35[iParam2])))
		{
			_task_use_scenario_point(iParam1, &(uParam0->f_35[iParam2]), 0, iParam3, !bParam4, bParam4, 0, false, -1f, false);
		}
	}
	else
	{
		_task_use_scenario_point(iParam1, &(uParam0->f_35[iParam2]), 0, iParam3, !bParam4, bParam4, 0, false, -1f, false);
	}
	return false;
}

bool func_397(var uParam0, var uParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (!_does_scenario_point_exist(*uParam1))
	{
		*uParam1 = _find_closest_active_scenario_point_of_type(vParam2, iParam5, fParam6, 0, false);
	}
	if (_0x9c54041bb66bcf9e(*uParam0, *uParam1))
	{
		if (is_ped_active_in_scenario(*uParam0, 1))
		{
			return true;
		}
	}
	if (!func_757(*uParam0, -76381094))
	{
		_task_use_scenario_point(*uParam0, *uParam1, 0, iParam7, !bParam8, bParam8, 0, false, -1f, false);
	}
	return false;
}

bool func_398(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

float func_399(var uParam0)
{
	return func_690(&(uParam0->f_41.f_72));
}

bool func_400(var uParam0)
{
	return func_289(uParam0->f_41.f_1);
}

int func_401(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_402(int iParam0)
{
	return func_955(iParam0, 1);
}

void func_403(var uParam0)
{
	func_238(&(uParam0->f_41.f_72), 1);
}

void func_404(int iParam0, int iParam1)
{
	(*Global_1120070)[iParam0]->f_21 = ((*Global_1120070)[iParam0]->f_21 - ((*Global_1120070)[iParam0]->f_21 && iParam1));
}

bool func_405(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_1120070->f_8461[iVar0][iVar1] == iParam0)
			{
				return true;
			}
			iVar1++;
		}
		iVar0++;
	}
	return false;
}

bool func_406(int iParam0, int iParam1)
{
	return ((*Global_1120070)[iParam0]->f_19 && iParam1) != 0;
}

bool func_407(var uParam0)
{
	if (uParam0->f_1348.f_139 == -1)
	{
		uParam0->f_1348.f_139 = func_235(1717788883);
		if (uParam0->f_1348.f_139 == -1)
		{
			return false;
		}
		func_413(uParam0->f_1348.f_139);
		func_956(uParam0->f_1348.f_139);
	}
	if (_get_number_of_references_of_script_with_name_hash(-230235335) == 0)
	{
		return false;
	}
	return true;
}

int func_408()
{
	return Global_1109804->f_21.f_12.f_1;
}

int func_409()
{
	return Global_1109804->f_21.f_12.f_2;
}

float func_410(var uParam0)
{
	if (!func_237(uParam0))
	{
		return 0f;
	}
	if (func_957(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_958() - uParam0->f_1);
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPINTRO_OBJ_GO_TO_HIDEOUT_AREA_RHODES";
		case 1:
			return "MPINTRO_OBJ_GO_TO_HIDEOUT_AREA_VALENTINE";
		case 2:
			return "MPINTRO_OBJ_GO_TO_HIDEOUT_AREA_BLACKWATER";
		case 3:
			return "MPINTRO_OBJ_GO_TO_HIDEOUT_AREA_TUMBLEWEED";
		default:
			break;
	}
	return "";
}

void func_412(var uParam0)
{
	switch (uParam0->f_41.f_71)
	{
		case 0:
			if ((func_408() != -1 && func_409() == 4) || func_399(uParam0) > 120f)
			{
				func_349(uParam0, 21);
			}
			break;
		case 21:
			if (func_399(uParam0) > 2f)
			{
				if (func_341(uParam0, -145192042, 10000, 0, 0))
				{
					func_349(uParam0, 22);
				}
			}
			break;
		case 22:
			if (!func_400(uParam0))
			{
				func_349(uParam0, 1);
			}
			break;
		case 1:
			if (func_399(uParam0) > 10f && !func_277(uParam0, uParam0->f_4, 1, 1))
			{
				_uitutorial_set_rpg_icon_visibility(4, 3);
				_uitutorial_set_rpg_icon_visibility(5, 1);
				_uitutorial_set_rpg_icon_visibility(6, 2);
				_uitutorial_set_rpg_icon_visibility(7, 2);
				_uitutorial_set_rpg_icon_visibility(8, 2);
				_uitutorial_set_rpg_icon_visibility(9, 2);
				func_112(uParam0, 57);
				if (func_341(uParam0, 2122030255, 10000, 0, 0))
				{
					func_349(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_400(uParam0))
			{
				_uitutorial_set_rpg_icon_visibility(4, 1);
				func_349(uParam0, 3);
			}
			break;
		case 3:
			if (func_399(uParam0) > 0.5f)
			{
				_uitutorial_set_rpg_icon_visibility(5, 3);
				if (func_341(uParam0, -1009016704, 10000, 0, 0))
				{
					func_349(uParam0, 4);
				}
			}
			break;
		case 4:
			if (!func_400(uParam0))
			{
				func_349(uParam0, 5);
			}
			break;
		case 5:
			if (func_399(uParam0) > 0.5f)
			{
				_uitutorial_set_rpg_icon_visibility(5, 3);
				if (func_341(uParam0, -218434834, 10000, 0, 0))
				{
					func_349(uParam0, 6);
				}
			}
			break;
		case 6:
			if (!func_400(uParam0))
			{
				_uitutorial_set_rpg_icon_visibility(4, 0);
				_uitutorial_set_rpg_icon_visibility(5, 0);
				func_349(uParam0, 7);
			}
			break;
		case 7:
			if (func_399(uParam0) > 2f)
			{
				_uitutorial_set_rpg_icon_visibility(0, 3);
				_uitutorial_set_rpg_icon_visibility(1, 1);
				if (func_341(uParam0, 939936749, 10000, 0, 0))
				{
					func_349(uParam0, 8);
				}
			}
			break;
		case 8:
			if (!func_400(uParam0))
			{
				_uitutorial_set_rpg_icon_visibility(0, 1);
				func_349(uParam0, 9);
			}
			break;
		case 9:
			if (func_399(uParam0) > 0.5f)
			{
				_uitutorial_set_rpg_icon_visibility(1, 3);
				if (func_341(uParam0, -1658185487, 10000, 0, 0))
				{
					func_349(uParam0, 10);
				}
			}
			break;
		case 10:
			if (!func_400(uParam0))
			{
				_uitutorial_set_rpg_icon_visibility(0, 0);
				_uitutorial_set_rpg_icon_visibility(1, 0);
				_uitutorial_set_rpg_icon_visibility(6, 0);
				_uitutorial_set_rpg_icon_visibility(7, 0);
				_uitutorial_set_rpg_icon_visibility(8, 0);
				_uitutorial_set_rpg_icon_visibility(9, 0);
				func_167(uParam0, 57);
				func_349(uParam0, -1);
			}
			break;
		case 11:
			if (_does_volume_exist(&(uParam0->f_164[8])))
			{
				vVar0 = { _0xf70f00013a62f866(&(uParam0->f_164[8])) };
				fVar3 = func_867(uParam0->f_4, vVar0, 1);
				if ((get_frame_count() % 30) == 0)
				{
				}
			}
			if (func_399(uParam0) > 10f && fVar3 < 300f)
			{
				if (func_341(uParam0, -151751190, 10000, 0, 0))
				{
					func_349(uParam0, 12);
				}
			}
			break;
		case 12:
			if (!func_400(uParam0))
			{
				func_349(uParam0, 13);
			}
			break;
		case 13:
			if (func_399(uParam0) > 0.5f)
			{
				if (func_341(uParam0, -366445720, 10000, 0, 0))
				{
					func_349(uParam0, 14);
				}
			}
			break;
		case 14:
			if (!func_400(uParam0))
			{
				func_349(uParam0, 15);
			}
			break;
		case 15:
			if (func_399(uParam0) > 0.5f)
			{
				if (func_341(uParam0, 1934276204, 10000, 0, 0))
				{
					func_349(uParam0, 31);
				}
			}
			break;
	}
}

void func_413(int iParam0)
{
	if (!func_792(iParam0, 65536, 255))
	{
		func_959(iParam0, 65536);
	}
}

void func_414(int iParam0)
{
	if (func_792(iParam0, 65536, 255))
	{
		func_793(iParam0, 65536);
	}
}

bool func_415(var uParam0)
{
	if (func_251(uParam0, 20))
	{
		return true;
	}
	if (func_251(uParam0, 21))
	{
		return true;
	}
	if (_0x5407b7288d0478b7(uParam0->f_4, 16896) != _0x5407b7288d0478b7(uParam0->f_4, 512))
	{
		return true;
	}
	return false;
}

bool func_416(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_417()
{
	func_278(8);
}

bool func_418(int iParam0, int iParam1)
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
	if (func_954(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_954(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_954(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_954(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_954(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_954(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_954(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_954(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_419(var uParam0, var uParam1)
{
	iVar0 = func_370(uParam0, 8);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (_does_anim_scene_exist(uParam1->f_4808.f_35.f_2))
	{
		remove_anim_scene_entity(uParam1->f_4808.f_35.f_2, "MP_map01x", iVar0);
	}
	if (is_entity_attached(iVar0))
	{
		detach_entity(iVar0, true, true);
	}
	activate_physics(iVar0);
	func_423(uParam0, uParam1);
	func_960(uParam1->f_2, iVar0);
}

void func_420(var uParam0, int iParam1)
{
	func_187(&(uParam0->f_4808.f_35.f_37));
	uParam0->f_4808.f_35 = iParam1;
	uParam0->f_4808.f_35.f_1 = uParam0->f_14;
}

void func_421(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_358(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_874(*uParam0);
	if ((*Global_1951255)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_961(iVar0);
	*uParam0 = 0;
}

void func_422()
{
	enable_control_action(0, -473983589, false);
	enable_control_action(0, -668070958, true);
	enable_control_action(0, 1250966545, true);
	enable_control_action(0, -944425974, true);
	enable_control_action(0, 359624985, true);
	enable_control_action(0, -1929387871, true);
	enable_control_action(0, 2014399155, true);
	enable_control_action(0, -2021715929, true);
	enable_control_action(0, 146634124, true);
	enable_control_action(0, 130948705, false);
	enable_control_action(0, -1292666904, false);
}

void func_423(var uParam0, var uParam1)
{
	iVar0 = func_370(uParam0, 8);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	uParam1->f_1348.f_344 = { get_entity_coords(iVar0, true, false) };
	if (!get_ground_z_for_3d_coord(uParam1->f_1348.f_344, &uVar1, false))
	{
		vVar2 = { get_entity_coords(uParam1->f_4, true, false) };
		uParam1->f_1348.f_344.f_2 = vVar2.z;
		if (get_ground_z_for_3d_coord(uParam1->f_1348.f_344, &(uParam1->f_1348.f_344.f_2), false))
		{
			func_962(iVar0, uParam1->f_1348.f_344, get_entity_heading(iVar0), 2, 1073741824);
		}
	}
}

bool func_424(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0) || !does_entity_exist(iParam1))
	{
		return false;
	}
	if (((((is_entity_touching_entity(iParam0, iParam1) || func_346(iParam0, iParam1, 0.6f, 1, 1)) && !func_963(iParam0)) && !_is_ped_hogtying(iParam0)) && !is_ped_in_melee_combat(iParam0)) && !_0x0e99e3bf11bb6367(iParam0))
	{
		return true;
	}
	return false;
}

void func_425(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_889(iParam0, 0))
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
	if (!func_964() || bParam6)
	{
		func_965(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_966(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam0 == 1701457723)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_966(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_895(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_893(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if (((((((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_947(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_967(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	if (func_894(iParam0, 474910316))
	{
		sVar17 = func_968(iParam0);
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
	if (func_894(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	if (func_969(iParam0))
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
	iVar18 = func_920(iParam0);
	if ((func_970(iVar12) && func_894(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_971(iParam0);
	}
	else if (func_893(iParam0) == -1037537535)
	{
		iVar19 = func_972(iParam0);
		if (func_889(iVar19, 0))
		{
			iVar18 = func_920(iVar19);
		}
	}
	if (func_973(iParam0, 1443104131) && bParam3)
	{
		iVar20 = 1;
		func_974(iParam0, -915411861, &iVar20, 0);
		iVar1 = ceil((to_float(iVar1) / to_float(iVar20)));
		iParam1 = ceil((to_float(iParam1) / to_float(iVar20)));
	}
	sVar21 = func_975(_create_var_string(10, &cVar2, _create_var_string(0, iVar18), iVar1), iVar13);
	if (iParam1 == 1)
	{
		sVar21 = _create_var_string(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar21 = _create_var_string(0, func_976(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		StringCopy(&cVar22, "", 128);
		if (func_977(iParam0, &cVar22))
		{
			sVar21 = func_979(func_978(cVar22), 109029619);
		}
	}
	func_980(sVar21, Var7.f_1, get_hash_key(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_426(int iParam0, bool bParam1, bool bParam2)
{
	if (func_89() != 0)
	{
		return;
	}
	if (func_981())
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
		if (!&Global_1139381->f_3876.f_2[func_541(iParam0, 1)])
		{
			return;
		}
	}
	(Global_1139381->f_3876.f_2[func_541(iParam0, 1)])->f_2++;
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
	func_982(&Var0, uVar7);
}

void func_427(var uParam0, bool bParam1)
{
	Global_1956200->f_1 = uParam0;
	if (bParam1)
	{
		func_983(bParam1);
	}
}

bool func_428()
{
	if (Global_1940144->f_105 != -1)
	{
		return true;
	}
	if (Global_1940144->f_105.f_2 != -1)
	{
		return true;
	}
	return busyspinner_is_on();
}

void func_429(var uParam0)
{
	func_72(uParam0);
	func_34(uParam0, 16);
}

bool func_430()
{
	if (does_entity_exist(player_ped_id()) && _0x038b1f1674f0e242(Global_34))
	{
		return true;
	}
	return false;
}

bool func_431()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_432(var uParam0, int iParam1)
{
	if (!func_400(uParam0))
	{
		return false;
	}
	return uParam0->f_41 == iParam1;
}

bool func_433(int iParam0)
{
	return (Global_1211392->f_1.f_8 != -1 && func_984(Global_1211392->f_1.f_8, iParam0));
}

void func_434(var uParam0)
{
	Var0.f_4 = 1;
	Var0.f_5 = uParam0;
	_0x31010318ba9897ac(&uVar6, player_id());
	func_729(&Var0, uVar6);
}

bool func_435(int iParam0)
{
	return func_954(Global_1211392->f_1.f_5, iParam0);
}

void func_436(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_985())
	{
		Global_1913504->f_125 = get_game_timer();
		Global_1913504->f_126 = iParam1;
	}
	Global_1913504->f_127 = (Global_1913504->f_127 + iParam0);
}

void func_437(int iParam0, char* sParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "NUMBER";
	}
	fVar0 = (IntToFloat(func_986(iParam0)) + (IntToFloat(func_987(iParam0, 1)) * (1f / 100f)));
	func_980(_create_var_string(6, sParam1, fVar0), "ITEMTYPE_TEXTURES", -1959861270, 0, 1684603218, 0, 0, 0, 1);
}

bool func_438()
{
	return Global_1940144->f_10;
}

bool func_439()
{
	return _is_app_active(-1641598689);
}

int func_440(int iParam0, bool bParam1)
{
	if (func_988())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_989(iParam0);
	Var1 = { func_666(bParam1) };
	iVar5 = func_990(Var1, iVar0, 0, bParam1);
	if (!func_991(iVar5))
	{
		return 0;
	}
	return func_992(iVar5);
}

bool func_441(var uParam0)
{
	if (func_298(uParam0->f_8))
	{
		if (!func_993(uParam0->f_8))
		{
			return false;
		}
	}
	return true;
}

void func_442()
{
	_sc_feed_submit_preset_message(3, 1);
	if (is_orbis_version())
	{
		iVar0 = func_994(7);
		(*Global_1900874)[iVar0] = 7;
		StringCopy(&((*Global_1900874)[iVar0]->f_2), "AF_MP_INTRO_TITLE", 24);
		StringCopy(&((*Global_1900874)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1900874)[iVar0]->f_21), "AF_MP_INTRO_COM", 24);
		StringCopy(&((*Global_1900874)[iVar0]->f_24), "AF_RDO", 24);
		StringCopy((*Global_1900874)[iVar0]->f_5[0], "-mode=freeroam", 24);
		(*Global_1900874)[iVar0]->f_46 = 1;
	}
}

bool func_443(var uParam0, vector3 vParam1, float fParam4)
{
	if (is_ped_on_mount(uParam0->f_4))
	{
		uParam0->f_1348.f_343 = get_mount(uParam0->f_4);
	}
	if ((func_418(uParam0->f_1348.f_343, 0) && func_356(uParam0->f_1348.f_343, vParam1, fParam4, 1, 1)) && func_745(uParam0->f_4, uParam0->f_1348.f_343, 1080033280))
	{
		return true;
	}
	return false;
}

bool func_444(var uParam0)
{
	if (is_thread_active(uParam0->f_4808.f_81, false))
	{
		return true;
	}
	request_script_with_name_hash(-194424759);
	if (has_script_with_name_hash_loaded(-194424759))
	{
		uParam0->f_4808.f_81 = start_new_script_with_name_hash_and_args(-194424759, &(uParam0->f_4808.f_81.f_1), 1, 6000);
		set_script_with_name_hash_as_no_longer_needed(-194424759);
	}
	return false;
}

bool func_445()
{
	return Global_1572887->f_106.f_75 != 1;
}

bool func_446()
{
	if (!_does_thread_exist(Global_265377->f_124745))
	{
		return false;
	}
	if (!is_thread_active(Global_265377->f_124745, false))
	{
		return false;
	}
	return true;
}

bool func_447(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

struct<2> func_448()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_449()
{
	return Global_1051252->f_8;
}

bool func_450(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

bool func_451(var uParam0, int iParam1)
{
	return (uParam0->f_17 && iParam1) != 0;
}

int func_452()
{
	if (!func_995())
	{
		return -1;
	}
	return Global_1572887->f_106.f_9;
}

bool func_453(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = int_to_participantindex(iParam0);
	*iParam2 = 255;
	if (!network_is_participant_active(*uParam1))
	{
		return false;
	}
	*iParam2 = network_get_player_index(*uParam1);
	if (!_network_is_player_index_valid(*iParam2))
	{
		return false;
	}
	if (!network_is_player_active(*iParam2))
	{
		return false;
	}
	return true;
}

void func_454(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
	func_44(uParam0, 32);
}

bool func_455(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return false;
	}
	return (uParam0->f_81[iParam1]->f_4 && iParam2) != 0;
}

void func_456(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_2 = 0;
	func_532(uParam0, 2);
}

bool func_457(int iParam0)
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

void func_458(var uParam0, int iParam1)
{
	if (func_69(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_459(var uParam0, int iParam1)
{
	if (!func_69(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_460(var uParam0, var uParam1, int iParam2)
{
	if (func_450((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 || iParam2);
}

var func_461(int iParam0, int iParam1)
{
	return func_996(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_462(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_463(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (get_number_of_free_stacks_of_this_size(1024) <= 0)
	{
		return false;
	}
	request_script("net_session_split");
	if (has_script_loaded("net_session_split"))
	{
		Global_1071686->f_28340 = start_new_script_with_args("net_session_split", &uParam0, 5, 1024);
		set_script_as_no_longer_needed("net_session_split");
		return true;
	}
	return false;
}

bool func_464()
{
	if (!does_script_with_name_hash_exist(889764242))
	{
		return false;
	}
	return _get_number_of_references_of_script_with_name_hash(889764242) > 0;
}

void func_465(var uParam0, var uParam1, int iParam2)
{
	if (!func_450((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 - ((*uParam0)[uParam1->f_1]->f_1 && iParam2));
}

void func_466(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_152.f_1]->f_4 = iParam2;
	uParam1->f_152.f_12 = (*uParam0)[uParam1->f_152.f_1]->f_4;
	func_505(&(uParam0->f_11), &(uParam1->f_152), 1);
	func_63(&(uParam1->f_152), 256);
	func_465(uParam0, &(uParam1->f_152), 128);
	func_116(&(uParam0->f_11), &(uParam1->f_152), 0);
	func_349(&(uParam1->f_152), 0);
}

void func_467(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_468(var uParam0)
{
	func_997(uParam0, -940387254);
	func_86(3);
	uParam0->f_327.f_1 = 0;
}

struct<2> func_469(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_448();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_470(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1]->f_2 = iParam2;
}

void func_471(var uParam0, var uParam1, int iParam2)
{
	(*uParam0)[uParam1->f_1]->f_3 = iParam2;
}

void func_472(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	iVar0 = func_999(func_998(Param0));
	iVar1 = func_1000(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_89() == 0)
	{
		Var2 = Global_265377->f_124517.f_71.f_17;
		func_1001(Param0, &Var2);
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

void func_473(var uParam0, var uParam1, bool bParam2)
{
	func_65(uParam0, uParam1, bParam2);
	func_1002(uParam1, 0);
}

bool func_474(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (func_1003(uParam0, uParam1))
	{
		switch (uParam0->f_22)
		{
			case 0:
				if (uParam0->f_20 == -1)
				{
					if (func_1004(uParam1))
					{
						if (is_ped_male(*uParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_GatGun_F", 129, 0, false, true);
						}
						bVar0 = true;
					}
					else if (is_ped_on_mount(*uParam1))
					{
						if (is_ped_male(*uParam1))
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_M", 129, 0, false, true);
						}
						else
						{
							uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_OnHorse_F", 129, 0, false, true);
						}
					}
					else if (is_ped_male(*uParam1))
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_M", 129, 0, false, true);
					}
					else
					{
						uParam0->f_20 = _create_anim_scene("script@mp@trans@ReverseAngleCam_F", 129, 0, false, true);
					}
					vVar1 = { get_entity_coords(*uParam1, true, true) };
					if (bVar0)
					{
						vVar1.f_2 = (vVar1.z + 1f);
					}
					set_anim_scene_origin(uParam0->f_20, vVar1, get_entity_rotation(*uParam1, 2), 2);
					load_anim_scene(uParam0->f_20);
					_0xdf7b5144e25cd3fe(uParam0->f_20, "LIVE");
					func_1005(&(uParam0->f_22), 1);
				}
				break;
			case 1:
				iVar4 = func_1006(uParam0, uParam1, bParam2, 0, uParam0->f_12);
				if (func_1004(uParam1))
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
						if (func_1007(uParam1))
						{
							uParam0->f_9 = 2;
						}
					}
					else if (iVar4 == 1)
					{
						func_1005(&(uParam0->f_22), 2);
					}
				}
				else if (iVar4 == 1)
				{
					func_1005(&(uParam0->f_22), 2);
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
						func_1008((*uParam0)[0]);
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
						func_1009(uParam0->f_21, 0, 5);
						set_anim_scene_int(uParam0->f_20, "CameraIndex", uParam0->f_21, false);
						_set_anim_scene_playback_list_bool(uParam0->f_20, "LIVE", true);
						func_1010(&(uParam0->f_18), 0, 0);
						func_1005(&(uParam0->f_22), 3);
					}
				}
				break;
			case 3:
				if (bParam3)
				{
					if (is_ped_on_mount(*uParam1))
					{
						set_ped_max_move_blend_ratio(*uParam1, 0f);
						if (!is_move_blend_ratio_still(get_ped_desired_move_blend_ratio(*uParam1)))
						{
							return false;
						}
						if (!_is_ped_getting_into_a_mount_seat(*uParam1, true))
						{
							return false;
						}
					}
				}
				if (get_entity_speed(*uParam1) > 0.01f)
				{
					if (func_1011(&(uParam0->f_18)) && func_1012(&(uParam0->f_18), 0, 0) < 3000)
					{
						return false;
					}
				}
				vVar5 = { get_entity_coords(*uParam1, true, true) };
				set_anim_scene_origin(uParam0->f_20, vVar5, get_entity_rotation(*uParam1, 2), 2);
				func_519(&(uParam0->f_18));
				func_1005(&(uParam0->f_22), 4);
				break;
			case 4:
				if (uParam0->f_17)
				{
					if (bParam2)
					{
						func_1013(uParam1, uParam0);
					}
					_freeze_ped_camera_rotation(*uParam1);
					func_1005(&(uParam0->f_22), 5);
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

int func_475()
{
	return -1904156936;
}

int func_476()
{
	return 2015838421;
}

char[] func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "STORY_COOP_RTIT_DEAD";
		case 1:
			return "STORY_COOP_RTIT_FAILED";
		case 2:
			return "STORY_COOP_RTIT_FAILED";
		case 3:
			return "STORY_COOP_RTIT_FAILED";
		case 4:
			return "STORY_COOP_RTIT_FAILED";
		case 5:
			return "STORY_COOP_RTIT_FAILED";
		case 6:
			return "STORY_COOP_RTIT_FAILED";
		case 7:
			return "STORY_COOP_RTIT_FAILED";
		case 8:
			return "STORY_COOP_RTIT_FAILED";
		default:
			break;
	}
	return "";
}

char* func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "STORY_COOP_RBOD_FAILED_HIDEOUT";
		case 2:
			return "STORY_COOP_RBOD_ABANDONED_STRANGER";
		case 3:
			return "STORY_COOP_RBOD_ABANDONDED_HORLEY";
		case 4:
			return "STORY_COOP_RBOD_LEFT_STAGE_BOUNDS";
		case 5:
			return "STORY_COOP_RBOD_PLAYER_HORSE_DIED";
		case 6:
			return "STORY_COOP_RBOD_ATK_HORLEY";
		case 7:
			return "STORY_COOP_RBOD_ATK_JESSICA";
		case 8:
			return "STORY_COOP_RBOD_FAILED_LAW";
		default:
			break;
	}
	return "";
}

var func_479(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = sParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

bool func_480(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x59fa676177dbe4c9(iParam0) == 4;
}

bool func_481(var uParam0, var uParam1)
{
	if (!_event_manager_peek_event(-1933804684, uParam1))
	{
		return false;
	}
	if (*uParam1 != -1203660660)
	{
		return false;
	}
	if (uParam1->f_1 != uParam0->f_63)
	{
		return false;
	}
	return true;
}

void func_482(var uParam0)
{
	func_34(uParam0, 1);
	func_34(uParam0, 2);
}

void func_483(var uParam0, var uParam1, var uParam2)
{
	Var35.f_3 = 255;
	Var35.f_4 = -1;
	Var35.f_5 = 623901053;
	Var35.f_6.f_3 = 255;
	Var35.f_6.f_4 = -1;
	Var35.f_6.f_5 = 623901053;
	Var35.f_12.f_3 = 255;
	Var35.f_12.f_4 = -1;
	Var35.f_12.f_5 = 623901053;
	Var35.f_18.f_3 = 255;
	Var35.f_18.f_4 = -1;
	Var35.f_18.f_5 = 623901053;
	Var35.f_24.f_3 = 255;
	Var35.f_24.f_4 = -1;
	Var35.f_24.f_5 = 623901053;
	iVar2 = get_number_of_events(1);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = get_event_at_index(1, iVar0);
		switch (iVar1)
		{
			case -1315570756:
				if (get_event_data(1, iVar0, &uVar3, 32))
				{
					func_1014(&uVar3, &Var35);
					func_1015(&Var35, 87, 6);
					func_1016(&(uParam0->f_7), &(uParam1->f_11), &(uParam2->f_152), &Var35);
				}
				break;
			default:
				func_1017(&(uParam0->f_7), &(uParam1->f_11), &(uParam2->f_152), iVar1, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_484()
{
	func_1018(1);
	func_1018(4);
}

bool func_485(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (func_1019(2, iParam0))
	{
		return false;
	}
	if (!func_1019(8, iParam0))
	{
		return false;
	}
	return true;
}

void func_486(var uParam0, var uParam1)
{
	iVar0 = 10;
	switch (uParam1->f_64)
	{
		case 0:
			if (!_does_volume_exist(uParam1->f_152.f_377))
			{
				return;
			}
			if (!_0xd9130842d7226045(func_1020(), 0))
			{
				return;
			}
			func_1002(uParam1, 1);
			break;
		case 1:
			func_65(uParam0, uParam1, 1);
			if (!_does_volume_exist(uParam1->f_152.f_377))
			{
				return;
			}
			if (!does_entity_exist(uParam1->f_152.f_4) || is_entity_dead(uParam1->f_152.f_4))
			{
				return;
			}
			if (!is_screen_faded_in())
			{
				return;
			}
			if (is_entity_in_volume(uParam1->f_152.f_4, uParam1->f_152.f_377, false, 0))
			{
				return;
			}
			uParam1->f_65 = _0xa6ef0c54a3443e70(-569474439, uParam1->f_152.f_377);
			func_182(1);
			animpostfx_play(func_506());
			uParam1->f_152.f_41.f_9 = func_859(_create_var_string(0, uParam1->f_152.f_377.f_2), -1, 0, 0, 1);
			func_1002(uParam1, 2);
			break;
		case 2:
			if (!_does_volume_exist(uParam1->f_152.f_377))
			{
				func_1002(uParam1, 1);
				return;
			}
			if (!does_entity_exist(uParam1->f_152.f_4) || is_entity_dead(uParam1->f_152.f_4))
			{
				func_1002(uParam1, 1);
				return;
			}
			func_121(uParam0, &(uParam1->f_152), 4);
			iVar0 = func_1009(((10000 - uParam1->f_70) / 1000) + 1, 1, 10);
			_0xc9caeaeec1256e54(-2124237476);
			_0x8910c24b7e0046ec();
			if (!animpostfx_is_running(func_506()))
			{
				animpostfx_play(func_506());
			}
			if ((_is_any_app_running() || func_438()) || func_1021())
			{
				func_507(uParam1);
			}
			else if (!_uistatemachine_exists(190275865))
			{
				if (_uiflowblock_enter(uParam1->f_66, -301617666) && _uistatemachine_create(190275865, uParam1->f_66))
				{
				}
			}
			else if (_text_database_has_loaded("UIC"))
			{
				func_1022(4);
				_databinding_write_data_bool(uParam1->f_67, true);
				_databinding_write_data_string(uParam1->f_68, _create_var_string(2, "UI_L_ONEPAR", iVar0));
				if (iVar0 < 30)
				{
					_0xf972f0ab16dc5260("MP_OutofArea", 1, (to_float(iVar0) / 30f));
				}
			}
			else
			{
				_text_database_request("UIC");
			}
			if (!func_69(uParam1, 32))
			{
				_0x6339c1ea3979b5f7("default", "out_of_bounds_scenes");
				func_1023();
				if (uParam1->f_69 == -1)
				{
					uParam1->f_69 = get_sound_id();
				}
				if (uParam1->f_69 != -1)
				{
					_0xce5d0ffe83939af1(uParam1->f_69, "Out_of_Bounds", func_76(), 1);
					func_458(uParam1, 32);
				}
			}
			if (func_69(uParam1, 32))
			{
				if (uParam1->f_69 != -1)
				{
					_0x503703ec1781b7d6(uParam1->f_69, "Time", to_float(iVar0));
				}
			}
			if (!func_289(uParam1->f_152.f_41.f_9))
			{
				uParam1->f_152.f_41.f_9 = func_859(_create_var_string(0, uParam1->f_152.f_377.f_2), -1, 0, 0, 1);
			}
			if (is_entity_in_volume(uParam1->f_152.f_4, uParam1->f_152.f_377, false, 0))
			{
				func_1002(uParam1, 1);
			}
			else if (uParam1->f_70 >= 10000)
			{
				func_121(uParam0, &(uParam1->f_152), 8);
				func_1002(uParam1, 3);
			}
			if (!_is_any_app_running())
			{
				uParam1->f_70 = (uParam1->f_70 + uParam1->f_152.f_15);
			}
			break;
		case 3:
			break;
		default:
			break;
	}
}

void func_487(var uParam0)
{
	if (_does_volume_exist(uParam0->f_152.f_377))
	{
		_0x405ddefb1f531b18(uParam0->f_152.f_377, 1, 0, 0);
	}
	if (func_1024(&(uParam0->f_152), 1))
	{
		func_526(66);
	}
	if (func_1024(&(uParam0->f_152), 2))
	{
		func_526(62);
	}
	if (func_1024(&(uParam0->f_152), 4))
	{
		func_215();
	}
	switch (uParam0->f_152.f_327)
	{
		case 293773700:
			if (func_223(uParam0->f_152.f_327.f_2.f_6, uParam0->f_152.f_327.f_2, uParam0->f_152.f_327.f_2.f_1, uParam0->f_152.f_327.f_2.f_4))
			{
			}
			break;
		case 23117795:
			if (func_1025(uParam0->f_152.f_327.f_11, uParam0->f_152.f_327.f_41, 1, 1, 1))
			{
			}
			break;
		case 389920711:
			func_1026(uParam0->f_152.f_5, &(uParam0->f_152.f_327.f_11));
			uParam0->f_152.f_327.f_41.f_6 = { uParam0->f_152.f_5 };
			uParam0->f_152.f_327.f_41 = { uParam0->f_152.f_327.f_11 };
			if (func_1025(uParam0->f_152.f_327.f_11, uParam0->f_152.f_327.f_41, 1, 1, 1))
			{
			}
			break;
		default:
			break;
	}
}

bool func_488(bool bParam0, bool bParam1)
{
	if (!func_358(Global_26539))
	{
		Global_26539 = func_1027("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		(*Global_1951255)[Global_26539]->f_16 = &Global_20[3];
		func_363(Global_26539, 0, 1);
		func_390(Global_26539, 6, 1);
		if (bParam1)
		{
			func_390(Global_26539, 14, 1);
		}
	}
	else
	{
		if (!func_751(Global_26539, 0))
		{
			func_744(Global_26539, 1, 1, 1);
		}
		if (func_1028(Global_26539, 1) != 0f && bParam0)
		{
			func_363(Global_26539, 1, 1);
		}
		else
		{
			func_363(Global_26539, 0, 1);
		}
		return func_364(Global_26539, 1);
	}
	return false;
}

void func_489()
{
	func_1029(4);
}

bool func_490(int iParam0)
{
	if (Global_1296473->f_1 >= 3)
	{
		return true;
	}
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam0 == 255)
	{
		return true;
	}
	if (func_1019(29, iParam0))
	{
		return true;
	}
	if (func_1030(iParam0))
	{
		return true;
	}
	return false;
}

void func_491()
{
	_0x243cede8f916b994();
}

void func_492(var uParam0)
{
	if (!func_251(uParam0, 14))
	{
		return;
	}
	_copy_memory((*Global_1116202)[uParam0->f_4926.f_252], &(uParam0->f_1348.f_37), 42);
	_copy_memory(Global_1109804->f_260.f_4368[uParam0->f_4926.f_252], &(uParam0->f_1348.f_114), 10);
	_copy_memory((*Global_1118808)[uParam0->f_4926.f_255], &(uParam0->f_1348.f_79), 35);
	_copy_memory(Global_1109804->f_260.f_4989[uParam0->f_4926.f_255], &(uParam0->f_1348.f_124), 13);
	func_167(uParam0, 14);
}

void func_493(int iParam0)
{
	if (func_393(iParam0))
	{
		func_728(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_494()
{
	if (func_393(32))
	{
		func_493(32);
	}
}

bool func_495(bool bParam0)
{
	if (!func_108(-931834499, bParam0))
	{
		return false;
	}
	return true;
}

void func_496(bool bParam0)
{
	func_542(60, !bParam0);
}

void func_497(bool bParam0)
{
	func_542(61, !bParam0);
}

void func_498(bool bParam0)
{
	func_1031(bParam0);
	func_1032(bParam0);
	func_1033(bParam0);
}

bool func_499()
{
	return Global_1139381->f_4796;
}

void func_500(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_1034(&(Global_1139381->f_4796), bParam1);
		func_527(117);
	}
	else
	{
		func_526(117);
	}
}

void func_501(int iParam0)
{
	iVar0 = func_543(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_39.f_110[iVar1], iVar2);
	Global_1939655 = 0;
}

void func_502(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_1035(vVar0, vVar3, 0f) };
	vVar9 = { func_1036(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

bool func_503(int iParam0)
{
	if (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_3) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_3))
	{
		return true;
	}
	return false;
}

int func_504()
{
	return Global_1572864->f_1;
}

void func_505(var uParam0, var uParam1, int iParam2)
{
	if (!func_118((*uParam0)[uParam1->f_1], iParam2))
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_1 = ((*uParam0)[uParam1->f_1]->f_1 - ((*uParam0)[uParam1->f_1]->f_1 && iParam2));
}

char* func_506()
{
	return "MP_OutofArea";
}

void func_507(var uParam0)
{
	_databinding_write_data_bool(uParam0->f_67, false);
	if (_uistatemachine_exists(190275865))
	{
		_uistatemachine_destroy(190275865);
	}
}

void func_508(int iParam0)
{
	if (func_1037(&Global_1903131, iParam0))
	{
		func_1038(Global_1903131, iParam0);
	}
}

void func_509()
{
	play_sound_frontend("OOB_return", func_1020(), true, 0);
}

void func_510(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_511(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_512(int iParam0)
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
		func_1039();
	}
	set_player_invincible(iVar0, false);
	if (!is_ped_in_any_vehicle(iVar1, false))
	{
		set_entity_collision(iVar1, true, false);
		set_entity_completely_disable_collision(iVar1, true, false);
	}
}

void func_513(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

void func_514()
{
	_databinding_write_data_bool(Global_1913373->f_3, false);
	iVar0 = 0;
	while (iVar0 < &Global_1913373)
	{
		_databinding_remove_data_entry(&(Global_1913373->f_5[iVar0]));
		iVar0++;
	}
	_databinding_clear_binding_array(Global_1913373->f_4);
	Global_1913373 = 0;
	Global_1913373->f_1 = 0;
}

void func_515(var uParam0, int iParam1)
{
	if (uParam0->f_41.f_10 == iParam1)
	{
		return;
	}
	if (uParam0->f_41.f_10 != 0)
	{
		_display_hud_component(uParam0->f_41.f_10);
	}
	uParam0->f_41.f_10 = iParam1;
	if (uParam0->f_41.f_10 != 0)
	{
		_hide_hud_component(uParam0->f_41.f_10);
	}
}

int func_516(var uParam0)
{
	if (!uParam0->f_249.f_61)
	{
		return 1;
	}
	if (!_0xcf45df50c7775f2a())
	{
		uParam0->f_249.f_61 = 0;
		return 1;
	}
	_0x5a8b01199c3e79c3();
	uParam0->f_249.f_61 = 0;
	return 1;
}

void func_517(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_249.f_42.f_11 - 1))
	{
		if (does_entity_exist(uParam0->f_249.f_4[iVar0]->f_23))
		{
			delete_object(&(uParam0->f_249.f_4[iVar0]->f_23));
		}
		iVar0++;
	}
}

void func_518(var uParam0)
{
	Var0 = 10;
	*uParam0 = { Var0 };
}

void func_519(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_520(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_521(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (does_entity_exist(iVar0))
	{
		if (*uParam1 & 1 != 0)
		{
			func_1040(iVar0, iParam0);
		}
	}
	*uParam1 = 0;
}

void func_522(var uParam0)
{
	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

bool func_523(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4)
{
	*iParam3 = -1;
	*uParam4 = 0;
	if (iParam2 <= -1 || iParam2 >= 7)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_37[iParam2])))
	{
		*iParam3 = _net_to_anim_scene(&(uParam0->f_37[iParam2]));
		*uParam4 = uParam0->f_37[iParam2]->f_1;
	}
	else
	{
		*iParam3 = &uParam1->f_249.f_62[iParam2];
		*uParam4 = uParam1->f_249.f_62[iParam2]->f_1;
	}
	return true;
}

void func_524(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return;
	}
	if (&uParam0->f_158.f_3[iParam1] == -1)
	{
		return;
	}
	if (!is_stream_playing(&(uParam0->f_158.f_3[iParam1])))
	{
		stop_stream(&(uParam0->f_158.f_3[iParam1]));
		uParam0->f_158.f_3[iParam1] = -1;
		return;
	}
	stop_stream(&(uParam0->f_158.f_3[iParam1]));
	uParam0->f_158.f_3[iParam1] = -1;
}

void func_525(var uParam0)
{
	uVar0 = -1;
	_copy_memory(uParam0, &uVar0, 2);
}

int func_526(int iParam0)
{
	if (func_1041(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_527(int iParam0)
{
	if (func_1042(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_528(int iParam0, int iParam1)
{
	if (Global_1572864->f_17 != 0)
	{
		return;
	}
	Global_1572864->f_17 = iParam0;
	Global_1572864->f_18 = iParam1;
}

void func_529(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_530()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_531(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_532(var uParam0, int iParam1)
{
	if (!func_1043(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_533(var uParam0, int iParam1)
{
	func_1044(uParam0, iParam1);
}

bool func_534(int iParam0)
{
	return func_1045(&(Global_1956200->f_1753), iParam0, 1);
}

int func_535(int iParam0)
{
	if (func_1042(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_536(int iParam0)
{
	if (func_1041(&(Global_1956200->f_1753), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_537(bool bParam0)
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

void func_538(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1296543->f_43)
	{
		return;
	}
	if ((*Global_1296543)[iParam0]->f_1 != 255)
	{
		_0xd426e2e3288469d6(&(Global_1296543->f_44), (*Global_1296543)[iParam0]->f_1);
	}
	iVar0 = player_id();
	if (does_entity_exist((*Global_1296543)[iParam0]->f_3))
	{
		if (_0xe24c64d9aded2ef5(iVar0, (*Global_1296543)[iParam0]->f_3))
		{
			_0x0c6b89876262a99d(iVar0, (*Global_1296543)[iParam0]->f_3);
		}
	}
	func_1046((*Global_1296543)[iParam0]);
	Global_1296543->f_43 = (Global_1296543->f_43 - 1);
	*(*Global_1296543)[iParam0] = { *(*Global_1296543)[Global_1296543->f_43] };
	if (is_bit_set(Global_1296543->f_50, Global_1296543->f_43))
	{
		set_bit(&(Global_1296543->f_50), iParam0);
	}
	else
	{
		clear_bit(&(Global_1296543->f_50), iParam0);
	}
	clear_bit(&(Global_1296543->f_50), Global_1296543->f_43);
	func_1046((*Global_1296543)[Global_1296543->f_43]);
}

int func_539(int iParam0, int iParam1)
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

void func_540(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1139381->f_3876.f_2[func_541(iParam0, 1)] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1047(iParam0);
	}
	Global_1139381->f_3876.f_2[func_541(iParam0, 1)] = bParam1;
}

int func_541(int iParam0, int iParam1)
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

void func_542(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_617(iParam0);
	}
	else
	{
		func_1048(iParam0);
	}
}

int func_543(int iParam0, int iParam1)
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

void func_544(var uParam0)
{
	Var0.f_1 = 4;
	_copy_memory(uParam0, &Var0, 3);
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 195938434;
		case 1:
			return -683250308;
		case 2:
			return -16106300;
		case 3:
			return 105387183;
		case 4:
			return -2097683294;
		case 5:
			return 1805131596;
		case 6:
			return 481893872;
		case 7:
			return -493957506;
		case 8:
			return 1224055398;
		case 9:
			return -953803399;
		case 10:
			return 1171995096;
		case 11:
			return -267442581;
		case 12:
			return -1810065318;
		case 13:
			return 2140177766;
		default:
			break;
	}
	return 0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 4;
		case 2:
			return 4;
		case 3:
			return 4;
		case 4:
			return 4;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 4;
		case 8:
			return 4;
		case 9:
			return 4;
		case 10:
			return 4;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 4;
		default:
			break;
	}
	return 4;
}

void func_547(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 241)
	{
		iVar1 = func_1049(iVar0, 1);
		_datafile_register_query(uParam0, iVar1, func_1050(iVar1));
		iVar0++;
	}
}

int func_548(int iParam0, int iParam1)
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

bool func_549(int iParam0)
{
	iVar0 = func_1051(iParam0, 1);
	if (!_0x7907969497ea92f5(&(Global_1137047->f_361[iVar0])) || !_0x603ac35fd4602c76(&(Global_1137047->f_361[iVar0])))
	{
		return false;
	}
	return true;
}

bool func_550(int iParam0, var uParam1)
{
	vVar0.f_1 = iParam0;
	if (!func_1052(&Var3, vVar0))
	{
		return false;
	}
	Var3.f_2 = -120251408;
	Var3.f_3 = uParam1;
	return _datafile_get_data_node_index(&(Var3.f_1), &Var3);
}

int func_551(var uParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (!func_1052(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -120251408;
	Var2.f_3 = uParam0;
	if (_datafile_get_data_node_index(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (_datafile_get_int(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

void func_552(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	if (func_553(iParam0) != 0)
	{
		Global_1132288->f_2020[iParam0] = 0;
	}
}

int func_553(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return 0;
	}
	return &(Global_1132288->f_2020[iParam0]);
}

bool func_554(int iParam0, int iParam1, var uParam2)
{
	if (func_1053(iParam0, iParam1, &uVar0))
	{
		func_1054(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_555(int iParam0, var uParam1, var uParam2)
{
	if (!func_1055(iParam0))
	{
		return false;
	}
	if (func_1053(iParam0, uParam1, &uVar0))
	{
		func_1056(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_556(int iParam0)
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

int func_557(int iParam0, var uParam1, int iParam2)
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

bool func_558(var uParam0, int iParam1)
{
	*uParam0 = Global_1257541->f_8863;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (_0x603ac35fd4602c76(*uParam0) && _datafile_get_data_node_index(&(uParam0->f_1), uParam0));
}

bool func_559(var uParam0, var uParam1)
{
	uParam0->f_2 = 775488648;
	uParam0->f_3 = uParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

int func_560(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_561(var uParam0, var uParam1)
{
	if (!func_1057(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = -1782208300;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_562(var uParam0, var uParam1)
{
	uParam0->f_2 = -662059387;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_563(struct<5> Param0, var uParam5, var uParam6)
{
	Param0.f_2 = 644398018;
	if (!_datafile_get_hash(&iVar0, &Param0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = iVar0;
	*uParam6 = func_1058(iVar1);
	if (*uParam6 < 0 || *uParam6 >= 62)
	{
		return false;
	}
	func_1059(*uParam6, iVar1);
	func_1060(Param0, *uParam6);
	if (!func_568(iVar1))
	{
		Param0.f_2 = 1672605872;
		if (!_datafile_get_vector(&vVar2, &Param0))
		{
			return false;
		}
		if (func_209(vVar2))
		{
			return false;
		}
		func_1061(*uParam6, vVar2);
		if (!func_565(*uParam6, 2))
		{
			Param0.f_2 = -969870146;
			if (!_datafile_get_float(&fVar5, &Param0))
			{
				return false;
			}
			if (fVar5 <= 0f)
			{
				return false;
			}
			func_1062(*uParam6, fVar5);
		}
	}
	return true;
}

var func_564(int iParam0)
{
	return Global_1116202[iParam0];
}

bool func_565(int iParam0, int iParam1)
{
	return is_bit_set((*Global_1116202)[iParam0]->f_7.f_4, iParam1);
}

void func_566(int iParam0, var uParam1)
{
	uVar5 = func_564(iParam0);
	if (!func_1063(&Var0, uParam1, uVar5))
	{
		return;
	}
	if (!func_1064(&Var0))
	{
		return;
	}
	uVar15 = Var0.f_1;
	Var0.f_2 = -1161401818;
	if (_datafile_get_hash(&iVar6, &Var0))
	{
		if (iVar6 == 0)
		{
			iVar6 = 1757124778;
		}
	}
	else
	{
		iVar6 = 1757124778;
	}
	iVar9 = func_1065(iVar6);
	if (iVar9 != 1)
	{
		Var0.f_2 = 1269504651;
		if (!_datafile_get_hash(&iVar6, &Var0))
		{
			return;
		}
		if (iVar6 == 0)
		{
			return;
		}
		iVar11 = iVar6;
	}
	func_1066(iParam0, iVar9);
	func_1067(iParam0, iVar11);
	iVar7 = func_1068(Var0, 95610146);
	iVar8 = 0;
	while (iVar8 <= (iVar7 - 1))
	{
		Var0.f_1 = uVar15;
		if (!func_1069(&Var0, iVar8))
		{
		}
		else
		{
			Var0.f_2 = 1649401908;
			if (!_datafile_get_hash(&iVar6, &Var0))
			{
			}
			else if (iVar6 == 0)
			{
			}
			else
			{
				iVar10 = func_1070(iVar6);
				if (iVar10 == -1)
				{
				}
				else
				{
					Var0.f_2 = -134912699;
					if (!_datafile_get_vector(&vVar12, &Var0))
					{
					}
					else if (func_209(vVar12))
					{
					}
					else
					{
						func_1071(iParam0, iVar10, vVar12);
					}
				}
			}
		}
		iVar8++;
	}
}

void func_567(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	if (!func_1072(&vParam0))
	{
		return;
	}
	uVar3 = vParam0.y;
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		vParam0.f_1 = uVar3;
		iVar2 = 493038497;
		if (func_1073(&vParam0, iVar0))
		{
			vParam0.f_2 = 107613027;
			if (_datafile_get_hash(&iVar1, &vParam0))
			{
				iVar2 = iVar1;
				if (func_1074(iVar2, 1) == -1)
				{
					iVar2 = 493038497;
				}
			}
			else
			{
				iVar2 = 493038497;
			}
		}
		else
		{
			iVar2 = 493038497;
		}
		func_1075(iParam5, iVar2, iVar0);
		iVar0++;
	}
}

bool func_568(int iParam0)
{
	return iParam0 == -1667613409;
}

void func_569(struct<5> Param0, var uParam5)
{
	if (!func_1076(&Param0))
	{
		return;
	}
	iVar1 = func_1068(Param0, 965995012);
	if (iVar1 > 7)
	{
		iVar1 = 7;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1077(Param0, uParam5, iVar0);
		iVar0++;
	}
}

bool func_570(var uParam0, var uParam1)
{
	uParam0->f_2 = 1781673553;
	uParam0->f_3 = uParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_571(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	vParam0.f_2 = 107613027;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = iVar0;
	*uParam6 = func_1078(iVar1);
	if (*uParam6 < 0 || *uParam6 >= 36)
	{
		return false;
	}
	func_1079(*uParam6, iVar1);
	vParam0.f_2 = 1649401908;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar2 = iVar0;
	func_1080(*uParam6, iVar2);
	if (iVar2 != -323664079 && func_1081(iVar1))
	{
		func_1082(*uParam6);
	}
	return true;
}

void func_572(struct<5> Param0, int iParam5)
{
	iVar0 = func_575(iParam5);
	switch (iVar0)
	{
		case 64621749:
		case 1766283257:
		case 1976336482:
			return;
		default:
			break;
	}
	if (!func_1083(&Param0))
	{
		return;
	}
	iVar2 = func_1068(Param0, 1772846069);
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		func_1084(Param0, iVar1, iParam5);
		iVar1++;
	}
}

void func_573(int iParam0, var uParam1)
{
	iVar0 = func_575(iParam0);
	switch (iVar0)
	{
		case 64621749:
		case 1766283257:
		case 1976336482:
			return;
		default:
			break;
	}
	uVar6 = func_1085(iParam0);
	if (!func_1086(&Var1, uParam1, uVar6))
	{
		return;
	}
	if (!func_1064(&Var1))
	{
		return;
	}
	uVar13 = Var1.f_1;
	iVar8 = func_1068(Var1, 95610146);
	iVar9 = 0;
	while (iVar9 <= (iVar8 - 1))
	{
		Var1.f_1 = uVar13;
		if (!func_1069(&Var1, iVar9))
		{
		}
		else
		{
			Var1.f_2 = 1649401908;
			if (!_datafile_get_hash(&iVar7, &Var1))
			{
			}
			else if (iVar7 == 0)
			{
			}
			else
			{
				iVar10 = func_1070(iVar7);
				if (iVar10 == -1)
				{
				}
				else
				{
					Var1.f_2 = -1207177750;
					if (!_datafile_get_hash(&iVar7, &Var1))
					{
					}
					else if (iVar7 == 0)
					{
					}
					else
					{
						iVar11 = iVar7;
						Var1.f_2 = -1471337442;
						if (!_datafile_get_hash(&iVar7, &Var1))
						{
						}
						else if (iVar7 == 0)
						{
						}
						else
						{
							iVar12 = iVar7;
							func_1087(iParam0, iVar10, iVar11);
							func_1088(iParam0, iVar10, iVar12);
						}
					}
				}
			}
		}
		iVar9++;
	}
}

bool func_574(struct<5> Param0, int iParam5)
{
	iVar0 = func_575(iParam5);
	switch (iVar0)
	{
		case 64621749:
		case 1766283257:
		case 1976336482:
			return true;
		default:
			break;
	}
	if (!func_1089(&Param0, 871883319))
	{
		return false;
	}
	iVar2 = func_1068(Param0, 135103436);
	bVar3 = true;
	if (iVar2 != 2)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!func_1090(Param0, iVar1, iParam5, iVar1))
		{
			bVar3 = false;
		}
		iVar1++;
	}
	if (bVar3)
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if (func_1092(iParam5, func_1091(iVar1, 1)) == 0)
			{
			}
			iVar1++;
		}
		return true;
	}
	return false;
}

int func_575(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_1;
}

bool func_576(struct<5> Param0, var uParam5, var uParam6, int iParam7, int iParam8)
{
	if (!func_1093(&Param0))
	{
		return false;
	}
	iVar0 = func_1068(Param0, -307865396);
	iVar2 = 1;
	if (iVar0 <= 0 || iVar0 > 5)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (!func_1094(Param0, iVar1, uParam5, iVar0, uParam6, iParam7, iParam8))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

void func_577(struct<5> Param0, var uParam5)
{
	if (func_1095(&Param0))
	{
		iVar0 = 0;
		iVar1 = func_1068(Param0, 1071445036);
		if (iVar1 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (iVar1 - 1))
			{
				func_1096(Param0, uParam5, iVar0);
				iVar0++;
			}
		}
	}
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -831954077;
		case 1:
			return 1905310431;
		case 2:
			return 2132950130;
		case 3:
			return -940322714;
		case 4:
			return 2047865662;
		case 5:
			return -1703925284;
		default:
			break;
	}
	return 0;
}

void func_579(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_1035(vVar0, vVar3, 0f) };
	vVar9 = { func_1036(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, iParam7, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, iParam7);
	}
}

int func_580(int iParam0)
{
	switch (iParam0)
	{
		case 2106671644:
			return 0;
		case 1949860368:
			return 1;
		case 1540018293:
			return 2;
		case 1488231481:
			return 3;
		case -1526677284:
			return 4;
		default:
			break;
	}
	return -1;
}

struct<8> func_581(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_string(&Var0, &(uParam0->f_24)))
	{
		return Var0;
	}
	return Var0;
}

int func_582(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_int(&uVar0, &(uParam0->f_24)))
	{
		return 0;
	}
	return uVar0;
}

int func_583(int iParam0)
{
	switch (iParam0)
	{
		case -518692675:
			return 0;
		case 362557145:
			return 1;
		case 1568658091:
			return 2;
		case -404755804:
			return 3;
		case 1354451114:
			return 4;
		case 1123396895:
			return 5;
		case 1995547734:
			return 6;
		case 1076301495:
			return 7;
		case -369767146:
			return 8;
		default:
			break;
	}
	return -1;
}

bool func_584(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_24.f_2 = iParam1;
	uParam0->f_24.f_3 = iParam2;
	uParam0->f_24.f_4 = iParam3;
	if (!_datafile_get_bool(&uVar0, &(uParam0->f_24)))
	{
		return false;
	}
	return uVar0;
}

int func_585(int iParam0)
{
	return -1;
}

int func_586(int iParam0)
{
	return -1;
}

void func_587(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 1338309244:
			return 0;
		case -396301452:
			return 1;
		case 1054059395:
			return 2;
		case 228337071:
			return 3;
		case -1898094746:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_589(var uParam0)
{
	return -1;
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case -342555755:
			return 0;
		case -1682644312:
			return 1;
		case 465628107:
			return 2;
		case 1345573984:
			return 3;
		case 1154612695:
			return 4;
		case 1706697578:
			return 5;
		case -1179661744:
			return 6;
		case 1085947101:
			return 7;
		case 250288693:
			return 8;
		case -732183745:
			return 9;
		case 505189833:
			return 10;
		case 580482833:
			return 11;
		case -2049540856:
			return 12;
		case -682039335:
			return 13;
		case -1761505125:
			return 14;
		case 825296063:
			return 15;
		case -1176944231:
			return 16;
		case 1444400552:
			return 17;
		case 1651545386:
			return 18;
		case -2020208627:
			return 19;
		case -851486237:
			return 20;
		case -1905474476:
			return 21;
		case -868335462:
			return 22;
		case -1829954073:
			return 23;
		case -454527521:
			return 24;
		case 158877175:
			return 25;
		case 1665626043:
			return 26;
		case 1662592038:
			return 27;
		case -537525572:
			return 28;
		default:
			break;
	}
	return 0;
}

void func_591(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_592(int iParam0)
{
	Global_1940311->f_14.f_16 = (Global_1940311->f_14.f_16 - 1);
	func_1097(Global_1940311->f_14[iParam0]);
	*Global_1940311->f_14[iParam0] = { *Global_1940311->f_14[Global_1940311->f_14.f_16] };
	func_1097(Global_1940311->f_14[Global_1940311->f_14.f_16]);
}

int func_593(int iParam0)
{
	iVar0 = -1;
	if (func_558(&Var1, iParam0))
	{
		iVar0 = ((func_1098() - _0xe13634bb6baf0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

void func_594(int iParam0, int iParam1, int iParam2)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	Var0.f_4 = 2;
	Var0.f_6 = iParam0;
	Var0.f_10 = iParam1;
	Var0.f_7 = iParam2;
	func_1099(&Var0);
}

void func_595()
{
	func_110(-939420910);
	func_110(-1187950766);
	func_110(356365161);
	func_110(753127042);
	func_110(-2038424081);
	func_110(1884271742);
	func_110(459290420);
}

void func_596()
{
	func_110(704802028);
	func_110(588987611);
	func_110(2008888900);
	func_110(1649996811);
	func_110(227918160);
	func_110(168171957);
	func_110(1193080109);
	func_110(-491981251);
	func_110(-639037538);
	func_110(-618620429);
}

void func_597(int iParam0)
{
	if (func_1100(iParam0) && func_1101())
	{
		remove_door_from_system(iParam0);
	}
}

void func_598(var uParam0)
{
	if (func_358(uParam0->f_4))
	{
		func_421(&(uParam0->f_4), 1, 1);
	}
	clear_bit(&(uParam0->f_17), 8);
}

bool func_599(var uParam0)
{
	return uParam0->f_2207.f_47;
}

void func_600(var uParam0)
{
	if (uParam0->f_2207.f_47)
	{
		func_1102(uParam0, &(uParam0->f_2207.f_58));
		if (!uParam0->f_2207.f_84)
		{
			func_1103(uParam0, 1, 0);
		}
		func_1104(uParam0);
		uParam0->f_2207.f_46 = 0;
		uParam0->f_2207.f_47 = 0;
		_close_app_by_hash(1289756680);
		_databinding_remove_data_entry(uParam0->f_2207.f_50);
		func_1105(uParam0);
		func_1106(uParam0);
		func_1107(uParam0);
		func_1108(0);
		func_1109();
		if (_has_streamed_txd_loaded(1912964614))
		{
			_set_streamed_txd_as_no_longer_needed(1912964614);
		}
		func_1110(1);
	}
}

void func_601(var uParam0)
{
	if (network_is_in_mp_cutscene())
	{
		network_set_in_mp_cutscene(false, true, 32, true);
		_0xf3354d6ca46f419d(*uParam0, 1);
	}
	func_1111();
	if (_is_anim_scene_started(uParam0->f_14, false))
	{
		abort_anim_scene(uParam0->f_14, false);
	}
	func_1112(&(uParam0->f_9), 0);
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), &Global_1296859);
	Var0.f_3 = 1;
	func_387(&Var0);
}

void func_602(int iParam0, bool bParam1)
{
	_0xfea6126c34df2532(iParam0, bParam1);
	_0xa2116c1e4ed85c24(iParam0, !bParam1);
	_0xd8544f6260f5f01e(iParam0, 10);
}

void func_603(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

bool func_604(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_605(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_680();
	}
	if (bParam0)
	{
		func_930(8);
		func_930(512);
	}
	else
	{
		func_930(8);
		func_930(16);
	}
}

void func_606()
{
	iVar1 = func_1113();
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
		iVar0 = func_1114(iVar4);
		if (func_889(iVar0, 0))
		{
			if (func_947(iVar0) != -999503751)
			{
			}
			else
			{
				iVar1 = func_1115(iVar0);
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
						func_1116(1);
						func_910(90, 1);
					}
					else
					{
						func_1116(1);
						func_910(88, 1);
					}
				}
				else if (!bVar3)
				{
					func_1116(1);
					func_910(89, 1);
				}
			}
		}
	}
}

void func_607(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_608()
{
	Global_1915715->f_23051.f_1 = 0;
	Global_1915715->f_23051.f_22 = 0;
	Global_1915715->f_23051.f_221 = 0;
	if (_uiprompt_is_valid(Global_1915715->f_23051.f_222))
	{
		_uiprompt_delete(Global_1915715->f_23051.f_222);
	}
}

bool func_609(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_610(int iParam0, int iParam1)
{
	_0x67e21acc5c0c970c(iParam1, 16, iParam0);
	_0x67e21acc5c0c970c(iParam1, 15, iParam0);
	_0x67e21acc5c0c970c(iParam1, 7, iParam0);
	_0x67e21acc5c0c970c(iParam1, 8, iParam0);
	_0x67e21acc5c0c970c(iParam1, 17, iParam0);
	_0x67e21acc5c0c970c(iParam1, 5, iParam0);
	_0x67e21acc5c0c970c(iParam1, 21, iParam0);
	_0x67e21acc5c0c970c(iParam1, 25, iParam0);
	_0x67e21acc5c0c970c(iParam1, 23, iParam0);
	_0x67e21acc5c0c970c(iParam1, 19, iParam0);
	_0x67e21acc5c0c970c(iParam1, 9, iParam0);
	_0x67e21acc5c0c970c(iParam1, 10, iParam0);
	_0x67e21acc5c0c970c(iParam1, 22, iParam0);
	_0x67e21acc5c0c970c(iParam1, 20, iParam0);
	_0x67e21acc5c0c970c(iParam1, 18, iParam0);
	_0x67e21acc5c0c970c(iParam1, 6, iParam0);
	_0x67e21acc5c0c970c(iParam1, 0, iParam0);
	_0x67e21acc5c0c970c(iParam1, 1, iParam0);
	_0x67e21acc5c0c970c(iParam1, 3, iParam0);
	_0x67e21acc5c0c970c(iParam1, 2, iParam0);
	_0x67e21acc5c0c970c(iParam1, 4, iParam0);
}

void func_611(var uParam0)
{
}

void func_612(var uParam0)
{
	_text_database_delete("WARD");
	_0x37d7bdba89f13959("CamTransition01");
	_0x37d7bdba89f13959("CamTransitionBlink");
	switch (func_89())
	{
		case 0:
			func_1117(uParam0);
			break;
	}
}

void func_613(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_614(int iParam0, int iParam1)
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

void func_615(int iParam0)
{
	func_1118(2, iParam0);
}

bool func_616(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

void func_617(int iParam0)
{
	if (!func_1119(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

var func_618(int iParam0)
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

void func_619(var uParam0)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return;
	}
	Var0.f_16.f_1 = -1;
	Var0.f_16.f_2 = -1;
	Var0.f_16.f_3 = -1;
	Var0.f_16.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = 3;
	trigger_script_event(1, &Var0, 27, 36, &uParam0);
}

int func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1120() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_1121(0);
	}
	func_1122();
	if (func_1123(255, 0))
	{
		if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
		{
			if (!bParam2 && bParam1)
			{
				func_1124(1);
			}
		}
	}
	if (network_is_session_active())
	{
		_0x0ae241a4a9adeeec(0);
	}
	func_1125();
	func_1126(21);
	Global_1572887->f_106.f_91.f_1 = Global_1572887->f_106.f_9;
	Global_1572887->f_106.f_91.f_2 = iParam0;
	Global_1572887->f_106.f_91.f_4 = (get_game_timer() - Global_1572887->f_106.f_76);
	func_1127();
	return 1;
}

void func_621(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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

var func_622(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_623(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_401(player_id());
	}
	return func_1128(_0x4be6c13a45cca8ec(iParam0));
}

void func_624(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

void func_625()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_626(vector3 vParam0)
{
	Global_17411.f_55.f_4 = vParam0.x;
	Global_17411.f_55.f_4.f_1 = vParam0.y;
	Global_17411.f_55.f_4.f_2 = vParam0.z;
	if (!func_918(-1838434463, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_1129() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_1130(vParam0, 1) == -1)
		{
		}
	}
}

bool func_627(int iParam0)
{
	return func_954(Global_1211392->f_1196, iParam0);
}

void func_628(var uParam0)
{
	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (_0x93ffd92f05ec32fd(&(uParam0->f_135[iVar0])))
		{
			_0x13e7320c762f0477(&(uParam0->f_135[iVar0]));
		}
		uParam0->f_135[iVar0]->f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1.f_1[iVar0] = { vVar1 };
		iVar0++;
	}
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_629(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_1131(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_1132(Global_1940258, 8388608);
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

bool func_630(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = func_781(&(uParam0->f_1348.f_176[iParam1]->f_2), &(uParam0->f_1348.f_176[iParam1]), iParam2, iParam3, iParam4);
	switch (iVar0)
	{
		case 3:
			func_117(uParam0, uParam0->f_1348.f_176[iParam1]->f_46, 22);
			return false;
		case 1:
			return false;
		default:
			break;
	}
	return true;
}

bool func_631()
{
	if ((func_636(-880521161, 1) || func_636(-1227171078, 1)) || func_636(-494501205, 1))
	{
		return true;
	}
	return false;
}

bool func_632(int iParam0)
{
	if (!func_1133(iParam0))
	{
		return true;
	}
	if (Global_1139381->f_4621.f_52[iParam0]->f_1 != -1)
	{
		return true;
	}
	if (func_988())
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_893(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_1134(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_1135(iParam0, 0);
	}
	if (func_1136(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_886(bParam2), iParam0, bParam3);
	}
	else
	{
		Var3 = { func_1137(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_886(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_634(int iParam0)
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

bool func_635(int iParam0, int iParam1, vector3 vParam2)
{
	if (func_632(iParam0))
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0 = iParam1;
	Var0.f_2 = { vParam2 };
	Var0.f_1 = 0;
	*Global_1139381->f_4621.f_52[iParam0] = { Var0 };
	return true;
}

bool func_636(int iParam0, bool bParam1)
{
	if (!func_991(iParam0))
	{
		return false;
	}
	Var0 = { func_666(bParam1) };
	if (func_778(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return true;
	}
	else if (func_778(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return true;
	}
	else if (func_778(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return true;
	}
	else if (func_778(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return true;
	}
	else if (func_778(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

void func_637(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_3.f_7), iParam1))
		{
			func_1138(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_3.f_7), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_3.f_7), iParam1))
	{
		func_1139(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_3.f_7), iParam1);
	}
}

void func_638(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*iParam0, false, false))
		{
			if (!is_vehicle_seat_free(*iParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*iParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_962(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_639(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_13.f_4), iParam1))
		{
			func_1140(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_13.f_4), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_13.f_4), iParam1))
	{
		func_1141(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_13.f_4), iParam1);
	}
}

void func_640(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0x8f4f050054005c27(&(uParam0->f_20.f_10), iParam1))
		{
			func_1142(uParam0, 1);
			_0xe84aac1b22a73e99(&(uParam0->f_20.f_10), iParam1);
		}
	}
	else if (_0x8f4f050054005c27(&(uParam0->f_20.f_10), iParam1))
	{
		func_1143(uParam0, 1);
		_0xb909149f2bb5f6da(&(uParam0->f_20.f_10), iParam1);
	}
}

void func_641(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 <= -1 || iParam2 >= 7)
	{
		return;
	}
	(*uParam0)[uParam1->f_1]->f_2[iParam2] = 0;
}

void func_642(var uParam0, int iParam1)
{
	func_814(uParam0, iParam1, 0);
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 572301429;
		case 1:
			return -993374213;
		case 2:
			return -846050598;
		case 3:
			return 1143703973;
		case 4:
			return -1188317904;
		case 5:
			return 420871478;
		case 6:
			return -36678014;
		case 7:
			return 1083105488;
		case 8:
			return -468635158;
		case 9:
			return -1975290135;
		case 10:
			return 1510118183;
		case 11:
			return 291057091;
		case 12:
			return -425698306;
		case 13:
			return 615952546;
		default:
			break;
	}
	return 0;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 2068363521:
			return 0;
		case 1356430983:
			return 1;
		case -885211365:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_645(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!func_1144(iParam1))
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
	if (func_1145(iParam1))
	{
		*uParam0 = veh_to_net(_create_mission_train(1054492269, vParam2, true, false, true, true));
	}
	else if (func_1146(iParam1))
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

void func_646(var uParam0, int iParam1)
{
	iVar0 = net_to_veh(&(uParam0->f_13[iParam1]));
	switch (iParam1)
	{
		case 0:
			_0xba8818212633500a(iVar0, 0, 1);
			_0x838c216c2b05a009(player_ped_id(), iVar0);
			break;
		case 1:
			break;
		case 2:
			_0xba8818212633500a(iVar0, 0, 1);
			_0x838c216c2b05a009(player_ped_id(), iVar0);
			break;
		default:
			break;
	}
}

void func_647(int iParam0, bool bParam1, bool bParam2)
{
	func_1147(iParam0, 100f, bParam1, bParam2, 1, 2);
}

bool func_648(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1045(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_1148())
	{
		return func_1045(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_1045(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

int func_649()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return 0;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return 0;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return 0;
	}
	if (func_651(2048))
	{
		return 1;
	}
	if (func_650(1))
	{
		return 1;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_650(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_651(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_652(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_653()
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

void func_654(int iParam0)
{
	if (func_1149(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

bool func_655(vector3 vParam0, var uParam3)
{
	if (func_209(vParam0))
	{
		return false;
	}
	if (func_1150(255) == 4)
	{
		return false;
	}
	if (func_648(4, 255))
	{
	}
	func_526(4);
	func_657(&(Global_1102219->f_3879));
	Global_1102219->f_3879.f_6 = { vParam0 };
	Global_1102219->f_3879 = uParam3;
	Global_1102219->f_3879.f_5 = 1;
	Global_1102219->f_26.f_3341 = 0;
	Global_1102219->f_26.f_3342 = 0;
	func_658(Global_1102219->f_3879, 36);
	return true;
}

void func_656(bool bParam0, bool bParam1)
{
	if (func_1150(255) == 4)
	{
		return;
	}
	if (func_209(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_527(0);
	}
	else
	{
		if (bParam1)
		{
			func_220(0, 0, 0, 1);
		}
		func_526(0);
		func_1151(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_1152(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_768(Global_1102219->f_3849, 36);
	func_769(Global_1102219->f_3888, 36);
}

void func_657(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_658(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_659(var uParam0)
{
	Var0.f_2.f_5.f_1 = 11;
	Var0.f_2.f_18.f_1 = 10;
	Var0.f_46 = -1;
	_copy_memory(uParam0, &Var0, 47);
}

void func_660()
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

bool func_661(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, int iParam8)
{
	if (iParam2 == 1378879298)
	{
		if (!func_1153(uParam0, iParam2))
		{
			return false;
		}
	}
	else if (!func_1154(uParam0, iParam3, iParam2) && !func_1155(uParam0, iParam2, bParam1, 0, bParam4, 0, iParam6, bParam7, 0, iParam8))
	{
		return false;
	}
	iVar0 = 10;
	if (func_604(32768) && iParam6 == 0)
	{
		if (!*bParam1 || (*bParam1 && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]))
		{
			func_1156(1108822547);
		}
		else
		{
			func_678(1108822547);
		}
	}
	if (bParam5)
	{
		func_1157(2);
	}
	return true;
}

bool func_662(int iParam0)
{
	iVar0 = func_1158(0);
	iVar1 = 0;
	func_1159(&(Global_1952637->f_1043), iVar0, iParam0, 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		return false;
	}
	if (!_0xa63cd20f19b961ab(&iVar1, &(Global_1952637->f_1043), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_663(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bVar0 = (func_821(Global_1952637->f_1556) > -1 && !func_604(4718592));
	if (func_604(4194304))
	{
		return;
	}
	if (bParam2)
	{
		if (iParam0 == -1 || iParam0 == func_1160())
		{
			func_1161();
		}
	}
	if (bParam4 && (bVar0 || bParam5))
	{
		Global_1952637->f_1675 = 491602716;
		Global_1952637->f_1556 = 491602716;
		bParam3 = true;
		bVar0 = !func_894(Global_1952637->f_1556, -166674229);
	}
	if (bParam3 && bVar0)
	{
		func_1162(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_605(0, 1);
	}
	func_680();
}

void func_664(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	Global_1952637->f_925 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (bParam7)
		{
			func_1163(iParam1, &(Global_1952637->f_4), Global_1952637->f_3481, Global_1956200->f_1431.f_106);
		}
	}
	else
	{
		bParam6 = false;
	}
	if ((func_604(32768) && func_843(1108822547, 8)) && func_1164(10, iParam3))
	{
		func_842(iParam1, 0, 1, 0);
	}
	iVar1 = 0;
	while (iVar1 < Global_1952637->f_592)
	{
		iVar2 = &Global_1952637->f_552[iVar1];
		iVar0 = func_833(iVar2, 1);
		if (func_843(iVar2, 8))
		{
		}
		else if (Global_1952637->f_83[iVar0]->f_1 <= 0 || &Global_1952637->f_83[iVar0]->f_3[0] == -1802376732)
		{
		}
		else if (&uParam0->f_1[iVar0] == 0)
		{
		}
		else if (!func_1164(iVar0, iParam3))
		{
		}
		else if ((func_843(iVar2, 6) || &uParam0->f_1[iVar0] == &Global_1952637->f_83[iVar0]) || uParam0->f_1[iVar0]->f_1 == 289238755)
		{
			if (!func_843(iVar2, 1) || bParam2)
			{
				Global_1952637->f_925++;
				if (!bParam6)
				{
					func_844(iParam1, iVar0, 1);
				}
				if (uParam0->f_1[iVar0]->f_1 == 289238755)
				{
					Global_1952637->f_2764[iVar0]->f_1 = 289238755;
				}
				func_845(iVar2, 1, 6);
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
					func_844(iParam1, iVar0, 1);
					Global_1952637->f_2764[iVar0] = &uParam0->f_1[iVar0];
					Global_1952637->f_2764[iVar0]->f_1 = uParam0->f_1[iVar0]->f_1;
					if (func_843(iVar2, 1))
					{
						func_846(iVar2, 1, 6);
					}
					Global_1952637->f_925++;
					func_1165(uParam0->f_1[iVar0], iParam1);
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

bool func_665(int iParam0)
{
	return (Global_17411.f_55.f_644.f_1734 && iParam0) != 0;
}

struct<4> func_666(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_886(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_667(1328661203, func_1166(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_667(1328661203, func_1166(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_667(1328661203, func_1166(), -1591664384, bParam0);
}

struct<4> func_667(int iParam0, var uParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!func_889(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_886(bParam6), &uParam1, iParam0, bParam5, &Var0);
	return Var0;
}

bool func_668(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = 0;
		if (uParam0->f_384.f_296[iParam1]->f_1 != -1)
		{
			iVar0 = func_1167(uParam0->f_384.f_296[iParam1]->f_1);
		}
		if (iVar0 == 1 || iVar0 == 5)
		{
			return false;
		}
	}
	if (&uParam0->f_384.f_296[iParam1] != 0)
	{
		return true;
	}
	uParam0->f_384.f_296[iParam1]->f_1 = -1;
	iVar1 = func_669(iParam1);
	if (iVar1 == -358215195)
	{
		func_117(uParam0, func_1168(iParam1), -1);
		return false;
	}
	iVar2 = func_1169(iVar1);
	if (iVar2 == 0)
	{
		func_117(uParam0, func_1170(iVar1), -1);
		return false;
	}
	Var3 = { func_667(889965687, func_666(1), 1034665895, 1) };
	if (!_0xb881ca836cc4b6d4(&Var3))
	{
		func_117(uParam0, 4095, -1);
		return false;
	}
	iVar7 = func_1171(Var3, iVar2, 1, -1);
	if (iVar7 != 0)
	{
		uParam0->f_384.f_296[iParam1] = iVar7;
		return true;
	}
	Var8 = { func_1172(0, -1591664384, iVar2, -1591664384, 0, -719175624, 0) };
	if (!func_1173(&Var8, &iVar22, &iVar23, 1))
	{
		return true;
	}
	Var24.f_9 = -1591664384;
	Var38.f_9 = -1591664384;
	bVar52 = false;
	if (iVar23 > 0)
	{
		iVar54 = 0;
		if (iParam1 == 2 && 1882579758 == func_947(&(uParam0->f_384.f_296[1])))
		{
			iVar54 = func_948(&(uParam0->f_384.f_296[1]));
		}
		iVar53 = 0;
		while (iVar53 < iVar23)
		{
			if (!func_1174(&Var24, iVar53, iVar22, iVar23))
			{
			}
			else if (!_0xb881ca836cc4b6d4(&Var24))
			{
			}
			else if (func_1175(iVar1) == Var24.f_4)
			{
				Var38 = { Var24 };
				bVar52 = true;
				Jump @560; //curOff = 463
			}
			else if ((iParam1 == 2 && iVar54 != 0) && 1759215194 == func_947(Var24.f_4))
			{
				if (iVar54 == Var24.f_4 && !bVar52)
				{
					Var38 = { Var24 };
					bVar52 = true;
				}
			}
			else
			{
				Var38 = { Var24 };
				bVar52 = true;
			}
			iVar53++;
		}
	}
	if (bVar52)
	{
		uParam0->f_384.f_296[iParam1]->f_1 = func_1176(&Var38, 1, 1);
		if (!bParam2)
		{
			uParam0->f_384.f_296[iParam1] = Var38.f_4;
		}
	}
	else if (!func_1177(func_833(iVar1, 1), 0, 0))
	{
		uParam0->f_384.f_296[iParam1] = func_1178(iVar1);
	}
	func_1179(iVar22);
	return false;
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1108822547;
		case 1:
			return 1250092473;
		case 2:
			return 788010710;
		case 3:
			return -1944638739;
		case 4:
			return 1900541263;
		case 5:
			return -893163968;
		case 6:
			return -1197751823;
		case 7:
			return -450913544;
		case 8:
			return 1145151482;
		case 9:
			return -207860920;
		default:
			break;
	}
	return -358215195;
}

int func_670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4098;
		case 1:
			return 4099;
		case 2:
			return 4100;
		case 3:
			return 4101;
		case 4:
			return 4102;
		case 5:
			return 4103;
		case 6:
			return 4104;
		case 7:
			return 4105;
		case 8:
			return 4106;
		case 9:
			return 4107;
		default:
			break;
	}
	return 4097;
}

void func_671(int iParam0)
{
	Global_17411.f_55.f_644.f_1734 = (Global_17411.f_55.f_644.f_1734 || iParam0);
}

bool func_672(var uParam0, int iParam1)
{
	if (func_41(uParam0, 4))
	{
		return false;
	}
	func_34(uParam0, 4);
	uParam0->f_380 = iParam1;
	return true;
}

void func_673(int iParam0)
{
	Global_17411.f_55.f_644.f_1734 = (Global_17411.f_55.f_644.f_1734 - (Global_17411.f_55.f_644.f_1734 && iParam0));
}

int func_674(int iParam0)
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
	iVar0 = func_1180(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 - (Global_1952637->f_2843.f_2 && Global_1952637->f_2843.f_43[iVar0]->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1181(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1))
		{
			func_1182(iVar1, Global_1952637->f_2843.f_43[iVar0]->f_1);
		}
		iVar1++;
	}
	Global_1952637->f_2843.f_1 = (Global_1952637->f_2843.f_1 - 1);
	*Global_1952637->f_2843.f_43[iVar0] = { *Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] };
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = 0;
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = 0;
	return 1;
}

bool func_675(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_841(iVar0, 1);
		if (!func_843(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0)
			{
				func_1183(iVar0, 0);
				func_1184(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 1, 6);
			}
			func_846(iVar2, 3, 6);
			Global_1952637->f_2764[iVar0] = 0;
			Global_1952637->f_2764[iVar0]->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

bool func_676(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = &Global_1952637->f_1675.f_1[34];
	if ((((func_1185(iVar0) != 0 && iParam0 != -859971527) && iParam0 != -1406972469) && iParam0 != -38530791) && iParam0 != 1905845894)
	{
		return false;
	}
	if (func_894(iVar0, -166674229))
	{
		return false;
	}
	return func_1186(iParam0);
}

int func_677(bool bParam0)
{
	if (Global_1952637->f_2843.f_1 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_841(iVar0, 1);
		if (func_843(iVar2, 2))
		{
		}
		else if (&Global_1952637->f_2843.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_1187(iVar0) == -1)
			{
				func_1183(iVar0, 0);
				func_1184(Global_1952637->f_2897.f_2[(Global_1952637->f_2897 - 1)], 2, 6);
			}
			func_845(iVar2, 2, 6);
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

void func_678(int iParam0)
{
	func_845(iParam0, 8, 6);
}

bool func_679(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (func_1188(&(Global_1952637->f_1058), 2))
	{
		return false;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_1189(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_1190(iParam0);
	}
	else
	{
		return false;
	}
	iVar1 = func_1191(uParam3, iParam1);
	bVar2 = func_1192(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return false;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1193(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1194(uParam2, uParam3, iVar1);
		}
		return true;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1195(&Var3, iVar0, 0, 1, 6))
		{
			return false;
		}
		if (iVar1 != -1 && Var3.f_3 == (*uParam3)[iVar1]->f_3)
		{
			return false;
		}
		func_1196(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1197(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1195(&Var21, iVar0, 0, 1, 6))
		{
			return false;
		}
		*(*uParam3)[iVar1] = { Var21 };
	}
	return true;
}

void func_680()
{
	Global_1952637->f_1057 = 0;
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_1134(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1198("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1174(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_758(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1179(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1179(iVar1);
	}
	return false;
}

void func_682(var uParam0)
{
	Var0.f_1 = 10;
	*uParam0 = { Var0 };
}

int func_683(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -425191297;
		case 2:
			return 2073510479;
		case 3:
			return -1721729567;
		case 4:
			return 542313416;
		case 5:
			return 773400404;
		case 6:
			return 1658720489;
		case 7:
			return -1073886421;
		case 8:
			return -2023433738;
		case 9:
			return -1801522070;
		case 10:
			return -160073347;
		case 11:
			return -928801318;
		case 12:
			return -669369145;
		case 13:
			return -1454088388;
		case 14:
			return -1291947376;
		case 15:
			return -2065066393;
		case 16:
			return 1618103669;
		case 17:
			return 1798267631;
		case 18:
			return 1006404746;
		case 19:
			return 1439873078;
		case 20:
			return -746375871;
		case 21:
			return -976152099;
		case 22:
			return -277549788;
		case 23:
			return -517484406;
		case 24:
			return -439428656;
		case 25:
			return -683590475;
		case 26:
			return 71603903;
		case 27:
			return -205785686;
		case 28:
			return 501762566;
		case 29:
			return 272019107;
		case 30:
			return -391125150;
		case 31:
			return -624505968;
		case 32:
			return -1891552122;
		case 33:
			return -2097538056;
		case 34:
			return -1396838529;
		case 35:
			return -1636707609;
		case 36:
			return 1181197008;
		default:
			break;
	}
	return 0;
}

void func_684(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

var func_685(int iParam0)
{
	iVar0 = func_1200(0, (func_1199() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_1201(iVar0);
}

int func_686(var uParam0, var uParam1, var uParam2)
{
	Var0.f_1 = -1;
	return func_1202(uParam0, uParam1, uParam2, &Var0);
}

void func_687(int iParam0)
{
	if (!func_792(iParam0, 32768, 255))
	{
		func_959(iParam0, 32768);
	}
}

bool func_688(int iParam0)
{
	return func_792(iParam0, 4096, 255);
}

bool func_689(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_690(var uParam0)
{
	if (!func_237(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_957(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_958() - uParam0->f_1);
}

void func_691(var uParam0, int iParam1)
{
	uParam0->f_1348.f_26 = iParam1;
	uParam0->f_1348.f_27 = 0;
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4110;
		case 1:
			return 4111;
		case 2:
			return 4112;
		case 3:
			return 4113;
		case 4:
			return 4114;
		case 5:
			return 4115;
		case 6:
			return 4116;
		case 7:
			return 4117;
		case 8:
			return 4118;
		case 9:
			return 4119;
		case 10:
			return 4120;
		case 11:
			return 4121;
		case 12:
			return 4122;
		case 13:
			return 4123;
		default:
			break;
	}
	return 4109;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 644458898:
			return 0;
		case -978848060:
			return 1;
		case 94572762:
			return 2;
		case 513465345:
			return 3;
		case -56770233:
			return 4;
		case -1340384356:
			return 5;
		case -356997223:
			return 6;
		case 1307441551:
			return 7;
		case -1158929805:
			return 8;
		case 1073007367:
			return 9;
		case -1276577109:
			return 10;
		case 358157172:
			return 11;
		case 228337071:
			return 12;
		case -386976841:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4125;
		case 1:
			return 4126;
		case 2:
			return 4127;
		case 3:
			return 4128;
		case 4:
			return 4129;
		case 5:
			return 4130;
		case 6:
			return 4131;
		case 7:
			return 4132;
		case 8:
			return 4133;
		case 9:
			return 4134;
		case 10:
			return 4135;
		case 11:
			return 4136;
		case 12:
			return 4137;
		case 13:
			return 4138;
		default:
			break;
	}
	return 4124;
}

bool func_695(var uParam0, int iParam1, var uParam2)
{
	uParam2->f_1 = func_133(uParam0, -1215365649, 0, 0);
	switch (uParam2->f_1)
	{
		case -1125105727:
			break;
		case -372365539:
			uParam2->f_12 = func_584(uParam0, 1367400434, 0, 0);
			uParam2->f_13 = func_584(uParam0, 1930071043, 0, 0);
			break;
		case 454885399:
			uParam2->f_14 = { func_207(uParam0, 582098196, 0, 0) };
			break;
		default:
			return false;
	}
	*uParam2 = func_133(uParam0, 1738859957, iParam1, 0);
	uParam2->f_2 = { func_207(uParam0, -1776787386, iParam1, 0) };
	uParam2->f_5 = { func_207(uParam0, -1213132344, iParam1, 0) };
	uParam2->f_8 = { func_207(uParam0, -2082996750, iParam1, 0) };
	uParam2->f_17 = func_584(uParam0, 1361100711, 0, 0);
	uParam2->f_18 = func_584(uParam0, -1401111665, 0, 0);
	if (func_584(uParam0, -954847066, 0, 0))
	{
		uParam2->f_25 = 1;
		uParam2->f_27 |= 2 | 16;
	}
	if (func_584(uParam0, 1872606369, 0, 0))
	{
		uParam2->f_25 = 1;
		uParam2->f_27 |= 6;
	}
	return true;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4140;
		case 1:
			return 4141;
		case 2:
			return 4142;
		case 3:
			return 4143;
		case 4:
			return 4144;
		case 5:
			return 4145;
		case 6:
			return 4146;
		case 7:
			return 4147;
		case 8:
			return 4148;
		case 9:
			return 4149;
		case 10:
			return 4150;
		case 11:
			return 4151;
		case 12:
			return 4152;
		case 13:
			return 4153;
		default:
			break;
	}
	return 4139;
}

bool func_697(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 <= -1 || iParam1 >= 14)
	{
		return false;
	}
	if (!uParam2->f_11)
	{
		if (_does_volume_exist(&(uParam0->f_164[iParam1])))
		{
			return true;
		}
	}
	switch (uParam2->f_1)
	{
		case -1125105727:
			iVar0 = _create_volume_by_hash(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8);
			break;
		case -372365539:
			uParam2->f_11 = 0;
			iVar0 = _0x0eb78c2b156635b1(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8);
			_0xbe551c2cc421185d(iVar0, uParam2->f_12);
			_0x5b23dff8e0948bb2(iVar0, uParam2->f_13);
			break;
		case 454885399:
			iVar0 = _create_walk_and_talk_volume(*uParam2, uParam2->f_2, uParam2->f_5, uParam2->f_8, uParam2->f_14);
			break;
		default:
			break;
	}
	if (!_does_volume_exist(iVar0))
	{
		return false;
	}
	uParam0->f_164[iParam1]->f_1 = uParam2->f_1;
	if (uParam2->f_11)
	{
		if (!_does_volume_exist(&(uParam0->f_164[iParam1])))
		{
			uParam0->f_164[iParam1] = _create_volume_aggregate();
		}
		_0x6e0d3c3f828da773(&(uParam0->f_164[iParam1]), iVar0);
	}
	else
	{
		uParam0->f_164[iParam1] = iVar0;
	}
	if (uParam2->f_25)
	{
		if (!_0x91a5f9cbebb9d936(uParam0->f_164[iParam1]->f_4))
		{
			uParam0->f_164[iParam1]->f_4 = _0x4c39c95ae5db1329(&(uParam0->f_164[iParam1]), uParam2->f_26, uParam2->f_27);
		}
	}
	if (uParam2->f_17)
	{
		if (!uParam0->f_164[iParam1]->f_2)
		{
			_0xb56d41a694e42e86(&(uParam0->f_164[iParam1]), uParam2->f_19, uParam2->f_20, uParam2->f_21, uParam2->f_22, uParam2->f_23, uParam2->f_24);
			uParam0->f_164[iParam1]->f_2 = 1;
		}
	}
	if (uParam2->f_18)
	{
		if (!uParam0->f_164[iParam1]->f_3)
		{
			_0x18262cafebb5fbe1(&(uParam0->f_164[iParam1]), uParam2->f_19, uParam2->f_20, uParam2->f_21, uParam2->f_22, uParam2->f_23, uParam2->f_24);
			uParam0->f_164[iParam1]->f_3 = 1;
		}
	}
	return true;
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4155;
		case 1:
			return 4156;
		case 2:
			return 4157;
		case 3:
			return 4158;
		case 4:
			return 4159;
		case 5:
			return 4160;
		case 6:
			return 4161;
		case 7:
			return 4162;
		case 8:
			return 4163;
		case 9:
			return 4164;
		case 10:
			return 4165;
		case 11:
			return 4166;
		case 12:
			return 4167;
		case 13:
			return 4168;
		default:
			break;
	}
	return 4154;
}

void func_699(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			_0xfd010a2154b40676(&(uParam0->f_164[iParam1]), uParam0->f_1348.f_15);
			break;
		case 12:
			_0xfd010a2154b40676(&(uParam0->f_164[iParam1]), uParam0->f_1348.f_15);
			break;
	}
}

bool func_700(var uParam0, int iParam1, var uParam2, var uParam3)
{
	iVar0 = func_588(func_133(uParam0, -15724930, iParam1, 0));
	if (iVar0 > -1 && iVar0 < 5)
	{
		*uParam2 = { *uParam0->f_4926[iVar0] };
		*uParam3 = { uParam0->f_4926[iVar0]->f_3 };
		return true;
	}
	*uParam2 = { func_207(uParam0, 1854074362, iParam1, 0) };
	if (!func_209(*uParam2))
	{
		*uParam3 = { func_207(uParam0, -1668582337, iParam1, 0) };
		return true;
	}
	return false;
}

bool func_701(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (!network_does_network_id_exist(&(uParam0->f_20[iParam1])))
	{
		return false;
	}
	if (!network_has_control_of_network_id(&(uParam0->f_20[iParam1])))
	{
		return false;
	}
	*iParam2 = net_to_ent(&(uParam0->f_20[iParam1]));
	return true;
}

bool func_702(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	if (iParam1 <= -1 || iParam1 >= 9)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_20[iParam1])))
	{
		return true;
	}
	func_640(uParam0, iParam1, 1);
	if (!func_1203(uParam0->f_20[iParam1], iParam2, vParam3, 1, 0))
	{
		return false;
	}
	iVar0 = net_to_ent(&(uParam0->f_20[iParam1]));
	set_entity_rotation(iVar0, vParam6, 2, true);
	if (bParam9)
	{
		_0x9587913b9e772d29(iVar0, 0);
	}
	func_1204(uParam0, iParam1);
	if (bParam10)
	{
		set_model_as_no_longer_needed(iParam2);
	}
	return true;
}

bool func_703(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, var uParam7, int iParam8)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_33[iParam1])))
	{
		return true;
	}
	if (!func_1205(uParam0->f_33[iParam1], iParam2, vParam3, uParam6, uParam7, 1, iParam8))
	{
		return false;
	}
	iVar0 = _0xd08066e00d26c448(&(uParam0->f_33[iParam1]));
	if (!_does_propset_exist(iVar0))
	{
		return false;
	}
	return true;
}

bool func_704(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (&uParam1->f_4926.f_201[iParam2] != 0)
	{
		iVar0 = func_693(&(uParam1->f_4926.f_201[iParam2]));
		if (iVar0 > -1 && iVar0 < 14)
		{
			*uParam3 = &uParam1->f_164[iVar0];
		}
		if (!_does_volume_exist(*uParam3))
		{
			return false;
		}
	}
	else if (uParam1->f_4926.f_201[iParam2]->f_4 != 0)
	{
		iVar1 = func_585(uParam1->f_4926.f_201[iParam2]->f_4);
		if (iVar1 > -1 && iVar1 < 1)
		{
			uParam3->f_4 = _0xd08066e00d26c448(&(uParam0->f_33[iVar1]));
			uParam3->f_1 = { uParam1->f_4926.f_170[iVar1]->f_1 };
		}
		if (!_does_propset_exist(uParam3->f_4))
		{
			return false;
		}
	}
	else
	{
		uParam3->f_1 = { uParam1->f_4926.f_201[iParam2]->f_1 };
	}
	uParam3->f_5 = uParam1->f_4926.f_201[iParam2]->f_5;
	uParam3->f_6 = uParam1->f_4926.f_201[iParam2]->f_6;
	uParam3->f_7 = uParam1->f_4926.f_201[iParam2]->f_7;
	return true;
}

int func_705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4169;
		default:
			break;
	}
	return 4170;
}

bool func_706(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 <= -1 || iParam1 >= 1)
	{
		return false;
	}
	if (func_520(uParam0->f_33[iParam1]))
	{
		return true;
	}
	if (_does_volume_exist(*uParam2))
	{
		uParam0->f_33[iParam1] = _0xbd3324281e8b9933(*uParam2, uParam2->f_6, uParam2->f_7, uParam2->f_4);
	}
	else
	{
		uParam0->f_33[iParam1] = _0xfa50f79257745e74(uParam2->f_1, uParam2->f_5, uParam2->f_6, uParam2->f_7, uParam2->f_4);
	}
	return true;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4172;
		default:
			break;
	}
	return 4171;
}

bool func_708(var uParam0, int iParam1, int iParam2, var uParam3)
{
	*uParam3 = &uParam0->f_4926.f_178[iParam1];
	uParam3->f_5 = func_584(uParam0, -238195629, iParam2, 0);
	uParam3->f_6 = func_133(uParam0, -795199841, iParam2, 0);
	uParam3->f_7 = func_582(uParam0, 428314976, iParam2, 0);
	iVar0 = func_588(func_133(uParam0, -393453621, iParam2, 0));
	if (iVar0 > -1 && iVar0 < 5)
	{
		uParam3->f_1 = { *uParam0->f_4926[iVar0] };
		uParam3->f_4 = uParam0->f_4926[iVar0]->f_6;
		return true;
	}
	uParam3->f_1 = { func_207(uParam0, -1814448663, iParam2, 0) };
	if (!func_209(uParam3->f_1))
	{
		uParam3->f_4 = func_208(uParam0, 708105482, iParam2, 0);
		return true;
	}
	return false;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4174;
		case 1:
			return 4175;
		case 2:
			return 4176;
		default:
			break;
	}
	return 4173;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4178;
		case 1:
			return 4179;
		case 2:
			return 4180;
		case 3:
			return 4181;
		case 4:
			return 4182;
		case 5:
			return 4183;
		case 6:
			return 4184;
		case 7:
			return 4185;
		case 8:
			return 4186;
		case 9:
			return 4187;
		case 10:
			return 4188;
		case 11:
			return 4189;
		case 12:
			return 4190;
		case 13:
			return 4191;
		default:
			break;
	}
	return 4177;
}

bool func_711(int iParam0, int iParam1, bool bParam2)
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

bool func_712(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_3 > -1 && uParam1->f_3 < 3)
	{
		iVar0 = net_to_veh(&(uParam0->f_13[uParam1->f_3]));
		if (!func_1206(&iParam2, &iVar0, uParam1->f_4, 0))
		{
			return false;
		}
	}
	else if (uParam1->f_2 > -1 && uParam1->f_2 < 6)
	{
		iVar1 = net_to_ped(&(uParam0->f_3[uParam1->f_2]));
		if (!func_1207(iParam2, iVar1, 0, uParam1->f_4, 1))
		{
			return false;
		}
	}
	else
	{
		_set_entity_coords_and_heading(iParam2, uParam1->f_5, uParam1->f_8, true, false, true);
		if (_0x9587913b9e772d29(iParam2, 0))
		{
		}
	}
	return true;
}

int func_713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4193;
		case 1:
			return 4194;
		case 2:
			return 4195;
		case 3:
			return 4196;
		case 4:
			return 4197;
		case 5:
			return 4198;
		case 6:
			return 4199;
		case 7:
			return 4200;
		case 8:
			return 4201;
		case 9:
			return 4202;
		case 10:
			return 4203;
		case 11:
			return 4204;
		case 12:
			return 4205;
		case 13:
			return 4206;
		default:
			break;
	}
	return 4192;
}

int func_714(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	iVar0 = get_id_of_this_thread();
	if (func_616(72))
	{
		func_187(&(Global_1291734->f_11.f_119));
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
						if (!func_1208(1))
						{
							return 0;
						}
					}
					else if (!func_1209(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_1210(1);
				return 0;
			}
		}
	}
	if (func_616(70))
	{
		if (!func_237(&(Global_1291734->f_11.f_119)))
		{
			func_238(&(Global_1291734->f_11.f_119), 0);
		}
		fVar3 = func_690(&(Global_1291734->f_11.f_119));
		if (fVar3 > 10f)
		{
			func_181(1);
			Global_1291734->f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1291734->f_11.f_70 != 0)
		{
			if (!is_thread_active(Global_1291734->f_11.f_70, false))
			{
				func_181(1);
				return 0;
			}
			if (Global_1291734->f_11.f_70 != iVar0)
			{
				Global_1291734->f_11.f_104 = 0;
				func_187(&(Global_1291734->f_11.f_119));
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
		func_187(&(Global_1291734->f_11.f_119));
		func_617(71);
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
	if (func_1211(255) && func_614(2, 255))
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
		func_617(73);
	}
	else
	{
		func_1048(73);
	}
	if (bParam6)
	{
		func_617(76);
	}
	else
	{
		func_1048(76);
	}
	func_617(70);
	func_386(&(Global_1291734->f_11.f_119));
	return 0;
}

int func_715(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4209;
				case 1:
					return 4210;
				case 2:
					return 4211;
				case 3:
					return 4212;
				case 4:
					return 4213;
				case 5:
					return 4214;
				case 6:
					return 4215;
				case 7:
					return 4216;
				case 8:
					return 4217;
				case 9:
					return 4218;
				case 10:
					return 4219;
				case 11:
					return 4220;
				case 12:
					return 4221;
				case 13:
					return 4222;
				default:
					break;
			}
			return 4208;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 4224;
				case 1:
					return 4225;
				case 2:
					return 4226;
				case 3:
					return 4227;
				case 4:
					return 4228;
				case 5:
					return 4229;
				case 6:
					return 4230;
				case 7:
					return 4231;
				case 8:
					return 4232;
				case 9:
					return 4233;
				case 10:
					return 4234;
				case 11:
					return 4235;
				case 12:
					return 4236;
				case 13:
					return 4237;
				default:
					break;
			}
			return 4223;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4239;
				case 1:
					return 4240;
				case 2:
					return 4241;
				case 3:
					return 4242;
				case 4:
					return 4243;
				case 5:
					return 4244;
				case 6:
					return 4245;
				case 7:
					return 4246;
				case 8:
					return 4247;
				case 9:
					return 4248;
				case 10:
					return 4249;
				case 11:
					return 4250;
				case 12:
					return 4251;
				case 13:
					return 4252;
				default:
					break;
			}
			return 4238;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 4254;
				case 1:
					return 4255;
				case 2:
					return 4256;
				case 3:
					return 4257;
				case 4:
					return 4258;
				case 5:
					return 4259;
				case 6:
					return 4260;
				case 7:
					return 4261;
				case 8:
					return 4262;
				case 9:
					return 4263;
				case 10:
					return 4264;
				case 11:
					return 4265;
				case 12:
					return 4266;
				case 13:
					return 4267;
				default:
					break;
			}
			return 4253;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 4269;
				case 1:
					return 4270;
				case 2:
					return 4271;
				case 3:
					return 4272;
				case 4:
					return 4273;
				case 5:
					return 4274;
				case 6:
					return 4275;
				case 7:
					return 4276;
				case 8:
					return 4277;
				case 9:
					return 4278;
				case 10:
					return 4279;
				case 11:
					return 4280;
				case 12:
					return 4281;
				case 13:
					return 4282;
				default:
					break;
			}
			return 4268;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 4284;
				case 1:
					return 4285;
				case 2:
					return 4286;
				case 3:
					return 4287;
				case 4:
					return 4288;
				case 5:
					return 4289;
				case 6:
					return 4290;
				case 7:
					return 4291;
				case 8:
					return 4292;
				case 9:
					return 4293;
				case 10:
					return 4294;
				case 11:
					return 4295;
				case 12:
					return 4296;
				case 13:
					return 4297;
				default:
					break;
			}
			return 4283;
		default:
			break;
	}
	return 4207;
}

bool func_716(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (!network_does_network_id_exist(&(uParam0->f_3[iParam1])))
	{
		return false;
	}
	if (!network_has_control_of_network_id(&(uParam0->f_3[iParam1])))
	{
		return false;
	}
	*iParam2 = net_to_ped(&(uParam0->f_3[iParam1]));
	return true;
}

int func_717(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 4300;
				case 1:
					return 4301;
				case 2:
					return 4302;
				case 3:
					return 4303;
				case 4:
					return 4304;
				case 5:
					return 4305;
				case 6:
					return 4306;
				case 7:
					return 4307;
				case 8:
					return 4308;
				case 9:
					return 4309;
				case 10:
					return 4310;
				case 11:
					return 4311;
				case 12:
					return 4312;
				case 13:
					return 4313;
				default:
					break;
			}
			return 4299;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 4315;
				case 1:
					return 4316;
				case 2:
					return 4317;
				case 3:
					return 4318;
				case 4:
					return 4319;
				case 5:
					return 4320;
				case 6:
					return 4321;
				case 7:
					return 4322;
				case 8:
					return 4323;
				case 9:
					return 4324;
				case 10:
					return 4325;
				case 11:
					return 4326;
				case 12:
					return 4327;
				case 13:
					return 4328;
				default:
					break;
			}
			return 4314;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4330;
				case 1:
					return 4331;
				case 2:
					return 4332;
				case 3:
					return 4333;
				case 4:
					return 4334;
				case 5:
					return 4335;
				case 6:
					return 4336;
				case 7:
					return 4337;
				case 8:
					return 4338;
				case 9:
					return 4339;
				case 10:
					return 4340;
				case 11:
					return 4341;
				case 12:
					return 4342;
				case 13:
					return 4343;
				default:
					break;
			}
			return 4329;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 4345;
				case 1:
					return 4346;
				case 2:
					return 4347;
				case 3:
					return 4348;
				case 4:
					return 4349;
				case 5:
					return 4350;
				case 6:
					return 4351;
				case 7:
					return 4352;
				case 8:
					return 4353;
				case 9:
					return 4354;
				case 10:
					return 4355;
				case 11:
					return 4356;
				case 12:
					return 4357;
				case 13:
					return 4358;
				default:
					break;
			}
			return 4344;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 4360;
				case 1:
					return 4361;
				case 2:
					return 4362;
				case 3:
					return 4363;
				case 4:
					return 4364;
				case 5:
					return 4365;
				case 6:
					return 4366;
				case 7:
					return 4367;
				case 8:
					return 4368;
				case 9:
					return 4369;
				case 10:
					return 4370;
				case 11:
					return 4371;
				case 12:
					return 4372;
				case 13:
					return 4373;
				default:
					break;
			}
			return 4359;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 4375;
				case 1:
					return 4376;
				case 2:
					return 4377;
				case 3:
					return 4378;
				case 4:
					return 4379;
				case 5:
					return 4380;
				case 6:
					return 4381;
				case 7:
					return 4382;
				case 8:
					return 4383;
				case 9:
					return 4384;
				case 10:
					return 4385;
				case 11:
					return 4386;
				case 12:
					return 4387;
				case 13:
					return 4388;
				default:
					break;
			}
			return 4374;
			return 4298;
		}

bool func_718(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (iParam2 <= -1 || iParam2 >= 6)
	{
		return false;
	}
	if (network_does_network_id_exist(&(uParam0->f_3[iParam2])))
	{
		return true;
	}
	func_637(uParam0, iParam2, 1);
	if (uParam3->f_3 > -1 && uParam3->f_3 < 3)
	{
		if (!func_1212(uParam0->f_3[iParam2], &(uParam0->f_13[uParam3->f_3]), *uParam3, uParam3->f_4, 1, 0, 0))
		{
			return false;
		}
		iVar0 = net_to_ped(&(uParam0->f_3[iParam2]));
	}
	else if (uParam3->f_2 > -1 && uParam3->f_2 < 6)
	{
		if (!func_1213(uParam0->f_3[iParam2], &(uParam0->f_3[uParam3->f_2]), *uParam3, uParam3->f_4, 1, 0, 0, 0))
		{
			return false;
		}
		iVar0 = net_to_ped(&(uParam0->f_3[iParam2]));
	}
	else
	{
		if (!func_1214(uParam0->f_3[iParam2], *uParam3, uParam3->f_5, uParam3->f_8, 1, uParam3->f_1, 0, 0, 0))
		{
			return false;
		}
		iVar0 = net_to_ped(&(uParam0->f_3[iParam2]));
		if (_0x9587913b9e772d29(iVar0, 0))
		{
		}
	}
	func_1215(uParam0, uParam1, iParam2);
	if (bParam4)
	{
		set_model_as_no_longer_needed(*uParam3);
	}
	return true;
}

void func_719(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 || iParam0);
}

void func_720(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 - (Global_17411.f_55.f_61.f_582 && iParam0));
}

void func_721(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	iParam2 = func_1009(iParam2, 0, 100);
	if (func_1216(iParam1, &iVar0))
	{
		_set_attribute_core_value(iParam0, iVar0, iParam2);
	}
}

void func_722(var uParam0)
{
	Var0.f_10.f_4 = -1;
	Var0.f_10.f_8 = 2;
	Var0.f_10.f_9 = 1;
	Var0.f_10.f_10 = 1;
	Var0.f_10.f_11 = 1;
	Var0.f_10.f_13 = 1;
	Var0.f_10.f_14 = 2;
	Var0.f_10.f_15 = 2;
	Var0.f_10.f_16 = 3;
	Var0.f_10.f_19 = 3;
	Var0.f_10.f_20 = 1;
	Var0.f_10.f_21 = 3;
	Var0.f_10.f_22 = 3;
	_copy_memory(uParam0, &Var0, 35);
}

void func_723(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_4.f_4 = -1;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_9 = 1;
	Var0.f_4.f_10 = 1;
	Var0.f_4.f_11 = 1;
	Var0.f_4.f_13 = 1;
	Var0.f_4.f_14 = 2;
	Var0.f_4.f_15 = 2;
	Var0.f_4.f_16 = 3;
	Var0.f_4.f_19 = 3;
	Var0.f_4.f_20 = 1;
	Var0.f_4.f_21 = 3;
	Var0.f_4.f_22 = 3;
	Var0.f_41 = -1;
	Var0.f_42 = 1084227584;
	Var0.f_43 = 16;
	_copy_memory(uParam0, &Var0, 46);
}

void func_724(var uParam0, int iParam1, int iParam2)
{
	_set_scenario_point_flag(&(uParam0->f_35[iParam1]), 22, true);
	_set_scenario_point_flag(&(uParam0->f_35[iParam1]), 25, true);
	if (iParam2 & 1 != 0)
	{
		_set_scenario_point_flag(&(uParam0->f_35[iParam1]), 8, true);
	}
}

void func_725(var uParam0, int iParam1)
{
	func_1217(uParam0->f_4808.f_86[iParam1]);
	uParam0->f_4808.f_86.f_31 = (uParam0->f_4808.f_86.f_31 - 1);
	*uParam0->f_4808.f_86[iParam1] = { *uParam0->f_4808.f_86[uParam0->f_4808.f_86.f_31] };
	func_1217(uParam0->f_4808.f_86[uParam0->f_4808.f_86.f_31]);
}

bool func_726(var uParam0, int iParam1)
{
	if (func_396(uParam0, &(uParam0->f_4808.f_86[iParam1]), uParam0->f_4808.f_86[iParam1]->f_2, -1, 1))
	{
		return true;
	}
	return false;
}

void func_727(var uParam0, int iParam1)
{
	if (uParam0->f_377.f_2 == iParam1)
	{
		return;
	}
	uParam0->f_377.f_2 = iParam1;
}

void func_728(var uParam0, int iParam1)
{
	func_1218(uParam0, iParam1);
}

void func_729(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 33;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 6, 35, &uParam1);
	func_1219(*uParam0);
}

bool func_730(int iParam0)
{
	return func_1220(iParam0, 2) <= 0f;
}

void func_731(var uParam0, var uParam1, int iParam2)
{
	switch (uParam1->f_4808.f_2)
	{
		case 0:
			func_372(iParam2, 0);
			task_swap_weapon(iParam2, 1, 1, 0, 0);
			func_856(uParam1, 1);
			break;
		case 1:
			func_1221(iParam2, uParam1->f_4, 25f);
			func_112(uParam1, 6);
			func_856(uParam1, 2);
			break;
		case 2:
			func_1221(iParam2, uParam1->f_4, 25f);
			break;
	}
}

void func_732(var uParam0, var uParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam2, true, false) };
	iVar3 = func_249(uParam0, 5);
	switch (uParam1->f_4808.f_2)
	{
		case 0:
			task_clear_look_at(iParam2);
			request_waypoint_recording(uParam1->f_4926.f_36[0]);
			func_856(uParam1, 3);
			break;
		case 3:
			if (!func_1222())
			{
				if (!func_369(uParam0, uParam1, 16, 1))
				{
					return;
				}
			}
			func_856(uParam1, 4);
			break;
		case 4:
			if (!func_1222())
			{
				func_369(uParam0, uParam1, 16, 1);
			}
			if (func_338(uParam1->f_5, vVar0) > 10f)
			{
				func_1223(iParam2);
				func_856(uParam1, 5);
				return;
			}
			if (uParam1->f_1348.f_3 == 2)
			{
				iVar4 = 1034;
			}
			else
			{
				iVar4 = 9226;
			}
			func_1224(iParam2, uParam1->f_4926.f_36[0], -1, 1056964608, iVar4, 0);
			if (is_waypoint_playback_going_on_for_ped(iParam2, uParam1->f_4926.f_36[0]))
			{
				if ((_0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(iParam2, true, false)) - _0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(uParam1->f_4, true, false))) < 5f || func_1225(uParam1->f_4, iParam2, uParam1->f_4926.f_36[0], 1112014848))
				{
					set_ped_max_move_blend_ratio(uParam1->f_4, (1f + 0.25f));
					waypoint_playback_override_speed(iParam2, (1f + 0.25f), 0, -1082130432, 0);
				}
				else
				{
					if ((_0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(iParam2, true, false)) - _0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(uParam1->f_4, true, false))) < 10f)
					{
						set_ped_max_move_blend_ratio(uParam1->f_4, 1.5f);
					}
					waypoint_playback_override_speed(iParam2, 1f, 0, -1082130432, 0);
				}
			}
			if (func_338(vVar0, get_entity_coords(iVar3, true, false)) < 8.5f)
			{
				set_current_ped_weapon(iParam2, -1569615261, false, 0, false, false);
				set_current_ped_weapon(iParam2, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(iParam2, 1, 0, 1, 0);
				task_swap_weapon(iParam2, 1, 1, 0, 0);
				uParam1->f_4808.f_5 = 0;
				func_856(uParam1, 6);
			}
			else if (func_276(uParam1->f_4, _0xf49f14462f0ae27c(uParam1->f_2), 1))
			{
				set_current_ped_weapon(iParam2, -1569615261, false, 0, false, false);
				set_current_ped_weapon(iParam2, -1569615261, false, 1, false, false);
				_0x94a3c1b804d291ec(iParam2, 1, 0, 1, 0);
				task_swap_weapon(iParam2, 1, 1, 0, 0);
				uParam1->f_4808.f_5 = 0;
				func_856(uParam1, 6);
			}
			break;
		case 5:
			if (func_338(uParam1->f_5, vVar0) < 6f)
			{
				func_187(&(uParam1->f_4808.f_7));
				task_clear_look_at(iParam2);
				uParam1->f_4808.f_5 = 0;
				func_856(uParam1, 4);
				return;
			}
			func_1221(iParam2, uParam1->f_4, 25f);
			func_238(&(uParam1->f_4808.f_7), 0);
			if (!func_239(&(uParam1->f_4808.f_7), to_float(25)) && uParam1->f_4808.f_5 != 0)
			{
				return;
			}
			if (!func_1222())
			{
				func_202(uParam0, 4);
				if (func_369(uParam0, uParam1, 4, 1))
				{
					func_386(&(uParam1->f_4808.f_7));
					uParam1->f_4808.f_5++;
				}
			}
			else if (!func_870(4))
			{
				uParam1->f_4808.f_5 = 0;
			}
			break;
		case 6:
			func_1223(iParam2);
			if (!func_1222())
			{
				func_369(uParam0, uParam1, 17, 1);
			}
			func_1226(iParam2, iVar3, 1, 1069547520, 0);
			if (!is_ped_on_mount(uParam1->f_4))
			{
				if ((_0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(iParam2, true, false)) - _0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(uParam1->f_4, true, false))) < 5f)
				{
					set_ped_max_move_blend_ratio(uParam1->f_4, (1f + 0.25f));
					if (is_waypoint_playback_going_on_for_ped(iParam2, 0))
					{
						waypoint_playback_override_speed(iParam2, (1f + 0.25f), 0, -1082130432, 0);
					}
				}
				else
				{
					if ((_0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(iParam2, true, false)) - _0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(uParam1->f_4, true, false))) < 10f)
					{
						set_ped_max_move_blend_ratio(uParam1->f_4, 1.5f);
					}
					if (is_waypoint_playback_going_on_for_ped(iParam2, 0))
					{
						waypoint_playback_override_speed(iParam2, 1f, 0, -1082130432, 0);
					}
				}
			}
			else
			{
				uParam1->f_4808.f_5 = 0;
			}
			func_238(&(uParam1->f_4808.f_7), 0);
			if (!func_239(&(uParam1->f_4808.f_7), to_float(25)) && uParam1->f_4808.f_5 != 0)
			{
				return;
			}
			if (!func_1222())
			{
				if ((_0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(iParam2, true, false)) - _0x3acc128510142b9d(uParam1->f_4926.f_36[0], get_entity_coords(uParam1->f_4, true, false))) > 10f)
				{
					func_202(uParam0, 1);
					if (func_369(uParam0, uParam1, 1, 1))
					{
						func_386(&(uParam1->f_4808.f_7));
						uParam1->f_4808.f_5++;
					}
				}
				else
				{
					func_202(uParam0, 0);
					if (func_369(uParam0, uParam1, 0, 1))
					{
						func_386(&(uParam1->f_4808.f_7));
						uParam1->f_4808.f_5++;
					}
				}
			}
			else if (!func_870(1) && !func_870(0))
			{
				uParam1->f_4808.f_5 = 0;
			}
			break;
	}
}

void func_733(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_249(uParam0, 5);
	fVar1 = func_338(get_entity_coords(iParam2, true, false), uParam1->f_5);
	iVar2 = _0xf49f14462f0ae27c(uParam1->f_2);
	func_350(iParam2, uParam1->f_4926.f_210[uParam1->f_1348.f_3459]->f_1, 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
	switch (uParam1->f_4808.f_2)
	{
		case 0:
			request_waypoint_recording(uParam1->f_4926.f_36[1]);
			func_856(uParam1, 7);
			break;
		case 7:
			func_238(&(uParam1->f_4808.f_7), 0);
			if (!func_1222())
			{
				func_369(uParam0, uParam1, 18, 1);
			}
			if (!func_352(uParam0, 18) && !func_239(&(uParam1->f_4808.f_7), 1.15f))
			{
				return;
			}
			if ((func_352(uParam0, 18) && !func_1222()) && func_239(&(uParam1->f_4808.f_7), func_750(((uParam1->f_1348.f_3 == 0 || uParam1->f_1348.f_3 == 2) || uParam1->f_1348.f_3 == 3), 7.5f, 13.5f)))
			{
				if (func_869(uParam0, 6) && func_1227(6))
				{
					func_1228(6);
				}
				else
				{
					func_369(uParam0, uParam1, 6, 1);
				}
			}
			if (func_352(uParam0, 6) && !func_1222())
			{
				func_238(&(uParam1->f_1348.f_148), 0);
				if (func_239(&(uParam1->f_1348.f_148), func_750(((uParam1->f_1348.f_3 == 0 || uParam1->f_1348.f_3 == 2) || uParam1->f_1348.f_3 == 3), 2.25f, 7.5f)))
				{
					if (func_869(uParam0, 7) && func_1227(7))
					{
						func_1228(7);
					}
					else
					{
						func_369(uParam0, uParam1, 7, 1);
					}
				}
			}
			if (func_251(uParam1, 36))
			{
				uParam1->f_4808.f_6 = uParam1->f_14;
				if (!func_276(uParam1->f_4, iVar2, 1))
				{
					func_167(uParam1, 36);
				}
			}
			else if (func_276(uParam1->f_4, iVar2, 1))
			{
				func_112(uParam1, 36);
			}
			if (fVar1 > 22.5f || absi(get_time_difference(uParam1->f_4808.f_6, uParam1->f_14)) > 2500)
			{
				if (func_870(6))
				{
					func_1229(6, 0, 1, 1, 0);
				}
				if (func_870(7))
				{
					func_1229(7, 0, 1, 1, 0);
				}
				uParam1->f_4808.f_5 = 0;
				func_187(&(uParam1->f_1348.f_148));
				func_1223(iParam2);
				func_856(uParam1, 8);
				return;
			}
			if (func_276(iParam2, iVar0, 1))
			{
				vVar3 = { func_1230(uParam1->f_4926.f_36[1]) };
				if ((!func_209(vVar3) && func_356(iParam2, vVar3, 50f, 1, 1)) && ((!func_1222() || func_870(6)) || func_870(7)))
				{
					func_368(6, 1, 0);
					func_368(7, 0, 0);
					if (!func_1222())
					{
						func_369(uParam0, uParam1, 9, 1);
					}
				}
				iVar6 = 25864;
				if (func_1224(iParam2, uParam1->f_4926.f_36[1], -1, 1056964608, iVar6, 0))
				{
					func_187(&(uParam1->f_1348.f_148));
					func_1223(iParam2);
					if ((!func_1222() || func_870(6)) || func_870(7))
					{
						func_368(6, 1, 0);
						func_368(7, 0, 0);
						if (!func_1222())
						{
							func_369(uParam0, uParam1, 9, 1);
						}
					}
					func_856(uParam1, 9);
				}
			}
			else
			{
				func_1226(iParam2, iVar0, 1, 1069547520, 0);
			}
			break;
		case 8:
			if (fVar1 < 12f && func_276(uParam1->f_4, iVar2, 1))
			{
				task_clear_look_at(iParam2);
				if (!func_1222())
				{
					func_202(uParam0, 3);
					func_369(uParam0, uParam1, 3, 1);
				}
				func_187(&(uParam1->f_4808.f_7));
				func_856(uParam1, 7);
				return;
			}
			if (func_276(iParam2, iVar0, 1))
			{
				func_1221(iParam2, uParam1->f_4, 25f);
			}
			else
			{
				func_1226(iParam2, iVar0, 1, 1069547520, 0);
			}
			func_238(&(uParam1->f_4808.f_7), 0);
			if (!func_239(&(uParam1->f_4808.f_7), to_float(35)) && uParam1->f_4808.f_5 != 0)
			{
				return;
			}
			if (!func_1222())
			{
				func_202(uParam0, 8);
				if (func_369(uParam0, uParam1, 8, 1))
				{
					func_386(&(uParam1->f_4808.f_7));
					uParam1->f_4808.f_5++;
				}
			}
			else if (!func_870(8))
			{
				uParam1->f_4808.f_5 = 0;
			}
			break;
		case 9:
			if (!func_1222())
			{
				func_369(uParam0, uParam1, 9, 1);
			}
			func_1223(iParam2);
			if (!func_757(iParam2, -982327190))
			{
				task_stand_still(iParam2, -1);
			}
			break;
	}
}

void func_734(var uParam0, var uParam1, int iParam2)
{
	switch (uParam1->f_4808.f_2)
	{
		case 0:
			func_856(uParam1, 11);
			break;
		case 11:
			func_355(uParam0, uParam1);
			func_350(iParam2, uParam1->f_4926.f_210[uParam1->f_1348.f_3459]->f_1, 0, 1112014848, 15f, 6f, 1084227584, 1, 1, 1, 0);
			func_238(&(uParam1->f_4808.f_7), 0);
			if (func_239(&(uParam1->f_4808.f_7), 8f) || func_1231(uParam1, iParam2, func_249(uParam0, 5), uParam1->f_1348.f_3459, 262144))
			{
				func_187(&(uParam1->f_4808.f_7));
				func_856(uParam1, 12);
			}
			break;
		case 12:
			func_238(&(uParam1->f_4808.f_7), 0);
			if (is_ped_on_mount(iParam2) && !func_239(&(uParam1->f_4808.f_7), 3f))
			{
				if (!func_367(iParam2, 501393341))
				{
					clear_ped_tasks(iParam2, 1, 0);
					task_dismount_animal(iParam2, 0, 0, 0, 0, 0);
				}
				return;
			}
			if (func_239(&(uParam1->f_4808.f_7), 5f) || !is_ped_on_mount(iParam2))
			{
				func_369(uParam0, uParam1, 10, 1);
			}
			set_ped_reset_flag(iParam2, 83, true);
			func_396(uParam1, iParam2, 3, -1, 0);
			break;
	}
}

void func_735(var uParam0, var uParam1, int iParam2)
{
	if (!is_ped_on_mount(uParam1->f_4) && func_346(uParam1->f_4, iParam2, 15f, 1, 1))
	{
		func_736(iParam2, &(uParam1->f_4808.f_10), 1500, uParam1->f_4);
	}
	if (func_346(uParam1->f_4, iParam2, 8f, 1, 1))
	{
		func_736(uParam1->f_4, &(uParam1->f_4808.f_10), 1500, iParam2);
	}
}

void func_736(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_418(iParam0, 0))
	{
		return;
	}
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_4 = 21030;
	uParam1->f_8 = 4;
	uParam1->f_19 = 4;
	uParam1->f_21 = 4;
	uParam1->f_17 = 0;
	uParam1->f_18 = 0;
	uParam1->f_3 = iParam3;
	uParam1->f_7 = iParam2;
	_0x66f9eb44342bb4c5(iParam0, uParam1);
}

void func_737(var uParam0, var uParam1)
{
	iVar0 = func_249(uParam0, 4);
	if (func_346(uParam1->f_4, iVar0, 4.25f, 1, 1))
	{
		set_ped_reset_flag(uParam1->f_4, 203, true);
		set_ped_reset_flag(uParam1->f_4, 224, true);
	}
}

char* func_738(var uParam0)
{
	sVar0 = "";
	switch (uParam0->f_1348.f_3)
	{
		case 0:
			return "script@MPSTORY@MPINTRO@IG2@MPINTRO_IG2_Gang_Boss_A1";
		case 1:
			return "script@MPSTORY@MPINTRO@IG2@MPINTRO_IG2_Gang_Boss";
		case 2:
			return "script@MPSTORY@MPINTRO@IG2@MPINTRO_IG2_Gang_Boss_A2";
		case 3:
			return "script@MPSTORY@MPINTRO@IG2@MPINTRO_IG2_Gang_Boss_A3";
		default:
			break;
	}
	return sVar0;
}

bool func_739(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(iVar0, sParam3);
	if (_0x23e33cb9f4a3f547(iVar0, sParam3))
	{
		return true;
	}
	if (_0x0df57f86fe71dbe5(iVar0, sParam3))
	{
		return false;
	}
	return true;
}

bool func_740(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iVar0, sParam3) && !func_739(uParam0, uParam1, iParam2, sParam3))
	{
		return false;
	}
	_set_anim_scene_playback_list_bool(iVar0, sParam3, bParam4);
	return true;
}

void func_741(int iParam0, bool bParam1)
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

char* func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Boss_Dont_Want_Die";
		case 1:
			return "pl_Boss_Merciful";
		case 2:
			return "pl_Boss_Trick";
		case 3:
			return "pl_Boss_Reformed";
		default:
			break;
	}
	return "pl_Boss_Standing_Idle";
}

void func_743(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4, char* sParam5, float fParam6, var uParam7, int iParam8, int iParam9, char* sParam10)
{
	uVar0 = *iParam1;
	func_1232(iParam0, &uVar0, uParam2, uParam3, sParam4, sParam5, fParam6, uParam7, iParam8, iParam9, sParam10);
}

void func_744(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && !func_358(iParam0))
	{
		return;
	}
	iVar0 = func_874(iParam0);
	if (bParam1)
	{
		func_875(iParam0, 4);
		if (bParam3)
		{
			func_878(iVar0, 1);
		}
		func_876(iVar0, 1);
	}
	else
	{
		func_877(iParam0, 4);
		func_876(iVar0, 0);
	}
}

bool func_745(int iParam0, int iParam1, float fParam2)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	func_1233(0);
	if (is_ped_on_mount(iParam0) && !func_367(iParam0, 501393341))
	{
		task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
	}
	else if (!is_ped_on_mount(iParam0))
	{
		if ((func_418(iParam1, 0) && func_346(iParam0, iParam1, fParam2, 1, 1)) && !func_367(iParam1, 518218985))
		{
			clear_ped_tasks(iParam1, 1, 0);
			task_smart_flee_coord(iParam1, get_entity_coords(iParam0, true, false), fParam2, -1, 256, 0.101f);
			_0x2208438012482a1a(iParam1, false, false);
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_746(int iParam0, int iParam1)
{
	if ((is_player_playing(iParam0) && does_entity_exist(iParam1)) && !is_entity_dead(iParam1))
	{
		if (((_0x3ee1f7a8c32f24e1(iParam0, &iVar0, 0, 0) && does_entity_exist(iVar0)) && iVar0 == iParam1) || ((_0xbea3a6e5f5f79a6f(iParam0, &iVar0) && does_entity_exist(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_747(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_748(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_358(iParam0))
	{
		return;
	}
	iVar0 = func_874(iParam0);
	if (!_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1951255)[iVar0]->f_3, sParam1);
}

bool func_749(int iParam0, bool bParam1)
{
	if (bParam1 && !func_358(iParam0))
	{
		return false;
	}
	iVar0 = func_874(iParam0);
	return _uiprompt_is_just_pressed((*Global_1951255)[iVar0]->f_3);
}

float func_750(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_751(int iParam0, bool bParam1)
{
	if (bParam1 && !func_358(iParam0))
	{
		return false;
	}
	return !func_1234(iParam0, 4);
}

int func_752(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, int iParam5, char* sParam6)
{
	if ((!func_358(*uParam2) || !func_358(*uParam3)) || !does_entity_exist(iParam1))
	{
		return -1;
	}
	if ((func_346(get_player_ped(iParam0), iParam1, fParam4, 1, 1) && (func_746(iParam0, iParam1) || is_player_free_aiming_at_entity(iParam0, iParam1))) || iParam5 == 1)
	{
		if (!is_string_null_or_empty(sParam6))
		{
			_uiprompt_set_ambient_group_this_frame(iParam1, fParam4, 3, 1, _uiprompt_get_group_id_for_target_entity(iParam1), sParam6, 0);
			_uiprompt_set_active_group_this_frame(_uiprompt_get_group_id_for_target_entity(iParam1), sParam6, 1, 0, 0, 0);
		}
		func_744(*uParam2, 1, 1, 1);
		func_363(*uParam2, 1, 1);
		if (func_749(*uParam2, 1))
		{
			return 0;
		}
		func_744(*uParam3, 1, 1, 1);
		func_363(*uParam3, 1, 1);
		if (func_749(*uParam3, 1))
		{
			return 1;
		}
	}
	else
	{
		if (func_751(*uParam2, 0))
		{
			func_744(*uParam2, 0, 1, 1);
			func_363(*uParam2, 0, 1);
		}
		if (func_751(*uParam3, 0))
		{
			func_744(*uParam3, 0, 1, 1);
			func_363(*uParam3, 0, 1);
		}
	}
	return -1;
}

bool func_753(var uParam0, var uParam1)
{
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	disable_control_action(0, -654888872, false);
	disable_control_action(0, -1304887797, false);
	iVar0 = uParam1->f_4;
	if (uParam1->f_19 == 1)
	{
		if (func_758(func_747(iVar0, 0, 1, 0)) || func_758(func_747(iVar0, 1, 1, 0)))
		{
			func_187(&(uParam1->f_20));
			uParam1->f_18 = 0;
			uParam1->f_19 = 0;
		}
		else
		{
			return true;
		}
	}
	if (uParam1->f_18 == 0)
	{
		if (!func_758(func_747(iVar0, 0, 1, 0)) && !func_758(func_747(iVar0, 1, 1, 0)))
		{
			func_187(&(uParam1->f_20));
			uParam1->f_18 = 1;
			uParam1->f_19 = 1;
			return true;
		}
		else if (((func_758(func_747(iVar0, 0, 1, 0)) || func_758(func_747(iVar0, 1, 1, 0))) && !func_367(iVar0, 716706914)) && !func_367(iVar0, 242628503))
		{
			clear_ped_tasks(iVar0, 1, 0);
			_0x94a3c1b804d291ec(iVar0, 1, 0, 1, 0);
			_hide_ped_weapons(iVar0, 2, false);
			task_swap_weapon(iVar0, 0, 0, 0, 0);
			_0x2208438012482a1a(iVar0, false, false);
			func_238(&(uParam1->f_20), 0);
			uParam1->f_18 = 1;
		}
	}
	else if (uParam1->f_18 == 1)
	{
		bVar1 = func_410(&(uParam1->f_20)) >= 1.5f;
		if ((!func_758(func_747(iVar0, 0, 1, 0)) && !func_758(func_747(iVar0, 1, 1, 0))) || bVar1)
		{
			func_187(&(uParam1->f_20));
			uParam1->f_19 = 1;
			return true;
		}
	}
	return false;
}

bool func_754(var uParam0)
{
	iVar0 = uParam0->f_4;
	if (!_is_ped_carrying(iVar0) && !func_367(iVar0, -208384378))
	{
		return true;
	}
	else if (_is_ped_carrying(iVar0) && !func_367(iVar0, -208384378))
	{
		if (func_1235(iVar0))
		{
			uParam0->f_23 = func_1236();
		}
		else
		{
			uParam0->f_23 = _get_first_entity_ped_is_carrying(iVar0);
		}
		if (does_entity_exist(uParam0->f_23))
		{
			clear_ped_tasks(iVar0, 1, 0);
			task_place_carried_entity_at_coord(iVar0, uParam0->f_23, get_entity_coords(iVar0, true, false), 2f, 9);
		}
	}
	return false;
}

void func_755(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return;
	}
	if (!_does_anim_scene_exist(iVar0) || !_0x23e33cb9f4a3f547(iVar0, sParam5))
	{
		return;
	}
	clear_ped_tasks(iParam3, 1, 0);
	task_enter_anim_scene(iParam3, iVar0, sParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

bool func_756(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		return false;
	}
	return _0x337f1cc8ee895601(iVar0, sParam3);
}

bool func_757(int iParam0, int iParam1)
{
	if (iParam1 == 2104565373)
	{
		return is_driveby_task_underneath_driving_task(iParam0);
	}
	iVar0 = get_script_task_status(iParam0, iParam1, false);
	switch (iVar0)
	{
		case 0:
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

bool func_758(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_759(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_1237(iParam0, vVar0, fParam2);
}

void func_760(int iParam0, bool bParam1, bool bParam2)
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

void func_761(var uParam0)
{
	func_66(uParam0, 1);
	func_80(uParam0, 0);
	uParam0->f_1348.f_30 = 0;
	uParam0->f_1348.f_31 = 0;
	uParam0->f_1348.f_32 = -1;
}

void func_762(var uParam0, var uParam1)
{
	uParam0->f_1348.f_29 = uParam1;
	if (!func_205(uParam0, uParam0->f_1348.f_29))
	{
		return;
	}
	func_761(uParam0);
	uParam0->f_1348.f_30 = func_133(uParam0, 1478421962, 0, 0);
	if (uParam0->f_1348.f_30 == 0)
	{
		return;
	}
	func_122(uParam0, 1);
	uParam0->f_1348.f_31 = func_133(uParam0, -305053920, uParam0->f_1348.f_30, 0);
	if (!func_148(uParam0, 1086629639, uParam0->f_1348.f_31, 0))
	{
		return;
	}
	func_122(uParam0, 1);
	uParam0->f_1348.f_32 = func_248(func_133(uParam0, -757926384, uParam0->f_1348.f_30, 0));
}

void func_763(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (uParam0->f_377 == iParam1)
	{
		return;
	}
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	func_66(uParam0, 1);
	uParam0->f_377 = iParam1;
	func_727(uParam0, iParam2);
	uParam0->f_377.f_1 = iParam3;
	if (iParam4 == 1)
	{
		_0x264e9a5cd78c338f(uParam0->f_377);
	}
}

int func_764(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4390;
		case 1:
			return 4391;
		case 2:
			return 4392;
		case 3:
			return 4393;
		case 4:
			return 4394;
		case 5:
			return 4395;
		case 6:
			return 4396;
		case 7:
			return 4397;
		case 8:
			return 4398;
		case 9:
			return 4399;
		case 10:
			return 4400;
		case 11:
			return 4401;
		case 12:
			return 4402;
		case 13:
			return 4403;
		default:
			break;
	}
	return 4389;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case -1902000894:
			return 293773700;
		case -2015525980:
			return 23117795;
		case 238292176:
			return 389920711;
		default:
			break;
	}
	return -940387254;
}

void func_766(var uParam0, var uParam1, int iParam2, var uParam3)
{
	iVar0 = func_133(uParam1, 778725653, iParam2, 0);
	iVar1 = func_583(iVar0);
	if (iVar1 > -1 && iVar1 < 9)
	{
		if (network_does_network_id_exist(&(uParam0->f_20[iVar1])))
		{
			uParam3->f_4 = net_to_ent(&(uParam0->f_20[iVar1]));
			uParam3->f_5 = 3;
			return;
		}
	}
	iVar2 = func_248(iVar0);
	if (iVar2 > -1 && iVar2 < 6)
	{
		if (network_does_network_id_exist(&(uParam0->f_3[iVar2])))
		{
			uParam3->f_4 = net_to_ent(&(uParam0->f_3[iVar2]));
			uParam3->f_5 = 3;
			return;
		}
	}
	iVar3 = func_644(iVar0);
	if (iVar3 > -1 && iVar3 < 3)
	{
		if (network_does_network_id_exist(&(uParam0->f_13[iVar3])))
		{
			uParam3->f_4 = net_to_ent(&(uParam0->f_13[iVar3]));
			uParam3->f_5 = 3;
			return;
		}
	}
	uParam3->f_1 = { func_207(uParam1, -1215561529, iParam2, 0) };
	if (!func_209(uParam3->f_1))
	{
		uParam3->f_5 = 2;
		return;
	}
	*uParam3 = func_208(uParam1, -1581601680, iParam2, 0);
	uParam3->f_5 = 1;
}

void func_767(var uParam0, var uParam1, int iParam2)
{
	func_997(uParam0, 293773700);
	uParam0->f_327.f_2 = { *uParam1 };
	func_86(1);
	uParam0->f_327.f_1 = iParam2;
}

void func_768(struct<29> Param0, var uParam29, int iParam30)
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

void func_769(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_770(var uParam0, var uParam1, var uParam2, int iParam3)
{
	func_997(uParam0, 23117795);
	uParam0->f_327.f_11 = { *uParam1 };
	uParam0->f_327.f_41 = { *uParam2 };
	func_86(1);
	uParam0->f_327.f_1 = iParam3;
}

void func_771(var uParam0, int iParam1)
{
	func_997(uParam0, 389920711);
	func_86(1);
	uParam0->f_327.f_1 = iParam1;
}

bool func_772(int iParam0, int iParam1)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_954((*Global_1134390)[network_player_id_to_int()][iParam0], iParam1);
}

bool func_773(int iParam0)
{
	iVar0 = func_1238(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_774(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return true;
	}
	return false;
}

bool func_775(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_776(int iParam0, var uParam1)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (*uParam1 & 1 != 0)
	{
		if (!does_entity_exist(iVar0))
		{
			*uParam1 = (*uParam1 - *uParam1 & 1);
		}
	}
	else if (does_entity_exist(iVar0))
	{
		if (func_1239(iVar0, iParam0))
		{
			*uParam1 |= 1;
		}
	}
	iVar1 = player_ped_id();
	if (does_entity_exist(iVar1))
	{
		if (is_entity_in_volume(iVar1, iParam0, true, 1))
		{
			func_1233(0);
		}
	}
}

bool func_777(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_778(int iParam0, struct<4> Param1, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1136(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_667(iParam0, Param1, bParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_886(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_886(bParam6), iParam0, bParam8);
	}
	return iVar0;
}

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		case 5:
			return 7;
		case 6:
			return 8;
		case 7:
			return 9;
		case 8:
			return 10;
		case 9:
			return 11;
		case 10:
			return 12;
		case 11:
			return 13;
		case 12:
			return 14;
		case 13:
			return 14;
		default:
			break;
	}
	return -1;
}

int func_780(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_781(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1240(iParam1))
	{
		return 3;
	}
	if (uParam0->f_42)
	{
		return 2;
	}
	if (!_0xe10f2d7715ababec(uParam0) && _0xfbe782b3165ac8ec(iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	if (func_1241(&(uParam0->f_30), *uParam0, iParam1))
	{
		uParam0->f_42 = 1;
		return 2;
	}
	func_330(0);
	if (!_cashinventory_is_session_ready())
	{
		return 1;
	}
	iVar0 = get_cloud_time_as_int();
	if (!_0xe10f2d7715ababec(uParam0))
	{
		if (uParam0->f_4 >= Global_1901947->f_677)
		{
			return 3;
		}
		if (func_1242(iParam1, uParam0, &(uParam0->f_5), &(uParam0->f_18), iParam2, iParam3, iParam4, 0))
		{
			if (!_0xe10f2d7715ababec(uParam0))
			{
			}
		}
		if (uParam0->f_4 <= 0)
		{
			uParam0->f_43 = iVar0;
		}
		uParam0->f_4++;
	}
	if (absi((iVar0 - uParam0->f_43)) > Global_1901947->f_677.f_1)
	{
		return 3;
	}
	return 1;
}

int func_782(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4406;
		case 1:
			return 4407;
		case 2:
			return 4408;
		case 3:
			return 4409;
		case 4:
			return 4410;
		case 5:
			return 4411;
		case 6:
			return 4412;
		case 7:
			return 4413;
		case 8:
			return 4414;
		case 9:
			return 4415;
		case 10:
			return 4416;
		case 11:
			return 4417;
		case 12:
			return 4418;
		case 13:
			return 4418;
		default:
			break;
	}
	return 4405;
}

void func_783(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	iVar0 = &Global_1956200->f_5.f_14[iParam0];
	if (!_databinding_is_data_id_valid(iVar0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1956200->f_5.f_7, iVar0);
}

void func_784(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1956200->f_5.f_7))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1956200->f_5.f_7) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1956200->f_5.f_7, iParam0);
		if (iVar0 == &Global_1956200->f_5.f_14[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1956200->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1956200->f_5.f_14[iParam0]));
}

int func_785(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_786(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1243(bParam1, bParam2, bParam3);
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

bool func_787(int iParam0)
{
	return iParam0 != 0;
}

struct<2> func_788(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

bool func_789(struct<2> Param0)
{
	if (!func_1244(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_556(Param0))
	{
		return false;
	}
	return true;
}

void func_790(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1956200->f_1565.f_117.f_12 = iParam13;
	func_1245(&(Global_1956200->f_1565.f_117), Param1, Param1.f_1);
	func_1246(&(Global_1956200->f_1565.f_117), Param1.f_2, Param1.f_3);
	func_1247(&(Global_1956200->f_1565.f_117), Param1.f_4, Param1.f_5);
	func_1248(&(Global_1956200->f_1565.f_117), Param1.f_6, Param1.f_7);
	func_1249(&(Global_1956200->f_1565.f_117), Param1.f_8, Param1.f_9);
	func_1250(&(Global_1956200->f_1565.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_1251(uParam0);
}

void func_791(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_1252(uParam0, Param1, iParam4);
		func_527(115);
	}
	else
	{
		Global_1139381->f_4854 = { *uParam0 };
		Global_1139381->f_4854.f_13 = { Param1 };
		func_526(115);
	}
}

bool func_792(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_1253(iParam0) && func_1037((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

void func_793(int iParam0, int iParam1)
{
	if (!func_1253(iParam0))
	{
		return;
	}
	if (func_792(iParam0, iParam1, 255))
	{
		func_1038(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

bool func_794(int iParam0)
{
	if (!func_1254(&iVar0, &iVar1, iParam0))
	{
		return false;
	}
	if (iVar0 == get_hash_of_this_script_name() && iVar1 == _0x638a3a81733086db())
	{
		return true;
	}
	return false;
}

void func_795(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0 && iParam0 != 1)
	{
		return;
	}
	Var0.f_4 = iParam0;
	_0x31010318ba9897ac(&(Var0.f_5), iParam1);
	Var0.f_7 = iParam2;
	Var0.f_8 = get_hash_of_this_script_name();
	Var0.f_9 = _0x638a3a81733086db();
	func_1255(&Var0, Var0.f_5);
}

int func_796(int iParam0, int iParam1)
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

int func_797(int iParam0)
{
	if (!func_447(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_70;
}

void func_798(int iParam0, int iParam1)
{
	if (!func_447(iParam0))
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_70 == iParam1)
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_70 = iParam1;
}

bool func_799(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 2147483647)
	{
		return false;
	}
	return true;
}

bool func_800(int iParam0)
{
	switch (iParam0)
	{
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
			return true;
		default:
			break;
	}
	return false;
}

bool func_801(int iParam0)
{
	return _0xf6a8a652a6b186cd(func_1256(iParam0));
}

int func_802(int iParam0)
{
	if (!func_447(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_69;
}

void func_803(int iParam0, int iParam1)
{
	if (!func_447(iParam0))
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_69 == iParam1)
	{
		return;
	}
	(*Global_1835011)[iParam0]->f_69 = iParam1;
}

void func_804(int iParam0, bool bParam1)
{
	iVar0 = func_1257((*Global_1835011)[iParam0]->f_1);
	if (!func_1258(iVar0))
	{
		return;
	}
	if (does_blip_exist(Global_1900838[iVar0]))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip((*Global_1900838)[iVar0]);
	}
	if (func_1259(iVar0, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	if (bParam1)
	{
		func_807(func_796(4, iParam0), 0);
		func_1260((*Global_1835011)[iParam0]->f_1, 0, 2, 0, 0);
	}
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	func_806(iParam0);
}

void func_805(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!func_1258(iParam1))
	{
		iParam1 = func_1257(func_35(iParam0));
		if (!func_1258(iParam1))
		{
			return;
		}
	}
	if (does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1835011)[iParam0]->f_28));
		(*Global_1835011)[iParam0]->f_66 = 0;
	}
	else if (bParam2 && !Global_26640)
	{
		func_1261(iParam0, iParam5, iParam1);
	}
	if (func_1259(iParam1, 48))
	{
		set_script_as_no_longer_needed(&((*Global_1835011)[iParam0]->f_13));
	}
	Var0 = { (*Global_1835011)[iParam0]->f_13 };
	if ((bParam3 && !is_string_null_or_empty(&Var0)) && is_thread_active((*Global_1835011)[iParam0]->f_17, false))
	{
		_0x7de4643157ad646c((*Global_1835011)[iParam0]->f_17);
	}
	if (bParam4)
	{
		func_1262((*Global_1835011)[iParam0]->f_1);
	}
	else
	{
		func_1263(iParam1, 3831);
	}
	(*Global_1835011)[iParam0]->f_71 = 0;
}

void func_806(int iParam0)
{
	Global_1139381->f_4912[iParam0] = _unlock_is_new((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_2 = _unlock_is_visible((*Global_1835011)[iParam0]->f_3);
	Global_1139381->f_4912[iParam0]->f_1 = _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3);
}

int func_807(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (Global_1293346->f_458.f_1546 >= 40)
	{
		func_1264();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = iParam0;
	Var0 = func_1265();
	Var0.f_3 = iParam1;
	func_1266(Var0, 0);
	return Var0;
}

int func_808(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1293346->f_458.f_44[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_44[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_44[iVar0]->f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_1293346->f_458.f_1245[iVar0] == -1)
		{
		}
		else if (&Global_1293346->f_458.f_1245[iVar0] != iParam0)
		{
		}
		else
		{
			return Global_1293346->f_458.f_1245[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_809(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_667(889965687, func_666(1), 1034665895, 1) };
	iVar19 = func_1171(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_1172(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_1173(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_1174(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_1179(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_1267(Var0, 1, 0);
			}
			func_1179(iVar20);
			return iVar14;
		}
		func_1179(iVar20);
	}
	return 0;
}

void func_810(int iParam0)
{
	Global_1952637->f_1 = iParam0;
}

bool func_811()
{
	return func_653() == 4;
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 791620666;
		case 1:
			return -1728967817;
		case 2:
			return 1402091913;
		case 3:
			return -1030312764;
		case 4:
			return 1254155651;
		case 5:
			return -798078861;
		case 6:
			return 629068022;
		default:
			break;
	}
	return 0;
}

bool func_813(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iVar0))
	{
		iParam4 |= 256;
		uParam1->f_249.f_62[iParam2] = _create_anim_scene(sParam3, iParam4, sParam5, bParam6, bParam7);
		if (!_does_anim_scene_exist(&(uParam1->f_249.f_62[iParam2])))
		{
			return false;
		}
		if (bParam8)
		{
			load_anim_scene(&(uParam1->f_249.f_62[iParam2]));
		}
		uParam1->f_249.f_62[iParam2]->f_1 = iParam4;
	}
	return true;
}

void func_814(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1348.f_161[iParam1] = iParam2;
	uParam0->f_1348.f_161[iParam1]->f_1 = 0;
}

bool func_815(var uParam0, var uParam1, int iParam2)
{
	if (!func_523(uParam0, uParam1, iParam2, &iVar0, &uVar1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iVar0, true, false))
	{
		if (_0xf8d1d2dab6007eef(iVar0, 1))
		{
		}
		return false;
	}
	if (!_is_anim_scene_metadata_loaded(iVar0, false))
	{
		return false;
	}
	return true;
}

bool func_816()
{
	return Global_1940311->f_1;
}

void func_817()
{
	if (_get_number_of_references_of_script_with_name_hash(-4058091) > 0)
	{
		Global_1940311->f_12 = 1;
	}
}

void func_818(float fParam0)
{
	iVar0 = player_ped_id();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	vVar1 = { get_entity_coords(iVar0, true, false) };
	clear_area(vVar1, fParam0, 65536);
	remove_particle_fx_in_range(vVar1, fParam0);
}

bool func_819()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_820()
{
	Global_1940144->f_105 = -1;
	Global_1940144->f_105.f_1 = 0;
}

int func_821(int iParam0)
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

bool func_822(int iParam0, int iParam1)
{
	iVar0 = func_1158(iParam1);
	func_1159(&(Global_1952637->f_1043), iVar0, iParam0, -897569541, 1, iParam1);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	return _0xed4413cee1bf142c(&(Global_1952637->f_1043));
}

bool func_823(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_824(int iParam0, var uParam1)
{
	if (uParam1->f_1 == 0)
	{
		return 3;
	}
	if (!func_823(uParam1, 2))
	{
		iVar1 = _get_metaped_type(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (&uParam1->f_1.f_1[iVar0] == &Global_1952637->f_83[iVar0])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134] = _0xf6d9e1f3560cbf8e(iVar1, &(uParam1->f_1.f_1[iVar0]), 0, 1, 0);
				uParam1->f_135[uParam1->f_134]->f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_826(uParam1, 2);
	}
	return func_1268(iParam0, uParam1);
}

void func_825(var uParam0)
{
	*uParam0 = Global_1952637->f_1675;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*uParam0->f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_826(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_827(int iParam0)
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

bool func_828(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		Var0 = { func_831(iParam0, 0, 1) };
		if (func_1269(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1270(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_667(iParam0, Var0, Var0.f_4, 0) };
				func_1271(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_375(0))
	{
		_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
		{
			return false;
		}
		func_902(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
		func_1272(iParam0, iParam1);
		return true;
	}
	if (!has_ped_got_weapon(Global_34, iParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	_give_weapon_to_ped_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

void func_829(int iParam0, int iParam1, float fParam2)
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

bool func_830(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

struct<5> func_831(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_666(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_893(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_667(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_1273(bParam1) };
			if (bParam2 && func_1274(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1269(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1269(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1270(iParam0, &Var6, 1728382685))
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
			Var0 = { func_1275(bParam1) };
			switch (func_947(iParam0))
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
			if (func_1276(iParam0, -1823706425))
			{
				Var0 = { func_667(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1276(iParam0, -1483207246))
			{
				Var0 = { func_667(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_667(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1276(iParam0, -1653629781))
			{
				Var0 = { func_667(1384535894, Var0, 1784584921, bParam1) };
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
				if (!func_1277(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_1276(iParam0, -1653629781))
			{
				Var0 = { func_667(1384535894, Var0, 1784584921, bParam1) };
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

int func_832(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_841(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_833(int iParam0, int iParam1)
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

bool func_834(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_660();
	if (iParam2 == 39)
	{
		Var0 = { func_831(iParam0, 1, 0) };
		iParam2 = func_833(func_832(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_604(32768) && iParam2 == 10)
	{
		func_1156(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_836(iParam0, 1))
	{
		func_1278(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_1279(iParam2);
	}
	func_1183(iParam2, iVar5);
	func_1280(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_1280(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_1281(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_1282(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_846(func_841(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_835(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_1283(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_836(int iParam0, bool bParam1)
{
	if (!func_889(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_894(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_837(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_831(iParam0, bParam2, 0) };
	if (func_836(iParam0, 0))
	{
		iVar9 = func_1171(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_831(iVar9, bParam2, 0) };
			Var0 = { func_667(iVar9, Var4, Var4.f_4, bParam2) };
			return func_1267(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_667(iParam0, Var4, Var4.f_4, bParam2) };
	return func_1267(Var0, iParam1, bParam2);
}

void func_838()
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
	func_607(32768);
	func_846(1108822547, 8, 6);
}

int func_839(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_833(iParam0, 1);
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

void func_840(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_841(int iParam0, int iParam1)
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

void func_842(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 10;
	if (func_843(1108822547, 6) || bParam3)
	{
		if (bParam2 || bParam3)
		{
			func_844(iParam0, iVar0, 0);
			func_845(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1952637->f_3467.f_1, &(Global_1952637->f_3467.f_3[0]), &(Global_1952637->f_3467.f_3[1]), &(Global_1952637->f_3467.f_3[2]), Global_1952637->f_3467.f_8, Global_1952637->f_3467.f_9, Global_1952637->f_3467.f_10, Global_1952637->f_3467.f_11);
		func_846(1108822547, 1, 6);
	}
	Global_1952637->f_925++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

bool func_843(int iParam0, int iParam1)
{
	return ((Global_1952637->f_83[func_833(iParam0, 1)])->f_11 && iParam1) != 0;
}

void func_844(int iParam0, int iParam1, bool bParam2)
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

void func_845(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_833(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_833(iParam0, 1)])->f_11 || iParam1);
}

void func_846(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_833(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_833(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_833(iParam0, 1)])->f_11 && iParam1));
}

bool func_847(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_848(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1258862340;
		case 2:
			return -1681289920;
		case 4:
			return 553787172;
		case 8:
			return 1112504748;
		case 16:
			return 517837993;
		case 32:
			return -1700334483;
		case 64:
			return -1831268046;
		case 128:
			return -1022985055;
		case 256:
			return 164409416;
		case 512:
			return 1784636520;
		case 1024:
			return 196860751;
		case 2048:
			return 2091845362;
		case 4096:
			return -956463643;
		case 8192:
			return 1059059793;
		case 16384:
			return -308089920;
		case 32768:
			return -153351247;
		case 65536:
			return 1958107358;
		default:
			break;
	}
	return 0;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1258862340;
		case 2:
			return -1681289920;
		case 4:
			return 553787172;
		case 8:
			return 1112504748;
		case 16:
			return 517837993;
		case 32:
			return -1700334483;
		case 64:
			return -1831268046;
		case 128:
			return -1022985055;
		case 256:
			return 164409416;
		case 512:
			return 1784636520;
		case 1024:
			return 196860751;
		case 2048:
			return 2091845362;
		case 4096:
			return -956463643;
		case 8192:
			return 1059059793;
		case 16384:
			return -308089920;
		case 32768:
			return -153351247;
		case 65536:
			return 1958107358;
		default:
			break;
	}
	return 0;
}

char* func_851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_123() == 2026485318)
			{
				return "1A-Valentine-Male";
			}
			else
			{
				return "1B-Valentine-Female";
			}
			break;
	}
	return "";
}

void func_852(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_4808.f_86.f_31)
	{
		if (&uParam0->f_4808.f_86[iVar0] == iParam1)
		{
			func_725(uParam0, iVar0);
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_853(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_310(iParam3))
	{
		return false;
	}
	func_116(uParam0, uParam1, iParam2);
	return true;
}

void func_854(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_12)
	{
		case 1:
			func_1284(uParam2);
			break;
		case 2:
			func_198(uParam0, 0, 0);
			func_198(uParam0, 1, 0);
			break;
		case 6:
			func_197(uParam0, 1, 0);
			func_197(uParam0, 0, 0);
			func_197(uParam0, 2, 0);
			func_197(uParam0, 5, 0);
			func_80(uParam2, 3);
			func_80(uParam2, 4);
			func_80(uParam2, 5);
			func_80(uParam2, 6);
			func_198(uParam0, 2, 0);
			func_199(uParam0, 0, 0);
			func_199(uParam0, 1, 0);
			func_199(uParam0, 2, 0);
			func_199(uParam0, 3, 0);
			func_199(uParam0, 4, 0);
			func_199(uParam0, 5, 0);
			func_199(uParam0, 6, 0);
			func_199(uParam0, 7, 0);
			func_174(uParam2->f_1348.f_7);
			func_175(uParam2->f_1348.f_7, 0, 1);
			break;
		case 8:
			func_80(uParam2, 1);
			func_80(uParam2, 2);
			func_80(uParam2, 8);
			break;
		case 11:
			func_80(uParam2, 7);
			break;
		case 12:
			func_170(uParam2);
			break;
		case 13:
			func_170(uParam2);
			break;
		default:
			break;
	}
	if (uParam2->f_12 >= 5)
	{
		func_1284(uParam2);
	}
	func_121(uParam1, uParam2, 1);
}

void func_855(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
			break;
		case 2:
			if (get_is_waypoint_recording_loaded(uParam0->f_4926.f_36[0]))
			{
				remove_waypoint_recording(uParam0->f_4926.f_36[0]);
			}
			break;
		case 3:
			if (get_is_waypoint_recording_loaded(uParam0->f_4926.f_36[1]))
			{
				remove_waypoint_recording(uParam0->f_4926.f_36[1]);
			}
			break;
		case 4:
		case 5:
			break;
		default:
			break;
	}
}

void func_856(var uParam0, int iParam1)
{
	uParam0->f_4808.f_2 = iParam1;
	uParam0->f_4808.f_3 = uParam0->f_14;
	func_187(&(uParam0->f_4808.f_7));
	func_167(uParam0, 15);
}

void func_857(int iParam0)
{
	if (iParam0 > 6)
	{
		return;
	}
	if (&Global_1913373 != 0)
	{
		func_514();
	}
	_databinding_write_data_bool(Global_1913373->f_3, true);
	Global_1913373 = iParam0;
	Global_1913373->f_1 = 0;
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		StringCopy(&cVar1, "Objective", 32);
		StringIntConCat(&cVar1, iVar5, 32);
		iVar0 = _databinding_add_data_container(Global_1913373->f_2, &cVar1);
		Global_1913373->f_5[iVar5] = iVar0;
		Global_1913373->f_5[iVar5]->f_1 = _databinding_add_data_bool(iVar0, "IsCurrent", false);
		Global_1913373->f_5[iVar5]->f_2 = _databinding_add_data_bool(iVar0, "Failed", false);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1913373->f_4, iVar5, "objective_breadcrumb", iVar0);
		iVar5++;
	}
}

void func_858(int iParam0)
{
	if (iParam0 >= &Global_1913373 || iParam0 < 0)
	{
		return;
	}
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_2, false);
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_1, false);
	bVar0 = iParam0 < Global_1913373->f_1;
	Global_1913373->f_1 = iParam0;
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_1, true);
	_databinding_write_data_bool(Global_1913373->f_5[Global_1913373->f_1]->f_2, bVar0);
}

var func_859(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	return func_1285(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

float func_860(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_861(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 <= -1 || iParam3 >= 11)
	{
		return;
	}
	if (does_blip_exist(&(uParam2->f_41.f_11[iParam3])))
	{
		return;
	}
	uParam2->f_41.f_11[iParam3] = func_1286(uParam0, uParam1, uParam2, iParam3);
	if (!does_blip_exist(&(uParam2->f_41.f_11[iParam3])))
	{
		return;
	}
	if (bParam4)
	{
		func_863(uParam2, iParam3, 580546400, 1);
	}
	if (bParam5)
	{
		func_357(uParam2, iParam3, 1);
	}
}

int func_862(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1905310431;
		case 1:
			return 130495496;
		case 2:
			return 1164675924;
		case 3:
			return -1671741162;
		case 4:
			return 889965687;
		case 5:
			return -1458026950;
		case 6:
			return 409810400;
		case 7:
			return -1158929805;
		case 8:
			return 328567091;
		case 9:
			return 2047865662;
		case 10:
			return 1442298284;
		default:
			break;
	}
	return 0;
}

void func_863(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 <= -1 || iParam1 >= 11)
	{
		return;
	}
	if (!does_blip_exist(&(uParam0->f_41.f_11[iParam1])))
	{
		return;
	}
	if (bParam3)
	{
		if (_blip_set_modifier(&(uParam0->f_41.f_11[iParam1]), iParam2))
		{
		}
	}
	else if (_set_blip_flash_style(&(uParam0->f_41.f_11[iParam1]), iParam2))
	{
	}
}

void func_864(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (uParam0->f_41.f_23 == iParam1)
	{
		return;
	}
	uParam0->f_41.f_23 = iParam1;
	start_gps_multi_route(iParam2, bParam3, bParam4);
}

char* func_865(var uParam0)
{
	switch (uParam0->f_1348.f_3)
	{
		case 0:
			return "mp@freemode_cams@IntroMissionRide_Rhodes";
		case 1:
			return "mp@freemode_cams@IntroMissionRide_Valentine";
		case 2:
			return "mp@freemode_cams@IntroMissionRide_Blackwater";
		case 3:
			return "mp@freemode_cams@IntroMissionRide_Tumbleweed";
		default:
			break;
	}
	return "";
}

bool func_866(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_867(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_868(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_869(var uParam0, int iParam1)
{
	if (iParam1 <= -1 || iParam1 >= 23)
	{
		return false;
	}
	return _0x8f4f050054005c27(&(uParam0->f_35), iParam1);
}

bool func_870(int iParam0)
{
	return _0x1ecc76792f661cf5(func_881(iParam0));
}

void func_871(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	(*Global_1296543)[iParam1]->f_3 = iParam2;
	(*Global_1296543)[iParam1]->f_2 = iParam3;
	(*Global_1296543)[iParam1]->f_4 = iParam4;
	(*Global_1296543)[iParam1]->f_5 = iParam5;
	_0xac22aa6df4d1c1de(iParam0, (*Global_1296543)[iParam1]->f_3, -1082130432, -1082130432, (*Global_1296543)[iParam1]->f_4, (*Global_1296543)[iParam1]->f_5, 1);
	_0xdd33a82352c4652f(iParam0, (*Global_1296543)[iParam1]->f_3, 4);
	_0x84481018e668e1b8(iParam0, (*Global_1296543)[iParam1]->f_3, 1);
	_0x1fda57e8908f2609(iParam0, (*Global_1296543)[iParam1]->f_3, func_1037((*Global_1296543)[iParam1]->f_2, 1));
}

bool func_872(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	iVar0 = func_1287(vParam0, vParam3, vParam6);
	iVar1 = func_1287(vParam0, vParam3, vParam9);
	iVar2 = func_1287(vParam6, vParam9, vParam0);
	iVar3 = func_1287(vParam6, vParam9, vParam3);
	if (iVar0 != iVar1 && iVar2 != iVar3)
	{
		return true;
	}
	return false;
}

int func_873(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_209(vParam2))
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
		if (func_1234(iVar0, 2))
		{
			if (func_1288(vParam2, (*Global_1951255)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1951255)[iVar0]->f_4)
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
		func_1289(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_874(int iParam0)
{
	return iParam0;
}

void func_875(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 - ((*Global_1951255)[iParam0]->f_1 && iParam1));
}

void func_876(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1951255)[iParam0]->f_3, bParam1);
	}
}

void func_877(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1951255)[iParam0]->f_1 = ((*Global_1951255)[iParam0]->f_1 || iParam1);
}

void func_878(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1951255)[iParam0]->f_3))
	{
		if ((*Global_1951255)[iParam0]->f_5 == 5 && !func_1234(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1951255)[iParam0]->f_3, bParam1);
		}
	}
}

bool func_879(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 <= -1 || iParam2 >= 5)
	{
		return false;
	}
	if (!_does_scenario_point_exist(&(uParam0->f_35[iParam2])))
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
	return _0x9c54041bb66bcf9e(iParam1, &(uParam0->f_35[iParam2]));
}

bool func_880()
{
	return Global_1102219->f_3664;
}

char* func_881(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPI_GOTO_HORSE";
		case 1:
			return "MPINT_WALKABOUT";
		case 2:
			return "MPINT_RIDEOFF";
		case 3:
			return "MPINT_RETURN";
		case 4:
			return "MPINT_NFOLLOW1";
		case 5:
			return "MPINT_NFOLLOW2";
		case 6:
			return "MPINT_RIDEBANT1";
		case 7:
			return "MPINT_RIDEBANT2";
		case 8:
			return "MPINT_RIDEOFF";
		case 9:
			return "MPI_ARRIVE";
		case 10:
			return "MPI_HITCH";
		case 11:
			return "MPI_SPEAK_J";
		case 12:
			return "MPINT_NFOLLOW2";
		case 13:
			return "MPI_HORLEY_POST";
		case 14:
			return "MPI_HORLEY_POST";
		case 15:
			return "MPINT_BOTHERJSS";
		case 16:
			return "MPINT_WEP_CMON";
		case 17:
			return "MPINT_WEP_NFAR";
		case 18:
			return "MPINT_WEP_READY";
		case 21:
			return "MPINT_IG2_GBEXT";
		case 22:
			return "MPINT_IG2_MAP";
		case 19:
			return "MPI_CRALDEN";
		case 20:
			return "MPI_POST_IDLE";
		default:
			break;
	}
	return "";
}

void func_882(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

bool func_883(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	switch (iParam2)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 6:
		case 7:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 8:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 9:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 10:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 11:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 12:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 13:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 14:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 16:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 17:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 18:
			if (!func_1290(uParam0, uParam3, 1, "HORLEY", 0))
			{
				return false;
			}
			break;
		case 21:
			if (!func_1290(uParam0, uParam3, 4, "MPI_GANG_BOSS", 0))
			{
				return false;
			}
			break;
		case 22:
			if (!func_1290(uParam0, uParam3, 4, "MPI_GANG_BOSS", 0))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_884(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1291(cParam1, cParam0);
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

char* func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_123() == 2026485318)
			{
				return "1-Male";
			}
			else
			{
				return "2-Female";
			}
			break;
	}
	return "";
}

int func_886(bool bParam0)
{
	if (func_89() == -1)
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

void func_887(var uParam0, int iParam1)
{
	if (func_251(uParam0, 7))
	{
		return;
	}
	func_122(uParam0, 0);
	iVar0 = func_143(uParam0, -1276103496, iParam1, 0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	iVar18 = 0;
	iVar22 = 0;
	while (iVar22 < iVar0)
	{
		func_122(uParam0, 0);
		iVar19 = func_133(uParam0, 991793557, iParam1, iVar22);
		if (iVar19 == 0)
		{
		}
		else if (!func_148(uParam0, -534124480, iParam1, iVar19))
		{
		}
		else
		{
			iVar21 = func_143(uParam0, 970319841, 0, 0);
			iVar20 = func_133(uParam0, 1587430056, func_634(iVar21), 0);
			if (iVar20 == 0)
			{
			}
			else
			{
				Var1[iVar18] = iVar19;
				Var1[iVar18]->f_1 = iVar20;
				iVar18++;
			}
		}
		iVar22++;
	}
	iVar23 = 3;
	if (iVar18 < iVar23)
	{
		iVar23 = iVar18;
	}
	iVar24 = 0;
	while (iVar24 < iVar23)
	{
		iVar22 = func_634(iVar18);
		uParam0->f_384.f_2[uParam0->f_384.f_9] = &Var1[iVar22];
		uParam0->f_384.f_2[uParam0->f_384.f_9]->f_1 = Var1[iVar22]->f_1;
		uParam0->f_384.f_9++;
		func_1292(Var1[iVar22]);
		iVar18 = (iVar18 - 1);
		*Var1[iVar22] = { *Var1[iVar18] };
		func_1292(Var1[iVar18]);
		iVar24++;
	}
	func_112(uParam0, 7);
}

void func_888(var uParam0, int iParam1)
{
	if (func_251(uParam0, 9))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_384.f_9)
	{
		func_1293(uParam0, iParam1, &(uParam0->f_384.f_2[iVar0]), uParam0->f_384.f_2[iVar0]->f_1);
		func_112(uParam0, 8);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_384.f_295)
	{
		func_1294(uParam0, iVar1);
		iVar1++;
	}
	func_112(uParam0, 9);
}

bool func_889(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_890(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_89() == -1)
	{
		if (func_1295(iParam0) && func_1296(iParam0))
		{
			func_1297(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_891(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1298(iParam0, iParam1);
	Var0 = { func_831(iParam0, 0, 1) };
	iVar5 = func_1299(iParam0, &Var0, 0, 0);
	iVar6 = func_1300(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_894(iParam0, -2051813666))
		{
			func_910(674, 1);
		}
		else if (func_89() == -1)
		{
			func_910(673, 0);
		}
	}
	if (func_1301(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_892(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1302())
	{
		return;
	}
	switch (func_1303(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
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
			Global_1940144->f_70.f_5 = 1;
			Global_1940144->f_70.f_6 = 0;
			Global_1940144->f_70.f_1 = iParam0;
			break;
	}
}

int func_893(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_894(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return func_1305(func_1304(iParam0), iParam1);
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

bool func_895(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_896(int iParam0)
{
	if (!func_1306(iParam0))
	{
		return false;
	}
	return func_1307(iParam0);
}

void func_897(int iParam0)
{
	if (!func_1306(iParam0))
	{
		return;
	}
	func_1308(iParam0);
	func_1309(iParam0);
}

void func_898(int iParam0)
{
	if (func_894(iParam0, -1522723129))
	{
		func_1310(-848633709, 0, 255, 0, 0);
	}
	else if (func_894(iParam0, -283942357))
	{
		func_1310(-981153234, 0, 255, 0, 0);
	}
	else if (func_894(iParam0, 683680997))
	{
		func_1310(-756350192, 0, 255, 0, 0);
	}
	else if (func_894(iParam0, 1307628809))
	{
		func_1310(603094518, 0, 255, 0, 0);
	}
}

int func_899(int iParam0, bool bParam1)
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
	if (func_889(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1311(iVar0) || func_827(iVar0))
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

int func_900(int iParam0, bool bParam1)
{
	if (!func_889(iParam0, 0))
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

void func_901(int iParam0)
{
	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_758(iParam0))
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

bool func_902(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_905(iParam0))
	{
		return false;
	}
	if (!func_375(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_34, iParam0, iParam1, iParam2);
	return true;
}

bool func_903(int iParam0, int iParam1, int iParam2)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_1136(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1312(iParam0, iParam1, iParam2);
	}
	Var1 = { func_831(iParam0, 0, 1) };
	Var6 = { func_667(iParam0, Var1, Var1.f_4, 0) };
	return func_1313(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_904(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_900(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_89() == -1)
		{
			func_901(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1314(iVar0);
			}
		}
		if (!func_1301(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1297(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1315(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_828(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || _is_weapon_binoculars(iVar0))
			{
				func_828(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_lasso(iVar0))
			{
				func_828(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1316())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_830(iVar0))
				{
					func_828(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_828(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_747(Global_34, 2, 0, 1);
				if ((((func_758(iVar7) && !Global_26640) && iVar7 != iVar0) && !func_918(-1185145312, 1)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_34, iVar7);
				}
				if (func_758(iVar7) && func_918(-1185145312, 1))
				{
					if (!func_828(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_828(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_828(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_910(515, 1);
	}
	return true;
}

bool func_905(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_906(int iParam0, int iParam1, int iParam2)
{
	if (!func_905(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_34, iParam0);
	if (func_758(iVar4))
	{
		get_max_ammo(Global_34, &iVar2, iVar4);
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
		func_921(func_1317(iParam0), func_920(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_375(0))
	{
		if (func_902(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_903(iParam0, *iParam1, iParam2);
	}
	return false;
}

struct<2> func_907(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

void func_908(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<2> func_909(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_910(int iParam0, bool bParam1)
{
	func_1318(iParam0, &iVar0, &iVar1);
	if (!func_1319(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1320(iVar0, iVar1);
}

bool func_911()
{
	return false;
}

int func_912(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	if (func_89() == 0)
	{
		func_926(iParam0, 0);
		return 0;
	}
	iVar0 = func_1321(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1322(iVar0, sParam4, iParam5, 0);
	}
	func_1323(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_913(int iParam0)
{
}

void func_914(int iParam0)
{
}

void func_915(int iParam0)
{
}

void func_916(int iParam0)
{
}

void func_917()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

bool func_918(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_893(iParam0);
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
			if (!func_681(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1324(iParam0))
			{
				return true;
			}
			break;
	}
	return func_633(iParam0, 0, 0, 0) >= iParam1;
}

void func_919(int iParam0, int iParam1)
{
	func_1325(iParam0, iParam1, &uVar0);
}

int func_920(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1326(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_921(int iParam0, int iParam1, bool bParam2)
{
	func_1318(iParam0, &iVar0, &iVar1);
	if (!func_1319(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1327(iParam0, 1024))
	{
		return;
	}
	func_1320(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 2;
}

void func_922(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_1318(iParam0, &iVar0, &iVar1);
	if (!func_1319(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1327(iParam0, 1024))
	{
		return;
	}
	func_1320(iVar0, iVar1);
	Global_1904651->f_33[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1904651->f_33[iParam0]->f_3[0]->f_1 = 5;
	}
}

void func_923(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

void func_924(int iParam0)
{
	if (func_89() != -1)
	{
		return;
	}
}

bool func_925()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_926(int iParam0, int iParam1)
{
	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_684(&Var4, 1356624740);
	return func_1328(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_927(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return Var0;
	}
	if (func_894(iParam0, -305066475))
	{
		if (func_89() == -1)
		{
			if (func_894(iParam0, -537818634))
			{
				return func_1329(189951448);
			}
			else
			{
				return func_1329(1176172851);
			}
		}
	}
	else if (func_894(iParam0, -537818634))
	{
		return func_1329(-963660207);
	}
	if (func_894(iParam0, 2084895747))
	{
		return func_1329(1694039471);
	}
	return Var2;
}

void func_928(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			break;
	}
}

void func_929(int iParam0, char* sParam1)
{
	sVar0 = func_1330(Global_1903071->f_37);
	func_980(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1331(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_930(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

void func_931(struct<4> Param0)
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
			if (func_1332(Param0))
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
			func_1333(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_930(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_1332(Param0))
			{
				return;
			}
			func_1333(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_930(8);
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
			if (func_1332(Param0))
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
			func_1333(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_930(8);
			break;
			break;
	}
}

bool func_932(int iParam0)
{
	if (!func_1334())
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
	if (func_89() == -1)
	{
		return false;
	}
	if (func_880())
	{
		return true;
	}
	if (func_648(1, 255))
	{
		return true;
	}
	if (func_1335())
	{
		return true;
	}
	if (func_816())
	{
		return true;
	}
	return false;
}

void func_933(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

bool func_934(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (!func_1334())
	{
		return false;
	}
	if (Global_1296859->f_12)
	{
		return false;
	}
	if (func_648(1, 255))
	{
		return false;
	}
	if (func_1336())
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
	if (func_786(get_player_index(), 0, 0, 1))
	{
		return false;
	}
	if (_is_ped_carrying(*uParam0) || func_1337(*uParam0))
	{
		return false;
	}
	return true;
}

void func_935(var uParam0)
{
	if (func_358(uParam0->f_4))
	{
		func_421(&(uParam0->f_4), 1, 1);
	}
	if (func_89() == 0)
	{
		iVar0 = -473983589;
	}
	else
	{
		iVar0 = -719620017;
	}
	uParam0->f_4 = func_873("PLAYER_WARDROBE_MAIN_MENU", iVar0, uParam0->f_30, uParam0->f_19, 1, 0, 0, 4, 570, 4000, 10, 1073741824, 0, -820096546, 0);
	set_bit(&(uParam0->f_17), 8);
}

bool func_936(int iParam0, bool bParam1)
{
	if (bParam1 && !func_358(iParam0))
	{
		return false;
	}
	iVar0 = func_874(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1951255)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1951255)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1951255)[iVar0]->f_3);
}

void func_937(int iParam0)
{
	set_ped_reset_flag(iParam0, 131, true);
	set_ped_reset_flag(iParam0, 295, true);
	func_536(4);
}

void func_938(var uParam0)
{
	_text_database_request("WARD");
	_0x5199405eabfbd7f0("CamTransition01");
	_0x5199405eabfbd7f0("CamTransitionBlink");
	switch (func_89())
	{
		case 0:
			func_1338(uParam0);
			break;
	}
}

void func_939(var uParam0)
{
	if (!is_bit_set(uParam0->f_2506.f_17, 1))
	{
		iVar0 = 614617847;
		if (func_123() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1339(uParam0, iVar0, -1064259667, 1))
		{
			func_1341(uParam0, 208494);
			func_1343(uParam0, 209225);
			func_1345(uParam0, 209871);
			func_1347(uParam0, 210186);
			func_1349(uParam0, 210453);
			func_1350(uParam0, uParam0->f_2506.f_13);
			func_1352(uParam0, func_1351(&(uParam0->f_176.f_1878)));
			set_bit(&(uParam0->f_2506.f_17), 1);
		}
	}
	if (is_bit_set(uParam0->f_2506.f_17, 1))
	{
		if (!is_bit_set(uParam0->f_2506.f_17, 2))
		{
			if (func_1353(uParam0))
			{
				set_bit(&(uParam0->f_2506.f_17), 2);
			}
		}
	}
}

int func_940(var uParam0)
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
	switch (func_89())
	{
		case 0:
			return func_1354(uParam0);
		default:
			break;
	}
	return 0;
}

void func_941(var uParam0)
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
	func_610(0, *uParam0);
	switch (func_89())
	{
		case 0:
			func_1355(uParam0);
			break;
	}
	func_1356(uParam0);
	func_1357(*uParam0, &(uParam0->f_2));
	iVar0 = 1;
	if (&Global_1952637->f_1675.f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_12 = func_1358(&(Global_1952637->f_1675.f_1[iVar0]));
	}
	set_bit(&(uParam0->f_17), 10);
	Global_1956123->f_1 = 1;
}

bool func_942(var uParam0)
{
	if (-1829635046 == func_1359(81053684))
	{
		if (func_1360(uParam0))
		{
			return true;
		}
	}
	else if (func_1361(-525676072, uParam0) || func_894(func_1175(1742327865), -1303648999))
	{
		if (func_1360(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_943(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_1362(iParam0))
	{
		return 0;
	}
	if (func_1363(iParam0))
	{
		if (func_942(&uVar0))
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
	func_1364(iParam0, iVar1);
	func_379(23, 0, 0, 0, 0);
	return 1;
}

bool func_944(var uParam0)
{
	iVar0 = 1;
	if (uParam0->f_2207.f_139)
	{
		Stack.Push(uParam0);
		Stack.Push(func_1365(uParam0));
		Stack.Push(func_1366(uParam0));
		Call_Loc(uParam0->f_2207.f_140);
	}
	if (uParam0->f_2207.f_162)
	{
		iVar1 = func_1367(uParam0);
		iVar2 = func_1368(uParam0);
		if (does_entity_exist(iVar1))
		{
			func_1369(uParam0, iVar1);
			uParam0->f_2207.f_162 = 0;
		}
		else if (does_entity_exist(iVar2))
		{
			func_1370(uParam0, iVar2);
			uParam0->f_2207.f_162 = 0;
		}
	}
	if (func_1371())
	{
		Global_1051439->f_43 = 0;
		return false;
	}
	func_1372(&(uParam0->f_2160));
	func_1373(&(uParam0->f_176));
	set_ped_reset_flag(func_1374(uParam0), 258, true);
	disable_control_action(0, -668070958, false);
	disable_control_action(0, 1250966545, false);
	disable_control_action(0, -2131587435, false);
	if (uParam0->f_2207.f_81)
	{
		func_1375(uParam0, func_1366(uParam0), 1);
		uParam0->f_2207.f_81 = 0;
	}
	if (func_1376())
	{
		if (func_1377(128))
		{
			if (Global_1915715->f_20241.f_3.f_2)
			{
				iVar3 = func_1366(uParam0);
				if (!func_1378(iVar3))
				{
				}
				Global_1915715->f_20241.f_3.f_2 = 0;
			}
			else
			{
				iVar4 = func_1365(uParam0);
				uParam0->f_2207.f_70 = iVar4;
				if (!uParam0->f_2207.f_118)
				{
					if (!func_1379(uParam0->f_2207.f_79, &(uParam0->f_2207)))
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
				if (!func_1380(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2207.f_145)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar4);
						Stack.Push(func_1365(uParam0));
						Call_Loc(uParam0->f_2207.f_146);
					}
					uParam0->f_2207.f_70 = iVar4;
				}
			}
			func_1381(128);
		}
		else if (func_1377(256))
		{
			iVar5 = func_1365(uParam0);
			uVar6 = func_1382(&(uParam0->f_2207));
			if (uParam0->f_2207.f_119 <= -1)
			{
				uParam0->f_2207.f_119 = uVar6;
			}
			uParam0->f_2207.f_70 = iVar5;
			if ((!uParam0->f_2207.f_118 && uParam0->f_2207.f_121) && uParam0->f_2207.f_121.f_7 == iVar5)
			{
				if (!func_1383(uParam0))
				{
				}
			}
			else if (!uParam0->f_2207.f_118 && func_1384(uParam0))
			{
				if (uParam0->f_4 == 179 && is_bit_set(uParam0->f_2506.f_17, 12))
				{
					func_1385(uParam0, 128);
				}
				else
				{
					func_1386(uParam0, 7);
					iVar0 = 0;
				}
			}
			else
			{
				if (!uParam0->f_2207.f_118)
				{
					if (!func_1387(&(uParam0->f_2207)))
					{
					}
				}
				else
				{
					uParam0->f_2207.f_118 = 0;
				}
				if (!func_1380(uParam0))
				{
					return false;
				}
				else
				{
					if (uParam0->f_2207.f_145)
					{
						Stack.Push(uParam0);
						Stack.Push(iVar5);
						Stack.Push(func_1365(uParam0));
						Call_Loc(uParam0->f_2207.f_146);
					}
					uParam0->f_2559.f_9 = func_1365(uParam0);
					uParam0->f_2559.f_10 = func_1388(uParam0);
				}
			}
			iVar7 = func_1389();
			if (func_889(iVar7, 0) || func_1390(func_1304(iVar7), 2))
			{
				func_1391(iVar7);
			}
			func_1381(256);
		}
		if (func_1377(32) || func_1377(64))
		{
			if (!func_1392(uParam0))
			{
			}
			func_1381(64);
			func_1381(32);
		}
		if (func_1377(8))
		{
			if (!func_1393(uParam0))
			{
			}
			if (!func_1377(512) && !uParam0->f_2207.f_82)
			{
				func_1394(uParam0);
			}
			else if (uParam0->f_2207.f_82)
			{
				uParam0->f_2207.f_82 = 0;
			}
			if (func_1366(uParam0) == 2144984909)
			{
				func_1395(uParam0);
			}
			func_1381(512);
			func_1381(8);
		}
		if (func_1377(32768))
		{
			func_1396(uParam0);
			func_1381(32768);
		}
		if (func_1377(2))
		{
			if (func_1377(4))
			{
				func_1397(uParam0);
				func_1381(4);
			}
			func_1394(uParam0);
			if (func_1366(uParam0) == 2144984909)
			{
				func_1395(uParam0);
			}
			func_1381(2);
		}
		if (func_1377(16384))
		{
			if (func_1398() == 732138465)
			{
				func_1399(uParam0);
				func_1395(uParam0);
			}
			else if (!func_1400(uParam0))
			{
			}
			func_1381(16384);
		}
		if (func_1377(4096))
		{
			if (_virtual_collection_exists(func_1401()))
			{
				iVar8 = func_1402(uParam0);
				if (iVar8 <= 0)
				{
				}
				else
				{
					if (func_1366(uParam0) == 1036144478)
					{
						iVar11 = iVar8;
						bVar12 = false;
						iVar9 = 0;
						while (iVar9 < iVar11)
						{
							iVar10 = func_1404(func_1403(uParam0), func_1365(uParam0), iVar9);
							if (func_1405(func_1403(uParam0), iVar10, 16384))
							{
								bVar12 = !_unlock_is_unlocked(1582250596);
							}
							else if (func_1405(func_1403(uParam0), iVar10, 32768))
							{
								bVar12 = (!_unlock_is_unlocked(2139782524) && func_1406(uParam0, func_1403(uParam0), iVar10));
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
					_virtual_collection_set_size(func_1401(), iVar8);
					if (uParam0->f_2207.f_155)
					{
						Stack.Push(uParam0);
						Stack.Push(func_1365(uParam0));
						Stack.Push(&uVar13);
						Call_Loc(uParam0->f_2207.f_156);
						if (StackVal)
						{
							uParam0->f_2207.f_119 = uVar13;
						}
					}
					func_1407(uParam0, uParam0->f_2207.f_119);
					uParam0->f_2207.f_120 = uParam0->f_2207.f_119;
					uParam0->f_2207.f_119 = -1;
				}
			}
			func_1381(4096);
		}
		if (func_1377(8192))
		{
			func_1408(uParam0);
			iVar14 = func_1409();
			iVar15 = func_1410();
			if (!func_1411(uParam0, iVar15, iVar14))
			{
			}
			func_1381(8192);
		}
		if (!func_1377(256))
		{
			func_1412();
		}
	}
	func_1413(uParam0);
	if (func_1414(uParam0))
	{
		iVar16 = func_1389();
		if (func_1415() == 193788635 || func_1415() == -1198174119)
		{
			iVar16 = func_1416();
		}
		func_1417(uParam0, iVar16, 0);
		if (func_1418(uParam0))
		{
			StringCopy(&cVar17, func_1419(uParam0->f_3), 32);
			StringConCat(&cVar17, "_COUPONS", 32);
			iVar21 = get_hash_key(&cVar17);
			iVar22 = -1979958621;
			Global_1051439->f_3258 = iVar16;
			uParam0->f_2767.f_9 = { uParam0->f_2207 };
			uParam0->f_2767.f_53 = uParam0->f_2207.f_74;
			uParam0->f_2767.f_54 = 0;
			if (func_1420(Global_1051439->f_3258))
			{
				uParam0->f_2207.f_116 = _databinding_read_data_int_from_parent_by_hash(func_1421(), func_1422());
			}
			func_1106(uParam0);
			func_1107(uParam0);
			func_1423(uParam0, iVar21, iVar22, -1, 1, 1);
		}
	}
	if (Global_1915715->f_20241.f_3.f_4)
	{
		func_1424(uParam0);
		func_1425(uParam0);
		func_1394(uParam0);
		iVar23 = 0;
		if (func_1426(uParam0, &iVar23))
		{
			if (iVar23 != func_1402(uParam0))
			{
				iVar24 = func_1427();
				if (iVar24 >= iVar23)
				{
					iVar24 = (iVar23 - 1);
				}
				func_1428(uParam0, iVar24, 1);
			}
		}
		Global_1915715->f_20241.f_3.f_4 = 0;
		Global_1915715->f_20241.f_3.f_5 = 0;
	}
	if (_databinding_is_data_id_valid(Global_1915715->f_20241.f_3.f_5))
	{
		func_1429(uParam0, Global_1915715->f_20241.f_3.f_5, &bVar25);
		func_1430(uParam0, bVar25);
		func_1394(uParam0);
		Global_1915715->f_20241.f_3.f_5 = 0;
	}
	if (Global_1915715->f_20241.f_3.f_6)
	{
		func_1106(uParam0);
		func_1431(0);
	}
	iVar26 = func_1366(uParam0);
	if ((((iVar26 == 94016929 || iVar26 == 178644271) || iVar26 == 1860655620) || iVar26 == -996064024) || iVar26 == -1548684311)
	{
		iVar27 = func_1367(uParam0);
		if (does_entity_exist(iVar27))
		{
			_0x3fe4fb41ef7d2196(iVar27);
			if ((get_frame_count() % 60) == 0)
			{
			}
		}
	}
	if (func_1432(&(uParam0->f_2160), 0))
	{
		if (Global_1915715->f_23293)
		{
			func_1433();
		}
		Global_1915715->f_23293 = 0;
	}
	else
	{
		Global_1915715->f_23293 = 1;
	}
	if (func_1434(uParam0, 128))
	{
		func_1435(uParam0);
	}
	if (func_1436(uParam0))
	{
		disable_control_action(2, -1860390754, false);
		disable_control_action(2, 1141111167, false);
		disable_control_action(2, -1384133541, false);
		disable_control_action(2, 1710877787, false);
		disable_control_action(2, -875187602, false);
		disable_control_action(2, 652860416, false);
		disable_control_action(2, 285921746, false);
		disable_control_action(2, -1932931774, false);
		func_1437(uParam0, 5, 0);
		uParam0->f_2207.f_83 = 0;
	}
	if (uParam0->f_4 != 179)
	{
		func_1438(uParam0);
	}
	if (func_1377(131072))
	{
		Var28 = { Global_1915715->f_20241.f_3.f_20 };
		iVar42 = Global_1915715->f_20241.f_3.f_34;
		switch (iVar42)
		{
			case -1318406457:
				if (func_1439(Var28.f_8))
				{
					func_1440(uParam0);
				}
				break;
			case -1883671814:
			case 541670136:
			case 2113164098:
				if (func_1420(Var28.f_8))
				{
					switch (uParam0->f_2207.f_116)
					{
						case 0:
							Var43 = { func_667(-388128145, Var28, -653439684, 0) };
							break;
						case 1:
							Var43 = { func_667(515427499, Var28, -653439684, 0) };
							break;
					}
					if (func_1267(Var43, 1, 0))
					{
					}
				}
				if (func_1441(Global_1915715->f_20241.f_3.f_35))
				{
					func_1442(uParam0->f_2160.f_1, Var28.f_8);
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
		func_1381(131072);
		func_1443();
	}
	iVar47 = func_1389();
	iVar48 = func_1415();
	if (iVar48 != -841939068)
	{
		if (iVar48 == 193788635 || iVar48 == -1198174119)
		{
			iVar47 = func_1416();
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
		if (func_1366(uParam0) == 310306577)
		{
			iVar49 = func_1444(uParam0, &uVar50, 1, 1);
		}
		func_1445(iVar47, 0, iVar49);
	}
	if (func_1434(uParam0, 128))
	{
		if (func_1446(&(uParam0->f_2207.f_117), &bVar51))
		{
			func_1447(uParam0, 128);
			if (bVar51)
			{
				func_1386(uParam0, 7);
				iVar0 = 0;
			}
			else
			{
				func_1387(&(uParam0->f_2207));
				uParam0->f_2207.f_79 = 0;
				func_1448();
			}
		}
	}
	Global_1915715->f_20241.f_47 = func_1403(uParam0);
	Global_1915715->f_20241.f_45 = func_1365(uParam0);
	Global_1915715->f_20241.f_46 = func_1449(&(uParam0->f_2207));
	Global_1915715->f_20241.f_48 = iVar0;
	return iVar0;
}

void func_945(var uParam0)
{
	func_937(uParam0->f_2506);
	func_1450(uParam0);
	func_1451(uParam0);
}

bool func_946(int iParam0)
{
	iVar0 = func_833(func_378(iParam0), 1);
	if (iVar0 != 39)
	{
		if (func_836(iParam0, 0))
		{
			return func_1452(iParam0, iVar0);
		}
		return &Global_1952637->f_1675.f_1[iVar0] == iParam0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&Global_1952637->f_1675.f_1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_947(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_948(int iParam0)
{
	func_1159(&uVar1, 9044914, iParam0, 0, 0, 0);
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

int func_949(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_384.f_211)
	{
		if (&uParam0->f_384.f_10[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_950(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_958() - fParam1);
	func_1453(uParam0, 1);
	func_1454(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_951(vector3 vParam0)
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

void func_952(var uParam0, var uParam1)
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

void func_953(int iParam0)
{
	func_533(&(Global_1940311->f_1433.f_54), iParam0);
}

bool func_954(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_955(int iParam0, int iParam1)
{
	if (!func_274(iParam0))
	{
		return false;
	}
	return func_954(Global_1132288->f_1[iParam0]->f_61, iParam1);
}

void func_956(int iParam0)
{
	if (!func_792(iParam0, 4194304, 255))
	{
		func_959(iParam0, 4194304);
	}
}

bool func_957(var uParam0)
{
	return func_689(*uParam0, 2);
}

float func_958()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_959(int iParam0, int iParam1)
{
	if (!func_1253(iParam0))
	{
		return;
	}
	if (!func_792(iParam0, iParam1, 255))
	{
		func_587(&((*(*Global_1238240)[network_player_id_to_int()])[iParam0]->f_19), iParam1);
	}
}

void func_960(var uParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		_0x543dfe14be720027(uParam0, iParam1, 0);
		_0x6ecfc621a168424c(iParam1, iParam1, 0, 0);
		iVar0 = get_object_index_from_entity_index(iParam1);
		if (does_entity_exist(iVar0))
		{
			_set_pickup_object_glow_enabled(iVar0, true);
		}
	}
}

void func_961(int iParam0)
{
	if (!func_1455(iParam0))
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

void func_962(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1456(Global_34) && is_player_teleport_active())
	{
	}
	if (func_1457(iParam0))
	{
		if (func_1458(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_954(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_962(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_962(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_954(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_954(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_954(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_954(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_954(iParam5, 129))
	{
		if (func_954(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		_set_entity_coords_and_heading_no_offset(iParam0, vParam1, fParam4, func_954(iParam5, 32), true);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_954(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_954(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1457(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_954(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_34 && !func_954(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_963(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_964()
{
	return !&Global_1913504;
}

void func_965(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_966(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_967(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_968(int iParam0)
{
	if (func_894(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_894(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_894(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_894(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_894(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_894(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_894(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_894(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	if (((func_894(iParam0, -352095726) || func_894(iParam0, -2014783736)) || func_894(iParam0, -545064757)) || func_894(iParam0, 679186220))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_969(int iParam0)
{
	if (func_894(iParam0, -189374246))
	{
		if (((func_1459(iParam0, -1305775593) || func_1459(iParam0, 1384151091)) || func_1459(iParam0, 2075388272)) || func_1459(iParam0, -1738780413))
		{
			return true;
		}
	}
	if (func_894(iParam0, -753854379) || func_894(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_970(int iParam0)
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

int func_971(int iParam0)
{
	if (!func_889(iParam0, 0))
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

int func_972(int iParam0)
{
	iVar0 = func_1358(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1460(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_1461(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (_0x8750f69a720c2e41(iVar11, iVar13, &iVar14) && func_1462(iVar14))
			{
				func_1463(iVar11);
				return iVar14;
			}
			iVar13++;
		}
		func_1463(iVar11);
	}
	return 0;
}

bool func_973(int iParam0, int iParam1)
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

bool func_974(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!func_889(iParam0, 0) && !func_1390(func_1304(iParam0), 2))
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

char* func_975(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_976(int iParam0, int iParam1)
{
	iVar0 = func_1464(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_977(int iParam0, char* sParam1)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_1465(iParam0), 128);
	iVar0 = get_length_of_literal_string(sParam1);
	if (!func_1441(iParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_1466(iParam0), 128);
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

char* func_978(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

char* func_979(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_975(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_980(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1467(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_981()
{
	if (func_89() != 0)
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

void func_982(var uParam0, var uParam1)
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

void func_983(bool bParam0)
{
	func_1468(bParam0);
	Global_1956200->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

bool func_984(int iParam0, int iParam1)
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

bool func_985()
{
	return Global_1913504->f_127 == 0;
}

int func_986(int iParam0)
{
	return (iParam0 / 100);
}

int func_987(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return ((iParam0 % 100) / 1);
	}
	return (iParam0 / 1);
}

bool func_988()
{
	return (func_1469(0) && func_1469(5));
}

int func_989(int iParam0)
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

int func_990(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1470(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_991(int iParam0)
{
	iVar0 = func_893(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

int func_992(int iParam0)
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

bool func_993(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	Var0 = { func_469(iParam0) };
	if (!func_1471(Var0))
	{
		return true;
	}
	if (!func_1472(iParam0))
	{
		if (Global_1900736->f_69 <= 0)
		{
			Global_1900736->f_69 = absi(get_cloud_time_as_int());
		}
		else if (absi((Global_1900736->f_69 - get_cloud_time_as_int())) >= Global_1901947->f_677.f_1)
		{
			func_88(22, -1);
		}
		return false;
	}
	else if (Global_1900736->f_69 != 0)
	{
		Global_1900736->f_69 = 0;
	}
	func_1473(get_cloud_time_as_int());
	func_1474(iParam0, 1);
	if (func_1475(iParam0, &iVar2))
	{
		func_908(func_909(-1892463704, iVar2), 1);
		Var3 = { func_909(1671659657, iVar2) };
		stat_id_set_to_posse_id(&Var3);
		iVar5 = 0;
		Var6 = { func_1329(-1048906573) };
		if (_0x302e71c1d9ee75b9(&Var6, func_1000(Var0), &iVar5) && iVar5 == 0)
		{
			func_908(func_909(909949304, iVar2), 1);
		}
	}
	if (!func_1476(iParam0))
	{
		func_1477(0);
	}
	func_1478();
	func_1479(iParam0);
	func_806(iParam0);
	func_1480(0);
	func_1482(func_1481(iParam0));
	func_1483(Var0, 1, 1, 0, 1);
	if ((*Global_1835011)[iParam0]->f_32 != -1)
	{
		(*Global_1835011)[iParam0]->f_32 = -1;
	}
	return true;
}

int func_994(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1900874[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1900874[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_995()
{
	return func_1037(Global_1572887->f_7, 1);
}

var func_996(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1484() != 0)
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
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1485());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1485());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1485());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1486(get_player_team(iVar5)));
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
			if (func_1487(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1150(iVar2) != 1)
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
					if (!func_1488(iVar10))
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

void func_997(var uParam0, int iParam1)
{
	uParam0->f_327 = iParam1;
}

int func_998(var uParam0, var uParam1)
{
	return uParam0;
}

int func_999(int iParam0)
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

int func_1000(struct<2> Param0)
{
	return func_1489(Param0);
}

void func_1001(struct<2> Param0, var uParam2)
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
	switch (func_998(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_593(func_1490(Param0));
			iVar5 = func_1491(iVar4);
			if (!func_1492(iVar5, 0))
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

void func_1002(var uParam0, int iParam1)
{
	uParam0->f_64 = iParam1;
}

bool func_1003(var uParam0, var uParam1)
{
	if (is_entity_in_water(*uParam1))
	{
		get_water_height_no_waves(get_entity_coords(*uParam1, true, false), &fVar0);
	}
	if (is_ped_falling(*uParam1))
	{
		return false;
	}
	else if (!is_entity_visible(*uParam1))
	{
		return false;
	}
	else if (is_entity_in_air(*uParam1, 1))
	{
		return false;
	}
	else if (fVar0 > 0.25f)
	{
		return false;
	}
	else if (is_ped_ragdoll(*uParam1))
	{
		return false;
	}
	else if (is_ped_climbing(*uParam1))
	{
		return false;
	}
	else if (_0x84d0bf2b21862059(*uParam1))
	{
		return false;
	}
	else if (is_ped_getting_up(*uParam1))
	{
		return false;
	}
	else if (_get_ped_crouch_movement(*uParam1))
	{
		return false;
	}
	else if (Global_1913694->f_1582 || Global_1913694->f_1581)
	{
		return false;
	}
	else if (is_ped_in_cover(*uParam1, 0, 0))
	{
		return false;
	}
	else if (func_1493(uParam1))
	{
		return false;
	}
	else if (is_ped_going_into_cover(*uParam1))
	{
		return false;
	}
	else if (is_ped_aiming_from_cover(*uParam1))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(*uParam1, false) && !func_1004(uParam1))
	{
		return false;
	}
	else if (_0x2311f15d971aa680(*uParam1) != -1)
	{
		return false;
	}
	else if (func_1494(uParam1))
	{
		return false;
	}
	else if (_0xa24c1d341c6e0d53(1, 0, 0) && !is_bit_set(uParam0->f_8, 18))
	{
		return false;
	}
	else if (_is_ped_hogtying(*uParam1))
	{
		return false;
	}
	else if (_is_ped_hogtied(*uParam1))
	{
		return false;
	}
	else if (is_ped_on_vehicle(*uParam1, false))
	{
		return false;
	}
	else if (!is_entity_on_screen(*uParam1))
	{
		return false;
	}
	else if (Global_1102219->f_26.f_3337 != 0)
	{
		return false;
	}
	else if (func_1045(&(Global_1102219->f_4), 1, 5))
	{
		return false;
	}
	return true;
}

bool func_1004(var uParam0)
{
	if (is_ped_in_any_vehicle(*uParam0, false) || is_ped_on_vehicle(*uParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*uParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 742064790)
		{
			iLocal_1583 = func_1495();
			return true;
		}
	}
	return false;
}

void func_1005(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1006(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (uParam0->f_12 == -1)
	{
		if (bParam3)
		{
			uParam0->f_12 = (get_game_timer() % 2);
		}
		else if (!bParam2 || !_0xcb690f680a3ea971(*uParam1, 6))
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
		if (func_1007(uParam1))
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
	else if (!_0xcb690f680a3ea971(*uParam1, 6))
	{
		bVar10 = true;
	}
	func_1496(uParam0->f_12, &vVar0, &vVar3, &vVar6, &uVar9, _0xdc44f405a6b98d03(*uParam1, 0), is_ped_male(*uParam1), bVar10, bParam3);
	vVar11 = { get_offset_from_entity_in_world_coords(*uParam1, vVar0) };
	iVar14 = func_1497(uParam0, uParam1, vVar11, get_entity_coords(*uParam1, true, false));
	if (iVar14 == 1)
	{
		func_1498(uParam0, uParam1, vVar0, vVar3, vVar6, uVar9);
	}
	else
	{
		uParam0->f_12 = -1;
	}
	return iVar14;
}

bool func_1007(var uParam0)
{
	if (!does_entity_exist(*uParam0))
	{
		return false;
	}
	if (get_current_ped_weapon(*uParam0, &iVar0, true, 0, false))
	{
		return (_is_weapon_pistol(iVar0) || _is_weapon_revolver(iVar0));
	}
	return false;
}

void func_1008(var uParam0)
{
	set_cam_coord(*uParam0, get_gameplay_cam_coord());
	set_cam_rot(*uParam0, get_gameplay_cam_rot(2), 2);
	set_cam_fov(*uParam0, get_gameplay_cam_fov());
}

int func_1009(int iParam0, int iParam1, int iParam2)
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

void func_1010(var uParam0, bool bParam1, bool bParam2)
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

bool func_1011(var uParam0)
{
	return uParam0->f_1;
}

int func_1012(var uParam0, bool bParam1, bool bParam2)
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

void func_1013(var uParam0, var uParam1)
{
	if (!_0xcb690f680a3ea971(*uParam0, 6))
	{
		return;
	}
	if (_is_ped_hogtying(*uParam0) || _is_ped_hogtied(*uParam0))
	{
		return;
	}
	clear_ped_tasks_immediately(*uParam0, false, true);
	StringCopy(&cVar29, "Camera", 16);
	if (uParam1->f_12 > 0)
	{
		StringConCat(&cVar29, "_", 16);
		StringIntConCat(&cVar29, uParam1->f_12, 16);
	}
	_get_anim_scene_entity_matrix(uParam1->f_20, &cVar29, &Var17, false, "LIVE", 2);
	uParam1->f_13.f_1 = (uParam1->f_13.f_1 + 0.165f);
	Var0.f_1 = { func_1499(Var17, Var17.f_3, uParam1->f_13) };
	Var0.f_4 = 10000;
	Var0.f_6 = 1;
	Var0.f_7 = 1;
	task_shoot_with_weapon(*uParam0, &Var0);
}

void func_1014(var uParam0, var uParam1)
{
	if (func_1500(uParam0, uParam1))
	{
		uParam1->f_63 = func_1501(uParam1);
	}
}

void func_1015(var uParam0, int iParam1, int iParam2)
{
	func_1502(uParam0, "Local Player", iParam1, iParam2);
	func_1502(&(uParam0->f_6), "Perpetrator", iParam1, iParam2);
	if (uParam0->f_12 != 0)
	{
		func_1502(&(uParam0->f_12), "Perpetrator's Rider", iParam1, iParam2);
	}
	func_1502(&(uParam0->f_18), "Victim", iParam1, iParam2);
	if (uParam0->f_24 != 0)
	{
		func_1502(&(uParam0->f_24), "Victim's Rider", iParam1, iParam2);
	}
	is_entity_dead(uParam0->f_30);
	is_entity_dead(uParam0->f_30.f_1);
	if (does_entity_exist(uParam0->f_30))
	{
		vVar0 = { get_entity_coords(uParam0->f_30, true, false) };
	}
	if (does_entity_exist(uParam0->f_30.f_1))
	{
		vVar3 = { get_entity_coords(uParam0->f_30.f_1, true, false) };
	}
	if (!func_209(vVar0) && !func_209(vVar3))
	{
		StringCopy(&cVar6, "", 64);
		StringIntConCat(&cVar6, floor(vdist(vVar0, vVar3)), 64);
		StringConCat(&cVar6, "m ", 64);
		vVar14 = { vVar3 - vVar0 };
		fVar17 = get_heading_from_vector_2d(vVar14.x, vVar14.y);
		if (fVar17 == 360f)
		{
			fVar17 = 0f;
		}
		StringConCat(&cVar6, _0x2b6846401d68e563(fVar17, 0), 64);
		if (fVar17 > 22.5f && fVar17 <= 67.5f)
		{
			StringConCat(&cVar6, "NW", 64);
		}
		else if (fVar17 > 67.5f && fVar17 <= 112.5f)
		{
			StringConCat(&cVar6, "W", 64);
		}
		else if (fVar17 > 112.5f && fVar17 <= 157.5f)
		{
			StringConCat(&cVar6, "SW", 64);
		}
		else if (fVar17 > 157.5f && fVar17 <= 202.5f)
		{
			StringConCat(&cVar6, "S", 64);
		}
		else if (fVar17 > 202.5f && fVar17 <= 247.5f)
		{
			StringConCat(&cVar6, "SE", 64);
		}
		else if (fVar17 > 247.5f && fVar17 <= 292.5f)
		{
			StringConCat(&cVar6, "E", 64);
		}
		else if (fVar17 > 292.5f && fVar17 <= 337.5f)
		{
			StringConCat(&cVar6, "NE", 64);
		}
		else if (fVar17 > 337.5f && fVar17 <= 360f)
		{
			StringConCat(&cVar6, "N", 64);
		}
		else if (fVar17 >= 0f && fVar17 <= 22.5f)
		{
			StringConCat(&cVar6, "N", 64);
		}
	}
}

void func_1016(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (uParam3->f_63)
	{
		case 10:
			break;
		case 19:
			break;
		case 18:
			break;
		case 13:
			break;
	}
}

void func_1017(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam3)
	{
		case -507840394:
			func_1503(uParam2, iParam4);
			func_1504(uParam2, iParam4);
			func_1505(uParam2, iParam4);
			func_1506(uParam2, iParam4);
			break;
		case 1741908893:
			func_1507(uParam2, iParam4);
			break;
	}
}

void func_1018(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] - (Global_1296406[iVar0] && iParam0));
}

bool func_1019(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1296406[iParam1] && iParam0) != 0;
}

char* func_1020()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

bool func_1021()
{
	return Global_1940144->f_11;
}

void func_1022(int iParam0)
{
	if (!func_1037(&Global_1903131, iParam0))
	{
		func_587(Global_1903131, iParam0);
	}
}

void func_1023()
{
	play_sound_frontend("OOB_start", func_1020(), true, 0);
}

bool func_1024(var uParam0, int iParam1)
{
	return (uParam0->f_327.f_1 && iParam1) != 0;
}

bool func_1025(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_222(255))
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
		func_1151(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = { Param0 };
		func_1152(&(Global_1102219->f_3888));
		Global_1102219->f_3888 = { Param30 };
		Global_1102219->f_3919 = iParam39;
		Global_1102219->f_3920 = iParam40;
		Global_1102219->f_3921 = iParam41;
		func_768(Global_1102219->f_3849, 36);
		func_769(Global_1102219->f_3888, 36);
		func_527(48);
		return true;
	}
	return false;
}

void func_1026(vector3 vParam0, var uParam3)
{
	uParam3->f_17.f_6 = { vParam0 };
	uParam3->f_17.f_3 = { 0f, 0f, 0f };
	uParam3->f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
	uParam3->f_17.f_9 = -432403087;
	uParam3->f_16 = 1;
	uParam3->f_6.f_6 = { vParam0 };
	uParam3->f_6.f_3 = { 0f, 0f, 0f };
	uParam3->f_6 = { Global_1901947->f_50, Global_1901947->f_50, Global_1901947->f_50 };
	uParam3->f_6.f_9 = -432403087;
	if (Global_1572887->f_6)
	{
		func_1508(uParam3);
	}
}

int func_1027(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
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
		if (func_1234(iVar0, 2))
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
		func_1289(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

float func_1028(int iParam0, bool bParam1)
{
	if (bParam1 && !func_358(iParam0))
	{
		return 0f;
	}
	iVar0 = func_874(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1951255)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1951255)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1951255)[iVar0]->f_3);
}

void func_1029(int iParam0)
{
	iVar0 = network_player_id_to_int();
	if (iVar0 == 255)
	{
		return;
	}
	(*Global_1296406)[iVar0] = (Global_1296406[iVar0] || iParam0);
}

bool func_1030(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (_0x72b2e00c9bac6789(&(Global_1296379->f_2), iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (_0x72b2e00c9bac6789(Global_1296379->f_23[iVar0], iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1031(bool bParam0)
{
	func_542(62, bParam0);
}

void func_1032(bool bParam0)
{
	func_542(63, bParam0);
}

void func_1033(bool bParam0)
{
	func_542(64, bParam0);
}

void func_1034(var uParam0, bool bParam1)
{
	if (!func_1509(uParam0))
	{
		return;
	}
	iVar0 = Global_1296859->f_8;
	func_1510();
	func_1511(0);
	if (uParam0->f_1)
	{
		func_1512(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_495(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_1513();
		}
	}
	if (uParam0->f_12)
	{
		func_1514();
	}
	if (uParam0->f_8)
	{
		func_1515(_0xdf66a37936d5f3d9(player_id()));
		func_1517(func_1516());
	}
	else if (uParam0->f_4)
	{
		func_1518();
		func_1515(_0xdf66a37936d5f3d9(player_id()));
		func_1517(Global_1956200->f_1549);
	}
	if (uParam0->f_3)
	{
		func_1519();
	}
	if (bParam1)
	{
		func_177(0, 0);
		func_1520();
	}
	func_1521(&(Global_1139381->f_4796));
}

Vector3 func_1035(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_1036(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

bool func_1037(bool bParam0, bool bParam1)
{
	return (bParam0 && bParam1) != 0;
}

void func_1038(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1039()
{
	if (!Global_1102219->f_16)
	{
		return;
	}
	Global_1071686->f_28662.f_5 = 1;
	_0x531a78d6bf27014b("rdro_gamemode_transition_sounds");
	_0x531a78d6bf27014b("rdro_gamemode_generic_sounds");
}

int func_1040(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_0xde0ea444735c1368(iParam1))
	{
		_0x2c87c3e1c7b96ee2(iParam1);
	}
	if (_0x0cab404cd2db41f5(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1041(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_1042(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_1043(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1044(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1045(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

void func_1046(var uParam0)
{
	Var0.f_1 = 255;
	Var0.f_4 = 4;
	Var0.f_5 = 2;
	*uParam0 = { Var0 };
}

void func_1047(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1522(Global_1139381->f_3876.f_2[func_541(iParam0, 1)]);
}

void func_1048(int iParam0)
{
	if (!func_1119(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

int func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1008523256;
		case 1:
			return 1141833051;
		case 2:
			return 830686115;
		case 3:
			return 1371816784;
		case 4:
			return -279039872;
		case 5:
			return -347364204;
		case 6:
			return -1591356522;
		case 7:
			return -1481147674;
		case 8:
			return 1071445036;
		case 9:
			return 1393764479;
		case 10:
			return 416600242;
		case 11:
			return 1774314862;
		case 12:
			return 1624339917;
		case 13:
			return -702452069;
		case 14:
			return -1697453237;
		case 15:
			return 935565856;
		case 16:
			return 164389658;
		case 17:
			return -3633128;
		case 18:
			return 568979268;
		case 19:
			return -742165699;
		case 20:
			return 1241889488;
		case 21:
			return -1450969535;
		case 22:
			return 135103436;
		case 23:
			return -1562463744;
		case 24:
			return -569428078;
		case 25:
			return 1034986020;
		case 26:
			return 1282514153;
		case 27:
			return 699547230;
		case 28:
			return -1188075274;
		case 29:
			return -307865396;
		case 30:
			return -340432202;
		case 31:
			return 891000470;
		case 32:
			return -1785915344;
		case 33:
			return 95610146;
		case 34:
			return -175154863;
		case 35:
			return -779715008;
		case 36:
			return 966721050;
		case 37:
			return 1773322216;
		case 38:
			return 965995012;
		case 39:
			return -2106942431;
		case 40:
			return 1772846069;
		case 41:
			return -1782208300;
		case 42:
			return 466723622;
		case 43:
			return -155807419;
		case 44:
			return 369580868;
		case 45:
			return 1862983441;
		case 46:
			return -1462149998;
		case 47:
			return 1097539553;
		case 48:
			return -1479366685;
		case 49:
			return 1475807964;
		case 50:
			return 504293064;
		case 51:
			return -678729477;
		case 52:
			return 1635370648;
		case 53:
			return 741518720;
		case 54:
			return -1021330426;
		case 55:
			return -879824208;
		case 56:
			return 56746299;
		case 57:
			return 1915534289;
		case 58:
			return 1089670230;
		case 59:
			return 1179867258;
		case 60:
			return -328876172;
		case 61:
			return 824485797;
		case 62:
			return -146546566;
		case 63:
			return -733684727;
		case 64:
			return 2080739522;
		case 65:
			return 1250184037;
		case 66:
			return 1142477451;
		case 67:
			return -750441052;
		case 68:
			return -467924289;
		case 69:
			return 1034671917;
		case 70:
			return -1442893430;
		case 71:
			return 957547265;
		case 72:
			return 1781322358;
		case 73:
			return 1219330971;
		case 74:
			return -2110119917;
		case 75:
			return 709191463;
		case 76:
			return 2038044382;
		case 77:
			return 1062084355;
		case 78:
			return -690423049;
		case 79:
			return 202835363;
		case 80:
			return -293519133;
		case 81:
			return 592206679;
		case 82:
			return -816725755;
		case 83:
			return -255537257;
		case 84:
			return -770038426;
		case 85:
			return -1940881994;
		case 86:
			return -1099377300;
		case 87:
			return -1298580726;
		case 88:
			return -1838764391;
		case 89:
			return 1537295589;
		case 90:
			return -26782235;
		case 91:
			return 1465961145;
		case 92:
			return -150140702;
		case 93:
			return 925148616;
		case 94:
			return -586196356;
		case 95:
			return -989277348;
		case 96:
			return -1045571630;
		case 97:
			return -1028785813;
		case 98:
			return -944306928;
		case 99:
			return -1799624227;
		case 100:
			return -1413825410;
		case 101:
			return -1083767826;
		case 102:
			return 1392091586;
		case 103:
			return 1269397350;
		case 104:
			return -1808878008;
		case 105:
			return 696574474;
		case 106:
			return 1280983896;
		case 107:
			return -473520653;
		case 108:
			return -1142735215;
		case 109:
			return -662059387;
		case 110:
			return 1196324698;
		case 111:
			return 1781673553;
		case 112:
			return 1091365066;
		case 113:
			return -346602855;
		case 114:
			return -642855470;
		case 115:
			return -1294273068;
		case 116:
			return -1181812906;
		case 117:
			return 2016458991;
		case 118:
			return 200716381;
		case 119:
			return -1845137425;
		case 120:
			return 787092883;
		case 121:
			return 888483612;
		case 122:
			return 2063500509;
		case 123:
			return -1570130076;
		case 124:
			return 262797908;
		case 125:
			return 2012255077;
		case 126:
			return 1499632451;
		case 127:
			return -236880317;
		case 128:
			return 1211454712;
		case 129:
			return -626189620;
		case 130:
			return -1438489730;
		case 131:
			return -479537578;
		case 132:
			return -1463903719;
		case 133:
			return 1203863120;
		case 134:
			return -351785645;
		case 135:
			return -895584822;
		case 136:
			return -1723095449;
		case 137:
			return 1915528396;
		case 138:
			return -1266254117;
		case 139:
			return -1614496179;
		case 140:
			return -1490596352;
		case 141:
			return -1047907201;
		case 142:
			return -1202322374;
		case 143:
			return 157340468;
		case 144:
			return 2064288322;
		case 145:
			return -2116748653;
		case 146:
			return 155183949;
		case 147:
			return 825663396;
		case 148:
			return 976967808;
		case 149:
			return 590738432;
		case 150:
			return 1708896805;
		case 151:
			return 2035135006;
		case 152:
			return 334691246;
		case 153:
			return -835870147;
		case 154:
			return -1267680873;
		case 155:
			return 1153433438;
		case 156:
			return 1489424180;
		case 157:
			return -904522836;
		case 158:
			return 1611867516;
		case 159:
			return -1119986744;
		case 160:
			return -941621037;
		case 161:
			return 101270175;
		case 162:
			return -875013288;
		case 163:
			return -1541719198;
		case 164:
			return 842085562;
		case 165:
			return 1887179278;
		case 166:
			return 1468744908;
		case 167:
			return -1248823782;
		case 168:
			return 1154537543;
		case 169:
			return -1244566857;
		case 170:
			return -1255654531;
		case 171:
			return -2137705453;
		case 172:
			return -1924253471;
		case 173:
			return 1990527907;
		case 174:
			return -1963575852;
		case 175:
			return -2051828336;
		case 176:
			return 1798123698;
		case 177:
			return 495975404;
		case 178:
			return -665208900;
		case 179:
			return -2090796305;
		case 180:
			return 1649401908;
		case 181:
			return -2103309026;
		case 182:
			return 1582509135;
		case 183:
			return -1471337442;
		case 184:
			return -1207177750;
		case 185:
			return 1269504651;
		case 186:
			return 1519769314;
		case 187:
			return 644398018;
		case 188:
			return 107613027;
		case 189:
			return 93270913;
		case 190:
			return -2118935736;
		case 191:
			return -536214615;
		case 192:
			return 1772867250;
		case 193:
			return 766204040;
		case 194:
			return 564321544;
		case 195:
			return -434046439;
		case 196:
			return 728527958;
		case 197:
			return -1923952042;
		case 198:
			return -749877125;
		case 199:
			return 1857771831;
		case 200:
			return 273544526;
		case 201:
			return 1068458324;
		case 202:
			return 600894625;
		case 203:
			return -1463447134;
		case 204:
			return -1161401818;
		case 205:
			return 1888618008;
		case 206:
			return 1225419284;
		case 207:
			return 1127626385;
		case 208:
			return -1211596176;
		case 209:
			return 1811646877;
		case 210:
			return 1651578691;
		case 211:
			return 1382238315;
		case 212:
			return -2099616401;
		case 213:
			return 946618725;
		case 214:
			return -862103290;
		case 215:
			return -578476660;
		case 216:
			return 333834761;
		case 217:
			return -1530925183;
		case 218:
			return -809702995;
		case 219:
			return -267638862;
		case 220:
			return 1323614307;
		case 221:
			return -2094518374;
		case 222:
			return -209614658;
		case 223:
			return -2011961582;
		case 224:
			return 1656869860;
		case 225:
			return -969870146;
		case 226:
			return 1319079466;
		case 227:
			return -1688741952;
		case 228:
			return -1537888061;
		case 229:
			return 1417063580;
		case 230:
			return 992974374;
		case 231:
			return -1714801835;
		case 232:
			return -134912699;
		case 233:
			return 41531735;
		case 234:
			return -1175686941;
		case 235:
			return -1834878085;
		case 236:
			return 1672605872;
		case 237:
			return 1083028949;
		case 238:
			return 890539395;
		case 239:
			return -1603547373;
		case 240:
			return -748173978;
		case 241:
			return 1949355378;
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

char* func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 1008523256:
			return "time_block";
		case 1141833051:
			return "mission";
		case 830686115:
			return "mission_type(type=%x)/mission";
		case 1371816784:
			return "volume";
		case -279039872:
			return "volume_component";
		case -347364204:
			return "nav_block_volume";
		case -1591356522:
			return "blocking_object_flag";
		case -1481147674:
			return "location_flag";
		case 1071445036:
			return "setting";
		case 1393764479:
			return "scenario";
		case 416600242:
			return "door";
		case 1774314862:
			return "force_volume";
		case 1624339917:
			return "ped";
		case -702452069:
			return "prop";
		case -1697453237:
			return "ipl";
		case 935565856:
			return "lantern";
		case 164389658:
			return "prop_set";
		case -3633128:
			return "veg_mod";
		case 568979268:
			return "invalid_scenario";
		case -742165699:
			return "scenario_flag";
		case 1241889488:
			return "veg_flag";
		case -1450969535:
			return "anim";
		case 135103436:
			return "name";
		case -1562463744:
			return "turn_in_type";
		case -569428078:
			return "item";
		case 1034986020:
			return "interior";
		case 1282514153:
			return "transition";
		case 699547230:
			return "Location";
		case -1188075274:
			return "Mission_Giver";
		case -307865396:
			return "location";
		case -340432202:
			return "required_volume";
		case 891000470:
			return "mission_type";
		case -1785915344:
			return "unlock";
		case 95610146:
			return "state";
		case -175154863:
			return "string";
		case -779715008:
			return "flag";
		case 966721050:
			return "attribute";
		case 1773322216:
			return "weapon";
		case 965995012:
			return "warp_location";
		case -2106942431:
			return "flags";
		case 1772846069:
			return "giver";
		case -1782208300:
			return "Gun_for_Hire";
		case 466723622:
			return "Locations";
		case -155807419:
			return "Mission_Givers";
		case 369580868:
			return "Player_Bounties";
		case 1862983441:
			return "Use_Contexts";
		case -1462149998:
			return "location_flags";
		case 1097539553:
			return "location_flag(%i)";
		case -1479366685:
			return "settings";
		case 1475807964:
			return "setting(%i)";
		case 504293064:
			return "Dialogue";
		case -678729477:
			return "Missions";
		case 1635370648:
			return "Location(location=%x)";
		case 741518720:
			return "Mission_Giver(giver=%x)";
		case -1021330426:
			return "interaction_lockon";
		case -879824208:
			return "mission_giver_creation_data";
		case 56746299:
			return "schedule";
		case 1915534289:
			return "time_block(%i)";
		case 1089670230:
			return "mission(%i)";
		case 1179867258:
			return "volumes";
		case -328876172:
			return "volume(%i)";
		case 824485797:
			return "volume_component(%i)";
		case -146546566:
			return "volume_locks";
		case -733684727:
			return "volume_lock(%i)";
		case -750441052:
			return "scenarios";
		case 2080739522:
			return "nav_block_volume(%i)";
		case 1250184037:
			return "blocking_object_flags";
		case 1142477451:
			return "volume";
		case -1202322374:
			return "anti_grief_volumes";
		case -467924289:
			return "prop_sets";
		case 1034671917:
			return "props";
		case -1442893430:
			return "peds";
		case 957547265:
			return "script_created_scenarios";
		case 1781322358:
			return "veg_mods";
		case 1219330971:
			return "conditional_anims";
		case -2110119917:
			return "transitions";
		case 709191463:
			return "transition(%i)";
		case 2038044382:
			return "anim(%i)";
		case 1062084355:
			return "force_volumes";
		case -690423049:
			return "doors";
		case 202835363:
			return "scenario(%i)";
		case -293519133:
			return "prop_set(%i)";
		case 592206679:
			return "prop(%i)";
		case -816725755:
			return "ipl(%i)";
		case -255537257:
			return "lantern(%i)";
		case -770038426:
			return "ped(%i)";
		case -1940881994:
			return "unreachable_scearios";
		case -1099377300:
			return "invalid_scenario(%i)";
		case -1298580726:
			return "scenario_flags";
		case -1838764391:
			return "scenario_flag(%i)";
		case 1537295589:
			return "veg_flag(%i)";
		case -26782235:
			return "force_volume(%i)";
		case 1465961145:
			return "door(%i)";
		case -150140702:
			return "mission_giver_data";
		case 925148616:
			return "mission_giver_names";
		case -586196356:
			return "name(%i)";
		case -989277348:
			return "blip_data";
		case -1045571630:
			return "dialogue_type(type=%x)";
		case -1028785813:
			return "conversation(script_dialogue_handle=%x)";
		case -944306928:
			return "mission(unlock=%x)";
		case -1799624227:
			return "mission(type=%x)";
		case -1413825410:
			return "mission_data";
		case -1083767826:
			return "interiors";
		case 1392091586:
			return "interior(%i)";
		case 1269397350:
			return "name(name_type=%x)";
		case -1808878008:
			return "required_volume(%i)";
		case 696574474:
			return "required_volume_type(type=%x)";
		case 1280983896:
			return "required_volumes_types";
		case -473520653:
			return "mission_giver_type(type=%x)";
		case -1142735215:
			return "attachment";
		case -662059387:
			return "Location(%i)";
		case 1196324698:
			return "Location(id=%x)";
		case 1781673553:
			return "Mission_Giver(%i)";
		case 1091365066:
			return "mission_giver_name(type=%x)";
		case -346602855:
			return "locations";
		case -642855470:
			return "location(%i)";
		case -1294273068:
			return "Location(%i)";
		case -1181812906:
			return "veg_mod(%i)";
		case 2016458991:
			return "veg_mod_data(type=%x)";
		case 200716381:
			return "mission_flags";
		case -1845137425:
			return "mission_flag(%i)";
		case 787092883:
			return "door_config(config=%x)";
		case 888483612:
			return "mission_type(type=%x)";
		case 2063500509:
			return "mission_type(%i)";
		case -1570130076:
			return "mission_types";
		case 262797908:
			return "unlock(%i)";
		case 2012255077:
			return "state(%i)";
		case 1499632451:
			return "strings";
		case -236880317:
			return "string(%i)";
		case 1211454712:
			return "scenario";
		case -626189620:
			return "time_block(%i)/mission(unlock=%x)";
		case -1438489730:
			return "town(id=%x)";
		case -479537578:
			return "volume(script_volume_type=%x)";
		case -1463903719:
			return "town_volumes";
		case 1203863120:
			return "map_props";
		case -351785645:
			return "ipls";
		case -895584822:
			return "lanterns";
		case -1723095449:
			return "flags(type=%x)";
		case 157340468:
			return "nav_block_volumes";
		case 2064288322:
			return "volume";
		case -2116748653:
			return "blocking_object_flags";
		case 155183949:
			return "blocking_object_flag(%i)";
		case 825663396:
			return "ped(role=%x)";
		case 1915528396:
			return "flag(%i)";
		case -1266254117:
			return "attributes";
		case -1614496179:
			return "attribute(%i)";
		case -1490596352:
			return "weapons";
		case -1047907201:
			return "weapon(%i)";
		case 976967808:
			return "warp_locations";
		case 590738432:
			return "warp_location(%i)";
		case 1708896805:
			return "scene";
		case 2035135006:
			return "giver_schedule";
		case 334691246:
			return "hour(%i)";
		case -835870147:
			return "flags(%i)";
		case -1267680873:
			return "giver(%i)";
		case 1153433438:
			return "dialogue";
		case 1489424180:
			return ":dialogue_star_handle";
		case -904522836:
			return ":name";
		case 1611867516:
			return ":volume_name";
		case -1119986744:
			return ":conditional";
		case -941621037:
			return ":attach_bone";
		case 101270175:
			return ":anim_scene_name";
		case -875013288:
			return ":playlist_name";
		case -1541719198:
			return ":prop_name";
		case 842085562:
			return ":unlock";
		case 1887179278:
			return ":unlock_group";
		case 1468744908:
			return "mission(%i):unlock";
		case -1248823782:
			return ":mission_type";
		case 1154537543:
			return ":mission_name";
		case -1244566857:
			return ":dialogue_id";
		case -1255654531:
			return ":model";
		case -2137705453:
			return ":name";
		case -1924253471:
			return ":name_type";
		case 1990527907:
			return ":blip_style_close";
		case -1963575852:
			return ":blip_modifier_close";
		case -2051828336:
			return ":blip_sprite_close";
		case 1798123698:
			return ":flag";
		case 495975404:
			return ":script_volume_type";
		case -665208900:
			return ":type";
		case -2090796305:
			return ":required_volume_config";
		case 1649401908:
			return ":type";
		case -2103309026:
			return ":attach_to_model";
		case 1582509135:
			return ":scenario_author_type";
		case -1471337442:
			return ":blip_sprite";
		case -1207177750:
			return ":blip_style";
		case 1269504651:
			return ":blip_region";
		case 1519769314:
			return ":valid_location";
		case 644398018:
			return ":location";
		case 107613027:
			return ":giver";
		case 93270913:
			return ":blip";
		case -2118935736:
			return ":blip_modifier";
		case -536214615:
			return ":prop_set_name";
		case 564321544:
			return ":prop_set_placement_type";
		case -434046439:
			return ":door_id";
		case 728527958:
			return ":outfit";
		case -1923952042:
			return ":command_hash";
		case -749877125:
			return ":honor_requirement";
		case 1857771831:
			return ":loadout";
		case 273544526:
			return ":ipl_group";
		case 1068458324:
			return ":ipl_veg_mod";
		case 600894625:
			return ":ipl_nav_mesh";
		case -1463447134:
			return ":id";
		case -1161401818:
			return ":location_type";
		case 1888618008:
			return ":inventory_item";
		case 1225419284:
			return ":weapon";
		case 1127626385:
			return ":attach_point";
		case -1211596176:
			return ":use";
		case 1772867250:
			return ":scenario_prop";
		case 766204040:
			return ":scenario_mapping";
		case 1811646877:
			return ":texture";
		case 1651578691:
			return ":document";
		case 1382238315:
			return ":gender";
		case -2099616401:
			return ":handle";
		case 946618725:
			return ":value";
		case -862103290:
			return ":use_veg_mod";
		case -578476660:
			return ":force_to_be_object";
		case 333834761:
			return ":disable_scenario";
		case -1530925183:
			return ":clear_space";
		case -809702995:
			return ":should_be_locked";
		case -267638862:
			return ":is_breakable";
		case 1323614307:
			return ":snap_to";
		case -2094518374:
			return ":radius";
		case -209614658:
			return ":model_search_radius";
		case -2011961582:
			return ":heading";
		case 1656869860:
			return ":float";
		case -969870146:
			return ":launch_radius_offline";
		case 1319079466:
			return ":launch_radius_online";
		case -1688741952:
			return ":z_probe";
		case -1537888061:
			return ":open_ratio";
		case 1417063580:
			return ":auto_close_rate";
		case 992974374:
			return ":spawn_heading";
		case -1714801835:
			return ":interior_coords";
		case -134912699:
			return ":position";
		case 41531735:
			return ":orientation";
		case -1175686941:
			return ":scale";
		case -1834878085:
			return ":model_search_position";
		case 1672605872:
			return ":launch_coords";
		case 1083028949:
			return ":rotation";
		case 890539395:
			return ":spawn_position";
		case -1603547373:
			return ":destination_position";
		case -748173978:
			return ":destination_orientation";
		case 1949355378:
			return ":origin";
		default:
			break;
	}
	return "";
}

int func_1051(int iParam0, int iParam1)
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

bool func_1052(var uParam0, struct<2> Param1, var uParam3)
{
	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_1523(Param1.f_1);
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

bool func_1053(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1524(iParam0);
	uParam2->f_4 = iParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_1054(var uParam0, int iParam1, var uParam2)
{
	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (_datafile_get_hash(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	_datafile_get_string(&(uParam2->f_3), uParam0);
}

bool func_1055(int iParam0)
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

void func_1056(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1525(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1526(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1527(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1528(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1529(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_1530(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_1057(var uParam0, var uParam1)
{
	if (!_0x603ac35fd4602c76(uParam1))
	{
		return false;
	}
	*uParam0 = uParam1;
	uParam0->f_1 = uVar0;
	return true;
}

int func_1058(int iParam0)
{
	return func_134(14, iParam0);
}

void func_1059(int iParam0, int iParam1)
{
	(*Global_1116202)[iParam0] = iParam1;
}

void func_1060(struct<5> Param0, int iParam5)
{
	if (func_1531(&Param0))
	{
		iVar0 = 0;
		iVar1 = func_1068(Param0, -1481147674);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar2 = func_1532(Param0, iVar0);
			if (iVar2 != -1)
			{
				func_1533(iParam5, iVar2);
			}
			iVar0++;
		}
	}
}

void func_1061(int iParam0, vector3 vParam1)
{
	(*Global_1116202)[iParam0]->f_7.f_1 = { vParam1 };
}

void func_1062(int iParam0, float fParam1)
{
	(*Global_1116202)[iParam0]->f_7 = fParam1;
}

bool func_1063(var uParam0, var uParam1, var uParam2)
{
	if (!func_144(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = 1635370648;
	uParam0->f_3 = uParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1064(var uParam0)
{
	uParam0->f_2 = -989277348;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

int func_1065(int iParam0)
{
	switch (iParam0)
	{
		case 1138540229:
			return 0;
		case 1757124778:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_1066(int iParam0, int iParam1)
{
	Global_1109804->f_260.f_4368[iParam0]->f_8 = iParam1;
}

void func_1067(int iParam0, int iParam1)
{
	Global_1109804->f_260.f_4368[iParam0]->f_8.f_1 = iParam1;
}

int func_1068(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return _datafile_get_num_nodes(&vParam0);
}

bool func_1069(var uParam0, int iParam1)
{
	uParam0->f_2 = 2012255077;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1070(int iParam0)
{
	switch (iParam0)
	{
		case -939612467:
			return 0;
		case 1863597623:
			return 1;
		default:
			break;
	}
	return -1;
}

void func_1071(int iParam0, int iParam1, vector3 vParam2)
{
	*Global_1109804->f_260.f_4368[iParam0]->f_1[iParam1] = { vParam2 };
}

bool func_1072(var uParam0)
{
	uParam0->f_2 = 2035135006;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1073(var uParam0, int iParam1)
{
	uParam0->f_2 = 334691246;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1074(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -910931556:
			return 2;
		case 303108068:
			return 1;
		case 493038497:
			return 0;
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

void func_1075(int iParam0, int iParam1, int iParam2)
{
	set_bit((*Global_1116202)[iParam0]->f_3[func_1074(iParam1, 1)], iParam2);
}

bool func_1076(var uParam0)
{
	uParam0->f_2 = 976967808;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

void func_1077(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	if (!func_1534(&vParam0, iParam6))
	{
		return;
	}
	vParam0.f_2 = -134912699;
	if (_datafile_get_vector(&vVar0, &vParam0))
	{
		func_1535(iParam5, iParam6, vVar0);
	}
	vParam0.f_2 = -2011961582;
	if (_datafile_get_float(&uVar3, &vParam0))
	{
		func_1536(iParam5, iParam6, uVar3);
	}
}

int func_1078(int iParam0)
{
	return func_134(13, iParam0);
}

void func_1079(int iParam0, int iParam1)
{
	(*Global_1118808)[iParam0] = iParam1;
}

void func_1080(int iParam0, int iParam1)
{
	(*Global_1118808)[iParam0]->f_1 = iParam1;
}

bool func_1081(int iParam0)
{
	Var0 = { func_909(-1684144076, func_1537(iParam0)) };
	return func_1538(Var0);
}

void func_1082(int iParam0)
{
	func_1539(iParam0, 0);
}

bool func_1083(var uParam0)
{
	uParam0->f_2 = -150140702;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

void func_1084(struct<4> Param0, var uParam4, int iParam5, int iParam6)
{
	Param0.f_2 = -1267680873;
	Param0.f_3 = iParam5;
	if (!_datafile_get_data_node_index(&(Param0.f_1), &Param0))
	{
		return;
	}
	Param0.f_2 = -1463447134;
	if (!_datafile_get_hash(&iVar0, &Param0))
	{
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (func_575(iParam6) != -323664079)
	{
		Param0.f_2 = -1255654531;
		if (!_datafile_get_hash(&iVar0, &Param0))
		{
			return;
		}
		if (iVar0 == 0)
		{
			return;
		}
		iVar3 = iVar0;
		Param0.f_2 = 1382238315;
		if (!_datafile_get_hash(&iVar0, &Param0))
		{
			return;
		}
		if (iVar0 == 0)
		{
			return;
		}
		iVar2 = iVar0;
	}
	func_1540(iParam6, iVar3, iVar1);
	func_1541(iParam6, iVar2, iVar1);
}

var func_1085(int iParam0)
{
	return Global_1118808[iParam0];
}

bool func_1086(var uParam0, var uParam1, var uParam2)
{
	if (!func_146(uParam0, uParam1))
	{
		return false;
	}
	uParam0->f_2 = 741518720;
	uParam0->f_3 = uParam2;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

void func_1087(int iParam0, int iParam1, int iParam2)
{
	Global_1109804->f_260.f_4989[iParam0]->f_6[iParam1]->f_1 = iParam2;
}

void func_1088(int iParam0, int iParam1, int iParam2)
{
	Global_1109804->f_260.f_4989[iParam0]->f_6[iParam1] = iParam2;
}

bool func_1089(var uParam0, int iParam1)
{
	if (!func_1542(uParam0))
	{
		return false;
	}
	uParam0->f_2 = 1091365066;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

bool func_1090(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_1543(&vParam0, iParam5))
	{
		return false;
	}
	vParam0.f_2 = -1924253471;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar2 = iVar0;
	iVar1 = func_1544(iVar2, 1);
	if (iVar1 < 0 || iVar1 >= 2)
	{
		return false;
	}
	vParam0.f_2 = -2137705453;
	iVar0 = 0;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	func_1545(iParam6, iVar2, iVar0);
	switch (iVar2)
	{
		case -1100859510:
			func_1546(iParam6, 1, iVar0);
			break;
		case -107328778:
			func_1546(iParam6, 0, iVar0);
			break;
	}
	return true;
}

int func_1091(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1100859510;
		case 1:
			return -107328778;
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

int func_1092(int iParam0, int iParam1)
{
	return &((*Global_1118808)[iParam0]->f_13[func_1544(iParam1, 1)]);
}

bool func_1093(var uParam0)
{
	uParam0->f_2 = -346602855;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1094(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	if (!func_1547(&vParam0, iParam5))
	{
		return false;
	}
	vVar2.f_1 = -1;
	iVar1 = func_1548(iParam6);
	if (!func_1549(iVar1))
	{
		return false;
	}
	vParam0.f_2 = 1649401908;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iVar5 = iVar0;
	if (func_1550(iVar5, 1) == -1)
	{
		return false;
	}
	vParam0.f_2 = 1519769314;
	if (!_datafile_get_hash(&iVar0, &vParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	vVar2.x = iVar0;
	vVar2.f_1 = func_1058(vVar2.x);
	vVar2.f_2 = iVar5;
	if (!func_1551(vVar2.y))
	{
		return false;
	}
	if (iParam10 == -323664079)
	{
		iVar6 = func_1552();
		func_1553(iVar6, vVar2.y);
		func_1554(vVar2.y, iVar6);
		func_1556(func_1555() + 1);
	}
	if (iParam9 != 0 && iParam9 != vVar2.x)
	{
		return true;
	}
	func_1557(iParam6, iVar1, vVar2);
	func_1558(vVar2.y, iParam6);
	func_1559(iParam6, iVar1 + 1);
	return true;
}

bool func_1095(var uParam0)
{
	uParam0->f_2 = -1479366685;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

void func_1096(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	if (func_1560(&vParam0, iParam6))
	{
		vParam0.f_2 = -2137705453;
		if (!_datafile_get_hash(&iVar0, &vParam0))
		{
			return;
		}
		if (iVar0 != 0)
		{
			iVar1 = iVar0;
			iVar2 = func_1561(iVar1, 1);
			if (iVar2 > -1 && iVar2 < 32)
			{
				func_1562(iParam5, iVar1);
			}
		}
	}
}

void func_1097(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 3);
}

int func_1098()
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

void func_1099(var uParam0)
{
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (&Global_1051252->f_16[13] == 0 || !_does_thread_exist(&(Global_1051252->f_16[13])))
	{
		return;
	}
	*uParam0 = 175;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	_trigger_script_event_2(uParam0, 40, 9, &(Global_1051252->f_16[13]));
	func_1563(uParam0, uParam0->f_1);
}

bool func_1100(int iParam0)
{
	if (func_1564(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_1101()
{
	return true;
}

int func_1102(var uParam0, var uParam1)
{
	if (uParam0->f_2207.f_80)
	{
		if (!_databinding_is_data_id_valid(*uParam1))
		{
			return 0;
		}
		iVar0 = _databinding_get_array_count(*uParam1);
		iVar1 = 0;
		iVar2 = -1;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar3 = _databinding_get_item_context_by_index(*uParam1, iVar1);
			if (_databinding_is_data_id_valid(iVar3))
			{
				bVar4 = _databinding_read_data_bool_from_parent(iVar3, func_1565());
				if (bVar4)
				{
					iVar2 = _databinding_read_data_int_from_parent(iVar3, func_1566());
					iVar5 = iVar2;
					if (_0x93ffd92f05ec32fd(iVar5))
					{
						_0x13e7320c762f0477(iVar5);
						_databinding_write_data_int_from_parent(iVar3, func_1566(), -1);
					}
				}
			}
			iVar1++;
		}
		uParam0->f_2207.f_80 = 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_1103(var uParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1374(uParam0);
	if (!does_entity_exist(iVar0) || is_entity_dead(iVar0))
	{
		return 0;
	}
	if (!func_1567(0))
	{
		return 0;
	}
	func_602(iVar0, 1);
	func_229(iVar0, 1, bParam1, iParam2);
	return 1;
}

void func_1104(var uParam0)
{
	uParam0->f_2207.f_49 = 0;
	_0xdad7fb8402651654();
}

int func_1105(var uParam0)
{
	uParam0->f_2755 = 0;
	uParam0->f_2755.f_1 = 0;
	func_1568(uParam0, 128);
	func_421(&(uParam0->f_2755.f_3), 1, 1);
	func_421(&(uParam0->f_2755.f_4), 1, 1);
	func_421(&(uParam0->f_2755.f_5), 1, 1);
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
		func_962(iVar0, uParam0->f_176.f_1857, uParam0->f_176.f_1860, 2, 1073741824);
	}
	return 1;
}

void func_1106(var uParam0)
{
	if (func_358(uParam0->f_2207.f_101))
	{
		func_421(&(uParam0->f_2207.f_101), 1, 1);
	}
	func_1569(0);
}

void func_1107(var uParam0)
{
	if (func_358(uParam0->f_2207.f_102))
	{
		func_421(&(uParam0->f_2207.f_102), 1, 1);
	}
}

void func_1108(bool bParam0)
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
		if (!func_1570(Global_1915715->f_23051.f_1))
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

void func_1109()
{
	Global_1915715->f_21859 = 0;
}

void func_1110(int iParam0)
{
	if (Global_1071686->f_8 == iParam0)
	{
		return;
	}
	Global_1071686->f_8 = iParam0;
}

void func_1111()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

void func_1112(var uParam0, int iParam1)
{
	if (func_520(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

int func_1113()
{
	return func_1571(&(Global_1952637->f_1675));
}

int func_1114(int iParam0)
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
	if (!func_889(iVar0, 0))
	{
		return 0;
	}
	return iVar0;
}

int func_1115(int iParam0)
{
	Var0.f_1 = 39;
	func_1572(&Var0, 0, 1, 1, 0);
	iVar120 = func_821(iParam0);
	if (!func_661(&Var0, &uVar119, iParam0, iVar120, 1, 0, 0, 0, 8))
	{
		return -1;
	}
	return func_1571(&Var0);
}

void func_1116(int iParam0)
{
	Global_1904651->f_8684 = iParam0;
}

void func_1117(var uParam0)
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

void func_1118(int iParam0, int iParam1)
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

bool func_1119(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1120()
{
	return func_1573() > 11;
}

void func_1121(bool bParam0)
{
	iVar0 = player_id();
	bVar1 = false;
	if (network_is_game_in_progress())
	{
		bVar1 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)) == iVar0;
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_360)) && (bParam0 || bVar1))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_360 = { Var2 };
}

void func_1122()
{
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
}

bool func_1123(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_1148();
	}
	else if (iParam0 == func_1148())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

void func_1124(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_587(&(Global_1194053->f_3), 32);
		func_587(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_587(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_587(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_587(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_587(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_587(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

void func_1125()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

void func_1126(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_1127()
{
	if (Global_1572887->f_106.f_91)
	{
		return;
	}
	Global_1572887->f_106.f_91 = 1;
	_0x4c08d2b6d8be17e4(Global_1572887->f_106.f_91.f_1, Global_1572887->f_106.f_91.f_2, Global_1572887->f_106.f_91.f_3, Global_1572887->f_106.f_91.f_4, Global_1572887->f_106.f_91.f_5, &(Global_1572887->f_106.f_91.f_6));
}

int func_1128(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0 && Global_1131196[iVar0] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1129()
{
	Var3 = { func_1574(0) };
	if (Var3.f_8 != -1838434463)
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

int func_1130(vector3 vParam0, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_1574(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_1575(-1230526146, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

void func_1131(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1133(int iParam0)
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

int func_1134(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_893(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_894(iParam0, 1399091007))
	{
		func_1325(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1135(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1172(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1576(&Var0, func_1273(0));
	}
	if (!func_1173(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1179(iVar14);
	return uVar15;
}

int func_1136(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

struct<4> func_1137(int iParam0, bool bParam1)
{
	Var0 = { func_831(iParam0, bParam1, 0) };
	return func_667(iParam0, Var0, Var0.f_4, bParam1);
}

void func_1138(var uParam0, int iParam1)
{
	uParam0->f_3.f_9 = (uParam0->f_3.f_9 + iParam1);
	reserve_network_mission_peds(uParam0->f_3.f_9);
}

void func_1139(var uParam0, int iParam1)
{
	uParam0->f_3.f_9 = (uParam0->f_3.f_9 - iParam1);
	reserve_network_mission_peds(uParam0->f_3.f_9);
}

void func_1140(var uParam0, int iParam1)
{
	uParam0->f_13.f_6 = (uParam0->f_13.f_6 + iParam1);
	reserve_network_mission_vehicles(uParam0->f_13.f_6);
}

void func_1141(var uParam0, int iParam1)
{
	uParam0->f_13.f_6 = (uParam0->f_13.f_6 - iParam1);
	reserve_network_mission_vehicles(uParam0->f_13.f_6);
}

void func_1142(var uParam0, int iParam1)
{
	uParam0->f_20.f_12 = (uParam0->f_20.f_12 + iParam1);
	reserve_network_mission_objects(uParam0->f_20.f_12);
}

void func_1143(var uParam0, int iParam1)
{
	uParam0->f_20.f_12 = (uParam0->f_20.f_12 - iParam1);
	reserve_network_mission_objects(uParam0->f_20.f_12);
}

bool func_1144(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

bool func_1145(int iParam0)
{
	if ((iParam0 == 1493442814 || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return true;
	}
	return false;
}

bool func_1146(int iParam0)
{
	return iParam0 == -1005911451;
}

int func_1147(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 2)
	{
		iParam5 = func_1577(2);
	}
	iVar0 = player_ped_id();
	if (func_1578(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				play_sound_frontend("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				play_sound_frontend("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1579(iParam0, 7000, iParam5);
		}
		func_1580(iVar0, iParam0, fParam1);
		func_1581(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_1148()
{
	return Global_1102219->f_3672;
}

bool func_1149(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

int func_1150(int iParam0)
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

void func_1151(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_1152(var uParam0)
{
	*uParam0 = { Var0 };
}

bool func_1153(var uParam0, int iParam1)
{
	func_1572(uParam0, -1, 1, 1, 0);
	iVar0 = 16;
	iVar1 = 34;
	iVar2 = func_1582(Global_1952637->f_83[iVar1]->f_9, 0);
	iVar3 = func_1582(Global_1952637->f_83[iVar0]->f_9, 0);
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
		if (func_123() == 24043185)
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

bool func_1154(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1583(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1584(2, iParam1))
	{
		func_1585(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_1155(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	iVar11 = 0;
	Var4 = func_1158(iParam6);
	Var4.f_1 = iParam1;
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
		func_1572(uParam0, func_1586(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_1279(-1);
		}
		if (_0x44b3a36933ac009c(&iVar0, &Var4, -1212855483))
		{
			iVar11 = func_1586(iVar0);
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
			iVar1 = func_833(iVar3, 1);
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
					func_845(iVar3, 16, 6);
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
							if (func_1587(iVar3) && func_1588(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1589(uParam0, iVar11, func_1185(iParam1) != 0, iParam9);
						}
					}
					else if ((((func_123() == 24043185 && &uParam0->f_1[iVar1] == &Global_1952637->f_83[iVar1]) && func_1185(&(uParam0->f_1[34])) == 0) && !func_604(32)) && !func_604(64))
					{
						uParam0->f_1[iVar1] = func_1582(-1293064293, 0);
						uParam0->f_1[iVar1]->f_1 = 1155669136;
						func_1281(uParam0, &(uParam0->f_1[iVar1]), iVar1, 0, iParam9);
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

void func_1156(int iParam0)
{
	func_846(iParam0, 8, 6);
}

void func_1157(int iParam0)
{
	Global_1952637->f_1057 = iParam0;
}

int func_1158(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_123();
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

void func_1159(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1160()
{
	return Global_17411.f_55.f_644.f_1777;
}

void func_1161()
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

void func_1162(int iParam0, bool bParam1, int iParam2)
{
	func_1590(&(Global_1952637->f_1556), iParam0);
	func_1591(2, iParam0, 6);
	if (bParam1)
	{
		func_605(0, 1);
	}
}

void func_1163(int iParam0, var uParam1, int iParam2, int iParam3)
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

bool func_1164(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1952637->f_83[iParam0]->f_10 && iParam1) != 0;
}

void func_1165(var uParam0, int iParam1)
{
	_set_ped_component_enabled(iParam1, *uParam0, false, true, false);
	if (uParam0->f_1 != 0)
	{
		_0x66b957aac2eaaeab(iParam1, *uParam0, uParam0->f_1, 0, 1, 1);
	}
}

struct<4> func_1166()
{
	return Var0;
}

int func_1167(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_1168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4074;
		case 1:
			return 4075;
		case 2:
			return 4076;
		case 3:
			return 4077;
		case 4:
			return 4078;
		case 5:
			return 4079;
		case 6:
			return 4080;
		case 7:
			return 4081;
		case 8:
			return 4082;
		case 9:
			return 4083;
		default:
			break;
	}
	return 4073;
}

int func_1169(int iParam0)
{
	if (iParam0 == -358215195 || iParam0 == 0)
	{
		return 0;
	}
	return (Global_1952637->f_83[func_833(iParam0, 1)])->f_9;
}

int func_1170(int iParam0)
{
	switch (iParam0)
	{
		case 1108822547:
			return 4085;
		case 1250092473:
			return 4086;
		case 788010710:
			return 4087;
		case -1944638739:
			return 4088;
		case 1900541263:
			return 4089;
		case -893163968:
			return 4090;
		case -1197751823:
			return 4091;
		case -450913544:
			return 4092;
		case 1145151482:
			return 4093;
		case -207860920:
			return 4094;
		default:
			break;
	}
	return 4084;
}

int func_1171(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_1592(&uParam0, bParam4, bParam5, iParam6);
}

struct<14> func_1172(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_1173(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_886(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1174(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1175(int iParam0)
{
	return &(Global_1952637->f_1675.f_1[func_833(iParam0, 1)]);
}

int func_1176(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1277(*uParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_893(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1593(*uParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1594(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_1595(*uParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1596(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_1597(*uParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1598(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1599(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1600(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1177(int iParam0, int iParam1, int iParam2)
{
	if (func_123() == 2026485318)
	{
		switch (func_841(iParam0, 1))
		{
			case -1889597427:
				return true;
			case -1292426046:
				return true;
			case 1422688607:
				return true;
			case 389988485:
				return true;
			case -207860920:
			case 788010710:
				if (func_778(-55206167, func_666(1), -1990194462, 1, 0, 0) >= 5)
				{
					return true;
				}
				return false;
			default:
				break;
		}
		return false;
	}
	switch (func_841(iParam0, 1))
	{
		case -1889597427:
			return true;
		case -1292426046:
			return true;
		case 1422688607:
			return true;
		case 389988485:
			return true;
		case -450913544:
		case -207860920:
		case 788010710:
		case 1250092473:
			if (iParam0 == 16)
			{
				iVar0 = func_1185(iParam1);
				if (iVar0 != 0)
				{
					return false;
				}
				if (func_947(iParam2) == 912453393 && !func_836(iParam2, 0))
				{
					return false;
				}
				if (func_947(iParam1) == -1740828670 || func_947(iParam1) == 344283346)
				{
					return false;
				}
			}
			else if (iParam0 == 18)
			{
				if (func_947(iParam2) != 912453393 || func_836(iParam2, 0))
				{
					return false;
				}
			}
			if (func_778(-55206167, func_666(1), -1990194462, 1, 0, 0) >= 5)
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

var func_1178(int iParam0)
{
	return &(Global_1952637->f_83[func_833(iParam0, 1)]);
}

int func_1179(int iParam0)
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

int func_1180(int iParam0)
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

bool func_1181(int iParam0, var uParam1)
{
	return (Global_1952637->f_2843.f_3[iParam0] && uParam1) != 0;
}

void func_1182(int iParam0, var uParam1)
{
	Global_1952637->f_2843.f_3[iParam0] = (&Global_1952637->f_2843.f_3[iParam0] - (Global_1952637->f_2843.f_3[iParam0] && uParam1));
}

void func_1183(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_1601(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_1184(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1185(int iParam0)
{
	if (!func_889(iParam0, 0))
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

int func_1186(int iParam0)
{
	Var2 = -961687407;
	if (func_89() == -1)
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
	iVar1 = func_1602(iParam0);
	func_1603(iVar0, iVar1);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var2, -2008906477))
		{
		}
		else
		{
			func_1603(iVar0, iVar1);
		}
	}
	return 1;
}

int func_1187(int iParam0)
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

bool func_1188(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1189(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_1190(int iParam0)
{
	if (iParam0 == -1713496139)
	{
		return 1687431937;
	}
	else if (func_894(iParam0, -779797157))
	{
		return 129780002;
	}
	else if (func_894(iParam0, -1082418872))
	{
		return -25348444;
	}
	else if (func_894(iParam0, -724253702))
	{
		return -1551826771;
	}
	else
	{
		return 1661173679;
	}
	return 1687431937;
}

int func_1191(var uParam0, int iParam1)
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

int func_1192(int iParam0)
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

int func_1193(var uParam0, var uParam1, int iParam2)
{
	iVar0 = func_1191(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	_remove_ped_overlay(*uParam0, (*uParam1)[iVar0]->f_2);
	func_1194(uParam0, uParam1, iVar0);
	return 1;
}

void func_1194(var uParam0, var uParam1, int iParam2)
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

bool func_1195(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = 459292749;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	_0x91ded5dd64bb2691(&Var0);
	if (!func_1604(&Var0, uParam0, 0, iParam4))
	{
		return false;
	}
	*uParam0 = iParam1;
	if (bParam2)
	{
		func_1605(uParam0, bParam3);
	}
	return true;
}

void func_1196(var uParam0, var uParam1, var uParam2)
{
	if ((!func_1188(uParam0, 1) || func_1188(uParam0, 2)) || uParam0->f_6 < 0)
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
		func_1606(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1191(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*(*uParam1)[uParam0->f_6] = { *uParam2 };
			uParam0->f_6++;
			func_1607(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = (*uParam1)[iVar0]->f_2;
			*(*uParam1)[iVar0] = { *uParam2 };
			func_1608(uParam0, (*uParam1)[iVar0], 1);
		}
	}
}

int func_1197(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1195(&Var0, iParam2, bParam3, bParam4, 6))
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

bool func_1198(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_886(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1199()
{
	return Global_1109804->f_5737.f_632;
}

int func_1200(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1200(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > &Global_1109804->f_5737.f_451[iVar0])
	{
		return func_1200(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_1201(int iParam0)
{
	return Global_1109804->f_5737.f_451[iParam0]->f_1;
}

int func_1202(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_1609(uParam0, &uVar0, uParam2, 0, 0, *uParam3))
	{
		return 0;
	}
	func_1610(uParam1, uParam2, *uParam0, uParam0->f_2, *uParam3, player_id(), 0, 0);
	return 1;
}

bool func_1203(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1144(iParam1))
	{
		return false;
	}
	*uParam0 = obj_to_net(create_object(iParam1, vParam2, true, bParam5, false, false, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam5)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_1204(var uParam0, int iParam1)
{
	iVar0 = net_to_ent(&(uParam0->f_20[iParam1]));
	switch (iParam1)
	{
		case 2:
			freeze_entity_position(iVar0, true);
			break;
	}
}

bool func_1205(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1611(iParam1))
	{
		return false;
	}
	*uParam0 = _0x74f99ef7ef503398(_create_propset(iParam1, vParam2, iParam6, fParam5, fParam8, true, true));
	if (network_does_network_id_exist(*uParam0))
	{
		if (bParam7)
		{
			set_network_id_exists_on_all_machines(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_1206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(*iParam1, false, false))
	{
		return false;
	}
	if (get_ped_in_vehicle_seat(*iParam1, iParam2) != *iParam0)
	{
		if (!is_vehicle_seat_free(*iParam1, iParam2))
		{
			if (iParam3 && func_1612(*iParam1))
			{
				iParam2 = func_1613(*iParam1);
			}
			else
			{
				return false;
			}
		}
		if (is_ped_on_mount(*iParam0))
		{
			_remove_ped_from_mount(*iParam0, true, false);
		}
		set_ped_into_vehicle(*iParam0, *iParam1, iParam2);
	}
	return true;
}

bool func_1207(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return true;
}

bool func_1208(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1614(iVar0))
		{
			return false;
		}
	}
	func_1615();
	return true;
}

bool func_1209(bool bParam0)
{
	iVar0 = _0xb9050a97594c8832(player_id());
	if (!does_entity_exist(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1614(iVar0))
		{
			return false;
		}
	}
	func_1616();
	return true;
}

void func_1210(bool bParam0)
{
	if (!func_616(101))
	{
		return;
	}
	if (func_616(102))
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
	func_617(102);
}

bool func_1211(int iParam0)
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

bool func_1212(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1144(iParam2))
	{
		return false;
	}
	if (network_does_network_id_exist(iParam1))
	{
		iVar0 = net_to_veh(iParam1);
		iVar1 = func_1617(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
		*uParam0 = ped_to_net(iVar1);
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam5)
			{
				_0x899a04afcc725d04(iVar1, _0xd42514c182121c23(iParam2));
			}
			if (bParam6)
			{
				set_ped_relationship_group_hash(iVar1, _get_default_relationship_group_hash(iParam2));
			}
			set_ped_random_component_variation(iVar1, 0);
			if (bParam4)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_1213(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1144(iParam2))
	{
		return false;
	}
	if (network_does_network_id_exist(iParam1))
	{
		iVar0 = net_to_ped(iParam1);
		iVar1 = func_1618(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = ped_to_net(iVar1);
		if (network_does_network_id_exist(*uParam0))
		{
			if (bParam5)
			{
				_0x899a04afcc725d04(iVar1, _0xd42514c182121c23(iParam2));
			}
			if (bParam6)
			{
				set_ped_relationship_group_hash(iVar1, _get_default_relationship_group_hash(iParam2));
			}
			set_ped_random_component_variation(iVar1, 0);
			if (bParam4)
			{
				set_network_id_exists_on_all_machines(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_1214(var uParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1144(iParam1))
	{
		return false;
	}
	iVar0 = func_1619(iParam1, vParam2, uParam5, iParam8, 1, bParam6, bParam7, bParam9);
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

void func_1215(var uParam0, var uParam1, int iParam2)
{
	iVar0 = net_to_ped(&(uParam0->f_3[iParam2]));
	set_blocking_of_non_temporary_events(iVar0, true);
	set_entity_invincible(iVar0, true);
	set_ped_relationship_group_hash(iVar0, uParam1->f_1348.f_15);
	_0xae6004120c18df97(iVar0, 0, 0);
	set_ped_can_be_targetted(iVar0, false);
	if (uParam1->f_4926.f_182[iParam2]->f_2 == 0)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	else
	{
		_set_ped_body_component(iVar0, uParam1->f_4926.f_182[iParam2]->f_2);
	}
	switch (iParam2)
	{
		case 0:
			set_ped_config_flag(iVar0, 390, true);
			set_ped_config_flag(iVar0, 259, true);
			func_1620(iVar0, 6f, 0f, 0f, 0f, 0f, 0f, 0f);
			set_ped_can_use_auto_conversation_lookat(iVar0, true);
			_give_weapon_to_ped_2(iVar0, 2075992054, 20, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			task_swap_weapon(iVar0, 1, 0, 0, 0);
			func_1621(iVar0, 0);
			break;
		case 1:
			_0x641351e9ad103890(iVar0, 1);
			set_ped_can_use_auto_conversation_lookat(iVar0, true);
			set_ped_config_flag(iVar0, 390, true);
			set_ped_config_flag(iVar0, 259, true);
			if (network_does_network_id_exist(&(uParam0->f_3[5])))
			{
				_0x931b241409216c1f(iVar0, net_to_ped(&(uParam0->f_3[5])), 0);
			}
			func_1620(iVar0, 6f, 0f, 0f, 0f, 0f, 0f, 0f);
			func_1621(iVar0, 0);
			break;
		case 2:
			set_ped_config_flag(iVar0, 259, true);
			func_1620(iVar0, 6f, 0f, 0f, 0f, 0f, 0f, 0f);
			func_1621(iVar0, 0);
			break;
		case 4:
			_0xae6004120c18df97(iVar0, 0, 0);
			set_ped_can_use_auto_conversation_lookat(iVar0, true);
			stop_ped_speaking(iVar0, true);
			_0x67e21acc5c0c970c(iVar0, 16, 0);
			_0x67e21acc5c0c970c(iVar0, 9, 0);
			_0x67e21acc5c0c970c(iVar0, 18, 0);
			_0x67e21acc5c0c970c(iVar0, 10, 0);
			_give_weapon_to_ped_2(iVar0, 2075992054, 20, false, true, 2, false, 0.5f, 1f, 752097756, false, 0f, false);
			set_current_ped_weapon(iVar0, -1569615261, false, 0, false, false);
			set_ped_config_flag(iVar0, 13, true);
			set_ped_config_flag(iVar0, 26, true);
			set_ped_config_flag(iVar0, 223, true);
			set_ped_config_flag(iVar0, 274, true);
			set_ped_config_flag(iVar0, 259, true);
			set_ped_config_flag(iVar0, 422, true);
			set_ped_config_flag(iVar0, 6, true);
			_0x6569f31a01b4c097(iVar0, 1, 0);
			_0x6569f31a01b4c097(iVar0, 0, 1);
			_0x6569f31a01b4c097(iVar0, 7, 1);
			_0x6569f31a01b4c097(iVar0, 9, 1);
			func_1621(iVar0, 1805529222);
			_0xae6004120c18df97(iVar0, 0, 0);
			_0xae6004120c18df97(iVar0, 1, 0);
			func_1620(iVar0, 6f, 0f, 0f, 0f, 0f, 0f, 0f);
			break;
		case 5:
			_0xba8818212633500a(iVar0, 0, 1);
			_0xf74e134f40192884(iVar0, 1);
			set_ped_config_flag(iVar0, 208, true);
			set_ped_config_flag(iVar0, 209, true);
			set_ped_config_flag(iVar0, 277, true);
			set_ped_config_flag(iVar0, 6, true);
			set_ped_config_flag(iVar0, 324, true);
			if (network_does_network_id_exist(&(uParam0->f_3[1])))
			{
				_0x931b241409216c1f(net_to_ped(&(uParam0->f_3[1])), iVar0, 0);
			}
			break;
		default:
			break;
	}
	_update_ped_variation(iVar0, false, true, true, true, false);
}

bool func_1216(int iParam0, int iParam1)
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

void func_1217(var uParam0)
{
	vVar0.f_1 = -2128726980;
	vVar0.f_2 = -1;
	*uParam0 = { vVar0 };
}

void func_1218(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
}

float func_1220(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1577(2);
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

int func_1221(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_ped_facing_ped(iParam0, iParam1, fParam2))
	{
		return 1;
	}
	if (!func_757(iParam0, -875674219))
	{
		task_turn_ped_to_face_entity(iParam0, iParam1, 0, -1082130432, -1082130432, -1082130432);
	}
	return 0;
}

bool func_1222()
{
	return _0xa2cac9def0195e6f(1);
}

void func_1223(int iParam0)
{
	if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
	{
		waypoint_playback_use_default_speed(iParam0);
	}
}

bool func_1224(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	if (!get_is_waypoint_recording_loaded(sParam1))
	{
		return false;
	}
	if (!waypoint_recording_get_num_points(sParam1, &iVar0))
	{
		return false;
	}
	if (iParam2 < 0)
	{
		if (func_1037(iParam4, 131072))
		{
			iVar4 = 0;
		}
		else
		{
			iVar4 = (iVar0 - 1);
		}
	}
	else if (iVar4 > iVar0)
	{
		return false;
	}
	if (!waypoint_recording_get_coord(sParam1, iVar4, &vVar1))
	{
		return false;
	}
	if (func_338(get_entity_coords(iParam0, true, false), vVar1) <= fParam3)
	{
		return true;
	}
	if (is_waypoint_playback_going_on_for_ped(iParam0, sParam1))
	{
		if (waypoint_playback_get_is_paused(iParam0))
		{
			waypoint_playback_resume(iParam0, false, -1, 0);
		}
	}
	if (!func_757(iParam0, 658540077))
	{
		Var5.f_2 = -1;
		Var5.f_7 = -1;
		Var5.f_8 = -1082130432;
		Var5.f_12 = -1082130432;
		Var5.f_13 = 1;
		Var5.f_14 = -1082130432;
		Var5 = sParam1;
		Var5.f_2 = iVar4;
		Var5.f_9 = iParam5;
		Var5.f_3 = iParam4;
		Var5.f_7 = 60000;
		Var5.f_8 = 3f;
		task_follow_waypoint_recording_advanced(iParam0, &Var5);
	}
	return false;
}

bool func_1225(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sParam2))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam1, true, false) };
	if (func_1622(iParam0, vVar0, sParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_1226(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_276(iParam0, iParam1, bParam2))
	{
		return 1;
	}
	if (!func_757(iParam0, 1868526510))
	{
		task_mount_animal(iParam0, iParam1, -1, -1, iParam3, iParam4, 0, 0);
	}
	return 0;
}

bool func_1227(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 23)
	{
		return false;
	}
	return _0xf01c570e0a0a1e67(func_881(iParam0));
}

void func_1228(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 23)
	{
		return;
	}
	if (_0xf01c570e0a0a1e67(func_881(iParam0)))
	{
		restart_scripted_conversation(func_881(iParam0));
	}
}

void func_1229(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 <= -1 || iParam0 >= 23)
	{
		return;
	}
	if (func_1623(func_881(iParam0)))
	{
		pause_scripted_conversation(func_881(iParam0), bParam1, bParam2, bParam4, bParam3);
	}
}

Vector3 func_1230(char* sParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (waypoint_recording_get_num_points(sParam0, &iVar4))
	{
		waypoint_recording_get_coord(sParam0, (iVar4 - 1), &vVar0);
	}
	if (func_209(vVar0))
	{
		return vVar0;
	}
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		vVar0.f_2 = uVar3;
	}
	return vVar0;
}

bool func_1231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (iParam3 <= -1 || iParam3 >= 5)
	{
		return false;
	}
	if (!_does_scenario_point_exist(&(uParam0->f_35[iParam3])))
	{
		return false;
	}
	if (_0x9c54041bb66bcf9e(iParam1, &(uParam0->f_35[iParam3])) || _0x9c54041bb66bcf9e(iParam2, &(uParam0->f_35[iParam3])))
	{
		return true;
	}
	if (get_ped_reset_flag(iParam1, 236))
	{
		return false;
	}
	if (!func_757(iParam1, -850912737))
	{
		task_hitch_animal(iParam1, &(uParam0->f_35[iParam3]), iParam4);
	}
	return false;
}

void func_1232(int iParam0, var uParam1, var uParam2, var uParam3, char* sParam4, char* sParam5, float fParam6, var uParam7, int iParam8, int iParam9, char* sParam10)
{
	if (((func_358(*uParam2) && func_358(*uParam3)) || !does_entity_exist(*uParam1)) || !func_418(iParam0, 0))
	{
		return;
	}
	set_ped_config_flag(iParam0, 308, true);
	set_ped_config_flag(iParam0, 364, true);
	set_ped_config_flag(iParam0, 308, true);
	set_ped_can_be_targetted(get_ped_index_from_entity_index(*uParam1), true);
	func_1624(*uParam1, sParam10, fParam6, 0, 0, uParam7);
	set_ped_config_flag(get_ped_index_from_entity_index(*uParam1), 130, true);
	set_ped_config_flag(get_ped_index_from_entity_index(*uParam1), 315, true);
	set_ped_config_flag(get_ped_index_from_entity_index(*uParam1), 297, true);
	if (!func_358(*uParam2))
	{
		*uParam2 = func_1625(sParam4, iParam8, *uParam1, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1626(uParam2, *uParam1);
	}
	if (!func_358(*uParam3))
	{
		*uParam3 = func_1625(sParam5, iParam9, *uParam1, 1, 0, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
		func_1626(uParam3, *uParam1);
	}
	if (func_358(*uParam2))
	{
		func_1627(*uParam3, 0, 1);
		func_363(*uParam2, 1, 1);
		func_744(*uParam2, 1, 1, 1);
	}
	if (func_358(*uParam3))
	{
		func_1627(*uParam3, 0, 1);
		func_363(*uParam3, 1, 1);
		func_744(*uParam3, 1, 1, 1);
	}
}

void func_1233(bool bParam0)
{
	if (bParam0)
	{
		func_1628(4);
	}
	func_1628(2);
	set_bit(&(Global_1957959->f_1), 0);
}

bool func_1234(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1951255)[iParam0]->f_1 && iParam1) != 0;
}

bool func_1235(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = create_itemset(false);
	if (!is_itemset_valid(iVar0))
	{
		return false;
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
		iVar2 = func_1629(iVar9);
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
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

int func_1236()
{
	return Global_1903136->f_379;
}

int func_1237(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1630(vVar3, vVar6);
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
	if (func_1631(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_1238(int iParam0)
{
	return func_1632(iParam0) + 30;
}

bool func_1239(int iParam0, int iParam1)
{
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_0xde0ea444735c1368(iParam1))
	{
		_0x19c7567d2f2287d6(iParam1, 15);
	}
	if (_0xe9b168527b337bf0(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_1240(int iParam0)
{
	return iParam0 != 0;
}

bool func_1241(int* iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	if (func_1633(&uParam1) == 2)
	{
		return true;
	}
	iVar0 = get_number_of_events(1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = get_event_at_index(1, iVar2);
		if (iVar1 != 1741908893)
		{
		}
		else if (!get_event_data(1, iVar2, iParam0, 12))
		{
		}
		else if (iParam0->f_5 != iParam5)
		{
		}
		else
		{
			if (iParam0->f_4 == 1)
			{
				return true;
			}
			if (!func_1634(&uParam1, iParam0))
			{
			}
			else if (iParam0->f_4 == 0)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1242(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!_cashinventory_is_session_ready())
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iParam0))
	{
		return true;
	}
	if (bParam7)
	{
		bVar0 = (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(player_id())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())));
		bParam7 = bVar0;
	}
	_0xc08aff658b2e51da(&iVar1);
	if (iVar1 != 0)
	{
		func_1635(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!_0x64a36ba85ce01a81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return false;
		}
	}
	else if (!_0x7a8e8df782b47eb0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return false;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1636(uParam1, iParam0, Var3);
	return true;
}

int func_1243(bool bParam0, bool bParam1, bool bParam2)
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

bool func_1244(int iParam0)
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

void func_1245(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_1246(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_1247(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_1248(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_1249(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_1250(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_1251(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

void func_1252(var uParam0, struct<2> Param1, bool bParam3)
{
	func_1637(uParam0, 84);
	if (!func_1509(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_789(Param1))
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
		func_1034(&(Global_1139381->f_4796), 1);
	}
	func_1521(&(Global_1139381->f_4796));
	func_1638(uParam0);
	func_1639();
	func_1511(0);
	Global_1139381->f_4796 = { *uParam0 };
	Global_1139381->f_4796.f_13 = { Param1 };
	Global_1139381->f_4796 = 1;
	if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[0]))
	{
		Var1 = { func_1640(0, 1, 0, -1) };
	}
	func_1644(&(Global_1139381->f_4796), func_1641(&Var1, 0), func_1642(&Var1, 0), -882137232, func_1643(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_108(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_1513();
		}
	}
	if (bParam3)
	{
		if (func_886(0) != 3)
		{
			func_177(1, uParam0->f_57);
			func_930(16777216);
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
		func_1645(&Var5);
		if (!func_648(115, 255))
		{
			func_1646();
		}
	}
	if (uParam0->f_3)
	{
		func_1647(uParam0);
		func_1648();
		func_1649(0);
	}
	if (uParam0->f_6)
	{
		func_1649(3);
	}
	if (uParam0->f_4)
	{
		func_1649(1);
		func_1650(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_1651(uParam0->f_25.f_3, 1);
		func_1652(uParam0->f_25.f_4, 1);
		func_1653(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_1654();
	}
	if (uParam0->f_5)
	{
		func_1649(2);
		func_1655(0, uParam0->f_25.f_6, 1);
		func_1655(2, uParam0->f_25.f_7, 1);
		func_1655(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_1649(4);
	}
	if (uParam0->f_12)
	{
		func_1649(5);
		func_1656(&(uParam0->f_34[0]), uParam0->f_34[0]->f_1, 0);
		func_1656(&(uParam0->f_34[1]), uParam0->f_34[1]->f_1, 1);
		func_1656(&(uParam0->f_34[2]), uParam0->f_34[2]->f_1, 2);
		func_1656(&(uParam0->f_34[3]), uParam0->f_34[3]->f_1, 3);
		func_1657();
	}
	if (uParam0->f_8)
	{
		func_1649(6);
		func_1517(Global_1956200->f_1565.f_117);
	}
	else if (uParam0->f_4)
	{
		func_1517(Global_1956200->f_1549);
	}
	else if (bParam3)
	{
		func_1517(Global_1956200->f_1549);
	}
}

bool func_1253(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_1254(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = -1;
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	if (!func_614(2, iParam2))
	{
		return false;
	}
	*iParam0 = (*Global_1291106)[iParam2]->f_9;
	*iParam1 = (*Global_1291106)[iParam2]->f_10;
	return true;
}

void func_1255(var uParam0, var uParam1)
{
	*uParam0 = 46;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	if (!_network_is_player_index_valid(uParam0->f_1))
	{
		return;
	}
	trigger_script_event(1, uParam0, 10, 1, &uParam1);
}

int func_1256(int iParam0)
{
	if (!func_447(iParam0))
	{
		return -1;
	}
	return &(Global_1211206->f_1[iParam0]);
}

int func_1257(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900806 - 1))
	{
		if (func_1658(*(*Global_1900807)[iVar0], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1258(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_1259(int iParam0, int iParam1)
{
	return (func_1258(iParam0) && ((*Global_1900838)[iParam0]->f_1 && iParam1) != 0);
}

void func_1260(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_789(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_1471(Param0) && !func_1659(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_1000(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_1660(Param0) == 3)
		{
			func_1661(1, -1706799532);
		}
		else if (func_1660(Param0) == 4)
		{
			func_1661(0, -1706799532);
		}
	}
	if ((func_1660(Param0) == 3 || func_1660(Param0) == 1) || ((bParam5 && func_1660(Param0) == 4) && _0x01f4d242765c6b24(func_1000(Param0))))
	{
		if (iParam3 != -1)
		{
			func_472(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_472(Param0, 2, iParam4, 255, 0);
		}
	}
	func_1662(Param0, 0);
	if (func_1658(func_788(0), Param0))
	{
		func_629(1);
		func_1663(0);
		func_1664(0);
		func_1665(1);
	}
	func_1666(Param0);
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_998(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		_0x1096603b519c905f("");
	}
}

bool func_1261(int iParam0, float fParam1, int iParam2)
{
	if (func_777(32768))
	{
		return false;
	}
	iVar0 = func_89();
	if (func_1667(&((*Global_1835011)[iParam0]->f_30), 512) && !func_1667(&((*Global_1835011)[iParam0]->f_30), 1024))
	{
		if (func_1668())
		{
			return false;
		}
	}
	if ((*Global_1835011)[iParam0]->f_67)
	{
		return false;
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		bVar3 = (*Global_1835011)[iParam0]->f_66;
		if (func_1669(iParam0, iVar0))
		{
			vVar4 = { func_1670(iParam0) };
			(*Global_1835011)[iParam0]->f_65 = _create_volume_sphere(vVar4, 0f, 0f, 0f, 19f, 19f, 19f);
			if (_does_volume_exist((*Global_1835011)[iParam0]->f_65))
			{
				(*Global_1835011)[iParam0]->f_28 = _0xa6ef0c54a3443e70(1673015813, (*Global_1835011)[iParam0]->f_65);
			}
		}
		else if (bVar3)
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_1671(iParam0));
		}
		else
		{
			(*Global_1835011)[iParam0]->f_28 = _blip_add_for_coord(1673015813, func_1672(iParam0));
		}
		(*Global_1835011)[iParam0]->f_29 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2)
			{
				func_1673(iParam2, 4194304);
			}
			else
			{
				func_1263(iParam2, 4194304);
			}
		}
		set_blip_flash_timer((*Global_1835011)[iParam0]->f_28, 71, (*Global_1835011)[iParam0]->f_3);
	}
	if (!does_blip_exist((*Global_1835011)[iParam0]->f_28))
	{
		return false;
	}
	func_1674(iParam0);
	if (bVar1)
	{
		set_blip_sprite((*Global_1835011)[iParam0]->f_28, (*Global_1835011)[iParam0]->f_27, true);
		if (iVar0 != -1)
		{
			_set_blip_name_from_player_string((*Global_1835011)[iParam0]->f_28, &((*Global_1835011)[iParam0]->f_42));
		}
		if (!func_1667(&((*Global_1835011)[iParam0]->f_30), 1024))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 580546400);
			func_1675(&((*Global_1835011)[iParam0]->f_30), 1024);
		}
		if (func_1667(&((*Global_1835011)[iParam0]->f_30), 524288))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -401963276);
		}
		if (func_1667(&((*Global_1835011)[iParam0]->f_30), 1048576))
		{
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, -1878373110);
			_blip_set_modifier((*Global_1835011)[iParam0]->f_28, 231194138);
		}
	}
	return true;
}

void func_1262(struct<2> Param0)
{
	if (&Global_1900806 <= 0)
	{
		return;
	}
	if (!func_789(Param0))
	{
		return;
	}
	if (func_1659(Param0))
	{
		func_1260(Param0, 0, -1, 0, 0);
	}
	iVar0 = func_1257(Param0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1900806 > 1)
	{
		*(*Global_1900807)[iVar1] = { *((*Global_1900807)[(&Global_1900806 - 1)]) };
		*(*Global_1900838)[iVar1] = { *((*Global_1900838)[(&Global_1900806 - 1)]) };
		func_467((*Global_1900807)[(&Global_1900806 - 1)]);
		*((*Global_1900838)[(&Global_1900806 - 1)]) = { Var2 };
	}
	else
	{
		func_467((*Global_1900807)[iVar1]);
		*(*Global_1900838)[iVar1] = { Var2 };
	}
	Global_1900806 = (&Global_1900806 - 1);
	if (&Global_1900806 < 0)
	{
		Global_1900806 = 0;
	}
}

void func_1263(int iParam0, int iParam1)
{
	if (!func_1258(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 - ((*Global_1900838)[iParam0]->f_1 && iParam1));
}

void func_1264()
{
}

var func_1265()
{
	Global_1293346->f_458.f_1552++;
	if (Global_1293346->f_458.f_1552 >= 2147483646)
	{
		Global_1293346->f_458.f_1552 = 0;
	}
	return Global_1293346->f_458.f_1552;
}

void func_1266(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			*Global_1293346->f_458.f_44[func_1676()] = { Param0 };
			func_1677((func_1676() + 1 % 40));
			Global_1293346->f_458.f_1546++;
			break;
		case 1:
			*Global_1293346->f_458.f_1245[func_1678()] = { Param0 };
			func_1679((func_1678() + 1 % 10));
			Global_1293346->f_458.f_1547++;
			break;
	}
}

bool func_1267(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_375(0))
	{
		return func_1176(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1277(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_886(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_1268(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 3;
	}
	if (uParam1->f_1 == 0)
	{
		return 3;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!_0xb0b2c6d170b0e8e5(&(uParam1->f_135[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 2;
}

bool func_1269(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_778(iParam0, *uParam1, bParam2, bParam3, 1, bParam4) > 0;
}

bool func_1270(int iParam0, var uParam1, bool bParam2)
{
	if (func_1680(iParam0, &uVar0, uParam1, bParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_1271(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1681(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1277(*uParam1, &Var0, bParam6, 0, -1))
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
	if (!func_375(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_89() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1600(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_1682(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_886(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1272(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar2 = func_335(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_34, iParam0, iVar2);
		if (get_max_ammo(Global_34, &iVar1, iParam0) && get_ammo_in_ped_weapon(Global_34, iParam0) > iVar1)
		{
			set_ped_ammo(Global_34, iParam0, iVar1);
		}
	}
}

struct<4> func_1273(bool bParam0)
{
	iVar0 = func_886(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_667(923904168, func_666(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_667(923904168, func_666(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_667(923904168, func_666(bParam0), -740156546, 0);
}

bool func_1274(int iParam0, bool bParam1)
{
	if (func_947(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_1683();
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1275(bool bParam0)
{
	iVar0 = func_886(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_667(271701509, func_666(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_667(271701509, func_666(bParam0), 12999093, 0);
}

bool func_1276(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_947(iParam0);
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
			if (func_1684(iParam0, iParam1, bVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1277(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1685(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_1278(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_947(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_948(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_1686(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_1279(int iParam0)
{
	func_1687(&(Global_1952637->f_2897), iParam0);
}

void func_1280(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1281(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_836(iVar0, 1);
	if (bParam3 && func_894(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_1688(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_841(iParam2, 1))
	{
		case -1130352927:
			func_1689(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_1690(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_1691(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_1692(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_1693(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_1694(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_1695(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_1696(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_1697(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_1698(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_1699(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_1700(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_1701(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_1702(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_1703(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_1704(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_1282(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_123() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_1705(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_1588(iParam0, func_841(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1283(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_604(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1706(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_1584(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_894(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_1584(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_1162(-1, 0, 6);
			func_379(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_605(0, 1);
	}
}

void func_1284(var uParam0)
{
	if (func_41(uParam0, 256))
	{
		_0x3a9a281ff71249e9("RespawnPulseMP01", 500);
	}
}

var func_1285(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1286(var uParam0, var uParam1, var uParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			if (!network_does_network_id_exist(&(uParam0->f_3[1])))
			{
				return 0;
			}
			iVar1 = net_to_ped(&(uParam0->f_3[1]));
			if (does_entity_exist(iVar1))
			{
				iVar0 = _blip_add_for_entity(422991367, iVar1);
			}
			if (does_blip_exist(iVar0))
			{
				if (_0x354f689c4ffaab37(-448983936))
				{
					set_blip_name_from_text_file(iVar0, "DISCOVERABLE_NAME_HORLEY_MP");
				}
				else
				{
					set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_STRANGER");
				}
			}
			break;
		case 1:
			iVar1 = _0xf49f14462f0ae27c(uParam2->f_2);
			if (does_entity_exist(iVar1))
			{
				iVar0 = _blip_add_for_entity(-1230993421, iVar1);
			}
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_HORSE");
			}
			break;
		case 2:
			if (!network_does_network_id_exist(&(uParam0->f_20[8])))
			{
				return 0;
			}
			iVar2 = net_to_ent(&(uParam0->f_20[8]));
			if (does_entity_exist(iVar2))
			{
				iVar0 = _blip_add_for_entity(408396114, iVar2);
			}
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_TREASURE_MAP");
			}
			break;
		case 3:
			if (!func_251(uParam2, 61))
			{
				return 0;
			}
			if (_does_scenario_point_exist(&(uParam2->f_35[uParam2->f_1348.f_3458])))
			{
				iVar0 = _blip_add_for_coord(408396114, _get_scenario_point_coords(&(uParam2->f_35[uParam2->f_1348.f_3458]), true));
			}
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_HITCH");
			}
			break;
		case 4:
			iVar0 = _blip_add_for_coord(408396114, *uParam2->f_4926[0]);
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_WARDROBE");
			}
			break;
		case 5:
			if (!_does_volume_exist(&(uParam2->f_164[2])))
			{
				return 0;
			}
			iVar0 = _0xa6ef0c54a3443e70(408396114, &(uParam2->f_164[2]));
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, func_1707(uParam2->f_1348.f_3));
			}
			break;
		case 6:
			iVar0 = _blip_add_for_coord(422991367, (*Global_1116202)[uParam2->f_4926.f_252]->f_7.f_1);
			if (does_blip_exist(iVar0))
			{
				set_blip_sprite(iVar0, &(Global_1109804->f_260.f_4989[uParam2->f_4926.f_255]->f_6[1]), true);
				_0xedd964b7984ac291(iVar0, Global_1109804->f_260.f_4989[uParam2->f_4926.f_255]->f_6[1]->f_1);
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_POST_CLERK");
			}
			break;
		case 7:
			if (!_does_volume_exist(&(uParam2->f_164[8])))
			{
				return 0;
			}
			iVar0 = _0xa6ef0c54a3443e70(408396114, &(uParam2->f_164[8]));
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, func_1708(uParam2->f_1348.f_3));
			}
			break;
		case 8:
			if (!_does_volume_exist(&(uParam2->f_164[10])))
			{
				return 0;
			}
			iVar0 = _0xa6ef0c54a3443e70(408396114, &(uParam2->f_164[10]));
			if (does_blip_exist(iVar0))
			{
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_HIDEOUT");
			}
			break;
		case 9:
			if (!network_does_network_id_exist(&(uParam0->f_3[4])))
			{
				return 0;
			}
			iVar1 = net_to_ped(&(uParam0->f_3[4]));
			if (does_entity_exist(iVar1))
			{
				iVar0 = _blip_add_for_entity(408396114, iVar1);
			}
			if (does_blip_exist(iVar0))
			{
				set_blip_sprite(iVar0, -1103135225, false);
				set_blip_name_from_text_file(iVar0, "MPINTRO_BLIP_GANG_BOSS");
			}
			break;
		case 10:
			func_1709(&((*Global_1835011)[uParam2->f_1348.f_5]->f_30), 2048);
			if (func_1261(uParam2->f_1348.f_5, vdist2(func_1672(uParam2->f_1348.f_5), uParam2->f_5), func_1257(func_469(uParam2->f_1348.f_5))))
			{
				iVar0 = (*Global_1835011)[uParam2->f_1348.f_5]->f_28;
				(*Global_1835011)[uParam2->f_1348.f_5]->f_28 = 0;
			}
			func_1675(&((*Global_1835011)[uParam2->f_1348.f_5]->f_30), 2048);
			break;
		default:
			break;
	}
	return iVar0;
}

int func_1287(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	fVar0 = (((Param3.f_1 - Param0.f_1) * (Param6 - Param3)) - ((Param3 - Param0) * (Param6.f_1 - Param3.f_1)));
	if (fVar0 == 0f)
	{
		return 0;
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 2;
}

bool func_1288(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_1289(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_878(iParam0, 1);
	func_876(iParam0, 1);
	func_877(iParam0, 128);
}

bool func_1290(var uParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (!network_does_network_id_exist(&(uParam0->f_3[iParam2])))
	{
		return false;
	}
	if (!func_1710(uParam1, net_to_ped(&(uParam0->f_3[iParam2])), sParam3, bParam4))
	{
		return false;
	}
	return true;
}

void func_1291(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
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

void func_1292(var uParam0)
{
	_copy_memory(uParam0, &uVar0, 2);
}

void func_1293(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_122(uParam0, 0);
	if (!func_148(uParam0, -534124480, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_143(uParam0, 250639725, iParam3, 0);
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		iVar1 = func_1711(uParam0, 306103532, iParam3, iVar5);
		if (!func_889(iVar1, 0))
		{
		}
		else
		{
			iVar2 = func_133(uParam0, 1799303913, iParam3, iVar5);
			if (iVar2 == 0)
			{
			}
			else
			{
				iVar3 = func_133(uParam0, 1725258056, iParam3, iVar5);
				if (iVar3 == 0)
				{
				}
				else
				{
					if (!func_1712(uParam0, iVar3, &uVar4))
					{
						uParam0->f_384.f_264[uParam0->f_384.f_295] = iVar3;
						uParam0->f_384.f_295++;
					}
					if (!func_251(uParam0, 8))
					{
						uParam0->f_384.f_212[uParam0->f_384.f_263] = iVar1;
						uParam0->f_384.f_212[uParam0->f_384.f_263]->f_1 = iVar2;
						uParam0->f_384.f_263++;
					}
				}
			}
		}
		iVar5++;
	}
}

void func_1294(var uParam0, int iParam1)
{
	func_122(uParam0, 0);
	if (!func_148(uParam0, 763914871, &(uParam0->f_384.f_264[iParam1]), 0))
	{
		return;
	}
	iVar0 = func_143(uParam0, -957809402, 0, 0);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_1711(uParam0, -1589267693, iVar1, 0);
		if (!func_889(iVar3, 0))
		{
		}
		else
		{
			iVar2 = func_133(uParam0, 878554398, iVar1, 0);
			if (iVar2 == 0)
			{
			}
			else
			{
				uParam0->f_384.f_10[uParam0->f_384.f_211] = iVar3;
				uParam0->f_384.f_10[uParam0->f_384.f_211]->f_1 = iVar2;
				uParam0->f_384.f_211++;
			}
		}
		iVar1++;
	}
}

bool func_1295(int iParam0)
{
	return func_893(iParam0) == -427144552;
}

bool func_1296(int iParam0)
{
	if (func_89() != -1)
	{
		return false;
	}
	if (func_895(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1301(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_918(iParam0, 1);
}

void func_1297(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_893(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_900(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_827(iVar0))
	{
		if (bParam2 || (!has_ped_got_weapon(Global_34, iVar0, 0, false) && func_633(iParam0, 0, 0, 0) == 0))
		{
			if (func_89() == -1)
			{
				func_901(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_425(iParam0, iParam1, 0, 0, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1298(int iParam0, int iParam1)
{
	if (func_894(iParam0, 58855631))
	{
		func_974(iParam0, -915411861, iParam1, 1);
	}
}

int func_1299(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_889(iParam0, 0) && !func_1390(func_1304(iParam0), 2))
	{
		return 0;
	}
	if (func_893(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_1136(iParam0, -455129387) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_886(bParam3), iParam0);
}

int func_1300(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_905(iParam0) && !bParam2)
	{
		return get_ped_ammo_by_type(Global_34, iParam0);
	}
	return _0xe787f05dfc977bde(func_886(bParam1), iParam0, bParam3);
}

bool func_1301(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_1713(&iParam0);
	if (!func_889(iParam0, 0) && !func_1390(func_1304(iParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_1136(iParam0, -455129387) == 0)
	{
		bParam3 = true;
	}
	if (func_1295(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		Var0 = { func_1273(0) };
		Var4.f_9 = -1591664384;
		if (!func_1269(iParam0, &Var0, 1728382685, 0, 0))
		{
			return false;
		}
		else if (func_1270(iParam0, &Var4, 1728382685))
		{
			return false;
		}
		if (func_1274(iParam0, 1))
		{
			if (!func_1269(iParam0, &Var0, -649335959, 0, 0))
			{
				return false;
			}
			else if (func_1270(iParam0, &Var4, -649335959))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1299(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_778(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, bParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_1302()
{
	if (((((!_0x3ab6c7b0bb0df4b1(Global_34, -1) && !is_ped_using_any_scenario(Global_34)) && !func_868(Global_34, 1369124074)) && !func_868(Global_34, 713668775)) && !_0xec7e480ff8bd0bed(Global_34)) && !is_ped_in_any_vehicle(Global_34, false))
	{
		return true;
	}
	return false;
}

int func_1303(int iParam0, int iParam1)
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

int func_1304(int iParam0)
{
	return iParam0;
}

bool func_1305(int iParam0, int iParam1)
{
	if (!func_1390(iParam0, 2))
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_1306(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1307(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_39.f_3643[iVar1]), iVar2);
}

void func_1308(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3643[iVar1];
	set_bit(&uVar3, iVar2);
	Global_39.f_3643[iVar1] = uVar3;
}

void func_1309(int iParam0)
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
			func_1714(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_784(1);
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_784(2);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_784(3);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1715(1);
			break;
		case 33:
			func_1716(1);
			break;
		case 34:
			func_1717(1);
			break;
		case 35:
			break;
		case 36:
			func_1718(0);
			break;
		case 37:
			func_1719(0);
			break;
		case 38:
			func_1720(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if (func_1721() && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_1722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_910(677, 0);
			break;
		case 3:
			if (func_1721() && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_1722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_910(678, 0);
			break;
		case 4:
			if (func_1721() && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_1722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_910(679, 0);
			break;
		case 5:
			if (func_1721() && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_1722("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_910(680, 0);
			break;
		case 23:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			break;
		case 47:
			if (func_89() == -1)
			{
				if (!func_918(1013902307, 1))
				{
					func_903(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_89() == -1)
			{
				if (!func_918(1013902307, 1))
				{
					func_903(1013902307, 1, 752097756);
				}
				if (!func_918(142640135, 1))
				{
					func_903(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_89() == -1)
			{
				if (!func_918(786809402, 1))
				{
					func_903(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_89() == -1)
			{
				if (!func_918(786809402, 1))
				{
					func_903(786809402, 1, 752097756);
				}
				if (!func_918(-518019409, 1))
				{
					func_903(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			_0x5b9813ecf7633fe8(0);
			break;
		case 24:
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
		case 43:
			break;
		case 44:
			_unlock_set_unlocked(-843169622, true);
			Global_1940258->f_41 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			_0xa63fcad3a6fec6d2(get_player_index(), true);
			break;
		case 51:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 52:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 53:
			_unlock_set_unlocked(296662302, true);
			break;
		case 54:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 55:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_1310(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1242(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_1311(int iParam0)
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

int func_1312(int iParam0, int iParam1, int iParam2)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1136(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_831(iParam0, 0, 0) };
	if (func_1301(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_375(0))
	{
		return 0;
	}
	if (!_0xcb5d11f9508a928d(func_886(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_1313(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1301(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_375(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_886(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1314(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_34) || Global_1940258->f_6)
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
	decor_set_int(Global_34, sVar0, iParam0);
	iVar2 = func_1723();
	func_1724(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_34, sVar1, iVar2);
}

int func_1315(int iParam0)
{
	if (func_1725(iParam0))
	{
		if (get_ped_ammo_by_type(Global_34, 954660191) <= 0)
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
		iVar1 = get_ped_ammo_by_type(Global_34, _get_ammo_type_for_weapon(iParam0));
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

bool func_1316()
{
	return false;
}

int func_1317(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_896(49))
			{
				if (!func_896(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_896(50))
			{
				if (!func_896(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_1318(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1319(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_1726(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1727(iParam0))
	{
		return false;
	}
	if (func_1728(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_1327(iParam0, 1)) || func_777(32768))
	{
		if (!func_1327(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_1729())
	{
		return false;
	}
	return true;
}

void func_1320(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

int func_1321(int iParam0, bool bParam1, int iParam2)
{
	if (func_89() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_918(1811977508, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_34, 1, 1, iParam0, &Var1, 0);
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
			if (func_889(iVar25, 0) && func_894(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1322(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		if (bParam3)
		{
			func_436(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_980(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1323(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1730() || func_1731())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_980(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_980(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, 752097756);
		func_908(func_1329(1644987397), iVar1);
	}
}

bool func_1324(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_947(iParam0);
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
	iVar1 = func_1192(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1732(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1733(iParam0);
	iVar2 = func_1732(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

void func_1325(int iParam0, int iParam1, var uParam2)
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

int func_1326(int iParam0)
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

bool func_1327(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

int func_1328(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1734(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_1735(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_1329(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

char* func_1330(int iParam0)
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

int func_1331(int iParam0)
{
	if (!func_1736(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1332(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_1333(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

bool func_1334()
{
	return &Global_1956123;
}

bool func_1335()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return &Global_1071686;
}

bool func_1336()
{
	return (_does_anim_scene_exist(Global_26538) && _is_anim_scene_started(Global_26538, false));
}

bool func_1337(int iParam0)
{
	return (func_1737(iParam0, 4) || func_1737(iParam0, 5));
}

void func_1338(var uParam0)
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

bool func_1339(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!func_1738(uParam0->f_4, iVar0, &(uParam0->f_2207)))
		{
			return false;
		}
		if (!func_1739(uParam0, uParam0->f_20))
		{
			if (!func_1740(iParam1, &(uParam0->f_2207)))
			{
				return false;
			}
			if (func_1739(uParam0, uParam0->f_20))
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
		if (!func_1740(iParam1, &(uParam0->f_2207)))
		{
			return false;
		}
		if (!func_1741(uParam0, iParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2207.f_71 = func_1742(&(uParam0->f_2207));
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
	func_1743(uParam0, 1);
	func_1109();
	func_1744(uParam0);
	func_1745();
	func_1746(uParam0);
	func_1443();
	uParam0->f_2207.f_50 = _databinding_add_data_container_from_path("", "GenericShop");
	uParam0->f_2207.f_51 = _databinding_add_data_hash(uParam0->f_2207.f_50, "Title", get_hash_key(func_1747(uParam0->f_3)));
	uParam0->f_2207.f_53 = _databinding_add_data_container(uParam0->f_2207.f_50, "Prompts");
	uParam0->f_2207.f_52 = _databinding_add_data_container(uParam0->f_2207.f_50, "Scene");
	uParam0->f_2207.f_54 = _databinding_add_data_container(uParam0->f_2207.f_52, "price_details");
	func_1748(uParam0, 7, -2122634935);
	func_1437(uParam0, 7, 1);
	func_1749(uParam0, 7, 1);
	func_1750(uParam0, 7, 0);
	func_1748(uParam0, 1, -672301300);
	func_1437(uParam0, 1, 1);
	func_1749(uParam0, 1, 1);
	func_1750(uParam0, 1, 0);
	func_1748(uParam0, 2, 1891107858);
	func_1437(uParam0, 2, 0);
	func_1749(uParam0, 2, 0);
	func_1750(uParam0, 2, 0);
	func_1748(uParam0, 3, -405106071);
	func_1437(uParam0, 3, 0);
	func_1749(uParam0, 3, 0);
	func_1750(uParam0, 2, 0);
	func_1748(uParam0, 6, 1003038367);
	func_1437(uParam0, 6, 0);
	func_1749(uParam0, 6, 0);
	func_1750(uParam0, 6, 0);
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
	uParam0->f_2207.f_157 = 258757;
	uParam0->f_2207.f_158 = 259661;
	uParam0->f_2207.f_159 = 219701;
	uParam0->f_2207.f_160 = 260477;
	uParam0->f_2207.f_161 = 260645;
	uParam0->f_2207.f_46 = 1;
	return true;
}

int func_1340(var uParam0, var uParam1)
{
	if (!func_1755(uParam0))
	{
		func_1756(uParam0, 4, 1945003767, 0, 0, 0);
	}
	else
	{
		func_1756(uParam0, 4, 1945003767, func_1757(), 1, 0);
	}
	switch (*uParam1)
	{
		case 2077448405:
			if (func_947(uParam1->f_9) != -999503751)
			{
			}
			else
			{
				if (func_1758(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = func_821(uParam1->f_9);
					if ((iVar0 <= -1 || func_1759() == uParam1->f_9) || !func_1584(2, iVar0))
					{
						func_1756(uParam0, 4, 904671343, 0, 0, 0);
					}
					else
					{
						func_1756(uParam0, 4, 904671343, 1, 1, 0);
					}
				}
				if (func_1758(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = func_821(uParam1->f_9);
					if (iVar0 <= -1 || !func_1584(2, iVar0))
					{
						func_1756(uParam0, 3, -1503720446, 0, 0, 1);
					}
					else
					{
						func_1756(uParam0, 3, -1503720446, 1, 1, 1);
					}
				}
				if (func_1759() == uParam1->f_9 || func_836(uParam1->f_9, 0))
				{
					func_1756(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (func_1760(uParam1->f_9))
				{
					func_1756(uParam0, 2, -1208531349, 1, 1, 0);
				}
				else
				{
					iVar0 = func_821(uParam1->f_9);
					if (iVar0 <= -1)
					{
						func_1756(uParam0, 2, 920855044, 1, 1, 0);
					}
					else if (uParam1->f_9 == 491602716)
					{
						if (func_1759() == 491602716)
						{
							func_1756(uParam0, 2, 920855044, func_1584(2, iVar0), 1, 0);
						}
					}
					else
					{
						func_1756(uParam0, 2, 920855044, func_1584(2, iVar0), 1, 0);
					}
				}
				Jump @583; //curOff = 481
				func_1761(uParam0, 1108822547, uParam1->f_9);
				Jump @583; //curOff = 499
				func_1762(&(uParam0->f_2506), uParam1->f_9);
				Jump @583; //curOff = 515
				Jump @583; //curOff = 518
				if (func_947(uParam1->f_9) == -2061583405)
				{
					func_1761(uParam0, 1108822547, uParam1->f_9);
				}
				else
				{
					func_1756(uParam0, 2, 0, 0, 0, 0);
				}
				Jump @583; //curOff = 566
				func_1756(uParam0, 2, 0, 0, 0, 0);
			}
			if (func_893(uParam1->f_9) == -1037537535 && func_1570(func_947(uParam1->f_9)))
			{
				func_1763(&(uParam0->f_2506.f_2), uParam1->f_9, uParam0->f_2207.f_107);
			}
			else
			{
				func_1764(&(uParam0->f_2506.f_2), uParam0->f_2207.f_107);
			}
			if (func_1365(uParam0) == 1256151078 && !func_604(64))
			{
				func_1756(uParam0, 2, -810523886, 1, 1, 0);
			}
			return 1;
			default:
				break;
	}
}

void func_1341(var uParam0, int iParam1)
{
	uParam0->f_2207.f_142 = iParam1;
	uParam0->f_2207.f_141 = 1;
}

int func_1342(var uParam0, var uParam1)
{
	iVar0 = func_947(uParam1->f_7);
	switch (uParam1->f_10)
	{
		case 1:
			if (*uParam1 == -348190488)
			{
				func_1765(uParam1->f_7);
			}
			break;
		case 2:
			if (func_1365(uParam0) == 1256151078)
			{
				func_1741(uParam0, -1934515925, 1, -1, 1, 1, 1, 0);
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
				if (func_1760(uParam1->f_7))
				{
					if (func_1766(func_1388(uParam0)))
					{
						func_1428(uParam0, -1, 1);
					}
					func_1767(uParam1->f_7, 0, 0, 1, 0);
				}
				else
				{
					if (func_894(uParam1->f_7, 160827531))
					{
						iVar0 = 81053684;
					}
					if (func_1768(iVar0, 0))
					{
						func_1769(uParam1->f_7, 0, 0, 0, 1, 0);
					}
					else
					{
						if (iVar0 == -999503751)
						{
							iVar2 = func_1770(iVar0, Global_1952637->f_1675);
						}
						else
						{
							iVar2 = func_1770(iVar0, &(Global_1952637->f_1675.f_1[func_833(func_1771(iVar0), 1)]));
						}
						func_1772(iVar2, uParam1->f_7, 1, 0, 0);
					}
				}
			}
			func_930(1048576);
			break;
		case 3:
			if (!func_1758(uParam1->f_7) || uParam1->f_7 == 491602716)
			{
			}
			else
			{
				uParam0->f_2506.f_7 = 2;
				uParam0->f_2506.f_6 = uParam1->f_7;
				Jump @617; //curOff = 418
				if ((func_1758(uParam1->f_7) && func_1759() != uParam1->f_7) && uParam1->f_7 != 491602716)
				{
					if (func_1760(uParam1->f_7))
					{
						func_1767(uParam1->f_7, 0, 0, 1, 0);
						func_930(1048576);
					}
					func_1773(uParam1->f_7, 1);
					if (func_1774(uParam1->f_7, &iVar4, 1))
					{
						func_1775(iVar4);
						func_1776(2, iVar4, 6);
						func_1777(iVar4);
						func_930(1048576);
					}
					func_1428(uParam0, -1, 1);
				}
				else if (func_1778(&(uParam0->f_2506.f_16)))
				{
					iVar1 = func_1779(uParam0->f_2506.f_16);
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

void func_1343(var uParam0, int iParam1)
{
	uParam0->f_2207.f_144 = iParam1;
	uParam0->f_2207.f_143 = 1;
}

void func_1344(var uParam0, var uParam1, int iParam2)
{
	func_1780(&(uParam0->f_2506.f_2));
	if (func_609(&(uParam0->f_2506), 2))
	{
		if (!func_604(4194304))
		{
			func_1447(uParam0, 64);
			func_1433();
			func_1781(&(uParam0->f_2506), 2);
		}
	}
	else if (func_604(4194304))
	{
		func_1385(uParam0, 64);
		if (func_1782(uParam0, 4) || func_1783(uParam0, 4))
		{
			func_1756(uParam0, 4, 1945003767, 0, 0, 0);
		}
		iVar0 = func_1415();
		if (((((iVar0 == 761079318 || iVar0 == -2056428614) || iVar0 == 1942587409) || iVar0 == -395279071) || iVar0 == -348190488) || iVar0 == 753463028)
		{
			if (iParam2 == -252412307 || iParam2 == -440651963)
			{
				func_1784(256);
				func_1377(16);
				func_1784(1024);
			}
			else
			{
				func_1433();
			}
		}
		if (iVar0 == 2077448405)
		{
			func_1433();
		}
		func_933(&(uParam0->f_2506), 2);
	}
}

void func_1345(var uParam0, int iParam1)
{
	uParam0->f_2207.f_140 = iParam1;
	uParam0->f_2207.f_139 = 1;
}

void func_1346(var uParam0, var uParam1, int iParam2)
{
	func_1785();
	Var0.f_1 = -1;
	if (func_1786(&(Global_1952637->f_1675), &Var0, func_667(889965687, func_666(1), 1034665895, 1)))
	{
		if (!func_609(&(uParam0->f_2506), 4))
		{
			func_933(&(uParam0->f_2506), 4);
		}
	}
	else if (func_609(&(uParam0->f_2506), 4))
	{
		func_1781(&(uParam0->f_2506), 4);
	}
	if (iParam2 == 1256151078)
	{
		func_1350(uParam0, uParam0->f_2506.f_13);
		func_1787(uParam0, uParam0->f_2506.f_13);
		func_1109();
	}
	else
	{
		iVar3 = iParam2;
		if (func_889(iVar3, 0) && func_894(iVar3, -393037696))
		{
			func_1350(uParam0, iParam2);
			func_1787(uParam0, iParam2);
		}
		else
		{
			func_1744(uParam0);
			func_1109();
			iVar4 = func_1388(uParam0);
			if (iVar4 != -1)
			{
				func_1787(uParam0, iVar4);
			}
			else
			{
				func_1787(uParam0, iParam2);
			}
		}
	}
}

void func_1347(var uParam0, int iParam1)
{
	uParam0->f_2207.f_146 = iParam1;
	uParam0->f_2207.f_145 = 1;
}

void func_1348(var uParam0, int iParam1)
{
	if (iParam1 == 1256151078 || iParam1 == -1011619512)
	{
		func_933(&(uParam0->f_2506), 16);
		func_933(&(uParam0->f_2506), 8);
	}
}

void func_1349(var uParam0, int iParam1)
{
	uParam0->f_2207.f_152 = iParam1;
	uParam0->f_2207.f_151 = 1;
}

void func_1350(var uParam0, int iParam1)
{
	uParam0->f_17 = iParam1;
}

int func_1351(var uParam0)
{
	return get_ped_index_from_entity_index(uParam0->f_30);
}

int func_1352(var uParam0, int iParam1)
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

bool func_1353(var uParam0)
{
	if (!func_1788(uParam0))
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

int func_1354(var uParam0)
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

void func_1355(var uParam0)
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
	if (!func_665(32))
	{
		Var3 = { func_1172(0, -1591664384, -1591664384, -1591664384, 2047428024, 0, 0) };
		if (func_1173(&Var3, &iVar1, &iVar2, 1))
		{
			if (iVar2 > 0)
			{
				func_671(32);
			}
			func_1179(iVar1);
		}
	}
	if (!func_665(64))
	{
		Var3 = { func_1172(0, -1591664384, -1591664384, -1591664384, 502936876, 0, 0) };
		if (func_1173(&Var3, &iVar1, &iVar2, 1))
		{
			if (iVar2 > 0)
			{
				func_671(64);
			}
			func_1179(iVar1);
		}
	}
}

void func_1356(var uParam0)
{
	Global_1915715->f_23051.f_23 = *uParam0;
	if (uParam0->f_13 == -1151073879)
	{
		*Global_1915715->f_23051.f_24[0] = { get_offset_from_entity_in_world_coords(*uParam0, 0.1596f, 2.403f, 0.2532f) };
		Global_1915715->f_23051.f_24[0]->f_3 = { get_entity_rotation(*uParam0, 2) + Vector(186.414f, 0f, -6.9665f) };
		vVar0 = { *Global_1915715->f_23051.f_24[0] };
		func_1789(&vVar0, 1088421888);
		func_1790(&(uParam0->f_9), vVar0, 2.5f, 1, 4, 0);
	}
	else
	{
		*Global_1915715->f_23051.f_24[0] = { get_offset_from_entity_in_world_coords(*uParam0, 0.1773f, 2.1151f, 0.576f) };
		Global_1915715->f_23051.f_24[0]->f_3 = { get_entity_rotation(*uParam0, 2) + Vector(186.414f, 0f, -14.7873f) };
	}
	Global_1915715->f_23051.f_2.f_9 = 50.9f;
	func_1792(*uParam0, 20, func_1791());
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
	func_1793(uParam0->f_2, 0);
}

void func_1357(int iParam0, var uParam1)
{
	iVar0 = Global_1915715->f_20241;
	iVar1 = Global_1915715->f_22044;
	if (iVar0 != -1 && iVar1 == 0)
	{
		iVar1 = func_1791();
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
	func_1792(iParam0, iVar0, iVar1);
	func_1794(1);
	Global_1915715->f_23051.f_22 = 1;
}

int func_1358(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return 0;
	}
	iVar6 = _0x8870895ba5ed9385(iParam0, -442898163, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

int func_1359(int iParam0)
{
	iVar0 = func_833(func_1771(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1952637->f_1675.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_1360(int iParam0)
{
	if (func_1361(81053684, iParam0))
	{
		return true;
	}
	if (func_1361(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_1361(int iParam0, int iParam1)
{
	iVar1 = func_833(func_1771(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1952637->f_1675.f_1[iVar1] != 0 && &Global_1952637->f_1675.f_1[iVar1] != &Global_1952637->f_83[iVar1])
	{
		iVar0 = &Global_1952637->f_1675.f_1[iVar1];
		if (func_947(iVar0) == iParam0 || (iParam0 == 81053684 && func_894(iVar0, 160827531)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

bool func_1362(int iParam0)
{
	return func_1795(iParam0);
}

bool func_1363(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	if (func_1360(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1364(int iParam0, int iParam1)
{
	iVar1 = func_378(iParam0);
	iVar2 = func_833(iVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (func_1796(iParam0) && func_1760(iParam0))
	{
		iParam1 |= 64;
	}
	if ((iVar1 == 1108822547 && func_604(32768)) || iParam0 != &Global_1952637->f_1675.f_1[iVar2])
	{
		if (func_1796(&(Global_1952637->f_1675.f_1[iVar2])) && func_1760(&(Global_1952637->f_1675.f_1[iVar2])))
		{
			iParam1 |= 32;
		}
		if (Global_1952637->f_83[iVar2]->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (func_947(iParam0))
		{
			case 81053684:
				if (func_1361(-525676072, &uVar0))
				{
					iVar3 = func_833(func_1771(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
						if (func_894(iParam0, -180472385) && func_1361(1024667707, &uVar0))
						{
							iVar3 = func_833(func_1771(1024667707), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
								Jump @513; //curOff = 342
								if (func_604(32768))
								{
									func_1156(func_841(iVar2, 1));
								}
								if (func_1361(81053684, &uVar4))
								{
									iVar3 = func_833(func_1771(81053684), 1);
									if (iVar3 == 39)
									{
									}
									else
									{
										Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
										Jump @513; //curOff = 428
										if (!func_894(iParam0, 160827531))
										{
										}
										else
										{
											if (func_1361(-525676072, &uVar0))
											{
												iVar3 = func_833(func_1771(-525676072), 1);
												if (iVar3 == 39)
												{
												}
												else
												{
													Global_1952637->f_2685[iVar3] = &Global_1952637->f_83[iVar3];
												}
												Global_1952637->f_2685[iVar2] = iParam0;
												func_1797(iVar1, iParam1, 6);
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

int func_1365(var uParam0)
{
	return func_1742(&(uParam0->f_2207));
}

int func_1366(var uParam0)
{
	uVar0 = func_1798(&(uParam0->f_2207));
	return uVar0;
}

int func_1367(var uParam0)
{
	return uParam0->f_2207.f_106;
}

int func_1368(var uParam0)
{
	return uParam0->f_2207.f_108;
}

int func_1369(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam1);
	iVar1 = func_1799(iVar0);
	iVar2 = func_1800(iVar0);
	iVar3 = func_1801(iVar0);
	iVar4 = func_1802(iVar0) + 1;
	iVar4 = func_1009(iVar4, 0, 10);
	iVar6 = iVar4 + 2;
	iVar6 = func_1009(iVar6, 0, 10);
	iVar7 = func_1803(iVar0) + 1;
	iVar7 = func_1009(iVar7, 0, 10);
	iVar9 = iVar7 + 2;
	iVar9 = func_1009(iVar9, 0, 10);
	func_1804(&(uParam0->f_2207.f_89), &iVar5, &iVar8);
	iVar5 = floor((IntToFloat(iVar5) * 0.01f));
	iVar5 = (iVar5 + iVar4);
	iVar5 = func_1009(iVar5, 0, 10);
	iVar8 = floor((IntToFloat(iVar8) * 0.01f));
	iVar8 = (iVar8 + iVar7);
	iVar8 = func_1009(iVar8, 0, 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedValue", iVar4);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentValue", iVar5);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedEquipmentMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityValue", iVar6);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseSpeedCapacityMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccValue", iVar7);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentValue", iVar8);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccEquipmentMaxValue", 10);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityValue", iVar9);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMinValue", 0);
	_databinding_add_data_int(uParam0->f_2207.f_52, "HorseAccCapacityMaxValue", 10);
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseHandling", get_hash_key(func_1805(iVar2)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseType", get_hash_key(func_1806(iVar3, iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseBreed", get_hash_key(func_1807(iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseCoat", get_hash_key(func_1808(iVar1)));
	sVar10 = func_1809(iParam1);
	if (func_1415() == -239176093)
	{
		iVar11 = func_1421();
		iVar12 = _databinding_read_data_int_from_parent_by_hash(iVar11, func_1422());
		switch (iVar12)
		{
			case 0:
				sVar10 = func_1810(1);
				break;
			case 1:
				sVar10 = func_1810(2);
				break;
		}
	}
	_databinding_add_data_hash(uParam0->f_2207.f_52, "HorseGender", get_hash_key(sVar10));
	return 1;
}

int func_1370(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam1);
	iVar1 = func_1811(iVar0);
	iVar2 = func_1812(iVar0);
	iVar3 = func_1813(iVar0);
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleMaxSpeed", get_hash_key(func_1814(iVar1)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleAcceleration", get_hash_key(func_1815(iVar2)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleSteering", get_hash_key(func_1816(iVar3)));
	_databinding_add_data_hash(uParam0->f_2207.f_52, "VehicleDescription", get_hash_key(func_1817(iVar0)));
	return 1;
}

bool func_1371()
{
	if ((func_1336() || Global_1048585) // PointerArith)
	{
		return true;
	}
	if ((func_1818() || func_1819()) || func_1820())
	{
		return true;
	}
	if ((func_1821() && !func_1822()) || func_1823())
	{
		return true;
	}
	if (Global_1051439->f_43)
	{
		return true;
	}
	return false;
}

void func_1372(var uParam0)
{
	if (!func_1432(uParam0, 0))
	{
		func_330(1);
		_uiprompt_disable_prompts_this_frame();
		disable_all_control_actions(2);
	}
}

void func_1373(var uParam0)
{
	iVar0 = -1558366648;
	if (!func_1824(uParam0))
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

int func_1374(var uParam0)
{
	if (!does_entity_exist(uParam0->f_2207.f_107))
	{
		return Global_34;
	}
	return uParam0->f_2207.f_107;
}

int func_1375(var uParam0, int iParam1, bool bParam2)
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
		func_1825(uParam0, 0);
		func_1826(uParam0, "");
		func_1827(uParam0, 0);
		func_1828(uParam0);
		func_1829(uParam0, 0);
		func_1830(uParam0, 0);
		func_1831(uParam0, 0, 0, 0, 1105014447);
		func_1832(uParam0, 0);
		func_1833(uParam0, 0, 0, 0);
		func_1834(uParam0, "", 1);
		func_1835(uParam0);
		func_1836(uParam0, 0);
		func_1837(uParam0, 0);
		func_1838(uParam0, 0);
		func_1839(uParam0, 0);
		_databinding_add_data_bool(uParam0->f_2207.f_50, func_1840(), false);
		_databinding_add_data_hash(uParam0->f_2207.f_50, "ItemPaletteItemName", -1);
		_databinding_add_data_bool(uParam0->f_2207.f_52, "HorseStats", true);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "isGoldPrice", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "rightPriceTextVisible", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceGold", false);
		_databinding_add_data_int(uParam0->f_2207.f_54, "purchasePrice", 0);
		_databinding_add_data_string(uParam0->f_2207.f_54, "rightPriceRawText", "");
		_databinding_add_data_bool(uParam0->f_2207.f_54, "locked", false);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "itemPriceRankLocked", false);
		_databinding_add_data_int(uParam0->f_2207.f_54, "itemPriceRank", 0);
		_databinding_add_data_bool(uParam0->f_2207.f_54, "isAffordable", false);
		_databinding_add_data_string(uParam0->f_2207.f_54, "purchaseLabel", "");
		_databinding_add_data_int(uParam0->f_2207.f_54, "tokenPrice", 0);
		_databinding_add_data_hash(uParam0->f_2207.f_50, "Title", get_hash_key(func_1747(uParam0->f_3)));
		func_1106(uParam0);
		func_1107(uParam0);
	}
	if (func_1426(uParam0, &iVar0))
	{
		if (iVar0 <= 0)
		{
			func_1841();
			return 1;
		}
		else
		{
			func_1842(uParam0, iVar0);
		}
	}
	switch (iParam1)
	{
		case 1036144478:
			return func_1843(uParam0, bParam2);
		case 2057502022:
			return func_1844(uParam0, bParam2);
		case -996064024:
			return func_1845(uParam0, bParam2);
		case -706012851:
			return func_1846(uParam0, bParam2);
		case -645366665:
			return func_1847(uParam0, bParam2);
		case -252412307:
			return func_1848(uParam0, bParam2);
		case -659372875:
			return func_1849(uParam0, bParam2);
		case -720046:
			return func_1850(uParam0, bParam2);
		case 2144984909:
			return func_1851(uParam0, bParam2);
		case 115613670:
			return func_1852(uParam0, bParam2);
		case 1275816411:
			return func_1853(uParam0, bParam2);
		case 178644271:
			return func_1854(uParam0, bParam2);
		case 2092883099:
			return func_1855(uParam0, bParam2);
		case 1705401718:
			return func_1856(uParam0, bParam2);
		case 310306577:
			return func_1857(uParam0, bParam2);
		case -856183175:
			return func_1858(uParam0, bParam2);
		case 1860655620:
			return func_1859(uParam0, bParam2);
		case 94016929:
			return func_1860(uParam0, bParam2);
		case 1426047132:
			return func_1861(uParam0, bParam2);
		case 803749366:
			return func_1862(uParam0, bParam2);
		case -2144266389:
			return func_1863(uParam0, bParam2);
		case -1548684311:
			return func_1864(uParam0, bParam2);
		case 1965673387:
			return func_1865(uParam0, bParam2);
		case 1013443471:
			return func_1866(uParam0, bParam2);
		case 23814986:
			return func_1867(uParam0, bParam2);
		case 253603960:
			return func_1868(uParam0, bParam2);
		case -946221162:
			if (uParam0->f_3 == 33 && func_1365(uParam0) == 603940701)
			{
				return func_1847(uParam0, bParam2);
			}
			else
			{
				return func_1869(uParam0, bParam2);
			}
			break;
		case -440651963:
			return func_1870(uParam0, bParam2);
	}
	return 0;
}

bool func_1376()
{
	return func_1377(1024);
}

bool func_1377(int iParam0)
{
	return func_1037(Global_1915715->f_20241.f_3, iParam0);
}

bool func_1378(int iParam0)
{
	return _request_uiapp_transition_by_hash(1289756680, iParam0);
}

bool func_1379(int iParam0, var uParam1)
{
	if (func_1871(uParam1))
	{
		if (func_1872(iParam0, uParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1380(var uParam0)
{
	iVar0 = func_1366(uParam0);
	if (func_1384(uParam0) && !(func_1873(uParam0) && func_1874(uParam0)))
	{
		func_1748(uParam0, 7, -436465203);
	}
	else
	{
		func_1748(uParam0, 7, -436465203);
	}
	func_1875(uParam0);
	if (!func_1375(uParam0, iVar0, 0))
	{
		return false;
	}
	if (!func_1378(iVar0))
	{
		return false;
	}
	func_1825(uParam0, 0);
	func_1105(uParam0);
	func_1876();
	if (!uParam0->f_2207.f_69)
	{
		uParam0->f_2207.f_69 = 1;
	}
	return true;
}

void func_1381(int iParam0)
{
	func_1038(&(Global_1915715->f_20241.f_3), iParam0);
}

var func_1382(var uParam0)
{
	return uParam0->f_19;
}

bool func_1383(var uParam0)
{
	if (uParam0->f_2207.f_121.f_1)
	{
		if (func_1740(uParam0->f_2207.f_121.f_3, &(uParam0->f_2207)))
		{
			uParam0->f_2207.f_71 = uParam0->f_2207.f_121.f_4;
			func_1877(uParam0->f_2207.f_121.f_5, &(uParam0->f_2207));
			if (func_1741(uParam0, uParam0->f_2207.f_121.f_2, 1, uParam0->f_2207.f_121.f_6, 0, 0, 0, 1))
			{
				func_1743(uParam0, 0);
				iVar0 = func_1389();
				if (func_889(iVar0, 0) || func_1390(func_1304(iVar0), 2))
				{
					func_1391(iVar0);
				}
				return true;
			}
		}
	}
	else if (func_1741(uParam0, uParam0->f_2207.f_121.f_2, 1, uParam0->f_2207.f_121.f_6, 0, 1, 1, 1))
	{
		func_1743(uParam0, 0);
		iVar1 = func_1389();
		if (func_889(iVar1, 0) || func_1390(func_1304(iVar1), 2))
		{
			func_1391(iVar1);
		}
		return true;
	}
	return false;
}

bool func_1384(var uParam0)
{
	if (func_1878(&(uParam0->f_2207)) == uParam0->f_2207.f_71)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_1385(var uParam0, int iParam1)
{
	func_533(&(uParam0->f_2207.f_45), iParam1);
}

void func_1386(var uParam0, int iParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1879(iParam1, 1), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1879(iParam1, 0), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1880(iParam1, 1), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1880(iParam1, 0), false);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1881(iParam1), false);
}

bool func_1387(var uParam0)
{
	if ((uParam0->f_42 - 1) >= 0)
	{
		if (!func_1882(uParam0, &Var0))
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

int func_1388(var uParam0)
{
	iVar0 = 0;
	if (!func_1883(uParam0, uParam0->f_2207.f_74, &iVar0))
	{
		return -1;
	}
	return func_1884(iVar0, &(uParam0->f_2207));
}

int func_1389()
{
	return Global_1915715->f_20241.f_3.f_12;
}

bool func_1390(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

void func_1391(int iParam0)
{
	_unlock_set_new(func_1885(iParam0), false);
}

bool func_1392(var uParam0)
{
	uParam0->f_2207.f_74 = func_1886(uParam0);
	iVar0 = 0;
	if (!func_1883(uParam0, uParam0->f_2207.f_74, &iVar0))
	{
		return false;
	}
	if (func_1887(iVar0, &(uParam0->f_2207), &iVar1))
	{
		func_1787(uParam0, func_1888(uParam0, iVar1));
		func_1428(uParam0, 0, 1);
		func_1825(uParam0, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1393(var uParam0)
{
	if (func_1889() == 1039059780)
	{
		return true;
	}
	if (((!func_1377(512) && func_1889() != -729996127) && func_1366(uParam0) != 1965673387) && func_1366(uParam0) != -1548684311)
	{
		if (!_databinding_is_data_id_valid(func_1890()))
		{
			iVar0 = func_1891();
			iVar1 = func_1410();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
			}
			iVar4 = _databinding_get_array_count(uParam0->f_2207.f_58);
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return false;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, iVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return false;
			}
			func_1892(&iVar5);
			iVar6 = _databinding_read_data_int_from_parent(func_1890(), func_1893());
			func_1894(iVar6);
		}
	}
	func_1895(uParam0);
	Var7.f_14 = -1;
	Var7.f_15 = -1;
	func_1896(uParam0, &Var7);
	if (func_1377(512))
	{
		if (func_1878(&(uParam0->f_2207)) == uParam0->f_2207.f_71)
		{
			uParam0->f_2207.f_48 = 1;
		}
		if (!func_1897(uParam0, 8))
		{
			iVar30 = 0;
			iVar31 = func_947(func_1175(1108822547));
			if ((uParam0->f_3 == 8 && iVar31 != 119907797) && func_1180(1905845894) == -1)
			{
				iVar30 = 1905845894;
			}
			if (uParam0->f_2207.f_48)
			{
				if (!uParam0->f_2207.f_84)
				{
					func_1103(uParam0, 1, iVar30);
				}
			}
			else
			{
				func_1103(uParam0, 1, iVar30);
			}
			if (!(func_1898(uParam0) == -223810523 && func_1365(uParam0) != 1651623911))
			{
				func_1440(uParam0);
			}
		}
		if (func_1366(uParam0) == 803749366)
		{
			func_1899();
		}
		if (func_1841())
		{
			func_1106(uParam0);
			func_1107(uParam0);
			uParam0->f_2558 = 0;
			if (uParam0->f_2207.f_151)
			{
				Stack.Push(uParam0);
				Stack.Push(func_1898(uParam0));
				Call_Loc(uParam0->f_2207.f_152);
			}
			func_1900(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (!func_1901(uParam0, Var7.f_11, &Var7))
	{
	}
	if (Var7.f_10 == 1)
	{
		iVar32 = Var7.f_7;
		if (Var7 == 193788635 || Var7 == -1198174119)
		{
			iVar32 = Var7.f_1;
		}
		else if (Var7 == 317179309)
		{
			iVar32 = 692350163;
		}
		else if (Var7 == -1594421938)
		{
			iVar32 = 675142260;
		}
		else if (Var7 == -1352600334)
		{
			iVar32 = -1724045811;
		}
		if ((func_1902() || (func_1903(iVar32) && !func_1904(Var7))) && func_1905())
		{
			bVar33 = false;
			if ((func_918(iVar32, 1) || (Var7 == 1394581936 && func_1906(uParam0, iVar32, 1394581936))) && !func_895(iVar32, 1048576))
			{
			}
			else if (func_1907(iVar32, 1))
			{
			}
			else
			{
				if (Var7.f_11 == 310306577)
				{
					iVar35 = func_1908(func_1444(uParam0, &uVar34, 1, 1));
					if (!func_1909(iVar35))
					{
						bVar33 = true;
					}
				}
				else if (func_1910(iVar32))
				{
					bVar33 = (!func_1911(uParam0, iVar32) && !func_1912(iVar32, 0, 1));
				}
				else if (!func_1912(iVar32, 0, 1))
				{
					bVar33 = true;
				}
				if (bVar33)
				{
					func_1913(1);
					return true;
				}
			}
		}
	}
	if (Var7.f_11 == 310306577)
	{
	}
	else if (!func_1752(uParam0, &Var7, 1))
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
	if ((!func_1914(uParam0->f_2160) && !func_1914(uParam0->f_2170)) && func_1432(&(uParam0->f_2160), 0))
	{
		if (Var7.f_11 == 1705401718 || Var7.f_11 == 310306577)
		{
			if (!func_1425(uParam0))
			{
			}
		}
		if (!func_1424(uParam0))
		{
		}
	}
	if (((Var7.f_11 != 1705401718 && Var7.f_11 != 310306577) && Var7.f_11 != 94016929) && Var7.f_11 != 1426047132)
	{
		func_1915(uParam0);
	}
	func_1916(uParam0, Var7);
	func_1917(uParam0);
	return true;
}

int func_1394(var uParam0)
{
	if (func_1918(&(uParam0->f_2160)))
	{
		return 0;
	}
	if (func_1366(uParam0) != -1548684311 && func_1366(uParam0) != 1965673387)
	{
		if (!_databinding_is_data_id_valid(func_1421()))
		{
			iVar0 = func_1427();
			iVar1 = func_1410();
			iVar2 = (iVar0 - iVar1);
			if (iVar1 < 0)
			{
				iVar3 = ((iVar1 * -1) - iVar0);
				iVar2 = ((iVar1 * -1) - iVar3);
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
			if (iVar2 >= iVar4 || iVar2 < 0)
			{
				return 0;
			}
			iVar5 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, iVar2);
			if (!_databinding_is_data_id_valid(iVar5))
			{
				return 0;
			}
			func_1919(&iVar5);
			iVar6 = _databinding_read_data_int_from_parent(func_1421(), func_1893());
			func_1920(iVar6);
		}
	}
	func_1825(uParam0, 0);
	func_1830(uParam0, 0);
	func_1831(uParam0, 0, 0, 0, 1105014447);
	func_1832(uParam0, 0);
	func_1833(uParam0, 0, 0, 0);
	func_1828(uParam0);
	func_1829(uParam0, 0);
	func_1921(uParam0);
	func_1922(&Var7, uParam0);
	func_1431(0);
	if (!func_1923(uParam0, Var7.f_12, &Var7))
	{
	}
	if (!func_1751(uParam0, &Var7))
	{
	}
	if (!func_1377(65536))
	{
		if (func_889(Var7.f_9, 0))
		{
			if (func_894(Var7.f_9, -495963434))
			{
				if (!func_1924(uParam0, &Var7))
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
	func_1381(65536);
	if (Var7.f_12 == 310306577 && Var7.f_13 == -1665950342)
	{
		if (func_1925(uParam0, 0, 1))
		{
		}
	}
	else if (uParam0->f_4 != 179 && Var7.f_12 != 253603960)
	{
		if ((Var7 != 1119253406 && Var7 != -339889117) && Var7 != -1968468235)
		{
			iVar25 = Var7.f_9;
			if (Var7 == 193788635 || Var7 == -1198174119)
			{
				iVar26 = func_1926(uParam0);
				if (Var7.f_2 > 0)
				{
					Var27 = { func_1927(iVar26, (Var7.f_2 - 1), &(uParam0->f_2207)) };
					if (!func_1928(Var7.f_1) && func_1928(Var27))
					{
						iVar25 = Var7.f_1;
					}
					else
					{
						iVar25 = 0;
					}
				}
				else
				{
					iVar25 = 0;
				}
			}
			if (Var7 == 317179309)
			{
				if (func_1929(692350163, 0, 1, 0, 1) != 0 && !func_1931(func_1930(uParam0)))
				{
					func_1925(uParam0, 0, 1);
				}
				else
				{
					func_1106(uParam0);
				}
			}
			else if (Var7 == -1594421938)
			{
				if (func_1929(675142260, 0, 1, 0, 1) != 0 && !func_1933(func_1932(uParam0)))
				{
					func_1925(uParam0, 0, 1);
				}
				else
				{
					func_1106(uParam0);
				}
			}
			else if (Var7 == -1352600334)
			{
				Var31 = { func_1930(uParam0) };
				if (_0xb881ca836cc4b6d4(&Var31))
				{
					Var35.f_9 = -1591664384;
					func_1934(&Var31, &Var35);
					if (!func_1935(&(Var35.f_24), 64))
					{
						func_1925(uParam0, -1724045811, 0);
					}
					else
					{
						func_1106(uParam0);
					}
				}
				else
				{
					func_1106(uParam0);
				}
			}
			else if (func_889(iVar25, 0))
			{
				bVar64 = false;
				if (((((((Var7 == -1502467280 || Var7 == 777890122) || Var7 == 1394581936) || Var7 == -853534656) || Var7 == -584027224) || Var7 == -87783305) || Var7 == -467661559) || Var7 == 848718617)
				{
					bVar64 = func_1906(uParam0, Var7.f_9, Var7);
				}
				else if (Var7 == -384358143)
				{
					Var65 = { func_831(iVar25, 0, 1) };
					iVar70 = func_1299(iVar25, &Var65, 0, 0);
					bVar64 = func_1936(iVar25, &Var65, iVar70, 0);
				}
				else if (Var7 == -1048755899)
				{
					if (iVar25 == -228768324 || iVar25 == 446901936)
					{
						bVar64 = func_1906(uParam0, iVar25, -1048755899);
					}
				}
				if (!bVar64 && !func_1937(iVar25))
				{
					func_1925(uParam0, iVar25, 0);
					func_1417(uParam0, iVar25, 0);
					func_1940(uParam0, (func_1938(uParam0, iVar25, Var7) && func_1939(iVar25)));
					if ((((Var7 == -239176093 || Var7 == 848718617) || Var7 == 1394581936) && !func_1902()) && func_1941(uParam0))
					{
						func_1943(uParam0, iVar25, func_1942());
						func_1944(uParam0, -1, iVar25, 0);
					}
				}
				else
				{
					func_1106(uParam0);
					func_1107(uParam0);
				}
			}
			else
			{
				func_1106(uParam0);
				func_1107(uParam0);
			}
		}
		else
		{
			func_1106(uParam0);
			func_1107(uParam0);
		}
	}
	else
	{
		func_1106(uParam0);
		func_1107(uParam0);
	}
	if (func_1390(func_1304(Var7.f_9), 2))
	{
		func_1945(uParam0, &Var7);
	}
	else
	{
		func_1946(uParam0, &Var7);
	}
	if (func_1947() == -1352600334 && func_1415() != -1352600334)
	{
		_0xd962f8579d702db5();
	}
	func_1916(uParam0, Var7);
	return 1;
}

int func_1395(var uParam0)
{
	return 1;
}

int func_1396(var uParam0)
{
	iVar0 = func_1947();
	switch (iVar0)
	{
		case -239176093:
			_databinding_add_data_bool_by_hash(func_1948(), func_1949(), false);
			break;
	}
	if (func_1902())
	{
		func_1429(uParam0, func_1948(), &bVar1);
		func_1430(uParam0, bVar1);
	}
	func_1950(uParam0);
	func_1431(1);
	return 1;
}

void func_1397(var uParam0)
{
	iVar0 = func_1951();
	iVar1 = func_1952(uParam0);
	bVar2 = iVar0 != false;
	if (bVar2)
	{
		iVar1 = (iVar1 + iVar0);
		func_1953(uParam0, iVar1);
		func_1954(0);
	}
	func_1955(uParam0, func_1952(uParam0));
}

int func_1398()
{
	return Global_1915715->f_20241.f_3.f_18;
}

int func_1399(var uParam0)
{
	iVar0 = func_1956();
	iVar1 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2207.f_52, -804795275);
	iVar2 = _databinding_read_data_int_from_parent_by_hash(uParam0->f_2207.f_52, 1184271882);
	iVar2 = (iVar2 + iVar0);
	iVar2 = func_1957(iVar2, 1, iVar1);
	func_1958(uParam0, iVar2);
	return 1;
}

bool func_1400(var uParam0)
{
	iVar0 = func_1421();
	iVar1 = _databinding_read_data_int_from_parent(iVar0, func_1959());
	iVar2 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_1422());
	iVar3 = _databinding_read_data_int_from_parent_by_hash(iVar0, func_1960());
	iVar4 = func_1956();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	_databinding_write_data_int_from_parent_by_hash(iVar0, func_1422(), iVar2);
	if (iVar1 == -395279071)
	{
		func_1961(uParam0, &iVar0, iVar2);
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
			if (func_1962(func_1389(), bVar5, &iVar6, &iVar7))
			{
				_databinding_add_data_hash_by_hash(iVar0, func_1963(), iVar6);
				_databinding_add_data_hash_by_hash(iVar0, func_1964(), iVar7);
			}
			_databinding_write_data_hash_string_from_parent_by_hash(iVar0, func_1965(), bVar5);
			func_1966(uParam0, bVar5);
			if ((func_1366(uParam0) == -2144266389 || func_1366(uParam0) == 2057502022) || func_1366(uParam0) == 1275816411)
			{
				func_1967(uParam0, func_1389(), 0);
			}
			iVar8 = func_1389();
			if (_is_weapon_one_handed(iVar8))
			{
				bVar19 = true;
				bVar20 = true;
				bVar21 = true;
				iVar17 = -1610187846;
				iVar18 = 190417139;
				Var9 = { func_667(iVar8, func_1273(0), bVar5, 0) };
				if (_0x6929e22158e52265(Global_34, 2, &uVar13))
				{
					if (func_1968(&Var9, &uVar13))
					{
						bVar19 = false;
						bVar20 = false;
					}
				}
				if (_0x6929e22158e52265(Global_34, 3, &uVar13))
				{
					if (func_1968(&Var9, &uVar13))
					{
						bVar19 = false;
						iVar18 = 165536584;
					}
				}
				if (!func_1683() || func_1969() < 2)
				{
					bVar21 = false;
				}
				func_1756(uParam0, 3, iVar17, bVar19, 1, 0);
				func_1756(uParam0, 2, iVar18, (bVar20 && bVar21), bVar21, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		func_1970(uParam0);
	}
	return true;
}

int func_1401()
{
	return Global_1915715->f_20241.f_3.f_36;
}

int func_1402(var uParam0)
{
	return uParam0->f_2207.f_78;
}

int func_1403(var uParam0)
{
	if (is_pc_version())
	{
		iVar0 = func_1971(uParam0->f_3);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return func_1972(&(uParam0->f_2207));
}

int func_1404(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &iVar0))
	{
		if (_item_database_get_shop_layout_menu_info_by_index(iParam0, iVar0, iParam2, &uVar7))
		{
			return uVar7;
		}
	}
	return -1;
}

bool func_1405(int iParam0, int iParam1, int iParam2)
{
	if (_item_database_get_shop_layout_menu_info_by_id(iParam0, iParam1, &Var0))
	{
		return func_954(Var0.f_3, iParam2);
	}
	return false;
}

bool func_1406(var uParam0, int iParam1, int iParam2)
{
	if (!func_1973(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = false;
			iVar8 = -1;
			iVar9 = 0;
			while (iVar9 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar9, &iVar8))
				{
					if (!func_1974(uParam0, iParam1, iVar8))
					{
						bVar7 = true;
					}
					else
					{
						iVar9++;
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

int func_1407(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1401();
	if (iVar0 == -1)
	{
		_databinding_add_data_int(uParam0->f_2207.f_50, "ItemListEntryIndex", iParam1);
	}
	else if (_virtual_collection_exists(func_1401()))
	{
		_virtual_collection_set_interest_index(func_1401(), iParam1);
	}
	return 1;
}

void func_1408(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_58))
	{
		uParam0->f_2207.f_58 = _databinding_add_ui_item_list(uParam0->f_2207.f_50, "ItemList");
	}
	else
	{
		func_1102(uParam0, &(uParam0->f_2207.f_58));
		_databinding_clear_binding_array(uParam0->f_2207.f_58);
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_59))
	{
		_databinding_remove_data_entry(uParam0->f_2207.f_59);
	}
	uParam0->f_2207.f_59 = _databinding_add_data_container(uParam0->f_2207.f_50, "ItemListEntries");
	Global_1915715->f_20241.f_44 = uParam0->f_2207.f_58;
}

int func_1409()
{
	return Global_1915715->f_20241.f_3.f_39;
}

int func_1410()
{
	return Global_1915715->f_20241.f_3.f_38;
}

bool func_1411(var uParam0, int iParam1, int iParam2)
{
	iVar0 = func_1366(uParam0);
	iVar1 = func_1402(uParam0);
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
				return func_1975(uParam0, func_1365(uParam0), iVar2, iParam2);
			}
			else
			{
				return func_1976(uParam0, func_1365(uParam0), iVar2, iParam2);
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
				if (func_1388(uParam0) == -1081756941)
				{
					return func_1977(uParam0, 0, -1) > 0;
				}
				else if (func_1388(uParam0) == -918663084)
				{
					return func_1978(uParam0, 0, -1) > 0;
				}
			}
			return func_1979(uParam0, uParam0->f_2207.f_74, iVar2, iParam2, 0);
		case -252412307:
			return func_1979(uParam0, uParam0->f_2207.f_74, iVar2, iParam2, 1);
		case 310306577:
		case 1705401718:
			return func_1980(uParam0, iVar2, iParam2);
		case 1860655620:
			return func_1981(uParam0, iVar2, iParam2);
		case 94016929:
			return func_1982(uParam0, iVar2, iParam2);
		case 1426047132:
			return func_1983(uParam0, iVar2, iParam2);
		case 803749366:
			return func_1984(uParam0, iVar2, iParam2);
		case -440651963:
			return func_1985(uParam0, iVar2, iParam2);
		case 1013443471:
			return func_1986(uParam0, iVar2, iParam2);
		case 23814986:
			return func_1987(uParam0, iVar2, iParam2);
		case 253603960:
			return func_1988(uParam0, iVar2, iParam2);
		case -946221162:
			if (uParam0->f_3 == 33)
			{
				if (func_1365(uParam0) == 603940701)
				{
					return func_1989(uParam0, 0, 0) > 0;
				}
			}
			else
			{
				return func_1990(uParam0, 0, 0) > 0;
			}
			break;
		default:
			break;
	}
	return false;
}

void func_1412()
{
	func_1381(1024);
}

void func_1413(var uParam0)
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
		func_1107(uParam0);
		Global_1915715->f_20241.f_3.f_4 = 1;
	}
	if (uParam0->f_2207.f_103 && !_0x42095b886d30de66(1289756680))
	{
		uParam0->f_2207.f_103 = 0;
		if (func_358(uParam0->f_2207.f_102))
		{
			func_363(uParam0->f_2207.f_102, 1, 0);
		}
		if (func_358(uParam0->f_2207.f_101))
		{
			func_363(uParam0->f_2207.f_101, 1, 0);
		}
	}
}

bool func_1414(var uParam0)
{
	if (!func_358(uParam0->f_2207.f_102) || uParam0->f_2207.f_103)
	{
		return false;
	}
	return func_1991(uParam0->f_2207.f_102, 1);
}

int func_1415()
{
	iVar0 = _databinding_read_data_int_from_parent(func_1421(), func_1959());
	return iVar0;
}

int func_1416()
{
	iVar0 = _databinding_read_data_int_from_parent(func_1421(), func_1992());
	return iVar0;
}

int func_1417(var uParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!func_889(iParam1, 0))
		{
			func_1107(uParam0);
			return 0;
		}
		if (func_1993(iParam1))
		{
			func_1107(uParam0);
			return 0;
		}
		if (func_1907(iParam1, 1))
		{
			func_1107(uParam0);
			return 0;
		}
		iVar0 = 0;
		while (iVar0 < 8)
		{
			bVar2 = func_1994(iVar0, 1, 1);
			iVar3 = func_1995(iParam1, bVar2, 0);
			if (func_889(iVar3, 0))
			{
				Var4 = { func_1137(iVar3, 0) };
				if (func_1996(&Var4))
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
			func_1107(uParam0);
			return 0;
		}
	}
	if (!func_358(uParam0->f_2207.f_102))
	{
		uParam0->f_2207.f_102 = func_1027(_create_var_string(0, -1215798841), -1460216218, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
		_uiprompt_set_attribute(func_1997(uParam0->f_2207.f_102), 18, 1);
		_uiprompt_set_attribute(func_1997(uParam0->f_2207.f_102), 17, 1);
		_uiprompt_set_attribute(func_1997(uParam0->f_2207.f_102), 14, 1);
		_0x958278b97c4affd8(func_1997(uParam0->f_2207.f_102), _0x066725a9d52b3641() + 1);
		_uiprompt_set_urgent_pulsing_enabled(func_1997(uParam0->f_2207.f_102), true);
		if (_is_app_active(1289756680) && _0x42095b886d30de66(1289756680))
		{
			uParam0->f_2207.f_103 = 1;
			func_363(uParam0->f_2207.f_102, 0, 1);
		}
	}
	return 1;
}

bool func_1418(var uParam0)
{
	return func_358(uParam0->f_2207.f_102);
}

char* func_1419(int iParam0)
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

bool func_1420(int iParam0)
{
	return func_893(iParam0) == -1784221369;
}

int func_1421()
{
	return Global_1915715->f_20241.f_3.f_13;
}

int func_1422()
{
	return 1999907591;
}

bool func_1423(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (func_1973(iParam1))
	{
		Var0.f_20 = 10;
		Var0.f_31 = 10;
		if (func_1740(iParam1, &Var0))
		{
			if (func_1998(iParam2, &Var0))
			{
				if (!uParam0->f_2207.f_69)
				{
					func_1871(&(uParam0->f_2207));
				}
				iVar44 = func_1742(&(uParam0->f_2207));
				uVar45 = func_1972(&(uParam0->f_2207));
				uVar46 = uParam0->f_2207.f_71;
				uVar47 = func_1999(&(uParam0->f_2207));
				iVar48 = func_1427();
				if (iParam3 != -1)
				{
					if (func_1998(iParam3, &Var0))
					{
						uParam0->f_2207.f_71 = iParam3;
					}
					else
					{
						return false;
					}
				}
				else if (func_2000(iParam1, iParam2, &uVar49))
				{
					uParam0->f_2207.f_71 = uVar49;
				}
				else
				{
					return false;
				}
				uParam0->f_2207 = { Var0 };
				func_1739(uParam0, uParam0->f_20);
				iVar50 = 0;
				if (func_2001(uParam0, iParam2, &iVar50))
				{
					if (bParam4)
					{
						if (func_1387(&(uParam0->f_2207)))
						{
							uParam0->f_2207.f_79 = iVar50;
							if (!func_1448())
							{
							}
						}
						else
						{
							func_2002(uParam0);
						}
					}
					if (bParam5)
					{
						func_2003(uParam0);
						uParam0->f_2207.f_121 = 1;
						uParam0->f_2207.f_121.f_1 = 1;
						uParam0->f_2207.f_121.f_2 = iVar44;
						uParam0->f_2207.f_121.f_3 = uVar45;
						uParam0->f_2207.f_121.f_4 = uVar46;
						uParam0->f_2207.f_121.f_5 = uVar47;
						uParam0->f_2207.f_121.f_6 = iVar48;
						if (iParam3 != -1)
						{
							uParam0->f_2207.f_121.f_7 = iParam3;
						}
						else
						{
							uParam0->f_2207.f_121.f_7 = iParam2;
						}
						uParam0->f_2207.f_121.f_8 = iParam1;
					}
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1424(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_58))
	{
		return false;
	}
	iVar0 = _databinding_get_array_count(uParam0->f_2207.f_58);
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = _databinding_get_item_context_by_index(uParam0->f_2207.f_58, iVar1);
		func_1429(uParam0, iVar3, &bVar2);
		iVar1++;
	}
	func_1430(uParam0, bVar2);
	return true;
}

bool func_1425(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0->f_2207.f_60))
	{
		return false;
	}
	iVar0 = uParam0->f_2207.f_73;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = _databinding_get_item_context_by_index(uParam0->f_2207.f_60, iVar1);
		if (_databinding_is_data_id_valid(iVar2))
		{
			func_2004(&Var3, &iVar2);
			if (!func_2005(uParam0, Var3, Var3.f_3, Var3.f_1, &iVar2, 0))
			{
			}
		}
		iVar1++;
	}
	return true;
}

bool func_1426(var uParam0, int iParam1)
{
	*iParam1 = 0;
	iVar0 = func_1366(uParam0);
	switch (iVar0)
	{
		case -996064024:
		case 1036144478:
		case 2057502022:
			if (!func_2006(uParam0, func_1365(uParam0), iParam1))
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
				if (func_1388(uParam0) == -1081756941)
				{
					*iParam1 = func_1977(uParam0, 1, -1);
					return true;
				}
				else if (func_1388(uParam0) == -918663084)
				{
					*iParam1 = func_1978(uParam0, 1, -1);
					return true;
				}
			}
			if (!func_2007(uParam0, uParam0->f_2207.f_74, iParam1))
			{
			}
			return true;
		case 310306577:
		case 1705401718:
			*iParam1 = func_2008(&(uParam0->f_2207));
			return true;
		case 1860655620:
			*iParam1 = func_2009(0);
			return true;
		case 94016929:
			*iParam1 = func_2010(0, &(uParam0->f_2207));
			if (*iParam1 <= 0)
			{
			}
			return true;
		case 1426047132:
			*iParam1 = func_2010(0, &(uParam0->f_2207));
			if (*iParam1 <= 0)
			{
			}
			return true;
		case 803749366:
			*iParam1 = func_2011(0);
			return true;
		case 1013443471:
			return true;
		case 23814986:
			return true;
		case 253603960:
			*iParam1 = (*iParam1 + func_2012(uParam0, 1, -1));
			*iParam1 = (*iParam1 + func_2013(uParam0, 1045621973, 1, -1, 0));
			*iParam1 = (*iParam1 + func_2013(uParam0, 1583044470, 1, -1, 0));
			*iParam1 = (*iParam1 + func_2013(uParam0, 1005272, 1, -1, 0));
			*iParam1 = (*iParam1 + func_2013(uParam0, 1463321587, 1, -1, 0));
			*iParam1 = (*iParam1 + func_2013(uParam0, 348853959, 1, -1, 0));
			return true;
		case -946221162:
			if (uParam0->f_3 == 33)
			{
				if (func_1365(uParam0) == 603940701)
				{
					*iParam1 = func_1989(uParam0, 1, -1);
					return true;
				}
			}
			else
			{
				*iParam1 = func_1990(uParam0, 1, -1);
				return true;
			}
			break;
		case -440651963:
			iVar1 = 0;
			while (iVar1 < 6)
			{
				if (func_2014(iVar1))
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

int func_1427()
{
	return Global_1915715->f_20241.f_3.f_11;
}

int func_1428(var uParam0, int iParam1, bool bParam2)
{
	if (!_virtual_collection_exists(func_1401()))
	{
		return 0;
	}
	_virtual_collection_reset(func_1401());
	if (iParam1 >= 0)
	{
		uParam0->f_2207.f_119 = iParam1;
	}
	if (bParam2)
	{
		func_2002(uParam0);
	}
	return 1;
}

void func_1429(var uParam0, int iParam1, bool bParam2)
{
	if (_databinding_is_data_id_valid(iParam1))
	{
		func_2004(&Var5, &iParam1);
		switch (Var5.f_1)
		{
			case -1968468235:
				iVar0 = _databinding_read_data_hash_string_from_parent(iParam1, func_2015());
				iVar3 = iVar0;
				iVar1 = _databinding_read_data_hash_string_from_parent(iParam1, func_2016());
				iVar4 = iVar1;
				iVar2 = _databinding_read_data_hash_string_from_parent(iParam1, func_2017());
				func_2018(uParam0, Var5.f_2, &iParam1, 0, iVar3, iVar4, iVar2);
				break;
			case 336033112:
				func_2019(uParam0, Var5.f_2, &iParam1);
				break;
			case -1499658354:
				func_2020(uParam0, Var5.f_2, &iParam1);
				break;
			case 193788635:
				if (!func_2021(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -1198174119:
				if (!func_2022(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case 1119253406:
				if (!func_2023(uParam0, Var5.f_2, Var5.f_5, &iParam1, 0))
				{
					return;
				}
				break;
			case 1837492866:
				*bParam2 = 1;
				if (!func_2024(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -1080155519:
				if (!func_2025(uParam0, Var5, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -760956867:
				if (!func_2026(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 38807286:
				if (!func_2027(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -339889117:
				if (!func_2028(uParam0, Var5, Var5.f_3, Var5.f_4, &iParam1, 0))
				{
					return;
				}
				break;
			case -395279071:
				if (!func_2029(uParam0, _databinding_read_data_int_from_parent(iParam1, func_1992()), &iParam1))
				{
					return;
				}
				break;
			case -348190488:
				if (!func_2030(uParam0, Var5, Var5.f_3, Var5.f_4, &iParam1, 0))
				{
					return;
				}
				break;
			case -384358143:
				if (func_1390(func_1304(Var5), 2))
				{
					if (!func_2031(uParam0, func_1304(Var5), &iParam1))
					{
						return;
					}
				}
				else if (func_889(Var5, 0))
				{
					if (!func_2033(uParam0, Var5, func_2032(Var5, 0), &iParam1))
					{
						return;
					}
				}
				break;
			case 1425890997:
				if (!func_2034(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1395073769:
				if (!func_2035(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -853534656:
				if (!func_2036(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -349391286:
				Var5.f_1 = func_2037(uParam0, Var5);
				if (Var5.f_1 != -349391286)
				{
					_databinding_add_data_int(iParam1, func_1959(), Var5.f_1);
					func_1429(uParam0, iParam1, bParam2);
					return;
				}
				else if (!func_2038(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 2036169888:
				if (!func_2039(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1086794738:
				if (!func_2040(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1928601151:
				if (!func_2041(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 1850514202:
				if (!func_2042(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -239176093:
				if (!func_2043(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 848718617:
				if (!func_2044(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 1394581936:
				if (!func_2045(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 777890122:
				if (!func_2046(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -1502467280:
				if (!func_2047(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -584027224:
				if (!func_2048(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case -87783305:
				if (!func_2049(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
			case 761079318:
				if (!func_2050(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -2056428614:
				if (!func_2051(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 753463028:
				if (!func_2052(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 1942587409:
				if (!func_2053(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case 2077448405:
				if (!func_2054(uParam0, Var5, &iParam1, 0))
				{
					return;
				}
				break;
			case -1048755899:
				Var16 = { func_831(Var5, 0, 1) };
				iVar21 = func_1299(Var5, &Var16, 0, 0);
				bVar22 = func_1936(Var5, &Var16, iVar21, 0);
				if (!func_2055(uParam0, Var5, iVar21, bVar22, &iParam1))
				{
					return;
				}
				break;
			case -1352600334:
				if (!func_2056(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -772187037:
				if (!func_2057(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -2092532275:
				if (!func_2058(uParam0, &iParam1))
				{
					return;
				}
				break;
			case 317179309:
				if (!func_2059(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -1594421938:
				if (!func_2060(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -698448975:
				iVar23 = _databinding_read_data_int_from_parent(iParam1, func_1992());
				if (!func_2061(iVar23))
				{
					return;
				}
				if (!func_2062(uParam0, iVar23, &iParam1))
				{
					return;
				}
				break;
			case -627085098:
				if (!func_2063(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case -841939068:
				if (!func_2064(uParam0, Var5.f_2, &iParam1))
				{
					return;
				}
				break;
			case 1751567119:
				if (!func_2065(uParam0, &iParam1))
				{
					return;
				}
				break;
			case -467661559:
				if (!func_2066(uParam0, Var5, &iParam1))
				{
					return;
				}
				break;
		}
	}
	if (func_1366(uParam0) == -252412307)
	{
		if (!func_2067(uParam0, Var5, Var5.f_1, &iParam1, 0))
		{
			return;
		}
	}
}

void func_1430(var uParam0, bool bParam1)
{
	if (func_1366(uParam0) == 94016929)
	{
		if (bParam1)
		{
			if (func_2068() == 0 && func_2069() != 5)
			{
				func_1428(uParam0, -1, 1);
			}
		}
		else if (func_2068() != 0 || (func_2068() == 0 && func_2069() == 5))
		{
			func_1428(uParam0, -1, 1);
		}
	}
}

void func_1431(int iParam0)
{
	Global_1915715->f_20241.f_3.f_6 = iParam0;
}

bool func_1432(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_1918(iParam0))
		{
			return false;
		}
	}
	if (func_2070(&(iParam0->f_6)))
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

void func_1433()
{
	Global_1915715->f_20241.f_3.f_4 = 1;
}

bool func_1434(var uParam0, int iParam1)
{
	return func_954(uParam0->f_2207.f_45, iParam1);
}

void func_1435(var uParam0)
{
	uParam0->f_2207.f_83 = 1;
}

bool func_1436(var uParam0)
{
	return uParam0->f_2207.f_83;
}

void func_1437(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_2207.f_163 && (iParam1 == 1 || iParam1 == 7))
	{
		return;
	}
	bVar0 = func_2071(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1879(iParam1, bVar0), bParam2);
}

void func_1438(var uParam0)
{
	iVar0 = func_1415();
	iVar1 = func_1389();
	iVar2 = func_1421();
	if (iVar0 == 1119253406)
	{
		return;
	}
	if (iVar0 == 193788635 || iVar0 == -1198174119)
	{
		iVar1 = func_1416();
	}
	else if (iVar0 == 317179309)
	{
		iVar1 = 692350163;
	}
	else if (iVar0 == -1594421938)
	{
		iVar1 = 675142260;
	}
	else if (iVar0 == -1352600334)
	{
		iVar1 = -1724045811;
	}
	if (!func_889(iVar1, 0))
	{
		if (func_1902())
		{
			func_1569(0);
		}
		return;
	}
	bVar3 = func_1938(uParam0, iVar1, iVar0);
	bVar3 = (bVar3 && func_1432(&(uParam0->f_2160), 0));
	if (!func_1905())
	{
		if (func_2072(iVar1, &iVar4))
		{
			if (!func_2073(iVar4, -570078785, &uVar5, 1, 0))
			{
				bVar3 = false;
			}
		}
		else if (func_2074(iVar1, -570078785))
		{
			if (!func_2075(iVar1, 1, -570078785, 1))
			{
				bVar3 = false;
			}
		}
	}
	bVar10 = func_2072(iVar1, &uVar9);
	if (func_2076(iVar1))
	{
		if (func_2077(uParam0))
		{
			if (!func_1902())
			{
				func_1569(1);
				func_2078(Global_1051439->f_3258, iVar1, &Var11);
				if (Var11.f_1 != 0 && Var11 != 0)
				{
					if (func_1905() || func_1909(Var11.f_3))
					{
						_databinding_add_data_bool(iVar2, func_2079(), true);
					}
					func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_OFFER_WITH_GOLD", func_986(Var11.f_3)), 1, 1, 1);
					func_1922(&uVar15, uParam0);
					func_1946(uParam0, &uVar15);
					func_2081(uParam0, iVar1);
				}
			}
		}
		else if (func_1902())
		{
			func_1569(0);
			func_2082();
		}
	}
	else if (func_1903(iVar1))
	{
		iVar8 = func_2083(iVar1, 0, 1, -1, 1);
		iVar7 = func_1929(iVar1, iVar8, 1, 0, 1);
		if (func_1366(uParam0) == 310306577)
		{
			iVar7 = func_1444(uParam0, &bVar33, 0, 1);
			if (bVar33)
			{
				bVar3 = false;
			}
			else if (!func_1909(iVar7 * 100) && !func_1905())
			{
				bVar3 = false;
			}
		}
		else if (func_1910(iVar1))
		{
			bVar3 = !func_1911(uParam0, iVar1);
		}
		if (bVar10)
		{
			if (func_2077(uParam0))
			{
				if (!func_1902())
				{
					func_1569(1);
				}
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_NOW_WITH_GOLD", iVar7), bVar3, 1, 1);
			}
			else if (func_1902())
			{
				func_1569(0);
				func_2082();
			}
		}
		else if ((!func_1912(iVar1, iVar8, 1) && func_1939(iVar1)) && bVar3)
		{
			if (!func_1941(uParam0) && func_2084(iVar1, 1))
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", iVar7, func_2085(iVar1, 1)), iVar7 > 0, 1, 1);
			}
			else if (func_2086(iVar8))
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_OFFER_WITH_GOLD", iVar7), iVar7 > 0, 1, 1);
			}
			else
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", iVar7), iVar7 > 0, 1, 1);
			}
		}
		if (func_1366(uParam0) != 310306577)
		{
			if (func_1941(uParam0))
			{
				func_1944(uParam0, -1, iVar1, 0);
			}
		}
	}
	else if (func_2077(uParam0))
	{
		if (!func_1902())
		{
			func_1569(1);
		}
		iVar8 = func_2083(iVar1, 0, 1, -1, 1);
		iVar7 = func_1929(iVar1, iVar8, 1, 0, 1);
		bVar34 = false;
		if (bVar3)
		{
			if ((iVar1 == -862059856 || func_947(iVar1) == -186198417) || func_947(iVar1) == 1528977929)
			{
				bVar34 = !func_2087(uParam0, iVar1);
				bVar3 = !bVar34;
			}
		}
		if (!func_1918(&(uParam0->f_2160)))
		{
			if (bVar10)
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_NOW_WITH_GOLD", iVar7), bVar3, 1, 1);
			}
			else if (!func_1941(uParam0) && func_2084(iVar1, 1))
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", iVar7, func_2085(iVar1, 1)), bVar3, 1, 1);
			}
			else
			{
				func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", iVar7), bVar3, 1, 1);
			}
		}
		if (func_1366(uParam0) == 310306577)
		{
			iVar7 = func_1444(uParam0, &bVar35, 0, 1);
			if (func_1941(uParam0))
			{
				iVar36 = func_1444(uParam0, &bVar35, 0, 0);
				Var37 = -1;
				Var37.f_1 = -1;
				Var37.f_2 = -1;
				Var37.f_4 = 1;
				Var37.f_5 = -1;
				Var37.f_7 = -1;
				Var37.f_1 = iVar7;
				Var37.f_2 = iVar36;
				Var37.f_3 = 1;
				if (func_2088(uParam0, iVar1))
				{
					Var37.f_4 = 0;
					if (func_2089(iVar1, &iVar45, &uVar46, 1) && iVar45 == 0)
					{
						Var37.f_5 = uVar46;
					}
				}
				if (bVar35)
				{
					Var37.f_7 = -298752054;
					Var37.f_4 = 0;
				}
				func_2090(uParam0, &Var37);
			}
			bVar47 = (func_1909(iVar7 * 100) && !bVar35);
			bVar3 = (((!bVar47 && !bVar35) && func_1905()) || bVar47);
			if (!func_1918(&(uParam0->f_2160)))
			{
				if (!func_1941(uParam0) && func_2084(iVar1, 1))
				{
					func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD_TOKEN", iVar7, func_2085(iVar1, 1)), bVar3, 1, 1);
				}
				else
				{
					func_2080(uParam0, 1, _create_var_string(2, "SHOP_BUY_WITH_GOLD", iVar7), bVar3, 1, 1);
				}
			}
		}
		else
		{
			_databinding_add_data_bool(iVar2, "useGoldPrice", true);
			if ((iVar0 != 848718617 && !bVar34) && !func_1941(uParam0))
			{
				_databinding_add_data_bool(iVar2, "forSale", func_1939(iVar1));
			}
			_databinding_add_data_int(iVar2, "price", iVar7);
			bVar48 = (bVar3 && func_1939(iVar1));
			if (func_947(iVar1) == -1895880220 || func_947(iVar1) == 1099996440)
			{
				bVar48 = false;
			}
			_databinding_add_data_bool(iVar2, func_2079(), bVar48);
			_databinding_add_data_bool_by_hash(iVar2, func_1949(), bVar48);
			func_2091(uParam0, bVar48);
			func_1922(&uVar49, uParam0);
			func_1946(uParam0, &uVar49);
			if (func_1415() == -239176093)
			{
				func_1756(uParam0, 5, -1451828257, 1, 1, 0);
			}
			if (func_1941(uParam0))
			{
				func_1944(uParam0, -1, iVar1, 0);
			}
		}
	}
	else if (func_1902())
	{
		func_1569(0);
		func_2082();
	}
}

bool func_1439(int iParam0)
{
	return func_947(iParam0) == -712836614;
}

int func_1440(var uParam0)
{
	iVar0 = func_1367(uParam0);
	if (does_entity_exist(iVar0))
	{
		Var1 = { func_2092() };
		Var5.f_9 = -1591664384;
		if (func_1277(Var1, &Var5, 0, 0, -1))
		{
			func_2093(uParam0, Var1);
		}
		else
		{
			Var19 = { func_1930(uParam0) };
			Var23 = { func_2094(&Var19, 0) };
			func_2095(&Var23, &uVar47);
			func_2096(&Var23, &Var55);
			if (Var55 == -377364164 || Var55.f_1 == 357708345)
			{
				_0xa5bae410b03e7371(iVar0, 0, 0, 1);
				func_2097(iVar0, &Var55, &uVar47, 0, 1);
				iVar57 = func_1171(Var19, -653439684, 0, -1);
				if (iVar57 == -388128145)
				{
					func_2098(iVar0, 1);
				}
				else
				{
					func_2098(iVar0, 2);
				}
			}
			else
			{
				func_2099(&Var19, iVar0);
			}
		}
		func_2100(uParam0);
	}
	return 1;
}

bool func_1441(int iParam0)
{
	if (func_947(iParam0) == -126813555 || func_947(iParam0) == 1946043663)
	{
		return true;
	}
	return false;
}

void func_1442(int iParam0, var uParam1)
{
	if (func_2101(iParam0, &uVar0))
	{
		Var4 = -1;
		Var4.f_4.f_7 = -142743235;
		Var4.f_4.f_16 = -1;
		func_2102(iParam0, &Var4);
		Var25 = { Var4.f_4 };
		iVar42 = Global_1915715->f_20241.f_3.f_35;
		uVar43 = Var25.f_16;
		_0x621d719c4836292b(&uVar0, func_2103(iVar42), iVar42, uVar43, uParam1, func_2104());
	}
	func_1443();
}

void func_1443()
{
	if (Global_1915715->f_20241.f_3.f_35 != 0)
	{
		Global_1915715->f_20241.f_3.f_35 = 0;
	}
}

int func_1444(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 1;
	if (uParam0->f_2207.f_164 > 0)
	{
		*bParam1 = 0;
		iVar0 = 0;
		if (bParam2)
		{
			iVar0 = -570078785;
		}
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < uParam0->f_2207.f_164)
		{
			if (!(func_2074(&(uParam0->f_2207.f_164.f_1[iVar2]), 59806960) && func_1902()))
			{
				iVar1 = (iVar1 + func_1929(&(uParam0->f_2207.f_164.f_1[iVar2]), iVar0, 1, 0, bParam3));
			}
			iVar2++;
		}
		return iVar1;
	}
	return 0;
}

void func_1445(int iParam0, int iParam1, int iParam2)
{
	Global_1051439->f_4466.f_3 = iParam0;
	Global_1051439->f_4466.f_4 = iParam1;
	Global_1051439->f_4466.f_5 = iParam2;
}

bool func_1446(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		Var0.f_2 = 0;
		Var0.f_3 = get_hash_key("SHOP_YES");
		Var0.f_3.f_3 = 0;
		Var0.f_7 = get_hash_key("SHOP_NO");
		Var0.f_3.f_3 = 0;
		func_2105(&Var0);
		*uParam0 = func_2106(&Var0, "GLOBAL_ALERT_DEFAULT", "WARDROBE_WARNING_INTRO_EXIT", 0, 0, 1);
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

void func_1447(var uParam0, int iParam1)
{
	func_728(&(uParam0->f_2207.f_45), iParam1);
}

bool func_1448()
{
	return _request_uiapp_transition_by_hash(1289756680, 677247760);
}

var func_1449(var uParam0)
{
	return uParam0->f_42;
}

void func_1450(var uParam0)
{
	if (uParam0->f_2506.f_7 == 0)
	{
		return;
	}
	_hide_hud_component(uParam0->f_2506.f_5);
	switch (uParam0->f_2506.f_7)
	{
		case 2:
			if (!func_1774(uParam0->f_2506.f_6, &(uParam0->f_2506.f_16), 0))
			{
			}
			else
			{
				if (func_1584(4, uParam0->f_2506.f_16))
				{
					Var16 = { func_2107(uParam0->f_2506.f_16) };
				}
				else
				{
					StringCopy(&Var16, _get_label_text_by_hash(uParam0->f_2506.f_6), 64);
				}
				if (func_2108(&Var16, "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					func_2109(Var8, uParam0->f_2506.f_16);
					func_930(1048576);
					Global_1915715->f_20241.f_3.f_4 = 1;
				}
				uParam0->f_2506.f_7 = 0;
				Jump @348; //curOff = 201
				if (func_2108(_get_label_text_by_hash(uParam0->f_2506.f_6), "NET_ENTER_OUTFIT_NAME_PROMPT", "NET_ENTER_OUTFIT_NAME_DESC", 16, &Var8, Var0, 0))
				{
					func_2109(Var8, uParam0->f_2506.f_16);
					func_2110(uParam0, 0);
					Global_1952637->f_1675 = uParam0->f_2506.f_6;
					func_2111(uParam0->f_2506.f_16, 0, 1, 6);
					func_1773(uParam0->f_2506.f_6, 0);
					func_2112(uParam0->f_2506.f_6);
					func_930(1048576);
					Global_1915715->f_20241.f_3.f_4 = 1;
				}
				uParam0->f_2506.f_7 = 0;
			}
			_display_hud_component(uParam0->f_2506.f_5);
			default:
				break;
	}
}

void func_1451(var uParam0)
{
	if (func_609(&(uParam0->f_2506), 8) && func_609(&(uParam0->f_2506), 16))
	{
		uParam0->f_2506.f_10 = 1256619963;
		func_1781(&(uParam0->f_2506), 8);
	}
	if (uParam0->f_2506.f_11 == uParam0->f_2506.f_10)
	{
		return;
	}
	else if (!func_609(&(uParam0->f_2506), 32))
	{
		animpostfx_play("CamTransitionBlink");
		uParam0->f_2506.f_18 = get_game_timer();
		func_933(&(uParam0->f_2506), 32);
		func_930(134217728);
	}
	if ((get_game_timer() - uParam0->f_2506.f_18) < 120)
	{
		return;
	}
	uParam0->f_2506.f_21 = func_2113(uParam0);
	uParam0->f_2506.f_21 = ((uParam0->f_2506.f_21 + 180f) % 360f);
	uParam0->f_2506.f_11 = uParam0->f_2506.f_10;
	set_anim_scene_origin(uParam0->f_2506.f_14, uParam0->f_2506.f_27, 0f, 0f, uParam0->f_2506.f_21, 0);
	func_1781(&(uParam0->f_2506), 32);
	func_1781(&(uParam0->f_2506), 16);
	func_607(134217728);
}

bool func_1452(int iParam0, int iParam1)
{
	iVar0 = &Global_1952637->f_1675.f_1[iParam1];
	iVar1 = func_947(iVar0);
	if (iParam0 == 491480257 && (iVar1 == -2061583405 || iVar1 == 2086043523))
	{
		return &Global_1952637->f_1675.f_1[iParam1] == &Global_1952637->f_83[iParam1];
	}
	else if (iParam0 == -1789518572 && iVar1 == -923693316)
	{
		return &Global_1952637->f_1675.f_1[iParam1] == &Global_1952637->f_83[iParam1];
	}
	else if (iParam0 == -275040139 && iVar1 == 1882579758)
	{
		return &Global_1952637->f_1675.f_1[iParam1] == &Global_1952637->f_83[iParam1];
	}
	else if (iParam0 == -992705550)
	{
		if ((!func_894(iVar0, 160827531) && iVar1 != 81053684) || iParam0 == iVar0)
		{
			return true;
		}
	}
	else if (iParam0 != &Global_1952637->f_83[iParam1])
	{
		iVar2 = func_947(iParam0);
		if (iVar2 != iVar1)
		{
			return true;
		}
	}
	return &Global_1952637->f_1675.f_1[iParam1] == &Global_1952637->f_83[iParam1];
}

void func_1453(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1454(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1455(int iParam0)
{
	return func_1234(iParam0, 2);
}

int func_1456(var uParam0)
{
	return uParam0;
}

bool func_1457(int iParam0)
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

bool func_1458(int iParam0)
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

int func_1459(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1224357681))
	{
		return 1;
	}
	return 0;
}

struct<10> func_1460(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_1461(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1462(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
	}
	if (func_894(iParam0, -393037696))
	{
		return true;
	}
	return false;
}

int func_1463(int iParam0)
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

int func_1464(int iParam0, int iParam1)
{
	iVar41 = 0;
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43]->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_1465(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_920(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char* func_1466(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_971(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

void func_1467(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_1468(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

bool func_1469(int iParam0)
{
	return func_1045(&(Global_1956200->f_1565), iParam0, 1);
}

bool func_1470(var uParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_886(bParam7);
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

bool func_1471(struct<2> Param0)
{
	iVar0 = func_1660(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_1472(int iParam0)
{
	if (!func_2114(iParam0))
	{
		if (_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
		{
			iVar0 = func_796(4, iParam0);
			if (iVar0 != 0)
			{
				func_807(iVar0, 0);
			}
		}
		return true;
	}
	iVar1 = func_796(2, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (_0xfbe782b3165ac8ec(iVar1))
	{
		iVar1 = func_796(3, iParam0);
	}
	if (!func_2115((*Global_1835011)[iParam0]->f_32) && iVar1 == 0)
	{
		return true;
	}
	if ((_unlock_is_visible((*Global_1835011)[iParam0]->f_3) && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3)) || !_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		if (!func_799((*Global_1835011)[iParam0]->f_32))
		{
			(*Global_1835011)[iParam0]->f_32 = func_807(iVar1, 0);
		}
		else
		{
			switch (func_808((*Global_1835011)[iParam0]->f_32, 0))
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

void func_1473(int iParam0)
{
	Global_1878407->f_6 = iParam0;
}

void func_1474(int iParam0, bool bParam1)
{
	if (!func_2114(iParam0))
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

bool func_1475(int iParam0, int iParam1)
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

bool func_1476(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

void func_1477(bool bParam0)
{
	if (!bParam0)
	{
		func_527(14);
	}
	else
	{
		func_526(14);
	}
}

void func_1478()
{
	func_2116(1);
	func_2116(2);
	func_2116(4);
	func_2116(8);
	func_2116(16);
	func_2116(32);
	func_2116(64);
	func_2116(128);
	func_2116(256);
	func_2116(512);
	func_2116(1024);
	func_2116(2048);
	func_2116(4096);
	func_2116(8192);
	func_2117();
	func_2118();
}

void func_1479(int iParam0)
{
	if (!func_2119(iParam0))
	{
		return;
	}
	iVar0 = get_player_index();
	if (!_network_is_player_index_valid(iVar0) || !network_is_player_connected(iVar0))
	{
		return;
	}
	if (!func_2120(iParam0, iVar0))
	{
		return;
	}
	_0xb909149f2bb5f6da(&((*Global_1056141)[iVar0]->f_15.f_20), iParam0);
}

void func_1480(int iParam0)
{
	if (&Global_1211315 == iParam0)
	{
		return;
	}
	Global_1211315 = iParam0;
}

int func_1481(int iParam0)
{
	switch (func_2121(iParam0))
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

void func_1482(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	Global_1878407->f_7 = 0f;
	func_2122(iParam0);
}

void func_1483(struct<2> Param0, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_789(Param0))
	{
		return;
	}
	if (!func_1471(Param0) && !func_1659(Param0))
	{
		return;
	}
	if (bParam2)
	{
		*Global_1900869 = { Param0 };
		Global_1900871 = get_game_timer();
	}
	if (func_1660(Param0) == 4)
	{
		if (!func_1660(Param0) == 5 && !func_1660(Param0) == 6)
		{
			func_1662(Param0, 5);
			func_1666(Param0);
		}
		return;
	}
	if (func_1660(Param0) == 3)
	{
		func_1661(1, -1706799532);
	}
	else if (func_1660(Param0) == 4)
	{
		func_1661(0, -1706799532);
	}
	if (!func_1660(Param0) == 0)
	{
		if (_0x01f4d242765c6b24(func_1000(Param0)))
		{
			iVar0 = 0;
			func_472(Param0, iVar0, 0, 255, 0);
		}
	}
	if (func_1658(func_788(0), Param0))
	{
		func_629(1);
		func_1664(0);
		func_1665(1);
	}
	func_1662(Param0, 0);
	func_1666(Param0);
	func_1665(1);
	Global_1051252->f_45.f_1 = 1;
	iVar1 = func_998(Param0);
	if (iVar1 != 2 && iVar1 != 7)
	{
		_0x1096603b519c905f("");
	}
}

int func_1484()
{
	return Global_1051252->f_12;
}

char* func_1485()
{
	return "unnamed";
}

int func_1486(int iParam0)
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

bool func_1487(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_648(36, iParam0);
}

bool func_1488(int iParam0)
{
	if (func_2123(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_2124(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

int func_1489(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_2125(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_1490(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_2125(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1491(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return (*Global_1257541)[iParam0]->f_2;
}

bool func_1492(int iParam0, int iParam1)
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

bool func_1493(var uParam0)
{
	if ((!is_ped_dead_or_dying(*uParam0, true) && !is_ped_injured(*uParam0)) && !_0xb655db7582aec805(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_1494(var uParam0)
{
	if (is_ped_in_any_vehicle(*uParam0, false) || is_ped_on_vehicle(*uParam0, false))
	{
		iVar0 = get_vehicle_ped_is_using(*uParam0);
		iVar1 = get_entity_model(iVar0);
		if (iVar1 == 749266870 || iVar1 == -1552059402)
		{
			return true;
		}
	}
	return false;
}

int func_1495()
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

void func_1496(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_1497(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5)
{
	if (uParam0->f_7 == 0)
	{
		func_2126(uParam0, vParam2, vParam5, uParam1, 0.3f, 1, 0);
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

void func_1498(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, float fParam11)
{
	uParam0->f_7 = 0;
	if (!does_cam_exist(uParam0[0]))
	{
		(*uParam0)[0] = create_camera(26379945, false);
	}
	set_cam_affects_aiming(uParam0[0], false);
	stop_cam_pointing(uParam0[0]);
	set_cam_coord(uParam0[0], get_offset_from_entity_in_world_coords(*uParam1, vParam2));
	point_cam_at_coord(uParam0[0], get_offset_from_entity_in_world_coords(*uParam1, vParam5));
	set_cam_fov(uParam0[0], fParam11);
	shake_cam(uParam0[0], func_2127(3), 0.45f);
	set_cam_near_clip(uParam0[0], 0.15f);
	_0x9b1fc259187c97c0("player_outro");
	uParam0->f_13 = { vParam8 };
	uParam0->f_17 = 1;
}

Vector3 func_1499(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	func_2128(&vParam6, vParam3);
	return vParam0 + vParam6;
}

bool func_1500(var uParam0, var uParam1)
{
	func_2129(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_2130(uParam1);
	if (!func_2131(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_2132(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == -842959696)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == -10959621)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == 1936677264)
	{
		return true;
	}
	if (!func_2131(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_2132(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_1501(var uParam0)
{
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == -842959696 && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == -10959621 || uParam0->f_30.f_5 == 1936677264) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1940085->f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_2133(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2134(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2135(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

void func_1502(var uParam0, char* sParam1, int iParam2, int iParam3)
{
}

void func_1503(var uParam0, int iParam1)
{
	get_event_data(1, iParam1, &iVar0, 4);
	if (iVar0 != 9)
	{
		return;
	}
	Var4.f_5 = -1;
	Var4.f_6 = -1;
	Var4.f_7 = -1;
	Var4.f_7.f_1 = -1;
	Var4.f_10 = 255;
	Var4.f_17 = -1;
	Var4.f_18 = -1;
	Var4.f_19 = 7;
	Var4.f_19.f_1 = 255;
	Var4.f_19.f_1.f_1 = 255;
	Var4.f_19.f_1.f_1.f_1 = 255;
	Var4.f_19.f_1.f_1.f_1.f_1 = 255;
	Var4.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var4.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var4.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var4.f_27.f_1 = -1;
	if (!get_event_data(1, iParam1, &Var4, 31))
	{
		return;
	}
	switch (Var4.f_4)
	{
		case 0:
			func_112(uParam0, 17);
			break;
	}
}

void func_1504(var uParam0, int iParam1)
{
	Var0.f_10 = 255;
	if (!get_event_data(1, iParam1, &Var0, 19))
	{
		return;
	}
	if (Var0 != 176)
	{
		return;
	}
	if (uParam0->f_1348.f_139 != -1 && Var0.f_5 != uParam0->f_1348.f_139)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 9:
			if (!func_251(uParam0, 21))
			{
				func_112(uParam0, 21);
			}
			break;
		case 12:
			if (func_251(uParam0, 21))
			{
			}
			else
			{
				func_112(uParam0, 22);
				func_293(uParam0->f_1348.f_139);
			}
			break;
	}
}

void func_1505(var uParam0, int iParam1)
{
	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	if (!get_event_data(1, iParam1, &Var0, 40))
	{
		return;
	}
	if (Var0 != 175)
	{
		return;
	}
	if (uParam0->f_1348.f_139 != -1 && Var0.f_5 != uParam0->f_1348.f_139)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 11:
			if (!func_251(uParam0, 20))
			{
				func_112(uParam0, 20);
			}
			break;
	}
}

void func_1506(var uParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, &Var0, 10))
	{
		return;
	}
	if (Var0 != 46)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 5:
			func_112(uParam0, 37);
			break;
	}
}

void func_1507(var uParam0, int iParam1)
{
	if (!get_event_data(1, iParam1, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	switch (iVar12)
	{
		case 636936131:
			iVar33 = 0;
			while (iVar33 < Var0.f_9)
			{
				if (!_0xac8fab22a914ae34(&Var0, Var0.f_5, iVar33, &Var13))
				{
				}
				else if (!_item_database_fillout_item_info(Var13.f_8, &vVar26))
				{
				}
				else if (vVar26.z == -1037537535)
				{
					if (vVar26.y != 1033860813)
					{
					}
					else
					{
						func_328(uParam0->f_4, Var13.f_8, 0, -207860920, 1, 1, 1, 1, 0, 1, 1);
						Jump @178; //curOff = 163
						if (vVar26.z == -427144552)
						{
						}
					}
					iVar33++;
					Jump @372; //curOff = 187
					iVar33 = 0;
					while (iVar33 < Var0.f_9)
					{
						if (!_0xac8fab22a914ae34(&Var0, Var0.f_5, iVar33, &Var13))
						{
						}
						else if (!_item_database_fillout_item_info(Var13.f_8, &vVar26))
						{
						}
						else if (vVar26.z == -1037537535)
						{
							if (!_item_database_fillout_item_info(Var13.f_8, &vVar26))
							{
							}
							else
							{
								iVar24 = func_1771(vVar26.y);
								iVar25 = func_833(iVar24, 1);
								if (iVar25 < 0 || iVar25 >= 39)
								{
								}
								else if (&Global_1952637->f_1675.f_1[iVar25] != Var13.f_8)
								{
									func_328(uParam0->f_4, Var13.f_8, 0, iVar24, 1, 1, 1, 1, 0, 1, 1);
								}
							}
						}
						iVar33++;
					}
					func_2136(1);
				}
			}
			default:
				break;
	}
}

void func_1508(var uParam0)
{
	iVar0 = func_2137(&(Global_1296859->f_154[&Global_1296859]), 1);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_22);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_22);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_22);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_22);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_22);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_22);
			break;
		case 2:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_23);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_23);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_23);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_23);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_23);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_23);
			break;
		case 3:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_24);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_24);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_24);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_24);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_24);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_24);
			break;
		case 4:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_25);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_25);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_25);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_25);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_25);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_25);
			break;
		case 5:
			uParam0->f_17 = (uParam0->f_17 + Global_1901947->f_716.f_26);
			uParam0->f_17.f_1 = (uParam0->f_17.f_1 + Global_1901947->f_716.f_26);
			uParam0->f_17.f_2 = (uParam0->f_17.f_2 + Global_1901947->f_716.f_26);
			uParam0->f_6 = (uParam0->f_6 + Global_1901947->f_716.f_26);
			uParam0->f_6.f_1 = (uParam0->f_6.f_1 + Global_1901947->f_716.f_26);
			uParam0->f_6.f_2 = (uParam0->f_6.f_2 + Global_1901947->f_716.f_26);
			break;
		case 6:
			break;
	}
}

bool func_1509(var uParam0)
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

void func_1510()
{
	if (!func_648(132, 255))
	{
		return;
	}
}

void func_1511(bool bParam0)
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

void func_1512(int iParam0, bool bParam1)
{
	if (!func_604(32))
	{
		return;
	}
	func_379(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	func_607(32);
	func_838();
	Global_1139381->f_4779.f_4 = 0;
	Global_1139381->f_4779 = 0;
	func_2138(&(Global_1952637->f_2365));
	func_603(&(Global_1952637->f_2365));
	func_2139(4);
	if (bParam1)
	{
		func_229(iParam0, 1, 1, 0);
	}
	func_379(27, 0, 131074, 0, 0);
	func_379(34, 0, 131072, 0, 0);
}

void func_1513()
{
	func_2140(&(Global_1139381->f_3876.f_480));
}

void func_1514()
{
	func_2141();
	func_2142();
}

void func_1515(float fParam0)
{
	Global_1956200->f_1561.f_3 = fParam0;
}

struct<12> func_1516()
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
			Var0.f_3 = func_1220(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1220(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1220(2, 2);
			break;
	}
	return Var0;
}

void func_1517(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	iVar0 = player_ped_id();
	func_2143();
	func_2144();
	func_2145(&uParam0, iVar0);
	func_2146(&uParam0, iVar0);
	func_2147(&uParam0, iVar0);
	func_2148(&uParam0);
	func_2149();
	func_2150(1);
}

void func_1518()
{
	uVar0 = func_2151(-763706539, -1397419524);
	Global_1956200->f_1431.f_74.f_2 = uVar0;
	uVar1 = func_2151(258444835, 1449106310);
	Global_1956200->f_1431.f_74.f_3 = uVar1;
	fVar2 = func_2151(845057552, -458184788);
	fVar3 = func_2151(845057552, 1468884243);
	Global_1956200->f_1431.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_2152(-1645702932);
	Global_1956200->f_1431.f_74.f_5 = uVar4;
}

void func_1519()
{
	_0xd2d74f89df844a50(&(Global_1956200->f_1565));
}

void func_1520()
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

void func_1521(var uParam0)
{
	func_2153(uParam0);
	func_2154(&(uParam0->f_16));
	func_2155(&(uParam0->f_21));
	func_2156(&(uParam0->f_22));
	func_2157(&(uParam0->f_25));
	func_2158(&(uParam0->f_47));
	func_2159(&(uParam0->f_51));
	func_2160(&(uParam0->f_54));
	func_2161(&(uParam0->f_57));
}

void func_1522(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

var func_1523(int iParam0)
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
			iVar0 = func_1051(iParam0, 1);
			return &(Global_1137047->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

int func_1524(int iParam0)
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

int func_1525(int iParam0, var uParam1)
{
	if (func_2162(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1526(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1527(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1528(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 15;
		case 923956646:
			return 16;
		case 1459450644:
			return 17;
		case -2071675432:
			return 18;
		case -552339597:
			return 8;
		case 2144670272:
			return 10;
		case 996459079:
			return 9;
		case 1996177174:
			return 11;
		case -1702168032:
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1529(int iParam0)
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

int func_1530(int iParam0)
{
	switch (iParam0)
	{
		case 987444055:
			return -1;
		case 1330140418:
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case 672178273:
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case -42959138:
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		default:
			break;
	}
	return -1;
}

bool func_1531(var uParam0)
{
	uParam0->f_2 = -1462149998;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1532(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	if (func_2163(&vParam0, iParam5))
	{
		vParam0.f_2 = 1798123698;
		if (!_datafile_get_hash(&iVar0, &vParam0))
		{
			return -1;
		}
		if (iVar0 == 0)
		{
			return -1;
		}
		iVar1 = iVar0;
		iVar2 = -1;
		switch (iVar1)
		{
			case -385280713:
				iVar2 = 0;
				break;
			case 807929793:
				iVar2 = 1;
				break;
			case -1268861890:
				iVar2 = 2;
				break;
			case 1146624966:
				iVar2 = 3;
				break;
		}
		if (iVar2 != -1)
		{
			return iVar2;
		}
	}
	return -1;
}

void func_1533(int iParam0, int iParam1)
{
	set_bit(&((*Global_1116202)[iParam0]->f_7.f_4), iParam1);
}

bool func_1534(var uParam0, int iParam1)
{
	uParam0->f_2 = 590738432;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

void func_1535(int iParam0, int iParam1, vector3 vParam2)
{
	*(*Global_1116202)[iParam0]->f_7.f_5[iParam1] = { vParam2 };
}

void func_1536(int iParam0, int iParam1, var uParam2)
{
	(*Global_1116202)[iParam0]->f_7.f_27[iParam1] = uParam2;
}

int func_1537(int iParam0)
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

int func_1538(var uParam0, var uParam1)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return 0;
	}
	if (!stat_id_get_bool(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

void func_1539(int iParam0, int iParam1)
{
	if (func_1041(&(Global_1109804->f_6371.f_3[iParam1]->f_5), iParam0, 2))
	{
	}
}

void func_1540(int iParam0, int iParam1, int iParam2)
{
	(*Global_1118808)[iParam0]->f_2[func_1074(iParam2, 1)] = iParam1;
}

void func_1541(int iParam0, int iParam1, int iParam2)
{
	((*Global_1118808)[iParam0]->f_2[func_1074(iParam2, 1)])->f_1 = iParam1;
}

bool func_1542(var uParam0)
{
	uParam0->f_2 = 925148616;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	return true;
}

bool func_1543(var uParam0, int iParam1)
{
	uParam0->f_2 = -586196356;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1544(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1100859510:
			return 0;
		case -107328778:
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

void func_1545(int iParam0, int iParam1, int iParam2)
{
	(*Global_1118808)[iParam0]->f_13[func_1544(iParam1, 1)] = iParam2;
}

void func_1546(int iParam0, int iParam1, int iParam2)
{
	func_2164(iParam0, iParam1, iParam2);
}

bool func_1547(var uParam0, int iParam1)
{
	uParam0->f_2 = -642855470;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1548(int iParam0)
{
	return (*Global_1118808)[iParam0]->f_18.f_16;
}

bool func_1549(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_1550(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1125105727:
			return 1;
		case -628138157:
			return 2;
		case 0:
			return 0;
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

bool func_1551(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_1552()
{
	return func_1555();
}

void func_1553(int iParam0, var uParam1)
{
	(*Global_1130634)[iParam0] = uParam1;
}

void func_1554(int iParam0, int iParam1)
{
	(*Global_1116202)[iParam0]->f_2 = iParam1;
}

int func_1555()
{
	return Global_1130634->f_235;
}

void func_1556(var uParam0)
{
	Global_1130634->f_235 = uParam0;
}

void func_1557(int iParam0, int iParam1, vector3 vParam2)
{
	*(*Global_1118808)[iParam0]->f_18[iParam1] = { vParam2 };
}

void func_1558(int iParam0, int iParam1)
{
	(*Global_1116202)[iParam0]->f_1 = iParam1;
}

void func_1559(int iParam0, var uParam1)
{
	(*Global_1118808)[iParam0]->f_18.f_16 = uParam1;
}

bool func_1560(var uParam0, int iParam1)
{
	uParam0->f_2 = 1475807964;
	uParam0->f_3 = iParam1;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

int func_1561(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 202068422:
			return 0;
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

void func_1562(int iParam0, int iParam1)
{
	iVar0 = func_1561(iParam1, 1);
	if (iVar0 > -1 && iVar0 < 32)
	{
		set_bit(&((*Global_1118808)[iParam0]->f_9), iVar0);
	}
}

void func_1563(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_2165(iVar0);
		if (func_1037(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_1564(int iParam0)
{
	return iParam0 != 0;
}

char* func_1565()
{
	return "uiItemMetapedPreloadRequestMade";
}

char* func_1566()
{
	return "uiItemMetapedPreloadRequest";
}

bool func_1567(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952637->f_1057 == iParam0;
	}
	return Global_1952637->f_1057 != 0;
}

void func_1568(var uParam0, int iParam1)
{
	func_1038(&(uParam0->f_2182), iParam1);
}

void func_1569(int iParam0)
{
	Global_1915715->f_22477 = iParam0;
}

bool func_1570(int iParam0)
{
	if ((((((func_2166(iParam0) && iParam0 != -999503751) && iParam0 != 502936876) && iParam0 != -1740828670) && iParam0 != -1044137471) && iParam0 != 344283346) && iParam0 != 0)
	{
		return true;
	}
	return false;
}

int func_1571(var uParam0)
{
	iVar0 = *uParam0;
	if (!func_889(iVar0, 0))
	{
		return -1;
	}
	if (iVar0 == 2131771850)
	{
		return 3;
	}
	if (func_947(iVar0) != -999503751)
	{
		return -1;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar3 = &uParam0->f_1[iVar2];
		if (!func_889(iVar3, 0))
		{
		}
		else if (!func_2167(func_947(iVar3)))
		{
		}
		else
		{
			iVar4 = func_2168(iVar3);
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

void func_1572(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_847(uParam0->f_1[iVar0], 2))
		{
			if (func_1164(iVar0, iParam1))
			{
				vVar4 = { func_2169(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1952637->f_83[iVar0]) && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_2170(iVar0, 4))
				{
					func_2171(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_2172(iVar0, 4, 6);
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

int func_1573()
{
	return Global_1572887->f_106.f_75;
}

struct<19> func_1574(bool bParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_667(-1838434463, func_666(1), 1084182731, 1) };
	if (!_0xb881ca836cc4b6d4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_886(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_1599(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_1575(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 != -1230526146)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_2174(func_2173(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_2175(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

void func_1576(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1577(int iParam0)
{
	return func_2176(func_1469(iParam0));
}

bool func_1578(int iParam0, int iParam1, float fParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	_set_attribute_core_value(iParam0, func_2177(iParam1), ceil(fParam2));
	return true;
}

void func_1579(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1577(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + get_game_timer());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956200->f_1431.f_16[iParam0] = iParam1;
			break;
		case 1:
			Global_1956200->f_1565.f_2.f_16[iParam0] = iParam1;
			break;
		default:
			break;
	}
}

void func_1580(int iParam0, int iParam1, float fParam2)
{
	sVar0 = func_2178(iParam1);
	if (!is_string_null_or_empty(sVar0))
	{
		_0x437c08db4febe2bd(iParam0, func_2179(iParam1), fParam2, -1);
	}
}

void func_1581(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (iParam3 == 2)
	{
		iParam3 = func_1577(2);
	}
	uVar0 = Global_1296859->f_21;
	func_2180(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_2181(iParam0, uVar0, iParam3);
	}
}

int func_1582(int iParam0, int iParam1)
{
	iVar2 = 0;
	Var3 = { func_1172(0, -1591664384, iParam0, -1591664384, 0, 0, 0) };
	if (func_1173(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_2182(iVar0, iVar1, iParam1);
		}
		func_1179(iVar0);
	}
	return iVar2;
}

int func_1583(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1160();
	}
	return Global_17411.f_55.f_644.f_33[iParam0]->f_1;
}

bool func_1584(int iParam0, int iParam1)
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

void func_1585(var uParam0, int iParam1)
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
	if (119907797 == func_947(&(uParam0->f_1[10])) && func_894(&(uParam0->f_1[1]), 458991572))
	{
		uParam0->f_1[10] = &Global_1952637->f_83[10];
	}
}

int func_1586(int iParam0)
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

bool func_1587(int iParam0)
{
	Global_1952637->f_1043.f_2 = 0;
	iVar0 = 1226838104;
	func_1159(&(Global_1952637->f_1043), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1952637->f_1043), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1588(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1589(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_894(&(uParam0->f_1[34]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_2170(iVar0, 16);
		if (bVar1)
		{
			func_2171(iVar0, 16, 9);
		}
		if (&Global_1952637->f_83[iVar0]->f_3[0] == -1802376732 || &uParam0->f_1[iVar0] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_1183(iVar0, iParam3);
			}
			if (!bParam2 && func_1185(&(uParam0->f_1[iVar0])) != 0)
			{
			}
			else if (func_1164(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
				uParam0->f_1[iVar0]->f_1 = 0;
				func_1281(uParam0, &(uParam0->f_1[iVar0]), iVar0, 1, iParam3);
				func_1183(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_1281(uParam0, &(uParam0->f_1[iVar0]), iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

void func_1590(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	Global_17411.f_55.f_644.f_33[iParam1]->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_2183(uParam0->f_1[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_1591(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17411.f_55.f_644.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17411.f_55.f_644.f_33[iParam1] = (Global_17411.f_55.f_644.f_33[iParam1] || iParam0);
	}
}

int func_1592(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_2184(uParam0, bParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<28> func_1593(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_886(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1599(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1594(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_2185(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_2174(func_2186(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_2175(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1595(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_886(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1599(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1596(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_2174(func_2187(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_2175(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1597(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_886(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1599(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1598(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_2185(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_2174(func_2188(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_2175(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1599(var uParam0, bool bParam1)
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
		Var0.f_15 = func_1136(uParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1166() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1600(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_2185(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_2174(func_2189(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_2175(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1601(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_2190(uParam0, 1))
	{
		func_2191(uParam0, 1);
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

int func_1602(int iParam0)
{
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1] = iParam0;
	iVar0 = Global_1952637->f_2843.f_2 ^ -1;
	iVar0 = (iVar0 && -iVar0);
	Global_1952637->f_2843.f_2 = (Global_1952637->f_2843.f_2 || iVar0);
	Global_1952637->f_2843.f_43[Global_1952637->f_2843.f_1]->f_1 = iVar0;
	Global_1952637->f_2843.f_1++;
	return iVar0;
}

void func_1603(int iParam0, int iParam1)
{
	if (!func_2192(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 == 20 && func_894(&(Global_1952637->f_1675.f_1[iVar0]), 343781202))
	{
		iVar1 = func_2193(&(Global_1952637->f_1675.f_1[iVar0]), 1108822547);
		if (1388798186 == func_947(iVar1))
		{
			func_2194(10, iParam1);
		}
	}
	func_2194(iVar0, iParam1);
}

bool func_1604(var uParam0, var uParam1, bool bParam2, int iParam3)
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
		uParam1->f_16 = func_2195(iVar0);
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

void func_1605(var uParam0, bool bParam1)
{
	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	bVar0 = func_2196(uParam0->f_17);
	if (bVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_667(889965687, func_666(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_1171(Var19, bVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1597(func_667(iVar18, Var19, bVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_2197(Var1.f_16);
}

void func_1606(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	_set_ped_overlay_textures(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1607(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1)])->f_1 > (*uParam1)[iParam2]->f_1)
	{
		func_2198(uParam0, uParam1);
	}
	else
	{
		func_2199(uParam0, (*uParam1)[iParam2]);
	}
}

void func_1608(var uParam0, var uParam1, bool bParam2)
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

bool func_1609(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	iVar0 = func_2200(uParam0->f_2);
	iVar1 = func_2201(iVar0);
	*uParam1 = 0;
	switch (iVar1)
	{
		case 2:
			*uParam1 = func_2202();
			break;
		case 1:
			*uParam1 = func_2203();
			break;
		case 0:
			*uParam1 = func_2204(uParam0, bParam3, bParam4, &uParam5, uParam2);
			break;
		default:
			*uParam1 = 1;
			break;
	}
	return *uParam1 == 0;
}

void func_1610(var uParam0, var uParam1, struct<2> Param2, var uParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam9 == 255)
	{
		iParam9 = player_id();
	}
	if (!func_789(Param2))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam9))
	{
		return;
	}
	if (!network_is_player_active(iParam9))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = uParam0;
	Var0.f_6 = uParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = uParam4;
	Var0.f_10 = iParam9;
	Var0.f_12 = iParam10;
	Var0.f_13 = iParam11;
	Var0.f_4 = 0;
	_copy_memory(&(Var0.f_27), &iParam5, 4);
	func_2205(&Var0);
}

bool func_1611(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	_request_propset(iParam0);
	return _has_propset_loaded(iParam0);
}

int func_1612(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_1613(int iParam0)
{
	if (is_vehicle_seat_free(iParam0, -1))
	{
		return -1;
	}
	if (is_vehicle_seat_free(iParam0, 0))
	{
		return 0;
	}
	if (is_vehicle_seat_free(iParam0, 1))
	{
		return 1;
	}
	if (is_vehicle_seat_free(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_1614(int iParam0)
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

void func_1615()
{
	if (func_2206(8, 255))
	{
		return;
	}
	func_2207(3);
}

void func_1616()
{
	if (func_2206(8, 255))
	{
		return;
	}
	func_615(3);
}

int func_1617(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = create_ped_inside_vehicle(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

int func_1618(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = create_ped_on_mount(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

int func_1619(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

void func_1620(int iParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	if (Global_1296601->f_73 >= 8)
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (func_2208(iParam0, &uVar0))
	{
		return;
	}
	(*Global_1296601)[Global_1296601->f_73]->f_4 = iParam0;
	(*Global_1296601)[Global_1296601->f_73]->f_3 = fParam1;
	*(*Global_1296601)[Global_1296601->f_73] = { vParam2 };
	(*Global_1296601)[Global_1296601->f_73]->f_5 = { vParam5 };
	(*Global_1296601)[Global_1296601->f_73]->f_8 = get_id_of_this_thread();
	Global_1296601->f_73++;
}

void func_1621(int iParam0, int iParam1)
{
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 376, true);
	if (iParam1 != 0)
	{
		_0xfca8fb9e15fa80d3(iParam0, iParam1);
	}
}

bool func_1622(int iParam0, vector3 vParam1, char* sParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_209(vParam1))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sParam4))
	{
		return false;
	}
	vVar6 = { get_entity_coords(iParam0, true, false) };
	if (waypoint_recording_get_num_points(sParam4, &iVar2))
	{
	}
	if (waypoint_recording_get_closest_waypoint(sParam4, vVar6, &iVar0))
	{
	}
	if (waypoint_recording_get_closest_waypoint(sParam4, vParam1, &iVar1))
	{
	}
	if (iVar0 == iVar1)
	{
		if (waypoint_recording_get_coord(sParam4, iVar0, &vVar9))
		{
			fVar3 = vdist(vVar6, vVar9);
		}
		if (waypoint_recording_get_coord(sParam4, iVar1, &vVar12))
		{
			fVar4 = vdist(vParam1, vVar12);
		}
		if (fVar3 >= fParam5)
		{
			return false;
		}
		if (fVar4 >= fParam5)
		{
			return true;
		}
		if (iVar0 == (iVar2 - 1))
		{
			if (waypoint_recording_get_coord(sParam4, iVar0, &vVar15))
			{
			}
			if (waypoint_recording_get_coord(sParam4, (iVar0 - 1), &Var18))
			{
			}
			vVar21 = { _get_object_offset_from_coords(vVar15, get_heading_from_vector_2d((vVar15.x - Var18), (vVar15.y - Var18.f_1)), 0f, (fParam5 + 1f), 0f) };
			vVar15 = { vVar21 };
		}
		else
		{
			if (iVar0 == 0)
			{
			}
			waypoint_recording_get_coord(sParam4, iVar0 + 1, &vVar15);
		}
		fVar5 = func_1630(vParam1 - vVar6, vVar15 - vVar6);
		if (fVar5 < 0f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 > iVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1623(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_1624(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	if ((does_entity_exist(iParam0) && !is_entity_dead(iParam0)) && fParam2 > 0f)
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			set_ped_config_flag(iVar0, 130, true);
			set_ped_config_flag(iVar0, 315, true);
			set_ped_config_flag(iVar0, 297, true);
			set_ped_config_flag(iVar0, 317, true);
			if (iParam3 == 1)
			{
				set_ped_config_flag(iVar0, 359, true);
			}
		}
		else if (is_entity_an_object(iParam0))
		{
			iVar1 = get_object_index_from_entity_index(iParam0);
			_0xa22712e8471aa08e(iVar1, 1, 1);
		}
		_0x870708a6e147a9ad(iParam0, sParam1, fParam2, iParam4, uParam5, 0, 0, 0, 0, -1);
	}
}

int func_1625(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_1234(iVar0, 2))
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
				func_1289(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_1626(var uParam0, int iParam1)
{
	iVar0 = func_874(*uParam0);
	if (does_entity_exist(iParam1))
	{
		if (_uiprompt_is_valid((*Global_1951255)[iVar0]->f_3))
		{
			_uiprompt_set_group((*Global_1951255)[iVar0]->f_3, _uiprompt_get_group_id_for_target_entity(iParam1), 0);
			return 1;
		}
	}
	return 0;
}

void func_1627(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_358(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_875(iParam0, 128);
	}
	else
	{
		func_877(iParam0, 128);
	}
}

void func_1628(int iParam0)
{
	Global_1903136->f_302 = (Global_1903136->f_302 || iParam0);
}

int func_1629(int iParam0)
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

float func_1630(vector3 vParam0, vector3 vParam3)
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

bool func_1631(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_1632(int iParam0)
{
	return iParam0 * 31;
}

int func_1633(int* iParam0)
{
	if (!func_2070(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_2011)
	{
		if (func_1634(Global_1293346->f_2011.f_1[iVar0], iParam0))
		{
			return Global_1293346->f_2011.f_1[iVar0]->f_6;
		}
		iVar0++;
	}
	return 0;
}

bool func_1634(var uParam0, int* iParam1)
{
	if (((*uParam0 == *iParam1 && uParam0->f_1 == iParam1->f_1) && uParam0->f_2 == iParam1->f_2) && uParam0->f_3 == iParam1->f_3)
	{
		return true;
	}
	return false;
}

void func_1635(int iParam0, int iParam1)
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

void func_1636(var uParam0, int iParam1, struct<17> Param2)
{
	if (!func_2070(uParam0))
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

void func_1637(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_2209(&(uParam0->f_16), 84);
	}
}

void func_1638(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_2210(uParam0, 1);
	}
}

void func_1639()
{
	func_2211();
	func_2212();
	func_1515(_0xdf66a37936d5f3d9(player_id()));
}

struct<4> func_1640(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_2213(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_2214() };
		if (func_2215() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_2216(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_2217(player_id());
	}
	bVar33 = func_2218(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_2219(iParam3, 0);
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
			return func_1166();
		}
		if (!func_2220(&Var0, 0))
		{
			Var35 = { func_2221(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_1641(var uParam0, int iParam1)
{
	func_2222(uParam0, iParam1, 0);
	return Global_1904087->f_11;
}

var func_1642(var uParam0, int iParam1)
{
	func_2222(uParam0, iParam1, 0);
	return Global_1904087->f_22;
}

int func_1643(var uParam0, int iParam1)
{
	if (!func_2222(uParam0, iParam1, 1))
	{
	}
	if (!func_2223(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_2224(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

void func_1644(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = iParam4;
}

int func_1645(var uParam0)
{
	if (!func_604(32))
	{
		func_825(&(Global_1952637->f_2365));
		func_930(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_2225(*uParam0))
		{
			if (func_604(32))
			{
				func_1512(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_603(&(Global_1952637->f_2365));
		if (!func_1155(&(Global_1952637->f_1556), *uParam0, &uVar0, 0, 1, 0, 0, 0, 0, 8))
		{
			if (func_604(32))
			{
				func_1512(get_player_ped(player_id()), 1);
			}
			return 0;
		}
		func_2138(&(Global_1952637->f_1556));
	}
	func_379(33, Global_1139381->f_4779.f_4, 0, 0, 0);
	Global_1139381->f_4779.f_4 = *uParam0;
	Global_1139381->f_4779 = uParam0->f_1;
	func_379(30, 0, 0, 0, 0);
	func_379(27, 0, 0, 0, 0);
	func_379(32, Global_1139381->f_4779.f_4, 0, 0, 0);
	return 1;
}

void func_1646()
{
	func_526(121);
}

void func_1647(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_2226(0, 0);
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
			uParam0->f_25.f_1 = func_2226(2, 0);
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
			uParam0->f_25.f_2 = func_2226(1, 0);
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
			uParam0->f_25.f_3 = func_2227(0);
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
			uParam0->f_25.f_4 = func_2228(0);
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
			uParam0->f_25.f_5 = func_2229(0);
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

void func_1648()
{
	func_2230();
}

int func_1649(int iParam0)
{
	if (func_1041(&(Global_1956200->f_1565), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1650(int iParam0, int iParam1, int iParam2)
{
	func_2231(0, iParam0);
	func_2231(2, iParam1);
	func_2231(1, iParam2);
	iVar0 = func_2232(iParam0);
	func_2233(0, iVar0);
	iVar0 = func_2232(iParam1);
	func_2233(2, iVar0);
	iVar0 = func_2232(iParam2);
	func_2233(1, iVar0);
}

void func_1651(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1577(1);
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

void func_1652(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1577(1);
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

void func_1653(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1577(1);
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

void func_1654()
{
	func_2231(0, func_2226(0, 0));
	func_2231(2, func_2226(2, 0));
	func_2231(1, func_2226(1, 0));
	fVar0 = func_2234(0, 0);
	func_2233(0, floor(fVar0));
	fVar0 = func_2234(2, 0);
	func_2233(2, floor(fVar0));
	fVar0 = func_2234(1, 0);
	func_2233(1, floor(fVar0));
}

void func_1655(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1577(2);
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

void func_1656(int iParam0, var uParam1, int iParam2)
{
	vVar0.f_1 = -1;
	if (!func_2235(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*Global_1139381->f_4796.f_34[iParam2] = { vVar0 };
}

void func_1657()
{
	func_2236();
	func_2237();
}

bool func_1658(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_1659(struct<2> Param0)
{
	iVar0 = func_1660(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

int func_1660(struct<2> Param0)
{
	if (!func_789(Param0))
	{
		return -1;
	}
	iVar0 = func_2238(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

int func_1661(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_2239())
	{
		return 0;
	}
	if (!func_819())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_2240(&Global_0, 8);
	}
	func_2240(&Global_0, 1);
	return 1;
}

void func_1662(struct<2> Param0, int iParam2)
{
	if (!func_789(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_2241(Param0);
	}
	else
	{
		func_2242(Param0, iParam2);
	}
	func_2243();
}

void func_1663(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_2244(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_2245(cVar2);
			}
			else
			{
				func_2246();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1664(bool bParam0)
{
	if (!bParam0 && func_281(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1665(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_1666(struct<2> Param0)
{
	return func_2248(func_2247(Param0));
}

bool func_1667(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_1668()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_1669(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 >= 9 && iParam0 <= 25)
			{
				return true;
			}
			break;
	}
	return false;
}

Vector3 func_1670(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_1671(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

Vector3 func_1672(int iParam0)
{
	return (*Global_1835011)[iParam0]->f_19;
}

void func_1673(int iParam0, int iParam1)
{
	if (!func_1258(iParam0))
	{
		return;
	}
	(*Global_1900838)[iParam0]->f_1 = ((*Global_1900838)[iParam0]->f_1 || iParam1);
}

void func_1674(int iParam0)
{
	if (func_89() == -1)
	{
		return;
	}
	if ((*Global_1835011)[iParam0]->f_3 != 0 && _unlock_is_unlocked((*Global_1835011)[iParam0]->f_3))
	{
		_unlock_set_new((*Global_1835011)[iParam0]->f_3, false);
	}
	func_806(iParam0);
}

void func_1675(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1676()
{
	if (Global_1293346->f_458.f_1548 >= 40 || Global_1293346->f_458.f_1548 < 0)
	{
		Global_1293346->f_458.f_1548 = 0;
	}
	return Global_1293346->f_458.f_1548;
}

void func_1677(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1548 = iParam0;
}

int func_1678()
{
	if (Global_1293346->f_458.f_1549 >= 10 || Global_1293346->f_458.f_1549 < 0)
	{
		Global_1293346->f_458.f_1549 = 0;
	}
	return Global_1293346->f_458.f_1549;
}

void func_1679(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1293346->f_458.f_1549 = iParam0;
}

bool func_1680(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	iVar0 = func_886(0);
	*uParam1 = { func_667(iParam0, func_1273(0), bParam3, 0) };
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

bool func_1681(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

void func_1682(int iParam0, struct<17> Param1)
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

bool func_1683()
{
	return (func_1300(-1185145312, 0, 0, 0) > 0 && func_1171(func_667(889965687, func_666(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

bool func_1684(int iParam0, int iParam1, bool bParam2)
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

bool func_1685(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(uParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_886(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_1686(int iParam0, int iParam1)
{
	iVar0 = func_947(&(Global_1952637->f_1675.f_1[iParam1]));
	if (func_947(iParam0) == iVar0)
	{
		return true;
	}
	else if (iParam0 == -992705550)
	{
		return func_894(&(Global_1952637->f_1675.f_1[iParam1]), 160827531);
	}
	else if (iParam0 == 491480257)
	{
		return (iVar0 == -2061583405 || iVar0 == 2086043523);
	}
	else if (iParam0 == -1789518572)
	{
		return iVar0 == -923693316;
	}
	else if (iParam0 == -275040139)
	{
		return iVar0 == 1882579758;
	}
	return false;
}

void func_1687(var uParam0, int iParam1)
{
	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		*Global_1952637->f_2897.f_35[iVar0] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_2249(uParam0->f_2[iVar0], 2) || &uParam0->f_2[iVar0] == iParam1) || &uParam0->f_2[iVar0] == 39)
			{
				*uParam0->f_2[iVar0] = { Var2 };
			}
			else
			{
				if (func_2249(uParam0->f_2[iVar0], 1))
				{
					func_1184(uParam0->f_2[iVar0], 2, 6);
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

void func_1688(var uParam0, var uParam1)
{
	Var0 = func_1158(0);
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
			iVar8 = func_833(iVar7, 1);
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
				func_1183(iVar8, 0);
			}
		}
	}
}

void func_1689(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_947(&(uParam0->f_1[iVar0]));
	if (iVar1 == 119907797)
	{
		if (func_894(iParam1, 458991572))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1183(iVar0, iParam3);
		}
	}
	else if (iVar1 == 2086043523)
	{
		if (func_894(iParam1, -93469181))
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1183(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_894(&(uParam0->f_1[iVar0]), -1446529222) && func_894(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_894(iParam1, -93469181)) && func_894(&(uParam0->f_1[iVar0]), -1303648999))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
}

void func_1690(var uParam0, int iParam1, int iParam2)
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

void func_1691(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	iVar1 = &uParam0->f_1[iVar0];
	if (!func_836(iVar1, 0) && func_894(iVar1, -180472385))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	iVar0 = 10;
	iVar1 = &uParam0->f_1[iVar0];
	if ((iVar1 != &Global_1952637->f_83[iVar0] && func_947(iVar1) == 2086043523) && func_894(iParam1, -93469181))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
}

void func_1692(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_947(iParam2))
	{
		case -525676072:
			func_2250(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_2251(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1693(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_947(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_1183(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	if (func_947(iParam2) == 81053684 || func_894(iParam2, 160827531))
	{
		func_2252(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_894(iParam2, -180472385) && !func_836(&(uParam0->f_1[iVar0]), 0))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	if (func_894(iParam2, -1303648999))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0]->f_1 == 1530758430)
	{
		uParam0->f_1[iVar0]->f_1 = 1155669136;
		func_1183(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_1183(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0]->f_1 == 1334603721)
	{
		uParam0->f_1[iVar0]->f_1 = -1539589426;
		func_1183(iVar0, iParam3);
		iVar0 = 20;
		if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
		{
			func_1183(iVar0, iParam3);
		}
	}
}

void func_1694(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = 12;
	iVar1 = 0;
	if (func_123() == 24043185)
	{
		iVar1 = 1;
	}
	if (2056714954 == _get_ped_component_category(&(uParam0->f_1[iVar0]), iVar1, true))
	{
		if ((bParam1 || func_894(iParam2, 1872585553)) || func_947(iParam2) == 1882579758)
		{
			uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1183(iVar0, iParam4);
		}
	}
	iVar0 = 17;
	if (!func_836(&(uParam0->f_1[iVar0]), 0) && func_894(iParam2, 1467402774))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam4);
	}
	iVar0 = 29;
	if (!func_836(&(uParam0->f_1[iVar0]), 0) && func_894(iParam2, 1126863852))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam4);
	}
	iVar0 = 34;
	iVar2 = &uParam0->f_1[iVar0];
	if (func_947(iVar2) == 1759215194 && func_947(iParam2) == 1882579758)
	{
		uParam0->f_1[iVar0] = func_948(iParam2);
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam4);
	}
	else if (func_2253(iVar2, bParam1, iVar1))
	{
		iVar2 = &uParam0->f_1[18];
		iVar3 = 0;
		if (func_947(iVar2) == 912453393 && func_665(32))
		{
			iVar3 |= 1;
		}
		if (func_894(iParam2, 525391395))
		{
			iVar3 |= 2;
		}
		iVar2 = func_1582(Global_1952637->f_83[iVar0]->f_9, iVar3);
		if (iVar2 != 0)
		{
			uParam0->f_1[iVar0] = iVar2;
			uParam0->f_1[iVar0]->f_1 = 0;
			func_1183(iVar0, iParam4);
			func_1702(uParam0, 0, iVar2, iParam4);
		}
	}
	iVar0 = 21;
	if (func_836(&(uParam0->f_1[iVar0]), 0))
	{
		return;
	}
	func_1183(iVar0, iParam4);
	if (uParam0->f_1[iParam3]->f_1 == -1539589426 || uParam0->f_1[iParam3]->f_1 == 1334603721)
	{
		return;
	}
	if (uParam0->f_1[iParam3]->f_1 == 0 || uParam0->f_1[iParam3]->f_1 == 1155669136)
	{
		if (func_1705(iParam2, iVar1, -1539589426) >= 0)
		{
			uParam0->f_1[iParam3]->f_1 = -1539589426;
			return;
		}
	}
	if (func_1705(iParam2, iVar1, 1334603721) >= 0)
	{
		uParam0->f_1[iParam3]->f_1 = 1334603721;
	}
}

void func_1695(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_894(iParam2, 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
}

void func_1696(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	switch (func_947(iParam2))
	{
		case 698653232:
			func_2254(uParam0, bParam1, iParam2, iParam4);
			break;
		case 912453393:
			func_2255(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_1697(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_947(iParam2))
	{
		case -1080198344:
		case 1868067663:
			func_2256(uParam0, bParam1, iParam2, iParam3);
			break;
		case 294388917:
			func_2257(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1698(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = 18;
	if (func_947(&(uParam0->f_1[iVar0])) == 912453393)
	{
		func_1183(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar1 = 0;
	if (func_123() == 24043185)
	{
		iVar1 = 1;
	}
	iVar0 = 23;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_894(iParam2, 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	iVar0 = 16;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		func_1183(iVar0, iParam3);
		if (uParam0->f_1[iVar0]->f_1 == -1539589426 || uParam0->f_1[iVar0]->f_1 == 1334603721)
		{
			return;
		}
		if (uParam0->f_1[iVar0]->f_1 == 0 || uParam0->f_1[iVar0]->f_1 == 1155669136)
		{
			if (func_1705(&(uParam0->f_1[iVar0]), iVar1, -1539589426) >= 0)
			{
				uParam0->f_1[iVar0]->f_1 = -1539589426;
				return;
			}
		}
		if (func_1705(&(uParam0->f_1[iVar0]), iVar1, 1334603721) >= 0)
		{
			uParam0->f_1[iVar0]->f_1 = 1334603721;
		}
	}
}

void func_1699(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 21;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_894(&(uParam0->f_1[iVar0]), 1537768121))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam2);
	}
}

void func_1700(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		return;
	}
	if (func_2258(99217379) && func_894(iParam2, -1230785684))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_836(&(uParam0->f_1[iVar0]), 0) && func_894(iParam2, 1016511012))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
}

void func_1701(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (&uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0] && func_894(&(uParam0->f_1[iVar0]), 358628372))
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam2);
	}
}

void func_1702(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_947(iParam2))
	{
		case 1759215194:
			func_2259(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_2260(uParam0, bParam1, iParam2, iParam3);
			break;
		case 684307653:
			func_2261(uParam0, bParam1, iParam2, iParam3);
			break;
		case 502936876:
			func_2262(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_2263(uParam0, bParam1, iParam2, iParam3);
			break;
		case 344283346:
			func_2264(uParam0, bParam1, iParam3);
			break;
	}
}

void func_1703(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (func_947(iParam2))
	{
		case 1769055947:
			func_2265(uParam0, bParam1, iParam2, iParam3);
			break;
		case -923693316:
			func_2266(uParam0, bParam1, iParam2, iParam3);
			break;
	}
}

void func_1704(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		func_2267(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	iVar1 = &uParam0->f_1[iVar0];
	if ((func_894(iParam2, 813132419) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_947(iVar1) == -923693316)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	if ((func_894(iParam2, -1650340550) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0]) && func_947(iVar1) == 1769055947)
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_894(iParam2, -1278198125) && &uParam0->f_1[iVar0] != &Global_1952637->f_83[iVar0])
	{
		uParam0->f_1[iVar0] = &Global_1952637->f_83[iVar0];
		uParam0->f_1[iVar0]->f_1 = 0;
		func_1183(iVar0, iParam3);
	}
}

int func_1705(int iParam0, int iParam1, int iParam2)
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

void func_1706(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*Global_1952637->f_1675.f_1[iParam0] = { *Global_1952637->f_1556.f_1[iParam0] };
	}
	if (!bParam2)
	{
		return;
	}
	func_2183(Global_1952637->f_1675.f_1[iParam0], iParam0, Global_17411.f_55.f_644.f_1777);
}

char* func_1707(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPINTRO_BLIP_POST_OFFICE_RHODES";
		case 1:
			return "MPINTRO_BLIP_POST_OFFICE_VALENTINE";
		case 2:
			return "MPINTRO_BLIP_POST_OFFICE_BLACKWATER";
		case 3:
			return "MPINTRO_BLIP_POST_OFFICE_TUMBLEWEED";
		default:
			break;
	}
	return "";
}

char* func_1708(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPINTRO_BLIP_HIDEOUT_AREA_RHODES";
		case 1:
			return "MPINTRO_BLIP_HIDEOUT_AREA_VALENTINE";
		case 2:
			return "MPINTRO_BLIP_HIDEOUT_AREA_BLACKWATER";
		case 3:
			return "MPINTRO_BLIP_HIDEOUT_AREA_TUMBLEWEED";
		default:
			break;
	}
	return "";
}

void func_1709(var uParam0, int iParam1)
{
	iVar0 = (*uParam0 && iParam1);
	*uParam0 = (*uParam0 - iVar0);
}

bool func_1710(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam2))
	{
		return false;
	}
	func_2268(uParam0, iParam1, sParam2, bParam3);
	return true;
}

int func_1711(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_133(uParam0, iParam1, iParam2, iParam3);
	return iVar0;
}

bool func_1712(var uParam0, int iParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_384.f_295)
	{
		if (&uParam0->f_384.f_264[iVar0] == iParam1)
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	*uParam2 = -1;
	return false;
}

bool func_1713(int iParam0)
{
	if (!func_889(*iParam0, 0))
	{
		return false;
	}
	if (!func_2269(*iParam0))
	{
		return false;
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
			return false;
	}
	return true;
}

void func_1714(bool bParam0)
{
	if (!does_entity_exist(Global_34))
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

void func_1715(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 440, !bParam0);
}

void func_1716(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 439, !bParam0);
}

void func_1717(bool bParam0)
{
	if (!does_entity_exist(Global_34))
	{
		return;
	}
	if (is_entity_dead(Global_34) || is_ped_injured(Global_34))
	{
	}
	set_ped_config_flag(Global_34, 438, !bParam0);
}

void func_1718(bool bParam0)
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

void func_1719(bool bParam0)
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

void func_1720(bool bParam0)
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

bool func_1721()
{
	return true;
	if (Global_1572887->f_13 == 0)
	{
		return true;
	}
	return Global_39.f_1;
}

var func_1722(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	Var13.f_7 = 1;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_1723()
{
	return &Global_1902818;
}

void func_1724(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_2270(*iParam0);
	iVar1 = func_2271(*iParam0);
	iVar2 = func_2272(*iParam0);
	iVar3 = func_2273(*iParam0);
	iVar4 = func_2274(*iParam0);
	iVar5 = func_2275(*iParam0);
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
	iVar6 = func_2276(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_2276(iVar1, iVar0);
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
	func_2277(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1725(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_1726(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_1727(int iParam0)
{
	if (func_1327(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_1728(int iParam0)
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

bool func_1729()
{
	if (!func_819())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_1730()
{
	return _unlock_is_unlocked(-121456797);
}

bool func_1731()
{
	return is_dlc_present(-2112896652);
}

int func_1732(var uParam0, int iParam1)
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

int func_1733(int iParam0)
{
	iVar0 = func_947(iParam0);
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

void func_1734(var uParam0)
{
	func_684(uParam0, 143479330);
	if (func_123() == 2026485318)
	{
		func_684(uParam0, 617531372);
	}
	else
	{
		func_684(uParam0, 291123060);
	}
}

void func_1735(var uParam0, int iParam1, struct<15> Param2)
{
	if (!func_2070(uParam0))
	{
		return;
	}
	if (Global_1293346->f_2538 < 20)
	{
		Global_1293346->f_2538++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*Global_1293346->f_2538.f_1[iVar0] = { *(Global_1293346->f_2538.f_1[iVar0 + 1]) };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1293346->f_2538.f_1[(Global_1293346->f_2538 - 1)]) = { Var1 };
}

bool func_1736(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_1737(int iParam0, int iParam1)
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

bool func_1738(int iParam0, int iParam1, var uParam2)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam2 = { Var0 };
	uParam2->f_5 = -1;
	uParam2->f_12 = -1;
	*uParam2 = func_2278(iParam0);
	if (_item_database_is_shop_layout_key_valid(*uParam2))
	{
		if (_item_database_get_shop_layout_info(*uParam2, &(uParam2->f_1)))
		{
			return true;
		}
	}
	*uParam2 = func_2279(iParam1);
	if (is_pc_version() || _is_stadia_version())
	{
		iVar44 = func_1971(iParam1);
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

bool func_1739(var uParam0, int iParam1)
{
	iVar0 = func_2280(&(uParam0->f_2207));
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = 0;
	if (!func_2281(iParam1, &iVar1))
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (func_1877(iVar2, &(uParam0->f_2207)))
		{
			if (func_2282(&(uParam0->f_2207)) == iVar1)
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1740(int iParam0, var uParam1)
{
	Var0.f_20 = 10;
	Var0.f_31 = 10;
	*uParam1 = { Var0 };
	uParam1->f_5 = -1;
	uParam1->f_12 = -1;
	*uParam1 = iParam0;
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

bool func_1741(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	if (func_1998(iParam1, &(uParam0->f_2207)))
	{
		iVar0 = func_1742(&(uParam0->f_2207));
		uVar1 = func_1999(&(uParam0->f_2207));
		iVar2 = func_1427();
		iVar3 = 0;
		bVar4 = false;
		iVar6 = func_2280(&(uParam0->f_2207));
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if (func_1877(iVar5, &(uParam0->f_2207)))
			{
				if (func_2001(uParam0, iParam1, &iVar3))
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
							if (!func_1841())
							{
							}
							uParam0->f_2207.f_118 = 1;
						}
						else if (func_1387(&(uParam0->f_2207)))
						{
							uParam0->f_2207.f_79 = iVar3;
							if (!func_1448())
							{
							}
						}
						else
						{
							func_2002(uParam0);
						}
						if (iParam3 >= 0)
						{
							uParam0->f_2207.f_119 = iParam3;
						}
					}
					if (bParam4)
					{
						func_2003(uParam0);
						uParam0->f_2207.f_121 = 1;
						uParam0->f_2207.f_121.f_2 = iVar0;
						uParam0->f_2207.f_121.f_7 = iParam1;
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

int func_1742(var uParam0)
{
	return uParam0->f_12;
}

int func_1743(var uParam0, bool bParam1)
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
		func_2283(uParam0);
		if (bParam1)
		{
			func_1743(uParam0, 0);
		}
		return 1;
	}
	return 0;
}

void func_1744(var uParam0)
{
	uParam0->f_17 = 0;
}

void func_1745()
{
	Global_1915715->f_20241.f_3 = 0;
}

void func_1746(var uParam0)
{
	uParam0->f_2207.f_45 = 0;
}

char* func_1747(int iParam0)
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

void func_1748(var uParam0, int iParam1, int iParam2)
{
	func_2284(uParam0, iParam1, _get_label_text_by_hash(iParam2));
}

void func_1749(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_2071(uParam0, iParam1);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1880(iParam1, bVar0), bParam2);
}

void func_1750(var uParam0, int iParam1, bool bParam2)
{
	bVar0 = func_1782(uParam0, iParam1);
	bVar1 = func_1783(uParam0, iParam1);
	func_1437(uParam0, iParam1, 0);
	func_1749(uParam0, iParam1, 0);
	_databinding_add_data_bool(uParam0->f_2207.f_53, func_1881(iParam1), bParam2);
	func_1437(uParam0, iParam1, bVar0);
	func_1749(uParam0, iParam1, bVar1);
}

int func_1751(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return func_2285(uParam0, uParam1);
		case -384358143:
			if (func_1390(func_1304(uParam1->f_9), 2))
			{
				return func_2286(uParam0, uParam1);
			}
			else
			{
				return func_2287(uParam0, uParam1);
			}
			break;
		case -1048755899:
			return func_2288(uParam0, uParam1);
		case -349391286:
			return func_2289(uParam0, uParam1);
		case -1928601151:
			return func_2290(uParam0, uParam1);
		case -1086794738:
			return func_2291(uParam0, uParam1);
		case -1702260384:
			return func_2292(uParam0, uParam1);
		case -760956867:
			return func_2293(uParam0, uParam1);
		case 38807286:
			return func_2294(uParam0, uParam1);
		case -1395073769:
			return func_2295(uParam0, uParam1);
		case 1425890997:
			return func_2296(uParam0, uParam1);
		case -853534656:
			return func_2297(uParam0, uParam1);
		case 777890122:
			return func_2298(uParam0, uParam1);
		case -1502467280:
			return func_2299(uParam0, uParam1);
		case -239176093:
			return func_2300(uParam0, uParam1);
		case -87783305:
			return func_2301(uParam0, uParam1);
		case 848718617:
			return func_2302(uParam0, uParam1);
		case -1080155519:
			return func_2303(uParam0);
		case 1394581936:
			return func_2304(uParam0, uParam1);
		case 193788635:
			return func_2305(uParam0, uParam1);
		case -1198174119:
			return func_2306(uParam0, uParam1);
		case 1119253406:
			return func_2307(uParam0, uParam1);
		case 1837492866:
			return func_2308(uParam0);
		case -339889117:
			return func_2309(uParam0, uParam1);
		case -348190488:
			return func_2310(uParam0, uParam1);
		case 1702073444:
			return func_2311(uParam0, uParam1);
		case -584027224:
			return func_2312(uParam0, uParam1->f_9);
		case -467661559:
			return func_2313(uParam0, uParam1->f_9);
		case -1968468235:
			return func_2314(uParam0, uParam1);
		case 761079318:
			return func_2315(uParam0, uParam1);
		case 1942587409:
			return func_2316(uParam0, uParam1);
		case 753463028:
			return func_2317(uParam0, uParam1);
		case 2077448405:
			return func_2318(uParam0, uParam1);
		case -2056428614:
			return func_2319(uParam0, uParam1);
		case -395279071:
			return func_2320(uParam0, uParam1);
		case 420195545:
			return func_2321(uParam0, uParam1);
		case -698448975:
			return func_2322(uParam0, uParam1);
		case -627085098:
			return func_2323(uParam0, uParam1);
		case -841939068:
			return func_2324(uParam0, uParam1);
		case 1751567119:
			return func_2325(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_2326(uParam0, uParam1);
	}
	return 1;
}

bool func_1752(var uParam0, var uParam1, int iParam2)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return func_2327(uParam0, uParam1);
		case -1968468235:
			return true;
		case -384358143:
			return func_2328(uParam0, uParam1);
		case -1928601151:
		case -349391286:
			return func_2329(uParam0, uParam1);
		case -760956867:
			return func_2330(uParam0, uParam1);
		case 38807286:
			return func_2331(uParam0, uParam1);
		case -1395073769:
			return func_2332(uParam0, uParam1);
		case 1425890997:
			return func_2333(uParam0, uParam1);
		case -853534656:
			return func_2334(uParam0, uParam1);
		case 777890122:
			return func_2335(uParam0, uParam1, iParam2);
		case -1502467280:
			if (func_2336(uParam1->f_7))
			{
				return func_2328(uParam0, uParam1);
			}
			else
			{
				return func_2337(uParam0, uParam1, iParam2);
			}
			break;
		case -1048755899:
			return func_2338(uParam0, uParam1);
		case -239176093:
			return func_2339(uParam0, uParam1);
		case -87783305:
			return func_2340(uParam0, uParam1);
		case 848718617:
			return func_2341(uParam0, uParam1);
		case -1080155519:
			return func_2342(uParam0, uParam1);
		case 1394581936:
			return func_2343(uParam0, uParam1);
		case 193788635:
			return func_2344(uParam0, uParam1);
		case -1198174119:
			return func_2345(uParam0, uParam1);
		case 1119253406:
			return func_2346(uParam0, uParam1);
		case 1837492866:
			return func_2347(uParam0, *uParam1);
		case -339889117:
			return func_2348(uParam0, *uParam1);
		case -348190488:
			return func_2349(uParam0, *uParam1);
		case 1702073444:
			return func_2350(uParam0, *uParam1, iParam2);
		case -584027224:
			return func_2351(uParam0, uParam1);
		case -467661559:
			return func_2352(uParam0, uParam1);
		case 761079318:
			return func_2353(uParam0, uParam1);
		case 1942587409:
			return func_2354(uParam0, uParam1);
		case 753463028:
			return func_2355(uParam0, uParam1);
		case -2056428614:
			return func_2356(uParam0, uParam1);
		case 2077448405:
			return func_2357(uParam0, uParam1);
		case -698448975:
			return func_2358(uParam0, uParam1);
		case -627085098:
			return func_2359(uParam0, uParam1);
		case -841939068:
			return func_2360(uParam0, uParam1);
		case 1751567119:
			return func_2361(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return func_2362(uParam0, uParam1);
	}
	return true;
}

bool func_1753(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_1973(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			iVar14 = 0;
			while (iVar14 < Var0.f_6)
			{
				if (_item_database_get_shop_layout_menu_info_by_index(iParam1, iParam2, iVar14, &iVar7))
				{
					if (func_1753(uParam0, iParam1, iVar7, bParam3))
					{
						return true;
					}
				}
				iVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			iVar15 = -1;
			iVar16 = 0;
			while (iVar16 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar16, &iVar15))
				{
					if (func_2363(uParam0, iParam1, iVar15, bParam3))
					{
						return true;
					}
				}
				iVar16++;
			}
		}
	}
	return false;
}

bool func_1754(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_4 == 179)
	{
		return false;
	}
	if (!func_1973(iParam1))
	{
		return false;
	}
	if (_item_database_get_shop_layout_menu_info_by_id(iParam1, iParam2, &Var0))
	{
		if (Var0.f_6 > 0)
		{
			iVar14 = 0;
			while (iVar14 < Var0.f_6)
			{
				if (_item_database_get_shop_layout_menu_info_by_index(iParam1, iParam2, iVar14, &iVar7))
				{
					if (func_1754(uParam0, iParam1, iVar7, bParam3))
					{
						return true;
					}
				}
				iVar14++;
			}
		}
		if (Var0.f_5 > 0)
		{
			iVar15 = -1;
			iVar16 = 0;
			while (iVar16 < Var0.f_5)
			{
				if (_item_database_get_shop_layout_menu_page_key(iParam1, iParam2, iVar16, &iVar15))
				{
					if (func_2364(uParam0, iParam1, iVar15, bParam3))
					{
						return true;
					}
				}
				iVar16++;
			}
		}
	}
	return false;
}

bool func_1755(var uParam0)
{
	return (func_1759() == 491602716 && func_609(&(uParam0->f_2506), 4));
}

void func_1756(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_2080(uParam0, iParam1, _get_label_text_by_hash(iParam2), bParam3, bParam4, bParam5);
}

bool func_1757()
{
	iVar0 = 1;
	while (iVar0 <= 11)
	{
		iVar1 = func_1779(iVar0);
		if (func_889(iVar1, 0))
		{
			Var2 = { func_831(iVar1, 0, 0) };
		}
		else
		{
			Var2.f_4 = 0;
		}
		if (func_778(iVar1, Var2, Var2.f_4, 0, 0, 0) <= 0)
		{
		}
		else if (!func_1584(2, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1758(int iParam0)
{
	if (!func_889(iParam0, 0))
	{
	}
	if (func_894(iParam0, -1285438911))
	{
		return true;
	}
	return false;
}

int func_1759()
{
	return Global_1952637->f_1675;
}

bool func_1760(int iParam0)
{
	return func_2365(iParam0, &uVar0);
}

void func_1761(var uParam0, int iParam1, int iParam2)
{
	if (func_778(-55206167, func_666(1), -1990194462, 1, 0, 0) <= 5)
	{
		func_1756(uParam0, 2, 0, 0, 0, 0);
		return;
	}
	iVar0 = func_833(iParam1, 1);
	if (&Global_1952637->f_1675.f_1[iVar0] == iParam2 || func_836(iParam2, 0))
	{
		func_1756(uParam0, 2, -1208531349, 0, 0, 0);
	}
	else if (func_1760(iParam2))
	{
		func_1756(uParam0, 2, -1208531349, 1, 1, 0);
	}
	else
	{
		func_1756(uParam0, 2, 920855044, 1, 1, 0);
	}
}

void func_1762(var uParam0, int iParam1)
{
	if (func_947(iParam1) == 119907797)
	{
		uParam0->f_10 = func_2366(iParam1, uParam0->f_12);
	}
}

void func_1763(var uParam0, int iParam1, int iParam2)
{
	if (!Global_1915715->f_23051.f_22)
	{
		func_1357(iParam2, uParam0);
	}
	iVar0 = func_2367(iParam1);
	if (Global_1915715->f_23051.f_1 != 0 && func_2368(iVar0) == func_2368(Global_1915715->f_23051.f_1))
	{
		return;
	}
	if (func_209(get_cam_coord(*uParam0)))
	{
		func_2369(&(Global_1915715->f_23051.f_16), &(Global_1915715->f_23051.f_19), &(Global_1915715->f_23051.f_24[0]->f_9), &(Global_1915715->f_23051.f_24[0]->f_6), &(Global_1915715->f_23051.f_24[0]->f_10), &(Global_1915715->f_23051.f_24[0]->f_11));
	}
	else
	{
		Global_1915715->f_23051.f_16 = { get_cam_coord(*uParam0) };
		Global_1915715->f_23051.f_19 = { get_cam_rot(*uParam0, 2) };
	}
	Global_1915715->f_23051.f_1 = iVar0;
	func_2369(&(Global_1915715->f_23051.f_2), &(Global_1915715->f_23051.f_2.f_3), &(Global_1915715->f_23051.f_2.f_9), &(Global_1915715->f_23051.f_2.f_6), &(Global_1915715->f_23051.f_2.f_10), &(Global_1915715->f_23051.f_2.f_11));
	if (!does_cam_exist(*uParam0))
	{
	}
	Global_1915715->f_23051.f_221 = 0;
	func_1108(1);
	func_1794(0);
	set_cam_params(*uParam0, Global_1915715->f_23051.f_2, Global_1915715->f_23051.f_2.f_3, Global_1915715->f_23051.f_2.f_9, 500, 6, 6, 2, 1, 0);
	if (func_2370(Global_1915715->f_23051.f_1))
	{
		set_cam_near_clip(*uParam0, 0.25f);
	}
	else
	{
		set_cam_near_clip(*uParam0, 0.15f);
	}
	func_1793(*uParam0, func_2368(Global_1915715->f_23051.f_1));
}

void func_1764(var uParam0, int iParam1)
{
	if (!does_cam_exist(*uParam0))
	{
		return;
	}
	if (!Global_1915715->f_23051.f_22)
	{
		func_1357(iParam1, uParam0);
	}
	if (Global_1915715->f_23051.f_1 == -999503751 || Global_1915715->f_23051.f_1 == 0)
	{
		return;
	}
	Global_1915715->f_23051.f_1 = -999503751;
	func_1794(1);
	set_cam_params(*uParam0, *Global_1915715->f_23051.f_24[0], Global_1915715->f_23051.f_24[0]->f_3, Global_1915715->f_23051.f_24[0]->f_9, 500, 6, 6, 2, 1, 0);
	set_cam_near_clip(*uParam0, 0.15f);
	func_1108(0);
	func_1793(*uParam0, 0);
}

void func_1765(int iParam0)
{
	Global_1915715->f_21859 = iParam0;
}

bool func_1766(int iParam0)
{
	if ((iParam0 == 207706105 || iParam0 == -1998614617) || iParam0 == -357182937)
	{
		return true;
	}
	return false;
}

void func_1767(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bVar0 = false;
	switch (func_947(iParam0))
	{
		case -2061583405:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_27), bParam4);
			if (func_894(iParam0, -166674229))
			{
				Var1.f_1 = 39;
				if (func_1155(&Var1, iParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						iVar122 = &Var1.f_1[iVar121];
						if (func_889(iVar122, 0))
						{
							func_1767(iVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_33.f_7), bParam4);
			break;
		default:
			if (func_894(iParam0, 160827531))
			{
				bVar0 = func_2371(iParam0, &(Global_1952637->f_3334.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_2372(0, iParam0);
	}
	if (bParam2)
	{
		func_2373();
	}
	if (bParam1)
	{
		func_605(0, 0);
	}
}

bool func_1768(int iParam0, bool bParam1)
{
	return func_2374(iParam0, 0) < func_2375(iParam0, bParam1);
}

void func_1769(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_947(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_894(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_894(iParam0, 160827531))
			{
				bVar1 = func_2376(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_2373();
	if (func_2377(iVar0) || (iVar0 != -999503751 && func_894(iParam0, -166674229)))
	{
		_0x766315a564594401(func_886(bParam5), iParam0, 0);
	}
	func_2378(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_2372(1, iParam0);
	}
	if (bParam2)
	{
		func_605(0, 0);
	}
}

int func_1770(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_947(iVar1) == iParam0 || (iParam0 == 81053684 && func_894(iVar1, 160827531)))
		{
			if (iParam1 == iVar1)
			{
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

int func_1771(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_832(iVar0);
}

void func_1772(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_2379(iParam0, iParam1))
	{
		func_2380(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

void func_1773(int iParam0, int iParam1)
{
	if (!func_889(iParam0, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_967(iParam0, &Var0, 805880880, 0, 0, -401018458))
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
			iVar7 = func_821(iParam0);
			if ((iVar7 > 0 && iVar7 < 11) && func_1584(4, iVar7))
			{
				sVar3 = "OUTFIT_SAVED_LITERAL";
				sVar5 = func_2381(func_2107(iVar7));
			}
			else
			{
				sVar3 = "ITEM_SAVED";
				sVar5 = _create_var_string(0, func_920(iParam0));
			}
			break;
		case 1:
			sVar4 = "Transaction_Negative";
			iVar6 = 619977481;
			iVar7 = func_821(iParam0);
			if ((iVar7 > 0 && iVar7 < 11) && func_1584(4, iVar7))
			{
				sVar3 = "OUTFIT_DELETED_LITERAL";
				sVar5 = func_2381(func_2107(iVar7));
			}
			else
			{
				sVar3 = "ITEM_DELETED";
				sVar5 = _create_var_string(0, func_920(iParam0));
			}
			break;
	}
	sVar8 = func_975(_create_var_string(10, sVar3, sVar5), iVar6);
	func_980(sVar8, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

bool func_1774(var uParam0, var uParam1, bool bParam2)
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

void func_1775(int iParam0)
{
	Global_17411.f_55.f_644.f_33[iParam0] = 0;
	Global_17411.f_55.f_644.f_33[iParam0]->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = &Global_1952637->f_83[iVar0];
		func_2183(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

void func_1776(int iParam0, int iParam1, int iParam2)
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

void func_1777(int iParam0)
{
	StringCopy(Global_17411.f_2625[iParam0], "", 64);
	func_1776(4, iParam0, 6);
}

bool func_1778(var uParam0)
{
	iVar0 = 1;
	while (iVar0 <= 11)
	{
		iVar1 = func_1779(iVar0);
		Var2 = { func_831(iVar1, 0, 0) };
		if (func_778(iVar1, Var2, Var2.f_4, 0, 0, 0) <= 0)
		{
		}
		else if (!func_1584(2, iVar0))
		{
			*uParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1779(int iParam0)
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

void func_1780(var uParam0)
{
	func_2382(uParam0);
	if (_uiprompt_is_valid(Global_1915715->f_23051.f_222) && func_1570(Global_1915715->f_23051.f_1))
	{
		if (_uiprompt_is_hold_mode_running(Global_1915715->f_23051.f_222))
		{
			if (!Global_1915715->f_23051.f_221)
			{
				func_2383(uParam0);
			}
		}
		else if (Global_1915715->f_23051.f_221)
		{
			func_2383(uParam0);
		}
	}
}

void func_1781(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
}

int func_1782(var uParam0, int iParam1)
{
	bVar0 = func_2071(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2207.f_53, func_1879(iParam1, bVar0));
}

int func_1783(var uParam0, int iParam1)
{
	bVar0 = func_2071(uParam0, iParam1);
	return _databinding_read_data_bool_from_parent(uParam0->f_2207.f_53, func_1880(iParam1, bVar0));
}

void func_1784(int iParam0)
{
	func_587(&(Global_1915715->f_20241.f_3), iParam0);
}

void func_1785()
{
	func_2384(&(Global_1952637->f_2897));
}

bool func_1786(var uParam0, var uParam1, struct<4> Param2)
{
	iVar3 = &uParam0->f_1[34];
	iVar4 = &uParam0->f_1[18];
	iVar5 = 0;
	if (func_123() == 24043185)
	{
		iVar5 = 1;
	}
	if (func_947(iVar4) != 912453393)
	{
		iVar4 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = (&uParam0->f_1[iVar0] == 0 || func_836(&(uParam0->f_1[iVar0]), 1));
		if (!bVar1)
		{
			iVar2 = &uParam0->f_1[iVar0];
			Var6 = { func_831(iVar2, 1, 0) };
			func_2385(iVar0, &(uParam0->f_1[iVar0]));
			if (func_778(iVar2, Var6, Var6.f_4, 1, 0, 0) == 0)
			{
				func_2386(uParam1, 1, iVar0, 0);
			}
			else if ((&uParam0->f_1[iVar0] != 1733464892 && &uParam0->f_1[iVar0] != -230310728) && &uParam0->f_1[iVar0] != 1326838792)
			{
				if (_get_ped_component_category(&(uParam0->f_1[iVar0]), iVar5, true) == 0)
				{
					func_2386(uParam1, 1, iVar0, 0);
				}
				else
				{
					func_2387(uParam1, iVar0, iVar2);
					Jump @313; //curOff = 274
					func_2385(iVar0, &(Global_1952637->f_83[iVar0]));
					func_1280(Global_1952637->f_1794.f_1[iVar0], 16, 6);
					if (func_1177(iVar0, iVar3, iVar4))
					{
						if (!func_2388(uParam0, iVar0, Param2))
						{
							func_2386(uParam1, 1, iVar0, 1);
						}
						else
						{
							Jump @416; //curOff = 355
							Jump @416; //curOff = 358
							if (!func_2389(&(uParam0->f_1[iVar0]), func_1171(Param2, Global_1952637->f_83[iVar0]->f_9, 1, -1), iVar0, Param2, 0))
							{
								func_2386(uParam1, 1, iVar0, 0);
							}
						}
						iVar0++;
						func_2390(&(Global_1952637->f_1794), uParam1, Param2);
						if (*uParam1 != 1)
						{
							func_2386(uParam1, 0, -1, 0);
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_1787(var uParam0, int iParam1)
{
	if (uParam0->f_17 == 0)
	{
		iVar0 = iParam1;
	}
	else
	{
		iVar0 = uParam0->f_17;
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_57))
	{
		_databinding_write_data_hash_string(uParam0->f_2207.f_57, iVar0);
	}
	else
	{
		uParam0->f_2207.f_57 = _databinding_add_data_hash(uParam0->f_2207.f_50, "PageFilterCurrentPageLabel", iVar0);
	}
}

bool func_1788(var uParam0)
{
	uParam0->f_2207.f_49 = 0;
	return _0x3d084d5568fb4028(40);
}

int func_1789(var uParam0, float fParam1)
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

void func_1790(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_520(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_520(uParam0))
		{
		}
	}
}

int func_1791()
{
	return Global_1893587->f_2;
}

void func_1792(int iParam0, int iParam1, int iParam2)
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
			if (iParam1 == -1 || !func_2392(&vVar0, iParam1, iParam2, func_2391(iVar7, "CamPosOffset")))
			{
				vVar0 = { func_2393(iVar7) };
			}
			*Global_1915715->f_23051.f_24[iVar7] = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
		}
		if (iParam1 == -1 || !func_2392(&vVar0, iParam1, iParam2, func_2391(iVar7, "LookAt")))
		{
			vVar0 = { func_2394(iVar7) };
		}
		vVar0 = { get_offset_from_entity_in_world_coords(iParam0, vVar0) };
		if (Global_1915715->f_23051.f_240 && iVar7 != 0)
		{
			vVar0 = { func_2395(&vVar0, &vVar3) };
		}
		Global_1915715->f_23051.f_24[iVar7]->f_6 = { vVar0 };
		if (iVar7 != 0)
		{
			Global_1915715->f_23051.f_24[iVar7]->f_3 = { func_2396(*Global_1915715->f_23051.f_24[iVar7], vVar0) };
		}
		if (iParam1 == -1 || !func_2397(&fVar6, iParam1, iParam2, func_2391(iVar7, "FOV")))
		{
			fVar6 = func_2398(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_9 = fVar6;
		if (iParam1 == -1 || !func_2397(&fVar6, iParam1, iParam2, func_2391(iVar7, "FNum")))
		{
			fVar6 = func_2399(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_10 = fVar6;
		if (iParam1 == -1 || !func_2397(&fVar6, iParam1, iParam2, func_2391(iVar7, "FocusDistance")))
		{
			fVar6 = func_2400(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_11 = fVar6;
		if (Global_1915715->f_23051.f_240 && iVar7 != 0)
		{
			*Global_1915715->f_23051.f_24[iVar7] = { func_2401(iVar7) };
		}
		if (iParam1 == -1 || !func_2397(&fVar6, iParam1, iParam2, func_2391(iVar7, "PitchMin")))
		{
			fVar6 = func_2402(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_13 = fVar6;
		if (iParam1 == -1 || !func_2397(&fVar6, iParam1, iParam2, func_2391(iVar7, "PitchMax")))
		{
			fVar6 = func_2403(iVar7);
		}
		Global_1915715->f_23051.f_24[iVar7]->f_12 = fVar6;
		iVar7++;
	}
}

void func_1793(var uParam0, int iParam1)
{
	_0x11f32bb61b756732(uParam0, Global_1915715->f_23051.f_24[iParam1]->f_11);
	Var0 = { func_2404(iParam1) };
	_0xe4b7945ef4f1bfb2(uParam0, &Var0);
}

void func_1794(bool bParam0)
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

int func_1795(int iParam0)
{
	iVar0 = func_947(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_894(iParam0, 160827531)) || func_894(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

bool func_1796(int iParam0)
{
	switch (func_947(iParam0))
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
	if (func_894(iParam0, 160827531))
	{
		return true;
	}
	return false;
}

void func_1797(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_2685[func_833(iParam0, 1)])->f_1 = ((Global_1952637->f_2685[func_833(iParam0, 1)])->f_1 || iParam1);
}

var func_1798(var uParam0)
{
	return uParam0->f_12.f_1;
}

int func_1799(int iParam0)
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

int func_1800(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	iVar0 = func_2405(iParam0);
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

int func_1801(int iParam0)
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

int func_1802(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2406());
	return iVar0;
}

int func_1803(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2407());
	return iVar0;
}

void func_1804(var uParam0, int iParam1, int iParam2)
{
	if (func_1996(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_2408(*uParam0, -415648720, &Var0, 1, -1))
		{
			if (func_889(Var0.f_4, 0))
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
								*iParam1 = (*iParam1 + vVar36.z);
							}
							else if (vVar36.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			iVar44 = func_1171(Var0, 986998820, 0, -1);
			if (func_889(iVar44, 0))
			{
				Var45.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(iVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var45.f_1[iVar74]), &vVar67))
						{
							if (vVar67.y == -1620444701)
							{
								*iParam1 = (*iParam1 + vVar67.z);
							}
							else if (vVar67.y == 2086291460)
							{
								*iParam2 = (*iParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

char* func_1805(int iParam0)
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

char* func_1806(int iParam0, int iParam1)
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
			return func_2409(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_1807(int iParam0)
{
	StringCopy(&cVar0, func_2410(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_2411(&cVar0);
}

char* func_1808(int iParam0)
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

char* func_1809(int iParam0)
{
	iVar0 = func_2412(iParam0);
	switch (iVar0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_1810(int iParam0)
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

int func_1811(int iParam0)
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

int func_1812(int iParam0)
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

int func_1813(int iParam0)
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

char* func_1814(int iParam0)
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

char* func_1815(int iParam0)
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

char* func_1816(int iParam0)
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

char* func_1817(int iParam0)
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

bool func_1818()
{
	return Global_1071686->f_28662.f_22.f_3 != 0;
}

bool func_1819()
{
	return Global_1071686->f_28662.f_65.f_42 != 0;
}

bool func_1820()
{
	return Global_1071686->f_28662.f_58.f_6 == 2;
}

bool func_1821()
{
	return func_1573() >= 11;
}

bool func_1822()
{
	return func_1573() >= 15;
}

bool func_1823()
{
	if (Global_1572887->f_360.f_8 == 2)
	{
		return true;
	}
	return false;
}

bool func_1824(var uParam0)
{
	return uParam0->f_1929;
}

void func_1825(var uParam0, bool bParam1)
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
				func_1386(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_1826(var uParam0, char* sParam1)
{
	_databinding_add_data_string(uParam0->f_2207.f_52, "ItemTooltip", sParam1);
}

void func_1827(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemDescription");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1828(var uParam0)
{
	_databinding_add_data_bool(uParam0->f_2207.f_54, "modifiedPriceVisible", false);
	_databinding_add_data_bool(uParam0->f_2207.f_54, "visible", false);
	_databinding_add_data_bool(uParam0->f_2207.f_54, "rightPriceTextVisible", false);
	_databinding_add_data_int(uParam0->f_2207.f_54, "purchasePrice", 0);
	_databinding_add_data_int(uParam0->f_2207.f_54, "purchaseModifiedPrice", 0);
	_databinding_add_data_string(uParam0->f_2207.f_54, "purchaseLabel", "");
}

void func_1829(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "FooterVisible", bParam1);
}

void func_1830(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1831(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo1");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", iParam2);
	_databinding_add_data_hash(iVar0, "Texture", iParam3);
	_databinding_add_data_hash(iVar0, "Color", iParam4);
}

void func_1832(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "Visible", bParam1);
}

void func_1833(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_bool(iVar0, "IconVisible", bParam1);
	_databinding_add_data_hash(iVar0, "TextureDictionary", iParam2);
	_databinding_add_data_hash(iVar0, "Texture", iParam3);
}

void func_1834(var uParam0, char* sParam1, bool bParam2)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemInfo2");
	_databinding_add_data_hash(iVar0, "Text", 0);
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

void func_1835(var uParam0)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "ItemWeather");
	_databinding_add_data_bool(iVar0, "Visible", false);
	iVar1 = _databinding_add_data_container(uParam0->f_2207.f_52, "OutfitWeather");
	_databinding_add_data_bool(iVar1, "Visible", false);
}

void func_1836(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "SaddleStatsVisible", bParam1);
}

void func_1837(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "StirrupStatsVisible", bParam1);
}

void func_1838(var uParam0, bool bParam1)
{
	_databinding_add_data_bool(uParam0->f_2207.f_52, "StatsVisible", bParam1);
}

void func_1839(var uParam0, bool bParam1)
{
	iVar0 = _databinding_add_data_container(uParam0->f_2207.f_52, "Business");
	_databinding_add_data_bool(iVar0, "FooterVisible", bParam1);
}

char* func_1840()
{
	return "uiPaletteVisible";
}

bool func_1841()
{
	return _request_uiapp_transition_by_hash(1289756680, -1597171896);
}

int func_1842(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return 0;
	}
	uParam0->f_2207.f_78 = iParam1;
	return 1;
}

int func_1843(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	return 1;
}

int func_1844(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_1967(uParam0, func_2413(uParam0), 0);
	return 1;
}

int func_1845(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_2414(uParam0, 0);
	return 1;
}

int func_1846(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	return 1;
}

int func_1847(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	return 1;
}

int func_1848(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	if (func_2415())
	{
	}
	else
	{
		func_1835(uParam0);
	}
	return 1;
}

int func_1849(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	func_2416(uParam0, 0);
	if ((uParam0->f_3 == 37 || uParam0->f_3 == 39) || uParam0->f_3 == 15)
	{
		func_2414(uParam0, 1);
	}
	return 1;
}

int func_1850(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	func_2416(uParam0, 0);
	return 1;
}

int func_1851(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	iVar0 = func_2417(uParam0);
	iVar1 = func_2418(uParam0);
	func_2419(uParam0, iVar1, iVar0, iVar0, 0, 1);
	if (uParam0->f_3 == 21)
	{
		_databinding_add_data_bool(uParam0->f_2207.f_50, "ShavingSplitterVisible", false);
	}
	return 1;
}

int func_1852(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	func_2416(uParam0, 0);
	if (((uParam0->f_3 == 38 || uParam0->f_3 == 37) || uParam0->f_3 == 39) || uParam0->f_3 == 15)
	{
		func_2414(uParam0, 1);
	}
	return 1;
}

int func_1853(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	iVar0 = func_2413(uParam0);
	if (func_889(iVar0, 0))
	{
		func_1967(uParam0, iVar0, 0);
	}
	func_2420(uParam0, 1);
	return 1;
}

int func_1854(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_1855(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
	{
	}
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	return 1;
}

int func_1856(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_1408(uParam0);
	_databinding_add_data_bool(uParam0->f_2207.f_50, "ItemPalettePriceVisible", false);
	return 1;
}

int func_1857(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_1408(uParam0);
	_databinding_add_data_bool(uParam0->f_2207.f_50, "ItemPalettePriceVisible", true);
	return 1;
}

int func_1858(var uParam0, bool bParam1)
{
	if (!func_1915(uParam0))
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
	func_2421(uParam0, 0);
	func_1829(uParam0, 0);
	func_2422(uParam0, 1);
	return 1;
}

int func_1859(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_68))
	{
		_0x75cfac49301e134f(uParam0->f_2207.f_68, 0, 0);
	}
	else
	{
		uParam0->f_2207.f_68 = _0x9d21b185abc2dbc4(uParam0->f_2207.f_50, "Effects", 0, 0);
	}
	func_2414(uParam0, 0);
	return 1;
}

int func_1860(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	if (!uParam0->f_2207.f_81)
	{
		func_1829(uParam0, 0);
	}
	return 1;
}

int func_1861(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	if (!uParam0->f_2207.f_81)
	{
		func_1829(uParam0, 0);
	}
	func_2414(uParam0, 0);
	return 1;
}

int func_1862(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	return 1;
}

int func_1863(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_1915(uParam0))
		{
		}
	}
	return 1;
}

int func_1864(var uParam0, bool bParam1)
{
	func_1784(2);
	func_1784(1024);
	return 1;
}

int func_1865(var uParam0, bool bParam1)
{
	func_1784(2);
	func_1784(1024);
	return 1;
}

int func_1866(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_2416(uParam0, 0);
	func_1756(uParam0, 1, -2494464, 1, 1, 0);
	return 1;
}

int func_1867(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	func_2416(uParam0, 0);
	func_1756(uParam0, 1, -1217561127, 0, 1, 0);
	func_1756(uParam0, 2, -1789759600, 0, 1, 1);
	return 1;
}

int func_1868(var uParam0, bool bParam1)
{
	_databinding_add_data_int(uParam0->f_2207.f_50, "DefaultCategoryIndex", 0);
	_databinding_add_data_int(uParam0->f_2207.f_50, "CategoryCount", 1);
	func_1787(uParam0, func_1742(&(uParam0->f_2207)));
	return 1;
}

int func_1869(var uParam0, bool bParam1)
{
	_databinding_add_data_int(uParam0->f_2207.f_50, "DefaultCategoryIndex", 0);
	_databinding_add_data_int(uParam0->f_2207.f_50, "CategoryCount", 1);
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_51))
	{
		_databinding_write_data_hash_string(uParam0->f_2207.f_51, -1833437118);
	}
	else
	{
		uParam0->f_2207.f_51 = _databinding_add_data_hash(uParam0->f_2207.f_50, "Title", -1833437118);
	}
	func_1787(uParam0, func_920(Global_1051439->f_3258));
	if (func_947(Global_1051439->f_3258) == -1839668642)
	{
		func_1787(uParam0, func_976(Global_1051439->f_3258, -442898163));
	}
	return 1;
}

int func_1870(var uParam0, bool bParam1)
{
	func_1787(uParam0, func_1365(uParam0));
	return 1;
}

bool func_1871(var uParam0)
{
	iVar0 = func_2423(uParam0);
	if (iVar0 > 0)
	{
		if (_item_database_get_shop_layout_menu_info_by_index(*uParam0, uParam0->f_12, 0, &Var1))
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

bool func_1872(int iParam0, var uParam1)
{
	iVar0 = func_2423(uParam1);
	if (iVar0 > 0)
	{
		if (iParam0 >= 0 && iParam0 < iVar0)
		{
			if (_item_database_get_shop_layout_menu_info_by_index(*uParam1, func_1878(uParam1), iParam0, &Var1))
			{
				uParam1->f_19 = iParam0;
				uParam1->f_12 = { Var1 };
				return true;
			}
		}
	}
	return false;
}

bool func_1873(var uParam0)
{
	return uParam0->f_2207.f_121;
}

bool func_1874(var uParam0)
{
	return uParam0->f_2207.f_121.f_1;
}

void func_1875(var uParam0)
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
	func_1953(uParam0, 0);
	if (_databinding_is_data_id_valid(uParam0->f_2207.f_61))
	{
		_databinding_remove_data_entry(uParam0->f_2207.f_61);
	}
	uParam0->f_2207.f_61 = _databinding_add_data_container_by_hash(uParam0->f_2207.f_50, -248239712);
}

void func_1876()
{
	Global_1915715->f_20241.f_3.f_11 = 0;
	Global_1915715->f_20241.f_3.f_12 = 0;
	Global_1915715->f_20241.f_3.f_13 = uVar0;
	Global_1915715->f_20241.f_3.f_14 = 0;
	Global_1915715->f_20241.f_3.f_15 = 0;
	Global_1915715->f_20241.f_3.f_16 = uVar0;
}

bool func_1877(int iParam0, var uParam1)
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

var func_1878(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return &(uParam0->f_31[(uParam0->f_42 - 1)]);
		}
	}
	return func_2424(uParam0);
}

char* func_1879(int iParam0, bool bParam1)
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

char* func_1880(int iParam0, bool bParam1)
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

char* func_1881(int iParam0)
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

bool func_1882(var uParam0, var uParam1)
{
	if (uParam0->f_42 > 1)
	{
		if (_item_database_get_shop_layout_menu_info_by_id(*uParam0, func_1878(uParam0), uParam1))
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

bool func_1883(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = func_2008(&(uParam0->f_2207));
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_1887(iVar1, &(uParam0->f_2207), &uVar3))
		{
			if (!func_2425(uParam0, iVar1))
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

int func_1884(int iParam0, var uParam1)
{
	if (!_item_database_is_shop_layout_key_valid(*uParam1))
	{
		return -1;
	}
	iVar0 = func_2008(uParam1);
	if ((iParam0 < 0 || iParam0 >= iVar0) || iVar0 == 0)
	{
		return -1;
	}
	iVar1 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, iParam0, &iVar1))
	{
		return iVar1;
	}
	return -1;
}

int func_1885(int iParam0)
{
	return iParam0;
}

int func_1886(var uParam0)
{
	return _databinding_read_data_int_from_parent(uParam0->f_2207.f_50, func_2426());
}

bool func_1887(int iParam0, var uParam1, int iParam2)
{
	iVar0 = -1;
	if (_item_database_get_shop_layout_menu_page_key(*uParam1, uParam1->f_12, iParam0, &iVar0))
	{
		if (_item_database_get_shop_layout_page_info_by_key(*uParam1, iVar0, iParam2))
		{
			return true;
		}
	}
	return false;
}

int func_1888(var uParam0, int iParam1)
{
	if (func_2427(func_1403(uParam0), iParam1, 1))
	{
		return 703647745;
	}
	if (func_2427(func_1403(uParam0), iParam1, 16))
	{
		return 644372540;
	}
	if (func_2427(func_1403(uParam0), iParam1, 32))
	{
		return 931007774;
	}
	return iParam1;
}

int func_1889()
{
	return Global_1915715->f_20241.f_3.f_1;
}

var func_1890()
{
	return Global_1915715->f_20241.f_3.f_10;
}

int func_1891()
{
	return Global_1915715->f_20241.f_3.f_8;
}

void func_1892(int iParam0)
{
	Global_1915715->f_20241.f_3.f_10 = *iParam0;
}

char* func_1893()
{
	return "uiItemEnum";
}

void func_1894(int iParam0)
{
	Global_1915715->f_20241.f_3.f_9 = iParam0;
}

void func_1895(var uParam0)
{
	if (Global_1915715->f_20241.f_3.f_1 == -729996127)
	{
		func_2428(uParam0->f_2207.f_72);
		iVar0 = _databinding_get_item_context_by_index(uParam0->f_2207.f_60, uParam0->f_2207.f_72);
		func_1892(&iVar0);
		iVar1 = _databinding_read_data_int_from_parent(iVar0, func_1893());
		iVar2 = iVar1;
		func_1894(iVar2);
	}
}

void func_1896(var uParam0, var uParam1)
{
	iVar0 = func_1366(uParam0);
	iVar1 = func_2429(uParam0, func_1891());
	uParam1->f_11 = iVar0;
	uParam1->f_12 = iVar1;
	uParam1->f_13 = func_1365(uParam0);
	*uParam1 = func_2430();
	uParam1->f_7 = func_2431();
	uParam1->f_1 = func_2432();
	uParam1->f_2 = func_1891();
	uParam1->f_8 = func_1890();
	uParam1->f_10 = func_2433();
	uParam1->f_21 = func_2434(uParam0);
	uParam1->f_22 = func_2418(uParam0);
	uParam1->f_3 = { func_2435(&(uParam1->f_8)) };
	uParam1->f_14 = _databinding_read_data_int_from_parent(func_1890(), func_2436());
	uParam1->f_15 = _databinding_read_data_int_from_parent(func_1890(), func_2437());
	if (uParam0->f_3 == 2 || uParam0->f_3 == 28)
	{
		uParam1->f_20 = _databinding_read_data_int_from_parent(func_1890(), func_1893());
	}
}

int func_1897(var uParam0, int iParam1)
{
	return func_2438(&(uParam0->f_2207), iParam1);
}

int func_1898(var uParam0)
{
	return uParam0->f_2207.f_70;
}

void func_1899()
{
	Global_1051439->f_4698 = { func_1166() };
}

void func_1900(var uParam0)
{
	iVar0 = func_1389();
	iVar1 = func_1421();
	iVar2 = func_1415();
	if (!func_889(iVar0, 0) && !func_1390(func_1304(iVar0), 2))
	{
		return;
	}
	if (iVar2 != -348190488)
	{
		if (func_2439(iVar0))
		{
			bVar3 = true;
			if (uParam0->f_4 != 179)
			{
				if (func_893(iVar0) == -1037537535)
				{
					if (func_1906(uParam0, iVar0, -853534656))
					{
						bVar3 = false;
					}
				}
			}
			if (bVar3)
			{
				func_1391(iVar0);
				_databinding_add_data_bool(iVar1, func_2440(), false);
			}
		}
	}
}

int func_1901(var uParam0, int iParam1, var uParam2)
{
	switch (iParam1)
	{
		case 1036144478:
			return 1;
		case 2057502022:
			return 1;
		case -996064024:
			return func_2441(uParam0, uParam2);
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
			return func_2442(uParam0, uParam2);
		case 1705401718:
			return func_2443(uParam0, uParam2);
		case 310306577:
			return func_2444(uParam0, uParam2);
		case 1275816411:
			return func_2445(uParam0, uParam2);
		case 178644271:
			return func_2446(uParam0, uParam2);
		case 2092883099:
			return func_2447(uParam0, uParam2);
		case 1860655620:
			return func_2448(uParam0, uParam2);
		case 94016929:
			return func_2449(uParam0, uParam2);
		case 1426047132:
			return func_2450(uParam0, uParam2);
		case 803749366:
			return func_2451(uParam0, uParam2);
		case -2144266389:
			return 1;
		case -1548684311:
			return func_2452(uParam0, uParam2);
		case 1965673387:
			return func_2453(uParam0, uParam2);
	}
	return 1;
}

bool func_1902()
{
	return Global_1915715->f_22477;
}

bool func_1903(int iParam0)
{
	return (func_2074(iParam0, -570078785) && !func_2074(iParam0, -915411861));
}

bool func_1904(int iParam0)
{
	if (((((((((((iParam0 == 761079318 || iParam0 == 1942587409) || iParam0 == 2077448405) || iParam0 == -2056428614) || iParam0 == 336033112) || iParam0 == -1499658354) || iParam0 == -1968468235) || iParam0 == -348190488) || iParam0 == -395279071) || iParam0 == 1837492866) || iParam0 == 1119253406) || iParam0 == 753463028)
	{
		return true;
	}
	return false;
}

bool func_1905()
{
	return _0xdbc754cb6ccb9378();
}

bool func_1906(var uParam0, int iParam1, int iParam2)
{
	bVar0 = false;
	if (iParam1 == -2020756516)
	{
		return true;
	}
	if (iParam2 == -1502467280 || iParam2 == 777890122)
	{
		bVar0 = func_1911(uParam0, iParam1);
	}
	else if (iParam2 == -584027224 || iParam2 == -87783305)
	{
		if (func_1300(iParam1, 1, 0, 0) > 0)
		{
			return true;
		}
		if (func_2454(897456793, iParam1))
		{
			return true;
		}
		if (func_2454(-1565675519, iParam1))
		{
			return true;
		}
	}
	else if (iParam2 == 1702073444)
	{
		iVar3 = func_1388(uParam0);
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
		if (func_2455(func_1972(&(uParam0->f_2207)), iVar3, &Var8))
		{
			iVar1 = 0;
			while (iVar1 < Var8.f_3)
			{
				Var4 = { func_2456(iVar1, Var8, &(uParam0->f_2207)) };
				if (Var4 == iParam1 && func_889(Var4, 0))
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
							iVar25 = func_2457(iVar24, iVar23);
							if (((func_889(iVar25, 0) && iVar25 != iParam1) && func_2458(&(uParam0->f_2207), iVar25, &uVar2)) || _item_database_get_item_tag_type(iVar25, Var12.f_8) == -2089472884)
							{
								iVar26 = func_2037(uParam0, iVar25);
								if (func_1906(uParam0, iVar25, iVar26))
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
								if (iParam2 == 1394581936)
								{
									if (func_2459(iParam1))
									{
										Var27 = { func_1930(uParam0) };
										return func_2460(&Var27, iParam1);
									}
									else
									{
										if ((func_894(iParam1, 1435272033) && func_2461(iParam1, &bVar31)) && func_2462(func_1995(iParam1, bVar31, 0)) == 785047730)
										{
											return true;
										}
										Var32 = { func_2092() };
										return func_2460(&Var32, iParam1);
									}
								}
								else
								{
									Var36 = { func_831(iParam1, 0, 1) };
									bVar0 = func_1301(iParam1, &Var36, 1, 0, 0, -1, 0);
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

bool func_1907(int iParam0, bool bParam1)
{
	return (func_2074(iParam0, 997808187) && !func_2463(iParam0, 997808187, bParam1));
}

int func_1908(int iParam0)
{
	return iParam0 * 100;
}

bool func_1909(int iParam0)
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

bool func_1910(int iParam0)
{
	return func_894(iParam0, -800818901);
}

bool func_1911(var uParam0, int iParam1)
{
	bVar0 = false;
	if (func_2464(iParam1))
	{
		bVar0 = true;
	}
	else if (func_894(iParam1, 1844906744))
	{
		iVar1 = func_947(iParam1);
		iVar2 = func_893(iParam1);
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
			iVar24 = func_2413(uParam0);
			bVar25 = func_2465(uParam0);
			if (iVar24 != 0 && bVar25 != 0)
			{
				Var20 = { func_667(iVar24, func_1273(0), bVar25, 0) };
				if (iVar1 != 0)
				{
					bVar0 = true;
					iVar26 = func_2466(iParam1);
					iVar27 = 0;
					while (iVar27 < iVar26)
					{
						if (_item_database_get_fits_slot_info(iVar1, iVar27, &bVar3))
						{
							Var6 = { func_1172(0, bVar3, -1591664384, -1591664384, 0, 0, 0) };
							func_1576(&Var6, Var20);
							if (func_1173(&Var6, &iVar4, &iVar5, 1))
							{
								if (iVar5 != 0)
								{
									bVar0 = false;
								}
								func_1179(iVar4);
							}
						}
						iVar27++;
					}
				}
			}
		}
	}
	else if (func_894(iParam1, 188214926))
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
		iVar52 = func_1388(uParam0);
		if (iVar52 == -1)
		{
			return false;
		}
		if (func_2455(func_1972(&(uParam0->f_2207)), iVar52, &Var34))
		{
			iVar28 = 0;
			while (iVar28 < Var34.f_3)
			{
				Var30 = { func_2456(iVar28, Var34, &(uParam0->f_2207)) };
				if (Var30 == iParam1 && func_889(Var30, 0))
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
							iVar51 = func_2457(iVar50, iVar49);
							if (((func_889(iVar51, 0) && iVar51 != iParam1) && func_2458(&(uParam0->f_2207), iVar51, &uVar29)) || _item_database_get_item_tag_type(iVar51, Var38.f_8) == -2089472884)
							{
								if (func_1911(uParam0, iVar51))
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
								iVar53 = func_2413(uParam0);
								bVar0 = func_2467(iVar53, iParam1, func_2465(uParam0));
								return bVar0;
							}
						}
					}
				}
			}
		}
	}
}

bool func_1912(int iParam0, int iParam1, bool bParam2)
{
	if (!func_889(iParam0, 0))
	{
		return false;
	}
	if (func_2084(iParam0, 1) && !func_2468(iParam0, 1))
	{
		return false;
	}
	if (bParam2 && func_2072(iParam0, &iVar0))
	{
		if (func_2469(iVar0, 997808187, 0) && !func_2470(iVar0, 997808187))
		{
			return true;
		}
		else if (func_2469(iVar0, -570078785, 0))
		{
			return func_2073(iVar0, -570078785, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_2083(iParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return false;
		}
		iVar7 = func_1929(iParam0, iVar3, 0, 1, 1);
		if (iVar3 == -570078785)
		{
			return func_1909(iVar7);
		}
		else if (iVar3 == -915411861)
		{
			return func_2471(iVar7);
		}
		else if (iVar3 == 997808187)
		{
			return true;
		}
		else
		{
			return func_2472(iParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

void func_1913(int iParam0)
{
	Global_1051439->f_4466 = iParam0;
}

bool func_1914(int iParam0)
{
	iVar0 = func_1167(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_1915(var uParam0)
{
	iVar0 = 0;
	uParam0->f_2207.f_76 = 0;
	iVar1 = 0;
	iVar1 = func_2008(&(uParam0->f_2207));
	if (iVar1 > 0)
	{
		iVar0 = 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1887(iVar2, &(uParam0->f_2207), &iVar3))
			{
				if (!func_2425(uParam0, iVar2))
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
		}
		{
			{
			}
		}
	}