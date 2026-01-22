// 函数: sub_467110
// 地址: 0x467110
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t var_1c = 0
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_3 = nullptr
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_2 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_2
int32_t* esi_1

if (sub_466ad8(arg1) != 0)
    void* ebp_2
    int32_t* esi_2
    ebp_2, esi_2 = sub_4679b8(arg1, arg3)
    int32_t eax_4
    int32_t edx_2
    int32_t i
    eax_4, edx_2, i, ebp_1, esi_1 = sub_466eb4(*(ebp_2 - 4), esi_2, *(ebp_2 + 8))
    ebp_1[-2] = eax_4
    
    if (ebp_1[-2] != 0xffffffff)
        int32_t (* var_38)(void* arg1, void* arg2) = j_sub_40443c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_1
        edx_2.b = 1
        ebp_1[-3] = sub_430618(sub_42a104+0x140, edx_2)
        int32_t (* var_44)(void* arg1, void* arg2) = j_sub_40443c
        struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        *(ebp_1[-1] + 0x30)
        (*(*ebp_1[-3] + 0x34))(ExceptionList, var_44, ebp_1, ExceptionList_1, var_38, ebp_1)
        *(ebp_1[-1] + 0x34)
        (*(*ebp_1[-3] + 0x40))()
        int32_t edx_5
        edx_5.b = 1
        ebp_1[-4] = sub_430618(sub_42a104+0x140, edx_5)
        int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
        ExceptionList_3 = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList_3
        sub_431be0(ebp_1[-4], 1)
        *(ebp_1[-1] + 0x30)
        (*(*ebp_1[-4] + 0x34))(ExceptionList_3, var_14, ebp_1)
        *(ebp_1[-1] + 0x34)
        (*(*ebp_1[-4] + 0x40))()
        enum IMAGE_LIST_DRAW_STYLE fStyle = ILD_NORMAL
        int32_t y = 0
        ExceptionList_3 = nullptr
        HDC hdcDst = sub_42c73c(sub_430bec(ebp_1[-3]))
        ImageList_Draw(sub_466cac(ebp_1[-1]), ebp_1[-2], hdcDst, ExceptionList_3, y, fStyle)
        enum IMAGE_LIST_DRAW_STYLE fStyle_1 = ILD_MASK
        int32_t y_1 = 0
        ExceptionList_3 = nullptr
        HDC hdcDst_1 = sub_42c73c(sub_430bec(ebp_1[-4]))
        ImageList_Draw(sub_466cac(ebp_1[-1]), ebp_1[-2], hdcDst_1, ExceptionList_3, y_1, fStyle_1)
        HBITMAP hbmImage = (*(*ebp_1[-3] + 0x68))((*(*ebp_1[-4] + 0x68))())
        ExceptionList_3 = sub_466cac(ebp_1[-1])
        void hbmMask
        
        if (ImageList_Replace(ExceptionList_3, i, hbmImage, hbmMask) == 0)
            sub_406a30(data_4ac070, &ebp_1[-5])
            int32_t edx_12
            edx_12.b = 1
            sub_40451c(sub_40ceb0(sub_417654+0x48, edx_12, ebp_1[-5]))
        
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = sub_4672a2
        return sub_403c68(ebp_1[-4])
    
    sub_406a30(data_4ac070, &ebp_1[-6])
    int32_t edx_15
    edx_15.b = 1
    sub_40451c(sub_40ceb0(sub_417654+0x48, edx_15, ebp_1[-6]))

esi_1.w = 0xffef
sub_403e64(ebp_1[-1], esi_1)
fsbase->NtTib.ExceptionList = arg1
__return_addr = &data_46732e
return sub_404bac(&ebp_1[-6], 2)
