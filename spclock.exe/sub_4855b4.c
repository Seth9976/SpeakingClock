// 函数: sub_4855b4
// 地址: 0x4855b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_50 = ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
HDC ExceptionList_1
sub_403578(&ExceptionList_1, 0x30, 0)
void* eax_1 = sub_43fea4()
sub_404bdc(eax_1 + 0x18, arg2)
sub_43f598(eax_1)
HDC ExceptionList_2 = sub_43f934(eax_1)
ExceptionList_1 = ExceptionList_2
HDC ExceptionList_3 = ExceptionList_2
int32_t eax_7 = GetDeviceCaps(sub_43f934(eax_1), 0x58)
int32_t eax_10 = GetDeviceCaps(sub_43f934(eax_1), 0x5a)
int32_t var_34
int32_t var_30
int32_t var_28

if (sub_406cb8(&arg1[0xb2]) == 0)
    var_34 = divs.dp.d(sx.q(arg1[0xb2] * 0x5a0), eax_7)
    var_30 = divs.dp.d(sx.q(arg1[0xb3] * 0x5a0), eax_10)
    int32_t var_2c_1 = divs.dp.d(sx.q(arg1[0xb4] * 0x5a0), eax_7)
    var_28 = divs.dp.d(sx.q(arg1[0xb5] * 0x5a0), eax_10)
else
    int32_t var_2c = divs.dp.d(sx.q(sub_43f964(eax_1) * 0x5a0), eax_7)
    var_28 = divs.dp.d(sx.q(sub_43f948(eax_1) * 0x5a0), eax_10)
int32_t var_24 = var_34
void var_20
int32_t* edi_2 = &var_20
int32_t* esi_2 = &var_30
*edi_2 = *esi_2
void* edi_3 = &edi_2[1]
void* esi_3 = &esi_2[1]
*edi_3 = *esi_3
*(edi_3 + 4) = *(esi_3 + 4)
void var_48
void* edi_6 = &var_48
int32_t* esi_7 = &var_30
*edi_6 = *esi_7
void* edi_7 = edi_6 + 4
void* esi_8 = &esi_7[1]
*edi_7 = *esi_8
*(edi_7 + 4) = *(esi_8 + 4)
LRESULT i = 0
sub_457748()
int32_t var_10 = 0xffffffff
int32_t iMode = SetMapMode(ExceptionList_1, MM_TEXT)
LPARAM lParam_1 = 0
WPARAM wParam = 0
HDC ExceptionList = 0x439
SendMessageA(sub_45f888(arg1), ExceptionList, wParam, lParam_1)
int32_t* var_5c_5 = &var_4
int32_t (* var_60_3)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

do
    int32_t var_34_1 = var_34
    int32_t* edi_10 = &var_30
    void* esi_12 = &var_48
    *edi_10 = *esi_12
    void* edi_11 = &edi_10[1]
    void* esi_13 = esi_12 + 4
    *edi_11 = *esi_13
    *(edi_11 + 4) = *(esi_13 + 4)
    LRESULT i_1 = i
    i = SendMessageA(sub_45f888(arg1), 0x439, 1, &ExceptionList_1)
    
    if (0 s> i && i != 0xffffffff)
        sub_43f654(eax_1)
    
    if (0 s<= i)
        break
while (i != 0xffffffff)

sub_43f620(eax_1)
fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_5c_6)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_485782
LPARAM lParam = 0
ExceptionList = nullptr
SendMessageA(sub_45f888(arg1), 0x439, ExceptionList, lParam)
ExceptionList = ExceptionList_1
return SetMapMode(ExceptionList, iMode)
