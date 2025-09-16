void _init()
{
    if (__gmon_start__)
        __gmon_start__();
}

int64_t sub_4006c0()
{
    int64_t var_8 = data_601008;
    /* jump -> data_601010 */
}

int64_t MD5_Init()
{
    /* tailcall */
    return MD5_Init();
}

int64_t sub_4006d6()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_4006c0();
}

int64_t MD5_Update()
{
    /* tailcall */
    return MD5_Update();
}

int64_t sub_4006e6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_4006c0();
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_4006f6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_4006c0();
}

int32_t strncmp(char const* arg1, char const* arg2, uint64_t arg3)
{
    /* tailcall */
    return strncmp(arg1, arg2, arg3);
}

int64_t sub_400706()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_4006c0();
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int64_t sub_400716()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_4006c0();
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int64_t sub_400726()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_4006c0();
}

int32_t sprintf(char* s, char const* format, ...)
{
    /* tailcall */
    return sprintf();
}

int64_t sub_400736()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_4006c0();
}

int64_t MD5_Final()
{
    /* tailcall */
    return MD5_Final();
}

int64_t sub_400746()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_4006c0();
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int64_t sub_400756()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_4006c0();
}

int32_t strcmp(char const* arg1, char const* arg2)
{
    /* tailcall */
    return strcmp(arg1, arg2);
}

int64_t sub_400766()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_4006c0();
}

int64_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, __libc_csu_init, __libc_csu_fini, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux()
{
    if (!__TMC_END__)
    {
        deregister_tm_clones();
        __TMC_END__ = 1;
    }
}

int64_t frame_dummy()
{
    __JCR_END__;
    /* tailcall */
    return register_tm_clones(&__JCR_END__);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char** argv_1 = argv;
    char** envp_1 = envp;
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    int64_t s;
    __builtin_memset(&s, 0, 0x21);
    char* var_b0 = nullptr;
    int32_t result;
    
    if (argc == 1)
    {
        while (*envp_1)
        {
            if (!strncmp(*envp_1, "jennieandjayloveasm=", 0x14))
            {
                var_b0 = *envp_1;
                break;
            }
            
            envp_1 = &envp_1[1];
        }
        
        if (var_b0)
        {
            void var_a8;
            MD5_Init(&var_a8);
            MD5_Update(&var_a8, &var_b0[0x14], strlen(&var_b0[0x14]));
            void var_48;
            MD5_Final(&var_48, &var_a8, &var_a8);
            
            for (int32_t i = 0; i <= 0xf; i += 1)
                sprintf(&s + i * 2, "%02x", *(&var_48 + i));
            
            char var_18_1 = 0;
            
            if (strcmp("e99a18c428cb38d5f260853678922e03", &s))
            {
                puts("Access Denied");
                result = 1;
            }
            else
            {
                puts("Access Granted");
                result = 0;
            }
        }
        else
        {
            puts("Access Denied");
            result = 1;
        }
    }
    else
    {
        puts("Access Denied");
        result = 1;
    }
    
    if (rax == *(fsbase + 0x28))
        return result;
    
    __stack_chk_fail();
    /* no return */
}

void __libc_csu_init()
{
    _init();
    
    for (int64_t i = 0; i != 1; i += 1)
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        (&__frame_dummy_init_array_entry)[i](rdi, rsi, rdx);
    }
}

void __libc_csu_fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}

