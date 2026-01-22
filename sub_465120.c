// 函数: sub_465120
// 地址: 0x465120
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int64_t* var_14 = nullptr
int64_t* var_8 = nullptr
int32_t* var_2c = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_10 = GetCurrentProcessId()
char var_c = 0
sub_40a37c(0, &var_10, "Delphi%.8X", &var_8)
sub_404bdc(&data_4b1c58, var_8)
data_4b1c54 = GlobalAddAtomA(sub_405018(data_4b1c58))
int32_t var_24 = data_4af7f4
char var_20 = 0
uint32_t var_1c = GetCurrentThreadId()
char var_18 = 0
sub_40a37c(1, &var_24, "ControlOfs%.8X%.8X", &var_14)
sub_404bdc(&data_4b1c5c, var_14)
data_4b1c56 = GlobalAddAtomA(sub_405018(data_4b1c5c))
uint32_t eax_11
int32_t edx_4
eax_11, edx_4 = RegisterWindowMessageA(sub_405018(data_4b1c5c))
data_4b1c60 = eax_11
edx_4.b = 1
data_4b1c98 = sub_41a364(sub_417654+0x10c, edx_4)
int32_t edx_5
void* ebp_1
edx_5, ebp_1 = sub_464d28()
edx_5.b = 1
int32_t* eax_13
int32_t edx_6
eax_13, edx_6 = sub_464ad4(sub_453df6+0x14a, edx_5)
data_4b1c40 = eax_13
edx_6.b = 1
*data_4ac4b8 = sub_473e7c(sub_46b498+0x12c, edx_6)
int32_t** edx_7
edx_7.b = 1
*data_4ac2fc = sub_4750fc(sub_46b498+0x230, edx_7)
int32_t** edx_8
edx_8.b = 1
sub_47755c(*data_4ac2fc, edx_8.b)
sub_4198b0(sub_4514b4, sub_454490, 0x454480)
HMODULE hModule = GetModuleHandleA("USER32")

if (hModule != 0)
    data_4ab85c = GetProcAddress(hModule, "AnimateWindow")

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_2c_1)(int32_t* arg1 @ ebp) = sub_46529f
sub_404b88(ebp_1 - 0x10)
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
