// 函数: sub_467678
// 地址: 0x467678
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
int32_t var_c = arg2
void var_2c
sub_418a64(*(arg1 + 0x34), 0, 0, &var_2c, *(arg1 + 0x30))
sub_46833c(arg1)
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* eax_4 = sub_430618(sub_42a104+0x140, 1)
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x30)
(*(*eax_4 + 0x34))(ExceptionList, j_sub_40443c, &var_4, ExceptionList_1, j_sub_40443c, &var_4)
*(arg1 + 0x34)
(*(*eax_4 + 0x40))(arg1)
int32_t edx_2
edx_2.b = 1
int32_t* ExceptionList_2 = sub_430618(sub_42a104+0x140, edx_2)
int32_t* himl = &var_4
int32_t (* var_10_1)(void* arg1, void* arg2) = j_sub_40443c
ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
sub_431be0(ExceptionList_2, 1)
*(arg1 + 0x30)
(*(*ExceptionList_2 + 0x34))(ExceptionList_2, var_10_1, himl)
*(arg1 + 0x34)
(*(*ExceptionList_2 + 0x40))()
int32_t esi_2 = ImageList_GetImageCount(himl) - 1

if (esi_2 s>= 0)
    int32_t i_2 = esi_2 + 1
    int32_t i = 0
    int32_t i_1
    
    do
        if (arg3 == 0xffffffff || i == arg3)
            ebp_1[-5] = sub_430bec(ebp_1[-3])
            sub_42c258(ebp_1[-5], &ebp_1[-0xa])
            enum IMAGE_LIST_DRAW_STYLE fStyle = ILD_NORMAL
            int32_t y = 0
            ExceptionList_2 = nullptr
            HDC hdcDst = sub_42c73c(ebp_1[-5])
            ImageList_Draw(ebp_1[-2], i, hdcDst, ExceptionList_2, y, fStyle)
            ebp_1[-6] = sub_430bec(ebp_1[-4])
            sub_42c258(ebp_1[-6], &ebp_1[-0xa])
            enum IMAGE_LIST_DRAW_STYLE fStyle_1 = ILD_MASK
            int32_t y_1 = 0
            ExceptionList_2 = nullptr
            HDC hdcDst_1 = sub_42c73c(ebp_1[-6])
            ImageList_Draw(ebp_1[-2], i, hdcDst_1, ExceptionList_2, y_1, fStyle_1)
            i, ebp_1, i_2 = sub_466de8(ebp_1[-1], ebp_1[-3], ebp_1[-4])
        
        i += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_4677de
return sub_403c68(ebp_1[-4])
