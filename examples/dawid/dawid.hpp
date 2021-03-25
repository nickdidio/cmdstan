
// Code generated by stanc a7f4b745
#include <stan/model/model_header.hpp>
namespace dawid_model_namespace {

using stan::io::dump;
using stan::model::assign;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using namespace stan::math;


stan::math::profile_map profiles__;
static constexpr std::array<const char*, 28> locations_array__ = 
{" (found before start of program)",
 " (in 'examples/dawid/dawid.stan', line 14, column 2 to column 16)",
 " (in 'examples/dawid/dawid.stan', line 15, column 2 to column 28)",
 " (in 'examples/dawid/dawid.stan', line 18, column 2 to column 40)",
 " (in 'examples/dawid/dawid.stan', line 19, column 2 to column 43)",
 " (in 'examples/dawid/dawid.stan', line 20, column 9 to column 10)",
 " (in 'examples/dawid/dawid.stan', line 20, column 2 to column 41)",
 " (in 'examples/dawid/dawid.stan', line 22, column 4 to column 71)",
 " (in 'examples/dawid/dawid.stan', line 21, column 17 to line 23, column 3)",
 " (in 'examples/dawid/dawid.stan', line 21, column 2 to line 23, column 3)",
 " (in 'examples/dawid/dawid.stan', line 25, column 4 to column 71)",
 " (in 'examples/dawid/dawid.stan', line 24, column 17 to line 26, column 3)",
 " (in 'examples/dawid/dawid.stan', line 24, column 2 to line 26, column 3)",
 " (in 'examples/dawid/dawid.stan', line 29, column 4 to column 63)",
 " (in 'examples/dawid/dawid.stan', line 28, column 2 to line 29, column 63)",
 " (in 'examples/dawid/dawid.stan', line 31, column 2 to column 28)",
 " (in 'examples/dawid/dawid.stan', line 32, column 2 to column 36)",
 " (in 'examples/dawid/dawid.stan', line 33, column 2 to column 35)",
 " (in 'examples/dawid/dawid.stan', line 6, column 2 to column 19)",
 " (in 'examples/dawid/dawid.stan', line 7, column 2 to column 19)",
 " (in 'examples/dawid/dawid.stan', line 8, column 2 to column 19)",
 " (in 'examples/dawid/dawid.stan', line 9, column 31 to column 32)",
 " (in 'examples/dawid/dawid.stan', line 9, column 2 to column 34)",
 " (in 'examples/dawid/dawid.stan', line 10, column 31 to column 32)",
 " (in 'examples/dawid/dawid.stan', line 10, column 2 to column 34)",
 " (in 'examples/dawid/dawid.stan', line 11, column 30 to column 31)",
 " (in 'examples/dawid/dawid.stan', line 11, column 2 to column 33)",
 " (in 'examples/dawid/dawid.stan', line 15, column 25 to column 26)"};



class dawid_model final : public model_base_crtp<dawid_model> {

 private:
  int N;
  int I;
  int J;
  std::vector<int> ii;
  std::vector<int> jj;
  std::vector<int> y;
 
 public:
  ~dawid_model() { }
  
  inline std::string model_name() const final { return "dawid_model"; }

  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 a7f4b745", "stancflags = "};
  }
  
  
  dawid_model(stan::io::var_context& context__,
              unsigned int random_seed__ = 0,
              std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static constexpr const char* function__ = "dawid_model_namespace::dawid_model";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 18;
      context__.validate_dims("data initialization","N","int",
          context__.to_vec());
      N = std::numeric_limits<int>::min();
      
      current_statement__ = 18;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 18;
      current_statement__ = 18;
      check_greater_or_equal(function__, "N", N, 0);
      current_statement__ = 19;
      context__.validate_dims("data initialization","I","int",
          context__.to_vec());
      I = std::numeric_limits<int>::min();
      
      current_statement__ = 19;
      I = context__.vals_i("I")[(1 - 1)];
      current_statement__ = 19;
      current_statement__ = 19;
      check_greater_or_equal(function__, "I", I, 0);
      current_statement__ = 20;
      context__.validate_dims("data initialization","J","int",
          context__.to_vec());
      J = std::numeric_limits<int>::min();
      
      current_statement__ = 20;
      J = context__.vals_i("J")[(1 - 1)];
      current_statement__ = 20;
      current_statement__ = 20;
      check_greater_or_equal(function__, "J", J, 0);
      current_statement__ = 21;
      validate_non_negative_index("ii", "N", N);
      current_statement__ = 22;
      context__.validate_dims("data initialization","ii","int",
          context__.to_vec(N));
      ii = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 22;
      assign(ii, context__.vals_i("ii"), "assigning variable ii");
      current_statement__ = 22;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 22;
        current_statement__ = 22;
        check_greater_or_equal(function__, "ii[sym1__]", ii[(sym1__ - 1)], 1);
      }
      current_statement__ = 22;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 22;
        current_statement__ = 22;
        check_less_or_equal(function__, "ii[sym1__]", ii[(sym1__ - 1)], I);}
      current_statement__ = 23;
      validate_non_negative_index("jj", "N", N);
      current_statement__ = 24;
      context__.validate_dims("data initialization","jj","int",
          context__.to_vec(N));
      jj = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 24;
      assign(jj, context__.vals_i("jj"), "assigning variable jj");
      current_statement__ = 24;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 24;
        current_statement__ = 24;
        check_greater_or_equal(function__, "jj[sym1__]", jj[(sym1__ - 1)], 1);
      }
      current_statement__ = 24;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 24;
        current_statement__ = 24;
        check_less_or_equal(function__, "jj[sym1__]", jj[(sym1__ - 1)], J);}
      current_statement__ = 25;
      validate_non_negative_index("y", "N", N);
      current_statement__ = 26;
      context__.validate_dims("data initialization","y","int",
          context__.to_vec(N));
      y = std::vector<int>(N, std::numeric_limits<int>::min());
      
      current_statement__ = 26;
      assign(y, context__.vals_i("y"), "assigning variable y");
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_greater_or_equal(function__, "y[sym1__]", y[(sym1__ - 1)], 0);}
      current_statement__ = 26;
      for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
        current_statement__ = 26;
        current_statement__ = 26;
        check_less_or_equal(function__, "y[sym1__]", y[(sym1__ - 1)], 1);}
      current_statement__ = 27;
      validate_non_negative_index("logit_alpha", "J", J);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
      num_params_r__ += J * 2;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  
  template <bool propto__, bool jacobian__ , typename VecR, typename VecI, 
  stan::require_vector_like_t<VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "dawid_model_namespace::log_prob";
    (void) function__;  // suppress unused var warning
    
    try {
      local_scalar_t__ logit_pi;
      logit_pi = DUMMY_VAR__;
      
      current_statement__ = 1;
      logit_pi = in__.scalar();
      std::vector<Eigen::Matrix<local_scalar_t__, -1, 1>> logit_alpha;
      logit_alpha = std::vector<Eigen::Matrix<local_scalar_t__, -1, 1>>(J, Eigen::Matrix<local_scalar_t__, -1, 1>(2));
      stan::math::fill(logit_alpha, DUMMY_VAR__);
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        current_statement__ = 2;
        assign(logit_alpha, in__.vector(2),
          "assigning variable logit_alpha", index_uni(sym1__));}
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        current_statement__ = 2;
        if (jacobian__) {
          current_statement__ = 2;
          assign(logit_alpha,
            stan::math::ordered_constrain(logit_alpha[(sym1__ - 1)], lp__),
            "assigning variable logit_alpha", index_uni(sym1__));
        } else {
          current_statement__ = 2;
          assign(logit_alpha,
            stan::math::ordered_constrain(logit_alpha[(sym1__ - 1)]),
            "assigning variable logit_alpha", index_uni(sym1__));
        }}
      {
        local_scalar_t__ log_pi;
        log_pi = DUMMY_VAR__;
        
        current_statement__ = 3;
        log_pi = log_inv_logit(logit_pi);
        local_scalar_t__ log1m_pi;
        log1m_pi = DUMMY_VAR__;
        
        current_statement__ = 4;
        log1m_pi = log_inv_logit(-logit_pi);
        current_statement__ = 5;
        validate_non_negative_index("lp", "I", I);
        Eigen::Matrix<local_scalar_t__, -1, -1> lp;
        lp = Eigen::Matrix<local_scalar_t__, -1, -1>(I, 2);
        stan::math::fill(lp, DUMMY_VAR__);
        
        current_statement__ = 6;
        assign(lp, rep_matrix(0., I, 2), "assigning variable lp");
        current_statement__ = 9;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 7;
          assign(lp,
            (rvalue(lp, "lp",
               index_uni(rvalue(ii, "ii", index_uni(n))), index_uni(1)) +
              bernoulli_logit_lpmf<false>(rvalue(y, "y", index_uni(n)),
                rvalue(logit_alpha, "logit_alpha",
                  index_uni(rvalue(jj, "jj", index_uni(n))), index_uni(2)))),
            "assigning variable lp", index_uni(rvalue(ii, "ii", index_uni(n))),
                                       index_uni(1));}
        current_statement__ = 12;
        for (int n = 1; n <= N; ++n) {
          current_statement__ = 10;
          assign(lp,
            (rvalue(lp, "lp",
               index_uni(rvalue(ii, "ii", index_uni(n))), index_uni(2)) +
              bernoulli_logit_lpmf<false>(rvalue(y, "y", index_uni(n)),
                rvalue(logit_alpha, "logit_alpha",
                  index_uni(rvalue(jj, "jj", index_uni(n))), index_uni(1)))),
            "assigning variable lp", index_uni(rvalue(ii, "ii", index_uni(n))),
                                       index_uni(2));}
        current_statement__ = 14;
        for (int i = 1; i <= I; ++i) {
          current_statement__ = 13;
          lp_accum__.add(
            log_mix(inv_logit(logit_pi),
              rvalue(lp, "lp", index_uni(i), index_uni(1)),
              rvalue(lp, "lp", index_uni(i), index_uni(2))));}
        current_statement__ = 15;
        lp_accum__.add(normal_lpdf<propto__>(logit_pi, 0, 1.8));
        current_statement__ = 16;
        lp_accum__.add(
          normal_lpdf<propto__>(
            rvalue(logit_alpha, "logit_alpha", index_omni(), index_uni(1)),
            -1, 2));
        current_statement__ = 17;
        lp_accum__.add(
          normal_lpdf<propto__>(
            rvalue(logit_alpha, "logit_alpha", index_omni(), index_uni(2)),
            1, 2));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, 
  stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, 
  stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr> 
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    int current_statement__ = 0; 
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    static constexpr const char* function__ = "dawid_model_namespace::write_array";
    (void) function__;  // suppress unused var warning
    
    try {
      double logit_pi;
      logit_pi = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      logit_pi = in__.scalar();
      std::vector<Eigen::Matrix<double, -1, 1>> logit_alpha;
      logit_alpha = std::vector<Eigen::Matrix<double, -1, 1>>(J, Eigen::Matrix<double, -1, 1>(2));
      stan::math::fill(logit_alpha, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        current_statement__ = 2;
        assign(logit_alpha, in__.vector(2),
          "assigning variable logit_alpha", index_uni(sym1__));}
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        current_statement__ = 2;
        assign(logit_alpha,
          stan::math::ordered_constrain(logit_alpha[(sym1__ - 1)]),
          "assigning variable logit_alpha", index_uni(sym1__));}
      vars__.emplace_back(logit_pi);
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= J; ++sym2__) {
          vars__.emplace_back(logit_alpha[(sym2__ - 1)][(sym1__ - 1)]);}}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, 
  stan::require_std_vector_t<VecVar>* = nullptr, 
  stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr> 
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    int current_statement__ = 0; 
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double logit_pi;
      logit_pi = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      logit_pi = context__.vals_r("logit_pi")[(1 - 1)];
      std::vector<Eigen::Matrix<double, -1, 1>> logit_alpha;
      logit_alpha = std::vector<Eigen::Matrix<double, -1, 1>>(J, Eigen::Matrix<double, -1, 1>(2));
      stan::math::fill(logit_alpha, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> logit_alpha_flat__;
        current_statement__ = 2;
        assign(logit_alpha_flat__, context__.vals_r("logit_alpha"),
          "assigning variable logit_alpha_flat__");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
          current_statement__ = 2;
          for (int sym2__ = 1; sym2__ <= J; ++sym2__) {
            current_statement__ = 2;
            assign(logit_alpha, logit_alpha_flat__[(pos__ - 1)],
              "assigning variable logit_alpha", index_uni(sym2__),
                                                  index_uni(sym1__));
            current_statement__ = 2;
            pos__ = (pos__ + 1);}}
      }
      std::vector<Eigen::Matrix<double, -1, 1>> logit_alpha_free__;
      logit_alpha_free__ = std::vector<Eigen::Matrix<double, -1, 1>>(J, Eigen::Matrix<double, -1, 1>(2));
      stan::math::fill(logit_alpha_free__, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 2;
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        current_statement__ = 2;
        assign(logit_alpha_free__,
          stan::math::ordered_free(logit_alpha[(sym1__ - 1)]),
          "assigning variable logit_alpha_free__", index_uni(sym1__));}
      vars__.emplace_back(logit_pi);
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= 2; ++sym2__) {
          vars__.emplace_back(
            logit_alpha_free__[(sym1__ - 1)][(sym2__ - 1)]);}}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("logit_pi");
    names__.emplace_back("logit_alpha");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(J),
                                             static_cast<size_t>(2)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "logit_pi");
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= J; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "logit_alpha" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "logit_pi");
    for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
      {
        for (int sym2__ = 1; sym2__ <= J; ++sym2__) {
          {
            param_names__.emplace_back(std::string() + "logit_alpha" + '.' + std::to_string(sym2__) + '.' + std::to_string(sym1__));
          }}
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    std::stringstream s__;
    s__ << "[{\"name\":\"logit_pi\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"logit_alpha\",\"type\":{\"name\":\"array\",\"length\":" << J << ",\"element_type\":{\"name\":\"vector\",\"length\":" << 2 << "}},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    std::stringstream s__;
    s__ << "[{\"name\":\"logit_pi\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"logit_alpha\",\"type\":{\"name\":\"array\",\"length\":" << J << ",\"element_type\":{\"name\":\"vector\",\"length\":" << 2 << "}},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }

    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }

    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }

    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }


    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }

};
}
using stan_model = dawid_model_namespace::dawid_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

stan::math::profile_map& get_stan_profile_data() {
  return dawid_model_namespace::profiles__;
}

#endif


