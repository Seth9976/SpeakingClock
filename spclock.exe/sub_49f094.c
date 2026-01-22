// 函数: sub_49f094
// 地址: 0x49f094
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
sub_404074(arg1, arg2)
char var_9 = arg2.b
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_49f5ec(arg1, 0)
sub_49f5fc(arg1, 0)
sub_403c68(arg1[0x31])
sub_403c68(arg1[0x32])
sub_403c68(arg1[0x33])
int32_t* var_28 = &var_4
int32_t (* var_2c)() = j_sub_4042b4
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_9 = arg1[0xd]

if (eax_9 != 0)
    sub_403c68(eax_9)

fsbase->NtTib.ExceptionList = ExceptionList
fsbase->NtTib.ExceptionList = ExceptionList_1
void (__stdcall* var_1c_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_49f195

if ((arg1[7].b & 0x10) == 0)
    int32_t* var_20_1 = arg1
    ExceptionList_1 = sub_49f294
    sub_476b18(*data_4ac2fc, ExceptionList_1)
    
    if (sub_403df4(arg1[1], &data_453234) != 0)
        sub_49f408(arg1)

sub_49ee10()
uint32_t edx_2
edx_2.b = var_9 & 0xfc
return sub_423380(arg1, edx_2)
