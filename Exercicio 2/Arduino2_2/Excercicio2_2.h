#ifndef UUID2681088460240
#define UUID2681088460240

/**
  * RandomForestClassifier(base_estimator=deprecated, bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator=DecisionTreeClassifier(), estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=None, max_features=sqrt, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=5, n_jobs=None, num_outputs=4, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            float votes[4] = { 0 };
            uint8_t classIdx = 0;
            float classScore = 0;

            
                tree0(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree1(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree2(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree3(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree4(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            

            uint8_t maxClassIdx = 0;
            float maxVote = votes[0];

            for (uint8_t i = 1; i < 4; i++) {
                if (votes[i] > maxVote) {
                    maxClassIdx = i;
                    maxVote = votes[i];
                }
            }

            predictedValue = maxClassIdx;

                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            
            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            
        
            
                /**
                 * Random forest's tree #0
                 */
                void tree0(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[2] < 600.5) {
                            
                        if (x[0] < 547.0) {
                            
                        if (x[2] < 568.5) {
                            
                        if (x[0] < 493.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 535.0) {
                            
                        if (x[2] < 550.0) {
                            
                        if (x[2] < 538.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 478.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 543.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 497.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 518.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 562.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 526.5) {
                            
                        if (x[1] < 483.5) {
                            
                        if (x[1] < 479.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 574.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 482.5) {
                            
                        if (x[1] < 481.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 581.5) {
                            
                        if (x[1] < 506.5) {
                            
                        if (x[0] < 461.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 577.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 579.5) {
                            
                        if (x[0] < 521.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 511.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 584.5) {
                            
                        if (x[0] < 471.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 596.5) {
                            
                        if (x[1] < 519.0) {
                            
                        if (x[0] < 513.0) {
                            
                        if (x[1] < 512.5) {
                            
                        if (x[0] < 496.5) {
                            
                        if (x[0] < 486.0) {
                            
                        if (x[0] < 480.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 506.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 537.0) {
                            
                        if (x[0] < 529.5) {
                            
                        if (x[0] < 523.5) {
                            
                        if (x[0] < 517.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 503.5) {
                            
                        if (x[0] < 518.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 588.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[1] < 507.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 522.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 594.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 508.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 512.0) {
                            
                        if (x[2] < 593.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 530.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 533.0) {
                            
                        if (x[1] < 500.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 593.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 594.5) {
                            
                        if (x[0] < 539.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 540.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 525.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 526.0) {
                            
                        if (x[2] < 597.5) {
                            
                        if (x[1] < 498.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 599.5) {
                            
                        if (x[2] < 598.5) {
                            
                        if (x[1] < 519.0) {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[0] < 512.5) {
                            
                        if (x[0] < 508.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 512.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 508.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 511.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 505.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 519.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[0] < 523.0) {
                            
                        if (x[1] < 511.0) {
                            
                        if (x[1] < 494.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 517.0) {
                            
                        if (x[1] < 505.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[1] < 518.0) {
                            
                        if (x[0] < 514.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 513.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[0] < 520.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 523.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[1] < 522.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[1] < 508.0) {
                            
                        if (x[0] < 508.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 501.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 518.0) {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[0] < 522.0) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 257.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 523.0) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 524.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 610.5) {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[2] < 606.5) {
                            
                        if (x[0] < 504.0) {
                            
                        if (x[1] < 505.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[1] < 513.0) {
                            
                        if (x[1] < 509.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 512.0) {
                            
                        if (x[0] < 510.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 520.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 607.5) {
                            
                        if (x[0] < 481.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 497.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        if (x[0] < 514.0) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 499.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 527.5) {
                            
                        if (x[2] < 608.5) {
                            
                        if (x[1] < 517.0) {
                            
                        if (x[2] < 607.5) {
                            
                        if (x[2] < 606.5) {
                            
                        if (x[1] < 512.5) {
                            
                        if (x[1] < 500.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 543.0) {
                            
                        if (x[0] < 525.5) {
                            
                        if (x[1] < 509.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 511.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 517.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 529.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 517.5) {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 605.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 540.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        if (x[1] < 509.5) {
                            
                        if (x[1] < 507.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 529.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 521.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[2] < 617.5) {
                            
                        if (x[2] < 615.5) {
                            
                        if (x[2] < 613.5) {
                            
                        if (x[1] < 496.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 614.5) {
                            
                        if (x[0] < 545.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 498.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 616.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 481.5) {
                            
                        if (x[0] < 527.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 614.5) {
                            
                        if (x[1] < 517.0) {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[0] < 532.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 511.5) {
                            
                        if (x[2] < 612.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 536.0) {
                            
                        if (x[2] < 612.5) {
                            
                        if (x[2] < 611.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 492.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 528.0) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 488.5) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 626.5) {
                            
                        if (x[0] < 523.5) {
                            
                        if (x[2] < 618.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 518.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 515.0) {
                            
                        if (x[0] < 520.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 531.0) {
                            
                        *classIdx = 3;
                        *classScore = 297.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 532.5) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 507.5) {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 633.0) {
                            
                        if (x[1] < 528.0) {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 262.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 290.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                }
            
        
            
                /**
                 * Random forest's tree #1
                 */
                void tree1(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[0] < 516.5) {
                            
                        if (x[2] < 600.5) {
                            
                        if (x[1] < 474.5) {
                            
                        if (x[2] < 553.0) {
                            
                        if (x[2] < 551.0) {
                            
                        if (x[1] < 460.5) {
                            
                        if (x[2] < 547.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 458.5) {
                            
                        if (x[2] < 548.5) {
                            
                        if (x[0] < 460.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 465.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 557.5) {
                            
                        if (x[0] < 465.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 568.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 570.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[1] < 494.5) {
                            
                        if (x[1] < 481.5) {
                            
                        if (x[1] < 479.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 480.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 513.5) {
                            
                        if (x[1] < 487.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 576.0) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 500.5) {
                            
                        if (x[2] < 596.0) {
                            
                        if (x[0] < 456.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 599.5) {
                            
                        if (x[0] < 494.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[1] < 503.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 512.5) {
                            
                        if (x[0] < 507.5) {
                            
                        if (x[1] < 508.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 509.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 598.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 505.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 589.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 509.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 511.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 597.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 511.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 511.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 581.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 501.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 518.0) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 253.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 520.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 501.0) {
                            
                        if (x[1] < 487.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 499.5) {
                            
                        if (x[1] < 497.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 506.5) {
                            
                        if (x[1] < 508.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 605.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[1] < 515.0) {
                            
                        if (x[0] < 509.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[2] < 608.0) {
                            
                        if (x[0] < 509.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 511.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 582.5) {
                            
                        if (x[2] < 560.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 519.5) {
                            
                        if (x[2] < 562.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 576.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 579.5) {
                            
                        if (x[2] < 578.5) {
                            
                        if (x[1] < 484.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 559.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 556.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 548.5) {
                            
                        if (x[2] < 589.5) {
                            
                        if (x[1] < 519.0) {
                            
                        if (x[0] < 529.5) {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 505.5) {
                            
                        if (x[2] < 588.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 493.5) {
                            
                        if (x[0] < 535.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 530.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 531.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 631.5) {
                            
                        if (x[0] < 528.5) {
                            
                        if (x[1] < 526.5) {
                            
                        if (x[0] < 518.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 517.5) {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 497.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 614.0) {
                            
                        if (x[0] < 517.5) {
                            
                        if (x[1] < 503.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[1] < 489.0) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[2] < 605.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 616.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 508.0) {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[2] < 607.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 622.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 509.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 523.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 523.5) {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[2] < 607.0) {
                            
                        if (x[2] < 600.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        if (x[2] < 608.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[1] < 515.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 526.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 512.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 527.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 540.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 481.5) {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 533.5) {
                            
                        if (x[2] < 593.0) {
                            
                        if (x[1] < 522.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 533.5) {
                            
                        if (x[0] < 530.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 534.5) {
                            
                        if (x[0] < 529.5) {
                            
                        if (x[2] < 616.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 519.0) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 611.5) {
                            
                        if (x[2] < 608.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 536.5) {
                            
                        if (x[2] < 610.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 517.5) {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 538.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 520.0) {
                            
                        if (x[0] < 542.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 611.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 528.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 549.5) {
                            
                        if (x[2] < 620.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 258.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 557.0) {
                            
                        if (x[0] < 553.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 300.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                }
            
        
            
                /**
                 * Random forest's tree #2
                 */
                void tree2(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[2] < 571.5) {
                            
                        if (x[0] < 543.0) {
                            
                        if (x[2] < 540.0) {
                            
                        if (x[0] < 507.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 498.5) {
                            
                        if (x[2] < 558.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 559.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 562.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 530.5) {
                            
                        if (x[1] < 535.5) {
                            
                        if (x[0] < 506.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 568.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 534.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[0] < 513.5) {
                            
                        if (x[0] < 490.5) {
                            
                        if (x[2] < 601.0) {
                            
                        if (x[0] < 478.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 589.5) {
                            
                        if (x[2] < 575.5) {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 579.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 526.0) {
                            
                        if (x[0] < 480.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 499.5) {
                            
                        if (x[2] < 610.0) {
                            
                        if (x[2] < 584.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 589.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 503.5) {
                            
                        if (x[0] < 510.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 604.0) {
                            
                        if (x[2] < 585.0) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 607.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[0] < 508.5) {
                            
                        if (x[2] < 589.0) {
                            
                        if (x[1] < 527.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 509.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 594.5) {
                            
                        if (x[0] < 511.0) {
                            
                        if (x[2] < 583.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 509.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[0] < 512.5) {
                            
                        if (x[2] < 600.5) {
                            
                        if (x[0] < 511.0) {
                            
                        if (x[2] < 597.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 507.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 599.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 512.5) {
                            
                        if (x[2] < 605.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 511.5) {
                            
                        if (x[0] < 508.5) {
                            
                        if (x[2] < 631.0) {
                            
                        if (x[2] < 621.5) {
                            
                        if (x[1] < 507.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 506.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 514.5) {
                            
                        if (x[2] < 600.5) {
                            
                        if (x[1] < 493.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 581.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 515.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 517.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[1] < 524.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[2] < 600.5) {
                            
                        if (x[1] < 473.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 508.5) {
                            
                        if (x[2] < 603.0) {
                            
                        if (x[1] < 501.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[1] < 531.0) {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[2] < 600.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 627.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 591.5) {
                            
                        if (x[2] < 573.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 548.0) {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 520.0) {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[2] < 585.5) {
                            
                        if (x[2] < 582.5) {
                            
                        if (x[0] < 520.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 533.0) {
                            
                        if (x[2] < 586.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 526.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 536.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 489.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 498.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 629.5) {
                            
                        if (x[0] < 557.5) {
                            
                        if (x[0] < 517.5) {
                            
                        if (x[1] < 504.0) {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 605.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 506.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 605.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[2] < 603.0) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 517.5) {
                            
                        if (x[2] < 606.5) {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 267.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 532.5) {
                            
                        if (x[2] < 614.5) {
                            
                        if (x[0] < 531.5) {
                            
                        if (x[0] < 526.5) {
                            
                        if (x[0] < 525.5) {
                            
                        if (x[0] < 519.5) {
                            
                        if (x[1] < 517.0) {
                            
                        if (x[0] < 518.5) {
                            
                        if (x[2] < 593.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[2] < 598.5) {
                            
                        if (x[1] < 501.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[1] < 514.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 505.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 508.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 598.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 532.5) {
                            
                        if (x[0] < 523.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 511.0) {
                            
                        if (x[0] < 524.5) {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 508.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 524.5) {
                            
                        if (x[2] < 611.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 523.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 493.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 610.0) {
                            
                        if (x[0] < 527.5) {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 600.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 528.5) {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 519.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[1] < 509.5) {
                            
                        if (x[1] < 505.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 620.5) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 531.0) {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[1] < 515.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 621.0) {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 551.0) {
                            
                        if (x[2] < 596.0) {
                            
                        if (x[1] < 511.0) {
                            
                        if (x[2] < 594.5) {
                            
                        if (x[0] < 543.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 548.5) {
                            
                        if (x[2] < 605.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 610.5) {
                            
                        if (x[1] < 510.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 536.0) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 537.5) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 523.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        *classIdx = 0;
                        *classScore = 307.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 528.0) {
                            
                        *classIdx = 3;
                        *classScore = 250.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 282.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                }
            
        
            
                /**
                 * Random forest's tree #3
                 */
                void tree3(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[2] < 600.5) {
                            
                        if (x[0] < 547.0) {
                            
                        if (x[2] < 591.5) {
                            
                        if (x[0] < 499.0) {
                            
                        if (x[0] < 476.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 495.5) {
                            
                        if (x[2] < 580.0) {
                            
                        if (x[1] < 455.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 502.0) {
                            
                        if (x[2] < 562.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 526.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 568.0) {
                            
                        if (x[0] < 518.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 524.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 519.0) {
                            
                        if (x[2] < 576.5) {
                            
                        if (x[1] < 509.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 581.5) {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[2] < 580.5) {
                            
                        if (x[2] < 578.0) {
                            
                        if (x[0] < 511.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 489.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 513.0) {
                            
                        if (x[2] < 585.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[2] < 586.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 503.5) {
                            
                        if (x[0] < 525.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 495.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 588.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 541.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 598.5) {
                            
                        if (x[0] < 523.5) {
                            
                        if (x[2] < 597.5) {
                            
                        if (x[2] < 592.5) {
                            
                        if (x[1] < 502.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 517.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        if (x[2] < 593.5) {
                            
                        if (x[1] < 494.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 504.5) {
                            
                        if (x[2] < 596.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 483.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 497.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[0] < 511.0) {
                            
                        if (x[0] < 508.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[1] < 511.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 510.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 522.5) {
                            
                        if (x[0] < 520.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 529.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 535.0) {
                            
                        if (x[0] < 531.5) {
                            
                        if (x[0] < 530.5) {
                            
                        if (x[2] < 593.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 533.0) {
                            
                        if (x[1] < 507.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 540.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.0) {
                            
                        if (x[0] < 543.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 501.0) {
                            
                        if (x[0] < 485.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 599.5) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 512.5) {
                            
                        if (x[0] < 527.5) {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[1] < 511.5) {
                            
                        if (x[1] < 506.5) {
                            
                        if (x[1] < 505.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 518.0) {
                            
                        if (x[1] < 517.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[0] < 547.5) {
                            
                        if (x[1] < 509.5) {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[2] < 609.5) {
                            
                        if (x[0] < 498.5) {
                            
                        if (x[1] < 503.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 494.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 499.0) {
                            
                        if (x[2] < 602.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 605.0) {
                            
                        if (x[1] < 505.0) {
                            
                        if (x[0] < 506.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[1] < 501.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 507.5) {
                            
                        if (x[2] < 607.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 494.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 487.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[0] < 534.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 620.5) {
                            
                        if (x[1] < 491.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 608.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 609.5) {
                            
                        if (x[1] < 507.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 511.5) {
                            
                        if (x[2] < 615.5) {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[0] < 484.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[2] < 603.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 526.0) {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[2] < 608.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 619.5) {
                            
                        if (x[0] < 521.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 470.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 613.0) {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[0] < 517.5) {
                            
                        if (x[1] < 512.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 510.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[0] < 511.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 512.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 517.5) {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[0] < 513.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[0] < 514.5) {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 604.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 606.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 265.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 525.5) {
                            
                        if (x[0] < 517.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.0) {
                            
                        if (x[2] < 602.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 608.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 605.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 578.0) {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 621.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 525.5) {
                            
                        if (x[0] < 521.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 492.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 510.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 515.0) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 520.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[0] < 512.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 522.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 520.5) {
                            
                        if (x[1] < 518.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 525.0) {
                            
                        if (x[1] < 518.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 520.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        if (x[1] < 520.5) {
                            
                        if (x[0] < 536.5) {
                            
                        if (x[2] < 603.0) {
                            
                        if (x[0] < 531.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 535.5) {
                            
                        if (x[0] < 529.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 519.5) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 530.5) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 534.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 538.0) {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 498.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 533.5) {
                            
                        if (x[1] < 528.5) {
                            
                        if (x[1] < 526.5) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 521.0) {
                            
                        *classIdx = 3;
                        *classScore = 285.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 606.0) {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 296.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 260.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                }
            
        
            
                /**
                 * Random forest's tree #4
                 */
                void tree4(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[0] < 548.5) {
                            
                        if (x[2] < 600.5) {
                            
                        if (x[1] < 483.5) {
                            
                        if (x[0] < 472.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 567.5) {
                            
                        if (x[0] < 508.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 541.5) {
                            
                        if (x[0] < 525.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 478.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 582.5) {
                            
                        if (x[2] < 577.5) {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[2] < 576.5) {
                            
                        if (x[0] < 490.0) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 575.5) {
                            
                        if (x[1] < 502.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 509.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 532.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 580.5) {
                            
                        if (x[2] < 578.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        if (x[1] < 500.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 519.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 599.5) {
                            
                        if (x[0] < 496.5) {
                            
                        if (x[2] < 589.0) {
                            
                        if (x[0] < 480.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 587.0) {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 502.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 593.5) {
                            
                        if (x[1] < 531.0) {
                            
                        if (x[2] < 587.5) {
                            
                        if (x[1] < 519.5) {
                            
                        if (x[2] < 586.5) {
                            
                        if (x[2] < 584.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 585.5) {
                            
                        if (x[1] < 508.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 498.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 592.5) {
                            
                        if (x[1] < 503.5) {
                            
                        if (x[0] < 523.0) {
                            
                        if (x[2] < 589.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.0) {
                            
                        if (x[2] < 591.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 513.0) {
                            
                        if (x[2] < 590.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 528.5) {
                            
                        if (x[0] < 522.5) {
                            
                        if (x[1] < 504.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        if (x[2] < 598.5) {
                            
                        if (x[2] < 597.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 520.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 512.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 594.5) {
                            
                        if (x[0] < 531.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 502.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 533.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 532.5) {
                            
                        if (x[0] < 511.5) {
                            
                        if (x[1] < 515.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 513.5) {
                            
                        if (x[1] < 513.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 509.5) {
                            
                        if (x[0] < 515.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 503.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 523.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 511.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 518.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 527.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 514.5) {
                            
                        if (x[0] < 507.0) {
                            
                        if (x[0] < 494.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 507.5) {
                            
                        if (x[1] < 504.0) {
                            
                        if (x[0] < 499.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 614.5) {
                            
                        if (x[0] < 500.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 541.5) {
                            
                        if (x[2] < 617.5) {
                            
                        if (x[1] < 502.5) {
                            
                        if (x[1] < 496.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 524.0) {
                            
                        if (x[1] < 500.0) {
                            
                        if (x[2] < 602.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 605.5) {
                            
                        if (x[1] < 513.5) {
                            
                        if (x[1] < 512.5) {
                            
                        if (x[0] < 525.5) {
                            
                        if (x[2] < 604.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 511.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 509.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[0] < 519.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 505.0) {
                            
                        if (x[0] < 512.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 518.5) {
                            
                        if (x[0] < 514.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 527.0) {
                            
                        if (x[2] < 613.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 519.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 510.0) {
                            
                        if (x[0] < 531.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 536.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 537.5) {
                            
                        if (x[1] < 512.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 505.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 622.5) {
                            
                        if (x[0] < 521.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 512.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 510.5) {
                            
                        if (x[0] < 525.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[2] < 602.5) {
                            
                        if (x[0] < 515.5) {
                            
                        if (x[0] < 512.5) {
                            
                        if (x[1] < 520.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[0] < 514.5) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        if (x[2] < 601.5) {
                            
                        if (x[1] < 517.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 523.5) {
                            
                        if (x[0] < 517.0) {
                            
                        if (x[1] < 516.5) {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 2;
                        *classScore = 255.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 528.0) {
                            
                        if (x[0] < 530.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 521.5) {
                            
                        if (x[2] < 603.5) {
                            
                        if (x[0] < 529.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 505.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 517.5) {
                            
                        if (x[1] < 516.5) {
                            
                        if (x[2] < 604.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 515.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 605.5) {
                            
                        if (x[0] < 518.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 527.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 516.5) {
                            
                        if (x[2] < 607.5) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 521.5) {
                            
                        if (x[2] < 621.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 518.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 611.0) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[1] < 519.5) {
                            
                        if (x[0] < 530.5) {
                            
                        if (x[2] < 623.0) {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[1] < 520.5) {
                            
                        if (x[2] < 616.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[0] < 499.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 532.5) {
                            
                        if (x[0] < 518.5) {
                            
                        if (x[1] < 524.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 1;
                        *classScore = 275.0;
                        return;

                        }

                        }
                        else {
                            
                        if (x[0] < 534.5) {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }
                        else {
                            
                        if (x[0] < 536.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        if (x[2] < 607.0) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }

                        }
                        else {
                            
                        if (x[1] < 494.5) {
                            
                        if (x[2] < 599.5) {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }
                        else {
                            
                        *classIdx = 0;
                        *classScore = 281.0;
                        return;

                        }

                        }
                        else {
                            
                        *classIdx = 3;
                        *classScore = 295.0;
                        return;

                        }

                        }

                }
            
        

            
};



static RandomForestClassifier irisClassifier;


#endif
