void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_59 = { 0f, 0f, 0f };
	iLocal_1756 = 1;
	sLocal_1767 = "beat_gang_camp_reminder";
	iLocal_1768 = 23;
	iLocal_1772 = -1986209836;
	if (has_force_cleanup_occurred(523))
	{
		func_1();
		func_2();
		if (iLocal_39 < 1)
		{
			iLocal_39 = 1;
		}
		iLocal_30 = 3;
		if (get_cause_of_most_recent_force_cleanup() != 2)
		{
			func_3(&vScriptParam_0);
		}
		else
		{
			func_4(&vScriptParam_0);
		}
	}
	func_5(vScriptParam_0);
	while (true)
	{
		func_6();
		if ((Local_62.f_1620 % 2) == 0)
		{
			func_7();
		}
		else
		{
			func_8();
		}
		if (iLocal_30 != 3)
		{
			if (func_9(vScriptParam_0))
			{
				func_10(3);
			}
		}
		func_11(vScriptParam_0);
		func_12();
		switch (iLocal_30)
		{
			case 0:
				func_13();
				break;
			case 1:
				func_14(&vScriptParam_0);
				break;
			case 2:
				func_15(&vScriptParam_0);
				break;
			case 3:
				func_16(&vScriptParam_0);
				break;
		}
		Local_62.f_1620++;
		wait(0);
	}
}

void func_1()
{
	if (get_cause_of_most_recent_force_cleanup() != 1)
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			vVar0 = { func_17(1217.249f, -1200.055f, 75.33141f, &uVar3, &uVar4, 0, 0, 0, 0, 0, 0) };
			func_18(vVar0, uVar4, uVar3, 0);
			break;
	}
}

void func_2()
{
	switch (iLocal_29)
	{
		case 1:
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_FAIL", 64);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_FAIL", 128);
			break;
	}
}

void func_3(var uParam0)
{
	if (!func_20(uParam0))
	{
		return;
	}
	if (!func_21())
	{
		return;
	}
	if (!func_22())
	{
		return;
	}
	if (!func_23())
	{
		return;
	}
	switch (Local_62.f_1631)
	{
		case 0:
			func_24();
			Local_62.f_1631 = 1;
			return;
		case 1:
			func_25();
			Local_62.f_1631 = 2;
			return;
		default:
			break;
	}
	func_26(Local_62, 0);
	terminate_this_thread();
}

void func_4(var uParam0)
{
	func_20(uParam0);
	func_21();
	func_22();
	func_23();
	func_24();
	func_25();
	func_26(Local_62, 0);
	terminate_this_thread();
}

void func_5(vector3 vParam0)
{
	iLocal_29 = func_27(vParam0);
	Local_62 = vParam0.z;
	Local_62.f_170.f_8 = vParam0.x;
	Local_62.f_1.f_51 = Local_62;
	if (func_28(Local_62))
	{
		func_29(8388608);
		func_29(16777216);
		func_30(iLocal_29, 8);
	}
	else
	{
		func_31(8388608);
	}
	if (func_32(Local_62, 1, 0))
	{
		func_29(2);
	}
	if (func_32(Local_62, 0, 1))
	{
		func_29(256);
	}
	else
	{
		switch (iLocal_29)
		{
			case 1:
				if (func_33(Local_62))
				{
					func_34(29, 8);
				}
				else if (func_35(Local_62, 256) || func_36(Local_62, 8388608))
				{
					func_34(29, 8);
				}
				break;
		}
	}
	func_37();
	func_38();
	if (Global_20710.f_2402)
	{
		func_39(4);
	}
	if (func_40(vParam0.z) && !func_41(vParam0.y, -1))
	{
		func_29(4);
		func_10(2);
	}
	if ((func_42(iLocal_29, 1) || (func_43(7) && iLocal_29 == 3)) || func_35(73, 1))
	{
		func_29(1);
	}
}

void func_6()
{
	if (!func_44(4))
	{
		return;
	}
	iVar0 = Local_62.f_170;
	iVar1 = func_45(Local_62.f_170.f_8);
	if (!_0x800df3fc913355f3(iVar1))
	{
		return;
	}
	iVar2 = _0x31c70a716cae1fee(iVar1);
	iVar3 = iVar2;
	if (iVar0 != iVar3)
	{
		Local_62.f_170 = func_46(Local_62.f_170.f_8);
		func_49(Local_62.f_170, 1, func_47(), 1, func_48());
		if (func_50(&(Local_62.f_170.f_13), 1))
		{
			func_51(&(Local_62.f_170.f_67), 0);
		}
		if (is_entity_dead(Local_62.f_170))
		{
		}
		else
		{
			_0xf74e134f40192884(Local_62.f_170, 2);
		}
	}
}

void func_7()
{
	vVar0 = { func_52(Local_62) };
	if (!func_53(vVar0, vLocal_59))
	{
		Local_62.f_97 = func_54(Global_35, vVar0, 1);
	}
	if (!func_55(32))
	{
		if (func_56(Global_35, 1))
		{
			func_57(32);
		}
	}
	else if (!func_56(Global_35, 1))
	{
		func_58(32);
	}
}

void func_8()
{
	if (func_59())
	{
		return;
	}
	if (func_60(8388608) || func_60(256))
	{
		func_61(&(Local_62.f_1390));
		return;
	}
	if (func_62(1))
	{
		return;
	}
	if (!func_63(Local_62.f_1391))
	{
		if (!func_64())
		{
			return;
		}
	}
	switch (iLocal_29)
	{
		case 0:
			if (!func_65())
			{
				return;
			}
			break;
	}
	vVar0 = { func_66() };
	if (func_67(vVar0))
	{
		return;
	}
	func_68(vVar0, &(Local_62.f_1390), -757657449, 0, 0, 0);
	func_39(1);
}

bool func_9(vector3 vParam0)
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (func_69(vParam0))
	{
		return true;
	}
	if (func_70(vParam0))
	{
		return true;
	}
	switch (iLocal_29)
	{
		case 1:
			if (func_71())
			{
				func_72(2);
				return true;
			}
			if (!func_65())
			{
				if (func_62(16777216))
				{
					if (!func_62(33554432))
					{
						return true;
					}
				}
				else if (Local_62.f_97 > 30f && func_73())
				{
					set_entity_rotation(&(Local_62.f_1226[0]), 0f, 0f, 165f, 2, true);
					if (Local_62.f_1247[8]->f_1 || func_74(Local_62.f_170, &(Local_62.f_1247[8])))
					{
						func_75(Local_62.f_390[0]);
						_0x7b204f88f6c3d287(func_45(Local_62.f_170.f_8));
					}
					return true;
				}
			}
			break;
		default:
			iVar0 = func_76(iLocal_29);
			if (iVar0 != 0)
			{
				bVar1 = func_77(iVar0);
				if (func_78(iVar0))
				{
					if (bVar1)
					{
						func_72(2);
						return true;
					}
					else
					{
						func_79(iVar0);
					}
				}
				else if (bVar1)
				{
					if (func_42(iLocal_29, 8))
					{
						func_80(-1, 0, 0, 0, 0);
						func_81(60, 0, 1);
					}
				}
			}
			break;
	}
	bVar2 = func_82();
	if (func_83(&bVar2))
	{
		if (func_60(64))
		{
			func_84(&vParam0);
			if (func_32(vParam0.z, 1, 1))
			{
				func_85(vParam0.z);
			}
			func_72(2);
		}
		else if (!func_82())
		{
			func_72(2);
		}
		if (func_62(33554432))
		{
			if (iLocal_29 == 1)
			{
				func_75(Local_62.f_390[0]);
			}
		}
		return true;
	}
	if (func_86())
	{
		func_72(2);
		return true;
	}
	if (!bVar2 && !func_65())
	{
		if ((!func_41(vParam0.y, -1) && !func_60(4)) && !func_44(16))
		{
			return true;
		}
	}
	return false;
}

void func_10(int iParam0)
{
	iLocal_30 = iParam0;
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	if (func_60(4) && !func_60(8))
	{
		return;
	}
	func_87();
	func_88(&uParam0);
}

void func_12()
{
	if (func_82())
	{
		return;
	}
	if (iLocal_30 < 0)
	{
		return;
	}
	if (func_44(4096))
	{
		return;
	}
	if (!func_42(iLocal_29, 8))
	{
		return;
	}
	iVar0 = func_89();
	sVar1 = func_90();
	sVar2 = _0xceb40b678e403759(iVar0);
	if (!are_strings_equal(sVar2, sVar1))
	{
		clear_ped_tasks_immediately(Local_62.f_170, false, true);
		_0x187d65f3aec5d679(iVar0, sVar1);
	}
	func_91(4096);
}

void func_13()
{
	switch (iLocal_37)
	{
		case 0:
			if (func_92())
			{
				func_93(1);
			}
			break;
		case 1:
			func_94();
			func_93(2);
			break;
		case 2:
			if (func_95())
			{
				func_93(4);
			}
			break;
		case 3:
			func_96();
			func_93(4);
			break;
		case 4:
			if (func_97(1))
			{
				Local_62.f_1 = Local_62.f_170;
				if (does_entity_exist(Local_62.f_1))
				{
					_request_ped_emotional_preset(Local_62.f_1, "TaskIntimidated_OnFoot");
					set_ped_config_flag(Local_62.f_1, 448, true);
				}
				func_98(4);
				func_93(5);
			}
			break;
		case 5:
			func_10(1);
			break;
	}
}

void func_14(var uParam0)
{
	if (!func_99(16))
	{
		return;
	}
	if (Global_1393521->f_1)
	{
		func_95();
	}
	func_100(uParam0);
	func_101();
	func_102();
	if ((Local_62.f_1620 % 10) == 0)
	{
		func_103(uParam0);
	}
	switch (iLocal_38)
	{
		case 0:
			if (iLocal_40 >= 7)
			{
				func_104();
			}
			func_105(uParam0);
			break;
		case 1:
			func_104();
			func_106(uParam0);
			break;
		case 2:
			func_104();
			func_107(uParam0);
			break;
		case 3:
			func_108();
			break;
	}
}

void func_15(var uParam0)
{
	switch (iLocal_29)
	{
		case 2:
			func_109(uParam0);
			break;
		case 3:
			func_110(uParam0);
			break;
	}
}

void func_16(var uParam0)
{
	switch (iLocal_39)
	{
		case 0:
			if (func_111(uParam0))
			{
				func_112(&(Local_62.f_1));
				func_72(1);
			}
			break;
		case 1:
			if (!is_entity_dead(Local_62.f_1))
			{
				set_ped_config_flag(Local_62.f_1, 448, false);
			}
			switch (iLocal_29)
			{
				case 1:
					if (is_entity_dead(&(Local_62.f_390[0])) || func_113(&(Local_62.f_1216[0]), "COWER_LOOP", "SCENE_RHDGUN_HELP"))
					{
						if (does_entity_exist(&(Local_62.f_390[0])))
						{
							delete_ped(Local_62.f_390[0]);
						}
					}
					func_72(2);
					break;
				default:
					func_72(2);
					break;
			}
			break;
		case 2:
			func_3(uParam0);
			break;
	}
}

Vector3 func_17(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_114(vParam0, uParam3, uParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_67(vVar0))
	{
		vVar0 = { func_114(vParam0, uParam3, uParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_18(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_19(char* sParam0, int iParam1)
{
	if (func_115(iParam1))
	{
		return;
	}
	trigger_music_event(sParam0);
	func_116(iParam1);
}

bool func_20(var uParam0)
{
	if (Local_62.f_1635)
	{
		return true;
	}
	func_117(&(Local_62.f_1));
	switch (iLocal_29)
	{
		case 1:
			if (func_62(16777216))
			{
				func_34(Local_62, 256);
				func_118(Local_62, 8388608);
			}
			else if (!Global_1935630->f_12)
			{
				if (func_119(&(Local_62.f_390[0]->f_9), 64) || func_120(4))
				{
					func_121(29);
				}
			}
			else
			{
				func_122(0);
				func_123();
			}
			if (func_73())
			{
				func_122(1);
			}
			break;
	}
	func_124(uParam0);
	Local_62.f_1635 = 1;
	return true;
}

bool func_21()
{
	if (Local_62.f_1629 == 4)
	{
		return true;
	}
	switch (Local_62.f_1629)
	{
		case 0:
			func_125();
			Local_62.f_1629 = 1;
			switch (iLocal_29)
			{
				case 1:
					func_126(&(Local_62.f_1247[11]));
					break;
			}
			if (_does_volume_exist(Local_62.f_1290))
			{
				_0x74c2b3dc0b294102(Local_62.f_1290);
				_0xa1cfb35069d23c23(Local_62.f_1290);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < iLocal_55)
			{
				if (!does_entity_exist(&(Local_62.f_390[iVar0])))
				{
				}
				else
				{
					func_61(&(Local_62.f_390[iVar0]->f_1));
					if (iLocal_29 == 3)
					{
						set_ped_relationship_group_hash(&(Local_62.f_390[iVar0]), -401180987);
					}
					set_ped_keep_task(&(Local_62.f_390[iVar0]), true);
					func_127(&(Local_62.f_390[iVar0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
					set_ped_as_no_longer_needed(Local_62.f_390[iVar0]);
				}
				iVar0++;
			}
			Local_62.f_1629 = 2;
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!does_entity_exist(&(Local_62.f_1479[iVar0])))
				{
				}
				else
				{
					set_ped_as_no_longer_needed(Local_62.f_1479[iVar0]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_54)
			{
				if (is_entity_dead(&(Local_62.f_1021[iVar0])))
				{
				}
				else
				{
					set_ped_keep_task(&(Local_62.f_1021[iVar0]), true);
					func_127(&(Local_62.f_1021[iVar0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
					set_ped_as_no_longer_needed(Local_62.f_1021[iVar0]);
				}
				iVar0++;
			}
			Local_62.f_1629 = 3;
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 < Local_62.f_1189)
			{
				if (does_entity_exist(Local_62.f_1189[iVar1]->f_5))
				{
					func_61(&(Local_62.f_1189[iVar1]->f_6));
					set_object_as_no_longer_needed(&(Local_62.f_1189[iVar1]->f_5));
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 < Local_62.f_1198)
			{
				if (!is_entity_dead(&(Local_62.f_1198[iVar2])))
				{
					func_61(&(Local_62.f_1198[iVar2]->f_1));
					set_object_as_no_longer_needed(Local_62.f_1198[iVar2]);
				}
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < Local_62.f_1241)
			{
				if (&Local_62.f_1241[iVar3] == 0)
				{
				}
				else if (_0x1ff441d7954f8709(&(Local_62.f_1241[iVar3])))
				{
					_0xd2b9c78537ed5759(&(Local_62.f_1241[iVar3]));
				}
				iVar3++;
			}
			Local_62.f_1629 = 4;
			return true;
	}
	return false;
}

bool func_22()
{
	func_128(&(Local_62.f_1388), "spiHeadLook0_0");
	func_128(&(Local_62.f_1387), "spiInvestigate0_0");
	Local_62.f_1633 = 1;
	return true;
}

bool func_23()
{
	if (Local_62.f_1634)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_62.f_1355)
	{
		func_129(Local_62.f_1355[iVar0], &(Local_62.f_1355[iVar0]->f_1));
		iVar0++;
	}
	switch (iLocal_29)
	{
		case 3:
			func_130();
			break;
	}
	Local_62.f_1634 = 1;
	return false;
}

void func_24()
{
	func_131();
	func_132(0);
	func_133();
	func_134();
	func_135();
}

void func_25()
{
	func_136();
	func_137(1, 1);
	func_138(1);
	func_139(1);
	func_140(1, 0);
	func_141(0, 0, 0);
	func_142();
	func_143(1024, 0);
	func_144();
	if (func_145(Global_35, 0, 1))
	{
		set_ped_config_flag(Global_35, 141, false);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (_does_scenario_point_exist(&(Local_62.f_1512[iVar0])))
		{
			_delete_scenario_point(&(Local_62.f_1512[iVar0]));
		}
		iVar0++;
	}
	func_146(1);
	func_147(iLocal_29, 8);
	func_148(2048);
	func_149(Local_62, 1);
	func_150();
	func_151(&(Local_62.f_95));
	func_151(&(Local_62.f_96));
	Global_1914319->f_17371 = 0;
	if (func_152(Local_62))
	{
		if (func_153(Local_62, 1024))
		{
			func_154(Local_62, 0);
		}
	}
}

void func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_155(iParam0))
		{
			func_156(iParam0, 67108864);
		}
	}
	else if (func_155(iParam0))
	{
		func_157(iParam0, 67108864);
	}
}

int func_27(vector3 vParam0)
{
	switch (vParam0.z)
	{
		case 43:
			return 0;
		case 29:
			return 1;
		case 61:
			return 2;
		case 73:
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_28(int iParam0)
{
	if (!func_152(iParam0))
	{
		return false;
	}
	return func_35(iParam0, 32);
}

void func_29(int iParam0)
{
	if (func_60(iParam0))
	{
		return;
	}
	Local_62.f_1621 = (Local_62.f_1621 || iParam0);
}

void func_30(int iParam0, int iParam1)
{
	if (func_42(iParam0, iParam1))
	{
		return;
	}
	Global_1393521->f_3[iParam0] = (Global_1393521->f_3[iParam0] || iParam1);
}

void func_31(int iParam0)
{
	if (!func_60(iParam0))
	{
		return;
	}
	Local_62.f_1621 = (Local_62.f_1621 - (Local_62.f_1621 && iParam0));
}

bool func_32(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_152(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_35(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_35(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_33(int iParam0)
{
	if (!func_158())
	{
		return false;
	}
	if (!func_35(iParam0, 64) && !func_36(iParam0, 2097152))
	{
		return false;
	}
	return true;
}

void func_34(int iParam0, int iParam1)
{
	if (func_35(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (Global_20710.f_2092[iParam0] || iParam1);
}

bool func_35(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

bool func_36(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15768[iParam0] && iParam1) != 0;
}

void func_37()
{
	switch (iLocal_29)
	{
		case 0:
			Local_62.f_1391 = 2;
			break;
		case 1:
			Local_62.f_1391 = 1;
			break;
		case 2:
			Local_62.f_1391 = 4;
			break;
		case 3:
			Local_62.f_1391 = 8;
			break;
	}
}

void func_38()
{
	switch (iLocal_29)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_98(1);
			break;
	}
}

void func_39(int iParam0)
{
	if (func_62(iParam0))
	{
		return;
	}
	Local_62.f_1624 = (Local_62.f_1624 || iParam0);
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 73:
			return true;
		default:
			break;
	}
	return false;
}

bool func_41(int iParam0, int iParam1)
{
	iVar0 = 1;
	if (func_159() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_161(func_160(), iParam0);
		}
		iVar1 = get_frame_count();
		if (Global_1914319->f_3[iParam0]->f_444 >= iVar1)
		{
			return Global_1914319->f_3[iParam0]->f_445;
		}
		iVar0 = (func_162(iParam1) || func_164(func_163(iParam0)));
		Global_1914319->f_3[iParam0]->f_444 = iVar1;
		Global_1914319->f_3[iParam0]->f_445 = iVar0;
	}
	return iVar0;
}

bool func_42(int iParam0, int iParam1)
{
	return (Global_1393521->f_3[iParam0] && iParam1) != 0;
}

bool func_43(int iParam0)
{
	if (!func_165(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534->f_7300)
	{
		if (!is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 2))
		{
			if (is_bit_set(&(Global_1879534->f_7301.f_2[iVar0]), 1))
			{
				switch (&Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1])
				{
					case -2093459088:
						if (Global_1879534->f_1911[Global_1879534->f_7301.f_2[iVar0]->f_1]->f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_44(int iParam0)
{
	return (Local_62.f_170.f_11 && iParam0) != 0;
}

int func_45(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_46(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (!func_167(iParam0, 2))
	{
		return 0;
	}
	if (func_169(func_168(iParam0)))
	{
		return func_170(iParam0);
	}
	return _0xe76687023d8c8505(func_171(iParam0), 0);
}

char* func_47()
{
	switch (iLocal_29)
	{
		case 0:
			return "NBX_Gunsmith";
		case 1:
			return "RHD_Gunsmith";
		case 2:
			return "STR_General_Store";
		case 3:
			return "VAL_Doctor";
		default:
			break;
	}
	return "NULL";
}

char* func_48()
{
	switch (iLocal_29)
	{
		case 0:
			return "0319_U_M_M_NbxGunsmith_01";
		case 1:
			return "0401_U_M_M_RhdGunsmith_01";
		case 2:
			return "0678_U_M_M_StrGenStoreOwner_01";
		case 3:
			return "0477_U_M_M_ValDoctor_01";
		default:
			break;
	}
	return "NULL";
}

void func_49(int iParam0, bool bParam1, char* sParam2, bool bParam3, char* sParam4)
{
	if (bParam1)
	{
		func_172(&(Local_62.f_1518), iParam0, sParam2, 0);
	}
	if (bParam3)
	{
		func_173(iParam0, sParam4);
	}
}

bool func_50(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_51(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
}

Vector3 func_52(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return 1325.468f, -1319.246f, 77.0711f;
		case 43:
			return 2719.43f, -1283.178f, 49.6495f;
		case 61:
			return -1789.8f, -385.6f, 160.3f;
		case 73:
			return -283.6743f, 804.662f, 118.3859f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_53(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

float func_54(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_55(int iParam0)
{
	return (Local_62.f_1625 && iParam0) != 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (func_74(iParam0, Local_62.f_1284))
	{
		if (!Local_62.f_1284.f_1)
		{
			Local_62.f_1284.f_1 = 1;
		}
		return true;
	}
	if (bParam1)
	{
		if (_does_volume_exist(Local_62.f_1288))
		{
			if (func_74(iParam0, Local_62.f_1288))
			{
				if (!Local_62.f_1288.f_1)
				{
					Local_62.f_1288.f_1 = 1;
				}
				return true;
			}
		}
	}
	return false;
}

void func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return;
	}
	Local_62.f_1625 = (Local_62.f_1625 || iParam0);
}

void func_58(int iParam0)
{
	if (!func_55(iParam0))
	{
		return;
	}
	Local_62.f_1625 = (Local_62.f_1625 - (Local_62.f_1625 && iParam0));
}

bool func_59()
{
	if (iLocal_29 == 1)
	{
		if (func_119(&(Local_62.f_390[0]->f_9), 128))
		{
			return true;
		}
	}
	return false;
}

bool func_60(int iParam0)
{
	return (Local_62.f_1621 && iParam0) != 0;
}

void func_61(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

bool func_62(int iParam0)
{
	return (Local_62.f_1624 && iParam0) != 0;
}

bool func_63(int iParam0)
{
	return func_174(Global_1310750->f_16110, iParam0);
}

bool func_64()
{
	switch (iLocal_29)
	{
		case 1:
			bVar0 = func_35(29, -2147483648);
			break;
		case 0:
			bVar0 = func_35(43, -2147483648);
			break;
		case 2:
			bVar0 = func_35(61, -2147483648);
			break;
		case 3:
			bVar0 = func_35(73, -2147483648);
			break;
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_65()
{
	return func_55(32);
}

Vector3 func_66()
{
	switch (iLocal_29)
	{
		case 1:
			return 1317.158f, -1320.1f, 75.9239f;
		case 0:
			return 2710.407f, -1290.718f, 48.63041f;
		case 2:
			return -1787.94f, -384.9225f, 157.8571f;
		case 3:
			return -286.6232f, 818.6595f, 118.2486f;
		default:
			break;
	}
	return vLocal_59;
}

bool func_67(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_68(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
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

bool func_69(struct<2> Param0, var uParam2)
{
	if (!func_175(-26, 1, 1))
	{
		return false;
	}
	iVar0 = func_176(0);
	if (((iVar0 != Global_1914319->f_3[Param0.f_1]->f_20 && iVar0 != -1) && iVar0 != -1) && iVar0 != 0)
	{
		func_29(1073741824);
		func_72(2);
		return true;
	}
	return false;
}

bool func_70(struct<2> Param0, var uParam2)
{
	if (!does_entity_exist(Global_1914319->f_3[Param0.f_1]->f_23))
	{
		return false;
	}
	iVar0 = get_ped_index_from_entity_index(Global_1914319->f_3[Param0.f_1]->f_23);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (!_is_ped_hogtied(iVar0) && !_is_ped_lassoed(iVar0))
	{
		return false;
	}
	if (func_82())
	{
		return false;
	}
	func_177(65536);
	func_156(Global_1914319->f_3[Param0.f_1]->f_10, 1024);
	return true;
}

bool func_71()
{
	if (((func_178(30) && !func_178(31)) && _does_thread_exist((*Global_1347702)[31]->f_42)) && is_thread_active((*Global_1347702)[31]->f_42, false))
	{
		return true;
	}
	return false;
}

void func_72(int iParam0)
{
	iLocal_39 = iParam0;
}

bool func_73()
{
	if (func_60(128))
	{
		return true;
	}
	return false;
}

bool func_74(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(bParam1))
	{
		return false;
	}
	if (!_0xf256a75210c5c0eb(bParam1, get_entity_coords(iParam0, true, false)))
	{
		return false;
	}
	return true;
}

void func_75(int* iParam0)
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

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 0:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_77(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < func_179(iParam0))
	{
		if (func_181(func_180(iParam0, iVar0)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_78(int iParam0)
{
	return func_174(Global_1310750->f_16109, iParam0);
}

void func_79(int iParam0)
{
	func_182(&(Global_1310750->f_16109), iParam0);
}

void func_80(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_183() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_184(iVar1) && !func_185(iVar1, iParam2)) && (!bParam3 || !func_186(iVar1))) && (!bParam4 || !func_187(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_188(iVar0);
			}
		}
		iVar0++;
	}
}

void func_81(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_189(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

bool func_82()
{
	if (iLocal_38 < 1)
	{
		return false;
	}
	return true;
}

bool func_83(bool bParam0)
{
	if (Local_62.f_97 == 0f)
	{
		return false;
	}
	if (Local_62.f_97 > func_190(bParam0))
	{
		return true;
	}
	return false;
}

void func_84(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 73:
			if (func_32(uParam0->f_2, 0, 1))
			{
				func_191(0, 2);
			}
			break;
	}
}

void func_85(int iParam0)
{
	Global_20710.f_1168[iParam0] = &Global_20710.f_1168[iParam0] + 1;
	Global_20710.f_1322[iParam0] = func_192();
}

bool func_86()
{
	if (!func_44(4))
	{
		return false;
	}
	if (func_60(4))
	{
		return false;
	}
	if (iLocal_29 == 1 && func_60(8388608))
	{
		return false;
	}
	if (func_99(1))
	{
		if (iLocal_31 > 12 && (iLocal_30 == 1 && !func_82()))
		{
			if (is_entity_dead(Local_62.f_170))
			{
				bVar0 = false;
			}
		}
	}
	else if (iLocal_30 == 1 && !func_82())
	{
		if (is_entity_dead(Local_62.f_170))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_87()
{
	switch (iLocal_31)
	{
		case 0:
			if (func_99(4))
			{
				func_193(1);
			}
			break;
		case 1:
			if (!func_194())
			{
				return;
			}
			func_193(2);
			break;
		case 2:
			if (func_195())
			{
				func_193(3);
			}
			break;
		case 3:
			if (func_197(func_196(0)))
			{
				func_193(4);
			}
			break;
		case 4:
			if (func_198())
			{
				func_193(5);
			}
			break;
		case 5:
			if (func_199())
			{
				func_98(8);
				func_193(6);
			}
			break;
		case 6:
			if (func_200())
			{
				func_193(7);
			}
			break;
		case 7:
			if (func_54(Global_35, func_52(Local_62), 1) < 50f)
			{
				func_193(8);
			}
			break;
		case 8:
			if (func_201())
			{
				func_193(9);
			}
			break;
		case 9:
			if (func_202())
			{
				func_193(10);
			}
			break;
		case 10:
			if (func_197(func_196(1)))
			{
				func_193(11);
			}
			break;
		case 11:
			if (func_203())
			{
				func_193(12);
			}
			break;
		case 12:
			if (func_204())
			{
				func_98(16);
				func_193(13);
			}
			break;
		case 13:
			if (func_54(Global_35, func_52(Local_62), 1) < 30f)
			{
				func_193(14);
			}
			break;
		case 14:
			if (func_205())
			{
				func_193(15);
			}
			break;
		case 15:
			if (func_206())
			{
				func_193(16);
			}
			break;
		case 16:
			if (func_197(func_196(2)))
			{
				func_193(17);
			}
			break;
		case 17:
			if (func_207())
			{
				func_193(18);
			}
			break;
		case 18:
			if (func_208())
			{
				func_98(32);
				func_193(19);
			}
			break;
		case 19:
			if (!func_60(1024) && func_54(Global_35, func_52(Local_62), 1) < 20f)
			{
				bVar0 = true;
			}
			else if (func_74(Global_35, Local_62.f_1284))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_193(20);
			}
			break;
		case 20:
			if (func_209())
			{
				func_193(21);
			}
			break;
		case 21:
			if (func_210())
			{
				func_193(22);
			}
			break;
		case 22:
			if (func_197(func_196(3)))
			{
				func_193(23);
			}
			break;
		case 23:
			if (func_211())
			{
				func_193(24);
			}
			break;
		case 24:
			if (func_212())
			{
				func_98(64);
				func_193(25);
			}
			break;
		case 25:
			if (func_99(128))
			{
				func_193(26);
			}
			break;
		case 26:
			if (func_213())
			{
				func_193(27);
			}
			break;
		case 27:
			if (func_214())
			{
				func_193(28);
			}
			break;
		case 28:
			if (func_197(func_196(4)))
			{
				func_193(29);
			}
			break;
		case 29:
			if (func_215())
			{
				func_193(30);
			}
			break;
		case 30:
			if (func_216())
			{
				func_98(256);
				func_193(31);
			}
			break;
		case 31:
			if (func_99(512))
			{
				func_193(32);
			}
			break;
		case 32:
			if (func_217())
			{
				func_193(33);
			}
			break;
		case 33:
			if (func_218())
			{
				func_193(34);
			}
			break;
		case 34:
			if (func_197(func_196(5)))
			{
				func_193(35);
			}
			break;
		case 35:
			if (func_219())
			{
				func_193(36);
			}
			break;
		case 36:
			if (func_220())
			{
				func_193(37);
			}
			break;
		case 37:
			break;
	}
}

void func_88(var uParam0)
{
	if (!func_99(8))
	{
		return;
	}
	if (func_74(Global_35, &(Local_62.f_1247[3])))
	{
		if (!func_55(128))
		{
			func_57(128);
		}
	}
	else if (func_55(128))
	{
		func_58(128);
	}
	switch (iLocal_29)
	{
		case 3:
			if (func_60(1))
			{
				return;
			}
			if (!func_221(128))
			{
				if ((Local_62.f_1620 % 10) == 0)
				{
					if (func_222(player_id(), 0, 0, 1))
					{
						if (!func_74(Global_35, &(Local_62.f_1247[2])))
						{
							func_223(Local_62.f_1021[0], 0);
						}
						func_224(128);
					}
				}
			}
			if (!func_74(Global_35, &(Local_62.f_1247[2])))
			{
				return;
			}
			func_225();
			func_226(Local_62.f_1021[0], uParam0);
			break;
		case 1:
			func_225();
			func_227(Local_62.f_1021[0], Local_62.f_390[0]);
			break;
	}
}

int func_89()
{
	switch (iLocal_29)
	{
		case 0:
			return 1198640232;
		case 1:
			return 1787522659;
		case 2:
			return 1943609607;
		case 3:
			return -1720522403;
		default:
			break;
	}
	return 0;
}

char* func_90()
{
	sVar0 = "ERROR: NO schedule found.";
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SaintDenis/SDN_Gunsmith";
			break;
		case 1:
			sVar0 = "Rhodes/rhd_gunsmith";
			break;
		case 2:
			sVar0 = "Strawberry/Str_General_Store";
			break;
		case 3:
			sVar0 = "Valentine/Val_Doctor";
			break;
	}
	return sVar0;
}

void func_91(int iParam0)
{
	if (func_44(iParam0))
	{
		return;
	}
	Local_62.f_170.f_11 = (Local_62.f_170.f_11 || iParam0);
}

bool func_92()
{
	if (!func_228())
	{
		return false;
	}
	return true;
}

void func_93(int iParam0)
{
	iLocal_37 = iParam0;
}

void func_94()
{
	func_229(&(Local_62.f_124));
	func_230(&(Local_62.f_124), 1);
	func_231(&(Local_62.f_124), 1000);
	func_232(&Local_62);
	if (func_60(256))
	{
		iLocal_54 = 0;
		iLocal_55 = 0;
	}
}

bool func_95()
{
	if (func_233())
	{
		Global_1393521->f_1 = 0;
		return true;
	}
	switch (iLocal_29)
	{
		case 0:
			Local_62.f_95 = get_interior_at_coords(2716.914f, -1283.87f, 50.30908f);
			Local_62.f_96 = get_interior_at_coords(2715.813f, -1290.3f, 61.49492f);
			break;
		case 1:
			Local_62.f_95 = get_interior_at_coords(1325.901f, -1323.493f, 78.78179f);
			break;
		case 2:
			Local_62.f_95 = get_interior_at_coords(-1790.006f, -388.0617f, 160.8222f);
			break;
		case 3:
			Local_62.f_95 = get_interior_at_coords(-286.4784f, 806.8078f, 119.8955f);
			break;
	}
	return false;
}

void func_96()
{
	if (func_99(67108864))
	{
		return;
	}
	iVar0 = func_234();
	if (iVar0 == 0)
	{
		return;
	}
	_0xf008e0ba1fe1d644(iVar0);
	if (func_99(33554432))
	{
		func_98(67108864);
	}
}

bool func_97(bool bParam0)
{
	if (func_44(4))
	{
		return true;
	}
	if (!func_166(Local_62.f_170.f_8))
	{
		return false;
	}
	Local_62.f_170 = func_46(Local_62.f_170.f_8);
	iVar0 = func_45(Local_62.f_170.f_8);
	if (!func_145(Local_62.f_170, 0, 1))
	{
		_0x49a8c2cd97815215(iVar0);
		return false;
	}
	if (bParam0)
	{
		_0x6759bee6762e140b(iVar0);
		_0xf74e134f40192884(Local_62.f_170, 2);
		func_91(4);
	}
	func_235(Local_62.f_170, 1);
	func_236(&(Local_62.f_170.f_14), 1);
	return true;
}

void func_98(int iParam0)
{
	if (func_99(iParam0))
	{
		return;
	}
	Local_62.f_1626 = (Local_62.f_1626 || iParam0);
}

bool func_99(int iParam0)
{
	return (Local_62.f_1626 && iParam0) != 0;
}

void func_100(var uParam0)
{
	func_237();
	if (!func_65())
	{
		if (func_60(536870912))
		{
			iVar0 = func_238(Local_62);
			func_239(iVar0);
		}
	}
	switch (iLocal_29)
	{
		case 0:
			func_240(&(Local_62.f_170));
			break;
		case 1:
			func_241(uParam0, &(Local_62.f_170), Local_62.f_390[0]);
			break;
		case 2:
			func_242(uParam0);
			break;
		case 3:
			func_243();
			break;
	}
}

void func_101()
{
	if (!func_55(32))
	{
		return;
	}
	if (func_60(262144))
	{
		return;
	}
	if (_is_ped_using_scenario_hash(Global_35, func_244()) || _is_ped_using_scenario_hash(Global_35, 325463335))
	{
		func_245(Local_62.f_170, Global_35, "HOLDUP_GIVE_CASH", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		func_246();
		func_29(262144);
	}
}

void func_102()
{
	if (func_44(32768))
	{
		return;
	}
	if (!func_44(16384))
	{
		if (!func_82())
		{
			return;
		}
		switch (iLocal_29)
		{
			case 0:
				if (func_247())
				{
					return;
				}
				if (func_74(Global_35, Local_62.f_1288))
				{
					return;
				}
				break;
			case 1:
				if (func_247())
				{
					if ((iLocal_46 > 0 || func_74(Global_35, Local_62.f_1288)) || func_74(Global_35, Local_62.f_1284))
					{
						return;
					}
				}
				break;
			case 2:
				if (func_247())
				{
					return;
				}
				break;
			case 3:
				if (func_221(262144) || func_247())
				{
					return;
				}
				break;
		}
		func_91(16384);
	}
	if (!is_entity_dead(Local_62.f_170) && (func_248(&(Local_62.f_1), func_54(Local_62.f_170, Global_36, 1)) || !func_65()))
	{
		func_249();
	}
}

void func_103(var uParam0)
{
	if (func_60(64))
	{
		return;
	}
	if (!func_82())
	{
		return;
	}
	if (!func_250(Global_35))
	{
		return;
	}
	if (func_222(player_id(), 1, 0, 1))
	{
		if (!func_247())
		{
			func_29(64);
		}
		return;
	}
	if (func_247())
	{
		if (Local_62.f_97 < 22f)
		{
			return;
		}
	}
	func_251(uParam0->f_1);
	func_29(64);
}

void func_104()
{
	if (func_65() || func_74(Global_35, Local_62.f_1290))
	{
		func_141(1, 1, 1);
		func_252(1);
		if (iLocal_29 == 1)
		{
			func_253();
		}
	}
	else
	{
		func_141(0, 0, 0);
		func_254();
		func_252(0);
	}
}

void func_105(var uParam0)
{
	func_255(uParam0);
	switch (iLocal_40)
	{
		case 0:
			func_256(1);
			break;
		case 1:
			if (func_99(16))
			{
				func_257();
				func_256(2);
			}
			break;
		case 2:
			if (func_99(32))
			{
				if (func_258())
				{
					func_256(3);
				}
			}
			break;
		case 3:
			if (func_99(64) || func_60(1024))
			{
				func_256(4);
			}
			break;
		case 4:
			if (func_65())
			{
				if (func_259(&(Local_62.f_1), 0))
				{
					if (!func_60(512))
					{
					}
				}
				func_260();
				func_139(0);
				func_261(&(Local_62.f_1));
				func_252(1);
				func_262(0);
				func_256(7);
			}
			if (!func_60(8388608) || func_60(33554432))
			{
				if (func_263())
				{
					func_264(21);
					func_29(4194304);
					func_256(5);
				}
			}
			break;
		case 5:
			if (iLocal_29 == 3)
			{
				if (func_65() && !func_222(player_id(), 0, 0, 1))
				{
					if (func_259(&(Local_62.f_1), 0))
					{
						if (!func_60(512))
						{
						}
					}
					func_260();
					func_139(0);
					func_261(&(Local_62.f_1));
					func_252(1);
					func_262(0);
					func_256(7);
					return;
				}
			}
			if (func_265(uParam0))
			{
				func_266();
				func_256(6);
			}
			break;
		case 6:
			func_31(33554432);
			func_256(4);
			break;
		case 7:
			func_267(&(Local_62.f_1));
			func_268();
			func_269();
			set_ped_reset_flag(Local_62.f_170, 49, true);
			if (!func_65())
			{
				func_252(0);
				func_112(&(Local_62.f_1));
				func_270(&(Local_62.f_1));
				func_271(Local_62.f_1.f_7[0], &(Local_62.f_1.f_26));
				func_256(4);
				return;
			}
			if (is_entity_dead(Local_62.f_170))
			{
				func_272();
			}
			func_273(&(Local_62.f_1));
			_0x21213b833ef4dae7(get_player_index(), Local_62.f_170, &uVar0);
			func_274(&(Local_62.f_1));
			if (func_275())
			{
				if (func_276(Local_62.f_1392[4], 3f, 1, "TIMER_VALDOC_REVENGE_GRAB_GUN"))
				{
					func_277(&(Local_62.f_1216[8]), "bGrabShotgun", 1, "SCENE_VALDOC_DOC_REVENGE");
					func_278(&(Local_62.f_1216[8]), "PBL_GRAB_SHOTGUN", "SCENE_VALDOC_DOC_REVENGE", 1);
				}
				else if (func_279(&(Local_62.f_1216[8]), "bGrabShotgun", "SCENE_VALDOC_DOC_REVENGE"))
				{
					if (!does_blip_exist(Local_62.f_170.f_1) && func_280(&(Local_62.f_1216[8]), "SCENE_VALDOC_DOC_REVENGE", 0.95f))
					{
						func_281(&(Local_62.f_1518), "SRVD_C_HATEPLY", Local_62.f_170, Global_35, 0, 0, 1, 1);
						func_282(Local_62.f_170, Local_62.f_170.f_1, Global_35, &(Local_62.f_1226[13]), -183018591);
					}
				}
			}
			else
			{
				func_283();
			}
			if (func_60(8388608))
			{
				func_141(1, 1, 1);
			}
			if (func_284())
			{
				set_ped_config_flag(Local_62.f_1, 235, true);
				set_ped_config_flag(Local_62.f_1, 234, true);
				func_285();
				func_262(1);
				if (func_145(Local_62.f_170, 0, 1))
				{
					func_286(Local_62.f_170, 1, 0, 0, 1, 0);
					func_287(1);
					func_256(10);
				}
				else
				{
					func_256(8);
				}
				func_288(Local_62.f_170, Local_62.f_170.f_8);
			}
			else if (func_289(&(Local_62.f_1), 0))
			{
				set_ped_config_flag(Local_62.f_1, 235, true);
				set_ped_config_flag(Local_62.f_1, 234, true);
				func_262(1);
				func_286(Local_62.f_170, 1, 0, 0, 1, 0);
				func_287(1);
				func_256(10);
			}
			else if (func_290())
			{
				func_262(1);
				func_291(0, 1, 0);
				if (!func_292(Local_62.f_1.f_51))
				{
					func_293(&(Local_62.f_1), 0, 0, 0, 0);
					func_294(3);
					return;
				}
				set_ped_config_flag(Local_62.f_1, 235, true);
				set_ped_config_flag(Local_62.f_1, 234, true);
				if (func_60(8388608))
				{
					if (iLocal_29 == 0 || iLocal_29 == 1)
					{
						bVar18 = true;
					}
				}
				func_293(&(Local_62.f_1), 0, 0, 0, bVar18);
				func_156(Local_62.f_1.f_51, 1024);
				if ((func_60(8388608) && !func_60(256)) && func_295())
				{
					func_296(uParam0->f_1, uParam0->f_2);
				}
				set_blocking_of_non_temporary_events(Local_62.f_170, true);
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
				func_298(1);
				func_299(0);
				func_287(0);
				func_300(&(Local_62.f_170), 32);
				if (!func_275())
				{
					func_301(100);
				}
				func_302(0);
				func_303();
				func_304();
				func_305();
				func_306();
				func_307(&(Local_62.f_170.f_214));
				func_256(10);
				func_294(1);
			}
			else if (func_308(Local_62.f_170, 0, &(Local_62.f_170.f_14), &iVar17, 1, 0))
			{
				if (iVar17 == 8)
				{
					return;
				}
				set_ped_config_flag(Local_62.f_1, 235, true);
				set_ped_config_flag(Local_62.f_1, 234, true);
				func_154(Local_62, 1);
				func_262(1);
				func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
				func_91(268435456);
				func_285();
				func_256(8);
			}
			break;
		case 8:
			if (!func_310())
			{
				return;
			}
			func_57(131072);
			func_256(9);
			break;
		case 9:
			func_269();
			break;
		case 10:
			break;
	}
}

void func_106(var uParam0)
{
	if (is_entity_dead(Local_62.f_170))
	{
		func_254();
	}
	func_311(&Local_62);
	func_312();
	if (func_313(&(Local_62.f_1), 256) && !func_60(8388608))
	{
		if (func_310())
		{
			func_57(131072);
		}
	}
	func_314(&(Local_62.f_1));
	func_315(&(Local_62.f_1));
	func_269();
	if (func_316())
	{
		func_141(1, 1, 1);
		func_317(&(Local_62.f_1468));
		func_26(Local_62, 1);
		func_98(128);
		func_318();
		func_319(&(Local_62.f_170), 171, 1);
		func_320(10);
		func_294(2);
		if (iLocal_29 == 3)
		{
			func_321(625, 1);
		}
		return;
	}
	if (!func_313(&(Local_62.f_1), 8388608))
	{
		if (func_313(&(Local_62.f_1), 4194304))
		{
			if (func_322(&(Local_62.f_1)))
			{
				_0xaab050da48b57978(Local_62.f_1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
				func_323(&(Local_62.f_1), 8388608);
			}
		}
	}
	if (!func_60(8388608))
	{
		if (!func_44(131072))
		{
			if (func_308(Local_62.f_170, 0, &(Local_62.f_170.f_14), &iVar0, 1, 0))
			{
				if (iVar0 != 8 && iVar0 != 16384)
				{
					bVar1 = true;
				}
			}
			if (func_324(&(Local_62.f_1)))
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_325();
				func_91(131072);
				func_320(7);
			}
		}
	}
	if (!func_326())
	{
		if (func_327())
		{
			func_328();
		}
	}
	if (func_145(Global_35, 0, 1))
	{
		if (!get_ped_config_flag(Global_35, 141, true))
		{
			set_ped_config_flag(Global_35, 141, true);
		}
	}
	if (func_65())
	{
		func_273(&(Local_62.f_1));
		func_268();
	}
	switch (iLocal_41)
	{
		case 0:
			if (func_275())
			{
				func_329(Global_35);
				func_320(1);
			}
			else if (func_313(&(Local_62.f_1), 256))
			{
				func_330("HLP_SR_INTRO", 1);
				func_331();
				func_332();
				func_320(1);
			}
			else
			{
				func_333();
				func_334();
				if (func_335(8))
				{
					if (func_276(&(Local_62.f_170.f_214), 5f, 0, "shoprob.clerkData.timerGeneric"))
					{
						func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
						func_91(268435456);
						func_320(10);
					}
				}
			}
			if (!func_60(8388608))
			{
				func_336(&(Local_62.f_170.f_14), 0);
			}
			func_337(&(Local_62.f_170.f_42), Global_35, 5000, vLocal_59, 0);
			break;
		case 1:
			func_320(2);
			func_262(1);
			break;
		case 2:
			func_338();
			if (!func_339(&(Local_62.f_170)))
			{
				return;
			}
			func_320(3);
			break;
		case 3:
			func_338();
			if (!func_340(&(Local_62.f_170)))
			{
				return;
			}
			clear_ped_tasks(Local_62.f_170, 1, 0);
			func_320(4);
			break;
		case 4:
			func_338();
			if (!func_341(&(Local_62.f_1)))
			{
				return;
			}
			func_262(0);
			func_320(5);
			break;
		case 5:
			if (!func_342(&(Local_62.f_1)))
			{
				return;
			}
			if (!func_343(&(Local_62.f_1), 0))
			{
				return;
			}
			func_307(&(Local_62.f_170.f_214));
			func_246();
			func_344();
			func_345();
			func_346(&(Local_62.f_1));
			func_320(6);
			break;
		case 6:
			func_347();
			func_348();
			if (!func_44(128))
			{
				if (_get_anim_scene_progress(&(Local_62.f_1.f_82[0])) > 0.95f)
				{
					bVar2 = true;
				}
				else if (!_0x3ab6c7b0bb0df4b1(Local_62.f_170, -1))
				{
					bVar2 = true;
				}
				else if (_get_anim_scene_progress(&(Local_62.f_1.f_82[0])) > func_349())
				{
					func_350();
				}
				if (bVar2)
				{
					func_350();
					func_351(&(Local_62.f_170), &uVar3, 1114636288, -1);
					func_91(128);
				}
			}
			else
			{
				func_334();
			}
			if (!func_352(&(Local_62.f_1), Local_62.f_170.f_14, iVar0))
			{
				return;
			}
			if (((iVar0 != 4 && iVar0 != 2048) && iVar0 != 2) && !func_324(&(Local_62.f_1)))
			{
				return;
			}
			func_91(131072);
			func_320(7);
			break;
		case 7:
			if (_0x1f0e401031e20146(&(Local_62.f_1.f_82[0]), "pblMain"))
			{
				if (func_343(&(Local_62.f_1), 0))
				{
					func_246();
					func_344();
					func_345();
					func_346(&(Local_62.f_1));
				}
				else
				{
					func_262(1);
				}
			}
			func_285();
			func_91(131072);
			func_320(10);
			break;
		case 9:
			if (!func_353(-2.5f, 1, 0, 0))
			{
				return;
			}
			func_350();
			func_320(10);
			break;
		case 10:
			if (_does_anim_scene_exist(&(Local_62.f_1.f_82[0])))
			{
				if (_is_anim_scene_started(&(Local_62.f_1.f_82[0]), false))
				{
					if (_0x1f0e401031e20146(&(Local_62.f_1.f_82[0]), "pblMain"))
					{
						if (func_343(&(Local_62.f_1), 0))
						{
							func_246();
							func_344();
							func_345();
							func_346(&(Local_62.f_1));
						}
					}
				}
			}
			if (func_44(131072))
			{
				if (!func_44(268435456))
				{
					if (!is_any_speech_playing(Global_35))
					{
						func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
						func_91(268435456);
					}
				}
			}
			break;
	}
}

void func_107(var uParam0)
{
	func_312();
	func_314(&(Local_62.f_1));
	func_315(&(Local_62.f_1));
	if (iLocal_29 == 1 || iLocal_29 == 2)
	{
		if (is_entity_dead(Local_62.f_170))
		{
			func_254();
		}
	}
	func_354();
	if (func_65())
	{
		func_273(&(Local_62.f_1));
	}
	if (!func_313(&(Local_62.f_1), 8388608))
	{
		if (func_313(&(Local_62.f_1), 4194304))
		{
			if (func_322(&(Local_62.f_1)))
			{
				_0xaab050da48b57978(Local_62.f_1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
				func_323(&(Local_62.f_1), 8388608);
			}
		}
	}
	func_355();
	switch (iLocal_42)
	{
		case 0:
			func_356();
			func_272();
			func_118(Local_62, 1);
			func_357();
			stop_current_playing_speech(Global_35, 0);
			func_358(1);
			if (!_0x88ad6cc10d8d35b2(Local_62.f_170))
			{
				set_entity_as_mission_entity(Local_62.f_170, true, false);
			}
			func_359();
			func_360();
			func_361();
			func_236(&(Local_62.f_170.f_14), 0);
			func_362(1);
			break;
		case 1:
			if (!func_363())
			{
				return;
			}
			func_61(&(Local_62.f_170.f_1));
			func_364();
			func_362(2);
			break;
		case 2:
			func_365(uParam0);
			if (func_366())
			{
				bVar0 = true;
			}
			if (func_367())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_266();
				func_362(3);
			}
			break;
		case 3:
			func_366();
			if (!func_326())
			{
				if (func_56(Local_62.f_170, 0) && func_327())
				{
					func_328();
				}
			}
			func_365(uParam0);
			if (!func_65())
			{
				if (iLocal_29 == 0)
				{
					if (func_74(Global_35, Local_62.f_1288) || func_74(Global_35, Local_62.f_1290))
					{
						return;
					}
				}
				func_368(1);
				func_298(1);
				func_362(4);
			}
			break;
		case 4:
			func_366();
			func_139(1);
			func_365(uParam0);
			func_362(5);
			break;
		case 5:
			func_365(uParam0);
			break;
	}
}

void func_108()
{
	switch (iLocal_43)
	{
		case 0:
			if (func_65())
			{
				if (func_353(-3f, 1, 0, 0))
				{
					if (func_369(&(Local_62.f_1), func_238(Local_62)))
					{
						func_370(&(Local_62.f_1));
						func_371(3);
					}
					else
					{
						func_372(&(Local_62.f_1));
						if (func_145(Local_62.f_170, 0, 1))
						{
							task_turn_ped_to_face_entity(Local_62.f_170, Global_35, 0, -1082130432, -1082130432, -1082130432);
						}
						func_371(1);
					}
				}
			}
			break;
		case 1:
			if (func_65())
			{
				if (func_353(-1f, 1, 0, 0))
				{
					func_373(&(Local_62.f_1));
					func_371(2);
				}
			}
			break;
		case 2:
			if (func_353(-1f, 1, 0, 0) || func_374(Local_62.f_170, 1))
			{
				func_375(&(Local_62.f_1));
				func_376(&(Local_62.f_1), &(Local_62.f_170.f_1), Local_62.f_1284, 860033945);
				func_371(5);
			}
			break;
		case 3:
			if (func_353(-4.5f, 1, 0, 0))
			{
				if (func_377(&(Local_62.f_1)))
				{
					func_29(512);
					func_371(4);
				}
			}
			break;
		case 4:
			if (func_276(&(Local_62.f_1462), 3f, 1, "timerReopenHoldupBuffer"))
			{
				func_256(4);
				func_294(0);
				func_371(5);
			}
			break;
		case 5:
			break;
	}
}

void func_109(var uParam0)
{
	switch (iLocal_52)
	{
		case 0:
			func_378();
			func_379(-1043434543);
			func_380(2);
			break;
		case 2:
			if ((((!func_381(-1043434543) || !func_95()) || !func_200()) || !func_382()) || !func_383(Local_62.f_1226[0], -1043434543, Local_62.f_1241[0], -1789.69f, -386.63f, 160.38f, 4, 0))
			{
				return;
			}
			func_380(4);
			break;
		case 4:
			func_384(18);
			func_385();
			func_386();
			func_380(7);
			break;
		case 7:
			func_387(uParam0);
			break;
		case 9:
			break;
	}
}

void func_110(var uParam0)
{
	if (func_41(uParam0->f_1, -1))
	{
		func_10(0);
		func_29(8);
	}
	switch (iLocal_52)
	{
		case 0:
			_text_database_request("SHRB");
			func_380(5);
			break;
		case 1:
			if (func_388())
			{
				func_389();
				func_380(2);
			}
			break;
		case 2:
			if (_0x5c16855277819bbf() < 1)
			{
				return;
			}
			if (!func_390())
			{
				return;
			}
			func_380(3);
			break;
		case 3:
			if (func_62(128))
			{
				func_391();
			}
			else
			{
				func_380(4);
			}
			break;
		case 4:
			func_224(4);
			func_380(6);
			break;
		case 5:
			func_224(4);
			func_380(7);
			break;
		case 6:
			if (!func_383(Local_62.f_1226[10], -1025740342, Local_62.f_1241[0], Local_62.f_390[0]->f_2, 4, 0))
			{
				return;
			}
			func_392(Local_62.f_1226[10], 1);
			func_393();
			start_anim_scene(&(Local_62.f_1216[1]));
			func_380(7);
			break;
		case 7:
			if (iVar1752 < 2)
			{
				func_394();
			}
			else if (iVar1752 < 6)
			{
				func_395(uParam0);
			}
			else
			{
				func_31(33554432);
				func_380(9);
			}
			break;
		case 9:
			break;
	}
}

bool func_111(var uParam0)
{
	switch (iLocal_29)
	{
		case 1:
			if (!func_396())
			{
				return false;
			}
			break;
		case 3:
			if (!func_82())
			{
				if (func_74(Global_35, &(Local_62.f_1247[16])))
				{
					func_395(uParam0);
					return false;
				}
			}
			break;
	}
	return true;
}

void func_112(var uParam0)
{
	if (!func_313(uParam0, 131072))
	{
		return;
	}
	if (get_ped_config_flag(Global_35, 141, true))
	{
		set_ped_config_flag(Global_35, 141, false);
	}
	if (get_ped_config_flag(Global_35, 308, true))
	{
		set_ped_config_flag(Global_35, 308, false);
	}
	func_397(uParam0, 131072);
}

bool func_113(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_0x8d81e7824b7753f7(iParam0, sParam1, 1))
	{
		return true;
	}
	return false;
}

Vector3 func_114(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_398(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_399() == 0 && !func_400(0))
		{
			bVar14 = true;
		}
	}
	if (!func_401(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_402();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_403(Global_1310720->f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_404(iVar0, iVar1) };
			bVar11 = func_405(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_67(vVar7)) && func_406(iVar0, bParam8, iParam12)) && !func_407(iVar0)) || bVar11)
			{
				if (func_408(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

bool func_115(int iParam0)
{
	return (Local_62.f_1628 && iParam0) != 0;
}

void func_116(int iParam0)
{
	if (func_115(iParam0))
	{
		return;
	}
	Local_62.f_1628 = (Local_62.f_1628 || iParam0);
}

void func_117(var uParam0)
{
	if ((!func_313(uParam0, 4096) && !func_313(uParam0, 16)) && !func_313(uParam0, 8192))
	{
		return;
	}
	iVar0 = func_409(uParam0->f_51);
	if (iVar0 != func_410())
	{
		_0xcc3edc5614b03f61(iVar0);
	}
}

void func_118(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	Global_1914319->f_15768[iParam0] = (Global_1914319->f_15768[iParam0] || iParam1);
}

bool func_119(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_120(int iParam0)
{
	return (Local_62.f_1623 && iParam0) != 0;
}

void func_121(int iParam0)
{
	if (!func_152(iParam0))
	{
		return;
	}
	func_411(iParam0, 32);
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(6);
	}
	else
	{
		func_251(6);
	}
	func_29(64);
}

void func_123()
{
	func_31(128);
}

void func_124(var uParam0)
{
	iVar0 = Global_1914319->f_3[uParam0->f_1]->f_20;
	if (func_413(iVar0))
	{
		func_251(uParam0->f_1);
	}
	iVar1 = func_176(0);
	if (iVar1 == iVar0)
	{
		func_414(iVar0);
	}
	if (func_82())
	{
		Global_1914319->f_17371 = 0;
	}
}

void func_125()
{
	if (Local_62.f_1632)
	{
		if (does_entity_exist(Local_62.f_170))
		{
			stop_ped_speaking(Local_62.f_170, false);
			Local_62.f_1632 = 0;
		}
	}
	iVar0 = func_45(Local_62.f_170.f_8);
	if (func_44(4))
	{
		if (_0x800df3fc913355f3(iVar0))
		{
			_0xb65e7f733956cf25(iVar0);
		}
	}
	func_358(0);
	if (func_62(65536))
	{
		func_319(&(Local_62.f_170), 171, 0);
	}
	func_288(Local_62.f_170, Local_62.f_170.f_8);
	func_61(&(Local_62.f_170.f_1));
	func_415(Local_62, 0);
}

void func_126(bool bParam0)
{
	if (_does_volume_exist(bParam0))
	{
		_delete_volume(bParam0);
	}
}

void func_127(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	fVar0 = func_54(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	_0x39a2fc5af55a52b1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		_0x7c08e7cb8d951b70(iParam0, fParam7);
	}
	_0x36e4b61dc56de77c(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_128(var uParam0, char* sParam1)
{
	if (_does_scenario_point_exist(*uParam0))
	{
		_delete_scenario_point(*uParam0);
	}
}

void func_129(var uParam0, var uParam1)
{
	if (_does_volume_exist(*uParam0))
	{
		_0x74c2b3dc0b294102(*uParam0);
		_0xa1cfb35069d23c23(*uParam0);
		_delete_volume(*uParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

void func_130()
{
	if (!func_221(256))
	{
		return;
	}
	if (func_221(512))
	{
		return;
	}
	func_417(func_416(), 0);
	func_224(512);
	func_418(512);
}

void func_131()
{
	_0x93624b36e8851b42(get_player_index());
}

void func_132(bool bParam0)
{
	switch (iLocal_29)
	{
		case 0:
			func_419("NBX_GUN_PICKUPS", bParam0);
			break;
		case 1:
			func_419("RHO_GUN_PICKUPS", bParam0);
			break;
		case 2:
			func_419("STR_GEN_PICKUPS", bParam0);
			break;
		case 3:
			func_419("VAL_DOC_PICKUPS", bParam0);
			break;
	}
}

void func_133()
{
	_text_database_delete("SHRB");
	switch (iLocal_29)
	{
		case 0:
			_text_database_delete("SRNGAUD");
			break;
		case 1:
			_text_database_delete("SRRGAUD");
			break;
		case 2:
			_text_database_delete("SRSGAUD");
			break;
		case 3:
			_text_database_delete("SRVDAUD");
			break;
	}
}

void func_134()
{
	release_script_audio_bank();
	switch (iLocal_29)
	{
		case 1:
			if ((func_115(32) && !func_115(512)) && !func_115(256))
			{
				func_2();
			}
			func_420();
			break;
	}
}

void func_135()
{
	iVar0 = 0;
	while (iVar0 < Local_62.f_1482)
	{
		func_61(Local_62.f_1482[iVar0]);
		iVar0++;
	}
}

void func_136()
{
	iVar0 = 0;
	while (iVar0 < Local_62.f_1616)
	{
		remove_shocking_event(&(Local_62.f_1616[iVar0]));
		iVar0++;
	}
}

void func_137(bool bParam0, bool bParam1)
{
	if (func_222(player_id(), 1, 0, 1) && bParam1)
	{
		return;
	}
	if (bParam0)
	{
		if (func_62(256))
		{
			_0xc805eb785824f712(1);
			_0x710448d44a64c213(1);
			func_421(1);
			func_422(256);
		}
	}
	else if (!func_62(256))
	{
		_0xc805eb785824f712(0);
		_0x710448d44a64c213(0);
		func_421(0);
		func_39(256);
	}
}

void func_138(bool bParam0)
{
	if (bParam0)
	{
		if (func_62(512))
		{
			_0x949b2f9ed2917f5d(Global_35, 1);
			func_422(512);
		}
	}
	else if (!func_62(512))
	{
		_0xb8de69d9473b7593(Global_35, 1);
		func_39(512);
	}
}

void func_139(bool bParam0)
{
	if (bParam0)
	{
		_0x87e6302fc61208cc("BLOCKED_CONTEXTS_SHOP_ROBBERY");
	}
	else
	{
		_0x6378a235374b852f("BLOCKED_CONTEXTS_SHOP_ROBBERY", 0);
	}
}

void func_140(bool bParam0, int iParam1)
{
	if (!func_55(67108864))
	{
		return;
	}
	_0xc67a4910425f11f1(player_id(), iParam1);
	func_58(67108864);
	if (bParam0)
	{
		func_57(134217728);
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	_0x0751d461f06e41ce(get_player_index(), 3, 2, iParam0);
	_0x0751d461f06e41ce(get_player_index(), 4, 2, iParam1);
	_0x0751d461f06e41ce(get_player_index(), 7, 2, iParam2);
}

void func_142()
{
	if (!func_62(16))
	{
		return;
	}
	func_423();
}

void func_143(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = iVar0;
		if (!func_424(&((*Global_1396257)[iVar1]->f_626), iParam0))
		{
			if (bParam1)
			{
				func_425(&((*Global_1396257)[iVar1]->f_626), iParam0, bParam1);
			}
		}
		else if (!bParam1)
		{
			func_425(&((*Global_1396257)[iVar1]->f_626), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_144()
{
	switch (iLocal_29)
	{
		case 1:
			func_129(&(Local_62.f_1368), &(Local_62.f_1369));
			func_129(Local_62.f_1373[0], Local_62.f_1370[0]);
			if (iLocal_38 > 0)
			{
				func_254();
			}
			break;
		case 3:
			func_368(1);
			func_129(Local_62.f_1373[0], Local_62.f_1370[0]);
			func_129(Local_62.f_1373[1], Local_62.f_1370[1]);
			if (!is_entity_dead(&(Local_62.f_1198[0])))
			{
				freeze_entity_position(&(Local_62.f_1198[0]), false);
			}
			if (!is_entity_dead(&(Local_62.f_1226[11])))
			{
				freeze_entity_position(&(Local_62.f_1226[11]), false);
			}
			func_426(-706941207, 0, 0f, 0, 1, 0, 0, 0);
			func_427();
			remove_shocking_event(&(Local_62.f_1616[1]));
			break;
		case 0:
		case 2:
			func_129(&(Local_62.f_1368), &(Local_62.f_1369));
			func_129(Local_62.f_1373[0], Local_62.f_1370[0]);
			if (iLocal_38 > 0)
			{
				func_254();
				if (does_entity_exist(Local_62.f_170))
				{
					_0xae6004120c18df97(Local_62.f_170, 0, 1);
					if (is_entity_occluded(Local_62.f_170))
					{
						iVar0 = _0x32a1e3b83d501096(Local_62.f_170);
						_0x7b204f88f6c3d287(iVar0);
						_0x4f81ead1de8fa19b(iVar0);
					}
				}
			}
			if (iLocal_29 == 0)
			{
				func_428(544152906, 0, 0);
			}
			else
			{
				if (!is_entity_dead(Local_62.f_170))
				{
					_0x949b2f9ed2917f5d(Local_62.f_170, 23);
					_0x949b2f9ed2917f5d(Local_62.f_170, 24);
				}
				if (get_ped_config_flag(Global_35, 26, false))
				{
					set_ped_config_flag(Global_35, 26, false);
				}
			}
			break;
	}
	switch (iLocal_29)
	{
		case 0:
			set_scenario_type_enabled("WORLD_HUMAN_SMOKE", true);
			set_scenario_type_enabled("PROP_HUMAN_SEAT_BENCH_PORCH", true);
			func_429(841127028, 0, "DOOR_NEW_GUNSHOP_INT_BACK");
			break;
		case 2:
			set_scenario_type_enabled("WORLD_PLAYER_STR_GEN_BSMT_PEEK", false);
			_set_scenario_group_enabled_hash(1840199757, false);
			break;
		case 3:
			func_429(-855228377, 0, "DOOR_VAL_DOC_BACK");
			func_429(925575409, 0, "DOOR_VAL_DOC_BACK_RM");
			break;
	}
}

bool func_145(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_430(iParam0, iParam1);
}

void func_146(bool bParam0)
{
	switch (iLocal_29)
	{
		case 1:
		case 3:
			if (!is_scenario_type_enabled(func_431()) != bParam0)
			{
				set_scenario_type_enabled(func_431(), bParam0);
				if (!is_scenario_type_enabled(func_431()))
				{
				}
			}
			break;
	}
}

void func_147(int iParam0, int iParam1)
{
	if (!func_42(iParam0, iParam1))
	{
		return;
	}
	Global_1393521->f_3[iParam0] = (&Global_1393521->f_3[iParam0] - (Global_1393521->f_3[iParam0] && iParam1));
}

void func_148(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

void func_149(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	Global_1914319->f_15768[iParam0] = (&Global_1914319->f_15768[iParam0] - (Global_1914319->f_15768[iParam0] && iParam1));
}

void func_150()
{
	if (func_55(33554432))
	{
		func_432(1, 0, 1);
	}
	if (func_60(268435456))
	{
		func_433(1);
	}
}

void func_151(var uParam0)
{
	if (is_valid_interior(*uParam0))
	{
		unpin_interior(*uParam0);
	}
}

bool func_152(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_153(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_154(int iParam0, bool bParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_153(iParam0, 1024))
		{
			func_156(iParam0, 1024);
			_0x9b4e793b1cb6550a();
		}
	}
	else if (func_153(iParam0, 1024))
	{
		func_157(iParam0, 1024);
		_0x9b4e793b1cb6550a();
	}
	func_434(iParam0);
}

bool func_155(int iParam0)
{
	return func_153(iParam0, 67108864);
}

void func_156(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_157(int iParam0, int iParam1)
{
	if (!func_152(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

bool func_158()
{
	if (func_159() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_159()
{
	return Global_1572887->f_12;
}

int func_160()
{
	return Global_1894899->f_2;
}

int func_161(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_162(int iParam0)
{
	if (!func_152(iParam0))
	{
		return 0;
	}
	iVar0 = func_238(iParam0);
	if ((((((((((iVar0 == 2 && func_435(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_436(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_163(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

int func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_437(func_192());
	if (func_438(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_438(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

bool func_165(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_167(int iParam0, int iParam1)
{
	if (func_159() != -1)
	{
		return false;
	}
	if (!func_166(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

int func_168(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_169(int iParam0)
{
	return iParam0 != 0;
}

int func_170(int iParam0)
{
	iVar0 = func_45(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_171(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	return _0xa00df706c60173d1(Global_1895087[iParam0]);
}

void func_172(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_439(uParam0, iParam1, sParam2))
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

void func_173(int iParam0, char* sParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	set_ambient_voice_name(iParam0, sParam1);
}

bool func_174(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_175(int iParam0, bool bParam1, bool bParam2)
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
		if (func_440())
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
		iVar0 = func_441(&(Global_1898164->f_1[0]));
		if (func_442(iVar0) && func_443((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_444(&(Global_1898164->f_1[0])))
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

int func_176(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_177(int iParam0)
{
	if (Global_1914319->f_18903 != iParam0)
	{
		Global_1914319->f_18903 = iParam0;
	}
}

bool func_178(int iParam0)
{
	if (func_159() != -1)
	{
		return false;
	}
	if (!func_442(iParam0))
	{
		return false;
	}
	return func_445((*Global_1347702)[iParam0]->f_15, 1);
}

int func_179(int iParam0)
{
	iVar0 = 0;
	while (true)
	{
		if (func_180(iParam0, iVar0) != -1)
		{
			iVar0++;
		}
		else
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_180(int iParam0, int iParam1)
{
	return -1;
}

bool func_181(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_48;
}

void func_182(var uParam0, int iParam1)
{
	func_446(uParam0, iParam1);
}

int func_183()
{
	return Global_1310750->f_16037;
}

bool func_184(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_185(int iParam0, int iParam1)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_186(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	if (func_447(64) && func_448(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_187(int iParam0)
{
	if (!func_184(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_184(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_449(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_189(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_450(iParam0, iParam1, bParam2);
}

float func_190(bool bParam0)
{
	if (!*bParam0)
	{
		return 80f;
	}
	return 80f;
}

void func_191(int iParam0, int iParam1)
{
	iVar0 = func_451(iParam1);
	if (!func_452(iParam0))
	{
		func_453(iParam0, 0);
	}
	if (!func_454(iVar0, iParam0))
	{
		func_455(iVar0, iParam0);
	}
}

int func_192()
{
	return &Global_1899515;
}

void func_193(int iParam0)
{
	iLocal_31 = iParam0;
}

bool func_194()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_456())
			{
				return true;
			}
			break;
		case 1:
			if (func_457())
			{
				return true;
			}
			break;
		case 2:
			if (func_458())
			{
				return true;
			}
			break;
		case 3:
			if (func_459())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_195()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_460())
			{
				return true;
			}
			break;
		case 1:
			if (func_461())
			{
				return true;
			}
			break;
		case 2:
			if (func_462())
			{
				return true;
			}
			break;
		case 3:
			if (func_463())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

int func_196(int iParam0)
{
	switch (iLocal_29)
	{
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 2;
				case 2:
				case 3:
					return 1;
				case 4:
					return 2;
				case 5:
					return 4;
				default:
					break;
			}
			break;
		case 1:
			return iLocal_55;
	}
	return 0;
}

bool func_197(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	if (_0x5c16855277819bbf() >= iParam0)
	{
		return true;
	}
	return false;
}

bool func_198()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_464())
			{
				return false;
			}
			break;
		case 1:
			if (!func_465())
			{
				return false;
			}
			break;
		case 2:
			if (!func_466())
			{
				return false;
			}
			break;
		case 3:
			if (!func_467())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_199()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_468())
			{
				return true;
			}
			break;
		case 1:
			if (func_469())
			{
				return true;
			}
			break;
		case 2:
			if (func_470())
			{
				return true;
			}
			break;
		case 3:
			if (func_471())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_200()
{
	if (!func_472(&(Local_62.f_95)))
	{
		return false;
	}
	if (func_99(2))
	{
		if (!func_472(&(Local_62.f_96)))
		{
			return false;
		}
	}
	return true;
}

bool func_201()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_473())
			{
				return true;
			}
			break;
		case 1:
			if (func_474())
			{
				return true;
			}
			break;
		case 2:
			if (func_475())
			{
				return true;
			}
			break;
		case 3:
			if (func_476())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_202()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_477())
			{
				return true;
			}
			break;
		case 1:
			if (func_478())
			{
				return true;
			}
			break;
		case 2:
			if (func_479())
			{
				return true;
			}
			break;
		case 3:
			if (func_480())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_203()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_481())
			{
				return false;
			}
			break;
		case 1:
			if (!func_482())
			{
				return false;
			}
			break;
		case 2:
			if (!func_483())
			{
				return false;
			}
			break;
		case 3:
			if (!func_484())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_204()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_485())
			{
				return true;
			}
			break;
		case 1:
			if (func_486())
			{
				return true;
			}
			break;
		case 2:
			if (func_487())
			{
				return true;
			}
			break;
		case 3:
			if (func_488())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_205()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_388())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_206()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_390())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_207()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_489())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_208()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_490())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_209()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_491())
			{
				return true;
			}
			break;
		case 1:
			if (func_492())
			{
				return true;
			}
			break;
		case 3:
			if (func_493())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_210()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_494())
			{
				return true;
			}
			break;
		case 1:
			if (func_495())
			{
				return true;
			}
			break;
		case 3:
			if (func_496())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_211()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_497())
			{
				return true;
			}
			break;
		case 1:
			if (func_498())
			{
				return true;
			}
			break;
		case 3:
			if (func_499())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_212()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_500())
			{
				return true;
			}
			break;
		case 3:
			if (func_501())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_213()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_502())
			{
				return true;
			}
			break;
		case 3:
			if (func_503())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_214()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_504())
			{
				return true;
			}
			break;
		case 3:
			if (func_505())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_215()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_506())
			{
				return true;
			}
			break;
		case 3:
			if (func_507())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_216()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_508())
			{
				return true;
			}
			break;
		case 3:
			if (func_509())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_217()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_510())
			{
				return true;
			}
			break;
		case 3:
			if (func_511())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_218()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_512())
			{
				return true;
			}
			break;
		case 3:
			if (func_513())
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_219()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_514())
			{
				return false;
			}
			break;
		default:
			return true;
	}
	return true;
}

bool func_220()
{
	switch (iLocal_29)
	{
		case 0:
			if (!func_515())
			{
				return false;
			}
			break;
	}
	func_98(1024);
	return true;
}

bool func_221(int iParam0)
{
	return (Local_62.f_1622 && iParam0) != 0;
}

bool func_222(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_516(bParam1, bParam2, bParam3);
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

void func_223(int* iParam0, bool bParam1)
{
	if (func_120(2))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*iParam0, false);
	if (bParam1)
	{
		set_ped_keep_task(*iParam0, true);
	}
	set_ped_as_no_longer_needed(iParam0);
	func_517(2);
}

void func_224(int iParam0)
{
	if (func_221(iParam0))
	{
		return;
	}
	Local_62.f_1622 = (Local_62.f_1622 || iParam0);
}

void func_225()
{
	if (func_65())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (!func_308(&(Local_62.f_1021[iVar0]), 0, &(Local_62.f_1021[iVar0]->f_10), &iVar1, 0, 0))
		{
			return;
		}
		if (iVar1 == 2048)
		{
			func_518(&(Local_62.f_1021[iVar0]->f_9), 1024);
		}
		else if (iVar1 == 4 || iVar1 == 256)
		{
			func_518(&(Local_62.f_1021[iVar0]->f_9), 2048);
		}
		else if (((iVar1 == 2 || iVar1 == 8192) || iVar1 == 1) || iVar1 == 16)
		{
			func_518(&(Local_62.f_1021[iVar0]->f_9), 4096);
		}
		else if (iVar1 == 16384)
		{
			func_518(&(Local_62.f_1021[iVar0]->f_9), 4096);
		}
		else
		{
			return;
		}
		iVar0++;
	}
}

void func_226(int* iParam0, var uParam1)
{
	if (func_275())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = &Local_62.f_1216[0];
	sVar2 = "SCENE_VALDOC_DEPUTYKNOCK";
	if (does_entity_exist(*iParam0))
	{
		fVar3 = func_519(Global_35, *iParam0, 1, 1);
	}
	else
	{
		if (!func_120(2))
		{
			return;
		}
		fVar3 = 20f;
	}
	if (!func_145(*iParam0, 0, 1))
	{
		func_520(iParam0);
		if (!func_120(2))
		{
			return;
		}
	}
	func_521(iParam0, fVar3, uParam1);
	if (func_522(iParam0))
	{
		func_523(iParam0);
		func_524(17, 0);
	}
	else if (func_525(iParam0))
	{
		if (func_526(iParam0))
		{
			func_524(15, iVar0);
			return;
		}
		else if (func_527(iParam0))
		{
			func_524(14, iVar0);
			return;
		}
	}
	func_528(iParam0);
	if (func_529(iParam0, fVar3))
	{
		func_524(8, iVar0);
	}
	if (func_530())
	{
		if (func_74(Global_35, &(Local_62.f_1247[4])))
		{
			if (!func_335(1024))
			{
				if (func_531())
				{
					func_532("SVD_DEP_KNOCK", 0);
					func_281(&(Local_62.f_1518), "SRVD_O3_SEEAIM", &(Local_62.f_1479[1]), *iParam0, 0, 0, 1, 1);
					func_533(1024);
					func_524(12, iVar0);
				}
			}
		}
	}
	switch (iParam0->f_8)
	{
		case 0:
			if (!_0x5102307ce88798eb(*iParam0))
			{
				request_ped_visibility_tracking(*iParam0);
			}
			func_524(1, iVar0);
			break;
		case 1:
			if (!func_534())
			{
				return;
			}
			func_535(iVar1, sVar2);
			func_536(*iParam0, -1569615261, 1, 0);
			func_524(2, iVar0);
			break;
		case 2:
			if ((Local_62.f_1620 % 2) == 0)
			{
				return;
			}
			if (func_537(iParam0, fVar3))
			{
				func_538(func_416(), 7f, "AMBRST_SHOPROB_RE_PEEPTOM", 1, 0, 0, 0, -1082130432);
				func_224(256);
				func_277(iVar1, "bDeputyActionKnock", 1, sVar2);
				func_429(-855228377, 1, "DOOR_VAL_DOC_BACK");
				func_34(73, 1);
				func_539(0, 0);
				func_281(&(Local_62.f_1518), "SVD_DEP_KNOCK", *iParam0, &(Local_62.f_1479[1]), 0, 0, 1, 1);
				func_524(5, iVar0);
			}
			else if (func_82())
			{
				func_540(iParam0, 0);
				func_524(19, iVar0);
			}
			break;
		case 5:
			if (!func_145(*iParam0, 0, 1))
			{
				func_129(Local_62.f_1373[1], Local_62.f_1370[1]);
				func_541();
				func_524(19, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.929f))
			{
				return;
			}
			if (func_353(-3f, 1, 0, 0))
			{
				func_129(Local_62.f_1373[1], Local_62.f_1370[1]);
				func_541();
				func_524(6, iVar0);
			}
			break;
		case 6:
			if (!func_221(8) && !func_542(&(iParam0->f_9), 65536))
			{
				if (_get_anim_scene_progress(&(Local_62.f_1216[0])) > 0.976f)
				{
					if (func_543(*iParam0, Global_35, 1, 5.25f, 0))
					{
						if (func_353(-5.5f, 1, 0, 0))
						{
							task_look_at_entity(*iParam0, Global_35, 4000, 0, 51, 0);
							func_281(&(Local_62.f_1518), "SRVDDEPWALK", *iParam0, Global_35, 0, 0, 1, 1);
							func_224(8);
						}
					}
				}
			}
			if (func_280(iVar1, sVar2, 0.993f) || !func_544(iParam0))
			{
				func_429(-855228377, 0, "DOOR_VAL_DOC_BACK");
				func_540(iParam0, 0);
				if (!is_entity_dead(&(Local_62.f_1226[0])))
				{
					set_entity_visible(&(Local_62.f_1226[0]), false);
				}
				func_524(10, iVar0);
			}
			break;
		case 14:
			func_523(iParam0);
			if (is_ped_ragdoll(*iParam0))
			{
				return;
			}
			func_302(0);
			func_281(&(Local_62.f_1518), "SRVDDEPPUSH", *iParam0, Global_35, 0, 0, 1, 1);
			func_524(9, iVar0);
			break;
		case 8:
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			func_541();
			func_545(Local_62.f_1226[0], 0);
			func_546(&(Local_62.f_1216[0]), "SCENE_VALDOC_DEPUTYKNOCK");
			func_281(&(Local_62.f_1518), "SRVDDEPCLOSE", *iParam0, Global_35, 0, 0, 1, 1);
			func_524(9, iVar0);
			break;
		case 9:
			func_540(iParam0, 0);
			func_524(19, iVar0);
			break;
		case 10:
			if (!func_276(Local_62.f_1392[3], 1f, 0, "TIMER_VALDOC_DELETE_DEPUTY_FEM_LOITER"))
			{
				return;
			}
			func_546(iVar1, sVar2);
			func_524(19, iVar0);
			break;
		case 12:
			open_sequence_task(&iVar4);
			task_react(0, Global_35, vLocal_59, "Default_Shocked", 2f, 0, 4);
			task_combat_ped(0, Global_35, 0, 0);
			func_547(*iParam0, &iVar4, 0, 0, 1, 1);
			func_34(Local_62, 16);
			func_118(Local_62, 524288);
			func_523(iParam0);
			func_524(13, iVar0);
			break;
		case 13:
			if (func_548(*iParam0, 242628503, 0))
			{
				if (get_sequence_progress(*iParam0) < 1)
				{
					return;
				}
			}
			func_223(iParam0, 1);
			func_524(17, iVar0);
			break;
		case 16:
			break;
		case 15:
			if (func_530())
			{
				func_532("SVD_DEP_KNOCK", 0);
				func_549();
			}
			func_34(Local_62, 16);
			func_118(Local_62, 524288);
			func_523(iParam0);
			func_223(iParam0, 0);
			func_524(17, iVar0);
			break;
		case 17:
			if (!func_550(iVar1, sVar2))
			{
				func_524(19, iVar0);
				return;
			}
			if (func_113(iVar1, "Idle", sVar2))
			{
				func_524(19, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.64f) || func_280(iVar1, sVar2, 0.99f))
			{
				func_524(19, iVar0);
				return;
			}
			if (func_280(iVar1, sVar2, 0.956f))
			{
				if (func_353(-3f, 1, 0, 0))
				{
					func_549();
				}
				func_524(19, iVar0);
				return;
			}
			func_524(18, iVar0);
			break;
		case 18:
			if (func_353(-3f, 1, 0, 0))
			{
				func_549();
			}
			if (func_280(iVar1, sVar2, 0.666f))
			{
				if (func_353(-5f, 1, 0, 0))
				{
					func_549();
					func_546(iVar1, sVar2);
					play_entity_anim(&(Local_62.f_1198[1]), "S_DOORSLDPRTNBRD01X", "s_lev_des", 0f, false, true, false, 0f, 0);
					_set_entity_anim_speed(&(Local_62.f_1198[1]), "s_lev_des", "S_DOORSLDPRTNBRD01X", -1f);
					func_524(19, iVar0);
				}
			}
			break;
		case 19:
			break;
	}
}

void func_227(int* iParam0, var uParam1)
{
	if (func_275())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = &Local_62.f_1216[0];
	sVar2 = "SCENE_RHDGUN_HELP";
	if (func_551(&(Local_62.f_390[1]->f_10), 2))
	{
		func_552(Local_62.f_1021[0], &(Local_62.f_390[1]->f_12), 15f, &(Local_62.f_390[1]->f_30), 0, 1, 0, 0, 3, 0, 2, -1082130432);
	}
	if (!func_542(&(iParam0->f_9), 64))
	{
		if (func_542(&(iParam0->f_9), 1024))
		{
			if (!is_ped_ragdoll(*iParam0))
			{
				_task_smart_flee_style_ped(*iParam0, Global_35, 0, 0, -1082130432, -1, 0);
				set_ped_keep_task(*iParam0, true);
				set_blocking_of_non_temporary_events(*iParam0, false);
				set_ped_as_no_longer_needed(iParam0);
				func_518(&(iParam0->f_9), 64);
			}
		}
	}
	switch (iParam0->f_8)
	{
		case 0:
			set_portal_settings_override("RHO_GUNSMITH_BASEMENT_WINDOW_BLOCKED", "RHO_GUNSMITH_BASEMENT_WINDOW_OPEN");
			func_524(2, iVar0);
			break;
		case 2:
			if (func_35(29, 1) || func_62(2))
			{
				func_553(iVar1, "PBL_bars_callover_01", sVar2);
				func_524(19, iVar0);
				return;
			}
			if (func_554())
			{
				func_524(8, iVar0);
				return;
			}
			if (func_54(*iParam0, func_555(), 1) > 0.15f)
			{
				return;
			}
			func_556();
			func_535(iVar1, sVar2);
			_0xaab050da48b57978(*iParam0, "Default_Nervous", 0, -1, 4);
			func_524(5, iVar0);
			break;
		case 5:
			if (func_82() || is_entity_dead(Local_62.f_170))
			{
				if (func_145(*iParam0, 0, 1))
				{
					clear_ped_tasks(*iParam0, 1, 0);
					task_smart_flee_ped(*iParam0, *uParam1, 1000f, -1, 0, 1.5f, 0);
				}
				func_524(11, iVar0);
				return;
			}
			if (func_554())
			{
				func_524(8, iVar0);
				return;
			}
			if (func_557())
			{
				return;
			}
			if (!func_74(Global_35, &(Local_62.f_1247[1])))
			{
				return;
			}
			fVar3 = func_519(Global_35, *uParam1, 1, 1);
			if (fVar3 > 20f)
			{
				return;
			}
			if (!_0x164cecc59e70df86(*iParam0, 35f))
			{
				if (fVar3 > 10f)
				{
					func_307(Local_62.f_1392[2]);
					return;
				}
			}
			else if (!func_276(Local_62.f_1392[2], 1.5f, 0, "TIMER_RHDGUN_PASSERBY_VISIBLE_TO_WALK_AWAY"))
			{
				return;
			}
			func_91(16);
			func_281(&(Local_62.f_1518), "PRRGS_IG3_LEAVE", *uParam1, *iParam0, 0, 0, 1, 1);
			func_558(249295937, *uParam1, 1);
			func_278(iVar1, "PBL_intro_action", sVar2, 1);
			func_277(iVar1, "BOOL_intro_loop", 1, sVar2);
			func_558(249295937, *uParam1, 1);
			func_39(1);
			func_34(29, 1);
			func_539(0, 0);
			func_524(7, iVar0);
			break;
		case 7:
			if (func_542(&(iParam0->f_9), 64))
			{
				func_524(9, iVar0);
				return;
			}
			if (!func_280(iVar1, sVar2, 0.591f))
			{
				if (!func_62(4096))
				{
					if (func_280(iVar1, sVar2, 0.515f))
					{
						func_558(249295937, *uParam1, 1);
						func_39(4096);
					}
				}
				return;
			}
			force_ped_motion_state(*iParam0, -668482597, false, 0, false);
			open_sequence_task(&iVar4);
			task_follow_nav_mesh_to_coord(0, 1322.545f, -1310.427f, 75.56776f, 1f, 20000, 0.25f, 1, 40000f);
			task_follow_nav_mesh_to_coord(0, 1326.135f, -1292.982f, 76.04255f, 1f, 20000, 0.25f, 1, 40000f);
			task_wander_standard(0, 40000f, 1);
			func_547(*iParam0, &iVar4, 0, 0, 1, 1);
			func_524(8, iVar0);
			break;
		case 8:
			set_ped_keep_task(*iParam0, true);
			set_blocking_of_non_temporary_events(*iParam0, false);
			set_ped_as_no_longer_needed(iParam0);
			func_271(&(Local_62.f_390[1]->f_12), &(Local_62.f_390[1]->f_30));
			if (!func_119(&(Local_62.f_390[0]->f_9), 512))
			{
				func_524(9, iVar0);
			}
			else
			{
				func_524(11, iVar0);
			}
			break;
		case 9:
			if (func_120(1))
			{
				if (!func_559(iVar1, "PBL_bars_loop_reset", sVar2, 0))
				{
					return;
				}
			}
			else if (!func_560())
			{
				return;
			}
			func_561(16);
			func_562();
			func_553(iVar1, "PBL_bars_callover_01", sVar2);
			func_524(10, iVar0);
			break;
		case 10:
			if (!func_276(Local_62.f_1392[0], 3f, 1, "TIMER_RHDGUN_FREE_PASSER_N_CLERK_AMBUSH"))
			{
				return;
			}
			func_524(19, iVar0);
			break;
		case 11:
			if (!func_559(iVar1, "PBL_react_to_gunfire", sVar2, 0))
			{
				return;
			}
			func_418(4);
			func_563(&(uParam1->f_10), &(uParam1->f_30), 0, 0);
			func_278(iVar1, "PBL_react_to_gunfire", sVar2, 1);
			func_524(19, iVar0);
			break;
		case 19:
			break;
	}
}

bool func_228()
{
	iVar0 = func_45(Local_62.f_170.f_8);
	if (_0x800df3fc913355f3(iVar0))
	{
		iVar1 = _0x31c70a716cae1fee(iVar0);
	}
	else
	{
		return false;
	}
	if (is_entity_dead(iVar1))
	{
		return false;
	}
	if (is_entity_dead(Global_35))
	{
		return false;
	}
	if (!func_564(iVar1, Global_35, 22, func_160(), 0, 1, 10080))
	{
	}
	else
	{
		func_91(2);
	}
	return true;
}

void func_229(var uParam0)
{
	func_565(uParam0, 0);
	func_566(uParam0, 0);
	func_230(uParam0, 1);
	func_567(uParam0, 1);
	func_568(uParam0, 0);
	func_236(uParam0, 1);
	func_569(uParam0, 1, 1, 1);
}

void func_230(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 256);
	}
	else
	{
		func_571(&(uParam0->f_1), 256);
	}
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_232(int iParam0)
{
	func_572(iParam0);
}

bool func_233()
{
	if (func_60(32))
	{
		return true;
	}
	if (!func_573(&(Local_62.f_95)))
	{
		return false;
	}
	if (func_99(2))
	{
		if (!func_573(&(Local_62.f_96)))
		{
			return false;
		}
	}
	return true;
}

int func_234()
{
	if (func_60(256))
	{
		return 0;
	}
	switch (iLocal_29)
	{
		case 3:
			if (!func_99(8))
			{
				return 2;
			}
			else if (!func_99(16))
			{
				return 0;
			}
			else if (!func_99(32))
			{
				return 1;
			}
			else if (!func_99(64))
			{
				return 0;
			}
			else if (!func_99(256))
			{
				return 2;
			}
			else if (!func_99(1024))
			{
				func_98(33554432);
				return iLocal_57;
			}
			break;
		case 0:
			if (!func_99(8))
			{
				return 0;
			}
			else if (!func_99(16))
			{
				return 0;
			}
			else if (!func_99(32))
			{
				return 0;
			}
			else if (!func_99(64))
			{
				return 1;
			}
			else if (!func_99(256))
			{
				return 0;
			}
			else if (!func_99(1024))
			{
				func_98(33554432);
				return (iLocal_57 + (iLocal_55 - 1));
			}
			break;
		default:
			func_98(33554432);
			return ((iLocal_55 + iLocal_54) + iLocal_57) + 1;
	}
	return 0;
}

int func_235(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return 1;
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_571(uParam0, 256);
	}
	else
	{
		func_570(uParam0, 256);
	}
}

void func_237()
{
	if (!func_62(4))
	{
		return;
	}
	if (func_60(256))
	{
		return;
	}
	if (func_574(152))
	{
		return;
	}
	if (!func_65())
	{
		return;
	}
	func_575(152, 0);
}

int func_238(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_239(int iParam0)
{
	if (func_55(1))
	{
		return;
	}
	func_576(iParam0);
	func_57(1);
}

void func_240(var uParam0)
{
	func_577(uParam0);
	func_578(uParam0);
	if (func_82())
	{
		if (!func_221(2))
		{
			if (func_579(*uParam0, "GunsmithKnock"))
			{
				func_224(2);
			}
		}
	}
	func_580();
	if (func_65() && func_74(Global_35, &(Local_62.f_1247[1])))
	{
		set_ped_reset_flag(Global_35, 108, true);
	}
}

void func_241(var uParam0, var uParam1, int* iParam2)
{
	func_581(uParam1);
	func_582(iParam2, uParam0);
	if (func_583(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "trans_2_trap_door_owner") || func_583(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
	{
		func_337(&(Local_62.f_170.f_42), Global_35, 10000, vLocal_59, 4);
		_0x66f9eb44342bb4c5(Local_62.f_170, &(Local_62.f_170.f_42));
	}
	if (!func_62(65536) && !func_62(131072))
	{
		if (func_583(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "idle_2_register_owner"))
		{
			func_224(1);
		}
	}
	else if (func_583(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "handsup_register_owner") || func_583(Local_62.f_170, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
	{
		func_418(1);
	}
	if (!func_335(2))
	{
		if (func_60(262144))
		{
			if (!func_584(Global_35, 325463335))
			{
				func_281(&(Local_62.f_1518), "SRGKREGMON", Local_62.f_170, Global_35, 0, 0, 1, 1);
				func_533(2);
			}
		}
	}
	if (!func_221(256))
	{
		if (func_579(Local_62.f_170, "UnlockedSideDoor"))
		{
			Local_62.f_1247[11] = _0x0eb78c2b156635b1(665633627, 1289.607f, -1306.01f, 82.22049f, 0f, 0f, 0f, func_585());
			_0x7c00cfc48a782dc0(&(Local_62.f_1247[11]), *uParam1, vLocal_59, vLocal_59, 2, 1);
			func_426(&(Local_62.f_1189[0]), 0, 0, 0, 1, 0, 0, 0);
			func_586();
			func_587(Local_62.f_1247[12], 1325.172f, -1322.377f, 74.8764f, 0f, 0f, 0f, 0.62068f, 0.480134f, 0.972615f, "VOL_RHDGUN_PLAYER_BLOCK_GUNSMITH_AFRAID");
			func_533(131072);
			func_588(&(Local_62.f_390[0]), &(Local_62.f_390[0]->f_10), &(Local_62.f_390[0]->f_30), 0, 0);
			_0xae6004120c18df97(*uParam1, 0, 0);
			func_224(256);
		}
		else if (is_entity_dead(*uParam1))
		{
			if (func_559(&(Local_62.f_1216[0]), "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 0))
			{
				func_418(4);
				func_278(&(Local_62.f_1216[0]), "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 1);
				func_563(&(Local_62.f_390[0]->f_10), &(Local_62.f_390[0]->f_30), 0, 0);
			}
			func_61(&(iParam2->f_1));
		}
	}
	if (!func_221(1024))
	{
		if (func_579(Local_62.f_170, "TrapDoorStartOpen"))
		{
			set_portal_settings_override("RHO_GUNSMITH_TRAP_DOOR_CLOSED", "RHO_GUNSMITH_TRAP_DOOR_OPEN");
			func_591(*iParam2, func_589(), func_590(), 2, 1073741824);
			task_play_anim_advanced(*iParam2, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "bed_loop_victim", func_589(), 0f, 0f, func_590(), 8f, -8f, -1, 1, 0f, 2, 0, 0);
			func_392(Local_62.f_1226[0], 1);
			set_ped_config_flag(*uParam1, 137, false);
			set_ped_config_flag(*uParam1, 169, false);
			set_ped_config_flag(*uParam1, 170, false);
			set_ped_config_flag(*uParam1, 302, false);
			set_entity_proofs(*uParam1, 0, false);
			func_224(1024);
			func_592(*uParam1, "PRRGS_STAIRS", 0);
			func_593(*uParam1, 1);
			func_594("PROP_PLAYER_RHO_GUN_TRAP_DOOR", 0);
			func_595("LevDes_RhoGunTrapDoor", 0);
		}
		else if (!func_145(Local_62.f_170, 0, 1))
		{
			if (!func_221(512))
			{
				func_594("PROP_PLAYER_RHO_GUN_TRAP_DOOR", 1);
				func_595("LevDes_RhoGunTrapDoor", 1);
				func_224(512);
			}
		}
		if (func_221(512))
		{
			if (!func_335(262144))
			{
				if (func_584(Global_35, -272585497))
				{
					func_596(&Global_35, "SRGAOPEN", "SRGJOPEN", 1);
					func_392(Local_62.f_1226[0], 1);
					func_533(262144);
				}
			}
		}
	}
	if (func_221(256))
	{
		if (!func_221(8192))
		{
			if ((func_74(Global_35, &(Local_62.f_1247[7])) || func_74(Global_35, &(Local_62.f_1247[6]))) || func_74(Global_35, &(Local_62.f_1247[8])))
			{
				func_597(&(Local_62.f_153), 16, 1, 1065353216);
			}
			else
			{
				func_598(&(Local_62.f_153));
			}
		}
		else
		{
			func_598(&(Local_62.f_153));
		}
	}
}

void func_242(var uParam0)
{
	func_599(&(Local_62.f_170));
	func_387(uParam0);
	if (!func_600())
	{
		func_601(1);
	}
	if (iVar1774 == 1)
	{
		if ((func_65() || func_74(Global_35, Local_62.f_1290)) || func_602(3, 5f, 1))
		{
			func_426(1854467923, 0, 0f, 0, 0, 0, 0, 0);
			func_426(1595373759, 0, 0f, 0, 0, 0, 0, 0);
		}
		else
		{
			iLocal_1777 = 0;
		}
	}
	if (_does_volume_exist(Local_62.f_1376))
	{
		func_603(0);
	}
	func_604(3);
	if (_0x29fce825613fefca(Local_62.f_170, 500))
	{
		if (func_605("PRSGS_C_GETSTH1"))
		{
			func_606("PRSGS_C_GETSTH1", 0, 0);
		}
		if (func_605("PRSGS_C_GETSTH2"))
		{
			func_606("PRSGS_C_GETSTH2", 0, 0);
		}
		if (func_605("PRSGS_C_GETSTH3"))
		{
			func_606("PRSGS_C_GETSTH3", 0, 0);
		}
		if (func_605("PRSGS_C_GETSTH4"))
		{
			func_606("PRSGS_C_GETSTH4", 0, 0);
		}
	}
	if (_does_volume_exist(bVar1768) && _does_volume_exist(Local_62.f_1376))
	{
		if (func_74(Global_35, bVar1768))
		{
			if (iVar1773 == 0)
			{
				set_ped_config_flag(Local_62.f_170, 137, true);
				set_ped_config_flag(Local_62.f_170, 169, true);
				set_ped_config_flag(Local_62.f_170, 170, true);
				set_entity_proofs(Local_62.f_170, 16, false);
				set_ped_config_flag(Global_35, 26, true);
				iLocal_1776 = 1;
			}
		}
		else if (iVar1773 == 1)
		{
			iLocal_1776 = 0;
			set_ped_config_flag(Local_62.f_170, 137, false);
			set_ped_config_flag(Local_62.f_170, 169, false);
			set_ped_config_flag(Local_62.f_170, 170, false);
			set_entity_proofs(Local_62.f_170, 0, false);
			set_ped_config_flag(Global_35, 26, false);
		}
	}
	else if (iVar1773 == 1)
	{
		iLocal_1776 = 0;
		set_ped_config_flag(Local_62.f_170, 137, false);
		set_ped_config_flag(Local_62.f_170, 169, false);
		set_ped_config_flag(Local_62.f_170, 170, false);
		set_entity_proofs(Local_62.f_170, 0, false);
		set_ped_config_flag(Global_35, 26, false);
	}
	if (func_145(Local_62.f_170, 0, 0))
	{
		if (_is_ped_hogtied(Local_62.f_170) || _is_ped_lassoed(Local_62.f_170))
		{
			if (func_74(Local_62.f_170, Local_62.f_1290))
			{
				if (!func_607(Local_62.f_170, -70145180))
				{
					_task_intimidated_2(Local_62.f_170, Global_35, 2, 0, 0, 1, 0, 0, 0);
					_0x41d1331afad5a091(Local_62.f_170, 1, 0);
				}
			}
			else if (!func_607(Local_62.f_170, 518218985))
			{
				_task_smart_flee_style_ped(Local_62.f_170, Global_35, 4, 0, -1082130432, -1, 0);
			}
		}
	}
	if (func_221(1024))
	{
		if (!func_221(2048))
		{
			if (!func_145(Local_62.f_170, 0, 1))
			{
				_0x18ff3110cf47115d(Local_62.f_170, 2, 1);
				_0x18ff3110cf47115d(Local_62.f_170, 7, 1);
			}
		}
		if (_does_volume_exist(iVar1766) && _is_ped_using_scenario_hash(Global_35, 1860058009))
		{
			func_224(2048);
			func_57(262144);
			func_126(iVar1766);
			func_126(bVar1768);
			func_412();
			func_239(3);
			func_29(64);
			func_34(Local_62, 524288);
			func_608();
		}
		if (!func_221(2048))
		{
			if (does_entity_exist(Local_62.f_170) && _does_volume_exist(iVar1766))
			{
				if (is_scenario_type_enabled(func_609()))
				{
					if (func_610(Local_62.f_170, iVar1766, 0, 0) && _get_ped_height(Local_62.f_170) > 159f)
					{
						set_scenario_type_enabled(func_609(), false);
					}
				}
				else if (!func_610(Local_62.f_170, iVar1766, 0, 0))
				{
					set_scenario_type_enabled(func_609(), true);
				}
			}
		}
	}
	if (!func_221(2048))
	{
		if (func_579(Local_62.f_170, "OpenedTrapDoor"))
		{
			set_portal_settings_override("STR_GENST_TRAP_DOOR_CLOSED", "STR_GENST_TRAP_DOOR_OPEN");
			set_ped_relationship_group_hash(Local_62.f_170, -1976316465);
			set_entity_invincible(Local_62.f_170, false);
			set_entity_proofs(Local_62.f_170, 0, false);
			_0xa46e98bdc407e23d(Local_62.f_1376, 2f, 1.6f, 5f);
			func_594(func_611(), 0);
			func_224(2048);
		}
		else if (!func_221(1024))
		{
			if (func_82() || (func_60(8388608) && !func_145(Local_62.f_170, 0, 1)))
			{
				if (_is_anim_scene_started(&(Local_62.f_1216[0]), false))
				{
					if (_0x1f0e401031e20146(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt"))
					{
						if (func_145(Local_62.f_170, 0, 1))
						{
							if (get_ped_relationship_group_hash(Local_62.f_170) != 1030835986)
							{
								set_ped_relationship_group_hash(Local_62.f_170, 1030835986);
								set_entity_invincible(Local_62.f_170, true);
								set_entity_proofs(Local_62.f_170, 2, false);
							}
						}
					}
					else if (get_ped_relationship_group_hash(Local_62.f_170) == 1030835986)
					{
						set_ped_relationship_group_hash(Local_62.f_170, -1976316465);
						set_entity_invincible(Local_62.f_170, false);
						set_entity_proofs(Local_62.f_170, 0, false);
					}
				}
				if (!func_145(Local_62.f_170, 0, 1))
				{
					if (_is_anim_scene_started(&(Local_62.f_1216[0]), false))
					{
						if (_0x1f0e401031e20146(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt"))
						{
							if (_0x8d81e7824b7753f7(&(Local_62.f_1216[0]), "OPEN_DOOR_ALT", 1))
							{
								set_anim_scene_rate(&(Local_62.f_1216[0]), 1.5f);
							}
						}
						return;
					}
					func_224(1024);
					_0x18ff3110cf47115d(Local_62.f_170, 2, 1);
					_0x18ff3110cf47115d(Local_62.f_170, 7, 1);
					force_scenario_group_priority(func_612(), 1);
					if (does_entity_exist(&(Local_62.f_1226[1])))
					{
						set_scenario_type_enabled(func_609(), true);
						create_scenario_point_attached_to_entity(&(Local_62.f_1226[1]), 1860058009, 0f, 0f, 0f, 0f, 0, 0, 0);
					}
					if (_does_volume_exist(Local_62.f_1376))
					{
						func_126(Local_62.f_1376);
						func_126(bVar1768);
						func_126(bVar1767);
						Local_62.f_1376 = _0x0eb78c2b156635b1(-1612834106, -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
					}
				}
			}
		}
	}
}

void func_243()
{
	func_613(&(Local_62.f_170));
	func_614(Local_62.f_390[0]);
	func_615();
	func_391();
	if (func_221(32768))
	{
		if (!func_221(65536))
		{
			func_426(-227429327, 0, 0f, 0, 0, 0, 0, 0);
			func_224(65536);
		}
	}
	if (func_82())
	{
		if (!func_44(32768))
		{
			if (!func_247())
			{
				if (func_74(Global_35, Local_62.f_1292))
				{
					func_249();
				}
			}
		}
		if (!func_60(65536))
		{
			func_128(Local_62.f_1512[1], "SPI_VALDOC_INT_DOOR_KNOCK");
			func_128(Local_62.f_1512[3], "SPI_VALDOC_EXT_DOOR_KNOCK");
			func_29(65536);
		}
	}
	else if (Local_62.f_1198[0]->f_7 == 7)
	{
		func_128(Local_62.f_1512[1], "SPI_VALDOC_INT_DOOR_KNOCK");
	}
	else if (Local_62.f_1198[1]->f_7 == 7)
	{
		func_128(Local_62.f_1512[3], "SPI_VALDOC_EXT_DOOR_KNOCK");
	}
}

int func_244()
{
	return -475370861;
}

bool func_245(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_616(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_246()
{
	if (!func_32(Local_62, 1, 0))
	{
		func_617(Local_62, 1, 0);
	}
}

bool func_247()
{
	if (func_82() && func_60(8388608))
	{
		return true;
	}
	return false;
}

bool func_248(var uParam0, float fParam1)
{
	if (!func_313(uParam0, 16))
	{
		if (func_618(uParam0))
		{
			func_323(uParam0, 16);
		}
	}
	else if (!func_313(uParam0, 32))
	{
		if (func_618(uParam0))
		{
			func_323(uParam0, 32);
		}
	}
	if (func_222(player_id(), 0, 1, 0) && Global_1935630->f_24)
	{
		uParam0->f_86 = 1;
		return true;
	}
	if (_does_volume_exist(uParam0->f_90))
	{
		if (!_0xf256a75210c5c0eb(uParam0->f_90, Global_36))
		{
			return true;
		}
	}
	if (Global_1935630->f_24)
	{
		iVar0 = _0x336b3d200ab007cb(Global_35, Global_36, 10f, 16896);
		if (iVar0 >= 1)
		{
			uParam0->f_86 = 1;
			return true;
		}
	}
	if (Global_1935630->f_44 == -1569615261)
	{
		func_619(&(uParam0->f_72), 0);
		if (func_620(&(uParam0->f_72), 1.5f))
		{
			if (fParam1 > 4f)
			{
				return true;
			}
			else
			{
				func_317(&(uParam0->f_72));
			}
		}
	}
	else if (func_621(&(uParam0->f_72)))
	{
		func_307(&(uParam0->f_72));
	}
	if (!func_313(uParam0, 16))
	{
		if ((fParam1 < 4f || func_622(*uParam0)) || has_entity_clear_los_to_entity_in_front(Global_35, *uParam0, 17))
		{
			if (func_621(&(uParam0->f_67)))
			{
				func_307(&(uParam0->f_67));
			}
			return false;
		}
	}
	func_619(&(uParam0->f_67), 0);
	if (func_620(&(uParam0->f_67), 3f))
	{
		return true;
	}
	if (func_313(uParam0, 16))
	{
		return true;
	}
	if (func_289(uParam0, 0))
	{
		return true;
	}
	return false;
}

void func_249()
{
	if (func_44(16777216))
	{
		return;
	}
	if (iLocal_29 == 1 && func_435(44))
	{
		return;
	}
	func_344();
	func_299(1);
	func_623(1);
	func_266();
	func_268();
	func_91(16777216);
}

bool func_250(int iParam0)
{
	if (func_56(iParam0, 0))
	{
		return false;
	}
	if (func_74(Global_35, func_624()))
	{
		return false;
	}
	if (iLocal_29 == 0 && func_74(Global_35, Local_62.f_1288))
	{
		return false;
	}
	return true;
}

void func_251(int iParam0)
{
	func_625(Global_1935630, 16);
	if (func_626(Global_1914319->f_3[iParam0]->f_20) == 3 || func_626(Global_1914319->f_3[iParam0]->f_20) == 1)
	{
		func_627(Global_1914319->f_3[iParam0]->f_20, 0, 2);
	}
	Global_1914319->f_17371 = 0;
}

void func_252(bool bParam0)
{
	if (iLocal_29 != 1)
	{
		return;
	}
	if (!func_60(8388608) && bParam0)
	{
		return;
	}
	if (bParam0)
	{
		if (!func_55(64))
		{
			func_628(2048);
			func_57(64);
		}
	}
	else if (func_55(64))
	{
		func_148(2048);
		func_58(64);
	}
}

void func_253()
{
	if (!Local_62.f_1247[8]->f_1)
	{
		if (!func_447(2048) && func_60(8388608))
		{
			func_628(2048);
		}
	}
	else if (func_74(Global_35, &(Local_62.f_1247[8])))
	{
		if (!func_447(2048))
		{
			func_628(2048);
		}
	}
	else if (func_447(2048))
	{
		func_148(2048);
	}
}

void func_254()
{
	switch (iLocal_29)
	{
		case 1:
			func_19("SR_RHODES_GUN_STOP", 256);
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_STOP", 64);
			break;
		case 2:
			func_19("SR_STRAWBERRY_GEN_STOP", 64);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_STOP", 64);
			break;
	}
}

void func_255(var uParam0)
{
	switch (iLocal_29)
	{
		case 3:
			if (func_65())
			{
				if (func_74(Global_35, &(Local_62.f_1247[5])))
				{
					func_632(925575409, Local_62.f_1198[0], &(Local_62.f_1198[0]->f_7), &(Local_62.f_1479[1]), &(Local_62.f_1373[0]), &(Local_62.f_1370[0]), func_629(), func_630(), func_631(), Local_62.f_390[2]->f_2, Local_62.f_1377[0], -290.3143f, 813.4089f, 120.0726f, 1, uParam0, "FAKE_DOOR_VALDOC_INTERIOR");
				}
			}
			else if (func_55(128))
			{
				func_632(-855228377, Local_62.f_1198[1], &(Local_62.f_1198[1]->f_7), &(Local_62.f_1479[1]), &(Local_62.f_1373[1]), &(Local_62.f_1370[1]), func_633(), func_634(), func_635(), Local_62.f_390[2]->f_2, Local_62.f_1377[0], -281.0829f, 815.7888f, 120.0644f, 1, uParam0, "FAKE_DOOR_VALDOC_EXTERIOR");
			}
			break;
		case 0:
			if (!func_65())
			{
				return;
			}
			func_632(841127028, Local_62.f_1198[0], &(Local_62.f_1198[0]->f_7), &(Local_62.f_390[0]), &(Local_62.f_1373[0]), &(Local_62.f_1370[0]), func_629(), func_630(), func_631(), Local_62.f_390[0]->f_2, Local_62.f_1377[0], 2710.383f, -1290.707f, 50.28196f, 1, uParam0, "FAKE_DOOR_SDNGUN_SHOP_BACK");
			break;
	}
}

void func_256(int iParam0)
{
	iLocal_40 = iParam0;
}

void func_257()
{
	if (is_entity_dead(Local_62.f_170))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 3:
			if (func_275())
			{
				func_636();
				func_535(&(Local_62.f_1216[8]), "SCENE_VALDOC_DOC_REVENGE");
				func_278(&(Local_62.f_1216[8]), "PBL_IDLE", "SCENE_VALDOC_DOC_REVENGE", 1);
			}
			break;
	}
}

bool func_258()
{
	if (iLocal_55 <= 0)
	{
		return true;
	}
	switch (iLocal_29)
	{
		case 1:
			func_637();
			return true;
		default:
			break;
	}
	return true;
	return false;
}

bool func_259(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_32(uParam0->f_51, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_260()
{
	if (iLocal_29 != 1 && iLocal_29 != 0)
	{
		return;
	}
	if (is_entity_dead(Local_62.f_170))
	{
		return;
	}
	set_ped_combat_attributes(Local_62.f_170, 5, true);
}

void func_261(var uParam0)
{
	if (func_313(uParam0, 131072))
	{
		return;
	}
	if (!get_ped_config_flag(Global_35, 141, true))
	{
		set_ped_config_flag(Global_35, 141, true);
	}
	if (!get_ped_config_flag(Global_35, 308, true))
	{
		set_ped_config_flag(Global_35, 308, true);
	}
	func_323(uParam0, 131072);
}

void func_262(bool bParam0)
{
	if (bParam0)
	{
		if (!is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
		{
			set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", true);
		}
	}
	else if (is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
	{
		set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", false);
	}
}

bool func_263()
{
	if (func_60(4194304))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 1:
			if (func_638())
			{
				return true;
			}
			break;
		case 2:
			if (func_639())
			{
				return true;
			}
			break;
		case 3:
			if (func_394())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_264(int iParam0)
{
	func_80(-1, 0, 0, 0, 0);
	func_640();
	func_81(iParam0, 0, 1);
}

bool func_265(var uParam0)
{
	switch (iLocal_29)
	{
		case 1:
			if (func_641())
			{
				return true;
			}
			break;
		case 2:
			if (func_642())
			{
				return true;
			}
			break;
		case 3:
			if (func_395(uParam0))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

void func_266()
{
	if (_does_scenario_point_exist(Local_62.f_1387))
	{
		_delete_scenario_point(Local_62.f_1387);
	}
}

void func_267(var uParam0)
{
	if (func_643(uParam0))
	{
		func_575(499, 0);
	}
}

void func_268()
{
	if (func_313(&(Local_62.f_1), 16777216))
	{
		return;
	}
	if (!Global_1935630->f_25)
	{
		return;
	}
	func_644(&(Local_62.f_1), 35f, 1f, 1);
	func_323(&(Local_62.f_1), 16777216);
}

void func_269()
{
	switch (iLocal_29)
	{
		case 1:
			if (!func_435(44))
			{
				func_645(&(Local_62.f_1), &(Local_62.f_1021[1]));
			}
			break;
		case 0:
			func_645(&(Local_62.f_1), &(Local_62.f_1479[0]));
			break;
		case 2:
			func_645(&(Local_62.f_1), &(Local_62.f_1479[0]));
			break;
		case 3:
			func_645(&(Local_62.f_1), &(Local_62.f_1479[0]));
			break;
	}
}

void func_270(int* iParam0)
{
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		set_ped_config_flag(*iParam0, 297, false);
	}
}

void func_271(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var19.f_2 = 570;
	Var19.f_3 = 1065353216;
	Var19.f_4 = -1082130432;
	Var19.f_9 = 2;
	func_646(iParam0, uParam1, 1);
	func_647(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 18);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var19, 11);
		iVar0++;
	}
}

void func_272()
{
	if (func_50(&(Local_62.f_170.f_13), 64))
	{
		return;
	}
	func_648(Local_62.f_1.f_26[0], 1);
	func_648(Local_62.f_1.f_26[1], 1);
	func_649(&(Local_62.f_170.f_13), 64);
}

void func_273(var uParam0)
{
	if (!_does_volume_exist(uParam0->f_90))
	{
		return;
	}
	if (!is_entity_in_volume(Global_35, uParam0->f_90, true, 0))
	{
		return;
	}
	iVar0 = func_650(1);
	if (uParam0->f_84 < 0)
	{
		uParam0->f_84 = iVar0;
	}
	if (iVar0 > uParam0->f_84)
	{
		iVar1 = (iVar0 - uParam0->f_84);
		if (func_651(0))
		{
		}
		else
		{
			func_653(func_652(-985869509, 1776733566), iVar1);
		}
		uParam0->f_84 = iVar0;
	}
}

void func_274(var uParam0)
{
	if (uParam0->f_50 == 2)
	{
		iVar0 = func_654(uParam0);
		if (does_entity_exist(iVar0))
		{
			func_655(uParam0);
			return;
		}
	}
	switch (uParam0->f_50)
	{
		case 0:
			iVar1 = func_656(uParam0);
			iVar2 = get_entity_model(iVar1);
			uParam0->f_91 = _0x6f3068258a499e52(iVar2, uParam0->f_64, 7);
			if (uParam0->f_91 != 0)
			{
				uParam0->f_50 = 1;
			}
			break;
		case 1:
			if (_0x1ff441d7954f8709(uParam0->f_91))
			{
				func_655(uParam0);
				if (func_313(uParam0, 33554432))
				{
					uParam0->f_50 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_275()
{
	if (func_60(131072))
	{
		return false;
	}
	if (func_44(2))
	{
		return false;
	}
	return false;
}

bool func_276(var uParam0, float fParam1, bool bParam2, char* sParam3)
{
	if (!func_621(uParam0))
	{
		func_317(uParam0);
	}
	else if (bParam2)
	{
		if (func_657(uParam0, fParam1))
		{
			return true;
		}
	}
	else if (func_620(uParam0, fParam1))
	{
		return true;
	}
	return false;
}

void func_277(int iParam0, char* sParam1, bool bParam2, char[4] cParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	set_anim_scene_bool(iParam0, sParam1, bParam2, false);
}

void func_278(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return;
	}
	_set_anim_scene_playback_list_bool(iParam0, sParam1, bParam3);
}

bool func_279(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (get_anim_scene_bool(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

bool func_280(int iParam0, char* sParam1, float fParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_get_anim_scene_progress(iParam0) > fParam2)
	{
		return true;
	}
	return false;
}

int func_281(char[4] cParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!is_entity_dead(iParam2) && (func_519(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			task_look_at_entity(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_519(iParam2, iParam3, 1, 1) < 25f)
			{
				task_look_at_entity(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_317(&uLocal_0);
		if (_0xd89504d9d7d5057d(sParam1))
		{
			if (func_658(sParam1))
			{
				return 1;
			}
		}
		else if (func_659(cParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_282(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	if (!is_entity_dead(iParam3))
	{
		set_entity_visible(iParam3, false);
	}
	_give_weapon_to_ped_2(iParam0, iParam4, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	set_current_ped_weapon(iParam0, iParam4, true, 0, false, false);
	task_aim_gun_at_entity(iParam0, uParam2, -1, 1, 1);
	func_660(iParam0, &iParam1, 831283580, 580546400, 0, 0);
}

void func_283()
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (Local_62.f_1292.f_1)
	{
		return;
	}
	if (!_does_volume_exist(Local_62.f_1292))
	{
		Local_62.f_1292.f_1 = 1;
		return;
	}
	if (is_string_null_or_empty(func_661()))
	{
		Local_62.f_1292.f_1 = 1;
		return;
	}
	if (!func_74(Global_35, Local_62.f_1292))
	{
		return;
	}
	func_281(&(Local_62.f_1518), func_661(), Local_62.f_170, Global_35, 0, 0, 1, 1);
	Local_62.f_1292.f_1 = 1;
}

bool func_284()
{
	if (!func_145(Local_62.f_170, 0, 1))
	{
		return true;
	}
	if (is_shocking_event_in_sphere(220865698, Global_36, 4f))
	{
		set_blocking_of_non_temporary_events(Local_62.f_170, false);
		return true;
	}
	return false;
}

void func_285()
{
	switch (iLocal_29)
	{
		case 1:
			break;
		case 0:
			func_128(Local_62.f_1512[1], "SPI_SDNGUN_BACK_DOOR_KNOCK");
			func_128(Local_62.f_1512[0], "SPI_SDNGUN_BACK_DOOR_PEEK");
			break;
		case 2:
			set_scenario_type_enabled("WORLD_PLAYER_STR_GEN_BSMT_PEEK", false);
			break;
		case 3:
			break;
	}
}

bool func_286(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_145(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = func_160();
	switch (iVar0)
	{
		case 92:
		case 120:
			if (is_ped_fleeing(iParam0) || func_662(iParam0, 518218985))
			{
				return true;
			}
			_0x935cf6e42baf7f4d(iParam0);
			_task_smart_flee_style_ped(iParam0, Global_35, 4, 176128, -1082130432, -1, 0);
			return true;
		default:
			break;
	}
	if (_0x0eaf918f751f27ba(iParam0))
	{
		return true;
	}
	if (bParam2)
	{
		set_blocking_of_non_temporary_events(iParam0, true);
	}
	if (bParam1)
	{
		func_421(1);
		if (bParam4)
		{
		}
		set_ped_config_flag(iParam0, 146, false);
		set_ped_config_flag(iParam0, 148, false);
		set_ped_config_flag(iParam0, 190, true);
		set_ped_config_flag(iParam0, 113, true);
		iVar1 = _0xe9eb79cbf9c0f58a(get_player_index());
		func_663(iParam0, &vVar2);
		if (bParam5)
		{
			vVar2.f_2 = -493957506;
		}
		else if (bParam3)
		{
			vVar2.f_2 = 1343354387;
		}
		else
		{
			vVar2.f_2 = -1547772340;
		}
		_0xd7494ded50c6ef52(player_id(), vVar2.z, iVar1 + 1);
		_0x018f30d762e62df8(iParam0, &vVar2);
		_0x935cf6e42baf7f4d(iParam0);
		set_ped_keep_task(iParam0, true);
		return true;
	}
	return false;
}

void func_287(bool bParam0)
{
	func_664(Local_62.f_170, bParam0);
}

void func_288(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
	}
	if (!func_166(iParam1))
	{
		return;
	}
	if (!func_665(iParam1, 0))
	{
		return;
	}
	if (!func_666(iParam1))
	{
		return;
	}
	func_667(iParam1, 0, 1, 0, 0);
}

bool func_289(var uParam0, bool bParam1)
{
	if (func_145(Global_35, 0, 1))
	{
		if (func_584(Global_35, -282082536) || func_584(Global_35, 325463335))
		{
			iVar0 = func_654(uParam0);
			func_668(uParam0, 0);
			if (does_entity_exist(&(uParam0->f_2[0])))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					delete_object(uParam0->f_2[0]);
				}
			}
			if (does_entity_exist(&(uParam0->f_2[1])))
			{
				if (has_anim_event_fired(Global_35, -1898385492))
				{
					delete_object(uParam0->f_2[1]);
				}
			}
			if (bParam1)
			{
				if (is_player_control_on(get_player_index()))
				{
					set_player_control(get_player_index(), false, 384, false);
				}
			}
			if (does_entity_exist(iVar0))
			{
				if (!_0x083d497d57b7400f(iVar0))
				{
					freeze_entity_position(iVar0, true);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_290()
{
	func_311(&Local_62);
	func_334();
	if (func_669())
	{
		if (func_313(&(Local_62.f_1), 256) || func_313(&(Local_62.f_1), 65536))
		{
			if (!_0x856ce8fde2416602(Local_62.f_170))
			{
				return true;
			}
		}
		else
		{
			func_154(Local_62, 1);
			func_262(1);
			func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
			func_91(268435456);
			func_285();
			func_256(8);
			return false;
		}
	}
	if (func_275() && func_670())
	{
		return true;
	}
	return false;
}

void func_291(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_292(int iParam0)
{
	return !func_153(iParam0, 1);
}

void func_293(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if ((is_string_null_or_empty(sParam1) || is_string_null_or_empty(sParam2)) || is_string_null_or_empty(sParam3))
	{
		sVar0 = func_671();
		sVar1 = func_672();
		sVar2 = func_673();
	}
	else
	{
		sVar0 = sParam1;
		sVar1 = sParam2;
		sVar2 = sParam3;
	}
	if (!uParam0->f_87 || bParam4)
	{
		if (uParam0->f_75 < 0f)
		{
			uParam0->f_75 = func_674();
		}
		func_323(uParam0, 4194304);
	}
	func_668(uParam0, 1);
	func_675(*uParam0, sVar0, sVar1, sVar2, 1);
	func_323(uParam0, 16384);
}

void func_294(int iParam0)
{
	iLocal_38 = iParam0;
}

bool func_295()
{
	switch (iLocal_29)
	{
		case 1:
			if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				return false;
			}
			if (is_entity_dead(&(Local_62.f_390[0])))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_296(int iParam0, int iParam1)
{
	func_676(iParam0);
	if (iParam1 == 29 && func_43(17))
	{
		func_678(func_677(17), 1);
	}
}

void func_297(int iParam0, var uParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	uParam2->f_3 = uParam1;
	uParam2->f_7 = iParam3;
	*uParam2 = { vParam4 };
	uParam2->f_13 = 1;
	uParam2->f_14 = 1;
	uParam2->f_15 = 2;
	uParam2->f_8 = 4;
	uParam2->f_19 = 3;
	uParam2->f_21 = 3;
	if (bParam7)
	{
		uParam2->f_17 = 0;
		uParam2->f_18 = 2;
	}
	else
	{
		uParam2->f_17 = 0;
		uParam2->f_18 = 0;
	}
	if (bParam8)
	{
		uParam2->f_22 = 4;
		uParam2->f_20 = 4;
	}
	_0x66f9eb44342bb4c5(iParam0, uParam2);
}

void func_298(bool bParam0)
{
	func_421(bParam0);
}

void func_299(bool bParam0)
{
	func_679(Local_62.f_170, bParam0);
}

void func_300(var uParam0, int iParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	_0xc163dac52ac975d3(*uParam0, 32);
}

void func_301(int iParam0)
{
	if (!func_44(2))
	{
		func_29(131072);
	}
	iVar0 = func_238(Local_62);
	if (func_680(iVar0, Global_35, 1, iParam0))
	{
	}
}

void func_302(int iParam0)
{
	func_291(1, iParam0, 0);
}

void func_303()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shopkeeper_Group";
			add_entity_to_audio_mix_group(Local_62.f_170, sVar0, 0f);
			break;
		default:
			break;
	}
}

void func_304()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Hold_Up_Scene";
			if (!is_audio_scene_active(sVar0))
			{
				start_audio_scene(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_305()
{
	switch (iLocal_29)
	{
		case 1:
			func_19("SR_RHODES_GUN_START", 32);
			break;
		case 0:
			func_19("SR_ST_DENIS_GUN_START", 32);
			break;
		case 2:
			func_19("SR_STRAWBERRY_GEN_START", 32);
			break;
		case 3:
			func_19("SR_VALENTINE_DOCTOR_START", 32);
			break;
	}
}

void func_306()
{
	switch (iLocal_29)
	{
		case 3:
			func_681();
			break;
	}
}

void func_307(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_308(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_682(uParam2, 1, iVar0);
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
			if (func_683(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_684(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_685(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_686(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_687(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_222(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_684(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_688(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_689(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_690(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_691(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_691(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_684(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_692(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_693(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_694(uParam2, 4000))
				{
					if ((func_695(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_696(uParam2, iParam0)) && func_697(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_695(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_696(uParam2, iParam0)) && func_697(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_698(iParam0, Global_1935630->f_41))
							{
								func_699();
								*iParam3 = 2;
								func_684(iParam0, uParam2, *iParam3);
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
						if (func_698(iParam0, Global_1935630->f_41))
						{
							func_699();
							*iParam3 = 2;
							func_684(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_700(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_701() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_699();
						*iParam3 = 2;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_702())
					{
						if (func_698(iParam0, Global_1935630->f_42))
						{
							func_699();
							*iParam3 = 2;
							func_684(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_703(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_684(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_704(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_705(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_706(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_707(uParam2, 4000))
				{
					if (func_708(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_684(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_709(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					func_684(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_710(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_684(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_309(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_271(uParam0->f_7[0], &(uParam0->f_26));
	func_711(*uParam0);
	if (func_712(uParam0))
	{
		func_713(*uParam0, Global_36, 3, 0, 3);
		func_714(uParam0, &iParam2, iParam3, 379542007);
	}
	else
	{
		func_713(*uParam0, Global_36, 5, 0, 3);
		func_177(4194304);
		set_ped_config_flag(*uParam0, 44, false);
		func_286(*uParam0, 1, 0, 0, 1, 0);
		if (!_0x0eaf918f751f27ba(*uParam0))
		{
			_0x935cf6e42baf7f4d(*uParam0);
			_task_smart_flee_style_ped(*uParam0, Global_35, 3, 176128, -1082130432, -1, 0);
		}
	}
}

bool func_310()
{
	switch (iLocal_29)
	{
		case 1:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, func_715(Local_62), Local_62.f_1021[1]))
			{
				return false;
			}
			break;
		case 0:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, func_715(Local_62), Local_62.f_1479[0]))
			{
				return false;
			}
			break;
		case 2:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, func_715(Local_62), Local_62.f_1479[0]))
			{
				return false;
			}
			break;
		case 3:
			if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 29f, Local_62, func_715(Local_62), Local_62.f_1479[0]))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_311(int iParam0)
{
	bVar0 = false;
	bVar1 = false;
	if (func_60(8388608))
	{
		bVar0 = true;
		bVar1 = true;
	}
	iParam0->f_170.f_119 = func_717(&(iParam0->f_1), iParam0->f_1284, func_60(8388608), bVar0, 1069547520, bVar1, 40f);
}

void func_312()
{
	if (!func_82())
	{
		return;
	}
	if (func_65())
	{
		return;
	}
	func_344();
	func_718();
	func_719();
}

bool func_313(var uParam0, int iParam1)
{
	return (uParam0->f_52 && iParam1) != 0;
}

void func_314(var uParam0)
{
	if (uParam0->f_53.f_6)
	{
		return;
	}
	if (func_621(&(uParam0->f_53.f_3)))
	{
		if (func_222(player_id(), 1, 1, 0))
		{
			func_307(&(uParam0->f_53.f_3));
		}
	}
	if (func_620(&(uParam0->f_53.f_3), uParam0->f_53.f_2) && func_720())
	{
		func_721(uParam0, uParam0->f_53, 0, uParam0->f_53.f_1, 1, 0);
		uParam0->f_53.f_6 = 1;
	}
}

void func_315(var uParam0)
{
	if (func_313(uParam0, 1048576))
	{
		return;
	}
	if (func_313(uParam0, 4096) || func_313(uParam0, 16))
	{
		if (Global_1935630->f_13)
		{
			func_323(uParam0, 1048576);
		}
	}
}

bool func_316()
{
	if (!func_60(8388608))
	{
		return false;
	}
	switch (iLocal_44)
	{
		case 0:
			if (!func_313(&(Local_62.f_1), 16384))
			{
				return false;
			}
			func_722(2);
			break;
		case 1:
			if (!func_60(524288))
			{
				return false;
			}
			func_722(2);
			break;
		case 2:
			if (!func_723())
			{
				func_397(&(Local_62.f_1), 32768);
				func_722(1);
				return false;
			}
			if (func_724())
			{
				func_397(&(Local_62.f_1), 32768);
				func_39(131072);
				func_722(3);
				return false;
			}
			if (!func_725())
			{
				return false;
			}
			func_722(3);
			func_39(65536);
			return true;
		case 3:
			break;
	}
	return false;
}

void func_317(var uParam0)
{
	func_726(uParam0, 0f);
}

void func_318()
{
	switch (iLocal_29)
	{
		case 1:
			func_727();
			break;
		case 0:
			func_728();
			break;
		case 2:
			func_729();
			break;
		case 3:
			func_730();
			break;
	}
}

void func_319(int* iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	set_ped_config_flag(*iParam0, iParam1, bParam2);
}

void func_320(int iParam0)
{
	iLocal_41 = iParam0;
}

void func_321(int iParam0, bool bParam1)
{
	if (!func_731(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	Global_32074.f_4[iParam0]->f_3 = bParam1;
}

bool func_322(var uParam0)
{
	if (((!is_ped_active_in_scenario(*uParam0, 1) && !_0x0c3cb2e600c8977d(*uParam0, 1)) && uParam0->f_75 > 0f) && (func_674() - uParam0->f_75) >= 1f)
	{
		return true;
	}
	return false;
}

void func_323(int* iParam0, int iParam1)
{
	iParam0->f_52 = (iParam0->f_52 || iParam1);
}

bool func_324(var uParam0)
{
	iVar0 = func_238(uParam0->f_51);
	if (iVar0 == 6 || uParam0->f_51 == 82)
	{
		if (func_160() == 105 && func_732())
		{
			return false;
		}
		else if (!uParam0->f_87)
		{
			uParam0->f_87 = 1;
		}
	}
	if (uParam0->f_87)
	{
		if ((func_353(0f, 1, *uParam0, 1) && !is_ped_active_in_scenario(*uParam0, 1)) && is_ped_facing_ped(*uParam0, Global_35, 45f))
		{
			return true;
		}
	}
	return false;
}

void func_325()
{
	if (iLocal_29 == 1)
	{
		func_61(&(Local_62.f_390[0]->f_1));
	}
}

bool func_326()
{
	if (func_145(Local_62.f_170, 0, 1))
	{
		if (get_script_task_status(Local_62.f_170, 518218985, true) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_327()
{
	if (func_733(Global_35))
	{
		return true;
	}
	return false;
}

void func_328()
{
	clear_ped_tasks(Local_62.f_170, 1, 0);
	task_smart_flee_ped(Local_62.f_170, Global_35, 1000f, -1, 0, 3f, 0);
}

void func_329(int iParam0)
{
	if (!func_145(Local_62.f_170, 0, 1))
	{
		return;
	}
	set_ped_relationship_group_hash(Local_62.f_170, 707888648);
	_0xfc3db99c8144cd81(Local_62.f_170, Local_62.f_1284, 0, 0, 0);
	task_combat_ped(Local_62.f_170, iParam0, 0, 0);
}

void func_330(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_734(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_331()
{
	func_735(Local_62.f_1616[0]);
}

void func_332()
{
	if (func_736(&(Local_62.f_1), 3f))
	{
		sVar0 = "PLAYER_HOLDUP_ROB_FAR";
	}
	else
	{
		sVar0 = "PLAYER_HOLDUP_ROB";
	}
	func_245(Global_35, Local_62.f_170, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_333()
{
	if (func_44(1024))
	{
		func_737();
		return;
	}
	if (!func_353(-2f, 1, 0, 0))
	{
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	if (iLocal_29 != 0 && iLocal_29 != 1)
	{
		func_245(Local_62.f_170, Global_35, "HOLDUP_DONT_KILL_ME", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_91(1024);
}

void func_334()
{
	if (!func_313(&(Local_62.f_1), 256))
	{
		if (func_738(&(Local_62.f_1), Local_62.f_170.f_119))
		{
			func_91(64);
			if (func_60(8388608))
			{
				func_739(Local_62.f_1.f_26[1], 0, 0);
				func_397(&(Local_62.f_1), 32768);
			}
			func_323(&(Local_62.f_1), 256);
		}
	}
	if (!func_60(8388608))
	{
		return;
	}
	if (func_313(&(Local_62.f_1), 65536))
	{
		return;
	}
	if (!func_313(&(Local_62.f_1), 32768))
	{
		return;
	}
	if (!func_740(&(Local_62.f_1), Local_62.f_170.f_119))
	{
		return;
	}
	func_397(&(Local_62.f_1), 32768);
	func_323(&(Local_62.f_1), 65536);
	func_741(&(Local_62.f_1), 0, 1);
}

bool func_335(int iParam0)
{
	return (Local_62.f_1627 && iParam0) != 0;
}

void func_336(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 8);
	}
	else
	{
		func_571(&(uParam0->f_1), 8);
	}
}

void func_337(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6)
{
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam2;
	*uParam0 = { vParam3 };
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = iParam6;
	uParam0->f_8 = 4;
	uParam0->f_4 = 21030;
}

void func_338()
{
	if (func_44(256))
	{
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 4f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	func_245(Local_62.f_170, Global_35, "HOLDUP_REGISTER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(256);
}

bool func_339(var uParam0)
{
	if (!func_276(&(Local_62.f_1450), 3f, 1, "shopRob.timerGeneric"))
	{
		return false;
	}
	func_307(&(Local_62.f_1450));
	func_742(uParam0);
	func_743(5);
	return true;
}

bool func_340(var uParam0)
{
	if (!func_145(*uParam0, 0, 1))
	{
		return false;
	}
	switch (uParam0->f_9)
	{
		case 5:
			if (!is_entity_at_coord(*uParam0, Local_62.f_1.f_60, 0.3f, 0.3f, 2f, false, true, 0))
			{
				if (!func_548(*uParam0, 1435919172, 1))
				{
					func_743(6);
					return false;
				}
				return false;
			}
			func_744();
			return true;
		case 6:
			if (is_ped_ragdoll(*uParam0))
			{
				return false;
			}
			if (!func_276(&(Local_62.f_1450), 1f, 0, "shopRob.timerGeneric"))
			{
				return false;
			}
			func_742(uParam0);
			func_743(7);
			break;
		case 7:
			if (!func_548(*uParam0, 1435919172, 1))
			{
				func_743(6);
				return false;
			}
			func_743(5);
			break;
	}
	return false;
}

bool func_341(var uParam0)
{
	if (func_745(uParam0))
	{
		func_262(0);
		func_746(uParam0);
		return true;
	}
	return false;
}

bool func_342(var uParam0)
{
	sVar0 = func_747(uParam0);
	if (!_does_anim_scene_exist(&(uParam0->f_82[0])))
	{
		return false;
	}
	_0xdf7b5144e25cd3fe(&(uParam0->f_82[0]), sVar0);
	if (_0x23e33cb9f4a3f547(&(uParam0->f_82[0]), sVar0))
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0, bool bParam1)
{
	func_601(1);
	if (func_748(*uParam0, -162746208, "bSwitchToExit", 1, 1067030938, 1))
	{
		if (!func_313(uParam0, 4))
		{
			if (bParam1)
			{
				func_351(uParam0, &uVar0, 1114636288, -1);
			}
			func_323(uParam0, 4);
		}
		if (func_313(uParam0, 16384))
		{
			func_397(uParam0, 16384);
		}
		return true;
	}
	return false;
}

void func_344()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Hold_Up_Scene";
			if (is_audio_scene_active(sVar0))
			{
				stop_audio_scene(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_345()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Take_Money_Scene";
			if (!is_audio_scene_active(sVar0))
			{
				start_audio_scene(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_346(var uParam0)
{
	func_749(uParam0);
	sVar0 = func_747(uParam0);
	_set_anim_scene_playback_list_bool(&(uParam0->f_82[0]), sVar0, true);
}

void func_347()
{
	if (func_44(512))
	{
		return;
	}
	if (func_60(262144))
	{
		func_307(&(Local_62.f_170.f_214));
		func_91(512);
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 10f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	if (!func_353(-2f, 1, 0, 0))
	{
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	func_245(Local_62.f_170, Global_35, "HOLDUP_WAITING_ROBBERY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(512);
}

void func_348()
{
	if (func_44(2048))
	{
		return;
	}
	if (!func_60(262144))
	{
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 15f, 0, "shoprob.clerkData.pedData.pedIndex"))
	{
		return;
	}
	if (!func_353(-2f, 1, 0, 0))
	{
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	func_245(Local_62.f_170, Global_35, "HOLDUP_DONE_GO_AWAY", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_91(2048);
}

float func_349()
{
	switch (iLocal_29)
	{
		case 1:
			return 0.6121f;
		case 0:
			return 0.0733f;
		case 2:
			return 0.6264f;
		case 3:
			return 0.6757f;
		default:
			break;
	}
	return 0.95f;
}

void func_350()
{
	if (!func_60(8388608))
	{
		return;
	}
	if (func_60(2048))
	{
		return;
	}
	func_29(524288);
	func_561(64);
	func_739(Local_62.f_1.f_26[1], 1, 0);
	func_323(&(Local_62.f_1), 32768);
	func_29(2048);
}

int func_351(var uParam0, var uParam1, float fParam2, int iParam3)
{
	if (!func_145(*uParam0, 0, 1) || !func_145(Global_35, 0, 1))
	{
		return 1;
	}
	if (!*uParam1)
	{
		task_turn_ped_to_face_entity(*uParam0, Global_35, iParam3, -1082130432, -1082130432, -1082130432);
		*uParam1 = 1;
	}
	if (is_ped_facing_ped(*uParam0, Global_35, fParam2))
	{
		return 1;
	}
	return 0;
}

bool func_352(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, int iParam29)
{
	if (func_313(uParam0, 4) && func_308(*uParam0, 0, &uParam1, &iParam29, 0, 0))
	{
		if (func_750(iParam29))
		{
			return true;
		}
	}
	return false;
}

bool func_353(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_751(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_752(fParam0))
	{
		return false;
	}
	return true;
}

void func_354()
{
	iVar1 = func_715(Local_62);
	if (func_313(&(Local_62.f_1), 32))
	{
		fVar0 = 0f;
	}
	else if (func_313(&(Local_62.f_1), 16))
	{
		fVar0 = 5f;
	}
	else
	{
		fVar0 = 23f;
	}
	switch (iLocal_29)
	{
		case 1:
			if (!func_435(44))
			{
				func_753(Local_62.f_1021[1], iVar1, fVar0);
			}
			break;
		case 0:
			if (!func_221(-2147483648))
			{
				func_753(Local_62.f_1479[0], iVar1, fVar0);
			}
			break;
		case 2:
			func_753(Local_62.f_1479[0], iVar1, fVar0);
			break;
		case 3:
			func_753(Local_62.f_1479[0], iVar1, fVar0);
			break;
	}
}

void func_355()
{
	if (!func_621(&(Local_62.f_1468)))
	{
		return;
	}
	if (!func_620(&(Local_62.f_1468), 0.75f))
	{
		return;
	}
	stop_ped_speaking(Local_62.f_170, true);
	func_754(Local_62.f_170, 0);
	Local_62.f_1632 = 1;
	func_307(&(Local_62.f_1468));
}

void func_356()
{
	if (func_35(Local_62, 262144))
	{
		return;
	}
	func_653(func_652(978382515, -605765767), 1);
	func_34(Local_62, 262144);
	func_539(0, 0);
}

void func_357()
{
	if (!func_755())
	{
		return;
	}
	func_756(1);
}

void func_358(bool bParam0)
{
	iVar0 = func_45(Local_62.f_170.f_8);
	if (!_0x800df3fc913355f3(iVar0))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_60(-2147483648))
		{
			_0x406808610220405b(iVar0);
			func_29(-2147483648);
		}
	}
	else if (func_60(-2147483648))
	{
		_0xa2b18ff8d39f6d87(iVar0);
		func_31(-2147483648);
	}
}

void func_359()
{
	switch (iLocal_29)
	{
		case 1:
			func_757();
			break;
		case 2:
			func_758();
			break;
	}
}

void func_360()
{
	switch (iLocal_29)
	{
		case 1:
			func_759(26, 2048);
			break;
		case 2:
			func_759(18, 2048);
			break;
		default:
			break;
	}
}

void func_361()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Occlusion_Damping";
			add_entity_to_audio_mix_group(Local_62.f_170, sVar0, 0f);
			add_entity_to_audio_mix_group(&(Local_62.f_390[0]), sVar0, 0f);
			break;
		default:
			break;
	}
}

void func_362(int iParam0)
{
	iLocal_42 = iParam0;
}

bool func_363()
{
	switch (iLocal_29)
	{
		case 0:
			if (func_760(&(Local_62.f_170), Local_62.f_390[0]))
			{
				return true;
			}
			break;
		case 1:
			if (func_761(&(Local_62.f_170)))
			{
				return true;
			}
			break;
		case 2:
			if (func_762(&(Local_62.f_170)))
			{
				return true;
			}
			break;
		case 3:
			if (func_763(&(Local_62.f_170), Local_62.f_390[0], Local_62.f_390[2]))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_364()
{
	switch (iLocal_29)
	{
		case 1:
			func_764();
			break;
	}
}

void func_365(var uParam0)
{
	func_765();
	switch (iLocal_29)
	{
		case 0:
			func_766(&(Local_62.f_170), Local_62.f_390[0], Local_62.f_390[1], Local_62.f_390[2], Local_62.f_390[3], Local_62.f_390[4], uParam0);
			break;
		case 1:
			func_767(&(Local_62.f_170), Local_62.f_390[0]);
			break;
		case 2:
			func_768(&(Local_62.f_170));
			break;
		case 3:
			func_769(Local_62.f_390[0], Local_62.f_390[1], Local_62.f_390[2], Local_62.f_390[3]);
			func_770();
			break;
	}
}

bool func_366()
{
	return func_771(Global_35);
}

bool func_367()
{
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (func_308(&(Local_62.f_390[iVar0]), 0, &(Local_62.f_124), &(Local_62.f_152), 0, 0))
		{
			func_772(&(Local_62.f_390[iVar0]->f_9), 8192);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_368(bool bParam0)
{
	if (bParam0)
	{
		set_create_random_cops(true);
		block_dispatch_service_resource_creation(15, false);
		block_dispatch_service_resource_creation(6, false);
	}
	else
	{
		func_773(Global_36, 300f, 0);
		set_create_random_cops(false);
		block_dispatch_service_resource_creation(15, true);
		block_dispatch_service_resource_creation(6, true);
		_0xe0e65e0d261f7507(func_45(3));
		func_774(3);
		func_775(3, 0);
	}
}

bool func_369(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 7:
		case 11:
			return true;
		case 3:
		case 6:
			return false;
		default:
			break;
	}
	return false;
}

void func_370(var uParam0)
{
	if (func_776())
	{
		sVar0 = "SHOP_CLERK_REOPEN_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_REOPEN";
	}
	func_245(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_371(int iParam0)
{
	iLocal_43 = iParam0;
}

void func_372(var uParam0)
{
	if (func_777())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_SICK";
	}
	else if (func_776())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED_FAME";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED";
	}
	func_245(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_373(var uParam0)
{
	func_245(*uParam0, Global_35, "SHOP_CLERK_STAYCLOSED1", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

bool func_374(int iParam0, bool bParam1)
{
	if (func_778(Global_35, 0) == -1569615261)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		disable_control_action(0, -1292666904, false);
	}
	else
	{
		enable_control_action(0, -1292666904, true);
	}
	iVar0 = get_player_index();
	iVar1 = func_779(iParam0);
	if (func_622(iParam0) && !_0x3ee1f7a8c32f24e1(iVar0, &iVar1, false, false))
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, bParam1);
		}
		set_blocking_of_non_temporary_events(iParam0, true);
		return true;
	}
	if (_is_ped_hogtied(iParam0) || _is_ped_lassoed(iParam0))
	{
		func_177(65536);
		return true;
	}
	return false;
}

void func_375(var uParam0)
{
	if (func_777())
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2_SICK";
	}
	else
	{
		sVar0 = "SHOP_CLERK_STAYCLOSED2";
	}
	func_245(*uParam0, Global_35, sVar0, 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
}

void func_376(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	remove_all_ped_weapons(*uParam0, true, true);
	func_780(*uParam0, iParam3, -1, 0, 0, 1056964608, 1065353216, 0);
	func_781(uParam0, iParam1, iParam2);
}

bool func_377(var uParam0)
{
	task_turn_ped_to_face_entity(*uParam0, Global_35, 0, -1082130432, -1082130432, -1082130432);
	func_156(uParam0->f_51, 2048);
	func_782(uParam0, 1);
	return true;
}

void func_378()
{
	_text_database_request("SHRB");
	switch (iLocal_29)
	{
		case 0:
			_text_database_request("SRNGAUD");
			break;
		case 1:
			_text_database_request("SRRGAUD");
			break;
		case 2:
			_text_database_request("SRSGAUD");
			break;
		case 3:
			_text_database_request("SRVDAUD");
			break;
	}
}

void func_379(int iParam0)
{
	if (iParam0 != 0)
	{
		request_model(iParam0, false);
	}
}

void func_380(int iParam0)
{
	iLocal_52 = iParam0;
}

bool func_381(int iParam0)
{
	if (!has_model_loaded(iParam0))
	{
		return false;
	}
	return true;
}

bool func_382()
{
	if (!_text_database_has_loaded("SHRB"))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 0:
			if (!_text_database_has_loaded("SRNGAUD"))
			{
				return false;
			}
			break;
		case 1:
			if (!_text_database_has_loaded("SRRGAUD"))
			{
				return false;
			}
			break;
		case 2:
			if (!_text_database_has_loaded("SRSGAUD"))
			{
				return false;
			}
			break;
		case 3:
			if (!_text_database_has_loaded("SRVDAUD"))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_383(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7)
{
	if (!is_entity_dead(*uParam0))
	{
		if (bParam7)
		{
			if (!does_entity_have_physics(*uParam0))
			{
				return false;
			}
		}
		return true;
	}
	if (*uParam2 == 0)
	{
		*uParam2 = _0x6f3068258a499e52(iParam1, vParam3, iParam6 | 2 | 1);
		return false;
	}
	if (!_0x1ff441d7954f8709(*uParam2))
	{
		return false;
	}
	iVar0 = _0x4735e2a4bb83d9da(*uParam2);
	*uParam0 = get_object_index_from_entity_index(iVar0);
	return false;
}

void func_384(int iParam0)
{
	iLocal_26 = iParam0;
}

void func_385()
{
	func_587(&(Local_62.f_1284), -1791.912f, -385.9921f, 159.101f, 0f, 0f, -125.1316f, 6.2f, 8.788111f, 6.267331f, "volShop");
	Local_62.f_1.f_90 = Local_62.f_1284;
	_0x18262cafebb5fbe1(Local_62.f_1284, 10208, 540672, 0, -1, -1, 2);
	_0xb56d41a694e42e86(Local_62.f_1284, 10208, 540672, 0, -1, -1, 2);
}

void func_386()
{
	Local_62.f_1247[1] = _create_volume_aggregate_with_custom_name("VOL_STRGEN_HEAD_TURN_WINDOW_PEEK");
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), -1786.382f, -382.6097f, 158.3665f, 0f, 0f, -36.00836f, 6.435352f, 2.245356f, 2.63436f);
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), -1787.392f, -383.9998f, 157.6915f, 0f, 0f, -36.00836f, 3.441334f, 2.245356f, 2.63436f);
}

void func_387(var uParam0)
{
	if (func_65())
	{
		return;
	}
	switch (iLocal_26)
	{
		case 18:
			if (func_60(16))
			{
				if (!is_entity_dead(&(Local_62.f_1226[0])))
				{
					set_scenario_type_enabled(func_783(), true);
					_set_scenario_group_enabled_hash(1840199757, true);
					func_384(19);
				}
			}
			break;
		case 19:
			if (func_584(Global_35, get_hash_key(func_783())))
			{
				func_433(0);
				func_608();
				disable_control_action(0, -1404316431, false);
				_disable_first_person_cam_this_frame_2();
				_hide_ped_weapons(Global_35, 2, false);
				if (func_784(Global_35, 1, 0, 1) == -160924582)
				{
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				}
				func_384(21);
			}
			else if (func_74(Global_35, &(Local_62.f_1247[1])))
			{
				if (!_does_scenario_point_exist(Local_62.f_1388))
				{
					func_785();
				}
			}
			else if (_does_scenario_point_exist(Local_62.f_1388))
			{
				_delete_scenario_point(Local_62.f_1388);
			}
			break;
		case 21:
			func_786();
			func_603(1);
			disable_control_action(0, -1404316431, false);
			_disable_first_person_cam_this_frame_2();
			set_ped_reset_flag(Global_35, 175, true);
			if (!func_221(4))
			{
				if (func_579(Global_35, func_787()))
				{
					func_224(4);
				}
			}
			if (func_579(Global_35, "WipeIdleMiddle"))
			{
				func_788(uParam0);
				func_384(36);
				if (_0xfc464598f6ee97b0())
				{
					_0x31108bb5715d035f();
				}
				iLocal_1773 = -186143124;
				func_786();
			}
			else if (func_579(Global_35, "WipeExitStart"))
			{
				func_384(36);
				iLocal_1773 = -186143124;
				func_786();
			}
			else if (func_579(Global_35, "WipeIdleStart"))
			{
				iLocal_1773 = -186143124;
				func_786();
			}
			break;
		case 36:
			func_786();
			func_603(1);
			disable_control_action(0, -1404316431, false);
			_disable_first_person_cam_this_frame_2();
			set_ped_reset_flag(Global_35, 175, true);
			if (func_579(Global_35, "WipeExitStart"))
			{
				func_384(37);
				iLocal_1773 = -186143124;
				func_786();
			}
			break;
		case 37:
			func_786();
			func_433(1);
			func_432(1, 0, 1);
			func_788(uParam0);
			func_30(2, 8);
			disable_control_action(0, -1404316431, false);
			_disable_first_person_cam_this_frame_2();
			func_789(&(Local_62.f_1368), -1791.912f, -385.9921f, 159.101f, 0f, 0f, -125.1316f, 6.2f, 8.788111f, 6.267331f, 1, 0, 524288);
			if (_does_volume_exist(Local_62.f_1368))
			{
				func_790(Local_62.f_1368, 0);
			}
			if (!_does_volume_exist(Local_62.f_1376))
			{
				Local_62.f_1376 = _0x0eb78c2b156635b1(-1612834106, -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2.5f, 5f);
			}
			iLocal_1773 = -186143124;
			func_786();
			func_791();
			func_384(50);
			break;
		case 50:
			func_786();
			if (!func_584(Global_35, get_hash_key(func_783())))
			{
				set_scenario_type_enabled(func_783(), false);
				_set_scenario_group_enabled_hash(1840199757, false);
				if (_does_scenario_point_exist(&(Local_62.f_1512[0])))
				{
					_delete_scenario_point(&(Local_62.f_1512[0]));
				}
			}
			func_384(53);
			break;
		case 53:
			break;
	}
}

bool func_388()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_39(128);
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

void func_389()
{
	func_587(Local_62.f_1247[1], -287.972f, 820.2338f, 119.601f, 0f, 0f, 9.583434f, 25.76275f, 19.94318f, 11.1f, "VOL_VALDOC_LOAD_COUNT_CASH_SCENE");
}

bool func_390()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

void func_391()
{
	if (func_82())
	{
		return;
	}
	if (!func_62(128))
	{
		return;
	}
	switch (iLocal_36)
	{
		case 0:
			if (!func_74(Global_35, &(Local_62.f_1247[1])))
			{
				return;
			}
			func_379(Local_62.f_390[0]->f_6);
			func_794(1, &iLocal_36);
			return;
		case 1:
			func_379(-372794047);
			func_379(-208228129);
			func_794(2, &iLocal_36);
			return;
		case 2:
			func_379(-615159064);
			func_379(484307836);
			func_794(3, &iLocal_36);
			return;
		case 3:
			func_379(-1281909308);
			func_379(-1698780291);
			func_794(4, &iLocal_36);
			return;
		case 4:
			func_379(-62869733);
			func_379(-1473388640);
			func_379(-1025740342);
			func_794(5, &iLocal_36);
			return;
		case 5:
			func_796(1, func_795(1), 0, "PB_COUNT");
			func_794(6, &iLocal_36);
			return;
		case 6:
			if (func_381(Local_62.f_390[0]->f_6))
			{
				if (func_797(0))
				{
					func_798(1057570823, -1658670882, &(Local_62.f_390[0]->f_8));
				}
				else
				{
					func_798(347599949, 1755543207, &(Local_62.f_390[0]->f_8));
				}
				func_794(7, &iLocal_36);
			}
			return;
		case 7:
			if (func_381(-372794047) && func_381(-208228129))
			{
				func_794(8, &iLocal_36);
			}
			return;
		case 8:
			if (func_381(-615159064) && func_381(484307836))
			{
				func_794(9, &iLocal_36);
			}
			return;
		case 9:
			if (func_381(-1281909308) && func_381(-1698780291))
			{
				func_794(10, &iLocal_36);
			}
			return;
		case 10:
			if ((func_381(-62869733) && func_381(-1473388640)) && func_381(-1025740342))
			{
				func_794(11, &iLocal_36);
			}
			return;
		case 11:
			if (func_799(1) && func_800(&(Local_62.f_390[0]->f_8)))
			{
				func_553(&(Local_62.f_1216[1]), "PB_BREAKOUT", "SCENE_VALDOC_COUNTMONEY");
				func_794(12, &iLocal_36);
			}
			return;
		case 12:
			if (func_801())
			{
				func_794(13, &iLocal_36);
			}
			return;
		case 13:
			func_802(Local_62.f_1226[2], -1281909308, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(14, &iLocal_36);
			return;
		case 14:
			func_802(Local_62.f_1226[3], -62869733, func_803(Local_62.f_390[0]->f_2, 0f, vLocal_59), 0, 1, 0);
			func_794(15, &iLocal_36);
			return;
		case 15:
			func_802(Local_62.f_1226[4], -372794047, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(16, &iLocal_36);
			return;
		case 16:
			func_802(Local_62.f_1226[5], -208228129, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(17, &iLocal_36);
			return;
		case 17:
			func_802(Local_62.f_1226[6], -615159064, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(18, &iLocal_36);
			return;
		case 18:
			func_802(Local_62.f_1226[7], 484307836, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(19, &iLocal_36);
			return;
		case 19:
			func_802(Local_62.f_1226[9], -1698780291, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(20, &iLocal_36);
			return;
		case 20:
			func_802(Local_62.f_1226[1], -1281909308, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(21, &iLocal_36);
			return;
		case 21:
			func_802(Local_62.f_1226[8], -1473388640, Local_62.f_390[0]->f_2, 0, 1, 0);
			func_794(22, &iLocal_36);
			return;
		case 22:
			if (func_383(Local_62.f_1226[10], -1025740342, Local_62.f_1241[0], Local_62.f_390[0]->f_2, 4, 0))
			{
				func_392(Local_62.f_1226[10], 1);
				func_794(23, &iLocal_36);
			}
			return;
		case 23:
			if (func_393())
			{
				start_anim_scene(&(Local_62.f_1216[1]));
				func_794(26, &iLocal_36);
			}
			return;
		default:
			break;
	}
	func_422(128);
	func_804(&iLocal_36);
}

void func_392(var uParam0, bool bParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	freeze_entity_position(*uParam0, bParam1);
}

bool func_393()
{
	iVar0 = &Local_62.f_1216[1];
	cVar1 = func_795(1);
	switch (iLocal_33)
	{
		case 0:
			if (_does_anim_scene_exist(iVar0))
			{
				func_794(1, &iLocal_33);
			}
			return false;
		case 1:
			func_805(iVar0, "pedGangCountCash", &(Local_62.f_390[0]), cVar1, 1);
			func_794(2, &iLocal_33);
			return false;
		case 2:
			func_806(iVar0, "objCountCoinStack01", &(Local_62.f_1226[4]), cVar1, 1);
			func_806(iVar0, "objCountCoinStack02", &(Local_62.f_1226[5]), cVar1, 1);
			func_794(3, &iLocal_33);
			return false;
		case 3:
			func_806(iVar0, "objCountCoin01", &(Local_62.f_1226[6]), cVar1, 1);
			func_806(iVar0, "objCountCoin02", &(Local_62.f_1226[7]), cVar1, 1);
			func_794(4, &iLocal_33);
			return false;
		case 4:
			func_806(iVar0, "objCountPen", &(Local_62.f_1226[8]), cVar1, 1);
			func_806(iVar0, "objCountLedger", &(Local_62.f_1226[9]), cVar1, 1);
			func_794(5, &iLocal_33);
			return false;
		case 5:
			func_806(iVar0, "objCountMoneyStack01", &(Local_62.f_1226[1]), cVar1, 1);
			func_806(iVar0, "objCountMoneyStack02", &(Local_62.f_1226[2]), cVar1, 1);
			func_806(iVar0, "objCountMoneyStack03", &(Local_62.f_1226[3]), cVar1, 1);
			func_794(6, &iLocal_33);
			return false;
		case 6:
			func_806(iVar0, "objCountChair", &(Local_62.f_1226[10]), cVar1, 1);
			func_794(7, &iLocal_33);
			return false;
		case 7:
			func_277(iVar0, "bGangActionDoor", 0, "SCENE_VALDOC_COUNTMONEY");
			func_794(26, &iLocal_33);
			return false;
		case 8:
			func_277(iVar0, "bGangActionDoor", 0, "SCENE_VALDOC_COUNTMONEY");
			func_277(iVar0, "COUNT_BOOL", 0, "SCENE_VALDOC_COUNTMONEY");
			func_794(26, &iLocal_33);
			return false;
		default:
			break;
	}
	func_804(&iLocal_33);
	return true;
}

bool func_394()
{
	func_807();
	if (iVar1753 < 2)
	{
		return false;
	}
	return true;
}

bool func_395(var uParam0)
{
	func_807();
	if (iVar1752 < 6)
	{
		return false;
	}
	func_808(1);
	func_788(uParam0);
	func_598(&(Local_62.f_153));
	func_22();
	return true;
}

bool func_396()
{
	if (func_221(8) || func_809("SRGMCUT1_ALT"))
	{
		return false;
	}
	if (func_60(256))
	{
		return true;
	}
	if (func_82())
	{
		return true;
	}
	if (func_60(1073741824))
	{
		return true;
	}
	if (is_entity_dead(&(Local_62.f_390[0])))
	{
		return true;
	}
	iVar0 = &Local_62.f_1216[0];
	sVar1 = func_810(0);
	sVar2 = "PBL_react_to_gunfire";
	if (!func_550(iVar0, sVar1))
	{
		return true;
	}
	if (!_0x3ab6c7b0bb0df4b1(&(Local_62.f_390[0]), -1))
	{
		func_811(2);
	}
	switch (iLocal_53)
	{
		case 0:
			if (func_812(iVar0, sVar1, sVar2))
			{
				func_811(3);
				return false;
			}
			func_553(iVar0, sVar2, sVar1);
			func_811(1);
			break;
		case 1:
			if (func_812(iVar0, sVar1, sVar2))
			{
				func_811(3);
				return false;
			}
			if (!func_559(iVar0, sVar2, sVar2, 0))
			{
				return false;
			}
			func_278(iVar0, sVar2, sVar1, 1);
			func_811(3);
			break;
		case 3:
			if (Local_62.f_97 < 40f)
			{
				return false;
			}
			return true;
		case 2:
			func_813(&(Local_62.f_390[0]), 1321.971f, -1325.122f, 73.94165f, 0f, 1065353216, 1050253722, 0, 20000);
			return true;
	}
	return false;
}

void func_397(var uParam0, int iParam1)
{
	uParam0->f_52 = (uParam0->f_52 - (uParam0->f_52 && iParam1));
}

int func_398(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_814();
	bVar1 = false;
	if (bVar0 && !func_815(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_815(37)) && !func_815(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_815(43)) && !func_815(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_816(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_816(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_399()
{
	return Global_40.f_1095.f_3054;
}

bool func_400(int iParam0)
{
	iParam0 = func_817(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_401(int iParam0, var uParam1)
{
	if (!func_818(iParam0))
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

int func_402()
{
	if (func_814())
	{
		if (!func_815(3))
		{
			return func_819(43);
		}
		if (func_815(38) && !func_815(43))
		{
			return func_820(8);
		}
	}
	return 0;
}

bool func_403(int iParam0)
{
	if (!func_821(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_822(iParam0));
}

Vector3 func_404(int iParam0, int iParam1)
{
	func_401(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_405(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_161(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_401(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_823(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_406(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_824(iParam0);
	if (func_825(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_407(int iParam0)
{
	if (!func_401(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_408(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_826(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_827(5))
	{
		if (func_828(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_829(vParam0);
	if (bParam6)
	{
		iVar1 = func_830(vParam0, 1);
		if (func_831(iVar1) || func_832(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_833(iParam3, iParam4))
	{
		return false;
	}
	if (!func_834())
	{
		if (func_835(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_836(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_830(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_837(iParam3, iParam4))
	{
		return false;
	}
	if (func_838(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_454(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_814())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_839(vParam0, bParam10) || func_840(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_409(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 52;
		case 17:
			return 68;
		case 28:
			return 54;
		case 29:
			return 61;
		case 39:
			return 49;
		case 40:
			return 70;
		case 42:
			return 55;
		case 43:
			return 62;
		case 61:
			return 56;
		case 73:
			return 50;
		case 74:
			return 58;
		case 75:
			return 76;
		case 82:
			return 71;
		case 90:
			return 57;
		case 91:
			return 63;
		case 95:
			return 51;
		case 54:
			return 64;
		default:
			break;
	}
	return func_410();
}

int func_410()
{
	return 5;
}

void func_411(int iParam0, int iParam1)
{
	if (!func_35(iParam0, iParam1))
	{
		return;
	}
	Global_20710.f_2092[iParam0] = (&Global_20710.f_2092[iParam0] - (Global_20710.f_2092[iParam0] && iParam1));
}

void func_412()
{
	if (func_32(Local_62, 0, 1))
	{
		return;
	}
	func_617(Local_62, 0, 1);
}

bool func_413(int iParam0)
{
	iVar0 = func_626(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_414(int iParam0)
{
	return func_842(func_841(iParam0));
}

void func_415(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(iParam0, 33554432);
	}
	else
	{
		func_157(iParam0, 33554432);
	}
}

Vector3 func_416()
{
	return -286.228f, 865.626f, 121.0702f;
}

void func_417(vector3 vParam0, int iParam3)
{
	if (func_67(vParam0))
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
			if (func_843(vVar2, vParam0, 2f, 1))
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

void func_418(int iParam0)
{
	if (!func_221(iParam0))
	{
		return;
	}
	Local_62.f_1622 = (Local_62.f_1622 - (Local_62.f_1622 && iParam0));
}

void func_419(char* sParam0, bool bParam1)
{
	if (does_scenario_group_exist(sParam0))
	{
		set_scenario_group_enabled(sParam0, bParam1);
	}
}

void func_420()
{
	if (func_115(2))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			if (does_entity_exist(Local_62.f_170))
			{
				remove_entity_from_audio_mix_group(Local_62.f_170, 0f);
			}
			if (does_entity_exist(&(Local_62.f_390[0])))
			{
				remove_entity_from_audio_mix_group(&(Local_62.f_390[0]), 0f);
			}
			func_116(2);
			break;
	}
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_625(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_844(Global_1935630, 4194304);
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

void func_422(int iParam0)
{
	if (!func_62(iParam0))
	{
		return;
	}
	Local_62.f_1624 = (Local_62.f_1624 - (Local_62.f_1624 && iParam0));
}

void func_423()
{
	func_845();
}

bool func_424(var uParam0, int iParam1)
{
	return func_438(*uParam0, iParam1);
}

void func_425(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_571(uParam0, iParam1);
	}
	else
	{
		func_570(uParam0, iParam1);
	}
}

void func_426(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_846(iParam0, 0, 0);
	if (func_847(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_848(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_849(iParam0, 1);
			}
			else
			{
				func_850(iParam0, 1);
			}
		}
		else
		{
			func_851(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_852())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_427()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_428(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_853(1497516462);
			func_854(2016141805);
			func_854(1010885152);
			func_854(-502324015);
			break;
		case 2016141805:
			func_854(1497516462);
			func_853(2016141805);
			func_854(1010885152);
			func_854(-502324015);
			break;
		case 1010885152:
			func_854(1497516462);
			func_854(2016141805);
			func_853(1010885152);
			func_854(-502324015);
			break;
		case -502324015:
			func_854(1497516462);
			func_854(2016141805);
			func_854(1010885152);
			func_853(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_854(-538889627);
			func_854(-538880323);
			func_854(-1056767524);
			func_853(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_855();
			func_853(iParam0);
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
			func_856();
			func_853(iParam0);
			break;
		case 2019386373:
			func_854(-664252410);
			func_854(2109952320);
			func_853(2019386373);
			break;
		case -664252410:
			func_854(2019386373);
			func_854(2109952320);
			func_853(-664252410);
			break;
		case 2109952320:
			func_854(2019386373);
			func_854(-664252410);
			func_853(2109952320);
			break;
		case -1674179981:
			func_854(-1835851517);
			func_854(-1838352012);
			func_853(-1674179981);
			break;
		case -1835851517:
			func_854(-1674179981);
			func_854(-1838352012);
			func_853(-1835851517);
			break;
		case -1838352012:
			func_854(-1674179981);
			func_854(-1835851517);
			func_853(-1838352012);
			break;
		case -1717960576:
			func_854(210001842);
			func_853(-1717960576);
			break;
		case 210001842:
			func_854(-1717960576);
			func_853(210001842);
			break;
		case -150493654:
			func_854(-1271608261);
			func_854(1846061697);
			func_854(-1145519186);
			func_853(-150493654);
			break;
		case -1271608261:
			func_854(-150493654);
			func_854(1846061697);
			func_854(-1145519186);
			func_853(-1271608261);
			break;
		case 1846061697:
			func_854(-150493654);
			func_854(-1271608261);
			func_854(-1145519186);
			func_853(1846061697);
			break;
		case -1145519186:
			func_854(-150493654);
			func_854(-1271608261);
			func_854(1846061697);
			func_853(-1145519186);
			break;
		case 1766284049:
			func_854(280705402);
			func_854(1926308480);
			func_853(1766284049);
			break;
		case 280705402:
			func_854(1766284049);
			func_854(1926308480);
			func_853(280705402);
			break;
		case 1926308480:
			func_854(1766284049);
			func_854(280705402);
			func_853(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_854(439465264);
				func_853(1609506757);
			}
			else
			{
				func_854(1609506757);
				func_854(439465264);
			}
			break;
		case 439465264:
			if (func_825(1609506757))
			{
				if (bParam1)
				{
					func_853(439465264);
				}
				else
				{
					func_854(439465264);
				}
			}
			break;
		case 1822001510:
			func_854(-1612662716);
			func_853(1822001510);
			break;
		case -1612662716:
			func_854(1822001510);
			func_853(-1612662716);
			break;
		case 1306158345:
			func_854(1952610440);
			func_854(-223469678);
			func_854(-404698347);
			func_854(1517904467);
			func_853(1306158345);
			break;
		case 1952610440:
			func_854(1306158345);
			func_854(-223469678);
			func_854(-404698347);
			func_854(1517904467);
			func_853(1952610440);
			break;
		case -223469678:
			func_854(1306158345);
			func_854(1952610440);
			func_854(-404698347);
			func_854(1517904467);
			func_853(-223469678);
			break;
		case -404698347:
			func_854(1306158345);
			func_854(1952610440);
			func_854(-223469678);
			func_854(1517904467);
			func_853(-404698347);
			break;
		case 1517904467:
			func_854(1306158345);
			func_854(1952610440);
			func_854(-223469678);
			func_854(-404698347);
			func_853(1517904467);
			break;
		case 1376646519:
			func_854(931649776);
			func_854(-434590080);
			func_854(1743048395);
			func_854(449774763);
			func_853(1376646519);
			break;
		case 931649776:
			func_854(1376646519);
			func_854(-434590080);
			func_854(1743048395);
			func_854(449774763);
			func_853(931649776);
			break;
		case -434590080:
			func_854(1376646519);
			func_854(931649776);
			func_854(1743048395);
			func_854(449774763);
			func_853(-434590080);
			break;
		case 1743048395:
			func_854(1376646519);
			func_854(931649776);
			func_854(-434590080);
			func_854(449774763);
			func_853(1743048395);
			break;
		case 449774763:
			func_854(1376646519);
			func_854(931649776);
			func_854(-434590080);
			func_854(1743048395);
			func_853(449774763);
			break;
		case -1414537028:
			func_854(38162571);
			func_854(1350391819);
			func_854(54073871);
			func_853(-1414537028);
			break;
		case 38162571:
			func_854(-1414537028);
			func_854(1350391819);
			func_854(54073871);
			func_853(38162571);
			break;
		case 1350391819:
			func_854(-1414537028);
			func_854(38162571);
			func_854(54073871);
			func_853(1350391819);
			break;
		case 54073871:
			func_854(-1414537028);
			func_854(38162571);
			func_854(1350391819);
			func_853(54073871);
			break;
		case 198200492:
			func_853(198200492);
			func_854(-1124061431);
			func_854(52706132);
			func_854(-259123672);
			break;
		case -1124061431:
			func_854(198200492);
			func_853(-1124061431);
			func_854(52706132);
			func_854(-259123672);
			break;
		case 52706132:
			func_854(198200492);
			func_854(-1124061431);
			func_853(52706132);
			func_854(-259123672);
			break;
		case -259123672:
			func_854(198200492);
			func_854(-1124061431);
			func_854(52706132);
			func_853(-259123672);
			break;
		case -919512195:
			func_853(-919512195);
			func_854(-1925798111);
			func_854(420709909);
			func_854(1703426636);
			break;
		case -1925798111:
			func_853(-1925798111);
			func_854(-919512195);
			func_854(420709909);
			func_854(1703426636);
			break;
		case 420709909:
			func_853(420709909);
			func_854(-919512195);
			func_854(-1925798111);
			func_854(1703426636);
			break;
		case 1703426636:
			func_853(1703426636);
			func_854(-919512195);
			func_854(-1925798111);
			func_854(420709909);
			break;
		case -1223121209:
			func_853(-1223121209);
			func_854(630808005);
			break;
		case 630808005:
			func_853(630808005);
			func_854(-1223121209);
			break;
		case 1453909576:
			func_853(1453909576);
			func_854(1643531967);
			break;
		case 1643531967:
			func_853(1643531967);
			func_854(1453909576);
			break;
		case 0:
			func_853(0);
			func_854(473295046);
			func_854(-1738165526);
			break;
		case 473295046:
			func_853(473295046);
			func_854(0);
			func_854(-1738165526);
			break;
		case -1738165526:
			func_853(-1738165526);
			func_854(0);
			func_854(473295046);
			break;
		case 932909855:
			func_853(932909855);
			func_854(2051822093);
			break;
		case 2051822093:
			func_853(2051822093);
			func_854(932909855);
			break;
		case 405586984:
			func_853(405586984);
			func_854(1509509592);
			func_854(-959357075);
			func_854(-1311865656);
			break;
		case 1509509592:
			func_853(1509509592);
			func_854(405586984);
			func_854(-959357075);
			func_854(-1311865656);
			break;
		case -959357075:
			func_853(-959357075);
			func_854(1509509592);
			func_854(405586984);
			func_854(-1311865656);
			break;
		case -1311865656:
			func_853(-1311865656);
			func_854(1509509592);
			func_854(-959357075);
			func_854(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_853(-524145696);
			}
			else
			{
				func_854(-524145696);
			}
			func_854(1626481264);
			func_854(282809459);
			break;
		case 282809459:
			func_853(282809459);
			func_854(1626481264);
			func_854(-524145696);
			break;
		case 1626481264:
			func_853(1626481264);
			func_854(-524145696);
			func_854(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_853(885203519);
			}
			else
			{
				func_854(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_853(-1080627546);
			}
			else
			{
				func_854(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_825(iParam0))
				{
					func_853(iParam0);
				}
			}
			else if (func_825(iParam0))
			{
				func_854(iParam0);
			}
			break;
	}
}

void func_429(int iParam0, int iParam1, char* sParam2)
{
	_0x276aaf0f1c7f2494(iParam0, iParam1);
}

bool func_430(int iParam0, int iParam1)
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
	if (func_174(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_174(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_174(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_174(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_174(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_174(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_174(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_174(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

char* func_431()
{
	return "PROP_PLAYER_CASH_REGISTER";
}

void func_432(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		func_58(33554432);
		func_857(1);
		func_858();
		enable_control_action(0, -1879280170, true);
		enable_control_action(0, -640622144, true);
		enable_control_action(0, -822242784, true);
		enable_control_action(0, 130948705, true);
		enable_control_action(0, -128997553, true);
		enable_control_action(0, -1292666904, true);
		enable_control_action(0, -1242632265, true);
		enable_control_action(0, 578288361, true);
		enable_control_action(0, 613911080, true);
		enable_control_action(0, 230775517, true);
		enable_control_action(0, 1998417427, true);
		enable_control_action(0, 932393831, true);
		enable_control_action(0, 1301263553, true);
		enable_control_action(0, -620139643, true);
		enable_control_action(0, -124244224, true);
		enable_control_action(0, 648122183, true);
		enable_control_action(0, -163964935, true);
		enable_control_action(0, -1616532217, true);
		enable_control_action(0, 1112265426, true);
		enable_control_action(0, -155487368, true);
		enable_control_action(0, 1980406895, true);
		enable_control_action(0, -2074855166, true);
		set_ped_config_flag(Global_35, 249, false);
	}
	else
	{
		func_57(33554432);
		func_857(0);
		func_859();
		if (bParam1)
		{
			disable_control_action(0, -1879280170, false);
			disable_control_action(0, -640622144, false);
			disable_control_action(0, -822242784, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -1242632265, false);
			disable_control_action(0, 578288361, false);
			disable_control_action(0, 613911080, false);
			disable_control_action(0, 230775517, false);
			disable_control_action(0, 1998417427, false);
			disable_control_action(0, 932393831, false);
			disable_control_action(0, 1301263553, false);
			disable_control_action(0, -620139643, false);
			disable_control_action(0, -124244224, false);
			disable_control_action(0, 648122183, false);
			disable_control_action(0, -163964935, false);
			disable_control_action(0, -1616532217, false);
			disable_control_action(0, 1112265426, false);
			disable_control_action(0, -155487368, false);
			disable_control_action(0, 1980406895, false);
			disable_control_action(0, -2074855166, false);
			set_ped_config_flag(Global_35, 249, true);
		}
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	set_player_control(get_player_index(), bParam0, iVar0, false);
}

void func_433(bool bParam0)
{
	display_radar(bParam0);
	if (bParam0)
	{
		func_31(268435456);
	}
	else
	{
		func_29(268435456);
	}
}

void func_434(int iParam0)
{
	func_860(func_238(iParam0));
}

bool func_435(int iParam0)
{
	if (!func_861(iParam0))
	{
		return false;
	}
	return func_862(iParam0);
}

bool func_436(int iParam0)
{
	bVar0 = func_153(iParam0, 256);
	return bVar0;
}

int func_437(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_438(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_439(var uParam0, int iParam1, char* sParam2)
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

bool func_440()
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

int func_441(int iParam0)
{
	if (!func_444(iParam0))
	{
		return -1;
	}
	return func_864(func_863(iParam0));
}

bool func_442(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_443(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_444(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_445(int iParam0, bool bParam1)
{
	switch (func_626(iParam0))
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

void func_446(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_447(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_448(int iParam0)
{
	return func_185(iParam0, Global_1310750->f_16072 | 64);
}

void func_449(int iParam0)
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

void func_450(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

int func_451(int iParam0)
{
	iVar0 = iParam0;
	return func_865(iVar0);
}

bool func_452(int iParam0)
{
	if (!func_866(iParam0, 0))
	{
		return false;
	}
	if (func_454(1, iParam0))
	{
		return true;
	}
	if (func_867(16, iParam0))
	{
		return true;
	}
	if (func_868(iParam0) >= 4)
	{
		if (_0x336b3d200ab007cb(Global_35, Global_36, 150f, 512) <= 0)
		{
			return true;
		}
	}
	return false;
}

void func_453(int iParam0, int iParam1)
{
	if (!func_454(1, iParam0))
	{
		if (!func_866(iParam0, 0))
		{
		}
		func_869(16, iParam0);
		func_455(1, iParam0);
	}
}

bool func_454(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_455(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

bool func_456()
{
	func_96();
	func_378();
	return true;
}

bool func_457()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			func_792(1);
			return false;
		case 1:
			if (func_60(256))
			{
				func_792(16);
				return false;
			}
			else
			{
				func_792(2);
			}
			if (func_35(29, 8))
			{
				func_31(8388608);
				func_772(&(Local_62.f_390[0]->f_9), 128);
			}
			else if (func_35(29, 4))
			{
				func_772(&(Local_62.f_390[0]->f_9), 64);
			}
			else if (func_35(29, 2))
			{
				func_772(&(Local_62.f_390[0]->f_9), 32);
			}
			else
			{
				func_870(&(Local_62.f_390[0]->f_9), 32);
			}
			return false;
		case 2:
			func_379(Local_62.f_390[0]->f_6);
			func_379(-1345652903);
			func_792(3);
			return false;
		case 3:
			if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(4);
				return false;
			}
			func_796(0, func_810(0), 0, "PBL_BARS_LOOP");
			func_792(4);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_458()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_459()
{
	if (func_275())
	{
		func_96();
		func_378();
		func_793();
		return true;
	}
	if (func_60(256))
	{
		func_378();
		func_793();
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_378();
			func_792(1);
			return false;
		case 1:
			if (!func_60(1))
			{
				func_379(Local_62.f_1021[0]->f_6);
			}
			func_792(2);
			return false;
		case 2:
			func_379(-2087759666);
			func_792(3);
			return false;
		case 3:
			if (!func_60(1))
			{
				func_379(-62869733);
			}
			func_792(4);
			return false;
		case 4:
			func_379(831542679);
			func_792(5);
			return false;
		case 5:
			func_379(1680756541);
			func_792(6);
			return false;
		case 6:
			if (!func_60(1))
			{
				func_796(0, func_795(0), 0, "PBL_PAY_MONEY");
			}
			func_792(7);
			return false;
		case 7:
			func_871("s_lev_des");
			func_792(16);
			return false;
		default:
			break;
	}
	set_scenario_type_enabled("PROP_PLAYER_KNOCK_SECURITY_DOOR", true);
	set_scenario_type_enabled("PROP_PLAYER_PEEK_SECURITY_DOOR", true);
	func_793();
	return true;
}

bool func_460()
{
	if (!func_382())
	{
		return false;
	}
	return true;
}

bool func_461()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_60(256))
			{
				func_792(8);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_381(Local_62.f_390[0]->f_6))
			{
				func_798(Local_62.f_390[0]->f_6, 41788943, &(Local_62.f_390[0]->f_8));
				func_792(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[0]->f_8)))
			{
				if (func_119(&(Local_62.f_390[0]->f_9), 128))
				{
					func_792(8);
					return false;
				}
				else
				{
					func_792(4);
				}
			}
			return false;
		case 4:
			if (func_799(0))
			{
				func_792(5);
			}
			return false;
		case 5:
			if (!func_35(29, 1))
			{
				func_792(6);
			}
			else
			{
				func_792(7);
			}
			return false;
		case 6:
			if (func_381(-1345652903))
			{
				func_792(7);
			}
			return false;
		case 7:
			func_872();
			func_553(&(Local_62.f_1216[0]), "PBL_intro_action", "SCENE_RHDGUN_HELP");
			func_792(8);
			return false;
		case 8:
			if (func_873())
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_462()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				func_792(2);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_873())
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_463()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_382())
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				func_792(9);
			}
			else if (func_60(256))
			{
				func_792(9);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_60(1) || func_381(Local_62.f_1021[0]->f_6))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_381(-2087759666))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_60(1) || func_381(-62869733))
			{
				func_792(5);
			}
			return false;
		case 5:
			if (func_381(831542679))
			{
				func_792(6);
			}
			return false;
		case 6:
			if (func_381(1680756541))
			{
				func_792(7);
			}
			return false;
		case 7:
			if (func_60(1) || func_799(0))
			{
				func_792(8);
			}
			return false;
		case 8:
			if (func_874("s_lev_des"))
			{
				func_792(9);
			}
			return false;
		case 9:
			if (func_873())
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_464()
{
	if (!func_875())
	{
		func_876(1, 0);
	}
	return true;
}

bool func_465()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_60(256))
			{
				func_792(16);
			}
			else if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(1);
				return false;
			}
			else
			{
				Local_62.f_1355[2] = _create_volume_aggregate_with_custom_name("AMBRES_RHDGUN_SHERIFF");
				_0x39816f6f94f385ad(&(Local_62.f_1355[2]), 1322.834f, -1320.092f, 77.81014f, 0f, 0f, -96.14533f, 0.830112f, 0.641855f, 1.943815f);
				_0x39816f6f94f385ad(&(Local_62.f_1355[2]), 1317.49f, -1311.854f, 76.7239f, 0f, 0f, -75.76812f, 2.358398f, 2.570984f, 2.7956f);
				Local_62.f_1355[2]->f_1 = _0x4c39c95ae5db1329(&(Local_62.f_1355[2]), 0, 15);
				func_792(1);
			}
			return false;
		case 1:
			if (!func_33(Local_62))
			{
				if (func_877(Local_62.f_390[0], 0, 0, 1, 1))
				{
					func_49(&(Local_62.f_390[0]), 1, "RGM_CAPTIVE1", 0, "");
					func_878(Local_62.f_390[0], 41788943, 1);
					func_319(Local_62.f_390[0], 371, 1);
					_0xae6004120c18df97(&(Local_62.f_390[0]), 0, 0);
					func_879(&(Local_62.f_390[0]->f_89), 1);
					func_593(&(Local_62.f_390[0]), 1);
					func_880(&(Local_62.f_390[0]), 0);
					func_881(&(Local_62.f_390[0]), 3);
					func_556();
					func_535(&(Local_62.f_1216[0]), "SCENE_RHDGUN_HELP");
					func_792(2);
				}
			}
			else
			{
				func_792(8);
			}
			return false;
		case 2:
			if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_591(&(Local_62.f_390[0]), 1323.757f, -1319.015f, 74.36577f, 166.31f, 2, 1073741824);
				func_882(&(Local_62.f_390[0]), 0, 0);
				func_792(8);
			}
			else if (!func_35(29, 1))
			{
				Local_62.f_1247[1] = _create_volume_aggregate_with_custom_name("VOL_RHDGUN_CHECK_PASSERBY_VISIBLE");
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1307.35f, -1265.237f, 76.6246f, 0f, 0f, -10.22604f, 10.1483f, 12.07671f, 2.499944f);
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1316.843f, -1278.853f, 76.08128f, 0f, 0f, -10.2274f, 14.24559f, 30.68045f, 3.612149f);
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1308.272f, -1278.972f, 76.45083f, 0f, 0f, -10.39573f, 4.055381f, 15.04287f, 3.600636f);
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1303.855f, -1317.837f, 76.91208f, 0f, 0f, -14.58524f, 56.84571f, 57.99078f, 9.163401f);
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1336.173f, -1291.99f, 79.10609f, 0f, 0f, 64.07844f, 13.74457f, 8.099354f, 7.920187f);
				_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1298.393f, -1355.957f, 78.31953f, 0f, 0f, -15.10845f, 13.3449f, 19.66159f, 7.310696f);
				func_587(Local_62.f_1247[2], 1315.198f, -1317.177f, 77.26284f, 0f, 0f, 72.39614f, 22.72217f, 16.51685f, 5.088609f, "VOL_RHDGUN_TOO_LATE_TO_SPAWN_PASSERBY");
				func_792(3);
			}
			else
			{
				func_792(6);
			}
			return false;
		case 3:
			if (func_883())
			{
				if (func_62(2))
				{
					func_884();
					func_792(6);
				}
				else
				{
					func_553(&(Local_62.f_1216[0]), "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP");
					func_884();
					func_792(4);
				}
			}
			return false;
		case 4:
			if (func_885(Local_62.f_1021[0], 0))
			{
				func_49(&(Local_62.f_1021[0]), 1, "RGM_PASSERBY", 0, "");
				func_886(&(Local_62.f_1021[0]->f_10), 1);
				func_887(&(Local_62.f_390[1]->f_10), &(Local_62.f_390[1]->f_30), 0, 0);
				func_792(5);
			}
			return false;
		case 5:
			if (!func_559(&(Local_62.f_1216[0]), "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP", 0))
			{
				return false;
			}
			if (!is_entity_dead(&(Local_62.f_1021[0])))
			{
				func_805(&(Local_62.f_1216[0]), "pedPasserby", &(Local_62.f_1021[0]), "SCENE_RHDGUN_HELP", 1);
				func_278(&(Local_62.f_1216[0]), "PBL_INTRO_LOOP", "SCENE_RHDGUN_HELP", 1);
				request_ped_visibility_tracking(&(Local_62.f_1021[0]));
				func_792(6);
			}
			else
			{
				func_792(3);
			}
			return false;
		case 6:
			if (is_entity_dead(&(Local_62.f_1021[0])))
			{
				bVar0 = true;
			}
			if (bVar0 || _has_ped_emotional_preset_loaded(&(Local_62.f_1021[0]), "Default_Nervous"))
			{
				func_888(Local_62.f_390[0], 623901053, "CAPTIVE");
				func_888(Local_62.f_1021[0], 623901053, "PASSERBY");
				func_792(7);
			}
			return false;
		case 7:
			func_587(Local_62.f_1247[0], 1318.132f, -1319.71f, 77.01476f, 0f, 0f, -104.9335f, 5.422277f, 6.354905f, 2.807442f, "VOL_RHDGUN_PEEK_LEADIN");
			func_587(Local_62.f_1247[3], 1319.128f, -1317.149f, 77.42981f, 0f, 0f, 17.5725f, 2.765507f, 2.906999f, 2.873742f, "VOL_RHDGUN_PLAYER_VISIBLE_OUTSIDE_1");
			func_587(Local_62.f_1355[1], 1317.986f, -1319.349f, 77.26328f, 0f, 0f, 72.46517f, 13.67834f, 6.216187f, 4.012191f, "AMBRES_RHDGUN_WINDOW_PEEK");
			_0xb56d41a694e42e86(&(Local_62.f_1355[1]), 0, 0, 0, -1, -1, 0);
			func_587(Local_62.f_1247[4], 1320.753f, -1318.809f, 77.195f, 0f, 0f, -15.95497f, 2.108063f, 2.544107f, 2.806283f, "VOL_RHDGUN_CAPTIVE_FOCUS");
			func_587(Local_62.f_1355[0], 1323.69f, -1316.367f, 78.29865f, 0f, 0f, 75.23973f, 3.96383f, 4.050902f, 2.796783f, "AMBRES_RHDGUN_PORCH");
			Local_62.f_1355[0]->f_1 = _0x4c39c95ae5db1329(&(Local_62.f_1355[0]), 0, 15);
			func_792(8);
			return false;
		case 8:
			func_889();
			func_792(9);
			return false;
		case 9:
			if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_591(&(Local_62.f_390[0]), 1323.757f, -1319.015f, 74.36577f, 166.31f, 2, 1073741824);
				func_882(&(Local_62.f_390[0]), 0, 0);
				func_772(&(Local_62.f_390[0]->f_9), 128);
			}
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_466()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			func_386();
			func_792(2);
			return false;
		case 2:
			if (!is_entity_dead(Local_62.f_170))
			{
				_0xf74e134f40192884(Local_62.f_170, 2);
			}
			func_792(3);
			return false;
		case 3:
			func_890(Local_62.f_1373[0], Local_62.f_1370[0], -1791.986f, -385.9403f, 157.6018f, 0f, 0f, -125.1316f, 6f, 8.745212f, 3.254201f, 1, 0, 1, 0, 0);
			func_790(&(Local_62.f_1373[0]), 0);
			func_792(4);
			return false;
		case 4:
			func_594(func_609(), 0);
			func_595(func_612(), 1);
			func_594(func_611(), 0);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_467()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_891(Local_62.f_1479[1], -2087759666, -283.2007f, 816.0656f, 118.3861f, -77.39f))
			{
				func_319(Local_62.f_1479[1], 277, 1);
				func_880(&(Local_62.f_1479[1]), 0);
				func_792(2);
			}
			return false;
		case 2:
			if (func_60(1))
			{
			}
			else if (func_222(player_id(), 1, 0, 1))
			{
				func_29(1);
			}
			else if (!_0x9ef07cfbb19a9733())
			{
				Local_62.f_1021[0] = func_892(Local_62.f_1021[0]->f_6, Local_62.f_1021[0]->f_2, Local_62.f_1021[0]->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				func_49(&(Local_62.f_1021[0]), 1, "DEPUTY", 0, "");
				set_blocking_of_non_temporary_events(&(Local_62.f_1021[0]), true);
				set_ped_can_be_targetted(&(Local_62.f_1021[0]), true);
				func_879(&(Local_62.f_1021[0]->f_10), 1);
				func_893(&(Local_62.f_1021[0]->f_10), 1);
				func_894(&(Local_62.f_1021[0]->f_10), 5f);
				func_895(&(Local_62.f_1021[0]->f_10), 20);
				func_896(&(Local_62.f_1021[0]->f_10), 1);
			}
			func_792(3);
			return false;
		case 3:
			if (!func_60(1))
			{
				func_802(Local_62.f_1226[0], -62869733, Local_62.f_390[2]->f_2, 0, 1, 0);
			}
			func_389();
			func_792(4);
			return false;
		case 4:
			Local_62.f_1247[3] = _create_volume_aggregate_with_custom_name("VOL_VALDOC_CHECK_DEPUTY_KNOCK");
			_0x39816f6f94f385ad(&(Local_62.f_1247[3]), -273.6081f, 821.0761f, 119.601f, 0f, 0f, 9.583434f, 22.85014f, 16.92304f, 11.1f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[3]), -269.9438f, 812.7717f, 119.601f, 0f, 0f, 9.583435f, 2.39609f, 1.990658f, 8.577932f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[3]), -264.6964f, 812.715f, 120.2832f, 0f, 0f, -80.73006f, 4.448303f, 8.415604f, 5.437867f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[3]), -282.5073f, 819.7449f, 119.601f, 0f, 0f, 9.583435f, 2.39609f, 1.990658f, 8.577932f);
			func_587(Local_62.f_1247[4], -278.1527f, 816.4172f, 119.4482f, 0f, 0f, -80.19256f, 3.109009f, 3.917801f, 3.041739f, "VOL_VALDOC_CAN_SEE_DEPUTY_BEING_AGGROED");
			func_587(Local_62.f_1247[16], -287.0357f, 818.6874f, 119.7394f, 0f, 0f, -170.1158f, 2.741058f, 1.425305f, 2.927403f, "VOL_VALDOC_AROUND_PEEK_WINDOW");
			func_587(Local_62.f_1355[0], -281.1141f, 821.2005f, 119.1334f, 0f, 0f, 7.545725f, 6.448517f, 4.457336f, 2.770967f, "AMBRES_VALDOC_WINDOW_PEEK_1");
			Local_62.f_1355[0]->f_1 = _0x4c39c95ae5db1329(&(Local_62.f_1355[0]), 0, 15);
			func_587(Local_62.f_1355[1], -293.6778f, 818.3525f, 119.0992f, 0f, 0f, -75.86052f, 5.404907f, 2.330322f, 2.332623f, "AMBRES_VALDOC_WINDOW_PEEK_2");
			Local_62.f_1355[0]->f_1 = _0x4c39c95ae5db1329(&(Local_62.f_1355[1]), 0, 15);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_468()
{
	if (func_275())
	{
		return true;
	}
	else if (func_60(256))
	{
		func_792(16);
		return true;
	}
	return true;
}

bool func_469()
{
	return true;
}

bool func_470()
{
	return true;
}

bool func_471()
{
	if (func_275())
	{
		return true;
	}
	else if (func_60(256))
	{
		return true;
	}
	if (func_897(Local_62.f_1198[1], 1680756541, Local_62.f_1241[2], -281.0726f, 815.2385f, 118.4169f, -855228377, 1, 0f, 0, "DOOR_VAL_DOC_BACK", &uVar0, 4))
	{
		func_898(Local_62.f_1373[1], Local_62.f_1370[1], func_633(), func_634(), func_635(), "Exterior Back Room Door");
		_0xc07b91b996c1de89(-855228377, 0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_472(var uParam0)
{
	if (func_60(32))
	{
		return true;
	}
	if (func_60(16))
	{
		return true;
	}
	if (!is_valid_interior(*uParam0))
	{
		return false;
	}
	if (is_interior_ready(*uParam0))
	{
		func_29(16);
		return true;
	}
	return false;
}

bool func_473()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_474()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			func_792(2);
			return false;
		case 2:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(16);
				return false;
			}
			func_796(1, func_810(1), 0, "pbCounterToDoor");
			func_792(4);
			return false;
		case 4:
			func_379(-1669881355);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_475()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			func_899(&(Local_62.f_1));
			func_792(2);
			return false;
		case 2:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(3);
			}
			return false;
		case 3:
			func_796(0, func_900(0), 0, "pbIdleToDoor");
			func_792(4);
			return false;
		case 4:
			func_379(-1043434543);
			func_379(110342471);
			func_379(-293931520);
			func_379(1755911592);
			func_792(5);
			return false;
		case 5:
			func_871(func_671());
			func_792(6);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_476()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_899(&(Local_62.f_1));
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_901(-183018591);
				func_796(8, func_795(8), 0, 0);
			}
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_477()
{
	if (!func_902(&(Local_62.f_1)))
	{
		return false;
	}
	func_903(&(Local_62.f_1));
	return true;
}

bool func_478()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				if (func_119(&(Local_62.f_390[0]->f_9), 128))
				{
					func_792(16);
				}
				else
				{
					func_792(1);
				}
			}
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_799(1))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_381(-1669881355))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_479()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				func_792(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_799(0))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (((func_381(110342471) && func_381(-293931520)) && func_381(-1043434543)) && func_381(1755911592))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_874(func_671()))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_480()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_902(&(Local_62.f_1)))
			{
				func_903(&(Local_62.f_1));
				func_792(1);
			}
			return false;
		case 1:
			if (func_275())
			{
				func_792(2);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(16);
			}
			return false;
		case 2:
			if (func_904(-183018591) && func_799(8))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_481()
{
	if (func_60(256))
	{
		func_905();
		func_792(16);
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_905();
			Local_62.f_1290 = _create_volume_aggregate_with_custom_name("volPrivateArea");
			_0x39816f6f94f385ad(Local_62.f_1290, 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f);
			_0x39816f6f94f385ad(Local_62.f_1290, 2718.117f, -1287.013f, 61.17699f, 0f, 0f, 25.02346f, 7.541645f, 9.158936f, 3.663948f);
			func_587(Local_62.f_1247[7], 2718.117f, -1287.013f, 61.17699f, 0f, 0f, 25.02346f, 7.541645f, 9.158936f, 3.663948f, "VOL_SDNGUN_GAMBLING_ROOM_MAIN");
			func_587(Local_62.f_1247[8], 2711.42f, -1290.34f, 61.10517f, 0f, 0f, -64.08247f, 3.241211f, 2.089122f, 3.61668f, "VOL_SDNGUN_GAMBLING_ROOM_TO_BAR");
			func_792(1);
			return false;
		case 1:
			Local_62.f_1288 = _create_volume_aggregate_with_custom_name("volExterior");
			_0x39816f6f94f385ad(Local_62.f_1288, 2706.178f, -1290.983f, 56.07883f, 0f, 0f, 24.99879f, 8.808282f, 12.41846f, 14.92454f);
			_0x39816f6f94f385ad(Local_62.f_1288, 2697.768f, -1294.845f, 49.96861f, 0f, 0f, 25.25522f, 17.61353f, 13.00342f, 2.718853f);
			func_587(Local_62.f_1247[5], 2706.151f, -1284.987f, 60.27311f, 0f, 0f, -154.9999f, 2.620117f, 1.492676f, 3.053375f, "VOL_SDNGUN_3F_COMMENT");
			func_792(2);
			return false;
		case 2:
			func_889();
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_482()
{
	switch (iLocal_32)
	{
		case 0:
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			if (func_60(8388608))
			{
				func_906(Local_62.f_170, 0);
			}
			Local_62.f_1284 = _create_volume_aggregate_with_custom_name("volShop");
			_0x39816f6f94f385ad(Local_62.f_1284, 1325.235f, -1323.54f, 76.9392f, 0f, 0f, -15.05438f, 9.013779f, 9.165242f, 6.735411f);
			_0x39816f6f94f385ad(Local_62.f_1284, 1328.74f, -1328.339f, 78.29915f, 0f, 0f, -104.645f, 1.71709f, 2.490459f, 2.80703f);
			_0x39816f6f94f385ad(Local_62.f_1284, 1320.236f, -1325.07f, 78.29175f, 0f, 0f, -103.7906f, 3.611328f, 1.394653f, 2.807442f);
			Local_62.f_1.f_90 = Local_62.f_1284;
			func_792(1);
			return false;
		case 1:
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_483()
{
	switch (iLocal_32)
	{
		case 0:
			func_889();
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_385();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_587(&(Local_62.f_1290), -1791.986f, -385.9403f, 157.7425f, 0f, 0f, -125.1316f, 6f, 8.745212f, 3.254201f, "volPrivate");
			func_587(Local_62.f_1247[0], -1790.269f, -389.4696f, 158.6499f, 0f, 0f, -126.254f, 1.417891f, 1.031865f, 1.238304f, "VOL_STRGEN_LADDER_UPPER_HALF");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_484()
{
	if (func_60(256) && !func_275())
	{
		func_907();
		return true;
	}
	switch (iLocal_32)
	{
		case 0:
			func_889();
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_907();
			if (func_275())
			{
				func_792(1);
				return false;
			}
			if (!is_entity_dead(&(Local_62.f_1479[1])))
			{
				if (func_797(0))
				{
					sVar0 = "1060_G_M_M_UniCriminals_01_WHITE_07";
				}
				else
				{
					sVar0 = "0362_G_M_M_UniDuster_03_WHITE_02";
				}
				func_49(&(Local_62.f_1479[1]), 1, "ODR_PED3", 1, sVar0);
			}
			Local_62.f_1290 = _create_volume_aggregate_with_custom_name("volPrivateArea");
			_0x39816f6f94f385ad(Local_62.f_1290, -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			func_587(Local_62.f_1247[2], -257.8614f, 833.8792f, 119.601f, 0f, 0f, 9.583434f, 70.68808f, 51.89944f, 27.56162f, "VOL_VALDOC_GENERAL_DEPUTY_CHECK");
			func_132(1);
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_908(Local_62.f_1226[13], -183018591, Local_62.f_170.f_2, -1, 0);
			}
			func_792(2);
			return false;
		case 2:
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_485()
{
	return true;
}

bool func_486()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_897(&(Local_62.f_1189[0]->f_5), 1650744725, Local_62.f_1241[2], 1325.214f, -1323.639f, 76.8924f, &(Local_62.f_1189[0]), Local_62.f_1189[0]->f_2, Local_62.f_1189[0]->f_4, Local_62.f_1189[0]->f_3, Local_62.f_1189[0]->f_1, &(Local_62.f_1189[0]->f_7), 4))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_383(Local_62.f_1226[0], -1669881355, Local_62.f_1241[0], 1327.48f, -1326.23f, 76.92f, 4, 0))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_487()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_383(Local_62.f_1226[0], -1043434543, Local_62.f_1241[0], -1789.69f, -386.63f, 160.38f, 4, 0))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_383(Local_62.f_1226[1], -293931520, Local_62.f_1241[2], -1790.02f, -389.12f, 159.32f, 4, 0))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_383(Local_62.f_1226[2], 110342471, Local_62.f_1241[1], -1790.75f, -390.16f, 159.29f, 4, 0))
			{
				func_792(4);
				if (!_does_volume_exist(iVar1767))
				{
					func_587(&uLocal_1769, -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2f, 5f, "volTrapdoor");
					func_587(&uLocal_1771, -1789.845f, -388.492f, 159.3297f, 0f, 0f, -35f, 2.221f, 3.521f, 5f, "volBehindCounter");
				}
			}
			return false;
		case 4:
			if (func_383(Local_62.f_1226[3], 1755911592, Local_62.f_1241[3], -1789.762f, -387.8745f, 156.1009f, 5, 0))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_488()
{
	if (func_275())
	{
		func_909(925575409, 1, 1);
		func_792(16);
	}
	else if (func_60(256))
	{
		func_909(925575409, 1, 1);
		func_792(16);
	}
	switch (iLocal_32)
	{
		case 0:
			if (func_897(Local_62.f_1198[0], 831542679, Local_62.f_1241[3], -290.8315f, 813.4535f, 118.4155f, 925575409, 0, 0f, 0, "DOOR_VAL_DOC_BACK_RM", &uVar0, 4))
			{
				_0xc07b91b996c1de89(925575409, 0);
				func_792(1);
			}
			return false;
		case 1:
			func_909(925575409, 1, 1);
			func_910();
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_489()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			Local_62.f_1292 = _create_volume_aggregate_with_custom_name("volExamRoom");
			_0x39816f6f94f385ad(Local_62.f_1292, -289.4254f, 811.4766f, 119.8436f, 0f, 0f, -79.27305f, 4.243592f, 3.22765f, 2.880867f);
			_0x39816f6f94f385ad(Local_62.f_1292, -287.0865f, 810.6581f, 119.8476f, 0f, 0f, 7.438104f, 1.767105f, 1.835083f, 2.892097f);
			_0x39816f6f94f385ad(Local_62.f_1292, -287.8211f, 811.3001f, 119.8509f, 0f, 0f, 56.65289f, 2.219849f, 1.859558f, 2.895981f);
			func_792(2);
			return false;
		case 2:
			if (func_60(1))
			{
				func_541();
			}
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_490()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_491()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_379(Local_62.f_390[0]->f_6);
			func_792(3);
			return false;
		case 3:
			func_379(-1025740342);
			func_379(Local_62.f_1198[0]->f_6);
			func_792(4);
			return false;
		case 4:
			func_871(func_671());
			func_792(5);
			return false;
		case 5:
			func_796(0, func_911(0), 0, "PBL_holdup");
			func_792(6);
			return false;
		case 6:
			func_913(func_912(), 15, 0, 0);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_492()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_871(func_671());
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_493()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_379(849871129);
			func_792(3);
			return false;
		case 3:
			func_871(func_671());
			func_871("SCRIPT_COMMON@GESTURES@UNAPPROVED");
			func_792(4);
			return false;
		case 4:
			func_796(4, func_795(4), 0, "PBL_GREET");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_494()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_381(Local_62.f_390[0]->f_6))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_381(-1025740342) && func_381(Local_62.f_1198[0]->f_6))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_874(func_671()))
			{
				func_792(5);
			}
			return false;
		case 5:
			if (func_799(0))
			{
				func_553(&(Local_62.f_1216[0]), "PBL_holdup", "SCENE_SDNGUN_HOLDUP");
				func_553(&(Local_62.f_1216[0]), "PBL_Breakout", "SCENE_SDNGUN_HOLDUP");
				func_792(6);
			}
			return false;
		case 6:
			if (func_914(func_912()))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_495()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_874(func_671()))
			{
				func_792(2);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_496()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_381(849871129))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_874(func_671()) && func_874("SCRIPT_COMMON@GESTURES@UNAPPROVED"))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_799(4))
			{
				func_553(&(Local_62.f_1216[4]), "PBL_WALK_TO_DOOR", "SCENE_VALDOC_HOLDUPBACKROOM");
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_497()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_877(Local_62.f_390[0], 0, 1, 1, 0))
			{
				func_878(Local_62.f_390[0], -1416131140, 1);
				func_49(&(Local_62.f_390[0]), 1, "PRNBG_GUARD_1", 0, "");
				func_536(&(Local_62.f_390[0]), 379542007, 0, 1);
				func_915(Local_62.f_390[0]->f_30[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
				func_915(Local_62.f_390[0]->f_30[1], "INTERACT_THREATEN", "", 648122183, 0, 0, 0, 1, 0);
				func_563(&(Local_62.f_390[0]->f_10), &(Local_62.f_390[0]->f_30), 0, 0);
				func_916(&(Local_62.f_390[0]->f_10), 2);
				func_916(&(Local_62.f_390[0]->f_10), 32);
				func_792(2);
			}
			return false;
		case 2:
			func_802(Local_62.f_1226[0], -1025740342, 2709.35f, -1289.55f, 48.62f, -70f, 1, 0);
			func_792(3);
			return false;
		case 3:
			func_49(Local_62.f_170, 1, func_47(), 1, func_48());
			func_587(Local_62.f_1247[1], 2711.697f, -1290.09f, 49.9692f, 0f, 0f, -151.821f, 2.977051f, 3.062256f, 2.693279f, "VOL_SDNGUN_KNOCK_CAM");
			Local_62.f_1247[3] = _0x0eb78c2b156635b1(-1612834106, 2709.911f, -1290.879f, 49.72172f, 0f, 0f, 117.4804f, 1.434951f, 0.75693f, 2.464767f);
			func_587(Local_62.f_1247[4], 2707.785f, -1290.242f, 49.95722f, 0f, 0f, -64.94954f, 12.39771f, 4.004883f, 3.524149f, "VOL_SDNGUN_BACK_ALLEY");
			func_587(Local_62.f_1247[0], 2706.972f, -1289.491f, 49.96861f, 0f, 0f, 25.25522f, 36.79766f, 16.82365f, 3.811966f, "VOL_SDNGUN_CLERK_WITNESS");
			func_587(&(Local_62.f_1292), 2710.613f, -1287.53f, 50.06406f, 0f, 0f, 24.96952f, 2.986572f, 2.919629f, 2.867367f, "volPrivateAreaWarning");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_498()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else if (func_119(&(Local_62.f_390[0]->f_9), 128))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			func_587(Local_62.f_1247[6], 1324.466f, -1324.087f, 78.08858f, 0f, 0f, -14.18379f, 1.293191f, 1.327865f, 2.428375f, "VOL_RHDGUN_ENTRANCE_TO_SIDE_ROOM");
			Local_62.f_1247[7] = _create_volume_aggregate_with_custom_name("VOL_RHDGUN_SIDE_ROOM");
			_0x39816f6f94f385ad(&(Local_62.f_1247[7]), 1327.023f, -1325.328f, 78.28873f, 0f, 0f, -14.72711f, 4.625021f, 2.69853f, 2.959683f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[7]), 1326.515f, -1325.87f, 75.39394f, 0f, 0f, -14.70922f, 4.504533f, 1.480919f, 3.065648f);
			func_587(Local_62.f_1247[5], 1327.292f, -1317.316f, 78.29865f, 0f, 0f, 75.23973f, 3.96383f, 11.51292f, 2.796783f, "VOL_RHDGUN_CLERK_WITNESS");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_499()
{
	switch (iLocal_32)
	{
		case 0:
			func_587(Local_62.f_1247[0], -285.2596f, 800.9596f, 119.3838f, 0f, 0f, 99.30715f, 9.906407f, 10.96855f, 4.142431f, "VOL_VALDOC_CLERK_WITNESS");
			func_587(Local_62.f_1247[5], -290.1873f, 812.7155f, 119.7612f, 0f, 0f, 99.6392f, 1.270813f, 2.118591f, 2.750534f, "VOL_VALDOC_EXAM_ROOM_PLAYER_KNOCK");
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_500()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_897(Local_62.f_1198[0], 831542679, Local_62.f_1241[4], 2710.566f, -1291.204f, 48.6323f, 841127028, 1, 0f, 0, "DOOR_NEW_GUNSHOP_INT_BACK", &uVar0, 4))
			{
				set_entity_rotation(&(Local_62.f_1198[0]), 0f, 0f, 115f, 2, true);
				func_792(2);
			}
			return false;
		case 2:
			func_917();
			func_587(Local_62.f_1247[6], 2707.534f, -1289.635f, 58.71498f, 0f, 0f, -154.9999f, 4.130923f, 9.709765f, 7.954615f, "VOL_SDNGUN_LOAD_GAMBLING_ASSETS");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_501()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_897(Local_62.f_1226[11], 849871129, Local_62.f_1241[1], -286.642f, 809.7845f, 118.4212f, -227429327, 0, 0f, 0, "DOOR_VAL_DOC_MID_RM", &uVar0, 4))
			{
				func_792(2);
			}
			return false;
		case 2:
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_502()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			if (func_275())
			{
				func_792(16);
			}
			else if (func_60(256))
			{
				func_792(16);
			}
			else
			{
				func_792(2);
			}
			return false;
		case 2:
			func_796(3, func_810(3), 0, "PBL_enter_basement");
			func_792(3);
			return false;
		case 3:
			func_796(2, func_810(2), 0, "PBL_enter_basement");
			func_792(4);
			return false;
		case 4:
			func_796(4, func_810(4), 0, "pbLeave");
			func_792(5);
			return false;
		case 5:
			func_379(-659125417);
			func_379(-1873394507);
			func_792(6);
			return false;
		case 6:
			func_379(-1345652903);
			func_871("script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs");
			func_792(7);
			return false;
		case 7:
			_0xf7ea250b9a919e03(2017973493, Local_62.f_170);
			_0xf7ea250b9a919e03(1215332025, Local_62.f_170);
			_0xf7ea250b9a919e03(-163226389, Local_62.f_170);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_503()
{
	switch (iLocal_32)
	{
		case 0:
			func_918(&(Local_62.f_1479[1]));
			func_96();
			func_792(1);
			return false;
		case 1:
			func_379(Local_62.f_390[0]->f_6);
			func_901(379542007);
			func_901(-183018591);
			func_792(2);
			return false;
		case 2:
			func_379(Local_62.f_390[1]->f_6);
			func_792(3);
			return false;
		case 3:
			func_379(Local_62.f_390[2]->f_6);
			func_792(4);
			return false;
		case 4:
			func_379(Local_62.f_390[3]->f_6);
			func_792(5);
			return false;
		case 5:
			func_796(5, func_795(5), 0, "PBL_OPEN_DOOR");
			func_792(6);
			return false;
		case 6:
			func_796(2, func_795(2), 0, 0);
			func_792(7);
			return false;
		case 7:
			func_796(3, func_795(3), 0, 0);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_504()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_799(3))
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_799(2))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_799(4))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_381(-659125417) && func_381(-1873394507))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_381(-1345652903))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_505()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_381(Local_62.f_390[0]->f_6))
			{
				if (func_797(0))
				{
					func_798(1057570823, -1658670882, &(Local_62.f_390[0]->f_8));
				}
				else
				{
					func_798(347599949, 1755543207, &(Local_62.f_390[0]->f_8));
				}
				func_792(1);
			}
			return false;
		case 1:
			if (func_800(&(Local_62.f_390[0]->f_8)))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_381(Local_62.f_390[1]->f_6))
			{
				if (func_797(0))
				{
					func_798(1057570823, -1269768390, &(Local_62.f_390[1]->f_8));
				}
				else
				{
					func_798(347599949, 54111189, &(Local_62.f_390[1]->f_8));
				}
				func_792(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[1]->f_8)))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_381(Local_62.f_390[2]->f_6))
			{
				if (func_797(0))
				{
					func_798(1057570823, -1046054427, &(Local_62.f_390[2]->f_8));
				}
				else
				{
					func_798(347599949, 1296547824, &(Local_62.f_390[2]->f_8));
				}
				func_792(5);
			}
			return false;
		case 5:
			if (func_800(&(Local_62.f_390[2]->f_8)))
			{
				func_792(6);
			}
			return false;
		case 6:
			if (func_381(Local_62.f_390[3]->f_6))
			{
				func_798(1026015877, 1755543207, &(Local_62.f_390[3]->f_8));
				func_792(7);
			}
			return false;
		case 7:
			if (func_800(&(Local_62.f_390[3]->f_8)))
			{
				func_792(8);
			}
			return false;
		case 8:
			if (func_904(379542007))
			{
				func_792(9);
			}
			return false;
		case 9:
			if (func_799(5))
			{
				func_553(&(Local_62.f_1216[5]), "PBL_CLOSE_SLIT", "SCENE_VALDOC_GANGOPENBACKROOM");
				func_553(&(Local_62.f_1216[5]), "PBL_BREAKOUT", "SCENE_VALDOC_GANGOPENBACKROOM");
				func_792(10);
			}
			return false;
		case 10:
			if (func_799(2))
			{
				func_792(11);
			}
			return false;
		case 11:
			if (func_799(3))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_506()
{
	switch (iLocal_32)
	{
		case 0:
			func_587(Local_62.f_1247[8], 1323.171f, -1322.009f, 75.27171f, 0f, 0f, 74.70825f, 7.163685f, 4.187109f, 2.689134f, "VOL_RHDGUN_BASEMENT_MAIN");
			Local_62.f_1290 = _create_volume_aggregate_with_custom_name("volPrivateArea");
			_0x39816f6f94f385ad(Local_62.f_1290, 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f);
			_0x39816f6f94f385ad(Local_62.f_1290, 1323.171f, -1322.009f, 75.27171f, 0f, 0f, 74.70825f, 7.163685f, 4.187109f, 2.689134f);
			_0x39816f6f94f385ad(Local_62.f_1290, 1326.515f, -1325.87f, 75.39394f, 0f, 0f, -14.70922f, 4.504533f, 1.480919f, 3.065648f);
			func_587(Local_62.f_1247[10], 1323.746f, -1320.139f, 75.21092f, 0f, 0f, -16.4689f, 4.153564f, 3.284973f, 2.540016f, "VOL_RHDGUN_CAPTIVE_BASEMENT_MELEE_BLOCK");
			func_792(1);
			return false;
		case 1:
			func_802(Local_62.f_1226[1], -1873394507, 1320.542f, -1324.328f, 73.94167f, -2.34f, 1, 1);
			func_792(2);
			return false;
		case 2:
			func_553(&(Local_62.f_1216[4]), "pbBedLoop", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(&(Local_62.f_1216[4]), "pbLeaveCorner", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(&(Local_62.f_1216[4]), "pbSawPlayer", "SCENE_RHDGUN_VICTIM_ALONE");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_507()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_877(Local_62.f_390[1], 1, 0, 1, 1))
			{
				if (!func_797(0))
				{
					func_878(Local_62.f_390[1], 54111189, 1);
				}
				else
				{
					func_878(Local_62.f_390[1], -1269768390, 1);
				}
				if (func_797(0))
				{
					sVar0 = "0130_G_M_M_UniCriminals_01_WHITE_01";
				}
				else
				{
					sVar0 = "0361_G_M_M_UniDuster_03_WHITE_01";
				}
				func_880(&(Local_62.f_390[1]), 0);
				func_49(&(Local_62.f_390[1]), 1, "ODR_PED4", 1, sVar0);
				func_919(Local_62.f_390[1], 379542007, 99);
				func_792(1);
			}
			return false;
		case 1:
			if (func_877(Local_62.f_390[3], 3, 0, 1, 1))
			{
				func_878(Local_62.f_390[3], 1755543207, 1);
				func_49(&(Local_62.f_390[3]), 1, "ODR_WHORE", 0, "");
				func_919(Local_62.f_390[3], 379542007, 99);
				func_319(Local_62.f_390[3], 317, 1);
				func_880(&(Local_62.f_390[3]), 0);
				func_792(2);
			}
			return false;
		case 2:
			if (func_877(Local_62.f_390[2], 2, 0, 1, 1))
			{
				if (func_797(0))
				{
					sVar0 = "1058_G_M_M_UniCriminals_01_WHITE_05";
				}
				else
				{
					sVar0 = "0362_G_M_M_UniDuster_03_WHITE_02";
				}
				func_49(&(Local_62.f_390[2]), 1, "ODR_PED3", 1, sVar0);
				if (!func_797(0))
				{
					func_878(Local_62.f_390[2], 1296547824, 1);
				}
				else
				{
					func_878(Local_62.f_390[2], -1046054427, 1);
				}
				func_880(&(Local_62.f_390[2]), 0);
				func_792(3);
			}
			return false;
		case 3:
			if (func_801())
			{
				func_792(4);
			}
			return false;
		case 4:
			func_908(Local_62.f_1226[12], 379542007, Local_62.f_390[3]->f_2, -1, 1);
			func_792(5);
			return false;
		case 5:
			func_536(&(Local_62.f_390[0]), 379542007, 0, 1);
			func_792(6);
			return false;
		case 6:
			func_536(&(Local_62.f_390[1]), 379542007, 0, 1);
			func_792(7);
			return false;
		case 7:
			func_536(&(Local_62.f_390[2]), -183018591, 0, 1);
			func_792(8);
			return false;
		case 8:
			func_536(&(Local_62.f_390[3]), 379542007, 0, 1);
			func_792(9);
			return false;
		case 9:
			func_587(Local_62.f_1247[6], -289.9398f, 811.4566f, 119.5628f, 0f, 0f, 100.8478f, 3.798035f, 1.370138f, 2.379475f, "VOL_VALDOC_EXAM_ROOM_PLAYER_VISIBLE");
			Local_62.f_1290 = _create_volume_aggregate_with_custom_name("volPrivateArea");
			_0x39816f6f94f385ad(Local_62.f_1290, -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			_0x39816f6f94f385ad(Local_62.f_1290, -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f);
			_0x39816f6f94f385ad(Local_62.f_1290, -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			_0x39816f6f94f385ad(Local_62.f_1290, -287.059f, 813.608f, 119.902f, 0f, 0f, -81.668f, 1.195f, 1.81f, 3.076f);
			_0x39816f6f94f385ad(Local_62.f_1290, -286.577f, 813.088f, 119.902f, 0f, 0f, -34.083f, 1.932f, 1.81f, 3.076f);
			func_587(Local_62.f_1247[7], -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f, "VOL_VALDOC_BACK_ROOM_TABLE");
			func_587(Local_62.f_1247[8], -285.7814f, 813.7166f, 119.902f, 0f, 0f, -80.51717f, 0.979869f, 4.291668f, 3.076f, "VOL_VALDOC_BACK_ROOM_FEMALE_ATTACKS");
			func_587(Local_62.f_1247[9], -286.748f, 813.5681f, 119.5226f, 0f, 0f, -169.9803f, 2.398071f, 0.985474f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_WALL_OPPOSITE_WINDOW");
			func_587(Local_62.f_1247[10], -284.858f, 816.3049f, 119.5226f, 0f, 0f, -169.9803f, 1.167563f, 2.149611f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_BEHIND_TABLE");
			func_587(Local_62.f_1247[11], -283.5127f, 817.321f, 119.5226f, 0f, 0f, -169.9803f, 1.167563f, 2.149611f, 2.273331f, "VOL_VALDOC_DEF_BACKROOM_CORNER_OPPOSITE_BED");
			Local_62.f_1247[12] = _create_volume_aggregate_with_custom_name("VOL_VALDOC_DEF_BACK_AREA");
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -289.3508f, 815.4742f, 119.902f, 0f, 0f, -169.6823f, 4.789f, 3.748076f, 2.998f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -285.237f, 814.137f, 119.901f, 0f, 0f, -169.702f, 3.176f, 8.058f, 3f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -287.059f, 813.608f, 119.902f, 0f, 0f, -81.668f, 1.195f, 1.81f, 3.076f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -286.577f, 813.088f, 119.902f, 0f, 0f, -34.083f, 1.932f, 1.81f, 3.076f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -289.4254f, 811.4766f, 119.8436f, 0f, 0f, -79.27305f, 4.243592f, 3.22765f, 2.880867f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -287.0865f, 810.6581f, 119.8476f, 0f, 0f, 7.438104f, 1.767105f, 1.835083f, 2.892097f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), -287.8211f, 811.3001f, 119.8509f, 0f, 0f, 56.65289f, 2.219849f, 1.859558f, 2.895981f);
			func_587(Local_62.f_1247[13], -283.0507f, 789.9854f, 118.3405f, 0f, 0f, 8.791835f, 10.69513f, 8.034945f, 4.109662f, "VOL_VALDOC_DEF_FRONT_OF_SHOP");
			Local_62.f_1247[14] = _create_volume_aggregate_with_custom_name("VOL_VALDOC_FLEE_BACKROOM_DOC");
			_0x39816f6f94f385ad(&(Local_62.f_1247[14]), -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[14]), -284.964f, 812.634f, 119.901f, 0f, 0f, -169.702f, 3.176f, 5.009279f, 3f);
			Local_62.f_1247[15] = _create_volume_aggregate_with_custom_name("VOL_VALDOC_FLEE_BACKROOM_FEMALE");
			_0x39816f6f94f385ad(&(Local_62.f_1247[15]), -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[15]), -286.224f, 816.8489f, 119.901f, 0f, 0f, -169.702f, 3.519681f, 2.151833f, 3.106757f);
			func_587(Local_62.f_1247[17], -291.0381f, 812.6501f, 119.6215f, 0f, 0f, 9.668242f, 0.509896f, 1f, 2.541101f, "VOL_VALDOC_DOC_KNOCK_LEFT_CORNER");
			func_792(10);
			return false;
		case 10:
			func_920();
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_508()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_383(Local_62.f_1226[2], -659125417, Local_62.f_1241[1], 1321.729f, -1319.462f, 74.2913f, 4, 0))
			{
				set_entity_collision(&(Local_62.f_1226[2]), true, false);
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_509()
{
	return true;
}

bool func_510()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_428(544152906, 1, 0);
			func_792(1);
			return false;
		case 1:
			func_379(Local_62.f_390[1]->f_6);
			func_792(2);
			return false;
		case 2:
			func_379(Local_62.f_390[2]->f_6);
			func_792(3);
			return false;
		case 3:
			func_379(Local_62.f_390[3]->f_6);
			func_792(4);
			return false;
		case 4:
			func_379(Local_62.f_390[4]->f_6);
			func_792(5);
			return false;
		case 5:
			func_379(-1448273283);
			func_792(6);
			return false;
		case 6:
			func_379(-64257206);
			func_379(-1763848034);
			func_792(7);
			return false;
		case 7:
			func_796(1, func_911(1), 0, "PBL_react_calm_guard");
			func_792(8);
			return false;
		case 8:
			func_796(2, func_911(2), 0, "PBL_gamblers_react");
			func_792(9);
			return false;
		case 9:
			func_796(3, func_911(3), 0, "PBL_cower_idle_pos_01");
			func_792(10);
			return false;
		case 10:
			func_796(4, func_911(4), 0, "PBL_cower_idle");
			func_792(11);
			return false;
		case 11:
			func_796(5, func_911(5), 0, "PBL_cower_idle");
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_511()
{
	switch (iLocal_32)
	{
		case 0:
			func_96();
			func_792(1);
			return false;
		case 1:
			func_379(1830978939);
			func_792(2);
			return false;
		case 2:
			func_796(6, func_795(6), 0, 0);
			func_792(3);
			return false;
		case 3:
			func_796(7, func_795(7), 0, "pbLoopToGun");
			func_792(4);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_512()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_921())
			{
				return false;
			}
			if (func_381(Local_62.f_390[1]->f_6))
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_381(Local_62.f_390[2]->f_6))
			{
				func_798(153532315, -1867922363, &(Local_62.f_390[2]->f_8));
				func_792(4);
			}
			return false;
		case 2:
			if (func_922(Local_62.f_390[2]->f_8))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_800(&(Local_62.f_390[2]->f_8)))
			{
				func_792(4);
			}
			return false;
		case 4:
			if (func_381(Local_62.f_390[3]->f_6))
			{
				func_798(153532315, -1088446160, &(Local_62.f_390[3]->f_8));
				func_792(5);
			}
			return false;
		case 5:
			if (func_800(&(Local_62.f_390[3]->f_8)))
			{
				func_792(6);
			}
			return false;
		case 6:
			if (func_381(Local_62.f_390[4]->f_6))
			{
				func_798(153532315, -721892122, &(Local_62.f_390[4]->f_8));
				func_792(7);
			}
			return false;
		case 7:
			if (func_800(&(Local_62.f_390[4]->f_8)))
			{
				func_792(8);
			}
			return false;
		case 8:
			if (func_381(-1448273283))
			{
				func_792(9);
			}
			return false;
		case 9:
			if (func_381(-64257206) && func_381(-1763848034))
			{
				func_792(10);
			}
			return false;
		case 10:
			if (func_799(1))
			{
				func_792(11);
			}
			return false;
		case 11:
			if (func_799(2))
			{
				func_792(12);
			}
			return false;
		case 12:
			if (func_799(3))
			{
				func_792(13);
			}
			return false;
		case 13:
			if (func_799(4))
			{
				func_792(14);
			}
			return false;
		case 14:
			if (func_799(5))
			{
				func_792(15);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_513()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_381(1830978939))
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_799(6))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_799(7))
			{
				func_792(16);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_514()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_877(Local_62.f_390[1], 1, 1, 1, 0))
			{
				func_878(Local_62.f_390[1], -1187370751, 1);
				func_49(&(Local_62.f_390[1]), 1, "PRNBG_GUARD_2", 0, "");
				func_536(&(Local_62.f_390[1]), 379542007, 1, 0);
				func_915(Local_62.f_390[1]->f_30[0], "INTERACT_DEFUSE", "", -163964935, 0, 0, 0, 1, 0);
				func_915(Local_62.f_390[1]->f_30[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
				func_563(&(Local_62.f_390[1]->f_10), &(Local_62.f_390[1]->f_30), 0, 0);
				func_916(&(Local_62.f_390[1]->f_10), 2);
				func_886(&(Local_62.f_390[1]->f_89), 1);
				set_ped_combat_attributes(&(Local_62.f_390[1]), 46, true);
				set_ped_combat_attributes(&(Local_62.f_390[1]), 5, true);
				func_792(1);
			}
			return false;
		case 1:
			if (func_877(Local_62.f_390[2], 2, 1, 1, 0))
			{
				func_878(Local_62.f_390[2], -1867922363, 1);
				func_49(&(Local_62.f_390[2]), 1, "NBG_GAMBLER1", 0, "");
				func_880(&(Local_62.f_390[2]), 0);
				func_923(&(Local_62.f_390[2]->f_10), &(Local_62.f_390[2]->f_30), 0);
				func_924(Local_62.f_390[2]);
				func_886(&(Local_62.f_390[2]->f_89), 1);
				func_894(&(Local_62.f_390[2]->f_89), (3f + 1f));
				func_792(2);
			}
			return false;
		case 2:
			if (func_877(Local_62.f_390[3], 3, 1, 1, 0))
			{
				func_878(Local_62.f_390[3], -1088446160, 1);
				func_49(&(Local_62.f_390[3]), 1, "NBG_GAMBLER2", 0, "");
				func_880(&(Local_62.f_390[3]), 0);
				func_923(&(Local_62.f_390[3]->f_10), &(Local_62.f_390[3]->f_30), 0);
				func_924(Local_62.f_390[3]);
				func_886(&(Local_62.f_390[3]->f_89), 1);
				func_894(&(Local_62.f_390[3]->f_89), (3f + 1f));
				func_792(3);
			}
			return false;
		case 3:
			if (func_877(Local_62.f_390[4], 4, 1, 1, 0))
			{
				func_878(Local_62.f_390[4], -721892122, 1);
				func_49(&(Local_62.f_390[4]), 1, "NBG_GAMBLER3", 0, "");
				func_880(&(Local_62.f_390[4]), 0);
				func_923(&(Local_62.f_390[4]->f_10), &(Local_62.f_390[4]->f_30), 0);
				func_924(Local_62.f_390[4]);
				func_886(&(Local_62.f_390[4]->f_89), 1);
				func_894(&(Local_62.f_390[4]->f_89), (3f + 1f));
				func_792(4);
			}
			return false;
		case 4:
			Local_62.f_1512[3] = create_scenario_point(func_925(), 2718.19f, -1286.58f, 59.37f, 22.686f, 0, 0, 0);
			func_792(5);
			return false;
		case 5:
			func_587(Local_62.f_1247[9], 2715.572f, -1291.827f, 60.88309f, 0f, 0f, 24.69529f, 8.219811f, 2.651759f, 3.022896f, "VOL_SDNGUN_GR_NO_FLEE_HALLWAY");
			func_587(Local_62.f_1247[10], 2718.81f, -1289.097f, 60.79719f, 0f, 0f, 116.026f, 4.957567f, 6.470684f, 2.932401f, "VOL_SDNGUN_GR_NO_FLEE_MIDDLE_WUSS");
			func_587(Local_62.f_1247[11], 2719.053f, -1284.771f, 60.46312f, 0f, 0f, -65.15909f, 2.596404f, 2.529723f, 2.15635f, "VOL_SDNGUN_GR_NO_FLEE_MIDDLE");
			func_792(6);
			return false;
		case 6:
			Local_62.f_1247[12] = _create_volume_aggregate_with_custom_name("VOL_SDNGUN_GR_NO_FLEE_SAFE");
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), 2715.935f, -1285.487f, 60.83199f, 0f, 0f, -65.15154f, 4.618412f, 4.339547f, 2.99431f);
			_0x39816f6f94f385ad(&(Local_62.f_1247[12]), 2716.459f, -1288.716f, 60.74099f, 0f, 0f, 24.56141f, 2.685233f, 3.350766f, 3.057338f);
			func_894(&(Local_62.f_390[2]->f_89), 1f);
			func_894(&(Local_62.f_390[3]->f_89), 1f);
			func_894(&(Local_62.f_390[4]->f_89), 1f);
			func_307(Local_62.f_1392[6]);
			func_792(16);
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

bool func_515()
{
	switch (iLocal_32)
	{
		case 0:
			if (func_927(Local_62.f_1226[1], -64257206, func_926(), 1073741824, 1, 0))
			{
				func_792(1);
			}
			return false;
		case 1:
			if (func_927(Local_62.f_1226[2], -1763848034, 2717.07f, -1284.59f, 59.35f, 1073741824, 1, 0))
			{
				func_792(2);
			}
			return false;
		case 2:
			if (func_927(Local_62.f_1226[3], -1763848034, 2718.74f, -1285.69f, 59.35f, 1073741824, 1, 0))
			{
				func_792(3);
			}
			return false;
		case 3:
			if (func_927(Local_62.f_1226[4], -1763848034, 2718.1f, -1286.65f, 59.35f, 1073741824, 1, 0))
			{
				func_792(4);
			}
			return false;
		default:
			break;
	}
	func_793();
	return true;
}

int func_516(bool bParam0, bool bParam1, bool bParam2)
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

void func_517(int iParam0)
{
	if (func_120(iParam0))
	{
		return;
	}
	Local_62.f_1623 = (Local_62.f_1623 || iParam0);
}

void func_518(var uParam0, int iParam1)
{
	if (func_542(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

float func_519(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_520(int* iParam0)
{
	if (func_221(16))
	{
		return;
	}
	set_entity_visible(&(Local_62.f_1226[0]), false);
	func_523(iParam0);
	func_224(16);
}

void func_521(int* iParam0, float fParam1, var uParam2)
{
	if (func_60(8388608))
	{
		return;
	}
	if (!func_55(128))
	{
		return;
	}
	if (!func_579(*iParam0, "DeputyHasRaisedHandToMoney"))
	{
		return;
	}
	if (fParam1 > 12f)
	{
		func_307(Local_62.f_1392[1]);
		func_307(Local_62.f_1392[2]);
	}
	if (_0x164cecc59e70df86(*iParam0, 45f))
	{
		func_307(Local_62.f_1392[2]);
		if (func_276(Local_62.f_1392[1], 5f, 1, "TIMER_VALDOC_SEEING_DEPUTY"))
		{
			func_29(33554432);
			func_788(uParam2);
			func_808(1);
		}
	}
	else if (func_276(Local_62.f_1392[2], 2f, 1, "TIMER_VALDOC_NOT_SEEING_DEPUTY"))
	{
		func_307(Local_62.f_1392[1]);
		func_307(Local_62.f_1392[2]);
	}
}

bool func_522(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (func_221(128))
	{
		bVar0 = true;
	}
	if (_0x7351da734f989f4e(*iParam0))
	{
		bVar0 = true;
	}
	if (func_542(&(iParam0->f_9), 2048))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_532("SVD_DEP_KNOCK", 0);
		func_130();
		func_223(iParam0, 0);
		return true;
	}
	return false;
}

void func_523(int* iParam0)
{
	if (func_221(32))
	{
		return;
	}
	func_130();
	func_928(&(Local_62.f_1216[0]), "objMoney", &(Local_62.f_1226[0]), "SCENE_VALDOC_DEPUTYKNOCK", 1, 0);
	func_928(&(Local_62.f_1216[0]), "pedDeputy", *iParam0, "SCENE_VALDOC_DEPUTYKNOCK", 1, 0);
	func_224(32);
}

void func_524(int iParam0, int iParam1)
{
	Local_62.f_1021[iParam1]->f_8 = iParam0;
}

bool func_525(int* iParam0)
{
	if (((iParam0->f_8 == 19 || iParam0->f_8 == 15) || iParam0->f_8 == 17) || iParam0->f_8 == 18)
	{
		return false;
	}
	return true;
}

bool func_526(int* iParam0)
{
	if (func_542(&(iParam0->f_9), 131072))
	{
		return false;
	}
	if (func_542(&(iParam0->f_9), 4096))
	{
		func_130();
		func_281(&(Local_62.f_1518), "SRVDDEPCOMBT", *iParam0, Global_35, 0, 0, 1, 1);
		func_518(&(iParam0->f_9), 131072);
		return true;
	}
	return false;
}

bool func_527(int* iParam0)
{
	if (func_542(&(iParam0->f_9), 32768))
	{
		return false;
	}
	if (!func_542(&(iParam0->f_9), 1024))
	{
		return false;
	}
	func_130();
	func_281(&(Local_62.f_1518), "SRVDDEPSHOCK", *iParam0, Global_35, 0, 0, 1, 1);
	func_518(&(iParam0->f_9), 32768);
	return true;
}

void func_528(int* iParam0)
{
	if (func_542(&(iParam0->f_9), 1048576))
	{
		return;
	}
	if (!func_280(&(Local_62.f_1216[0]), "SCENE_VALDOC_DEPUTYKNOCK", 0.737f))
	{
		return;
	}
	func_929(*iParam0, get_random_int_in_range(1000, 1200));
	func_518(&(iParam0->f_9), 1048576);
}

bool func_529(int* iParam0, float fParam1)
{
	if (!func_55(128))
	{
		return false;
	}
	if (func_542(&(iParam0->f_9), 65536))
	{
		return false;
	}
	if (iParam0->f_8 == 19)
	{
		return false;
	}
	if (func_542(&(iParam0->f_9), 32768) || func_221(8))
	{
		return false;
	}
	if (fParam1 > 2f)
	{
		return false;
	}
	func_532("SVD_DEP_KNOCK", 0);
	if (func_530())
	{
		func_34(Local_62, 16);
		func_118(Local_62, 524288);
	}
	func_130();
	func_518(&(iParam0->f_9), 65536);
	return true;
}

bool func_530()
{
	if (func_280(&(Local_62.f_1216[0]), "SCENE_VALDOC_DEPUTYKNOCK", 0.666f) && !func_280(&(Local_62.f_1216[0]), "SCENE_VALDOC_DEPUTYKNOCK", 0.956f))
	{
		return true;
	}
	return false;
}

bool func_531()
{
	if (func_930(4))
	{
		return Global_1935630->f_27;
	}
	return func_931();
}

void func_532(char* sParam0, bool bParam1)
{
	func_606(sParam0, bParam1, 0);
}

void func_533(int iParam0)
{
	if (func_335(iParam0))
	{
		return;
	}
	Local_62.f_1627 = (Local_62.f_1627 || iParam0);
}

bool func_534()
{
	iVar0 = &Local_62.f_1216[0];
	cVar1 = func_795(0);
	switch (iLocal_34)
	{
		case 0:
			if (_does_anim_scene_exist(&(Local_62.f_1216[0])))
			{
				func_794(1, &iLocal_34);
			}
			return false;
		case 1:
			func_805(iVar0, "pedDeputy", &(Local_62.f_1021[0]), cVar1, 1);
			func_794(2, &iLocal_34);
			return false;
		case 2:
			func_805(iVar0, "pedMoney", &(Local_62.f_1479[1]), cVar1, 1);
			func_794(3, &iLocal_34);
			return false;
		case 3:
			func_806(iVar0, "objDoorMoney", &(Local_62.f_1198[1]), cVar1, 1);
			func_794(4, &iLocal_34);
			return false;
		case 4:
			func_806(iVar0, "objMoney", &(Local_62.f_1226[0]), cVar1, 1);
			func_794(5, &iLocal_34);
			return false;
		case 5:
			func_277(&(Local_62.f_1216[0]), "bDeputyActionKnock", 0, "SCENE_VALDOC_DEPUTYKNOCK");
			func_794(26, &iLocal_34);
			return false;
		default:
			break;
	}
	func_804(&iLocal_34);
	return true;
}

void func_535(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (_is_anim_scene_started(iParam0, false))
	{
		return;
	}
	start_anim_scene(iParam0);
}

void func_536(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	_give_weapon_to_ped_2(iParam0, iParam1, 12, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	if (bParam3)
	{
		return;
	}
	set_current_ped_weapon(iParam0, iParam1, bParam2, 0, false, false);
	set_ped_current_weapon_visible(iParam0, bParam2, true, true, false);
}

bool func_537(int* iParam0, float fParam1)
{
	if (!func_55(128))
	{
		func_307(Local_62.f_1392[0]);
		return false;
	}
	if (fParam1 > 17f)
	{
		func_307(Local_62.f_1392[0]);
		return false;
	}
	if (_0x164cecc59e70df86(*iParam0, 45f))
	{
		if (func_276(Local_62.f_1392[0], 2.5f, 0, "TIMER_VALDOC_START_KNOCKING_SCENE"))
		{
			func_30(3, 8);
			return true;
		}
	}
	else
	{
		func_307(Local_62.f_1392[0]);
	}
	return false;
}

int func_538(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_67(vParam0))
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
		if (func_932(vParam0))
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
	if (iParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, iParam7);
	}
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_933(iVar0, bParam8);
	return iVar0;
}

void func_539(int iParam0, bool bParam1)
{
	if (func_159() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_934(32768))
	{
		return;
	}
	if (!func_934(32768))
	{
		func_935(1, bParam1);
	}
	_queue_savegame_operation(iParam0);
	_copy_memory((*Global_2621440)[iParam0], &Global_40, 12066);
	_copy_memory((*Global_2645573)[iParam0], &Global_12106, 5398);
	_copy_memory((*Global_2656370)[iParam0], &Global_17504, 3206);
	_copy_memory((*Global_2662783)[iParam0], &Global_20710, 2408);
	_copy_memory((*Global_2667600)[iParam0], &Global_23118, 1769);
	_copy_memory((*Global_2671139)[iParam0], &Global_24887, 1909);
	_copy_memory((*Global_2674958)[iParam0], &Global_26796, 777);
	_copy_memory((*Global_2676513)[iParam0], &Global_27573, 4501);
	_copy_memory((*Global_2685516)[iParam0], &Global_32074, 4234);
	if (func_934(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_192();
	}
}

void func_540(int* iParam0, bool bParam1)
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, -272.4044f, 817.3405f, 118.2066f, 1f, -1, 0.5f, 1, 40000f);
	task_follow_nav_mesh_to_coord(0, -262.8275f, 783.2795f, 117.3997f, 1f, -1, 0.5f, 1, 40000f);
	task_follow_nav_mesh_to_coord(0, -262.4757f, 762.1805f, 117.1513f, 1f, -1, 0.5f, 1, 40000f);
	task_achieve_heading(0, 101.08f, 0);
	func_936(0, -1982207864, 0, 0, 0, -1082130432);
	func_547(*iParam0, &iVar0, 0, 0, 1, 1);
	func_130();
	func_223(iParam0, bParam1);
}

void func_541()
{
	if (!_does_scenario_point_exist(&(Local_62.f_1512[3])))
	{
		Local_62.f_1512[3] = create_scenario_point_attached_to_entity(&(Local_62.f_1198[1]), func_937(), vLocal_59, 0f, 0, 0, 0);
	}
	if (!_does_scenario_point_exist(&(Local_62.f_1512[2])))
	{
		Local_62.f_1512[2] = create_scenario_point_attached_to_entity(&(Local_62.f_1198[1]), 321634111, vLocal_59, 0f, 0, 0, 0);
	}
}

bool func_542(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_543(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_938(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_939(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_544(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (!get_is_task_active(*iParam0, 3) && !_0x3ab6c7b0bb0df4b1(*iParam0, -1))
	{
		return false;
	}
	return true;
}

void func_545(var uParam0, bool bParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	set_entity_visible(*uParam0, bParam1);
}

void func_546(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	_delete_anim_scene(iParam0);
}

void func_547(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_548(int iParam0, int iParam1, bool bParam2)
{
	if (!func_145(iParam0, 0, 1))
	{
		return false;
	}
	if (get_script_task_status(iParam0, iParam1, true) == 1)
	{
		return true;
	}
	else if (bParam2)
	{
		if (get_script_task_status(iParam0, iParam1, true) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_549()
{
	if (func_335(2048))
	{
		return;
	}
	func_281(&(Local_62.f_1518), "SRVD_O3_SEEATK", &(Local_62.f_1479[1]), Global_35, 0, 0, 1, 1);
	func_533(2048);
}

bool func_550(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_is_anim_scene_started(iParam0, false))
	{
		return true;
	}
	return false;
}

bool func_551(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_552(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_941(iParam0, iParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, func_940(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

int func_553(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0) && !_is_anim_scene_finished(iParam0, false))
	{
		return 0;
	}
	_0xdf7b5144e25cd3fe(iParam0, sParam1);
	return 1;
}

bool func_554()
{
	if (func_942())
	{
		if (!is_entity_dead(&(Local_62.f_1021[0])))
		{
			func_928(&(Local_62.f_1216[0]), "pedPasserby", &(Local_62.f_1021[0]), "SCENE_RHDGUN_HELP", 1, 0);
			_task_smart_flee_style_ped(&(Local_62.f_1021[0]), Global_35, 0, 0, -1082130432, -1, 0);
		}
		func_553(&(Local_62.f_1216[0]), "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP");
		func_517(1);
		func_772(&(Local_62.f_390[0]->f_9), 512);
		return true;
	}
	if (((func_542(&(Local_62.f_1021[0]->f_9), 4096) || func_542(&(Local_62.f_1021[0]->f_9), 1024)) || func_542(&(Local_62.f_1021[0]->f_9), 2048)) || func_222(get_player_index(), 1, 0, 1))
	{
		func_943("PRRGS_IG3_PASS", 1);
		func_943("PRRGS_IG3_LEAVE", 1);
		func_928(&(Local_62.f_1216[0]), "pedPasserby", &(Local_62.f_1021[0]), "SCENE_RHDGUN_HELP", 1, 0);
		_task_smart_flee_style_ped(&(Local_62.f_1021[0]), Global_35, 3, 0, -1082130432, -1, 0);
		func_553(&(Local_62.f_1216[0]), "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP");
		func_553(&(Local_62.f_1216[0]), "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP");
		func_517(1);
		return true;
	}
	return false;
}

Vector3 func_555()
{
	return 1319.66f, -1318.6f, 76.92f;
}

void func_556()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[0])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[0];
	cVar1 = func_810(0);
	func_805(iVar0, "pedCaptive", &(Local_62.f_390[0]), cVar1, 1);
	if (!func_35(29, 1))
	{
		func_805(iVar0, "pedPasserby", &(Local_62.f_1021[0]), cVar1, 1);
	}
	func_277(iVar0, "BOOL_bars_loop", 0, cVar1);
	func_277(iVar0, "BOOL_bars_loop_reset", 0, cVar1);
}

bool func_557()
{
	if (func_438((*Global_1396257)[14]->f_626, 32768))
	{
		func_943("PRRGS_IG3_PASS", 0);
		func_943("PRRGS_IG3_GEST", 0);
		func_943("PRRGS_IG3_LEAVE", 0);
		return true;
	}
	else if (func_944() == 114)
	{
		func_943("PRRGS_IG3_PASS", 0);
		func_943("PRRGS_IG3_GEST", 0);
		func_943("PRRGS_IG3_LEAVE", 0);
		return true;
	}
	return false;
}

void func_558(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

bool func_559(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam0, true, bParam3))
	{
		return false;
	}
	if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		_0xdf7b5144e25cd3fe(iParam0, sParam1);
		return false;
	}
	return true;
}

bool func_560()
{
	if (func_113(&(Local_62.f_1216[0]), "bars_loop_reset", "SCENE_RHDGUN_HELP"))
	{
		return true;
	}
	return false;
}

void func_561(int iParam0)
{
	if (!func_44(iParam0))
	{
		return;
	}
	Local_62.f_170.f_11 = (Local_62.f_170.f_11 - (Local_62.f_170.f_11 && iParam0));
}

void func_562()
{
	func_278(&(Local_62.f_1216[0]), "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP", 1);
	func_277(&(Local_62.f_1216[0]), "BOOL_bars_loop", 0, "SCENE_RHDGUN_HELP");
	func_277(&(Local_62.f_1216[0]), "BOOL_bars_loop_reset", 1, "SCENE_RHDGUN_HELP");
}

void func_563(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		func_945(uParam1, 1, 0);
		func_916(uParam0, 4);
		func_916(uParam0, 8);
		func_916(uParam0, 16);
	}
	else
	{
		func_945(uParam1, 0, 0);
		if (bParam3)
		{
			func_946(uParam1, 1);
		}
		func_947(uParam0, 4);
		func_947(uParam0, 8);
		func_947(uParam0, 16);
	}
}

bool func_564(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = iParam2;
		Var0.f_4 = iParam4;
		Var0.f_7 = iParam3;
		Var0.f_9 = iParam5;
		Var0.f_10 = iParam6;
		return _0xfdf38e2b711bf78e(&Var0, 17);
	}
	return false;
}

void func_565(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 16384);
	}
	else
	{
		func_571(&(uParam0->f_1), 16384);
	}
}

void func_566(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 2048);
	}
	else
	{
		func_571(&(uParam0->f_1), 2048);
	}
}

void func_567(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_571(uParam0, 16);
	}
	else
	{
		func_570(uParam0, 67108864);
		func_570(uParam0, 16);
	}
}

void func_568(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 128);
	}
	else
	{
		func_571(&(uParam0->f_1), 128);
	}
}

void func_569(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_571(uParam0, 268435456);
	}
	else
	{
		func_570(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_571(uParam0, 1073741824);
	}
	else
	{
		func_570(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_571(uParam0, 536870912);
	}
	else
	{
		func_570(uParam0, 536870912);
	}
}

void func_570(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_571(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_572(int iParam0)
{
	func_29(32);
	switch (iLocal_29)
	{
		case 0:
			func_948(&(iParam0->f_170), 2717.7f, -1286.76f, 49.64f, 28.94f, 4, 711387733);
			func_949(iParam0->f_1198[0], 2710.52f, -1291.24f, 48.63f, 115f, 831542679);
			iLocal_55 = 5;
			func_948(iParam0->f_390[0], 2709.501f, -1289.789f, 48.61686f, 120.23f, 4, 153532315);
			func_948(iParam0->f_390[1], 2718.709f, -1290.507f, 59.79968f, 117f, 4, 153532315);
			func_948(iParam0->f_390[2], 2717.1f, -1284.647f, 59.8014f, -156.3f, 4, 153532315);
			func_948(iParam0->f_390[3], 2718.664f, -1285.685f, 59.80194f, 100.2f, 4, 153532315);
			func_948(iParam0->f_390[4], 2718.076f, -1286.574f, 59.80174f, 25.72f, 4, 153532315);
			iLocal_57 = 3;
			func_948(iParam0->f_1148[0], 2736.385f, -1261.81f, 48.7461f, 120.0673f, 6, -1448273283);
			func_948(iParam0->f_1148[1], 2733.991f, -1284.971f, 48.34156f, 119.73f, 6, -1448273283);
			func_948(iParam0->f_1148[2], 2720.63f, -1277.923f, 48.61246f, -159.81f, 6, -1448273283);
			iLocal_58 = 3;
			func_950(iParam0->f_1322[0], 2727.511f, -1268.382f, 48.6951f, 116.7662f, 1, 2, 3);
			func_950(iParam0->f_1322[1], 2728.385f, -1287.191f, 48.1483f, 112.7224f, 0, 0, 3);
			func_950(iParam0->f_1322[2], 2722.92f, -1286.642f, 48.2701f, 110.571f, 1, 2, 3);
			func_951(&(Local_62.f_1377[0]->f_3), 2);
			func_29(1024);
			break;
		case 1:
			func_948(&(iParam0->f_170), 1323.01f, -1323.315f, 76.8785f, -15.48f, 4, -1378192434);
			iLocal_55 = 1;
			func_948(iParam0->f_390[0], 1322.08f, -1318.69f, 74.94f, 86.34f, 4, 254009656);
			iLocal_54 = 2;
			func_948(iParam0->f_1021[0], 1319.66f, -1318.6f, 75.92f, 74.97f, 4, -1345652903);
			func_948(iParam0->f_1021[1], 1330.274f, -1325.169f, 76.10938f, -104.47f, 4, -1345652903);
			func_952(iParam0->f_1189[0], "DOOR_RHO_GUNSMITH_HALL", 1410133961, 1, 0, 0);
			break;
		case 2:
			func_31(32);
			func_948(&(iParam0->f_170), -1789.386f, -387.3255f, 159.3286f, 54.6488f, 4, 273671859);
			func_384(18);
			break;
		case 3:
			iLocal_54 = 1;
			func_948(iParam0->f_1021[0], -280.3181f, 815.7234f, 118.3201f, 109.92f, 6, 1830978939);
			func_518(&(iParam0->f_1021[0]->f_9), 1);
			func_948(&(iParam0->f_170), -288.2166f, 805.022f, 118.3859f, -73.32f, 4, 1901354405);
			func_949(iParam0->f_1198[0], -290.86f, 813.36f, 118.41f, 10f, 831542679);
			func_949(iParam0->f_1198[1], -281.15f, 816.34f, 118.41f, 100f, 1680756541);
			iLocal_55 = 4;
			iVar0 = 347599949;
			if (func_797(0))
			{
				iVar0 = 1057570823;
			}
			func_948(iParam0->f_390[0], -286.6212f, 815.0412f, 118.4032f, 11.81f, 22, iVar0);
			func_948(iParam0->f_390[1], -283.8656f, 812.5018f, 118.804f, 99.15f, 22, iVar0);
			func_948(iParam0->f_390[2], -282.21f, 814.5786f, 118.9627f, 11.12f, 22, iVar0);
			func_948(iParam0->f_390[3], -285.24f, 810.89f, 118.4f, 11.12f, 5, 1026015877);
			iLocal_56 = 3;
			func_950(iParam0->f_1297[0], -287.5924f, 813.6237f, 118.3859f, 104.776f, 0, 2, 4);
			func_950(iParam0->f_1297[1], -284.9759f, 816.2691f, 118.4031f, 99.0577f, 3, 0, 0);
			func_950(iParam0->f_1297[2], -283.7409f, 817.7656f, 118.3863f, 88.1278f, 1, 2, 7);
			iLocal_57 = 4;
			func_948(iParam0->f_1148[0], -276.3302f, 785.9387f, 121.4299f, 13.9461f, 6, 1830978939);
			func_948(iParam0->f_1148[1], -281.3563f, 785.8112f, 121.4299f, 358.6695f, 6, 1830978939);
			func_948(iParam0->f_1148[2], -283.4632f, 787.2012f, 121.4299f, 10.7127f, 6, 1830978939);
			func_948(iParam0->f_1148[3], -284.9185f, 774.9724f, 117.8383f, 0.11f, 6, 1830978939);
			iLocal_58 = 3;
			func_950(iParam0->f_1322[0], -275.8201f, 787.2756f, 121.4299f, 359.5503f, 3, 0, 0);
			func_950(iParam0->f_1322[1], -281.3504f, 787.3623f, 121.4299f, 357.3743f, 3, 0, 0);
			func_950(iParam0->f_1322[2], -283.0443f, 787.2126f, 121.4295f, 358.7795f, 3, 0, 0);
			break;
	}
}

bool func_573(var uParam0)
{
	if (is_valid_interior(*uParam0))
	{
		pin_interior_in_memory(*uParam0);
		return true;
	}
	return false;
}

bool func_574(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_159() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_575(int iParam0, bool bParam1)
{
	func_953(iParam0, &iVar0, &iVar1);
	if (!func_954(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_955(iVar0, iVar1);
}

void func_576(int iParam0)
{
	if (iParam0 == 4)
	{
		func_956(Global_1914319->f_3[iParam0]->f_20, 0, 0, 0, 1);
	}
	else
	{
		func_956(Global_1914319->f_3[iParam0]->f_20, 1, 1, 0, 1);
	}
	Global_1914319->f_17371 = 0;
}

void func_577(int* iParam0)
{
	if (!func_50(&(iParam0->f_13), 1))
	{
		return;
	}
	func_552(iParam0, &(iParam0->f_67), 15f, &(iParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432);
}

void func_578(var uParam0)
{
	if (!func_65())
	{
		return;
	}
	if (Local_62.f_1198[0]->f_7 != 7)
	{
		return;
	}
	func_128(Local_62.f_1512[1], "SPI_SDNGUN_BACK_DOOR_KNOCK");
	if (func_82())
	{
		return;
	}
	if (!func_74(Global_35, Local_62.f_1292))
	{
		func_307(Local_62.f_1392[0]);
		return;
	}
	if (!func_353(0, 1, 0, 0))
	{
		return;
	}
	if (!func_276(Local_62.f_1392[0], 1.5f, 0, "TIMER_SDNGUN_GUNSMITH_NOTICES_PLAYER_LOITERING_ON_BACK_AREA"))
	{
		return;
	}
	if (!func_44(536870912))
	{
		func_281(&(Local_62.f_1518), "SRNG_C_BACKRCT1", *uParam0, Global_35, 0, 0, 1, 1);
		func_91(536870912);
	}
	else if (!func_44(1073741824))
	{
		func_281(&(Local_62.f_1518), "SRNG_C_BACKRCT2", *uParam0, Global_35, 0, 0, 1, 1);
		func_91(1073741824);
	}
}

bool func_579(int iParam0, char* sParam1)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (has_anim_event_fired(iParam0, get_hash_key(sParam1)))
	{
		return true;
	}
	return false;
}

void func_580()
{
	if (((func_120(1) || func_120(2)) || func_120(8)) || func_120(16))
	{
		func_598(&(Local_62.f_153));
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[1])))
	{
		func_598(&(Local_62.f_153));
		return;
	}
	if (!func_82())
	{
		if (Local_62.f_1198[0]->f_7 != 7)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_597(&(Local_62.f_153), 0, 2, 1065353216);
	}
	else
	{
		func_598(&(Local_62.f_153));
	}
}

void func_581(int* iParam0)
{
	if (!func_50(&(iParam0->f_13), 1))
	{
		return;
	}
	iParam0->f_209 = func_552(iParam0, &(iParam0->f_67), 15f, &(iParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432);
}

void func_582(int* iParam0, var uParam1)
{
	iVar0 = &Local_62.f_1216[0];
	sVar1 = func_810(0);
	if (func_82())
	{
		return;
	}
	if (Local_62.f_1247[8]->f_1)
	{
		return;
	}
	if (!func_957() && iLocal_26 != 53)
	{
		if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar2, 0, 0))
		{
			if (iVar2 == 8 || iVar2 == 16)
			{
				func_302(0);
				func_39(16384);
				func_384(46);
			}
			else if (iVar2 == 1)
			{
				func_517(4);
				func_958(0, 1);
				func_384(53);
			}
		}
		else if (func_222(get_player_index(), 1, 0, 1))
		{
			func_302(0);
			func_553(iVar0, "PBL_react_to_gunfire", sVar1);
			func_384(47);
		}
	}
	if (!func_145(*iParam0, 0, 1))
	{
		func_143(1024, 0);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 1);
		return;
	}
	func_959();
	func_960(iParam0);
	if (func_65())
	{
		if (iLocal_26 > 1 && !func_221(8))
		{
			return;
		}
	}
	if (func_221(16777216))
	{
		return;
	}
	if (func_74(Global_35, &(Local_62.f_1247[5])))
	{
		return;
	}
	if (is_ped_in_combat(Global_35, 0))
	{
		if (func_961(Local_62.f_1294, 1, 1))
		{
			func_962(&(Local_62.f_1294), 1);
		}
		return;
	}
	set_ped_reset_flag(*iParam0, 281, true);
	if (func_963(iParam0, uParam1))
	{
		func_384(26);
	}
	if (func_621(Local_62.f_1392[3]))
	{
		if (func_620(Local_62.f_1392[3], 11.5f))
		{
			func_964(uParam1);
			func_307(Local_62.f_1392[3]);
		}
	}
	switch (iLocal_26)
	{
		case 0:
			func_319(iParam0, 297, 1);
			allow_sonar_blips(true);
			_set_scenario_group_enabled_hash(func_965(), true);
			func_553(iVar0, "PBL_react_to_gunfire", sVar1);
			func_886(&(iParam0->f_89), 1);
			func_384(1);
			break;
		case 1:
			if (!func_62(2))
			{
				if (!func_966(iParam0, "PBL_bars_callover_01"))
				{
					if (func_113(iVar0, "intro_action", sVar1))
					{
						if (func_280(iVar0, sVar1, 0.61f))
						{
							func_224(4);
						}
					}
					return;
				}
			}
			func_224(4);
			func_384(4);
			break;
		case 2:
			if (func_557())
			{
				return;
			}
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			if (!func_335(64))
			{
				func_281(&(Local_62.f_1518), "SRG_C_BARLEAVE1", *iParam0, Global_35, 0, 0, 1, 1);
				func_533(64);
				func_384(3);
			}
			else if (!func_335(128))
			{
				func_281(&(Local_62.f_1518), "SRG_C_BARLEAVE2", *iParam0, Global_35, 0, 0, 1, 1);
				func_533(128);
				func_384(3);
			}
			break;
		case 3:
			if (!func_967())
			{
				return;
			}
			if (!func_276(&(iParam0->f_123), 3f, 0, "captive.timerGenericB"))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_384(iLocal_27);
			break;
		case 4:
			if (func_557())
			{
				return;
			}
			if (!func_967())
			{
				return;
			}
			if (!func_35(29, 2))
			{
				func_34(29, 2);
			}
			else if (!func_35(29, 4))
			{
				func_34(29, 4);
			}
			else if (!func_35(29, 8))
			{
				func_34(29, 8);
			}
			func_660(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			set_blip_name_from_text_file(iParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
			func_558(249295937, *iParam0, 1);
			Local_62.f_1294 = func_968(*iParam0, &(Local_62.f_1247[4]), 0);
			func_969(iParam0, "SRGMHELP1", "SRGMHELP4", "SRGMBEGRT", "PRRGS_CALL_3_1", 256, 2048);
			func_39(8192);
			func_970();
			func_278(iVar0, "PBL_bars_callover_01", sVar1, 1);
			func_384(5);
			break;
		case 5:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_02", sVar1);
			func_384(6);
			break;
		case 6:
			if (!func_966(iParam0, "PBL_bars_callover_02"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 6;
				func_384(2);
				return;
			}
			func_969(iParam0, "SRGMHELP2", "SRGMHELP5", "SRGMURGE1", "PRRGS_CALL_3_2", 512, 4096);
			func_970();
			func_278(iVar0, "PBL_bars_callover_02", sVar1, 1);
			func_558(249295937, *iParam0, 1);
			func_384(7);
			break;
		case 7:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_03", sVar1);
			func_384(8);
			break;
		case 8:
			if (!func_966(iParam0, "PBL_bars_callover_03"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 8;
				func_384(2);
				return;
			}
			func_969(iParam0, "SRGMHELP3", "SRGMHELP6", "SRGMURGE2", "PRRGS_CALL_3_3", 1024, 8192);
			func_558(249295937, *iParam0, 1);
			func_970();
			func_278(iVar0, "PBL_bars_callover_03", sVar1, 1);
			func_384(9);
			break;
		case 9:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_04", sVar1);
			func_384(10);
			break;
		case 10:
			if (!func_966(iParam0, "PBL_bars_callover_04"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 10;
				func_384(2);
				return;
			}
			func_964(uParam1);
			func_969(iParam0, "SRGMHELP7", "SRGMHELP7", "SRGMURGE3", "PRRGS_CALL_3_4", 16384, 16384);
			func_970();
			func_278(iVar0, "PBL_bars_callover_04", sVar1, 1);
			func_384(11);
			break;
		case 11:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_05", sVar1);
			func_384(12);
			break;
		case 12:
			if (!func_966(iParam0, "PBL_bars_callover_05"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 12;
				func_384(2);
				return;
			}
			func_964(uParam1);
			func_281(&(Local_62.f_1518), "PRRGS_IG3_GEST", *iParam0, Global_35, 0, 0, 1, 1);
			func_970();
			func_278(iVar0, "PBL_bars_callover_05", sVar1, 1);
			func_384(13);
			break;
		case 13:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_06", sVar1);
			func_384(14);
			break;
		case 14:
			if (!func_966(iParam0, "PBL_bars_callover_06"))
			{
				return;
			}
			if (!func_967())
			{
				iLocal_27 = 14;
				func_384(2);
				return;
			}
			if (func_971(iParam0))
			{
				func_970();
				func_278(iVar0, "PBL_bars_callover_06", sVar1, 1);
			}
			func_384(15);
			break;
		case 15:
			if (!func_560())
			{
				return;
			}
			func_562();
			func_553(iVar0, "PBL_bars_callover_06", sVar1);
			func_384(14);
			break;
		case 26:
			set_ped_reset_flag(Global_35, 53, true);
			if (!func_559(iVar0, "PBL_bars_line_01", sVar1, 0))
			{
				return;
			}
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			func_970();
			if (!func_119(&(Local_62.f_390[0]->f_9), 32) && !func_119(&(Local_62.f_390[0]->f_9), 64))
			{
				func_281(&(Local_62.f_1518), "SRGMCUT1_ALT", *iParam0, Global_35, 0, 0, 1, 1);
			}
			func_278(iVar0, "PBL_bars_line_01", sVar1, 1);
			func_384(27);
			break;
		case 27:
			set_ped_reset_flag(Global_35, 53, true);
			if (!func_560())
			{
				return;
			}
			func_964(uParam1);
			func_562();
			func_553(iVar0, "PBL_bars_line_02", sVar1);
			func_890(&(Local_62.f_1368), &(Local_62.f_1369), 1322.678f, -1320.722f, 77.88906f, 0f, 0f, 0f, 1.145978f, 1.10736f, 2.194725f, 1, 0, 1, 0, 0);
			func_972();
			func_418(8);
			func_561(16);
			func_307(&(iParam0->f_123));
			func_384(35);
			break;
		case 35:
			if (!func_973(iParam0, 5f))
			{
				return;
			}
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_962(&(Local_62.f_1294), 1);
			func_281(&(Local_62.f_1518), "SRGM_REACT", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(40);
			break;
		case 40:
			if (!func_973(iParam0, 1092616192))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_281(&(Local_62.f_1518), "SRG_C_OUTLOIT1", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(41);
			break;
		case 41:
			if (!func_973(iParam0, 1092616192))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_281(&(Local_62.f_1518), "SRG_C_OUTLOIT2", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(42);
			break;
		case 42:
			if (!func_973(iParam0, 1092616192))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_281(&(Local_62.f_1518), "SRG_C_OUTLOIT3", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(43);
			break;
		case 43:
			if (!func_973(iParam0, 1092616192))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_281(&(Local_62.f_1518), "SRGM_REPLY", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(44);
			break;
		case 44:
			if (!func_973(iParam0, 1092616192))
			{
				return;
			}
			func_307(&(iParam0->f_123));
			func_281(&(Local_62.f_1518), "SRGM_BARS4", *iParam0, Global_35, 0, 0, 1, 1);
			func_384(45);
			break;
		case 45:
			break;
		case 46:
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			func_51(&(iParam0->f_12), 0);
			func_418(4);
			func_281(&(Local_62.f_1518), "SRGM_AIM", *iParam0, Global_35, 0, 0, 1, 1);
			func_278(&(Local_62.f_1216[0]), "PBL_react_to_gunfire", "SCENE_RHDGUN_HELP", 1);
			func_418(4);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			func_384(51);
			break;
		case 51:
			if (func_583(*iParam0, func_974(), "cower_on_bed_idle_captive"))
			{
				func_964(uParam1);
				func_51(&(iParam0->f_12), 0);
				func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
				func_418(4);
				func_224(2);
				func_384(53);
			}
			break;
		case 47:
			if (!func_559(iVar0, "PBL_react_to_gunfire", sVar1, 0))
			{
				return;
			}
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			func_418(4);
			func_278(iVar0, "PBL_react_to_gunfire", sVar1, 1);
			func_384(53);
			break;
		case 53:
			break;
	}
}

bool func_583(int iParam0, char* sParam1, char* sParam2)
{
	if (!func_145(iParam0, 0, 1))
	{
		return false;
	}
	if (!is_entity_playing_anim(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	return true;
}

bool func_584(int iParam0, int iParam1)
{
	return _is_ped_using_scenario_hash(iParam0, iParam1);
}

Vector3 func_585()
{
	return 0.431611f, 0.496073f, 1f;
}

void func_586()
{
	if (_does_volume_exist(&(Local_62.f_1247[13])))
	{
		return;
	}
	Local_62.f_1247[13] = _0x0eb78c2b156635b1(665633627, 1325.586f, -1325.658f, 78.09632f, 0f, 0f, 0f, 1.024458f, 0.93935f, 1.324957f);
}

void func_587(var uParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, cParam4, vParam7, sParam10);
}

void func_588(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	func_915((*uParam2)[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
	func_915((*uParam2)[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
	func_563(uParam1, uParam2, bParam3, bParam4);
	func_319(&iParam0, 297, 1);
	func_916(uParam1, 2);
}

Vector3 func_589()
{
	return 1323.27f, -1319.04f, 74.94f;
}

float func_590()
{
	return 162.01f;
}

void func_591(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_779(Global_35) && is_player_teleport_active())
	{
	}
	if (func_975(iParam0))
	{
		if (func_976(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_174(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_591(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_591(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_174(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_174(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_174(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_174(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_174(iParam5, 129))
	{
		if (func_174(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_174(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_174(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_174(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_975(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_174(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_174(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_592(var uParam0, char* sParam1, int iParam2)
{
	if (func_55(134217728))
	{
		return;
	}
	if (func_55(67108864))
	{
		return;
	}
	_0x3946fc742ac305cd(player_id(), uParam0, sParam1, vLocal_59, 0, 0);
	func_57(67108864);
}

void func_593(int iParam0, bool bParam1)
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

void func_594(char* sParam0, bool bParam1)
{
	set_scenario_type_enabled(sParam0, bParam1);
}

void func_595(char* sParam0, bool bParam1)
{
	_set_scenario_group_enabled_hash(get_hash_key(sParam0), bParam1);
}

void func_596(int* iParam0, char[4] cParam1, char[4] cParam2, bool bParam3)
{
	if (func_158())
	{
		func_281(&(Local_62.f_1518), cParam2, Global_35, *iParam0, 0, 0, 1, bParam3);
	}
	else
	{
		func_281(&(Local_62.f_1518), cParam1, Global_35, *iParam0, 0, 0, 1, bParam3);
	}
}

void func_597(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_977(sParam0, iParam2);
	func_978(iParam1, fParam3);
}

void func_598(char* sParam0)
{
	if (sParam0->f_16)
	{
		_0x0a5a4f1979abb40e(sParam0);
		if (!is_string_null_or_empty(sParam0) && _0xdd0b7c5ae58f721d(sParam0))
		{
			_0x798be43c9393632b(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_599(int* iParam0)
{
	if (!func_50(&(iParam0->f_13), 1))
	{
		return;
	}
	iParam0->f_209 = func_552(iParam0, &(iParam0->f_67), 15f, &(iParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432);
}

bool func_600()
{
	return is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER");
}

void func_601(bool bParam0)
{
	if (bParam0)
	{
		if (!is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER"))
		{
			set_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER", true);
		}
	}
	else if (is_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER"))
	{
		set_scenario_type_enabled("PROP_PLAYER_ROB_CASH_REGISTER", false);
	}
}

bool func_602(int iParam0, float fParam1, bool bParam2)
{
	iVar0 = 0;
	iVar2 = func_979(iParam0);
	if (iVar2 >= 15)
	{
		return false;
	}
	if (func_980(Global_35, Global_1914319->f_3[iParam0]->f_11, 1) > 900f)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar3 = &Global_1914319->f_3[iParam0]->f_317[iVar0];
		if (func_981(iVar3) && func_847(iVar3))
		{
			bVar1 = ((bParam2 || door_system_get_door_state(iVar3) == 2) || door_system_get_door_state(iVar3) == 1);
			if (bVar1)
			{
				if (func_67(Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1))
				{
					Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1 = { func_982(iVar3) };
				}
				if (func_980(Global_35, Global_1914319->f_3[iParam0]->f_317[iVar0]->f_1, 1) < (fParam1 * fParam1))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_603(int iParam0)
{
	if ((func_65() || func_74(Global_35, Local_62.f_1290)) || iParam0 == 1)
	{
		func_983(0.5f, 1028443341, 0, 106);
	}
}

void func_604(int iParam0)
{
	if (!func_984(iParam0))
	{
		return;
	}
	sVar0 = func_985(iParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		iVar1 = get_hash_key(sVar0);
		_0xbfcb17895bb99e4e(iVar1, 1);
		if (_0x113857d66a9cabe6(iVar1))
		{
		}
		_0x67b0778c62e74423(0);
		_0x6c03118e9e5c1a14(0);
	}
	else
	{
		iVar2 = get_interior_at_coords(Global_1914319->f_3[iParam0]->f_11);
		if (!is_valid_interior(iVar2))
		{
			return;
		}
		if (!is_interior_ready(iVar2))
		{
			return;
		}
		iVar3 = _0x5d1c5d8e62e8ee1c(iVar2);
		if (!_0x113857d66a9cabe6(iVar3))
		{
			_0xbfcb17895bb99e4e(iVar3, 1);
		}
	}
}

bool func_605(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0) && _0x1ecc76792f661cf5(sParam0))
	{
		return true;
	}
	return false;
}

void func_606(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

bool func_607(int iParam0, int iParam1)
{
	iVar0 = get_script_task_status(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_608()
{
	_get_scenario_point_close_to_coords(-1792.063f, -382.0621f, 157.4387f, 0.5f, &uVar0, 1);
	iVar2 = _get_scenario_point_entity(&(uVar0[0]), "p_brickplug01x");
	iVar3 = _get_scenario_point_entity(&(uVar0[0]), "MONEY");
	iVar4 = get_interior_at_coords(-1791.451f, -386.297f, 157.0676f);
	if (does_entity_exist(&(Local_62.f_1226[3])))
	{
		iVar5 = &Local_62.f_1226[3];
	}
	else
	{
		iVar5 = get_closest_object_of_type(-1789.762f, -387.8745f, 156.1009f, 0.25f, 1755911592, true, false, true);
	}
	if (does_entity_exist(iVar5))
	{
		iVar6 = get_room_key_from_entity(iVar5);
		if (iVar6 == 0)
		{
			iVar6 = 408691631;
		}
	}
	else
	{
		iVar6 = 408691631;
	}
	if (does_entity_exist(iVar2))
	{
		force_room_for_entity(iVar2, iVar4, iVar6);
	}
	if (does_entity_exist(iVar3))
	{
		force_room_for_entity(iVar3, iVar4, iVar6);
	}
}

char* func_609()
{
	return "PROP_PLAYER_STR_GEN_TRAP_DOOR";
}

bool func_610(int iParam0, int iParam1, bool bParam2, int iParam3)
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

char* func_611()
{
	return "PROP_PLAYER_STR_GEN_BSMT_LOOT";
}

char* func_612()
{
	return "LevDes_STR_Gen_Basement";
}

void func_613(int* iParam0)
{
	if (!func_50(&(iParam0->f_13), 1))
	{
		return;
	}
	iParam0->f_209 = func_552(iParam0, &(iParam0->f_67), 15f, &(iParam0->f_85), 0, 1, 0, 0, 3, 0, 2, -1082130432);
}

void func_614(int* iParam0)
{
	if (func_82())
	{
		return;
	}
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	switch (iLocal_26)
	{
		case 0:
			func_986(&(iParam0->f_89), 1);
			func_987(&(iParam0->f_89), *iParam0);
			func_893(&(iParam0->f_89), 1);
			func_894(&(iParam0->f_89), 4f);
			func_895(&(iParam0->f_89), 15);
			func_384(48);
			break;
		case 48:
			if (!func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
			{
				return;
			}
			if ((((iVar0 != 2 && iVar0 != 16384) && iVar0 != 4) && iVar0 != 256) && iVar0 != 4096)
			{
				return;
			}
			func_39(16384);
			func_384(49);
			break;
		case 49:
			func_278(&(Local_62.f_1216[1]), "PB_BREAKOUT", "SCENE_VALDOC_COUNTMONEY", 1);
			func_384(51);
			break;
		case 51:
			if (func_544(iParam0))
			{
				return;
			}
			func_813(*iParam0, func_988(), -118.69f, 2f, 1050253722, 0, 20000);
			set_ped_keep_task(*iParam0, true);
			func_384(52);
			break;
		case 52:
			if (func_548(*iParam0, 1435919172, 0))
			{
				return;
			}
			if (func_54(*iParam0, func_988(), 1) > 1.5f)
			{
				func_384(51);
			}
			else
			{
				func_384(53);
			}
			break;
		case 53:
			break;
	}
}

void func_615()
{
	if (func_62(32))
	{
		return;
	}
	if (!func_62(64))
	{
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			func_789(Local_62.f_1355[3], -284.5789f, 806.2164f, 119.6776f, 0f, 0f, -78.11449f, 4.971252f, 4.778488f, 2.892029f, 1, 0, 0);
			func_794(1, &iLocal_35);
			return;
		case 1:
			if (&Local_62.f_1475[0])
			{
				func_790(&(Local_62.f_1355[3]), 0);
			}
			func_794(2, &iLocal_35);
			return;
		case 2:
			func_789(Local_62.f_1355[4], -288.1165f, 807.6514f, 119.7524f, 0f, 0f, -169.9943f, 4.573074f, 3.492065f, 2.898163f, 1, 0, 0);
			func_794(3, &iLocal_35);
			return;
		case 3:
			if (&Local_62.f_1475[0])
			{
				func_790(&(Local_62.f_1355[4]), 0);
			}
			func_794(26, &iLocal_35);
			return;
		default:
			break;
	}
	func_39(32);
	func_422(64);
	func_804(&iLocal_35);
}

int func_616(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_989())
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
				if (func_990(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_519(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_317(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_991(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_993(func_992(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_617(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_152(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_34(iParam0, 32768);
	}
	if (bParam2)
	{
		func_34(iParam0, 1024);
	}
}

bool func_618(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		if (get_event_at_index(0, iVar0) == -1730772208)
		{
			bVar1 = func_994(uParam0, iVar0);
			if (bVar1)
			{
				func_323(uParam0, 8192);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_619(var uParam0, bool bParam1)
{
	if (bParam1 || !func_621(uParam0))
	{
		func_317(uParam0);
	}
}

bool func_620(var uParam0, float fParam1)
{
	if (!func_621(uParam0))
	{
		return false;
	}
	if (func_995(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_621(var uParam0)
{
	return func_996(*uParam0, 1);
}

bool func_622(int iParam0)
{
	iVar0 = func_778(player_ped_id(), 0);
	if (!is_weapon_valid(iVar0))
	{
		return false;
	}
	if ((_0x705be297eebdb95d(iVar0) || func_997(iVar0)) || (_is_weapon_melee(iVar0) && iVar0 != 2055893578))
	{
		if (func_998(iParam0, 8f, 25f, 1097859072, 0))
		{
			if (!_0x88ad6cc10d8d35b2(iParam0))
			{
				set_ped_config_flag(iParam0, 171, true);
				set_entity_as_mission_entity(iParam0, true, false);
			}
			set_blocking_of_non_temporary_events(iParam0, true);
			return true;
		}
	}
	return false;
}

void func_623(bool bParam0)
{
	if (func_286(Local_62.f_170, bParam0, 0, 0, 1, 0))
	{
		func_91(32768);
	}
}

bool func_624()
{
	switch (iLocal_29)
	{
		case 0:
			return &(Local_62.f_1247[0]);
		case 1:
			return &(Local_62.f_1247[5]);
		case 2:
			return false;
		case 3:
			return &(Local_62.f_1247[0]);
		default:
			break;
	}
	return false;
}

void func_625(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_626(int iParam0)
{
	if (!func_444(iParam0))
	{
		return -1;
	}
	return func_999(iParam0);
}

void func_627(int iParam0, bool bParam1, int iParam2)
{
	if (!func_444(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_413(iParam0) && !func_1000(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_1001(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_413(iParam0))
	{
		iParam2 = -1;
	}
	if (func_999(iParam0) == 3 || (func_999(iParam0) == 1 && _0x01f4d242765c6b24(func_1001(iParam0))))
	{
		func_1003(func_1002(iParam0), func_1001(iParam0), iParam2);
		if ((!func_444(Global_1572864->f_8) && !func_175(0, 1, 0)) && !func_1004(&Global_1935630, 32768))
		{
			iVar0 = func_1005(iParam0);
			if (iVar0 != -1)
			{
				func_1006(0);
			}
			else if (func_1002(iParam0) == 8)
			{
				iVar0 = func_1007();
				if (iVar0 != -1)
				{
					func_1006(0);
				}
			}
		}
	}
	func_1008(iParam0, 0);
	if (func_176(0) == iParam0)
	{
		func_421(1);
		func_1009(0);
		func_1010(1);
	}
	func_1011(iParam0, 1);
	func_414(iParam0);
}

void func_628(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

Vector3 func_629()
{
	switch (iLocal_29)
	{
		case 3:
			return -290.8588f, 813.3577f, 118.4116f;
		case 0:
			return 2711.83f, -1294.13f, 59.46f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_630()
{
	switch (iLocal_29)
	{
		case 3:
			return 0f, 0f, 10f;
		case 0:
			return 0f, 0f, 115f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_631()
{
	return 0.5f, 0.5f, 1f;
}

void func_632(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam9, vector3 vParam12, vector3 vParam15, var uParam18, float fParam19, float fParam20, float fParam21, bool bParam22, var uParam23, char* sParam24)
{
	if (*uParam2 == 7)
	{
		return;
	}
	if (is_entity_dead(*uParam1))
	{
		return;
	}
	if (!func_145(iParam3, 0, 1))
	{
		return;
	}
	if (func_42(iLocal_29, 8))
	{
		if ((Local_62.f_1620 % 10) == 0)
		{
			func_1012();
		}
	}
	switch (*uParam2)
	{
		case 0:
			if (!_is_ped_using_scenario_hash(Global_35, func_937()))
			{
				return;
			}
			func_30(iLocal_29, 8);
			func_1013(uParam2, 1);
			break;
		case 1:
			if (!func_579(Global_35, "Knock"))
			{
			}
			iVar0 = func_1014();
			if (is_entity_dead(iVar0))
			{
			}
			if (*uParam1 == iVar0)
			{
				set_entity_visible(iParam3, false);
				clear_ped_tasks(iParam3, 1, 0);
				set_entity_coords(iParam3, get_offset_from_entity_in_world_coords(*uParam1, 0.620003f, 0.264954f, -0.0340958f), true, false, true, true);
				set_ped_can_play_gesture_anims(iParam3, 0, 1);
				if (iLocal_29 == 0)
				{
					func_1015(0);
				}
				func_429(iParam0, 1, sParam24);
				func_1013(uParam2, 2);
			}
			else
			{
				func_1013(uParam2, 5);
			}
			break;
		case 2:
			set_entity_heading(iParam3, func_1016(get_entity_coords(iParam3, true, false), get_entity_coords(Global_35, true, false), 1));
			set_ped_can_play_gesture_anims(iParam3, 0, 1);
			func_1013(uParam2, 3);
			break;
		case 3:
			set_ped_can_play_gesture_anims(iParam3, 0, 1);
			if (!func_579(*uParam1, "DoorSlitStartOpen"))
			{
				return;
			}
			set_entity_visible(iParam3, true);
			func_1017();
			func_1013(uParam2, 4);
			break;
		case 4:
			set_ped_can_play_gesture_anims(iParam3, 0, 1);
			if (func_579(*uParam1, "DoorSlitFullyOpen"))
			{
				func_1013(uParam2, 6);
			}
			break;
		case 5:
			if (_is_ped_using_scenario_hash(Global_35, func_937()))
			{
				return;
			}
			func_1018();
			func_1013(uParam2, 0);
			break;
		case 6:
			set_ped_can_play_gesture_anims(iParam3, 0, 1);
			if (func_579(*uParam1, "DoorSlitClosed"))
			{
				func_1018();
			}
			if (!func_60(32768))
			{
				fVar1 = 1f;
				if (iLocal_29 == 0)
				{
					fVar1 = 0f;
				}
				if (func_276(&(Local_62.f_170.f_214), fVar1, 1, "shopRob.clerkData.timerGeneric"))
				{
					func_307(&(Local_62.f_170.f_214));
					if (!func_60(8192))
					{
						if (iLocal_29 == 0)
						{
							func_281(&(Local_62.f_1518), "SRNG_R1_PLKNOCK", iParam3, Global_35, 0, 0, 1, 1);
						}
						else if (iLocal_29 == 3)
						{
							if (!func_35(Local_62, 16) && !func_36(Local_62, 524288))
							{
								func_281(&(Local_62.f_1518), "SRVDOKNC1", iParam3, Global_35, 0, 0, 1, 1);
							}
							else
							{
								func_281(&(Local_62.f_1518), "SRVDOKNC3", iParam3, Global_35, 0, 0, 1, 1);
							}
						}
						func_29(8192);
					}
					else if (!func_60(16384))
					{
						if (!func_35(Local_62, 16) && !func_36(Local_62, 524288))
						{
							func_281(&(Local_62.f_1518), "SRVDOKNC2", iParam3, Global_35, 0, 0, 1, 1);
						}
						else
						{
							func_281(&(Local_62.f_1518), "SRVDOKNC4", iParam3, Global_35, 0, 0, 1, 1);
						}
						func_29(16384);
					}
					func_29(32768);
				}
			}
			if (_is_ped_using_scenario_hash(Global_35, func_937()))
			{
				return;
			}
			func_307(&(Local_62.f_170.f_214));
			func_1018();
			func_429(iParam0, 0, sParam24);
			func_898(&uParam4, &uParam5, vParam6, vParam9, vParam12, sParam24);
			func_1019(iParam3, vParam15);
			if (bParam22)
			{
				func_788(uParam23);
				if (iLocal_29 == 3)
				{
					func_29(33554432);
					if (func_56(Global_35, 0))
					{
						func_808(0);
					}
					else
					{
						func_808(1);
					}
				}
			}
			func_31(32768);
			func_1013(uParam2, 7);
			break;
		case 7:
			break;
	}
}

Vector3 func_633()
{
	switch (iLocal_29)
	{
		case 3:
			return -281.0128f, 815.1832f, 118.3586f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_634()
{
	switch (iLocal_29)
	{
		case 3:
			return 0f, 0f, 100f;
		default:
			break;
	}
	return vLocal_59;
}

Vector3 func_635()
{
	switch (iLocal_29)
	{
		case 3:
			return 0.5f, 0.5f, 1f;
		default:
			break;
	}
	return vLocal_59;
}

void func_636()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[8])))
	{
		return;
	}
	if (!is_entity_dead(&(Local_62.f_1226[13])))
	{
		set_entity_visible(&(Local_62.f_1226[13]), true);
		set_anim_scene_entity(&(Local_62.f_1216[8]), "objShotgunDoctor", &(Local_62.f_1226[13]), 0);
	}
	if (func_145(Local_62.f_170, 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[8]), "pedDoctor", Local_62.f_170, 0);
	}
	set_anim_scene_bool(&(Local_62.f_1216[8]), "bGrabShotgun", false, false);
}

void func_637()
{
	if (func_275())
	{
		return;
	}
	func_556();
	func_535(&(Local_62.f_1216[0]), "SCENE_RHDGUN_HELP");
	if (func_62(2))
	{
		func_278(&(Local_62.f_1216[0]), "PBL_BARS_LOOP", "SCENE_RHDGUN_HELP", 1);
	}
}

bool func_638()
{
	if (!func_221(8))
	{
		return false;
	}
	return true;
}

bool func_639()
{
	if (!func_221(2))
	{
		return false;
	}
	return true;
}

void func_640()
{
	if (!func_184(&Global_1327479))
	{
		return;
	}
	if (does_script_exist(&((*Global_1310750)[&Global_1327479]->f_40)))
	{
		if (has_script_loaded(&((*Global_1310750)[&Global_1327479]->f_40)))
		{
			set_script_as_no_longer_needed(&((*Global_1310750)[&Global_1327479]->f_40));
		}
	}
	func_1020(0);
	Global_1327479 = -1;
	Global_1310750->f_16075 = 0;
	Global_1310750->f_16076 = 0;
	Global_1310750->f_16103 = { 0f, 0f, 0f };
}

bool func_641()
{
	return true;
}

bool func_642()
{
	if (func_221(2))
	{
		return false;
	}
	return true;
}

bool func_643(var uParam0)
{
	if (func_574(499))
	{
		return false;
	}
	if (!Global_20710.f_2400)
	{
		return false;
	}
	if (func_175(80, 0, 1))
	{
		return false;
	}
	iVar1 = func_238(uParam0->f_51);
	if (!func_1021(iVar1))
	{
		return false;
	}
	if (func_1022(iVar1))
	{
		if (func_1023(iVar1, 32768))
		{
			return false;
		}
		return true;
	}
	if (uParam0->f_85 == -1)
	{
		iVar2 = 0;
		uParam0->f_85 = 0;
	}
	else
	{
		iVar2 = uParam0->f_85;
	}
	iVar0 = iVar2;
	while (iVar0 <= 25)
	{
		if (!func_1022(iVar0))
		{
			if (func_1023(iVar0, 32768))
			{
				func_1024(iVar0, 32768);
			}
		}
		uParam0->f_85++;
		return false;
		iVar0++;
	}
	uParam0->f_85 = -1;
	return false;
}

void func_644(int* iParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_222(player_id(), 1, 1, 0))
	{
		func_307(&(iParam0->f_53.f_3));
		return;
	}
	iParam0->f_53 = fParam1;
	iParam0->f_53.f_2 = fParam2;
	iParam0->f_53.f_1 = iParam3;
	func_317(&(iParam0->f_53.f_3));
}

void func_645(var uParam0, int iParam1)
{
	iVar0 = func_160();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	if (func_313(uParam0, 512) && !func_313(uParam0, 1024))
	{
		if (!func_145(iParam1, 0, 1))
		{
			return;
		}
		iVar1 = func_238(uParam0->f_51);
		if (func_222(player_id(), 0, 1, 0))
		{
			_task_smart_flee_style_ped(iParam1, Global_35, 4, 0, -1082130432, -1, 0);
			func_1025(&iParam1, 1, 1, 0);
			func_323(uParam0, 1024);
		}
		if (is_entity_in_volume(iParam1, Global_1914319->f_3[iVar1]->f_25, true, 0) || func_543(iParam1, Global_35, 1, 12f, 0))
		{
			bVar2 = false;
			if (does_entity_exist(*uParam0) && is_entity_dead(*uParam0))
			{
				bVar2 = true;
			}
			if (func_1026(iVar1))
			{
				clear_ped_tasks(iParam1, 1, 0);
				func_286(iParam1, 1, 0, 0, 1, bVar2);
				func_1025(&iParam1, 1, 1, 1);
			}
			else
			{
				clear_ped_tasks(iParam1, 1, 0);
				func_286(iParam1, 1, 0, 0, 1, bVar2);
				func_1025(&iParam1, 1, 1, 1);
			}
			func_323(uParam0, 1024);
		}
		else if (!is_ped_walking(iParam1) && !is_ped_fleeing(iParam1))
		{
			if (!func_313(uParam0, 2048))
			{
				task_follow_nav_mesh_to_coord(iParam1, func_1027(uParam0->f_51), 1.5f, -1, 0.25f, 0, 40000f);
				func_323(uParam0, 2048);
			}
		}
	}
}

void func_646(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_1028(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_51(iParam0, 0);
		}
	}
}

void func_647(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_1029((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_1028(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_648(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1030(iParam0, 4))
		{
			func_1028(&(iParam0->f_6), 1, 1);
			func_1031(iParam0, 4);
		}
	}
	else if (func_1030(iParam0, 4))
	{
		func_1032(iParam0, 4);
		func_1031(iParam0, 14);
	}
}

void func_649(var uParam0, int iParam1)
{
	if (func_50(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

int func_650(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_651(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

struct<2> func_652(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_653(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_654(var uParam0)
{
	if (uParam0->f_91 != 0)
	{
		if (_0x1ff441d7954f8709(uParam0->f_91))
		{
			iVar0 = _0x4735e2a4bb83d9da(uParam0->f_91);
			return iVar0;
		}
	}
	return 0;
}

void func_655(var uParam0)
{
	if (!func_313(uParam0, 33554432))
	{
		if (_is_anim_scene_loaded(&(uParam0->f_82[0]), true, false) || _is_anim_scene_loading(&(uParam0->f_82[0]), true))
		{
			iVar0 = func_654(uParam0);
			vVar1 = { get_entity_coords(iVar0, true, false) };
			freeze_entity_position(iVar0, true);
			set_anim_scene_origin(&(uParam0->f_82[0]), get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), 2);
			set_anim_scene_entity(&(uParam0->f_82[0]), "CLERK", *uParam0, 0);
			set_anim_scene_entity(&(uParam0->f_82[0]), "REGISTER", iVar0, 0);
			uParam0->f_60 = { get_offset_from_entity_in_world_coords(iVar0, 0.02f, -0.88f, 0f) };
			uParam0->f_63 = get_entity_heading(iVar0);
			func_1033(&(uParam0->f_60), 0f);
			func_323(uParam0, 33554432);
		}
	}
}

int func_656(var uParam0)
{
	uVar2 = 6;
	vVar10 = { get_entity_coords(*uParam0, false, false) };
	func_1034(&uVar2, 0);
	uParam0->f_64 = { func_1027(uParam0->f_51) };
	if (func_67(uParam0->f_64))
	{
		iVar9 = func_1035(&uVar0, &uVar2, 1, vVar10, 4f);
	}
	else
	{
		iVar9 = func_1035(&uVar0, &uVar2, 1, uParam0->f_64, 1.5f);
	}
	if (iVar9 <= 0)
	{
		if (!func_313(uParam0, 2))
		{
			func_323(uParam0, 2);
		}
	}
	else
	{
		if (func_313(uParam0, 2))
		{
			func_397(uParam0, 2);
		}
		return &(uVar0[0]);
	}
	return 0;
}

bool func_657(var uParam0, float fParam1)
{
	if (func_620(uParam0, fParam1))
	{
		func_307(uParam0);
		return true;
	}
	return false;
}

bool func_658(char* sParam0)
{
	if (_0xd89504d9d7d5057d(sParam0))
	{
		start_preloaded_conversation(sParam0);
		return true;
	}
	return false;
}

bool func_659(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_1036(cParam1, cParam0);
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

void func_660(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
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

char* func_661()
{
	switch (iLocal_29)
	{
		case 3:
			if (func_32(Local_62, 0, 1))
			{
				return "SVD_C_SNOOPPOST";
			}
			else
			{
				return "SVD_C_SNOOPPRE";
			}
			break;
	}
	return "";
}

bool func_662(int iParam0, int iParam1)
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

void func_663(int iParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = iParam0;
	uParam1->f_2 = -1547772340;
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = func_1037(func_160(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

void func_664(int iParam0, bool bParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(iParam0, 130, false);
		set_ped_config_flag(iParam0, 315, false);
		set_ped_config_flag(iParam0, 178, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 130, true);
		set_ped_config_flag(iParam0, 315, true);
		set_ped_config_flag(iParam0, 178, false);
	}
}

bool func_665(int iParam0, bool bParam1)
{
	if (func_159() != -1)
	{
		return false;
	}
	if (!func_166(iParam0))
	{
		return false;
	}
	if (!func_666(iParam0) && bParam1)
	{
		return false;
	}
	return func_167(iParam0, 1);
}

bool func_666(int iParam0)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

void func_667(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_166(iParam0))
	{
		return;
	}
	if (!func_167(iParam0, 1))
	{
		return;
	}
	if (!func_167(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_666(iParam0)) && func_1038(iParam0))
	{
		return;
	}
	func_1039(iParam0, 1);
	func_1040(iParam0);
	if (func_169(func_168(iParam0)))
	{
		iVar0 = func_45(iParam0);
		if (!_0x800df3fc913355f3(iVar0))
		{
			return;
		}
		_0xbb68908cd11aebdc(iVar0);
		_0xb65e7f733956cf25(iVar0);
		if (bParam2 && !_0xeb98b38ca60742d7(iVar0))
		{
			_0x631cd2d77fdc0316(iVar0);
		}
		iVar1 = _0x31c70a716cae1fee(iVar0);
		if (!is_ped_injured(iVar1))
		{
			set_ped_config_flag(iVar1, 171, false);
		}
		if (bParam1)
		{
			_0x7b204f88f6c3d287(iVar0);
		}
		func_1039(iParam0, 16);
	}
	if (func_167(iParam0, 128) && !bParam3)
	{
		func_775(iParam0, 0);
	}
}

void func_668(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_313(uParam0, 262144))
		{
			func_323(uParam0, 262144);
		}
	}
	else if (func_313(uParam0, 262144))
	{
		func_397(uParam0, 262144);
	}
}

bool func_669()
{
	if (func_313(&(Local_62.f_1), 256) || func_313(&(Local_62.f_1), 65536))
	{
		return true;
	}
	if (!func_276(&(Local_62.f_1459), 0.2f, 0, "shopRob.timerHoldupChecks"))
	{
		return false;
	}
	if (func_1041(Local_62))
	{
		return false;
	}
	if (func_374(Local_62.f_170, 1))
	{
		return true;
	}
	return false;
}

bool func_670()
{
	if (!func_65())
	{
	}
	else if (!func_621(&(Local_62.f_1453)))
	{
		func_619(&(Local_62.f_1453), 0);
	}
	else if (func_620(&(Local_62.f_1453), 10f))
	{
		return true;
	}
	return false;
}

char* func_671()
{
	return "script_proc@robberies@shop@valdoc@ig_3";
}

char* func_672()
{
	return "hands_up_enter_doc";
}

char* func_673()
{
	return "hands_up_loop_doc";
}

float func_674()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_675(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	func_713(iParam0, Global_36, 5, 0, 3);
	if (!is_ped_using_any_scenario(iParam0))
	{
		task_react(iParam0, Global_35, Global_36, "Default_Shocked", 1f, 0, 4);
	}
	open_sequence_task(&iVar0);
	if (is_ped_using_any_scenario(iParam0))
	{
		task_stand_still(0, 500);
	}
	task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, 0.3f, 0.52f);
	close_sequence_task(iVar0);
	task_perform_sequence(iParam0, iVar0);
	clear_sequence_task(&iVar0);
}

void func_676(int iParam0)
{
	iVar0 = Global_1914319->f_3[iParam0]->f_20;
	if (!func_444(iVar0))
	{
		return;
	}
	func_844(Global_1935630, 16);
	func_1042(iVar0, 1);
	func_1043(iVar0, 1, 0);
	Global_1914319->f_17371 = 1;
	func_156(Global_1914319->f_3[iParam0]->f_10, 1024);
}

int func_677(int iParam0)
{
	if (!func_165(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_678(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	func_1044(iParam0, iParam1);
}

void func_679(int iParam0, bool bParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(iParam0, 146, false);
		set_ped_config_flag(iParam0, 190, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 146, true);
		set_ped_config_flag(iParam0, 190, false);
	}
}

bool func_680(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	if (!func_1045(iParam0, &iVar0))
	{
		return false;
	}
	if (is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_159() == -1)
	{
		iVar1 = Global_1914319->f_3[iParam0]->f_10;
	}
	else
	{
		iVar1 = Global_1051260->f_48[iParam0]->f_16;
	}
	func_1047(iVar0, uParam1, iVar0, bParam2, func_1046(iVar1), 0, iParam3);
	return true;
}

void func_681()
{
	func_898(Local_62.f_1373[0], Local_62.f_1370[0], func_629(), func_630(), func_631(), "Interior Back Door");
}

void func_682(var uParam0, bool bParam1, int iParam2)
{
	func_1048(iParam2);
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
		uParam0->f_13 = func_1049(0);
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
							func_571(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1050(1))
						{
							func_571(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_1050(1) || *uParam0 & 8192 != 0))
				{
					func_570(uParam0, 33554432);
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
			if (func_1051(uParam0))
			{
				uParam0->f_15 = func_701();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_701() - uParam0->f_15) > 500)
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
	func_1052(uParam0);
}

bool func_683(int iParam0, var uParam1)
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
			if (!func_1053(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_1054(iParam0, iVar2) <= func_1055(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_684(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1056(iParam2, 1, 1, 1, 0))
	{
		func_571(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_1057(uParam1, 1);
	func_1058();
}

bool func_685(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_1059(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1060(uParam1);
			if (func_1061(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_1062(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_1057(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_1057(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_686(int iParam0, int iParam1, var uParam2)
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
	if (func_1063(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1060(uParam2);
		if (func_1061(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_1062(uParam2)
				{
					func_1057(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_687(int iParam0, var uParam1)
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
	if (func_1053(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_1062(uParam1)
		{
			fVar3 = func_1060(uParam1);
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

bool func_688(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_701();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_689(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_1064(uParam2);
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
			if (func_697(uParam2, iParam1))
			{
				func_1057(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_690(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_1065(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_697(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_1057(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_691(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1066(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_1057(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_1057(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1067(iParam1, vVar0, vVar4))
					{
						func_1057(uParam2, 1);
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
					func_1057(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1067(iParam1, vVar0, vVar7))
					{
						func_1057(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_692(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1053(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1068(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1069(&(Global_1935630->f_34[iVar0])))
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
			if (func_1070(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1071(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1072(uParam1, iParam0, fVar1, iVar0))
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

bool func_693(int iParam0, var uParam1)
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

bool func_694(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_701();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_695(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return true;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return true;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return true;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return true;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_1073(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return true;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return true;
		}
	}
	if (func_1074(iVar0, iParam0))
	{
		return true;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return true;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return true;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_696(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return true;
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
		return true;
	}
	return false;
}

bool func_697(var uParam0, int iParam1)
{
	if (func_1075(uParam0))
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

bool func_698(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_519(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_699()
{
}

bool func_700(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1076(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_701();
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
						if (func_54(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_701();
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

int func_701()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_702()
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
	if ((func_701() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_703(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_1055(uParam0);
	if (uParam0->f_12 > func_1077(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_1078(iParam1);
	iVar1 = func_1079(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_704(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1080(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_705(int iParam0, var uParam1)
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
		if (func_1081(iParam0, uParam1, 1))
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
					if (!func_1082(uParam1, iParam0))
					{
						if (func_54(iVar4, Global_36, 1) < 7f)
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

bool func_706(int iParam0, var uParam1)
{
	if (!func_1083(0))
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

bool func_707(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_701();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_708(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_709(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_701();
	}
	else if (func_701() - uParam1->f_4) > func_1084(uParam1)
	{
		return func_1085(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_710(var uParam0, int iParam1)
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

void func_711(int iParam0)
{
	if (!get_ped_config_flag(iParam0, 315, true))
	{
		_0xe98d55c5983f2509(iParam0);
		func_235(iParam0, 0);
	}
}

bool func_712(var uParam0)
{
	iVar0 = func_238(uParam0->f_51);
	if (iVar0 != 6 && func_160() != 92)
	{
		return false;
	}
	if (func_160() == 105 && func_732())
	{
		return false;
	}
	if (func_222(player_id(), 0, 1, 0))
	{
		return false;
	}
	if (func_1086(uParam0->f_90, Global_36))
	{
		if (_0xf256a75210c5c0eb(uParam0->f_90, func_1087(Global_35, 0.5f)))
		{
			return true;
		}
	}
	return false;
}

void func_713(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_430(iParam0, 0))
	{
		return;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return;
	}
	if (iParam5 && _0xf9331b3a314eb49d(iParam0))
	{
		_0xf1c03a5352243a30(iParam0);
		return;
	}
	if (func_67(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			_0x802092b07e3b1eea(iParam0, vParam1, iParam6);
			break;
		case 5:
			_0x463803429297117c(iParam0, vParam1, iParam6, 0);
			break;
		case 6:
			_0x62fdad5e01d2dd47(iParam0, vParam1, iParam6, 0);
			break;
		case 4:
			_0xec6935ebe0847b90(iParam0, vParam1);
			break;
		case 2:
			_0xeeed8fafec331a70(iParam0, vParam1, iParam6);
			break;
		case 1:
			_0xf1c03a5352243a30(iParam0);
			break;
		case 7:
			_0xa3a9299c4f2adb98(iParam0);
			break;
		default:
			_0xa3a9299c4f2adb98(iParam0);
			break;
	}
}

void func_714(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	func_1088(*uParam0);
	func_376(uParam0, iParam1, iParam2, iParam3);
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 190080028;
		case 7:
		case 17:
			return -787683245;
		case 19:
			return -439429058;
		case 39:
		case 41:
		case 42:
		case 43:
		case 47:
			return 1809883183;
		case 28:
		case 29:
			return 977834008;
		case 61:
			return 1127589605;
		case 73:
		case 74:
		case 75:
		case 82:
			return -2087759666;
		case 90:
			return 480011144;
		case 95:
			return -813796418;
	}
	return 525529657;
}

bool func_716(var uParam0, var uParam1, float fParam2, int iParam3, int iParam4, var uParam5)
{
	iVar0 = func_160();
	switch (iVar0)
	{
		case 92:
		case 120:
			return false;
	}
	if (!func_313(uParam0, 512))
	{
		if (!func_621(uParam1))
		{
			func_619(uParam1, 0);
			return false;
		}
		if (func_620(uParam1, fParam2) && func_1026(func_238(iParam3)))
		{
			func_1089(iParam4);
			vVar1 = { func_1090(iParam3) };
			if (!has_model_loaded(iParam4))
			{
				request_model(iParam4, false);
				return false;
			}
			if (func_1026(func_238(iParam3)) || would_entity_be_occluded(iParam4, vVar1, true))
			{
				*uParam5 = func_892(iParam4, vVar1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (func_145(*uParam5, 0, 1))
			{
				if (!is_entity_a_mission_entity(*uParam5))
				{
					set_entity_as_mission_entity(*uParam5, true, true);
				}
				set_blocking_of_non_temporary_events(*uParam5, true);
				set_ped_config_flag(*uParam5, 146, false);
				set_ped_config_flag(*uParam5, 148, false);
				set_ped_config_flag(*uParam5, 113, true);
				func_323(uParam0, 512);
				return true;
			}
		}
	}
	else if (func_145(*uParam5, 0, 1))
	{
		return true;
	}
	return false;
}

int func_717(int* iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, float fParam6)
{
	if (!func_1091(iParam0->f_7[0]))
	{
		switch (iParam0->f_49)
		{
			case 0:
				if (!func_651(0))
				{
					if (func_531())
					{
						func_1092(iParam0, "PLAYER_HOLDUP_ROB", bParam2);
						iParam0->f_49 = 1;
					}
				}
				break;
			case 1:
				if ((func_651(0) || !func_531()) || func_313(iParam0, 128))
				{
					func_1093(iParam0, bParam2);
					iParam0->f_49 = 2;
				}
				break;
			case 2:
				if (!func_651(0) && func_531())
				{
					func_1092(iParam0, "PLAYER_HOLDUP_ROB", bParam2);
					func_397(iParam0, 128);
					iParam0->f_49 = 1;
				}
				break;
		}
	}
	iVar2 = 1;
	iVar3 = 2;
	if (func_313(iParam0, 256))
	{
		if (!func_313(iParam0, 67108864) && !bParam5)
		{
			iVar3 = 3;
			func_51(iParam0->f_7[0], 0);
			func_323(iParam0, 67108864);
		}
	}
	iVar0 = func_1094(iParam0, iParam0->f_7[0], 30f, &(iParam0->f_26), &iVar2, iParam4, 1, 0, iParam0->f_92, 65792 | func_940(iVar3, 0, 0), iParam1, 0, 2, 0, -1082130432, 1);
	iVar1 = iVar0;
	if (func_1091(iParam0->f_7[0]))
	{
		if (!iParam0->f_88)
		{
			if (iParam0->f_7[0]->f_1 == 0)
			{
				func_754(*iParam0, 500);
				func_1095(iParam0, iParam0->f_7[0], &(iParam0->f_26), 30f, 65792 | func_940(3, 0, 0), iParam0->f_92, 2, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
				func_711(*iParam0);
				func_741(iParam0, 0, 0);
			}
			else if (iParam0->f_7[0]->f_1 == 1)
			{
				func_754(*iParam0, 500);
				func_711(*iParam0);
				func_741(iParam0, 0, 1);
			}
			func_619(&(iParam0->f_79), 0);
			iParam0->f_88 = 1;
		}
	}
	if (func_620(&(iParam0->f_79), 1f) && !func_620(&(iParam0->f_79), 2f))
	{
		if (!func_662(*iParam0, -875674219))
		{
			if (_0x916b8e075abc8b4e(*iParam0, 1) || !_0x02ebbb3989b7e695(*iParam0))
			{
				func_713(*iParam0, Global_36, 1, 0, 3);
			}
			else
			{
				func_713(*iParam0, Global_36, 5, 0, 3);
			}
			task_turn_ped_to_face_entity(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
		}
	}
	if (iParam0->f_88)
	{
	}
	switch (iVar1)
	{
		case 0:
			if (!bParam3)
			{
				func_644(iParam0, 14f, fParam6, 1);
			}
			add_shocking_event_for_entity(-1215290486, Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
			func_323(iParam0, 524288);
			func_307(&(iParam0->f_79));
			iParam0->f_88 = 0;
			break;
		case 1:
			func_323(iParam0, 65536);
			func_307(&(iParam0->f_79));
			iParam0->f_88 = 0;
			break;
	}
	return iVar1;
}

void func_718()
{
	switch (iLocal_29)
	{
		case 1:
			sVar0 = "Robberies_Shop_Take_Money_Scene";
			if (is_audio_scene_active(sVar0))
			{
				stop_audio_scene(sVar0);
			}
			break;
		default:
			break;
	}
}

void func_719()
{
	if (func_115(1))
	{
		return;
	}
	switch (iLocal_29)
	{
		case 1:
			remove_entity_from_audio_mix_group(Local_62.f_170, 0f);
			func_116(1);
			break;
	}
}

bool func_720()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

void func_721(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_222(player_id(), 1, 1, 0))
	{
		return;
	}
	iVar0 = func_160();
	switch (iVar0)
	{
		case 92:
		case 120:
			return;
	}
	uVar4[0] = Global_35;
	uVar4[1] = *uParam0;
	if (iParam2 != 0)
	{
		func_1096(&iVar1, &uVar4, iVar1, iParam2, 0, 0, 0, -1, 1, 0, 0, 0);
		_0xb56d41a694e42e86(iParam2, 8192, 0, 0, -1, -1, 4);
	}
	else
	{
		func_1097(&iVar1, &uVar4, Global_36, 10, iVar1, iParam1, iParam5, 0, 0, -1082130432);
	}
	iVar11 = player_id();
	iVar12 = get_interior_from_entity(Global_35);
	_0xd7494ded50c6ef52(iVar11, -1547772340, iParam3);
	func_1098(uParam0, &uVar14);
	iVar7 = 0;
	while (iVar7 < iVar1)
	{
		if (iVar13 >= iParam3)
		{
		}
		else if (func_1099(&(iVar1[iVar7]), iVar12))
		{
			func_713(&(iVar1[iVar7]), Global_36, 2, 0, 3);
			clear_ped_tasks(&(iVar1[iVar7]), 1, 0);
			set_ped_config_flag(&(iVar1[iVar7]), 146, false);
			set_ped_config_flag(&(iVar1[iVar7]), 148, false);
			set_ped_config_flag(&(iVar1[iVar7]), 190, bParam4);
			set_ped_config_flag(&(iVar1[iVar7]), 113, true);
			vVar8 = { get_entity_coords(&(iVar1[iVar7]), true, false) };
			_0x018f30d762e62df8(&(iVar1[iVar7]), &uVar14);
			set_ped_keep_task(&(iVar1[iVar7]), true);
			iVar13++;
		}
		iVar7++;
	}
	add_shocking_event_for_entity(-1215290486, Global_35, 10f, 10f, 10f, -1f, -1f, 180f, true, false, -1, -1);
}

void func_722(int iParam0)
{
	iLocal_44 = iParam0;
}

bool func_723()
{
	if (func_60(256))
	{
		return false;
	}
	if (!func_65())
	{
		return false;
	}
	if (func_44(64))
	{
		return false;
	}
	switch (iLocal_29)
	{
		case 1:
			if (!func_295())
			{
				return false;
			}
			break;
	}
	if (func_60(8388608))
	{
		return true;
	}
	if (!func_1100())
	{
		return false;
	}
	return true;
}

bool func_724()
{
	if (is_entity_dead(Local_62.f_170))
	{
		return true;
	}
	return false;
}

bool func_725()
{
	if (!func_313(&(Local_62.f_1), 32768))
	{
		func_323(&(Local_62.f_1), 32768);
	}
	if (!func_313(&(Local_62.f_1), 65536))
	{
		return false;
	}
	return true;
}

void func_726(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_674() - fParam1);
	func_1101(uParam0, 1);
	func_1102(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_727()
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_1103(), 1f, 30000, 0.1f, 0, 40000f);
	task_achieve_heading(0, -102.87f, 0);
	func_547(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	if (!func_60(2048))
	{
		func_596(&(Local_62.f_170), "SRGA_A_HOLDUP", "SRGA_J_HOLDUP", 1);
	}
	else
	{
		func_596(&(Local_62.f_170), "SRG_IG4_P1_a", "SRG_IG4_P1_J", 1);
	}
	func_553(&(Local_62.f_1216[1]), "pbAIToSideDoor", "SCENE_RHDGUN_HOLDUP");
	func_317(&(Local_62.f_1456));
	func_418(8);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	func_51(&(Local_62.f_390[0]->f_12), 0);
	set_ped_combat_attributes(Local_62.f_170, 46, true);
}

void func_728()
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_1105(), 1f, -1, 0.1f, 2097153, 40000f);
	task_achieve_heading(0, -5.31f, 0);
	func_547(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "PRNBG_IG1_AIM", "PRNBG_IG1_AIMJ", 0);
	func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 9000, vLocal_59, 1, 0);
	func_553(&(Local_62.f_1216[0]), "PBL_holdup", "SCENE_SDNGUN_HOLDUP");
	func_317(&(Local_62.f_1456));
	func_128(Local_62.f_1512[1], "SPI_SDNGUN_BACK_DOOR_KNOCK");
	func_879(&(Local_62.f_170.f_14), 1);
	func_896(&(Local_62.f_170.f_14), 1);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
}

void func_729()
{
	_0xb8de69d9473b7593(Local_62.f_170, 23);
	_0xb8de69d9473b7593(Local_62.f_170, 24);
	if (!_does_volume_exist(Local_62.f_1376))
	{
		Local_62.f_1376 = _0x0eb78c2b156635b1(-1612834106, -1790.353f, -389.5667f, 159.3297f, 0f, 0f, -35f, 2f, 2.5f, 5f);
	}
	iLocal_1777 = 1;
	func_608();
	func_412();
	func_239(3);
	func_29(64);
	func_34(Local_62, 524288);
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_1106(), 1f, 30000, 0.1f, 0, 40000f);
	task_achieve_heading(0, 147.08f, 0);
	func_547(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "PRSGS_DOWN", "PRSGS_DOWNJ", 1);
	func_553(&(Local_62.f_1216[0]), "pbOpenToBasement", "SCENE_STRGEN_HOLDUP");
	func_553(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP");
	func_317(&(Local_62.f_1456));
}

void func_730()
{
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, func_1107(), 1f, 30000, 0.1f, 0, 40000f);
	task_achieve_heading(0, 6.31f, 0);
	func_547(Local_62.f_170, &iVar0, 4f, 4f, 1, 1);
	func_596(&(Local_62.f_170), "SRVD_A_HUPBACK", "SRVD_J_HUPBACK", 1);
	func_553(&(Local_62.f_1216[4]), "PBL_KNOCK_DOOR", "SCENE_VALDOC_HOLDUPBACKROOM");
	func_1104(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
	func_317(&(Local_62.f_1456));
}

bool func_731(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

bool func_732()
{
	if (Global_1894899->f_187)
	{
		return true;
	}
	if (func_815(16) && !func_815(21))
	{
		return true;
	}
	return false;
}

bool func_733(int iParam0)
{
	if (_does_volume_exist(Local_62.f_1286))
	{
		if (func_74(iParam0, Local_62.f_1286))
		{
			if (!Local_62.f_1286.f_1)
			{
				Local_62.f_1286.f_1 = 1;
			}
			return true;
		}
	}
	return false;
}

bool func_734(int iParam0)
{
	return iParam0 != 0;
}

void func_735(var uParam0)
{
	*uParam0 = add_shocking_event_at_position(513747494, Global_36, 0f, -1f, -1f, -1f, -1f, -1, -1);
}

bool func_736(var uParam0, float fParam1)
{
	if (!func_313(uParam0, 33554432))
	{
		return true;
	}
	if (!func_145(*uParam0, 0, 1))
	{
		return true;
	}
	if (fParam1 != 30f)
	{
		fParam1 = 30f;
	}
	vVar0 = { get_entity_coords(*uParam0, true, false) };
	iVar3 = func_654(uParam0);
	if (does_entity_exist(iVar3))
	{
		vVar4 = { get_entity_coords(iVar3, true, false) };
	}
	fVar7 = get_distance_between_coords(vVar0, uParam0->f_60, false);
	fVar8 = get_distance_between_coords(Global_36, uParam0->f_60, false);
	fVar9 = get_distance_between_coords(Global_36, vVar4, false);
	if (fVar8 < 2f && fVar8 < fVar7)
	{
		if (fVar8 < fVar9)
		{
			return true;
		}
	}
	if ((fVar7 > 4f && fVar8 < 4f) && fVar8 < fVar7)
	{
		return true;
	}
	if (_is_ped_hogtied(*uParam0))
	{
		return true;
	}
	return false;
}

void func_737()
{
	if (func_335(4))
	{
		func_1108();
		return;
	}
	if (!func_276(&(Local_62.f_170.f_214), 10f, 0, "shoprob.clerkData.timerGeneric"))
	{
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	if (iLocal_29 != 0 && iLocal_29 != 1)
	{
		func_245(Local_62.f_170, Global_35, "HOLDUP_DONT_SHOOT", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	func_533(4);
}

bool func_738(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return true;
	}
	return false;
}

void func_739(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1030(iParam0, 13))
	{
		func_1031(iParam0, 0);
	}
	else
	{
		func_1032(iParam0, 0);
	}
	if (func_1029(iParam0->f_6))
	{
		if (bParam2)
		{
			func_1028(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_740(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return true;
	}
	return false;
}

void func_741(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!func_1030(iParam0->f_26[0], 0))
		{
			func_739(iParam0->f_26[0], 1, 0);
		}
		if (bParam2)
		{
			if (!func_1030(iParam0->f_26[1], 0))
			{
				func_739(iParam0->f_26[1], 1, 0);
			}
		}
	}
	else
	{
		if (func_1030(iParam0->f_26[0], 0))
		{
			func_739(iParam0->f_26[0], 0, 0);
		}
		if (bParam2)
		{
			if (func_1030(iParam0->f_26[1], 0))
			{
				func_739(iParam0->f_26[1], 0, 0);
			}
		}
	}
}

void func_742(var uParam0)
{
	task_follow_nav_mesh_to_coord(*uParam0, Local_62.f_1.f_60, 1f, 20000, 0.1f, 0, Local_62.f_1.f_63);
}

void func_743(int iParam0)
{
	Local_62.f_170.f_9 = iParam0;
}

void func_744()
{
	Local_62.f_170.f_9 = 0;
}

bool func_745(var uParam0)
{
	_0xdf7b5144e25cd3fe(&(uParam0->f_82[0]), "pblExitB");
	if (_0x23e33cb9f4a3f547(&(uParam0->f_82[0]), "pblExitB"))
	{
		iVar0 = func_654(uParam0);
		if (does_entity_exist(iVar0))
		{
			if (uParam0->f_70 < 0f)
			{
				vVar1 = { get_offset_from_entity_in_world_coords(iVar0, 0.074814f, -0.117756f, 0.059386f) };
				uParam0->f_2[0] = create_object(1477581656, vVar1, true, true, false, false, true);
				vVar1 = { get_offset_from_entity_in_world_coords(iVar0, -0.082664f, -0.117757f, 0.059386f) };
				uParam0->f_2[1] = create_object(1477581656, vVar1, true, true, false, false, true);
				uParam0->f_5 = create_scenario_point_attached_to_entity(iVar0, 325463335, 0f, 0f, 0f, 0f, 0, 0, 1);
				if (!func_53(func_1109(&(uParam0->f_82[0]), "pblExitB"), get_entity_coords(iVar0, true, false)))
				{
					set_anim_scene_origin(&(uParam0->f_82[0]), get_entity_coords(iVar0, true, false), get_entity_rotation(iVar0, 2), 2);
					set_anim_scene_entity(&(uParam0->f_82[0]), "CLERK", *uParam0, 0);
					set_anim_scene_entity(&(uParam0->f_82[0]), "REGISTER", iVar0, 0);
				}
				set_anim_scene_entity(&(uParam0->f_82[0]), "OOXO", &(uParam0->f_2[0]), 0);
				set_anim_scene_entity(&(uParam0->f_82[0]), "OXOO", &(uParam0->f_2[1]), 0);
				set_ped_move_anims_blend_out(*uParam0);
				uParam0->f_70 = func_674();
			}
			else if ((func_674() - uParam0->f_70) >= 0.2f)
			{
				clear_ped_tasks(*uParam0, 1, 0);
				start_anim_scene(&(uParam0->f_82[0]));
				_set_anim_scene_playback_list_bool(&(uParam0->f_82[0]), "pblExitB", true);
				return true;
			}
		}
		else
		{
			if (func_313(uParam0, 33554432))
			{
				func_397(uParam0, 33554432);
			}
			func_274(uParam0);
		}
	}
	return false;
}

void func_746(int* iParam0)
{
	if (!func_313(iParam0, 1))
	{
		freeze_entity_position(&(iParam0->f_2[0]), true);
		freeze_entity_position(&(iParam0->f_2[1]), true);
		_0x8360c47380b6f351(iParam0->f_5, &(iParam0->f_2[0]), "OOXO", 1);
		_0x8360c47380b6f351(iParam0->f_5, &(iParam0->f_2[1]), "OXOO", 1);
		iVar0[0] = _get_scenario_point_entity(iParam0->f_5, "OXOO");
		iVar0[1] = _get_scenario_point_entity(iParam0->f_5, "OOXO");
		if (does_entity_exist(&(iVar0[0])))
		{
			freeze_entity_position(&(iVar0[0]), true);
			set_entity_collision(&(iVar0[0]), true, false);
		}
		if (does_entity_exist(&(iVar0[1])))
		{
			freeze_entity_position(&(iVar0[1]), true);
			set_entity_collision(&(iVar0[1]), true, false);
		}
		func_323(iParam0, 1);
	}
}

char* func_747(var uParam0)
{
	if (uParam0->f_93 == -2)
	{
		uParam0->f_93 = func_1110(uParam0);
	}
	sVar0 = "pblExitB";
	switch (uParam0->f_93)
	{
		case 0:
			sVar0 = "pblExitB";
			break;
		case 1:
			sVar0 = "pblExitL";
			break;
		case 2:
			sVar0 = "pblExitR";
			break;
		case 3:
			sVar0 = "pblExitBFar";
			break;
		case 4:
			sVar0 = "pblExitLFar";
			break;
		case 5:
			sVar0 = "pblExitRFar";
			break;
		case 7:
			sVar0 = "pblExitL45";
			break;
		case 6:
			sVar0 = "pblExitR45";
			break;
	}
	return sVar0;
}

bool func_748(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (does_entity_exist(iParam0))
	{
		if (!bParam5 || !is_entity_dead(iParam0))
		{
			if (has_anim_event_fired(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_749(var uParam0)
{
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = Global_35;
	Var0.f_8 = 4;
	Var0.f_19 = 4;
	Var0.f_21 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_7 = 40000;
	_0x66f9eb44342bb4c5(*uParam0, &Var0);
}

bool func_750(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_751(int iParam0, bool bParam1)
{
	if (func_145(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_752(float fParam0)
{
	if (func_1111(1))
	{
		return true;
	}
	if (func_621(&uLocal_0) && !func_657(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_753(var uParam0, int iParam1, float fParam2)
{
	if (func_55(131072))
	{
		func_645(&(Local_62.f_1), *uParam0);
		return;
	}
	if (!func_55(65536))
	{
		if (!func_65())
		{
			return;
		}
		if (func_74(Global_35, Local_62.f_1290) || func_74(Global_35, Local_62.f_1292))
		{
			return;
		}
		if (!func_55(32768))
		{
			if (func_618(&(Local_62.f_1)))
			{
				Local_62.f_1619++;
			}
			if (Local_62.f_1619 < 10)
			{
				return;
			}
			func_57(32768);
		}
	}
	if (!func_276(&(Local_62.f_1465), fParam2, 0, "timerTriggerLoiterWitness"))
	{
		return;
	}
	func_57(65536);
	if (!func_716(&(Local_62.f_1), &(Local_62.f_1465), 1f, Local_62, iParam1, uParam0))
	{
		return;
	}
	func_307(&(Local_62.f_1465));
	func_57(131072);
}

void func_754(int iParam0, int iParam1)
{
	stop_current_playing_ambient_speech(iParam0, iParam1);
	stop_current_playing_speech(iParam0, iParam1);
}

bool func_755()
{
	return &Global_1935436 == 2;
}

void func_756(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_757()
{
	func_553(&(Local_62.f_1216[1]), "pbToTrapDoor", "SCENE_RHDGUN_HOLDUP");
	func_553(&(Local_62.f_1216[1]), "pbNoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP");
	func_553(&(Local_62.f_1216[1]), "pbTrapDoorWait", "SCENE_RHDGUN_HOLDUP");
}

void func_758()
{
	func_553(&(Local_62.f_1216[0]), "pbOpenToBasement", "SCENE_STRGEN_HOLDUP");
	func_553(&(Local_62.f_1216[0]), "pbLadderToCorner", "SCENE_STRGEN_HOLDUP");
	func_553(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP");
}

void func_759(int iParam0, int iParam1)
{
	func_425(&((*Global_1396257)[iParam0]->f_626), iParam1, 1);
}

bool func_760(int* iParam0, int* iParam1)
{
	iVar0 = &Local_62.f_1216[0];
	sVar1 = "SCENE_SDNGUN_HOLDUP";
	if (func_308(*iParam0, 0, &(iParam0->f_14), &uVar2, 0, 0))
	{
	}
	if (func_308(*iParam1, 0, &(iParam1->f_89), &uVar3, 0, 0))
	{
	}
	func_1112(iParam1, 0);
	bVar4 = false;
	bVar5 = false;
	func_1113(iVar0, sVar1, &bVar4, &bVar5);
	if (!func_1114(iVar0, sVar1))
	{
		if (func_74(*iParam0, &(Local_62.f_1247[1])))
		{
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 0, vLocal_59, 1, 0);
		}
	}
	if (!func_120(1) && !func_120(2))
	{
		if (!bVar4 && !bVar5)
		{
			if (func_1115(iVar0, sVar1, iParam0, &uVar2))
			{
				func_91(67108864);
				func_1116(1);
			}
		}
		else if (bVar4)
		{
			if (func_1117(iParam0, &uVar2))
			{
				func_1116(10);
			}
		}
	}
	if (func_1118(iVar0, sVar1, &uVar2, &uVar3))
	{
		func_1119(0);
		func_546(iVar0, sVar1);
		func_517(1);
		func_1116(12);
	}
	else if (func_1120(iVar0, sVar1, &uVar2, &uVar3))
	{
		func_1119(0);
		func_517(2);
		func_1116(11);
	}
	if (iLocal_45 < 9)
	{
		if (!func_145(*iParam0, 0, 1))
		{
			func_126(&(Local_62.f_1247[2]));
			func_254();
		}
	}
	switch (iLocal_45)
	{
		case 0:
			if (!func_799(0))
			{
				return false;
			}
			if (!func_221(32))
			{
				return false;
			}
			func_813(*iParam0, func_1121(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), func_1122(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), 1f, 0.1f, 0, -1);
			func_1123(2698.255f, -1295.365f, 53.11724f, 12.9f, 0);
			func_1123(2712.037f, -1293.516f, 48.61661f, 1.42f, 0);
			func_1123(2721.891f, -1289.936f, 48.68741f, 1.54f, 0);
			func_890(Local_62.f_1355[1], &(Local_62.f_1355[1]->f_1), 2697.768f, -1294.845f, 49.96861f, 0f, 0f, 25.25522f, 17.61353f, 13.00342f, 2.718853f, 1, 0, 1, 0, 0);
			func_890(Local_62.f_1355[2], &(Local_62.f_1355[2]->f_1), 2707.785f, -1290.242f, 49.95722f, 0f, 0f, -64.94954f, 12.39771f, 4.004883f, 3.524149f, 1, 0, 1, 0, 0);
			func_890(Local_62.f_1355[3], &(Local_62.f_1355[3]->f_1), 2715.482f, -1291.959f, 49.88335f, 0f, 0f, -65.30489f, 2.770508f, 16.50281f, 3.328354f, 1, 0, 1, 0, 0);
			func_890(Local_62.f_1355[4], &(Local_62.f_1355[4]->f_1), 2706.833f, -1290.677f, 56.07883f, 0f, 0f, 24.99879f, 6.821086f, 12.41846f, 14.92454f, 1, 0, 1, 0, 0);
			set_scenario_type_enabled("WORLD_HUMAN_SMOKE", false);
			set_scenario_type_enabled("PROP_HUMAN_SEAT_BENCH_PORCH", false);
			_0xf7ea250b9a919e03(2017973493, *iParam1);
			_0xf7ea250b9a919e03(1215332025, *iParam1);
			_0xf7ea250b9a919e03(-163226389, *iParam1);
			Local_62.f_1247[2] = _0x0eb78c2b156635b1(-1612834106, 2711.144f, -1290.38f, 49.9692f, 0f, 0f, -155.136f, 1.539864f, 2.14116f, 2.693279f);
			func_1116(3);
			break;
		case 1:
			if (is_ped_ragdoll(*iParam0))
			{
				return false;
			}
			if (_0x3bdfcf25b58b0415(*iParam0))
			{
				return false;
			}
			if (!func_799(0))
			{
				return false;
			}
			func_813(*iParam0, func_1121(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), func_1122(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0), 1f, 0.1f, 0, -1);
			func_91(67108864);
			func_1116(2);
			break;
		case 2:
			fVar6 = 3f;
			if (is_ped_ragdoll(*iParam0))
			{
				func_91(67108864);
				func_1116(1);
			}
			else if (_0x3bdfcf25b58b0415(*iParam0))
			{
				func_91(67108864);
				func_1116(1);
			}
			else if (func_1124(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0.4f, 55f, 0))
			{
				if (func_799(0))
				{
					func_1125();
					func_561(67108864);
					func_1116(6);
				}
			}
			else if (!func_1126(iParam0) && !func_548(Local_62.f_170, 1435919172, 0))
			{
				if (!func_276(&(iParam0->f_217), fVar6, 1, "gunsmith.timerIsInterrupted"))
				{
					return false;
				}
				func_307(&(iParam0->f_217));
				func_91(67108864);
				func_1116(1);
			}
			break;
		case 3:
			if (!func_799(0))
			{
				return false;
			}
			if (!func_1124(*iParam0, iVar0, "PED_GUNSMITH", "PBL_holdup", 0.4f, 55f, 0))
			{
				return false;
			}
			func_1125();
			func_1116(6);
			break;
		case 6:
			if (!func_113(iVar0, "wait_at_door_idle", sVar1))
			{
				return false;
			}
			func_1116(7);
			break;
		case 7:
			if (!func_353(-2.5f, 1, 0, 0))
			{
				return false;
			}
			func_281(&(Local_62.f_1518), "PRNBG_IG1_OPEN", *iParam0, *iParam1, 0, 0, 1, 1);
			func_553(iVar0, "PBL_pistol_whip", sVar1);
			func_553(iVar0, "PBL_butt_stock_hit", sVar1);
			func_553(iVar0, "PBL_alert_guard", sVar1);
			func_1116(8);
			break;
		case 8:
			if (func_113(iVar0, "wait_at_door_passin", sVar1))
			{
				return false;
			}
			else if (func_113(iVar0, "wait_at_door_idle", sVar1))
			{
				func_277(iVar0, "BOOL_STOP_WAIT_AT_DOOR_LOOP", 1, sVar1);
			}
			if (bVar4)
			{
				if (!func_280(iVar0, sVar1, 0.159f))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			func_297(*iParam0, *iParam1, &(iParam0->f_42), -1, vLocal_59, 1, 0);
			func_1116(9);
			break;
		case 9:
			if (!bVar5)
			{
				return false;
			}
			func_126(&(Local_62.f_1247[2]));
			func_224(8);
			func_1116(30);
			break;
		case 10:
			if (func_280(iVar0, sVar1, 0.399f))
			{
				func_126(&(Local_62.f_1247[2]));
				func_126(&(Local_62.f_1247[3]));
				func_224(64);
				func_1116(11);
			}
			else
			{
				func_546(iVar0, sVar1);
				func_1116(20);
			}
			break;
		case 11:
			if (!func_280(iVar0, sVar1, 0.451f) && func_1126(iParam0))
			{
				return false;
			}
			func_126(&(Local_62.f_1247[2]));
			func_126(&(Local_62.f_1247[3]));
			func_1127(*iParam1, 0);
			func_660(*iParam1, &(iParam1->f_1), 831283580, 580546400, 0, 0);
			func_1116(20);
			break;
		case 12:
			func_281(&(Local_62.f_1518), "PRNBG_NOOPEN2", *iParam1, Global_35, 0, 0, 1, 1);
			func_546(iVar0, sVar1);
			func_1116(20);
			break;
		case 20:
			if (is_entity_dead(*iParam0))
			{
				if (!func_120(32))
				{
					func_1116(31);
					return false;
				}
				else
				{
					func_1116(32);
					return false;
				}
			}
			func_1128(iParam0, "GUNSMITH");
			func_1116(21);
			break;
		case 21:
			if (!func_353(-2f, 1, 0, 0))
			{
				return false;
			}
			if (is_entity_dead(*iParam0))
			{
				if (!func_120(32))
				{
					func_1116(31);
					return false;
				}
				else
				{
					func_1116(32);
					return false;
				}
			}
			if (!func_120(2))
			{
				func_281(&(Local_62.f_1518), "PRNBG_NOOPEN1", *iParam0, Global_35, 0, 0, 1, 1);
				func_1116(31);
			}
			break;
		case 30:
			if (func_145(*iParam0, 0, 1))
			{
				set_ped_can_be_targetted(*iParam0, false);
			}
			func_281(&(Local_62.f_1518), "PRNBG_IG1_NERV", *iParam0, *iParam1, 0, 0, 1, 1);
			func_533(2048);
			func_1116(32);
			break;
		case 31:
			return false;
		case 32:
			return true;
	}
	return false;
}

bool func_761(var uParam0)
{
	fVar0 = 158.09f;
	if (is_entity_dead(*uParam0))
	{
		func_126(&(Local_62.f_1247[13]));
		func_254();
	}
	func_1129();
	func_1130(*uParam0);
	if (!is_entity_dead(*uParam0) && !func_221(1024))
	{
		if (((_does_anim_scene_exist(&(Local_62.f_1216[1])) && _is_anim_scene_started(&(Local_62.f_1216[1]), false)) && _0x3ab6c7b0bb0df4b1(*uParam0, &(Local_62.f_1216[1]))) && func_65())
		{
			if ((((func_113(&(Local_62.f_1216[1]), "ToTrapDoor", "SCENE_RHDGUN_HOLDUP") || func_113(&(Local_62.f_1216[1]), "AIToDoor", "SCENE_RHDGUN_HOLDUP")) || func_113(&(Local_62.f_1216[1]), "NoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP")) || func_113(&(Local_62.f_1216[1]), "OpenTrapDoor", "SCENE_RHDGUN_HOLDUP")) || func_113(&(Local_62.f_1216[1]), "AIToTrapDoor", "SCENE_RHDGUN_HOLDUP"))
			{
				set_ped_config_flag(Local_62.f_170, 137, true);
				set_ped_config_flag(Local_62.f_170, 169, true);
				set_ped_config_flag(Local_62.f_170, 170, true);
				set_ped_config_flag(Local_62.f_170, 302, true);
				set_entity_proofs(Local_62.f_170, 16, false);
			}
			else
			{
				set_ped_config_flag(Local_62.f_170, 137, false);
				set_ped_config_flag(Local_62.f_170, 169, false);
				set_ped_config_flag(Local_62.f_170, 170, false);
				set_ped_config_flag(Local_62.f_170, 302, false);
				set_entity_proofs(Local_62.f_170, 0, false);
			}
		}
		else
		{
			set_ped_config_flag(Local_62.f_170, 137, false);
			set_ped_config_flag(Local_62.f_170, 169, false);
			set_ped_config_flag(Local_62.f_170, 170, false);
			set_ped_config_flag(Local_62.f_170, 302, false);
			set_entity_proofs(Local_62.f_170, 0, false);
		}
	}
	if (func_221(256) && !func_221(1024))
	{
		if (is_entity_dead(*uParam0))
		{
			return true;
		}
	}
	func_308(*uParam0, 0, &(uParam0->f_14), &uVar1, 0, 0);
	if (func_1131(*uParam0))
	{
		if (!func_221(256))
		{
			if (iLocal_45 != 5 && iLocal_45 != 6)
			{
				func_1132(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", 1);
				func_546(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP");
				func_796(1, func_810(1), 0, "pbAIToSideDoor");
				func_1116(5);
			}
		}
		else if (!func_221(1024))
		{
			if (iLocal_45 != 10 && iLocal_45 != 11)
			{
				func_546(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP");
				func_796(1, func_810(1), 0, "pbAIToDoor");
				func_1116(10);
			}
		}
	}
	switch (iLocal_45)
	{
		case 0:
			if (!func_353(-3f, 1, 0, 0))
			{
				return false;
			}
			if (func_812(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", "pbToTrapDoor"))
			{
				func_1116(1);
			}
			else if (func_583(*uParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_upstairs", "door_loop_owner"))
			{
				_0x66f9eb44342bb4c5(*uParam0, &(uParam0->f_42));
				func_278(&(Local_62.f_1216[1]), "pbToTrapDoor", "SCENE_RHDGUN_HOLDUP", 1);
				func_596(Local_62.f_390[0], "SRGKNOOPN", "SRGKNOOPNJ", 1);
				func_1116(1);
			}
			break;
		case 1:
			_0x66f9eb44342bb4c5(*uParam0, &(uParam0->f_42));
			func_1116(2);
			break;
		case 2:
			if (func_280(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", 0.99f))
			{
				if (func_1133(uParam0))
				{
					func_586();
					func_278(&(Local_62.f_1216[1]), "pbNoWaitOpenTrap", "SCENE_RHDGUN_HOLDUP", 1);
					func_281(&(Local_62.f_1518), "SRG_OPEN_TRAP2", Local_62.f_170, Global_35, 0, 0, 1, 1);
					func_1116(32);
				}
				else
				{
					func_278(&(Local_62.f_1216[1]), "pbTrapDoorWait", "SCENE_RHDGUN_HOLDUP", 1);
					func_1116(3);
				}
			}
			break;
		case 3:
			if (func_1133(uParam0))
			{
				func_586();
				func_277(&(Local_62.f_1216[1]), "bStopWaitTrapDoorLoop", 1, "SCENE_RHDGUN_HOLDUP");
				func_281(&(Local_62.f_1518), "SRG_OPEN_TRAP", *uParam0, Global_35, 0, 0, 1, 1);
				func_1116(32);
			}
			break;
		case 5:
			if (is_ped_ragdoll(*uParam0))
			{
				return false;
			}
			func_1134(*uParam0, &uVar1);
			func_813(*uParam0, func_1103(), -102.87f, 1f, 0.1f, 0, 20000);
			func_1116(6);
			break;
		case 6:
			if (is_ped_ragdoll(*uParam0))
			{
				func_1116(5);
			}
			else if (func_1135(*uParam0, func_1103(), -102.87f, 0.15f, 90f, 1))
			{
				if (func_799(1))
				{
					func_1136();
					func_535(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP");
					func_757();
					func_1116(2);
				}
			}
			else if (!func_548(*uParam0, 1435919172, 1))
			{
				func_1116(5);
			}
			break;
		case 10:
			if (is_ped_ragdoll(Local_62.f_170))
			{
				return false;
			}
			func_1134(*uParam0, &uVar1);
			func_813(*uParam0, 1326.555f, -1324.745f, 76.88701f, fVar0, 1065353216, 1050253722, 0, 20000);
			func_1116(11);
			break;
		case 11:
			if (is_ped_ragdoll(Local_62.f_170))
			{
				func_1116(10);
			}
			else if (func_1135(Local_62.f_170, 1326.555f, -1324.745f, 77.88701f, fVar0, 0.4f, 20f, 1))
			{
				if (func_799(1))
				{
					func_1136();
					func_535(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP");
					func_757();
					func_1116(12);
				}
			}
			else if (!func_548(Local_62.f_170, 1435919172, 1))
			{
				func_1116(10);
			}
			break;
		case 12:
			if (func_221(1024))
			{
				func_1116(32);
			}
			break;
		case 32:
			if (!is_entity_dead(*uParam0))
			{
				set_ped_can_be_targetted(*uParam0, false);
			}
			func_426(934926308, 0, 0, 0, 1, 0, 0, 0);
			return true;
	}
	return false;
}

bool func_762(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (func_1137(iParam0))
	{
		func_1116(2);
	}
	switch (iLocal_45)
	{
		case 0:
			if (!func_353(-3f, 1, 0, 0))
			{
				return false;
			}
			if (func_583(*iParam0, func_1138(), "trapdoor_idle"))
			{
				func_278(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP", 1);
				func_1116(3);
				_0xae6004120c18df97(Local_62.f_170, 0, 0);
			}
			break;
		case 1:
			if (!is_ped_ragdoll(Local_62.f_170))
			{
				if (!func_335(2048))
				{
					func_281(&(Local_62.f_1518), "PRSGS_HURT1", Local_62.f_170, Global_35, 0, 0, 1, 1);
					func_533(2048);
				}
				func_813(Local_62.f_170, func_1106(), 147.08f, 1065353216, 1050253722, 0, 20000);
				func_1116(2);
			}
			break;
		case 2:
			if (is_ped_ragdoll(Local_62.f_170))
			{
				func_1116(1);
			}
			else if (func_1135(Local_62.f_170, func_1106(), 147.08f, 0.4f, 20f, 1))
			{
				if (func_799(0))
				{
					func_1139();
					func_535(&(Local_62.f_1216[0]), "SCENE_STRGEN_HOLDUP");
					func_278(&(Local_62.f_1216[0]), "pbOpenToBasement_Alt", "SCENE_STRGEN_HOLDUP", 1);
					func_1116(3);
					_0xae6004120c18df97(Local_62.f_170, 0, 0);
					func_593(Local_62.f_170, 1);
				}
			}
			else if (!func_548(Local_62.f_170, 1435919172, 1))
			{
				func_1116(1);
			}
			break;
		case 3:
			if (func_583(*iParam0, func_1138(), "descend_ladder"))
			{
				if (func_56(Global_35, 0))
				{
					func_596(iParam0, "PRSGS_LADDER", "PRSGS_LADDERJ", 1);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_763(int* iParam0, var uParam1, var uParam2)
{
	if (iLocal_45 == 31)
	{
		return false;
	}
	iVar0 = &Local_62.f_1216[5];
	sVar1 = "SCENE_VALDOC_GANGOPENBACKROOM";
	iVar2 = &Local_62.f_1216[4];
	sVar3 = "SCENE_VALDOC_HOLDUPBACKROOM";
	if (func_771(Global_35))
	{
		func_553(iVar0, "PBL_BREAKOUT", sVar1);
		func_1140();
		func_517(16);
		return true;
	}
	if (is_entity_dead(*iParam0))
	{
		func_254();
	}
	if (!func_44(4194304))
	{
		if (_is_ped_hogtied(*iParam0))
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
			func_91(4194304);
		}
	}
	if (func_1141())
	{
		if (func_308(*uParam1, 0, &(uParam1->f_89), &iVar6, 0, 0))
		{
			if ((iVar6 == 2 || iVar6 == 4) || iVar6 == 256)
			{
				func_1018();
				func_1116(14);
			}
			else if (iVar6 == 1)
			{
				func_1116(14);
			}
		}
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar5, 0, 0))
	{
		if (iVar5 == 2)
		{
			if (!func_44(33554432))
			{
				if (func_276(Local_62.f_1392[9], 3f, 0, "TIMER_VALDOC_RESET_AGGRO"))
				{
					func_1142(&(iParam0->f_14), &iVar5);
					func_91(33554432);
				}
			}
			bVar4 = true;
		}
		else if (iVar5 == 2048 || iVar5 == 1)
		{
			bVar4 = true;
		}
		else if (iVar5 == 8 || func_1063(*iParam0, 1, 1, 1, 0))
		{
		}
	}
	else
	{
		func_561(33554432);
	}
	if (!func_221(131072))
	{
		if (func_1143(iParam0, iVar2, sVar3))
		{
			if (bVar4 && func_1144(&iVar5))
			{
				func_1116(21);
			}
			else
			{
				func_91(67108864);
				func_1116(1);
			}
		}
	}
	else if (func_1145())
	{
		if (func_1146(iParam0, &iVar5))
		{
			set_portal_settings_override("VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED", "VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			func_1116(10);
		}
		else if (func_1147(uParam2, bVar4, &iVar5))
		{
			func_1018();
			func_1116(14);
		}
		else if (func_1148(bVar4, &iVar5))
		{
			func_1116(20);
		}
	}
	if (!func_221(16384) && !func_222(player_id(), 0, 0, 1))
	{
		if (func_74(Global_35, Local_62.f_1290) || func_74(Global_35, Local_62.f_1292))
		{
			func_298(0);
			func_224(16384);
		}
	}
	if (func_335(4096))
	{
		if (func_74(Global_35, Local_62.f_1292))
		{
			func_281(&(Local_62.f_1518), "SVD_IG4_CONVO", &(Local_62.f_390[1]), &(Local_62.f_390[3]), 0, 0, 1, 1);
			func_1149(4096);
		}
	}
	if (!func_120(4))
	{
		if (!func_120(8))
		{
			if (!func_65() && func_519(Global_35, Local_62.f_170, 1, 1) > 18f)
			{
				func_532("SRVD_A_HUPBACK", 1);
				func_546(iVar2, sVar3);
				func_546(iVar0, sVar1);
				func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
				func_517(8);
				func_1116(31);
			}
		}
	}
	func_1150(iVar0, sVar1);
	switch (iLocal_45)
	{
		case 0:
			if (!func_99(256))
			{
				func_91(67108864);
				return false;
			}
			func_533(4096);
			func_1151(&(iParam0->f_14));
			func_1152();
			start_anim_scene(&(Local_62.f_1216[2]));
			func_561(67108864);
			func_1116(3);
			break;
		case 1:
			func_91(67108864);
			if (is_ped_ragdoll(*iParam0))
			{
				return false;
			}
			if (!func_335(32768))
			{
				func_281(&(Local_62.f_1518), "SRVD_K_HURT_1", *iParam0, *uParam1, 0, 0, 1, 1);
				func_533(32768);
			}
			if (!func_799(4))
			{
				return false;
			}
			func_813(*iParam0, func_1121(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0), func_1122(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0), 1f, 0.1f, 0, 20000);
			func_1116(2);
			break;
		case 2:
			if (is_ped_ragdoll(*iParam0))
			{
				func_1116(1);
			}
			else if (func_1124(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0.35f, 45f, 0))
			{
				if (func_799(4))
				{
					func_224(4096);
					func_1116(4);
				}
			}
			else if (!func_548(*iParam0, 1435919172, 1))
			{
				func_1116(1);
			}
			break;
		case 3:
			if (!func_1124(*iParam0, iVar2, "pedDoctor", "PBL_KNOCK_DOOR", 0.35f, 45f, 0))
			{
				return false;
			}
			if (!func_799(4))
			{
				return false;
			}
			func_224(4096);
			func_517(4);
			func_1153();
			func_278(iVar2, "PBL_KNOCK_DOOR", sVar3, 0);
			func_429(925575409, 1, "DOOR_VAL_DOC_BACK_RM");
			func_1116(5);
			break;
		case 4:
			func_1153();
			func_561(67108864);
			func_429(925575409, 1, "DOOR_VAL_DOC_BACK_RM");
			func_1116(5);
			break;
		case 5:
			if (!func_1154())
			{
				return false;
			}
			func_302(1);
			func_281(&(Local_62.f_1518), "SRVDDKNCK0", *iParam0, *uParam1, 0, 0, 1, 1);
			func_224(131072);
			func_898(Local_62.f_1373[0], Local_62.f_1370[0], func_629(), func_630(), func_631(), "Interior Back Room Door");
			func_1116(6);
			break;
		case 6:
			if (!func_1155())
			{
				return false;
			}
			func_1017();
			func_418(4096);
			func_224(262144);
			func_1149(4096);
			func_1156();
			func_535(iVar0, sVar1);
			func_1116(7);
			break;
		case 7:
			if (func_579(*uParam1, "DLG_GangGreetsClerk"))
			{
				func_533(8192);
				func_281(&(Local_62.f_1518), "SRVD_DOPEN1", *uParam1, *iParam0, 0, 0, 1, 0);
				func_98(512);
				func_1116(8);
			}
			break;
		case 8:
			if (!func_221(8192))
			{
				if (func_1157())
				{
					if (func_353(-3.5f, 1, 0, 0))
					{
						func_596(iParam0, "SRVD_A_AIMWRN", "SRVD_J_AIMWRN", 1);
						func_418(4096);
						func_224(8192);
					}
				}
			}
			if (!func_120(16))
			{
				if (func_280(iVar0, sVar1, 0.17f))
				{
					func_1018();
					func_553(iVar0, "PBL_BREAKOUT", sVar1);
					func_1140();
					func_517(16);
				}
			}
			if (!func_579(*uParam1, "GangWalksBack"))
			{
				return false;
			}
			func_553(&(Local_62.f_1216[3]), "pbLoopToWakeUp", "SCENE_VALDOC_ONBED");
			func_281(&(Local_62.f_1518), func_1158(), *uParam1, *iParam0, 0, 0, 1, 0);
			func_1116(9);
			break;
		case 9:
			if (func_1159() || !func_145(*iParam0, 0, 1))
			{
				func_1116(12);
			}
			break;
		case 10:
			if (!func_221(262144))
			{
				if (func_1155())
				{
					func_418(4096);
					func_1149(4096);
					func_1156();
					func_535(iVar0, sVar1);
					func_224(262144);
				}
				return false;
			}
			if (func_1160(uParam1))
			{
				if (!func_60(8192))
				{
					func_281(&(Local_62.f_1518), "SRVDOSEENT", *uParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_281(&(Local_62.f_1518), "SRVDOSEENTP", *uParam1, Global_35, 0, 0, 1, 1);
				}
				func_1116(11);
			}
			else if (func_543(&(Local_62.f_390[0]), Global_35, 1, 4.5f, 0) || func_74(Global_35, &(Local_62.f_1247[6])))
			{
				if (!func_60(8192))
				{
					func_281(&(Local_62.f_1518), "SRVDOSEEP", *uParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_281(&(Local_62.f_1518), "SRVDOSEEPA", *uParam1, Global_35, 0, 0, 1, 1);
				}
				func_1116(13);
			}
			break;
		case 11:
			if (func_1161(uParam1))
			{
				func_1116(12);
			}
			else
			{
				func_1116(13);
			}
			break;
		case 12:
			func_299(0);
			remove_portal_settings_override("VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			func_1116(32);
			break;
		case 13:
			if (!func_1162(uParam1))
			{
				return false;
			}
			remove_portal_settings_override("VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN");
			func_546(iVar0, sVar1);
			func_1116(31);
			break;
		case 14:
			func_224(1024);
			func_1163(*uParam1, uParam1->f_2, 0f, 2f, 20000, 2f);
			func_1164(*iParam0, -1);
			func_1116(15);
			break;
		case 15:
			if (!func_276(&(iParam0->f_214), 2.5f, 1, "doctor.timerGeneric"))
			{
				return false;
			}
			if (!is_entity_dead(*iParam0))
			{
				func_281(&(Local_62.f_1518), "SRV_K_NOOPEN3", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_281(&(Local_62.f_1518), "SRV_C_NOOPEN1", *uParam1, Global_35, 0, 0, 1, 1);
			}
			func_1116(21);
			break;
		case 20:
			if (func_579(*uParam1, "DoorOpen") || func_74(Global_35, Local_62.f_1290))
			{
				func_328();
				func_1116(32);
			}
			break;
		case 21:
			if (is_ped_ragdoll(*iParam0))
			{
				return false;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return false;
			}
			func_281(&(Local_62.f_1518), "SVD_C_FLEE", *iParam0, Global_35, 0, 0, 1, 1);
			func_328();
			func_254();
			func_1116(31);
			break;
		case 31:
			return false;
		case 32:
			return true;
	}
	return false;
}

void func_764()
{
	if (!func_145(&(Local_62.f_390[0]), 0, 1))
	{
		return;
	}
	task_start_scenario_at_position(&(Local_62.f_390[0]), -1426662425, 1322.946f, -1320.105f, 74.32765f, 178.62f, 0, false, true, 0, -1f, false);
}

void func_765()
{
	iVar0 = 0;
	while (iVar0 < Local_62.f_390)
	{
		if (!func_145(&(Local_62.f_390[iVar0]), 0, 1))
		{
			func_61(&(Local_62.f_390[iVar0]->f_1));
		}
		iVar0++;
	}
}

void func_766(int* iParam0, int* iParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5, var uParam6)
{
	if (!is_entity_dead(*iParam2))
	{
		if (get_ped_config_flag(*iParam2, 273, true))
		{
			set_ped_config_flag(*iParam2, 273, false);
		}
	}
	iVar0 = &Local_62.f_1216[0];
	sVar1 = "SCENE_SDNGUN_HOLDUP";
	iVar2 = &Local_62.f_1216[2];
	cVar3 = "SCENE_SDNGUN_GAMBLER_GROUP";
	iVar4 = &Local_62.f_1216[3];
	cVar5 = "SCENE_SDNGUN_GAMBLER_OWNER";
	iVar6 = &Local_62.f_1216[4];
	cVar7 = "SCENE_SDNGUN_GAMBLER_MIDDLE";
	iVar8 = &Local_62.f_1216[5];
	cVar9 = "SCENE_SDNGUN_GAMBLER_WUSS";
	func_1165(*iParam1, &(iParam1->f_12), &(iParam1->f_30), &iVar11, &(iParam1->f_10), 0);
	func_1165(*iParam2, &(iParam2->f_12), &(iParam2->f_30), &iVar12, &(iParam2->f_10), 0);
	func_1165(*iParam3, &(iParam3->f_12), &(iParam3->f_30), &uVar13, &(iParam3->f_10), 0);
	func_1165(*iParam4, &(iParam4->f_12), &(iParam4->f_30), &uVar14, &(iParam4->f_10), 0);
	func_1165(*iParam5, &(iParam5->f_12), &(iParam5->f_30), &uVar15, &(iParam5->f_10), 1);
	if ((Local_62.f_1620 % 10) != 0)
	{
		func_1112(iParam1, 0);
		func_1166(iParam3, iParam4, iParam5);
		func_1167();
		if (!is_entity_dead(*iParam3))
		{
			fVar16 = func_519(Global_35, *iParam3, 1, 1);
			if (fVar16 < 3f)
			{
				func_297(*iParam3, Global_35, &(iParam3->f_64), 7000, vLocal_59, 1, 0);
			}
		}
		if (is_entity_dead(*iParam3))
		{
			if (func_621(Local_62.f_1392[12]))
			{
				if (func_620(Local_62.f_1392[12], 5f))
				{
					if (func_353(0, 1, 0, 0))
					{
						func_1168(*iParam4);
						func_307(Local_62.f_1392[12]);
					}
				}
			}
		}
	}
	if (func_1169())
	{
		func_1170(95);
	}
	if (func_1171())
	{
		func_1170(32);
	}
	func_1172(iParam2);
	func_1173();
	func_1174();
	if (func_335(1048576))
	{
		if (func_353(-3f, 1, 0, 0))
		{
			func_281(&(Local_62.f_1518), "PRNBH_GAM_CMBT", *iParam4, Global_35, 0, 0, 1, 1);
			func_1149(1048576);
		}
	}
	func_1175(iParam3, iVar4, cVar5);
	func_1176();
	func_1177();
	func_1178();
	func_1179(&iVar2, cVar3);
	func_1180(&iVar4, cVar5, &iVar6, cVar7, &iVar8, cVar9);
	func_1181(iParam3);
	func_1182();
	if (((func_99(1024) && !func_62(2097152)) && !func_120(512)) && !func_120(2048))
	{
		if (func_1183(iParam3, iParam4, iParam5, 0))
		{
			func_61(Local_62.f_1482[1]);
			func_517(1024);
			if (!func_812(iVar2, cVar3, "PBL_gamblers_react"))
			{
				func_1184(iVar2, cVar3);
			}
			if (func_308(*iParam3, 0, &(iParam3->f_89), &iVar18, 0, 0))
			{
				if (iVar18 == 2)
				{
					bVar17 = true;
				}
			}
			if ((is_entity_dead(*iParam3) || is_entity_dead(*iParam4)) || is_entity_dead(*iParam5))
			{
				func_39(4194304);
				func_39(2097152);
				func_224(524288);
				func_1170(76);
			}
			else if (func_119(&(iParam3->f_9), 16777216) || bVar17)
			{
				func_1185();
				func_517(512);
				func_2();
				func_1186(0);
				func_1187();
				func_1170(95);
			}
		}
	}
	func_1188();
	func_1189();
	func_1190();
	if (func_74(Global_35, Local_62.f_1290))
	{
		_0xe2bb2d6a9fe2ecde(1);
	}
	switch (iLocal_46)
	{
		case 0:
			if (!does_blip_exist(iParam0->f_1))
			{
				func_660(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			}
			if (!get_ped_config_flag(*iParam0, 169, true))
			{
				set_ped_config_flag(*iParam0, 169, true);
			}
			if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar10, 0, 0))
			{
				if ((((iVar10 == 2 || iVar10 == 2048) || iVar10 == 1) || iVar10 == 4) || iVar10 == 256)
				{
					bVar19 = true;
				}
			}
			if (func_221(64))
			{
				func_126(&(Local_62.f_1247[3]));
				func_1170(25);
			}
			else if (func_54(Global_35, func_1191(), 1) < 0.5f)
			{
				func_298(0);
				func_1192(iParam0);
				func_224(16);
				func_1170(1);
			}
			else if (func_276(Local_62.f_1392[2], 25f, 1, "TIMER_SDNGUN_GUNSMITH_KNOCKOUT_WINDOW"))
			{
				func_298(0);
				func_1193("PRNBG_IG1_ALERT", *iParam0, *iParam1);
				func_517(2);
				func_126(&(Local_62.f_1247[3]));
				func_278(iVar0, "PBL_alert_guard", sVar1, 1);
				func_1170(15);
			}
			else if (bVar19)
			{
				func_943("PRNBG_IG1_NERV", 0);
				func_943("PRNBG_IG1_NERVB", 0);
				func_943("PRNBG_AWKWARD", 0);
				func_1128(iParam0, "GUNSMITH");
				func_126(&(Local_62.f_1247[3]));
				func_517(16);
				func_1170(5);
			}
			else if (func_335(2048))
			{
				if (!func_335(4096))
				{
					if (func_353(0, 1, 0, 0))
					{
						func_1193("PRNBG_IG1_NERVB", *iParam0, *iParam1);
						func_533(4096);
						func_533(8192);
						func_1149(2048);
					}
				}
			}
			else if (func_335(8192))
			{
				if (!func_335(16384))
				{
					if (func_353(0, 1, 0, 0))
					{
						func_1193("PRNBG_AWKWARD", *iParam0, *iParam1);
						func_533(16384);
						func_1149(8192);
					}
				}
			}
			break;
		case 1:
			iVar24 = func_1194(Global_35, 0, 0);
			if (!_is_weapon_one_handed(iVar24) && iVar24 != -1569615261)
			{
				vVar20 = { func_1195() };
				sVar23 = "PBL_butt_stock_hit";
			}
			else
			{
				vVar20 = { func_1191() };
				sVar23 = "PBL_pistol_whip";
			}
			if (func_1196(Global_35, vVar20, 0.15f, 1))
			{
				func_126(&(Local_62.f_1247[3]));
				func_302(0);
				func_517(8);
				func_278(iVar0, sVar23, sVar1, 1);
				func_297(*iParam1, Global_35, &(iParam1->f_64), -1, vLocal_59, 1, 0);
				func_536(Global_35, iVar24, 1, 0);
				func_433(1);
				func_1170(3);
			}
			break;
		case 2:
			if (!func_544(&Global_35))
			{
				return;
			}
			func_1170(3);
			break;
		case 3:
			func_1197(iParam1);
			if (func_544(&Global_35))
			{
				return;
			}
			func_357();
			func_432(1, 0, 1);
			func_302(0);
			func_281(&(Local_62.f_1518), "PRNBG_PLRTHRT1", *iParam1, Global_35, 0, 0, 1, 1);
			func_660(*iParam1, &(iParam1->f_1), -89429847, 580546400, 0, 0);
			set_blip_name_from_text_file(iParam1->f_1, "SR_SD_BLIP_DOWNGUARD");
			func_61(&(iParam0->f_1));
			set_ped_relationship_group_hash(*iParam1, -401180987);
			register_target(Global_35, *iParam1, 1);
			set_ped_config_flag(*iParam1, 273, false);
			func_1170(4);
			break;
		case 4:
			func_1197(iParam1);
			func_1198(iParam1, iVar11);
			if (!func_1199(iParam1))
			{
				return;
			}
			if (!func_551(&(iParam1->f_10), 16384))
			{
				func_302(0);
				func_596(iParam1, "SRNG_A_UPSTAIRS", "SRNG_J_UPSTAIRS", 1);
			}
			func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
			func_297(*iParam1, Global_35, &(iParam1->f_64), -1, 0f, 0.5f, 0f, 1, 0);
			func_1170(18);
			break;
		case 5:
			if (!func_113(iVar0, "open_door_idle", sVar1) && func_544(iParam1))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "PRNBG_GD_SEEKNK", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(iVar0, "PBL_Breakout", sVar1, 1);
			func_1170(6);
			break;
		case 6:
			if (func_544(iParam1))
			{
				return;
			}
			func_1127(*iParam1, 0);
			func_660(*iParam1, &(iParam1->f_1), 831283580, 580546400, 0, 0);
			func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
			func_1170(7);
			break;
		case 15:
			if (!func_280(iVar0, sVar1, 0.176f))
			{
				return;
			}
			set_ped_config_flag(*iParam0, 169, false);
			set_ped_config_flag(*iParam0, 273, false);
			func_1170(16);
			break;
		case 16:
			func_1127(*iParam1, 0);
			func_660(*iParam1, &(iParam1->f_1), 831283580, 580546400, 0, 0);
			func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
			func_1170(17);
			break;
		case 17:
			if (func_145(*iParam1, 0, 1))
			{
				return;
			}
			if (!does_blip_exist(iParam0->f_1) && !is_entity_dead(*iParam0))
			{
				func_660(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			}
			if (!func_74(Global_35, &(Local_62.f_1247[4])))
			{
				return;
			}
			func_319(iParam0, 297, 1);
			func_281(&(Local_62.f_1518), "PRNBG_IG3", *iParam0, Global_35, 0, 0, 1, 1);
			func_1200(*iParam0, "LINE_01_SHOPKEEP");
			Local_62.f_1473[0] = 10f;
			func_224(512);
			func_1170(30);
			break;
		case 18:
			if (func_551(&(iParam1->f_10), 16384))
			{
				Local_62.f_1473[0] = 14f;
				func_1170(30);
				return;
			}
			if (!func_353(-2.5f, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "PRNBG_PLRTHRT2", *iParam1, Global_35, 0, 0, 1, 1);
			Local_62.f_1473[0] = 6f;
			func_1170(30);
			break;
		case 25:
			break;
		case 30:
			bVar25 = func_1201();
			if (!func_276(Local_62.f_1392[3], &(Local_62.f_1473[0]), 1, "FLOAT_SDNGUN_REVEAL_GAMBLING_ROOM_SECS"))
			{
				return;
			}
			if (!bVar25)
			{
				func_1202(iParam0, iParam1);
			}
			if (!is_entity_dead(*iParam1))
			{
				_0xa180fbd502a03125(*iParam1, 1.5f, 1f);
				func_1203(&(iParam1->f_89), iVar26);
				clear_entity_last_damage_entity(*iParam1);
				func_1204(&(iParam1->f_89), 0);
			}
			if (!is_entity_dead(*iParam0))
			{
				func_1203(&(iParam0->f_14), iVar26);
				clear_entity_last_damage_entity(*iParam0);
			}
			clear_player_has_damaged_at_least_one_non_animal_ped(get_player_index());
			Global_1935630->f_30 = 0;
			func_1170(31);
			break;
		case 31:
			if (func_221(16))
			{
				if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar27, 0, 0))
				{
					if ((iVar27 == 4 || iVar27 == 256) || iVar27 == 8)
					{
						func_1205();
						func_1206();
					}
				}
				func_1207(iParam1, &(iParam1->f_89));
			}
			else
			{
				if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar10, 0, 0))
				{
					if ((((iVar10 == 4 || iVar10 == 256) || iVar10 == 2) || iVar10 == 2048) || is_entity_on_fire(*iParam0))
					{
						func_1208();
					}
				}
				func_1207(iParam0, &(iParam0->f_14));
			}
			break;
		case 32:
			if (!func_74(Global_35, &(Local_62.f_1247[6])))
			{
				return;
			}
			func_1170(35);
			break;
		case 35:
			if (!func_99(1024))
			{
				return;
			}
			func_920();
			func_1209();
			func_307(Local_62.f_1392[4]);
			func_1210();
			func_1170(39);
			break;
		case 39:
			func_1211(iParam2);
			func_1170(40);
			break;
		case 40:
			func_1212(iParam2);
			func_308(*iParam2, 0, &(iParam2->f_89), &iVar28, 0, 0);
			if (!func_74(Global_35, Local_62.f_1290))
			{
				if (iVar28 != 2 && iVar28 != 1)
				{
					return;
				}
				Local_62.f_1290.f_1 = 1;
				func_517(64);
			}
			func_357();
			func_1185();
			Local_62.f_1292.f_1 = 1;
			func_61(Local_62.f_1482[0]);
			func_330("SR_NG_O_GOTHIRDFLOOR", 1);
			func_567(&(iParam2->f_89), 1);
			if (!func_221(2048))
			{
				func_1213();
				func_535(&(Local_62.f_1216[1]), "SCENE_SDNGUN_GUARD_UPSTAIRS");
				func_1170(42);
			}
			else if (func_120(64))
			{
				func_1170(53);
			}
			else
			{
				func_1170(41);
			}
			break;
		case 41:
			if (!func_1214(iParam2))
			{
				return;
			}
			if (func_1215(iParam2, 0))
			{
				func_1170(53);
				return;
			}
			func_281(&(Local_62.f_1518), "PRNBG_GU_AIM1", *iParam2, Global_35, 0, 0, 1, 1);
			func_1170(43);
			break;
		case 42:
			func_1216(iParam2);
			if (func_1215(iParam2, 1))
			{
				func_1170(53);
				return;
			}
			if (!func_276(&(iParam2->f_120), 1f, 0, "guardUpstairs.timerGenericA"))
			{
				return;
			}
			func_307(&(iParam2->f_120));
			if (func_1217(Global_35))
			{
				func_596(iParam2, "PRNBG_LEAVENOW", "PRNBG_LEAVENOW", 1);
				func_1170(44);
			}
			else
			{
				func_281(&(Local_62.f_1518), "PRNBG_GU_AIM1", *iParam2, Global_35, 0, 0, 1, 1);
				func_1170(49);
			}
			break;
		case 43:
			if (func_1215(iParam2, 0))
			{
				func_1170(53);
				return;
			}
			if (func_276(&(iParam2->f_120), 8f, 0, "guardUpstairs.timerGenericA"))
			{
				func_1170(53);
				return;
			}
			if (!func_74(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				func_1170(52);
			}
			break;
		case 44:
			if (!func_353(-3f, 1, 0, 0))
			{
				if (func_1215(iParam2, 1))
				{
					func_307(Local_62.f_1392[6]);
					func_1170(53);
				}
				return;
			}
			if (!func_551(&(iParam2->f_10), 4))
			{
				func_563(&(iParam2->f_10), &(iParam2->f_30), 1, 0);
				func_916(&(iParam2->f_10), 4);
			}
			if (iVar12 == 0)
			{
				func_596(iParam2, "PRNBH_IG4_GEST", "PRNBH_IG4_GESTJ", 1);
				func_563(&(iParam2->f_10), &(iParam2->f_30), 0, 0);
				func_307(Local_62.f_1392[6]);
				func_1170(49);
				return;
			}
			else if (iVar12 == 1)
			{
				func_596(iParam2, "PRNBH_OFFLIM_A", "PRNBH_OFFLIM_J", 1);
				func_563(&(iParam2->f_10), &(iParam2->f_30), 0, 0);
				func_307(Local_62.f_1392[6]);
				func_1170(51);
				return;
			}
			else if (func_276(Local_62.f_1392[6], 5f, 0, "TIMER_SDNGUN_ILO_OPTION_AVAILABLE"))
			{
				func_281(&(Local_62.f_1518), "PRNBH_NOTLEAVE", *iParam2, Global_35, 0, 0, 1, 1);
				func_307(Local_62.f_1392[6]);
				func_1170(51);
				return;
			}
			else if (func_1215(iParam2, 0))
			{
				func_307(Local_62.f_1392[6]);
				func_1170(53);
				return;
			}
			else if (!func_74(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				func_1170(52);
				return;
			}
			break;
		case 49:
			if (func_1215(iParam2, 1))
			{
				func_1170(53);
				return;
			}
			if (!func_1219(iParam2))
			{
				return;
			}
			if (!func_353(-5f, 1, 0, 0))
			{
				return;
			}
			if (!func_551(&(iParam2->f_10), 4))
			{
				func_563(&(iParam2->f_10), &(iParam2->f_30), 1, 0);
				func_916(&(iParam2->f_10), 4);
			}
			if (iVar12 == 0)
			{
				func_596(iParam2, "PRNBG_A_GUILOD1", "PRNBG_J_GUILOD1", 1);
				func_945(&(iParam2->f_30), 0, 0);
				func_1170(50);
				return;
			}
			else if (iVar12 == 1)
			{
				func_596(iParam2, "PRNBG_A_GUILOA1", "PRNBG_J_GUILOA1", 1);
				func_945(&(iParam2->f_30), 0, 0);
				func_1170(51);
				return;
			}
			else if (func_276(Local_62.f_1392[6], 5f, 0, "TIMER_SDNGUN_ILO_OPTION_AVAILABLE"))
			{
				func_307(Local_62.f_1392[6]);
				func_1170(51);
				return;
			}
			if (!func_74(Global_35, Local_62.f_1290))
			{
				func_943("PRNBH_IG4_GESTJ", 1);
				func_943("PRNBH_IG4_GEST", 1);
				func_1218(iParam2);
				func_1170(52);
				return;
			}
			if (!func_276(&(iParam2->f_120), 5f, 0, "guardUpstairs.timerGenericA"))
			{
				return;
			}
			iVar29 = 0;
			if (func_548(*iParam2, -1073489615, 0))
			{
				iVar29 = 33554432;
			}
			func_1220(*iParam2, iVar29);
			func_1170(53);
			break;
		case 50:
			if (func_1215(iParam2, 0))
			{
				func_1170(53);
				return;
			}
			if (func_1221(iParam2))
			{
				func_1170(51);
				return;
			}
			if (!func_74(Global_35, Local_62.f_1290))
			{
				func_1218(iParam2);
				func_1170(52);
			}
			break;
		case 51:
			if (!func_353(-3.5f, 1, 0, 0))
			{
				return;
			}
			func_1170(53);
			break;
		case 52:
			if (!func_335(524288))
			{
				if (func_353(-3f, 1, 0, 0))
				{
					func_302(0);
					func_281(&(Local_62.f_1518), "PRNBH_IG4_LEAVE", *iParam2, Global_35, 0, 0, 1, 1);
					func_533(524288);
				}
			}
			if (func_1215(iParam2, 0))
			{
				func_1170(53);
				return;
			}
			if (func_74(Global_35, Local_62.f_1290))
			{
				func_281(&(Local_62.f_1518), "PRNBG_GU_WRN3", *iParam2, Global_35, 0, 0, 1, 1);
				func_1170(53);
			}
			break;
		case 53:
			func_1222(iParam2);
			func_533(1048576);
			func_660(*iParam2, &(iParam2->f_1), 831283580, 580546400, 0, 0);
			func_1223();
			func_1170(54);
			break;
		case 54:
			func_1222(iParam2);
			func_1224(iParam3, iParam4, iParam5);
			if (func_145(*iParam2, 0, 1))
			{
				return;
			}
			func_916(&(Local_62.f_390[2]->f_10), 2);
			func_1209();
			func_1170(55);
			break;
		case 55:
			if (!func_1224(iParam3, iParam4, iParam5))
			{
				return;
			}
			func_553(iVar6, "PBL_line_01", cVar7);
			func_297(*iParam3, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam4, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam5, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_1170(60);
			break;
		case 60:
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_559(iVar6, "PBL_line_01", cVar7, 0))
			{
				return;
			}
			func_517(1024);
			func_1225(iParam4, &Global_35, "PRNBH_IG5_STAL1", &(iParam4->f_64), iVar6, "PBL_line_01", cVar7, "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(iVar4, "PBL_line_01", cVar5);
			func_553(iVar6, "PBL_line_02", cVar7);
			func_1170(61);
			break;
		case 61:
			if (!_is_ped_using_scenario_hash(Global_35, func_925()))
			{
				func_1226(iParam3, iParam5);
				func_1227(iParam3, &uVar13, iParam4, &uVar14, iParam5, &uVar15);
				return;
			}
			func_1209();
			func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
			func_563(&(iParam4->f_10), &(iParam4->f_30), 0, 0);
			func_563(&(iParam5->f_10), &(iParam5->f_30), 0, 0);
			func_307(Local_62.f_1392[4]);
			func_330("SR_NG_O_ROBTABLE", 1);
			func_1185();
			func_61(Local_62.f_1482[1]);
			func_1170(62);
			break;
		case 62:
			if (_is_ped_using_scenario_hash(Global_35, func_925()))
			{
				return;
			}
			func_412();
			func_224(2097152);
			func_1225(iParam4, &Global_35, "PRNBH_IG5_TAKE", &(iParam4->f_64), iVar6, "PBL_line_02", cVar7, "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(iVar4, "PBL_line_02", cVar5);
			func_1184(iVar2, cVar3);
			func_224(524288);
			func_923(&(iParam3->f_10), &(iParam3->f_30), 0);
			func_923(&(iParam4->f_10), &(iParam4->f_30), 0);
			func_923(&(iParam5->f_10), &(iParam5->f_30), 0);
			func_1228(iParam3, iParam4, iParam5);
			func_1170(70);
			break;
		case 70:
			if (!func_1183(iParam3, iParam4, iParam5, 1))
			{
				func_1229(iParam3, &uVar13, iParam4, &uVar14, iParam5, &uVar15);
				return;
			}
			func_39(4194304);
			func_39(2097152);
			func_1170(76);
			break;
		case 76:
			if (func_812(iVar2, cVar3, "PBL_gamblers_react"))
			{
				func_1224(iParam3, iParam4, iParam5);
			}
			if (!func_353(-6f, 1, 0, 0))
			{
				return;
			}
			if (!func_221(8388608))
			{
				func_596(iParam3, "PRNBH_AIM_A", "PRNBH_AIM_J", 1);
			}
			func_1170(77);
			break;
		case 77:
			if (func_812(iVar2, cVar3, "PBL_gamblers_react"))
			{
				if (!func_1224(iParam3, iParam4, iParam5))
				{
					return;
				}
				else
				{
					func_1184(iVar2, cVar3);
				}
			}
			if (!func_353(-3.5f, 1, 0, 0))
			{
				return;
			}
			if (func_1230(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_A", cVar3, 1))
				{
					func_281(&(Local_62.f_1518), "PRNBH_IG6_ALL", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					func_278(iVar2, "PBL_open_safe_A", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar6, cVar7);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					func_796(5, func_911(5), 0, "PBL_cower_idle");
					func_224(1048576);
					func_1170(78);
				}
			}
			else if (func_1233(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_B", cVar3, 0))
				{
					func_281(&(Local_62.f_1518), "PRNBH_IG6_KILL3", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					func_278(iVar2, "PBL_open_safe_B", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar6, cVar7);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					func_1170(78);
				}
			}
			else if (func_1234(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_C", cVar3, 0))
				{
					func_281(&(Local_62.f_1518), "PRNBH_IG6_KILL2", *iParam3, Global_35, 0, 0, 1, 1);
					func_1231();
					func_1232();
					func_278(iVar2, "PBL_open_safe_C", cVar3, 1);
					func_1184(iVar4, cVar5);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(5, func_911(5), 0, "PBL_cower_idle");
					func_224(1048576);
					func_1170(78);
				}
			}
			else if (func_1235(iParam3, iParam4, iParam5))
			{
				if (func_559(iVar2, "PBL_open_safe_D", cVar3, 0))
				{
					func_224(67108864);
					func_1231();
					func_1232();
					func_278(iVar2, "PBL_open_safe_D", cVar3, 1);
					func_1184(iVar6, cVar7);
					func_1184(iVar8, cVar9);
					func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
					func_796(4, func_911(4), 0, "PBL_cower_idle");
					func_1170(78);
				}
			}
			else if (func_559(iVar2, "PBL_open_safe_E", cVar3, 0))
			{
				func_281(&(Local_62.f_1518), "PRNBH_IG6_KILLB", *iParam3, Global_35, 0, 0, 1, 1);
				func_1231();
				func_1232();
				func_278(iVar2, "PBL_open_safe_E", cVar3, 1);
				func_796(3, func_911(3), 0, "PBL_cower_idle_pos_02");
				func_796(4, func_911(4), 0, "PBL_cower_idle");
				func_796(5, func_911(5), 0, "PBL_cower_idle");
				func_1170(78);
			}
			func_1203(&(iParam3->f_89), iVar10);
			func_1203(&(iParam4->f_89), iVar10);
			func_1203(&(iParam5->f_89), iVar10);
			break;
		case 78:
			if (func_1236(iParam4, iParam5, iVar2, cVar3))
			{
				func_281(&(Local_62.f_1518), "PRNBH_K23_SAFE1", *iParam3, Global_35, 0, 0, 1, 1);
				func_224(268435456);
			}
			if (func_1237(iVar2, cVar3, &fVar30))
			{
				fVar31 = _get_anim_scene_progress(iVar2);
				if (!func_221(67108864))
				{
					if (!func_221(33554432))
					{
						if (fVar31 > fVar30)
						{
							func_595(func_1238(), 1);
							func_224(16777216);
							func_224(33554432);
						}
					}
					else
					{
						func_1239(0);
					}
				}
				else
				{
					func_595(func_1238(), 0);
				}
				if (fVar31 < 0.99f)
				{
					return;
				}
			}
			func_1239(0);
			if (!func_1240(iParam3, iParam4, iParam5))
			{
				return;
			}
			func_546(iVar2, cVar3);
			func_553(iVar4, "PBL_relaxed_idle_pos_02", cVar5);
			func_553(iVar4, "PBL_exit_pos_02", cVar5);
			func_553(iVar6, "PBL_relaxed_idle", cVar7);
			func_553(iVar6, "PBL_EXIT", cVar7);
			func_553(iVar8, "PBL_relaxed_idle", cVar9);
			func_553(iVar8, "PBL_EXIT", cVar9);
			func_297(*iParam3, Global_35, &(iParam3->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam4, Global_35, &(iParam4->f_64), -1, vLocal_59, 1, 0);
			func_297(*iParam5, Global_35, &(iParam5->f_64), -1, vLocal_59, 1, 0);
			func_1203(&(iParam3->f_89), iVar10);
			func_1203(&(iParam4->f_89), iVar10);
			func_1203(&(iParam5->f_89), iVar10);
			func_422(4194304);
			func_1170(79);
			break;
		case 79:
			func_1241(iParam3, iParam4, iParam5);
			func_1242();
			if (!func_221(536870912))
			{
				if (func_1243(&(iParam4->f_9), Local_62.f_1475[1], 1) || func_1243(&(iParam5->f_9), Local_62.f_1475[2], 1))
				{
					func_281(&(Local_62.f_1518), "PRNBH_K23_SAFE2", *iParam3, Global_35, 0, 0, 1, 1);
					func_224(536870912);
				}
			}
			if (func_1244())
			{
				func_1170(80);
			}
			else if (func_221(67108864))
			{
				func_1170(86);
			}
			break;
		case 80:
			if (!func_1245())
			{
				return;
			}
			func_1170(85);
			break;
		case 85:
			func_1186(1);
			func_1170(90);
			break;
		case 86:
			func_1170(90);
			break;
		case 90:
			func_1241(iParam3, iParam4, iParam5);
			func_1242();
			break;
		case 95:
			func_1246(iParam4, Local_62.f_1216[4], "SCENE_SDNGUN_GAMBLER_MIDDLE", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 0.955f);
			func_1246(iParam5, Local_62.f_1216[5], "SCENE_SDNGUN_GAMBLER_WUSS", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 0.8664f);
			break;
	}
}

void func_767(int* iParam0, int* iParam1)
{
	func_1247();
	func_1129();
	iVar0 = -1;
	if (func_551(&(iParam1->f_10), 2))
	{
		iVar1 = 1;
		iVar2 = func_940(iVar1, 0, 0);
		iVar2 |= 256;
		iVar0 = func_941(iParam1, &(iParam1->f_12), 15f, &(iParam1->f_30), 0, 3, 0, "", iVar2, 0, 0, 2, -1082130432);
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar3, 0, 0))
	{
	}
	if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar4, 0, 0))
	{
	}
	func_1248(iParam0, iParam1);
	func_1249();
	func_1250(iParam0);
	func_1251(iParam1);
	func_1252(iParam0, iParam1, Local_62.f_1021[1], 1);
	func_1253();
	if (func_119(&(iParam1->f_9), 1))
	{
		_0xc3abcfbc7d74afa5(*iParam1, 5, 1);
	}
	else
	{
		func_1254(iParam1);
	}
	if (iLocal_46 == 100)
	{
		if (!func_44(268435456))
		{
			return;
		}
		if (func_335(-2147483648))
		{
			return;
		}
		if (!func_353(3f, 1, 0, 0))
		{
			return;
		}
		func_281(&(Local_62.f_1518), "SRGK_ATTACK2", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(-2147483648);
		return;
	}
	iVar5 = &Local_62.f_1216[3];
	iVar6 = &Local_62.f_1216[2];
	cVar7 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	sVar8 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	func_1255(iParam1);
	func_1256(iParam1);
	if (func_1257(iParam0, iParam1))
	{
		func_422(8388608);
		func_126(&(Local_62.f_1247[14]));
		func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
		func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
		func_958(1, 1);
		_0xae6004120c18df97(&(Local_62.f_390[0]), 0, 1);
		if (func_145(*iParam0, 0, 1))
		{
			func_1259(iParam1);
			func_1170(50);
		}
		else
		{
			if (!func_550(&(Local_62.f_1216[4]), "SCENE_RHDGUN_VICTIM_ALONE"))
			{
				func_1260();
				func_535(&(Local_62.f_1216[4]), "SCENE_RHDGUN_VICTIM_ALONE");
			}
			func_281(&(Local_62.f_1518), "PRRGS_IG6d", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(&(Local_62.f_1216[4]), "pbLeave", "SCENE_RHDGUN_VICTIM_ALONE", 1);
			func_277(&(Local_62.f_1216[4]), "bStopAfraidLoop", 1, "SCENE_RHDGUN_VICTIM_ALONE");
			func_535(&(Local_62.f_1216[4]), "SCENE_RHDGUN_VICTIM_ALONE");
			func_1170(86);
		}
	}
	else
	{
		func_1261(*iParam0);
	}
	if (func_1262(iParam1))
	{
		func_1170(30);
	}
	if (func_1263())
	{
		func_1170(40);
	}
	func_1264(iParam0, iVar3);
	func_1265(iParam1, iVar4);
	func_1266(iParam0, iParam1);
	func_1267(iVar6, sVar8);
	if (func_1268(iParam1, iParam0, iVar5, cVar7))
	{
		func_1170(60);
	}
	if (func_1269(iParam1))
	{
		func_1170(60);
	}
	func_1270(iParam0, iParam1, iParam0->f_209, iVar0);
	func_1271(iParam0, iParam1);
	if (func_1272(iParam0, iParam1))
	{
		func_1170(75);
	}
	if (!func_221(67108864))
	{
		if (func_221(16777216))
		{
			if (func_620(&(iParam0->f_214), (1f + 1f)))
			{
				if (!is_entity_dead(*iParam0) && !is_entity_dead(*iParam1))
				{
					if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar9, 0, 0))
					{
						if (((iVar9 != 1 && iVar9 != 16) && iVar9 != 8) && iVar9 != 2048)
						{
							func_302(0);
							func_928(&(Local_62.f_1216[3]), "objPhoto", &(Local_62.f_1226[1]), "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 1);
							func_1273(&(Local_62.f_1226[1]));
							func_140(1, 0);
							func_126(&(Local_62.f_1247[11]));
							func_126(&(Local_62.f_1247[12]));
							func_224(67108864);
							func_1170(88);
						}
					}
					else if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar10, 0, 0))
					{
						if (((iVar10 != 1 && iVar10 != 16) && iVar10 != 8) && iVar10 != 2048)
						{
							func_302(0);
							func_928(&(Local_62.f_1216[3]), "objPhoto", &(Local_62.f_1226[1]), "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
							func_1273(&(Local_62.f_1226[1]));
							func_140(1, 0);
							func_126(&(Local_62.f_1247[11]));
							func_126(&(Local_62.f_1247[12]));
							func_224(67108864);
							func_1170(88);
						}
					}
				}
				else if (!is_entity_dead(*iParam1))
				{
					if (func_308(*iParam1, 0, &(iParam1->f_89), &iVar11, 0, 0))
					{
						if ((iVar11 != 1 && iVar11 != 16) && iVar11 != 2048)
						{
							func_302(0);
							func_224(67108864);
							func_1170(89);
						}
					}
				}
			}
		}
	}
	if (func_221(33554432))
	{
		if (!get_is_task_active(*iParam0, 3))
		{
			func_928(&(Local_62.f_1216[3]), "objPhoto", &(Local_62.f_1226[1]), "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
			func_1273(&(Local_62.f_1226[1]));
			func_1274(0);
			func_418(33554432);
		}
	}
	if (func_1275(iParam0, iParam1))
	{
		func_958(1, 1);
		func_252(0);
		func_1170(100);
	}
	func_1276(*iParam0, *iParam1);
	func_1277(*iParam1);
	func_1278(iParam1);
	func_1279(iParam0);
	if (func_1280())
	{
		func_1170(95);
	}
	func_1281();
	switch (iLocal_46)
	{
		case 0:
			if (func_1282(*iParam0))
			{
				func_307(Local_62.f_1392[0]);
				func_1170(5);
				return;
			}
			if ((func_812(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", "pbTrapDoorWait") || func_812(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", "pbNoWaitOpenTrap")) || func_812(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", "pbAIToDoor"))
			{
				if (func_280(&(Local_62.f_1216[1]), "SCENE_RHDGUN_HOLDUP", 0.99f))
				{
					func_281(&(Local_62.f_1518), "SRGKHESIT_ALT", *iParam0, Global_35, 0, 0, 1, 1);
					_0xaab050da48b57978(*iParam0, "TaskIntimidated_OnFoot", 0, -1, 4);
					func_231(&(iParam1->f_89), 500);
					func_231(&(iParam0->f_14), 500);
					func_1283();
					func_126(&(Local_62.f_1247[13]));
					func_1284();
					func_553(&(Local_62.f_1216[3]), "PBL_captive_shot_01", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					func_553(iVar6, "PBL_react_to_gunfire_a", sVar8);
					func_553(iVar6, "PBL_react_to_gunfire_b", sVar8);
					func_553(iVar5, "PBL_stand_cower_left", cVar7);
					func_553(iVar5, "PBL_stand_cower_right", cVar7);
					func_553(iVar5, "PBL_flinch_right", cVar7);
					func_553(iVar5, "PBL_flinch_left", cVar7);
					func_553(iVar5, "PBL_enter_intimidation", cVar7);
					func_553(iVar5, "PBL_intimidate", cVar7);
					func_337(&(iParam0->f_42), Global_35, 5000, vLocal_59, 0);
					func_337(&(iParam1->f_64), Global_35, 5000, vLocal_59, 0);
					func_896(&(iParam0->f_14), 0);
					func_566(&(iParam0->f_14), 0);
					func_896(&(iParam1->f_89), 0);
					func_566(&(iParam1->f_89), 0);
					func_224(65536);
					func_307(&(iParam1->f_123));
					func_307(Local_62.f_1392[0]);
					func_1170(1);
				}
			}
			break;
		case 1:
			if (func_1282(*iParam0))
			{
				func_1170(5);
				return;
			}
			else if (!func_74(Global_35, &(Local_62.f_1247[8])))
			{
				return;
			}
			_0xae6004120c18df97(*iParam0, 0, 1);
			Local_62.f_1247[8]->f_1 = 1;
			func_19("SR_RHODES_GUN_BASEMENT", 64);
			func_517(2);
			if (!_does_volume_exist(&(Local_62.f_1247[14])))
			{
				Local_62.f_1247[14] = _0x0eb78c2b156635b1(665633627, 1323.178f, -1319.122f, 74.88023f, 0f, 0f, 0f, 1f, 1f, 1f);
			}
			func_357();
			func_1285(10);
			func_1287(Local_62.f_1482[0], func_1286(), -1471716628);
			func_1170(10);
			break;
		case 5:
			if (is_ped_ragdoll(*iParam0))
			{
				return;
			}
			func_308(*iParam0, 0, &(iParam0->f_14), &uVar12, 0, 0);
			func_1134(*iParam0, &uVar12);
			func_813(*iParam0, func_1288(), 84.79f, 1065353216, 1050253722, 0, 20000);
			func_1288();
			func_1170(6);
			break;
		case 6:
			if (is_ped_ragdoll(*iParam0))
			{
				func_1170(5);
			}
			else if (func_1135(*iParam0, func_1288(), 84.79f, 0.4f, 20f, 1))
			{
				if (func_799(3))
				{
					func_1289();
					func_535(&(Local_62.f_1216[3]), "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					func_553(&(Local_62.f_1216[3]), "PBL_captive_shot_01", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
					if (!func_221(65536))
					{
						func_1170(0);
					}
					else if (!Local_62.f_1247[8]->f_1)
					{
						func_1170(1);
					}
					else
					{
						func_1170(10);
					}
				}
			}
			else if (!func_548(*iParam0, 1435919172, 1))
			{
				func_1170(5);
			}
			break;
		case 10:
			if (func_1282(*iParam0))
			{
				func_1170(5);
				return;
			}
			else if ((func_583(*iParam0, func_1290(), "wait_loop_captor") || func_583(*iParam0, func_1290(), "afraid_loop_a_captor")) || is_entity_dead(*iParam0))
			{
				_0x66f9eb44342bb4c5(*iParam0, &(iParam0->f_42));
				_0x66f9eb44342bb4c5(*iParam1, &(iParam1->f_64));
				func_1291(iParam0->f_85[0], "INTERACT_QUESTION");
				set_ped_config_flag(*iParam0, 6, true);
				set_ped_config_flag(*iParam1, 6, true);
				set_ped_can_be_targetted(*iParam0, true);
				set_ped_can_be_targetted(*iParam1, true);
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam1, 315, false);
				func_281(&(Local_62.f_1518), "SRGKHESIT2", *iParam1, Global_35, 0, 0, 1, 1);
				func_1292();
				func_224(8192);
				func_553(iVar5, "PBL_explain_01", cVar7);
				func_1170(11);
			}
			break;
		case 11:
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_1293("PBL_explain_01"))
			{
				return;
			}
			func_224(16384);
			func_140(1, 0);
			func_1294();
			func_281(&(Local_62.f_1518), "SRGKIGP3e1", *iParam0, Global_35, 0, 0, 1, 1);
			func_278(iVar5, "PBL_explain_01", cVar7, 1);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_01", sVar8);
			func_1170(12);
			break;
		case 12:
			if (!func_1295() && !func_113(iVar5, "afraid_loop_a", cVar7))
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_01", 0))
			{
				return;
			}
			func_224(16384);
			func_1297(0f);
			func_1298();
			func_1299();
			func_281(&(Local_62.f_1518), "SRGKIG4d", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(iVar6, "PBL_plead_01", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar5, "PBL_explain_02", cVar7);
			func_1170(15);
			break;
		case 15:
			if (!func_1300())
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1293("PBL_explain_02"))
			{
				return;
			}
			func_1297(0f);
			func_1301();
			func_1294();
			func_281(&(Local_62.f_1518), "SRGKIGP3e2", *iParam0, Global_35, 0, 0, 1, 1);
			func_278(iVar5, "PBL_explain_02", cVar7, 1);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_02", sVar8);
			func_1170(16);
			break;
		case 16:
			if (!func_1295() && !func_113(iVar5, "afraid_loop_a", cVar7))
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_02", 0))
			{
				return;
			}
			func_1297(0f);
			func_1298();
			func_1299();
			func_281(&(Local_62.f_1518), "SRGKIG4d1", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(iVar6, "PBL_plead_02", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar5, "PBL_explain_03", cVar7);
			func_1170(20);
			break;
		case 20:
			if (!func_1300())
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1293("PBL_explain_03"))
			{
				return;
			}
			func_1297(0f);
			func_1301();
			func_1294();
			func_281(&(Local_62.f_1518), "SRGKIGP3e3", *iParam0, Global_35, 0, 0, 1, 1);
			func_278(iVar5, "PBL_explain_03", cVar7, 1);
			func_533(8388608);
			func_337(&(iParam0->f_42), Global_35, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), *iParam0, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_04", sVar8);
			func_1170(21);
			break;
		case 21:
			if (!func_1295() && !func_113(iVar5, "afraid_loop_a", cVar7))
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_03", 0))
			{
				return;
			}
			func_1297(0f);
			func_1298();
			func_1299();
			func_281(&(Local_62.f_1518), "SRGKIG4d2", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(iVar6, "PBL_plead_04", sVar8, 1);
			func_337(&(iParam0->f_42), *iParam1, 6000, vLocal_59, 0);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_553(iVar6, "PBL_plead_01", sVar8);
			func_1170(22);
			break;
		case 22:
			if (!func_1300())
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[12], &(Local_62.f_1473[0]), 0, "TIMER_RHDGUN_COOLDOWN_BASEMENT_IDLE_DLG"))
			{
				return;
			}
			if (!func_1296("PBL_plead_01", 1))
			{
				return;
			}
			func_1297(0f);
			func_1299();
			func_281(&(Local_62.f_1518), "SRGKIG4d3", *iParam1, Global_35, 0, 0, 1, 1);
			func_278(iVar6, "PBL_plead_01", sVar8, 1);
			func_533(4194304);
			func_1170(23);
			break;
		case 23:
			func_1170(25);
			break;
		case 25:
			if (!func_1300())
			{
				return;
			}
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			func_224(32768);
			_0x66f9eb44342bb4c5(*iParam0, &(iParam0->f_42));
			_0x66f9eb44342bb4c5(*iParam1, &(iParam1->f_64));
			func_1170(30);
			break;
		case 30:
			if (!func_221(131072))
			{
				return;
			}
			if (!func_1302())
			{
				return;
			}
			if (!func_113(iVar6, "afraid_loop_a", sVar8) && !func_113(iVar6, "afraid_loop_a_reset", sVar8))
			{
				if (!func_1303())
				{
					return;
				}
			}
			func_281(&(Local_62.f_1518), "PRRGS_IG9_CAP", *iParam1, Global_35, 0, 0, 1, 1);
			func_39(8388608);
			func_1283();
			func_1304();
			func_1305();
			func_1170(31);
			break;
		case 31:
			if (!func_583(*iParam0, func_1290(), func_1306()) || !func_583(*iParam1, func_1290(), func_1307()))
			{
				return;
			}
			func_418(65536);
			func_553(iVar6, "PBL_wait_line_captive", sVar8);
			func_1170(32);
			break;
		case 32:
			if (!func_1308("PBL_wait_line_captive"))
			{
				return;
			}
			func_1309();
			func_278(iVar6, "PBL_wait_line_captive", sVar8, 1);
			func_1170(33);
			break;
		case 33:
			if (!func_1310())
			{
				return;
			}
			func_1311();
			func_553(iVar5, "PBL_wait_line_captor", cVar7);
			func_1170(34);
			break;
		case 34:
			if (!func_1312("PBL_wait_line_captor"))
			{
				return;
			}
			if (func_74(Global_35, &(Local_62.f_1247[8])))
			{
				func_1313();
				func_278(iVar5, "PBL_wait_line_captor", cVar7, 1);
			}
			func_1170(35);
			break;
		case 35:
			if (!func_353(0, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRGMCUT_CRYIDLE", *iParam1, Global_35, 0, 0, 1, 1);
			func_1170(36);
			break;
		case 36:
			func_1314(iParam0, iParam1);
			if (!func_1315())
			{
				return;
			}
			func_1316();
			func_1170(40);
			break;
		case 40:
			func_1314(iParam0, iParam1);
			if (!func_221(262144))
			{
				return;
			}
			if (!func_1317())
			{
				return;
			}
			func_302(0);
			func_281(&(Local_62.f_1518), "PRRGS_RETURN_B", *iParam1, Global_35, 0, 0, 1, 1);
			func_1283();
			func_1318();
			func_1284();
			func_1170(41);
			break;
		case 41:
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			if (func_583(*iParam1, func_1290(), func_1319()))
			{
				return;
			}
			func_224(65536);
			func_1170(42);
			break;
		case 42:
			break;
		case 50:
			if (func_583(*iParam0, func_1290(), "speech_captor"))
			{
				func_19("SR_RHODES_GUN_SPEECH_START", 128);
				func_281(&(Local_62.f_1518), "SRGKIGP3g", *iParam0, *iParam1, 0, 0, 1, 1);
				func_224(8388608);
				func_336(&(Local_62.f_170.f_14), 1);
				func_231(&(iParam0->f_14), 5000);
				func_231(&(iParam1->f_89), 5000);
				func_297(*iParam0, *iParam1, &(Local_62.f_170.f_42), -1, vLocal_59, 0, 0);
				func_1170(51);
			}
			if (is_ped_ragdoll(*iParam1))
			{
				func_302(0);
				func_1170(55);
			}
			break;
		case 51:
			if (func_335(134217728) && !func_605("PRRGS_MISSHIM"))
			{
				func_1320(iParam1);
			}
			if (!func_221(33554432))
			{
				if (func_280(iVar5, cVar7, 0.056f) && func_583(*iParam0, func_1290(), "speech_captor"))
				{
					func_545(Local_62.f_1226[1], 1);
					func_224(33554432);
				}
			}
			if ((!func_544(iParam1) && func_335(134217728)) && !func_605("PRRGS_MISSHIM"))
			{
				func_1170(52);
			}
			if (!func_65())
			{
				func_302(1);
				func_254();
				func_533(268435456);
				func_1170(52);
			}
			if (is_ped_ragdoll(*iParam1))
			{
				func_302(0);
				func_1170(55);
			}
			if (!func_221(268435456))
			{
				if (iVar3 == 4)
				{
					if (func_113(iVar5, "cry_loop", cVar7))
					{
						if (func_559(iVar5, "PBL_trans_cry_intimidation", cVar7, 0))
						{
							func_278(iVar5, "PBL_trans_cry_intimidation", cVar7, 1);
							func_277(iVar5, "BOOL_cry_loop", 1, cVar7);
						}
					}
					else if (func_113(iVar5, "stand_cry_2_intimidation", cVar7))
					{
						if (func_280(iVar5, cVar7, 0.989f))
						{
							_0xa180fbd502a03125(*iParam0, 2.75f, 1.75f);
							_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
							_0x41d1331afad5a091(*iParam0, 1, 0);
							_0x2208438012482a1a(*iParam0, true, false);
							set_ped_keep_task(*iParam0, true);
							func_928(iVar5, "pedGunsmith", *iParam0, cVar7, 1, 0);
						}
					}
				}
				if (_0x57779b55b83e2bea(*iParam0))
				{
					func_319(iParam0, 273, 0);
					func_319(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			break;
		case 52:
			if (_0x1ecc76792f661cf5("SRGKIGP3h") && !((func_280(iVar6, sVar8, 0.99f) || !_does_anim_scene_exist(iVar6)) || _0x34a0671be613d3d0(iVar6)))
			{
				return;
			}
			else if (!func_335(268435456))
			{
				return;
			}
			func_254();
			func_1321(iParam1);
			func_1170(53);
			break;
		case 53:
			if (!func_74(Global_35, &(Local_62.f_1247[8])))
			{
				return;
			}
			if (func_1322() || func_276(&(iParam0->f_214), 10f, 1, "gunsmith.timerGeneric"))
			{
				func_281(&(Local_62.f_1518), "SRGKSORR3", *iParam1, Global_35, 0, 0, 1, 1);
				func_418(134217728);
				func_533(16);
				func_1170(54);
			}
			break;
		case 54:
			if (func_1323(iParam0))
			{
				func_553(iVar5, "PBL_enter_intimidation", cVar7);
				func_140(1, 0);
				func_126(&(Local_62.f_1247[11]));
				func_126(&(Local_62.f_1247[12]));
				func_1170(63);
			}
			break;
		case 55:
			if (!is_ped_ragdoll(*iParam1))
			{
				func_1321(iParam1);
				if (func_583(*iParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "cry_loop_owner"))
				{
				}
				else
				{
					func_1324(iParam0, 1, 0);
					func_1170(66);
				}
				func_958(1, 1);
				func_1170(100);
			}
			break;
		case 60:
			func_302(0);
			set_ped_combat_attributes(*iParam0, 46, true);
			if (((func_583(*iParam0, func_1290(), func_1325()) || func_583(*iParam0, func_1290(), "explain_01_captor")) || func_583(*iParam0, func_1290(), "explain_02_captor")) || func_583(*iParam0, func_1290(), "explain_03_captor"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_01");
				func_553(iVar5, "PBL_trans_cry_intimidation", cVar7);
				func_928(iVar5, "objPhoto", &(Local_62.f_1226[1]), cVar7, 1, 0);
				func_1273(&(Local_62.f_1226[1]));
				func_1170(61);
			}
			else if (func_579(*iParam0, "safeToBreakoutA"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_03");
				func_1170(62);
			}
			else if (func_579(*iParam0, "safeToBreakoutB"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_04");
				func_1170(62);
			}
			else if (func_579(*iParam0, "safeToBreakoutC"))
			{
				func_1326(iParam0, iParam1, "PBL_captive_shot_05");
				func_1170(62);
			}
			else
			{
				func_1326(iParam0, iParam1, 0);
				func_1324(iParam0, 1, 0);
				func_1170(66);
			}
			break;
		case 61:
			if (iVar3 == 2 || iVar3 == 2048)
			{
				func_302(0);
				func_1170(64);
			}
			else if (iVar3 == 4)
			{
				if (func_113(iVar5, "cry_loop_captive_dead", cVar7))
				{
					if (func_559(iVar5, "PBL_enter_intimidation", cVar7, 0))
					{
						func_278(iVar5, "PBL_enter_intimidation", cVar7, 1);
						func_277(iVar5, "BOOL_cry_loop_captive_dead", 1, cVar7);
					}
				}
			}
			if (!func_221(268435456))
			{
				if (_0x57779b55b83e2bea(*iParam0))
				{
					func_319(iParam0, 273, 0);
					func_319(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			if (func_113(iVar5, "enter_intimidation", cVar7))
			{
				if (func_280(iVar5, cVar7, 0.991f) || !func_1126(iParam0))
				{
					_0x935cf6e42baf7f4d(*iParam0);
					_0xa180fbd502a03125(*iParam0, 2.75f, 1.75f);
					_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
					_0x41d1331afad5a091(*iParam0, 1, 0);
					_0x2208438012482a1a(*iParam0, true, false);
					set_ped_keep_task(*iParam0, true);
					func_928(iVar5, "pedGunsmith", *iParam0, cVar7, 1, 0);
				}
			}
			break;
		case 62:
			if (func_544(iParam0))
			{
				return;
			}
			func_1170(64);
			break;
		case 63:
			if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar13, 0, 0))
			{
				if (iVar13 == 2)
				{
					func_1170(64);
				}
				else if (iVar13 == 4 && func_559(iVar5, "PBL_enter_intimidation", cVar7, 0))
				{
					func_278(iVar5, "PBL_enter_intimidation", cVar7, 1);
					func_277(iVar5, "BOOL_cry_loop_captive_dead", 1, cVar7);
					func_1170(65);
				}
			}
			break;
		case 64:
			if (is_ped_ragdoll(*iParam0))
			{
				return;
			}
			func_1324(iParam0, 0, 0);
			func_1170(66);
			break;
		case 65:
			if (func_280(iVar5, cVar7, 0.998f))
			{
				_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
				_0x41d1331afad5a091(*iParam0, 1, 0);
				_0x2208438012482a1a(*iParam0, true, false);
				set_ped_keep_task(*iParam0, true);
				func_1170(66);
			}
			break;
		case 66:
			if (!func_221(268435456))
			{
				if (_0x57779b55b83e2bea(*iParam0))
				{
					_0xa180fbd502a03125(*iParam0, 2.75f, 1.75f);
					func_319(iParam0, 273, 0);
					func_319(&Global_35, 249, 0);
					func_224(268435456);
				}
			}
			if (is_entity_dead(*iParam0))
			{
				func_254();
				func_61(&(iParam0->f_1));
				func_958(1, 1);
				func_1170(100);
			}
			else if (!func_74(Global_35, &(Local_62.f_1247[8])))
			{
				_0xa180fbd502a03125(*iParam0, 1.5f, 1f);
				func_958(1, 1);
				func_1170(100);
			}
			else if (func_44(268435456))
			{
				if (!func_335(-2147483648))
				{
					if (func_353(3f, 1, 0, 0))
					{
						func_281(&(Local_62.f_1518), "SRGK_ATTACK2", *iParam0, Global_35, 0, 0, 1, 1);
						func_533(-2147483648);
					}
				}
			}
			break;
		case 75:
			func_553(&(Local_62.f_1216[4]), "pbLeave", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(&(Local_62.f_1216[4]), "pbAskFree2", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(&(Local_62.f_1216[4]), "pbAskFree3", "SCENE_RHDGUN_VICTIM_ALONE");
			func_553(&(Local_62.f_1216[4]), "pbAskFree4", "SCENE_RHDGUN_VICTIM_ALONE");
			func_140(1, 0);
			func_126(&(Local_62.f_1247[11]));
			func_126(&(Local_62.f_1247[12]));
			if (!Local_62.f_1247[8]->f_1)
			{
				func_546(&(Local_62.f_1216[2]), "SCENE_RHDGUN_BASEMENT_CAPTIVE");
				func_546(&(Local_62.f_1216[3]), "SCENE_RHDGUN_BASEMENT_GUNSMITH");
				func_1260();
				func_535(&(Local_62.f_1216[4]), "SCENE_RHDGUN_VICTIM_ALONE");
				func_278(&(Local_62.f_1216[4]), "pbBedLoop", "SCENE_RHDGUN_VICTIM_ALONE", 1);
				func_1170(76);
			}
			else if (func_221(16777216))
			{
				if (func_583(*iParam1, func_1290(), "speech_captive"))
				{
					func_278(iVar6, "PBL_captor_shot_02", sVar8, 1);
					func_1170(87);
				}
				else
				{
					func_1321(iParam1);
					func_958(1, 1);
					func_1170(100);
				}
				func_302(0);
				func_281(&(Local_62.f_1518), "SRGKAFTER", *iParam1, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_302(0);
				func_281(&(Local_62.f_1518), "PRRGS_IG6c1", *iParam1, Global_35, 0, 0, 1, 1);
				if (func_221(65536))
				{
					func_1170(78);
				}
				else
				{
					func_553(iVar6, "PBL_captor_shot_01", sVar8);
					func_1170(77);
				}
			}
			break;
		case 76:
			if (func_74(Global_35, &(Local_62.f_1247[8])))
			{
				func_281(&(Local_62.f_1518), "PRRGS_IG6a", *iParam1, Global_35, 0, 0, 1, 1);
				func_277(&(Local_62.f_1216[4]), "bStopBedLoop", 1, "SCENE_RHDGUN_VICTIM_ALONE");
				func_278(&(Local_62.f_1216[4]), "pbSawPlayer", "SCENE_RHDGUN_VICTIM_ALONE", 1);
				func_1287(Local_62.f_1482[0], func_1286(), -1471716628);
				func_224(8192);
				set_ped_config_flag(*iParam1, 6, true);
				func_1170(79);
			}
			break;
		case 77:
			if (!func_559(iVar6, "PBL_captor_shot_01", sVar8, 0))
			{
				return;
			}
			func_224(262144);
			func_535(iVar6, sVar8);
			func_278(iVar6, "PBL_captor_shot_01", sVar8, 1);
			func_224(65536);
			func_277(iVar6, "BOOL_afraid_loop_b", 1, sVar8);
			func_277(iVar6, "BOOL_afraid_loop_a", 0, sVar8);
			func_1170(79);
			break;
		case 78:
			if (!func_559(iVar6, "PBL_react_to_gunfire_a", sVar8, 0))
			{
				return;
			}
			if (!func_812(iVar6, sVar8, "PBL_react_to_gunfire_a"))
			{
				func_278(iVar6, "PBL_react_to_gunfire_a", sVar8, 1);
				return;
			}
			else
			{
				func_277(iVar6, "BOOL_afraid_loop_a", 1, "PBL_react_to_gunfire_a");
			}
			if (!func_583(*iParam1, func_1290(), "cower_loop_a_captive"))
			{
				return;
			}
			if (!func_276(&(iParam1->f_123), 3f, 0, "captive.timerGenericB"))
			{
				return;
			}
			func_277(iVar6, "BOOL_cower_loop_a", 1, sVar8);
			func_277(iVar6, "BOOL_afraid_loop_a", 0, sVar8);
			func_278(iVar6, "PBL_cower_to_afraid_a", sVar8, 1);
			func_1170(79);
			break;
		case 79:
			if (!func_353(0, 1, 0, 0) || func_119(&(Local_62.f_390[0]->f_9), 262144))
			{
				return;
			}
			func_278(&(Local_62.f_1216[4]), "pbAskFree2", sVar8, 1);
			func_224(16384);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_281(&(Local_62.f_1518), "PRRGS_IG6c2", *iParam1, Global_35, 0, 0, 1, 1);
			func_1170(80);
			break;
		case 80:
			if (!func_353(4f, 1, 0, 0) || func_119(&(Local_62.f_390[0]->f_9), 262144))
			{
				return;
			}
			func_278(&(Local_62.f_1216[4]), "pbAskFree3", sVar8, 1);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_281(&(Local_62.f_1518), "PRRGS_IG6c3", *iParam1, Global_35, 0, 0, 1, 1);
			func_1170(81);
			break;
		case 81:
			if (!func_353(4f, 1, 0, 0) || func_119(&(Local_62.f_390[0]->f_9), 262144))
			{
				return;
			}
			func_278(&(Local_62.f_1216[4]), "pbAskFree4", sVar8, 1);
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_281(&(Local_62.f_1518), "PRRGS_IG6c4", *iParam1, Global_35, 0, 0, 1, 1);
			func_1170(85);
			break;
		case 82:
			if (!func_353(4f, 1, 0, 0) || func_119(&(Local_62.f_390[0]->f_9), 262144))
			{
				return;
			}
			func_337(&(iParam1->f_64), Global_35, 6000, vLocal_59, 0);
			func_281(&(Local_62.f_1518), "PRCSHRG_IG6_P1", *iParam1, Global_35, 0, 0, 1, 1);
			func_1170(85);
			break;
		case 85:
			break;
		case 86:
			if (func_280(&(Local_62.f_1216[4]), "SCENE_RHDGUN_VICTIM_ALONE", 0.5703f))
			{
				func_1321(iParam1);
				func_958(1, 1);
				func_1170(100);
			}
			break;
		case 87:
			if (!func_544(iParam1))
			{
				func_1321(iParam1);
				func_958(1, 1);
				func_1170(100);
			}
			break;
		case 88:
			func_1274(0);
			if (!_is_ped_hogtied(*iParam1))
			{
				func_281(&(Local_62.f_1518), "SRGH_REAATTK", *iParam1, Global_35, 0, 0, 1, 1);
			}
			func_1321(iParam1);
			set_ped_combat_attributes(*iParam0, 46, true);
			func_1327(*iParam0, Local_62.f_1616[1], iParam1->f_117, 3000, Global_35);
			func_57(268435456);
			func_660(*iParam0, &(iParam0->f_1), 831283580, 580546400, 0, 0);
			func_958(1, 1);
			func_1170(100);
			break;
		case 89:
			func_1274(0);
			if (!_is_ped_hogtied(*iParam1))
			{
				func_281(&(Local_62.f_1518), "SRGH_REAATTK", *iParam1, Global_35, 0, 0, 1, 1);
			}
			func_1321(iParam1);
			func_958(1, 1);
			func_1170(100);
			break;
		case 95:
			func_958(1, 1);
			set_entity_rotation(&(Local_62.f_1226[0]), 0f, 0f, 165f, 2, true);
			if (!func_62(33554432))
			{
				func_75(iParam1);
			}
			_0x7b204f88f6c3d287(func_45(iParam0->f_8));
			func_517(8);
			func_591(*iParam0, 1322.407f, -1324.66f, 73.94173f, -16.56f, 2, 1073741824);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_563(&(iParam1->f_10), &(iParam1->f_30), 0, 0);
			func_1170(100);
			break;
		case 100:
			break;
	}
}

void func_768(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		if (iLocal_46 <= 21)
		{
			func_254();
		}
		if (_does_volume_exist(Local_62.f_1376))
		{
			func_126(Local_62.f_1376);
			func_126(bVar1768);
			func_126(bVar1767);
		}
	}
	iVar0 = &Local_62.f_1216[0];
	sVar1 = "SCENE_STRGEN_HOLDUP";
	if (!func_221(-2147483648))
	{
		if ((_is_ped_lassoed(*iParam0) || _is_ped_hogtied(*iParam0)) || func_1328(Global_35, *iParam0))
		{
			clear_ped_secondary_task(*iParam0);
			func_224(-2147483648);
		}
	}
	if (func_145(*iParam0, 0, 0))
	{
		if (!func_720() && !func_74(Global_35, Local_62.f_1290))
		{
			if (func_605("PRSGS_LADDER"))
			{
				if (get_current_scripted_conversation_line("PRSGS_LADDER") >= 4)
				{
					func_532("PRSGS_LADDER", 0);
				}
			}
			func_754(*iParam0, 0);
		}
		if (!_0x3ab6c7b0bb0df4b1(*iParam0, iVar0))
		{
			func_126(Local_62.f_1376);
			func_126(bVar1767);
		}
	}
	else
	{
		func_126(bVar1767);
	}
	func_308(*iParam0, 0, &(iParam0->f_14), &iVar2, 0, 0);
	if (!func_55(262144))
	{
		if (func_74(Global_35, Local_62.f_1290))
		{
			if (iVar2 == 8 && func_784(Global_35, 1, 0, 0) != 2055893578)
			{
				func_1329(iParam0);
				func_1170(19);
			}
			else if (iVar2 == 2)
			{
				if (_0x29fce825613fefca(*iParam0, 1000) && !has_entity_been_damaged_by_entity(*iParam0, Global_35, 1, 1))
				{
				}
				else
				{
					func_1330(*iParam0);
				}
			}
			else
			{
				func_1331(iParam0);
			}
		}
	}
	else
	{
		if (iVar2 == 8)
		{
			if ((iLocal_46 != 19 && iLocal_46 != 20) && iLocal_46 != 21)
			{
				if (func_113(iVar0, "BasementIdle1", sVar1))
				{
					func_277(iVar0, "COWER_BOOL", 0, sVar1);
					if (!_0x1f0e401031e20146(iVar0, "PB_COWER_L_BASE1"))
					{
						func_553(iVar0, "PB_COWER_L_BASE1", sVar1);
						func_278(iVar0, "PB_COWER_L_BASE1", sVar1, 1);
					}
					else
					{
						func_553(iVar0, "PB_COWER_R_BASE1", sVar1);
						func_278(iVar0, "PB_COWER_R_BASE1", sVar1, 1);
					}
				}
				else if (func_113(iVar0, "BasementIdle2", sVar1))
				{
					func_277(iVar0, "COWER_BOOL", 0, sVar1);
					if (!_0x1f0e401031e20146(iVar0, "PB_COWER_L_BASE2"))
					{
						func_553(iVar0, "PB_COWER_L_BASE2", sVar1);
						func_278(iVar0, "PB_COWER_L_BASE2", sVar1, 1);
					}
					else
					{
						func_553(iVar0, "PB_COWER_R_BASE2", sVar1);
						func_278(iVar0, "PB_COWER_R_BASE2", sVar1, 1);
					}
				}
			}
		}
		else
		{
			if (get_anim_scene_bool(iVar0, "COWER_BOOL") == 0)
			{
				func_277(iVar0, "COWER_BOOL", 1, sVar1);
			}
			if (!func_62(134217728))
			{
				if (!is_any_speech_playing(*iParam0) && !is_any_speech_playing(Global_35))
				{
					func_1331(iParam0);
				}
			}
		}
		if (!func_55(1048576))
		{
			if (func_584(Global_35, get_hash_key(func_611())))
			{
				func_61(Local_62.f_1482[0]);
				func_57(1048576);
				func_1170(30);
			}
			else
			{
				func_1332(iParam0, iParam0->f_209);
			}
		}
	}
	if (!func_74(Global_35, Local_62.f_1290))
	{
		if (iVar1771 == 0)
		{
			if (func_313(&(Local_62.f_1), 32))
			{
				func_726(&(Local_62.f_1465), 45f);
				func_57(65536);
			}
			if (func_248(&(Local_62.f_1), 1f))
			{
				iLocal_1774 = 1;
			}
		}
	}
	if (iVar1772 == 0)
	{
		if (func_222(player_id(), 1, 0, 1))
		{
			iVar3 = create_itemset(false);
			_0x0c392db374655176(-1791.771f, -386.0641f, 159.3286f, 5.5f, iVar3);
			bVar4 = get_itemset_size(iVar3) > 0;
			if (bVar4 == 1)
			{
			}
			_0x20a4bf0e09bee146(iVar3);
			clean_itemset(iVar3);
			destroy_itemset(iVar3);
			if (!func_74(Global_35, Local_62.f_1290) || bVar4 == 1)
			{
				_task_smart_flee_style_ped(*iParam0, Global_35, 4, 0, -1082130432, -1, 0);
				set_ped_keep_task(*iParam0, true);
				iLocal_1775 = 1;
				func_126(bVar1767);
			}
		}
	}
	func_1333(iParam0, iVar0, sVar1);
	func_1334(iParam0, iVar0, sVar1, iVar2);
	func_1335(iParam0);
	func_1336(iParam0);
	func_1337(iParam0, iVar2);
	func_1338(iParam0, iVar0, sVar1);
	if ((Local_62.f_1620 % 10) != 0)
	{
		func_1339();
	}
	if (func_621(&uLocal_1782))
	{
		if (func_657(&uLocal_1782, 5f))
		{
			func_126(bVar1767);
		}
	}
	switch (iLocal_46)
	{
		case 0:
			if (!func_50(&(iParam0->f_13), 1))
			{
				func_553(iVar0, "PB_B2_TRANS_B1", sVar1);
				func_553(iVar0, "PB_B1_TRANS_B2", sVar1);
				func_1340(iVar0, sVar1);
				func_915(iParam0->f_85[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
				func_915(iParam0->f_85[1], "INTERACT_THREATEN", "", 648122183, 0, 0, 0, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_649(&(iParam0->f_13), 1);
			}
			if (has_anim_event_fired(*iParam0, -1010274343))
			{
				if (_does_volume_exist(Local_62.f_1376))
				{
					func_126(Local_62.f_1376);
					func_126(bVar1768);
					Local_62.f_1376 = _0x0eb78c2b156635b1(-1612834106, -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
					_0xae6004120c18df97(Local_62.f_170, 0, 1);
					uLocal_1770 = _0x0eb78c2b156635b1(-1612834106, -1791.637f, -388.958f, 157.475f, 0f, 0f, -58.115f, 1f, 2.767f, 3f);
				}
			}
			if (func_583(*iParam0, func_1138(), "ladder_idle"))
			{
				if (!func_221(8388608))
				{
					if (_does_volume_exist(Local_62.f_1376))
					{
						func_126(Local_62.f_1376);
						func_126(bVar1768);
						Local_62.f_1376 = _0x0eb78c2b156635b1(-1612834106, -1788.569f, -385.934f, 157.475f, 0f, 0f, -35f, 0.9f, 2.182f, 3f);
						func_224(8388608);
					}
				}
				if (func_74(Global_35, Local_62.f_1290))
				{
					func_277(iVar0, "bStopLadderLoop", 1, sVar1);
					func_231(&(iParam0->f_14), 500);
					func_1170(10);
					func_1341(iParam0->f_85[1], "INTERACT_THREATEN", 1);
					func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
					func_619(&uLocal_1782, 0);
				}
				else
				{
					func_1342(*iParam0);
				}
			}
			else if (!get_is_task_active(Local_62.f_170, 3))
			{
				func_546(iVar0, sVar1);
				func_796(0, func_900(0), 0, "pbLadderToCorner");
				func_1170(1);
				func_126(bVar1767);
			}
			break;
		case 1:
			if (!is_ped_ragdoll(Local_62.f_170))
			{
				func_813(Local_62.f_170, func_1343(), func_1344(), 1065353216, 1050253722, 0, 20000);
				func_1170(2);
			}
			break;
		case 2:
			if (is_ped_ragdoll(Local_62.f_170))
			{
				func_1170(1);
			}
			else if (func_1135(Local_62.f_170, func_1343(), func_1344(), 0.4f, 20f, 1))
			{
				if (func_799(0))
				{
					func_1139();
					func_535(iVar0, sVar1);
					func_278(iVar0, "pbLadderToCorner", sVar1, 1);
					func_1170(0);
				}
			}
			else if (!func_548(Local_62.f_170, 1435919172, 1))
			{
				func_1170(1);
			}
			break;
		case 10:
			if (func_583(*iParam0, func_1138(), "basement_idle_01"))
			{
				func_224(65536);
				func_1170(11);
				func_126(bVar1767);
			}
			if (func_583(*iParam0, func_1138(), "walk_backwards"))
			{
				if (func_1345(*iParam0, func_1138(), "walk_backwards") >= 0.22f)
				{
					if (_does_volume_exist(bVar1767))
					{
						func_126(bVar1767);
					}
				}
			}
			if (has_anim_event_fired(*iParam0, 810481058))
			{
				func_126(bVar1767);
			}
			if (iParam0->f_209 == 0)
			{
				func_307(Local_62.f_1392[0]);
				Local_62.f_1473[0] = 20f;
				func_302(0);
				func_596(iParam0, "PRSGS_A_ILO1_P1", "PRSGS_J_ILO1_P1", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_1170(12);
				func_126(bVar1767);
			}
			else if (iParam0->f_209 == 1)
			{
				func_1329(iParam0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_649(&(iParam0->f_13), 4096);
				func_1170(19);
				func_126(bVar1767);
			}
			break;
		case 11:
			if (iParam0->f_209 == 0)
			{
				func_307(Local_62.f_1392[0]);
				Local_62.f_1473[0] = 20f;
				func_302(0);
				func_596(iParam0, "PRSGS_A_ILO1_P1", "PRSGS_J_ILO1_P1", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_1170(12);
			}
			else if (iParam0->f_209 == 1)
			{
				func_1329(iParam0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_649(&(iParam0->f_13), 4096);
				func_1170(19);
			}
			break;
		case 12:
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "PRSGS_C_ILO1_P1", *iParam0, Global_35, 0, 0, 1, 1);
			func_1170(13);
			break;
		case 13:
			if (!func_353(-2f, 1, 0, 0))
			{
				return;
			}
			func_307(Local_62.f_1392[0]);
			Local_62.f_1473[0] = 0f;
			func_1170(14);
			break;
		case 14:
			if (!func_50(&(iParam0->f_13), 8))
			{
				func_1341(iParam0->f_85[1], "INTERACT_THREATEN", 1);
				func_739(iParam0->f_85[1], 1, 0);
				func_649(&(iParam0->f_13), 8);
			}
			if (iParam0->f_209 != 1)
			{
				return;
			}
			func_1329(iParam0);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_649(&(iParam0->f_13), 4096);
			func_1170(19);
			break;
		case 19:
			apply_ped_damage_pack(*iParam0, "PD_Pissing_Pants", 0f, 1f);
			if (!_is_ped_hogtied(Local_62.f_170) && !_is_ped_lassoed(Local_62.f_170))
			{
				task_play_anim(*iParam0, func_1138(), "basement_idle_flinch", 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
			}
			func_1170(20);
			break;
		case 20:
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			if (!func_50(&(iParam0->f_13), 4096))
			{
				func_1346("basement_line_10", "PRSGS_BASE10");
			}
			else
			{
				func_1346("basement_line_10", "PRSGS_BASE10_2");
			}
			func_594(func_611(), 1);
			func_1170(21);
			break;
		case 21:
			if (func_353(-1f, 1, 0, 0) && !is_entity_dead(*iParam0))
			{
				func_596(iParam0, "PRSGS_BETTER", "PRSGS_BETTERJ", 1);
				func_68(-1792.26f, -382.182f, 157.5527f, Local_62.f_1482[0], 408396114, 0, 0, 0);
				func_1170(22);
			}
			break;
		case 30:
			if (!func_579(Global_35, "objectExchange"))
			{
				return;
			}
			func_1347(1);
			func_411(Local_62, 524288);
			func_553(iVar0, "pbToKnees", sVar1);
			func_553(iVar0, "pbToKnees02", sVar1);
			_0xf7ea250b9a919e03(2017973493, *iParam0);
			_0xf7ea250b9a919e03(1215332025, *iParam0);
			_0xf7ea250b9a919e03(-163226389, *iParam0);
			func_1348(5000, 0, 1065353216, 1, 0, 0, 1, 752097756);
			func_1170(31);
			break;
		case 31:
			if (func_353(2f, 1, 0, 0))
			{
				func_1346("basement_line_14", "PRSGS_BASE14");
				func_1170(32);
				if (!func_62(134217728))
				{
					func_1149(65536);
				}
			}
			break;
		case 32:
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			if (!func_74(Global_35, &(Local_62.f_1247[0])))
			{
				func_1349(iParam0, &(iParam0->f_209));
				return;
			}
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_1170(41);
			break;
		case 41:
			if (!func_145(*iParam0, 0, 1))
			{
				func_281(&(Local_62.f_1518), "PRSGS_BASE13", *iParam0, Global_35, 0, 0, 1, 1);
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
				func_1170(100);
				return;
			}
			if (func_1350(iVar0, sVar1))
			{
				func_278(iVar0, "pbToKnees", sVar1, 1);
				func_277(iVar0, "bStopBasementLoop2", 1, sVar1);
				func_224(131072);
				func_1170(42);
				func_1291(iParam0->f_85[0], "RE_INTER_POS");
			}
			else if (func_1351(iVar0, sVar1))
			{
				func_278(iVar0, "pbToKnees02", sVar1, 1);
				func_277(iVar0, "bStopBasementLoop1", 1, sVar1);
				func_224(131072);
				func_1170(42);
				func_1291(iParam0->f_85[0], "RE_INTER_POS");
			}
			break;
		case 42:
			if (!func_113(iVar0, "ToKnees", sVar1))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "PRSGS_BASE13", *iParam0, Global_35, 0, 0, 1, 1);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
			func_1170(43);
			break;
		case 43:
			if (!func_74(Global_35, Local_62.f_1290))
			{
				return;
			}
			if (!func_353(-4.5f, 1, 0, 0))
			{
				return;
			}
			if (!func_583(*iParam0, func_1138(), "Crying"))
			{
				return;
			}
			func_277(iVar0, "bStopCryLoop", 1, sVar1);
			func_302(0);
			func_281(&(Local_62.f_1518), "PRSGS_C_SORRY", *iParam0, Global_35, 0, 0, 1, 1);
			func_1170(44);
			break;
		case 44:
			if (!func_353(-2.5f, 1, 0, 0))
			{
				if (func_50(&(iParam0->f_13), 2))
				{
					func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				}
				return;
			}
			if (!func_50(&(iParam0->f_13), 2))
			{
				func_1341(iParam0->f_85[0], "INTERACT_GREET", 0);
				func_1341(iParam0->f_85[1], "INTERACT_THREATEN", 1);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
			}
			if (iParam0->f_209 == 0)
			{
				func_596(iParam0, "PRSGS_A_ILO4_P1", "PRSGS_J_ILO4_P1", 1);
				func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_1170(100);
			}
			else if (iParam0->f_209 == 1)
			{
				func_596(iParam0, "PRSGS_A_ILO4_N1", "PRSGS_J_ILO4_N1", 1);
				func_297(*iParam0, Global_35, &(iParam0->f_42), -1, vLocal_59, 1, 0);
				func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
				func_1170(100);
			}
			break;
		case 100:
			break;
	}
}

void func_769(var uParam0, var uParam1, int* iParam2, int* iParam3)
{
	iVar0 = -1;
	if (func_551(&(iParam3->f_10), 2))
	{
		iVar0 = func_552(iParam3, &(iParam3->f_12), 15f, &(iParam3->f_30), 0, 1, 0, 0, 3, 0, 2, -1082130432);
	}
	iVar1 = &Local_62.f_1216[5];
	sVar2 = "SCENE_VALDOC_GANGOPENBACKROOM";
	iVar3 = &Local_62.f_1216[7];
	sVar4 = "SCENE_VALDOC_FEMALEPANIC";
	iVar5 = &Local_62.f_1216[6];
	sVar6 = "SCENE_VALDOC_COUPLEFLIRTBREAKOUT";
	if (is_entity_dead(Local_62.f_170))
	{
		func_254();
	}
	if (func_579(*uParam0, "DoorOpen"))
	{
		freeze_entity_position(&(Local_62.f_1198[0]), true);
	}
	if (!func_221(-2147483648))
	{
		if (iLocal_46 > 2)
		{
			func_426(-706941207, 0, 1f, 1, 1, 0, 0, 0);
			func_224(-2147483648);
		}
	}
	func_1352(&uVar7, &uVar8, &uVar9);
	func_1353();
	func_1354();
	func_1355();
	func_1356();
	func_1357();
	if ((Local_62.f_1620 % 10) == 0)
	{
		func_1358();
		if (func_1359(3))
		{
			if (!func_797(0))
			{
				if (!func_120(32))
				{
					func_453(0, 0);
					compendium_gang_encountered(55818986);
					func_517(32);
				}
			}
			else
			{
				func_517(32);
			}
			iVar10 = 1;
		}
		func_1360(uParam0, uParam1, iParam2, iParam3, &iVar10);
		func_1361(uParam0, uParam1, iParam2, &iVar10);
	}
	if (iLocal_46 > 1)
	{
		func_1362(925575409, 1f, 1);
	}
	func_1363();
	func_1364();
	switch (iLocal_46)
	{
		case 0:
			func_1365();
			start_anim_scene(&(Local_62.f_1216[3]));
			func_278(&(Local_62.f_1216[3]), "pbLoopToWakeUp", "SCENE_VALDOC_ONBED", 1);
			func_75(Local_62.f_1021[0]);
			func_593(&(Local_62.f_390[3]), 1);
			if (does_entity_exist(&(Local_62.f_1226[0])))
			{
				delete_object(Local_62.f_1226[0]);
			}
			func_1170(1);
			break;
		case 1:
			func_307(Local_62.f_1392[3]);
			if (func_771(Global_35))
			{
				func_357();
				func_426(925575409, 0, 0, 0, 1, 0, 0, 0);
				func_596(iParam2, "SRVDPLABAKRM", "SRVDPLJBAKRM", 1);
				func_533(16384);
				func_1366();
				func_1170(2);
			}
			else if (((((func_1367() || func_44(262144)) || func_44(1048576)) || func_119(&(uParam0->f_9), 16384)) || func_119(&(uParam1->f_9), 16384)) || func_119(&(iParam2->f_9), 16384))
			{
				func_357();
				if (iLocal_47 < 1)
				{
					func_281(&(Local_62.f_1518), "SRVDOPREP", *uParam0, Global_35, 0, 0, 1, 1);
					func_1368(1);
				}
				func_426(925575409, 0, 0, 0, 1, 0, 0, 0);
				func_1366();
				if (!func_74(Global_35, Local_62.f_1290) && !func_74(Global_35, Local_62.f_1292))
				{
					func_224(1048576);
				}
				func_1170(3);
			}
			else if (func_1369())
			{
				func_426(925575409, 0, 0, 0, 1, 0, 0, 0);
				func_546(&(Local_62.f_1216[1]), "SCENE_VALDOC_COUNTMONEY");
				func_546(&(Local_62.f_1216[2]), "SCENE_VALDOC_COUPLEFLIRT");
				func_546(iVar5, sVar6);
				func_546(iVar1, sVar2);
				func_546(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM");
				func_546(&(Local_62.f_1216[3]), "SCENE_VALDOC_ONBED");
				func_1370();
				func_1371(uParam0, uParam1, iParam2, iParam3);
				func_1170(6);
			}
			break;
		case 2:
			if (!func_621(&(Local_62.f_1450)))
			{
				func_317(&(Local_62.f_1450));
			}
			if (func_657(&(Local_62.f_1450), 0.5f))
			{
				func_1170(3);
			}
			else if (func_1367() || func_1372(&(Local_62.f_390[2])))
			{
				if (_does_anim_scene_exist(&(Local_62.f_1216[3])))
				{
					func_281(&(Local_62.f_1518), "SRVDODR3SEEP", *iParam2, Global_35, 0, 0, 1, 1);
					set_anim_scene_bool(&(Local_62.f_1216[3]), "bActionBreakoutBed", true, false);
				}
				func_1170(3);
			}
			break;
		case 3:
			func_368(0);
			func_61(Local_62.f_1482[1]);
			func_254();
			func_1373(uParam0, iVar1, sVar2);
			func_1170(4);
			break;
		case 4:
			func_660(&(Local_62.f_390[0]), &(Local_62.f_390[0]->f_1), 831283580, 580546400, 0, 0);
			func_660(&(Local_62.f_390[1]), &(Local_62.f_390[1]->f_1), 831283580, 580546400, 0, 0);
			func_660(&(Local_62.f_390[2]), &(Local_62.f_390[2]->f_1), 831283580, 580546400, 0, 0);
			func_1374();
			func_1170(5);
			break;
		case 5:
			iVar11 = func_1375(uParam0);
			iVar12 = func_1376(uParam1, iParam3);
			iVar13 = func_1377(iParam2);
			if ((iVar11 && iVar12) && iVar13)
			{
				func_1170(20);
			}
			break;
		case 6:
			if (!func_366())
			{
				func_1378(uParam0);
				return;
			}
			func_1374();
			func_533(16384);
			func_1379(uParam0, 0, uParam1, 1, iParam2, 2);
			func_915(Local_62.f_170.f_85[0], "INTERACT_GREET", "", -163964935, 0, 0, 0, 1, 0);
			func_915(Local_62.f_170.f_85[1], "INTERACT_THREATEN", "", 648122183, 0, 0, 0, 1, 0);
			func_1258(&(Local_62.f_170.f_13), &(Local_62.f_170.f_85), 0);
			func_649(&(Local_62.f_170.f_13), 1);
			func_772(&(Local_62.f_390[0]->f_9), 8192);
			func_772(&(Local_62.f_390[1]->f_9), 8192);
			func_772(&(Local_62.f_390[2]->f_9), 8192);
			func_772(&(Local_62.f_390[0]->f_9), 1048576);
			func_772(&(Local_62.f_390[1]->f_9), 1048576);
			func_772(&(Local_62.f_390[2]->f_9), 1048576);
			func_1170(20);
			break;
		case 20:
			if (!func_551(&(iParam3->f_10), 1))
			{
				func_915(iParam3->f_30[0], "INTERACT_LET_GO", "", -163964935, 0, 0, 0, 1, 0);
				func_915(iParam3->f_30[1], "INTERACT_THREATEN", "", 648122183, 0, 0, 0, 1, 0);
				func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
				func_916(&(iParam3->f_10), 2);
				func_916(&(iParam3->f_10), 1);
			}
			func_1380(&(Local_62.f_170));
			func_1381(iParam3, &iVar0);
			func_1382(iParam3);
			func_546(iVar5, sVar6);
			if (!func_145(*iParam3, 0, 1))
			{
				func_1170(100);
				return;
			}
			if (!func_551(&(iParam3->f_10), 1024) && !func_551(&(iParam3->f_10), 2048))
			{
				if (func_1383())
				{
					func_1170(30);
				}
				else if (func_1217(Global_35) && _0x7f9b9791d4cb71f6(*iParam3, Global_35, true, 0) == 1)
				{
					func_1170(21);
				}
				else if (func_221(4194304))
				{
					func_1170(22);
				}
				else if (func_551(&(iParam3->f_10), 2048))
				{
					func_1170(23);
				}
			}
			else
			{
				func_1170(35);
			}
			break;
		case 21:
			func_1384(iParam3);
			func_1382(iParam3);
			if (!func_621(&(iParam3->f_120)))
			{
				func_317(&(iParam3->f_120));
			}
			if (func_657(&(iParam3->f_120), 1f))
			{
				if (func_221(4194304))
				{
					func_1170(22);
				}
				else
				{
					func_1170(30);
				}
			}
			break;
		case 22:
			func_1382(iParam3);
			if (func_221(4194304))
			{
				if (func_221(8388608))
				{
					if (func_657(&(Local_62.f_390[3]->f_120), 2f))
					{
						func_1170(30);
					}
				}
			}
			else
			{
				func_1170(30);
			}
			break;
		case 23:
			func_1382(iParam3);
			if (!func_353(-1.5f, 1, 0, 0))
			{
				return;
			}
			func_1170(30);
			break;
		case 30:
			func_1382(iParam3);
			func_563(&(iParam3->f_10), &(iParam3->f_30), 0, 0);
			if (!func_551(&(iParam3->f_10), 64))
			{
				func_1385(&(iParam3->f_30));
				func_1386(&(iParam3->f_30), 0);
				func_916(&(iParam3->f_10), 64);
			}
			if (func_550(iVar3, sVar4))
			{
				set_anim_scene_bool(iVar3, "bFemaleGrabGun", true, false);
				func_1170(31);
			}
			else if (func_550(iVar5, sVar6))
			{
			}
			else
			{
				func_1170(35);
			}
			break;
		case 31:
			func_1382(iParam3);
			if (!func_280(iVar3, sVar4, 0.996f))
			{
				return;
			}
			func_536(*iParam3, 379542007, 1, 0);
			func_545(Local_62.f_1226[12], 0);
			task_aim_gun_at_entity(*iParam3, Global_35, -1, 1, 1);
			func_660(*iParam3, &(iParam3->f_1), 831283580, 580546400, 0, 0);
			func_1170(32);
			break;
		case 32:
			func_1382(iParam3);
			if (!func_621(&(iParam3->f_120)))
			{
				if (func_145(*iParam3, 0, 1))
				{
					func_943("SRVDWBEG1", 0);
					func_943("SRVDWBEG2", 0);
					func_943("SRVDWBEG3", 0);
					func_281(&(Local_62.f_1518), "SRVDWHRATTCK", *iParam3, Global_35, 0, 0, 1, 1);
					func_317(&(iParam3->f_120));
				}
			}
			else if (func_657(&(iParam3->f_120), 0f))
			{
				if (func_145(*iParam3, 0, 1))
				{
					task_combat_ped(*iParam3, Global_35, 0, 0);
					func_1170(35);
				}
			}
			break;
		case 35:
			func_1384(iParam3);
			func_1382(iParam3);
			if (func_1387(iParam3))
			{
				func_1170(23);
			}
			func_1380(&(Local_62.f_170));
			break;
		case 100:
			func_1384(iParam3);
			func_1380(&(Local_62.f_170));
			break;
	}
}

void func_770()
{
	if (func_221(536870912))
	{
		if (iLocal_50 < 16)
		{
			if (is_entity_in_angled_area(Global_35, -289.4323f, 805.3393f, 118.4419f, -282.3666f, 806.5512f, 121.2961f, 1.52f, false, true, 0))
			{
				func_1388(16);
			}
		}
		func_1389();
	}
	if (func_120(64))
	{
		_0xc310239acccf5579();
	}
	switch (iLocal_50)
	{
		case 0:
			if (func_221(536870912))
			{
				func_1388(5);
			}
			break;
		case 5:
			if (func_1359(3))
			{
				func_928(&(Local_62.f_1216[5]), "objCountChair", &(Local_62.f_1226[10]), "SCENE_VALDOC_GANGOPENBACKROOM", 1, 0);
				func_392(Local_62.f_1226[10], 0);
				func_224(2097152);
				func_1388(6);
			}
			break;
		case 6:
			if (func_771(Global_35) || func_74(Global_35, Local_62.f_1292))
			{
				if (func_276(Local_62.f_1392[7], 25f, 1, "TIMER_VALDOC_LAW_WARNING"))
				{
					func_517(64);
					func_1390(Local_62.f_1148[3], 3);
					if (func_145(&(Local_62.f_1148[3]), 0, 1))
					{
						set_entity_coords(&(Local_62.f_1148[3]), -285.7319f, 780.6429f, 117.7988f, true, false, true, true);
						func_49(&(Local_62.f_1148[3]), 1, "VALLAW2", 0, "");
						func_1393(&(Local_62.f_1148[3]), func_1391(), func_1392());
					}
					func_1388(7);
				}
			}
			break;
		case 7:
			if (func_353(-3f, 1, 0, 0))
			{
				func_596(Local_62.f_1148[0], "SRVDL1WRN1A", "SRVDL1WRN1J", 1);
				func_1388(8);
			}
			break;
		case 8:
			if (func_353(0, 1, 0, 0))
			{
				func_1388(9);
			}
			break;
		case 9:
			if (func_353(3.5f, 1, 0, 0))
			{
				func_281(&(Local_62.f_1518), "SRVDL1WRN2", &(Local_62.f_1148[0]), Global_35, 0, 0, 1, 1);
				func_1388(10);
			}
			break;
		case 10:
			if (func_145(&(Local_62.f_1148[3]), 0, 1))
			{
				func_1394(&(Local_62.f_1148[3]), 416676503, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				open_sequence_task(&iVar1);
				task_follow_nav_mesh_to_coord(0, -285.3035f, 789.7344f, 117.3547f, 2f, 20000, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, -284.1398f, 796.0361f, 117.5927f, 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, -283.8506f, 806.4141f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, -288.3323f, 811.5166f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, -290.0516f, 812.3234f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				task_follow_nav_mesh_to_coord(0, -290.6452f, 814.8721f, 118.3859f, 1f, -1, 0.25f, 0, 40000f);
				task_turn_ped_to_face_entity(0, &(Local_62.f_1226[10]), 3000, -1082130432, -1082130432, -1082130432);
				task_go_to_entity(0, Global_35, 20000, 0.5f, 2f, 2f, 0);
				func_547(&(Local_62.f_1148[3]), &iVar1, 1f, 1f, 1, 1);
				set_ped_using_action_mode(&(Local_62.f_1148[3]), true, -1, 0);
				func_1388(11);
			}
			break;
		case 11:
			if (func_145(&(Local_62.f_1148[3]), 0, 1) && func_543(&(Local_62.f_1148[3]), Global_35, 1, 20f, 0))
			{
				func_281(&(Local_62.f_1518), "SRVDL2SEEP", &(Local_62.f_1148[3]), Global_35, 0, 0, 1, 1);
				func_1388(13);
			}
			else if (func_771(&(Local_62.f_1148[3])))
			{
				func_281(&(Local_62.f_1518), "SRVDL2SEEDE", &(Local_62.f_1148[3]), Global_35, 0, 0, 1, 1);
				func_1388(12);
			}
			break;
		case 12:
			if (!func_145(&(Local_62.f_1148[3]), 0, 1))
			{
				func_1388(15);
				return;
			}
			if (func_543(&(Local_62.f_1148[3]), Global_35, 1, 20f, 0))
			{
				bVar3 = true;
			}
			else if (func_276(Local_62.f_1392[10], 25f, 1, "TIMER_VALDOC_INVESTIGATOR_SPOTS_PLY"))
			{
				bVar3 = true;
			}
			if (!bVar3)
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDL2SEEP", &(Local_62.f_1148[3]), Global_35, 0, 0, 1, 1);
			func_1388(13);
			break;
		case 13:
			if (func_145(&(Local_62.f_1148[3]), 0, 1))
			{
				open_sequence_task(&iVar2);
				task_aim_gun_at_entity(0, Global_35, 1500, 0, 1);
				task_combat_ped(0, Global_35, 0, 0);
				func_547(&(Local_62.f_1148[3]), &iVar2, 0, 0, 1, 1);
				func_1388(14);
			}
			else
			{
				func_1395();
				func_1388(15);
			}
			break;
		case 14:
			if (is_ped_shooting(Global_35) || (func_145(&(Local_62.f_1148[3]), 0, 1) && is_ped_shooting(&(Local_62.f_1148[3]))))
			{
				func_1395();
				func_281(&(Local_62.f_1518), "SRVDL1SHOT", &(Local_62.f_1148[0]), Global_35, 0, 0, 1, 1);
				func_1388(15);
			}
			break;
		case 15:
			break;
		case 16:
			if (!func_621(Local_62.f_1392[6]))
			{
				func_317(Local_62.f_1392[6]);
				func_317(Local_62.f_1392[5]);
				func_281(&(Local_62.f_1518), "SRVDL1SEEP", &(Local_62.f_1148[0]), Global_35, 0, 0, 1, 1);
				func_1396(Local_62.f_1148[0], 1f);
				func_1396(Local_62.f_1148[1], 1f);
				func_1396(Local_62.f_1148[2], 1f);
				func_1396(Local_62.f_1148[4], 1f);
				func_1397(&(Local_62.f_1148[0]), 0, -284.8098f, 803.5356f, 118.8895f);
				func_1397(&(Local_62.f_1148[1]), 1, -285.5588f, 803.402f, 118.8054f);
				func_1397(&(Local_62.f_1148[2]), 2, -286.1571f, 803.3037f, 119.6755f);
				func_1397(&(Local_62.f_1148[4]), 4, -286.1571f, 803.3037f, 119.6755f);
			}
			else if (!func_657(Local_62.f_1392[6], 3.5f))
			{
				func_1398();
			}
			else
			{
				func_1396(Local_62.f_1148[0], 0.2f);
				func_1396(Local_62.f_1148[1], 0.2f);
				func_1396(Local_62.f_1148[2], 0.2f);
				func_1396(Local_62.f_1148[4], 0.2f);
				func_1399(Local_62.f_1148[2], 0);
				func_1395();
				func_1388(17);
			}
			break;
		case 17:
			if (!func_621(Local_62.f_1392[6]))
			{
				func_317(Local_62.f_1392[6]);
			}
			else if (func_657(Local_62.f_1392[6], 15f))
			{
				iVar0 = func_1400(-1);
				if (func_145(iVar0, 0, 1))
				{
					set_ped_combat_attributes(iVar0, 50, true);
					set_ped_combat_attributes(iVar0, 51, true);
				}
				func_1388(18);
			}
			break;
		case 18:
			break;
	}
}

bool func_771(int iParam0)
{
	if (!func_74(iParam0, Local_62.f_1290))
	{
		return false;
	}
	if (!Local_62.f_1290.f_1)
	{
		if (iParam0 == Global_35)
		{
			Local_62.f_1290.f_1 = 1;
		}
	}
	return true;
}

void func_772(var uParam0, int iParam1)
{
	if (func_119(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_773(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 32768;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_774(int iParam0)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (!func_169(func_168(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_45(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_45(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_45(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_45(iParam0));
	return 1;
}

int func_775(int iParam0, bool bParam1)
{
	if (!func_166(iParam0))
	{
		return 0;
	}
	if (!func_167(iParam0, 2))
	{
		return 0;
	}
	if (func_168(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_45(iParam0)))
	{
		return 1;
	}
	if (func_167(iParam0, 1) && !bParam1)
	{
		func_1401(iParam0, 128);
		return 1;
	}
	func_1039(iParam0, 129);
	func_1040(iParam0);
	_0xfc77c5b44d5ff7c0(func_45(iParam0));
	func_1402(iParam0, 0);
	return 1;
}

bool func_776()
{
	if (func_1403() >= 1000)
	{
		return true;
	}
	return false;
}

bool func_777()
{
	if (func_1083(0))
	{
		return true;
	}
	return false;
}

int func_778(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_779(int iParam0)
{
	return iParam0;
}

int func_780(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1404(iParam3, 1);
	bVar1 = func_1404(iParam3, 2);
	bVar2 = !func_1404(iParam3, 4);
	bVar3 = func_1404(iParam3, 8);
	bVar4 = !func_1404(iParam3, 16);
	bVar5 = func_1404(iParam3, 32);
	bVar6 = func_1404(iParam3, 64);
	return func_1394(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_781(var uParam0, int* iParam1, int iParam2)
{
	set_ped_relationship_group_hash(*uParam0, -401180987);
	set_blocking_of_non_temporary_events(*uParam0, true);
	if (_does_volume_exist(iParam2))
	{
		_0xfc3db99c8144cd81(*uParam0, iParam2, 0, 0, 0);
	}
	_0x935cf6e42baf7f4d(*uParam0);
	task_combat_ped(*uParam0, Global_35, 0, 0);
	set_ped_keep_task(*uParam0, true);
	func_660(*uParam0, iParam1, 831283580, 580546400, 0, 0);
}

int func_782(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_157(uParam0->f_51, 1024);
	}
	else
	{
		func_156(uParam0->f_51, 1024);
	}
	if (bParam1)
	{
		func_664(*uParam0, 1);
		return 1;
	}
	return 0;
}

char* func_783()
{
	return "WORLD_PLAYER_STR_GEN_BSMT_PEEK";
}

int func_784(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_785()
{
	iVar4 = -1221061763;
	if (!_does_scenario_point_exist(Local_62.f_1388))
	{
		vVar0 = { func_1405() };
		fVar3 = (func_1406() * 2f);
		if (!func_67(vVar0))
		{
			func_1033(&vVar0, 0f);
			vVar0 = { vVar0 + Vector(1.25f, 0f, 0f) };
			Local_62.f_1388 = func_1407(iVar4, vVar0, 0, fVar3, -1f, 0);
		}
	}
}

void func_786()
{
	if (!func_1408(iVar1770) || !func_1408(iVar1771))
	{
		return;
	}
	if (_is_imap_active(iVar1771) && !_0xfc464598f6ee97b0())
	{
		return;
	}
	if (!_0xfc464598f6ee97b0())
	{
		if (!_is_imap_active(iVar1771))
		{
			if (_is_imap_active(iVar1770))
			{
				_0x20d504994fdc4412("STR_03_P_MILLWINDOW_A", "STR_03_P_MILLWINDOW_D");
			}
		}
	}
	if (_0xfc464598f6ee97b0())
	{
		if (_0xc2c05defe85a0b64())
		{
			iLocal_1772 = iVar1771;
			_0x040ee319efd1d3b5();
		}
	}
}

char* func_787()
{
	return "WIPE_START";
}

void func_788(var uParam0)
{
	if (func_60(8388608))
	{
		return;
	}
	func_29(8388608);
	func_1409(uParam0->f_2);
	func_1410(Local_62);
	func_61(Local_62.f_1482[0]);
	if (!func_60(67108864))
	{
		switch (uParam0->f_1)
		{
			case 0:
				if (func_1411(Local_62))
				{
					func_1412("HLP_SR_FOUNDD_N", 10000, 0, 0, 0, 1);
				}
				else if (is_entity_dead(Local_62.f_170))
				{
					func_1412("HLP_SR_FOUNDD_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1412("HLP_SR_FOUNDD", 10000, 0, 0, 0, 1);
				}
				break;
			case 3:
				if (func_1411(Local_62))
				{
					func_1412("HLP_SR_FOUNDGS_STR_N", 10000, 0, 0, 0, 1);
				}
				else if (is_entity_dead(Local_62.f_170))
				{
					func_1412("HLP_SR_FOUNDGS_STR_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1412("HLP_SR_FOUNDGS_STR", 10000, 0, 0, 0, 1);
				}
				break;
			case 6:
				if (iLocal_29 == 1)
				{
					if (is_entity_dead(Local_62.f_170))
					{
						func_1412("HLP_SR_FOUNDGURH_D", 10000, 0, 0, 0, 1);
					}
					else
					{
						func_1412("HLP_SR_FOUNDGURH", 10000, 0, 0, 0, 1);
					}
				}
				else if (is_entity_dead(Local_62.f_170))
				{
					func_1412("HLP_SR_FOUNDGU_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1412("HLP_SR_FOUNDGU", 10000, 0, 0, 0, 1);
				}
				break;
			default:
				if (is_entity_dead(Local_62.f_170))
				{
					func_1412("HLP_SR_FOUNDGS_D", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_1412("HLP_SR_FOUNDGS", 10000, 0, 0, 0, 1);
				}
				break;
		}
		func_29(67108864);
	}
	if (func_1413(uParam0->f_2) != -1)
	{
		func_1414(func_1413(uParam0->f_2), 580546400);
	}
}

void func_789(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam10)
		{
			func_1415(uParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			func_1416(uParam0, vParam1, vParam4, vParam7);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

void func_790(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

int func_791()
{
	func_1417("SR_STRAWBERRY_GEN_START");
	func_1417("SR_STRAWBERRY_GEN_STOP");
	return 1;
}

void func_792(int iParam0)
{
	iLocal_32 = iParam0;
}

void func_793()
{
	if (iLocal_32 == 0)
	{
		return;
	}
	func_792(0);
}

void func_794(int iParam0, int iParam1)
{
	*iParam1 = iParam0;
}

char* func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@valentinedoctor@deputyknock";
		case 4:
			return "script@proc@shoprobberies@valentinedoctor@doctorBackRoom";
		case 1:
			return "script@proc@shoprobberies@valentinedoctor@gangCountMoney";
		case 2:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirt";
		case 3:
			return "script@proc@shoprobberies@valentinedoctor@gangBedSleepWithBreakouts";
		case 5:
			return "script@proc@shoprobberies@valentinedoctor@gangOpenDoorShortLoop";
		case 6:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirtBreakout";
		case 7:
			return "script@proc@shoprobberies@valentinedoctor@coupleFlirtFemalePanic";
		case 8:
			return "scenario@MECH@PLAYER_PICKUP_GUNRACK_DBSHOTGUN_COUNTER@CounterLoop";
		default:
			break;
	}
	return "NULL STRING";
}

void func_796(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	iVar0 = iParam0;
	Local_62.f_1216[iVar0] = _create_anim_scene(sParam1, iParam2, sParam3, false, true);
	if (_is_anim_scene_loaded(&(Local_62.f_1216[iParam0]), true, false))
	{
		return;
	}
	load_anim_scene(&(Local_62.f_1216[iVar0]));
}

bool func_797(int iParam0)
{
	if (!func_866(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0]->f_1 == 5;
}

void func_798(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != 0)
	{
		*uParam2 = _request_metaped_outfit(iParam0, iParam1);
	}
}

bool func_799(int iParam0)
{
	switch (iLocal_29)
	{
		case 0:
			sVar0 = func_1418(iParam0);
			break;
		case 1:
			sVar0 = func_1419(iParam0);
			break;
		case 2:
			sVar0 = func_1420(iParam0);
			break;
		case 3:
			sVar0 = func_1421(iParam0);
			break;
	}
	if (!_is_anim_scene_loaded(&(Local_62.f_1216[iParam0]), true, false))
	{
		return false;
	}
	return true;
}

bool func_800(var uParam0)
{
	if (!_0x610438375e5d1801(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_801()
{
	if (!func_797(0))
	{
		if (!func_877(Local_62.f_390[0], 0, 0, 1, 1))
		{
			return false;
		}
	}
	else if (!func_877(Local_62.f_390[0], 0, 1, 1, 0))
	{
		return false;
	}
	if (!func_797(0))
	{
		func_878(Local_62.f_390[0], 1755543207, 1);
	}
	if (func_797(0))
	{
		sVar0 = "1056_G_M_M_UniCriminals_01_WHITE_03";
	}
	else
	{
		sVar0 = "0360_G_M_M_UniDuster_03_IRISH_01";
	}
	func_49(&(Local_62.f_390[0]), 1, "ODR_PED8", 1, sVar0);
	func_880(&(Local_62.f_390[0]), 0);
	func_919(Local_62.f_390[0], 379542007, 99);
	return true;
}

void func_802(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!is_entity_dead(*uParam0))
	{
		return;
	}
	*uParam0 = create_object(iParam1, vParam2, false, bParam6, false, false, true);
	if (!is_entity_dead(*uParam0))
	{
		set_entity_heading(*uParam0, fParam5);
		if (bParam7)
		{
			set_entity_visible(*uParam0, false);
		}
	}
}

Vector3 func_803(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vVar3 = { vParam4 - vParam0 };
	fVar6 = cos(fParam3);
	fVar7 = sin(fParam3);
	vVar0.x = ((vVar3.x * fVar6) + (vVar3.y * fVar7));
	vVar0.f_1 = ((vVar3.y * fVar6) - (vVar3.x * fVar7));
	vVar0.f_2 = vVar3.z;
	return vVar0;
}

void func_804(int iParam0)
{
	if (*iParam0 == 0)
	{
		return;
	}
	func_794(0, iParam0);
}

void func_805(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!func_145(iParam2, 0, 1))
		{
			return;
		}
	}
	set_anim_scene_entity(iParam0, sParam1, iParam2, 0);
}

void func_806(int iParam0, char* sParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	if (is_entity_dead(iParam2))
	{
		return;
	}
	set_anim_scene_entity(iParam0, sParam1, iParam2, 0);
	set_entity_visible(iParam2, bParam4);
}

void func_807()
{
	if (iVar1753 != 5 && iVar1753 != 4)
	{
		if ((Local_62.f_1620 % 10) == 0)
		{
			if (func_222(player_id(), 0, 0, 1))
			{
				if (func_1422())
				{
					func_1423(5);
				}
				else
				{
					func_1423(4);
				}
			}
		}
	}
	switch (iVar1753)
	{
		case 0:
			func_1424();
			func_1423(1);
			break;
		case 1:
			func_1425(&Local_1698, 0, 0, 1, 0, 0);
			if (iVar1696 == 4)
			{
				func_1423(2);
			}
			break;
		case 2:
			func_1425(&Local_1698, 0, 0, bVar1754, func_1426(Local_1698.f_17, 1), 0);
			if (func_1422())
			{
				iLocal_1757 = 1;
				func_1423(3);
			}
			break;
		case 3:
			func_1425(&Local_1698, bVar1755, 1, bVar1754, 0, 0);
			func_1423(6);
			break;
		case 4:
			func_1425(&Local_1698, 0, 1, 0, 0, 0);
			if (func_1422())
			{
				func_1423(5);
			}
			break;
		case 5:
			func_1425(&Local_1698, 1, 1, 0, 0, 0);
			break;
		case 6:
			func_1425(&Local_1698, bVar1755, 1, bVar1754, 0, 0);
			break;
	}
}

void func_808(int iParam0)
{
	func_39(64);
	Local_62.f_1475[0] = iParam0;
}

bool func_809(char* sParam0)
{
	if (!_0xd89504d9d7d5057d(sParam0))
	{
		return false;
	}
	if (!_0x1ecc76792f661cf5(sParam0))
	{
		return false;
	}
	return true;
}

char* func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@rhodesgun@pleadforhelp";
		case 1:
			return "script@proc@shoprobberies@rhodesgun@holdup";
		case 3:
			return "script@proc@shoprobberies@rhodesgun@basement_captor";
		case 2:
			return "script@proc@shoprobberies@rhodesgun@basement_captive";
		case 4:
			return "script@proc@shoprobberies@rhodesgun@victimAloneAskFree";
		default:
			break;
	}
	return "NULL STRING";
}

void func_811(int iParam0)
{
	iLocal_53 = iParam0;
}

bool func_812(int iParam0, char* sParam1, char* sParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_0x1f0e401031e20146(iParam0, sParam2))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			return true;
		}
	}
	return false;
}

void func_813(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, vParam1, fParam5, iParam8, fParam6, 0, 40000f);
	task_achieve_heading(0, fParam4, 0);
	if (bParam7)
	{
		task_swap_weapon(0, 0, 0, 0, 0);
	}
	func_547(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_814()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_815(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_445((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_816(int iParam0)
{
	iParam0 = func_817(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

int func_817(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_818(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_819(int iParam0)
{
	if (!func_821(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_3;
}

int func_820(int iParam0)
{
	if (_does_volume_exist((*Global_1897952)[iParam0]->f_1))
	{
		return (*Global_1897952)[iParam0]->f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BAYOU_NWA");
			_0x39816f6f94f385ad(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			_0x39816f6f94f385ad(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			_0x39816f6f94f385ad(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			_0x39816f6f94f385ad(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BIG_VALLEY");
			_0x39816f6f94f385ad(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			_0x39816f6f94f385ad(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_BLUEGILL_MARSH");
			_0x39816f6f94f385ad(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			_0x39816f6f94f385ad(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			_0x39816f6f94f385ad(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			_0x39816f6f94f385ad(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			_0x39816f6f94f385ad(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			_0x39816f6f94f385ad(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CUMBERLAND_FOREST");
			_0x39816f6f94f385ad(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			_0x39816f6f94f385ad(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			_0x39816f6f94f385ad(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			_0x39816f6f94f385ad(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			_0x39816f6f94f385ad(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GREAT_PLAINS");
			_0x39816f6f94f385ad(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_WEST");
			_0x39816f6f94f385ad(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			_0x39816f6f94f385ad(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			_0x39816f6f94f385ad(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			_0x39816f6f94f385ad(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			_0x39816f6f94f385ad(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES_EAST");
			_0x39816f6f94f385ad(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			_0x39816f6f94f385ad(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			_0x39816f6f94f385ad(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			_0x39816f6f94f385ad(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			_0x39816f6f94f385ad(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			break;
		case 5:
			if (_does_volume_exist((*Global_1897952)[6]->f_1) && _does_volume_exist((*Global_1897952)[7]->f_1))
			{
				iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GRIZZLIES");
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[6]->f_1);
				_0x6e0d3c3f828da773(iVar0, (*Global_1897952)[7]->f_1);
			}
			else
			{
				return 0;
			}
			break;
		case 8:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GUARMA");
			_0xbce668aaf83608be(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			_0xbce668aaf83608be(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HEARTLAND");
			_0x39816f6f94f385ad(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			_0x39816f6f94f385ad(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			_0x39816f6f94f385ad(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			_0x39816f6f94f385ad(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			_0x39816f6f94f385ad(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			_0x39816f6f94f385ad(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			_0x39816f6f94f385ad(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			_0x39816f6f94f385ad(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			_0x39816f6f94f385ad(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			_0x39816f6f94f385ad(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			_0x39816f6f94f385ad(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			_0x39816f6f94f385ad(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			_0x39816f6f94f385ad(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			_0x39816f6f94f385ad(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			_0x39816f6f94f385ad(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			break;
		case 10:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_ROANOKE_RIDGE");
			_0x39816f6f94f385ad(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			_0x39816f6f94f385ad(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			_0x39816f6f94f385ad(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			_0x39816f6f94f385ad(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			_0x39816f6f94f385ad(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			_0x39816f6f94f385ad(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			_0x39816f6f94f385ad(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			_0x39816f6f94f385ad(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			_0x39816f6f94f385ad(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			break;
		case 11:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_SCARLETT_MEADOWS");
			_0x39816f6f94f385ad(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			_0x39816f6f94f385ad(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			_0x39816f6f94f385ad(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			_0x39816f6f94f385ad(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			_0x39816f6f94f385ad(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			_0x39816f6f94f385ad(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			_0x39816f6f94f385ad(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			_0x39816f6f94f385ad(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			break;
		case 12:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_TALL_TREES");
			_0x39816f6f94f385ad(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			_0x39816f6f94f385ad(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			_0x39816f6f94f385ad(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			_0x39816f6f94f385ad(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			_0x39816f6f94f385ad(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			break;
		case 15:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_CHOLLA_SPRINGS");
			_0x39816f6f94f385ad(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			_0x39816f6f94f385ad(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			_0x39816f6f94f385ad(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			_0x39816f6f94f385ad(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			_0x39816f6f94f385ad(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			break;
		case 13:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_GAPTOOTH_RIDGE");
			_0x39816f6f94f385ad(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			_0x39816f6f94f385ad(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			_0x39816f6f94f385ad(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			_0x39816f6f94f385ad(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			break;
		case 16:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_HENNIGAS_STEAD");
			_0x39816f6f94f385ad(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			_0x39816f6f94f385ad(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			_0x39816f6f94f385ad(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			_0x39816f6f94f385ad(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			_0x39816f6f94f385ad(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			_0x39816f6f94f385ad(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			_0x39816f6f94f385ad(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			_0x39816f6f94f385ad(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			break;
		case 14:
			iVar0 = _create_volume_aggregate_with_custom_name("DISTRICT_RIO_BRAVO");
			_0x39816f6f94f385ad(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			_0x39816f6f94f385ad(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			_0x39816f6f94f385ad(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			_0x39816f6f94f385ad(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			_0x39816f6f94f385ad(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			_0x39816f6f94f385ad(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			_0x39816f6f94f385ad(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			_0x39816f6f94f385ad(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			break;
	}
	(*Global_1897952)[iParam0]->f_1 = iVar0;
	return iVar0;
}

bool func_821(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_822(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_158())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 443958153;
		case 8:
			return 1035357148;
		case 9:
			return -990591911;
		case 17:
			return 1434435999;
		case 13:
			return 914613127;
		case 14:
			return 277114628;
		case 15:
			return -441298053;
		case 108:
			return 1671261677;
		case 12:
			return -2008988392;
		case 16:
			return -1779570775;
		case 106:
			return 1866591384;
		case 107:
			return -810797676;
		case 6:
			return 1591504033;
		case 10:
			return -1481022983;
		case 11:
			return -200160067;
		case 19:
			return 213861089;
		case 20:
			return 187124199;
		case 21:
			return -1639286351;
		case 18:
			return 1244472740;
		case 105:
			return -1711647719;
		case 22:
			return -184950877;
		case 118:
			return 354888782;
		case 39:
			return -922179383;
		case 42:
			return 877339314;
		case 41:
			return 327042733;
		case 43:
			return -1159824322;
		case 36:
			return 187784199;
		case 37:
			return 156869848;
		case 38:
			return 959980967;
		case 40:
			return 268171375;
		case 44:
			return -605457855;
		case 45:
			return -967272484;
		case 46:
			return 253446434;
		case 47:
			return -24930371;
		case 55:
			return -491616406;
		case 111:
			return 806137889;
		case 48:
			return 683812333;
		case 49:
			return 1055138492;
		case 50:
			return -1673339528;
		case 53:
			return 1428271505;
		case 54:
			return -2132681852;
		case 51:
			return 641024601;
		case 109:
			return 1479356600;
		case 110:
			return -1608228131;
		case 52:
			return 1700741106;
		case 23:
			return -768596287;
		case 24:
			return -1789795772;
		case 28:
			return 986912071;
		case 27:
			return 312948291;
		case 29:
			return 770563571;
		case 30:
			return 288839560;
		case 26:
			return 399352507;
		case 31:
			return -1241147617;
		case 113:
			return 399096998;
		case 32:
			return -483073269;
		case 112:
			return 1576805996;
		case 25:
			return -1427623397;
		case 33:
			return 305555540;
		case 60:
			return 2080716288;
		case 61:
			return 922959422;
		case 62:
			return 1948709075;
		case 63:
			return 599204508;
		case 65:
			return -362796541;
		case 115:
			return -1178912317;
		case 64:
			return -1575046645;
		case 114:
			return -176953214;
		case 66:
			return -1992095599;
		case 73:
			return 646741747;
		case 74:
			return -773037432;
		case 75:
			return 1444751354;
		case 69:
			return 709943351;
		case 77:
			return 731746260;
		case 76:
			return 405856312;
		case 72:
			return -1749578899;
		case 78:
			return 1581089825;
		case 104:
			return -883880335;
		case 71:
			return 1124822890;
		case 81:
			return 1618521465;
		case 80:
			return -1675300716;
		case 79:
			return -442258411;
		case 102:
			return 1665083003;
		case 103:
			return 810431028;
		case 68:
			return 1161446575;
		case 70:
			return -406930559;
		case 35:
			return 1523596125;
		case 86:
			return -372049939;
		case 85:
			return 226213668;
		case 82:
			return 1437804895;
		case 117:
			return 430529746;
		case 84:
			return -1254552445;
		case 83:
			return 1526480524;
		case 116:
			return 644508980;
		case 1:
			return 1628277480;
		case 120:
			return -1985767496;
		case 0:
			return 1117878254;
		case 2:
			return 622553269;
		case 3:
			return -1934358691;
		case 121:
			return 962619556;
		case 89:
			return 94750187;
		case 87:
			return 545745902;
		case 88:
			return 1875117241;
		case 101:
			return -1861588330;
		case 126:
			return -1079912632;
		case 127:
			return -1624899219;
		case 124:
			return 646944986;
		case 149:
			return 1712034773;
		case 150:
			return 1084233913;
		case 151:
			return -1628307596;
		case 152:
			return 1244193358;
		case 128:
			return -268420964;
		case 129:
			return -283845926;
		case 130:
			return 76731659;
		case 131:
			return 2141489518;
		case 59:
			return 1529797091;
		case 132:
			return 1120323763;
		case 133:
			return -1951530479;
		case 134:
			return 2034257465;
		case 135:
			return 278587369;
		case 57:
			return 1388932648;
		case 137:
			return 1467401843;
		case 138:
			return -1049737591;
		case 139:
			return 1175719437;
		case 140:
			return 2115547696;
		case 56:
			return 878376253;
		case 141:
			return -508879537;
		case 142:
			return -654369397;
		case 143:
			return 1573058547;
		case 144:
			return 1753151614;
		case 145:
			return -2113647360;
		case 146:
			return 1337275619;
		case 147:
			return -237650722;
		case 148:
			return 283754781;
		case 58:
			return -2076086367;
		case 136:
			return -487054121;
		case 119:
			return 551011289;
		case 122:
			return -647250101;
		case 95:
			return -1769964380;
		case 97:
			return -1464928880;
		case 96:
			return 1315212395;
		case 90:
			return -1495157302;
		case 93:
			return -2140031237;
		case 91:
			return -1829807698;
		case 92:
			return 186603357;
		case 94:
			return -1575817877;
		case 98:
			return 1087483310;
		case 125:
			return -552506176;
		case 123:
			return -614248279;
		case 99:
			return 441769767;
		case 100:
			return 1318049946;
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_824(int iParam0)
{
	if (!func_401(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (_datafile_get_hash(&iVar5, &Var0))
	{
		iVar6 = func_1427(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_825(int iParam0)
{
	iVar0 = func_1428(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_826(int iParam0, int iParam1)
{
	iVar1 = (shift_left(iParam1, 11) || iParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (&Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_827(int iParam0)
{
	iParam0 = func_817(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1429(iParam0) == 0)
	{
		return false;
	}
	return true;
}

bool func_828(int iParam0, int iParam1)
{
	func_401(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar6, &Var0);
	func_401(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		_datafile_get_bool(&uVar5, &Var7);
	}
	return uVar5;
}

int func_829(vector3 vParam0)
{
	return func_1430(_get_map_zone_at_coords(vParam0, 10));
}

int func_830(vector3 vParam0, int iParam3)
{
	iVar0 = func_160();
	if (func_821(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1431(vParam0, iParam3);
}

bool func_831(int iParam0)
{
	if (!func_821(iParam0))
	{
		return false;
	}
	return func_1432(iParam0, 33554432);
}

bool func_832(int iParam0, bool bParam1)
{
	if (!func_1433(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1434(iParam0, 8))
		{
			return false;
		}
	}
	if (func_1434(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_833(int iParam0, int iParam1)
{
	func_401(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_401(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (_datafile_get_hash(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_1435(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_834()
{
	if (func_814())
	{
		if (!func_815(4))
		{
			return true;
		}
	}
	return (_is_metaped_using_component(Global_35, -1725579161) || func_1436(-2061583405, &uVar0));
}

bool func_835(int iParam0, int iParam1)
{
	func_401(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	_datafile_get_data_node_index(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	_datafile_get_hash(&uVar5, &Var0);
	func_401(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (_datafile_get_data_node_index(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (_datafile_get_bool(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_836(int iParam0)
{
	if (!func_1433(Global_1310720->f_22))
	{
		return true;
	}
	if (func_832(Global_1310720->f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720->f_22) || (2 == iParam0 && 0 == Global_1310720->f_22))
	{
		return true;
	}
	return Global_1310720->f_22 == iParam0;
}

bool func_837(int iParam0, int iParam1)
{
	func_401(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1437(iVar5);
			if (func_815(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar6 = func_1437(iVar5);
			if (!func_815(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1438(iVar5);
			if (func_178(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (_datafile_get_hash(&iVar5, &Var0))
		{
			iVar7 = func_1438(iVar5);
			if (!func_178(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_838(int iParam0)
{
	if (!func_1439(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0]);
}

int func_839(vector3 vParam0, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < &Global_1898329)
	{
		if (!func_444(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch ((*Global_1898346)[iVar0]->f_3)
			{
				case 1:
					iVar1 = (*Global_1898346)[iVar0]->f_4;
					if (vdist(func_1440(iVar1), vParam0) < func_1442(func_1441(iVar1) == 0f, bParam3, func_1441(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_840(vector3 vParam0, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_1443(iVar0, 0))
		{
			if (vdist(func_1444(iVar0), vParam0) < bParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_841(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_842(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_1445(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_843(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_844(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_845()
{
	_0x88544c0e3291dcae(1);
	func_1058();
}

int func_846(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_door_registered_with_system(iParam0))
	{
		if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
		else
		{
			_0xd99229fe93b46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((network_is_in_session() && _does_thread_exist(&(Global_1051081->f_15[0]))) && bParam1)
	{
		if (!_0xb5ded7b65c604fdf(iParam0))
		{
			_0xd99229fe93b46286(iParam0, 1, 1, 0, &(Global_1051081->f_15[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		_0x1f1fabfe9b2a1254(iParam0, 1);
	}
	return iParam0;
}

bool func_847(int iParam0)
{
	if (func_981(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_848(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (func_847(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, fParam1, iParam3);
	}
}

void func_849(int iParam0, bool bParam1)
{
	if (func_847(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_850(int iParam0, bool bParam1)
{
	if (func_847(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_851(int iParam0, bool bParam1)
{
	if (func_847(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_852()
{
	return true;
}

void func_853(int iParam0)
{
	iVar0 = func_1428(iParam0, 1);
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

void func_854(int iParam0)
{
	iVar0 = func_1428(iParam0, 1);
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

void func_855()
{
	func_854(-939420910);
	func_854(-1187950766);
	func_854(356365161);
	func_854(753127042);
	func_854(-2038424081);
	func_854(1884271742);
	func_854(459290420);
}

void func_856()
{
	func_854(704802028);
	func_854(588987611);
	func_854(2008888900);
	func_854(1649996811);
	func_854(227918160);
	func_854(168171957);
	func_854(1193080109);
	func_854(-491981251);
	func_854(-639037538);
	func_854(-618620429);
}

void func_857(bool bParam0)
{
	if (!bParam0)
	{
		func_1446(0);
	}
	Global_1935689->f_2 = bParam0;
}

void func_858()
{
	if (!Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 1;
}

void func_859()
{
	if (Global_1898068->f_1)
	{
	}
	Global_1898068->f_1 = 0;
}

void func_860(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_861(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_862(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_863(int iParam0)
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

int func_864(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 512;
			break;
		default:
			return 0;
	}
	return iVar0;
}

bool func_866(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

bool func_867(int iParam0, int iParam1)
{
	return ((*Global_1392050)[iParam1]->f_1 && iParam0) != 0;
}

int func_868(int iParam0)
{
	if (func_866(iParam0, 0))
	{
		return Global_40.f_9571[iParam0]->f_2;
	}
	return -1;
}

void func_869(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_870(var uParam0, int iParam1)
{
	if (!func_119(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_871(char* sParam0)
{
	request_anim_dict(sParam0);
}

void func_872()
{
	func_553(&(Local_62.f_1216[0]), "PBL_bars_loop_reset", "SCENE_RHDGUN_HELP");
}

bool func_873()
{
	if (request_script_audio_bank("ROBBERIES"))
	{
		return true;
	}
	return false;
}

bool func_874(char* sParam0)
{
	if (!has_anim_dict_loaded(sParam0))
	{
		return false;
	}
	return true;
}

bool func_875()
{
	iVar0 = func_161(5, 6);
	if (func_32(iVar0, 0, 1))
	{
		return true;
	}
	return false;
}

void func_876(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		fVar0 = 1f;
	}
	else
	{
		fVar0 = 0f;
	}
	func_426(-1800976001, bParam0, fVar0, 0, 0, 0, 0, 0);
	func_426(1589140898, bParam0, -fVar0, 0, 0, 0, 0, 0);
}

bool func_877(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!is_entity_dead(*uParam0))
	{
		return true;
	}
	func_1447(uParam0, iParam1, bParam2, bParam3, bParam4);
	return false;
}

void func_878(var uParam0, int iParam1, bool bParam2)
{
	_set_ped_body_component(*uParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(*uParam0, false, true, true, true, false);
	}
}

void func_879(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 1);
	}
	else
	{
		func_571(&(uParam0->f_1), 1);
	}
}

void func_880(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(iParam0, 146, false);
		set_ped_config_flag(iParam0, 148, false);
		set_ped_config_flag(iParam0, 190, true);
	}
	else
	{
		set_ped_config_flag(iParam0, 146, true);
		set_ped_config_flag(iParam0, 148, true);
		set_ped_config_flag(iParam0, 190, false);
	}
}

void func_881(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		iVar0 = func_1448(iParam1);
		decor_set_int(iParam0, "honor_override", absi(iVar0));
	}
}

void func_882(int iParam0, bool bParam1, bool bParam2)
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

bool func_883()
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (func_35(29, 1))
	{
		func_39(2);
		return true;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[1])))
	{
		return false;
	}
	if (func_74(Global_35, &(Local_62.f_1247[2])))
	{
		func_39(2);
		return true;
	}
	if (!is_sphere_visible(func_1449(), 0.15f))
	{
		return true;
	}
	fVar0 = 5f;
	if (!func_276(Local_62.f_1392[1], fVar0, 0, "TIMER_RHDGUN_PASSERBY_CREATE_SPOT_IS_VISIBLE"))
	{
		return false;
	}
	func_39(2);
	return true;
}

void func_884()
{
	func_126(&(Local_62.f_1247[1]));
	Local_62.f_1247[1] = _create_volume_aggregate_with_custom_name("VOL_RHDGUN_CHECK_PASSERBY_VISIBLE");
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1308.391f, -1318.011f, 77.48446f, 0f, 0f, -16.12928f, 25.4035f, 53.44992f, 5.216788f);
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1318.446f, -1337.647f, 77.48446f, 0f, 0f, -16.12928f, 4.914396f, 21.50976f, 5.216788f);
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1326.23f, -1310.449f, 77.48446f, 0f, 0f, -16.12928f, 4.914396f, 16.26018f, 5.216788f);
	_0x39816f6f94f385ad(&(Local_62.f_1247[1]), 1318.628f, -1292.115f, 77.4948f, 0f, 0f, -24.96486f, 3.788264f, 4.466151f, 5.216788f);
}

bool func_885(var uParam0, int iParam1)
{
	if (!is_entity_dead(*uParam0))
	{
		return true;
	}
	func_1450(uParam0, iParam1);
	return false;
}

void func_886(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 16);
	}
	else
	{
		func_571(&(uParam0->f_1), 16);
	}
}

void func_887(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_915((*uParam1)[0], "INTERACT_GREET", "", -163964935, 0, 0, 0, 1, 0);
	func_915((*uParam1)[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
	func_563(uParam0, uParam1, bParam2, bParam3);
	func_916(uParam0, 2);
}

void func_888(var uParam0, int iParam1, char* sParam2)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	set_ped_relationship_group_hash(*uParam0, iParam1);
}

void func_889()
{
	if (func_158())
	{
		func_49(Global_35, 1, "JOHN", 0, "");
	}
	else
	{
		func_49(Global_35, 1, "ARTHUR", 0, "");
	}
}

void func_890(var uParam0, var uParam1, vector3 vParam2, char[12] cParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_1415(uParam0, vParam2, cParam5, vParam8);
			}
			else
			{
				func_587(uParam0, vParam2, cParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_1416(uParam0, vParam2, cParam5, vParam8);
		}
		else
		{
			func_1451(uParam0, vParam2, cParam5, vParam8, sParam15);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = _0x4c39c95ae5db1329(*uParam0, 0, 15);
		}
	}
}

bool func_891(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (!is_entity_dead(*uParam0))
	{
		return true;
	}
	*uParam0 = func_892(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!is_entity_dead(*uParam0))
	{
		if (!_0x88ad6cc10d8d35b2(*uParam0))
		{
			set_entity_as_mission_entity(*uParam0, true, false);
		}
		set_blocking_of_non_temporary_events(*uParam0, true);
		set_ped_config_flag(*uParam0, 243, true);
	}
	return false;
}

int func_892(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1452(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_893(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 4);
	}
	else
	{
		func_571(&(uParam0->f_1), 4);
	}
}

void func_894(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_895(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_896(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_571(uParam0, 128);
	}
	else
	{
		func_570(uParam0, 128);
	}
}

bool func_897(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, float fParam8, bool bParam9, char* sParam10, var uParam11, int iParam12)
{
	if (*uParam11)
	{
		return true;
	}
	if (!func_383(uParam0, iParam1, uParam2, vParam3, iParam12, 0))
	{
		return false;
	}
	func_426(iParam6, bParam7, fParam8, 0, bParam9, 0, 0, 0);
	*uParam11 = 1;
	return true;
}

void func_898(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	func_890(uParam0, uParam1, vParam2, vParam5, vParam8, 0, 0, 1, 0, 0);
}

int func_899(var uParam0)
{
	request_anim_dict(func_671());
	request_model(1477581656, false);
	func_1453(uParam0);
	return 1;
}

char* func_900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@strgen@holdup";
		default:
			break;
	}
	return "[SHOPROB_GET_STRGEN_ANIM_SCENE_BY_ENUM] ERROR: No filename string paired with the passed enum.";
}

void func_901(int iParam0)
{
	_0x72d4cb5db927009c(iParam0, -1, 0);
}

bool func_902(var uParam0)
{
	if (!_is_anim_scene_loaded(&(uParam0->f_82[0]), true, false) || !_is_anim_scene_metadata_loaded(&(uParam0->f_82[0]), false))
	{
		return false;
	}
	return true;
}

void func_903(var uParam0)
{
	_0xdf7b5144e25cd3fe(&(uParam0->f_82[0]), "pblExitB");
	sVar0 = func_747(uParam0);
	_0xdf7b5144e25cd3fe(&(uParam0->f_82[0]), sVar0);
}

bool func_904(int iParam0)
{
	if (!_0xff07cf465f48b830(iParam0))
	{
		return false;
	}
	return true;
}

void func_905()
{
	func_587(&(Local_62.f_1284), 2714.67f, -1285.224f, 50.22264f, 0f, 0f, -155.1647f, 12.23877f, 9.310059f, 3.184456f, "volShop");
	Local_62.f_1.f_90 = Local_62.f_1284;
}

void func_906(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_1454(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

void func_907()
{
	Local_62.f_1284 = _create_volume_aggregate_with_custom_name("volShop");
	_0x39816f6f94f385ad(Local_62.f_1284, -286.9611f, 810.6585f, 119.8961f, 0f, 0f, -80.04012f, 14.35107f, 7.733414f, 2.988747f);
	_0x39816f6f94f385ad(Local_62.f_1284, -282.699f, 816.189f, 119.674f, 0f, 0f, -169.938f, 2.737f, 4.614f, 2.543f);
	Local_62.f_1.f_90 = Local_62.f_1284;
}

void func_908(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6)
{
	if (!is_entity_dead(*uParam0))
	{
		return;
	}
	*uParam0 = _create_weapon_object(iParam1, iParam5, vParam2, true, 1f);
	if (!is_entity_dead(*uParam0))
	{
		if (bParam6)
		{
			set_entity_visible(*uParam0, false);
		}
	}
}

void func_909(int iParam0, int iParam1, bool bParam2)
{
	func_846(iParam0, 0, 0);
	if (func_847(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_910()
{
	Local_62.f_1512[1] = create_scenario_point_attached_to_entity(&(Local_62.f_1198[0]), func_937(), vLocal_59, 0f, 0, 0, 0);
}

char* func_911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@nbxgunsmith@downstairs";
		case 1:
			return "script@proc@shoprobberies@nbxgunsmith@gamblingroom_guard";
		case 2:
			return "script@proc@shoprobberies@nbxgunsmith@gamblingroom";
		case 3:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_a";
		case 4:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_b";
		case 5:
			return "script@proc@shoprobberies@nbxgunsmith@gambler_c";
		default:
			break;
	}
	return "NULL STRING";
}

int func_912()
{
	return -1656207781;
}

int func_913(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return _request_scenario_type(iParam0, iParam1, iParam2, iParam3);
}

bool func_914(int iParam0)
{
	return _has_scenario_type_loaded(iParam0, false);
}

void func_915(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	if (bParam7)
	{
		if (func_1029(iParam0->f_6))
		{
			func_1455(iParam0->f_6, iParam0->f_5, 0);
			func_1456(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_1291(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_916(var uParam0, int iParam1)
{
	if (func_551(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 || iParam1);
}

void func_917()
{
	Local_62.f_1512[1] = create_scenario_point_attached_to_entity(&(Local_62.f_1198[0]), func_937(), vLocal_59, 0f, 0, 0, 0);
	_set_scenario_point_flag(&(Local_62.f_1512[1]), 22, true);
}

void func_918(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	delete_ped(&iParam0);
}

void func_919(var uParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(*uParam0))
	{
		return;
	}
	remove_all_ped_weapons(*uParam0, true, true);
	_give_weapon_to_ped_2(*uParam0, iParam1, iParam2, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_920()
{
	iVar0 = 0;
	while (iVar0 < iLocal_58)
	{
		Local_62.f_1322[iVar0] = add_cover_point(Local_62.f_1322[iVar0]->f_1, Local_62.f_1322[iVar0]->f_4, Local_62.f_1322[iVar0]->f_5, Local_62.f_1322[iVar0]->f_6, Local_62.f_1322[iVar0]->f_7, false);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_56)
	{
		Local_62.f_1297[iVar0] = add_cover_point(Local_62.f_1297[iVar0]->f_1, Local_62.f_1297[iVar0]->f_4, Local_62.f_1297[iVar0]->f_5, Local_62.f_1297[iVar0]->f_6, Local_62.f_1322[iVar0]->f_7, false);
		iVar0++;
	}
}

bool func_921()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_922(int iParam0)
{
	if (!_is_metaped_outfit_request_valid(iParam0))
	{
		return false;
	}
	return true;
}

void func_923(var uParam0, var uParam1, bool bParam2)
{
	func_915((*uParam1)[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
	func_915((*uParam1)[1], "INTERACT_THREATEN", "", 648122183, 0, 0, 0, 1, 0);
	func_563(uParam0, uParam1, bParam2, 0);
	func_916(uParam0, 2);
}

void func_924(int* iParam0)
{
	func_1341(iParam0->f_30[0], "INTERACT_QUESTION", 0);
	func_1341(iParam0->f_30[1], "INTERACT_THREATEN", 1);
}

int func_925()
{
	return -488411758;
}

Vector3 func_926()
{
	return 2717.08f, -1282.43f, 60.28f;
}

bool func_927(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7)
{
	if (!is_entity_dead(*uParam0))
	{
		if (bParam7)
		{
			if (!does_entity_have_physics(*uParam0))
			{
				return false;
			}
		}
		return true;
	}
	*uParam0 = get_closest_object_of_type(vParam2, fParam5, iParam1, bParam6, false, true);
	return false;
}

void func_928(int iParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, bool bParam5)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	remove_anim_scene_entity(iParam0, sParam1, iParam2);
	if (bParam4)
	{
		activate_physics(iParam2);
	}
	if (bParam5)
	{
		func_1457(iParam2, 1, 1);
	}
}

bool func_929(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1458(iParam0);
		return func_1459(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

bool func_930(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

bool func_931()
{
	if (func_1460())
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

bool func_932(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_933(int iParam0, bool bParam1)
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

bool func_934(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_935(bool bParam0, bool bParam1)
{
	if (func_159() == -1)
	{
		func_1461();
	}
	else
	{
		return;
	}
	func_1462();
	Global_40.f_9.f_14 = func_192();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1463())
		{
			func_1464(Global_1310720->f_1);
		}
		else if (func_1465() == func_830(Global_36, 1) && func_1466() != 2)
		{
			func_1464(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_1464(Global_36);
		}
		func_1467(Global_36, &vVar0, &uVar4);
		if (!func_1463())
		{
			if (func_1468(vVar0, Global_36) < func_1468(Global_40.f_9.f_7, Global_36))
			{
				func_1464(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_830(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1467(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_844(Global_1935630, 8192);
	}
	func_1469();
}

void func_936(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

int func_937()
{
	return 640857659;
}

bool func_938(int iParam0, int iParam1, float fParam2)
{
	return func_1470(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_939(int iParam0, int iParam1, float fParam2, bool bParam3)
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

int func_940(int iParam0, int iParam1, int iParam2)
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

int func_941(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	if (!is_entity_dead(*iParam0))
	{
		func_1471(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*iParam0) || is_scripted_speech_playing(*iParam0));
		fVar8 = func_1442(bParam12 >= 0f, bParam12, vdist(Global_36, get_entity_coords(*iParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*iParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*iParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_317(&(iParam1->f_13));
		}
		if (func_1472(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1095(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_941(iParam0, iParam1, fParam2, uParam3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_270(iParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*iParam0, 317, true))
						{
							func_1473(*iParam0, 1, 1);
						}
					}
					else if (func_1474(iParam1, 22))
					{
						func_1473(*iParam0, 0, 1);
					}
				}
				if (func_1475(iParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_1476(iParam0, 1, iParam1, fParam2, uParam3, bVar3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1477(iParam8);
					if (func_1478(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, iParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_1479(uParam3);
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
					func_1480(iParam1, uParam3, fVar8);
					if (func_1481(*iParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_647(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 2:
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_271(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

bool func_942()
{
	return Global_1310750->f_16077 != 0;
}

void func_943(char* sParam0, bool bParam1)
{
	if (!_0xd89504d9d7d5057d(sParam0) && !_0x1ecc76792f661cf5(sParam0))
	{
		return;
	}
	stop_scripted_conversation(sParam0, bParam1, false);
}

int func_944()
{
	return Global_1310750->f_16071;
}

void func_945(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_739((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_946(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_648((*uParam0)[iVar0], bParam1);
		iVar0++;
	}
}

void func_947(var uParam0, int iParam1)
{
	if (!func_551(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_948(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = fParam4;
	uParam0->f_6 = iParam6;
	uParam0->f_7 = iParam5;
}

void func_949(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	uParam0->f_2 = { vParam1 };
	uParam0->f_5 = fParam4;
	uParam0->f_6 = iParam5;
}

void func_950(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = fParam4;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = iParam6;
	uParam0->f_7 = iParam7;
}

void func_951(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_952(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	uParam0->f_1 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
}

void func_953(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_954(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1482(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1483(iParam0))
	{
		return false;
	}
	if (func_1484(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1485(iParam0, 1)) || func_934(32768))
	{
		if (!func_1485(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1486())
	{
		return false;
	}
	return true;
}

void func_955(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_956(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (func_626(iParam0) == 4)
	{
		func_1487(iParam0, func_192());
		if (!func_999(iParam0) == 5 && !func_999(iParam0) == 6)
		{
			if (bParam3)
			{
				func_1008(iParam0, 6);
			}
			else
			{
				func_1008(iParam0, 5);
			}
			func_414(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_421(1);
	}
	iVar0 = func_1002(iParam0);
	bVar1 = func_159() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_1488(0, 2);
		if (!bVar1 && bParam1)
		{
			func_1489();
		}
	}
	else
	{
		func_1009(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_1490(iParam0);
	}
	else
	{
		Var2 = { func_1491(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_934(32768))
		{
			Var4 = { func_1491(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_999(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_441(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_441(iParam0)]->f_8), true);
						}
					}
					else if ((func_441(iParam0) != 95 && func_441(iParam0) != 82) && !func_443((*Global_1347702)[func_441(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_441(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_441(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_1493(func_441(iParam0), iVar6, func_1492());
	}
	else if (iVar0 == 8)
	{
		func_1495(func_441(iParam0), iVar6, func_1492(), func_1494());
	}
	if (!func_999(iParam0) == 5 && !func_999(iParam0) == 6)
	{
		iVar9 = func_1496(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_1497(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_1498(func_441(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1499((iVar10 - 20), 0, iVar10);
					iVar11 = func_1499((iVar11 - 10), 0, iVar11);
				}
				func_1500(1);
				func_81(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_81(45, 0, 1);
				break;
			case 8:
				iVar10 = func_1501(func_441(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_1499((iVar10 - 20), 0, iVar10);
					iVar11 = func_1499((iVar11 - 10), 0, iVar11);
				}
				func_81(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_1502(func_441(iParam0)))
				{
					func_1503(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_81(120, 0, 1);
				break;
			case 2:
				func_81(120, 0, 1);
				break;
			case 6:
				func_81(func_1505(func_1504(iParam0)), 0, 1);
				break;
			case 5:
				func_81(120, 0, 1);
				break;
		}
	}
	func_1011(iParam0, 1);
	func_1487(iParam0, func_192());
	func_414(iParam0);
	if ((!func_999(iParam0) == 0 && bParam1) && func_159() == -1)
	{
		iVar12 = func_1005(iParam0);
		if (iVar12 != -1)
		{
			func_1006(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_1007();
			if (iVar12 != -1)
			{
				func_1006(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_441(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_442(func_441(iParam0)) && func_443((*Global_1347702)[func_441(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_441(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1506();
				}
				break;
			case 8:
				if (func_441(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_1506();
				}
				break;
		}
	}
	if (!func_999(iParam0) == 5 && !func_999(iParam0) == 6)
	{
		if (bParam3)
		{
			func_1008(iParam0, 6);
		}
		else
		{
			func_1008(iParam0, 5);
		}
		func_414(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_441(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_1507();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_1508(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-1267972061);
						func_1508(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(1619534881);
						func_1508(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-755457379);
						func_1508(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(1015404643);
						func_1508(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-1724192342);
						func_1508(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(1310680212);
						func_1508(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-566881549);
						func_1508(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-1753730528);
						func_1508(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(147796381);
						func_1508(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(-378547623);
						func_1508(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(829545206);
						func_1508(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1509(891318243);
						func_1508(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1510();
						func_1511(967523420);
						func_1512();
						func_1513();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_1514(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_1508(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_575(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_575(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_1515(304805134, 1, 1);
						if (!func_445((*Global_1347702)[21]->f_15, 1))
						{
							func_956((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_1516();
						break;
					case 26:
						func_1517();
						break;
					case 17:
						func_1518(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_1519())
						{
							func_1520(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_1521(-514575035, -1))
						{
							iVar15 = func_192();
							func_1522(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_1523(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_1519())
						{
							func_1520(1529685685);
						}
						break;
					case 34:
						if (func_1519())
						{
							func_1520(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_1524();
						break;
					case 37:
						func_1525();
						if (func_1526())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_1527();
						break;
					case 43:
						func_1528();
						break;
					case 44:
						if (!func_445((*Global_1347702)[82]->f_15, 1))
						{
							func_956((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_445((*Global_1347702)[83]->f_15, 1))
						{
							func_956((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_1529();
						break;
					case 59:
						func_1530();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_1531();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_1532();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_575(451, 0);
						}
						if (!func_1533(-1992824800))
						{
							if (func_1533(1520110311))
							{
								iVar16 = func_192();
								func_1522(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_1523(1937177603, iVar16, 1);
							}
						}
						if (func_1534(4))
						{
							if (!func_1435(684296857, 1, 0))
							{
								iVar17 = func_192();
								func_1522(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_1523(-1439688706, iVar17, 1);
							}
						}
						func_1508(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1508(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_1535(89200);
						func_1535(2300);
						func_1535(2300);
						break;
					case 68:
						func_1536();
						break;
					case 76:
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_1537();
						func_1535(-139100);
						break;
					case 69:
						if (func_445((*Global_1347702)[9]->f_15, 1))
						{
							func_1535(-6000);
						}
						break;
					case 70:
						func_1535(23400);
						func_1535(1900);
						func_1535(-15000);
						break;
					case 71:
						func_1535(-5500);
						break;
				}
				break;
			case 8:
				switch (func_441(iParam0))
				{
					case 0:
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
						}
						if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
						{
							_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
						_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
						_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
						break;
					case 22:
						_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
						break;
					case 24:
						_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
						break;
					case 26:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
						_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
						_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
						_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
						break;
					case 30:
						_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
						_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
						break;
					case 37:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
						break;
					case 56:
						_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
						break;
					case 57:
						_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
						break;
					case 58:
						func_1538();
						break;
					case 59:
						_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
						_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
						break;
					case 61:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_1539();
						break;
					case 66:
						func_1540();
						func_1541();
						break;
					case 67:
						if (!func_1542(6))
						{
							func_1543(6);
						}
						if (!func_1542(3))
						{
							func_1543(3);
						}
						if (func_1519())
						{
							func_1520(1534638301);
						}
						break;
					case 68:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
						break;
					case 91:
						_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
						break;
					case 98:
						_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
						break;
					case 101:
						_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
						break;
					case 115:
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
						_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
						break;
					case 120:
						_0xd8c7162ab2e2af45(1720279629);
						break;
					case 138:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						break;
					case 139:
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						break;
					case 140:
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						break;
					case 143:
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						break;
					case 147:
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						break;
					case 9:
						if (func_445((*Global_1835011)[69]->f_1, 1))
						{
							func_1544(0);
							func_1535(40500);
						}
						else
						{
							func_1544(0);
							func_1535(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_441(iParam0))
				{
					case 0:
						switch (func_1504(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_1545(iParam0);
		func_1546();
		switch (iVar0)
		{
			case 1:
				switch (func_441(iParam0))
				{
					case 4:
						func_1547(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_1547(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_1547(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_1547(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_1547(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_1547(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_1547(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_1548(iParam0);
						func_1547(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_1547(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_1547(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_1435(-2046502963, 1, 0))
						{
							func_1508(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_1547(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_1547(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_1547(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_1548(iParam0) == 0)
						{
							func_1547(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_1547(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_443((*Global_1347702)[func_441(iParam0)]->f_12, 536870912))
				{
					func_1549(11, 1);
				}
				switch (func_441(iParam0))
				{
					case 109:
						func_1547(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_1549(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_1547(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_1547(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_1547(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_1547(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_1550(0, 10, 11, 2116153146))
				{
					func_1547(iParam0, func_1548(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_1550(0, 7, 11, -379687487))
				{
					func_1547(iParam0, func_1551(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_1550(0, 8, 11, -1386089015))
				{
					func_1547(iParam0, func_1551(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_1550(0, 11, 11, -1952009645))
				{
					func_1547(iParam0, func_1551(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_1550(0, 12, 11, 2065895756))
				{
					func_1547(iParam0, func_1551(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_999(iParam0) == 0)
			{
				if (func_1001(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_1001(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_1003(func_1002(iParam0), func_1001(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_441(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_1553(func_1552(Global_1879514->f_1));
						if (iVar0 == 8 && func_441(iParam0) == 58)
						{
							Global_1879514->f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (func_442(func_441(iParam0)) && func_443((*Global_1347702)[func_441(iParam0)]->f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			func_1554(bParam2, iVar20);
		}
	}
	func_1010(1);
	if ((bVar13 || func_1506()) && (func_1002(iParam0) == 1 || func_1002(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

bool func_957()
{
	if ((iLocal_26 == 46 || iLocal_26 == 51) || iLocal_26 == 47)
	{
		return true;
	}
	return false;
}

void func_958(bool bParam0, bool bParam1)
{
	func_29(128);
	if (bParam0)
	{
		if (!bParam1)
		{
			iVar0 = func_238(Local_62);
			func_239(iVar0);
		}
		else
		{
			func_29(536870912);
		}
	}
}

void func_959()
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1355[1])))
	{
		func_143(1024, 0);
		return;
	}
	func_143(1024, 1);
}

void func_960(int* iParam0)
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_557())
	{
		return;
	}
	if (!(func_221(4) && !func_221(2)) || !func_62(8192))
	{
		func_61(&(iParam0->f_1));
		return;
	}
	fVar0 = func_519(Global_35, *iParam0, 1, 1);
	if (fVar0 < 30f)
	{
		if (!does_blip_exist(iParam0->f_1))
		{
			func_660(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
			set_blip_name_from_text_file(iParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
		}
	}
	else if (does_blip_exist(iParam0->f_1))
	{
		remove_blip(&(iParam0->f_1));
	}
}

bool func_961(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 > -1 && iParam0 < 4)
	{
		if (!bParam1 || _does_volume_exist((*Global_1955500)[iParam0]->f_1))
		{
			if (!bParam2 || does_entity_exist((*Global_1955500)[iParam0]->f_2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_962(var uParam0, bool bParam1)
{
	if (*uParam0 > -1 && *uParam0 < 4)
	{
		if (*Global_1955500)[*uParam0]->f_3 == get_id_of_this_thread()
		{
			if (func_1555(1, 1) == *uParam0)
			{
				func_1556(-1, 1, 1);
			}
			if (bParam1)
			{
				func_126((*Global_1955500)[*uParam0]->f_1);
			}
			(*Global_1955500)[*uParam0] = 0;
			(*Global_1955500)[*uParam0]->f_2 = 0;
			(*Global_1955500)[*uParam0]->f_3 = 0;
			*uParam0 = -1;
		}
	}
}

bool func_963(int* iParam0, var uParam1)
{
	if (func_82())
	{
		return false;
	}
	iVar0 = -1;
	if (func_551(&(iParam0->f_10), 2))
	{
		if (func_551(&(iParam0->f_10), 1024))
		{
			iVar1 = 3;
			if (!func_551(&(iParam0->f_10), 2048))
			{
				func_51(&(iParam0->f_12), 0);
				func_915(iParam0->f_30[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
				func_915(iParam0->f_30[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
				func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
				func_916(&(iParam0->f_10), 2048);
			}
		}
		else if (func_119(&(Local_62.f_390[0]->f_9), 32) || func_119(&(Local_62.f_390[0]->f_9), 64))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 2;
		}
		iVar2 = func_940(iVar1, 0, 0);
		if (!func_62(16384) && !is_entity_dead(*iParam0))
		{
			iVar2 |= 2048;
		}
		else
		{
			iVar2 |= -2147483648;
			func_51(&(iParam0->f_12), 0);
		}
		iVar0 = func_941(iParam0, &(iParam0->f_12), 5f, &(iParam0->f_30), 0, 3, 0, "", iVar2, 0, 0, 2, -1082130432);
	}
	if (!func_1557())
	{
		return false;
	}
	if (!func_551(&(iParam0->f_10), 2))
	{
		func_915(iParam0->f_30[0], "INTERACT_QUESTION", "", -163964935, 0, 0, 0, 1, 0);
		func_915(iParam0->f_30[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
		func_916(&(iParam0->f_10), 2);
	}
	bVar3 = false;
	if (iVar0 == 0)
	{
		if (func_119(&(Local_62.f_390[0]->f_9), 32) || func_119(&(Local_62.f_390[0]->f_9), 64))
		{
			func_1119(0);
			func_596(iParam0, "PRRGS_AILO_PKP2", "PRRGS_JILO_PKP2", 1);
		}
		else
		{
			func_1119(0);
			func_596(iParam0, "SRGMCUT1_ART", "SRGMCUT1_ARTJ", 1);
		}
		func_945(&(iParam0->f_30), 0, 0);
		bVar3 = true;
	}
	else if (iVar0 == 1)
	{
		if (func_119(&(Local_62.f_390[0]->f_9), 32) || func_119(&(Local_62.f_390[0]->f_9), 64))
		{
			func_1119(0);
			func_596(iParam0, "PRRGS_AILO_PKN2", "PRRGS_JILO_PKN2", 1);
		}
		else
		{
			func_1119(0);
			func_596(iParam0, "PRRGS_AILO_PKN1", "PRRGS_JILO_PKN1", 1);
		}
		func_945(&(iParam0->f_30), 0, 0);
		bVar3 = true;
	}
	if (!bVar3)
	{
		return false;
	}
	func_916(&(iParam0->f_10), 1024);
	func_81(70, 0, 1);
	func_297(Global_35, *iParam0, &(Local_62.f_99), 0, vLocal_59, 1, 0);
	if (!func_559(&(Local_62.f_1216[0]), "PBL_bars_line_01", "SCENE_RHDGUN_HELP", 0))
	{
		func_553(&(Local_62.f_1216[0]), "PBL_bars_line_01", "SCENE_RHDGUN_HELP");
	}
	func_91(16);
	func_224(8);
	func_418(4);
	func_224(2);
	func_30(1, 8);
	func_587(Local_62.f_1355[3], 1324.981f, -1323.507f, 78.32263f, 0f, 0f, 164.3203f, 9.572388f, 9.145508f, 2.818016f, "AMBRES_RHDGUN_MAIN_SHOP");
	_0xb56d41a694e42e86(&(Local_62.f_1355[3]), 0, 0, 0, -1, 872186388, 0);
	func_317(Local_62.f_1392[3]);
	set_ped_reset_flag(Global_35, 53, true);
	return true;
}

void func_964(var uParam0)
{
	if (func_221(16))
	{
		return;
	}
	func_788(uParam0);
	func_906(Local_62.f_170, 0);
	func_224(16);
}

int func_965()
{
	return -254374895;
}

bool func_966(int* iParam0, char[4] cParam1)
{
	if ((!func_62(1024) && !func_942()) && func_967())
	{
		iVar0 = 60;
		func_80(-1, 0, 0, 0, 0);
		func_81(iVar0, 0, 1);
		func_39(1024);
	}
	if (!func_1558())
	{
		return false;
	}
	if (!func_559(&(Local_62.f_1216[0]), cParam1, "SCENE_RHDGUN_HELP", 0))
	{
		return false;
	}
	if (!func_353(0, 1, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_967()
{
	if (func_74(Global_35, &(Local_62.f_1247[0])) || func_74(Global_35, &(Local_62.f_1247[3])))
	{
		return true;
	}
	func_143(1024, 0);
	return false;
}

int func_968(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1559();
	if (iVar0 == -1)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0) || !_does_volume_exist(iParam1))
	{
		return -1;
	}
	if ((iVar0 > -1 && iVar0 < 4) && _does_volume_exist(iParam1))
	{
		(*Global_1955500)[iVar0]->f_1 = iParam1;
		(*Global_1955500)[iVar0]->f_2 = iParam0;
		(*Global_1955500)[iVar0] = 0;
		(*Global_1955500)[iVar0]->f_3 = get_id_of_this_thread();
		if (func_438(iParam2, 128))
		{
			_0x7c00cfc48a782dc0(iParam1, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (func_174(Global_1955500[iVar0], 0))
		{
			func_1560(iVar0, 1024);
			func_1560(iVar0, 16);
			func_1560(iVar0, 256);
		}
		func_1560(iVar0, iParam2);
	}
	return iVar0;
}

void func_969(int* iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, int iParam5, int iParam6)
{
	if (func_119(&(iParam0->f_9), 64))
	{
		if (!func_335(iParam5))
		{
			func_281(&(Local_62.f_1518), cParam4, *iParam0, Global_35, 0, 0, 1, 1);
		}
	}
	else if (func_119(&(iParam0->f_9), 32))
	{
		if (!func_335(iParam5))
		{
			func_281(&(Local_62.f_1518), cParam3, *iParam0, Global_35, 0, 0, 1, 1);
			func_533(iParam5);
		}
	}
	else if (func_519(Global_35, *iParam0, 1, 1) > 5f)
	{
		if (!func_335(iParam5))
		{
			func_281(&(Local_62.f_1518), cParam1, *iParam0, Global_35, 0, 0, 1, 1);
			func_533(iParam5);
		}
	}
	else if (!func_335(iParam6))
	{
		func_281(&(Local_62.f_1518), cParam2, *iParam0, Global_35, 0, 0, 1, 1);
		func_533(iParam6);
	}
}

void func_970()
{
	func_277(&(Local_62.f_1216[0]), "BOOL_bars_loop", 1, "SCENE_RHDGUN_HELP");
	func_277(&(Local_62.f_1216[0]), "BOOL_bars_loop_reset", 0, "SCENE_RHDGUN_HELP");
	func_872();
}

bool func_971(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 32))
	{
		return false;
	}
	if (func_519(Global_35, *iParam0, 1, 1) > 5f)
	{
		if (!func_335(256))
		{
			func_281(&(Local_62.f_1518), "SRGMHELP1", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(256);
			return true;
		}
		else if (!func_335(512))
		{
			func_281(&(Local_62.f_1518), "SRGMHELP2", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(512);
			return true;
		}
		else if (!func_335(1024))
		{
			func_281(&(Local_62.f_1518), "SRGMHELP3", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(1024);
			return true;
		}
	}
	else if (!func_335(2048))
	{
		func_281(&(Local_62.f_1518), "SRGMHELP4", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(2048);
		return true;
	}
	else if (!func_335(4096))
	{
		func_281(&(Local_62.f_1518), "SRGMHELP5", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(4096);
		return true;
	}
	else if (!func_335(8192))
	{
		func_281(&(Local_62.f_1518), "SRGMHELP6", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(8192);
		return true;
	}
	return false;
}

int func_972()
{
	return 1;
}

bool func_973(int* iParam0, float fParam1)
{
	if (!func_276(&(iParam0->f_123), fParam1, 0, "captive.timerGenericB") || !func_967())
	{
		return false;
	}
	return true;
}

char* func_974()
{
	return "SCRIPT_PROC@ROBBERIES@shop@rhodes@gunsmith@OUTSIDE_RESHOOT";
}

bool func_975(int iParam0)
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

bool func_976(int iParam0)
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

void func_977(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_1561(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_1561(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_1561(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			_0x6a4d224fc7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
		{
			_0xb8b207c34285e978(sParam0);
		}
	}
}

void func_978(int iParam0, float fParam1)
{
	if (!is_entity_dead(Global_35))
	{
		if (!is_ped_on_mount(player_ped_id()))
		{
			set_ped_max_move_blend_ratio(player_ped_id(), fParam1);
		}
		else if (!is_entity_dead(get_mount(player_ped_id())))
		{
			set_ped_max_move_blend_ratio(get_mount(player_ped_id()), fParam1);
		}
	}
	if (!func_1562(iParam0, 8))
	{
		disable_control_action(0, -640622144, false);
	}
	if (!func_1562(iParam0, 4))
	{
		disable_control_action(0, -485697785, false);
	}
	if (!func_1562(iParam0, 16))
	{
		disable_control_action(0, -128997553, false);
		disable_control_action(0, 130948705, false);
		disable_control_action(0, 42190210, false);
	}
	if (!func_1562(iParam0, 128))
	{
		disable_control_action(0, -562475458, false);
	}
	if (!func_1562(iParam0, 512))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
	if (!func_1562(iParam0, 64))
	{
		disable_control_action(0, -620139643, false);
	}
	if (!(func_43(17) && func_54(Global_35, (*Global_1835011)[17]->f_18, 0) < 10f))
	{
		if (!func_1562(iParam0, 2048))
		{
			disable_control_action(0, -822242784, false);
		}
	}
	if (!func_1562(iParam0, 4096))
	{
		disable_control_action(0, -1664638556, false);
	}
	if (!is_entity_dead(Global_35))
	{
		if (!func_1562(iParam0, 1024))
		{
			set_ped_reset_flag(Global_35, 2, true);
			set_ped_reset_flag(Global_35, 21, true);
		}
		if (!func_1562(iParam0, 8))
		{
			set_ped_reset_flag(Global_35, 168, true);
		}
		set_ped_reset_flag(Global_35, 33, true);
		if (!func_1562(iParam0, 32))
		{
			if (_get_ped_crouch_movement(Global_35))
			{
				_set_ped_crouch_movement(Global_35, false, 0, false);
			}
		}
	}
}

int func_979(int iParam0)
{
	return Global_1914319->f_3[iParam0]->f_408;
}

float func_980(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, true, false) };
	}
	else
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
	}
	if (bParam4)
	{
		return vdist2(vVar0, vParam1);
	}
	return func_1468(vVar0, vParam1);
}

bool func_981(int iParam0)
{
	return iParam0 != 0;
}

Vector3 func_982(int iParam0)
{
	if (does_entity_exist(func_1563(iParam0, 0)))
	{
		return get_entity_coords(func_1563(iParam0, 0), false, false);
	}
	return 0f, 0f, 0f;
}

int func_983(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!_0x50f124e6ef188b22(Global_35))
	{
		return 1;
	}
	fVar0 = func_1564();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_756(0);
		}
		else
		{
			func_756(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_756(0);
	}
	else
	{
		func_756(1);
	}
	return 0;
}

bool func_984(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

char* func_985(int iParam0)
{
	switch (func_160())
	{
		case 76:
			switch (iParam0)
			{
				case 15:
					return "val_bank_01_main";
				case 3:
					return "val_genstore_01_main";
				case 6:
					return "val_gunsmith_01_main";
				case 0:
					return "val_doctor_01_main";
				case 8:
					return "val_saloon_barber_01_main";
				default:
					break;
			}
			break;
		case 78:
			switch (iParam0)
			{
				case 6:
					return "ann_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 15:
					return "bla_bank_01_main";
				case 3:
					return "bla_genstore_01_main";
				default:
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 3:
					return "arm_genstore_01_main";
				default:
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 3:
					return "tum_genstore_01_main";
				case 6:
					return "tum_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 6:
					return "new_gunshop_01_main";
				case 3:
					return "new_grocery_01_main";
				case 7:
					return "new_tailor01_01_main";
				default:
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 3:
					return "rho_genstore_01_main";
				case 6:
					return "rho_gunsmith_01_main";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 17:
					return "lag_01_main";
				default:
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 3:
					return "wal_trainstation_01_main";
				default:
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					return "van_exoticgoods_01_main";
				case 2:
					return "van_depot_01_main";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_986(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_571(uParam0, 262144);
	}
	else
	{
		func_570(uParam0, 262144);
	}
}

void func_987(var uParam0, int iParam1)
{
	set_ped_config_flag(iParam1, 168, true);
	_0xbb1e41dd3d3c6250(iParam1, "SpAggroDefault", 0);
	decor_set_bool(iParam1, "UsesTracker", true);
}

Vector3 func_988()
{
	return -291.3659f, 816.3725f, 118.3859f;
}

bool func_989()
{
	return (Global_1894899 & 1 != 0 && func_160() != -1);
}

float func_990(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_519(Global_35, iParam0, bParam1, bParam2);
}

bool func_991(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_992(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_1565(iParam0, &Var0);
}

int func_993(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_994(var uParam0, int iParam1)
{
	if (get_event_data(0, iParam1, &Var0, 10))
	{
		if (Var0 != Global_35)
		{
			return 0;
		}
		if (Var0.f_4 != 2)
		{
			return 0;
		}
		if (Var0.f_5 != 1)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

float func_995(var uParam0)
{
	if (!func_621(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1566(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_674() - uParam0->f_1);
}

bool func_996(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_997(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

bool func_998(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!Global_1935630->f_27 && !bParam4)
	{
		return false;
	}
	if (is_control_pressed(0, -128997553))
	{
		fVar0 = func_519(iParam0, player_ped_id(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (is_player_free_aiming(player_id()) || is_player_targetting_entity(player_id(), iParam0, false))
			{
				if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return false;
					}
				}
				iVar3 = func_778(player_ped_id(), 0);
				if (func_997(iVar3) && !is_control_pressed(0, 130948705))
				{
					return false;
				}
				if (is_ped_in_any_vehicle(iParam0, false) && was_ped_skeleton_updated(iParam0))
				{
					vVar4 = { get_ped_bone_coords(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { get_entity_coords(iParam0, false, false) };
				}
				vVar7 = { func_1567(0) };
				vVar10 = { func_1568(vVar4 - get_gameplay_cam_coord()) };
				fVar13 = absf(get_angle_between_2d_vectors(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = absf(get_angle_between_2d_vectors(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_999(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_1569(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

bool func_1000(int iParam0)
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
		iVar0 = func_999(iParam0);
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

int func_1001(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_1002(int iParam0)
{
	if (!func_444(iParam0))
	{
		return 0;
	}
	return func_1570(func_863(iParam0));
}

void func_1003(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_159() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_1004(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_1005(int iParam0)
{
	switch (func_1002(iParam0))
	{
		case 1:
			iVar0 = func_441(iParam0);
			return func_1571(iVar0);
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_1572(iVar1);
			}
			break;
	}
	return -1;
}

void func_1006(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_159() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_1573(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_1574();
		Global_1898077->f_9 = func_1575(Global_1894899->f_2);
		func_1576(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_1007()
{
	if (!func_445((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_445((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_445((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_445((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_445((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_445((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_445((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_1008(int iParam0, int iParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	func_1577(iParam0, iParam1);
}

int func_1009(bool bParam0)
{
	if (!bParam0 && func_825(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_1010(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_1011(int iParam0, bool bParam1)
{
	if (func_159() != -1)
	{
		return;
	}
	if (func_176(0) != iParam0)
	{
		return;
	}
	if (func_1578(iParam0))
	{
		if (bParam1)
		{
			func_1579(-525676072);
		}
		else
		{
			func_1580(-525676072);
		}
	}
}

int func_1012()
{
	if (func_62(32768))
	{
		return 1;
	}
	if (_does_scenario_point_exist(Local_62.f_1389))
	{
		func_39(32768);
		return 1;
	}
	switch (iLocal_29)
	{
		case 0:
			vVar0 = { 2716.44f, -1287.035f, 48.632f };
			break;
		default:
			func_39(32768);
			return 1;
	}
	Local_62.f_1389 = _find_closest_active_scenario_point_of_type(vVar0, func_912(), 0.4f, 0, false);
	return 0;
}

void func_1013(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1014()
{
	switch (iLocal_29)
	{
		case 3:
			if (!is_entity_dead(&(Local_62.f_1198[0])))
			{
				fVar0 = func_519(Global_35, &(Local_62.f_1198[0]), 1, 1);
			}
			if (!is_entity_dead(&(Local_62.f_1198[1])))
			{
				fVar1 = func_519(Global_35, &(Local_62.f_1198[1]), 1, 1);
			}
			if (fVar0 < fVar1)
			{
				return &(Local_62.f_1198[0]);
			}
			else if (fVar0 > fVar1)
			{
				return &(Local_62.f_1198[1]);
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			return &(Local_62.f_1198[0]);
	}
	return 0;
}

void func_1015(bool bParam0)
{
	if (func_62(32))
	{
		return;
	}
	func_789(Local_62.f_1355[0], 2714.67f, -1285.224f, 50.22264f, 0f, 0f, -155.1647f, 12.23877f, 9.310059f, 3.184456f, 1, 0, 0);
	if (bParam0)
	{
		func_790(&(Local_62.f_1355[0]), 0);
	}
	func_39(32);
}

float func_1016(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1017()
{
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SD_GUNSMITH_STEEL_DOOR_SLAT_CLOSED";
			sVar1 = "SD_GUNSMITH_STEEL_DOOR_SLAT_OPEN";
			break;
		case 3:
			sVar0 = "VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED";
			sVar1 = "VAL_DOCTOR_STEEL_DOOR_SLAT_OPEN";
			break;
	}
	set_portal_settings_override(sVar0, sVar1);
}

void func_1018()
{
	switch (iLocal_29)
	{
		case 0:
			sVar0 = "SD_GUNSMITH_STEEL_DOOR_SLAT_CLOSED";
			break;
		case 3:
			sVar0 = "VAL_DOCTOR_STEEL_DOOR_SLAT_CLOSED";
			break;
	}
	remove_portal_settings_override(sVar0);
}

void func_1019(int iParam0, vector3 vParam1)
{
	set_entity_coords(iParam0, vParam1, true, false, true, true);
	switch (iLocal_29)
	{
		case 0:
			open_sequence_task(&iVar0);
			task_achieve_heading(0, 273.3403f, 0);
			func_547(iParam0, &iVar0, 0, 0, 1, 1);
			break;
	}
}

void func_1020(int iParam0)
{
	Global_1327479->f_3 = iParam0;
}

bool func_1021(int iParam0)
{
	if (iParam0 > 25)
	{
		return false;
	}
	iVar0 = func_161(func_160(), iParam0);
	switch (iVar0)
	{
		case 41:
		case 82:
			return true;
	}
	switch (iParam0)
	{
		case -1:
		case 1:
		case 2:
		case 4:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return false;
	}
	return true;
}

bool func_1022(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, Global_36))
	{
		return true;
	}
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_28))
	{
		return false;
	}
	if (_0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_28, Global_36))
	{
		return true;
	}
	return false;
}

bool func_1023(int iParam0, int iParam1)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1024(int iParam0, int iParam1)
{
	if (!func_984(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

void func_1025(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

bool func_1026(int iParam0)
{
	if (!_does_volume_exist(Global_1914319->f_3[iParam0]->f_25))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(Global_1914319->f_3[iParam0]->f_25, Global_36);
}

Vector3 func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2946.049f, 1319.564f, 45.14626f;
		case 7:
			return -785.9345f, -1322.95f, 44.21807f;
		case 17:
			return -762.7703f, -1292.778f, 43.8849f;
		case 19:
			return 1419.994f, 380.5412f, 110.2361f;
		case 39:
			return 2720.6f, -1233f, 50.4f;
		case 42:
			return 2825.685f, -1319.379f, 46.8135f;
		case 43:
			return 2717.57f, -1285.85f, 49.68f;
		case 41:
			return 2860.15f, -1201.55f, 49.92473f;
		case 47:
			return 2555.87f, -1167.69f, 53.73f;
		case 28:
			return 1329.456f, -1293.444f, 77.33836f;
		case 29:
			return 1323.26f, -1322.5f, 77.93f;
		case 61:
			return -1789.791f, -387.0551f, 160.6592f;
		case 73:
			return -287.5373f, 805.1658f, 119.7208f;
		case 74:
			return -323.4636f, 804.3255f, 118.215f;
		case 75:
			return -280.3192f, 779.6469f, 119.8516f;
		case 82:
			return 3026.349f, 561.7162f, 44.7613f;
		case 90:
			return -5487f, -2938f, -0.4f;
		case 95:
			return -3686.5f, -2622.7f, -13.4f;
		case 87:
			return -1302.749f, 393.2226f, 95.4803f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_1028(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_1029(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1581(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1582(iVar0);
	*uParam0 = 0;
}

bool func_1029(int iParam0)
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

bool func_1030(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_1031(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_1032(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_1033(var uParam0, float fParam1)
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

void func_1034(var uParam0, bool bParam1)
{
	(*uParam0)[0] = -1043434543;
	(*uParam0)[1] = -305837470;
	(*uParam0)[2] = -1250929611;
	(*uParam0)[3] = 1462638198;
	(*uParam0)[4] = -30251080;
	(*uParam0)[5] = -1509673351;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			request_model(uParam0[iVar0], false);
			iVar0++;
		}
	}
}

int func_1035(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6)
{
	bVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	iVar1 = func_1583(uParam0, uParam1, bVar0, iParam2);
	func_126(bVar0);
	return iVar1;
}

void func_1036(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	iVar0 = 0;
	while (iVar0 < cParam3->f_97)
	{
		if (does_entity_exist(cParam3[iVar0]))
		{
			if (!is_entity_dead(cParam3[iVar0]))
			{
				add_ped_to_conversation(&cParam0, cParam3[iVar0], &((*cParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

int func_1037(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 76:
			if (func_831(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 105:
			if (func_831(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			return 1559741032;
		case 61:
			return 60667583;
		case 78:
			return 1758133584;
		case 26:
			return -577559008;
		case 38:
			if (!bParam1 || func_159() != -1)
			{
				return 1624541293;
			}
			if (func_435(45))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 92:
			return 1637569166;
		case 65:
			return -867798278;
		case 69:
			return 1543937523;
		case 93:
			return 1030875135;
		case 95:
			return -201437056;
		case 57:
			return 794246846;
		case 3:
			return -968357677;
		case 32:
			return 728480338;
		case 82:
			return 725489698;
		case 35:
			return 183652754;
		case 56:
			return 2056744450;
		case 126:
			return 963280223;
		case 120:
			return -256309418;
		case 124:
			return 1666986024;
		case 115:
			return 251328732;
		case 127:
			if (!bParam1 || func_159() != -1)
			{
				return 1024208566;
			}
			if (func_435(45))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			if (!bParam1 || func_159() != -1)
			{
				return 965626876;
			}
			if (func_445((*Global_1835011)[59]->f_1, 1))
			{
				return 965626876;
			}
			else
			{
				return 1039226266;
			}
			break;
		case 37:
			if (!bParam1 || func_159() != -1)
			{
				return -497792649;
			}
			if (func_445((*Global_1347702)[9]->f_15, 1))
			{
				return -497792649;
			}
			else if (func_435(45))
			{
				return -1738342532;
			}
			else
			{
				return -1308265478;
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_1465())
			{
				return 2126166785;
			}
			break;
		case 110:
			if (!bParam1 || func_159() != -1)
			{
				return -1990305778;
			}
			if (func_435(45))
			{
				return -1990305778;
			}
			else
			{
				return -1679988168;
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_1584(iParam0);
		if (iVar0 != -1)
		{
			return func_1585(iVar0, bParam1);
		}
	}
	return 0;
}

bool func_1038(int iParam0)
{
	if (!func_166(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_1039(int iParam0, int iParam1)
{
	if (func_159() != -1)
	{
		return;
	}
	if (!func_166(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_1040(int iParam0)
{
	if (!func_166(iParam0))
	{
		return;
	}
	iVar0 = func_170(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

bool func_1041(int iParam0)
{
	if (!func_152(iParam0))
	{
		return false;
	}
	return func_438(&(Global_1914319->f_18594[iParam0]), 1);
}

void func_1042(int iParam0, bool bParam1)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (!func_1586(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1001(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_1001(iParam0)))
		{
			_0xca41e86545413b5b(func_1002(iParam0), func_441(iParam0), func_1504(iParam0), func_1001(iParam0), Global_36);
		}
	}
	func_1008(iParam0, 1);
	bParam1 = bParam1;
}

void func_1043(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_444(iParam0))
	{
		return;
	}
	if (!func_1000(iParam0))
	{
		return;
	}
	iVar0 = func_1002(iParam0);
	if (bParam1)
	{
		if (func_1001(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_1001(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_1587(func_441(iParam0));
			}
			if (func_159() != 0)
			{
				_0xb2a38826e5886e83(func_1001(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_1001(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_1588(iParam0);
	if (!func_444(func_176(0)))
	{
		func_1008(iParam0, 3);
		func_421(bParam2);
		if (func_159() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_1009(1);
		}
		func_1589(iParam0, -1);
		if (bParam1 && !func_934(2))
		{
			func_1590(&Global_0, 1024);
		}
		if (func_159() == -1)
		{
			func_1591(&(Global_1347343->f_11), 536870912);
			func_1592(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_1593(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_1594(0);
			}
		}
		if (func_159() == -1)
		{
			iVar1 = func_1005(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_1007();
				switch (iVar1)
				{
					case 0:
						func_1595(0);
						break;
					case 1:
						func_1595(1);
						break;
					case 2:
						func_1595(2);
						break;
					case 3:
						func_1595(3);
						break;
					case 4:
						func_1595(4);
						break;
					case 5:
						func_1595(5);
						break;
					case 6:
						func_1595(5);
						break;
					case 7:
						func_1595(7);
						break;
					case 8:
						func_1595(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_441(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_1595(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_441(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_1595(11);
						break;
					default:
						iVar1 = func_1007();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_1596(0);
									break;
								case 1:
									func_1596(1);
									break;
								case 2:
									func_1596(2);
									break;
								case 3:
									func_1596(3);
									break;
								case 4:
									func_1596(4);
									break;
								case 5:
									func_1596(5);
									break;
								case 6:
									func_1596(5);
									break;
								case 7:
									func_1596(7);
									break;
								case 8:
									func_1596(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_1010(1);
	}
	else
	{
		func_1589(iParam0, -1);
		func_1008(iParam0, 4);
	}
	func_1011(iParam0, 0);
}

void func_1044(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

bool func_1045(int iParam0, int iParam1)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	if (func_159() != -1)
	{
		if (does_entity_exist(Global_1051260->f_48[iParam0]->f_19))
		{
			*iParam1 = get_ped_index_from_entity_index(Global_1051260->f_48[iParam0]->f_19);
		}
		else
		{
			return false;
		}
	}
	else if (does_entity_exist(Global_1914319->f_3[iParam0]->f_23))
	{
		*iParam1 = get_ped_index_from_entity_index(Global_1914319->f_3[iParam0]->f_23);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10074;
		case 2:
			return 10076;
		case 3:
			return 10077;
		case 6:
			return 10034;
		case 7:
			return 10040;
		case 8:
			return 10041;
		case 13:
			return 10042;
		case 14:
			return 10043;
		case 15:
			return 10043;
		case 17:
			return 10044;
		case 18:
			return 10050;
		case 19:
			return 10051;
		case 20:
			return 10052;
		case 21:
			return 10053;
		case 22:
			return 10000;
		case 23:
			return 10025;
		case 24:
			return 10026;
		case 25:
			return 10096;
		case 26:
			return 10098;
		case 27:
			return 10101;
		case 28:
			return 10102;
		case 29:
			return 10103;
		case 30:
			return 10104;
		case 31:
			return 10105;
		case 36:
			return 10005;
		case 37:
			return 10006;
		case 38:
			return 10008;
		case 39:
			return 10011;
		case 40:
			return 10012;
		case 41:
			return 10013;
		case 42:
			return 10014;
		case 43:
			return 10016;
		case 44:
			return 10017;
		case 45:
			return 10018;
		case 46:
			return 10020;
		case 47:
			return 10019;
		case 55:
			return 10116;
		case 48:
			return 10113;
		case 49:
			return 10114;
		case 50:
			return 10115;
		case 60:
			return 10028;
		case 61:
			return 10031;
		case 62:
			return 10031;
		case 65:
			return 10032;
		case 68:
			return 10058;
		case 69:
			return 10059;
		case 72:
			return 10061;
		case 73:
			return 10064;
		case 74:
			return 10065;
		case 75:
			return 10066;
		case 76:
			return 10067;
		case 77:
			return 10068;
		case 78:
			return 10069;
		case 79:
			return 10118;
		case 82:
			return 10088;
		case 86:
			return 10090;
		case 85:
			return 10090;
		case 89:
			return 10047;
		case 88:
			return 10047;
		case 120:
			return 10071;
		case 106:
			return 10036;
		case 107:
			return 10038;
		case 109:
			return 10007;
		case 110:
			return 10010;
		case 112:
			return 10097;
		case 114:
			return 10027;
		case 102:
			return 10060;
		case 103:
			return 10063;
		case 116:
			return 10085;
		case 128:
			return 10078;
		case 129:
			return 10079;
		case 130:
			return 10080;
		case 131:
			return 10081;
		case 132:
			return 10092;
		case 133:
			return 10093;
		case 134:
			return 10094;
		case 135:
			return 10095;
		case 137:
			return 10054;
		case 138:
			return 10055;
		case 139:
			return 10056;
		case 140:
			return 10057;
		case 141:
			return 10001;
		case 142:
			return 10002;
		case 143:
			return 10003;
		case 144:
			return 10004;
		case 145:
			return 10021;
		case 146:
			return 10022;
		case 147:
			return 10023;
		case 148:
			return 10024;
		case 90:
			return 10107;
		case 91:
			return 10108;
		case 92:
			return 10117;
		case 99:
			return 10119;
		case 100:
			return 10120;
		case 95:
			return 10111;
		default:
			break;
	}
	return 0;
}

void func_1047(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (does_entity_exist(iParam0))
	{
		Var0.f_14 = iParam0;
		Var0 = uParam1;
		Var0.f_12 = 22;
		Var0.f_3 = iParam2;
		Var0.f_8 = iParam5;
		Var0.f_11 = iParam6;
		Var0.f_13 = iParam4;
		if (!bParam3)
		{
			func_1597(&(Var0.f_16), 1);
		}
		_0x88bc5f4aef77fc4e(&Var0, 17);
	}
}

void func_1048(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_931();
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
			func_1598(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_1049(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_1050(bool bParam0)
{
	if (func_1599(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_1051(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_159() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1600(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1600(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1079(iVar0) == -1)
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

void func_1052(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1601(uParam0);
	}
}

bool func_1053(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_1079(iParam2);
	}
	else
	{
		iVar1 = func_1078(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_1079(iParam0);
	}
	else
	{
		iVar0 = func_1078(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_438(*uParam1, 8388608))
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

float func_1054(int iParam0, int iParam1)
{
	return func_519(iParam0, iParam1, 1, 1);
}

float func_1055(var uParam0)
{
	return uParam0->f_26;
}

bool func_1056(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1057(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_571(uParam0, 134217728);
	}
	else
	{
		func_570(uParam0, 134217728);
	}
}

void func_1058()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_1059(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_519(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_778(iVar0, 0)))
		{
			if (func_1602(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1060(var uParam0)
{
	return uParam0->f_17;
}

bool func_1061(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_438(*uParam0, 4194304))
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

int func_1062(var uParam0)
{
	return uParam0->f_18;
}

bool func_1063(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_778(iVar0, 0)))
		{
			if (func_1603(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1064(var uParam0)
{
	return uParam0->f_23;
}

int func_1065(var uParam0)
{
	return uParam0->f_21;
}

int func_1066(var uParam0)
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

bool func_1067(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1470(iParam0, vParam4, 0.5f))
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

int func_1068(int iParam0)
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
	if (func_1604(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1069(int iParam0)
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

bool func_1070(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1605(iParam1))
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

bool func_1071(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1605(iParam1))
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

bool func_1072(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_1605(iParam1))
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

bool func_1073(int iParam0, int iParam1)
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

bool func_1074(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_784(iParam0, 1, 0, 0) != 2055893578)
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

bool func_1075(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_1076(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_54(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1077(var uParam0)
{
	return uParam0->f_24;
}

int func_1078(int iParam0)
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

int func_1079(int iParam0)
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

int func_1080(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_1073(Global_35, &iVar1))
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
		fVar2 = func_519(iParam0, player_ped_id(), 0, 1);
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
		if (func_519(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_1081(int iParam0, var uParam1, bool bParam2)
{
	func_1599(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1082(uParam1, iVar0))
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
				if (!bParam2 || !func_1082(uParam1, iVar1))
				{
					if (func_54(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1082(var uParam0, int iParam1)
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

bool func_1083(int iParam0)
{
	if (func_158())
	{
		return false;
	}
	return func_445((*Global_1347702)[58]->f_15, 1);
}

int func_1084(var uParam0)
{
	return uParam0->f_20;
}

int func_1085(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_1086(bool bParam0, vector3 vParam1)
{
	if (!_does_volume_exist(bParam0))
	{
		return false;
	}
	return _0xf256a75210c5c0eb(bParam0, vParam1);
}

Vector3 func_1087(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_1568(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

void func_1088(var uParam0)
{
	func_177(256);
}

bool func_1089(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

Vector3 func_1090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2940.831f, 1314.94f, 43.47723f;
		case 7:
			return -787.9549f, -1329.94f, 42.642f;
		case 17:
			return -756.287f, -1303.571f, 42.55379f;
		case 19:
			return 1442.6f, 263.8f, 90.5f;
		case 39:
			return 2714.857f, -1220.076f, 50.17068f;
		case 42:
			return 2826.128f, -1310.247f, 45.77036f;
		case 43:
			return 2724.865f, -1289.872f, 48.13114f;
		case 41:
			return 2846.573f, -1207.054f, 46.69181f;
		case 47:
			return 2545.625f, -1174.883f, 52.3105f;
		case 28:
			return 1320.562f, -1288.47f, 75.29237f;
		case 29:
			return 1331.844f, -1319.767f, 76.94893f;
		case 61:
			return -1798.134f, -386.6793f, 159.2768f;
		case 73:
			return -290.366f, 802.7841f, 118.2866f;
		case 74:
			return -316.9948f, 797.8707f, 116.5135f;
		case 75:
			return -285.2195f, 775.3804f, 117.7822f;
		case 82:
			return 3018.616f, 555.4745f, 43.68162f;
		case 90:
			return -5495.194f, -2937.927f, -1.45012f;
		case 91:
			return -5512.303f, -2962.822f, -2.57416f;
		case 95:
			return -3678.501f, -2632.466f, -14.71208f;
		case 87:
			return -1308.618f, 395.231f, 94.38168f;
		case 89:
			return -1308.618f, 395.231f, 94.38168f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1091(var uParam0)
{
	return uParam0->f_2 == 2;
}

void func_1092(var uParam0, char* sParam1, bool bParam2)
{
	if (!func_313(uParam0, 524288))
	{
		func_648(uParam0->f_26[0], 0);
		func_915(uParam0->f_26[0], "ROB_REGISTER", sParam1, -1616532217, 0, 0, 0, 1, 0);
		uParam0->f_26[0]->f_9 = 3;
	}
	if (!bParam2)
	{
		return;
	}
	switch (uParam0->f_51)
	{
		case 29:
		case 61:
			sVar0 = "SR_ROB_ILO_BASEMENT";
			break;
		case 43:
		case 73:
			sVar0 = "SR_ROB_ILO_BACKROOM";
			break;
	}
	if (!func_313(uParam0, 65536))
	{
		func_648(uParam0->f_26[1], 0);
		func_915(uParam0->f_26[1], sVar0, "", 1980406895, 0, 0, 0, 1, 0);
		uParam0->f_26[1]->f_9 = 3;
	}
}

void func_1093(var uParam0, bool bParam1)
{
	func_648(uParam0->f_26[0], 1);
	if (bParam1)
	{
		func_648(uParam0->f_26[1], 1);
	}
}

int func_1094(int* iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_1471(&iVar0);
	if (func_438(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_941(iParam0, iParam1, fParam2, uParam3, iParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, bParam14);
	if (!func_438(iVar0, 134217728))
	{
		func_1606(iParam1, uParam3, iParam0);
	}
	if (!*iParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_574(558))
				{
					func_575(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_1095(int* iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*iParam0))
	{
		_0xe98d55c5983f2509(*iParam0);
		bVar4 = func_438(iParam4, 32);
		func_646(iParam1, uParam2, 0);
		iVar5 = func_1607(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*iParam0, 178, false);
			return true;
		}
		func_647(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_438(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_438(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_438(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_438(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_438(iParam4, 8388608) || func_438(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_438(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_438(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_1474(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!func_1474(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_438(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1608(iParam0);
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
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*iParam0, iParam6);
				}
			}
			set_ped_config_flag(*iParam0, 130, true);
			set_ped_config_flag(*iParam0, 178, false);
			set_ped_config_flag(*iParam0, 297, true);
			set_ped_config_flag(*iParam0, 301, false);
			if (func_438(iParam4, 268435456))
			{
				iVar8 = func_1609(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1610(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_1474(iParam1, 23))
			{
				set_ped_config_flag(*iParam0, 315, false);
				set_ped_config_flag(*iParam0, 331, false);
				set_ped_config_flag(*iParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*iParam0, 315, true);
				set_ped_config_flag(*iParam0, 493, false);
			}
			if (func_438(iParam4, 2) || func_438(iParam4, 16))
			{
				func_1473(*iParam0, 1, 1);
			}
			else
			{
				func_1473(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

int func_1096(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = get_indexed_item_in_itemset(iVar5, iVar0);
			iVar2 = iVar1;
			if ((does_entity_exist(iVar2) && iVar4 < *iParam0) && iVar4 < iParam2)
			{
				if (func_1611(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !decor_exist_on(iVar2, "bIgnoreThisPed"))
				{
					if (!func_1612(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < get_num_models_in_population_set(iParam7))
							{
								if (is_ped_model(iVar2, get_ped_model_name_in_population_set(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!is_entity_dead(iVar2))
								{
									set_blocking_of_non_temporary_events(iVar2, bParam5);
								}
							}
							(*iParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	destroy_itemset(iVar0);
	return iVar4;
}

void func_1097(int iParam0, var uParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)
{
	iVar0 = func_1613(&uVar2, uParam1, iParam5, vParam2, iParam7, iParam8, bParam9, 0, -1, 1, iParam10, bParam11, 0, 0);
	func_1614(&uVar2, iVar0, vParam2, 1, 1, 0);
	iVar1 = 0;
	iVar49 = 0;
	StringCopy(&cVar46, "GRABBED_PED ", 24);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_430(&(uVar2[iVar1]), 0))
		{
			vVar43 = { cVar46 };
			StringIntConCat(&vVar43, iVar1, 24);
			if (bParam9)
			{
				set_blocking_of_non_temporary_events(&(uVar2[iVar1]), true);
				set_entity_as_mission_entity(&(uVar2[iVar1]), true, true);
			}
			set_ped_name_debug(&(uVar2[iVar1]), &vVar43);
			(*iParam0)[iVar49] = &uVar2[iVar1];
			iVar49++;
			if (iVar49 >= iParam6)
			{
			}
			else
			{
				iVar1++;
			}
		}
	}
}

void func_1098(var uParam0, var uParam1)
{
	*uParam1 = Global_35;
	uParam1->f_1 = *uParam0;
	uParam1->f_2 = -1547772340;
	uParam1->f_3 = { Global_36 };
	uParam1->f_6 = func_1037(func_160(), 1, 1);
	uParam1->f_8 = 1;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
}

bool func_1099(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case -378974401:
		case 254009656:
			return false;
		default:
			break;
	}
	iVar1 = get_interior_from_entity(iParam0);
	if (!is_valid_interior(iParam1))
	{
		return false;
	}
	if (iVar1 == iParam1)
	{
		return true;
	}
	if (is_valid_interior(iVar1))
	{
		return false;
	}
	return true;
}

bool func_1100()
{
	if (func_65())
	{
		if (func_374(Local_62.f_170, 1))
		{
			return true;
		}
	}
	if (func_308(Local_62.f_170, 0, &(Local_62.f_124), &(Local_62.f_152), 0, 0))
	{
		if (Local_62.f_152 != 256)
		{
			return true;
		}
	}
	return false;
}

void func_1101(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

Vector3 func_1103()
{
	return 1324.463f, -1323.992f, 76.88768f;
}

void func_1104(var uParam0, var uParam1, bool bParam2)
{
	func_915((*uParam1)[0], "INTERACT_GREET", "", -163964935, 0, 0, 0, 1, 0);
	func_915((*uParam1)[1], "INTERACT_INSULT", "", 648122183, 0, 0, 0, 1, 0);
	func_1258(uParam0, uParam1, bParam2);
	func_649(uParam0, 1);
	Local_62.f_170.f_209 = -1;
}

Vector3 func_1105()
{
	return 2711.24f, -1290.74f, 49.63f;
}

Vector3 func_1106()
{
	return -1789.88f, -388.55f, 160.32f;
}

Vector3 func_1107()
{
	return -290.16f, 812.8f, 119.43f;
}

void func_1108()
{
	if (func_335(8))
	{
		return;
	}
	if (func_1059(Local_62.f_170, 1, 1, 1, 0, 0))
	{
		if (!func_276(&(Local_62.f_170.f_214), 7.5f, 0, "shoprob.clerkData.timerGeneric"))
		{
			return;
		}
	}
	else
	{
		func_307(&(Local_62.f_170.f_214));
		return;
	}
	func_307(&(Local_62.f_170.f_214));
	func_245(Local_62.f_170, Global_35, "GUN_AIMED_AT_LINGERING", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_533(8);
}

Vector3 func_1109(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	_get_anim_scene_origin(iParam0, &vVar0, &uVar3, 2);
	return vVar0;
}

int func_1110(var uParam0)
{
	iVar0[0] = 0;
	iVar0[1] = 2;
	iVar0[2] = 1;
	iVar0[3] = 0;
	iVar0[4] = 0;
	iVar0[5] = 0;
	iVar0[7] = 0;
	iVar0[6] = 0;
	switch (uParam0->f_51)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 2;
			break;
		case 7:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 8:
			iVar0[0] = 1;
			iVar0[1] = 3;
			iVar0[2] = 0;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 17:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 1;
			iVar0[3] = 2;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 19:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 3;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 0;
			break;
		case 22:
			break;
		case 28:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 29:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 1;
			break;
		case 39:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 42:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 41:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 43:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 2;
			iVar0[5] = 0;
			iVar0[6] = 3;
			break;
		case 47:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 61:
			iVar0[0] = 0;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 73:
			iVar0[0] = 2;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 2;
			iVar0[4] = 1;
			iVar0[5] = 3;
			break;
		case 74:
			iVar0[0] = 1;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 3;
			iVar0[4] = 2;
			iVar0[5] = 2;
			break;
		case 75:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 1;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 1;
			break;
		case 82:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 87:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
		case 90:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 0;
			iVar0[3] = 1;
			iVar0[4] = 3;
			iVar0[5] = 0;
			break;
		case 91:
			iVar0[0] = 0;
			iVar0[1] = 1;
			iVar0[2] = 1;
			iVar0[3] = 0;
			iVar0[4] = 1;
			iVar0[5] = 2;
			iVar0[6] = 3;
			break;
		case 95:
			iVar0[0] = 1;
			iVar0[1] = 0;
			iVar0[2] = 2;
			iVar0[3] = 0;
			iVar0[4] = 0;
			iVar0[5] = 3;
			break;
	}
	iVar9 = func_1615(uParam0, &iVar0);
	return iVar9;
}

bool func_1111(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

void func_1112(int* iParam0, int iParam1)
{
	if (func_119(&(iParam0->f_9), 2048))
	{
		return;
	}
	if (!_is_ped_hogtied(*iParam0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*iParam0, false);
	func_772(&(iParam0->f_9), 2048);
}

void func_1113(int iParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (func_113(iParam0, "open_door", sParam1))
	{
		*bParam2 = 1;
	}
	else if (func_113(iParam0, "open_door_idle", sParam1))
	{
		*bParam3 = 1;
	}
}

bool func_1114(int iParam0, char* sParam1)
{
	if (!func_280(iParam0, sParam1, 0.399f))
	{
		return false;
	}
	func_517(32);
	return true;
}

bool func_1115(int iParam0, char* sParam1, int* iParam2, var uParam3)
{
	if (func_221(2))
	{
		return false;
	}
	func_1616(*iParam2, uParam3);
	if (!func_1617())
	{
		return false;
	}
	if (func_44(67108864))
	{
		return false;
	}
	if (func_1126(iParam2) || func_548(*iParam2, 1435919172, 0))
	{
		func_307(&(iParam2->f_217));
		return false;
	}
	else
	{
		fVar0 = 3f;
		if (!func_276(&(iParam2->f_217), fVar0, 1, "gunsmith.timerIsInterrupted"))
		{
			return false;
		}
	}
	func_307(&(iParam2->f_217));
	func_546(iParam0, sParam1);
	func_796(0, func_911(0), 0, "PBL_holdup");
	return true;
}

void func_1116(int iParam0)
{
	iLocal_45 = iParam0;
}

bool func_1117(int* iParam0, var uParam1)
{
	if (func_221(8))
	{
		return false;
	}
	if (iLocal_45 == 10)
	{
		return false;
	}
	if (func_1126(iParam0) || func_548(*iParam0, 1435919172, 1))
	{
		return false;
	}
	func_302(0);
	func_1616(*iParam0, uParam1);
	return true;
}

bool func_1118(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (func_120(1))
	{
		return false;
	}
	if (func_1114(iParam0, sParam1))
	{
		return false;
	}
	if ((*uParam2 == 256 || *uParam2 == 4) || *uParam2 == 1)
	{
		return true;
	}
	if (*uParam3 == 256 || *uParam3 == 4)
	{
		return true;
	}
	return false;
}

void func_1119(int iParam0)
{
	func_302(iParam0);
}

bool func_1120(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (func_120(2))
	{
		return false;
	}
	if (!func_1114(iParam0, sParam1))
	{
		return false;
	}
	if (((*uParam2 == 256 || *uParam2 == 4) || *uParam2 == 1) || *uParam2 == 2)
	{
		return true;
	}
	if (*uParam3 == 256 || *uParam3 == 4)
	{
		return true;
	}
	return false;
}

Vector3 func_1121(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
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

float func_1122(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		return Var0.f_3.f_2;
	}
	return 0f;
}

void func_1123(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_1124(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, bool bParam6)
{
	if (!bParam6 && is_ped_injured(iParam0))
	{
		return false;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return false;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &Var0, true, sParam3, 2))
	{
		if (func_1135(iParam0, Var0, Var0.f_3.f_2, fParam4, fParam5, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1125()
{
	func_1618();
	func_535(&(Local_62.f_1216[0]), "SCENE_SDNGUN_HOLDUP");
}

bool func_1126(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return false;
	}
	if (!_0x3ab6c7b0bb0df4b1(*iParam0, -1))
	{
		return false;
	}
	return true;
}

void func_1127(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	task_combat_ped(iParam0, Global_35, iParam1, 0);
}

void func_1128(int* iParam0, char* sParam1)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	task_smart_flee_ped(*iParam0, Global_35, 1000f, -1, 0, 3f, 0);
}

void func_1129()
{
	if (func_74(Global_35, &(Local_62.f_1247[8])) || func_74(Global_35, &(Local_62.f_1247[7])))
	{
		_0x785177e4d57d7389(player_id(), -2130852007, 0, 0, -1);
		func_137(0, 1);
		func_138(0);
	}
	else
	{
		func_137(1, 1);
		func_138(1);
	}
}

void func_1130(int iParam0)
{
	if (!func_335(65536))
	{
		if (!func_353(0, 1, 0, 0))
		{
			return;
		}
		if (func_1619())
		{
			return;
		}
		func_596(&iParam0, "SRGKNOOPN", "SRGKNOOPNJ", 1);
		func_533(65536);
	}
	else if (func_221(256))
	{
		if (!func_335(131072))
		{
			return;
		}
		if (!func_353(3f, 1, 0, 0))
		{
			return;
		}
		if (_0x1ecc76792f661cf5("SRGKNOOPN") || _0x1ecc76792f661cf5("SRGKNOOPNJ"))
		{
			return;
		}
		func_281(&(Local_62.f_1518), "SRG_TRAP_SLEEP", &(Local_62.f_390[0]), Global_35, 0, 0, 1, 1);
		func_1149(131072);
	}
}

bool func_1131(int iParam0)
{
	if (!func_1126(&iParam0) && !func_548(iParam0, 1435919172, 1))
	{
		return true;
	}
	if (_0x3bdfcf25b58b0415(iParam0))
	{
		return true;
	}
	return false;
}

void func_1132(int iParam0, char* sParam1, bool bParam2)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	set_anim_scene_paused(iParam0, bParam2);
}

bool func_1133(var uParam0)
{
	if (_0x1ecc76792f661cf5("SRGKNOOPN") || _0x1ecc76792f661cf5("SRGKNOOPNJ"))
	{
		return false;
	}
	if ((!func_74(Global_35, &(Local_62.f_1247[7])) && !func_74(Global_35, &(Local_62.f_1247[6]))) && !func_1620(*uParam0, &(uParam0->f_14)))
	{
		return false;
	}
	return true;
}

void func_1134(int iParam0, var uParam1)
{
	if (func_44(-2147483648))
	{
		return;
	}
	if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
	{
		bVar0 = true;
	}
	if (*uParam1 == 2 || *uParam1 == 2048)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	func_302(1);
	func_281(&(Local_62.f_1518), "SRGK_HURT1", iParam0, Global_35, 0, 0, 1, 1);
	func_91(-2147483648);
}

bool func_1135(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_1621(get_entity_heading(iParam0));
	fParam4 = func_1621(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

void func_1136()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[1])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[1];
	sVar1 = func_810(1);
	func_805(iVar0, "pedGunsmith", Local_62.f_170, sVar1, 1);
	func_806(iVar0, "objRoomDoor", Local_62.f_1189[0]->f_5, sVar1, 1);
	func_806(iVar0, "objTrapDoor", &(Local_62.f_1226[0]), sVar1, 1);
	func_277(iVar0, "bHandsUpLoop", 0, sVar1);
	func_277(iVar0, "bStopAtDoorLoop", 0, sVar1);
	func_277(iVar0, "bStopWaitTrapDoorLoop", 0, sVar1);
}

bool func_1137(int* iParam0)
{
	if (func_621(&(Local_62.f_1456)))
	{
		if (!func_657(&(Local_62.f_1456), 6f))
		{
			return false;
		}
	}
	if (func_544(iParam0) || func_548(*iParam0, 1435919172, 1))
	{
		func_307(&(iParam0->f_217));
		return false;
	}
	if (func_221(2048))
	{
		return false;
	}
	if (iLocal_45 == 1 || iLocal_45 == 2)
	{
		return false;
	}
	func_546(&(Local_62.f_1216[1]), "SCENE_STRGEN_HOLDUP");
	func_796(0, func_900(0), 0, "pbOpenToBasement_Alt");
	return true;
}

char* func_1138()
{
	return "script_proc@robberies@shop@strgen";
}

void func_1139()
{
	iVar0 = &Local_62.f_1216[0];
	sVar1 = func_900(0);
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	func_805(iVar0, "pedClerk", Local_62.f_170, sVar1, 1);
	func_805(iVar0, "pedPlayer", Global_35, sVar1, 1);
	func_806(iVar0, "objFloorboard", &(Local_62.f_1226[1]), sVar1, 1);
	func_806(iVar0, "objTrapDoor", &(Local_62.f_1226[2]), sVar1, 1);
	func_277(iVar0, "bStopIdleLoop", 0, sVar1);
	func_277(iVar0, "bStopHandsUpLoop", 0, sVar1);
	func_277(iVar0, "bStopTrapDoorLoop", 0, sVar1);
	func_277(iVar0, "bStopLadderLoop", 0, sVar1);
	func_277(iVar0, "bStopBasementLoop1", 0, sVar1);
	func_277(iVar0, "bStopBasementLoop2", 0, sVar1);
	func_277(iVar0, "bStopCryLoop", 0, sVar1);
	func_277(iVar0, "COWER_LOOP", 0, sVar1);
}

void func_1140()
{
	func_277(&(Local_62.f_1216[4]), "bActionCower", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1141()
{
	if (func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.058f) && !func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

void func_1142(var uParam0, int iParam1)
{
	if (uParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_701();
		_0xeacebaae0a33fb3f(player_id());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_1057(uParam0, 0);
	*iParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_1143(int* iParam0, int iParam1, char* sParam2)
{
	if (func_621(&(Local_62.f_1456)))
	{
		if (!func_657(&(Local_62.f_1456), 6f))
		{
			return false;
		}
	}
	if (func_544(iParam0) || func_548(*iParam0, 1435919172, 0))
	{
		func_307(&(iParam0->f_217));
		return false;
	}
	else if (!func_276(&(iParam0->f_217), 3f, 1, "doc.timerIsInterrupted"))
	{
		return false;
	}
	if (func_44(67108864))
	{
		return false;
	}
	func_307(&(iParam0->f_217));
	func_546(iParam1, sParam2);
	func_796(4, func_795(4), 0, "PBL_KNOCK_DOOR");
	return true;
}

bool func_1144(int iParam0)
{
	if (*iParam0 != 2)
	{
		return false;
	}
	if (_0x285d36c5c72b0569(Global_35) > 1f)
	{
		return false;
	}
	return true;
}

bool func_1145()
{
	if (func_44(262144))
	{
		return false;
	}
	if (func_44(524288))
	{
		return false;
	}
	if (func_44(1048576))
	{
		return false;
	}
	return true;
}

bool func_1146(int* iParam0, int iParam1)
{
	if (!func_1622())
	{
		return false;
	}
	if (func_145(*iParam0, 0, 1) && !_is_ped_lassoed(*iParam0))
	{
		return false;
	}
	func_91(524288);
	return true;
}

bool func_1147(var uParam0, bool bParam1, int iParam2)
{
	if (!func_1141())
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	if (*iParam2 == 4)
	{
		bVar0 = true;
		func_1119(0);
		func_281(&(Local_62.f_1518), "SRVDOSEEMA", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 2048)
	{
		bVar0 = true;
		func_1119(0);
		func_281(&(Local_62.f_1518), "SRVDOSEEAT", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 2)
	{
		bVar0 = true;
		func_1119(0);
		func_281(&(Local_62.f_1518), "SRVDOSEEKL", *uParam0, Global_35, 0, 0, 1, 1);
	}
	else if (*iParam2 == 1)
	{
		bVar0 = true;
		func_1119(0);
		func_281(&(Local_62.f_1518), "SRV_G3_NOOPEN2", *uParam0, Global_35, 0, 0, 1, 1);
	}
	if (bVar0)
	{
		func_91(262144);
		return true;
	}
	return false;
}

bool func_1148(bool bParam0, int iParam1)
{
	if (!func_1157())
	{
		return false;
	}
	if (!bParam0)
	{
		return false;
	}
	if (*iParam1 == 4)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 2048)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 2)
	{
		bVar0 = true;
	}
	else if (*iParam1 == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_91(1048576);
		return true;
	}
	return false;
}

void func_1149(int iParam0)
{
	if (!func_335(iParam0))
	{
		return;
	}
	Local_62.f_1627 = (Local_62.f_1627 - (Local_62.f_1627 && iParam0));
}

void func_1150(int iParam0, char* sParam1)
{
	if (func_221(2048))
	{
		if (!func_550(iParam0, sParam1))
		{
			func_546(iParam0, sParam1);
		}
	}
	else if (func_221(1024))
	{
		if (func_1141())
		{
			func_278(iParam0, "PBL_CLOSE_SLIT", sParam1, 1);
			func_224(2048);
		}
		else if (func_1623())
		{
			func_224(2048);
		}
	}
}

void func_1151(var uParam0)
{
	func_1624(uParam0, 0);
	func_1204(uParam0, 1);
	func_879(uParam0, 1);
	func_336(uParam0, 1);
	func_893(uParam0, 1);
}

void func_1152()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[2])))
	{
		return;
	}
	if (!is_entity_dead(&(Local_62.f_1226[12])))
	{
		set_entity_visible(&(Local_62.f_1226[12]), true);
		set_anim_scene_entity(&(Local_62.f_1216[2]), "weapPistolFemale", &(Local_62.f_1226[12]), 0);
	}
	if (func_145(&(Local_62.f_390[1]), 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[2]), "pedFlirtMale", &(Local_62.f_390[1]), 0);
	}
	if (func_145(&(Local_62.f_390[3]), 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[2]), "pedFlirtFemale", &(Local_62.f_390[3]), 0);
	}
}

void func_1153()
{
	func_1625();
	func_535(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1154()
{
	if (func_280(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM", 0.034f))
	{
		return true;
	}
	return false;
}

bool func_1155()
{
	if (func_280(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM", 0.24f))
	{
		return true;
	}
	return false;
}

void func_1156()
{
	iVar0 = &Local_62.f_1216[5];
	cVar1 = func_795(5);
	if (!_does_anim_scene_exist(&(Local_62.f_1216[5])))
	{
		return;
	}
	if (_does_anim_scene_exist(&(Local_62.f_1216[1])))
	{
		_delete_anim_scene(&(Local_62.f_1216[1]));
	}
	func_545(Local_62.f_1226[1], 0);
	func_545(Local_62.f_1226[6], 0);
	func_545(Local_62.f_1226[7], 0);
	func_545(Local_62.f_1226[4], 0);
	func_545(Local_62.f_1226[5], 0);
	func_545(Local_62.f_1226[2], 0);
	func_545(Local_62.f_1226[3], 0);
	Local_62.f_1512[4] = create_scenario_point(-488411758, -287.3691f, 815.6423f, 118.392f, func_1626(-1.416f), 0f, 0, 0);
	_set_scenario_point_flag(&(Local_62.f_1512[4]), 22, true);
	func_806(iVar0, "objCountPen", &(Local_62.f_1226[8]), cVar1, 1);
	func_806(iVar0, "objCountLedger", &(Local_62.f_1226[9]), cVar1, 1);
	func_806(iVar0, "objCountChair", &(Local_62.f_1226[10]), cVar1, 1);
	func_806(iVar0, "objDoor", &(Local_62.f_1198[0]), cVar1, 1);
	func_805(iVar0, "pedGangCountCash", &(Local_62.f_390[0]), cVar1, 1);
	func_277(&(Local_62.f_1216[5]), "bStopCountLoop", 0, "SCENE_VALDOC_GANGOPENBACKROOM");
}

bool func_1157()
{
	if (func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

char* func_1158()
{
	if (!func_60(8192))
	{
		return "SRVD_DOPEN2";
	}
	else
	{
		return "SRVD_DOPEN3";
	}
	return "";
}

bool func_1159()
{
	if (func_280(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM", 0.56f))
	{
		return true;
	}
	return false;
}

bool func_1160(var uParam0)
{
	if (func_579(*uParam0, "DLG_GangNoSeeClerk"))
	{
		return true;
	}
	return false;
}

bool func_1161(var uParam0)
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[5])))
	{
		return false;
	}
	if (func_579(*uParam0, "DoorOpen"))
	{
		return true;
	}
	return false;
}

bool func_1162(var uParam0)
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[5])))
	{
		return false;
	}
	if (func_579(*uParam0, "SlitClosed"))
	{
		return true;
	}
	return false;
}

void func_1163(int iParam0, vector3 vParam1, float fParam4, float fParam5, int iParam6, float fParam7)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	task_go_straight_to_coord(0, vParam1, fParam5, iParam6, 40000f, fParam7, 0);
	if (fParam4 != -1f)
	{
		task_achieve_heading(0, fParam4, 0);
	}
	func_547(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1164(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	task_cower(iParam0, iParam1, 0, 0);
}

void func_1165(int iParam0, int* iParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	*iParam3 = -1;
	if (func_551(uParam4, 2))
	{
		iVar0 = 3;
		iVar1 = func_940(iVar0, 0, 0);
		if (func_551(uParam4, 32))
		{
			iVar1 |= 65792;
		}
		*iParam3 = func_941(&iParam0, iParam1, 15f, uParam2, 0, 3, 0, "", iVar1, 0, 0, 2, -1082130432);
	}
}

void func_1166(int* iParam0, int* iParam1, int* iParam2)
{
	func_1627(iParam0, 2);
	func_1627(iParam1, 3);
	func_1627(iParam2, 4);
}

void func_1167()
{
	if (func_62(1048576))
	{
		return;
	}
	if (!func_221(512))
	{
		return;
	}
	if (func_221(16))
	{
		iVar0 = &Local_62.f_390[0];
		iVar1 = Local_62.f_390[0]->f_1;
	}
	else
	{
		iVar0 = Local_62.f_170;
		iVar1 = Local_62.f_170.f_1;
	}
	if (!func_145(iVar0, 0, 1))
	{
		return;
	}
	if (func_74(Global_35, &(Local_62.f_1355[2])) || func_519(Global_35, iVar0, 1, 1) < 6f)
	{
		func_307(Local_62.f_1392[5]);
		return;
	}
	if (!func_276(Local_62.f_1392[5], 7.5f, 1, "TIMER_SDNGUN_PLAYER_ABANDONED_DOWNSTAIRS_SURVIVOR"))
	{
		return;
	}
	func_1628(&iVar0, 2710.067f, -1290.767f, 48.61687f, 2f, -1, 0.5f);
	func_61(&iVar1);
	func_39(1048576);
}

void func_1168(int iParam0)
{
	if (func_335(-2147483648))
	{
		return;
	}
	func_281(&(Local_62.f_1518), "PRNBH_IG6_KILL1", iParam0, Global_35, 0, 0, 1, 1);
	func_533(-2147483648);
}

bool func_1169()
{
	if (func_120(2048) || func_120(512))
	{
		return false;
	}
	if (!func_120(1024))
	{
		return false;
	}
	if (!func_222(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (!Global_1935630->f_23)
	{
		return false;
	}
	if (!func_120(4096))
	{
		return false;
	}
	if (func_221(134217728))
	{
		func_224(67108864);
	}
	func_1187();
	func_1119(1);
	func_1185();
	_task_smart_flee_style_ped(&(Local_62.f_390[2]), Global_35, 3, 32768, -1082130432, -1, 0);
	func_517(2048);
	return true;
}

void func_1170(int iParam0)
{
	iLocal_46 = iParam0;
}

bool func_1171()
{
	if (func_99(512))
	{
		return false;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[6])))
	{
		return false;
	}
	func_1123(2715.568f, -1287.846f, 59.34501f, 7.87f, 0);
	func_890(&(Local_62.f_1368), &(Local_62.f_1369), 2713.375f, -1290.984f, 61.18057f, 0f, 0f, -65.06339f, 6.10498f, 5.006104f, 3.666298f, 1, 0, 1, 0, 0);
	if (func_221(16))
	{
		func_1128(Local_62.f_390[0], "HIDDENPED_SDNGUN_GUARDDOWN");
		func_61(&(Local_62.f_390[0]->f_1));
		func_39(1048576);
	}
	else
	{
		func_1128(&(Local_62.f_170), "GUNSMITH");
		func_61(&(Local_62.f_170.f_1));
		func_39(1048576);
	}
	func_426(1057071735, 0, 0f, 0, 1, 0, 0, 0);
	func_426(-1011766303, 0, 0f, 0, 1, 0, 0, 0);
	func_426(841127028, 0, 0f, 0, 0, 0, 0, 0);
	func_879(&(Local_62.f_390[2]->f_89), 1);
	func_879(&(Local_62.f_390[3]->f_89), 1);
	func_879(&(Local_62.f_390[4]->f_89), 1);
	func_224(1024);
	iLocal_28 = 0;
	func_98(512);
	return true;
}

void func_1172(int* iParam0)
{
	if (Local_62.f_1290.f_1)
	{
		return;
	}
	if (!Local_62.f_1247[4]->f_1)
	{
		if (func_74(Global_35, &(Local_62.f_1247[4])))
		{
			Local_62.f_1247[4]->f_1 = 1;
		}
		return;
	}
	if (!func_55(4096))
	{
		if (is_ped_shooting(Global_35))
		{
			func_57(4096);
		}
		return;
	}
	if (!func_99(1024))
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (func_221(2048))
	{
		return;
	}
	func_1629(iParam0);
	func_224(2048);
}

void func_1173()
{
	if (!func_99(1024))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	func_1630(Local_62.f_390[2], 2, &(Local_62.f_390[2]->f_89), &(Local_62.f_390[2]->f_9), &(Local_62.f_1475[0]));
	func_1630(Local_62.f_390[3], 3, &(Local_62.f_390[3]->f_89), &(Local_62.f_390[3]->f_9), &(Local_62.f_1475[1]));
	func_1630(Local_62.f_390[4], 4, &(Local_62.f_390[4]->f_89), &(Local_62.f_390[4]->f_9), &(Local_62.f_1475[2]));
}

void func_1174()
{
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case 402722103:
				func_1631(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_1175(int* iParam0, int iParam1, char* sParam2)
{
	if (!func_113(iParam1, func_1632(), sParam2))
	{
		return;
	}
	if (func_812(iParam1, sParam2, func_1633()))
	{
		func_278(iParam1, func_1634(), sParam2, 1);
		func_1635(iParam1, sParam2);
		return;
	}
	else if (func_812(iParam1, sParam2, func_1636()))
	{
		func_278(iParam1, func_1634(), sParam2, 1);
		func_1635(iParam1, sParam2);
		return;
	}
	if (!func_559(iParam1, func_1633(), sParam2, 0) || !func_559(iParam1, func_1636(), sParam2, 0))
	{
		return;
	}
	if (func_621(Local_62.f_1392[10]))
	{
		if (!func_276(Local_62.f_1392[10], 5f, 0, "TIMER_SDNGUN_OWNER_FLINCH_COWER_COOLDOWN"))
		{
			return;
		}
		else
		{
			func_307(Local_62.f_1392[10]);
		}
	}
	if (!func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
	{
		return;
	}
	if (iVar0 != 256 && iVar0 != 4)
	{
		return;
	}
	iVar1 = func_1637(*iParam0, Global_35, 1f);
	if (iVar1 == 2)
	{
		func_278(iParam1, func_1633(), sParam2, 1);
		func_1638(*iParam0);
		func_553(iParam1, func_1634(), sParam2);
		func_317(Local_62.f_1392[10]);
	}
	else if (iVar1 == 3)
	{
		func_278(iParam1, func_1636(), sParam2, 1);
		func_1638(*iParam0);
		func_553(iParam1, func_1634(), sParam2);
		func_317(Local_62.f_1392[10]);
	}
}

void func_1176()
{
	if (!func_99(1024))
	{
		return;
	}
	if (!func_119(&(Local_62.f_390[2]->f_9), 1))
	{
		if (is_entity_dead(&(Local_62.f_390[2])))
		{
			if (!func_221(16777216))
			{
				func_1187();
				func_317(Local_62.f_1392[12]);
				func_928(&(Local_62.f_1216[2]), "OBJ_SAFE", &(Local_62.f_1226[1]), "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
				func_224(67108864);
			}
			func_772(&(Local_62.f_390[2]->f_9), 1);
		}
	}
	if (!func_119(&(Local_62.f_390[3]->f_9), 1))
	{
		if (is_entity_dead(&(Local_62.f_390[3])))
		{
			func_772(&(Local_62.f_390[3]->f_9), 1);
		}
	}
	if (!func_119(&(Local_62.f_390[4]->f_9), 1))
	{
		if (is_entity_dead(&(Local_62.f_390[4])))
		{
			func_772(&(Local_62.f_390[4]->f_9), 1);
		}
	}
}

void func_1177()
{
	func_1639(16384, "BOOL_STOP_COWER_IDLE_POS_01", &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER");
	func_1639(32768, "BOOL_STOP_COWER_IDLE_POS_02", &(Local_62.f_1216[3]), "SCENE_SDNGUN_GAMBLER_OWNER");
	func_1639(65536, "BOOL_STOP_COWER_IDLE", &(Local_62.f_1216[4]), "SCENE_SDNGUN_GAMBLER_MIDDLE");
	func_1639(131072, "BOOL_STOP_COWER_IDLE", &(Local_62.f_1216[5]), "SCENE_SDNGUN_GAMBLER_WUSS");
}

void func_1178()
{
	set_ped_reset_flag(Global_35, 275, true);
	if (!Local_62.f_1290.f_1)
	{
		return;
	}
	iVar0 = 195938434;
	if (!func_221(1073741824))
	{
		if (is_ped_shooting(Global_35) || func_1640(Local_62.f_390[1]))
		{
			func_317(Local_62.f_1392[9]);
			func_224(1073741824);
		}
	}
	switch (iLocal_50)
	{
		case 0:
			func_565(&(Local_62.f_390[2]->f_89), 0);
			func_565(&(Local_62.f_390[3]->f_89), 0);
			func_565(&(Local_62.f_390[4]->f_89), 0);
			func_1388(6);
			break;
		case 6:
			if (!func_221(1073741824))
			{
				return;
			}
			if (func_62(4194304))
			{
				if (!func_1566(Local_62.f_1392[8]))
				{
					func_1641(Local_62.f_1392[8]);
				}
				return;
			}
			if (func_1566(Local_62.f_1392[8]))
			{
				func_1642(Local_62.f_1392[8]);
			}
			fVar1 = 40f;
			if (!func_276(Local_62.f_1392[8], fVar1, 0, "TIMER_SDNGUN_GAMBLING_ROOM_LAW"))
			{
				if (func_620(Local_62.f_1392[9], 3f))
				{
					if (is_ped_shooting(Global_35) || func_1640(Local_62.f_390[1]))
					{
						bVar2 = true;
					}
				}
				if (!bVar2)
				{
					return;
				}
			}
			func_298(1);
			func_307(Local_62.f_1392[8]);
			func_876(0, 1);
			func_1388(1);
			break;
		case 1:
			if (!func_276(Local_62.f_1392[7], 2f, 0, "TIMER_SDNGUN_TRIGGER_WITNESS_AFTER_SAFE_OPEN"))
			{
				return;
			}
			func_307(Local_62.f_1392[7]);
			func_298(1);
			Local_62.f_1479[0] = func_892(79156795, 2732.307f, -1274.234f, 48.58568f, 27.26f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			func_1388(3);
			break;
		case 2:
			if (!func_276(Local_62.f_1392[7], 1f, 0, "TIMER_SDNGUN_TRIGGER_WITNESS_AFTER_SAFE_OPEN"))
			{
				return;
			}
			_0xf0b67bad53c35bd9(&(Local_62.f_1479[0]), Global_35, &(Local_62.f_1479[0]), Global_36, iVar0);
			func_224(-2147483648);
			func_1388(3);
			break;
		case 3:
			if (!func_276(Local_62.f_1392[8], 5f, 0, "TIMER_SDNGUN_GAMBLING_ROOM_LAW"))
			{
				return;
			}
			if (!func_1643(-1))
			{
				return;
			}
			_report_crime(player_id(), iVar0, 50, 0, true);
			func_1644(0);
			func_1388(4);
			break;
		case 4:
			func_1388(18);
			break;
		case 18:
			break;
	}
}

void func_1179(int iParam0, char* sParam1)
{
	if (!func_221(524288))
	{
		return;
	}
	if (_is_anim_scene_metadata_loaded(*iParam0, false))
	{
		return;
	}
	func_553(*iParam0, "PBL_open_safe_A", sParam1);
	func_553(*iParam0, "PBL_open_safe_B", sParam1);
	func_553(*iParam0, "PBL_open_safe_C", sParam1);
	func_553(*iParam0, "PBL_open_safe_D", sParam1);
	func_553(*iParam0, "PBL_open_safe_E", sParam1);
	func_418(524288);
}

void func_1180(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5)
{
	if (!func_221(1048576))
	{
		return;
	}
	if (_is_anim_scene_metadata_loaded(*iParam0, false))
	{
		func_553(*iParam0, "PBL_cower_idle_pos_02", sParam1);
	}
	else
	{
		return;
	}
	if (_is_anim_scene_metadata_loaded(*iParam2, false))
	{
		func_553(*iParam2, "PBL_cower_idle", sParam3);
	}
	else
	{
		return;
	}
	if (_is_anim_scene_metadata_loaded(*iParam4, false))
	{
		func_553(*iParam4, "PBL_cower_idle", sParam5);
	}
	else
	{
		return;
	}
	func_418(1048576);
}

void func_1181(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 268435456))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 16777216))
	{
		return;
	}
	if (is_ped_ragdoll(*iParam0))
	{
		return;
	}
	func_1187();
	if (!is_entity_dead(*iParam0))
	{
		_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
	}
	func_772(&(iParam0->f_9), 268435456);
}

void func_1182()
{
	if (func_120(8192))
	{
		return;
	}
	if (!Local_62.f_1290.f_1)
	{
		return;
	}
	if (!_is_ped_using_scenario_hash(Global_35, func_925()))
	{
		return;
	}
	func_412();
	func_517(8192);
}

bool func_1183(int* iParam0, int* iParam1, int* iParam2, int iParam3)
{
	if (func_1645(iParam0, iParam1, iParam2))
	{
		iVar0 = 1;
	}
	if ((func_1243(&(iParam0->f_9), Local_62.f_1475[0], iParam3) || func_1243(&(iParam1->f_9), Local_62.f_1475[1], iParam3)) || func_1243(&(iParam2->f_9), Local_62.f_1475[2], iParam3))
	{
		func_302(0);
		iVar0 = 1;
	}
	if (func_221(4194304))
	{
		if (func_353(-3f, 1, 0, 0))
		{
			func_224(8388608);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1184(int iParam0, char[4] cParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return;
	}
	reset_anim_scene(iParam0, 0);
	load_anim_scene(iParam0);
}

void func_1185()
{
	_uilog_clear_cached_objective();
}

void func_1186(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(6);
		func_1646(10, 1);
	}
	else
	{
		func_251(6);
	}
	func_298(1);
	func_876(0, 0);
	if (!is_entity_dead(&(Local_62.f_390[0])))
	{
		set_ped_as_no_longer_needed(Local_62.f_390[0]);
	}
	func_29(64);
}

void func_1187()
{
	if (func_221(134217728))
	{
		return;
	}
	if (!get_anim_scene_bool(&(Local_62.f_1216[2]), "b_DisableAudio"))
	{
		func_277(&(Local_62.f_1216[2]), "b_DisableAudio", 1, "SCENE_SDNGUN_GAMBLER_GROUP");
	}
}

void func_1188()
{
	if (!func_221(8192))
	{
		return;
	}
	if (func_120(512) || func_120(2048))
	{
		return;
	}
	func_1647(Local_62.f_390[2], "PED_GAMBLER_OWNER", Local_62.f_1216[3], 0);
	func_1647(Local_62.f_390[3], "PED_GAMBLER_MIDDLE", Local_62.f_1216[4], 1);
	func_1647(Local_62.f_390[4], "PED_GAMBLER_WUSS", Local_62.f_1216[5], 1);
}

void func_1189()
{
	if (!func_221(33554432))
	{
		return;
	}
	if (func_221(67108864))
	{
		return;
	}
	if (!does_blip_exist(&(Local_62.f_1482[2])) && !func_120(16384))
	{
		func_68(func_926(), Local_62.f_1482[2], 408396114, 0, 0, 0);
		set_blip_name_from_text_file(&(Local_62.f_1482[2]), "SR_SD_BLIP_SAFE");
	}
	func_1239(1);
	func_224(134217728);
}

void func_1190()
{
	if (func_120(16384))
	{
		func_1245();
		return;
	}
	if (does_entity_exist(&(Local_62.f_1226[1])))
	{
		if (has_object_been_broken(&(Local_62.f_1226[1])))
		{
			func_595(func_1238(), 1);
			func_224(33554432);
			func_1239(1);
			func_517(32768);
		}
	}
	if (func_120(32768))
	{
		if (func_1244())
		{
		}
	}
}

Vector3 func_1191()
{
	return 2710.35f, -1290.6f, 49.62f;
}

void func_1192(int* iParam0)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	func_432(0, 0, 1);
	_display_hud_component(724769646);
	iVar0 = get_best_ped_weapon(Global_35, true, false);
	set_current_ped_weapon(Global_35, iVar0, false, 0, false, false);
	open_sequence_task(&iVar1);
	if (Global_1935630->f_44 != iVar0)
	{
		task_swap_weapon(0, 1, 0, 0, 0);
	}
	if (!_is_weapon_one_handed(iVar0))
	{
		task_follow_nav_mesh_to_coord(0, func_1195(), 1f, 20000, 0.1f, 0, 123.68f);
	}
	else
	{
		task_follow_nav_mesh_to_coord(0, func_1191(), 1f, 20000, 0.1f, 0, 111.08f);
	}
	func_547(Global_35, &iVar1, 0, 0, 1, 1);
	func_433(1);
}

void func_1193(char[4] cParam0, int iParam1, int iParam2)
{
	func_281(&(Local_62.f_1518), cParam0, iParam1, iParam2, 0, 0, 1, 0);
}

int func_1194(int iParam0, int iParam1, bool bParam2)
{
	if (get_current_ped_weapon(iParam0, &uVar0, true, iParam1, bParam2))
	{
		return uVar0;
	}
	return -1569615261;
}

Vector3 func_1195()
{
	return 2710.77f, -1290.48f, 49.62f;
}

bool func_1196(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	fVar0 = func_54(iParam0, vParam1, 1);
	if (fVar0 <= fParam4)
	{
		return true;
	}
	if (bParam5)
	{
		if (!func_548(iParam0, 1435919172, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1197(int* iParam0)
{
	if (func_221(128))
	{
		if (!func_221(256))
		{
			if (_0x57779b55b83e2bea(*iParam0))
			{
				_0xa180fbd502a03125(*iParam0, 2.75f, 1.75f);
				func_224(256);
			}
		}
		return;
	}
	if (func_1648(&(Local_62.f_1216[0]), "SCENE_SDNGUN_HOLDUP", 0f, 0.5f))
	{
		return;
	}
	if (func_544(iParam0) && !func_280(&(Local_62.f_1216[0]), "SCENE_SDNGUN_HOLDUP", 0.957f))
	{
		return;
	}
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
	_0x2208438012482a1a(*iParam0, true, false);
	_0x41d1331afad5a091(*iParam0, 1, 0);
	set_ped_keep_task(*iParam0, true);
	func_297(*iParam0, Global_35, &(iParam0->f_64), -1, 0f, 0f, 0.5f, 1, 0);
	func_224(512);
	func_224(128);
}

void func_1198(int* iParam0, int iParam1)
{
	if (func_551(&(iParam0->f_10), 16384))
	{
		return;
	}
	if (func_621(Local_62.f_1392[6]))
	{
		if (!func_620(Local_62.f_1392[6], 7.5f))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			return;
		}
	}
	if ((!func_551(&(iParam0->f_10), 4096) && !func_551(&(iParam0->f_10), 8192)) && !func_551(&(iParam0->f_10), 16384))
	{
		if (!func_353(-4f, 1, 0, 0))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
			return;
		}
	}
	else if (!func_353(-3f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	if (!func_551(&(iParam0->f_10), 2048))
	{
		if (!func_551(&(iParam0->f_10), 8))
		{
			func_739(iParam0->f_30[0], 1, 0);
			func_916(&(iParam0->f_10), 8);
		}
	}
	if (func_1649(&(iParam0->f_10)))
	{
		if (!func_551(&(iParam0->f_10), 16))
		{
			func_739(iParam0->f_30[1], 1, 0);
			func_916(&(iParam0->f_10), 16);
		}
	}
	if (iParam1 == 0)
	{
		func_307(Local_62.f_1392[4]);
		func_317(Local_62.f_1392[6]);
		func_302(0);
		func_596(iParam0, "SRNG_ILO_DG_AT1", "SRNG_ILO_DG_JT1", 1);
		func_916(&(iParam0->f_10), 2048);
		func_916(&(iParam0->f_10), 4096);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	else if (iParam1 == 1)
	{
		func_307(Local_62.f_1392[4]);
		func_947(&(iParam0->f_10), 16);
		if (!func_551(&(iParam0->f_10), 8192))
		{
			func_307(Local_62.f_1392[4]);
			func_317(Local_62.f_1392[6]);
			func_302(0);
			func_596(iParam0, "SRNG_ILO_DG_AT2", "SRNG_ILO_DG_JT2", 1);
			func_916(&(iParam0->f_10), 8192);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		}
		else
		{
			func_307(Local_62.f_1392[4]);
			func_1209();
			func_302(0);
			func_596(iParam0, "SRNG_ILO_DG_AT3", "SRNG_ILO_DG_JT3", 1);
			func_916(&(iParam0->f_10), 16384);
			func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		}
	}
	else if (!func_551(&(iParam0->f_10), 2048) || !func_551(&(iParam0->f_10), 4096))
	{
		func_1650(iParam0);
	}
}

bool func_1199(int* iParam0)
{
	if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar0, 0, 0))
	{
		if (iVar0 == 2 || iVar0 == 4)
		{
			return true;
		}
		else if (iVar0 == 8)
		{
			if (!func_1111(1))
			{
				if (!func_335(131072))
				{
					func_281(&(Local_62.f_1518), "SRNG_DG_AIM1", *iParam0, Global_35, 0, 0, 1, 1);
					func_533(131072);
				}
			}
		}
	}
	if (func_551(&(iParam0->f_10), 16384))
	{
		return true;
	}
	return false;
}

void func_1200(int iParam0, char* sParam1)
{
	task_play_anim(iParam0, "SCRIPT_PROC@ROBBERIES@SHOP@NBX_GUNSMITH@DOWNSTAIRS", sParam1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
}

int func_1201()
{
	if (func_120(16))
	{
		if (is_entity_dead(Local_62.f_170))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (is_entity_dead(&(Local_62.f_390[0])))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_1202(int* iParam0, int* iParam1)
{
	func_1651("SR_NG_O_GOTHIRDFLOOR", 7500, 0, 0, -1, -1, 0);
	func_68(2711.768f, -1293.569f, 59.46251f, Local_62.f_1482[0], 408396114, 0, 0, 0);
	func_61(&(iParam0->f_1));
	func_61(&(iParam1->f_1));
}

void func_1203(var uParam0, int iParam1)
{
	if (uParam0->f_16 == 0 && iParam1 == 0)
	{
		return;
	}
	func_1142(uParam0, &iParam1);
}

void func_1204(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_570(&(uParam0->f_1), 2);
	}
	else
	{
		func_571(&(uParam0->f_1), 2);
	}
}

void func_1205()
{
	func_943("PRNBG_PTOOLONG", 0);
	func_943("PRNBG_PTOOLONG2", 0);
	func_943("PRNBG_PTOOLONG3", 0);
}

void func_1206()
{
	if (func_335(262144))
	{
		return;
	}
	func_302(0);
	func_281(&(Local_62.f_1518), "PRNBG_GD_AIM2", &(Local_62.f_390[0]), Global_35, 0, 0, 1, 1);
	func_533(262144);
}

void func_1207(int* iParam0, var uParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[4])))
	{
		return;
	}
	if (iLocal_28 == 0)
	{
		if (func_695(*iParam0, 0, 0, 0, 1))
		{
			func_533(32768);
		}
	}
	else if (func_695(*iParam0, 0, 0, 0, 1))
	{
		if (!func_276(Local_62.f_1392[4], 5f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
		{
			return;
		}
	}
	if (((func_809("PRNBG_GD_AIM2") || func_809("SRNG_ILO_DG_AT3")) || func_809("SRNG_ILO_DG_JT3")) || func_809("PRNBG_PLRTHRT2"))
	{
		return;
	}
	if (!func_335(32768))
	{
		if (!func_276(Local_62.f_1392[4], 10f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
		{
			return;
		}
	}
	func_307(Local_62.f_1392[4]);
	switch (iLocal_28)
	{
		case 0:
			if (func_221(16))
			{
				func_281(&(Local_62.f_1518), "PRNBG_PTOOLONG", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_281(&(Local_62.f_1518), "PRNBG_IG3_WAIT1", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_02_SHOPKEEP");
			}
			func_1204(uParam1, 1);
			func_1149(32768);
			func_1652(1);
			break;
		case 1:
			if (func_221(16))
			{
				func_281(&(Local_62.f_1518), "PRNBG_PTOOLONG2", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_281(&(Local_62.f_1518), "PRNBG_IG3_WAIT2", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_03_SHOPKEEP");
			}
			func_1652(2);
			break;
		case 2:
			if (func_221(16))
			{
				func_281(&(Local_62.f_1518), "PRNBG_PTOOLONG3", *iParam0, Global_35, 0, 0, 1, 1);
			}
			else
			{
				func_281(&(Local_62.f_1518), "PRNBG_IG3_WAIT3", *iParam0, Global_35, 0, 0, 1, 1);
				func_1200(*iParam0, "LINE_02_SHOPKEE4");
			}
			func_1652(6);
			break;
		case 6:
			break;
	}
}

void func_1208()
{
	func_943("PRNBG_IG3_WAIT1", 0);
	func_943("PRNBG_IG3_WAIT2", 0);
	func_943("PRNBG_IG3_WAIT3", 0);
}

void func_1209()
{
	if (iLocal_28 == 0)
	{
		return;
	}
	func_1652(0);
}

void func_1210()
{
	if (_does_scenario_point_exist(&(Local_62.f_1512[2])))
	{
		return;
	}
	Local_62.f_1512[2] = func_1407(func_1653(), func_1654(), 36.57f, 0f, -1f, 1);
	_set_scenario_point_flag(&(Local_62.f_1512[2]), 23, true);
	_set_scenario_point_flag(&(Local_62.f_1512[2]), 25, true);
}

void func_1211(int* iParam0)
{
	func_1232();
	if (func_221(2048))
	{
		return;
	}
	func_591(*iParam0, 2717.313f, -1290.773f, 59.34498f, -151.47f, 2, 1073741824);
	_task_start_scenario_in_place_2(*iParam0, &(Local_62.f_1512[2]), func_1655(), -1, false, -1f, false);
}

void func_1212(int* iParam0)
{
	if (func_335(65536))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[5])))
	{
		return;
	}
	if (!func_158())
	{
		func_281(&(Local_62.f_1518), "SRNG_A_3F", Global_35, *iParam0, 0, 0, 1, 1);
	}
	else
	{
		func_281(&(Local_62.f_1518), "SRNG_J_3F", Global_35, *iParam0, 0, 0, 1, 1);
	}
	func_533(65536);
}

void func_1213()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[1])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[1];
	cVar1 = func_911(1);
	func_805(iVar0, "PED_GUARD_UPSTAIRS", &(Local_62.f_390[1]), cVar1, 1);
}

bool func_1214(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 1024))
	{
		return true;
	}
	if (func_548(*iParam0, 1435919172, 0))
	{
		return false;
	}
	if (!func_74(Global_35, Local_62.f_1290))
	{
		return false;
	}
	func_1656(*iParam0, Global_35, -1);
	func_772(&(iParam0->f_9), 1024);
	return true;
}

bool func_1215(int* iParam0, bool bParam1)
{
	iVar0 = 0;
	if (is_ped_shooting(Global_35))
	{
		iVar0 = 1;
	}
	if (func_74(Global_35, &(Local_62.f_1247[7])))
	{
		iVar0 = 1;
	}
	if (func_74(Global_35, &(Local_62.f_1247[8])))
	{
		func_517(256);
		iVar0 = 1;
	}
	if (func_308(*iParam0, 0, &(iParam0->f_89), &iVar1, 0, 0))
	{
		if ((((iVar1 == 2 || iVar1 == 8) || iVar1 == 4) || iVar1 == 1) || (bParam1 && iVar1 == 8192))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		func_302(0);
		if (!func_113(&(Local_62.f_1216[1]), "react_calm", "SCENE_RHDGUN_HOLDUP"))
		{
			func_1220(*iParam0, 0);
		}
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return true;
	}
	return false;
}

void func_1216(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 1024))
	{
		return;
	}
	if (func_544(iParam0) && !func_280(&(Local_62.f_1216[1]), "SCENE_SDNGUN_GUARD_UPSTAIRS", 0.985f))
	{
		return;
	}
	_0x923583741dc87bce(*iParam0, "arthur_healthy");
	_0x89f5e7adecccb49c(*iParam0, "Brave");
	func_772(&(iParam0->f_9), 1024);
}

bool func_1217(int iParam0)
{
	get_current_ped_weapon(iParam0, &iVar0, true, 0, false);
	if (iVar0 == -1569615261)
	{
		return true;
	}
	return false;
}

void func_1218(int* iParam0)
{
	func_713(*iParam0, Global_36, 3, 1, 3);
	set_current_ped_weapon(*iParam0, 379542007, false, 0, false, false);
	open_sequence_task(&iVar0);
	_task_start_scenario_in_place(0, -1755170815, -1, true, 0, -1f, false);
	func_547(*iParam0, &iVar0, 2f, 2f, 1, 1);
}

bool func_1219(int* iParam0)
{
	if (func_221(4096))
	{
		return true;
	}
	if (_0x3ab6c7b0bb0df4b1(*iParam0, -1))
	{
		return false;
	}
	if (!func_276(&(iParam0->f_120), 1f, 0, "guardUpstairs.timerGenericA"))
	{
		return false;
	}
	get_current_ped_weapon(*iParam0, &iVar0, true, 0, true);
	if (iVar0 == -1569615261)
	{
		_give_weapon_to_ped_2(*iParam0, 379542007, -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		set_current_ped_weapon(*iParam0, 379542007, false, 0, false, false);
		return false;
	}
	if (func_519(Global_35, *iParam0, 1, 1) < 1.5f)
	{
		task_confront(*iParam0, Global_35, 2);
	}
	else
	{
		open_sequence_task(&iVar1);
		task_swap_weapon(0, 1, 0, 0, 0);
		task_aim_gun_at_entity(0, Global_35, -1, 0, 1);
		func_547(*iParam0, &iVar1, 0, 0, 1, 1);
	}
	func_307(&(iParam0->f_120));
	func_224(4096);
	return true;
}

void func_1220(int iParam0, int iParam1)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	if (func_120(256))
	{
	}
	task_combat_ped(0, Global_35, iParam1, 0);
	func_547(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_1221(int* iParam0)
{
	if (!func_353(3f, 1, 0, 0))
	{
		return false;
	}
	switch (iLocal_28)
	{
		case 0:
			func_281(&(Local_62.f_1518), "PRNBG_GU_WRN1", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(1);
			break;
		case 1:
			func_281(&(Local_62.f_1518), "PRNBG_GU_WRN2", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(2);
			break;
		case 2:
			func_281(&(Local_62.f_1518), "PRNBG_GU_WRN3", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(6);
			return true;
	}
	return false;
}

void func_1222(int* iParam0)
{
	if (func_120(128))
	{
		return;
	}
	if (func_812(&(Local_62.f_1216[1]), "SCENE_SDNGUN_GUARD_UPSTAIRS", "PBL_react_calm_guard"))
	{
		if (func_544(iParam0))
		{
			if (!func_280(&(Local_62.f_1216[1]), "SCENE_SDNGUN_GUARD_UPSTAIRS", 0.313f))
			{
				return;
			}
		}
	}
	if (!func_1657(*iParam0, 0))
	{
		iVar0 = 0;
		func_1220(*iParam0, iVar0);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	}
	func_517(128);
}

void func_1223()
{
	if (func_221(8192))
	{
		return;
	}
	func_277(&(Local_62.f_1216[2]), "BOOL_STOP_TABLE_IDLE", 1, "SCENE_SDNGUN_GAMBLER_GROUP");
	func_319(Local_62.f_390[2], 273, 0);
	func_319(Local_62.f_390[3], 273, 0);
	func_319(Local_62.f_390[4], 273, 0);
	func_224(8192);
}

bool func_1224(int* iParam0, int* iParam1, int* iParam2)
{
	if ((func_1658(iParam0, Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER", "HIDDENPED_SDNGUN_GAMBLER_OWNER") && func_1658(iParam1, Local_62.f_1216[4], "SCENE_SDNGUN_GAMBLER_MIDDLE", "HIDDENPED_SDNGUN_GAMBLER_MIDDLE")) && func_1658(iParam2, Local_62.f_1216[5], "SCENE_SDNGUN_GAMBLER_WUSS", "HIDDENPED_SDNGUN_GAMBLER_WUSS"))
	{
		return true;
	}
	return false;
}

void func_1225(int* iParam0, int* iParam1, char[4] cParam2, var uParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	func_278(iParam4, sParam5, sParam6, 1);
	func_277(iParam4, sParam7, 1, sParam6);
	func_281(&(Local_62.f_1518), cParam2, *iParam0, *iParam1, 0, 0, 1, 1);
	func_297(*iParam0, *iParam1, uParam3, iParam9, vLocal_59, 1, 0);
	if (iParam8 != 262144)
	{
		func_224(iParam8);
	}
}

void func_1226(int* iParam0, int* iParam1)
{
	if (iLocal_28 == 6)
	{
		return;
	}
	if (!func_74(Global_35, Local_62.f_1290))
	{
		return;
	}
	fVar0 = 8f;
	if (iLocal_28 == 0)
	{
		fVar0 = 3f;
	}
	if (!func_276(Local_62.f_1392[4], fVar0, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			func_1651("SR_NG_O_ROBTABLE", 7500, 0, 0, -1, -1, 0);
			func_68(2717.586f, -1286.138f, 60.15688f, Local_62.f_1482[1], 408396114, 0, 0, 0);
			set_blip_name_from_text_file(&(Local_62.f_1482[1]), "SR_SD_BLIP_MONEY");
			func_307(Local_62.f_1392[4]);
			func_1652(1);
			break;
		case 1:
			if (!func_559(&(Local_62.f_1216[3]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_OWNER", 0))
			{
				return;
			}
			func_1225(iParam0, &Global_35, "PRNBH_IG5_STAL2", &(iParam0->f_64), &(Local_62.f_1216[3]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(&(Local_62.f_1216[5]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS");
			func_307(Local_62.f_1392[4]);
			func_1652(2);
			break;
		case 2:
			if (!func_559(&(Local_62.f_1216[5]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS", 0))
			{
				return;
			}
			func_1225(iParam1, &Global_35, "PRNBH_IG5_OFFER", &(iParam1->f_64), &(Local_62.f_1216[5]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_553(&(Local_62.f_1216[5]), "PBL_line_01", "SCENE_SDNGUN_GAMBLER_WUSS");
			func_307(Local_62.f_1392[4]);
			func_1652(3);
			break;
		case 3:
			if (!func_559(&(Local_62.f_1216[5]), "PBL_line_02", "SCENE_SDNGUN_GAMBLER_WUSS", 0))
			{
				return;
			}
			func_1225(iParam1, &Global_35, "PRNBH_IG5_STAL3", &(iParam1->f_64), &(Local_62.f_1216[5]), "PBL_line_02", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_307(Local_62.f_1392[4]);
			func_1652(6);
			break;
		case 6:
			break;
	}
}

void func_1227(int* iParam0, var uParam1, int* iParam2, var uParam3, int* iParam4, var uParam5)
{
	func_1659(iParam0, uParam1, "SSG_AILOG1_G0", "SSG_JILOG1_G0", "SSG_AILOG1_A0", "SSG_JILOG1_A0");
	func_1659(iParam2, uParam3, "SSG_AILOG2_G0", "SSG_JILOG2_G0", "SSG_AILOG2_A0", "SSG_JILOG2_A0");
	func_1659(iParam4, uParam5, "SSG_AILOG3_G0", "SSG_JILOG3_G0", "SSG_AILOG3_A0", "SSG_JILOG3_A0");
}

void func_1228(int* iParam0, int* iParam1, int* iParam2)
{
	func_924(iParam0);
	func_924(iParam1);
	func_924(iParam2);
}

void func_1229(int* iParam0, var uParam1, int* iParam2, var uParam3, int* iParam4, var uParam5)
{
	func_1660(iParam0, uParam1, "PRNBG_AILO_QG1", "PRNBG_JILO_QG1", "PRNBG_AILO_TG1", "PRNBG_JILO_TG1");
	func_1660(iParam2, uParam3, "PRNBG_AILO_QG2", "PRNBG_JILO_QG2", "PRNBG_AILO_TG2", "PRNBG_JILO_TG2");
	func_1660(iParam4, uParam5, "PRNBG_AILO_QG3", "PRNBG_JILO_QG3", "PRNBG_AILO_TG3", "PRNBG_JILO_TG3");
}

bool func_1230(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!func_119(&(iParam0->f_9), 1) && !func_119(&(iParam1->f_9), 1)) && !func_119(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

void func_1231()
{
	func_928(&(Local_62.f_1216[3]), "PED_GAMBLER_OWNER", &(Local_62.f_390[2]), "SCENE_SDNGUN_GAMBLER_OWNER", 1, 0);
	func_928(&(Local_62.f_1216[4]), "PED_GAMBLER_MIDDLE", &(Local_62.f_390[3]), "SCENE_SDNGUN_GAMBLER_MIDDLE", 1, 0);
	func_928(&(Local_62.f_1216[5]), "PED_GAMBLER_WUSS", &(Local_62.f_390[4]), "SCENE_SDNGUN_GAMBLER_WUSS", 1, 0);
}

void func_1232()
{
	func_1661();
	func_535(&(Local_62.f_1216[2]), "SCENE_SDNGUN_GAMBLER_GROUP");
}

bool func_1233(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!func_119(&(iParam0->f_9), 1) && !func_119(&(iParam1->f_9), 1)) && func_119(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1234(int* iParam0, int* iParam1, int* iParam2)
{
	if ((!func_119(&(iParam0->f_9), 1) && func_119(&(iParam1->f_9), 1)) && !func_119(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1235(int* iParam0, int* iParam1, int* iParam2)
{
	if ((func_119(&(iParam0->f_9), 1) && !func_119(&(iParam1->f_9), 1)) && !func_119(&(iParam2->f_9), 1))
	{
		return true;
	}
	return false;
}

bool func_1236(int* iParam0, int* iParam1, int iParam2, char* sParam3)
{
	if (func_221(268435456))
	{
		return false;
	}
	if (func_812(iParam2, "PBL_open_safe_A", sParam3))
	{
		bVar0 = true;
	}
	else if (func_812(iParam2, "PBL_open_safe_B", sParam3))
	{
		bVar1 = true;
	}
	else if (func_812(iParam2, "PBL_open_safe_C", sParam3))
	{
		bVar2 = true;
	}
	if ((!bVar0 && !bVar1) && !bVar2)
	{
		return false;
	}
	if (func_1243(&(iParam0->f_9), Local_62.f_1475[1], 0) && bVar1)
	{
		func_943("PRNBH_IG6_KILL2", 0);
		return true;
	}
	if (func_1243(&(iParam1->f_9), Local_62.f_1475[2], 0) && bVar2)
	{
		func_943("PRNBH_IG6_KILL3", 0);
		return true;
	}
	return false;
}

bool func_1237(int iParam0, char* sParam1, float fParam2)
{
	if (func_812(iParam0, sParam1, "PBL_open_safe_A"))
	{
		*fParam2 = 0.876f;
		return true;
	}
	else if (func_812(iParam0, sParam1, "PBL_open_safe_B"))
	{
		*fParam2 = 0.874f;
		return true;
	}
	else if (func_812(iParam0, sParam1, "PBL_open_safe_C"))
	{
		*fParam2 = 0.737f;
		return true;
	}
	else if (func_812(iParam0, sParam1, "PBL_open_safe_D"))
	{
		*fParam2 = 1f;
		return true;
	}
	else if (func_812(iParam0, sParam1, "PBL_open_safe_E"))
	{
		*fParam2 = 0.718f;
		return true;
	}
	return false;
}

char* func_1238()
{
	return "LevDes_NBX_GunSafe";
}

void func_1239(int iParam0)
{
	if (!_does_scenario_point_exist(&(Local_62.f_1512[4])))
	{
		Local_62.f_1512[4] = _find_closest_active_scenario_point_of_type(func_926(), func_1662(), 2f, 0, false);
		return;
	}
}

bool func_1240(int* iParam0, int* iParam1, int* iParam2)
{
	if ((func_1663(iParam0, Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER") && func_1663(iParam1, Local_62.f_1216[4], "SCENE_SDNGUN_GAMBLER_MIDDLE")) && func_1663(iParam2, Local_62.f_1216[5], "SCENE_SDNGUN_GAMBLER_WUSS"))
	{
		return true;
	}
	return false;
}

void func_1241(int* iParam0, int* iParam1, int* iParam2)
{
	if (func_74(Global_35, &(Local_62.f_1247[9])))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[12])))
	{
		if (!func_221(134217728))
		{
			func_1664(iParam0, 10f, 10f, Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER", "PBL_relaxed_idle_pos_01", "PBL_exit_pos_01", "BOOL_STOP_COWER_IDLE_POS_01", 16384, 0.8607f);
		}
		else
		{
			func_1664(iParam0, 10f, 10f, Local_62.f_1216[3], "SCENE_SDNGUN_GAMBLER_OWNER", "PBL_relaxed_idle_pos_02", "PBL_exit_pos_02", "BOOL_STOP_COWER_IDLE_POS_02", 32768, 0.87f);
		}
	}
	if (func_74(Global_35, &(Local_62.f_1247[10])))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[11])))
	{
		func_1664(iParam1, 12f, 10f, Local_62.f_1216[4], "SCENE_SDNGUN_GAMBLER_MIDDLE", "PBL_relaxed_idle", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 65536, 0.955f);
	}
	func_1664(iParam2, 20f, 12f, Local_62.f_1216[5], "SCENE_SDNGUN_GAMBLER_WUSS", "PBL_relaxed_idle", "PBL_EXIT", "BOOL_STOP_COWER_IDLE", 131072, 0.8664f);
}

void func_1242()
{
	func_1665(Local_62.f_390[2], "PRNBG_G1_SHOTN1");
	func_1665(Local_62.f_390[3], "PRNBG_G2_SHOTN1");
	func_1665(Local_62.f_390[4], "PRNBG_G3_SHOTN1");
}

bool func_1243(var uParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam2;
	if (!func_119(uParam0, 16384))
	{
		return false;
	}
	return true;
}

bool func_1244()
{
	if (!_is_ped_using_scenario_hash(Global_35, 248339202))
	{
		return false;
	}
	if (!func_120(16384))
	{
		func_412();
		func_517(16384);
		func_61(Local_62.f_1482[2]);
		func_1666();
		func_254();
	}
	return true;
}

bool func_1245()
{
	if (func_120(65536))
	{
		return false;
	}
	if (!func_579(Global_35, "ObjectExchange"))
	{
		return false;
	}
	func_1348(func_1667(332299623, 0, -1), 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_517(65536);
	return true;
}

void func_1246(int* iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5)
{
	if (func_119(&(iParam0->f_9), 1))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 8388608))
	{
		if (func_559(*uParam1, sParam3, sParam2, 0))
		{
			func_278(*uParam1, sParam3, sParam2, 1);
			func_277(*uParam1, sParam4, 1, sParam2);
			func_772(&(iParam0->f_9), 8388608);
		}
	}
	else if (!func_119(&(iParam0->f_9), 4194304))
	{
		if (func_812(*uParam1, sParam2, sParam3))
		{
			if (func_280(*uParam1, sParam2, fParam5))
			{
				if (!is_entity_dead(*iParam0))
				{
					_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
				}
				func_546(*uParam1, sParam2);
				func_772(&(iParam0->f_9), 4194304);
			}
		}
		else if (!func_544(iParam0))
		{
			if (!is_entity_dead(*iParam0))
			{
				_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
			}
			func_546(*uParam1, sParam2);
			func_772(&(iParam0->f_9), 4194304);
		}
	}
}

void func_1247()
{
	if (!does_blip_exist(&(Local_62.f_1482[0])))
	{
		return;
	}
	if (func_584(Global_35, get_hash_key(func_1668())) || has_ped_got_weapon(Global_35, -1471716628, 0, false))
	{
		func_1669(-1471716628);
		func_61(Local_62.f_1482[0]);
	}
}

void func_1248(int* iParam0, int* iParam1)
{
	if (!func_44(1) && !func_221(32))
	{
		if (is_entity_on_fire(*iParam0))
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
			func_928(&(Local_62.f_1216[3]), "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
			func_928(&(Local_62.f_1216[1]), "pedGunsmith", *iParam0, "SCENE_RHDGUN_HOLDUP", 1, 0);
			func_224(32);
		}
	}
	if (!func_119(&(iParam1->f_9), 1) && !func_119(&(iParam1->f_9), 131072))
	{
		if (is_entity_on_fire(*iParam1))
		{
			set_blocking_of_non_temporary_events(*iParam1, false);
			func_928(&(Local_62.f_1216[2]), "pedCaptive", *iParam1, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1, 0);
			func_772(&(iParam1->f_9), 131072);
		}
	}
}

void func_1249()
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (func_55(134217728))
	{
		return;
	}
	if (func_74(Global_35, &(Local_62.f_1247[8])) || func_74(Global_35, &(Local_62.f_1247[7])))
	{
		func_592(Local_62.f_170, "PRRGS_STAIRS", 0);
	}
	else
	{
		func_140(0, 0);
		func_126(&(Local_62.f_1247[11]));
		func_126(&(Local_62.f_1247[12]));
	}
}

void func_1250(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!func_44(8388608))
	{
		if (_is_ped_hogtied(*iParam0) || _is_ped_lassoed(*iParam0))
		{
			func_140(1, 0);
			func_126(&(Local_62.f_1247[11]));
			func_126(&(Local_62.f_1247[12]));
			func_91(8388608);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_1670(iParam0->f_85[0], 0);
			func_1670(iParam0->f_85[1], 0);
		}
	}
	else if (!func_44(268435456) || !func_548(*iParam0, 1435919172, 0))
	{
		if ((!_is_ped_hogtied(*iParam0) && !_is_ped_lassoed(*iParam0)) && !is_ped_ragdoll(*iParam0))
		{
			func_1324(iParam0, 0, 0);
		}
	}
}

void func_1251(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 2048))
	{
		if (_is_ped_hogtied(*iParam0) || _is_ped_lassoed(*iParam0))
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
			func_772(&(iParam0->f_9), 2048);
		}
	}
	else if (!func_119(&(iParam0->f_9), 4194304) || !func_548(*iParam0, 1435919172, 0))
	{
		if ((!_is_ped_hogtied(*iParam0) && !_is_ped_lassoed(*iParam0)) && !is_ped_ragdoll(*iParam0))
		{
			func_1321(iParam0);
		}
	}
	if (func_605("SRGH_REAATTK"))
	{
		if (_is_ped_hogtied(*iParam0) || _is_ped_lassoed(*iParam0))
		{
			func_532("SRGH_REAATTK", 0);
		}
	}
}

void func_1252(int* iParam0, int* iParam1, var uParam2, int iParam3)
{
	if (func_435(44))
	{
		return;
	}
	switch (uParam2->f_8)
	{
		case 0:
			if (!Local_62.f_1247[8]->f_1)
			{
				return;
			}
			func_524(2, iParam3);
			break;
		case 2:
			if (!func_119(&(iParam1->f_9), 1) && !func_221(16777216))
			{
				return;
			}
			func_524(3, iParam3);
			break;
		case 3:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!func_276(Local_62.f_1392[18], 15f, 0, "TIMER_RHDGUN_CREATE_WITNESS"))
			{
				return;
			}
			func_524(4, iParam3);
			break;
		case 4:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!func_885(uParam2, iParam3))
			{
				return;
			}
			open_sequence_task(&iVar0);
			task_follow_nav_mesh_to_coord(0, 1323.764f, -1321.145f, 76.88058f, 1f, -1, 0.25f, 0, -178.27f);
			task_turn_ped_to_face_entity(0, Global_35, 0, 3f, 0.25f, -1082130432);
			func_547(*uParam2, &iVar0, 0, 0, 1, 1);
			func_524(5, iParam3);
			break;
		case 5:
			if (!func_1671(Global_35))
			{
				return;
			}
			if (!func_74(*uParam2, Local_62.f_1284))
			{
				return;
			}
			func_421(1);
			_0x710448d44a64c213(1);
			set_ped_config_flag(*uParam2, 146, false);
			set_ped_config_flag(*uParam2, 148, false);
			_0xd7494ded50c6ef52(player_id(), -1547772340, 2);
			_0xc6c4e15cf7d52fea(*uParam2, 1000f);
			_0x10827b5a0aac56a7(player_id(), -1547772340, *uParam2);
			_0xf0b67bad53c35bd9(*uParam2, Global_35, *uParam2, Global_36, -1547772340);
			func_524(6, iParam3);
			break;
		case 6:
			if (func_74(Global_35, &(Local_62.f_1247[7])) || func_74(Global_35, &(Local_62.f_1247[8])))
			{
				return;
			}
			if (!func_56(Global_35, 0))
			{
				return;
			}
			if (!func_543(*uParam2, Global_35, 0, 8f, 0))
			{
				return;
			}
			set_blocking_of_non_temporary_events(*uParam2, false);
			set_ped_config_flag(*uParam2, 146, false);
			set_ped_config_flag(*uParam2, 190, true);
			task_turn_ped_to_face_entity(*uParam2, Global_35, 0, -1082130432, -1082130432, -1082130432);
			func_297(*uParam2, Global_35, &(uParam2->f_38), 5000, vLocal_59, 1, 0);
			func_524(7, iParam3);
			break;
		case 7:
			func_421(1);
			_0xedfc6c1fd1c964f5(player_id(), -1547772340, 0, 0, 0, 0, 0, 0, 0);
			_0xd7494ded50c6ef52(player_id(), -1547772340, 1);
			_0xc6c4e15cf7d52fea(*uParam2, 1000f);
			_0x10827b5a0aac56a7(player_id(), -1547772340, *uParam2);
			func_524(19, iParam3);
			break;
		case 19:
			break;
	}
}

void func_1253()
{
	if (func_74(Global_35, &(Local_62.f_1247[8])) && func_221(16384))
	{
		bVar0 = true;
	}
	else if (func_74(Global_35, &(Local_62.f_1247[10])))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, -1242632265, false);
		disable_control_action(0, 578288361, false);
	}
	else
	{
		enable_control_action(0, -1292666904, true);
		enable_control_action(0, -1242632265, true);
		enable_control_action(0, 578288361, true);
	}
}

void func_1254(int* iParam0)
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_221(16777216))
	{
		func_61(&(iParam0->f_1));
		return;
	}
	fVar0 = func_519(Global_35, *iParam0, 1, 1);
	if (!func_119(&(iParam0->f_9), -2147483648))
	{
		if (fVar0 > 30f)
		{
			func_61(&(iParam0->f_1));
			func_772(&(iParam0->f_9), -2147483648);
		}
	}
	else if (fVar0 < 25f)
	{
		func_660(*iParam0, &(iParam0->f_1), -89429847, 580546400, 0, 0);
		set_blip_name_from_text_file(iParam0->f_1, "SR_RG_BLIP_CAPTIVE1");
		func_870(&(iParam0->f_9), -2147483648);
	}
}

void func_1255(int* iParam0)
{
	if (func_221(4096))
	{
		return;
	}
	if (!func_99(256))
	{
		return;
	}
	func_593(*iParam0, 1);
	func_1672(iParam0, Local_62.f_1226[2], &(Local_62.f_1215));
	func_224(4096);
	_0xae6004120c18df97(*iParam0, 0, 0);
}

void func_1256(int* iParam0)
{
	if (!func_221(4096))
	{
		return;
	}
	if (func_221(4194304))
	{
		return;
	}
	if (((!func_579(*iParam0, "CaptiveUpFromBed") && !func_583(*iParam0, func_1290(), "afraid_loop_a_captive")) && !func_583(*iParam0, func_1290(), "afraid_loop_b_captive")) && !func_583(*iParam0, "script_proc@robberies@shop@rhodes@gunsmith@inside_downstairs", "afraid_loop_victim"))
	{
		return;
	}
	_0x522fa3f490e2f7ac(Local_62.f_1215, 1, 1);
	func_224(4194304);
}

bool func_1257(int* iParam0, int* iParam1)
{
	if (!func_221(4096))
	{
		return false;
	}
	if (func_221(16777216))
	{
		return false;
	}
	if (does_rope_exist(Local_62.f_1215))
	{
		return false;
	}
	func_302(0);
	_play_sound_from_position("RHODES_SHACKLE_BULLET", 1322.188f, -1319.516f, 74.04163f, "PRRGS_Sounds", false, 0, false, 0);
	func_61(&(iParam1->f_1));
	func_224(16777216);
	func_34(Local_62, 4096);
	_0xae6004120c18df97(*iParam1, 0, 1);
	func_553(&(Local_62.f_1216[2]), "PBL_captor_shot_02", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1203(&(iParam1->f_89), iVar0);
	func_1203(&(iParam0->f_14), iVar0);
	func_317(&(iParam0->f_214));
	func_587(Local_62.f_1247[9], 1324.447f, -1324.27f, 74.87282f, 0f, 0f, 4.138497f, 1.968806f, 3.670543f, 1.865833f, "VOL_RHDGUN_BETWEEN_SPEECH_SPEAKERS");
	return true;
}

void func_1258(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		func_945(uParam1, 1, 0);
		func_649(uParam0, 2);
		func_649(uParam0, 4);
		func_649(uParam0, 8);
	}
	else
	{
		func_945(uParam1, 0, 0);
		func_1673(uParam0, 2);
		func_1673(uParam0, 4);
		func_1673(uParam0, 8);
	}
}

void func_1259(int* iParam0)
{
	if (func_221(65536))
	{
		func_278(&(Local_62.f_1216[3]), "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
		if (func_113(&(Local_62.f_1216[2]), "cower_loop_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
		{
			func_278(&(Local_62.f_1216[2]), "PBL_shoot_chains_standing_cower", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
			func_277(&(Local_62.f_1216[2]), "BOOL_cower_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
		}
		else
		{
			func_278(&(Local_62.f_1216[2]), "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
		}
		func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
		func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	else
	{
		func_278(&(Local_62.f_1216[3]), "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
		func_278(&(Local_62.f_1216[2]), "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
		func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
		func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	func_1674();
	func_281(&(Local_62.f_1518), "SRGKIGP3f", *iParam0, Global_35, 0, 0, 1, 0);
	func_297(Local_62.f_170, *iParam0, &(Local_62.f_170.f_42), 10000, vLocal_59, 0, 0);
	func_1274(1);
}

void func_1260()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[4])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[4];
	cVar1 = func_810(4);
	func_805(iVar0, "pedCaptive", &(Local_62.f_390[0]), cVar1, 1);
	func_277(iVar0, "bStopBedLoop", 0, cVar1);
	func_277(iVar0, "bStopAfraidLoop", 0, cVar1);
}

void func_1261(int iParam0)
{
	if (!func_221(1073741824))
	{
		return;
	}
	if (func_44(1) || _is_ped_hogtied(iParam0))
	{
		bVar0 = true;
	}
	else
	{
		if (!func_276(Local_62.f_1392[13], 5f, 0, "TIMER_RHDGUN_CHECK_SHACKLES_CAN_BREAK_AFTER_ATTACK"))
		{
			return;
		}
		if (!is_ped_in_combat(iParam0, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	if (does_rope_exist(Local_62.f_1215))
	{
		_0x522fa3f490e2f7ac(Local_62.f_1215, 1, 1);
		func_418(1073741824);
	}
}

bool func_1262(int* iParam0)
{
	if (func_221(16777216))
	{
		return false;
	}
	if (func_221(131072))
	{
		return false;
	}
	if (!func_221(16384))
	{
		return false;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[8])) && func_221(8192))
	{
		if (func_276(Local_62.f_1392[7], 2f, 1, "TIMER_RHDGUN_CAPTIVE_SITS_AGAIN_AFTER_PLAYER_LEAVE"))
		{
			func_302(0);
			func_281(&(Local_62.f_1518), "PRRGS_LEAVE_B", *iParam0, Global_35, 0, 0, 1, 1);
			func_224(1048576);
			bVar0 = true;
		}
	}
	else
	{
		func_307(Local_62.f_1392[7]);
	}
	if (func_221(32768))
	{
		if (func_276(Local_62.f_1392[4], 5f, 1, "TIMER_RHDGUN_PLAYER_DOES_NOTHING_AFTER_PLEAS"))
		{
			bVar0 = true;
		}
	}
	if (func_1322())
	{
		func_517(16);
	}
	if (func_120(16))
	{
		if (!func_1675())
		{
			func_224(524288);
			func_1119(0);
			func_281(&(Local_62.f_1518), "PRRGS_STEALB1", *iParam0, Global_35, 0, 0, 1, 1);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_1676();
		func_224(131072);
		return true;
	}
	return false;
}

bool func_1263()
{
	if (func_221(262144))
	{
		return false;
	}
	if (func_221(65536))
	{
		return false;
	}
	if (!func_221(1048576))
	{
		return false;
	}
	if (func_74(Global_35, &(Local_62.f_1247[8])))
	{
		if (func_276(Local_62.f_1392[8], 2f, 1, "TIMER_RHDGUN_CAPTIVE_STANDS_UP_AFTER_PLAYER_RETURN"))
		{
			func_1677();
			func_224(262144);
			return true;
		}
	}
	else
	{
		func_307(Local_62.f_1392[8]);
	}
	return false;
}

void func_1264(int* iParam0, int iParam1)
{
	if (func_119(&(Local_62.f_390[0]->f_9), 1))
	{
		return;
	}
	if (!func_221(16384))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	if (!func_1678(32) && !func_1678(64))
	{
		if (iParam1 == 8 && Global_1935630->f_44 != 2055893578)
		{
			if (func_621(Local_62.f_1392[15]))
			{
				if (!func_620(Local_62.f_1392[15], 3f))
				{
					return;
				}
			}
			func_307(Local_62.f_1392[15]);
			func_1679(32);
		}
		else if (iParam1 == 4)
		{
			if (func_621(Local_62.f_1392[16]))
			{
				if (!func_620(Local_62.f_1392[16], 1.5f))
				{
					return;
				}
			}
			func_307(Local_62.f_1392[16]);
			func_1679(64);
		}
		else
		{
			return;
		}
	}
	if (!func_335(67108864))
	{
		func_1680();
		func_281(&(Local_62.f_1518), "SRGK_AIMDOWN1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(67108864);
	}
	if (func_1678(32))
	{
		func_1681(iParam0, iParam1);
	}
	else if (func_1678(64))
	{
		func_1682(iParam0);
	}
}

void func_1265(int* iParam0, int iParam1)
{
	if (!func_221(16384))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(8192))
	{
		return;
	}
	if (_0x1ecc76792f661cf5("SRGKHESIT2"))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 262144))
	{
		if (iParam1 != 8 && iParam1 != 4)
		{
			return;
		}
		if (Global_1935630->f_44 == 2055893578)
		{
			return;
		}
		if (func_621(Local_62.f_1392[17]))
		{
			if (!func_620(Local_62.f_1392[17], 3f))
			{
				return;
			}
		}
	}
	func_772(&(iParam0->f_9), 262144);
	if (!func_335(33554432))
	{
		func_1683();
		func_281(&(Local_62.f_1518), "SRGH_AIMDOWN1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(33554432);
	}
	iVar0 = &Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	switch (iParam0->f_11)
	{
		case 0:
			if (func_221(65536))
			{
				if (!func_559(iVar0, "PBL_react_to_gunfire_a", sVar1, 0))
				{
					return;
				}
				func_1684();
				func_278(iVar0, "PBL_react_to_gunfire_a", sVar1, 1);
				func_553(iVar0, "PBL_cower_flinch_a", sVar1);
				func_553(iVar0, "PBL_cower_to_afraid_a", sVar1);
				func_277(iVar0, "BOOL_afraid_loop_a", 1, sVar1);
				func_277(iVar0, "BOOL_cower_loop_a", 0, sVar1);
				func_1685(1, &(iParam0->f_11), "CAPTIVE");
			}
			else
			{
				if (!func_559(iVar0, "PBL_react_to_gunfire_b", sVar1, 0))
				{
					return;
				}
				func_1684();
				func_278(iVar0, "PBL_react_to_gunfire_b", sVar1, 1);
				func_553(iVar0, "PBL_cower_flinch_b", sVar1);
				func_553(iVar0, "PBL_cower_to_afraid_b", sVar1);
				func_277(iVar0, "BOOL_afraid_loop_b", 1, sVar1);
				func_277(iVar0, "BOOL_cower_loop_b", 0, sVar1);
				func_1685(1, &(iParam0->f_11), "CAPTIVE");
			}
			break;
		case 1:
			if (func_221(65536))
			{
				if (!func_583(*iParam0, func_1290(), "cower_loop_a_captive"))
				{
					return;
				}
				if (func_276(Local_62.f_1392[9], 6f, 0, "TIMER_RHDGUN_CAPTIVE_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
				{
					func_278(iVar0, "PBL_cower_to_afraid_a", sVar1, 1);
					func_277(iVar0, "BOOL_afraid_loop_a", 0, sVar1);
					func_277(iVar0, "BOOL_cower_loop_a", 1, sVar1);
					func_1685(2, &(iParam0->f_11), "CAPTIVE");
				}
				else if (!func_221(2097152))
				{
					if (func_1686(*iParam0, &(iParam0->f_89)))
					{
						func_307(Local_62.f_1392[9]);
						func_278(iVar0, "PBL_cower_flinch_a", sVar1, 1);
						func_224(2097152);
					}
				}
			}
			else
			{
				if (!func_583(*iParam0, func_1290(), "cower_loop_b_captive"))
				{
					return;
				}
				if (func_276(Local_62.f_1392[9], 6f, 0, "TIMER_RHDGUN_CAPTIVE_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
				{
					func_278(iVar0, "PBL_cower_to_afraid_b", sVar1, 1);
					func_277(iVar0, "BOOL_afraid_loop_b", 0, sVar1);
					func_277(iVar0, "BOOL_cower_loop_b", 1, sVar1);
					func_1685(2, &(iParam0->f_11), "CAPTIVE");
				}
				else if (!func_221(2097152))
				{
					if (func_1686(*iParam0, &(iParam0->f_89)))
					{
						func_307(Local_62.f_1392[9]);
						func_278(iVar0, "PBL_cower_flinch_b", sVar1, 1);
						func_224(2097152);
					}
				}
			}
			break;
		case 2:
			if (func_221(65536))
			{
				if (!func_1687())
				{
					return;
				}
				func_1685(3, &(iParam0->f_11), "CAPTIVE");
			}
			else
			{
				if (!func_1688())
				{
					return;
				}
				func_1685(3, &(iParam0->f_11), "CAPTIVE");
			}
			break;
		case 3:
			func_870(&(iParam0->f_9), 262144);
			func_317(Local_62.f_1392[17]);
			func_553(iVar0, "PBL_cower_flinch_a", sVar1);
			func_553(iVar0, "PBL_cower_to_afraid_a", sVar1);
			func_553(iVar0, "PBL_cower_flinch_b", sVar1);
			func_553(iVar0, "PBL_cower_to_afraid_b", sVar1);
			func_1301();
			func_1685(0, &(iParam0->f_11), "CAPTIVE");
			break;
	}
}

void func_1266(int* iParam0, int* iParam1)
{
	if (!func_1322())
	{
		return;
	}
	if (!func_353(-3f, 1, 0, 0))
	{
		return;
	}
	if ((func_113(&(Local_62.f_1216[3]), "Speech", "SCENE_RHDGUN_BASEMENT_GUNSMITH") || func_113(&(Local_62.f_1216[3]), "shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH")) || func_113(&(Local_62.f_1216[3]), "shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return;
	}
	if (func_119(&(iParam1->f_9), 1) || !func_74(*iParam1, Local_62.f_1290))
	{
		if (func_44(2097152))
		{
			return;
		}
		if (func_335(16))
		{
			return;
		}
		func_281(&(Local_62.f_1518), "SRGK_STEAL_2", *iParam0, Global_35, 0, 0, 1, 1);
		func_91(2097152);
	}
	else
	{
		if (!func_221(16384))
		{
			return;
		}
		if (!func_44(2097152))
		{
			if (!is_entity_dead(*iParam0))
			{
				func_281(&(Local_62.f_1518), "SRGK_STEAL_1", *iParam0, Global_35, 0, 0, 1, 1);
				func_91(2097152);
			}
		}
		if (!func_119(&(iParam1->f_9), 524288))
		{
			if (is_entity_dead(*iParam0))
			{
				func_281(&(Local_62.f_1518), "SRGH_STEAL_1", *iParam1, Global_35, 0, 0, 1, 1);
				func_772(&(iParam1->f_9), 524288);
			}
		}
	}
}

void func_1267(int iParam0, char* sParam1)
{
	fVar0 = 1f;
	if (func_1689(iParam0, sParam1))
	{
		fVar0 = 0.5f;
	}
	if ((_does_anim_scene_exist(iParam0) && _is_anim_scene_started(iParam0, false)) && _get_anim_scene_rate(iParam0) != fVar0)
	{
		set_anim_scene_rate(iParam0, fVar0);
	}
}

bool func_1268(int* iParam0, int* iParam1, int iParam2, char* sParam3)
{
	if (func_119(&(iParam0->f_9), 1))
	{
		return false;
	}
	if (!is_entity_dead(*iParam0))
	{
		return false;
	}
	if (is_entity_dead(*iParam1))
	{
		return false;
	}
	func_126(&(Local_62.f_1247[14]));
	func_546(&(Local_62.f_1216[2]), "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1690(*iParam0, &(iParam0->f_117), "Captive");
	func_1289();
	func_535(iParam2, sParam3);
	func_1274(0);
	func_772(&(iParam0->f_9), 1);
	return true;
}

bool func_1269(int* iParam0)
{
	if (!func_583(*iParam0, func_1290(), "speech_captive"))
	{
		return false;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[9])))
	{
		func_307(Local_62.f_1392[11]);
		return false;
	}
	if (!func_276(Local_62.f_1392[11], 3f, 1, "TIMER_RHDGUN_PLAYER_IN_WAY_OF_SPEECH"))
	{
		return false;
	}
	func_1321(iParam0);
	func_546(&(Local_62.f_1216[2]), "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_126(&(Local_62.f_1247[9]));
	return true;
}

void func_1270(int* iParam0, int* iParam1, int iParam2, int iParam3)
{
	if (!func_221(16384))
	{
		return;
	}
	func_1691(*iParam0, &(iParam0->f_85), &(iParam0->f_13), iParam2);
	func_1692(*iParam1, &(iParam1->f_30), &(iParam1->f_10), iParam3);
}

void func_1271(int* iParam0, int* iParam1)
{
	if (func_221(2048))
	{
		return;
	}
	if (Local_62.f_1247[8]->f_1)
	{
		return;
	}
	if (!func_221(1024))
	{
		return;
	}
	if (func_54(*iParam0, 1323.024f, -1324.815f, 73.94163f, 1) > 3.43f)
	{
		return;
	}
	if (!func_145(*iParam0, 0, 1))
	{
		func_281(&(Local_62.f_1518), "PRRGS_STAIRSDIE", *iParam1, Global_35, 0, 0, 1, 1);
		func_224(2048);
	}
}

bool func_1272(int* iParam0, int* iParam1)
{
	if (func_44(1))
	{
		return false;
	}
	if (!is_entity_dead(*iParam0))
	{
		return false;
	}
	if (is_entity_dead(*iParam1))
	{
		return false;
	}
	func_546(&(Local_62.f_1216[3]), "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1690(*iParam0, &(iParam0->f_210), "Gunsmith");
	func_126(&(Local_62.f_1247[13]));
	if (func_550(&(Local_62.f_1216[2]), "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		func_553(&(Local_62.f_1216[2]), "PBL_react_to_gunfire_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
		func_553(&(Local_62.f_1216[2]), "PBL_cower_to_afraid_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	}
	func_1274(0);
	func_91(1);
	return true;
}

void func_1273(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	delete_object(&iParam0);
}

void func_1274(bool bParam0)
{
	if (bParam0)
	{
		Local_62.f_1247[15] = _0x0eb78c2b156635b1(665633627, 1324.354f, -1324.107f, 74.83517f, 0f, 0f, 4.721779f, 0.652349f, 0.72217f, 0.912012f);
		Local_62.f_1247[16] = _0x0eb78c2b156635b1(665633627, 1324.724f, -1323.136f, 74.92301f, 0f, 0f, -15.92929f, 1.390828f, 1.667549f, 1.001023f);
	}
	else
	{
		func_126(&(Local_62.f_1247[15]));
		func_126(&(Local_62.f_1247[16]));
	}
}

bool func_1275(int* iParam0, int* iParam1)
{
	if (!is_entity_dead(*iParam0) || !is_entity_dead(*iParam1))
	{
		return false;
	}
	func_772(&(iParam1->f_9), 1);
	func_91(1);
	func_126(&(Local_62.f_1247[14]));
	func_126(&(Local_62.f_1247[11]));
	func_126(&(Local_62.f_1247[12]));
	func_254();
	func_928(&(Local_62.f_1216[2]), "pedCaptive", *iParam1, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1, 0);
	func_928(&(Local_62.f_1216[4]), "pedCaptive", *iParam1, "SCENE_RHDGUN_VICTIM_ALONE", 1, 0);
	func_928(&(Local_62.f_1216[3]), "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
	func_140(1, 0);
	return true;
}

void func_1276(int iParam0, int iParam1)
{
	if (!func_221(8388608))
	{
		return;
	}
	if (func_221(67108864))
	{
		return;
	}
	if (func_44(268435456))
	{
		return;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 4194304))
	{
		return;
	}
	if (!func_335(134217728))
	{
		if (_0x1ecc76792f661cf5("SRGKIGP3g"))
		{
			return;
		}
		if ((func_1671(Global_35) || func_74(Global_35, &(Local_62.f_1247[7]))) || func_74(Global_35, &(Local_62.f_1247[8])))
		{
			func_281(&(Local_62.f_1518), "PRRGS_MISSHIM", iParam0, iParam1, 0, 0, 1, 1);
		}
		func_533(134217728);
	}
	else if (!func_335(268435456))
	{
		if (_0x1ecc76792f661cf5("PRRGS_MISSHIM"))
		{
			return;
		}
		if ((func_1671(Global_35) || func_74(Global_35, &(Local_62.f_1247[7]))) || func_74(Global_35, &(Local_62.f_1247[8])))
		{
			func_281(&(Local_62.f_1518), "SRGKIGP3h", iParam1, iParam0, 0, 0, 1, 1);
		}
		func_533(268435456);
	}
}

void func_1277(int iParam0)
{
	if (func_335(536870912))
	{
		return;
	}
	if (!func_221(8388608))
	{
		return;
	}
	if (func_74(Global_35, &(Local_62.f_1247[8])) || func_74(Global_35, &(Local_62.f_1247[7])))
	{
		return;
	}
	func_596(&iParam0, "PRRGS_A_DONE", "PRRGS_J_DONE", 1);
	func_533(536870912);
}

void func_1278(int* iParam0)
{
	if ((Local_62.f_1620 % 30) != 0)
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (func_519(Global_35, *iParam0, 1, 1) < 2.3f)
	{
		func_297(*iParam0, Global_35, &(iParam0->f_64), -1, vLocal_59, 1, 0);
	}
}

void func_1279(int* iParam0)
{
	if (func_44(1))
	{
		return;
	}
	if ((Local_62.f_1620 % 15) != 0)
	{
		return;
	}
	if (func_44(268435456))
	{
		return;
	}
	if (func_221(16777216))
	{
		return;
	}
	if (!func_221(16384))
	{
		return;
	}
	if (func_812(&(Local_62.f_1216[3]), "PBL_enter_intimidation", "SCENE_RHDGUN_BASEMENT_GUNSMITH") || iLocal_46 != 61)
	{
		return;
	}
	if (func_335(16777216))
	{
		if (func_276(Local_62.f_1392[14], 5f, 0, "TIMER_RHDGUN_GUNSMITH_AMBUSH_FROM_LOITER"))
		{
			bVar0 = true;
		}
	}
	if (!is_ped_facing_ped(Global_35, *iParam0, 90f))
	{
		if (func_276(Local_62.f_1392[0], 17f, 0, "TIMER_RHDGUN_FREE_PASSER_N_CLERK_AMBUSH"))
		{
			bVar0 = true;
		}
	}
	else
	{
		func_307(Local_62.f_1392[0]);
	}
	if (!bVar0)
	{
		return;
	}
	func_307(Local_62.f_1392[0]);
	func_536(*iParam0, -618550132, 1, 0);
	func_1324(iParam0, 0, 0);
}

bool func_1280()
{
	if (func_62(16777216))
	{
		return false;
	}
	if ((Local_62.f_1620 % 10) != 0)
	{
		return false;
	}
	if (!func_62(8388608))
	{
		return false;
	}
	if (func_65())
	{
		return false;
	}
	func_39(16777216);
	return true;
}

void func_1281()
{
	if (func_579(&(Local_62.f_390[0]), "stand"))
	{
		func_224(65536);
	}
	else if (func_579(&(Local_62.f_390[0]), "sit"))
	{
		func_418(65536);
	}
}

bool func_1282(int iParam0)
{
	if (!func_1131(iParam0))
	{
		return false;
	}
	func_546(&(Local_62.f_1216[3]), "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_796(3, func_810(3), 0, "PBL_afraid_loop_a");
	func_91(33554432);
	return true;
}

void func_1283()
{
	func_1693();
	func_1684();
}

void func_1284()
{
	func_553(&(Local_62.f_1216[3]), "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[2]), "PBL_shoot_chains_standing", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_553(&(Local_62.f_1216[2]), "PBL_shoot_chains_standing_cower", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1285(int iParam0)
{
	iLocal_48 = iParam0;
}

Vector3 func_1286()
{
	return 1321.206f, -1322.903f, 74.742f;
}

void func_1287(var uParam0, vector3 vParam1, int iParam4)
{
	if (has_ped_got_weapon(Global_35, iParam4, 0, false))
	{
		return;
	}
	if (does_blip_exist(*uParam0))
	{
		return;
	}
	*uParam0 = _blip_add_for_coord(-1383961727, vParam1);
}

Vector3 func_1288()
{
	return 1324.2f, -1322.66f, 74.94f;
}

void func_1289()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[3])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[3];
	cVar1 = func_810(3);
	func_805(iVar0, "pedGunsmith", Local_62.f_170, cVar1, 1);
	func_805(iVar0, "pedCaptive", &(Local_62.f_390[0]), cVar1, 1);
	func_806(iVar0, "objPhoto", &(Local_62.f_1226[1]), cVar1, 1);
	func_277(iVar0, "BOOL_wait_loop", 0, cVar1);
	func_277(iVar0, "BOOL_afraid_loop_a", 0, cVar1);
	func_277(iVar0, "BOOL_afraid_loop_b", 0, cVar1);
	func_277(iVar0, "BOOL_cry_loop", 0, cVar1);
	func_277(iVar0, "BOOL_cry_loop_captive_dead", 0, cVar1);
}

char* func_1290()
{
	return "script_proc@robberies@shop@rhodes@gunsmith@inside_basement_reshoot";
}

void func_1291(int* iParam0, char* sParam1)
{
	if (func_1029(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_1455(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_1032(iParam0, 1);
}

void func_1292()
{
	func_277(&(Local_62.f_1216[3]), "BOOL_wait_loop", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[2]), "BOOL_wait_loop", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1293(char[4] cParam0)
{
	if (!func_1694())
	{
		return false;
	}
	if (!func_559(&(Local_62.f_1216[3]), cParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
	{
		return false;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1294()
{
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a_reset", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1695();
}

bool func_1295()
{
	if (func_113(&(Local_62.f_1216[3]), "afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

bool func_1296(char[4] cParam0, bool bParam1)
{
	if (!func_1696())
	{
		if (!bParam1)
		{
			return false;
		}
		if (!func_1300())
		{
			return false;
		}
	}
	if (!func_559(&(Local_62.f_1216[2]), cParam0, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1297(int iParam0)
{
	func_307(Local_62.f_1392[12]);
	Local_62.f_1473[0] = iParam0;
}

void func_1298()
{
	func_278(&(Local_62.f_1216[3]), "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a_reset", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

void func_1299()
{
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a_reset", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1697();
}

bool func_1300()
{
	if (func_113(&(Local_62.f_1216[2]), "afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1301()
{
	func_278(&(Local_62.f_1216[2]), "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a_reset", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1302()
{
	if (func_145(Local_62.f_170, 0, 1))
	{
		if (!func_559(&(Local_62.f_1216[3]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
		{
			return false;
		}
	}
	if (!func_559(&(Local_62.f_1216[2]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	return true;
}

bool func_1303()
{
	if (func_65())
	{
		return false;
	}
	if (func_221(16777216))
	{
		return false;
	}
	func_39(33554432);
	return true;
}

void func_1304()
{
	func_278(&(Local_62.f_1216[3]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_278(&(Local_62.f_1216[2]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_a", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1305()
{
	func_553(&(Local_62.f_1216[3]), "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[2]), "PBL_shoot_chains_sitting", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

char* func_1306()
{
	return "afraid_loop_b_captor";
}

char* func_1307()
{
	return "afraid_loop_b_captive";
}

bool func_1308(char[4] cParam0)
{
	if (!func_1698())
	{
		return false;
	}
	if (!func_559(&(Local_62.f_1216[2]), cParam0, "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return false;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 262144))
	{
		return false;
	}
	if (func_1678(32) || func_1678(64))
	{
		return false;
	}
	return true;
}

void func_1309()
{
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b_reset", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_1699();
}

bool func_1310()
{
	if (func_113(&(Local_62.f_1216[2]), "afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1311()
{
	func_278(&(Local_62.f_1216[2]), "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b", 0, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b_reset", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1312(char[4] cParam0)
{
	if (!func_1700())
	{
		return false;
	}
	if (!func_559(&(Local_62.f_1216[3]), cParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0))
	{
		return false;
	}
	return true;
}

void func_1313()
{
	func_277(&(Local_62.f_1216[3]), "BOOL_bars_loop", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[3]), "BOOL_bars_loop_reset", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_1701();
}

void func_1314(int* iParam0, int* iParam1)
{
	if (!func_74(Global_35, &(Local_62.f_1247[8])))
	{
		return;
	}
	if (!func_353(0, 1, 0, 0))
	{
		return;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 262144))
	{
		return;
	}
	if (func_1678(32) || func_1678(64))
	{
		return;
	}
	switch (iLocal_48)
	{
		case 10:
			func_1285(11);
			break;
		case 11:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT1", 5f, &(iParam0->f_42), 6000))
			{
				return;
			}
			func_1285(12);
			break;
		case 12:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT2", 5f, &(iParam0->f_42), 4000))
			{
				return;
			}
			func_1285(13);
			break;
		case 13:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT1", 5f, &(iParam1->f_64), 8000))
			{
				return;
			}
			func_1285(14);
			break;
		case 14:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT2", 5f, &(iParam1->f_64), 7000))
			{
				return;
			}
			func_1285(15);
			break;
		case 15:
			if (!func_1702(*iParam0, "PRRGS_G_LOIT3", 5f, &(iParam0->f_42), 8000))
			{
				return;
			}
			func_1285(16);
			break;
		case 16:
			if (!func_1702(*iParam1, "PRRGS_C_LOIT3", 3f, &(iParam1->f_64), 8000))
			{
				return;
			}
			func_533(16777216);
			func_1285(20);
			break;
		case 20:
			break;
	}
}

bool func_1315()
{
	if (func_113(&(Local_62.f_1216[3]), "afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1316()
{
	func_278(&(Local_62.f_1216[3]), "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_b", 0, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_b_reset", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1317()
{
	if (func_559(&(Local_62.f_1216[3]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 0) && func_559(&(Local_62.f_1216[2]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 0))
	{
		return true;
	}
	return false;
}

void func_1318()
{
	func_278(&(Local_62.f_1216[3]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	func_278(&(Local_62.f_1216[2]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE", 1);
	func_277(&(Local_62.f_1216[3]), "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_277(&(Local_62.f_1216[2]), "BOOL_afraid_loop_b", 1, "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

char* func_1319()
{
	return "afraid_loop_a_captive";
}

void func_1320(int* iParam0)
{
	if (func_221(536870912))
	{
		return;
	}
	if (func_335(268435456))
	{
		return;
	}
	if (!func_583(*iParam0, func_1290(), "exit_captive"))
	{
		return;
	}
	func_281(&(Local_62.f_1518), "SRGKIGP3h", *iParam0, Local_62.f_170, 0, 0, 1, 1);
	func_224(536870912);
	func_533(268435456);
}

void func_1321(int* iParam0)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	vVar0 = { get_entity_coords(*iParam0, false, false) };
	open_sequence_task(&iVar3);
	if (vVar0.z < 76f && vdist(vVar0, 1328.591f, -1326.324f, 76.8759f) > 1.5f)
	{
		task_follow_nav_mesh_to_coord(0, 1328.591f, -1326.324f, 76.8759f, 2f, 20000, 0.25f, 1, 40000f);
	}
	task_follow_nav_mesh_to_coord(0, 1322.038f, -1324.203f, 76.8871f, 2f, 20000, 0.25f, 1, 40000f);
	task_smart_flee_coord(0, func_1703(), 1000f, -1, false, 1077936128);
	func_547(*iParam0, &iVar3, 0, 0, 1, 1);
	func_943("PRRGS_MISSHIM", 0);
	func_943("SRGKIGP3h", 0);
	func_772(&(iParam0->f_9), 4194304);
}

bool func_1322()
{
	if (_0xd04241bbf6d03a5e(Global_35) != 0)
	{
		return true;
	}
	if (iLocal_29 == 1)
	{
		if (func_584(Global_35, -1944262841))
		{
			return true;
		}
	}
	return false;
}

bool func_1323(int* iParam0)
{
	if (!func_579(*iParam0, "ClerkEndOfSpeech") && !func_583(*iParam0, func_1290(), "cry_loop_captor"))
	{
		return false;
	}
	if (!func_145(*iParam0, 0, 1))
	{
		return false;
	}
	if (!func_353(0f, 1, 0, 0))
	{
		return false;
	}
	func_281(&(Local_62.f_1518), "SRG_CRY", *iParam0, Global_35, 0, 0, 1, 1);
	func_224(134217728);
	return true;
}

void func_1324(int* iParam0, bool bParam1, bool bParam2)
{
	if (func_44(268435456) && func_548(*iParam0, 1435919172, 0))
	{
		return;
	}
	set_ped_combat_attributes(*iParam0, 46, true);
	func_660(*iParam0, &(iParam0->f_1), 831283580, 580546400, 0, 0);
	if (bParam1)
	{
		if (!func_145(&(Local_62.f_390[0]), 0, 1))
		{
			vVar0 = { Local_62.f_390[0]->f_117 };
		}
		else
		{
			vVar0 = { get_entity_coords(&(Local_62.f_390[0]), true, false) };
		}
		func_1327(*iParam0, Local_62.f_1616[1], vVar0, 3000, Global_35);
	}
	else
	{
		if (bParam2)
		{
			set_current_ped_weapon(*iParam0, -618550132, true, 0, false, false);
		}
		task_combat_ped(*iParam0, Global_35, 0, 0);
	}
	_0xfc3db99c8144cd81(*iParam0, &(Local_62.f_1247[8]), 0, 0, 0);
	set_ped_combat_movement(*iParam0, 2);
	if (!func_335(1073741824))
	{
		func_302(0);
		func_281(&(Local_62.f_1518), "SRGK_ATTACK1", *iParam0, Global_35, 0, 0, 1, 1);
		func_533(1073741824);
	}
	func_140(1, 0);
	func_126(&(Local_62.f_1247[11]));
	func_126(&(Local_62.f_1247[12]));
	func_928(&(Local_62.f_1216[3]), "pedGunsmith", *iParam0, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1, 0);
	func_57(268435456);
	if (!func_221(16777216))
	{
		if (does_rope_exist(Local_62.f_1215))
		{
			_0x522fa3f490e2f7ac(Local_62.f_1215, 0, 1);
			func_224(1073741824);
		}
	}
	func_91(268435456);
}

char* func_1325()
{
	return "afraid_loop_a_captor";
}

void func_1326(int* iParam0, int* iParam1, char[4] cParam2)
{
	if (!func_119(&(iParam1->f_9), 1))
	{
		if (!is_string_null_or_empty(cParam2))
		{
			func_281(&(Local_62.f_1518), "PRRGS_IG10", *iParam1, Global_35, 0, 0, 1, 1);
		}
		else
		{
			func_281(&(Local_62.f_1518), "PRRGS_IG10_GUN", *iParam1, Global_35, 0, 0, 1, 1);
			return;
		}
	}
	else
	{
		func_281(&(Local_62.f_1518), "SRGKKILLP", *iParam0, Global_35, 0, 0, 1, 1);
	}
	if (!is_string_null_or_empty(cParam2))
	{
		func_278(&(Local_62.f_1216[3]), cParam2, "SCENE_RHDGUN_BASEMENT_GUNSMITH", 1);
	}
}

void func_1327(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	*uParam1 = add_shocking_event_for_entity(513747494, Global_35, 3f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	open_sequence_task(&iVar0);
	task_shocking_event_react(0, *uParam1, 0);
	task_combat_ped(0, iParam6, 0, 0);
	func_547(iParam0, &iVar0, 0, 0, 1, 1);
	func_91(268435456);
}

bool func_1328(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_784(iParam0, 1, 0, 0) != 2055893578)
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

void func_1329(int* iParam0)
{
	func_307(Local_62.f_1392[0]);
	func_1704(iParam0);
	func_57(262144);
	func_1285(11);
	iLocal_48 = 20;
}

void func_1330(int iParam0)
{
	if (!func_335(8192))
	{
		func_302(0);
		func_754(iParam0, 0);
		func_281(&(Local_62.f_1518), "PRSGS_C_THREAT1", iParam0, Global_35, 0, 0, 1, 1);
		func_533(8192);
	}
	else if (!func_335(16384))
	{
		func_302(0);
		func_754(iParam0, 0);
		func_281(&(Local_62.f_1518), "PRSGS_C_THREAT2", iParam0, Global_35, 0, 0, 1, 1);
		func_533(16384);
	}
}

void func_1331(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (iLocal_48 != 19)
	{
		if (!func_335(65536))
		{
			if (func_1322())
			{
				if (!func_62(67108864))
				{
					func_533(65536);
					func_1285(17);
				}
				else if (!func_62(134217728))
				{
					func_533(65536);
					func_1285(18);
				}
			}
		}
	}
	if (iLocal_46 >= 32)
	{
		if (iLocal_48 != 17 && iLocal_48 != 18)
		{
			return;
		}
	}
	if (!func_276(Local_62.f_1392[0], &(Local_62.f_1473[0]), 0, "TIMER_STRGEN_PLAY_LOITER_DLG"))
	{
		return;
	}
	func_307(Local_62.f_1392[0]);
	switch (iLocal_48)
	{
		case 0:
			if (func_583(Local_62.f_170, func_1138(), "basement_idle_01"))
			{
				if (func_353(5f, 1, 0, 0))
				{
					func_1285(1);
				}
			}
			break;
		case 1:
			if (func_353(5f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_03", "PRSGS_BASE3");
				func_1705(2);
				func_1285(2);
			}
			break;
		case 2:
			if (func_353(10f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_04", "PRSGS_BASE4");
				func_1705(3);
				func_1285(3);
			}
			break;
		case 3:
			if (func_353(10f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_05", "PRSGS_BASE5");
				func_1705(4);
				func_1285(4);
			}
			break;
		case 4:
			if (func_353(10f, 1, 0, 0) && func_74(Global_35, Local_62.f_1290))
			{
				func_1346("BASEMENT_LINE_06", "PRSGS_BASE6");
				func_1705(5);
				func_1285(5);
			}
			break;
		case 5:
			if (func_74(Global_35, Local_62.f_1290) && !func_222(get_player_index(), 1, 0, 1))
			{
				func_1285(6);
			}
			break;
		case 6:
			if ((func_353(-3f, 1, 0, 0) && func_74(Global_35, Local_62.f_1290)) && !func_222(get_player_index(), 1, 0, 1))
			{
				if (!func_158())
				{
					func_281(&(Local_62.f_1518), "PRSGS_OPER", Global_35, Local_62.f_170, 0, 0, 1, 1);
				}
				else
				{
					func_281(&(Local_62.f_1518), "PRSGS_OPERJ", Global_35, Local_62.f_170, 0, 0, 1, 1);
				}
				func_1705(7);
				func_1285(7);
			}
			break;
		case 7:
			if (func_353(-3f, 1, 0, 0) && !func_222(get_player_index(), 1, 0, 1))
			{
				func_1346("BASEMENT_LINE_01", "PRSGS_BASE1");
				func_1705(8);
				func_1285(8);
			}
			break;
		case 8:
			if ((func_353(-3f, 1, 0, 0) && func_74(Global_35, Local_62.f_1290)) && !func_222(get_player_index(), 1, 0, 1))
			{
				func_596(&(Local_62.f_170), "PRSGS_PROF", "PRSGS_PROFJ", 1);
				func_1705(9);
				func_1285(9);
			}
			break;
		case 9:
			if (func_353(-3f, 1, 0, 0) && !func_222(get_player_index(), 1, 0, 1))
			{
				func_1346("BASEMENT_LINE_02", "PRSGS_BASE2");
				func_1705(10);
				func_1285(10);
			}
			break;
		case 10:
			if (func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
			{
				func_1705(11);
				func_1285(11);
			}
			break;
		case 11:
			if (func_1706() == 11)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (func_353(-3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_07", "PRSGS_BASE7");
				func_1705(12);
				func_1285(12);
			}
			break;
		case 12:
			if (func_1706() == 12)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (func_353(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_08", "PRSGS_BASE8");
				func_1705(13);
				func_1285(13);
			}
			break;
		case 13:
			if (func_1706() == 13)
			{
				if (!func_276(&(iParam0->f_214), 10f, 1, "clerkData.timerGeneric"))
				{
					return;
				}
			}
			if (func_353(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_09", "PRSGS_BASE9");
				func_1705(20);
				func_1285(20);
			}
			break;
		case 17:
			if (func_353(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_11", "PRSGS_BASE11");
				func_39(67108864);
				func_1285(19);
			}
			break;
		case 18:
			if (func_353(3f, 1, 0, 0))
			{
				func_1346("BASEMENT_LINE_12", "PRSGS_BASE12");
				func_39(134217728);
				func_1285(19);
			}
			break;
		case 19:
			if (!func_276(Local_62.f_1392[1], 10f, 0, "TIMER_STRGEN_REACT_STEAL_DLG_COOLDOWN"))
			{
				return;
			}
			func_307(Local_62.f_1392[1]);
			if (func_1706() != 20)
			{
				func_1149(65536);
				func_1285(iLocal_49);
			}
			break;
		case 20:
			break;
	}
}

void func_1332(int* iParam0, int iParam1)
{
	if (!func_353(-2.5f, 1, 0, 0))
	{
		if (func_50(&(iParam0->f_13), 8))
		{
			func_739(iParam0->f_85[1], 0, 0);
			func_1673(&(iParam0->f_13), 8);
		}
		return;
	}
	if (!func_50(&(iParam0->f_13), 1024))
	{
		if (!func_50(&(iParam0->f_13), 8))
		{
			func_739(iParam0->f_85[1], 1, 0);
			func_649(&(iParam0->f_13), 8);
		}
		if (iParam1 == 1)
		{
			func_596(iParam0, "PRSGS_A_ILO2_N1", "PRSGS_J_ILO2_N1", 1);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_307(Local_62.f_1392[0]);
			func_649(&(iParam0->f_13), 1024);
		}
	}
	if (!func_276(Local_62.f_1392[0], 20f, 0, "TIMER_STRGEN_PLAY_LOITER_DLG"))
	{
		return;
	}
	func_307(Local_62.f_1392[0]);
	switch (iLocal_48)
	{
		case 11:
			func_281(&(Local_62.f_1518), "PRSGS_C_GETSTH1", *iParam0, Global_35, 0, 0, 1, 1);
			func_1285(12);
			break;
		case 12:
			func_281(&(Local_62.f_1518), "PRSGS_C_GETSTH2", *iParam0, Global_35, 0, 0, 1, 1);
			func_1285(13);
			break;
		case 13:
			func_281(&(Local_62.f_1518), "PRSGS_C_GETSTH3", *iParam0, Global_35, 0, 0, 1, 1);
			func_1285(14);
			break;
		case 14:
			func_281(&(Local_62.f_1518), "PRSGS_C_GETSTH4", *iParam0, Global_35, 0, 0, 1, 1);
			func_1285(20);
			break;
		case 20:
			break;
	}
}

void func_1333(int* iParam0, int iParam1, char* sParam2)
{
	if (func_221(131072))
	{
		return;
	}
	if (!func_221(65536))
	{
		if (func_583(*iParam0, func_1138(), "basement_idle_01"))
		{
			func_224(65536);
		}
		return;
	}
	if (_does_anim_scene_exist(iParam1))
	{
		if (get_anim_scene_bool(iParam1, "COWER_BOOL") == 0)
		{
			return;
		}
	}
	iVar0 = func_1637(*iParam0, Global_35, 1060437492);
	if (func_1350(iParam1, sParam2))
	{
		if (iVar0 == 3 || iVar0 == 1)
		{
			if (!func_559(iParam1, "PB_B2_TRANS_B1", sParam2, 0))
			{
				return;
			}
			func_278(iParam1, "PB_B2_TRANS_B1", sParam2, 1);
			func_277(iParam1, "bStopBasementLoop1", 0, sParam2);
			func_277(iParam1, "bStopBasementLoop2", 1, sParam2);
			func_553(iParam1, "PB_B1_TRANS_B2", sParam2);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
		}
	}
	else if (func_1351(iParam1, sParam2))
	{
		if (iVar0 == 2)
		{
			if (!func_559(iParam1, "PB_B1_TRANS_B2", sParam2, 0))
			{
				return;
			}
			func_278(iParam1, "PB_B1_TRANS_B2", sParam2, 1);
			func_277(iParam1, "bStopBasementLoop1", 1, sParam2);
			func_277(iParam1, "bStopBasementLoop2", 0, sParam2);
			func_553(iParam1, "PB_B2_TRANS_B1", sParam2);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
		}
	}
}

void func_1334(int* iParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_113(iParam1, "BasementIdle1", sParam2) && !func_113(iParam1, "BasementIdle2", sParam2))
	{
		return;
	}
	if (func_812(iParam1, sParam2, func_1707()))
	{
		func_278(iParam1, func_1708(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (func_812(iParam1, sParam2, func_1709()))
	{
		func_278(iParam1, func_1708(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (func_812(iParam1, sParam2, func_1710()))
	{
		func_278(iParam1, func_1711(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	else if (func_812(iParam1, sParam2, func_1712()))
	{
		func_278(iParam1, func_1711(), sParam2, 1);
		func_1340(iParam1, sParam2);
		return;
	}
	if (func_621(Local_62.f_1392[2]))
	{
		if (!func_276(Local_62.f_1392[2], 5f, 0, "TIMER_STRGEN_FLINCH_COWER_COOLDOWN"))
		{
			return;
		}
		else
		{
			func_307(Local_62.f_1392[2]);
		}
	}
	if (iParam3 != 256 && iParam3 != 4)
	{
		return;
	}
	iVar0 = func_1637(*iParam0, Global_35, 1f);
	if (func_113(iParam1, "BasementIdle1", sParam2))
	{
		if (iVar0 == 2)
		{
			func_278(iParam1, func_1707(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			func_317(Local_62.f_1392[2]);
		}
		else if (iVar0 == 3)
		{
			func_278(iParam1, func_1709(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			func_317(Local_62.f_1392[2]);
		}
	}
	else if (func_113(iParam1, "BasementIdle2", sParam2))
	{
		if (iVar0 == 2)
		{
			func_278(iParam1, func_1710(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			func_317(Local_62.f_1392[2]);
		}
		else if (iVar0 == 3)
		{
			func_278(iParam1, func_1712(), sParam2, 1);
			func_1330(*iParam0);
			func_1713(iParam1, sParam2);
			func_317(Local_62.f_1392[2]);
		}
	}
}

void func_1335(int* iParam0)
{
	if (func_335(1024))
	{
		return;
	}
	if (!func_221(65536))
	{
		return;
	}
	if (!func_353(-3.5f, 1, 0, 0))
	{
		return;
	}
	if (func_519(Global_35, *iParam0, 1, 1) > 2f)
	{
		return;
	}
	if (func_621(&uLocal_1779) && func_1714(&uLocal_1779) < 7.5f)
	{
		return;
	}
	if (_0x29fce825613fefca(*iParam0, 2000))
	{
		return;
	}
	switch (iVar1775)
	{
		case 0:
			func_281(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 3, 0, 1, 1);
			uLocal_1778 = iVar1775 + 1;
			if (!func_621(&uLocal_1779))
			{
				func_619(&uLocal_1779, 0);
			}
			break;
		case 1:
			func_281(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 2, 0, 1, 1);
			uLocal_1778 = iVar1775 + 1;
			func_317(&uLocal_1779);
			break;
		case 2:
			func_281(&(Local_62.f_1518), "PRSGS_C_CLOSE1", *iParam0, Global_35, 1, 0, 1, 1);
			uLocal_1778 = iVar1775 + 1;
			func_533(1024);
			break;
	}
}

void func_1336(int* iParam0)
{
	if (func_335(4096))
	{
		return;
	}
	if (_0x29fce825613fefca(*iParam0, 1000))
	{
		if (!is_any_speech_playing(*iParam0))
		{
			func_302(0);
			func_281(&(Local_62.f_1518), "PRSGS_C_PUSH", *iParam0, Global_35, 0, 0, 1, 1);
			func_533(4096);
			func_126(bVar1767);
		}
	}
}

void func_1337(int* iParam0, int iParam1)
{
	if ((Local_62.f_1620 % 10) != 0)
	{
		return;
	}
	if (func_335(32768))
	{
		return;
	}
	if (!_is_ped_hogtied(*iParam0))
	{
		return;
	}
	if (iParam1 != 8)
	{
		return;
	}
	get_current_ped_weapon(Global_35, &iVar0, true, 0, false);
	if (!_0x705be297eebdb95d(iVar0))
	{
		return;
	}
	func_281(&(Local_62.f_1518), "PRSGS_C_TIEDAIM", *iParam0, Global_35, 0, 0, 1, 1);
	func_533(32768);
}

void func_1338(int* iParam0, int iParam1, char* sParam2)
{
	if (func_221(2097152))
	{
		if (!func_221(4194304))
		{
			if (_0x57779b55b83e2bea(*iParam0))
			{
				_0xa180fbd502a03125(*iParam0, 2.75f, 1.75f);
				func_224(4194304);
			}
		}
		return;
	}
	if (!func_279(iParam1, "bStopCryLoop", sParam2))
	{
		return;
	}
	if (!_has_ped_emotional_preset_loaded(Local_62.f_1, "intimidated_on_ass"))
	{
		_0xf7ea250b9a919e03(1215332025, *iParam0);
	}
	if (func_812(iParam1, sParam2, "pbToKnees"))
	{
		if (!func_280(iParam1, sParam2, 0.989f))
		{
			return;
		}
	}
	else if (func_812(iParam1, sParam2, "pbToKnees02"))
	{
		if (!func_280(iParam1, sParam2, 0.992f))
		{
			return;
		}
	}
	_0x935cf6e42baf7f4d(*iParam0);
	_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 1, 0, 0, 0);
	_0x41d1331afad5a091(*iParam0, 1, 0);
	_0xaab050da48b57978(*iParam0, "TaskIntimidated_OnAss", Global_35, -1, 4);
	_0x2208438012482a1a(*iParam0, true, false);
	set_ped_keep_task(*iParam0, true);
	func_224(2097152);
}

void func_1339()
{
	if (func_74(Global_35, Local_62.f_1290))
	{
		if (!func_221(32768))
		{
			if (iVar1772 == 0)
			{
				func_137(0, 1);
			}
			func_224(32768);
		}
	}
	else if (func_221(32768))
	{
		func_137(1, 1);
		func_418(32768);
	}
}

void func_1340(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1707(), sParam1);
	func_553(iParam0, func_1709(), sParam1);
	func_553(iParam0, func_1710(), sParam1);
	func_553(iParam0, func_1712(), sParam1);
	func_553(iParam0, func_1715(), sParam1);
	func_553(iParam0, func_1716(), sParam1);
	func_553(iParam0, func_1717(), sParam1);
	func_553(iParam0, func_1718(), sParam1);
}

void func_1341(int* iParam0, char* sParam1, int iParam2)
{
	func_739(iParam0, 1, 0);
	if (!func_1029(iParam0->f_6))
	{
		return;
	}
	else
	{
		func_1455(iParam0->f_6, sParam1, 1);
	}
}

void func_1342(int iParam0)
{
	if (!func_353(14f, 1, 0, 0))
	{
		return;
	}
	switch (iLocal_47)
	{
		case 0:
			func_281(&(Local_62.f_1518), "PRSGS_WAITLADR1", iParam0, Global_35, 0, 0, 1, 1);
			func_1368(1);
			break;
		case 1:
			func_281(&(Local_62.f_1518), "PRSGS_WAITLADR2", iParam0, Global_35, 0, 0, 1, 1);
			func_1368(2);
			break;
		case 2:
			func_281(&(Local_62.f_1518), "PRSGS_WAITLADR3", iParam0, Global_35, 0, 0, 1, 1);
			func_1368(3);
			break;
	}
}

Vector3 func_1343()
{
	return -1791.48f, -388.46f, 157.11f;
}

float func_1344()
{
	return -160.89f;
}

float func_1345(int iParam0, char* sParam1, char* sParam2)
{
	if (is_entity_dead(iParam0))
	{
		return -0.1f;
	}
	if (!is_entity_playing_anim(iParam0, sParam1, sParam2, 1))
	{
		return -0.1f;
	}
	return _get_entity_anim_current_time(iParam0, sParam1, sParam2);
}

void func_1346(char* sParam0, char[4] cParam1)
{
	if (is_entity_dead(Local_62.f_170))
	{
		return;
	}
	func_281(&(Local_62.f_1518), cParam1, Local_62.f_170, Global_35, 0, 0, 1, 1);
	if (!_is_ped_hogtied(Local_62.f_170) && !_is_ped_lassoed(Local_62.f_170))
	{
		task_play_anim(Local_62.f_170, func_1138(), sParam0, 4f, 4f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
}

void func_1347(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(3);
	}
	else
	{
		func_251(3);
	}
	func_29(64);
}

void func_1348(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1719(iParam0, sParam4, iParam5);
	}
	func_1720(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1349(int* iParam0, var uParam1)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	switch (iLocal_51)
	{
		case 0:
			if (func_50(&(iParam0->f_13), 2048))
			{
				return;
			}
			if (!func_353(-2.5f, 1, 0, 0))
			{
				if (func_50(&(iParam0->f_13), 8))
				{
					func_739(iParam0->f_85[1], 0, 0);
					func_1673(&(iParam0->f_13), 8);
				}
				return;
			}
			if (!func_50(&(iParam0->f_13), 8))
			{
				func_739(iParam0->f_85[1], 1, 0);
				func_649(&(iParam0->f_13), 8);
			}
			if (*uParam1 != 1)
			{
				return;
			}
			func_596(iParam0, "PRSGS_PLYR1", "PRSGS_PLYR1J", 1);
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
			func_307(Local_62.f_1392[0]);
			func_649(&(iParam0->f_13), 2048);
			func_1721(1);
			break;
		case 1:
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			func_1346("basement_line_15", "PRSGS_BASE15");
			func_1721(2);
			break;
		case 2:
			if (!func_353(-3f, 1, 0, 0))
			{
				return;
			}
			func_596(iParam0, "PRSGS_PLYR2", "PRSGS_PLYR2J", 1);
			func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), -1, vLocal_59, 1, 0);
			func_1721(7);
			break;
	}
}

bool func_1350(int iParam0, char* sParam1)
{
	if (func_113(iParam0, "BasementIdle2", sParam1))
	{
		return true;
	}
	return false;
}

bool func_1351(int iParam0, char* sParam1)
{
	if (!func_113(iParam0, "BasementIdle1", sParam1))
	{
		return false;
	}
	return true;
}

void func_1352(int iParam0, int iParam1, int iParam2)
{
	func_1722(Local_62.f_390[0], iParam0, 0);
	func_1722(Local_62.f_390[1], iParam1, 1);
	func_1722(Local_62.f_390[2], iParam2, 2);
}

void func_1353()
{
	if (!func_119(&(Local_62.f_390[0]->f_9), 33554432))
	{
		if (_does_anim_scene_exist(&(Local_62.f_1216[5])))
		{
			if (_is_anim_scene_started(&(Local_62.f_1216[5]), false))
			{
				if (is_ped_ragdoll(&(Local_62.f_390[0])))
				{
					_delete_anim_scene(&(Local_62.f_1216[5]));
					func_772(&(Local_62.f_390[0]->f_9), 33554432);
				}
			}
		}
	}
}

void func_1354()
{
	if (!func_145(&(Local_62.f_390[0]), 0, 1))
	{
		func_1723(Local_62.f_390[1], *Local_62.f_1297[2], 0.5f, 1);
	}
	else
	{
		func_1723(Local_62.f_390[0], *Local_62.f_1297[2], 0f, 0);
	}
	func_1723(Local_62.f_390[2], *Local_62.f_1297[1], 2f, 2);
}

void func_1355()
{
	if (func_119(&(Local_62.f_390[2]->f_9), 1073741824))
	{
		return;
	}
	if (!func_119(&(Local_62.f_390[2]->f_9), 33554432))
	{
		return;
	}
	if (func_145(&(Local_62.f_390[2]), 0, 1))
	{
		get_current_ped_weapon(&(Local_62.f_390[2]), &iVar0, true, 0, false);
		if (iVar0 != -594562071)
		{
			func_772(&(Local_62.f_390[2]->f_9), 1073741824);
		}
	}
	else
	{
		func_772(&(Local_62.f_390[2]->f_9), 1073741824);
	}
}

void func_1356()
{
	if (!func_221(134217728))
	{
		if (iLocal_46 > 2)
		{
			if (func_65() && (func_74(Global_35, Local_62.f_1290) || func_74(Global_35, Local_62.f_1292)))
			{
				if (is_ped_shooting(Global_35) || func_1724())
				{
					func_890(Local_62.f_1355[5], &(Local_62.f_1355[5]->f_1), -279.0437f, 786.0427f, 122.6199f, 0f, 0f, -90.53087f, 3.413217f, 10.78276f, 2.667443f, 1, 0, 1, 0, 0);
					func_790(&(Local_62.f_1355[5]), 0);
					func_224(134217728);
					func_224(268435456);
					Local_62.f_1616[1] = add_shocking_event_at_position(513747494, -283.5968f, 800.7466f, 118.372f, 0f, 21f, 21f, -1f, -1f, -1, -1);
				}
			}
		}
	}
	if (func_221(268435456))
	{
		if (func_1643(3))
		{
			func_1725();
			func_619(&uLocal_1785, 0);
			func_49(&(Local_62.f_1148[0]), 1, "VALLAW1", 0, "");
			func_418(268435456);
			func_224(536870912);
		}
	}
	if (func_657(&uLocal_1785, 6f))
	{
		func_1726(3);
	}
}

void func_1357()
{
	if (func_221(33554432))
	{
		return;
	}
	if (!func_221(4194304))
	{
		if (!_is_ped_using_scenario_hash(Global_35, func_1727()))
		{
			return;
		}
		else
		{
			func_224(4194304);
		}
		return;
	}
	else
	{
		if (!_is_ped_using_scenario_hash(Global_35, func_1727()))
		{
			func_418(4194304);
			func_224(33554432);
			return;
		}
		if (func_579(Global_35, "StartGrab"))
		{
			func_224(8388608);
		}
		if (!func_221(16777216))
		{
			if (func_579(Global_35, "ObjectExchange"))
			{
				func_1728(1);
				func_224(16777216);
			}
		}
	}
}

void func_1358()
{
	if (!func_74(Global_35, Local_62.f_1290))
	{
		return;
	}
	_get_projectile_near_ped(Global_35, -1504859554, 10f, &uVar0, &iVar3, 0, 1);
	if (!does_entity_exist(iVar3))
	{
		return;
	}
	fVar4 = 2f;
	_0x74c9080fdd1bb48f(iVar3, fVar4);
	_0x74c2365fdd1bb48f(iVar3, 1);
}

bool func_1359(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_62.f_390)
	{
		if (func_145(&(Local_62.f_390[iVar0]), 0, 1))
		{
			if (iParam0 == -1 || iParam0 != iVar0)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1360(var uParam0, var uParam1, int* iParam2, int* iParam3, int iParam4)
{
	if (func_335(16384))
	{
		if (func_353(-4f, 1, 0, 0))
		{
			if (!is_entity_dead(*uParam0))
			{
				if (func_797(0))
				{
					func_245(*uParam0, Global_35, "TAUNT_GEN_MALE", 0, -1082130432, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_245(*uParam0, Global_35, "GANG_TAUNT_GEN", 0, -1082130432, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!is_entity_dead(*uParam1))
			{
				func_245(*uParam1, Global_35, "GENERIC_SHOCKED_MED", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (!is_entity_dead(*iParam2))
			{
				func_245(*iParam2, Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_1149(16384);
		}
		return;
	}
	if (!func_1729(3))
	{
		return;
	}
	if (iLocal_51 < 4)
	{
		if (*iParam4)
		{
			func_1721(4);
		}
	}
	switch (iLocal_51)
	{
		case 0:
			if (!func_353(10f, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDO1CMB", *uParam0, Global_35, 0, 0, 1, 1);
			func_1721(1);
			break;
		case 1:
			if (!func_353(10f, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDO2CMB", *uParam1, Global_35, 0, 0, 1, 1);
			func_1721(2);
			break;
		case 2:
			if (!func_353(10f, 1, 0, 0))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDO3CMB", *iParam2, Global_35, 0, 0, 1, 1);
			func_1721(3);
			break;
		case 3:
			break;
		case 4:
			if (!func_1730(-2f))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDWBEG1", *iParam3, Global_35, 0, 0, 1, 1);
			func_1721(5);
			break;
		case 5:
			if (!func_1730(1084227584))
			{
				return;
			}
			func_281(&(Local_62.f_1518), "SRVDWBEG2", *iParam3, Global_35, 0, 0, 1, 1);
			func_1721(6);
			break;
		case 6:
			if (!func_1730(1084227584))
			{
				return;
			}
			if (_0x705be297eebdb95d(Global_1935630->f_44))
			{
				func_281(&(Local_62.f_1518), "SRVDWBEG3", *iParam3, Global_35, 0, 0, 1, 1);
			}
			func_1721(7);
			break;
		case 7:
			break;
	}
}

void func_1361(int* iParam0, int* iParam1, int* iParam2, int iParam3)
{
	if (!func_1729(3))
	{
		return;
	}
	if (iLocal_51 < 4)
	{
		if (*iParam3)
		{
			return;
		}
	}
	func_1731(iParam0);
	func_1731(iParam1);
	func_1731(iParam2);
}

void func_1362(int iParam0, float fParam1, int iParam2)
{
	func_426(iParam0, 0, fParam1, 1, 1, 0, 0, 0);
}

void func_1363()
{
	if (func_44(134217728))
	{
		return;
	}
	if (!func_145(Local_62.f_170, 0, 1))
	{
		return;
	}
	if (!func_1732())
	{
		return;
	}
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, -282.9875f, 802.5005f, 118.3846f, 2f, 20000, 0.25f, 0, 40000f);
	task_follow_nav_mesh_to_coord(0, -298.8157f, 795.3381f, 117.5196f, 2f, 20000, 0.25f, 0, 40000f);
	task_smart_flee_ped(0, Global_35, 500f, -1, 0, 3f, 0);
	func_547(Local_62.f_170, &iVar0, 0, 0, 1, 1);
	func_928(&(Local_62.f_1216[4]), "pedDoctor", Local_62.f_170, "SCENE_VALDOC_HOLDUPBACKROOM", 1, 0);
	func_91(134217728);
	set_ped_keep_task(Local_62.f_170, true);
}

void func_1364()
{
	if (func_44(134217728) || get_anim_scene_bool(&(Local_62.f_1216[4]), "bDoctorFlee"))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[17])))
	{
		return;
	}
	if (func_113(&(Local_62.f_1216[4]), "cower_enter", "SCENE_VALDOC_HOLDUPBACKROOM"))
	{
		open_sequence_task(&iVar0);
		task_follow_nav_mesh_to_coord(0, -282.9875f, 802.5005f, 118.3846f, 2f, 20000, 0.25f, 0, 40000f);
		task_follow_nav_mesh_to_coord(0, -298.8157f, 795.3381f, 117.5196f, 2f, 20000, 0.25f, 0, 40000f);
		task_smart_flee_ped(0, Global_35, 500f, -1, 0, 3f, 0);
		func_547(Local_62.f_170, &iVar0, 0, 0, 1, 1);
		func_928(&(Local_62.f_1216[4]), "pedDoctor", Local_62.f_170, "SCENE_VALDOC_HOLDUPBACKROOM", 1, 0);
		func_91(134217728);
		set_ped_keep_task(Local_62.f_170, true);
		func_91(134217728);
	}
	else if (func_113(&(Local_62.f_1216[4]), "COWER_LOOP", "SCENE_VALDOC_HOLDUPBACKROOM"))
	{
		func_277(&(Local_62.f_1216[4]), "bDoctorFlee", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
	}
}

void func_1365()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[3])))
	{
		return;
	}
	if (_does_anim_scene_exist(&(Local_62.f_1216[0])))
	{
		_delete_anim_scene(&(Local_62.f_1216[0]));
	}
	if (func_145(&(Local_62.f_390[2]), 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[3]), "pedMoney", &(Local_62.f_390[2]), 0);
	}
	set_anim_scene_bool(&(Local_62.f_1216[3]), "bActionBreakoutBed", false, false);
}

void func_1366()
{
	func_277(&(Local_62.f_1216[4]), "bDoctorFlee", 1, "SCENE_VALDOC_HOLDUPBACKROOM");
}

bool func_1367()
{
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (func_119(&(Local_62.f_390[iVar0]->f_9), 8192))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1368(int iParam0)
{
	iLocal_47 = iParam0;
}

bool func_1369()
{
	if ((func_74(Local_62.f_170, Local_62.f_1292) && !func_74(Global_35, Local_62.f_1292)) && !func_74(Global_35, Local_62.f_1290))
	{
		return true;
	}
	return false;
}

void func_1370()
{
	if (!func_145(Local_62.f_170, 0, 1))
	{
		return;
	}
	func_302(0);
	func_281(&(Local_62.f_1518), "SRVDDWARN", Local_62.f_170, Global_35, 0, 0, 1, 1);
	clear_ped_tasks(Local_62.f_170, 1, 0);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, -285.317f, 817.5923f, 118.3859f, 2f, 20000, 0.25f, 0, 40000f);
	task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
	task_cower(0, -1, 0, 0);
	func_547(Local_62.f_170, &iVar0, 0, 0, 1, 1);
	func_224(524288);
}

void func_1371(int* iParam0, int* iParam1, int* iParam2, int* iParam3)
{
	func_1733(iParam0, Local_62.f_1297[0], 379542007, 0);
	func_1733(iParam1, Local_62.f_1297[1], 379542007, 0);
	func_1733(iParam2, Local_62.f_1297[2], -183018591, 0);
	if (func_145(*iParam3, 0, 1))
	{
		func_1734();
		func_535(&(Local_62.f_1216[7]), "SCENE_VALDOC_FEMALEPANIC");
	}
}

bool func_1372(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return ((_0xc8d523bf5bbd3808(iParam0, -587661767) || _0xc8d523bf5bbd3808(iParam0, -1507090758)) || _0xc8d523bf5bbd3808(iParam0, -1102089407));
}

void func_1373(var uParam0, int iParam1, char[4] cParam2)
{
	if ((!func_1735(uParam0) || func_119(&(uParam0->f_9), 8192)) || func_119(&(uParam0->f_9), 33554432))
	{
		if (func_145(*uParam0, 0, 1))
		{
			func_1394(*uParam0, 416676503, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			open_sequence_task(&iVar0);
			func_1736(0, Global_35, 0);
			task_aim_gun_at_entity(0, Global_35, 3000, 0, 1);
			task_combat_ped(0, Global_35, 0, 0);
			func_547(*uParam0, &iVar0, 0f, 0f, 1, 1);
		}
		func_772(&(uParam0->f_9), 8192);
	}
	else if (!func_579(*uParam0, "GangStartsSitting"))
	{
	}
	else
	{
		func_277(iParam1, "bStopCountLoop", 1, cParam2);
		func_278(iParam1, "PBL_BREAKOUT", cParam2, 1);
	}
}

void func_1374()
{
	func_191(0, 2);
	func_129(Local_62.f_1373[1], Local_62.f_1370[1]);
	func_541();
	func_898(Local_62.f_1373[0], Local_62.f_1370[0], func_629(), func_630(), func_631(), "Interior Back Room Door");
}

int func_1375(var uParam0)
{
	if (func_119(&(uParam0->f_9), 8192))
	{
		return 1;
	}
	if (!func_145(*uParam0, 0, 1))
	{
		return 1;
	}
	if (func_119(&(uParam0->f_9), 33554432))
	{
		task_combat_ped(*uParam0, Global_35, 0, 0);
		func_772(&(uParam0->f_9), 8192);
		func_392(Local_62.f_1226[10], 0);
		return 1;
	}
	if (func_1735(uParam0))
	{
		func_277(&(Local_62.f_1216[5]), "bStopCountLoop", 1, "SCENE_VALDOC_GANGOPENBACKROOM");
		func_278(&(Local_62.f_1216[5]), "PBL_BREAKOUT", "SCENE_VALDOC_GANGOPENBACKROOM", 1);
		return 0;
	}
	else if (func_583(*uParam0, "script_proc@robberies@shop@valdoc@ig_4", "count_breakout_gang"))
	{
		if (func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.99f))
		{
			task_combat_ped(*uParam0, Global_35, 100663296, 0);
			func_392(Local_62.f_1226[10], 0);
			func_772(&(uParam0->f_9), 8192);
			return 1;
		}
	}
	else
	{
		func_392(Local_62.f_1226[10], 0);
		task_combat_ped(*uParam0, Global_35, 0, 0);
		func_772(&(uParam0->f_9), 8192);
		return 1;
	}
	return 0;
}

int func_1376(var uParam0, int* iParam1)
{
	if (func_119(&(uParam0->f_9), 8192))
	{
		return 1;
	}
	iVar0 = &Local_62.f_1216[6];
	sVar1 = "SCENE_VALDOC_COUPLEFLIRTBREAKOUT";
	if (!func_550(iVar0, sVar1))
	{
		if ((func_276(&(uParam0->f_120), 1f, 1, "couch male's timerGenericA") || func_1372(*uParam0)) || func_1367())
		{
			if (func_1737(6))
			{
				func_1738();
				func_535(iVar0, sVar1);
				if (!is_entity_dead(*uParam0))
				{
					if (!func_335(65536))
					{
						func_281(&(Local_62.f_1518), "SRVDODR2SEEP", *uParam0, Global_35, 0, 0, 1, 1);
						func_533(65536);
					}
				}
			}
			else
			{
				func_772(&(uParam0->f_9), 8192);
			}
		}
	}
	else
	{
		func_546(&(Local_62.f_1216[2]), "SCENE_VALDOC_COUPLEFLIRT");
		if (func_550(iVar0, "SCENE_VALDOC_COUPLEFLIRTBREAKOUT"))
		{
			if (_get_anim_scene_progress(iVar0) > 0.841f)
			{
				if (func_1737(7))
				{
					func_1734();
					func_535(&(Local_62.f_1216[7]), "SCENE_VALDOC_FEMALEPANIC");
				}
				func_772(&(uParam0->f_9), 8192);
			}
			else if (_get_anim_scene_progress(iVar0) > 0.555f)
			{
				if (!func_119(&(uParam0->f_9), 268435456))
				{
					if (!is_entity_dead(*uParam0))
					{
						task_combat_ped(*uParam0, Global_35, 100663296, 0);
					}
					func_772(&(uParam0->f_9), 268435456);
				}
			}
		}
	}
	return 0;
}

int func_1377(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return 1;
	}
	if (func_119(&(iParam0->f_9), 8192))
	{
		return 1;
	}
	if (_does_anim_scene_exist(&(Local_62.f_1216[3])))
	{
		if (get_anim_scene_bool(&(Local_62.f_1216[3]), "bActionBreakoutBed"))
		{
			fVar1 = _get_anim_scene_progress(&(Local_62.f_1216[3]));
			if (fVar1 > 0.861f)
			{
				task_combat_ped(*iParam0, Global_35, 100663296, 0);
				func_307(&(iParam0->f_120));
				func_772(&(iParam0->f_9), 8192);
			}
		}
		else
		{
			if (func_276(&(iParam0->f_120), 2.5f, 0, "gangBed.timerGenericA"))
			{
				bVar0 = true;
			}
			else if (func_1372(*iParam0))
			{
				bVar0 = true;
			}
			else if (func_1367())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_281(&(Local_62.f_1518), "SRVDODR3SEEP", *iParam0, Global_35, 0, 0, 1, 1);
				set_anim_scene_bool(&(Local_62.f_1216[3]), "bActionBreakoutBed", true, false);
			}
		}
	}
	if (func_119(&(iParam0->f_9), 33554432))
	{
		func_1127(*iParam0, 0);
		func_772(&(iParam0->f_9), 8192);
		func_307(&(iParam0->f_120));
	}
	return 0;
}

void func_1378(var uParam0)
{
	switch (iLocal_47)
	{
		case 0:
			if (func_353(-2f, 1, 0, 0))
			{
				func_1739();
				func_281(&(Local_62.f_1518), "SRVDOPREP", *uParam0, Global_35, 0, 0, 1, 1);
				func_1368(1);
			}
			break;
		case 1:
			if (func_353(14f, 1, 0, 0))
			{
				func_1739();
				func_281(&(Local_62.f_1518), "SRVDOTNT1", *uParam0, Global_35, 0, 0, 1, 1);
				func_1368(2);
			}
			break;
		case 2:
			if (func_353(14f, 1, 0, 0))
			{
				func_1739();
				func_281(&(Local_62.f_1518), "SRVDOTNT2", *uParam0, Global_35, 0, 0, 1, 1);
				func_1368(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1379(int* iParam0, int iParam1, int* iParam2, int iParam3, int* iParam4, int iParam5)
{
	func_1740(iParam0, *Local_62.f_1297[0], iParam1, &(Local_62.f_1247[9]));
	func_1740(iParam2, *Local_62.f_1297[1], iParam3, &(Local_62.f_1247[11]));
	func_1740(iParam4, *Local_62.f_1297[2], iParam5, &(Local_62.f_1247[10]));
}

void func_1380(int* iParam0)
{
	func_1741(iParam0);
	func_1742(iParam0);
}

void func_1381(int* iParam0, int iParam1)
{
	if (!func_551(&(iParam0->f_10), 2))
	{
		return;
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!func_353(-4f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return;
	}
	if (!func_551(&(iParam0->f_10), 4))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
	}
	if (*iParam1 == 0)
	{
		func_302(0);
		func_596(iParam0, "SRVD_W_AILOG1", "SRVD_W_JILOG1", 1);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		_0x4820a6939d7cef28(Global_35, 0);
		_hide_ped_weapons(Global_35, 2, false);
		task_swap_weapon(0, 0, 0, 0, 0);
		func_916(&(iParam0->f_10), 1024);
	}
	else if (*iParam1 == 1)
	{
		func_302(0);
		func_596(iParam0, "SRVD_W_AILOT1", "SRVD_W_JILOT1", 1);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		func_916(&(iParam0->f_10), 2048);
	}
}

void func_1382(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 33554432))
	{
		return;
	}
	if (func_548(*iParam0, 1435919172, 1) || func_544(iParam0))
	{
		return;
	}
	task_smart_flee_ped(*iParam0, Global_35, 150f, -1, 0, 3f, 0);
	func_61(&(iParam0->f_1));
	func_772(&(iParam0->f_9), 33554432);
}

bool func_1383()
{
	if (!func_145(&(Local_62.f_390[3]), 0, 1))
	{
		return false;
	}
	if (func_74(Global_35, &(Local_62.f_1247[7])) || (func_519(Global_35, &(Local_62.f_390[3]), 1, 1) < 3.06f && !func_221(4194304)))
	{
		return true;
	}
	return false;
}

void func_1384(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 4194304))
	{
		return;
	}
	if (!func_551(&(iParam0->f_10), 1024))
	{
		return;
	}
	if (_does_anim_scene_exist(&(Local_62.f_1216[7])))
	{
		if (get_anim_scene_bool(&(Local_62.f_1216[7]), "bFemaleGrabGun"))
		{
			return;
		}
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[15])))
	{
		return;
	}
	func_1128(iParam0, "FEMALE");
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	if (!func_551(&(iParam0->f_10), 64))
	{
		func_1385(&(iParam0->f_30));
		func_1386(&(iParam0->f_30), 0);
		func_916(&(iParam0->f_10), 64);
	}
	func_772(&(iParam0->f_9), 4194304);
}

void func_1385(var uParam0)
{
	func_1291((*uParam0)[0], "INTERACT_GREET");
	func_1291((*uParam0)[1], "INTERACT_INSULT");
}

void func_1386(var uParam0, int iParam1)
{
	func_1670((*uParam0)[0], iParam1);
	func_1670((*uParam0)[0], iParam1);
}

bool func_1387(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 33554432))
	{
		return false;
	}
	if (func_221(67108864))
	{
		return false;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[8])))
	{
		return false;
	}
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	func_224(67108864);
	return true;
}

void func_1388(int iParam0)
{
	iLocal_50 = iParam0;
}

void func_1389()
{
	if (!func_74(Global_35, Local_62.f_1290) && !func_74(Global_35, Local_62.f_1292))
	{
		func_1743(&(Local_62.f_1148[0]), 1);
		func_1743(&(Local_62.f_1148[1]), 1);
		func_1743(&(Local_62.f_1148[2]), 1);
	}
	else
	{
		func_1743(&(Local_62.f_1148[0]), 0);
		func_1743(&(Local_62.f_1148[1]), 0);
		func_1743(&(Local_62.f_1148[2]), 0);
	}
}

void func_1390(var uParam0, int iParam1)
{
	*uParam0 = func_892(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!func_145(*uParam0, 0, 1))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*uParam0, true);
	if (!_0x88ad6cc10d8d35b2(*uParam0))
	{
		set_entity_as_mission_entity(*uParam0, true, false);
	}
	set_ped_can_be_targetted(*uParam0, true);
	set_ped_combat_attributes(*uParam0, 0, true);
	set_ped_combat_attributes(*uParam0, 30, true);
	func_660(*uParam0, &(uParam0->f_1), -1595050198, 580546400, 0, 0);
}

char* func_1391()
{
	return "cowboy_b";
}

char* func_1392()
{
	return "incombat_low_intensity_aiming_shortarm";
}

void func_1393(var uParam0, char* sParam1, char* sParam2)
{
	_0x923583741dc87bce(uParam0, sParam1);
	_0x89f5e7adecccb49c(uParam0, sParam2);
}

int func_1394(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_1744(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
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
							if (func_1744(iVar4) && iVar4 != iVar0)
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
	if (func_159() == -1 && !func_1745(iVar0))
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
				if (func_1745(-183018591))
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
		if (iParam0 != Global_35 && func_1744(iVar0))
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
		func_1746(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1747(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_1748(iVar0))
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

void func_1395()
{
	func_1749();
	func_1750();
	func_298(1);
	_report_crime(player_id(), -1547772340, 50, 0, true);
	func_224(1073741824);
	func_427();
	if (func_621(&uLocal_1785))
	{
		func_307(&uLocal_1785);
	}
	_0x0e3bdeed21beb945(get_player_index(), 100);
	iVar0 = 0;
	while (iVar0 < Local_62.f_1148)
	{
		if (is_entity_dead(&(Local_62.f_1148[iVar0])))
		{
		}
		else
		{
			func_319(Local_62.f_1148[iVar0], 188, 1);
		}
		iVar0++;
	}
	func_1751(64);
}

void func_1396(var uParam0, float fParam1)
{
	if (!func_145(*uParam0, 0, 1))
	{
		return;
	}
	set_combat_float(*uParam0, 6, fParam1);
}

void func_1397(int iParam0, int iParam1, vector3 vParam2)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	func_1394(iParam0, 416676503, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	open_sequence_task(&iVar0);
	task_swap_weapon(0, 1, 0, 0, 0);
	if (iParam1 != 2)
	{
		task_shoot_at_coord(0, vParam2, ceil((3.5f * 1000f)), -1422700276, 0);
	}
	else
	{
		task_aim_gun_at_coord(0, vParam2, ceil((3.5f * 1000f)), false, false);
	}
	func_547(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1398()
{
	if (!func_621(Local_62.f_1392[5]))
	{
		return;
	}
	if (!func_657(Local_62.f_1392[5], 3f))
	{
		fVar0 = func_995(Local_62.f_1392[5]);
		Var1.f_8 = -1082130432;
		Var1 = { -285.0529f, 800.9851f, 120.1334f };
		Var1.f_12 = 1;
		Var1.f_6 = 379542007;
		Var1.f_13 = 0;
		Var1.f_14 = 0;
		Var1.f_11 = Global_35;
		Var1.f_15 = 1;
		switch (Local_62.f_98)
		{
			case 0:
				if (fVar0 > 0.25f)
				{
					Var1.f_3 = { -285.5563f, 803.4608f, 120.4116f };
					Var1.f_7 = 20f;
					_fire_single_bullet_ignore_entity_new(&Var1);
					Local_62.f_98++;
				}
				break;
			case 1:
				if (fVar0 > 1f)
				{
					Var1.f_3 = { -285.3181f, 803.5599f, 119.7571f };
					Var1.f_7 = 80f;
					_fire_single_bullet_ignore_entity_new(&Var1);
					Local_62.f_98++;
				}
				break;
			case 2:
				if (fVar0 > 1.5f)
				{
					Var1.f_3 = { -285.1213f, 803.5945f, 119.7719f };
					Var1.f_7 = 20f;
					_fire_single_bullet_ignore_entity_new(&Var1);
					Local_62.f_98++;
				}
				break;
			case 3:
				if (fVar0 > 2.5f)
				{
					Var1.f_3 = { -285.3235f, 803.5018f, 120.1629f };
					Var1.f_7 = 80f;
					_fire_single_bullet_ignore_entity_new(&Var1);
					Local_62.f_98++;
				}
				break;
			case 4:
				if (fVar0 > 3.3f)
				{
					Var1.f_3 = { -285.54f, 803.5208f, 119.4203f };
					Var1.f_7 = 80f;
					_fire_single_bullet_ignore_entity_new(&Var1);
					Local_62.f_98++;
				}
				break;
		}
	}
}

void func_1399(var uParam0, bool bParam1)
{
	if (!func_145(*uParam0, 0, 1))
	{
		return;
	}
	set_ped_combat_attributes(*uParam0, 30, bParam1);
}

int func_1400(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		if (iVar0 != iParam0)
		{
			if (!is_entity_dead(&(Local_62.f_1148[iVar0])))
			{
				return &(Local_62.f_1148[iVar0]);
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1401(int iParam0, int iParam1)
{
	if (func_159() != -1)
	{
		return;
	}
	if (!func_166(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_1402(int iParam0, int iParam1)
{
	if (!func_166(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

var func_1403()
{
	if (func_159() != -1)
	{
		return 0;
	}
	return func_1752(661720433);
}

bool func_1404(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_1405()
{
	switch (iLocal_29)
	{
		case 0:
			return 2710.102f, -1290.725f, 60.39987f;
		case 1:
			return 1321.746f, -1318.87f, 75.93783f;
		case 2:
			return -1787.652f, -384.9637f, 157.0498f;
		case 3:
			return -286.8831f, 818.0349f, 119.2403f;
		default:
			break;
	}
	return vLocal_59;
}

float func_1406()
{
	switch (iLocal_29)
	{
		case 0:
			return 3f;
		case 1:
			return 2f;
		case 2:
			return 4f;
		case 3:
			return 2.25f;
		default:
			break;
	}
	return 0f;
}

var func_1407(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	return create_scenario_point(iParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
}

bool func_1408(int iParam0)
{
	return iParam0 != 0;
}

void func_1409(int iParam0)
{
	if (!func_152(iParam0))
	{
		return;
	}
	if (!func_35(iParam0, 2048))
	{
		func_653(func_1491(-237624095), 1);
		func_34(iParam0, 2048);
	}
	func_34(iParam0, 32);
	func_118(iParam0, 1048576);
	if (func_158())
	{
		func_34(iParam0, 128);
		func_118(iParam0, 4194304);
	}
	else
	{
		func_34(iParam0, 64);
		func_118(iParam0, 2097152);
	}
	func_539(0, 0);
}

void func_1410(int iParam0)
{
	if (!_uilog_is_entry_registered(4, func_1753(iParam0)))
	{
		return;
	}
	_uilog_remove_entry(4, func_1753(iParam0));
	func_411(iParam0, -2147483648);
	func_1554(0, -1);
}

bool func_1411(int iParam0)
{
	if (func_153(iParam0, 32768) || func_153(iParam0, 16384))
	{
		return true;
	}
	return false;
}

var func_1412(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1413(int iParam0)
{
	return &(Global_1914319->f_15936[iParam0]);
}

void func_1414(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		_blip_set_modifier(&(Global_36308[iParam0]), iParam1);
	}
}

void func_1415(var uParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, cParam4, vParam7, func_1754());
	}
}

void func_1416(var uParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, cParam4, vParam7, func_1754());
	}
}

int func_1417(char* sParam0)
{
	if (!prepare_music_event(sParam0))
	{
		return 0;
	}
	return 1;
}

char* func_1418(int iParam0)
{
	iVar0 = iParam0;
	return func_911(iVar0);
}

char* func_1419(int iParam0)
{
	iVar0 = iParam0;
	return func_810(iVar0);
}

char* func_1420(int iParam0)
{
	iVar0 = iParam0;
	return func_900(iVar0);
}

char* func_1421(int iParam0)
{
	iVar0 = iParam0;
	return func_795(iVar0);
}

bool func_1422()
{
	if ((iVar1696 < 2 || iVar1696 == 7) || iVar1696 == 8)
	{
		return true;
	}
	return false;
}

void func_1423(int iParam0)
{
	iLocal_1755 = iParam0;
}

void func_1424()
{
	Local_1698.f_16 = "RE_WINDOW_PEEK";
	Local_1698.f_45 = 3f;
	Local_1698.f_51 = { -286.9f, 818.645f, 119.31f };
	Local_1698.f_54 = { 0f, 0f, -170f };
	Local_1698.f_31 = { -287.7f, 819.4f, 119.8f };
	Local_1698.f_34 = { -4f, 0.1f, -167.8f };
	Local_1698.f_39 = -167.8f;
	Local_1698.f_40 = -4.2f;
	Local_1698.f_41 = { -287.1f, 818f, 119.7f };
	Local_1698.f_1 = "script@proc@shoprobberies@valentinedoctor@windowPeek";
	func_1755(&Local_1698, 256);
	func_1755(&Local_1698, 512);
	func_1755(&Local_1698, 8192);
	Local_1698.f_48 = { -286.9271f, 819.4828f, 118.3271f };
	iLocal_1756 = 0;
}

int func_1425(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam1 && *uParam0 != 7) && *uParam0 != 8)
	{
		*uParam0 = 7;
	}
	switch (*uParam0)
	{
		case 0:
			if ((func_1756(uParam0->f_48, 1) > uParam0->f_45 || _0x74f1d22efa71fab8()) || is_control_pressed(1, 1644850270))
			{
				return 0;
			}
			if (!func_1757(uParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (_is_ped_carrying(Global_35) || func_662(Global_35, -208384378))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				return 0;
			}
			if (!is_string_null_or_empty(uParam0->f_1))
			{
				if (_does_anim_scene_exist(uParam0->f_2))
				{
					if (!_0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter"))
					{
						_delete_anim_scene(uParam0->f_2);
						return 0;
					}
				}
				else
				{
					uParam0->f_2 = _create_anim_scene(uParam0->f_1, 0, "pbl_enter", false, true);
					load_anim_scene(uParam0->f_2);
				}
			}
			if (!func_1029(uParam0->f_17))
			{
				uParam0->f_17 = func_1758(uParam0->f_16, -1053137564, 3, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			}
			func_1759(uParam0, 16384);
			func_1456(uParam0->f_17, 1, 1);
			*uParam0 = 1;
			break;
		case 1:
			if ((func_1756(uParam0->f_48, 1) > uParam0->f_45 || _0x74f1d22efa71fab8()) || is_control_pressed(1, 1644850270))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				*uParam0 = 0;
				return 0;
			}
			if (!func_1757(uParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				*uParam0 = 0;
				return 0;
			}
			if (_is_ped_carrying(Global_35) || func_662(Global_35, -208384378))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				*uParam0 = 0;
				return 0;
			}
			if (!is_string_null_or_empty(uParam0->f_1) && _is_anim_scene_loaded(uParam0->f_2, true, false))
			{
				if (!func_67(uParam0->f_51) || !func_67(uParam0->f_54))
				{
					_get_anim_scene_origin(uParam0->f_2, &vVar3, &vVar6, 2);
					if (!func_53(uParam0->f_51, vVar3) && !func_53(uParam0->f_54, vVar6))
					{
						vVar9 = { uParam0->f_51 };
						vVar12 = { uParam0->f_54 };
						if (func_67(vVar9))
						{
							vVar9 = { vVar3 };
						}
						if (func_67(vVar12))
						{
							vVar12 = { vVar6 };
						}
						set_anim_scene_origin(uParam0->f_2, vVar9, vVar12, 2);
					}
				}
				if (!_0x3ab6c7b0bb0df4b1(Global_35, uParam0->f_2))
				{
					set_anim_scene_entity(uParam0->f_2, "arthur", Global_35, 0);
				}
			}
			if (_0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter"))
			{
				if (func_174(uParam0->f_3, 1) && _0xa9016536015de29d(uParam0->f_2, "pbl_enter_left"))
				{
					if (_0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter_left"))
					{
					}
					else if (!_0x0df57f86fe71dbe5(uParam0->f_2, "pbl_enter_left"))
					{
						_0xdf7b5144e25cd3fe(uParam0->f_2, "pbl_enter_left");
					}
				}
				if (func_174(uParam0->f_3, 2) && _0xa9016536015de29d(uParam0->f_2, "pbl_enter_right"))
				{
					if (_0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter_right"))
					{
					}
					else if (!_0x0df57f86fe71dbe5(uParam0->f_2, "pbl_enter_right"))
					{
						_0xdf7b5144e25cd3fe(uParam0->f_2, "pbl_enter_right");
					}
				}
			}
			if (is_string_null_or_empty(uParam0->f_1) || (_is_anim_scene_loaded(uParam0->f_2, true, false) && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter")))
			{
				if (func_1426(uParam0->f_17, 1))
				{
					if (is_ped_on_mount(Global_35))
					{
						if (!func_662(Global_35, 501393341))
						{
							task_dismount_animal(Global_35, 0, 0, 0, 0, 0);
						}
						return 0;
					}
					sVar15 = "pbl_enter";
					if (func_67(uParam0->f_48))
					{
						if (_get_anim_scene_entity_matrix(uParam0->f_2, "arthur", &vVar16, true, "pbl_enter", 2))
						{
							uParam0->f_48 = { vVar16 };
						}
						if (((func_174(uParam0->f_3, 1) && _0xa9016536015de29d(uParam0->f_2, "pbl_enter_left")) && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter_left")) && _get_anim_scene_entity_matrix(uParam0->f_2, "arthur", &vVar28, true, "pbl_enter_left", 2))
						{
							if (func_67(vVar28))
							{
							}
							else if (func_67(vVar16) || func_1756(vVar28, 1) < func_1756(vVar16, 1))
							{
								sVar15 = "pbl_enter_left";
								uParam0->f_48 = { vVar28 };
							}
						}
						if (((func_174(uParam0->f_3, 2) && _0xa9016536015de29d(uParam0->f_2, "pbl_enter_right")) && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_enter_right")) && _get_anim_scene_entity_matrix(uParam0->f_2, "arthur", &vVar40, true, "pbl_enter_right", 2))
						{
							if (func_67(vVar40))
							{
							}
							else if (func_67(vVar16) || func_1756(vVar40, 1) < func_1756(vVar16, 1))
							{
								sVar15 = "pbl_enter_right";
								uParam0->f_48 = { vVar40 };
							}
						}
					}
					_set_anim_scene_playback_list_bool(uParam0->f_2, sVar15, true);
					set_player_control(player_id(), false, 0, false);
					if (_get_ped_crouch_movement(Global_35) && !func_1757(uParam0, 128))
					{
						_set_ped_crouch_movement(Global_35, false, 0, false);
						func_1755(uParam0, 32);
					}
					else
					{
						func_1759(uParam0, 32);
					}
					uParam0->f_47 = _0xa29fd00d45311eb7(Global_35, "Stealth");
					if (uParam0->f_47 > 0f)
					{
						func_1755(uParam0, 4096);
						_0x411189e51b8020ba(Global_35, "Stealth");
					}
					if (func_1757(uParam0, 256))
					{
						set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
						set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
						task_swap_weapon(Global_35, 1, func_1757(uParam0, 512), 0, 0);
					}
					task_enter_anim_scene(Global_35, uParam0->f_2, "Arthur", sVar15, 1069379748, 1, 0, 20000, -1082130432);
					*uParam0 = 2;
				}
			}
			else if (!_0x0df57f86fe71dbe5(uParam0->f_2, "pbl_enter"))
			{
				_0xdf7b5144e25cd3fe(uParam0->f_2, "pbl_enter");
			}
			break;
		case 2:
			disable_control_action(0, 2139949496, false);
			if ((!func_1426(uParam0->f_17, 1) && !is_control_pressed(0, -1053137564)) && !is_disabled_control_pressed(0, -1053137564))
			{
				vVar0 = { uParam0->f_48 };
				uParam0->f_48 = { vVar0 };
				func_1760(Global_35);
				set_player_control(player_id(), true, 0, false);
				if (func_1757(uParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", uParam0->f_47, -1);
					func_1759(uParam0, 4096);
				}
				func_1759(uParam0, 16384);
				func_1456(uParam0->f_17, 1, 1);
				*uParam0 = 1;
			}
			else if ((is_ped_in_cover(Global_35, 0, 1) || _get_ped_crouch_movement(Global_35)) && func_1757(uParam0, 64))
			{
				*uParam0 = 3;
			}
			else if (_0x3ab6c7b0bb0df4b1(Global_35, uParam0->f_2) && _0x337f1cc8ee895601(uParam0->f_2, "Arthur"))
			{
				vVar0 = { uParam0->f_48 };
				uParam0->f_48 = { vVar0 };
				*uParam0 = 3;
			}
			else if (bParam4)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (!is_string_null_or_empty(uParam0->f_1) && !_is_anim_scene_started(uParam0->f_2, false))
			{
				start_anim_scene(uParam0->f_2);
			}
			if (func_174(uParam0->f_3, 4))
			{
				func_1028(&(uParam0->f_17), 1, 1);
			}
			uParam0->f_37 = uParam0->f_39;
			uParam0->f_38 = uParam0->f_40;
			uParam0->f_18 = { get_final_rendered_cam_coord() };
			uParam0->f_21 = { get_final_rendered_cam_rot(2) };
			uParam0->f_24 = get_final_rendered_cam_fov();
			if (func_1757(uParam0, 8192) && _0xa24c1d341c6e0d53(0, 0, 0))
			{
				func_1755(uParam0, 16384);
				uParam0->f_44 = create_camera_with_params(26379945, uParam0->f_31, uParam0->f_34, uParam0->f_24, true, 2);
			}
			else
			{
				uParam0->f_44 = create_camera_with_params(26379945, uParam0->f_18, uParam0->f_21, uParam0->f_24, true, 2);
			}
			set_cam_params(uParam0->f_44, uParam0->f_41, uParam0->f_38, 0f, uParam0->f_37, uParam0->f_24, uParam0->f_46, 1, 1, 2, 1, 0);
			set_cam_near_clip(uParam0->f_44, 0f);
			shake_cam(uParam0->f_44, "HAND_SHAKE", 0.2f);
			render_script_cams(true, false, 3000, true, false, 0);
			set_player_control(player_id(), false, 0, false);
			display_radar(false);
			*uParam0 = 4;
			break;
		case 4:
			if (_does_anim_scene_exist(uParam0->f_2) && !_0x0df57f86fe71dbe5(uParam0->f_2, "pbl_exit"))
			{
				_0xdf7b5144e25cd3fe(uParam0->f_2, "pbl_exit");
			}
			if ((_does_anim_scene_exist(uParam0->f_2) && _0xa9016536015de29d(uParam0->f_2, "pbl_exit_alt")) && !_0x0df57f86fe71dbe5(uParam0->f_2, "pbl_exit_alt"))
			{
				_0xdf7b5144e25cd3fe(uParam0->f_2, "pbl_exit_alt");
			}
			if (!does_cam_exist(uParam0->f_44) || !is_cam_interpolating(uParam0->f_44))
			{
				if (does_cam_exist(uParam0->f_44))
				{
					func_1761(&uVar52, &uVar53, &iVar54, &iVar55, 529461124, 1410914475, -1497929239, 665185216, 2);
					if (uParam0->f_4 == iVar54 && uParam0->f_5 == iVar55)
					{
						if (uParam0->f_6 < get_game_timer())
						{
							uParam0->f_4 = 0;
							uParam0->f_5 = 0;
						}
					}
					else
					{
						uParam0->f_4 = iVar54;
						uParam0->f_5 = iVar55;
						uParam0->f_6 = get_game_timer() + 4000;
					}
					uParam0->f_10.f_2 = (-(to_float(iVar54) / 127f) * IntToFloat(uParam0->f_7));
					uParam0->f_10.f_1 = ((-uParam0->f_10.f_2 * IntToFloat(uParam0->f_9)) / IntToFloat(uParam0->f_7));
					if (is_look_inverted())
					{
						uParam0->f_10 = ((to_float(iVar55) / 127f) * IntToFloat(uParam0->f_8));
					}
					else
					{
						uParam0->f_10 = (-(to_float(iVar55) / 127f) * IntToFloat(uParam0->f_8));
					}
					fVar56 = (30f * timestep());
					vVar57 = { uParam0->f_10 };
					uParam0->f_13 = (uParam0->f_13 + func_1762((((vVar57.x - uParam0->f_13) * 0.05f) * fVar56), -3f, 3f));
					uParam0->f_13.f_1 = (uParam0->f_13.f_1 + func_1762((((vVar57.y - uParam0->f_13.f_1) * 0.05f) * fVar56), -3f, 3f));
					uParam0->f_13.f_2 = (uParam0->f_13.f_2 + func_1762((((vVar57.z - uParam0->f_13.f_2) * 0.05f) * fVar56), -3f, 3f));
					set_cam_params(uParam0->f_44, uParam0->f_41, Vector(uParam0->f_37, 0f, uParam0->f_38) + uParam0->f_13, uParam0->f_24, 0, 1, 1, 2, 1, 0);
				}
				if (!_does_anim_scene_exist(uParam0->f_2) || _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_exit"))
				{
					if (bParam2 || (((!func_174(uParam0->f_3, 4) && !func_1426(uParam0->f_17, 1)) && !is_control_pressed(0, -1053137564)) && !is_disabled_control_pressed(0, -1053137564)))
					{
						if ((func_174(uParam0->f_3, 8) && _0xa9016536015de29d(uParam0->f_2, "pbl_exit_alt")) && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_exit_alt"))
						{
							_set_anim_scene_playback_list_bool(uParam0->f_2, "pbl_exit_alt", true);
						}
						else if (_does_anim_scene_exist(uParam0->f_2))
						{
							_set_anim_scene_playback_list_bool(uParam0->f_2, "pbl_exit", true);
						}
						if (does_cam_exist(uParam0->f_44))
						{
							if (func_1757(uParam0, 16384))
							{
								set_cam_params(uParam0->f_44, uParam0->f_31, uParam0->f_34, uParam0->f_24, uParam0->f_46, 1, 1, 2, 1, 0);
							}
							else if (func_67(uParam0->f_25))
							{
								set_cam_params(uParam0->f_44, uParam0->f_18, uParam0->f_21, uParam0->f_24, uParam0->f_46, 1, 1, 2, 1, 0);
							}
							else
							{
								set_cam_params(uParam0->f_44, uParam0->f_25, uParam0->f_28, uParam0->f_24, uParam0->f_46, 1, 1, 2, 1, 0);
							}
						}
						uParam0->f_13 = { 0f, 0f, 0f };
						*uParam0 = 5;
					}
				}
			}
			break;
		case 5:
			if (does_cam_exist(uParam0->f_44))
			{
				if (is_cam_interpolating(uParam0->f_44))
				{
					return 0;
				}
				else if (func_67(uParam0->f_25))
				{
					func_1763(_get_object_offset_from_coords(uParam0->f_18, uParam0->f_21.f_2, 0f, 10f, 0f));
					render_script_cams(false, true, 3000, true, false, 0);
					destroy_cam(uParam0->f_44, false);
				}
				else
				{
					func_1763(_get_object_offset_from_coords(uParam0->f_25, uParam0->f_28.f_2, 0f, 10f, 0f));
					render_script_cams(false, true, 3000, true, false, 0);
					destroy_cam(uParam0->f_44, false);
				}
			}
			if ((((!_does_anim_scene_exist(uParam0->f_2) || _0xf94692eb9dc15d74(uParam0->f_2, 0)) || _is_anim_scene_finished(uParam0->f_2, false)) || !_is_anim_scene_started(uParam0->f_2, false)) || (func_1757(uParam0, 16) && has_anim_event_fired(Global_35, -180478719)))
			{
				if (_does_anim_scene_exist(uParam0->f_2))
				{
					_delete_anim_scene(uParam0->f_2);
				}
				if (func_1757(uParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", uParam0->f_47, -1);
					func_1759(uParam0, 4096);
				}
				if (func_1757(uParam0, 32) && !func_1757(uParam0, 128))
				{
					func_1759(uParam0, 32);
					_set_ped_crouch_movement(Global_35, true, 0, false);
					*uParam0 = 6;
				}
				else
				{
					display_radar(true);
					set_player_control(player_id(), true, 0, false);
					if (does_cam_exist(uParam0->f_44))
					{
						render_script_cams(false, true, 1500, true, false, 0);
						destroy_cam(uParam0->f_44, false);
					}
					if (bParam2)
					{
						*uParam0 = 7;
					}
					else if (bParam3)
					{
						func_1456(uParam0->f_17, 1, 1);
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 7;
					}
				}
			}
			break;
		case 6:
			if (_get_ped_crouch_movement(Global_35))
			{
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				render_script_cams(false, true, 1500, true, false, 0);
				destroy_cam(uParam0->f_44, false);
				if (bParam2)
				{
					*uParam0 = 7;
				}
				else if (bParam3)
				{
					func_1456(uParam0->f_17, 1, 1);
					*uParam0 = 0;
				}
				else
				{
					*uParam0 = 7;
				}
			}
			break;
		case 7:
			if (does_cam_exist(uParam0->f_44))
			{
				destroy_all_cams(false);
				set_player_control(player_id(), false, 0, false);
				destroy_cam(uParam0->f_44, false);
				render_script_cams(false, true, 1500, true, false, 0);
			}
			if (((!bParam1 && _does_anim_scene_exist(uParam0->f_2)) && !_0x1f0e401031e20146(uParam0->f_2, "pbl_exit")) && _0x23e33cb9f4a3f547(uParam0->f_2, "pbl_exit"))
			{
				_set_anim_scene_playback_list_bool(uParam0->f_2, "pbl_exit", true);
			}
			if ((((bParam1 || !_does_anim_scene_exist(uParam0->f_2)) || !_is_anim_scene_started(uParam0->f_2, false)) || _0xf94692eb9dc15d74(uParam0->f_2, 0)) || _is_anim_scene_finished(uParam0->f_2, false))
			{
				if (func_1029(uParam0->f_17))
				{
					func_1028(&(uParam0->f_17), 1, 1);
				}
				display_radar(true);
				set_player_control(player_id(), true, 0, false);
				if (_does_anim_scene_exist(uParam0->f_2))
				{
					_delete_anim_scene(uParam0->f_2);
				}
				if (func_1757(uParam0, 32))
				{
					if (!func_1757(uParam0, 128))
					{
						_set_ped_crouch_movement(Global_35, true, 0, false);
					}
					func_1759(uParam0, 32);
				}
				if (func_1757(uParam0, 4096))
				{
					_0x437c08db4febe2bd(Global_35, "Stealth", uParam0->f_47, -1);
					func_1759(uParam0, 4096);
				}
				if (iParam5 == 0)
				{
					*uParam0 = 8;
				}
				else
				{
					*uParam0 = 0;
				}
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

bool func_1426(int iParam0, bool bParam1)
{
	if (bParam1 && !func_1029(iParam0))
	{
		return false;
	}
	iVar0 = func_1581(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

int func_1427(int iParam0)
{
	switch (iParam0)
	{
		case -2045110373:
			return 5;
		case 2092390181:
			return 6;
		case 695356898:
			return 0;
		case 2093317438:
			return 2;
		case -145951480:
			return 4;
		case -432333475:
			return 1;
		case -1327067584:
			return 3;
		case -1192044061:
			return 7;
		case 1206762561:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_1428(int iParam0, int iParam1)
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

int func_1429(int iParam0)
{
	iParam0 = func_817(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_11;
}

int func_1430(int iParam0)
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

int func_1431(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1764(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
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

bool func_1432(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

bool func_1433(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_1434(int iParam0, int iParam1)
{
	if (!func_1433(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_42339[iParam0] && iParam1) != 0;
}

bool func_1435(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1765(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1766(iParam0);
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
		if (!func_1767(iParam0, 1))
		{
			return false;
		}
	}
	return func_1768(iParam0, 0, bParam2) >= iParam1;
}

bool func_1436(int iParam0, var uParam1)
{
	iVar1 = func_1770(func_1769(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_1771(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_1437(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1835011)
	{
		if (get_hash_key(&((*Global_1835011)[iVar0]->f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1438(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (get_hash_key(&((*Global_1347702)[iVar0]->f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1439(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_1440(int iParam0)
{
	return func_1772(iParam0);
}

float func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

bool func_1442(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

bool func_1443(int iParam0, bool bParam1)
{
	if (func_159() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (&Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || (*Global_1347702)[iVar0]->f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1444(int iParam0)
{
	if (!func_442(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1773(iParam0, &vVar0))
	{
		(*Global_1347702)[iParam0]->f_24 = { vVar0 };
	}
	return (*Global_1347702)[iParam0]->f_24;
}

void func_1445(int iParam0, int iParam1)
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
			func_1774((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1774(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_444(&(Global_1898164->f_1[0])))
	{
		func_1008(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1446(bool bParam0)
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

void func_1447(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!is_entity_dead(*uParam0))
	{
		return;
	}
	*uParam0 = func_892(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, bParam2, bParam3, bParam4, 0, 0);
	if (!is_entity_dead(*uParam0))
	{
		set_blocking_of_non_temporary_events(*uParam0, true);
		if (!_0x88ad6cc10d8d35b2(*uParam0))
		{
			set_entity_as_mission_entity(*uParam0, true, false);
		}
		set_ped_config_flag(*uParam0, 243, true);
		func_1775(uParam0, iParam1);
	}
}

int func_1448(int iParam0)
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

Vector3 func_1449()
{
	return 1319.398f, -1318.505f, 77.00304f;
}

void func_1450(var uParam0, int iParam1)
{
	if (!is_entity_dead(*uParam0))
	{
		return;
	}
	*uParam0 = func_892(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (!is_entity_dead(*uParam0))
	{
		set_blocking_of_non_temporary_events(*uParam0, true);
		if (!_0x88ad6cc10d8d35b2(*uParam0))
		{
			set_entity_as_mission_entity(*uParam0, true, false);
		}
		set_ped_config_flag(*uParam0, 243, true);
	}
}

void func_1451(var uParam0, vector3 vParam1, char[12] cParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, cParam4, vParam7, sParam10);
}

void func_1452(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1776(iParam1))
		{
			func_1777(iParam0, 41788943);
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
			func_1778(iParam0, 0, 1);
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
			func_1779(iParam0, 0);
			bVar0 = true;
		}
		func_1780(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_1453(var uParam0)
{
	uParam0->f_82[0] = _create_anim_scene(func_1781(0), 0, 0, false, true);
	if (!_is_anim_scene_loaded(&(uParam0->f_82[0]), true, false))
	{
		load_anim_scene(&(uParam0->f_82[0]));
	}
}

int func_1454(int iParam0)
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

void func_1455(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1581(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_1456(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_1029(iParam0))
	{
		return;
	}
	iVar0 = func_1581(iParam0);
	if (bParam1)
	{
		func_1782(iParam0, 4);
		func_1783(iVar0, 1);
		func_1784(iVar0, 1);
	}
	else
	{
		func_1785(iParam0, 4);
		func_1784(iVar0, 0);
	}
}

void func_1457(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_entity_attached(iParam0))
		{
			detach_entity(iParam0, bParam1, bParam2);
		}
	}
}

int func_1458(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1459(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_1460()
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

void func_1461()
{
	if (func_159() != -1)
	{
		return;
	}
	if (!func_814())
	{
		return;
	}
	func_1786(&(Global_40.f_40));
}

void func_1462()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_1463()
{
	return !func_67(Global_1310720->f_1);
}

void func_1464(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_1465()
{
	return Global_40.f_4283.f_1;
}

int func_1466()
{
	return Global_40.f_4283.f_4;
}

void func_1467(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1787())
	{
		fVar0 = func_1788(vParam0, Global_40.f_6);
	}
	if (func_1789(33554432))
	{
		if (!func_843(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1788(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

float func_1468(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1469()
{
	if (!func_1004(&Global_1935630, 8192))
	{
		return;
	}
	if (func_934(32768))
	{
		return;
	}
	func_625(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1790(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1790(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1790(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1790(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1790(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1790(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1790(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1790(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1790(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1791(10f, to_float(func_1790(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1791(5f, to_float(func_1790(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1791(25f, to_float(func_1752(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1791(1f, to_float(func_1752(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1791(6f, to_float(func_1752(64058978)))));
	fVar0 = (fVar0 + (3f * func_1791(1f, to_float(func_1752(795577402)))));
	iVar1 = func_1792();
	fVar0 = (fVar0 + (0.1111111f * func_1791(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1791(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1791(to_float(20), to_float(func_1794()))));
	if (func_178(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_178(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_178(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_178(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_178(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1793(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1791(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1791(5f, to_float(func_1752(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1791(5f, to_float(func_1790(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1795(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1796(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1791((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1791(1f, to_float(func_1797(-2116919750)))));
	fVar5 = to_float(func_1798());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1791(5f, to_float(func_1752(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1791(1f, to_float(func_1752(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1791(1f, to_float(func_1752(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1791(1f, to_float(func_1752(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1791(1f, to_float(func_1790(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1791(1f, to_float(func_1790(978382515, 1015970717)))));
	Var6 = { func_1491(1215094015) };
	fVar8 = func_1799(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_444(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_444(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_999(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1800(Global_1898330[iVar61]);
				}
				else
				{
					func_1801(iVar61, 0);
					if (func_1002(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_1001(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_1001((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_1001(&Global_1898437), &iVar9);
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

bool func_1470(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_1471(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_1472(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1802(iParam0, iParam1))
		{
			if (!func_438(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_647(uParam2, 0, 0, 1, 0);
				func_571(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_438(iParam1->f_10, 1))
		{
			func_1803(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_570(&(iParam1->f_10), 1);
		}
	}
	return false;
}

void func_1473(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_1474(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_1475(int* iParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_1804(*iParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1476(int* iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1805(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_438(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_1477(int iParam0)
{
	if (func_438(iParam0, 4))
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
	if (func_438(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_438(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_1478(int* iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = iParam10 & 128 != false;
	bVar5 = iParam10 & 64 != false;
	bVar6 = iParam10 & 512 != false;
	bVar7 = is_ped_on_foot(Global_35);
	bVar8 = is_ped_injured(*iParam0);
	bVar9 = (((_is_ped_carrying(Global_35) || func_1806(Global_35)) || func_1807(Global_35)) || func_1808(Global_35));
	fVar10 = -1f;
	if (func_621(&(iParam1->f_13)))
	{
		fVar10 = func_995(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar2 = func_1029((*uParam4)[iVar0]->f_6);
		func_1809(*iParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar1 = true;
		}
		if (func_1810(*iParam0, iParam1, (*uParam4)[iVar0], bVar2, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar7, bVar8, bParam15, fVar10, bVar9))
		{
			if (!bParam18 && !bVar3)
			{
				if (func_1811(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar5)
					{
						func_647(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar4)
					{
						func_945(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_646(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar3 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar6)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar3 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_1812(iParam1, fParam2);
	}
	return bVar3;
}

void func_1479(var uParam0)
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

void func_1480(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1813((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1812(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_1481(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1814(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1815(iParam1, 0);
				func_646(iParam1, uParam2, func_1474(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_1482(int iParam0, int iParam1)
{
	if (func_159() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1483(int iParam0)
{
	if (func_159() != -1)
	{
		if (func_1485(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1485(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1484(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1485(iParam0, 65536) && !func_1485(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1485(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1485(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1485(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1486()
{
	return Global_1905944->f_5694;
}

void func_1487(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_1488(bool bParam0, int iParam1)
{
	if (!bParam0 && func_825(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_1009(bParam0);
	return 1;
}

void func_1489()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_1816(iVar17))
		{
			iVar18 = func_1817(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_307(&(Global_1359489->f_55));
	if (func_1818(1777191912, 1))
	{
		func_1819(1777191912, 1, 0);
	}
}

void func_1490(int iParam0)
{
	if (!func_444(iParam0))
	{
		return;
	}
	func_1821(iParam0, (func_1820(iParam0) + shift_left(1, 16)));
}

struct<2> func_1491(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_1492()
{
	return func_1822() > 0;
}

void func_1493(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1823(-1032423150, iParam1);
			break;
		case 18:
			func_1823(294066959, iParam1);
			func_1823(-1925639563, iParam1);
			func_1823(-378582304, iParam1);
			func_1823(-338306437, iParam1);
			break;
		case 20:
			func_1823(437270255, iParam1);
			break;
		case 2:
			func_1823(-304000413, iParam1);
			func_1823(-533612796, iParam1);
			func_1823(48036954, iParam1);
			break;
		case 23:
			func_1823(193108691, iParam1);
			func_1823(491732588, iParam1);
			func_1823(671962088, iParam1);
			func_1824(1);
			break;
		case 16:
			func_1823(-1836056650, iParam1);
			func_1823(-754657922, iParam1);
			func_1823(-1752355838, iParam1);
			func_1823(-1375324510, iParam1);
			break;
		case 59:
			func_1823(-514392105, iParam1);
			func_1823(-822060246, iParam1);
			if (func_1825(146))
			{
				func_1823(1372748575, iParam1);
			}
			func_1824(1);
			break;
		case 76:
			func_1823(1991352213, iParam1);
			if (func_1826() == 0)
			{
				func_1823(1852488616, iParam1);
			}
			else
			{
				func_1823(-9866350, iParam1);
			}
			break;
		case 44:
			func_1823(863852599, iParam1);
			func_1823(1228374935, iParam1);
			func_1823(1517889050, iParam1);
			func_1823(830657578, iParam1);
			func_1823(1901354958, iParam1);
			break;
		case 46:
			func_1823(-582805654, iParam1);
			func_1823(250378940, iParam1);
			func_1823(-2143265426, iParam1);
			break;
		case 17:
			func_1823(-941494139, iParam1);
			func_1823(1641489521, iParam1);
			break;
		case 19:
			func_1823(-1829423531, iParam1);
			func_1823(-1590504752, iParam1);
			func_1823(1357221321, iParam1);
			break;
		case 21:
			func_1823(-1037992610, iParam1);
			func_1823(-1286414399, iParam1);
			func_1824(0);
			break;
		case 15:
			func_1823(-1014460309, iParam1);
			func_1823(-1030502825, iParam1);
			break;
		case 33:
			func_1823(479388090, iParam1);
			func_1823(-1396342239, iParam1);
			func_1823(-619618632, iParam1);
			break;
		case 34:
			func_1823(1193561641, iParam1);
			break;
		case 64:
			func_1823(1363960851, iParam1);
			break;
		case 60:
			func_1823(-1232453926, iParam1);
			func_1823(-882833584, iParam1);
			break;
		case 73:
			func_1823(2023205767, iParam1);
			break;
		case 74:
			func_1823(-2135286513, iParam1);
			if (func_1826() == 0)
			{
				func_1823(33799444, iParam1);
			}
			else
			{
				func_1823(-161343203, iParam1);
			}
			break;
		case 8:
			func_1823(841639693, iParam1);
			func_1823(358952323, iParam1);
			break;
		case 36:
			func_1823(852538149, iParam1);
			func_1823(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1823(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1823(1116039310, iParam1);
			}
			break;
		case 27:
			func_1823(107633428, iParam1);
			func_1823(335902282, iParam1);
			func_1823(575673055, iParam1);
			func_1823(-425944207, iParam1);
			break;
		case 28:
			func_1823(-1941530250, iParam1);
			func_1823(1399269304, iParam1);
			func_1823(1839684664, iParam1);
			func_1823(923168503, iParam1);
			func_1823(-1485078322, iParam1);
			break;
		case 29:
			func_1823(574995900, iParam1);
			func_1823(-1691275407, iParam1);
			func_1823(-1725307861, iParam1);
			break;
		case 31:
			func_1823(-2108383238, iParam1);
			func_1823(-1321828931, iParam1);
			func_1823(-1632118592, iParam1);
			func_1823(334938948, iParam1);
			break;
		case 4:
			func_1823(115823701, iParam1);
			func_1823(-1896939736, iParam1);
			func_1823(-1830746356, iParam1);
			func_1823(-1235169781, iParam1);
			func_1824(0);
			break;
		case 6:
			func_1823(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1823(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1823(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1823(-384176140, iParam1);
			}
			break;
		case 25:
			func_1823(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_1823(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1823(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1823(-1374849484, iParam1);
			}
			break;
		case 48:
			func_1823(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1823(217772674, iParam1);
			}
			else
			{
				func_1823(2071798160, iParam1);
			}
			if (func_1827(51))
			{
				func_1823(-792802286, iParam1);
			}
			break;
		case 49:
			func_1823(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_1823(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_1823(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_1823(1402120602, iParam1);
			}
			break;
		case 58:
			func_1823(-1661934591, iParam1);
			break;
		case 50:
			func_1823(-1713759426, iParam1);
			break;
		case 52:
			func_1823(-314799932, iParam1);
			func_1823(-462260432, iParam1);
			func_1823(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_1823(345256028, iParam1);
				func_1823(-1635084094, iParam1);
			}
			else
			{
				func_1823(114267347, iParam1);
			}
			break;
		case 32:
			func_1823(615304157, iParam1);
			break;
		case 47:
			func_1823(415434835, iParam1);
			break;
		case 69:
			func_1823(1373465877, iParam1);
			if (func_445((*Global_1347702)[9]->f_15, 1))
			{
				func_1823(-2058273527, iParam1);
			}
			break;
		case 70:
			func_1823(451334985, iParam1);
			if (func_1826() == 0)
			{
				func_1823(-224150200, iParam1);
			}
			else
			{
				func_1823(289012628, iParam1);
			}
			break;
		case 71:
			if (func_1826() == 0)
			{
				func_1823(-41692120, iParam1);
			}
			else
			{
				func_1823(1537840678, iParam1);
			}
			break;
		case 37:
			func_1823(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_1823(1842132550, iParam1);
			}
			else
			{
				func_1823(-785735240, iParam1);
			}
			func_1823(-1605690566, iParam1);
			break;
		case 13:
			func_1823(-731367459, iParam1);
			func_1823(224176585, iParam1);
			func_1823(-14545580, iParam1);
			break;
		case 53:
			func_1823(1095274522, iParam1);
			break;
		case 54:
			func_1823(-572027988, iParam1);
			break;
		case 56:
			func_1823(1339307101, iParam1);
			func_1823(2102267732, iParam1);
			break;
		case 57:
			func_1823(710102686, iParam1);
			break;
		case 22:
			func_1823(-1754368482, iParam1);
			func_1823(-2071408557, iParam1);
			break;
		case 12:
			func_1823(-181334543, iParam1);
			break;
		case 0:
			func_1823(-2134669864, iParam1);
			func_1823(-548289709, iParam1);
			func_1823(-911271922, iParam1);
			func_1823(-604455775, iParam1);
			break;
		case 1:
			func_1824(1);
			break;
		case 3:
			if (func_1526())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_1823(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_1823(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_1494()
{
	if (func_159() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_1495(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1823(-145926707, iParam1);
			func_1823(-604922090, iParam1);
			func_1823(-848690769, iParam1);
			break;
		case 1:
			func_1823(-1477631591, iParam1);
			break;
		case 2:
			func_1823(76112544, iParam1);
			break;
		case 9:
			func_1823(1396404308, iParam1);
			func_1823(-1357381228, iParam1);
			if (func_445((*Global_1835011)[69]->f_1, 1))
			{
				func_1823(1902679064, iParam1);
			}
			else
			{
				func_1823(-2146422425, iParam1);
			}
			break;
		case 22:
			func_1823(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1823(-1934184559, iParam1);
				func_1823(1281755988, iParam1);
			}
			else
			{
				func_1823(-1745220872, iParam1);
				func_1823(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1823(-1641504538, iParam1);
				func_1823(-988014485, iParam1);
			}
			else if (func_1825(26))
			{
				func_1823(-343043950, iParam1);
				func_1823(-640062214, iParam1);
			}
			else
			{
				func_1823(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1823(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1823(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1823(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1823(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1823(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1823(1301690984, iParam1);
				}
			}
			else
			{
				func_1823(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1823(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1823(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_1823(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_1823(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_1823(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_1823(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1823(-754570528, iParam1);
			}
			else
			{
				func_1823(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1823(-2072125821, iParam1);
			}
			else
			{
				func_1823(270040030, iParam1);
			}
			break;
		case 37:
			func_1823(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1823(-505314737, iParam1);
				func_1823(-1853052860, iParam1);
			}
			else
			{
				func_1823(-1975624994, iParam1);
				func_1823(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1823(1690231002, iParam1);
			}
			else
			{
				func_1823(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1823(1225386280, iParam1);
			}
			else if (func_1825(54))
			{
				func_1823(-283235773, iParam1);
			}
			else
			{
				func_1823(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1823(1355398007, iParam1);
			}
			else
			{
				func_1823(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1823(574636806, iParam1);
			}
			else
			{
				func_1823(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1823(821118338, iParam1);
			}
			else if (func_1825(39))
			{
				func_1823(846829260, iParam1);
			}
			else
			{
				func_1823(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_1548((*Global_1835011)[33]->f_1) == 1)
				{
					func_1823(1422779093, iParam1);
				}
				else
				{
					func_1823(-1769536986, iParam1);
				}
			}
			else
			{
				func_1823(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1823(352134789, iParam1);
			}
			else if (func_1825(43))
			{
				func_1823(260723113, iParam1);
			}
			else
			{
				func_1823(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1823(-457958799, iParam1);
			}
			else
			{
				func_1823(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_1825(41))
			{
				func_1823(-546824600, iParam1);
			}
			else
			{
				func_1823(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1823(1297261593, iParam1);
			}
			else
			{
				func_1823(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1823(2068484886, iParam1);
			}
			else if (func_1825(49))
			{
				func_1823(-1489080639, iParam1);
				func_1823(-2102244050, iParam1);
			}
			else
			{
				func_1823(-1863040467, iParam1);
			}
			break;
		case 51:
			func_1823(-2055943209, iParam1);
			break;
		case 58:
			if (func_445((*Global_1347702)[23]->f_15, 1))
			{
				func_1823(1650066845, iParam1);
			}
			else
			{
				func_1823(151370023, iParam1);
			}
			func_1823(1426057961, iParam1);
			func_1823(476379584, iParam1);
			break;
		case 59:
			func_1823(-1638117866, iParam1);
			break;
		case 62:
			func_1823(199541730, iParam1);
			break;
		case 63:
			func_1823(1703485804, iParam1);
			func_1823(-800449045, iParam1);
			break;
		case 65:
			func_1823(-1678210868, iParam1);
			func_1823(-1448238026, iParam1);
			func_1823(-1200864845, iParam1);
			func_1823(1473511536, iParam1);
			break;
		case 66:
			func_1823(-1774490051, iParam1);
			func_1823(-34645921, iParam1);
			func_1823(174027075, iParam1);
			func_1823(-1155999, iParam1);
			func_1824(1);
			break;
		case 67:
			func_1823(701612593, iParam1);
			func_1823(-1069631343, iParam1);
			func_1823(1673428882, iParam1);
			break;
		case 68:
			func_1823(-739133286, iParam1);
			func_1823(-2130089358, iParam1);
			func_1823(2056190391, iParam1);
			func_1823(1941753817, iParam1);
			func_1824(0);
			break;
		case 70:
			func_1823(-1217555753, iParam1);
			break;
		case 71:
			func_1823(697048821, iParam1);
			break;
		case 73:
			func_1823(-553148661, iParam1);
			break;
		case 75:
			func_1823(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1823(1414263863, iParam1);
			}
			else
			{
				func_1823(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1823(1835465936, iParam1);
				func_1823(523715611, iParam1);
			}
			else if (func_1825(78))
			{
				func_1823(1420338873, iParam1);
			}
			else
			{
				func_1823(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1823(10180941, iParam1);
			}
			else if (func_1825(79))
			{
				func_1823(768420635, iParam1);
			}
			else
			{
				func_1823(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1823(-383601523, iParam1);
			}
			else
			{
				func_1823(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1823(1606472408, iParam1);
			}
			else
			{
				func_1823(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1823(-203571927, iParam1);
			}
			else
			{
				func_1823(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1823(729886222, iParam1);
			}
			else
			{
				func_1823(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1823(-714816362, iParam1);
			}
			else
			{
				func_1823(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1823(-932932179, iParam1);
				func_1823(-1458537240, iParam1);
			}
			else
			{
				func_1823(-1764383885, iParam1);
				func_1823(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1823(1741466706, iParam1);
			}
			else
			{
				func_1823(1405815775, iParam1);
			}
			break;
		case 94:
			func_1823(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_1823(1905280979, iParam1);
			}
			else
			{
				func_1823(-1966245299, iParam1);
			}
			func_1823(721468880, iParam1);
			break;
		case 99:
			func_1823(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1823(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_1823(-1117781095, iParam1);
				}
				else
				{
					func_1823(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1823(141494548, iParam1);
			}
			else
			{
				func_1823(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1823(-369525697, iParam1);
			}
			else if (func_1825(101))
			{
				func_1823(1595015219, iParam1);
			}
			else
			{
				func_1823(-321486961, iParam1);
			}
			break;
		case 103:
			func_1823(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1823(793460477, iParam1);
				func_1823(-1610242176, iParam1);
			}
			else if (func_1825(103))
			{
				func_1823(1830897187, iParam1);
			}
			else
			{
				func_1823(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1823(1528309077, iParam1);
			}
			else if (func_1825(104))
			{
				func_1823(1864966105, iParam1);
			}
			else
			{
				func_1823(-103336013, iParam1);
			}
			break;
		case 108:
			func_1823(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1823(-1123227713, iParam1);
				func_1823(-889574341, iParam1);
			}
			else
			{
				func_1823(2065385917, iParam1);
				func_1823(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1823(-887421691, iParam1);
			}
			else if (func_1825(109))
			{
				func_1823(-1318117949, iParam1);
			}
			else
			{
				func_1823(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_1823(284822762, iParam1);
				}
				else
				{
					func_1823(-1425017554, iParam1);
				}
			}
			else if (func_1825(110))
			{
				if (&Global_1357515 == 0)
				{
					func_1823(553087292, iParam1);
				}
				else
				{
					func_1823(-1766870331, iParam1);
					func_1823(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_1823(-1980598735, iParam1);
			}
			else
			{
				func_1823(-442732098, iParam1);
				func_1823(1955756409, iParam1);
			}
			break;
		case 115:
			func_1823(394303528, iParam1);
			func_1823(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1823(1182403394, iParam1);
			}
			else
			{
				func_1823(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1823(924445424, iParam1);
			}
			else
			{
				func_1823(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1823(430755273, iParam1);
				func_1823(-1473879802, iParam1);
			}
			else
			{
				func_1823(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1823(73885747, iParam1);
			}
			else if (func_1825(117))
			{
				func_1823(1559707913, iParam1);
			}
			else
			{
				func_1823(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1823(-2103887972, iParam1);
			}
			else if (func_1825(118))
			{
				func_1823(-435828462, iParam1);
			}
			else
			{
				func_1823(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1823(2054486196, iParam1);
			}
			else
			{
				func_1823(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1823(-570086056, iParam1);
			}
			else if (func_1825(121))
			{
				func_1823(32337856, iParam1);
			}
			else
			{
				func_1823(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1823(813493663, iParam1);
			}
			else if (func_1825(122))
			{
				func_1823(-2132763590, iParam1);
			}
			else
			{
				func_1823(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1823(-66240572, iParam1);
				func_1823(1563075046, iParam1);
			}
			else
			{
				func_1823(-787011772, iParam1);
				func_1823(-1523377438, iParam1);
			}
			break;
		case 127:
			func_1823(61020800, iParam1);
			break;
		case 129:
			func_1823(428985222, iParam1);
			break;
		case 131:
			func_1823(-1393851036, iParam1);
			break;
		case 133:
			func_1823(1559531342, iParam1);
			break;
		case 134:
			func_1823(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_1823(-1374407408, iParam1);
				}
				else
				{
					func_1823(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_1823(-472672138, iParam1);
				}
				else
				{
					func_1823(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_1823(-1678710489, iParam1);
			}
			else
			{
				func_1823(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1823(1717582460, iParam1);
			}
			else
			{
				func_1823(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1823(1568112362, iParam1);
				func_1823(1388317526, iParam1);
			}
			else if (func_1825(136))
			{
				func_1823(-1597534828, iParam1);
				func_1823(-1207918353, iParam1);
			}
			else
			{
				func_1823(-1940891082, iParam1);
				func_1823(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_1823(448334530, iParam1);
				func_1823(2145375502, iParam1);
			}
			else
			{
				func_1823(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_1823(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_1823(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_1823(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_1823(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1823(-66616327, iParam1);
			}
			else
			{
				func_1823(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1823(1862916706, iParam1);
			}
			else if (func_1825(147))
			{
				func_1823(675105199, iParam1);
			}
			else
			{
				func_1823(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1823(174409701, iParam1);
			}
			else if (func_1825(148))
			{
				func_1823(-1730895475, iParam1);
			}
			else
			{
				func_1823(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1823(1295237052, iParam1);
			}
			else if (func_1825(149))
			{
				func_1823(-788577684, iParam1);
			}
			else
			{
				func_1823(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_1496(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_1002(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_1828(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_1548((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_441(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_441(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_1497(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_1829(iParam0);
	iVar3 = func_1830(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_192();
				func_1522(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_1831(iParam0, 1);
			if (func_1832(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_1833(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1834(1, iParam0);
				}
				else
				{
					func_1835(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1498(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_1499(int iParam0, int iParam1, int iParam2)
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

void func_1500(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

int func_1501(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_1502(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_1503(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_159() != -1)
	{
		return;
	}
	if ((Global_36616 && func_1454(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1448(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_1836(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_1837(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1836(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_1504(int iParam0)
{
	if (!func_444(iParam0))
	{
		return -1;
	}
	return func_1838(func_863(iParam0));
}

int func_1505(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_1506()
{
	if (func_159() != -1)
	{
		return false;
	}
	if (!func_814())
	{
		return false;
	}
	if (!func_445((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_445((*Global_1835011)[2]->f_1, 1) && func_445((*Global_1347702)[120]->f_15, 1)) && !func_445((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_445((*Global_1835011)[37]->f_1, 1) && !func_445((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_445((*Global_1835011)[57]->f_1, 1) && !func_445((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_445((*Global_1835011)[26]->f_1, 1) && !func_445((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_445((*Global_1835011)[62]->f_1, 1) && func_445((*Global_1835011)[63]->f_1, 1)) && !func_445((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_445((*Global_1835011)[75]->f_1, 1) && !func_445((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_445((*Global_1835011)[76]->f_1, 1) && !func_445((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_445((*Global_1835011)[40]->f_1, 1) && func_445((*Global_1835011)[41]->f_1, 1)) && !func_445((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_445((*Global_1835011)[62]->f_1, 1) && func_445((*Global_1835011)[63]->f_1, 1)) && !func_445((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_445((*Global_1835011)[65]->f_1, 1) && func_445((*Global_1835011)[66]->f_1, 1)) && !func_445((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_1507()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_1839(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_1508(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_1765(iParam0, 0))
	{
		return false;
	}
	if (!func_1840(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1841(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_1842(iParam0, bParam2);
	iVar2 = 0;
	if (func_1768(iParam0, 0, 0) == 0)
	{
		if (func_1843(iParam0))
		{
			iVar5 = func_1844(iParam0);
			iVar6 = func_1845(iVar5);
			iVar7 = func_1846(iVar6) + 1;
			func_1847(iVar5);
			if (func_1848(38))
			{
				func_575(483, 0);
			}
			else
			{
				func_575(482, 0);
			}
			if (iVar7 == func_1849(iVar6))
			{
				func_1508(func_1850(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_814() && func_1851(4))
				{
					if (func_814() && (func_1852(38) || func_1848(38)))
					{
						func_1854(38, func_1850(iVar6), 0, 0, func_1853(), 0, -1, 0);
						func_1855(2);
					}
					else
					{
						func_1854(38, func_1850(iVar6), 0, 0, func_1853(), 0, -1, 0);
						func_1855(1);
					}
				}
			}
			else if (func_814() && func_1851(4))
			{
				if (func_814() && (func_1852(38) || func_1848(38)))
				{
					func_1854(38, 0, 0, 0, func_1853(), 0, -1, 0);
					func_1855(2);
				}
				else
				{
					func_1854(38, 0, 0, 0, func_1853(), 0, -1, 0);
					func_1855(1);
				}
			}
			if (func_814() && func_1851(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_814() && (func_1852(38) || func_1848(38)))
					{
						func_1856(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1856(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_1766(iParam0) == -1037537535)
	{
		if ((!func_1857(iParam0, 866047851) && !func_1857(iParam0, -1979000645)) && !func_1857(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_1858(iParam0, 8388608) && !func_435(28))
	{
		func_1859(28);
	}
	if (!bVar3)
	{
		if (func_1857(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_1771(iParam0) == -1447088266)
			{
				iVar1 = func_1861(func_1860(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_159() == -1)
					{
						func_1669(iVar1);
					}
					if (func_1862(0) && func_1746(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1863(iParam0, iVar0, iParam5);
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
					if (func_159() == -1)
					{
						func_1669(iParam0);
					}
					if (func_1862(0) && func_1746(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_1863(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_1766(iParam0) == -427144552)
		{
			if (!func_1864(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1766(iParam0) == 307971639 && func_1865(iParam0))
		{
			if (!func_1866(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1857(iParam0, 866047851))
		{
			func_1867(iParam0);
		}
		else if (func_1857(iParam0, 2000026003))
		{
			func_1868(iParam0);
		}
		else if (func_1857(iParam0, -103750053))
		{
			func_653(func_1869(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_653(func_652(-717883113, 2091222383), iVar0);
		}
		else if (func_1857(iParam0, -121341956) && !func_1857(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_445((*Global_1835011)[4]->f_1, 1))
				{
					func_575(498, 0);
				}
			}
			if (func_1857(iParam0, -2017733358) || func_1857(iParam0, -1369131378))
			{
				func_1870(iParam0);
			}
		}
		else if (func_1857(iParam0, -136654233))
		{
			if (func_1857(iParam0, -1021472396))
			{
			}
		}
		else if (func_1857(iParam0, -1466706512) && func_1857(iParam0, 1147021565))
		{
			func_575(484, 0);
		}
		else if (func_1857(iParam0, 1147021565) && func_1857(iParam0, -524514947))
		{
		}
		else if (func_1857(iParam0, 554195525))
		{
		}
		else if (func_1857(iParam0, 589988438))
		{
			if (func_1871())
			{
				func_1872(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1857(iParam0, 787083290) && func_1857(iParam0, 949916894))
		{
			func_1873(iParam0);
		}
		else if (func_1857(iParam0, -1718133314))
		{
			func_1874(iParam0);
		}
		else if (func_1857(iParam0, -1738650224))
		{
			func_1875(iParam0);
		}
		else if (func_1857(iParam0, -1112814642) && func_1857(iParam0, 949916894))
		{
			func_1876(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_1857(iParam0, 1841149704))
		{
			func_1877();
		}
		else if (func_1857(iParam0, 606799272))
		{
			func_1878(iParam0, iParam1);
			func_1879(iParam0);
		}
		else if (func_1857(iParam0, -1112814642) && func_1857(iParam0, -1697809989))
		{
			func_1880(iParam0, 0, 0, 0);
		}
		else if (func_1857(iParam0, -2017733358) || func_1857(iParam0, -1369131378))
		{
			func_1870(iParam0);
		}
		else if (func_1857(iParam0, -1921346699))
		{
			if (func_159() != -1)
			{
				return false;
			}
			func_1881(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_1857(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_1435(215778062, 1, 0))
					{
						func_1508(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_1435(670273567, 1, 0))
					{
						func_1508(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_1435(-967317137, 1, 0))
					{
						func_1508(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_1435(526074061, 1, 0))
					{
						func_1508(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_1435(-1045488665, 1, 0))
					{
						func_1508(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_1435(471514780, 1, 0))
					{
						func_1508(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1857(iParam0, -839724752) && func_1858(iParam0, 4))
		{
			if (!func_1848(42))
			{
				func_1882(iParam0);
			}
		}
		else if (func_1857(iParam0, 1399091007))
		{
			func_1883(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_1857(iParam0, 1248798204))
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
				func_1508(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1859(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_1884(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1885(&iVar9, 0))
				{
					func_1746(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_159() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_1884(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_575(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1886();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1887();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1888();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1889();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_1890();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1891(499813453, 854119837, 0);
				func_1892(499813453, 0);
				func_1893(1);
				break;
			case 2127812557:
				func_1891(499813453, -1292544588, 0);
				func_1892(499813453, 0);
				func_1893(2);
				break;
			case 808991383:
				func_1891(499813453, -1003325394, 0);
				func_1892(499813453, 0);
				func_1893(4);
				break;
			case 1134518629:
				func_1891(666607663, -335460405, 0);
				func_1892(666607663, 0);
				func_1894(1);
				break;
			case 902940106:
				func_1891(666607663, 903797617, 0);
				func_1892(666607663, 0);
				func_1894(2);
				break;
			case -418174898:
				func_1891(666607663, 669728650, 0);
				func_1892(666607663, 0);
				func_1894(4);
				break;
			case -648114971:
				func_1891(-220219788, 1214120047, 0);
				func_1892(-220219788, 0);
				func_1895(1);
				break;
			case 211153747:
				func_1891(-220219788, 655769340, 0);
				func_1892(-220219788, 0);
				func_1895(2);
				break;
			case -32876996:
				func_1891(-220219788, 885316185, 0);
				func_1892(-220219788, 0);
				func_1895(4);
				break;
			case 1191437462:
				func_1891(218622660, -1491419385, 0);
				func_1892(218622660, 0);
				func_1896(1);
				break;
			case 1119149048:
				func_1891(218622660, 1809565830, 0);
				func_1892(218622660, 0);
				func_1896(2);
				break;
			case 506073827:
				func_1891(390004462, -628873767, 0);
				func_1892(390004462, 0);
				func_1897(1);
				break;
			case -1876986168:
				func_1891(390004462, -405421956, 0);
				func_1892(390004462, 0);
				func_1897(2);
				break;
			case 2142623221:
				func_1891(390004462, -1108972386, 0);
				func_1892(390004462, 0);
				func_1897(4);
				break;
			case 1508215381:
				func_1891(6410548, 1053716392, 0);
				func_1892(6410548, 0);
				func_1898(1);
				break;
			case -888935280:
				func_1891(6410548, 806507056, 0);
				func_1892(6410548, 0);
				func_1898(2);
				break;
			case -1252474566:
				func_1891(6410548, 1571925350, 0);
				func_1892(6410548, 0);
				func_1898(4);
				break;
			case -1465702449:
				func_1891(6410548, 1330352282, 0);
				func_1892(6410548, 0);
				func_1898(8);
				break;
			case -21093309:
				func_1900(242, func_1899(-21093309), 0);
				break;
			case 204375141:
				func_1900(240, func_1899(204375141), 0);
				break;
			case -417963070:
				func_1900(241, func_1899(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1901(594, 1934060482, 1, 1);
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
					func_1901(594, 1110018439, 1, 1);
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
					func_1901(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1901(594, -1228016946, 1, 1);
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
					func_1901(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1901(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_575(488, 0);
				break;
			case 1613651027:
				func_575(491, 0);
				break;
			case -885810591:
				func_575(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_1508(func_1902(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1508(func_1903(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_435(1))
				{
					func_575(487, 0);
				}
				break;
			case -898386032:
				func_575(486, 0);
				break;
			case -2035110427:
				if (func_159() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_575(496, 0);
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
		iVar10 = iParam0;
		func_1904(&iVar10);
		if (!func_1905(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_1862(0))
		{
			return true;
		}
		if (func_1766(iParam0) == -1037537535)
		{
			func_1906(iParam0);
		}
		if (func_1857(iParam0, -1979000645))
		{
			func_1907(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1862(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_1508(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1908(iVar2, 0);
		}
	}
	Var35 = { func_1909(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1910(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1857(iParam0, -839724752))
		{
			func_1911(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_1912(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_1509(int iParam0)
{
	if (func_1857(iParam0, 1989861793))
	{
		iVar0 = func_1913(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1914(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1915(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1916(iVar14, iVar1);
					if (iVar15 != iParam0 && func_1765(iVar15, 0))
					{
						if (func_1917(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1918(iVar1);
				if (bVar13)
				{
					func_1919(iParam0);
				}
				else
				{
					func_575(306, 0);
				}
			}
		}
	}
}

void func_1510()
{
	if (func_159() != -1)
	{
		return;
	}
	func_1920();
	func_1921();
	func_1922();
	func_1923();
	func_1924();
	func_1925();
	func_1926();
}

void func_1511(int iParam0)
{
	func_1927(iParam0, 1, 1, -142743235, 1);
	if (func_1928(iParam0))
	{
		func_1929(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_1770(func_1930(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1931(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_1932() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1933(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1933(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1934(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1934(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1934(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1934(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1934(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1934(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1934(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1934(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1934(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1935(iVar8, iVar0))
				{
					func_1936(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1935(iVar8, iVar0))
		{
			func_1936(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_1512()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1935(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_1932() == -2125499975 || func_1932() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1936(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1936(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_1513()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_1839(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_1514(int iParam0, bool bParam1)
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
			if ((func_445((*Global_1835011)[59]->f_1, 1) || func_445((*Global_1347702)[1]->f_15, 1)) || func_413((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_1818(403634348, 1))
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

void func_1515(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_1770(iParam0, 1);
	func_1937(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_1937(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_1938(17, iParam0, 0, 0, 0);
		}
	}
	if (func_159() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1937(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1937(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_1516()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_1839(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_1517()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_1839(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_1518(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1939(iParam1, 1, 0) };
		iParam3 = func_1940(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1941(iParam3);
	return func_1884(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_1519()
{
	return _unlock_is_unlocked(99890643);
}

void func_1520(int iParam0)
{
	if (!func_1744(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_1521(int iParam0, int iParam1)
{
	if (!func_1942(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1943(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1944(Global_40.f_9910[iParam1], 4);
}

void func_1522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1945(*iParam0);
	iVar1 = func_1946(*iParam0);
	iVar2 = func_1947(*iParam0);
	iVar3 = func_437(*iParam0);
	iVar4 = func_1948(*iParam0);
	iVar5 = func_1949(*iParam0);
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
	iVar6 = func_1950(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1950(iVar1, iVar0);
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
	func_1951(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1523(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1942(iParam0))
	{
		return;
	}
	if (!func_1952(iParam1))
	{
		return;
	}
	if (func_1953(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1943(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_1521(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1954(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_175(0, 0, 1))
		{
			func_1554(0, 17);
		}
	}
}

void func_1524()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_1839(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_1525()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_1839(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_1526()
{
	return _unlock_is_unlocked(-121456797);
}

void func_1527()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_1839(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_1528()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_1839(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_1529()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_1839(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_1530()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_1839(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_1531()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_1839(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_1532()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_1839(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_1533(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_1534(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

void func_1535(int iParam0)
{
	if (func_934(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1955(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_1955(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_1536()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_1839(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_1537()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_1839(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_1538()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_1839(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_1539()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_1839(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_1540()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_1839(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_1541()
{
	if (func_1956() > 1)
	{
		func_1957();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_575(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_575(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_575(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_575(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_575(452, 1);
		}
	}
}

bool func_1542(int iParam0)
{
	return func_1958(iParam0, 4, 1);
}

void func_1543(int iParam0)
{
	func_1959(iParam0, 4, 1);
}

void func_1544(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_1491(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1545(int iParam0)
{
	if (func_934(32768))
	{
		return;
	}
	if (!func_444(iParam0))
	{
		return;
	}
	func_844(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_1002(iParam0))
	{
		case 1:
			func_653(func_652(909007663, -587839005), 1);
			iVar0 = func_441(iParam0);
			func_653(func_1491(-634848880), 1);
			switch (func_1571(iVar0))
			{
				case 0:
					func_653(func_652(909007663, 1325140787), 1);
					break;
				case 1:
					func_653(func_652(909007663, 2101241783), 1);
					break;
				case 2:
					func_653(func_652(909007663, -1296936294), 1);
					break;
				case 3:
					func_653(func_652(909007663, -798388728), 1);
					break;
				case 4:
					func_653(func_652(909007663, -1787586531), 1);
					break;
				case 5:
					func_653(func_652(909007663, -1002834519), 1);
					break;
				case 6:
					func_653(func_652(909007663, -50600144), 1);
					break;
				case 7:
					func_653(func_652(909007663, -348503123), 1);
					break;
				case 8:
					func_653(func_652(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_653(func_652(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_653(func_652(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_441(iParam0);
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_653(func_1491(-634848880), 1);
			}
			if (func_443((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_443((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_653(func_652(909007663, -587839005), 1);
				}
				else
				{
					func_653(func_652(909007663, -2049243343), 1);
				}
			}
			if (func_443((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_1572(iVar1))
				{
					case 0:
						func_653(func_652(909007663, 1325140787), 1);
						break;
					case 1:
						func_653(func_652(909007663, 2101241783), 1);
						break;
					case 2:
						func_653(func_652(909007663, -1296936294), 1);
						break;
					case 3:
						func_653(func_652(909007663, -798388728), 1);
						break;
					case 4:
						func_653(func_652(909007663, -1787586531), 1);
						break;
					case 5:
						func_653(func_652(909007663, -1002834519), 1);
						break;
					case 6:
						func_653(func_652(909007663, -50600144), 1);
						break;
					case 7:
						func_653(func_652(909007663, -348503123), 1);
						break;
					case 8:
						func_653(func_652(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_653(func_652(909007663, 532323983), 1);
				}
			}
			else if (func_443((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_443((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_443((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_653(func_652(909007663, 551192206), 1);
				}
				else
				{
					func_653(func_652(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_1546()
{
	if (func_159() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_1960(64))
	{
		return;
	}
	else if (func_1004(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_175(0, 0, 1) || func_1961()) || func_1506())
	{
		return;
	}
	iVar0 = func_1007();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_1962(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_1963(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_1963(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1964(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_1554(0, -1);
	}
	if (iVar2 > 0)
	{
		func_1412("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1965(1, 0);
	Global_1956575->f_4 = 1;
}

void func_1547(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_934(32768))
	{
		return;
	}
	func_1348(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1966(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1548(int iParam0)
{
	if (!func_444(iParam0))
	{
		return -1;
	}
	return func_1967(iParam0);
}

int func_1549(int iParam0, int iParam1)
{
	if (!func_1968(iParam0))
	{
		return 0;
	}
	if (!func_814())
	{
		return 0;
	}
	if (!func_1969(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_1550(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1970())
	{
		iVar2 = func_1970();
	}
	iVar5 = func_1971(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_863(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_863(iVar6) == 0)
			{
				return func_1972(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_863(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_863(iVar6) == 0)
			{
				return func_1972(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1972(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1551(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1667(1330954593, 0, -1);
		case 1:
			return func_1667(1330954593, 0, -1);
		case 2:
			return func_1667(1330954593, 0, -1) * 2;
		case 4:
			return func_1667(1330954593, 0, -1);
		case 5:
			return func_1667(1330954593, 0, -1);
		case 6:
			return func_1667(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_1667(1330954593, 0, -1) * 3;
		case 9:
			return func_1667(1330954593, 0, -1) * 3;
		case 10:
			return func_1667(1330954593, 0, -1) * 3;
		case 11:
			return func_1667(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_1552(int iParam0)
{
	if (!func_444(iParam0))
	{
		return cVar0;
	}
	switch (func_1002(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_1828(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_441(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_1550(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_1553(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1973();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_1002(Global_1879514->f_1) == 1)
			{
				func_1549(5, 1);
			}
			else if (func_1002(Global_1879514->f_1) == 8 && (func_443((*Global_1347702)[func_441(Global_1879514->f_1)]->f_12, 1) || func_443((*Global_1347702)[func_441(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_1549(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_1554(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1590(&Global_0, 8);
	}
	if (!func_814() || func_159() != -1)
	{
		return;
	}
	func_1590(&Global_0, 1);
}

int func_1555(int iParam0, bool bParam1)
{
	iVar0 = func_1974();
	if (bParam1 && is_entity_dead(iVar0))
	{
		return -1;
	}
	return &Global_1955499;
}

void func_1556(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1974();
	if (!is_entity_dead(iVar0))
	{
		iVar1 = 0;
		iVar2 = iParam0;
		if (iParam0 == -1)
		{
			iVar2 = func_1555(iParam1, bParam2);
			if (iVar2 != -1)
			{
				iVar1 = (*Global_1955500)[iVar2]->f_2;
				if (func_1975(iVar2, 512))
				{
					_0xc67a4910425f11f1(player_id(), 0);
				}
			}
		}
		task_clear_look_at(iVar0);
		_0xaac0ee3b4999abb5(iVar0, 0);
		enable_control_action(0, -128997553, true);
		if (does_entity_exist(iVar1))
		{
			if (is_entity_a_ped(iVar1))
			{
				iVar3 = get_ped_index_from_entity_index(iVar1);
				if (!is_entity_dead(iVar3))
				{
					task_clear_look_at(iVar3);
				}
			}
		}
		Global_1955499 = -1;
	}
}

bool func_1557()
{
	if (!func_221(4))
	{
		return false;
	}
	if (func_957() && iLocal_26 != 53)
	{
		return false;
	}
	if (_is_ped_carrying(Global_35))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return false;
	}
	return true;
}

bool func_1558()
{
	if (func_113(&(Local_62.f_1216[0]), "bars_loop", "SCENE_RHDGUN_HELP"))
	{
		return true;
	}
	return false;
}

int func_1559()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_961(iVar0, 1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1560(int iParam0, int iParam1)
{
	if (func_961(iParam0, 1, 1))
	{
		func_1597((*Global_1955500)[iParam0], iParam1);
	}
}

bool func_1561(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1562(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_1563(int iParam0, int iParam1)
{
	func_846(iParam0, 0, 0);
	if (func_847(iParam0))
	{
		iVar0 = _0xf7424890e4a094c0(iParam0, iParam1);
		if (does_entity_exist(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

float func_1564()
{
	return Global_1935436->f_9;
}

bool func_1565(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_1566(var uParam0)
{
	return func_996(*uParam0, 2);
}

Vector3 func_1567(int iParam0)
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
	return func_1568((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_1568(vector3 vParam0)
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

int func_1569(int iParam0)
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

int func_1570(int iParam0)
{
	return iParam0 & 31;
}

int func_1571(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_1572(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_1573(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_1574()
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

int func_1575(int iParam0)
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
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_1576(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_1577(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1976(iParam0);
	}
	else
	{
		func_1977(iParam0, iParam1);
	}
	func_1978();
}

bool func_1578(int iParam0)
{
	if (!func_444(iParam0))
	{
		return false;
	}
	switch (func_1002(iParam0))
	{
		case 1:
			switch (func_441(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_441(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_1579(int iParam0)
{
	iVar2 = func_1979(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1771(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1981(func_1980(iParam0), 6);
}

void func_1580(int iParam0)
{
	iVar2 = func_1979(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_1771(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1982(func_1980(iParam0), 6);
}

int func_1581(int iParam0)
{
	return iParam0;
}

void func_1582(int iParam0)
{
	if (!func_1983(iParam0))
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

int func_1583(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar6 = _0x886171a12f400b89(iParam2, iVar0, 3);
	if (iVar6 >= iParam3)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (is_entity_an_object(iVar2))
		{
			iVar5 = 0;
			while (iVar5 < *uParam1)
			{
				if (uParam1[iVar5] == 0)
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				else if (get_entity_model(iVar2) == uParam1[iVar5])
				{
					(*uParam0)[iVar3] = iVar1;
					iVar3++;
					iVar5 = *uParam1;
				}
				iVar5++;
			}
		}
		if (iVar3 >= iParam3)
		{
			destroy_itemset(iVar0);
			return iParam3;
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

int func_1584(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 115)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_1585(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_159() != -1)
			{
				return -1308265478;
			}
			if (func_435(45))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_159() != -1)
			{
				return -650528936;
			}
			if (func_435(45))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_159() != -1)
			{
				return -877373104;
			}
			if (func_435(45))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

bool func_1586(int iParam0)
{
	return func_626(iParam0) == 0;
}

void func_1587(int iParam0)
{
	if (!func_165(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), iVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_1588(int iParam0)
{
	if (!func_444(iParam0))
	{
		return;
	}
	func_1821(iParam0, func_1820(iParam0) + 1);
}

int func_1589(int iParam0, int iParam1)
{
	iVar0 = func_841(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_1984(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_1445(iVar0, iParam1);
	return iParam1;
}

void func_1590(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1591(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1592(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_1593(bool bParam0)
{
	func_1985(bParam0);
	func_1986(bParam0);
	func_1987(bParam0);
	func_1988(bParam0);
	func_1989(bParam0);
	func_1990(bParam0);
	func_1991(bParam0);
	func_1992(bParam0);
}

void func_1594(bool bParam0)
{
	if (func_159() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_575(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_575(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_1993(1, bParam0, 1);
	func_1890();
	Global_40.f_11095.f_43 = bParam0;
}

void func_1595(int iParam0)
{
	iVar0 = 0;
	if (func_159() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1994(Global_1898077->f_7, Global_1898077->f_3);
}

void func_1596(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_159() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_1995(Global_1898077->f_7, Global_1898077->f_4);
}

void func_1597(var uParam0, int iParam1)
{
	func_1996(uParam0, iParam1);
}

void func_1598(var uParam0, var uParam1)
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

bool func_1599(bool bParam0, int iParam1, int iParam2)
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

int func_1600(var uParam0)
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

void func_1601(var uParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_570(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_571(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_1602(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1603(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1603(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_1604(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1605(int iParam0)
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

void func_1606(int* iParam0, var uParam1, int* iParam2)
{
}

int func_1607(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1997(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_1029((*uParam2)[iVar0]->f_6))
		{
			func_1031((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1608(int* iParam0)
{
	iVar0 = func_1998(*iParam0);
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

int func_1609(var uParam0, int iParam1)
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

void func_1610(int* iParam0, int* iParam1)
{
	if (!func_1474(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_1031(iParam1, 19);
			func_1815(iParam0, 23);
			func_1670(iParam1, 2);
		}
	}
}

bool func_1611(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	if (bParam3 && func_1999(iParam0))
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
		if (func_2000(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_1612(int iParam0, var uParam1)
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

int func_1613(int iParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	if (bParam13 <= 0f)
	{
		bVar0 = _create_volume_sphere(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		bVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	iVar1 = func_1096(iParam0, uParam1, iParam2, bVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_126(bVar0);
	return iVar1;
}

void func_1614(var uParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7)
{
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (bParam6)
		{
			fVar4 = vdist2(get_entity_coords(uParam0[iVar0], false, false), vParam2);
		}
		else
		{
			fVar4 = func_1468(get_entity_coords(uParam0[iVar0], false, false), vParam2);
		}
		if (iVar0 > 0)
		{
			if ((bParam5 && fVar4 < fVar3) || (!bParam5 && fVar4 > fVar3))
			{
				uVar2 = uParam0[iVar0];
				uVar1 = uParam0[(iVar0 - 1)];
				(*uParam0)[(iVar0 - 1)] = uVar2;
				(*uParam0)[iVar0] = uVar1;
				iVar0 = (iVar0 - 1);
			}
		}
		fVar3 = fVar4;
		iVar0++;
	}
	if (bParam7)
	{
	}
}

int func_1615(var uParam0, int iParam1)
{
	iVar0 = -1;
	iVar0 = func_2001(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_2002(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar0 = func_2003(iParam1);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

void func_1616(int iParam0, var uParam1)
{
	if (func_335(1024))
	{
		return;
	}
	if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
	{
		bVar0 = true;
	}
	if (*uParam1 == 2 || *uParam1 == 2048)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	func_302(0);
	func_1193("SRNG_C_HURT1", iParam0, Global_35);
	func_533(1024);
}

bool func_1617()
{
	if (!func_621(&(Local_62.f_1456)))
	{
		return true;
	}
	fVar0 = 6f;
	if (!func_657(&(Local_62.f_1456), fVar0))
	{
		fVar1 = func_995(&(Local_62.f_1456));
		if (fVar1 > 4f)
		{
			func_224(32);
		}
		return false;
	}
	func_307(&(Local_62.f_1456));
	return true;
}

void func_1618()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[0])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[0];
	cVar1 = func_911(0);
	func_805(iVar0, "PED_PLAYER", Global_35, cVar1, 1);
	func_805(iVar0, "PED_GUNSMITH", Local_62.f_170, cVar1, 1);
	func_805(iVar0, "PED_GUARD_DOWNSTAIRS", &(Local_62.f_390[0]), cVar1, 1);
	func_806(iVar0, "DOOR_DOWNSTAIRS", &(Local_62.f_1198[0]), cVar1, 1);
	func_277(iVar0, "BOOL_STOP_WAIT_AT_DOOR_LOOP", 0, cVar1);
	func_277(iVar0, "BOOL_STOP_DOOR_OPEN_LOOP", 0, cVar1);
	func_277(iVar0, "BOOL_STOP_SCARED_LOOP", 0, cVar1);
}

bool func_1619()
{
	if (func_1494())
	{
		if (_0x1ecc76792f661cf5("SRGA_A_HOLDUP") || _0x1ecc76792f661cf5("SRG_IG4_P1_a"))
		{
			return true;
		}
	}
	else if (_0x1ecc76792f661cf5("SRGA_J_HOLDUP") || _0x1ecc76792f661cf5("SRG_IG4_P1_J"))
	{
		return true;
	}
	return false;
}

bool func_1620(int iParam0, var uParam1)
{
	if (func_308(iParam0, 0, uParam1, &iVar0, 0, 0))
	{
		if (iVar0 == 8)
		{
			return true;
		}
	}
	return false;
}

float func_1621(float fParam0)
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

bool func_1622()
{
	if (!func_1154())
	{
		return false;
	}
	if (func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.039f))
	{
		return false;
	}
	return true;
}

bool func_1623()
{
	if (func_280(&(Local_62.f_1216[5]), "SCENE_VALDOC_GANGOPENBACKROOM", 0.145f))
	{
		return true;
	}
	return false;
}

void func_1624(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_2004(uParam0, 1);
		func_2005(uParam0, 1);
		func_567(uParam0, 1);
		func_2006(uParam0, 1);
		func_2007(uParam0, 1);
		func_2008(uParam0, 1);
		func_2009(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_2004(uParam0, 0);
		func_2005(uParam0, 0);
		func_567(uParam0, 0);
		func_2006(uParam0, 0);
		func_2007(uParam0, 0);
		func_2008(uParam0, 0);
		func_2009(uParam0, 0);
	}
}

void func_1625()
{
	iVar0 = &Local_62.f_1216[4];
	sVar1 = func_795(4);
	if (!_does_anim_scene_exist(&(Local_62.f_1216[4])))
	{
		return;
	}
	func_806(iVar0, "objDoor01", &(Local_62.f_1226[11]), sVar1, 1);
	func_805(iVar0, "pedDoctor", Local_62.f_170, sVar1, 1);
	func_277(iVar0, "bNoWaitAtDoor", 1, sVar1);
	func_277(iVar0, "bActionCower", 0, sVar1);
	func_277(iVar0, "bDoctorFlee", 0, sVar1);
	func_277(iVar0, "INVENTORY_BOOL", 0, sVar1);
	func_277(iVar0, "COUNTER_LOOP_BOOL", 0, sVar1);
}

float func_1626(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_1627(int* iParam0, int iParam1)
{
	if (func_119(&(iParam0->f_9), 2048))
	{
		return;
	}
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!_is_ped_hogtied(*iParam0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*iParam0, false);
	func_772(&(iParam0->f_9), 2048);
}

void func_1628(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, vParam1, fParam4, iParam5, fParam6, 0, 40000f);
	task_smart_flee_ped(0, Global_35, 1000f, -1, 0, 3f, 0);
	func_547(*iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1629(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	func_713(*iParam0, Global_36, 5, 1, 3);
	set_current_ped_weapon(*iParam0, 379542007, false, 0, false, false);
	open_sequence_task(&iVar0);
	task_follow_nav_mesh_to_coord(0, 2716.023f, -1291.615f, 59.34498f, 1f, 20000, 0.25f, 0, 40000f);
	task_swap_weapon(0, 1, 0, 0, 0);
	func_547(*iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1630(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (!func_308(*uParam0, 0, uParam2, &iVar0, 0, 0))
	{
		func_870(uParam3, 65536);
		func_870(uParam3, 16384);
		return;
	}
	if (iVar0 == 16)
	{
		if (is_entity_on_fire(*uParam0))
		{
			func_2010(uParam0);
			func_870(uParam3, 65536);
			func_772(uParam3, 131072);
			func_772(uParam3, 16384);
			return;
		}
	}
	if (iVar0 == 8)
	{
		func_297(*uParam0, Global_35, &(Local_62.f_390[iParam1]->f_64), 7000, vLocal_59, 1, 0);
		if (bParam4)
		{
			if (!func_119(uParam3, 4096))
			{
				if (*uParam0 == &Local_62.f_390[2])
				{
					func_281(&(Local_62.f_1518), "PRNBG_G1_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				else if (*uParam0 == &Local_62.f_390[3])
				{
					func_281(&(Local_62.f_1518), "PRNBG_G2_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				else if (*uParam0 == &Local_62.f_390[4])
				{
					func_281(&(Local_62.f_1518), "PRNBG_G3_AIM1", *uParam0, Global_35, 0, 0, 1, 1);
				}
				func_772(uParam3, 4096);
				func_870(uParam3, 65536);
				func_870(uParam3, 16384);
				return;
			}
		}
	}
	if (iVar0 == 2 || iVar0 == 1)
	{
		func_772(uParam3, 16384);
		return;
	}
	if (iVar0 == 4)
	{
		func_772(uParam3, 65536);
		func_772(uParam3, 16384);
		return;
	}
	func_870(uParam3, 65536);
	func_870(uParam3, 16384);
}

void func_1631(int iParam0)
{
	if (&Local_62.f_1471[0] != -1)
	{
		if (get_frame_count() <= &Local_62.f_1471[0] + 10)
		{
			return;
		}
	}
	get_event_data(0, iParam0, &Var2, 9);
	if (!does_entity_exist(Var2) || !is_entity_a_ped(Var2))
	{
		func_1751(4096);
		return;
	}
	if (!does_entity_exist(Var2.f_1) || !is_entity_a_ped(Var2.f_1))
	{
		func_1751(4096);
		return;
	}
	iVar0 = get_ped_index_from_entity_index(Var2);
	iVar1 = get_ped_index_from_entity_index(Var2.f_1);
	if (!func_2011(iVar1))
	{
		func_1751(4096);
		return;
	}
	if (iVar0 != Global_35)
	{
		func_1751(4096);
		return;
	}
	func_517(4096);
	if (!is_entity_dead(iVar0))
	{
		Local_62.f_1471[0] = get_frame_count();
	}
}

char* func_1632()
{
	return "cower_idle_pos_01";
}

char* func_1633()
{
	return "PBL_flinch_01";
}

char* func_1634()
{
	return "PBL_cower_idle_pos_01";
}

void func_1635(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1633(), sParam1);
	func_553(iParam0, func_1636(), sParam1);
}

char* func_1636()
{
	return "PBL_flinch_02";
}

int func_1637(int iParam0, int iParam1, float fParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_2012(iParam0, vVar0, fParam2);
}

void func_1638(int iParam0)
{
	if (!func_335(2097152))
	{
		func_281(&(Local_62.f_1518), "PRNBG_G1_SHOTN1", iParam0, Global_35, 0, 0, 1, 1);
		func_533(2097152);
	}
}

void func_1639(int iParam0, char* sParam1, int iParam2, char[4] cParam3)
{
	if (!func_221(iParam0))
	{
		return;
	}
	func_277(iParam2, sParam1, 0, cParam3);
	func_418(iParam0);
}

bool func_1640(var uParam0)
{
	if (!func_430(*uParam0, 0))
	{
		return false;
	}
	return is_ped_shooting(*uParam0);
}

void func_1641(var uParam0)
{
	if (!func_621(uParam0))
	{
	}
	if (!func_1566(uParam0))
	{
		uParam0->f_2 = (func_674() - uParam0->f_1);
		func_1101(uParam0, 2);
	}
}

void func_1642(var uParam0)
{
	if (!func_621(uParam0))
	{
	}
	if (func_1566(uParam0))
	{
		uParam0->f_1 = (func_674() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_1102(uParam0, 2);
	}
}

bool func_1643(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		if (iVar0 != iParam0)
		{
			if (is_entity_dead(&(Local_62.f_1148[iVar0])))
			{
				func_1390(Local_62.f_1148[iVar0], iVar0);
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_1644(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_62.f_1148)
	{
		if (is_entity_dead(&(Local_62.f_1148[iVar0])))
		{
		}
		else
		{
			set_blocking_of_non_temporary_events(&(Local_62.f_1148[iVar0]), bParam0);
		}
		iVar0++;
	}
}

bool func_1645(int* iParam0, int* iParam1, int* iParam2)
{
	if (!is_entity_dead(&(Local_62.f_390[1])))
	{
		return false;
	}
	if (func_120(512) || func_120(2048))
	{
		return false;
	}
	if (!func_221(2097152))
	{
		return false;
	}
	if (!func_74(Global_35, Local_62.f_1290))
	{
		return false;
	}
	if (!func_353(-2f, 1, 0, 0))
	{
		return false;
	}
	if (!func_276(Local_62.f_1392[4], 5f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return false;
	}
	func_307(Local_62.f_1392[4]);
	switch (iLocal_28)
	{
		case 0:
			func_1225(iParam0, &Global_35, "PRNBH_IG5_GO1", &(iParam0->f_64), &(Local_62.f_1216[3]), "PBL_line_02", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(&(Local_62.f_1216[4]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_MIDDLE");
			func_1652(1);
			break;
		case 1:
			func_1225(iParam1, &Global_35, "PRNBH_IG5_GO2", &(iParam1->f_64), &(Local_62.f_1216[4]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_MIDDLE", "BOOL_STOP_COWER_IDLE", 65536, -1);
			func_553(&(Local_62.f_1216[5]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_WUSS");
			func_1652(2);
			break;
		case 2:
			func_1225(iParam2, &Global_35, "PRNBH_IG5_GO3", &(iParam2->f_64), &(Local_62.f_1216[5]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_553(&(Local_62.f_1216[3]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_OWNER");
			func_1652(3);
			break;
		case 3:
			func_1225(iParam0, &Global_35, "PRNBH_IG5_OUT1", &(iParam0->f_64), &(Local_62.f_1216[3]), "PBL_line_03", "SCENE_SDNGUN_GAMBLER_OWNER", "BOOL_STOP_COWER_IDLE_POS_01", 16384, -1);
			func_553(&(Local_62.f_1216[4]), "PBL_line_04", "SCENE_SDNGUN_GAMBLER_MIDDLE");
			func_1652(4);
			break;
		case 4:
			func_1225(iParam1, iParam0, "PRNBH_IG5_OUT2", &(iParam1->f_64), &(Local_62.f_1216[4]), "PBL_line_04", "SCENE_SDNGUN_GAMBLER_MIDDLE", "BOOL_STOP_COWER_IDLE", 65536, 5000);
			func_553(&(Local_62.f_1216[5]), "PBL_line_04", "SCENE_SDNGUN_GAMBLER_WUSS");
			func_1652(5);
			break;
		case 5:
			func_1225(iParam2, &Global_35, "PRNBH_IG5_OUT3", &(iParam2->f_64), &(Local_62.f_1216[5]), "PBL_line_04", "SCENE_SDNGUN_GAMBLER_WUSS", "BOOL_STOP_COWER_IDLE", 131072, -1);
			func_1652(6);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_1646(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (&Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = func_2013();
				if (iVar0 != -1)
				{
					if (Global_40.f_9479[iVar0]->f_1 == -1)
					{
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
					else if (Global_40.f_9479[iVar0]->f_2 == -1)
					{
						Global_40.f_9479[iVar0]->f_2 = iParam0;
					}
					else
					{
						Global_40.f_9479[iVar0]->f_2 = Global_40.f_9479[iVar0]->f_1;
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
	}
}

void func_1647(int* iParam0, char[4] cParam1, var uParam2, bool bParam3)
{
	if (func_119(&(iParam0->f_9), 268435456))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 16777216))
	{
		if (func_544(iParam0))
		{
			return;
		}
		if (!func_221(67108864))
		{
			if (*iParam0 == &Local_62.f_390[2])
			{
				if (!func_221(134217728))
				{
					func_317(Local_62.f_1392[12]);
					func_928(&(Local_62.f_1216[2]), "OBJ_SAFE", &(Local_62.f_1226[1]), "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
					func_224(67108864);
				}
			}
		}
		func_772(&(iParam0->f_9), 16777216);
	}
	if (is_ped_ragdoll(*iParam0))
	{
		return;
	}
	func_928(*uParam2, cParam1, *iParam0, "Individual Scene", 1, 0);
	func_928(&(Local_62.f_1216[2]), cParam1, *iParam0, "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
	if (!func_221(67108864))
	{
		if (*iParam0 == &Local_62.f_390[2])
		{
			if (!func_221(134217728))
			{
				func_1187();
				func_317(Local_62.f_1392[12]);
				func_928(&(Local_62.f_1216[2]), "OBJ_SAFE", &(Local_62.f_1226[1]), "SCENE_SDNGUN_GAMBLER_GROUP", 1, 0);
				func_224(67108864);
			}
		}
	}
	if (bParam3)
	{
		if (!is_entity_dead(*iParam0))
		{
			_0xa180fbd502a03125(*iParam0, 1.5f, 1f);
			_task_intimidated_2(*iParam0, Global_35, 0, 0, 0, 0, 0, 0, 0);
			_0x41d1331afad5a091(*iParam0, 1, 0);
		}
		func_772(&(iParam0->f_9), 268435456);
		return;
	}
	func_302(1);
	if (!is_entity_dead(*iParam0))
	{
		_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
	}
	func_772(&(iParam0->f_9), 268435456);
}

bool func_1648(int iParam0, char* sParam1, float fParam2, float fParam3)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (_get_anim_scene_progress(iParam0) > fParam2 && _get_anim_scene_progress(iParam0) < fParam3)
	{
		return true;
	}
	return false;
}

bool func_1649(var uParam0)
{
	if (!func_551(uParam0, 2048))
	{
		return false;
	}
	if ((func_551(uParam0, 4096) && func_551(uParam0, 8192)) && func_551(uParam0, 16384))
	{
		return false;
	}
	return true;
}

void func_1650(int* iParam0)
{
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[4])))
	{
		return;
	}
	if (!func_276(Local_62.f_1392[4], 10f, 0, "TIMER_SDNGUN_PLAYER_LOITER_REACT_LINE_READY"))
	{
		return;
	}
	func_307(Local_62.f_1392[4]);
	switch (iLocal_28)
	{
		case 0:
			func_281(&(Local_62.f_1518), "PRNBG_GD_KNK1", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(1);
			break;
		case 1:
			func_281(&(Local_62.f_1518), "PRNBG_GD_KNK2", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(2);
			break;
		case 2:
			func_281(&(Local_62.f_1518), "PRNBG_GD_KNK3", *iParam0, Global_35, 0, 0, 1, 1);
			func_1652(6);
			break;
		case 6:
			break;
	}
}

void func_1651(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_2014(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

void func_1652(int iParam0)
{
	iLocal_28 = iParam0;
}

int func_1653()
{
	return -1426662425;
}

Vector3 func_1654()
{
	return 2718.06f, -1291.69f, 59.84f;
}

char* func_1655()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

void func_1656(int iParam0, var uParam1, int iParam2)
{
	if (!func_145(iParam0, 0, 1))
	{
		return;
	}
	task_aim_gun_at_entity(iParam0, uParam1, iParam2, 0, 1);
}

bool func_1657(int iParam0, int iParam1)
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

int func_1658(int* iParam0, var uParam1, char* sParam2, char* sParam3)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return 1;
	}
	if (func_119(&(iParam0->f_9), 67108864))
	{
		return 1;
	}
	if (func_544(iParam0) && !func_280(&(Local_62.f_1216[2]), "SCENE_SDNGUN_GAMBLER_GROUP", 0.9677f))
	{
		return 0;
	}
	if (func_1237(&(Local_62.f_1216[2]), "SCENE_SDNGUN_GAMBLER_GROUP", &uVar0))
	{
		func_772(&(iParam0->f_9), 67108864);
		return 1;
	}
	if (func_119(&(iParam0->f_9), 268435456))
	{
		return 1;
	}
	if (*iParam0 == &Local_62.f_390[2])
	{
		func_2015();
	}
	else if (*iParam0 == &Local_62.f_390[3])
	{
		func_2016();
	}
	else
	{
		func_2017();
	}
	func_535(*uParam1, sParam2);
	func_772(&(iParam0->f_9), 67108864);
	return 1;
}

int func_1659(int* iParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	if (func_551(&(iParam0->f_10), 1024))
	{
		return 1;
	}
	if (!func_551(&(iParam0->f_10), 4))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
	}
	if (*uParam1 == 0)
	{
		func_596(iParam0, cParam2, cParam3, 1);
		bVar0 = true;
	}
	else if (*uParam1 == 1)
	{
		func_596(iParam0, cParam4, cParam5, 1);
		bVar0 = true;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_307(Local_62.f_1392[4]);
	func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
	func_916(&(iParam0->f_10), 1024);
	return 1;
}

int func_1660(int* iParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	if (func_551(&(iParam0->f_10), 65536))
	{
		return 1;
	}
	if (!func_353(-2.5f, 1, 0, 0))
	{
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return 0;
	}
	if (!func_551(&(iParam0->f_10), 32768))
	{
		if (!func_551(&(iParam0->f_10), 4))
		{
			func_563(&(iParam0->f_10), &(iParam0->f_30), 1, 0);
		}
	}
	else if (!func_551(&(iParam0->f_10), 16))
	{
		func_739(iParam0->f_30[1], 1, 0);
	}
	if (*uParam1 == 0)
	{
		func_307(Local_62.f_1392[4]);
		func_596(iParam0, cParam2, cParam3, 1);
		func_947(&(iParam0->f_10), 8);
		func_916(&(iParam0->f_10), 32768);
	}
	else if (*uParam1 == 1)
	{
		if (*iParam0 == &Local_62.f_390[4])
		{
			func_224(4194304);
		}
		func_307(Local_62.f_1392[4]);
		func_596(iParam0, cParam4, cParam5, 1);
		func_916(&(iParam0->f_10), 65536);
		func_563(&(iParam0->f_10), &(iParam0->f_30), 0, 0);
		return 1;
	}
	return 0;
}

void func_1661()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[2])))
	{
		return;
	}
	iVar0 = &Local_62.f_1216[2];
	cVar1 = func_911(2);
	func_805(iVar0, "PED_GAMBLER_OWNER", &(Local_62.f_390[2]), cVar1, 1);
	if (!func_119(&(Local_62.f_390[3]->f_9), 268435456))
	{
		func_805(iVar0, "PED_GAMBLER_MIDDLE", &(Local_62.f_390[3]), cVar1, 1);
	}
	if (!func_119(&(Local_62.f_390[4]->f_9), 268435456))
	{
		func_805(iVar0, "PED_GAMBLER_WUSS", &(Local_62.f_390[4]), cVar1, 1);
	}
	func_805(iVar0, "PED_PLAYER", Global_35, cVar1, 1);
	func_806(iVar0, "OBJ_CHAIR_GAMBLER_OWNER", &(Local_62.f_1226[2]), cVar1, 1);
	func_806(iVar0, "OBJ_CHAIR_GAMBLER_MIDDLE", &(Local_62.f_1226[3]), cVar1, 1);
	func_806(iVar0, "OBJ_CHAIR_GAMBLER_WUSS", &(Local_62.f_1226[4]), cVar1, 1);
	func_806(iVar0, "OBJ_SAFE", &(Local_62.f_1226[1]), cVar1, 1);
}

int func_1662()
{
	return 248339202;
}

int func_1663(int* iParam0, var uParam1, char* sParam2)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return 1;
	}
	if (func_119(&(iParam0->f_9), 134217728))
	{
		return 1;
	}
	if (func_544(iParam0) && !func_280(&(Local_62.f_1216[2]), "SCENE_SDNGUN_GAMBLER_GROUP", 0.985f))
	{
		func_559(*uParam1, "PBL_cower_idle_pos_02", sParam2, 0);
		func_559(*uParam1, "PBL_cower_idle", sParam2, 0);
		return 0;
	}
	if (*iParam0 == &Local_62.f_390[2] && !func_119(&(Local_62.f_390[2]->f_9), 268435456))
	{
		func_2015();
		func_535(*uParam1, sParam2);
		func_278(*uParam1, "PBL_cower_idle_pos_02", sParam2, 1);
	}
	else if (*iParam0 == &Local_62.f_390[3] && !func_119(&(Local_62.f_390[3]->f_9), 268435456))
	{
		func_2016();
		func_535(*uParam1, sParam2);
		func_278(*uParam1, "PBL_cower_idle", sParam2, 1);
	}
	else if (!func_119(&(Local_62.f_390[4]->f_9), 268435456))
	{
		func_2017();
		func_535(*uParam1, sParam2);
		func_278(*uParam1, "PBL_cower_idle", sParam2, 1);
	}
	func_772(&(iParam0->f_9), 134217728);
	return 1;
}

void func_1664(int* iParam0, float fParam1, float fParam2, var uParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, float fParam9)
{
	if (func_119(&(iParam0->f_9), 1))
	{
		return;
	}
	if (!func_119(&(iParam0->f_9), 2097152) && !func_119(&(iParam0->f_9), 32768))
	{
		if (func_276(&(iParam0->f_120), fParam1, 1, "gambler.timerGenericA"))
		{
			func_307(&(iParam0->f_120));
			func_278(*uParam3, sParam5, sParam4, 1);
			func_277(*uParam3, sParam7, 1, sParam4);
			func_224(iParam8);
			func_772(&(iParam0->f_9), 2097152);
		}
	}
	else if (!func_119(&(iParam0->f_9), 8388608))
	{
		if (func_276(&(iParam0->f_120), fParam2, 1, "gambler.timerGenericA") || func_119(&(iParam0->f_9), 32768))
		{
			func_307(&(iParam0->f_120));
			func_278(*uParam3, sParam6, sParam4, 1);
			func_277(*uParam3, sParam7, 1, sParam4);
			func_772(&(iParam0->f_9), 8388608);
		}
	}
	else if (!func_119(&(iParam0->f_9), 4194304))
	{
		if (func_812(*uParam3, sParam4, sParam6))
		{
			if (func_280(*uParam3, sParam4, fParam9))
			{
				if (!is_entity_dead(*iParam0))
				{
					_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
				}
				func_546(*uParam3, sParam4);
				func_772(&(iParam0->f_9), 4194304);
			}
		}
		else if (!func_544(iParam0))
		{
			if (!is_entity_dead(*iParam0))
			{
				_task_smart_flee_style_ped(*iParam0, Global_35, 3, 32768, -1082130432, -1, 0);
			}
			func_546(*uParam3, sParam4);
			func_772(&(iParam0->f_9), 4194304);
		}
	}
}

void func_1665(var uParam0, char[4] cParam1)
{
	if (func_119(&(uParam0->f_9), 32768))
	{
		return;
	}
	if (func_621(Local_62.f_1392[11]))
	{
		if (!func_620(Local_62.f_1392[11], 4f))
		{
			return;
		}
		else
		{
			func_307(Local_62.f_1392[11]);
		}
	}
	if (!func_119(&(uParam0->f_9), 65536))
	{
		return;
	}
	if ((func_119(&(uParam0->f_9), 2097152) || func_119(&(uParam0->f_9), 8388608)) || func_119(&(uParam0->f_9), 4194304))
	{
		return;
	}
	if (func_353(0, 1, 0, 0))
	{
		func_281(&(Local_62.f_1518), cParam1, *uParam0, Global_35, 0, 0, 1, 1);
		return;
	}
	func_317(Local_62.f_1392[11]);
	func_772(&(uParam0->f_9), 32768);
}

void func_1666()
{
	func_307(&(Local_62.f_390[2]->f_120));
	func_307(&(Local_62.f_390[3]->f_120));
	func_307(&(Local_62.f_390[4]->f_120));
}

int func_1667(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1435(1811977508, 1, 0))
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
			if (func_1765(iVar25, 0) && func_1857(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

char* func_1668()
{
	return "PROP_PLAYER_OPEN_RIFLECHEST_WINCHESTER";
}

void func_1669(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_1744(iParam0))
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

void func_1670(int* iParam0, int iParam1)
{
	if (!func_1030(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_1031(iParam0, 14);
		}
	}
}

bool func_1671(int iParam0)
{
	if (!func_74(iParam0, Local_62.f_1284))
	{
		return false;
	}
	if (func_74(iParam0, &(Local_62.f_1247[7])) || func_74(iParam0, &(Local_62.f_1247[8])))
	{
		return false;
	}
	return true;
}

void func_1672(int* iParam0, var uParam1, var uParam2)
{
	*uParam2 = _add_rope_2(0f, 0f, 1f, 0f, 0f, 0f, 0.32f, 7, false, 31, -1f);
	_0x522fa3f490e2f7ac(*uParam2, 1, 1);
	_0xbb3e9b073e66c3c9(*uParam2, 1, 0, 1, 0);
	_0xf27f1a8de4f50a1b(*uParam2, 0.025f, -0.025f, 0.9993f, 1321.729f, -1319.462f, 73.95f);
	_0x5a989b7ee3672a56(*uParam2, 1);
	attach_entities_to_rope(*uParam2, *uParam1, *iParam0, 1321.729f, -1319.462f, 74.2913f, -0.04f, 0f, 0.05f, 1.31f, 0, 0, "", "", 0, -1, 33646, 0, 0, 1, 1);
	_0x522fa3f490e2f7ac(*uParam2, 0, 1);
}

void func_1673(var uParam0, int iParam1)
{
	if (!func_50(uParam0, iParam1))
	{
		return;
	}
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1674()
{
	func_553(&(Local_62.f_1216[3]), "PBL_captive_shot_03", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[3]), "PBL_captive_shot_04", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[3]), "PBL_captive_shot_05", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1675()
{
	if (func_1494())
	{
		if (func_809("PRRGS_AILO_QG1") || func_809("PRRGS_AILO_QC1"))
		{
			return true;
		}
	}
	else if (func_809("PRRGS_JILO_QG1") || func_809("PRRGS_JILO_QC1"))
	{
		return true;
	}
	return false;
}

void func_1676()
{
	func_553(&(Local_62.f_1216[3]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[2]), "PBL_plr_leaves", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1677()
{
	func_553(&(Local_62.f_1216[3]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
	func_553(&(Local_62.f_1216[2]), "PBL_plr_returns", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1678(int iParam0)
{
	return (Local_62.f_170.f_12 && iParam0) != 0;
}

void func_1679(int iParam0)
{
	if (func_1678(iParam0))
	{
		return;
	}
	Local_62.f_170.f_12 = (Local_62.f_170.f_12 || iParam0);
}

void func_1680()
{
	func_943("SRGKREGMON", 0);
	if (func_605("PRRGS_AILO_QG1"))
	{
		if (!is_entity_dead(Local_62.f_170) && is_scripted_speech_playing(Local_62.f_170))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		func_943("PRRGS_AILO_QG1", bVar0);
	}
	if (func_605("PRRGS_JILO_QG1"))
	{
		if (!is_entity_dead(Local_62.f_170) && is_scripted_speech_playing(Local_62.f_170))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		func_943("PRRGS_JILO_QG1", bVar0);
	}
	if (!func_335(8388608))
	{
		func_943("SRGKIGP3e1", 0);
		func_943("SRGKIGP3e2", 0);
		func_943("SRGKIGP3e3", 0);
	}
	else if (!func_335(16777216))
	{
		func_943("PRRGS_G_LOIT1", 0);
		func_943("PRRGS_G_LOIT2", 0);
		func_943("PRRGS_G_LOIT3", 0);
	}
	func_943("SRGK_STEAL_1", 0);
	func_943("SRGK_STEAL_2", 0);
}

void func_1681(int* iParam0, int iParam1)
{
	iVar0 = &Local_62.f_1216[3];
	sVar1 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	switch (iParam0->f_10)
	{
		case 0:
			iVar4 = func_1637(*iParam0, Global_35, 1f);
			if (iVar4 == 2)
			{
				sVar2 = func_2018();
				func_1679(1);
			}
			else if (iVar4 == 3)
			{
				sVar2 = func_2019();
				func_1679(2);
			}
			else
			{
				return;
			}
			if (!func_559(iVar0, sVar2, sVar1, 0))
			{
				return;
			}
			func_1693();
			func_278(iVar0, sVar2, sVar1, 1);
			func_277(iVar0, "Stand_cower_bool", 0, sVar1);
			func_2020(1);
			break;
		case 1:
			if (func_1678(1))
			{
				sVar3 = func_2021();
			}
			else if (func_1678(2))
			{
				sVar3 = func_2022();
			}
			else
			{
				return;
			}
			if (!func_113(iVar0, sVar3, sVar1))
			{
				return;
			}
			if (func_276(Local_62.f_1392[10], 3.5f, 0, "TIMER_RHDGUN_GUNSMITH_RETURNS_TO_AFRAID_LOOP_FROM_AIM"))
			{
				func_277(iVar0, "Stand_cower_bool", 1, sVar1);
				func_2020(2);
			}
			else if (iParam1 == 4)
			{
				func_307(Local_62.f_1392[10]);
			}
			break;
		case 2:
			if (!func_113(iVar0, "afraid_loop_a", sVar1))
			{
				return;
			}
			func_2020(3);
			break;
		case 3:
			func_2023(1);
			func_2023(2);
			func_2023(32);
			func_317(Local_62.f_1392[15]);
			func_553(iVar0, "PBL_stand_cower_left", sVar1);
			func_553(iVar0, "PBL_stand_cower_right", sVar1);
			func_553(iVar0, "PBL_flinch_right", sVar1);
			func_553(iVar0, "PBL_flinch_left", sVar1);
			func_1298();
			func_2020(0);
			break;
	}
}

void func_1682(int* iParam0)
{
	iVar0 = &Local_62.f_1216[3];
	sVar1 = "SCENE_RHDGUN_BASEMENT_GUNSMITH";
	switch (iParam0->f_10)
	{
		case 0:
			iVar3 = func_1637(*iParam0, Global_35, 1f);
			if (iVar3 == 2)
			{
				sVar2 = "PBL_stand_flinch_right";
				func_1679(1);
			}
			else if (iVar3 == 3)
			{
				sVar2 = "PBL_stand_flinch_left";
				func_1679(2);
			}
			else
			{
				return;
			}
			if (!func_559(iVar0, sVar2, sVar1, 0))
			{
				return;
			}
			func_1693();
			func_278(iVar0, sVar2, sVar1, 1);
			func_2020(2);
			break;
		case 2:
			if (!func_113(iVar0, "afraid_loop_a", sVar1))
			{
				return;
			}
			func_2020(3);
			break;
		case 3:
			func_2023(1);
			func_2023(2);
			func_2023(64);
			func_317(Local_62.f_1392[16]);
			func_553(iVar0, "PBL_stand_cower_left", sVar1);
			func_553(iVar0, "PBL_stand_cower_right", sVar1);
			func_553(iVar0, "PBL_flinch_right", sVar1);
			func_553(iVar0, "PBL_flinch_left", sVar1);
			func_1298();
			func_2020(0);
			break;
	}
}

void func_1683()
{
	if (func_1494())
	{
		func_943("PRRGS_AILO_QC1", 0);
		func_943("PRRGS_JILO_QC1", 0);
	}
	else
	{
		func_943("PRRGS_AILO_QC1", 0);
		func_943("PRRGS_JILO_QG1", 0);
	}
	if (!func_335(4194304))
	{
		func_943("SRGKIG4d", 0);
		func_943("SRGKIG4d1", 0);
		func_943("SRGKIG4d2", 0);
		func_943("SRGKIG4d3", 0);
	}
	else if (!func_335(16777216))
	{
		func_943("PRRGS_C_LOIT1", 0);
		func_943("PRRGS_C_LOIT2", 0);
		func_943("PRRGS_C_LOIT3", 0);
	}
	if (func_44(1) || _is_ped_hogtied(Local_62.f_170))
	{
		func_943("PRRGS_IG6c1", 0);
		func_943("PRRGS_IG6c2", 0);
		func_943("PRRGS_IG6c3", 0);
		func_943("PRRGS_IG6c4", 0);
	}
	func_943("PRRGS_STEALB1", 0);
	func_943("SRGH_STEAL_1", 0);
	func_943("PRRGS_IG9_CAP", 0);
	func_943("PRRGS_RETURN_B", 0);
}

void func_1684()
{
	func_2024();
	func_535(&(Local_62.f_1216[2]), "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

void func_1685(int iParam0, var uParam1, char* sParam2)
{
	*uParam1 = iParam0;
}

bool func_1686(int iParam0, var uParam1)
{
	if (func_308(iParam0, 0, uParam1, &iVar0, 0, 0))
	{
		if (iVar0 == 4)
		{
			return true;
		}
	}
	return false;
}

bool func_1687()
{
	iVar0 = &Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	if (!func_113(iVar0, "afraid_loop_a", sVar1) && !func_113(iVar0, "afraid_loop_a_reset", sVar1))
	{
		return false;
	}
	return true;
}

bool func_1688()
{
	iVar0 = &Local_62.f_1216[2];
	sVar1 = "SCENE_RHDGUN_BASEMENT_CAPTIVE";
	if (!func_113(iVar0, "afraid_loop_b", sVar1) && !func_113(iVar0, "afraid_loop_b_reset", sVar1))
	{
		return false;
	}
	return true;
}

bool func_1689(int iParam0, char* sParam1)
{
	if (iLocal_46 != 51)
	{
		return false;
	}
	if (func_335(134217728) && !func_605("PRRGS_MISSHIM"))
	{
		return false;
	}
	if (!(func_812(iParam0, sParam1, "PBL_shoot_chains_standing") && func_1648(iParam0, sParam1, 0.456f, 0.592f)) && !(func_812(iParam0, sParam1, "PBL_shoot_chains_standing_cower") && func_1648(iParam0, sParam1, 0.492f, 0.62f)))
	{
		return false;
	}
	return true;
}

void func_1690(int iParam0, var uParam1, char* sParam2)
{
	vVar0 = { get_dead_ped_pickup_coords(iParam0, 1.2f, 1.5f) };
	*uParam1 = { vVar0.x, vVar0.y, (vVar0.z + 1f) };
}

int func_1691(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_221(16777216))
	{
		func_739((*uParam1)[0], 0, 0);
		return 0;
	}
	if (func_50(uParam2, 1024))
	{
		return 1;
	}
	if (func_119(&(Local_62.f_390[0]->f_9), 1))
	{
		func_739((*uParam1)[0], 0, 0);
		func_649(uParam2, 1024);
		return 0;
	}
	if ((!func_50(uParam2, 4) && !_is_ped_lassoed(iParam0)) && !_is_ped_hogtied(iParam0))
	{
		func_739((*uParam1)[0], 1, 0);
		func_649(uParam2, 4);
	}
	if (iParam3 != 0)
	{
		return 0;
	}
	if (func_145(Local_62.f_170, 0, 0))
	{
		stop_current_playing_speech(Local_62.f_170, 400);
	}
	func_596(&iParam0, "PRRGS_AILO_QG1", "PRRGS_JILO_QG1", 1);
	func_1297(1084227584);
	func_739((*uParam1)[0], 0, 0);
	func_1673(uParam2, 4);
	func_649(uParam2, 1024);
	return 1;
}

int func_1692(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_221(16777216))
	{
		func_739((*uParam1)[0], 0, 0);
		return 0;
	}
	if (func_44(1))
	{
		func_739((*uParam1)[0], 0, 0);
		return 0;
	}
	if (func_551(uParam2, 4096))
	{
		if (func_335(1048576))
		{
			func_297(Local_62.f_170, &(Local_62.f_390[0]), &(Local_62.f_170.f_42), 20000, vLocal_59, 1, 0);
			func_317(&(Local_62.f_390[0]->f_120));
			func_533(2097152);
			func_1149(1048576);
		}
		else if (func_335(2097152))
		{
			if (func_657(&(Local_62.f_390[0]->f_120), 11f))
			{
				func_307(&(Local_62.f_390[0]->f_120));
				func_297(Local_62.f_170, Global_35, &(Local_62.f_170.f_42), 10000, vLocal_59, 1, 0);
				func_1149(2097152);
			}
		}
		return 1;
	}
	if (!func_551(uParam2, 8))
	{
		func_1341((*uParam1)[0], "INTERACT_QUESTION", 0);
		func_916(uParam2, 8);
	}
	if (iParam3 != 0)
	{
		return 0;
	}
	func_302(0);
	func_596(&iParam0, "PRRGS_AILO_QC1", "PRRGS_JILO_QC1", 1);
	func_533(1048576);
	func_1297(1084227584);
	func_739((*uParam1)[0], 0, 0);
	func_947(uParam2, 8);
	func_916(uParam2, 4096);
	return 1;
}

void func_1693()
{
	func_1289();
	func_535(&(Local_62.f_1216[3]), "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1694()
{
	if (func_113(&(Local_62.f_1216[3]), "afraid_loop_a", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1695()
{
	func_553(&(Local_62.f_1216[3]), "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1696()
{
	if (func_113(&(Local_62.f_1216[2]), "afraid_loop_a", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1697()
{
	func_553(&(Local_62.f_1216[2]), "PBL_afraid_loop_a_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1698()
{
	if (func_113(&(Local_62.f_1216[2]), "afraid_loop_b", "SCENE_RHDGUN_BASEMENT_CAPTIVE"))
	{
		return true;
	}
	return false;
}

void func_1699()
{
	func_553(&(Local_62.f_1216[2]), "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_CAPTIVE");
}

bool func_1700()
{
	if (func_113(&(Local_62.f_1216[3]), "afraid_loop_b", "SCENE_RHDGUN_BASEMENT_GUNSMITH"))
	{
		return true;
	}
	return false;
}

void func_1701()
{
	func_553(&(Local_62.f_1216[3]), "PBL_afraid_loop_b_reset", "SCENE_RHDGUN_BASEMENT_GUNSMITH");
}

bool func_1702(int iParam0, char[4] cParam1, float fParam2, var uParam3, int iParam4)
{
	if (!func_276(Local_62.f_1392[5], fParam2, 0, "TIMER_RHDGUN_PLAY_DLG_PLAYER_LOITER"))
	{
		return false;
	}
	func_307(Local_62.f_1392[5]);
	func_1193(cParam1, iParam0, Global_35);
	func_297(iParam0, Global_35, uParam3, iParam4, vLocal_59, 1, 0);
	return true;
}

Vector3 func_1703()
{
	return 1324.013f, -1319.592f, 74.51466f;
}

void func_1704(int* iParam0)
{
	func_302(0);
	func_596(iParam0, "PRSGS_MONEY", "PRSGS_MONEYJ", 1);
}

void func_1705(int iParam0)
{
	iLocal_49 = iParam0;
}

int func_1706()
{
	return iLocal_49;
}

char* func_1707()
{
	return "PB_FLINCH_L_BASE1";
}

char* func_1708()
{
	return "pbBasementIdle1";
}

char* func_1709()
{
	return "PB_FLINCH_R_BASE1";
}

char* func_1710()
{
	return "PB_FLINCH_L_BASE2";
}

char* func_1711()
{
	return "pbBasementIdle2";
}

char* func_1712()
{
	return "PB_FLINCH_R_BASE2";
}

void func_1713(int iParam0, char* sParam1)
{
	func_553(iParam0, func_1708(), sParam1);
	func_553(iParam0, func_1711(), sParam1);
}

float func_1714(var uParam0)
{
	if (!func_621(uParam0))
	{
		return 0f;
	}
	if (func_1566(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_674() - uParam0->f_1);
}

char* func_1715()
{
	return "PB_COWER_R_BASE1";
}

char* func_1716()
{
	return "PB_COWER_L_BASE1";
}

char* func_1717()
{
	return "PB_COWER_R_BASE2";
}

char* func_1718()
{
	return "PB_COWER_L_BASE2";
}

void func_1719(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1955(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1720(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_2025())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1955(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_2026(iVar0);
			func_2027(iVar0, 0, 0);
		}
		func_1955(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_653(func_1491(1644987397), iVar1);
	}
}

void func_1721(int iParam0)
{
	iLocal_51 = iParam0;
}

void func_1722(var uParam0, int iParam1, int iParam2)
{
	if (!func_308(*uParam0, 0, &(uParam0->f_89), iParam1, 0, 0))
	{
		func_870(&(uParam0->f_9), 16384);
		return;
	}
	if (*iParam1 == 8 || *iParam1 == 16384)
	{
		func_870(&(uParam0->f_9), 16384);
		return;
	}
	func_772(&(uParam0->f_9), 16384);
}

void func_1723(var uParam0, struct<2> Param1, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, int iParam10)
{
	if (!func_119(&(uParam0->f_9), 8192))
	{
		return;
	}
	if (func_119(&(uParam0->f_9), 1048576))
	{
		return;
	}
	if (!func_621(&(uParam0->f_123)))
	{
		func_317(&(uParam0->f_123));
	}
	else if (func_657(&(uParam0->f_123), fParam9))
	{
		if (func_145(*uParam0, 0, 1))
		{
			clear_ped_tasks(*uParam0, 1, 0);
			open_sequence_task(&iVar0);
			if (iParam10 != 2)
			{
				task_go_to_coord_while_aiming_at_entity(0, -284.7688f, 815.3671f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				task_go_to_coord_while_aiming_at_entity(0, -283.2133f, 816.1548f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				task_go_to_coord_while_aiming_at_entity(0, -283.1447f, 817.402f, 118.3863f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			}
			task_put_ped_directly_into_cover(0, Param1.f_1, 4000, 0, 0f, 0, 0, Param1, 1, 0, 0);
			task_combat_ped(0, Global_35, 0, 0);
			func_547(*uParam0, &iVar0, 0, 0, 1, 1);
		}
		func_772(&(uParam0->f_9), 1048576);
	}
}

bool func_1724()
{
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (func_145(&(Local_62.f_390[iVar0]), 0, 1))
		{
			if (is_ped_shooting(&(Local_62.f_390[iVar0])))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1725()
{
	switch (iLocal_29)
	{
		case 3:
			iVar0 = 0;
			while (iVar0 < iLocal_57)
			{
				if (iVar0 > 2)
				{
					return;
				}
				if (func_145(&(Local_62.f_1148[iVar0]), 0, 1))
				{
					if (!func_67(Local_62.f_1322[iVar0]->f_1))
					{
						task_seek_cover_to_cover_point(&(Local_62.f_1148[iVar0]), &(Local_62.f_1322[iVar0]), Global_36, -1, 0, 0, 0);
					}
				}
				iVar0++;
			}
			break;
	}
}

void func_1726(int iParam0)
{
	Global_1934266->f_78.f_62 = iParam0;
}

int func_1727()
{
	return -488411758;
}

void func_1728(bool bParam0)
{
	if (bParam0)
	{
		func_412();
		func_239(0);
	}
	else
	{
		func_251(0);
	}
	func_29(64);
}

bool func_1729(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < iLocal_55)
	{
		if (iVar0 != iParam0)
		{
			if (func_119(&(Local_62.f_390[iVar0]->f_9), 1048576))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1730(float fParam0)
{
	if (func_279(&(Local_62.f_1216[7]), "bFemaleGrabGun", "SCENE_VALDOC_FEMALEPANIC"))
	{
		return false;
	}
	if (!func_771(Global_35))
	{
		return false;
	}
	if (!func_771(&(Local_62.f_390[3])))
	{
		return false;
	}
	if (!func_353(0, 1, 0, 0))
	{
		return false;
	}
	if (!func_276(Local_62.f_1392[3], fParam0, 0, "TIMER_VALDOC_DELETE_DEPUTY_FEM_LOITER"))
	{
		return false;
	}
	func_307(Local_62.f_1392[3]);
	return true;
}

void func_1731(int* iParam0)
{
	if (func_119(&(iParam0->f_9), 256))
	{
		return;
	}
	if (is_entity_dead(*iParam0))
	{
		return;
	}
	if (func_74(*iParam0, Local_62.f_1290))
	{
		return;
	}
	func_2028(*iParam0, &(Local_62.f_1247[12]), 1);
	func_772(&(iParam0->f_9), 256);
}

bool func_1732()
{
	if (func_280(&(Local_62.f_1216[4]), "SCENE_VALDOC_HOLDUPBACKROOM", 0.93f))
	{
		return true;
	}
	return false;
}

void func_1733(int* iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_145(*iParam0, 0, 1))
	{
		return;
	}
	set_current_ped_weapon(*iParam0, iParam2, false, 0, false, false);
	task_put_ped_directly_into_cover(*iParam0, uParam1->f_1, -1, 0, 0f, 0, 0, *uParam1, 0, iParam3, 0);
}

void func_1734()
{
	iVar0 = &Local_62.f_1216[7];
	cVar1 = "SCENE_VALDOC_FEMALEPANIC";
	if (!_does_anim_scene_exist(iVar0))
	{
		return;
	}
	func_805(iVar0, "pedFlirtFemale", &(Local_62.f_390[3]), cVar1, 1);
	func_806(iVar0, "weapPistolFemale", &(Local_62.f_1226[12]), cVar1, 1);
	func_277(iVar0, "bFemaleGrabGun", 0, cVar1);
}

bool func_1735(var uParam0)
{
	if (func_579(*uParam0, "GangStartsSitting") || func_583(*uParam0, "script_proc@robberies@shop@valdoc@ig_4", "count_loop_short_gang"))
	{
		return true;
	}
	return false;
}

int func_1736(int iParam0, var uParam1, int iParam2)
{
	task_turn_ped_to_face_entity(iParam0, uParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

bool func_1737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_145(&(Local_62.f_1021[0]), 0, 1))
			{
				return true;
			}
			return false;
		case 4:
		case 8:
			if (func_145(Local_62.f_170, 0, 1))
			{
				return true;
			}
			return false;
		case 1:
		case 5:
			if (func_145(&(Local_62.f_390[0]), 0, 1))
			{
				return true;
			}
			return false;
		case 2:
		case 6:
			if (func_145(&(Local_62.f_390[1]), 0, 1) || func_145(&(Local_62.f_390[3]), 0, 1))
			{
				return true;
			}
			return false;
		case 3:
			if (func_145(&(Local_62.f_390[2]), 0, 1))
			{
				return true;
			}
			return false;
		case 7:
			if (func_145(&(Local_62.f_390[3]), 0, 1))
			{
				return true;
			}
			return false;
		default:
			break;
	}
	return false;
}

void func_1738()
{
	if (!_does_anim_scene_exist(&(Local_62.f_1216[6])))
	{
		return;
	}
	if (_does_anim_scene_exist(&(Local_62.f_1216[2])))
	{
		set_anim_scene_paused(&(Local_62.f_1216[2]), true);
	}
	if (!is_entity_dead(&(Local_62.f_1226[12])))
	{
		set_entity_visible(&(Local_62.f_1226[12]), true);
		set_anim_scene_entity(&(Local_62.f_1216[6]), "weapPistolFemale", &(Local_62.f_1226[12]), 0);
	}
	if (func_145(&(Local_62.f_390[1]), 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[6]), "pedFlirtMale", &(Local_62.f_390[1]), 0);
	}
	if (func_145(&(Local_62.f_390[3]), 0, 1))
	{
		set_anim_scene_entity(&(Local_62.f_1216[6]), "pedFlirtFemale", &(Local_62.f_390[3]), 0);
	}
}

void func_1739()
{
	func_943("SRVD_DOPEN2", 0);
	func_943("SRVD_DOPEN3", 0);
}

void func_1740(int* iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	open_sequence_task(&iVar0);
	task_combat_ped(0, Global_35, 0, 0);
	func_547(*iParam0, &iVar0, 0, 0, 1, 1);
	if (_does_volume_exist(iParam10))
	{
		_0xfc3db99c8144cd81(*iParam0, iParam10, 0, 0, 0);
	}
	func_660(*iParam0, &(iParam0->f_1), 831283580, 580546400, 0, 0);
}

void func_1741(int* iParam0)
{
	if (func_50(&(iParam0->f_13), 128))
	{
		return;
	}
	if (is_ped_ragdoll(*iParam0))
	{
		bVar0 = true;
	}
	if (func_308(*iParam0, 0, &(iParam0->f_14), &iVar1, 0, 0))
	{
		if ((iVar1 == 2 || iVar1 == 2048) || is_entity_on_fire(*iParam0))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
		func_2029();
		return;
	}
	if (!func_50(&(iParam0->f_13), 1))
	{
		return;
	}
	if (!func_221(2097152))
	{
		return;
	}
	if (!func_221(524288))
	{
		return;
	}
	if (func_621(Local_62.f_1392[8]))
	{
		if (!func_620(Local_62.f_1392[8], 10f))
		{
			return;
		}
	}
	if (!func_50(&(iParam0->f_13), 2))
	{
		if (func_1494())
		{
			func_1258(&(iParam0->f_13), &(iParam0->f_85), 1);
		}
		else
		{
			func_739(iParam0->f_85[0], 1, 0);
			func_649(&(iParam0->f_13), 2);
			func_649(&(iParam0->f_13), 4);
		}
	}
	else if ((!func_50(&(iParam0->f_13), 2048) && func_50(&(iParam0->f_13), 1024)) && func_1494())
	{
		if (!func_2030(iParam0->f_85[1], 1, 0))
		{
			func_739(iParam0->f_85[1], 1, 0);
			func_649(&(iParam0->f_13), 8);
		}
	}
	else if (!func_50(&(iParam0->f_13), 1024) && func_50(&(iParam0->f_13), 2048))
	{
		if (!func_2030(iParam0->f_85[0], 1, 0))
		{
			func_739(iParam0->f_85[0], 1, 0);
			func_649(&(iParam0->f_13), 4);
		}
	}
	if (iParam0->f_209 == 0)
	{
		if (!func_50(&(iParam0->f_13), 1024))
		{
			func_302(0);
			func_596(iParam0, "SRVD_K_AILOG1", "SRVD_K_JILOG1", 1);
			func_739(iParam0->f_85[0], 0, 0);
			func_1673(&(iParam0->f_13), 4);
			func_649(&(iParam0->f_13), 1024);
			func_317(Local_62.f_1392[8]);
			if (func_50(&(iParam0->f_13), 2048) || func_158())
			{
				func_1673(&(iParam0->f_13), 128);
			}
		}
	}
	else if (iParam0->f_209 == 1 && func_1494())
	{
		if (!func_50(&(iParam0->f_13), 2048))
		{
			func_302(0);
			func_596(iParam0, "SRVD_K_AILOT1", "SRVD_K_JILOT1", 1);
			func_739(iParam0->f_85[1], 0, 0);
			func_1673(&(iParam0->f_13), 8);
			func_649(&(iParam0->f_13), 2048);
			func_317(Local_62.f_1392[8]);
			if (func_50(&(iParam0->f_13), 1024))
			{
				func_1673(&(iParam0->f_13), 128);
			}
		}
	}
}

void func_1742(int* iParam0)
{
	if (func_44(134217728))
	{
		return;
	}
	if (!func_74(Global_35, &(Local_62.f_1247[14])))
	{
		return;
	}
	func_328();
	func_1258(&(iParam0->f_13), &(iParam0->f_85), 0);
	func_1673(&(iParam0->f_13), 128);
	func_91(134217728);
}

void func_1743(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	if (_0xcc2b20596e29e4e3(iParam0, 30) == bParam1)
	{
		return;
	}
	set_ped_combat_attributes(iParam0, 30, bParam1);
}

bool func_1744(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_1745(int iParam0)
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

bool func_1746(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_1939(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_2031((386 + iVar28), 1);
			if (func_2032(iParam0, &Var0, iVar5, 0))
			{
				if (func_2033(iParam0, &Var6, iVar5))
				{
					Var29 = { func_2034(iParam0, Var0, iVar5, 0) };
					func_2035(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1862(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_1863(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_2036(iParam0, iParam1);
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

void func_1747(int iParam0, int iParam1, float fParam2)
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

bool func_1748(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_1749()
{
	iVar1 = 0;
	while (iVar1 < iLocal_57)
	{
		if (!func_145(&(Local_62.f_1148[iVar1]), 0, 1))
		{
		}
		else if (iVar1 == 0 || iVar1 == 1)
		{
			open_sequence_task(&iVar0);
			task_set_sphere_defensive_area(0, Local_62.f_1322[iVar1]->f_1, 1f);
			task_combat_ped(0, Global_35, 0, 0);
			func_547(&(Local_62.f_1148[iVar1]), &iVar0, 0, 0, 1, 1);
		}
		else if (iVar1 == 2)
		{
			_0xfc3db99c8144cd81(&(Local_62.f_1148[iVar1]), &(Local_62.f_1247[13]), 0, 0, 0);
			open_sequence_task(&iVar0);
			set_sequence_to_repeat(iVar0, true);
			task_combat_ped_timed(0, Global_35, 5000, 0);
			task_go_to_coord_while_aiming_at_entity(0, -282.4849f, 792.5594f, 117.4793f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			task_combat_ped_timed(0, Global_35, 7000, 0);
			task_go_to_coord_while_aiming_at_entity(0, -284.657f, 788.2574f, 117.5464f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			task_combat_ped_timed(0, Global_35, 6000, 0);
			task_go_to_coord_while_aiming_at_entity(0, -280.3936f, 789.9613f, 117.3537f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			func_547(&(Local_62.f_1148[iVar1]), &iVar0, 0, 0, 1, 1);
		}
		else if (iVar1 == 3)
		{
			task_combat_ped(&(Local_62.f_1148[iVar1]), Global_35, 0, 0);
		}
		else
		{
			open_sequence_task(&iVar0);
			task_go_to_coord_while_aiming_at_entity(0, -282.3903f, 782.9296f, 118.5073f, Global_35, 2f, 1, 1f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
			task_shoot_at_entity(0, Global_35, -1, 0, 0);
			func_547(&(Local_62.f_1148[iVar1]), &iVar0, 0, 0, 1, 1);
		}
		iVar1++;
	}
}

void func_1750()
{
	iVar0 = 0;
	while (iVar0 < iLocal_57)
	{
		func_61(&(Local_62.f_1148[iVar0]->f_1));
		iVar0++;
	}
}

void func_1751(int iParam0)
{
	if (!func_120(iParam0))
	{
		return;
	}
	Local_62.f_1623 = (Local_62.f_1623 - (Local_62.f_1623 && iParam0));
}

var func_1752(int iParam0)
{
	Var1 = { func_1491(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1753(int iParam0)
{
	switch (iParam0)
	{
		case 29:
			return -137688725;
		case 43:
			return -2011875989;
		case 61:
			return 1574026908;
		case 73:
			return 911048422;
		default:
			break;
	}
	return 0;
}

char* func_1754()
{
	return "unnamed";
}

void func_1755(var uParam0, int iParam1)
{
	if (!func_174(uParam0->f_3, iParam1))
	{
		func_1597(&(uParam0->f_3), iParam1);
	}
}

float func_1756(vector3 vParam0, int iParam3)
{
	return func_54(Global_35, vParam0, iParam3);
}

bool func_1757(var uParam0, int iParam1)
{
	return func_174(uParam0->f_3, iParam1);
}

int func_1758(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_2037(iVar0, 2))
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
		func_2038(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1759(var uParam0, int iParam1)
{
	if (func_174(uParam0->f_3, iParam1))
	{
		func_182(&(uParam0->f_3), iParam1);
	}
}

void func_1760(int iParam0)
{
	if (func_145(iParam0, 0, 1))
	{
		clear_ped_tasks(iParam0, 1, 0);
		clear_ped_secondary_task(iParam0);
	}
}

void func_1761(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = floor((get_control_unbound_normal(iParam8, iParam4) * 127f));
	*uParam1 = floor((get_control_unbound_normal(iParam8, iParam5) * 127f));
	*iParam2 = floor((get_control_unbound_normal(iParam8, iParam6) * 127f));
	*iParam3 = floor((get_control_unbound_normal(iParam8, iParam7) * 127f));
}

float func_1762(float fParam0, float fParam1, float fParam2)
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

void func_1763(vector3 vParam0)
{
	if (!Global_1935630->f_12)
	{
		func_2039(vParam0);
		func_2040(vParam0);
	}
}

int func_1764(vector3 vParam0)
{
	iVar0 = func_2041(vParam0, 0f, 0f, 0, 2);
	return func_2041(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_1765(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_1766(int iParam0)
{
	if (!func_1765(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1767(int iParam0, int iParam1)
{
	if (!func_1765(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_2042(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_2043("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_2044(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1744(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_2045(iVar1);
				return true;
			}
			iVar3++;
		}
		func_2045(iVar1);
	}
	return false;
}

int func_1768(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1765(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1766(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_2042(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_2046(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1979(bParam2), iParam0, 0);
	return iVar2;
}

int func_1769(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1940(iVar0);
}

int func_1770(int iParam0, int iParam1)
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

int func_1771(int iParam0)
{
	if (!func_1765(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

Vector3 func_1772(int iParam0)
{
	if (func_2047(iParam0))
	{
		return func_2048(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

bool func_1773(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1548((*Global_1347702)[iParam0]->f_15) != 0)
		{
			(*Global_1347702)[iParam0]->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if ((*Global_1347702)[iParam0]->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

void func_1774(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_1775(var uParam0, int iParam1)
{
	switch (iLocal_29)
	{
		case 3:
			set_ped_config_flag(*uParam0, 6, true);
			if (func_797(0))
			{
			}
			else
			{
				set_ped_relationship_group_hash(*uParam0, -1996978098);
			}
			set_ped_can_be_targetted(*uParam0, true);
			set_ped_combat_movement(*uParam0, 2);
			set_ped_combat_attributes(*uParam0, 28, true);
			set_ped_combat_attributes(*uParam0, 24, false);
			set_ped_shoot_rate(*uParam0, 80);
			break;
	}
}

bool func_1776(int iParam0)
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

void func_1777(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_2049(iParam0, iParam1))
		{
			if (func_2050(iParam0, iParam1))
			{
				if (func_2051(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_2052(iParam0);
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

void func_1778(int iParam0, int iParam1, bool bParam2)
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

void func_1779(int iParam0, bool bParam1)
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

void func_1780(int iParam0, int iParam1)
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

char* func_1781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@proc@shoprobberies@GLOBAL@CLERK_OPEN_REGISTER@BASE";
		default:
			break;
	}
	return "bad anim scene";
}

void func_1782(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_1783(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_2037(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_1784(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_1785(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

void func_1786(int* iParam0)
{
	_copy_memory(iParam0, &(Global_1879534->f_7301), 243);
}

bool func_1787()
{
	if (func_815(43) && !func_815(44))
	{
		return false;
	}
	if (func_815(67) && func_2053() != 8)
	{
		return false;
	}
	return true;
}

float func_1788(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_1789(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1790(int iParam0, int iParam1)
{
	Var1 = { func_652(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_1791(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_1792()
{
	if (func_174(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_174(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1793(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1794()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_2054(iVar0);
		if (func_174(func_2055(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1795(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1796(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_1768(-1845241476, 0, 0);
	iVar1 = func_1768(1654063339, 0, 0);
	iVar2 = func_1768(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1797(int iParam0)
{
	Var1 = { func_1869(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1798()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_2056(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1799(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

void func_1800(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_444(iParam0))
	{
		return;
	}
	if (func_1000(iParam0))
	{
		func_627(iParam0, 0, 2);
	}
	iVar0 = func_2057(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_1801(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_863(Global_1898330[iParam0]);
		func_2058((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

bool func_1802(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_2059((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1803(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1813((*uParam0)[iVar0]))
		{
			func_1031((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_1804(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_930(16))
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
					func_2060(16);
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

void func_1805(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1997(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_1806(int iParam0)
{
	return (func_2061(iParam0, 4) || func_2061(iParam0, 5));
}

int func_1807(int iParam0)
{
	return func_2061(iParam0, 7);
}

int func_1808(int iParam0)
{
	return func_2061(iParam0, 6);
}

void func_1809(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1813(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1997(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1810(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_2062(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15))
		{
			bVar1 = true;
		}
		if (func_2063(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_1456(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_1456(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_2064(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1811(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_2065(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_2066(iParam1, 1))
	{
		func_2067(iParam1, 1);
		return true;
	}
	return false;
}

void func_1812(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1813(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1814(int iParam0)
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

void func_1815(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_1816(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1817(int iParam0)
{
	if (!func_2068(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_1818(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_2069(iParam0);
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

int func_1819(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_1833(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1820(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_1821(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_1822()
{
	return Global_40.f_11095.f_35;
}

void func_1823(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_2070(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1824(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1824(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_2070(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_2071(1);
	}
}

bool func_1825(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1826()
{
	iVar0 = func_2072((*Global_1347702)[9]->f_15);
	iVar1 = func_2072((*Global_1835011)[69]->f_1);
	if (func_2073(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1827(int iParam0)
{
	if (!func_165(iParam0))
	{
		return false;
	}
	return func_445((*Global_1835011)[iParam0]->f_1, 1);
}

int func_1828(int iParam0)
{
	if (func_1002(iParam0) == 1)
	{
		return func_441(iParam0);
	}
	return -1;
}

int func_1829(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_2074(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_2075(iVar6);
	}
	return iVar5;
}

int func_1830(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_2076(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_1831(int iParam0, bool bParam1)
{
	func_2077(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_1832(int iParam0)
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

void func_1833(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1831(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_1834(2, *uParam0);
		}
		else
		{
			func_1835(2, *uParam0);
		}
	}
	func_2078(uParam0);
}

void func_1834(int iParam0, int iParam1)
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

void func_1835(int iParam0, int iParam1)
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

void func_1836(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_2079();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_2080(iParam0);
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
	if (func_435(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_158())
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
	Global_40.f_11095.f_35 = func_1499(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_2079();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_2081(iVar1);
		func_2083(func_2082(), 0, 4000);
		func_2084(Global_40.f_11095.f_35);
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
		func_2085(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_653(func_1491(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1448(14))
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
					sParam4 = func_2086(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1955(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1955(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_653(func_1491(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1448(4))
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
					sParam4 = func_2086(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_1955(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1955(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1491(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1549(10, 1);
	}
}

void func_1837(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_1838(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_1839(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1840(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_159() == -1)
	{
		if (func_2087(iParam0) && func_2088(iParam0))
		{
			func_2089(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1841(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_2090(iParam0, iParam1);
	Var0 = { func_1939(iParam0, 0, 1) };
	iVar5 = func_2091(iParam0, &Var0, 0, 0);
	iVar6 = func_2092(iParam0, 0);
	if ((iVar5 > 1 && !func_1506()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1857(iParam0, -2051813666))
		{
			func_575(583, 1);
		}
		else
		{
			func_575(582, 0);
		}
	}
	if (func_2093(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1842(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1913(iParam0, -949239683))
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

bool func_1843(int iParam0)
{
	if (func_159() != -1)
	{
		return false;
	}
	return func_1844(iParam0) != 0;
}

int func_1844(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_2094())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_2095(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_1845(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1846(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_2094())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1845(iVar0))
		{
			if (func_1435(func_2095(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1847(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_2096(48);
	func_1554(0, -1);
}

bool func_1848(int iParam0)
{
	if (func_159() != -1)
	{
		return false;
	}
	return func_445((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1849(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1850(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1851(int iParam0)
{
	if (func_159() != -1)
	{
		return false;
	}
	return func_445((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1852(int iParam0)
{
	if (func_159() != -1)
	{
		return false;
	}
	if (!func_442(iParam0))
	{
		return false;
	}
	return func_413((*Global_1347702)[iParam0]->f_15);
}

int func_1853()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_1435(func_2097(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1854(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_814() && (func_1852(38) || func_1848(38)))
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
			if (func_814() && (func_1852(39) || func_1848(39)))
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
			iVar9 = func_2098(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_814() && (func_1852(41) || func_1848(41)))
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
			if (func_814() && (func_1852(49) || func_1848(49)))
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
			iVar9 = func_2098(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_2099(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_2100(iParam0, iVar13, iVar14))
	{
	}
	if (func_2101(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_2102(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_2103(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_2104(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_2105(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1855(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1856(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_814() && (func_1852(38) || func_1848(38)))
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
			if (func_814() && (func_1852(39) || func_1848(39)))
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
			if (func_814() && (func_1852(49) || func_1848(49)))
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
		if (func_814() && (func_1852(38) || func_1848(38)))
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
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_1963(_create_var_string(2, sVar0), _create_var_string(2, func_2107(func_1850(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_814() && (func_1852(39) || func_1848(39)))
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
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_814() && (func_1852(49) || func_1848(49)))
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
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_2106(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1857(int iParam0, int iParam1)
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

bool func_1858(int iParam0, int iParam1)
{
	if (!func_1765(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

void func_1859(int iParam0)
{
	if (!func_861(iParam0))
	{
		return;
	}
	func_2108(iParam0);
	func_2109(iParam0);
}

int func_1860(int iParam0, bool bParam1)
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
	if (func_1765(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_2110(iVar0) || func_1745(iVar0))
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

int func_1861(int iParam0, bool bParam1)
{
	if (!func_1765(iParam0, 0))
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

bool func_1862(bool bParam0)
{
	if (func_159() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1979(bParam0));
}

bool func_1863(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1865(iParam0))
	{
		return false;
	}
	if (!func_1862(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_1864(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1861(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_159() == -1)
		{
			func_1669(iVar0);
			if (iParam1 == 1248274121)
			{
				func_2111(iVar0);
			}
		}
		if (!func_2093(iParam0, &uVar1, 1, 0, 0))
		{
			func_2089(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_2112(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_1746(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_1746(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_1746(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_158())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1748(iVar0))
				{
					func_1746(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
				}
			}
		}