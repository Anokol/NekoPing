/* Generated code for Python module 'numpy$_core$_add_newdocs'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_numpy$_core$_add_newdocs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$_add_newdocs;
PyDictObject *moduledict_numpy$_core$_add_newdocs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[290];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[290];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("numpy._core._add_newdocs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 290; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$_core$_add_newdocs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 290; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_numpy$_core$_add_newdocs_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_add_newdocs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_add_newdocs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[289]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_add_newdocs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[289])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[289], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[289])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[289], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[289]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[289]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[289]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_add_newdocs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_add_newdocs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[11]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_add_newdocs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[11])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[11], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[11]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[11]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[11]);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_add_newdocs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_add_newdocs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_add_newdocs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[209])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[209], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[209])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[209], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[209]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_9dac7a4678516429f453bf5e0c06270e;
static PyCodeObject *code_objects_ad8234d846a8e69255939c0802f76653;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[285]); CHECK_OBJECT(module_filename_obj);
    code_objects_9dac7a4678516429f453bf5e0c06270e = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[286], mod_consts[286], NULL, NULL, 0, 0, 0);
    code_objects_ad8234d846a8e69255939c0802f76653 = MAKE_CODE_OBJECT(module_filename_obj, 6637, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[209], mod_consts[209], mod_consts[287], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_attr = python_pars[0];
    PyObject *par_method = python_pars[1];
    struct Nuitka_FrameObject *frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute)) {
        Py_XDECREF(cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute = MAKE_FUNCTION_FRAME(tstate, code_objects_ad8234d846a8e69255939c0802f76653, module_numpy$_core$_add_newdocs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute->m_type_description == NULL);
    frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute = cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute);
    assert(Py_REFCNT(frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_attr);
        tmp_tuple_element_1 = par_attr;
        tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
        {
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            nuitka_bool tmp_condition_result_1;
            int tmp_truth_name_1;
            PyObject *tmp_kw_call_arg_value_2_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_kw_call_arg_value_0_1 = mod_consts[0];
            CHECK_OBJECT(par_method);
            tmp_truth_name_1 = CHECK_IF_TRUE(par_method);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6644;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_kw_call_arg_value_1_1 = mod_consts[1];
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_kw_call_arg_value_1_1 = mod_consts[2];
            condexpr_end_1:;
            CHECK_OBJECT(par_attr);
            tmp_kw_call_arg_value_2_1 = par_attr;
            frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute->m_frame.f_lineno = 6644;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
                tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 6644;
                type_description_1 = "ooN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute,
        type_description_1,
        par_attr,
        par_method,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute == cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute);
        cache_frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute = NULL;
    }

    assertFrameObject(frame_frame_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ad8234d846a8e69255939c0802f76653,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_add_newdocs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_numpy$_core$_add_newdocs[] = {
    impl_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_numpy$_core$_add_newdocs);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_numpy$_core$_add_newdocs,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_numpy$_core$_add_newdocs,
        sizeof(function_table_numpy$_core$_add_newdocs) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "numpy._core._add_newdocs";
#endif

// Internal entry point for module code.
PyObject *modulecode_numpy$_core$_add_newdocs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$_add_newdocs");

    // Store the module for future use.
    module_numpy$_core$_add_newdocs = module;

    moduledict_numpy$_core$_add_newdocs = MODULE_DICT(module_numpy$_core$_add_newdocs);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$_add_newdocs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$_add_newdocs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$_add_newdocs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._add_newdocs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$_add_newdocs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$_add_newdocs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[288]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_add_newdocs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_add_newdocs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$_add_newdocs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$_add_newdocs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_frame_numpy$_core$_add_newdocs;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[3];
        UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_2);
    }
    frame_frame_numpy$_core$_add_newdocs = MAKE_MODULE_FRAME(code_objects_9dac7a4678516429f453bf5e0c06270e, module_numpy$_core$_add_newdocs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_add_newdocs);
    assert(Py_REFCNT(frame_frame_numpy$_core$_add_newdocs) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_numpy$_core$_add_newdocs_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_numpy$_core$_add_newdocs_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_add_newdocs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[10];
        tmp_level_value_1 = const_int_0;
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 12;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_numpy$_core$_add_newdocs,
                mod_consts[11],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core$_add_newdocs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = const_int_0;
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 13;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_numpy$_core$_add_newdocs,
                mod_consts[14],
                const_int_0
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_1 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_1, mod_consts[15]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_2 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 70;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_2, mod_consts[16]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        tmp_called_value_3 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_3 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 85;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_3, mod_consts[17]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        tmp_called_value_4 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_4 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 104;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts[18]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        tmp_called_value_5 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_5 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 124;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts[19]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_6;
        tmp_called_value_6 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_6 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 130;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts[20]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_7;
        tmp_called_value_7 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_7 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 156;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts[21]);

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_8;
        tmp_called_value_8 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_8 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 428;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts[22]);

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_9;
        tmp_called_value_9 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_9 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 448;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts[23]);

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_10;
        tmp_called_value_10 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_10 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 455;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts[24]);

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_11;
        tmp_called_value_11 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_11 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 463;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts[25]);

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_12;
        tmp_called_value_12 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_12 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 473;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts[26]);

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_13;
        tmp_called_value_13 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_13 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 488;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts[27]);

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_14;
        tmp_called_value_14 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_14 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 497;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts[28]);

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_15;
        tmp_called_value_15 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_15 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 506;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts[29]);

        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_16;
        tmp_called_value_16 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_16 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 514;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts[30]);

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_17;
        tmp_called_value_17 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_17 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 578;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_17, mod_consts[31]);

        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_18;
        tmp_called_value_18 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_18 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 598;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 598;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_18, mod_consts[32]);

        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 598;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_19;
        tmp_called_value_19 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_19 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 649;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 649;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_19, mod_consts[33]);

        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 649;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_20;
        tmp_called_value_20 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_20 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 669;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts[34]);

        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_21;
        tmp_called_value_21 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_21 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 693;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 693;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts[35]);

        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 693;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_22;
        tmp_called_value_22 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_22 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 708;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_22, mod_consts[36]);

        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 708;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_23;
        tmp_called_value_23 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_23 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 724;
        tmp_call_result_23 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_23, mod_consts[37]);

        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 724;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_24;
        tmp_called_value_24 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_24 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 739;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_24, mod_consts[38]);

        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_25;
        tmp_called_value_25 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_25 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 754;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 754;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_25, mod_consts[39]);

        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 754;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_26;
        tmp_called_value_26 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_26 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 769;
        tmp_call_result_26 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_26, mod_consts[40]);

        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 769;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_27;
        tmp_called_value_27 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_27 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 807;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 807;
        tmp_call_result_27 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_27, mod_consts[41]);

        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 807;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_28;
        tmp_called_value_28 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_28 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 932;
        tmp_call_result_28 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_28, mod_consts[42]);

        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 932;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_29;
        tmp_called_value_29 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_29 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1024;
        tmp_call_result_29 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_29, mod_consts[43]);

        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1024;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_30;
        tmp_called_value_30 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_30 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1100;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1100;
        tmp_call_result_30 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_30, mod_consts[44]);

        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_31;
        tmp_called_value_31 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_31 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1163;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1163;
        tmp_call_result_31 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_31, mod_consts[45]);

        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1163;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_32;
        tmp_called_value_32 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_32 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1226;
        tmp_call_result_32 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_32, mod_consts[46]);

        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_33;
        tmp_called_value_33 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_33 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1286;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1286;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_33, mod_consts[47]);

        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1286;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_34;
        tmp_called_value_34 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_34 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1300;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1300;
        tmp_call_result_34 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_34, mod_consts[48]);

        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1300;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_35;
        tmp_called_value_35 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_35 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1357;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1357;
        tmp_call_result_35 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_35, mod_consts[49]);

        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1357;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_36;
        tmp_called_value_36 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_36 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1365;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1365;
        tmp_call_result_36 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_36, mod_consts[50]);

        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1365;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_37;
        tmp_called_value_37 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_37 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1425;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1425;
        tmp_call_result_37 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_37, mod_consts[51]);

        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1425;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_38;
        tmp_called_value_38 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_38 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1463;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1463;
        tmp_call_result_38 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_38, mod_consts[52]);

        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1463;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_39;
        tmp_called_value_39 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_39 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1518;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_39, mod_consts[53]);

        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1518;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_40;
        tmp_called_value_40 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_40 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1601;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1601;
        tmp_call_result_40 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_40, mod_consts[54]);

        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1601;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_41;
        tmp_called_value_41 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_41 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1661;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1661;
        tmp_call_result_41 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_41, mod_consts[55]);

        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1661;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_42;
        tmp_called_value_42 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_42 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1708;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1708;
        tmp_call_result_42 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_42, mod_consts[56]);

        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1708;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_43;
        tmp_called_value_43 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_43 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1711;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1711;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_43, mod_consts[57]);

        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1711;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_44;
        tmp_called_value_44 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_44 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1827;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1827;
        tmp_call_result_44 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_44, mod_consts[58]);

        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1827;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_45;
        tmp_called_value_45 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_45 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1834;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1834;
        tmp_call_result_45 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_45, mod_consts[59]);

        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1834;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_46;
        tmp_called_value_46 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_46 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1841;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1841;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_46, mod_consts[60]);

        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1841;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_47;
        tmp_called_value_47 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_47 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 1909;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 1909;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_47, mod_consts[61]);

        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1909;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_48;
        tmp_called_value_48 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_48 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2228;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2228;
        tmp_call_result_48 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_48, mod_consts[62]);

        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2228;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_49;
        tmp_called_value_49 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_49 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2360;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2360;
        tmp_call_result_49 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_49, mod_consts[63]);

        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2360;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_50;
        tmp_called_value_50 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_50 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2364;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2364;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_50, mod_consts[64]);

        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2364;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_51;
        tmp_called_value_51 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_51 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2368;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2368;
        tmp_call_result_51 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_51, mod_consts[65]);

        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2368;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_52;
        tmp_called_value_52 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_52 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2371;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2371;
        tmp_call_result_52 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_52, mod_consts[66]);

        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2371;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_53;
        tmp_called_value_53 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_53 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2379;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2379;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_53, mod_consts[67]);

        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2379;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_54;
        tmp_called_value_54 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_54 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2387;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2387;
        tmp_call_result_54 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_54, mod_consts[68]);

        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2387;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_55;
        tmp_called_value_55 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_55 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2409;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2409;
        tmp_call_result_55 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_55, mod_consts[69]);

        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2409;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_56;
        tmp_called_value_56 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_56 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2487;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2487;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_56, mod_consts[70]);

        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2487;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_57;
        tmp_called_value_57 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_57 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2491;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2491;
        tmp_call_result_57 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_57, mod_consts[71]);

        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2491;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_58;
        tmp_called_value_58 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_58 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2528;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2528;
        tmp_call_result_58 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_58, mod_consts[72]);

        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2528;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_59;
        tmp_called_value_59 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_59 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2544;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2544;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_59, mod_consts[73]);

        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2544;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_60;
        tmp_called_value_60 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_60 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2561;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2561;
        tmp_call_result_60 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_60, mod_consts[74]);

        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2561;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_61;
        tmp_called_value_61 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_61 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2632;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2632;
        tmp_call_result_61 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_61, mod_consts[75]);

        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2632;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_62;
        tmp_called_value_62 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_62 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2675;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2675;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_62, mod_consts[76]);

        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2675;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_63;
        tmp_called_value_63 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_63 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2702;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2702;
        tmp_call_result_63 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_63, mod_consts[77]);

        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2702;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_64;
        tmp_called_value_64 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_64 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2719;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2719;
        tmp_call_result_64 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_64, mod_consts[78]);

        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2719;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_65;
        tmp_called_value_65 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_65 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2739;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2739;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_65, mod_consts[79]);

        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_66;
        tmp_called_value_66 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_66 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2788;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2788;
        tmp_call_result_66 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_66, mod_consts[80]);

        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2788;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_67;
        tmp_called_value_67 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_67 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2815;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2815;
        tmp_call_result_67 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_67, mod_consts[81]);

        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2815;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_68;
        tmp_called_value_68 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_68 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2884;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2884;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_68, mod_consts[82]);

        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2884;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_69;
        tmp_called_value_69 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_69 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2914;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2914;
        tmp_call_result_69 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_69, mod_consts[83]);

        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2914;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_70;
        tmp_called_value_70 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_70 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2961;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2961;
        tmp_call_result_70 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_70, mod_consts[84]);

        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2961;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_71;
        tmp_called_value_71 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_71 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2980;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2980;
        tmp_call_result_71 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_71, mod_consts[85]);

        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2980;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_72;
        tmp_called_value_72 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_72 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2989;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2989;
        tmp_call_result_72 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_72, mod_consts[86]);

        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2989;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_73;
        tmp_called_value_73 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_73 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 2998;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 2998;
        tmp_call_result_73 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_73, mod_consts[87]);

        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 2998;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_74;
        tmp_called_value_74 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_74 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3009;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3009;
        tmp_call_result_74 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_74, mod_consts[88]);

        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3009;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_75;
        tmp_called_value_75 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_75 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3039;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3039;
        tmp_call_result_75 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_75, mod_consts[89]);

        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3039;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_76;
        tmp_called_value_76 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_76 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3048;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3048;
        tmp_call_result_76 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_76, mod_consts[90]);

        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3048;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_77;
        tmp_called_value_77 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_77 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3057;
        tmp_call_result_77 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_77, mod_consts[91]);

        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3057;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_78;
        tmp_called_value_78 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_78 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3079;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3079;
        tmp_call_result_78 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_78, mod_consts[92]);

        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3079;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_79;
        tmp_called_value_79 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_79 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3094;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3094;
        tmp_call_result_79 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_79, mod_consts[93]);

        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3094;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_80;
        tmp_called_value_80 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_80 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3109;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3109;
        tmp_call_result_80 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_80, mod_consts[94]);

        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3109;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_81;
        tmp_called_value_81 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_81 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3124;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3124;
        tmp_call_result_81 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_81, mod_consts[95]);

        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_82;
        tmp_called_value_82 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_82 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3139;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3139;
        tmp_call_result_82 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_82, mod_consts[96]);

        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3139;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_call_result_83;
        tmp_called_value_83 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_83 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3154;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3154;
        tmp_call_result_83 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_83, mod_consts[97]);

        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3154;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_84;
        tmp_called_value_84 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_84 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3169;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3169;
        tmp_call_result_84 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_84, mod_consts[98]);

        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3169;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_85;
        tmp_called_value_85 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_85 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3232;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3232;
        tmp_call_result_85 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_85, mod_consts[99]);

        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3232;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_86;
        tmp_called_value_86 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_86 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3287;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3287;
        tmp_call_result_86 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_86, mod_consts[100]);

        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3287;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_87;
        tmp_called_value_87 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_87 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3302;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3302;
        tmp_call_result_87 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_87, mod_consts[101]);

        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3302;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_88;
        tmp_called_value_88 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_88 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3318;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3318;
        tmp_call_result_88 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_88, mod_consts[102]);

        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3318;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_89;
        tmp_called_value_89 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_89 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3333;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3333;
        tmp_call_result_89 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_89, mod_consts[103]);

        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3333;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_90;
        tmp_called_value_90 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_90 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3348;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3348;
        tmp_call_result_90 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_90, mod_consts[104]);

        if (tmp_call_result_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3348;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_91;
        tmp_called_value_91 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_91 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3363;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3363;
        tmp_call_result_91 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_91, mod_consts[105]);

        if (tmp_call_result_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3363;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_92;
        tmp_called_value_92 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_92 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3436;
        tmp_call_result_92 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_92, mod_consts[106]);

        if (tmp_call_result_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_93;
        tmp_called_value_93 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_93 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3451;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3451;
        tmp_call_result_93 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_93, mod_consts[107]);

        if (tmp_call_result_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3451;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_94;
        tmp_called_value_94 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_94 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3466;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3466;
        tmp_call_result_94 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_94, mod_consts[108]);

        if (tmp_call_result_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3466;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_95;
        tmp_called_value_95 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_95 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3483;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3483;
        tmp_call_result_95 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_95, mod_consts[109]);

        if (tmp_call_result_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3483;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_96;
        tmp_called_value_96 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_96 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3486;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3486;
        tmp_call_result_96 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_96, mod_consts[110]);

        if (tmp_call_result_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3486;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_call_result_97;
        tmp_called_value_97 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_97 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3501;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3501;
        tmp_call_result_97 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_97, mod_consts[111]);

        if (tmp_call_result_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3501;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_98;
        tmp_called_value_98 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_98 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3515;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3515;
        tmp_call_result_98 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_98, mod_consts[112]);

        if (tmp_call_result_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3515;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_99;
        tmp_called_value_99 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_99 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3559;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3559;
        tmp_call_result_99 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_99, mod_consts[113]);

        if (tmp_call_result_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3559;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_100;
        tmp_called_value_100 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_100 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3598;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3598;
        tmp_call_result_100 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_100, mod_consts[114]);

        if (tmp_call_result_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3598;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_101;
        tmp_called_value_101 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_101 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3641;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3641;
        tmp_call_result_101 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_101, mod_consts[115]);

        if (tmp_call_result_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3641;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_call_result_102;
        tmp_called_value_102 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_102 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3707;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3707;
        tmp_call_result_102 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_102, mod_consts[116]);

        if (tmp_call_result_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3707;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_103;
        tmp_called_value_103 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_103 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3722;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3722;
        tmp_call_result_103 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_103, mod_consts[117]);

        if (tmp_call_result_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3722;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_104;
        tmp_called_value_104 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_104 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3737;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3737;
        tmp_call_result_104 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_104, mod_consts[118]);

        if (tmp_call_result_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3737;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_105;
        tmp_called_value_105 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_105 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3752;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3752;
        tmp_call_result_105 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_105, mod_consts[119]);

        if (tmp_call_result_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3752;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_106;
        tmp_called_value_106 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_106 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3767;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3767;
        tmp_call_result_106 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_106, mod_consts[120]);

        if (tmp_call_result_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3767;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_107;
        tmp_called_value_107 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_107 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3783;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3783;
        tmp_call_result_107 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_107, mod_consts[121]);

        if (tmp_call_result_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3783;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_108;
        tmp_called_value_108 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_108 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3798;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3798;
        tmp_call_result_108 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_108, mod_consts[122]);

        if (tmp_call_result_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3798;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_109;
        tmp_called_value_109 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_109 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3815;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3815;
        tmp_call_result_109 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_109, mod_consts[123]);

        if (tmp_call_result_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3815;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_110;
        tmp_called_value_110 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_110 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3830;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3830;
        tmp_call_result_110 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_110, mod_consts[124]);

        if (tmp_call_result_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3830;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_111;
        tmp_called_value_111 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_111 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3852;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3852;
        tmp_call_result_111 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_111, mod_consts[125]);

        if (tmp_call_result_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3852;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_112;
        tmp_called_value_112 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_112 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3946;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3946;
        tmp_call_result_112 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_112, mod_consts[126]);

        if (tmp_call_result_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3946;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_113;
        tmp_called_value_113 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_113 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3961;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3961;
        tmp_call_result_113 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_113, mod_consts[127]);

        if (tmp_call_result_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3961;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_114;
        tmp_called_value_114 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_114 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 3976;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 3976;
        tmp_call_result_114 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_114, mod_consts[128]);

        if (tmp_call_result_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 3976;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_115;
        tmp_called_value_115 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_115 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4028;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4028;
        tmp_call_result_115 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_115, mod_consts[129]);

        if (tmp_call_result_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4028;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_call_result_116;
        tmp_called_value_116 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_116 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4105;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4105;
        tmp_call_result_116 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_116, mod_consts[130]);

        if (tmp_call_result_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4105;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_117;
        tmp_called_value_117 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_117 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4165;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4165;
        tmp_call_result_117 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_117, mod_consts[131]);

        if (tmp_call_result_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_118;
        tmp_called_value_118 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_118 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4224;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4224;
        tmp_call_result_118 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_118, mod_consts[132]);

        if (tmp_call_result_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4224;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_119;
        tmp_called_value_119 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_119 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4239;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4239;
        tmp_call_result_119 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_119, mod_consts[133]);

        if (tmp_call_result_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_call_result_120;
        tmp_called_value_120 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_120 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4254;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4254;
        tmp_call_result_120 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_120, mod_consts[134]);

        if (tmp_call_result_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4254;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_121;
        tmp_called_value_121 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_121 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4269;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4269;
        tmp_call_result_121 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_121, mod_consts[135]);

        if (tmp_call_result_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4269;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_call_result_122;
        tmp_called_value_122 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_122 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4284;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4284;
        tmp_call_result_122 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_122, mod_consts[136]);

        if (tmp_call_result_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4284;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_123;
        tmp_called_value_123 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_123 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4299;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4299;
        tmp_call_result_123 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_123, mod_consts[137]);

        if (tmp_call_result_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4299;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_124;
        tmp_called_value_124 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_124 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4339;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4339;
        tmp_call_result_124 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_124, mod_consts[138]);

        if (tmp_call_result_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4339;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_call_result_125;
        tmp_called_value_125 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_125 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4404;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4404;
        tmp_call_result_125 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_125, mod_consts[139]);

        if (tmp_call_result_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4404;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_126;
        tmp_called_value_126 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_126 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4445;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4445;
        tmp_call_result_126 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_126, mod_consts[140]);

        if (tmp_call_result_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4445;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_127;
        tmp_called_value_127 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_127 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4457;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4457;
        tmp_call_result_127 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_127, mod_consts[141]);

        if (tmp_call_result_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4457;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_result_128;
        tmp_called_value_128 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_128 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4472;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4472;
        tmp_call_result_128 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_128, mod_consts[142]);

        if (tmp_call_result_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4472;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_129;
        tmp_called_value_129 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_129 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4529;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4529;
        tmp_call_result_129 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_129, mod_consts[143]);

        if (tmp_call_result_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4529;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_130;
        tmp_called_value_130 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_130 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4544;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4544;
        tmp_call_result_130 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_130, mod_consts[144]);

        if (tmp_call_result_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4544;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_131;
        tmp_called_value_131 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_131 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4671;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4671;
        tmp_call_result_131 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_131, mod_consts[145]);

        if (tmp_call_result_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4671;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_132;
        tmp_called_value_132 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_132 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4729;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4729;
        tmp_call_result_132 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_132, mod_consts[146]);

        if (tmp_call_result_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4729;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_call_result_133;
        tmp_called_value_133 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_133 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4739;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4739;
        tmp_call_result_133 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_133, mod_consts[147]);

        if (tmp_call_result_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_134;
        tmp_called_value_134 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_134 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4765;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4765;
        tmp_call_result_134 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_134, mod_consts[148]);

        if (tmp_call_result_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4765;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_135;
        tmp_called_value_135 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_135 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4775;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4775;
        tmp_call_result_135 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_135, mod_consts[149]);

        if (tmp_call_result_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4775;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_136;
        tmp_called_value_136 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_136 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4785;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4785;
        tmp_call_result_136 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_136, mod_consts[150]);

        if (tmp_call_result_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4785;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_call_result_137;
        tmp_called_value_137 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_137 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4798;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4798;
        tmp_call_result_137 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_137, mod_consts[151]);

        if (tmp_call_result_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4798;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_138;
        tmp_called_value_138 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_138 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4806;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4806;
        tmp_call_result_138 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_138, mod_consts[152]);

        if (tmp_call_result_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4806;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_139;
        tmp_called_value_139 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_139 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4822;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4822;
        tmp_call_result_139 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_139, mod_consts[153]);

        if (tmp_call_result_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4822;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_call_result_140;
        tmp_called_value_140 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_140 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4839;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4839;
        tmp_call_result_140 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_140, mod_consts[154]);

        if (tmp_call_result_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4839;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_141;
        tmp_called_value_141 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_141 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4861;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4861;
        tmp_call_result_141 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_141, mod_consts[155]);

        if (tmp_call_result_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4861;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_result_142;
        tmp_called_value_142 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_142 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4870;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4870;
        tmp_call_result_142 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_142, mod_consts[156]);

        if (tmp_call_result_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4870;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_call_result_143;
        tmp_called_value_143 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_143 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4893;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4893;
        tmp_call_result_143 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_143, mod_consts[157]);

        if (tmp_call_result_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4893;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_call_result_144;
        tmp_called_value_144 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_144 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4951;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4951;
        tmp_call_result_144 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_144, mod_consts[158]);

        if (tmp_call_result_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4951;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_145;
        tmp_called_value_145 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_145 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4971;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4971;
        tmp_call_result_145 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_145, mod_consts[159]);

        if (tmp_call_result_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4971;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_call_result_146;
        tmp_called_value_146 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_146 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 4996;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 4996;
        tmp_call_result_146 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_146, mod_consts[160]);

        if (tmp_call_result_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 4996;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_call_result_147;
        tmp_called_value_147 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_147 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5015;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5015;
        tmp_call_result_147 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_147, mod_consts[161]);

        if (tmp_call_result_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5015;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_call_result_148;
        tmp_called_value_148 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_148 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5039;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5039;
        tmp_call_result_148 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_148, mod_consts[162]);

        if (tmp_call_result_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5039;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_call_result_149;
        tmp_called_value_149 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_149 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5066;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5066;
        tmp_call_result_149 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_149, mod_consts[163]);

        if (tmp_call_result_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5066;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_call_result_150;
        tmp_called_value_150 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_150 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5104;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5104;
        tmp_call_result_150 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_150, mod_consts[164]);

        if (tmp_call_result_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_call_result_151;
        tmp_called_value_151 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_151 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5142;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5142;
        tmp_call_result_151 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_151, mod_consts[165]);

        if (tmp_call_result_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5142;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_call_result_152;
        tmp_called_value_152 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_152 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5262;
        tmp_call_result_152 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_152, mod_consts[166]);

        if (tmp_call_result_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5262;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_result_153;
        tmp_called_value_153 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_153 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5339;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5339;
        tmp_call_result_153 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_153, mod_consts[167]);

        if (tmp_call_result_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5339;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_call_result_154;
        tmp_called_value_154 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_154 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5446;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5446;
        tmp_call_result_154 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_154, mod_consts[168]);

        if (tmp_call_result_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5446;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_call_result_155;
        tmp_called_value_155 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_155 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5517;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5517;
        tmp_call_result_155 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_155, mod_consts[169]);

        if (tmp_call_result_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5517;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_call_result_156;
        tmp_called_value_156 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_156 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5568;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5568;
        tmp_call_result_156 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_156, mod_consts[170]);

        if (tmp_call_result_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5568;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_call_result_157;
        tmp_called_value_157 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_157 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5640;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5640;
        tmp_call_result_157 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_157, mod_consts[171]);

        if (tmp_call_result_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5640;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_call_result_158;
        tmp_called_value_158 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_158 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5663;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5663;
        tmp_call_result_158 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_158, mod_consts[172]);

        if (tmp_call_result_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5663;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_call_result_159;
        tmp_called_value_159 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_159 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5733;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5733;
        tmp_call_result_159 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_159, mod_consts[173]);

        if (tmp_call_result_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5733;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_call_result_160;
        tmp_called_value_160 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_160 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5827;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5827;
        tmp_call_result_160 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_160, mod_consts[174]);

        if (tmp_call_result_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5827;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_call_result_161;
        tmp_called_value_161 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_161 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5847;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5847;
        tmp_call_result_161 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_161, mod_consts[175]);

        if (tmp_call_result_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5847;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_call_result_162;
        tmp_called_value_162 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_162 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5891;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5891;
        tmp_call_result_162 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_162, mod_consts[176]);

        if (tmp_call_result_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5891;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_call_result_163;
        tmp_called_value_163 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_163 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5904;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5904;
        tmp_call_result_163 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_163, mod_consts[177]);

        if (tmp_call_result_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5904;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_call_result_164;
        tmp_called_value_164 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_164 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5929;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5929;
        tmp_call_result_164 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_164, mod_consts[178]);

        if (tmp_call_result_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5929;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_call_result_165;
        tmp_called_value_165 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_165 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5959;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5959;
        tmp_call_result_165 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_165, mod_consts[179]);

        if (tmp_call_result_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5959;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_call_result_166;
        tmp_called_value_166 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_166 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5984;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5984;
        tmp_call_result_166 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_166, mod_consts[180]);

        if (tmp_call_result_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5984;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_call_result_167;
        tmp_called_value_167 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_167 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 5997;
        tmp_call_result_167 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_167, mod_consts[181]);

        if (tmp_call_result_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 5997;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_call_result_168;
        tmp_called_value_168 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_168 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6028;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6028;
        tmp_call_result_168 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_168, mod_consts[182]);

        if (tmp_call_result_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6028;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_result_169;
        tmp_called_value_169 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_169 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6035;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6035;
        tmp_call_result_169 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_169, mod_consts[183]);

        if (tmp_call_result_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6035;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_call_result_170;
        tmp_called_value_170 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_170 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6044;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6044;
        tmp_call_result_170 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_170, mod_consts[184]);

        if (tmp_call_result_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_value_171;
        PyObject *tmp_call_result_171;
        tmp_called_value_171 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_171 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6067;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6067;
        tmp_call_result_171 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_171, mod_consts[185]);

        if (tmp_call_result_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6067;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_call_result_172;
        tmp_called_value_172 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_172 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6101;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6101;
        tmp_call_result_172 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_172, mod_consts[186]);

        if (tmp_call_result_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6101;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_value_173;
        PyObject *tmp_call_result_173;
        tmp_called_value_173 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_173 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6141;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6141;
        tmp_call_result_173 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_173, mod_consts[187]);

        if (tmp_call_result_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_call_result_174;
        tmp_called_value_174 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_174 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6160;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6160;
        tmp_call_result_174 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_174, mod_consts[188]);

        if (tmp_call_result_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6160;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_value_175;
        PyObject *tmp_call_result_175;
        tmp_called_value_175 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_175 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6175;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6175;
        tmp_call_result_175 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_175, mod_consts[189]);

        if (tmp_call_result_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6175;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_call_result_176;
        tmp_called_value_176 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_176 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6195;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6195;
        tmp_call_result_176 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_176, mod_consts[190]);

        if (tmp_call_result_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6195;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_call_result_177;
        tmp_called_value_177 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_177 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6214;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6214;
        tmp_call_result_177 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_177, mod_consts[191]);

        if (tmp_call_result_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6214;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_result_178;
        tmp_called_value_178 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_178 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6236;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6236;
        tmp_call_result_178 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_178, mod_consts[192]);

        if (tmp_call_result_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6236;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_call_result_179;
        tmp_called_value_179 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_179 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6239;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6239;
        tmp_call_result_179 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_179, mod_consts[193]);

        if (tmp_call_result_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6239;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_call_result_180;
        tmp_called_value_180 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_180 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6268;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6268;
        tmp_call_result_180 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_180, mod_consts[194]);

        if (tmp_call_result_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6268;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_call_result_181;
        tmp_called_value_181 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_181 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6290;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6290;
        tmp_call_result_181 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_181, mod_consts[195]);

        if (tmp_call_result_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6290;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_call_result_182;
        tmp_called_value_182 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_182 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6299;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6299;
        tmp_call_result_182 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_182, mod_consts[196]);

        if (tmp_call_result_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6299;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_result_183;
        tmp_called_value_183 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_183 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6361;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6361;
        tmp_call_result_183 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_183, mod_consts[197]);

        if (tmp_call_result_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6361;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_call_result_184;
        tmp_called_value_184 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_184 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6387;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6387;
        tmp_call_result_184 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_184, mod_consts[198]);

        if (tmp_call_result_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6387;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_call_result_185;
        tmp_called_value_185 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_185 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6402;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6402;
        tmp_call_result_185 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_185, mod_consts[199]);

        if (tmp_call_result_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6402;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_186;
        tmp_called_value_186 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_186 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6417;
        tmp_call_result_186 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_186, mod_consts[200]);

        if (tmp_call_result_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6417;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_value_187;
        PyObject *tmp_call_result_187;
        tmp_called_value_187 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_187 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6433;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6433;
        tmp_call_result_187 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_187, mod_consts[201]);

        if (tmp_call_result_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6433;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_call_result_188;
        tmp_called_value_188 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_188 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6455;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6455;
        tmp_call_result_188 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_188, mod_consts[202]);

        if (tmp_call_result_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6455;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_result_189;
        tmp_called_value_189 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_189 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6521;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6521;
        tmp_call_result_189 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_189, mod_consts[203]);

        if (tmp_call_result_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6521;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_call_result_190;
        tmp_called_value_190 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_190 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6524;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6524;
        tmp_call_result_190 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_190, mod_consts[204]);

        if (tmp_call_result_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6524;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_call_result_191;
        tmp_called_value_191 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_191 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6527;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6527;
        tmp_call_result_191 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_191, mod_consts[205]);

        if (tmp_call_result_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6527;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_192;
        tmp_called_value_192 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_192 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6578;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6578;
        tmp_call_result_192 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_192, mod_consts[206]);

        if (tmp_call_result_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6578;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_value_193;
        PyObject *tmp_call_result_193;
        tmp_called_value_193 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_193 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6623;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6623;
        tmp_call_result_193 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_193, mod_consts[207]);

        if (tmp_call_result_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6623;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[208];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_6 = MAKE_FUNCTION_numpy$_core$_add_newdocs$$$function__1_refer_to_array_attribute(tstate, tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_6);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_call_result_194;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_195;
        tmp_called_value_194 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_194 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6647;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[210];
        tmp_args_element_value_2 = mod_consts[211];
        tmp_called_value_195 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        assert(!(tmp_called_value_195 == NULL));
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6648;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_195, &PyTuple_GET_ITEM(mod_consts[212], 0), mod_consts[213]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6648;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6647;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_194 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_194, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6647;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_value_196;
        PyObject *tmp_call_result_195;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_197;
        tmp_called_value_196 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_196 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_196 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6650;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[210];
        tmp_args_element_value_5 = mod_consts[211];
        tmp_called_value_197 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_197 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6651;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6651;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_197, &PyTuple_GET_ITEM(mod_consts[214], 0), mod_consts[213]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6651;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6650;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_195 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_196, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6650;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_call_result_196;
        tmp_called_value_198 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_198 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6653;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6653;
        tmp_call_result_196 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_198, mod_consts[215]);

        if (tmp_call_result_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6653;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_called_value_199;
        PyObject *tmp_call_result_197;
        tmp_called_value_199 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_199 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_199 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6656;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6656;
        tmp_call_result_197 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_199, mod_consts[216]);

        if (tmp_call_result_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6656;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_call_result_198;
        tmp_called_value_200 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_200 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6659;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6659;
        tmp_call_result_198 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_200, mod_consts[217]);

        if (tmp_call_result_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6659;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_value_201;
        PyObject *tmp_call_result_199;
        tmp_called_value_201 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_201 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6662;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6662;
        tmp_call_result_199 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_201, mod_consts[218]);

        if (tmp_call_result_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6662;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_call_result_200;
        tmp_called_value_202 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_202 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_202 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6665;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6665;
        tmp_call_result_200 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_202, mod_consts[219]);

        if (tmp_call_result_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6665;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_call_result_201;
        tmp_called_value_203 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_203 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6668;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6668;
        tmp_call_result_201 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_203, mod_consts[220]);

        if (tmp_call_result_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6668;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_call_result_202;
        tmp_called_value_204 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_204 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6671;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6671;
        tmp_call_result_202 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_204, mod_consts[221]);

        if (tmp_call_result_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6671;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_called_value_205;
        PyObject *tmp_call_result_203;
        tmp_called_value_205 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_205 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6674;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6674;
        tmp_call_result_203 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_205, mod_consts[222]);

        if (tmp_call_result_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6674;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_call_result_204;
        tmp_called_value_206 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_206 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6677;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6677;
        tmp_call_result_204 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_206, mod_consts[223]);

        if (tmp_call_result_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6677;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_call_result_205;
        tmp_called_value_207 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_207 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6680;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6680;
        tmp_call_result_205 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_207, mod_consts[224]);

        if (tmp_call_result_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6680;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_value_208;
        PyObject *tmp_call_result_206;
        tmp_called_value_208 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_208 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_208 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6683;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6683;
        tmp_call_result_206 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_208, mod_consts[225]);

        if (tmp_call_result_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6683;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_value_209;
        PyObject *tmp_call_result_207;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_210;
        tmp_called_value_209 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_209 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6688;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[210];
        tmp_args_element_value_8 = mod_consts[211];
        tmp_called_value_210 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_210 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6689;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6689;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_210, mod_consts[226]);

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6689;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6688;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_207 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_209, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6688;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_value_211;
        PyObject *tmp_call_result_208;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_212;
        tmp_called_value_211 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_211 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6691;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[210];
        tmp_args_element_value_11 = mod_consts[211];
        tmp_called_value_212 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_212 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6692;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6692;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_212, mod_consts[227]);

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6692;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6691;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_208 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_211, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6691;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_call_result_209;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_214;
        tmp_called_value_213 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_213 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6694;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[210];
        tmp_args_element_value_14 = mod_consts[211];
        tmp_called_value_214 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_214 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_214 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6695;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6695;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_214, mod_consts[228]);

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6695;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6694;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_call_result_209 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_213, call_args);
        }

        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6694;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_value_215;
        PyObject *tmp_call_result_210;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_216;
        tmp_called_value_215 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_215 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6697;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[210];
        tmp_args_element_value_17 = mod_consts[211];
        tmp_called_value_216 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_216 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_216 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6698;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6698;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_216, mod_consts[229]);

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6698;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6697;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_210 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_215, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6697;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_value_217;
        PyObject *tmp_call_result_211;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_218;
        tmp_called_value_217 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_217 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6700;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[210];
        tmp_args_element_value_20 = mod_consts[211];
        tmp_called_value_218 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_218 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6701;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6701;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_218, mod_consts[230]);

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6701;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6700;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_211 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_217, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6700;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_value_219;
        PyObject *tmp_call_result_212;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_220;
        tmp_called_value_219 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_219 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6703;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[210];
        tmp_args_element_value_23 = mod_consts[211];
        tmp_called_value_220 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_220 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_220 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6704;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6704;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_220, mod_consts[231]);

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6704;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6703;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_212 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_219, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6703;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_called_value_221;
        PyObject *tmp_call_result_213;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_222;
        tmp_called_value_221 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_221 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6706;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[210];
        tmp_args_element_value_26 = mod_consts[211];
        tmp_called_value_222 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_222 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6707;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6707;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_222, mod_consts[232]);

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6707;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6706;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_call_result_213 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_221, call_args);
        }

        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6706;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_value_223;
        PyObject *tmp_call_result_214;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_224;
        tmp_called_value_223 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_223 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6709;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[210];
        tmp_args_element_value_29 = mod_consts[211];
        tmp_called_value_224 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_224 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6710;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6710;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_224, mod_consts[233]);

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6710;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6709;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_214 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_223, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6709;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_called_value_225;
        PyObject *tmp_call_result_215;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_226;
        tmp_called_value_225 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_225 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6712;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = mod_consts[210];
        tmp_args_element_value_32 = mod_consts[211];
        tmp_called_value_226 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_226 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_226 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6713;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6713;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_226, mod_consts[234]);

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6713;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6712;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_call_result_215 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_225, call_args);
        }

        Py_DECREF(tmp_args_element_value_33);
        if (tmp_call_result_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6712;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_called_value_227;
        PyObject *tmp_call_result_216;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_228;
        tmp_called_value_227 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_227 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6715;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[210];
        tmp_args_element_value_35 = mod_consts[211];
        tmp_called_value_228 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_228 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6716;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6716;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_228, mod_consts[235]);

        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6716;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6715;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_216 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_227, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6715;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_called_value_229;
        PyObject *tmp_call_result_217;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_230;
        tmp_called_value_229 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_229 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6718;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[210];
        tmp_args_element_value_38 = mod_consts[211];
        tmp_called_value_230 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_230 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6719;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6719;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_230, mod_consts[236]);

        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6719;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6718;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_call_result_217 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_229, call_args);
        }

        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6718;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_called_value_231;
        PyObject *tmp_call_result_218;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_232;
        tmp_called_value_231 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_231 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6721;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[210];
        tmp_args_element_value_41 = mod_consts[211];
        tmp_called_value_232 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_232 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_232 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6722;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6722;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_232, mod_consts[237]);

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6722;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6721;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_call_result_218 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_231, call_args);
        }

        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6721;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_value_233;
        PyObject *tmp_call_result_219;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_234;
        tmp_called_value_233 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_233 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6724;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = mod_consts[210];
        tmp_args_element_value_44 = mod_consts[211];
        tmp_called_value_234 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_234 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_234 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6725;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6725;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_234, mod_consts[238]);

        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6725;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6724;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45};
            tmp_call_result_219 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_233, call_args);
        }

        Py_DECREF(tmp_args_element_value_45);
        if (tmp_call_result_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6724;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_value_235;
        PyObject *tmp_call_result_220;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_236;
        tmp_called_value_235 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_235 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6727;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[210];
        tmp_args_element_value_47 = mod_consts[211];
        tmp_called_value_236 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_236 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6728;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6728;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_236, mod_consts[239]);

        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6728;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6727;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_call_result_220 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_235, call_args);
        }

        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6727;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_value_237;
        PyObject *tmp_call_result_221;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_238;
        tmp_called_value_237 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_237 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6730;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = mod_consts[210];
        tmp_args_element_value_50 = mod_consts[211];
        tmp_called_value_238 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_238 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_238 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6731;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6731;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_238, mod_consts[240]);

        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6731;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6730;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_call_result_221 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_237, call_args);
        }

        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6730;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_value_239;
        PyObject *tmp_call_result_222;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_240;
        tmp_called_value_239 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_239 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6733;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[210];
        tmp_args_element_value_53 = mod_consts[211];
        tmp_called_value_240 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_240 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6734;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6734;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_240, mod_consts[241]);

        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6734;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6733;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_call_result_222 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_239, call_args);
        }

        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6733;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_called_value_241;
        PyObject *tmp_call_result_223;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_242;
        tmp_called_value_241 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_241 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6736;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = mod_consts[210];
        tmp_args_element_value_56 = mod_consts[211];
        tmp_called_value_242 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_242 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6737;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6737;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_242, mod_consts[242]);

        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6737;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6736;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_call_result_223 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_241, call_args);
        }

        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6736;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_value_243;
        PyObject *tmp_call_result_224;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_244;
        tmp_called_value_243 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_243 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6739;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[210];
        tmp_args_element_value_59 = mod_consts[211];
        tmp_called_value_244 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_244 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_244 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6740;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6740;
        tmp_args_element_value_60 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_244, mod_consts[243]);

        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6740;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6739;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_call_result_224 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_243, call_args);
        }

        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_called_value_245;
        PyObject *tmp_call_result_225;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_called_value_246;
        tmp_called_value_245 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_245 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6742;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = mod_consts[210];
        tmp_args_element_value_62 = mod_consts[211];
        tmp_called_value_246 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_246 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_246 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6743;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6743;
        tmp_args_element_value_63 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_246, mod_consts[244]);

        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6743;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6742;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_call_result_225 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_245, call_args);
        }

        Py_DECREF(tmp_args_element_value_63);
        if (tmp_call_result_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6742;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_called_value_247;
        PyObject *tmp_call_result_226;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_value_248;
        tmp_called_value_247 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_247 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6745;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[210];
        tmp_args_element_value_65 = mod_consts[211];
        tmp_called_value_248 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_248 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_248 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6746;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6746;
        tmp_args_element_value_66 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_248, mod_consts[245]);

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6746;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6745;
        {
            PyObject *call_args[] = {tmp_args_element_value_64, tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_call_result_226 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_247, call_args);
        }

        Py_DECREF(tmp_args_element_value_66);
        if (tmp_call_result_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6745;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_called_value_249;
        PyObject *tmp_call_result_227;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_250;
        tmp_called_value_249 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_249 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6748;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = mod_consts[210];
        tmp_args_element_value_68 = mod_consts[211];
        tmp_called_value_250 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_250 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_250 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6749;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6749;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_250, mod_consts[246]);

        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6749;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6748;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_call_result_227 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_249, call_args);
        }

        Py_DECREF(tmp_args_element_value_69);
        if (tmp_call_result_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6748;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_called_value_251;
        PyObject *tmp_call_result_228;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_252;
        tmp_called_value_251 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_251 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6751;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[210];
        tmp_args_element_value_71 = mod_consts[211];
        tmp_called_value_252 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_252 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_252 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6752;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6752;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_252, mod_consts[247]);

        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6752;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6751;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_call_result_228 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_251, call_args);
        }

        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6751;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_value_253;
        PyObject *tmp_call_result_229;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_254;
        tmp_called_value_253 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_253 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6754;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = mod_consts[210];
        tmp_args_element_value_74 = mod_consts[211];
        tmp_called_value_254 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_254 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_254 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6755;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6755;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_254, mod_consts[248]);

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6755;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6754;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_call_result_229 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_253, call_args);
        }

        Py_DECREF(tmp_args_element_value_75);
        if (tmp_call_result_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6754;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_value_255;
        PyObject *tmp_call_result_230;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_256;
        tmp_called_value_255 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_255 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6757;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[210];
        tmp_args_element_value_77 = mod_consts[211];
        tmp_called_value_256 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_256 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_256 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6758;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6758;
        tmp_args_element_value_78 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_256, mod_consts[249]);

        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6758;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6757;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_call_result_230 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_255, call_args);
        }

        Py_DECREF(tmp_args_element_value_78);
        if (tmp_call_result_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6757;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_called_value_257;
        PyObject *tmp_call_result_231;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_258;
        tmp_called_value_257 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_257 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6760;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = mod_consts[210];
        tmp_args_element_value_80 = mod_consts[211];
        tmp_called_value_258 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_258 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_258 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6761;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6761;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_258, mod_consts[250]);

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6761;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6760;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
            tmp_call_result_231 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_257, call_args);
        }

        Py_DECREF(tmp_args_element_value_81);
        if (tmp_call_result_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6760;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_value_259;
        PyObject *tmp_call_result_232;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_260;
        tmp_called_value_259 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_259 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6763;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[210];
        tmp_args_element_value_83 = mod_consts[211];
        tmp_called_value_260 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_260 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_260 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6764;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6764;
        tmp_args_element_value_84 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_260, mod_consts[251]);

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6764;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6763;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_call_result_232 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_259, call_args);
        }

        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6763;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_value_261;
        PyObject *tmp_call_result_233;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_262;
        tmp_called_value_261 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_261 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6766;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[210];
        tmp_args_element_value_86 = mod_consts[211];
        tmp_called_value_262 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_262 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_262 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6767;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6767;
        tmp_args_element_value_87 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_262, mod_consts[252]);

        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6767;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6766;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_call_result_233 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_261, call_args);
        }

        Py_DECREF(tmp_args_element_value_87);
        if (tmp_call_result_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6766;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_value_263;
        PyObject *tmp_call_result_234;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_value_264;
        tmp_called_value_263 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_263 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_263 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6769;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = mod_consts[210];
        tmp_args_element_value_89 = mod_consts[211];
        tmp_called_value_264 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_264 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_264 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6770;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6770;
        tmp_args_element_value_90 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_264, mod_consts[253]);

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6770;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6769;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89, tmp_args_element_value_90};
            tmp_call_result_234 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_263, call_args);
        }

        Py_DECREF(tmp_args_element_value_90);
        if (tmp_call_result_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6769;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_value_265;
        PyObject *tmp_call_result_235;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_266;
        tmp_called_value_265 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_265 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_265 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6772;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = mod_consts[210];
        tmp_args_element_value_92 = mod_consts[211];
        tmp_called_value_266 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_266 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_266 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6773;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6773;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_266, mod_consts[254]);

        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6773;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6772;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_call_result_235 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_265, call_args);
        }

        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6772;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_value_267;
        PyObject *tmp_call_result_236;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_268;
        tmp_called_value_267 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_267 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_267 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6775;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = mod_consts[210];
        tmp_args_element_value_95 = mod_consts[211];
        tmp_called_value_268 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_268 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_268 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6776;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6776;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_268, mod_consts[255]);

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6776;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6775;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95, tmp_args_element_value_96};
            tmp_call_result_236 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_267, call_args);
        }

        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6775;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_value_269;
        PyObject *tmp_call_result_237;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_270;
        tmp_called_value_269 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_269 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_269 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6778;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = mod_consts[210];
        tmp_args_element_value_98 = mod_consts[211];
        tmp_called_value_270 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_270 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_270 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6779;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6779;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_270, mod_consts[256]);

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6779;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6778;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_call_result_237 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_269, call_args);
        }

        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6778;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }
    {
        PyObject *tmp_called_value_271;
        PyObject *tmp_call_result_238;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_272;
        tmp_called_value_271 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_271 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_271 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6781;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = mod_consts[210];
        tmp_args_element_value_101 = mod_consts[211];
        tmp_called_value_272 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_272 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_272 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6782;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6782;
        tmp_args_element_value_102 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_272, mod_consts[257]);

        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6782;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6781;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_call_result_238 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_271, call_args);
        }

        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6781;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_238);
    }
    {
        PyObject *tmp_called_value_273;
        PyObject *tmp_call_result_239;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_274;
        tmp_called_value_273 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_273 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_273 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6784;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = mod_consts[210];
        tmp_args_element_value_104 = mod_consts[211];
        tmp_called_value_274 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_274 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_274 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6785;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6785;
        tmp_args_element_value_105 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_274, mod_consts[258]);

        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6785;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6784;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_call_result_239 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_273, call_args);
        }

        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6784;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_239);
    }
    {
        PyObject *tmp_called_value_275;
        PyObject *tmp_call_result_240;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_276;
        tmp_called_value_275 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_275 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_275 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6787;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = mod_consts[210];
        tmp_args_element_value_107 = mod_consts[211];
        tmp_called_value_276 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_276 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_276 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6788;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6788;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_276, mod_consts[259]);

        if (tmp_args_element_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6788;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6787;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_call_result_240 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_275, call_args);
        }

        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6787;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_240);
    }
    {
        PyObject *tmp_called_value_277;
        PyObject *tmp_call_result_241;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_278;
        tmp_called_value_277 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_277 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_277 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6790;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_109 = mod_consts[210];
        tmp_args_element_value_110 = mod_consts[211];
        tmp_called_value_278 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_278 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_278 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6791;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6791;
        tmp_args_element_value_111 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_278, mod_consts[260]);

        if (tmp_args_element_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6791;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6790;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_call_result_241 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_277, call_args);
        }

        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6790;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_241);
    }
    {
        PyObject *tmp_called_value_279;
        PyObject *tmp_call_result_242;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_called_value_280;
        tmp_called_value_279 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_279 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_279 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6793;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = mod_consts[210];
        tmp_args_element_value_113 = mod_consts[211];
        tmp_called_value_280 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_280 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_280 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6794;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6794;
        tmp_args_element_value_114 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_280, mod_consts[261]);

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6794;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6793;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_call_result_242 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_279, call_args);
        }

        Py_DECREF(tmp_args_element_value_114);
        if (tmp_call_result_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6793;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_242);
    }
    {
        PyObject *tmp_called_value_281;
        PyObject *tmp_call_result_243;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_called_value_282;
        tmp_called_value_281 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_281 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_281 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6796;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = mod_consts[210];
        tmp_args_element_value_116 = mod_consts[211];
        tmp_called_value_282 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_282 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_282 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6797;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6797;
        tmp_args_element_value_117 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_282, mod_consts[262]);

        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6797;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6796;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_call_result_243 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_281, call_args);
        }

        Py_DECREF(tmp_args_element_value_117);
        if (tmp_call_result_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6796;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_243);
    }
    {
        PyObject *tmp_called_value_283;
        PyObject *tmp_call_result_244;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_called_value_284;
        tmp_called_value_283 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_283 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_283 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6799;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = mod_consts[210];
        tmp_args_element_value_119 = mod_consts[211];
        tmp_called_value_284 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_284 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_284 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6800;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6800;
        tmp_args_element_value_120 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_284, mod_consts[263]);

        if (tmp_args_element_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6800;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6799;
        {
            PyObject *call_args[] = {tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_call_result_244 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_283, call_args);
        }

        Py_DECREF(tmp_args_element_value_120);
        if (tmp_call_result_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6799;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_244);
    }
    {
        PyObject *tmp_called_value_285;
        PyObject *tmp_call_result_245;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_called_value_286;
        tmp_called_value_285 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_285 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_285 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6802;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = mod_consts[210];
        tmp_args_element_value_122 = mod_consts[211];
        tmp_called_value_286 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_286 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_286 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6803;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6803;
        tmp_args_element_value_123 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_286, mod_consts[264]);

        if (tmp_args_element_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6803;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6802;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123};
            tmp_call_result_245 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_285, call_args);
        }

        Py_DECREF(tmp_args_element_value_123);
        if (tmp_call_result_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6802;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_245);
    }
    {
        PyObject *tmp_called_value_287;
        PyObject *tmp_call_result_246;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_288;
        tmp_called_value_287 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_287 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_287 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6805;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = mod_consts[210];
        tmp_args_element_value_125 = mod_consts[211];
        tmp_called_value_288 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_288 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_288 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6806;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6806;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_288, mod_consts[265]);

        if (tmp_args_element_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6806;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6805;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_call_result_246 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_287, call_args);
        }

        Py_DECREF(tmp_args_element_value_126);
        if (tmp_call_result_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6805;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_246);
    }
    {
        PyObject *tmp_called_value_289;
        PyObject *tmp_call_result_247;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_called_value_290;
        tmp_called_value_289 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_289 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_289 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6808;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = mod_consts[210];
        tmp_args_element_value_128 = mod_consts[211];
        tmp_called_value_290 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_290 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_290 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6809;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6809;
        tmp_args_element_value_129 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_290, mod_consts[266]);

        if (tmp_args_element_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6809;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6808;
        {
            PyObject *call_args[] = {tmp_args_element_value_127, tmp_args_element_value_128, tmp_args_element_value_129};
            tmp_call_result_247 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_289, call_args);
        }

        Py_DECREF(tmp_args_element_value_129);
        if (tmp_call_result_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6808;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_247);
    }
    {
        PyObject *tmp_called_value_291;
        PyObject *tmp_call_result_248;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_292;
        tmp_called_value_291 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_291 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_291 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6811;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = mod_consts[210];
        tmp_args_element_value_131 = mod_consts[211];
        tmp_called_value_292 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_292 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_292 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6812;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6812;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_292, mod_consts[267]);

        if (tmp_args_element_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6812;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6811;
        {
            PyObject *call_args[] = {tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_call_result_248 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_291, call_args);
        }

        Py_DECREF(tmp_args_element_value_132);
        if (tmp_call_result_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6811;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_248);
    }
    {
        PyObject *tmp_called_value_293;
        PyObject *tmp_call_result_249;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_called_value_294;
        tmp_called_value_293 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_293 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_293 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6814;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = mod_consts[210];
        tmp_args_element_value_134 = mod_consts[211];
        tmp_called_value_294 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_294 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_294 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6815;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6815;
        tmp_args_element_value_135 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_294, mod_consts[268]);

        if (tmp_args_element_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6815;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6814;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135};
            tmp_call_result_249 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_293, call_args);
        }

        Py_DECREF(tmp_args_element_value_135);
        if (tmp_call_result_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6814;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_249);
    }
    {
        PyObject *tmp_called_value_295;
        PyObject *tmp_call_result_250;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_296;
        tmp_called_value_295 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_295 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_295 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6817;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = mod_consts[210];
        tmp_args_element_value_137 = mod_consts[211];
        tmp_called_value_296 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_296 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_296 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6818;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6818;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_296, mod_consts[269]);

        if (tmp_args_element_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6818;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6817;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_call_result_250 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_295, call_args);
        }

        Py_DECREF(tmp_args_element_value_138);
        if (tmp_call_result_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6817;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_250);
    }
    {
        PyObject *tmp_called_value_297;
        PyObject *tmp_call_result_251;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_called_value_298;
        tmp_called_value_297 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_297 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_297 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6820;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = mod_consts[210];
        tmp_args_element_value_140 = mod_consts[211];
        tmp_called_value_298 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_298 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_298 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6821;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6821;
        tmp_args_element_value_141 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_298, mod_consts[270]);

        if (tmp_args_element_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6821;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6820;
        {
            PyObject *call_args[] = {tmp_args_element_value_139, tmp_args_element_value_140, tmp_args_element_value_141};
            tmp_call_result_251 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_297, call_args);
        }

        Py_DECREF(tmp_args_element_value_141);
        if (tmp_call_result_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6820;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_251);
    }
    {
        PyObject *tmp_called_value_299;
        PyObject *tmp_call_result_252;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_called_value_300;
        tmp_called_value_299 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_299 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_299 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6823;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = mod_consts[210];
        tmp_args_element_value_143 = mod_consts[211];
        tmp_called_value_300 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_300 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_300 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6824;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6824;
        tmp_args_element_value_144 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_300, mod_consts[271]);

        if (tmp_args_element_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6824;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6823;
        {
            PyObject *call_args[] = {tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_call_result_252 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_299, call_args);
        }

        Py_DECREF(tmp_args_element_value_144);
        if (tmp_call_result_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6823;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_252);
    }
    {
        PyObject *tmp_called_value_301;
        PyObject *tmp_call_result_253;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_called_value_302;
        tmp_called_value_301 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_301 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_301 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6826;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = mod_consts[210];
        tmp_args_element_value_146 = mod_consts[211];
        tmp_called_value_302 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_302 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_302 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6827;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6827;
        tmp_args_element_value_147 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_302, mod_consts[272]);

        if (tmp_args_element_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6827;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6826;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_call_result_253 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_301, call_args);
        }

        Py_DECREF(tmp_args_element_value_147);
        if (tmp_call_result_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6826;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_253);
    }
    {
        PyObject *tmp_called_value_303;
        PyObject *tmp_call_result_254;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_called_value_304;
        tmp_called_value_303 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_303 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_303 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6829;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = mod_consts[210];
        tmp_args_element_value_149 = mod_consts[211];
        tmp_called_value_304 = module_var_accessor_numpy$_core$_add_newdocs_$$_refer_to_array_attribute(tstate);
        if (unlikely(tmp_called_value_304 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[209]);
        }

        if (tmp_called_value_304 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6830;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6830;
        tmp_args_element_value_150 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_304, mod_consts[273]);

        if (tmp_args_element_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6830;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6829;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_call_result_254 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_303, call_args);
        }

        Py_DECREF(tmp_args_element_value_150);
        if (tmp_call_result_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6829;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_254);
    }
    {
        PyObject *tmp_called_value_305;
        PyObject *tmp_call_result_255;
        tmp_called_value_305 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_305 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_305 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6832;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6832;
        tmp_call_result_255 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_305, mod_consts[274]);

        if (tmp_call_result_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6832;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_255);
    }
    {
        PyObject *tmp_called_value_306;
        PyObject *tmp_call_result_256;
        tmp_called_value_306 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_306 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_306 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6866;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6866;
        tmp_call_result_256 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_306, mod_consts[275]);

        if (tmp_call_result_256 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6866;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_256);
    }
    {
        PyObject *tmp_called_value_307;
        PyObject *tmp_call_result_257;
        tmp_called_value_307 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_307 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_307 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6872;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6872;
        tmp_call_result_257 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_307, mod_consts[276]);

        if (tmp_call_result_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6872;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_257);
    }
    {
        PyObject *tmp_called_value_308;
        PyObject *tmp_call_result_258;
        tmp_called_value_308 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_308 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_308 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6878;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6878;
        tmp_call_result_258 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_308, mod_consts[277]);

        if (tmp_call_result_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6878;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_258);
    }
    {
        PyObject *tmp_called_value_309;
        PyObject *tmp_call_result_259;
        tmp_called_value_309 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_309 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_309 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6884;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6884;
        tmp_call_result_259 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_309, mod_consts[278]);

        if (tmp_call_result_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6884;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_259);
    }
    {
        PyObject *tmp_called_value_310;
        PyObject *tmp_call_result_260;
        tmp_called_value_310 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_310 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_310 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6890;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6890;
        tmp_call_result_260 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_310, mod_consts[279]);

        if (tmp_call_result_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6890;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_260);
    }
    {
        PyObject *tmp_called_value_311;
        PyObject *tmp_call_result_261;
        tmp_called_value_311 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_311 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_311 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6898;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6898;
        tmp_call_result_261 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_311, mod_consts[280]);

        if (tmp_call_result_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6898;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_261);
    }
    {
        PyObject *tmp_called_value_312;
        PyObject *tmp_call_result_262;
        tmp_called_value_312 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_312 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_312 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6904;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6904;
        tmp_call_result_262 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_312, mod_consts[281]);

        if (tmp_call_result_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6904;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_262);
    }
    {
        PyObject *tmp_called_value_313;
        PyObject *tmp_call_result_263;
        tmp_called_value_313 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_313 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_313 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6911;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6911;
        tmp_call_result_263 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_313, mod_consts[282]);

        if (tmp_call_result_263 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6911;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_263);
    }
    {
        PyObject *tmp_called_value_314;
        PyObject *tmp_call_result_264;
        tmp_called_value_314 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_314 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_314 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6919;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6919;
        tmp_call_result_264 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_314, mod_consts[283]);

        if (tmp_call_result_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6919;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_264);
    }
    {
        PyObject *tmp_called_value_315;
        PyObject *tmp_call_result_265;
        tmp_called_value_315 = module_var_accessor_numpy$_core$_add_newdocs_$$_add_newdoc(tstate);
        if (unlikely(tmp_called_value_315 == NULL)) {
            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[11]);
        }

        if (tmp_called_value_315 == NULL) {
            assert(HAS_EXCEPTION_STATE(&exception_state));



            exception_lineno = 6925;

            goto frame_exception_exit_1;
        }
        frame_frame_numpy$_core$_add_newdocs->m_frame.f_lineno = 6925;
        tmp_call_result_265 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_315, mod_consts[284]);

        if (tmp_call_result_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 6925;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_265);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_add_newdocs, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_add_newdocs->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_add_newdocs, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_numpy$_core$_add_newdocs);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$_add_newdocs", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._add_newdocs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$_add_newdocs);
    return module_numpy$_core$_add_newdocs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_add_newdocs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$_add_newdocs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
