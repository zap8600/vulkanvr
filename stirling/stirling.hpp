class StirlingApplication {
    public:
        void run() {
            initEngine();
            initProg();
            mainLoop();
            destroy();
        }
    
    private:
        void initEngine();

        void handleInput();

        void destroy();
}
