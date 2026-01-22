// 函数: sub_43c540
// 地址: 0x43c540
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* ebx = arg2
int32_t __saved_ebp
int32_t* var_20 = &__saved_ebp
int32_t (* var_24)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax = *ebx

if (eax s> 0x104)
    if (eax s> 0xbd00)
        if (eax != 0xbd02 && eax != 0xbd04 && eax != 0xbd06)
            goto label_43c7cf
        
        (*(*arg3 + 0x78))()
        fsbase->NtTib.ExceptionList = ExceptionList
    else if (eax == 0xbd00)
        (*(*arg3 + 0x78))()
        fsbase->NtTib.ExceptionList = ExceptionList
    else if (eax == 0x105)
    label_43c6e2:
        
        if (sub_45e75c(arg3, ebx, arg1) == 0)
            goto label_43c7cf
        
        fsbase->NtTib.ExceptionList = ExceptionList
    else if (eax == 0x200)
        sub_477ad4(*data_4ac2fc, arg3, ebx)
    label_43c7cf:
        ebx[3] = CallWindowProcA(arg4, arg1, *ebx, ebx[1], ebx[2])
        
        if (*ebx == 0x203 && (arg3[0x14].b & 0x80) != 0)
            HWND esi
            esi.w = 0xffe9
            sub_403e64(arg3, esi)
        
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        if (eax != 0x205)
            goto label_43c7cf
        
        if (sub_4395b8(arg3) == 0)
            goto label_43c7cf
        
        POINT points
        points.x = sx.d(ebx[2].w)
        points.y = sx.d(*(ebx + 0xa))
        MapWindowPoints(arg1, sub_45f888(arg3), &points, 1)
        ebx[2].w = points.x.w
        *(ebx + 0xa) = points.y.w
        (*(*arg3 + 0x78))()
        fsbase->NtTib.ExceptionList = ExceptionList
else if (eax == 0x104)
label_43c65c:
    
    if (arg1 == arg3[0xa3])
        goto label_43c7cf
    
    if (sub_45e630(arg3, ebx) == 0)
        goto label_43c7cf
    
    fsbase->NtTib.ExceptionList = ExceptionList
else if (eax s> 0x87)
    if (eax == 0x100)
        goto label_43c65c
    
    if (eax == 0x101)
        goto label_43c6e2
    
    if (eax != 0x102)
        goto label_43c7cf
    
    if (sub_45e824(arg3, ebx, arg1) == 0)
        int16_t edi_2 = ebx[1].w
        
        if (edi_2 != 0xd && edi_2 != 0x1b)
            goto label_43c7cf
        
        if (sub_43c094(arg3) == 0)
            goto label_43c7cf
        
        sub_43c0b8(arg3, 0)
        fsbase->NtTib.ExceptionList = ExceptionList
    else
        fsbase->NtTib.ExceptionList = ExceptionList
else if (eax == 0x87)
    if (sub_43c094(arg3) == 0)
        goto label_43c7cf
    
    ebx[3] = 4
    fsbase->NtTib.ExceptionList = ExceptionList
else if (eax == 7)
    arg2.b = 1
    int32_t* eax_14 = sub_46bf14(arg3)
    
    if (eax_14 == 0)
        goto label_43c7cf
    
    if ((*(*eax_14 + 0xf8))() != 0)
        goto label_43c7cf
    
    fsbase->NtTib.ExceptionList = ExceptionList
else if (eax == 8)
    if ((arg3[0x15].b & 0x20) == 0)
        goto label_43c7cf
    
    fsbase->NtTib.ExceptionList = ExceptionList
else
    if (eax != 0x84 || (arg3[7].b & 0x10) == 0)
        goto label_43c7cf
    
    ebx[3] = 0xffffffff
    fsbase->NtTib.ExceptionList = ExceptionList

return 0
