// 函数: sub_475309
// 地址: 0x475309
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
*(arg4 + 0x41) += arg3.b
*arg1 += arg1.b
*arg1 += arg1.b
int32_t entry_ebx
int32_t var_4 = entry_ebx + 1
int32_t var_8 = arg5 - 2
sub_404074(arg1, arg2)
sub_4785bc()
char* var_14 = arg1

if (*data_4ac22c == sub_476e5c)
    void* eax_3 = data_4ac22c
    *eax_3 = 0
    *(eax_3 + 4) = 0

char* var_c = arg1

if (*data_4ac320 == sub_477068)
    void* eax_6 = data_4ac320
    *eax_6 = 0
    *(eax_6 + 4) = 0

HMODULE hLibModule = *(arg1 + 0xa8)

if (hLibModule != 0)
    FreeLibrary(hLibModule)

arg1[0xa5] = 0
sub_477ca0(arg1)
sub_47755c(arg1, 0)
int32_t edx
edx.b = arg2.b & 0xfc
sub_423380(arg1, edx)
HWND eax_10 = *(arg1 + 0xc8)

if (eax_10 != 0)
    sub_424b84(eax_10)

char* var_1c_2 = arg1
sub_476b18(arg1, sub_475b1c)
HWND hWnd = *(arg1 + 0x30)

if (hWnd != 0 && arg1[0xac] != 0)
    if (*data_4ac1d0 != 0)
        SendMessageA(hWnd, 0x80, 1, 0)
    
    DestroyWindow(*(arg1 + 0x30))

if (*(arg1 + 0x4c) != 0)
    sub_406550(&arg1[0x4c])

void* eax_14 = *(arg1 + 0x40)

if (eax_14 != 0)
    sub_424aac(eax_14)

sub_403c68(*(arg1 + 0xb0))
sub_403c68(*(arg1 + 0x90))
sub_403c68(*(arg1 + 0x98))
int32_t result = sub_403c68(*(arg1 + 0xa0))

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
