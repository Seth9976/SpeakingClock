// 函数: sub_46d790
// 地址: 0x46d790
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
sub_404074(arg1, arg2)
char var_9 = arg2.b
sub_4757dc(data_4b1ce0, arg1)

if ((arg1[7].b & 8) == 0)
    (*(**data_4ac4a8 + 0x14))()

int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x9f].b != 0)
    (*(*arg1 + 0xe8))()

sub_471284(arg1, 0)

if (sub_45fc28(arg1) != 0)
    (*(*arg1 + 0xb4))()

sub_4741d0(data_4b1ce4)
sub_403c68(arg1[0xa0])
sub_403c68(arg1[0xa2])
sub_40eb14(&arg1[0xcb])
sub_40eb14(&arg1[0xce])
sub_403c68(sub_478638(arg1))
sub_402ec4(arg1[0xa9])
uint32_t edx_5
edx_5.b = var_9 & 0xfc
sub_46cbbc(arg1, edx_5)
fsbase->NtTib.ExceptionList = ExceptionList
return (*(**data_4ac4a8 + 0x18))(sub_46d897)
